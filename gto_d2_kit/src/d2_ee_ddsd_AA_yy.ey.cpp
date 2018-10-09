/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddsd_AA_yy.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_2202_11_22(const double ae,
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
    const double C31593 = yA - yB;
    const double C31601 = 0 * be;
    const double C31665 = 0 * ae;
    const double C31656 = 0 * be;
    const double C31654 = 0 * be;
    const double C31744 = 0 * be;
    const double C31819 = p + q;
    const double C31818 = p * q;
    const double C31827 = std::pow(ae, 2);
    const double C31825 = bs[3];
    const double C31824 = yP - yQ;
    const double C31833 = bs[4];
    const double C31831 = xP - xQ;
    const double C31841 = bs[5];
    const double C31850 = bs[6];
    const double C31861 = bs[7];
    const double C31883 = bs[2];
    const double C31965 = zP - zQ;
    const double C115 = bs[0];
    const double C32571 = xA - xB;
    const double C32608 = ce + de;
    const double C32607 = ce * de;
    const double C32606 = xC - xD;
    const double C32620 = yC - yD;
    const double C32634 = zC - zD;
    const double C32675 = zA - zB;
    const double C31602 = std::pow(C31595, 2);
    const double C31637 = 2 * C31595;
    const double C31604 = 2 * C31594;
    const double C31603 = C31594 * C31593;
    const double C32658 = std::pow(C31593, 2);
    const double C32717 = C31593 * be;
    const double C32715 = C31593 * ae;
    const double C31659 = C31593 * C31601;
    const double C31658 = -2 * C31601;
    const double C31657 = C31601 / C31595;
    const double C31676 = C31665 / C31595;
    const double C31669 = C31593 * C31656;
    const double C31668 = -2 * C31656;
    const double C31746 = C31744 / C31595;
    const double C31820 = 2 * C31818;
    const double C31828 = std::pow(C31824, 2);
    const double C31873 = C31824 * ae;
    const double C31843 = std::pow(C31831, 2);
    const double C32083 = std::pow(C31965, 2);
    const double C32574 = C32571 * be;
    const double C32573 = C32571 * ae;
    const double C32572 = std::pow(C32571, 2);
    const double C32883 = 2 * C32608;
    const double C32882 = std::pow(C32608, 2);
    const double C32609 = std::pow(C32606, 2);
    const double C32881 = C32606 * ce;
    const double C32621 = std::pow(C32620, 2);
    const double C32884 = C32620 * ce;
    const double C32635 = std::pow(C32634, 2);
    const double C32885 = C32634 * ce;
    const double C32676 = std::pow(C32675, 2);
    const double C32759 = C32675 * be;
    const double C32757 = C32675 * ae;
    const double C31606 = 2 * C31602;
    const double C31742 = 4 * C31602;
    const double C31655 = C31602 * C31637;
    const double C32586 = std::pow(C31637, -1);
    const double C32877 = std::pow(C31637, -2);
    const double C32659 = C32658 * C31594;
    const double C32886 = std::pow(C32715, 2);
    const double C31672 = C31659 / C31595;
    const double C31671 = ae * C31658;
    const double C31678 = C31669 / C31595;
    const double C31677 = ae * C31668;
    const double C31822 = C31820 / C31819;
    const double C129 =
        ((std::pow(yP - yQ, 2) * bs[2] * std::pow(C31820 / C31819, 2) -
          (bs[1] * C31820) / C31819) *
         std::pow(ae, 2)) /
        C31602;
    const double C116 = -(C31831 * bs[1] * C31820) / C31819;
    const double C238 = -(C31824 * bs[1] * C31820) / C31819;
    const double C343 = -(C31965 * bs[1] * C31820) / C31819;
    const double C31835 = C31828 * C31833;
    const double C31844 = C31828 * C31841;
    const double C31852 = C31828 * C31850;
    const double C31864 = C31828 * C31861;
    const double C31874 = C31841 * C31873;
    const double C31877 = C31833 * C31873;
    const double C31886 = C31825 * C31873;
    const double C31910 = C31850 * C31873;
    const double C31930 = C31861 * C31873;
    const double C122 = (-(bs[1] * C31873 * C31820) / C31819) / C31595;
    const double C32870 = std::pow(C32573, 2);
    const double C32575 = C32572 * C31594;
    const double C32917 = std::pow(C32883, -2);
    const double C32915 = std::pow(C32883, -1);
    const double C32610 = C32609 * C32607;
    const double C32622 = C32621 * C32607;
    const double C32636 = C32635 * C32607;
    const double C32677 = C32676 * C31594;
    const double C32888 = std::pow(C32757, 2);
    const double C31663 = C31601 / C31606;
    const double C31673 = C31656 / C31606;
    const double C31670 = C31654 / C31606;
    const double C31745 = C31595 * C31742;
    const double C32880 = 4 * C31655;
    const double C32660 = C32659 / C31595;
    const double C31680 = 0 - C31672;
    const double C31681 = C31671 / C31655;
    const double C31679 = C31593 * C31671;
    const double C31685 = 0 - C31678;
    const double C31686 = C31677 / C31655;
    const double C31826 = -C31822;
    const double C31834 = std::pow(C31822, 4);
    const double C31851 = std::pow(C31822, 6);
    const double C31882 = std::pow(C31822, 2);
    const double C130 = ((xP - xQ) *
                         (bs[2] * std::pow(C31822, 2) +
                          std::pow(yP - yQ, 2) * bs[3] * std::pow(-C31822, 3)) *
                         std::pow(ae, 2)) /
                        C31602;
    const double C32576 = C32575 / C31595;
    const double C32611 = C32610 / C32608;
    const double C32623 = C32622 / C32608;
    const double C32637 = C32636 / C32608;
    const double C32678 = C32677 / C31595;
    const double C32661 = -C32660;
    const double C31688 = C31680 * ae;
    const double C31687 = C31679 / C31602;
    const double C31695 = C31685 * ae;
    const double C31829 = std::pow(C31826, 3);
    const double C31842 = std::pow(C31826, 5);
    const double C31862 = std::pow(C31826, 7);
    const double C31836 = C31835 * C31834;
    const double C31840 = C31833 * C31834;
    const double C31878 = C31834 * C31877;
    const double C31853 = C31852 * C31851;
    const double C31860 = C31850 * C31851;
    const double C31914 = C31851 * C31910;
    const double C31885 = C31883 * C31882;
    const double C123 = (C31831 * C31882 * C31883 * C31873) / C31595;
    const double C248 = (C31824 * C31882 * C31883 * C31873) / C31595 -
                        (ae * bs[1] * C31820) / (C31819 * C31595);
    const double C353 = (C31965 * C31882 * C31883 * C31873) / C31595;
    const double C32577 = -C32576;
    const double C32612 = -C32611;
    const double C32624 = -C32623;
    const double C32638 = -C32637;
    const double C32679 = -C32678;
    const double C32662 = std::exp(C32661);
    const double C31696 = C31688 / C31595;
    const double C31702 = C31695 / C31595;
    const double C31832 = C31825 * C31829;
    const double C31887 = C31829 * C31886;
    const double C131 =
        ((bs[2] * std::pow(C31822, 2) + C31828 * C31825 * C31829) * C31827 +
         (C31825 * C31829 + C31828 * bs[4] * std::pow(C31822, 4)) * C31827 *
             std::pow(xP - xQ, 2)) /
        C31602;
    const double C258 =
        (2 * ae * C31882 * C31883 * C31873 +
         C31824 * (C31883 * C31882 + C31828 * C31825 * C31829) * C31827) /
        C31602;
    const double C31845 = C31844 * C31842;
    const double C31849 = C31841 * C31842;
    const double C31875 = C31842 * C31874;
    const double C31865 = C31864 * C31862;
    const double C31935 = C31862 * C31930;
    const double C31901 = C31840 * C31843;
    const double C31911 = C31831 * C31840;
    const double C32011 = C31840 * C31828;
    const double C32010 = C31824 * C31840;
    const double C32009 = C31840 * ae;
    const double C32551 = C31840 * C32083;
    const double C32554 = C31965 * C31840;
    const double C31893 = C31831 * C31878;
    const double C31994 = C31824 * C31878;
    const double C32005 = ae * C31878;
    const double C31933 = C31860 * C31843;
    const double C32188 = C31860 * C31828;
    const double C32187 = C31824 * C31860;
    const double C32186 = C31860 * ae;
    const double C32274 = C31831 * C31860;
    const double C31917 = C31914 * C31843;
    const double C31929 = C31831 * C31914;
    const double C32147 = C31824 * C31914;
    const double C32180 = ae * C31914;
    const double C32250 = C31914 * C32083;
    const double C32321 = C31965 * C31914;
    const double C31888 = C31885 * ae;
    const double C363 =
        ((zP - zQ) * (C31885 + C31828 * C31825 * C31829) * C31827) / C31602;
    const double C117 = C31885 * C31843 - (bs[1] * C31820) / C31819;
    const double C237 = C31824 * C31831 * C31885;
    const double C239 = C31885 * C31828 - (bs[1] * C31820) / C31819;
    const double C342 = C31965 * C31831 * C31885;
    const double C344 = C31885 * C32083 - (bs[1] * C31820) / C31819;
    const double C679 = C31965 * C31824 * C31885;
    const double C32578 = std::exp(C32577);
    const double C32613 = std::exp(C32612);
    const double C32625 = std::exp(C32624);
    const double C32639 = std::exp(C32638);
    const double C32680 = std::exp(C32679);
    const double C140 = C32662 * C130;
    const double C31605 = C31603 * C32662;
    const double C113 =
        -((C32662 - (C31593 * 2 * C31594 * C31593 * C32662) / C31595) * 2 *
          C31594) /
        C31595;
    const double C114 = -(2 * C31594 * C31593 * C32662) / C31595;
    const double C32716 = C32662 / C31637;
    const double C32718 = C32662 * C32715;
    const double C32725 = C32586 * C32662;
    const double C32893 = C32662 * C32717;
    const double C32922 = C32877 * C32662;
    const double C32920 = C32662 * C32886;
    const double C31703 = C31696 - C31673;
    const double C31708 = C31702 - C31670;
    const double C31837 = C31832 + C31836;
    const double C31894 = C31831 * C31832;
    const double C31996 = C31824 * C31832;
    const double C31995 = C31832 * ae;
    const double C118 =
        2 * C31831 * C31885 + C31831 * (C31885 + C31832 * C31843);
    const double C236 = C31824 * (C31885 + C31832 * C31843);
    const double C341 = C31965 * (C31885 + C31832 * C31843);
    const double C995 =
        2 * C31824 * C31885 + C31824 * (C31885 + C31832 * C31828);
    const double C1141 = C31965 * (C31885 + C31832 * C31828);
    const double C2071 =
        2 * C31965 * C31885 + C31965 * (C31885 + C31832 * C32083);
    const double C2072 =
        3 * (C31885 + C31832 * C32083) +
        C31965 * (2 * C31965 * C31832 + C31965 * (C31832 + C31840 * C32083));
    const double C31889 = C31824 * C31887;
    const double C124 = (C31882 * C31883 * C31873 + C31887 * C31843) / C31595;
    const double C125 =
        (2 * C31831 * C31887 + C31831 * (C31887 + C31878 * C31843)) / C31595;
    const double C246 = (C31824 * (C31887 + C31878 * C31843) +
                         (C31885 + C31832 * C31843) * ae) /
                        C31595;
    const double C247 =
        (C31824 * C31831 * C31887 + C31831 * C31885 * ae) / C31595;
    const double C351 = (C31965 * (C31887 + C31878 * C31843)) / C31595;
    const double C352 = (C31965 * C31831 * C31887) / C31595;
    const double C354 = (C31882 * C31883 * C31873 + C31887 * C32083) / C31595;
    const double C2077 =
        (2 * C31965 * C31887 + C31965 * (C31887 + C31878 * C32083)) / C31595;
    const double C143 = C32662 * C131;
    const double C31846 = C31840 + C31845;
    const double C31854 = C31849 + C31853;
    const double C31912 = C31849 * C31843;
    const double C31932 = C31831 * C31849;
    const double C32150 = C31849 * C31828;
    const double C32149 = C31824 * C31849;
    const double C32148 = C31849 * ae;
    const double C32555 = C31849 * C32083;
    const double C31900 = C31875 * C31843;
    const double C31909 = C31831 * C31875;
    const double C32008 = C31824 * C31875;
    const double C32143 = ae * C31875;
    const double C32228 = C31965 * C31875;
    const double C32460 = C31875 * C32083;
    const double C2078 =
        (3 * (C31887 + C31878 * C32083) +
         C31965 * (2 * C31965 * C31878 + C31965 * (C31878 + C31875 * C32083))) /
        C31595;
    const double C31866 = C31860 + C31865;
    const double C31938 = C31935 * C31843;
    const double C32185 = C31824 * C31935;
    const double C32273 = C31831 * C31935;
    const double C31903 = C31832 + C31901;
    const double C31915 = 2 * C31911;
    const double C31985 = C31824 * C31911;
    const double C31984 = C31911 * ae;
    const double C32015 = C31832 + C32011;
    const double C32014 = C32010 * ae;
    const double C32151 = 2 * C32010;
    const double C32552 = C31832 + C32551;
    const double C32556 = 2 * C32554;
    const double C31895 = C31824 * C31893;
    const double C355 = (C31831 * C31887 + C31893 * C32083) / C31595;
    const double C32012 = 2 * C32005;
    const double C31937 = C31849 + C31933;
    const double C32196 = C31849 + C32188;
    const double C32195 = C32187 * ae;
    const double C32282 = C32274 * C31828;
    const double C32281 = C31824 * C32274;
    const double C32280 = C32274 * ae;
    const double C31919 = C31875 + C31917;
    const double C31934 = 2 * C31929;
    const double C32031 = C31824 * C31929;
    const double C32269 = ae * C31929;
    const double C32307 = C31965 * C31929;
    const double C32468 = C31929 * C32083;
    const double C32193 = 2 * C32180;
    const double C32255 = C31875 + C32250;
    const double C32328 = ae * C32321;
    const double C2089 = C32662 * C363;
    const double C32580 = C32578 * C32573;
    const double C32579 = C32578 / C31637;
    const double C32588 = C32586 * C32578;
    const double C32873 = C32578 * C32574;
    const double C32913 = C32877 * C32578;
    const double C32907 = C32578 * C32870;
    const double C32916 = C32613 * C32881;
    const double C110 =
        (C32613 * std::pow(C32881, 2)) / C32882 + C32613 / C32883;
    const double C112 = C32917 * C32613;
    const double C464 = C32915 * C32613;
    const double C32918 = C32625 * C32884;
    const double C230 =
        (C32625 * std::pow(C32884, 2)) / C32882 + C32625 / C32883;
    const double C232 = C32917 * C32625;
    const double C462 = C32915 * C32625;
    const double C32919 = C32639 * C32885;
    const double C336 =
        (C32639 * std::pow(C32885, 2)) / C32882 + C32639 / C32883;
    const double C338 = C32917 * C32639;
    const double C572 = C32915 * C32639;
    const double C32758 = C32680 / C31637;
    const double C32760 = C32680 * C32757;
    const double C32767 = C32586 * C32680;
    const double C32900 = C32680 * C32759;
    const double C32925 = C32877 * C32680;
    const double C32923 = C32680 * C32888;
    const double C31607 = 2 * C31605;
    const double C31666 = C31605 / C31602;
    const double C31660 = -4 * C31605;
    const double C820 = ((0 * ae) / C31595 - C31605 / C31602) / (2 * C31595) +
                        (0 * ae) / C31595;
    const double C2736 = (0 * ae) / C31595 - C31605 / C31602;
    const double C141 = C113 * C117;
    const double C138 = C113 * C116;
    const double C475 = C113 * C237;
    const double C583 = C113 * C342;
    const double C2092 = C113 * C344;
    const double C2088 = C113 * C343;
    const double C2611 = C113 * C679;
    const double C139 = C114 * C123;
    const double C137 = C114 * C122;
    const double C269 = C114 * C248;
    const double C374 = C114 * C353;
    const double C5411 = (C32662 * std::pow(C32717, 2)) / C31602 + C32716;
    const double C32719 = C32718 * C32717;
    const double C32724 = C32718 / C31606;
    const double C32890 = C32718 / C31595;
    const double C32887 = C32586 * C32718;
    const double C32726 = C32725 * C32717;
    const double C32899 = C32725 / C31742;
    const double C32897 = C32715 * C32725;
    const double C32896 = 2 * C32725;
    const double C6320 = C32725 / C32880;
    const double C17965 = C32725 / C31637;
    const double C32927 = C32893 / C31595;
    const double C5412 = (-2 * C32586 * C32893) / C31595;
    const double C32941 = C32920 / C31602;
    const double C31712 = C31703 / C31637;
    const double C31710 = C31593 * C31703;
    const double C31709 = 2 * C31703;
    const double C31716 = C31708 + C31657;
    const double C31838 = C31837 * C31827;
    const double C31896 = C31894 * ae;
    const double C240 = C31831 * C31885 + C31894 * C31828;
    const double C345 = C31831 * C31885 + C31894 * C32083;
    const double C680 = C31965 * C31824 * C31894;
    const double C994 =
        2 * C31824 * C31894 + C31824 * (C31894 + C31911 * C31828);
    const double C1140 = C31965 * (C31894 + C31911 * C31828);
    const double C2070 =
        2 * C31965 * C31894 + C31965 * (C31894 + C31911 * C32083);
    const double C31998 = C31996 * ae;
    const double C1142 = C31824 * C31885 + C31996 * C32083;
    const double C2601 =
        2 * C31965 * C31996 + C31965 * (C31996 + C32010 * C32083);
    const double C31997 = C31994 + C31995;
    const double C144 = C113 * C118;
    const double C473 = C113 * C236;
    const double C581 = C113 * C341;
    const double C2102 = C113 * C2071;
    const double C12202 = C113 * C2072;
    const double C31890 = C31889 + C31888;
    const double C142 = C114 * C124;
    const double C145 = C114 * C125;
    const double C267 = C114 * C246;
    const double C268 = C114 * C247;
    const double C372 = C114 * C351;
    const double C373 = C114 * C352;
    const double C375 = C114 * C354;
    const double C2103 = C114 * C2077;
    const double C31847 = C31846 * C31827;
    const double C31855 = C31854 * C31827;
    const double C31916 = C31840 + C31912;
    const double C31936 = 2 * C31932;
    const double C32034 = C31932 * C31828;
    const double C32033 = C31824 * C31932;
    const double C32032 = C31932 * ae;
    const double C32562 = C31932 * C32083;
    const double C2073 =
        3 * (C31894 + C31911 * C32083) +
        C31965 * (2 * C31965 * C31911 + C31965 * (C31911 + C31932 * C32083));
    const double C32156 = C31840 + C32150;
    const double C32155 = C32149 * ae;
    const double C32189 = 2 * C32149;
    const double C32565 = C32149 * C32083;
    const double C7116 =
        3 * (C31996 + C32010 * C32083) +
        C31965 * (2 * C31965 * C32010 + C31965 * (C32010 + C32149 * C32083));
    const double C32154 = C32147 + C32148;
    const double C32557 = C31840 + C32555;
    const double C31902 = C31878 + C31900;
    const double C31913 = 2 * C31909;
    const double C31983 = C31824 * C31909;
    const double C32028 = ae * C31909;
    const double C2076 =
        (2 * C31965 * C31893 + C31965 * (C31893 + C31909 * C32083)) / C31595;
    const double C2079 =
        (3 * (C31893 + C31909 * C32083) +
         C31965 * (2 * C31965 * C31909 + C31965 * (C31909 + C31929 * C32083))) /
        C31595;
    const double C32013 = C32008 + C32009;
    const double C32153 = 2 * C32143;
    const double C32233 = ae * C32228;
    const double C32463 = 2 * C32228;
    const double C32461 = C31878 + C32460;
    const double C2105 = C114 * C2078;
    const double C31867 = C31866 * C31827;
    const double C31940 = C31914 + C31938;
    const double C32194 = C32185 + C32186;
    const double C32279 = C31824 * C32273;
    const double C31905 = C31903 * ae;
    const double C119 = 3 * (C31885 + C31832 * C31843) +
                        C31831 * (2 * C31894 + C31831 * C31903);
    const double C235 = C31824 * (2 * C31894 + C31831 * C31903);
    const double C241 = C31885 + C31832 * C31843 + C31903 * C31828;
    const double C340 = C31965 * (2 * C31894 + C31831 * C31903);
    const double C346 = C31885 + C31832 * C31843 + C31903 * C32083;
    const double C681 = C31965 * C31824 * C31903;
    const double C31987 = C31985 * ae;
    const double C1144 = C31824 * C31894 + C31985 * C32083;
    const double C32018 = C32015 * ae;
    const double C996 = 3 * (C31885 + C31832 * C31828) +
                        C31824 * (2 * C31996 + C31824 * C32015);
    const double C1143 = C31885 + C31832 * C31828 + C32015 * C32083;
    const double C1694 = C31965 * (2 * C31996 + C31824 * C32015);
    const double C12192 =
        4 * (2 * C31965 * C31832 + C31965 * C32552) +
        C31965 * (3 * C32552 + C31965 * (2 * C31965 * C31840 +
                                         C31965 * (C31840 + C31849 * C32083)));
    const double C376 = C114 * C355;
    const double C31939 = C31831 * C31937;
    const double C32057 = C31937 * C31828;
    const double C32056 = C31824 * C31937;
    const double C32055 = C31937 * ae;
    const double C32201 = C31824 * C32196;
    const double C32200 = C32196 * ae;
    const double C32286 = C31932 + C32282;
    const double C32285 = C32281 * ae;
    const double C31921 = C31831 * C31919;
    const double C31928 = 3 * C31919;
    const double C31971 = C31824 * C31919;
    const double C32051 = ae * C31919;
    const double C32277 = 2 * C32269;
    const double C32312 = ae * C32307;
    const double C32469 = C31909 + C32468;
    const double C32260 = ae * C32255;
    const double C32464 = C31965 * C32255;
    const double C32334 = 2 * C32328;
    const double C32581 = C32580 * C32574;
    const double C32587 = C32580 / C31606;
    const double C32874 = C32586 * C32580;
    const double C32872 = C32580 / C31595;
    const double C812 = (C32578 * std::pow(C32574, 2)) / C31602 + C32579;
    const double C32589 = C32588 * C32574;
    const double C32891 = C32588 / C31742;
    const double C32878 = C32573 * C32588;
    const double C32876 = 2 * C32588;
    const double C106 = C32588 / C32880;
    const double C17968 = C32588 / C31637;
    const double C32909 = C32873 / C31595;
    const double C813 = (-2 * C32586 * C32873) / C31595;
    const double C32936 = C32907 / C31602;
    const double C111 = (2 * C32915 * C32916) / C32608;
    const double C463 = C32916 / C32608;
    const double C231 = (2 * C32915 * C32918) / C32608;
    const double C461 = C32918 / C32608;
    const double C337 = (2 * C32915 * C32919) / C32608;
    const double C571 = C32919 / C32608;
    const double C10429 = (C32680 * std::pow(C32759, 2)) / C31602 + C32758;
    const double C32761 = C32760 * C32759;
    const double C32766 = C32760 / C31606;
    const double C32892 = C32760 / C31595;
    const double C32889 = C32586 * C32760;
    const double C32768 = C32767 * C32759;
    const double C32906 = C32767 / C31742;
    const double C32904 = C32757 * C32767;
    const double C32903 = 2 * C32767;
    const double C12064 = C32767 / C32880;
    const double C24543 = C32767 / C31637;
    const double C32932 = C32900 / C31595;
    const double C10430 = (-2 * C32586 * C32900) / C31595;
    const double C32943 = C32923 / C31602;
    const double C31608 = C31593 * C31607;
    const double C5422 =
        ((-C31607 / C31595) / C31637 - (0 * be) / C31595) / C31637 -
        (0 * be) / C31595;
    const double C15110 = (-C31607 / C31595) / C31637 - (0 * be) / C31595;
    const double C31684 = C31676 - C31666;
    const double C31674 = C31660 / C31595;
    const double C2750 = C2736 * C246;
    const double C2744 = C2736 * C247;
    const double C2739 = C2736 * C248;
    const double C154 = C138 + C139;
    const double C2108 = C2088 + C374;
    const double C5438 = C5411 * C131;
    const double C5429 = C5411 * C130;
    const double C7126 = C5411 * C363;
    const double C32720 = C32719 / C31602;
    const double C2748 = C32890 * C131;
    const double C2742 = C32890 * C130;
    const double C4636 = C32890 * C363;
    const double C32921 = 2 * C32887;
    const double C32727 = C32726 / C31595;
    const double C32930 = C32897 / C31606;
    const double C32945 = C32890 - C32927;
    const double C15101 = -C32927;
    const double C32954 = C32941 + C32716;
    const double C31718 = C31710 + 0;
    const double C31717 = C31687 + C31709;
    const double C31724 = C31716 / C31637;
    const double C132 =
        (2 * C31831 * C31838 +
         C31831 * (C31838 +
                   (C31833 * C31834 + C31828 * bs[5] * std::pow(C31826, 5)) *
                       C31827 * std::pow(C31831, 2))) /
        C31602;
    const double C257 = (2 * ae * C31831 * C31829 * C31825 * C31873 +
                         C31824 * C31831 * C31838) /
                        C31602;
    const double C362 = ((zP - zQ) * C31831 * C31838) / C31602;
    const double C364 = ((C31885 + C31828 * C31825 * C31829) * C31827 +
                         C31838 * std::pow(zP - zQ, 2)) /
                        C31602;
    const double C689 =
        (2 * ae * C31965 * C31887 + C31824 * C31965 * C31838) / C31602;
    const double C31897 = C31895 + C31896;
    const double C1826 = C113 * C345;
    const double C2285 = C113 * C680;
    const double C2099 = C113 * C2070;
    const double C2615 = C113 * C1142;
    const double C12484 = C113 * C2601;
    const double C32000 = ae * C31997;
    const double C31999 = C31824 * C31997;
    const double C32007 = 2 * C31997;
    const double C32080 = C31965 * C31997;
    const double C31891 = ae * C31890;
    const double C249 =
        (C31882 * C31883 * C31873 + C31824 * C31890 + C31824 * C31885 * ae) /
        C31595;
    const double C684 = (C31965 * C31890) / C31595;
    const double C1151 = (C31890 + C31997 * C32083) / C31595;
    const double C155 = C141 + C142;
    const double C156 = C144 + C145;
    const double C480 = C473 + C267;
    const double C481 = C475 + C268;
    const double C588 = C581 + C372;
    const double C589 = C583 + C373;
    const double C2109 = C2092 + C375;
    const double C2112 = C2102 + C2103;
    const double C31982 = C31831 * C31847;
    const double C32006 = C31824 * C31847;
    const double C32113 = C31965 * C31847;
    const double C133 =
        (3 * (C31838 + C31847 * C31843) +
         C31831 * (2 * C31831 * C31847 +
                   C31831 * (C31847 + (C31841 * C31842 +
                                       C31828 * bs[6] * std::pow(C31822, 6)) *
                                          C31827 * C31843))) /
        C31602;
    const double C256 = (2 * ae * (C31829 * C31825 * C31873 + C31878 * C31843) +
                         C31824 * (C31838 + C31847 * C31843)) /
                        C31602;
    const double C361 = ((zP - zQ) * (C31838 + C31847 * C31843)) / C31602;
    const double C365 =
        (C31831 * C31838 + C31831 * C31847 * std::pow(zP - zQ, 2)) / C31602;
    const double C690 =
        (2 * ae * C31965 * C31893 + C31824 * C31965 * C31831 * C31847) / C31602;
    const double C1160 = (2 * ae * (C31887 + C31878 * C32083) +
                          C31824 * (C31838 + C31847 * C32083)) /
                         C31602;
    const double C2083 =
        (2 * C31965 * C31838 + C31965 * (C31838 + C31847 * C32083)) / C31602;
    const double C31856 = C31855 * C31843;
    const double C31859 = C31831 * C31855;
    const double C32144 = C31824 * C31855;
    const double C32229 = C31965 * C31855;
    const double C32241 = C31855 * C32083;
    const double C31918 = C31831 * C31916;
    const double C31931 = 3 * C31916;
    const double C31973 = C31824 * C31916;
    const double C31972 = C31916 * ae;
    const double C993 =
        2 * C31824 * C31903 + C31824 * (C31903 + C31916 * C31828);
    const double C1139 = C31965 * (C31903 + C31916 * C31828);
    const double C2069 =
        2 * C31965 * C31903 + C31965 * (C31903 + C31916 * C32083);
    const double C2074 =
        3 * (C31903 + C31916 * C32083) +
        C31965 * (2 * C31965 * C31916 + C31965 * (C31916 + C31937 * C32083));
    const double C32038 = C31911 + C32034;
    const double C32037 = C32033 * ae;
    const double C32275 = 2 * C32033;
    const double C2602 =
        2 * C31965 * C31985 + C31965 * (C31985 + C32033 * C32083);
    const double C12297 =
        3 * (C31985 + C32033 * C32083) +
        C31965 * (2 * C31965 * C32033 + C31965 * (C32033 + C32281 * C32083));
    const double C32036 = C32031 + C32032;
    const double C32563 = C31911 + C32562;
    const double C12390 = C113 * C2073;
    const double C32160 = C31824 * C32156;
    const double C32159 = C32156 * ae;
    const double C32190 = 3 * C32156;
    const double C7115 =
        2 * C31965 * C32015 + C31965 * (C32015 + C32156 * C32083);
    const double C7117 =
        3 * (C32015 + C32156 * C32083) +
        C31965 * (2 * C31965 * C32156 + C31965 * (C32156 + C32196 * C32083));
    const double C32566 = C32010 + C32565;
    const double C12486 = C113 * C7116;
    const double C32161 = ae * C32154;
    const double C32158 = C31824 * C32154;
    const double C32184 = 2 * C32154;
    const double C32232 = C31965 * C32154;
    const double C32243 = C32154 * C32083;
    const double C32558 = C31965 * C32557;
    const double C31904 = C31824 * C31902;
    const double C126 = (3 * (C31887 + C31878 * C31843) +
                         C31831 * (2 * C31893 + C31831 * C31902)) /
                        C31595;
    const double C245 = (C31824 * (2 * C31893 + C31831 * C31902) +
                         (2 * C31894 + C31831 * C31903) * ae) /
                        C31595;
    const double C350 = (C31965 * (2 * C31893 + C31831 * C31902)) / C31595;
    const double C356 = (C31887 + C31878 * C31843 + C31902 * C32083) / C31595;
    const double C2075 =
        (2 * C31965 * C31902 + C31965 * (C31902 + C31919 * C32083)) / C31595;
    const double C31986 = C31983 + C31984;
    const double C32035 = 2 * C32028;
    const double C2100 = C114 * C2076;
    const double C2106 = C114 * C2079;
    const double C32019 = ae * C32013;
    const double C32017 = C31824 * C32013;
    const double C32085 = C32013 * C32083;
    const double C32115 = C31965 * C32013;
    const double C32146 = 2 * C32013;
    const double C32238 = 2 * C32233;
    const double C12194 =
        (4 * (2 * C31965 * C31878 + C31965 * C32461) +
         C31965 * (3 * C32461 + C31965 * (2 * C32228 + C31965 * C32255))) /
        C31595;
    const double C12208 = C12202 + C2105;
    const double C31868 = C31867 * C31843;
    const double C32181 = C31824 * C31867;
    const double C32251 = C31867 * C32083;
    const double C32270 = C31831 * C31867;
    const double C32322 = C31965 * C31867;
    const double C31942 = C31831 * C31940;
    const double C32054 = C31824 * C31940;
    const double C2080 =
        (3 * (C31902 + C31919 * C32083) +
         C31965 * (2 * C31965 * C31919 + C31965 * (C31919 + C31940 * C32083))) /
        C31595;
    const double C32202 = ae * C32194;
    const double C32199 = C31824 * C32194;
    const double C32254 = C32194 * C32083;
    const double C32326 = C31965 * C32194;
    const double C32284 = C32279 + C32280;
    const double C147 = C113 * C119;
    const double C471 = C113 * C235;
    const double C579 = C113 * C340;
    const double C1828 = C113 * C346;
    const double C2283 = C113 * C681;
    const double C2281 = C113 * C1144;
    const double C12204 = C113 * C12192;
    const double C31941 = C31936 + C31939;
    const double C32061 = C31916 + C32057;
    const double C32060 = C32056 * ae;
    const double C32205 = C32189 + C32201;
    const double C32290 = C31824 * C32286;
    const double C32289 = C32286 * ae;
    const double C31923 = C31913 + C31921;
    const double C32058 = 2 * C32051;
    const double C32317 = 2 * C32312;
    const double C12384 =
        (4 * (2 * C31965 * C31909 + C31965 * C32469) +
         C31965 *
             (3 * C32469 +
              C31965 * (2 * C32307 + C31965 * (C31929 + C32273 * C32083)))) /
        C31595;
    const double C32265 = 2 * C32260;
    const double C32465 = C32463 + C32464;
    const double C32582 = C32581 / C31602;
    const double C32910 = 2 * C32874;
    const double C32590 = C32589 / C31595;
    const double C32914 = C32878 / C31606;
    const double C32937 = C32872 - C32909;
    const double C15957 = -C32909;
    const double C32951 = C32936 + C32579;
    const double C32762 = C32761 / C31602;
    const double C32924 = 2 * C32889;
    const double C32769 = C32768 / C31595;
    const double C32935 = C32904 / C31606;
    const double C32948 = C32892 - C32932;
    const double C21055 = -C32932;
    const double C32955 = C32943 + C32758;
    const double C31609 = C31608 / C31595;
    const double C15124 = C15110 * C246;
    const double C15118 = C15110 * C247;
    const double C15113 = C15110 * C248;
    const double C31694 = C31593 * C31684;
    const double C31692 = 2 * C31684;
    const double C31743 = C31684 / C31637;
    const double C159 = C154 + C139;
    const double C2113 = C2108 + C374;
    const double C32721 = C32716 - C32720;
    const double C32942 = C32921 / C31595;
    const double C32728 = C32724 - C32727;
    const double C32956 = C32945 / C31637;
    const double C15122 = C15101 * C131;
    const double C15116 = C15101 * C130;
    const double C17169 = C15101 * C363;
    const double C836 = C32954 * C131;
    const double C827 = C32954 * C130;
    const double C11454 = C32954 * C363;
    const double C31725 = C31718 * be;
    const double C31723 = C31717 * be;
    const double C146 = C32662 * C132;
    const double C851 = C32954 * C132;
    const double C2754 = C32890 * C132;
    const double C5453 = C5411 * C132;
    const double C15128 = C15101 * C132;
    const double C476 = C32662 * C257;
    const double C1345 = C32954 * C257;
    const double C2745 = C32725 * C257;
    const double C3161 = C32890 * C257;
    const double C5432 = C5412 * C257;
    const double C5899 = C5411 * C257;
    const double C15119 = C32725 * C257;
    const double C15535 = C15101 * C257;
    const double C584 = C32662 * C362;
    const double C1527 = C32954 * C362;
    const double C3323 = C32890 * C362;
    const double C6078 = C5411 * C362;
    const double C15697 = C15101 * C362;
    const double C2093 = C32662 * C364;
    const double C4650 = C32890 * C364;
    const double C7132 = C5411 * C364;
    const double C11460 = C32954 * C364;
    const double C17173 = C15101 * C364;
    const double C2612 = C32662 * C689;
    const double C4638 = C32725 * C689;
    const double C5287 = C32890 * C689;
    const double C7128 = C5412 * C689;
    const double C7648 = C5411 * C689;
    const double C11967 = C32954 * C689;
    const double C17171 = C32725 * C689;
    const double C17831 = C15101 * C689;
    const double C31898 = ae * C31897;
    const double C250 =
        (C31831 * C31887 + C31824 * C31897 + C31824 * C31894 * ae) / C31595;
    const double C685 = (C31965 * C31897) / C31595;
    const double C1832 = C1826 + C376;
    const double C32001 = C31887 + C31999;
    const double C32081 = ae * C32080;
    const double C259 =
        ((C31885 + C31828 * C31825 * C31829) * C31827 + C31891 + C31891 +
         C31824 * (2 * ae * C31887 + C31824 * C31838)) /
        C31602;
    const double C270 = C114 * C249;
    const double C824 = C820 * C249;
    const double C2896 = C2736 * C249;
    const double C5426 = C5422 * C249;
    const double C15270 = C15110 * C249;
    const double C695 = C114 * C684;
    const double C3010 = C2736 * C684;
    const double C15384 = C15110 * C684;
    const double C1953 = C114 * C1151;
    const double C3013 = C2736 * C1151;
    const double C15387 = C15110 * C1151;
    const double C160 = C155 + C142;
    const double C161 = C156 + C145;
    const double C484 = C480 + C267;
    const double C485 = C481 + C268;
    const double C592 = C588 + C372;
    const double C593 = C589 + C373;
    const double C2114 = C2109 + C375;
    const double C2117 = C2112 + C2103;
    const double C32016 = C32012 + C32006;
    const double C2084 =
        (3 * (C31838 + C31847 * C32083) +
         C31965 * (2 * C32113 + C31965 * (C31847 + C31855 * C32083))) /
        C31602;
    const double C2607 =
        (2 * ae * (2 * C31965 * C31878 + C31965 * (C31878 + C31875 * C32083)) +
         C31824 * (2 * C32113 + C31965 * (C31847 + C31855 * C32083))) /
        C31602;
    const double C149 = C32662 * C133;
    const double C2763 = C32890 * C133;
    const double C15137 = C15101 * C133;
    const double C474 = C32662 * C256;
    const double C1339 = C32954 * C256;
    const double C2751 = C32725 * C256;
    const double C3157 = C32890 * C256;
    const double C5441 = C5412 * C256;
    const double C5893 = C5411 * C256;
    const double C15125 = C32725 * C256;
    const double C15531 = C15101 * C256;
    const double C582 = C32662 * C361;
    const double C1521 = C32954 * C361;
    const double C3319 = C32890 * C361;
    const double C6072 = C5411 * C361;
    const double C15693 = C15101 * C361;
    const double C1827 = C32662 * C365;
    const double C4646 = C32890 * C365;
    const double C7481 = C5411 * C365;
    const double C11803 = C32954 * C365;
    const double C16845 = C15101 * C365;
    const double C2286 = C32662 * C690;
    const double C3321 = C32725 * C690;
    const double C4882 = C32890 * C690;
    const double C6076 = C5412 * C690;
    const double C9162 = C5411 * C690;
    const double C15695 = C32725 * C690;
    const double C17422 = C15101 * C690;
    const double C22300 = C32954 * C690;
    const double C2616 = C32662 * C1160;
    const double C4648 = C32725 * C1160;
    const double C7134 = C5412 * C1160;
    const double C7654 = C5411 * C1160;
    const double C11973 = C32954 * C1160;
    const double C13562 = C32890 * C1160;
    const double C17175 = C32725 * C1160;
    const double C17835 = C15101 * C1160;
    const double C2104 = C32662 * C2083;
    const double C7145 = C5411 * C2083;
    const double C11473 = C32954 * C2083;
    const double C12948 = C32890 * C2083;
    const double C17188 = C15101 * C2083;
    const double C31857 = C31847 + C31856;
    const double C31863 = 2 * C31859;
    const double C32029 = C31824 * C31859;
    const double C32119 = C31965 * C31859;
    const double C1162 = (2 * ae * (C31893 + C31909 * C32083) +
                          C31824 * (C31982 + C31859 * C32083)) /
                         C31602;
    const double C2082 =
        (2 * C31965 * C31982 + C31965 * (C31982 + C31859 * C32083)) / C31602;
    const double C32157 = C32153 + C32144;
    const double C32234 = C31824 * C32229;
    const double C32367 = 2 * C32229;
    const double C32244 = C31847 + C32241;
    const double C31920 = C31915 + C31918;
    const double C31975 = C31973 * ae;
    const double C1146 = C31824 * C31903 + C31973 * C32083;
    const double C2603 =
        2 * C31965 * C31973 + C31965 * (C31973 + C32056 * C32083);
    const double C31974 = C31971 + C31972;
    const double C2096 = C113 * C2069;
    const double C32041 = C32038 * ae;
    const double C997 = 3 * (C31894 + C31911 * C31828) +
                        C31824 * (2 * C31985 + C31824 * C32038);
    const double C1145 = C31894 + C31911 * C31828 + C32038 * C32083;
    const double C1695 = C31965 * (2 * C31985 + C31824 * C32038);
    const double C7476 =
        2 * C31965 * C32038 + C31965 * (C32038 + C32286 * C32083);
    const double C14014 = C113 * C2602;
    const double C32042 = ae * C32036;
    const double C32040 = C31824 * C32036;
    const double C32090 = C32036 * C32083;
    const double C32121 = C31965 * C32036;
    const double C32272 = 2 * C32036;
    const double C12383 =
        4 * (2 * C31965 * C31911 + C31965 * C32563) +
        C31965 * (3 * C32563 + C31965 * (2 * C31965 * C31932 +
                                         C31965 * (C31932 + C32274 * C32083)));
    const double C32164 = C32151 + C32160;
    const double C12478 =
        4 * (2 * C31965 * C32010 + C31965 * C32566) +
        C31965 * (3 * C32566 + C31965 * (2 * C31965 * C32149 +
                                         C31965 * (C32149 + C32187 * C32083)));
    const double C32179 = C31855 + C32161;
    const double C32163 = C31875 + C32158;
    const double C32237 = ae * C32232;
    const double C32346 = 2 * C32232;
    const double C32246 = C32013 + C32243;
    const double C32559 = C32556 + C32558;
    const double C31906 = C31904 + C31905;
    const double C148 = C114 * C126;
    const double C266 = C114 * C245;
    const double C2756 = C2736 * C245;
    const double C15130 = C15110 * C245;
    const double C371 = C114 * C350;
    const double C377 = C114 * C356;
    const double C2097 = C114 * C2075;
    const double C31989 = ae * C31986;
    const double C31988 = C31824 * C31986;
    const double C32030 = 2 * C31986;
    const double C32077 = C31965 * C31986;
    const double C1153 = (C31897 + C31986 * C32083) / C31595;
    const double C2111 = C2099 + C2100;
    const double C12393 = C12390 + C2106;
    const double C32142 = C31847 + C32019;
    const double C32020 = C31878 + C32017;
    const double C32086 = C31997 + C32085;
    const double C32117 = ae * C32115;
    const double C32339 = 2 * C32115;
    const double C12205 = C114 * C12194;
    const double C12210 = C12208 + C2105;
    const double C31869 = C31855 + C31868;
    const double C32198 = C32193 + C32181;
    const double C32256 = C31855 + C32251;
    const double C32278 = C31824 * C32270;
    const double C32308 = C31965 * C32270;
    const double C32353 = C32270 * C32083;
    const double C32329 = C31824 * C32322;
    const double C31944 = C31934 + C31942;
    const double C32059 = C32054 + C32055;
    const double C2107 = C114 * C2080;
    const double C32204 = C31914 + C32199;
    const double C32259 = C32154 + C32254;
    const double C32333 = ae * C32326;
    const double C32291 = ae * C32284;
    const double C32288 = C31824 * C32284;
    const double C32311 = C31965 * C32284;
    const double C32355 = C32284 * C32083;
    const double C31943 = C31831 * C31941;
    const double C32101 = C31824 * C31941;
    const double C32100 = C31941 * ae;
    const double C32064 = C32061 * ae;
    const double C998 = 3 * (C31903 + C31916 * C31828) +
                        C31824 * (2 * C31973 + C31824 * C32061);
    const double C1147 = C31903 + C31916 * C31828 + C32061 * C32083;
    const double C1696 = C31965 * (2 * C31973 + C31824 * C32061);
    const double C32209 = C31824 * C32205;
    const double C32208 = C32205 * ae;
    const double C32294 = C32275 + C32290;
    const double C31924 = C31824 * C31923;
    const double C127 = (4 * (2 * C31893 + C31831 * C31902) +
                         C31831 * (3 * C31902 + C31831 * C31923)) /
                        C31595;
    const double C349 = (C31965 * (3 * C31902 + C31831 * C31923)) / C31595;
    const double C357 =
        (2 * C31893 + C31831 * C31902 + C31923 * C32083) / C31595;
    const double C12392 = C114 * C12384;
    const double C12195 =
        (5 * (3 * C32461 + C31965 * C32465) +
         C31965 * (4 * C32465 +
                   C31965 * (3 * C32255 +
                             C31965 * (2 * C32321 +
                                       C31965 * (C31914 + C31935 * C32083))))) /
        C31595;
    const double C32583 = C32579 - C32582;
    const double C32938 = C32910 / C31595;
    const double C32591 = C32587 - C32590;
    const double C32952 = C32937 / C31637;
    const double C32763 = C32758 - C32762;
    const double C32944 = C32924 / C31595;
    const double C32770 = C32766 - C32769;
    const double C32958 = C32948 / C31637;
    const double C31610 = C32662 - C31609;
    const double C31701 = C31694 + C32725;
    const double C31747 = C31743 - C31746;
    const double C164 = C159 + C140;
    const double C2118 = C2113 + C2089;
    const double C18005 = C32721 * C132;
    const double C17990 = C32721 * C131;
    const double C17981 = C32721 * C130;
    const double C18451 = C32721 * C257;
    const double C18445 = C32721 * C256;
    const double C18630 = C32721 * C362;
    const double C18624 = C32721 * C361;
    const double C20302 = C32721 * C364;
    const double C20296 = C32721 * C365;
    const double C20286 = C32721 * C363;
    const double C20535 = C32721 * C690;
    const double C20938 = C32721 * C689;
    const double C31120 = C32721 * C2083;
    const double C31574 = C32721 * C1160;
    const double C32894 = C32721 * C32715;
    const double C32929 = C32896 + C32721;
    const double C839 = C32942 * C256;
    const double C830 = C32942 * C257;
    const double C1525 = C32942 * C690;
    const double C11462 = C32942 * C1160;
    const double C11456 = C32942 * C689;
    const double C17993 = C32728 * C256;
    const double C17984 = C32728 * C257;
    const double C18628 = C32728 * C690;
    const double C20300 = C32728 * C1160;
    const double C20288 = C32728 * C689;
    const double C32898 = C32728 / C31637;
    const double C32895 = C32728 * C32715;
    const double C7777 = C32956 - (C32721 * C32717) / C31595;
    const double C31729 = C31725 / C31595;
    const double C31728 = C31723 / C31595;
    const double C260 =
        (C31831 * C31838 + C31898 + C31898 +
         C31824 * (2 * ae * C31893 + C31824 * C31831 * C31847)) /
        C31602;
    const double C271 = C114 * C250;
    const double C832 = C820 * C250;
    const double C2894 = C2736 * C250;
    const double C5434 = C5422 * C250;
    const double C15268 = C15110 * C250;
    const double C696 = C114 * C685;
    const double C3008 = C2736 * C685;
    const double C15382 = C15110 * C685;
    const double C1835 = C1832 + C376;
    const double C32002 = C32001 + C31998;
    const double C1159 =
        (C31965 * C31838 + C32081 + C32081 +
         C31824 * (2 * ae * C31965 * C31878 + C31824 * C31965 * C31847)) /
        C31602;
    const double C2622 = C2611 + C695;
    const double C2623 = C2615 + C1953;
    const double C165 = C160 + C143;
    const double C166 = C161 + C146;
    const double C489 = C485 + C476;
    const double C597 = C593 + C584;
    const double C2119 = C2114 + C2093;
    const double C12203 = C32662 * C2084;
    const double C14592 = C32890 * C2084;
    const double C28326 = C15101 * C2084;
    const double C7142 = C5412 * C2607;
    const double C11470 = C32942 * C2607;
    const double C12485 = C32662 * C2607;
    const double C12946 = C32725 * C2607;
    const double C14993 = C32890 * C2607;
    const double C17185 = C32725 * C2607;
    const double C28727 = C15101 * C2607;
    const double C31118 = C32728 * C2607;
    const double C488 = C484 + C474;
    const double C596 = C592 + C582;
    const double C2122 = C2117 + C2104;
    const double C134 =
        (4 * (2 * C31831 * C31847 + C31831 * C31857) +
         C31831 * (3 * C31857 +
                   C31831 * (2 * C31831 * C31855 +
                             C31831 * (C31855 +
                                       (C31850 * C31851 +
                                        C31828 * bs[7] * std::pow(C31826, 7)) *
                                           C31827 * C31843)))) /
        C31602;
    const double C255 =
        (2 * ae * (2 * C31831 * C31878 + C31831 * (C31878 + C31875 * C31843)) +
         C31824 * (2 * C31831 * C31847 + C31831 * C31857)) /
        C31602;
    const double C360 =
        ((zP - zQ) * (2 * C31831 * C31847 + C31831 * C31857)) / C31602;
    const double C366 =
        (C31838 + C31847 * C31843 + C31857 * std::pow(zP - zQ, 2)) / C31602;
    const double C691 =
        (2 * ae * C31965 * C31902 + C31824 * C31965 * C31857) / C31602;
    const double C32039 = C32035 + C32029;
    const double C2085 =
        (3 * (C31982 + C31859 * C32083) +
         C31965 * (2 * C32119 + C31965 * (C31859 + C31831 * C31867 * C32083))) /
        C31602;
    const double C2608 =
        (2 * ae * (2 * C31965 * C31909 + C31965 * (C31909 + C31929 * C32083)) +
         C31824 * (2 * C32119 + C31965 * (C31859 + C31831 * C31867 * C32083))) /
        C31602;
    const double C2282 = C32662 * C1162;
    const double C4644 = C32725 * C1162;
    const double C7483 = C5412 * C1162;
    const double C11805 = C32942 * C1162;
    const double C13165 = C32890 * C1162;
    const double C16847 = C32725 * C1162;
    const double C17418 = C15101 * C1162;
    const double C20294 = C32728 * C1162;
    const double C2101 = C32662 * C2082;
    const double C12944 = C32890 * C2082;
    const double C17182 = C15101 * C2082;
    const double C32162 = C31824 * C32157;
    const double C32178 = 2 * C32157;
    const double C32239 = C32238 + C32234;
    const double C31922 = C31920 * ae;
    const double C244 = (C31824 * (3 * C31902 + C31831 * C31923) +
                         (3 * C31903 + C31831 * C31920) * ae) /
                        C31595;
    const double C120 = 4 * (2 * C31894 + C31831 * C31903) +
                        C31831 * (3 * C31903 + C31831 * C31920);
    const double C234 = C31824 * (3 * C31903 + C31831 * C31920);
    const double C242 = 2 * C31894 + C31831 * C31903 + C31920 * C31828;
    const double C339 = C31965 * (3 * C31903 + C31831 * C31920);
    const double C347 = 2 * C31894 + C31831 * C31903 + C31920 * C32083;
    const double C682 = C31965 * C31824 * C31920;
    const double C1330 =
        2 * C31824 * C31920 + C31824 * (C31920 + C31941 * C31828);
    const double C1512 = C31965 * (C31920 + C31941 * C31828);
    const double C2445 =
        2 * C31965 * C31920 + C31965 * (C31920 + C31941 * C32083);
    const double C2279 = C113 * C1146;
    const double C31977 = ae * C31974;
    const double C31976 = C31824 * C31974;
    const double C32053 = 2 * C31974;
    const double C32074 = C31965 * C31974;
    const double C32268 = C31859 + C32042;
    const double C32043 = C31909 + C32040;
    const double C32091 = C31986 + C32090;
    const double C32123 = ae * C32121;
    const double C32362 = 2 * C32121;
    const double C32167 = C32164 * ae;
    const double C6409 = 4 * (2 * C31996 + C31824 * C32015) +
                         C31824 * (3 * C32015 + C31824 * C32164);
    const double C6487 = C31965 * (3 * C32015 + C31824 * C32164);
    const double C6488 = 2 * C31996 + C31824 * C32015 + C32164 * C32083;
    const double C7643 =
        2 * C31965 * C32164 + C31965 * (C32164 + C32205 * C32083);
    const double C32192 = C32179 + C32161;
    const double C32166 = C32163 + C32155;
    const double C32320 = C32229 + C32237;
    const double C32248 = ae * C32246;
    const double C32340 = C31965 * C32246;
    const double C32345 = 3 * C32246;
    const double C12193 =
        5 * (3 * C32552 + C31965 * C32559) +
        C31965 * (4 * C32559 +
                  C31965 * (3 * C32557 +
                            C31965 * (2 * C31965 * C31849 +
                                      C31965 * (C31849 + C31860 * C32083))));
    const double C31907 = ae * C31906;
    const double C251 =
        (C31887 + C31878 * C31843 + C31824 * C31906 + C31824 * C31903 * ae) /
        C31595;
    const double C686 = (C31965 * C31906) / C31595;
    const double C1155 = (C31906 + C31974 * C32083) / C31595;
    const double C157 = C147 + C148;
    const double C479 = C471 + C266;
    const double C587 = C579 + C371;
    const double C1833 = C1828 + C377;
    const double C2110 = C2096 + C2097;
    const double C31990 = C31893 + C31988;
    const double C32078 = ae * C32077;
    const double C1952 = C114 * C1153;
    const double C3015 = C2736 * C1153;
    const double C15389 = C15110 * C1153;
    const double C2116 = C2111 + C2100;
    const double C12394 = C12393 + C2106;
    const double C32152 = C32142 + C32019;
    const double C32021 = C32020 + C32014;
    const double C32087 = ae * C32086;
    const double C2604 = (2 * C32080 + C31965 * C32086) / C31595;
    const double C12209 = C12204 + C12205;
    const double C31870 = C31831 * C31869;
    const double C32052 = C31824 * C31869;
    const double C32125 = C31965 * C31869;
    const double C1164 = (2 * ae * (C31902 + C31919 * C32083) +
                          C31824 * (C31857 + C31869 * C32083)) /
                         C31602;
    const double C2081 =
        (2 * C31965 * C31857 + C31965 * (C31857 + C31869 * C32083)) / C31602;
    const double C32203 = C31824 * C32198;
    const double C32261 = C31824 * C32256;
    const double C32368 = C31965 * C32256;
    const double C7122 =
        (2 * ae *
             (3 * (C31878 + C31875 * C32083) +
              C31965 * (2 * C32228 + C31965 * C32255)) +
         C31824 * (3 * C32244 + C31965 * (2 * C32229 + C31965 * C32256))) /
        C31602;
    const double C32283 = C32277 + C32278;
    const double C32313 = C31824 * C32308;
    const double C32356 = C31859 + C32353;
    const double C32335 = C32334 + C32329;
    const double C31946 = C31831 * C31944;
    const double C32099 = C31824 * C31944;
    const double C2446 =
        (2 * C31965 * C31923 + C31965 * (C31923 + C31944 * C32083)) / C31595;
    const double C32065 = ae * C32059;
    const double C32063 = C31824 * C32059;
    const double C32095 = C32059 * C32083;
    const double C32127 = C31965 * C32059;
    const double C32207 = C32204 + C32195;
    const double C32264 = ae * C32259;
    const double C32347 = C31965 * C32259;
    const double C32293 = C31929 + C32288;
    const double C32316 = ae * C32311;
    const double C32358 = C32036 + C32355;
    const double C31945 = C31931 + C31943;
    const double C32103 = C32101 * ae;
    const double C2275 = C31824 * C31920 + C32101 * C32083;
    const double C32212 = C32190 + C32209;
    const double C32296 = C32294 * ae;
    const double C6588 = 4 * (2 * C31985 + C31824 * C32038) +
                         C31824 * (3 * C32038 + C31824 * C32294);
    const double C6678 = C31965 * (3 * C32038 + C31824 * C32294);
    const double C7324 = 2 * C31985 + C31824 * C32038 + C32294 * C32083;
    const double C151 = C114 * C127;
    const double C370 = C114 * C349;
    const double C378 = C114 * C357;
    const double C12207 = C114 * C12195;
    const double C32871 = C32583 * C32573;
    const double C32912 = C32876 + C32583;
    const double C32879 = C32591 / C31637;
    const double C32875 = C32591 * C32573;
    const double C2729 = C32952 - (C32583 * C32574) / C31595;
    const double C32901 = C32763 * C32757;
    const double C32934 = C32903 + C32763;
    const double C32905 = C32770 / C31637;
    const double C32902 = C32770 * C32757;
    const double C13672 = C32958 - (C32763 * C32759) / C31595;
    const double C31611 = C31610 * C31604;
    const double C31662 = C31610 * ae;
    const double C816 =
        (((0 - (C31593 * C31601) / C31595) * ae) / C31595 - (0 * be) / C31606) /
            (2 * C31595) +
        ((C31593 * ((C31610 * ae) / C31595 - C31601 / C31606) + C32890) * ae) /
            C31595 +
        (0 * ae) / C31595 - C31605 / C31602;
    const double C818 =
        ((C31610 * ae) / C31595 - C31601 / C31606) / (2 * C31595) +
        ((C31593 * ((0 * ae) / C31595 - C31605 / C31602) + C32725) * ae) /
            C31595;
    const double C2734 = (C31610 * ae) / C31595 - C31601 / C31606;
    const double C5418 =
        ((-(0 * be) / C31595) / C31637 -
         ((0 - (C31593 * C31601) / C31595) * be) / C31595) /
            C31637 -
        ((C31593 * ((-C31601 / C31595) / C31637 - (C31610 * be) / C31595) +
          C15101) *
         be) /
            C31595 +
        (-C31607 / C31595) / C31637 - (0 * be) / C31595;
    const double C5420 =
        ((-C31601 / C31595) / C31637 - (C31610 * be) / C31595) / C31637 -
        ((C31593 * ((-C31607 / C31595) / C31637 - (0 * be) / C31595) + C32725) *
         be) /
            C31595;
    const double C15108 = (-C31657) / C31637 - (C31610 * be) / C31595;
    const double C31707 = C31701 * be;
    const double C17986 = C31747 * C250;
    const double C17978 = C31747 * C249;
    const double C31748 = 2 * C31747;
    const double C6331 =
        (C31747 / C31637 + (0 * ae) / C31595) / C31637 - (0 * be) / C31595;
    const double C7790 = C31747 / C31637 - (0 * be) / C31595;
    const double C15966 = C31747 / C31637 + (0 * ae) / C31595;
    const double C2123 = C2118 * C812;
    const double C10653 = C2118 * C32951;
    const double C12199 = C2118 * C32578;
    const double C13874 = C2118 * C32872;
    const double C23000 = C2118 * C15957;
    const double C24765 = C2118 * C32583;
    const double C32926 = C32894 / C31595;
    const double C32946 = C32929 / C31637;
    const double C32947 = C32930 + C32898;
    const double C7779 = C32898 - C32726 / C31606;
    const double C32928 = C32895 / C31595;
    const double C7819 = C7777 * C131;
    const double C7798 = C7777 * C130;
    const double C8213 = C7777 * C257;
    const double C8367 = C7777 * C362;
    const double C9877 = C7777 * C364;
    const double C9863 = C7777 * C363;
    const double C10297 = C7777 * C689;
    const double C31732 = C31724 - C31729;
    const double C31731 = C31686 - C31728;
    const double C833 = C32922 * C260;
    const double C1343 = C32942 * C260;
    const double C3159 = C32725 * C260;
    const double C5435 = C32922 * C260;
    const double C5897 = C5412 * C260;
    const double C15533 = C32725 * C260;
    const double C17987 = C17965 * C260;
    const double C18449 = C32728 * C260;
    const double C2291 = C2285 + C696;
    const double C1838 = C1835 + C1827;
    const double C32003 = ae * C32002;
    const double C1001 =
        (2 * C31890 + C31824 * C32002 + (C31885 + C31832 * C31828) * ae) /
        C31595;
    const double C1150 = (C31965 * C32002) / C31595;
    const double C5289 = C32725 * C1159;
    const double C7130 = C32922 * C1159;
    const double C7650 = C5412 * C1159;
    const double C11458 = C32922 * C1159;
    const double C11969 = C32942 * C1159;
    const double C17833 = C32725 * C1159;
    const double C20290 = C17965 * C1159;
    const double C20940 = C32728 * C1159;
    const double C2624 = C2622 + C695;
    const double C2625 = C2623 + C1953;
    const double C2090 = C597 * C813;
    const double C2449 = C597 * C812;
    const double C10654 = C597 * C32938;
    const double C10956 = C597 * C32951;
    const double C12387 = C597 * C32578;
    const double C13875 = C597 * C32588;
    const double C14149 = C597 * C32872;
    const double C23001 = C597 * C32588;
    const double C23270 = C597 * C15957;
    const double C24766 = C597 * C32591;
    const double C25068 = C597 * C32583;
    const double C2124 = C2119 * C812;
    const double C10656 = C2119 * C32951;
    const double C12200 = C2119 * C32578;
    const double C13876 = C2119 * C32872;
    const double C23002 = C2119 * C15957;
    const double C24768 = C2119 * C32583;
    const double C12212 = C12210 + C12203;
    const double C2091 = C596 * C32913;
    const double C2450 = C596 * C813;
    const double C10655 = C596 * C32913;
    const double C10957 = C596 * C32938;
    const double C14150 = C596 * C32588;
    const double C23271 = C596 * C32588;
    const double C24767 = C596 * C17968;
    const double C25069 = C596 * C32591;
    const double C2127 = C2122 * C812;
    const double C10661 = C2122 * C32951;
    const double C12201 = C2122 * C32578;
    const double C13878 = C2122 * C32872;
    const double C23004 = C2122 * C15957;
    const double C24773 = C2122 * C32583;
    const double C152 = C32662 * C134;
    const double C472 = C32662 * C255;
    const double C848 = C32942 * C255;
    const double C2757 = C32725 * C255;
    const double C3153 = C32890 * C255;
    const double C5450 = C5412 * C255;
    const double C15131 = C32725 * C255;
    const double C15527 = C15101 * C255;
    const double C18002 = C32728 * C255;
    const double C580 = C32662 * C360;
    const double C3315 = C32890 * C360;
    const double C15689 = C15101 * C360;
    const double C1829 = C32662 * C366;
    const double C4642 = C32890 * C366;
    const double C16851 = C15101 * C366;
    const double C1519 = C32942 * C691;
    const double C2284 = C32662 * C691;
    const double C3317 = C32725 * C691;
    const double C4878 = C32890 * C691;
    const double C6070 = C5412 * C691;
    const double C15691 = C32725 * C691;
    const double C18622 = C32728 * C691;
    const double C19445 = C15101 * C691;
    const double C12391 = C32662 * C2085;
    const double C12942 = C32725 * C2608;
    const double C14015 = C32662 * C2608;
    const double C17179 = C32725 * C2608;
    const double C31925 = C31924 + C31922;
    const double C265 = C114 * C244;
    const double C2759 = C2736 * C244;
    const double C15133 = C15110 * C244;
    const double C150 = C113 * C120;
    const double C469 = C113 * C234;
    const double C577 = C113 * C339;
    const double C1830 = C113 * C347;
    const double C3917 = C113 * C682;
    const double C31978 = C31902 + C31976;
    const double C32075 = ae * C32074;
    const double C32276 = C32268 + C32042;
    const double C32044 = C32043 + C32037;
    const double C32092 = ae * C32091;
    const double C2605 = (2 * C32077 + C31965 * C32091) / C31595;
    const double C32169 = ae * C32166;
    const double C32168 = C31824 * C32166;
    const double C32183 = 3 * C32166;
    const double C32231 = C31965 * C32166;
    const double C32242 = C32166 * C32083;
    const double C32327 = C32320 + C32237;
    const double C32341 = C32339 + C32340;
    const double C261 = (C31838 + C31847 * C31843 + C31907 + C31907 +
                         C31824 * (2 * ae * C31902 + C31824 * C31857)) /
                        C31602;
    const double C272 = C114 * C251;
    const double C841 = C820 * C251;
    const double C2892 = C2736 * C251;
    const double C5443 = C5422 * C251;
    const double C15266 = C15110 * C251;
    const double C17995 = C31747 * C251;
    const double C697 = C114 * C686;
    const double C3006 = C2736 * C686;
    const double C15380 = C15110 * C686;
    const double C1951 = C114 * C1155;
    const double C3017 = C2736 * C1155;
    const double C15391 = C15110 * C1155;
    const double C162 = C157 + C148;
    const double C483 = C479 + C266;
    const double C591 = C587 + C371;
    const double C1836 = C1833 + C377;
    const double C2115 = C2110 + C2097;
    const double C31991 = C31990 + C31987;
    const double C1158 =
        (C31965 * C31982 + C32078 + C32078 +
         C31824 * (2 * ae * C31965 * C31909 + C31824 * C31965 * C31859)) /
        C31602;
    const double C2289 = C2281 + C1952;
    const double C2121 = C2116 + C2101;
    const double C32165 = C32152 + C32162;
    const double C32023 = ae * C32021;
    const double C32022 = C31824 * C32021;
    const double C32114 = C31965 * C32021;
    const double C32145 = 3 * C32021;
    const double C1152 = (C32002 + C32021 * C32083) / C31595;
    const double C1161 = (C31838 + C31847 * C32083 + C32087 + C32087 +
                          C31824 * (2 * ae * (C31878 + C31875 * C32083) +
                                    C31824 * (C31847 + C31855 * C32083))) /
                         C31602;
    const double C2619 = C114 * C2604;
    const double C4652 = C2736 * C2604;
    const double C17184 = C15110 * C2604;
    const double C12211 = C12209 + C12205;
    const double C31871 = C31863 + C31870;
    const double C32062 = C32058 + C32052;
    const double C2086 =
        (3 * (C31857 + C31869 * C32083) +
         C31965 * (2 * C32125 +
                   C31965 * (C31869 +
                             (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843) *
                                 C32083))) /
        C31602;
    const double C2609 =
        (2 * ae * (2 * C31965 * C31919 + C31965 * (C31919 + C31940 * C32083)) +
         C31824 * (2 * C32125 +
                   C31965 * (C31869 +
                             (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843) *
                                 C32083))) /
        C31602;
    const double C2280 = C32662 * C1164;
    const double C4640 = C32725 * C1164;
    const double C16849 = C32725 * C1164;
    const double C2098 = C32662 * C2081;
    const double C32206 = C32192 + C32203;
    const double C32266 = C32265 + C32261;
    const double C32372 = C32367 + C32368;
    const double C12487 = C32662 * C7122;
    const double C14590 = C32725 * C7122;
    const double C28324 = C32725 * C7122;
    const double C32287 = C31824 * C32283;
    const double C32318 = C32317 + C32313;
    const double C12299 =
        (2 * ae *
             (3 * (C31909 + C31929 * C32083) +
              C31965 * (2 * C32307 + C31965 * (C31929 + C32273 * C32083))) +
         C31824 * (3 * C32356 +
                   C31965 * (2 * C32308 +
                             C31965 * (C32270 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C32083)))) /
        C31602;
    const double C12385 =
        (4 * (2 * C32119 + C31965 * C32356) +
         C31965 * (3 * C32356 +
                   C31965 * (2 * C32308 +
                             C31965 * (C32270 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C32083)))) /
        C31602;
    const double C32336 = C31824 * C32335;
    const double C31948 = C31928 + C31946;
    const double C32102 = C32099 + C32100;
    const double C2455 = C114 * C2446;
    const double C32066 = C31919 + C32063;
    const double C32096 = C31974 + C32095;
    const double C32129 = ae * C32127;
    const double C32213 = ae * C32207;
    const double C32211 = C31824 * C32207;
    const double C32253 = C32207 * C32083;
    const double C32325 = C31965 * C32207;
    const double C32348 = C32346 + C32347;
    const double C32295 = C32293 + C32285;
    const double C32360 = ae * C32358;
    const double C32363 = C31965 * C32358;
    const double C31947 = C31945 * ae;
    const double C121 = 5 * (3 * C31903 + C31831 * C31920) +
                        C31831 * (4 * C31920 + C31831 * C31945);
    const double C243 = 3 * C31903 + C31831 * C31920 + C31945 * C31828;
    const double C348 = 3 * C31903 + C31831 * C31920 + C31945 * C32083;
    const double C465 = C31824 * (4 * C31920 + C31831 * C31945);
    const double C573 = C31965 * (4 * C31920 + C31831 * C31945);
    const double C683 = C31965 * C31824 * C31945;
    const double C32216 = C32212 * ae;
    const double C6410 = 5 * (3 * C32015 + C31824 * C32164) +
                         C31824 * (4 * C32164 + C31824 * C32212);
    const double C6489 = 3 * C32015 + C31824 * C32164 + C32212 * C32083;
    const double C6768 = C31965 * (4 * C32164 + C31824 * C32212);
    const double C32908 = C32871 / C31595;
    const double C32939 = C32912 / C31637;
    const double C32940 = C32914 + C32879;
    const double C2731 = C32879 - C32589 / C31606;
    const double C32911 = C32875 / C31595;
    const double C3786 = C2119 * C2729;
    const double C3779 = C2118 * C2729;
    const double C4052 = C597 * C2729;
    const double C32931 = C32901 / C31595;
    const double C32949 = C32934 / C31637;
    const double C32950 = C32935 + C32905;
    const double C13674 = C32905 - C32768 / C31606;
    const double C32933 = C32902 / C31595;
    const double C31619 = C31593 * C31611;
    const double C31664 = C31611 / C31606;
    const double C815 =
        (ae * -2 * C31601) / (C31602 * 2 * C31595) +
        (((C31593 * ((-4 * C31605) / C31595 - (C31593 * C31611) / C31595) *
           ae) /
              C31595 +
          2 * ((C31610 * ae) / C31595 - C31601 / C31606)) *
         ae) /
            C31595 -
        C31611 / C31606;
    const double C819 = (-C31611 / C31595) / (4 * C31602);
    const double C2735 = (-C31611 / C31595) / (2 * C31595);
    const double C5421 = (-C31611 / C31595) / (4 * C31602);
    const double C6330 =
        (-C31611 / C31595) / (4 * C31602 * std::pow(C31637, 2));
    const double C7789 = (-C31611 / C31595) / (4 * C31655);
    const double C15109 = (-C31611 / C31595) / C31637;
    const double C15965 = (-C31611 / C31595) / (4 * C31655);
    const double C17973 = (-C31611 / C31595) / C31742;
    const double C31675 = C31662 / C31595;
    const double C852 = C816 * C126;
    const double C850 = C816 * C125;
    const double C835 = C816 * C124;
    const double C826 = C816 * C123;
    const double C822 = C816 * C122;
    const double C1027 = C816 * C251;
    const double C1024 = C816 * C250;
    const double C1021 = C816 * C249;
    const double C1020 = C816 * C248;
    const double C1017 = C816 * C247;
    const double C1014 = C816 * C246;
    const double C1182 = C816 * C356;
    const double C1179 = C816 * C355;
    const double C1176 = C816 * C354;
    const double C1175 = C816 * C353;
    const double C1172 = C816 * C352;
    const double C1169 = C816 * C351;
    const double C1346 = C816 * C245;
    const double C1528 = C816 * C350;
    const double C1710 = C816 * C686;
    const double C1707 = C816 * C685;
    const double C1704 = C816 * C684;
    const double C11336 = C816 * C1151;
    const double C11474 = C816 * C2078;
    const double C11472 = C816 * C2077;
    const double C11653 = C816 * C1153;
    const double C11808 = C816 * C2076;
    const double C11978 = C816 * C2604;
    const double C853 = C818 * C244;
    const double C847 = C818 * C245;
    const double C838 = C818 * C246;
    const double C829 = C818 * C247;
    const double C823 = C818 * C248;
    const double C1019 = C818 * C249;
    const double C1016 = C818 * C250;
    const double C1013 = C818 * C251;
    const double C1183 = C818 * C1155;
    const double C1180 = C818 * C1153;
    const double C1177 = C818 * C1151;
    const double C1174 = C818 * C684;
    const double C1171 = C818 * C685;
    const double C1168 = C818 * C686;
    const double C11469 = C818 * C2604;
    const double C2764 = C2734 * C127;
    const double C2762 = C2734 * C126;
    const double C2753 = C2734 * C125;
    const double C2747 = C2734 * C124;
    const double C2741 = C2734 * C123;
    const double C2738 = C2734 * C122;
    const double C2902 = C2734 * C251;
    const double C2900 = C2734 * C250;
    const double C2898 = C2734 * C249;
    const double C2897 = C2734 * C248;
    const double C2895 = C2734 * C247;
    const double C2893 = C2734 * C246;
    const double C2891 = C2734 * C245;
    const double C3018 = C2734 * C357;
    const double C3016 = C2734 * C356;
    const double C3014 = C2734 * C355;
    const double C3012 = C2734 * C354;
    const double C3011 = C2734 * C353;
    const double C3009 = C2734 * C352;
    const double C3007 = C2734 * C351;
    const double C3005 = C2734 * C350;
    const double C3162 = C2734 * C244;
    const double C3324 = C2734 * C349;
    const double C3478 = C2734 * C686;
    const double C3476 = C2734 * C685;
    const double C3474 = C2734 * C684;
    const double C4655 = C2734 * C2075;
    const double C4653 = C2734 * C2076;
    const double C4651 = C2734 * C2077;
    const double C5294 = C2734 * C1155;
    const double C5292 = C2734 * C1153;
    const double C5290 = C2734 * C1151;
    const double C12951 = C2734 * C2079;
    const double C12949 = C2734 * C2078;
    const double C13565 = C2734 * C2604;
    const double C14593 = C2734 * C12194;
    const double C5454 = C5418 * C126;
    const double C5452 = C5418 * C125;
    const double C5437 = C5418 * C124;
    const double C5428 = C5418 * C123;
    const double C5424 = C5418 * C122;
    const double C5611 = C5418 * C251;
    const double C5608 = C5418 * C250;
    const double C5605 = C5418 * C249;
    const double C5604 = C5418 * C248;
    const double C5601 = C5418 * C247;
    const double C5598 = C5418 * C246;
    const double C5739 = C5418 * C356;
    const double C5736 = C5418 * C355;
    const double C5733 = C5418 * C354;
    const double C5732 = C5418 * C353;
    const double C5729 = C5418 * C352;
    const double C5726 = C5418 * C351;
    const double C5900 = C5418 * C245;
    const double C6079 = C5418 * C350;
    const double C6252 = C5418 * C686;
    const double C6249 = C5418 * C685;
    const double C6246 = C5418 * C684;
    const double C6999 = C5418 * C1151;
    const double C7146 = C5418 * C2078;
    const double C7144 = C5418 * C2077;
    const double C7328 = C5418 * C1153;
    const double C7486 = C5418 * C2076;
    const double C7659 = C5418 * C2604;
    const double C5455 = C5420 * C244;
    const double C5449 = C5420 * C245;
    const double C5440 = C5420 * C246;
    const double C5431 = C5420 * C247;
    const double C5425 = C5420 * C248;
    const double C5603 = C5420 * C249;
    const double C5600 = C5420 * C250;
    const double C5597 = C5420 * C251;
    const double C5740 = C5420 * C1155;
    const double C5737 = C5420 * C1153;
    const double C5734 = C5420 * C1151;
    const double C5731 = C5420 * C684;
    const double C5728 = C5420 * C685;
    const double C5725 = C5420 * C686;
    const double C7141 = C5420 * C2604;
    const double C15138 = C15108 * C127;
    const double C15136 = C15108 * C126;
    const double C15127 = C15108 * C125;
    const double C15121 = C15108 * C124;
    const double C15115 = C15108 * C123;
    const double C15112 = C15108 * C122;
    const double C15276 = C15108 * C251;
    const double C15274 = C15108 * C250;
    const double C15272 = C15108 * C249;
    const double C15271 = C15108 * C248;
    const double C15269 = C15108 * C247;
    const double C15267 = C15108 * C246;
    const double C15265 = C15108 * C245;
    const double C15392 = C15108 * C357;
    const double C15390 = C15108 * C356;
    const double C15388 = C15108 * C355;
    const double C15386 = C15108 * C354;
    const double C15385 = C15108 * C353;
    const double C15383 = C15108 * C352;
    const double C15381 = C15108 * C351;
    const double C15379 = C15108 * C350;
    const double C15536 = C15108 * C244;
    const double C15698 = C15108 * C349;
    const double C15852 = C15108 * C686;
    const double C15850 = C15108 * C685;
    const double C15848 = C15108 * C684;
    const double C17013 = C15108 * C1151;
    const double C17011 = C15108 * C1153;
    const double C17191 = C15108 * C2079;
    const double C17189 = C15108 * C2078;
    const double C17187 = C15108 * C2077;
    const double C17181 = C15108 * C2076;
    const double C17423 = C15108 * C1155;
    const double C17634 = C15108 * C2075;
    const double C17838 = C15108 * C2604;
    const double C28327 = C15108 * C12194;
    const double C31715 = C31707 / C31595;
    const double C32961 = C32926 + C32956;
    const double C7778 = C32946 - (C32728 * C32717) / C31595;
    const double C15980 = C32947 * C260;
    const double C27572 = C32947 * C1159;
    const double C6319 = C32947 / C31637 - C32726 / C31745;
    const double C7804 = C7779 * C260;
    const double C9867 = C7779 * C1159;
    const double C32957 = C32928 + C32946;
    const double C2295 = C2291 + C696;
    const double C2094 = C1838 * C813;
    const double C2452 = C1838 * C812;
    const double C10657 = C1838 * C32938;
    const double C10959 = C1838 * C32951;
    const double C12388 = C1838 * C32578;
    const double C13877 = C1838 * C32588;
    const double C14151 = C1838 * C32872;
    const double C23003 = C1838 * C32588;
    const double C23272 = C1838 * C15957;
    const double C24769 = C1838 * C32591;
    const double C25071 = C1838 * C32583;
    const double C1007 =
        (2 * (2 * ae * C31887 + C31824 * C31838) + C32003 + C32003 +
         C31824 * (C31838 + C32000 + C32000 +
                   C31824 * (2 * ae * C31878 + C31824 * C31847))) /
        C31602;
    const double C1022 = C818 * C1001;
    const double C1018 = C820 * C1001;
    const double C2899 = C2736 * C1001;
    const double C5606 = C5420 * C1001;
    const double C5602 = C5422 * C1001;
    const double C7795 = C7790 * C1001;
    const double C15273 = C15110 * C1001;
    const double C15971 = C15966 * C1001;
    const double C18154 = C31747 * C1001;
    const double C1173 = C820 * C1150;
    const double C1705 = C818 * C1150;
    const double C1954 = C114 * C1150;
    const double C3475 = C2736 * C1150;
    const double C4483 = C2734 * C1150;
    const double C5730 = C5422 * C1150;
    const double C6247 = C5420 * C1150;
    const double C7000 = C5418 * C1150;
    const double C11337 = C816 * C1150;
    const double C15849 = C15110 * C1150;
    const double C17014 = C15108 * C1150;
    const double C18282 = C31747 * C1150;
    const double C2626 = C2624 + C2612;
    const double C2627 = C2625 + C2616;
    const double C12214 = C12212 * C32578;
    const double C13881 = C12212 * C32872;
    const double C23007 = C12212 * C15957;
    const double C12395 = C12394 + C12391;
    const double C31926 = ae * C31925;
    const double C252 = (2 * C31893 + C31831 * C31902 + C31824 * C31925 +
                         C31824 * C31920 * ae) /
                        C31595;
    const double C687 = (C31965 * C31925) / C31595;
    const double C158 = C150 + C151;
    const double C478 = C469 + C265;
    const double C586 = C577 + C370;
    const double C1834 = C1830 + C378;
    const double C31979 = C31978 + C31975;
    const double C1157 =
        (C31965 * C31857 + C32075 + C32075 +
         C31824 * (2 * ae * C31965 * C31919 + C31824 * C31965 * C31869)) /
        C31602;
    const double C32046 = ae * C32044;
    const double C32045 = C31824 * C32044;
    const double C32120 = C31965 * C32044;
    const double C32271 = 3 * C32044;
    const double C1163 =
        (C31982 + C31859 * C32083 + C32092 + C32092 +
         C31824 * (2 * ae * (C31909 + C31929 * C32083) +
                   C31824 * (C31859 + C31831 * C31867 * C32083))) /
        C31602;
    const double C2620 = C114 * C2605;
    const double C4654 = C2736 * C2605;
    const double C7487 = C5420 * C2605;
    const double C11809 = C818 * C2605;
    const double C13567 = C2734 * C2605;
    const double C17178 = C15110 * C2605;
    const double C17840 = C15108 * C2605;
    const double C32191 = C32178 + C32169;
    const double C32170 = C32146 + C32168;
    const double C32236 = ae * C32231;
    const double C32369 = 2 * C32231;
    const double C32245 = C32021 + C32242;
    const double C32342 = ae * C32341;
    const double C7119 = (3 * C32086 + C31965 * C32341) / C31595;
    const double C842 = C32922 * C261;
    const double C1337 = C32942 * C261;
    const double C3155 = C32725 * C261;
    const double C5444 = C32922 * C261;
    const double C5891 = C5412 * C261;
    const double C7813 = C7779 * C261;
    const double C15529 = C32725 * C261;
    const double C15989 = C32947 * C261;
    const double C17996 = C17965 * C261;
    const double C18443 = C32728 * C261;
    const double C2290 = C2283 + C697;
    const double C2288 = C2279 + C1951;
    const double C167 = C162 + C149;
    const double C487 = C483 + C472;
    const double C595 = C591 + C580;
    const double C1839 = C1836 + C1829;
    const double C31992 = ae * C31991;
    const double C1000 =
        (2 * C31897 + C31824 * C31991 + (C31894 + C31911 * C31828) * ae) /
        C31595;
    const double C1149 = (C31965 * C31991) / C31595;
    const double C1154 = (C31991 + C32044 * C32083) / C31595;
    const double C1523 = C32922 * C1158;
    const double C4880 = C32725 * C1158;
    const double C6074 = C32922 * C1158;
    const double C8363 = C7779 * C1158;
    const double C9160 = C5412 * C1158;
    const double C16539 = C32947 * C1158;
    const double C17420 = C32725 * C1158;
    const double C18626 = C17965 * C1158;
    const double C20533 = C32728 * C1158;
    const double C22298 = C32942 * C1158;
    const double C2293 = C2289 + C1952;
    const double C2126 = C2121 * C813;
    const double C10660 = C2121 * C32938;
    const double C12389 = C2121 * C32578;
    const double C13879 = C2121 * C32588;
    const double C14153 = C2121 * C32872;
    const double C23005 = C2121 * C32588;
    const double C23274 = C2121 * C15957;
    const double C24772 = C2121 * C32591;
    const double C32024 = C32007 + C32022;
    const double C32116 = ae * C32114;
    const double C1178 = C820 * C1152;
    const double C1957 = C114 * C1152;
    const double C5291 = C2736 * C1152;
    const double C5735 = C5422 * C1152;
    const double C7003 = C5418 * C1152;
    const double C6998 = C5420 * C1152;
    const double C11340 = C816 * C1152;
    const double C11335 = C818 * C1152;
    const double C12789 = C2734 * C1152;
    const double C17018 = C15108 * C1152;
    const double C17012 = C15110 * C1152;
    const double C18287 = C31747 * C1152;
    const double C7136 = C32922 * C1161;
    const double C7656 = C5412 * C1161;
    const double C9873 = C7779 * C1161;
    const double C11464 = C32922 * C1161;
    const double C11975 = C32942 * C1161;
    const double C13564 = C32725 * C1161;
    const double C17837 = C32725 * C1161;
    const double C20298 = C17965 * C1161;
    const double C27578 = C32947 * C1161;
    const double C31576 = C32728 * C1161;
    const double C12489 = C12484 + C2619;
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
    const double C254 =
        (2 * ae *
             (3 * (C31834 * C31833 * C31873 + C31875 * C31843) +
              C31831 *
                  (2 * C31831 * C31875 +
                   C31831 * (C31875 + C31851 * C31850 * C31873 * C31843))) +
         C31824 * (3 * C31857 + C31831 * C31871)) /
        C31602;
    const double C359 = ((zP - zQ) * (3 * C31857 + C31831 * C31871)) / C31602;
    const double C367 = (2 * C31831 * C31847 + C31831 * C31857 +
                         C31871 * std::pow(zP - zQ, 2)) /
                        C31602;
    const double C368 =
        (3 * C31857 + C31831 * C31871 +
         (3 * C31869 +
          C31831 * (2 * C31831 * C31867 +
                    C31831 * (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843))) *
             std::pow(zP - zQ, 2)) /
        C31602;
    const double C575 =
        ((zP - zQ) *
         (4 * C31871 +
          C31831 * (3 * C31869 +
                    C31831 * (2 * C31831 * C31867 +
                              C31831 * (C31867 +
                                        (C31861 * C31862 +
                                         C31828 * bs[8] * std::pow(C31822, 8)) *
                                            C31827 * C31843))))) /
        C31602;
    const double C692 =
        (2 * ae * C31965 * C31923 + C31824 * C31965 * C31871) / C31602;
    const double C2277 =
        (2 * ae * (C31923 + C31944 * C32083) +
         C31824 * (C31871 +
                   (2 * C31831 * C31867 +
                    C31831 * (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843)) *
                       C32083)) /
        C31602;
    const double C2447 =
        (2 * C31965 * C31871 +
         C31965 * (C31871 +
                   (2 * C31831 * C31867 +
                    C31831 * (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843)) *
                       C32083)) /
        C31602;
    const double C2120 = C2115 + C2098;
    const double C32210 = C31824 * C32206;
    const double C12196 = (4 * (2 * C32113 + C31965 * C32244) +
                           C31965 * (3 * C32244 + C31965 * C32372)) /
                          C31602;
    const double C12197 =
        (5 * (3 * C32244 + C31965 * C32372) +
         C31965 *
             (4 * C32372 +
              C31965 * (3 * C32256 +
                        C31965 * (2 * C32322 +
                                  C31965 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C32083))))) /
        C31602;
    const double C12480 =
        (2 * ae *
             (4 * (2 * C32228 + C31965 * C32255) +
              C31965 * (3 * C32255 +
                        C31965 * (2 * C32321 +
                                  C31965 * (C31914 + C31935 * C32083)))) +
         C31824 *
             (4 * C32372 +
              C31965 * (3 * C32256 +
                        C31965 * (2 * C32322 +
                                  C31965 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C32083))))) /
        C31602;
    const double C32292 = C32276 + C32287;
    const double C32337 = C32327 + C32336;
    const double C31949 = C31824 * C31948;
    const double C467 =
        (2 * ae * (4 * C31923 + C31831 * C31948) +
         C31824 *
             (4 * C31871 +
              C31831 * (3 * C31869 +
                        C31831 * (2 * C31831 * C31867 +
                                  C31831 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C693 =
        (2 * ae * C31965 * C31948 +
         C31824 * C31965 *
             (3 * C31869 +
              C31831 *
                  (2 * C31831 * C31867 +
                   C31831 * (C31867 + (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31827 * C31843)))) /
        C31602;
    const double C128 = (5 * (3 * C31902 + C31831 * C31923) +
                         C31831 * (4 * C31923 + C31831 * C31948)) /
                        C31595;
    const double C358 =
        (3 * C31902 + C31831 * C31923 + C31948 * C32083) / C31595;
    const double C466 = (C31824 * (4 * C31923 + C31831 * C31948) +
                         (4 * C31920 + C31831 * C31945) * ae) /
                        C31595;
    const double C574 = (C31965 * (4 * C31923 + C31831 * C31948)) / C31595;
    const double C32105 = ae * C32102;
    const double C32104 = C31824 * C32102;
    const double C32110 = C31965 * C32102;
    const double C2276 = (C31925 + C32102 * C32083) / C31595;
    const double C32067 = C32066 + C32060;
    const double C32097 = ae * C32096;
    const double C2606 = (2 * C32074 + C31965 * C32096) / C31595;
    const double C32215 = C32184 + C32211;
    const double C32258 = C32166 + C32253;
    const double C32332 = ae * C32325;
    const double C32349 = C31965 * C32348;
    const double C32371 = ae * C32348;
    const double C32298 = ae * C32295;
    const double C32297 = C31824 * C32295;
    const double C32310 = C31965 * C32295;
    const double C32354 = C32295 * C32083;
    const double C32364 = C32362 + C32363;
    const double C32960 = C32908 + C32952;
    const double C2730 = C32939 - (C32591 * C32574) / C31595;
    const double C21256 = C596 * C32940;
    const double C105 = C32940 / C31637 - C32589 / C31745;
    const double C3781 = C596 * C2731;
    const double C32953 = C32911 + C32939;
    const double C32962 = C32931 + C32958;
    const double C13673 = C32949 - (C32770 * C32759) / C31595;
    const double C12063 = C32950 / C31637 - C32768 / C31745;
    const double C32959 = C32933 + C32949;
    const double C31667 = C31619 / C31606;
    const double C31661 = C31619 / C31595;
    const double C817 =
        (((-4 * C31605) / C31595 - C31619 / C31595) * ae) / C31606 +
        ((2 * ((0 * ae) / C31595 - C31605 / C31602) - C31619 / C31606) * ae) /
            C31595;
    const double C2733 =
        (((-4 * C31605) / C31595 - C31619 / C31595) * ae) / C31595;
    const double C5417 =
        (-(be * -2 * C31601) / C31602) / C31637 -
        ((2 * ((-C31601 / C31595) / C31637 - (C31610 * be) / C31595) -
          (C31593 * ((-4 * C31605) / C31595 - C31619 / C31595) * be) / C31595) *
         be) /
            C31595 -
        C31611 / C31606;
    const double C5419 =
        (-(((-4 * C31605) / C31595 - C31619 / C31595) * be) / C31595) / C31637 -
        ((2 * ((-C31607 / C31595) / C31637 - (0 * be) / C31595) -
          C31619 / C31606) *
         be) /
            C31595;
    const double C849 = C815 * C118;
    const double C834 = C815 * C117;
    const double C825 = C815 * C116;
    const double C1344 = C815 * C237;
    const double C1338 = C815 * C236;
    const double C1526 = C815 * C342;
    const double C1520 = C815 * C341;
    const double C11471 = C815 * C2071;
    const double C11459 = C815 * C344;
    const double C11453 = C815 * C343;
    const double C11802 = C815 * C345;
    const double C11972 = C815 * C1142;
    const double C11966 = C815 * C679;
    const double C22299 = C815 * C680;
    const double C843 = C819 * C242;
    const double C840 = C819 * C241;
    const double C831 = C819 * C240;
    const double C1340 = C819 * C994;
    const double C1334 = C819 * C993;
    const double C1522 = C819 * C1140;
    const double C1516 = C819 * C1139;
    const double C11465 = C819 * C7115;
    const double C11463 = C819 * C1143;
    const double C11457 = C819 * C1141;
    const double C11806 = C819 * C1145;
    const double C11976 = C819 * C6488;
    const double C11970 = C819 * C1694;
    const double C22295 = C819 * C1695;
    const double C2758 = C2735 * C234;
    const double C2755 = C2735 * C235;
    const double C2749 = C2735 * C236;
    const double C2743 = C2735 * C237;
    const double C3158 = C2735 * C240;
    const double C3154 = C2735 * C241;
    const double C3150 = C2735 * C242;
    const double C3320 = C2735 * C680;
    const double C3316 = C2735 * C681;
    const double C3312 = C2735 * C682;
    const double C4647 = C2735 * C1142;
    const double C4643 = C2735 * C1144;
    const double C4639 = C2735 * C1146;
    const double C4637 = C2735 * C679;
    const double C4879 = C2735 * C1140;
    const double C4875 = C2735 * C1139;
    const double C5288 = C2735 * C1141;
    const double C12945 = C2735 * C2601;
    const double C12941 = C2735 * C2602;
    const double C13162 = C2735 * C1145;
    const double C13563 = C2735 * C1143;
    const double C14589 = C2735 * C7116;
    const double C14994 = C2735 * C7115;
    const double C5445 = C5421 * C242;
    const double C5442 = C5421 * C241;
    const double C5433 = C5421 * C240;
    const double C5894 = C5421 * C994;
    const double C5888 = C5421 * C993;
    const double C6073 = C5421 * C1140;
    const double C6067 = C5421 * C1139;
    const double C7137 = C5421 * C7115;
    const double C7135 = C5421 * C1143;
    const double C7129 = C5421 * C1141;
    const double C7484 = C5421 * C1145;
    const double C7657 = C5421 * C6488;
    const double C7651 = C5421 * C1694;
    const double C9157 = C5421 * C1695;
    const double C7808 = C7789 * C993;
    const double C7805 = C7789 * C994;
    const double C8206 = C7789 * C997;
    const double C8360 = C7789 * C1695;
    const double C9870 = C7789 * C6488;
    const double C9868 = C7789 * C1694;
    const double C10302 = C7789 * C6487;
    const double C15132 = C15109 * C234;
    const double C15129 = C15109 * C235;
    const double C15123 = C15109 * C236;
    const double C15117 = C15109 * C237;
    const double C15532 = C15109 * C240;
    const double C15528 = C15109 * C241;
    const double C15524 = C15109 * C242;
    const double C15694 = C15109 * C680;
    const double C15690 = C15109 * C681;
    const double C15686 = C15109 * C682;
    const double C16848 = C15109 * C1146;
    const double C16846 = C15109 * C1144;
    const double C17183 = C15109 * C2601;
    const double C17177 = C15109 * C2602;
    const double C17174 = C15109 * C1142;
    const double C17170 = C15109 * C679;
    const double C17419 = C15109 * C1140;
    const double C17415 = C15109 * C1145;
    const double C17836 = C15109 * C1143;
    const double C17832 = C15109 * C1141;
    const double C19442 = C15109 * C1139;
    const double C28323 = C15109 * C7116;
    const double C28728 = C15109 * C7115;
    const double C15984 = C15965 * C993;
    const double C15981 = C15965 * C994;
    const double C16382 = C15965 * C997;
    const double C16536 = C15965 * C1695;
    const double C27575 = C15965 * C6488;
    const double C27573 = C15965 * C1694;
    const double C28007 = C15965 * C6487;
    const double C17997 = C17973 * C242;
    const double C17994 = C17973 * C241;
    const double C17985 = C17973 * C240;
    const double C18446 = C17973 * C994;
    const double C18440 = C17973 * C993;
    const double C18625 = C17973 * C1140;
    const double C18619 = C17973 * C1139;
    const double C20297 = C17973 * C1143;
    const double C20291 = C17973 * C1145;
    const double C20289 = C17973 * C1141;
    const double C20530 = C17973 * C1695;
    const double C20941 = C17973 * C1694;
    const double C31115 = C17973 * C7115;
    const double C31577 = C17973 * C6488;
    const double C31683 = C31675 - C31663;
    const double C15995 = C32961 * C131;
    const double C15974 = C32961 * C130;
    const double C16389 = C32961 * C257;
    const double C16543 = C32961 * C362;
    const double C27582 = C32961 * C364;
    const double C27568 = C32961 * C363;
    const double C28002 = C32961 * C689;
    const double C6316 =
        (C32954 + 2 * C32721) / C31637 - (C32961 * C32717) / C31595;
    const double C7816 = C7778 * C256;
    const double C7801 = C7778 * C257;
    const double C8211 = C7778 * C260;
    const double C8365 = C7778 * C690;
    const double C9875 = C7778 * C1160;
    const double C9865 = C7778 * C689;
    const double C10299 = C7778 * C1159;
    const double C15992 = C32957 * C256;
    const double C15977 = C32957 * C257;
    const double C16387 = C32957 * C260;
    const double C16541 = C32957 * C690;
    const double C27580 = C32957 * C1160;
    const double C27570 = C32957 * C689;
    const double C28004 = C32957 * C1159;
    const double C6317 =
        (C32942 + 2 * C32728 + C32961) / C31637 - (C32957 * C32717) / C31595;
    const double C6318 = (C32922 + C32725 / C31595 + C32957) / C31637 -
                         (C32947 * C32717) / C31595;
    const double C2299 = C2295 + C2286;
    const double C2128 = C2124 + C2094;
    const double C10662 = C10656 + C10657;
    const double C13882 = C13876 + C13877;
    const double C23008 = C23002 + C23003;
    const double C24774 = C24768 + C24769;
    const double C2628 = C2626 * C812;
    const double C4186 = C2626 * C2729;
    const double C11108 = C2626 * C32951;
    const double C12482 = C2626 * C32578;
    const double C14285 = C2626 * C32872;
    const double C23406 = C2626 * C15957;
    const double C25220 = C2626 * C32583;
    const double C2629 = C2627 * C812;
    const double C11111 = C2627 * C32951;
    const double C12483 = C2627 * C32578;
    const double C14287 = C2627 * C32872;
    const double C23408 = C2627 * C15957;
    const double C25223 = C2627 * C32583;
    const double C12396 = C12395 * C32578;
    const double C13880 = C12395 * C32588;
    const double C23006 = C12395 * C32588;
    const double C262 =
        (2 * C31831 * C31847 + C31831 * C31857 + C31926 + C31926 +
         C31824 * (2 * ae * C31923 + C31824 * C31871)) /
        C31602;
    const double C273 = C114 * C252;
    const double C844 = C820 * C252;
    const double C1347 = C818 * C252;
    const double C2904 = C2734 * C252;
    const double C2890 = C2736 * C252;
    const double C5446 = C5422 * C252;
    const double C5901 = C5420 * C252;
    const double C15278 = C15108 * C252;
    const double C15264 = C15110 * C252;
    const double C17998 = C31747 * C252;
    const double C698 = C114 * C687;
    const double C1529 = C818 * C687;
    const double C3004 = C2736 * C687;
    const double C3480 = C2734 * C687;
    const double C6080 = C5420 * C687;
    const double C15378 = C15110 * C687;
    const double C15854 = C15108 * C687;
    const double C163 = C158 + C151;
    const double C482 = C478 + C265;
    const double C590 = C586 + C370;
    const double C1837 = C1834 + C378;
    const double C31980 = ae * C31979;
    const double C999 =
        (2 * C31906 + C31824 * C31979 + (C31903 + C31916 * C31828) * ae) /
        C31595;
    const double C1148 = (C31965 * C31979) / C31595;
    const double C1517 = C32922 * C1157;
    const double C4876 = C32725 * C1157;
    const double C6068 = C32922 * C1157;
    const double C18620 = C17965 * C1157;
    const double C19443 = C32725 * C1157;
    const double C32047 = C32030 + C32045;
    const double C32122 = ae * C32120;
    const double C7485 = C32922 * C1163;
    const double C11807 = C32922 * C1163;
    const double C13163 = C32725 * C1163;
    const double C17416 = C32725 * C1163;
    const double C20292 = C17965 * C1163;
    const double C14016 = C14014 + C2620;
    const double C32197 = C32191 + C32169;
    const double C32171 = C32170 + C32159;
    const double C32247 = ae * C32245;
    const double C7118 = (2 * C32114 + C31965 * C32245) / C31595;
    const double C7121 = (2 * C32113 + C31965 * C32244 + C32342 + C32342 +
                          C31824 * (2 * ae * (2 * C32228 + C31965 * C32255) +
                                    C31824 * (2 * C32229 + C31965 * C32256))) /
                         C31602;
    const double C7147 = C5420 * C7119;
    const double C11475 = C818 * C7119;
    const double C12128 = C114 * C7119;
    const double C12950 = C2736 * C7119;
    const double C14996 = C2734 * C7119;
    const double C17190 = C15110 * C7119;
    const double C28730 = C15108 * C7119;
    const double C2294 = C2290 + C697;
    const double C2292 = C2288 + C1951;
    const double C2451 = C595 * C32913;
    const double C3782 = C595 * C32891;
    const double C4054 = C595 * C2731;
    const double C10958 = C595 * C32913;
    const double C21257 = C595 * C32891;
    const double C21524 = C595 * C32940;
    const double C25070 = C595 * C17968;
    const double C2095 = C1839 * C32913;
    const double C2453 = C1839 * C813;
    const double C3784 = C1839 * C2731;
    const double C10658 = C1839 * C32913;
    const double C10960 = C1839 * C32938;
    const double C14152 = C1839 * C32588;
    const double C21259 = C1839 * C32940;
    const double C23273 = C1839 * C32588;
    const double C24770 = C1839 * C17968;
    const double C25072 = C1839 * C32591;
    const double C1006 =
        (2 * (2 * ae * C31893 + C31824 * C31982) + C31992 + C31992 +
         C31824 * (C31982 + C31989 + C31989 +
                   C31824 * (2 * ae * C31909 + C31824 * C31859))) /
        C31602;
    const double C1025 = C818 * C1000;
    const double C1015 = C820 * C1000;
    const double C2901 = C2736 * C1000;
    const double C5609 = C5420 * C1000;
    const double C5599 = C5422 * C1000;
    const double C7806 = C7790 * C1000;
    const double C15275 = C15110 * C1000;
    const double C15982 = C15966 * C1000;
    const double C18151 = C31747 * C1000;
    const double C1170 = C820 * C1149;
    const double C1708 = C818 * C1149;
    const double C1955 = C114 * C1149;
    const double C3477 = C2736 * C1149;
    const double C4485 = C2734 * C1149;
    const double C5727 = C5422 * C1149;
    const double C6250 = C5420 * C1149;
    const double C8814 = C5418 * C1149;
    const double C15851 = C15110 * C1149;
    const double C17016 = C15108 * C1149;
    const double C18279 = C31747 * C1149;
    const double C21952 = C816 * C1149;
    const double C1181 = C820 * C1154;
    const double C1958 = C114 * C1154;
    const double C5293 = C2736 * C1154;
    const double C5738 = C5422 * C1154;
    const double C7329 = C5420 * C1154;
    const double C11654 = C818 * C1154;
    const double C12791 = C2734 * C1154;
    const double C17020 = C15108 * C1154;
    const double C17010 = C15110 * C1154;
    const double C18290 = C31747 * C1154;
    const double C2297 = C2293 + C2282;
    const double C13883 = C13878 + C13879;
    const double C23009 = C23004 + C23005;
    const double C32025 = C32024 + C32018;
    const double C1700 =
        (2 * (2 * ae * C31965 * C31878 + C31824 * C32113) + C32116 + C32116 +
         C31824 *
             (C32113 + C32117 + C32117 +
              C31824 * (2 * ae * C31965 * C31875 + C31824 * C31965 * C31855))) /
        C31602;
    const double C12491 = C12489 + C2619;
    const double C470 = C32662 * C254;
    const double C2760 = C32725 * C254;
    const double C15134 = C32725 * C254;
    const double C578 = C32662 * C359;
    const double C1831 = C32662 * C367;
    const double C3313 = C32725 * C692;
    const double C3918 = C32662 * C692;
    const double C15687 = C32725 * C692;
    const double C2125 = C2120 * C32913;
    const double C10659 = C2120 * C32913;
    const double C14154 = C2120 * C32588;
    const double C23275 = C2120 * C32588;
    const double C24771 = C2120 * C17968;
    const double C12206 = C32662 * C12196;
    const double C31950 = C31949 + C31947;
    const double C153 = C114 * C128;
    const double C379 = C114 * C358;
    const double C477 = C114 * C466;
    const double C2765 = C2736 * C466;
    const double C15139 = C15110 * C466;
    const double C585 = C114 * C574;
    const double C32106 = C31923 + C32104;
    const double C32111 = ae * C32110;
    const double C2287 = C114 * C2276;
    const double C3019 = C2736 * C2276;
    const double C15393 = C15110 * C2276;
    const double C32069 = ae * C32067;
    const double C32068 = C31824 * C32067;
    const double C32126 = C31965 * C32067;
    const double C1156 = (C31979 + C32067 * C32083) / C31595;
    const double C1165 =
        (C31857 + C31869 * C32083 + C32097 + C32097 +
         C31824 * (2 * ae * (C31919 + C31940 * C32083) +
                   C31824 * (C31869 +
                             (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843) *
                                 C32083))) /
        C31602;
    const double C2621 = C114 * C2606;
    const double C4656 = C2736 * C2606;
    const double C17635 = C15110 * C2606;
    const double C32217 = C32215 + C32200;
    const double C32263 = ae * C32258;
    const double C32370 = C31965 * C32258;
    const double C32350 = C32345 + C32349;
    const double C32299 = C32272 + C32297;
    const double C32315 = ae * C32310;
    const double C32357 = C32044 + C32354;
    const double C32365 = ae * C32364;
    const double C12298 = (3 * C32091 + C31965 * C32364) / C31595;
    const double C21261 = C2119 * C32960;
    const double C21254 = C2118 * C32960;
    const double C21522 = C597 * C32960;
    const double C21656 = C2626 * C32960;
    const double C102 =
        (C32951 + 2 * C32583) / C31637 - (C32960 * C32574) / C31595;
    const double C3785 = C1838 * C2730;
    const double C3780 = C597 * C2730;
    const double C4053 = C596 * C2730;
    const double C21260 = C1838 * C32953;
    const double C21255 = C597 * C32953;
    const double C21523 = C596 * C32953;
    const double C103 =
        (C32938 + 2 * C32591 + C32960) / C31637 - (C32953 * C32574) / C31595;
    const double C104 = (C32913 + C32588 / C31595 + C32953) / C31637 -
                        (C32940 * C32574) / C31595;
    const double C12060 =
        (C32955 + 2 * C32763) / C31637 - (C32962 * C32759) / C31595;
    const double C12061 =
        (C32944 + 2 * C32770 + C32962) / C31637 - (C32959 * C32759) / C31595;
    const double C12062 = (C32925 + C32767 / C31595 + C32959) / C31637 -
                          (C32950 * C32759) / C31595;
    const double C31700 = C31692 - C31667;
    const double C31682 = C31674 - C31661;
    const double C846 = C817 * C235;
    const double C837 = C817 * C236;
    const double C828 = C817 * C237;
    const double C1342 = C817 * C240;
    const double C1336 = C817 * C241;
    const double C1524 = C817 * C680;
    const double C1518 = C817 * C681;
    const double C11468 = C817 * C2601;
    const double C11461 = C817 * C1142;
    const double C11455 = C817 * C679;
    const double C11804 = C817 * C1144;
    const double C11974 = C817 * C1143;
    const double C11968 = C817 * C1141;
    const double C22297 = C817 * C1140;
    const double C2761 = C2733 * C119;
    const double C2752 = C2733 * C118;
    const double C2746 = C2733 * C117;
    const double C2740 = C2733 * C116;
    const double C3160 = C2733 * C237;
    const double C3156 = C2733 * C236;
    const double C3152 = C2733 * C235;
    const double C3322 = C2733 * C342;
    const double C3318 = C2733 * C341;
    const double C3314 = C2733 * C340;
    const double C4649 = C2733 * C344;
    const double C4645 = C2733 * C345;
    const double C4641 = C2733 * C346;
    const double C4635 = C2733 * C343;
    const double C4881 = C2733 * C680;
    const double C4877 = C2733 * C681;
    const double C5286 = C2733 * C679;
    const double C12947 = C2733 * C2071;
    const double C12943 = C2733 * C2070;
    const double C13164 = C2733 * C1144;
    const double C13561 = C2733 * C1142;
    const double C14591 = C2733 * C2072;
    const double C14992 = C2733 * C2601;
    const double C5451 = C5417 * C118;
    const double C5436 = C5417 * C117;
    const double C5427 = C5417 * C116;
    const double C5898 = C5417 * C237;
    const double C5892 = C5417 * C236;
    const double C6077 = C5417 * C342;
    const double C6071 = C5417 * C341;
    const double C7143 = C5417 * C2071;
    const double C7131 = C5417 * C344;
    const double C7125 = C5417 * C343;
    const double C7480 = C5417 * C345;
    const double C7653 = C5417 * C1142;
    const double C7647 = C5417 * C679;
    const double C9161 = C5417 * C680;
    const double C5448 = C5419 * C235;
    const double C5439 = C5419 * C236;
    const double C5430 = C5419 * C237;
    const double C5896 = C5419 * C240;
    const double C5890 = C5419 * C241;
    const double C6075 = C5419 * C680;
    const double C6069 = C5419 * C681;
    const double C7140 = C5419 * C2601;
    const double C7133 = C5419 * C1142;
    const double C7127 = C5419 * C679;
    const double C7482 = C5419 * C1144;
    const double C7655 = C5419 * C1143;
    const double C7649 = C5419 * C1141;
    const double C9159 = C5419 * C1140;
    const double C863 = C849 + C850;
    const double C858 = C834 + C835;
    const double C855 = C825 + C826;
    const double C1354 = C1344 + C1017;
    const double C1351 = C1338 + C1014;
    const double C1536 = C1526 + C1172;
    const double C1533 = C1520 + C1169;
    const double C11485 = C11471 + C11472;
    const double C11480 = C11459 + C1176;
    const double C11477 = C11453 + C1175;
    const double C11811 = C11802 + C1179;
    const double C11984 = C11972 + C11336;
    const double C11981 = C11966 + C1704;
    const double C22303 = C22299 + C1707;
    const double C860 = C840 + C841;
    const double C857 = C831 + C832;
    const double C11482 = C11463 + C1178;
    const double C11479 = C11457 + C1173;
    const double C2772 = C2758 + C2759;
    const double C2771 = C2755 + C2756;
    const double C2769 = C2749 + C2750;
    const double C2767 = C2743 + C2744;
    const double C3168 = C3158 + C2894;
    const double C3166 = C3154 + C2892;
    const double C3330 = C3320 + C3008;
    const double C3328 = C3316 + C3006;
    const double C4663 = C4647 + C3013;
    const double C4661 = C4643 + C3015;
    const double C4659 = C4639 + C3017;
    const double C4658 = C4637 + C3010;
    const double C5297 = C5288 + C3475;
    const double C12957 = C12945 + C4652;
    const double C12955 = C12941 + C4654;
    const double C13570 = C13563 + C5291;
    const double C5462 = C5442 + C5443;
    const double C5459 = C5433 + C5434;
    const double C7154 = C7135 + C5735;
    const double C7151 = C7129 + C5730;
    const double C15146 = C15132 + C15133;
    const double C15145 = C15129 + C15130;
    const double C15143 = C15123 + C15124;
    const double C15141 = C15117 + C15118;
    const double C15542 = C15532 + C15268;
    const double C15540 = C15528 + C15266;
    const double C15704 = C15694 + C15382;
    const double C15702 = C15690 + C15380;
    const double C16854 = C16848 + C15391;
    const double C16853 = C16846 + C15389;
    const double C17200 = C17183 + C17184;
    const double C17198 = C17177 + C17178;
    const double C17196 = C17174 + C15387;
    const double C17194 = C17170 + C15384;
    const double C17845 = C17836 + C17012;
    const double C17843 = C17832 + C15849;
    const double C18014 = C17994 + C17995;
    const double C18011 = C17985 + C17986;
    const double C20315 = C20297 + C18287;
    const double C20311 = C20289 + C18282;
    const double C31693 = C31683 / C31637;
    const double C31691 = C31593 * C31683;
    const double C31690 = 2 * C31683;
    const double C2613 = C2299 * C813;
    const double C4187 = C2299 * C2730;
    const double C11109 = C2299 * C32938;
    const double C14286 = C2299 * C32588;
    const double C21657 = C2299 * C32953;
    const double C23407 = C2299 * C32588;
    const double C25221 = C2299 * C32591;
    const double C845 = C32922 * C262;
    const double C3151 = C32725 * C262;
    const double C5447 = C32922 * C262;
    const double C15525 = C32725 * C262;
    const double C17999 = C17965 * C262;
    const double C861 = C843 + C844;
    const double C3164 = C3150 + C2890;
    const double C5463 = C5445 + C5446;
    const double C15538 = C15524 + C15264;
    const double C18015 = C17997 + C17998;
    const double C3919 = C3917 + C698;
    const double C3326 = C3312 + C3004;
    const double C15700 = C15686 + C15378;
    const double C168 = C163 + C152;
    const double C1005 =
        (2 * (2 * ae * C31902 + C31824 * C31857) + C31980 + C31980 +
         C31824 * (C31857 + C31977 + C31977 +
                   C31824 * (2 * ae * C31919 + C31824 * C31869))) /
        C31602;
    const double C1028 = C818 * C999;
    const double C1012 = C820 * C999;
    const double C2903 = C2736 * C999;
    const double C5612 = C5420 * C999;
    const double C5596 = C5422 * C999;
    const double C7809 = C7790 * C999;
    const double C15277 = C15110 * C999;
    const double C15985 = C15966 * C999;
    const double C18148 = C31747 * C999;
    const double C1167 = C820 * C1148;
    const double C1711 = C818 * C1148;
    const double C1956 = C114 * C1148;
    const double C3479 = C2736 * C1148;
    const double C4487 = C2734 * C1148;
    const double C5724 = C5422 * C1148;
    const double C6253 = C5420 * C1148;
    const double C15853 = C15110 * C1148;
    const double C18276 = C31747 * C1148;
    const double C19100 = C15108 * C1148;
    const double C32048 = C32047 + C32041;
    const double C1701 =
        (2 * (2 * ae * C31965 * C31909 + C31824 * C32119) + C32122 + C32122 +
         C31824 * (C32119 + C32123 + C32123 +
                   C31824 * (2 * ae * C31965 * C31929 +
                             C31824 * C31965 * C31831 * C31867))) /
        C31602;
    const double C14017 = C14016 + C2620;
    const double C32214 = C32197 + C32210;
    const double C32173 = ae * C32171;
    const double C32172 = C31824 * C32171;
    const double C32182 = 4 * C32171;
    const double C32230 = C31965 * C32171;
    const double C6494 =
        (2 * (2 * ae * (C31878 + C31875 * C32083) + C31824 * C32244) + C32247 +
         C32247 +
         C31824 * (C32244 + C32248 + C32248 +
                   C31824 * (2 * ae * (C31875 + C31914 * C32083) +
                             C31824 * (C31855 + C31867 * C32083)))) /
        C31602;
    const double C7138 = C5422 * C7118;
    const double C7660 = C5420 * C7118;
    const double C11466 = C820 * C7118;
    const double C11979 = C818 * C7118;
    const double C12129 = C114 * C7118;
    const double C13566 = C2736 * C7118;
    const double C14487 = C2734 * C7118;
    const double C17839 = C15110 * C7118;
    const double C20305 = C31747 * C7118;
    const double C28221 = C15108 * C7118;
    const double C7139 = C32922 * C7121;
    const double C11467 = C32922 * C7121;
    const double C14995 = C32725 * C7121;
    const double C28729 = C32725 * C7121;
    const double C31116 = C17965 * C7121;
    const double C12490 = C12486 + C12128;
    const double C14596 = C14589 + C12950;
    const double C28330 = C28323 + C17190;
    const double C2298 = C2294 + C2284;
    const double C2296 = C2292 + C2280;
    const double C2129 = C2128 + C2095;
    const double C10663 = C10662 + C10658;
    const double C24775 = C24774 + C24770;
    const double C1341 = C32922 * C1006;
    const double C5895 = C32922 * C1006;
    const double C7807 = C32899 * C1006;
    const double C8209 = C7779 * C1006;
    const double C15983 = C32899 * C1006;
    const double C16385 = C32947 * C1006;
    const double C18447 = C17965 * C1006;
    const double C1352 = C1340 + C1015;
    const double C5906 = C5894 + C5599;
    const double C7827 = C7805 + C7806;
    const double C16003 = C15981 + C15982;
    const double C18458 = C18446 + C18151;
    const double C1534 = C1522 + C1170;
    const double C4885 = C4879 + C3477;
    const double C6085 = C6073 + C5727;
    const double C17427 = C17419 + C15851;
    const double C18637 = C18625 + C18279;
    const double C11813 = C11806 + C1181;
    const double C13166 = C13162 + C5293;
    const double C7491 = C7484 + C5738;
    const double C17425 = C17415 + C17010;
    const double C20312 = C20291 + C18290;
    const double C2617 = C2297 * C813;
    const double C11112 = C2297 * C32938;
    const double C14288 = C2297 * C32588;
    const double C23409 = C2297 * C32588;
    const double C25224 = C2297 * C32591;
    const double C32026 = ae * C32025;
    const double C1002 =
        (3 * C32002 + C31824 * C32025 + (2 * C31996 + C31824 * C32015) * ae) /
        C31595;
    const double C1697 = (C31965 * C32025) / C31595;
    const double C6491 = (C32025 + C32171 * C32083) / C31595;
    const double C7652 = C32922 * C1700;
    const double C9869 = C32899 * C1700;
    const double C10301 = C7779 * C1700;
    const double C11971 = C32922 * C1700;
    const double C20942 = C17965 * C1700;
    const double C27574 = C32899 * C1700;
    const double C28006 = C32947 * C1700;
    const double C12493 = C12491 + C12485;
    const double C486 = C482 + C470;
    const double C594 = C590 + C578;
    const double C1840 = C1837 + C1831;
    const double C12213 = C12211 + C12206;
    const double C31951 = ae * C31950;
    const double C253 = (3 * C31902 + C31831 * C31923 + C31824 * C31950 +
                         C31824 * C31945 * ae) /
                        C31595;
    const double C688 = (C31965 * C31950) / C31595;
    const double C32107 = C32106 + C32103;
    const double C1514 =
        (C31965 * C31871 + C32111 + C32111 +
         C31824 *
             (2 * ae * C31965 * C31944 +
              C31824 * C31965 *
                  (2 * C31831 * C31867 +
                   C31831 * (C31867 + (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31827 * C31843)))) /
        C31602;
    const double C32070 = C32053 + C32068;
    const double C32128 = ae * C32126;
    const double C1184 = C820 * C1156;
    const double C1959 = C114 * C1156;
    const double C5295 = C2736 * C1156;
    const double C5741 = C5422 * C1156;
    const double C17424 = C15110 * C1156;
    const double C18293 = C31747 * C1156;
    const double C32219 = ae * C32217;
    const double C32218 = C31824 * C32217;
    const double C32252 = C32217 * C32083;
    const double C32324 = C31965 * C32217;
    const double C32373 = C32369 + C32370;
    const double C32351 = ae * C32350;
    const double C12479 = (4 * C32341 + C31965 * C32350) / C31595;
    const double C32300 = C32299 + C32289;
    const double C32359 = ae * C32357;
    const double C7477 = (2 * C32120 + C31965 * C32357) / C31595;
    const double C7478 =
        (2 * C32119 + C31965 * C32356 + C32365 + C32365 +
         C31824 * (2 * ae * (2 * C32307 + C31965 * (C31929 + C32273 * C32083)) +
                   C31824 * (2 * C32308 +
                             C31965 * (C32270 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C32083)))) /
        C31602;
    const double C12301 = C114 * C12298;
    const double C12952 = C2736 * C12298;
    const double C17192 = C15110 * C12298;
    const double C31706 = C31700 * be;
    const double C31689 = C31682 * ae;
    const double C15107 = -(C31682 * be) / C31595;
    const double C862 = C846 + C847;
    const double C859 = C837 + C838;
    const double C856 = C828 + C829;
    const double C1353 = C1342 + C1016;
    const double C1350 = C1336 + C1013;
    const double C1535 = C1524 + C1171;
    const double C1532 = C1518 + C1168;
    const double C11484 = C11468 + C11469;
    const double C11481 = C11461 + C1177;
    const double C11478 = C11455 + C1174;
    const double C11812 = C11804 + C1180;
    const double C11985 = C11974 + C11335;
    const double C11982 = C11968 + C1705;
    const double C22302 = C22297 + C1708;
    const double C2773 = C2761 + C2762;
    const double C2770 = C2752 + C2753;
    const double C2768 = C2746 + C2747;
    const double C2766 = C2740 + C2741;
    const double C3169 = C3160 + C2895;
    const double C3167 = C3156 + C2893;
    const double C3165 = C3152 + C2891;
    const double C3331 = C3322 + C3009;
    const double C3329 = C3318 + C3007;
    const double C3327 = C3314 + C3005;
    const double C4664 = C4649 + C3012;
    const double C4662 = C4645 + C3014;
    const double C4660 = C4641 + C3016;
    const double C4657 = C4635 + C3011;
    const double C4886 = C4881 + C3476;
    const double C4884 = C4877 + C3478;
    const double C5296 = C5286 + C3474;
    const double C12958 = C12947 + C4651;
    const double C12956 = C12943 + C4653;
    const double C13167 = C13164 + C5292;
    const double C13569 = C13561 + C5290;
    const double C14597 = C14591 + C12949;
    const double C14998 = C14992 + C13565;
    const double C5465 = C5451 + C5452;
    const double C5460 = C5436 + C5437;
    const double C5457 = C5427 + C5428;
    const double C5908 = C5898 + C5601;
    const double C5905 = C5892 + C5598;
    const double C6087 = C6077 + C5729;
    const double C6084 = C6071 + C5726;
    const double C7157 = C7143 + C7144;
    const double C7152 = C7131 + C5733;
    const double C7149 = C7125 + C5732;
    const double C7489 = C7480 + C5736;
    const double C7665 = C7653 + C6999;
    const double C7662 = C7647 + C6246;
    const double C9165 = C9161 + C6249;
    const double C5464 = C5448 + C5449;
    const double C5461 = C5439 + C5440;
    const double C5458 = C5430 + C5431;
    const double C5907 = C5896 + C5600;
    const double C5904 = C5890 + C5597;
    const double C6086 = C6075 + C5728;
    const double C6083 = C6069 + C5725;
    const double C7156 = C7140 + C7141;
    const double C7153 = C7133 + C5734;
    const double C7150 = C7127 + C5731;
    const double C7490 = C7482 + C5737;
    const double C7666 = C7655 + C6998;
    const double C7663 = C7649 + C6247;
    const double C9164 = C9159 + C6250;
    const double C872 = C863 + C850;
    const double C867 = C858 + C835;
    const double C864 = C855 + C826;
    const double C1360 = C1354 + C1017;
    const double C1357 = C1351 + C1014;
    const double C1542 = C1536 + C1172;
    const double C1539 = C1533 + C1169;
    const double C11494 = C11485 + C11472;
    const double C11489 = C11480 + C1176;
    const double C11486 = C11477 + C1175;
    const double C11814 = C11811 + C1179;
    const double C11990 = C11984 + C11336;
    const double C11987 = C11981 + C1704;
    const double C22306 = C22303 + C1707;
    const double C869 = C860 + C841;
    const double C866 = C857 + C832;
    const double C11491 = C11482 + C1178;
    const double C11488 = C11479 + C1173;
    const double C2780 = C2772 + C2759;
    const double C2779 = C2771 + C2756;
    const double C2777 = C2769 + C2750;
    const double C2775 = C2767 + C2744;
    const double C3174 = C3168 + C2894;
    const double C3172 = C3166 + C2892;
    const double C3336 = C3330 + C3008;
    const double C3334 = C3328 + C3006;
    const double C4671 = C4663 + C3013;
    const double C4669 = C4661 + C3015;
    const double C4667 = C4659 + C3017;
    const double C4666 = C4658 + C3010;
    const double C5299 = C5297 + C3475;
    const double C12962 = C12957 + C4652;
    const double C12960 = C12955 + C4654;
    const double C13572 = C13570 + C5291;
    const double C5471 = C5462 + C5443;
    const double C5468 = C5459 + C5434;
    const double C7163 = C7154 + C5735;
    const double C7160 = C7151 + C5730;
    const double C15154 = C15146 + C15133;
    const double C15153 = C15145 + C15130;
    const double C15151 = C15143 + C15124;
    const double C15149 = C15141 + C15118;
    const double C15548 = C15542 + C15268;
    const double C15546 = C15540 + C15266;
    const double C15710 = C15704 + C15382;
    const double C15708 = C15702 + C15380;
    const double C16858 = C16854 + C15391;
    const double C16857 = C16853 + C15389;
    const double C17208 = C17200 + C17184;
    const double C17206 = C17198 + C17178;
    const double C17205 = C17196 + C15387;
    const double C17203 = C17194 + C15384;
    const double C17849 = C17845 + C17012;
    const double C17847 = C17843 + C15849;
    const double C18023 = C18014 + C17995;
    const double C18020 = C18011 + C17986;
    const double C20324 = C20315 + C18287;
    const double C20320 = C20311 + C18282;
    const double C31722 = C31693 - C31715;
    const double C31698 = C31691 + C32890;
    const double C870 = C861 + C844;
    const double C3170 = C3164 + C2890;
    const double C5472 = C5463 + C5446;
    const double C15544 = C15538 + C15264;
    const double C18024 = C18015 + C17998;
    const double C3920 = C3919 + C698;
    const double C3332 = C3326 + C3004;
    const double C15706 = C15700 + C15378;
    const double C1335 = C32922 * C1005;
    const double C5889 = C32922 * C1005;
    const double C7810 = C32899 * C1005;
    const double C15986 = C32899 * C1005;
    const double C18441 = C17965 * C1005;
    const double C1349 = C1334 + C1012;
    const double C5903 = C5888 + C5596;
    const double C7828 = C7808 + C7809;
    const double C16004 = C15984 + C15985;
    const double C18455 = C18440 + C18148;
    const double C1531 = C1516 + C1167;
    const double C4883 = C4875 + C3479;
    const double C6082 = C6067 + C5724;
    const double C19446 = C19442 + C15853;
    const double C18634 = C18619 + C18276;
    const double C32049 = ae * C32048;
    const double C1003 =
        (3 * C31991 + C31824 * C32048 + (2 * C31985 + C31824 * C32038) * ae) /
        C31595;
    const double C1698 = (C31965 * C32048) / C31595;
    const double C8361 = C32899 * C1701;
    const double C9158 = C32922 * C1701;
    const double C16537 = C32899 * C1701;
    const double C20531 = C17965 * C1701;
    const double C22296 = C32922 * C1701;
    const double C14018 = C14017 + C14015;
    const double C32174 = C32145 + C32172;
    const double C32235 = ae * C32230;
    const double C7658 = C32922 * C6494;
    const double C9871 = C32899 * C6494;
    const double C11977 = C32922 * C6494;
    const double C27576 = C32899 * C6494;
    const double C31578 = C17965 * C6494;
    const double C7155 = C7137 + C7138;
    const double C11483 = C11465 + C11466;
    const double C14999 = C14994 + C13566;
    const double C28733 = C28728 + C17839;
    const double C31125 = C31115 + C20305;
    const double C12492 = C12490 + C12128;
    const double C14598 = C14596 + C12950;
    const double C28332 = C28330 + C17190;
    const double C2614 = C2298 * C32913;
    const double C4188 = C2298 * C2731;
    const double C11110 = C2298 * C32913;
    const double C21658 = C2298 * C32940;
    const double C25222 = C2298 * C17968;
    const double C2618 = C2296 * C32913;
    const double C11113 = C2296 * C32913;
    const double C25225 = C2296 * C17968;
    const double C1358 = C1352 + C1015;
    const double C5912 = C5906 + C5599;
    const double C7835 = C7827 + C7806;
    const double C16011 = C16003 + C15982;
    const double C18464 = C18458 + C18151;
    const double C1540 = C1534 + C1170;
    const double C4889 = C4885 + C3477;
    const double C6091 = C6085 + C5727;
    const double C17431 = C17427 + C15851;
    const double C18643 = C18637 + C18279;
    const double C11816 = C11813 + C1181;
    const double C13168 = C13166 + C5293;
    const double C7494 = C7491 + C5738;
    const double C17429 = C17425 + C17010;
    const double C20321 = C20312 + C18290;
    const double C1008 =
        (3 * (C31838 + C32000 + C32000 + C31824 * C32016) + C32026 + C32026 +
         C31824 * (2 * C32016 + C32023 + C32023 +
                   C31824 * (C31847 + C32019 + C32019 +
                             C31824 * (2 * ae * C31875 + C31824 * C31855)))) /
        C31602;
    const double C1023 = C820 * C1002;
    const double C5607 = C5422 * C1002;
    const double C6337 = C6331 * C1002;
    const double C7950 = C7790 * C1002;
    const double C16126 = C15966 * C1002;
    const double C18159 = C31747 * C1002;
    const double C1706 = C820 * C1697;
    const double C4484 = C2736 * C1697;
    const double C6248 = C5422 * C1697;
    const double C7001 = C5420 * C1697;
    const double C8064 = C7790 * C1697;
    const double C11338 = C818 * C1697;
    const double C16240 = C15966 * C1697;
    const double C17015 = C15110 * C1697;
    const double C18800 = C31747 * C1697;
    const double C7004 = C5420 * C6491;
    const double C6997 = C5422 * C6491;
    const double C8071 = C7790 * C6491;
    const double C11341 = C818 * C6491;
    const double C11334 = C820 * C6491;
    const double C12790 = C2736 * C6491;
    const double C16247 = C15966 * C6491;
    const double C17019 = C15110 * C6491;
    const double C20945 = C31747 * C6491;
    const double C12495 = C12493 * C32578;
    const double C14289 = C12493 * C32872;
    const double C23410 = C12493 * C15957;
    const double C4055 = C594 * C32891;
    const double C21525 = C594 * C32891;
    const double C2454 = C1840 * C32913;
    const double C3783 = C1840 * C32891;
    const double C10961 = C1840 * C32913;
    const double C21258 = C1840 * C32891;
    const double C25073 = C1840 * C17968;
    const double C12215 = C12213 * C32578;
    const double C263 =
        (3 * C31857 + C31831 * C31871 + C31951 + C31951 +
         C31824 *
             (2 * ae * C31948 +
              C31824 * (3 * C31869 +
                        C31831 * (2 * C31831 * C31867 +
                                  C31831 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C274 = C114 * C253;
    const double C854 = C820 * C253;
    const double C3163 = C2736 * C253;
    const double C5456 = C5422 * C253;
    const double C15537 = C15110 * C253;
    const double C18008 = C31747 * C253;
    const double C699 = C114 * C688;
    const double C3325 = C2736 * C688;
    const double C15699 = C15110 * C688;
    const double C32108 = ae * C32107;
    const double C1331 =
        (2 * C31925 + C31824 * C32107 + (C31920 + C31941 * C31828) * ae) /
        C31595;
    const double C1513 = (C31965 * C32107) / C31595;
    const double C32071 = C32070 + C32064;
    const double C1702 =
        (2 * (2 * ae * C31965 * C31919 + C31824 * C32125) + C32128 + C32128 +
         C31824 *
             (C32125 + C32129 + C32129 +
              C31824 * (2 * ae * C31965 * C31940 +
                        C31824 * C31965 *
                            (C31867 + (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31827 * C31843)))) /
        C31602;
    const double C32220 = C32183 + C32218;
    const double C32257 = C32171 + C32252;
    const double C32331 = ae * C32324;
    const double C32374 = ae * C32373;
    const double C7120 = (3 * C32245 + C31965 * C32373) / C31595;
    const double C7123 =
        (3 * C32244 + C31965 * (2 * C32229 + C31965 * C32256) + C32351 +
         C32351 +
         C31824 *
             (2 * ae *
                  (3 * C32255 +
                   C31965 *
                       (2 * C32321 + C31965 * (C31914 + C31935 * C32083))) +
              C31824 * (3 * C32256 +
                        C31965 * (2 * C32322 +
                                  C31965 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C32083))))) /
        C31602;
    const double C12488 = C114 * C12479;
    const double C14594 = C2736 * C12479;
    const double C28328 = C15110 * C12479;
    const double C32302 = ae * C32300;
    const double C32301 = C31824 * C32300;
    const double C32309 = C31965 * C32300;
    const double C7325 = (C32048 + C32300 * C32083) / C31595;
    const double C7326 =
        (2 * (2 * ae * (C31909 + C31929 * C32083) + C31824 * C32356) + C32359 +
         C32359 +
         C31824 * (C32356 + C32360 + C32360 +
                   C31824 * (2 * ae * (C31929 + C32273 * C32083) +
                             C31824 * (C32270 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C32083)))) /
        C31602;
    const double C7488 = C5422 * C7477;
    const double C11810 = C820 * C7477;
    const double C13568 = C2736 * C7477;
    const double C13775 = C114 * C7477;
    const double C17841 = C15110 * C7477;
    const double C20308 = C31747 * C7477;
    const double C31714 = C31706 / C31595;
    const double C31699 = C31689 / C31606;
    const double C31697 = C31593 * C31689;
    const double C15135 = C15107 * C119;
    const double C15126 = C15107 * C118;
    const double C15120 = C15107 * C117;
    const double C15114 = C15107 * C116;
    const double C15534 = C15107 * C237;
    const double C15530 = C15107 * C236;
    const double C15526 = C15107 * C235;
    const double C15696 = C15107 * C342;
    const double C15692 = C15107 * C341;
    const double C15688 = C15107 * C340;
    const double C16850 = C15107 * C346;
    const double C16844 = C15107 * C345;
    const double C17186 = C15107 * C2071;
    const double C17180 = C15107 * C2070;
    const double C17172 = C15107 * C344;
    const double C17168 = C15107 * C343;
    const double C17421 = C15107 * C680;
    const double C17417 = C15107 * C1144;
    const double C17834 = C15107 * C1142;
    const double C17830 = C15107 * C679;
    const double C19444 = C15107 * C681;
    const double C28325 = C15107 * C2072;
    const double C28726 = C15107 * C2601;
    const double C871 = C862 + C847;
    const double C868 = C859 + C838;
    const double C865 = C856 + C829;
    const double C1359 = C1353 + C1016;
    const double C1356 = C1350 + C1013;
    const double C1541 = C1535 + C1171;
    const double C1538 = C1532 + C1168;
    const double C11493 = C11484 + C11469;
    const double C11490 = C11481 + C1177;
    const double C11487 = C11478 + C1174;
    const double C11815 = C11812 + C1180;
    const double C11991 = C11985 + C11335;
    const double C11988 = C11982 + C1705;
    const double C22305 = C22302 + C1708;
    const double C2781 = C2773 + C2762;
    const double C2778 = C2770 + C2753;
    const double C2776 = C2768 + C2747;
    const double C2774 = C2766 + C2741;
    const double C3175 = C3169 + C2895;
    const double C3173 = C3167 + C2893;
    const double C3171 = C3165 + C2891;
    const double C3337 = C3331 + C3009;
    const double C3335 = C3329 + C3007;
    const double C3333 = C3327 + C3005;
    const double C4672 = C4664 + C3012;
    const double C4670 = C4662 + C3014;
    const double C4668 = C4660 + C3016;
    const double C4665 = C4657 + C3011;
    const double C4890 = C4886 + C3476;
    const double C4888 = C4884 + C3478;
    const double C5298 = C5296 + C3474;
    const double C12963 = C12958 + C4651;
    const double C12961 = C12956 + C4653;
    const double C13169 = C13167 + C5292;
    const double C13571 = C13569 + C5290;
    const double C14599 = C14597 + C12949;
    const double C15000 = C14998 + C13565;
    const double C5474 = C5465 + C5452;
    const double C5469 = C5460 + C5437;
    const double C5466 = C5457 + C5428;
    const double C5914 = C5908 + C5601;
    const double C5911 = C5905 + C5598;
    const double C6093 = C6087 + C5729;
    const double C6090 = C6084 + C5726;
    const double C7166 = C7157 + C7144;
    const double C7161 = C7152 + C5733;
    const double C7158 = C7149 + C5732;
    const double C7492 = C7489 + C5736;
    const double C7671 = C7665 + C6999;
    const double C7668 = C7662 + C6246;
    const double C9168 = C9165 + C6249;
    const double C5473 = C5464 + C5449;
    const double C5470 = C5461 + C5440;
    const double C5467 = C5458 + C5431;
    const double C5913 = C5907 + C5600;
    const double C5910 = C5904 + C5597;
    const double C6092 = C6086 + C5728;
    const double C6089 = C6083 + C5725;
    const double C7165 = C7156 + C7141;
    const double C7162 = C7153 + C5734;
    const double C7159 = C7150 + C5731;
    const double C7493 = C7490 + C5737;
    const double C7672 = C7666 + C6998;
    const double C7669 = C7663 + C6247;
    const double C9167 = C9164 + C6250;
    const double C881 = C872 + C851;
    const double C876 = C867 + C836;
    const double C873 = C864 + C827;
    const double C1366 = C1360 + C1345;
    const double C1363 = C1357 + C1339;
    const double C1548 = C1542 + C1527;
    const double C1545 = C1539 + C1521;
    const double C11503 = C11494 + C11473;
    const double C11498 = C11489 + C11460;
    const double C11495 = C11486 + C11454;
    const double C11817 = C11814 + C11803;
    const double C11996 = C11990 + C11973;
    const double C11993 = C11987 + C11967;
    const double C22309 = C22306 + C22300;
    const double C878 = C869 + C842;
    const double C875 = C866 + C833;
    const double C11500 = C11491 + C11464;
    const double C11497 = C11488 + C11458;
    const double C2788 = C2780 + C2760;
    const double C2787 = C2779 + C2757;
    const double C2785 = C2777 + C2751;
    const double C2783 = C2775 + C2745;
    const double C3180 = C3174 + C3159;
    const double C3178 = C3172 + C3155;
    const double C3342 = C3336 + C3321;
    const double C3340 = C3334 + C3317;
    const double C4679 = C4671 + C4648;
    const double C4677 = C4669 + C4644;
    const double C4675 = C4667 + C4640;
    const double C4674 = C4666 + C4638;
    const double C5301 = C5299 + C5289;
    const double C12966 = C12962 + C12946;
    const double C12964 = C12960 + C12942;
    const double C13574 = C13572 + C13564;
    const double C5480 = C5471 + C5444;
    const double C5477 = C5468 + C5435;
    const double C7172 = C7163 + C7136;
    const double C7169 = C7160 + C7130;
    const double C15162 = C15154 + C15134;
    const double C15161 = C15153 + C15131;
    const double C15159 = C15151 + C15125;
    const double C15157 = C15149 + C15119;
    const double C15554 = C15548 + C15533;
    const double C15552 = C15546 + C15529;
    const double C15716 = C15710 + C15695;
    const double C15714 = C15708 + C15691;
    const double C16862 = C16858 + C16849;
    const double C16861 = C16857 + C16847;
    const double C17216 = C17208 + C17185;
    const double C17214 = C17206 + C17179;
    const double C17213 = C17205 + C17175;
    const double C17211 = C17203 + C17171;
    const double C17853 = C17849 + C17837;
    const double C17851 = C17847 + C17833;
    const double C18032 = C18023 + C17996;
    const double C18029 = C18020 + C17987;
    const double C20333 = C20324 + C20298;
    const double C20329 = C20320 + C20290;
    const double C18007 = C31722 * C244;
    const double C18001 = C31722 * C245;
    const double C17992 = C31722 * C246;
    const double C17983 = C31722 * C247;
    const double C17977 = C31722 * C248;
    const double C18164 = C31722 * C999;
    const double C18161 = C31722 * C1000;
    const double C18158 = C31722 * C1001;
    const double C18155 = C31722 * C249;
    const double C18152 = C31722 * C250;
    const double C18149 = C31722 * C251;
    const double C18292 = C31722 * C1155;
    const double C18289 = C31722 * C1153;
    const double C18286 = C31722 * C1151;
    const double C18283 = C31722 * C684;
    const double C18280 = C31722 * C685;
    const double C18277 = C31722 * C686;
    const double C18453 = C31722 * C252;
    const double C18632 = C31722 * C687;
    const double C18805 = C31722 * C1148;
    const double C18802 = C31722 * C1149;
    const double C18799 = C31722 * C1150;
    const double C20134 = C31722 * C1697;
    const double C20307 = C31722 * C2605;
    const double C20304 = C31722 * C2604;
    const double C20947 = C31722 * C1154;
    const double C20944 = C31722 * C1152;
    const double C31002 = C31722 * C6491;
    const double C31122 = C31722 * C7119;
    const double C31580 = C31722 * C7118;
    const double C6329 =
        (C31722 / C31637 + ((C31593 * C31747 + C17965) * ae) / C31595) /
            C31637 -
        ((C31593 * (C31747 / C31637 + (0 * ae) / C31595) + C32899) * be) /
            C31595;
    const double C7788 =
        C31722 / C31637 - ((C31593 * C31747 + C17965) * be) / C31595;
    const double C15964 =
        C31722 / C31637 + ((C31593 * C31747 + C17965) * ae) / C31595;
    const double C31705 = C31698 * be;
    const double C879 = C870 + C845;
    const double C3176 = C3170 + C3151;
    const double C5481 = C5472 + C5447;
    const double C15550 = C15544 + C15525;
    const double C18033 = C18024 + C17999;
    const double C3921 = C3920 + C3918;
    const double C3338 = C3332 + C3313;
    const double C15712 = C15706 + C15687;
    const double C1355 = C1349 + C1012;
    const double C5909 = C5903 + C5596;
    const double C7836 = C7828 + C7809;
    const double C16012 = C16004 + C15985;
    const double C18461 = C18455 + C18148;
    const double C1537 = C1531 + C1167;
    const double C4887 = C4883 + C3479;
    const double C6088 = C6082 + C5724;
    const double C19448 = C19446 + C15853;
    const double C18640 = C18634 + C18276;
    const double C1009 =
        (3 * (C31982 + C31989 + C31989 + C31824 * C32039) + C32049 + C32049 +
         C31824 * (2 * C32039 + C32046 + C32046 +
                   C31824 * (C31859 + C32042 + C32042 +
                             C31824 * (2 * ae * C31929 +
                                       C31824 * C31831 * C31867)))) /
        C31602;
    const double C1026 = C820 * C1003;
    const double C5610 = C5422 * C1003;
    const double C6338 = C6331 * C1003;
    const double C7946 = C7790 * C1003;
    const double C16122 = C15966 * C1003;
    const double C18162 = C31747 * C1003;
    const double C1709 = C820 * C1698;
    const double C4486 = C2736 * C1698;
    const double C6251 = C5422 * C1698;
    const double C8060 = C7790 * C1698;
    const double C8815 = C5420 * C1698;
    const double C16236 = C15966 * C1698;
    const double C17017 = C15110 * C1698;
    const double C18803 = C31747 * C1698;
    const double C20137 = C31722 * C1698;
    const double C21953 = C818 * C1698;
    const double C14290 = C14018 * C32588;
    const double C23411 = C14018 * C32588;
    const double C32175 = C32174 + C32167;
    const double C6493 =
        (3 * (C32113 + C32117 + C32117 + C31824 * C32239) + C32235 + C32235 +
         C31824 * (2 * C32239 + C32236 + C32236 +
                   C31824 * (C32229 + C32237 + C32237 +
                             C31824 * (2 * ae * C31965 * C31914 +
                                       C31824 * C31965 * C31867)))) /
        C31602;
    const double C7164 = C7155 + C7138;
    const double C11492 = C11483 + C11466;
    const double C15001 = C14999 + C13566;
    const double C28735 = C28733 + C17839;
    const double C31129 = C31125 + C20305;
    const double C12494 = C12492 + C12487;
    const double C14600 = C14598 + C14590;
    const double C28334 = C28332 + C28324;
    const double C1364 = C1358 + C1341;
    const double C5918 = C5912 + C5895;
    const double C7843 = C7835 + C7807;
    const double C16019 = C16011 + C15983;
    const double C18470 = C18464 + C18447;
    const double C1546 = C1540 + C1523;
    const double C4893 = C4889 + C4880;
    const double C6097 = C6091 + C6074;
    const double C17435 = C17431 + C17420;
    const double C18649 = C18643 + C18626;
    const double C11819 = C11816 + C11807;
    const double C13170 = C13168 + C13163;
    const double C7497 = C7494 + C7485;
    const double C17433 = C17429 + C17416;
    const double C20330 = C20321 + C20292;
    const double C11983 = C11970 + C1706;
    const double C7664 = C7651 + C6248;
    const double C9885 = C9868 + C8064;
    const double C27590 = C27573 + C16240;
    const double C20951 = C20941 + C18800;
    const double C7667 = C7657 + C6997;
    const double C9886 = C9870 + C8071;
    const double C11986 = C11976 + C11334;
    const double C27591 = C27575 + C16247;
    const double C31584 = C31577 + C20945;
    const double C1332 =
        (2 * (2 * ae * C31923 + C31824 * C31871) + C32108 + C32108 +
         C31824 *
             (C31871 + C32105 + C32105 +
              C31824 * (2 * ae * C31944 +
                        C31824 * (2 * C31831 * C31867 +
                                  C31831 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C1348 = C820 * C1331;
    const double C2905 = C2736 * C1331;
    const double C5902 = C5422 * C1331;
    const double C7823 = C7790 * C1331;
    const double C15279 = C15110 * C1331;
    const double C15999 = C15966 * C1331;
    const double C18454 = C31747 * C1331;
    const double C1530 = C820 * C1513;
    const double C3481 = C2736 * C1513;
    const double C3680 = C114 * C1513;
    const double C6081 = C5422 * C1513;
    const double C15855 = C15110 * C1513;
    const double C18633 = C31747 * C1513;
    const double C32072 = ae * C32071;
    const double C1004 =
        (3 * C31979 + C31824 * C32071 + (2 * C31973 + C31824 * C32061) * ae) /
        C31595;
    const double C1699 = (C31965 * C32071) / C31595;
    const double C32221 = C32220 + C32208;
    const double C32262 = ae * C32257;
    const double C7644 = (2 * C32230 + C31965 * C32257) / C31595;
    const double C7645 =
        (2 * (2 * ae * (2 * C32228 + C31965 * C32255) + C31824 * C32372) +
         C32374 + C32374 +
         C31824 *
             (C32372 + C32371 + C32371 +
              C31824 *
                  (2 * ae * (2 * C32321 + C31965 * (C31914 + C31935 * C32083)) +
                   C31824 * (2 * C32322 +
                             C31965 * (C31867 +
                                       (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C32083))))) /
        C31602;
    const double C7148 = C5422 * C7120;
    const double C11476 = C820 * C7120;
    const double C12130 = C114 * C7120;
    const double C14997 = C2736 * C7120;
    const double C28731 = C15110 * C7120;
    const double C31123 = C31747 * C7120;
    const double C32303 = C32271 + C32301;
    const double C32314 = ae * C32309;
    const double C7330 = C5422 * C7325;
    const double C8075 = C7790 * C7325;
    const double C11655 = C820 * C7325;
    const double C12792 = C2736 * C7325;
    const double C16251 = C15966 * C7325;
    const double C17021 = C15110 * C7325;
    const double C20948 = C31747 * C7325;
    const double C31721 = C31699 - C31714;
    const double C31704 = C31697 / C31595;
    const double C15147 = C15135 + C15136;
    const double C15144 = C15126 + C15127;
    const double C15142 = C15120 + C15121;
    const double C15140 = C15114 + C15115;
    const double C15543 = C15534 + C15269;
    const double C15541 = C15530 + C15267;
    const double C15539 = C15526 + C15265;
    const double C15705 = C15696 + C15383;
    const double C15703 = C15692 + C15381;
    const double C15701 = C15688 + C15379;
    const double C16855 = C16850 + C15390;
    const double C16852 = C16844 + C15388;
    const double C17201 = C17186 + C17187;
    const double C17199 = C17180 + C17181;
    const double C17195 = C17172 + C15386;
    const double C17193 = C17168 + C15385;
    const double C17428 = C17421 + C15850;
    const double C17426 = C17417 + C17011;
    const double C17844 = C17834 + C17013;
    const double C17842 = C17830 + C15848;
    const double C19447 = C19444 + C15852;
    const double C28331 = C28325 + C17189;
    const double C28732 = C28726 + C17838;
    const double C880 = C871 + C848;
    const double C877 = C868 + C839;
    const double C874 = C865 + C830;
    const double C1365 = C1359 + C1343;
    const double C1362 = C1356 + C1337;
    const double C1547 = C1541 + C1525;
    const double C1544 = C1538 + C1519;
    const double C11502 = C11493 + C11470;
    const double C11499 = C11490 + C11462;
    const double C11496 = C11487 + C11456;
    const double C11818 = C11815 + C11805;
    const double C11997 = C11991 + C11975;
    const double C11994 = C11988 + C11969;
    const double C22308 = C22305 + C22298;
    const double C2789 = C2781 + C2763;
    const double C2786 = C2778 + C2754;
    const double C2784 = C2776 + C2748;
    const double C2782 = C2774 + C2742;
    const double C3181 = C3175 + C3161;
    const double C3179 = C3173 + C3157;
    const double C3177 = C3171 + C3153;
    const double C3343 = C3337 + C3323;
    const double C3341 = C3335 + C3319;
    const double C3339 = C3333 + C3315;
    const double C4680 = C4672 + C4650;
    const double C4678 = C4670 + C4646;
    const double C4676 = C4668 + C4642;
    const double C4673 = C4665 + C4636;
    const double C4894 = C4890 + C4882;
    const double C4892 = C4888 + C4878;
    const double C5300 = C5298 + C5287;
    const double C12967 = C12963 + C12948;
    const double C12965 = C12961 + C12944;
    const double C13171 = C13169 + C13165;
    const double C13573 = C13571 + C13562;
    const double C14601 = C14599 + C14592;
    const double C15002 = C15000 + C14993;
    const double C5483 = C5474 + C5453;
    const double C5478 = C5469 + C5438;
    const double C5475 = C5466 + C5429;
    const double C5920 = C5914 + C5899;
    const double C5917 = C5911 + C5893;
    const double C6099 = C6093 + C6078;
    const double C6096 = C6090 + C6072;
    const double C7175 = C7166 + C7145;
    const double C7170 = C7161 + C7132;
    const double C7167 = C7158 + C7126;
    const double C7495 = C7492 + C7481;
    const double C7677 = C7671 + C7654;
    const double C7674 = C7668 + C7648;
    const double C9171 = C9168 + C9162;
    const double C5482 = C5473 + C5450;
    const double C5479 = C5470 + C5441;
    const double C5476 = C5467 + C5432;
    const double C5919 = C5913 + C5897;
    const double C5916 = C5910 + C5891;
    const double C6098 = C6092 + C6076;
    const double C6095 = C6089 + C6070;
    const double C7174 = C7165 + C7142;
    const double C7171 = C7162 + C7134;
    const double C7168 = C7159 + C7128;
    const double C7496 = C7493 + C7483;
    const double C7678 = C7672 + C7656;
    const double C7675 = C7669 + C7650;
    const double C9170 = C9167 + C9160;
    const double C6346 = C6329 * C999;
    const double C6339 = C6329 * C1000;
    const double C6336 = C6329 * C1001;
    const double C6417 = C6329 * C1002;
    const double C6505 = C6329 * C6491;
    const double C6498 = C6329 * C1697;
    const double C6595 = C6329 * C1003;
    const double C6685 = C6329 * C1698;
    const double C7822 = C7788 * C252;
    const double C7812 = C7788 * C251;
    const double C7803 = C7788 * C250;
    const double C7794 = C7788 * C249;
    const double C7960 = C7788 * C1003;
    const double C7956 = C7788 * C1002;
    const double C7951 = C7788 * C1001;
    const double C7947 = C7788 * C1000;
    const double C8074 = C7788 * C1154;
    const double C8070 = C7788 * C1152;
    const double C8065 = C7788 * C1150;
    const double C8061 = C7788 * C1149;
    const double C8216 = C7788 * C999;
    const double C8370 = C7788 * C1148;
    const double C8520 = C7788 * C1698;
    const double C8516 = C7788 * C1697;
    const double C9880 = C7788 * C7118;
    const double C10306 = C7788 * C6491;
    const double C15998 = C15964 * C252;
    const double C15988 = C15964 * C251;
    const double C15979 = C15964 * C250;
    const double C15970 = C15964 * C249;
    const double C16136 = C15964 * C1003;
    const double C16132 = C15964 * C1002;
    const double C16127 = C15964 * C1001;
    const double C16123 = C15964 * C1000;
    const double C16250 = C15964 * C1154;
    const double C16246 = C15964 * C1152;
    const double C16241 = C15964 * C1150;
    const double C16237 = C15964 * C1149;
    const double C16392 = C15964 * C999;
    const double C16546 = C15964 * C1148;
    const double C16696 = C15964 * C1698;
    const double C16692 = C15964 * C1697;
    const double C27585 = C15964 * C7118;
    const double C28011 = C15964 * C6491;
    const double C31713 = C31705 / C31595;
    const double C4189 = C3921 * C32891;
    const double C21659 = C3921 * C32891;
    const double C1361 = C1355 + C1335;
    const double C5915 = C5909 + C5889;
    const double C7844 = C7836 + C7810;
    const double C16020 = C16012 + C15986;
    const double C18467 = C18461 + C18441;
    const double C1543 = C1537 + C1517;
    const double C4891 = C4887 + C4876;
    const double C6094 = C6088 + C6068;
    const double C19450 = C19448 + C19443;
    const double C18646 = C18640 + C18620;
    const double C8207 = C32899 * C1009;
    const double C16383 = C32899 * C1009;
    const double C8218 = C8206 + C7946;
    const double C16394 = C16382 + C16122;
    const double C22301 = C22295 + C1709;
    const double C9163 = C9157 + C6251;
    const double C8372 = C8360 + C8060;
    const double C16548 = C16536 + C16236;
    const double C20536 = C20530 + C18803;
    const double C32176 = ae * C32175;
    const double C6411 =
        (4 * C32025 + C31824 * C32175 + (3 * C32015 + C31824 * C32164) * ae) /
        C31595;
    const double C6490 = (C31965 * C32175) / C31595;
    const double C10303 = C32899 * C6493;
    const double C28008 = C32899 * C6493;
    const double C7173 = C7164 + C7139;
    const double C11501 = C11492 + C11467;
    const double C15003 = C15001 + C14995;
    const double C28737 = C28735 + C28729;
    const double C31132 = C31129 + C31116;
    const double C12496 = C12494 * C32578;
    const double C11989 = C11983 + C1706;
    const double C7670 = C7664 + C6248;
    const double C9893 = C9885 + C8064;
    const double C27598 = C27590 + C16240;
    const double C20954 = C20951 + C18800;
    const double C7673 = C7667 + C6997;
    const double C9894 = C9886 + C8071;
    const double C11992 = C11986 + C11334;
    const double C27599 = C27591 + C16247;
    const double C31587 = C31584 + C20945;
    const double C1010 =
        (3 * (C31857 + C31977 + C31977 + C31824 * C32062) + C32072 + C32072 +
         C31824 *
             (2 * C32062 + C32069 + C32069 +
              C31824 * (C31869 + C32065 + C32065 +
                        C31824 * (2 * ae * C31940 +
                                  C31824 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C1029 = C820 * C1004;
    const double C5613 = C5422 * C1004;
    const double C6347 = C6331 * C1004;
    const double C8217 = C7790 * C1004;
    const double C16393 = C15966 * C1004;
    const double C18165 = C31747 * C1004;
    const double C1712 = C820 * C1699;
    const double C4488 = C2736 * C1699;
    const double C6254 = C5422 * C1699;
    const double C8371 = C7790 * C1699;
    const double C16547 = C15966 * C1699;
    const double C18806 = C31747 * C1699;
    const double C19101 = C15110 * C1699;
    const double C32223 = ae * C32221;
    const double C32222 = C31824 * C32221;
    const double C32323 = C31965 * C32221;
    const double C6492 = (C32175 + C32221 * C32083) / C31595;
    const double C6495 =
        (3 * (C32244 + C32248 + C32248 + C31824 * C32266) + C32262 + C32262 +
         C31824 *
             (2 * C32266 + C32263 + C32263 +
              C31824 * (C32256 + C32264 + C32264 +
                        C31824 * (2 * ae * (C31914 + C31935 * C32083) +
                                  C31824 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C32083))))) /
        C31602;
    const double C7661 = C5422 * C7644;
    const double C9881 = C7790 * C7644;
    const double C11980 = C820 * C7644;
    const double C14488 = C2736 * C7644;
    const double C27586 = C15966 * C7644;
    const double C28222 = C15110 * C7644;
    const double C31581 = C31747 * C7644;
    const double C32304 = C32303 + C32296;
    const double C6680 =
        (3 * (C32119 + C32123 + C32123 + C31824 * C32318) + C32314 + C32314 +
         C31824 *
             (2 * C32318 + C32315 + C32315 +
              C31824 * (C32308 + C32316 + C32316 +
                        C31824 * (2 * ae * C31965 * C32273 +
                                  C31824 * C31965 * C31831 *
                                      (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                      C31827)))) /
        C31602;
    const double C18000 = C31721 * C235;
    const double C17991 = C31721 * C236;
    const double C17982 = C31721 * C237;
    const double C18448 = C31721 * C240;
    const double C18442 = C31721 * C241;
    const double C18627 = C31721 * C680;
    const double C18621 = C31721 * C681;
    const double C20299 = C31721 * C1142;
    const double C20293 = C31721 * C1144;
    const double C20287 = C31721 * C679;
    const double C20532 = C31721 * C1140;
    const double C20939 = C31721 * C1141;
    const double C31117 = C31721 * C2601;
    const double C31575 = C31721 * C1143;
    const double C6328 =
        (C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595) /
            C31637 -
        ((2 * (C31747 / C31637 + (0 * ae) / C31595) -
          C31619 / (C31595 * 4 * C31655)) *
         be) /
            C31595;
    const double C7787 =
        C31721 / C31637 - ((C31748 - C31619 / C31745) * be) / C31595;
    const double C15963 =
        C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595;
    const double C31711 = C31704 + C31690;
    const double C15155 = C15147 + C15136;
    const double C15152 = C15144 + C15127;
    const double C15150 = C15142 + C15121;
    const double C15148 = C15140 + C15115;
    const double C15549 = C15543 + C15269;
    const double C15547 = C15541 + C15267;
    const double C15545 = C15539 + C15265;
    const double C15711 = C15705 + C15383;
    const double C15709 = C15703 + C15381;
    const double C15707 = C15701 + C15379;
    const double C16859 = C16855 + C15390;
    const double C16856 = C16852 + C15388;
    const double C17209 = C17201 + C17187;
    const double C17207 = C17199 + C17181;
    const double C17204 = C17195 + C15386;
    const double C17202 = C17193 + C15385;
    const double C17432 = C17428 + C15850;
    const double C17430 = C17426 + C17011;
    const double C17848 = C17844 + C17013;
    const double C17846 = C17842 + C15848;
    const double C19449 = C19447 + C15852;
    const double C28333 = C28331 + C17189;
    const double C28734 = C28732 + C17838;
    const double C882 = C876 + C877;
    const double C22505 = C1547 + C1548;
    const double C22504 = C1548 + C1547;
    const double C11504 = C11498 + C11499;
    const double C2791 = C2786 + C2787;
    const double C2790 = C2784 + C2785;
    const double C5091 = C3342 + C3343;
    const double C5089 = C3343 + C3342;
    const double C4336 = C3341 + C3340;
    const double C5090 = C3340 + C3341;
    const double C12939 = C4680 + C4679;
    const double C12940 = C4678 + C4677;
    const double C13366 = C4677 + C4678;
    const double C14588 = C12967 + C12966;
    const double C5484 = C5478 + C5479;
    const double C9367 = C6098 + C6099;
    const double C9366 = C6099 + C6098;
    const double C7176 = C7170 + C7171;
    const double C31720 = C31712 - C31713;
    const double C8222 = C8218 + C7946;
    const double C16398 = C16394 + C16122;
    const double C22304 = C22301 + C1709;
    const double C9166 = C9163 + C6251;
    const double C8376 = C8372 + C8060;
    const double C16552 = C16548 + C16236;
    const double C20539 = C20536 + C18803;
    const double C6413 =
        (4 * (2 * C32016 + C32023 + C32023 + C31824 * C32165) + C32176 +
         C32176 +
         C31824 * (3 * C32165 + C32173 + C32173 +
                   C31824 * (2 * C32157 + C32169 + C32169 +
                             C31824 * (C31855 + C32161 + C32161 +
                                       C31824 * (2 * ae * C31914 +
                                                 C31824 * C31867))))) /
        C31602;
    const double C6424 = C6329 * C6411;
    const double C6416 = C6331 * C6411;
    const double C7957 = C7790 * C6411;
    const double C16133 = C15966 * C6411;
    const double C6497 = C6331 * C6490;
    const double C6775 = C6329 * C6490;
    const double C7002 = C5422 * C6490;
    const double C8517 = C7790 * C6490;
    const double C9762 = C7788 * C6490;
    const double C11339 = C820 * C6490;
    const double C16693 = C15966 * C6490;
    const double C20135 = C31747 * C6490;
    const double C27467 = C15964 * C6490;
    const double C11995 = C11989 + C11971;
    const double C7676 = C7670 + C7652;
    const double C9901 = C9893 + C9869;
    const double C27606 = C27598 + C27574;
    const double C20957 = C20954 + C20942;
    const double C7679 = C7673 + C7658;
    const double C9902 = C9894 + C9871;
    const double C11998 = C11992 + C11977;
    const double C27607 = C27599 + C27576;
    const double C31590 = C31587 + C31578;
    const double C32224 = C32182 + C32222;
    const double C32330 = ae * C32323;
    const double C6506 = C6331 * C6492;
    const double C7005 = C5422 * C6492;
    const double C10307 = C7790 * C6492;
    const double C11342 = C820 * C6492;
    const double C28012 = C15966 * C6492;
    const double C31003 = C31747 * C6492;
    const double C32305 = ae * C32304;
    const double C6589 =
        (4 * C32048 + C31824 * C32304 + (3 * C32038 + C31824 * C32294) * ae) /
        C31595;
    const double C6679 = (C31965 * C32304) / C31595;
    const double C18016 = C18000 + C18001;
    const double C18013 = C17991 + C17992;
    const double C18010 = C17982 + C17983;
    const double C18459 = C18448 + C18152;
    const double C18456 = C18442 + C18149;
    const double C18638 = C18627 + C18280;
    const double C18635 = C18621 + C18277;
    const double C20316 = C20299 + C18286;
    const double C20313 = C20293 + C18289;
    const double C20310 = C20287 + C18283;
    const double C20537 = C20532 + C18802;
    const double C20950 = C20939 + C18799;
    const double C31126 = C31117 + C20304;
    const double C31583 = C31575 + C20944;
    const double C7811 = C7787 * C241;
    const double C7802 = C7787 * C240;
    const double C8208 = C7787 * C994;
    const double C8362 = C7787 * C1140;
    const double C9872 = C7787 * C1143;
    const double C9866 = C7787 * C1141;
    const double C10300 = C7787 * C1694;
    const double C15987 = C15963 * C241;
    const double C15978 = C15963 * C240;
    const double C16384 = C15963 * C994;
    const double C16538 = C15963 * C1140;
    const double C27577 = C15963 * C1143;
    const double C27571 = C15963 * C1141;
    const double C28005 = C15963 * C1694;
    const double C31719 = C31711 * be;
    const double C15163 = C15155 + C15137;
    const double C15160 = C15152 + C15128;
    const double C15158 = C15150 + C15122;
    const double C15156 = C15148 + C15116;
    const double C15555 = C15549 + C15535;
    const double C15553 = C15547 + C15531;
    const double C15551 = C15545 + C15527;
    const double C15717 = C15711 + C15697;
    const double C15715 = C15709 + C15693;
    const double C15713 = C15707 + C15689;
    const double C16863 = C16859 + C16851;
    const double C16860 = C16856 + C16845;
    const double C17217 = C17209 + C17188;
    const double C17215 = C17207 + C17182;
    const double C17212 = C17204 + C17173;
    const double C17210 = C17202 + C17169;
    const double C17436 = C17432 + C17422;
    const double C17434 = C17430 + C17418;
    const double C17852 = C17848 + C17835;
    const double C17850 = C17846 + C17831;
    const double C19451 = C19449 + C19445;
    const double C28335 = C28333 + C28326;
    const double C28736 = C28734 + C28727;
    const double C883 = C882 + C878;
    const double C22507 = C1546 + C22505;
    const double C22506 = C22504 + C1546;
    const double C11505 = C11504 + C11500;
    const double C12953 = C12939 * C32872;
    const double C14587 = C12939 * C32578;
    const double C25664 = C12939 * C15957;
    const double C12954 = C12940 * C32588;
    const double C25665 = C12940 * C32588;
    const double C14595 = C14588 * C32578;
    const double C5485 = C5484 + C5480;
    const double C9369 = C6097 + C9367;
    const double C9368 = C9366 + C6097;
    const double C7177 = C7176 + C7172;
    const double C31727 = C31720 + C31684;
    const double C8226 = C8222 + C8207;
    const double C16402 = C16398 + C16383;
    const double C22307 = C22304 + C22296;
    const double C9169 = C9166 + C9158;
    const double C8380 = C8376 + C8361;
    const double C16556 = C16552 + C16537;
    const double C20542 = C20539 + C20531;
    const double C10311 = C10302 + C8517;
    const double C28016 = C28007 + C16693;
    const double C32225 = C32224 + C32216;
    const double C6770 =
        (4 * (2 * C32239 + C32236 + C32236 + C31824 * C32337) + C32330 +
         C32330 +
         C31824 * (3 * C32337 + C32331 + C32331 +
                   C31824 * (2 * C32335 + C32332 + C32332 +
                             C31824 * (C32322 + C32333 + C32333 +
                                       C31824 * (2 * ae * C31965 * C31935 +
                                                 C31824 * C31965 *
                                                     (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31827))))) /
        C31602;
    const double C6590 =
        (4 * (2 * C32039 + C32046 + C32046 + C31824 * C32292) + C32305 +
         C32305 +
         C31824 * (3 * C32292 + C32302 + C32302 +
                   C31824 * (2 * C32283 + C32298 + C32298 +
                             C31824 * (C32270 + C32291 + C32291 +
                                       C31824 * (2 * ae * C32273 +
                                                 C31824 * C31831 *
                                                     (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31827))))) /
        C31602;
    const double C6596 = C6331 * C6589;
    const double C7961 = C7790 * C6589;
    const double C16137 = C15966 * C6589;
    const double C6686 = C6331 * C6679;
    const double C8521 = C7790 * C6679;
    const double C8816 = C5422 * C6679;
    const double C16697 = C15966 * C6679;
    const double C20138 = C31747 * C6679;
    const double C21954 = C820 * C6679;
    const double C18025 = C18016 + C18001;
    const double C18022 = C18013 + C17992;
    const double C18019 = C18010 + C17983;
    const double C18465 = C18459 + C18152;
    const double C18462 = C18456 + C18149;
    const double C18644 = C18638 + C18280;
    const double C18641 = C18635 + C18277;
    const double C20325 = C20316 + C18286;
    const double C20322 = C20313 + C18289;
    const double C20319 = C20310 + C18283;
    const double C20540 = C20537 + C18802;
    const double C20953 = C20950 + C18799;
    const double C31130 = C31126 + C20304;
    const double C31586 = C31583 + C20944;
    const double C7829 = C7811 + C7812;
    const double C7826 = C7802 + C7803;
    const double C8219 = C8208 + C7947;
    const double C8373 = C8362 + C8061;
    const double C9887 = C9872 + C8070;
    const double C9884 = C9866 + C8065;
    const double C10310 = C10300 + C8516;
    const double C16005 = C15987 + C15988;
    const double C16002 = C15978 + C15979;
    const double C16395 = C16384 + C16123;
    const double C16549 = C16538 + C16237;
    const double C27592 = C27577 + C16246;
    const double C27589 = C27571 + C16241;
    const double C28015 = C28005 + C16692;
    const double C31726 = C31719 / C31595;
    const double C15165 = C15160 + C15161;
    const double C15164 = C15158 + C15159;
    const double C17633 = C15716 + C15717;
    const double C17631 = C15717 + C15716;
    const double C18953 = C15715 + C15714;
    const double C19646 = C15714 + C15715;
    const double C17176 = C16860 + C16861;
    const double C17632 = C16861 + C16860;
    const double C28322 = C17217 + C17216;
    const double C17218 = C17212 + C17213;
    const double C11506 = C11505 * C32578;
    const double C12959 = C12953 + C12954;
    const double C25666 = C25664 + C25665;
    const double C7178 = C7177 * C32578;
    const double C18006 = C31727 * C126;
    const double C18004 = C31727 * C125;
    const double C17989 = C31727 * C124;
    const double C17980 = C31727 * C123;
    const double C17976 = C31727 * C122;
    const double C18163 = C31727 * C251;
    const double C18160 = C31727 * C250;
    const double C18157 = C31727 * C249;
    const double C18156 = C31727 * C248;
    const double C18153 = C31727 * C247;
    const double C18150 = C31727 * C246;
    const double C18291 = C31727 * C356;
    const double C18288 = C31727 * C355;
    const double C18285 = C31727 * C354;
    const double C18284 = C31727 * C353;
    const double C18281 = C31727 * C352;
    const double C18278 = C31727 * C351;
    const double C18452 = C31727 * C245;
    const double C18631 = C31727 * C350;
    const double C18804 = C31727 * C686;
    const double C18801 = C31727 * C685;
    const double C18798 = C31727 * C684;
    const double C20136 = C31727 * C1149;
    const double C20133 = C31727 * C1150;
    const double C20306 = C31727 * C2076;
    const double C20303 = C31727 * C2077;
    const double C20946 = C31727 * C1153;
    const double C20943 = C31727 * C1151;
    const double C31001 = C31727 * C1152;
    const double C31121 = C31727 * C2078;
    const double C31579 = C31727 * C2604;
    const double C6323 =
        (((((0 - (C31593 * C31654) / C31595) * ae) / C31595 -
           (0 * be) / C31606 + (2 * C31656) / C31595) /
              C31637 -
          ((C31593 * C31716 + 0) * be) / C31595 + C31673 - C31696) /
             C31637 +
         ((C31593 * C31732 + 0) * ae) / C31595) /
            C31637 -
        ((C31593 * (C31732 / C31637 +
                    ((C31593 * C31727 + C32721) * ae) / C31595 + C31722) +
          C32961) *
         be) /
            C31595 +
        C31727 / C31637 + ((C31593 * C31722 + C32728) * ae) / C31595 +
        2 * (C31684 / C31637 - (0 * be) / C31595);
    const double C6325 =
        (C31732 / C31637 + ((C31593 * C31727 + C32721) * ae) / C31595 +
         C31722) /
            C31637 -
        ((C31593 * (C31727 / C31637 +
                    ((C31593 * C31722 + C32728) * ae) / C31595 + C31748) +
          C32957) *
         be) /
            C31595 +
        2 * (C31722 / C31637 + ((C31593 * C31747 + C17965) * ae) / C31595);
    const double C6327 =
        (C31727 / C31637 + ((C31593 * C31722 + C32728) * ae) / C31595 +
         C31748) /
            C31637 -
        ((C31593 *
              (C31722 / C31637 + ((C31593 * C31747 + C17965) * ae) / C31595) +
          C32947) *
         be) /
            C31595 +
        3 * (C31747 / C31637 + (0 * ae) / C31595);
    const double C7784 =
        C31732 / C31637 - ((C31593 * C31727 + C32721) * be) / C31595 + C31722;
    const double C7786 =
        C31727 / C31637 - ((C31593 * C31722 + C32728) * be) / C31595 + C31748;
    const double C15960 =
        C31732 / C31637 + ((C31593 * C31727 + C32721) * ae) / C31595 + C31722;
    const double C15962 =
        C31727 / C31637 + ((C31593 * C31722 + C32728) * ae) / C31595 + C31748;
    const double C10315 = C10311 + C8517;
    const double C28020 = C28016 + C16693;
    const double C32226 = ae * C32225;
    const double C6412 =
        (5 * C32175 + C31824 * C32225 + (4 * C32164 + C31824 * C32212) * ae) /
        C31595;
    const double C6769 = (C31965 * C32225) / C31595;
    const double C18034 = C18025 + C18002;
    const double C18031 = C18022 + C17993;
    const double C18028 = C18019 + C17984;
    const double C18471 = C18465 + C18449;
    const double C18468 = C18462 + C18443;
    const double C18650 = C18644 + C18628;
    const double C18647 = C18641 + C18622;
    const double C20334 = C20325 + C20300;
    const double C20331 = C20322 + C20294;
    const double C20328 = C20319 + C20288;
    const double C20543 = C20540 + C20533;
    const double C20956 = C20953 + C20940;
    const double C31133 = C31130 + C31118;
    const double C31589 = C31586 + C31576;
    const double C7837 = C7829 + C7812;
    const double C7834 = C7826 + C7803;
    const double C8223 = C8219 + C7947;
    const double C8377 = C8373 + C8061;
    const double C9895 = C9887 + C8070;
    const double C9892 = C9884 + C8065;
    const double C10314 = C10310 + C8516;
    const double C16013 = C16005 + C15988;
    const double C16010 = C16002 + C15979;
    const double C16399 = C16395 + C16123;
    const double C16553 = C16549 + C16237;
    const double C27600 = C27592 + C16246;
    const double C27597 = C27589 + C16241;
    const double C28019 = C28015 + C16692;
    const double C31730 = C31681 - C31726;
    const double C17197 = C17176 * C32588;
    const double C30197 = C17176 * C32588;
    const double C28329 = C28322 * C32578;
    const double C17219 = C17218 * C15957;
    const double C28321 = C17218 * C32578;
    const double C30196 = C17218 * C32872;
    const double C6343 = C6323 * C124;
    const double C6342 = C6323 * C123;
    const double C6333 = C6323 * C122;
    const double C6421 = C6323 * C249;
    const double C6420 = C6323 * C248;
    const double C6502 = C6323 * C354;
    const double C6501 = C6323 * C353;
    const double C6592 = C6323 * C247;
    const double C6682 = C6323 * C352;
    const double C6772 = C6323 * C684;
    const double C6344 = C6325 * C246;
    const double C6341 = C6325 * C247;
    const double C6334 = C6325 * C248;
    const double C6422 = C6325 * C1001;
    const double C6419 = C6325 * C249;
    const double C6503 = C6325 * C1151;
    const double C6500 = C6325 * C684;
    const double C6593 = C6325 * C250;
    const double C6683 = C6325 * C685;
    const double C6773 = C6325 * C1150;
    const double C6345 = C6327 * C251;
    const double C6340 = C6327 * C250;
    const double C6335 = C6327 * C249;
    const double C6423 = C6327 * C1002;
    const double C6418 = C6327 * C1001;
    const double C6504 = C6327 * C1152;
    const double C6499 = C6327 * C1150;
    const double C6594 = C6327 * C1000;
    const double C6684 = C6327 * C1149;
    const double C6774 = C6327 * C1697;
    const double C7820 = C7784 * C125;
    const double C7818 = C7784 * C124;
    const double C7797 = C7784 * C123;
    const double C7792 = C7784 * C122;
    const double C7958 = C7784 * C250;
    const double C7954 = C7784 * C249;
    const double C7953 = C7784 * C248;
    const double C7949 = C7784 * C247;
    const double C8072 = C7784 * C355;
    const double C8068 = C7784 * C354;
    const double C8067 = C7784 * C353;
    const double C8063 = C7784 * C352;
    const double C8214 = C7784 * C246;
    const double C8368 = C7784 * C351;
    const double C8518 = C7784 * C685;
    const double C8514 = C7784 * C684;
    const double C9760 = C7784 * C1150;
    const double C9878 = C7784 * C2077;
    const double C10304 = C7784 * C1151;
    const double C7821 = C7786 * C245;
    const double C7815 = C7786 * C246;
    const double C7800 = C7786 * C247;
    const double C7793 = C7786 * C248;
    const double C7959 = C7786 * C1000;
    const double C7955 = C7786 * C1001;
    const double C7952 = C7786 * C249;
    const double C7948 = C7786 * C250;
    const double C8073 = C7786 * C1153;
    const double C8069 = C7786 * C1151;
    const double C8066 = C7786 * C684;
    const double C8062 = C7786 * C685;
    const double C8215 = C7786 * C251;
    const double C8369 = C7786 * C686;
    const double C8519 = C7786 * C1149;
    const double C8515 = C7786 * C1150;
    const double C9761 = C7786 * C1697;
    const double C9879 = C7786 * C2604;
    const double C10305 = C7786 * C1152;
    const double C15996 = C15960 * C125;
    const double C15994 = C15960 * C124;
    const double C15973 = C15960 * C123;
    const double C15968 = C15960 * C122;
    const double C16134 = C15960 * C250;
    const double C16130 = C15960 * C249;
    const double C16129 = C15960 * C248;
    const double C16125 = C15960 * C247;
    const double C16248 = C15960 * C355;
    const double C16244 = C15960 * C354;
    const double C16243 = C15960 * C353;
    const double C16239 = C15960 * C352;
    const double C16390 = C15960 * C246;
    const double C16544 = C15960 * C351;
    const double C16694 = C15960 * C685;
    const double C16690 = C15960 * C684;
    const double C27465 = C15960 * C1150;
    const double C27583 = C15960 * C2077;
    const double C28009 = C15960 * C1151;
    const double C15997 = C15962 * C245;
    const double C15991 = C15962 * C246;
    const double C15976 = C15962 * C247;
    const double C15969 = C15962 * C248;
    const double C16135 = C15962 * C1000;
    const double C16131 = C15962 * C1001;
    const double C16128 = C15962 * C249;
    const double C16124 = C15962 * C250;
    const double C16249 = C15962 * C1153;
    const double C16245 = C15962 * C1151;
    const double C16242 = C15962 * C684;
    const double C16238 = C15962 * C685;
    const double C16391 = C15962 * C251;
    const double C16545 = C15962 * C686;
    const double C16695 = C15962 * C1149;
    const double C16691 = C15962 * C1150;
    const double C27466 = C15962 * C1697;
    const double C27584 = C15962 * C2604;
    const double C28010 = C15962 * C1152;
    const double C10319 = C10315 + C10303;
    const double C28024 = C28020 + C28008;
    const double C6414 =
        (5 * (3 * C32165 + C32173 + C32173 + C31824 * C32214) + C32226 +
         C32226 +
         C31824 *
             (4 * C32214 + C32223 + C32223 +
              C31824 *
                  (3 * C32206 + C32219 + C32219 +
                   C31824 * (2 * C32198 + C32213 + C32213 +
                             C31824 * (C31867 + C32202 + C32202 +
                                       C31824 * (2 * ae * C31935 +
                                                 C31824 *
                                                     (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31827)))))) /
        C31602;
    const double C6425 = C6331 * C6412;
    const double C6776 = C6331 * C6769;
    const double C9763 = C7790 * C6769;
    const double C27468 = C15966 * C6769;
    const double C7845 = C7837 + C7813;
    const double C7842 = C7834 + C7804;
    const double C8227 = C8223 + C8209;
    const double C8381 = C8377 + C8363;
    const double C9903 = C9895 + C9873;
    const double C9900 = C9892 + C9867;
    const double C10318 = C10314 + C10301;
    const double C16021 = C16013 + C15989;
    const double C16018 = C16010 + C15980;
    const double C16403 = C16399 + C16385;
    const double C16557 = C16553 + C16539;
    const double C27608 = C27600 + C27578;
    const double C27605 = C27597 + C27572;
    const double C28023 = C28019 + C28006;
    const double C31733 = C31730 - C31664;
    const double C17220 = C17219 + C17197;
    const double C30198 = C30196 + C30197;
    const double C18003 = C31733 * C118;
    const double C17988 = C31733 * C117;
    const double C17979 = C31733 * C116;
    const double C18450 = C31733 * C237;
    const double C18444 = C31733 * C236;
    const double C18629 = C31733 * C342;
    const double C18623 = C31733 * C341;
    const double C20301 = C31733 * C344;
    const double C20295 = C31733 * C345;
    const double C20285 = C31733 * C343;
    const double C20534 = C31733 * C680;
    const double C20937 = C31733 * C679;
    const double C31119 = C31733 * C2071;
    const double C31573 = C31733 * C1142;
    const double C6322 =
        (((ae * -2 * C31654) / C31655 -
          (((C31593 * C31677) / C31602 + 2 * C31716) * be) / C31595 -
          C31671 / C31602) /
             C31637 +
         ((C31593 * C31731 + 2 * C31732) * ae) / C31595) /
            C31637 -
        ((C31593 * (C31731 / C31637 +
                    ((C31593 * C31733 + 2 * C31727) * ae) / C31595 + C31721) +
          2 * (C31732 / C31637 + ((C31593 * C31727 + C32721) * ae) / C31595 +
               C31722)) *
         be) /
            C31595 +
        C31733 / C31637 + ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
        (-2 * C31611) / (C31595 * 4 * C31602);
    const double C6324 =
        (C31731 / C31637 + ((C31593 * C31733 + 2 * C31727) * ae) / C31595 +
         C31721) /
            C31637 -
        ((C31593 * (C31733 / C31637 +
                    ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
                    (-2 * C31611) / C31745) +
          2 * (C31727 / C31637 + ((C31593 * C31722 + C32728) * ae) / C31595 +
               C31748)) *
         be) /
            C31595 +
        2 * (C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595);
    const double C6326 =
        (C31733 / C31637 + ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
         (-2 * C31611) / C31745) /
            C31637 -
        ((C31593 *
              (C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595) +
          2 * (C31722 / C31637 + ((C31593 * C31747 + C17965) * ae) / C31595)) *
         be) /
            C31595 +
        (-3 * C31611) / (C31595 * 4 * C31655);
    const double C7783 = C31731 / C31637 -
                         ((C31593 * C31733 + 2 * C31727) * be) / C31595 +
                         C31721;
    const double C7785 = C31733 / C31637 -
                         ((C31593 * C31721 + 2 * C31722) * be) / C31595 +
                         (-2 * C31611) / C31745;
    const double C15959 = C31731 / C31637 +
                          ((C31593 * C31733 + 2 * C31727) * ae) / C31595 +
                          C31721;
    const double C15961 = C31733 / C31637 +
                          ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
                          (-2 * C31611) / C31745;
    const double C18017 = C18003 + C18004;
    const double C18012 = C17988 + C17989;
    const double C18009 = C17979 + C17980;
    const double C18460 = C18450 + C18153;
    const double C18457 = C18444 + C18150;
    const double C18639 = C18629 + C18281;
    const double C18636 = C18623 + C18278;
    const double C20317 = C20301 + C18285;
    const double C20314 = C20295 + C18288;
    const double C20309 = C20285 + C18284;
    const double C20538 = C20534 + C18801;
    const double C20949 = C20937 + C18798;
    const double C31127 = C31119 + C20303;
    const double C31582 = C31573 + C20943;
    const double C7817 = C7783 * C117;
    const double C7796 = C7783 * C116;
    const double C8212 = C7783 * C237;
    const double C8366 = C7783 * C342;
    const double C9876 = C7783 * C344;
    const double C9862 = C7783 * C343;
    const double C10296 = C7783 * C679;
    const double C7814 = C7785 * C236;
    const double C7799 = C7785 * C237;
    const double C8210 = C7785 * C240;
    const double C8364 = C7785 * C680;
    const double C9874 = C7785 * C1142;
    const double C9864 = C7785 * C679;
    const double C10298 = C7785 * C1141;
    const double C15993 = C15959 * C117;
    const double C15972 = C15959 * C116;
    const double C16388 = C15959 * C237;
    const double C16542 = C15959 * C342;
    const double C27581 = C15959 * C344;
    const double C27567 = C15959 * C343;
    const double C28001 = C15959 * C679;
    const double C15990 = C15961 * C236;
    const double C15975 = C15961 * C237;
    const double C16386 = C15961 * C240;
    const double C16540 = C15961 * C680;
    const double C27579 = C15961 * C1142;
    const double C27569 = C15961 * C679;
    const double C28003 = C15961 * C1141;
    const double C18026 = C18017 + C18004;
    const double C18021 = C18012 + C17989;
    const double C18018 = C18009 + C17980;
    const double C18466 = C18460 + C18153;
    const double C18463 = C18457 + C18150;
    const double C18645 = C18639 + C18281;
    const double C18642 = C18636 + C18278;
    const double C20326 = C20317 + C18285;
    const double C20323 = C20314 + C18288;
    const double C20318 = C20309 + C18284;
    const double C20541 = C20538 + C18801;
    const double C20952 = C20949 + C18798;
    const double C31131 = C31127 + C20303;
    const double C31585 = C31582 + C20943;
    const double C7831 = C7817 + C7818;
    const double C7824 = C7796 + C7797;
    const double C8221 = C8212 + C7949;
    const double C8375 = C8366 + C8063;
    const double C9889 = C9876 + C8068;
    const double C9882 = C9862 + C8067;
    const double C10308 = C10296 + C8514;
    const double C7830 = C7814 + C7815;
    const double C7825 = C7799 + C7800;
    const double C8220 = C8210 + C7948;
    const double C8374 = C8364 + C8062;
    const double C9888 = C9874 + C8069;
    const double C9883 = C9864 + C8066;
    const double C10309 = C10298 + C8515;
    const double C16007 = C15993 + C15994;
    const double C16000 = C15972 + C15973;
    const double C16397 = C16388 + C16125;
    const double C16551 = C16542 + C16239;
    const double C27594 = C27581 + C16244;
    const double C27587 = C27567 + C16243;
    const double C28013 = C28001 + C16690;
    const double C16006 = C15990 + C15991;
    const double C16001 = C15975 + C15976;
    const double C16396 = C16386 + C16124;
    const double C16550 = C16540 + C16238;
    const double C27593 = C27579 + C16245;
    const double C27588 = C27569 + C16242;
    const double C28014 = C28003 + C16691;
    const double C18035 = C18026 + C18005;
    const double C18030 = C18021 + C17990;
    const double C18027 = C18018 + C17981;
    const double C18472 = C18466 + C18451;
    const double C18469 = C18463 + C18445;
    const double C18651 = C18645 + C18630;
    const double C18648 = C18642 + C18624;
    const double C20335 = C20326 + C20302;
    const double C20332 = C20323 + C20296;
    const double C20327 = C20318 + C20286;
    const double C20544 = C20541 + C20535;
    const double C20955 = C20952 + C20938;
    const double C31134 = C31131 + C31120;
    const double C31588 = C31585 + C31574;
    const double C7839 = C7831 + C7818;
    const double C7832 = C7824 + C7797;
    const double C8225 = C8221 + C7949;
    const double C8379 = C8375 + C8063;
    const double C9897 = C9889 + C8068;
    const double C9890 = C9882 + C8067;
    const double C10312 = C10308 + C8514;
    const double C7838 = C7830 + C7815;
    const double C7833 = C7825 + C7800;
    const double C8224 = C8220 + C7948;
    const double C8378 = C8374 + C8062;
    const double C9896 = C9888 + C8069;
    const double C9891 = C9883 + C8066;
    const double C10313 = C10309 + C8515;
    const double C16015 = C16007 + C15994;
    const double C16008 = C16000 + C15973;
    const double C16401 = C16397 + C16125;
    const double C16555 = C16551 + C16239;
    const double C27602 = C27594 + C16244;
    const double C27595 = C27587 + C16243;
    const double C28017 = C28013 + C16690;
    const double C16014 = C16006 + C15991;
    const double C16009 = C16001 + C15976;
    const double C16400 = C16396 + C16124;
    const double C16554 = C16550 + C16238;
    const double C27601 = C27593 + C16245;
    const double C27596 = C27588 + C16242;
    const double C28018 = C28014 + C16691;
    const double C18036 = C18030 + C18031;
    const double C20740 = C18650 + C18651;
    const double C20739 = C18651 + C18650;
    const double C31114 = C20335 + C20334;
    const double C7847 = C7839 + C7819;
    const double C7840 = C7832 + C7798;
    const double C8229 = C8225 + C8213;
    const double C8383 = C8379 + C8367;
    const double C9905 = C9897 + C9877;
    const double C9898 = C9890 + C9863;
    const double C10316 = C10312 + C10297;
    const double C7846 = C7838 + C7816;
    const double C7841 = C7833 + C7801;
    const double C8228 = C8224 + C8211;
    const double C8382 = C8378 + C8365;
    const double C9904 = C9896 + C9875;
    const double C9899 = C9891 + C9865;
    const double C10317 = C10313 + C10299;
    const double C16023 = C16015 + C15995;
    const double C16016 = C16008 + C15974;
    const double C16405 = C16401 + C16389;
    const double C16559 = C16555 + C16543;
    const double C27610 = C27602 + C27582;
    const double C27603 = C27595 + C27568;
    const double C28021 = C28017 + C28002;
    const double C16022 = C16014 + C15992;
    const double C16017 = C16009 + C15977;
    const double C16404 = C16400 + C16387;
    const double C16558 = C16554 + C16541;
    const double C27609 = C27601 + C27580;
    const double C27604 = C27596 + C27570;
    const double C28022 = C28018 + C28004;
    const double C18037 = C18036 + C18032;
    const double C20742 = C18649 + C20740;
    const double C20741 = C20739 + C18649;
    const double C31124 = C31114 + C20333;
    const double C31128 = C31124 * C32578;
    d2ee[0] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                    C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                    C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                       C32583 +
                   (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                      C32680 * C32639 * C461 -
                  ((C18467 + C18468 + C18469) * C17968 +
                   (C18470 + C18471 + C18472) * C32591 +
                   (C17973 * C995 + C18154 + C18154 + C17965 * C1007 +
                    C31721 * C239 + C18155 + C18155 + C32728 * C259 +
                    C31733 * C238 + C18156 + C18156 + C32721 * C258) *
                       C32583) *
                      C32680 * C32639 * C462) *
                     C463 +
                 (((C18472 + C18471 + C18470) * C32583 +
                   (C18469 + C18468 + C18467) * C32591 +
                   (C31733 * C235 + C18452 + C18452 + C32721 * C255 +
                    C31721 * C242 + C18453 + C18453 + C32728 * C262 +
                    C17973 * C1330 + C18454 + C18454 + C17965 * C1332) *
                       C17968) *
                      C32680 * C32639 * C462 -
                  ((C18033 + C18034 + C18035) * C17968 +
                   (C18032 + C18031 + C18030) * C32591 +
                   (C18029 + C18028 + C18027) * C32583) *
                      C32680 * C32639 * C461) *
                     C464)) /
               (p * q * std::sqrt(p + q));
    d2ee[1] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                    C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                    C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                       C32583 +
                   (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                      C32680 * C571 -
                  ((C18646 + C18647 + C18648) * C17968 +
                   (C18649 + C18650 + C18651) * C32591 +
                   (C17973 * C1141 + C18282 + C18282 + C17965 * C1159 +
                    C31721 * C679 + C18283 + C18283 + C32728 * C689 +
                    C31733 * C343 + C18284 + C18284 + C32721 * C363) *
                       C32583) *
                      C32680 * C572) *
                     C461 +
                 (((C31733 * C679 + C18798 + C18798 + C32721 * C689 +
                    C31721 * C1141 + C18799 + C18799 + C32728 * C1159 +
                    C17973 * C1694 + C18800 + C18800 + C17965 * C1700) *
                       C32583 +
                   (C31733 * C680 + C18801 + C18801 + C32721 * C690 +
                    C31721 * C1140 + C18802 + C18802 + C32728 * C1158 +
                    C17973 * C1695 + C18803 + C18803 + C17965 * C1701) *
                       C32591 +
                   (C31733 * C681 + C18804 + C18804 + C32721 * C691 +
                    C31721 * C1139 + C18805 + C18805 + C32728 * C1157 +
                    C17973 * C1696 + C18806 + C18806 + C17965 * C1702) *
                       C17968) *
                      C32680 * C572 -
                  ((C18467 + C18468 + C18469) * C17968 +
                   (C18470 + C18471 + C18472) * C32591 +
                   (C17973 * C995 + C18154 + C18154 + C17965 * C1007 +
                    C31721 * C239 + C18155 + C18155 + C32728 * C259 +
                    C31733 * C238 + C18156 + C18156 + C32721 * C258) *
                       C32583) *
                      C32680 * C571) *
                     C462) *
                C32613) /
               (p * q * std::sqrt(p + q));
    d2ee[2] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                (((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                   C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                   C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                      C32583 +
                  (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                     C32680 * C32639 * C230 -
                 ((C17973 * C993 + C18148 + C18148 + C17965 * C1005 +
                   C31721 * C241 + C18149 + C18149 + C32728 * C261 +
                   C31733 * C236 + C18150 + C18150 + C32721 * C256) *
                      C17968 +
                  (C17973 * C994 + C18151 + C18151 + C17965 * C1006 +
                   C31721 * C240 + C18152 + C18152 + C32728 * C260 +
                   C31733 * C237 + C18153 + C18153 + C32721 * C257) *
                      C32591 +
                  (C17973 * C995 + C18154 + C18154 + C17965 * C1007 +
                   C31721 * C239 + C18155 + C18155 + C32728 * C259 +
                   C31733 * C238 + C18156 + C18156 + C32721 * C258) *
                      C32583) *
                     C32680 * C32639 * C231 +
                 ((C31733 * C239 + C18157 + C18157 + C32721 * C259 +
                   C31721 * C995 + C18158 + C18158 + C32728 * C1007 +
                   C17973 * C996 + C18159 + C18159 + C17965 * C1008) *
                      C32583 +
                  (C31733 * C240 + C18160 + C18160 + C32721 * C260 +
                   C31721 * C994 + C18161 + C18161 + C32728 * C1006 +
                   C17973 * C997 + C18162 + C18162 + C17965 * C1009) *
                      C32591 +
                  (C31733 * C241 + C18163 + C18163 + C32721 * C261 +
                   C31721 * C993 + C18164 + C18164 + C32728 * C1005 +
                   C17973 * C998 + C18165 + C18165 + C17965 * C1010) *
                      C17968) *
                     C32680 * C32639 * C232) *
                C32613) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                (((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                   C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                   C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                      C32583 +
                  (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                     C32680 * C32639 * C32625 * C110 -
                 ((C18033 + C18034 + C18035) * C17968 +
                  (C18032 + C18031 + C18030) * C32591 +
                  (C18029 + C18028 + C18027) * C32583) *
                     C32680 * C32639 * C32625 * C111 +
                 (C18037 * C32583 + (C18035 + C18034 + C18033) * C32591 +
                  (C31733 * C119 + C18006 + C18006 + C32721 * C133 +
                   C31721 * C234 + C18007 + C18007 + C32728 * C254 +
                   C17973 * C243 + C18008 + C18008 + C17965 * C263) *
                      C17968) *
                     C32680 * C32639 * C32625 * C112)) /
                   (p * q * std::sqrt(p + q)) +
               (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                (((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                   C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                   C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                      C32583 +
                  (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                     C32680 * C336 -
                 ((C17973 * C1139 + C18276 + C18276 + C17965 * C1157 +
                   C31721 * C681 + C18277 + C18277 + C32728 * C691 +
                   C31733 * C341 + C18278 + C18278 + C32721 * C361) *
                      C17968 +
                  (C17973 * C1140 + C18279 + C18279 + C17965 * C1158 +
                   C31721 * C680 + C18280 + C18280 + C32728 * C690 +
                   C31733 * C342 + C18281 + C18281 + C32721 * C362) *
                      C32591 +
                  (C17973 * C1141 + C18282 + C18282 + C17965 * C1159 +
                   C31721 * C679 + C18283 + C18283 + C32728 * C689 +
                   C31733 * C343 + C18284 + C18284 + C32721 * C363) *
                      C32583) *
                     C32680 * C337 +
                 ((C31733 * C344 + C18285 + C18285 + C32721 * C364 +
                   C31721 * C1142 + C18286 + C18286 + C32728 * C1160 +
                   C17973 * C1143 + C18287 + C18287 + C17965 * C1161) *
                      C32583 +
                  (C31733 * C345 + C18288 + C18288 + C32721 * C365 +
                   C31721 * C1144 + C18289 + C18289 + C32728 * C1162 +
                   C17973 * C1145 + C18290 + C18290 + C17965 * C1163) *
                      C32591 +
                  (C31733 * C346 + C18291 + C18291 + C32721 * C366 +
                   C31721 * C1146 + C18292 + C18292 + C32728 * C1164 +
                   C17973 * C1147 + C18293 + C18293 + C17965 * C1165) *
                      C17968) *
                     C32680 * C338) *
                C32625 * C32613) /
                   (p * q * std::sqrt(p + q));
    d2ee[3] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                    C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                    C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                       C32583 +
                   (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                      C32680 * C571 -
                  ((C18646 + C18647 + C18648) * C17968 +
                   (C18649 + C18650 + C18651) * C32591 +
                   (C17973 * C1141 + C18282 + C18282 + C17965 * C1159 +
                    C31721 * C679 + C18283 + C18283 + C32728 * C689 +
                    C31733 * C343 + C18284 + C18284 + C32721 * C363) *
                       C32583) *
                      C32680 * C572) *
                     C32625 * C463 +
                 (((C18651 + C18650 + C18649) * C32583 +
                   (C18648 + C18647 + C18646) * C32591 +
                   (C31733 * C340 + C18631 + C18631 + C32721 * C360 +
                    C31721 * C682 + C18632 + C18632 + C32728 * C692 +
                    C17973 * C1512 + C18633 + C18633 + C17965 * C1514) *
                       C17968) *
                      C32680 * C572 -
                  ((C18033 + C18034 + C18035) * C17968 +
                   (C18032 + C18031 + C18030) * C32591 +
                   (C18029 + C18028 + C18027) * C32583) *
                      C32680 * C571) *
                     C32625 * C464)) /
               (p * q * std::sqrt(p + q));
    d2ee[4] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                (((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                   C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                   C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                      C32583 +
                  (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                     C32680 * C32639 * C32625 * C110 -
                 ((C18033 + C18034 + C18035) * C17968 +
                  (C18032 + C18031 + C18030) * C32591 +
                  (C18029 + C18028 + C18027) * C32583) *
                     C32680 * C32639 * C32625 * C111 +
                 (C18037 * C32583 + (C18035 + C18034 + C18033) * C32591 +
                  (C31733 * C119 + C18006 + C18006 + C32721 * C133 +
                   C31721 * C234 + C18007 + C18007 + C32728 * C254 +
                   C17973 * C243 + C18008 + C18008 + C17965 * C263) *
                      C17968) *
                     C32680 * C32639 * C32625 * C112)) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                (((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                   C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                   C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                      C32583 +
                  (C18027 + C18028 + C18029) * C32591 + C18037 * C17968) *
                     C32680 * C32639 * C230 -
                 ((C17973 * C993 + C18148 + C18148 + C17965 * C1005 +
                   C31721 * C241 + C18149 + C18149 + C32728 * C261 +
                   C31733 * C236 + C18150 + C18150 + C32721 * C256) *
                      C17968 +
                  (C17973 * C994 + C18151 + C18151 + C17965 * C1006 +
                   C31721 * C240 + C18152 + C18152 + C32728 * C260 +
                   C31733 * C237 + C18153 + C18153 + C32721 * C257) *
                      C32591 +
                  (C17973 * C995 + C18154 + C18154 + C17965 * C1007 +
                   C31721 * C239 + C18155 + C18155 + C32728 * C259 +
                   C31733 * C238 + C18156 + C18156 + C32721 * C258) *
                      C32583) *
                     C32680 * C32639 * C231 +
                 ((C31733 * C239 + C18157 + C18157 + C32721 * C259 +
                   C31721 * C995 + C18158 + C18158 + C32728 * C1007 +
                   C17973 * C996 + C18159 + C18159 + C17965 * C1008) *
                      C32583 +
                  (C31733 * C240 + C18160 + C18160 + C32721 * C260 +
                   C31721 * C994 + C18161 + C18161 + C32728 * C1006 +
                   C17973 * C997 + C18162 + C18162 + C17965 * C1009) *
                      C32591 +
                  (C31733 * C241 + C18163 + C18163 + C32721 * C261 +
                   C31721 * C993 + C18164 + C18164 + C32728 * C1005 +
                   C17973 * C998 + C18165 + C18165 + C17965 * C1010) *
                      C17968) *
                     C32680 * C32639 * C232) *
                C32613) /
                   (p * q * std::sqrt(p + q));
    d2ee[5] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                     C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                     C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                        C15957 +
                    (C18027 + C18028 + C18029) * C32588) *
                       C32892 +
                   ((C20327 + C20328 + C20329) * C15957 +
                    (C18651 + C18650 + C18649) * C32588) *
                       C32767) *
                      C32639 * C461 -
                  (((C20542 + C20543 + C20544) * C32588 +
                    (C17973 * C1694 + C18800 + C18800 + C17965 * C1700 +
                     C31721 * C1141 + C18799 + C18799 + C32728 * C1159 +
                     C31733 * C679 + C18798 + C18798 + C32721 * C689) *
                        C15957) *
                       C32767 +
                   ((C18470 + C18471 + C18472) * C32588 +
                    (C17973 * C995 + C18154 + C18154 + C17965 * C1007 +
                     C31721 * C239 + C18155 + C18155 + C32728 * C259 +
                     C31733 * C238 + C18156 + C18156 + C32721 * C258) *
                        C15957) *
                       C32892) *
                      C32639 * C462) *
                     C463 +
                 ((((C18472 + C18471 + C18470) * C15957 +
                    (C18469 + C18468 + C18467) * C32588) *
                       C32892 +
                   ((C20544 + C20543 + C20542) * C15957 +
                    (C31733 * C681 + C18804 + C18804 + C32721 * C691 +
                     C31721 * C1139 + C18805 + C18805 + C32728 * C1157 +
                     C17973 * C1696 + C18806 + C18806 + C17965 * C1702) *
                        C32588) *
                       C32767) *
                      C32639 * C462 -
                  (((C18646 + C18647 + C18648) * C32588 +
                    (C18649 + C18650 + C18651) * C15957) *
                       C32767 +
                   ((C18032 + C18031 + C18030) * C32588 +
                    (C18029 + C18028 + C18027) * C15957) *
                       C32892) *
                      C32639 * C461) *
                     C464)) /
               (p * q * std::sqrt(p + q));
    d2ee[6] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
              C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 +
              C17978 + C17965 * C259) *
                 C15957 +
             (C18027 + C18028 + C18029) * C32588) *
                C32892 +
            ((C20327 + C20328 + C20329) * C15957 + C20741 * C32588) * C32767) *
               C571 -
           (((C20330 + C20331 + C20332) * C32588 +
             (C20333 + C20334 + C20335) * C15957) *
                C32767 +
            (C20742 * C32588 + (C20329 + C20328 + C20327) * C15957) * C32892) *
               C572) *
              C461 +
          ((((C20955 + C20956 + C20957) * C15957 +
             (C20544 + C20543 + C20542) * C32588) *
                C32892 +
            ((C31733 * C1142 + C20943 + C20943 + C32721 * C1160 +
              C31721 * C1143 + C20944 + C20944 + C32728 * C1161 +
              C17973 * C6488 + C20945 + C20945 + C17965 * C6494) *
                 C15957 +
             (C31733 * C1144 + C20946 + C20946 + C32721 * C1162 +
              C31721 * C1145 + C20947 + C20947 + C32728 * C1163 +
              C17973 * C7324 + C20948 + C20948 + C17965 * C7326) *
                 C32588) *
                C32767) *
               C572 -
           (((C20542 + C20543 + C20544) * C32588 +
             (C20957 + C20956 + C20955) * C15957) *
                C32767 +
            ((C18470 + C18471 + C18472) * C32588 +
             (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
              C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 +
              C18156 + C32721 * C258) *
                 C15957) *
                C32892) *
               C571) *
              C462) *
         C32613) /
        (p * q * std::sqrt(p + q));
    d2ee[7] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C15957 +
            (C18027 + C18028 + C18029) * C32588) *
               C32892 +
           ((C31733 * C343 + C18284 + C18284 + C32721 * C363 + C31721 * C679 +
             C18283 + C18283 + C32728 * C689 + C17973 * C1141 + C18282 +
             C18282 + C17965 * C1159) *
                C15957 +
            (C18651 + C18650 + C18649) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C17973 * C1695 + C18803 + C18803 + C17965 * C1701 +
             C31721 * C1140 + C18802 + C18802 + C32728 * C1158 + C31733 * C680 +
             C18801 + C18801 + C32721 * C690) *
                C32588 +
            (C17973 * C1694 + C18800 + C18800 + C17965 * C1700 +
             C31721 * C1141 + C18799 + C18799 + C32728 * C1159 + C31733 * C679 +
             C18798 + C18798 + C32721 * C689) *
                C15957) *
               C32767 +
           ((C18470 + C18471 + C18472) * C32588 +
            (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
             C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 + C18156 +
             C32721 * C258) *
                C15957) *
               C32892) *
              C32639 * C231 +
          (((C31733 * C239 + C18157 + C18157 + C32721 * C259 + C31721 * C995 +
             C18158 + C18158 + C32728 * C1007 + C17973 * C996 + C18159 +
             C18159 + C17965 * C1008) *
                C15957 +
            (C31733 * C240 + C18160 + C18160 + C32721 * C260 + C31721 * C994 +
             C18161 + C18161 + C32728 * C1006 + C17973 * C997 + C18162 +
             C18162 + C17965 * C1009) *
                C32588) *
               C32892 +
           ((C31733 * C1141 + C20133 + C20133 + C32721 * C1159 +
             C31721 * C1694 + C20134 + C20134 + C32728 * C1700 +
             C17973 * C6487 + C20135 + C20135 + C17965 * C6493) *
                C15957 +
            (C31733 * C1140 + C20136 + C20136 + C32721 * C1158 +
             C31721 * C1695 + C20137 + C20137 + C32728 * C1701 +
             C17973 * C6678 + C20138 + C20138 + C17965 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C15957 +
            (C18027 + C18028 + C18029) * C32588) *
               C32892 +
           ((C31733 * C343 + C18284 + C18284 + C32721 * C363 + C31721 * C679 +
             C18283 + C18283 + C32728 * C689 + C17973 * C1141 + C18282 +
             C18282 + C17965 * C1159) *
                C15957 +
            (C18651 + C18650 + C18649) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C18646 + C18647 + C18648) * C32588 +
            (C18649 + C18650 + C18651) * C15957) *
               C32767 +
           ((C18032 + C18031 + C18030) * C32588 +
            (C18029 + C18028 + C18027) * C15957) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C18037 * C15957 + (C18035 + C18034 + C18033) * C32588) * C32892 +
           ((C18648 + C18647 + C18646) * C15957 +
            (C31733 * C340 + C18631 + C18631 + C32721 * C360 + C31721 * C682 +
             C18632 + C18632 + C32728 * C692 + C17973 * C1512 + C18633 +
             C18633 + C17965 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C15957 +
            (C18027 + C18028 + C18029) * C32588) *
               C32892 +
           ((C20327 + C20328 + C20329) * C15957 +
            (C18651 + C18650 + C18649) * C32588) *
               C32767) *
              C336 -
          (((C20330 + C20331 + C20332) * C32588 +
            (C20333 + C20334 + C20335) * C15957) *
               C32767 +
           ((C18649 + C18650 + C18651) * C32588 +
            (C20329 + C20328 + C20327) * C15957) *
               C32892) *
              C337 +
          (((C20335 + C20334 + C20333) * C15957 +
            (C20332 + C20331 + C20330) * C32588) *
               C32892 +
           ((C31733 * C2071 + C20303 + C20303 + C32721 * C2083 +
             C31721 * C2601 + C20304 + C20304 + C32728 * C2607 +
             C17973 * C7115 + C20305 + C20305 + C17965 * C7121) *
                C15957 +
            (C31733 * C2070 + C20306 + C20306 + C32721 * C2082 +
             C31721 * C2602 + C20307 + C20307 + C32728 * C2608 +
             C17973 * C7476 + C20308 + C20308 + C17965 * C7478) *
                C32588) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[8] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
              C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 +
              C17978 + C17965 * C259) *
                 C15957 +
             (C18027 + C18028 + C18029) * C32588) *
                C32892 +
            ((C20327 + C20328 + C20329) * C15957 + C20741 * C32588) * C32767) *
               C571 -
           (((C20330 + C20331 + C20332) * C32588 +
             (C20333 + C20334 + C20335) * C15957) *
                C32767 +
            (C20742 * C32588 + (C20329 + C20328 + C20327) * C15957) * C32892) *
               C572) *
              C32625 * C463 +
          (((C20741 * C15957 + (C18648 + C18647 + C18646) * C32588) * C32892 +
            ((C20332 + C20331 + C20330) * C15957 +
             (C31733 * C346 + C18291 + C18291 + C32721 * C366 + C31721 * C1146 +
              C18292 + C18292 + C32728 * C1164 + C17973 * C1147 + C18293 +
              C18293 + C17965 * C1165) *
                 C32588) *
                C32767) *
               C572 -
           (((C18646 + C18647 + C18648) * C32588 + C20742 * C15957) * C32767 +
            ((C18032 + C18031 + C18030) * C32588 +
             (C18029 + C18028 + C18027) * C15957) *
                C32892) *
               C571) *
              C32625 * C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[9] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C15957 +
            (C18027 + C18028 + C18029) * C32588) *
               C32892 +
           ((C31733 * C343 + C18284 + C18284 + C32721 * C363 + C31721 * C679 +
             C18283 + C18283 + C32728 * C689 + C17973 * C1141 + C18282 +
             C18282 + C17965 * C1159) *
                C15957 +
            (C18651 + C18650 + C18649) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C18646 + C18647 + C18648) * C32588 +
            (C18649 + C18650 + C18651) * C15957) *
               C32767 +
           ((C18032 + C18031 + C18030) * C32588 +
            (C18029 + C18028 + C18027) * C15957) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C18037 * C15957 + (C18035 + C18034 + C18033) * C32588) * C32892 +
           ((C18648 + C18647 + C18646) * C15957 +
            (C31733 * C340 + C18631 + C18631 + C32721 * C360 + C31721 * C682 +
             C18632 + C18632 + C32728 * C692 + C17973 * C1512 + C18633 +
             C18633 + C17965 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C15957 +
            (C18027 + C18028 + C18029) * C32588) *
               C32892 +
           ((C31733 * C343 + C18284 + C18284 + C32721 * C363 + C31721 * C679 +
             C18283 + C18283 + C32728 * C689 + C17973 * C1141 + C18282 +
             C18282 + C17965 * C1159) *
                C15957 +
            (C18651 + C18650 + C18649) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C17973 * C1695 + C18803 + C18803 + C17965 * C1701 +
             C31721 * C1140 + C18802 + C18802 + C32728 * C1158 + C31733 * C680 +
             C18801 + C18801 + C32721 * C690) *
                C32588 +
            (C17973 * C1694 + C18800 + C18800 + C17965 * C1700 +
             C31721 * C1141 + C18799 + C18799 + C32728 * C1159 + C31733 * C679 +
             C18798 + C18798 + C32721 * C689) *
                C15957) *
               C32767 +
           ((C18470 + C18471 + C18472) * C32588 +
            (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
             C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 + C18156 +
             C32721 * C258) *
                C15957) *
               C32892) *
              C32639 * C231 +
          (((C31733 * C239 + C18157 + C18157 + C32721 * C259 + C31721 * C995 +
             C18158 + C18158 + C32728 * C1007 + C17973 * C996 + C18159 +
             C18159 + C17965 * C1008) *
                C15957 +
            (C31733 * C240 + C18160 + C18160 + C32721 * C260 + C31721 * C994 +
             C18161 + C18161 + C32728 * C1006 + C17973 * C997 + C18162 +
             C18162 + C17965 * C1009) *
                C32588) *
               C32892 +
           ((C31733 * C1141 + C20133 + C20133 + C32721 * C1159 +
             C31721 * C1694 + C20134 + C20134 + C32728 * C1700 +
             C17973 * C6487 + C20135 + C20135 + C17965 * C6493) *
                C15957 +
            (C31733 * C1140 + C20136 + C20136 + C32721 * C1158 +
             C31721 * C1695 + C20137 + C20137 + C32728 * C1701 +
             C17973 * C6678 + C20138 + C20138 + C17965 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[10] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C15957 +
            (C16016 + C16017 + C16018 + C16019) * C32588) *
               C32680 * C32639 * C461 -
           ((C16402 + C16403 + C16404 + C16405) * C32588 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C15957) *
               C32680 * C32639 * C462) *
              C463 +
          (((C16405 + C16404 + C16403 + C16402) * C15957 +
            (C15959 * C236 + C16390 + C16390 + C32961 * C256 + C15961 * C241 +
             C16391 + C16391 + C32957 * C261 + C15963 * C993 + C16392 + C16392 +
             C32947 * C1005 + C15965 * C998 + C16393 + C16393 +
             C32899 * C1010) *
                C32588) *
               C32680 * C32639 * C462 -
           ((C16020 + C16021 + C16022 + C16023) * C32588 +
            (C16019 + C16018 + C16017 + C16016) * C15957) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32960 +
            (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
               C32680 * C32639 * C461 -
           ((C15550 + C15551) * C32891 + (C15552 + C15553) * C32940 +
            (C15554 + C15555) * C32953 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32960) *
               C32680 * C32639 * C462) *
              C463 +
          (((C15555 + C15554) * C32960 + (C15553 + C15552) * C32953 +
            (C15551 + C15550) * C32940 +
            (C15107 * C234 + C15536 + C15536 + C15101 * C254 + C15109 * C243 +
             C15537 + C15537 + C32725 * C263) *
                C32891) *
               C32680 * C32639 * C462 -
           ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
            (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C15957 +
             (C15156 + C15157) * C32588) *
                C32955 +
            ((C17210 + C17211) * C15957 + (C15717 + C15716) * C32588) * C32944 +
            C17220 * C32925) *
               C32639 * C461 -
           (((C17433 + C17434) * C32588 +
             (C15109 * C1143 + C17012 + C17012 + C32725 * C1161 +
              C15107 * C1142 + C17013 + C17013 + C15101 * C1160) *
                 C15957) *
                C32925 +
            ((C17435 + C17436) * C32588 +
             (C15109 * C1141 + C15849 + C15849 + C32725 * C1159 +
              C15107 * C679 + C15848 + C15848 + C15101 * C689) *
                 C15957) *
                C32944 +
            ((C15554 + C15555) * C32588 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C15957) *
                C32955) *
               C32639 * C462) *
              C463 +
          ((((C15555 + C15554) * C15957 + (C15553 + C15552) * C32588) * C32955 +
            ((C17436 + C17435) * C15957 +
             (C15107 * C681 + C15852 + C15852 + C15101 * C691 + C15109 * C1139 +
              C15853 + C15853 + C32725 * C1157) *
                 C32588) *
                C32944 +
            ((C17434 + C17433) * C15957 +
             (C15107 * C1146 + C17423 + C17423 + C15101 * C1164 +
              C15109 * C1147 + C17424 + C17424 + C32725 * C1165) *
                 C32588) *
                C32925) *
               C32639 * C462 -
           (((C16862 + C16863) * C32588 + (C16861 + C16860) * C15957) * C32925 +
            ((C15714 + C15715) * C32588 + (C15716 + C15717) * C15957) * C32944 +
            ((C15159 + C15158) * C32588 + (C15157 + C15156) * C15957) *
                C32955) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C15957 +
            (C16016 + C16017 + C16018 + C16019) * C32588) *
               C32680 * C571 -
           ((C16556 + C16557 + C16558 + C16559) * C32588 +
            (C15965 * C1694 + C16240 + C16240 + C32899 * C1700 +
             C15963 * C1141 + C16241 + C16241 + C32947 * C1159 + C15961 * C679 +
             C16242 + C16242 + C32957 * C689 + C15959 * C343 + C16243 + C16243 +
             C32961 * C363) *
                C15957) *
               C32680 * C572) *
              C461 +
          (((C15959 * C679 + C16690 + C16690 + C32961 * C689 + C15961 * C1141 +
             C16691 + C16691 + C32957 * C1159 + C15963 * C1694 + C16692 +
             C16692 + C32947 * C1700 + C15965 * C6487 + C16693 + C16693 +
             C32899 * C6493) *
                C15957 +
            (C15959 * C680 + C16694 + C16694 + C32961 * C690 + C15961 * C1140 +
             C16695 + C16695 + C32957 * C1158 + C15963 * C1695 + C16696 +
             C16696 + C32947 * C1701 + C15965 * C6678 + C16697 + C16697 +
             C32899 * C6680) *
                C32588) *
               C32680 * C572 -
           ((C16402 + C16403 + C16404 + C16405) * C32588 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C15957) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32960 +
            (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
               C32680 * C571 -
           ((C15712 + C15713) * C32891 + (C15714 + C15715) * C32940 +
            (C15716 + C15717) * C32953 +
            (C15109 * C679 + C15384 + C15384 + C32725 * C689 + C15107 * C343 +
             C15385 + C15385 + C15101 * C363) *
                C32960) *
               C32680 * C572) *
              C461 +
          (((C15107 * C679 + C15848 + C15848 + C15101 * C689 + C15109 * C1141 +
             C15849 + C15849 + C32725 * C1159) *
                C32960 +
            (C15107 * C680 + C15850 + C15850 + C15101 * C690 + C15109 * C1140 +
             C15851 + C15851 + C32725 * C1158) *
                C32953 +
            (C15107 * C681 + C15852 + C15852 + C15101 * C691 + C15109 * C1139 +
             C15853 + C15853 + C32725 * C1157) *
                C32940 +
            (C15107 * C682 + C15854 + C15854 + C15101 * C692 + C15109 * C1512 +
             C15855 + C15855 + C32725 * C1514) *
                C32891) *
               C32680 * C572 -
           ((C15550 + C15551) * C32891 + (C15552 + C15553) * C32940 +
            (C15554 + C15555) * C32953 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32960) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C15957 +
             (C15156 + C15157) * C32588) *
                C32955 +
            ((C17210 + C17211) * C15957 + C17631 * C32588) * C32944 +
            C17220 * C32925) *
               C571 -
           (((C17214 + C17215) * C32588 + (C17216 + C17217) * C15957) * C32925 +
            (C17632 * C32588 + (C17213 + C17212) * C15957) * C32944 +
            (C17633 * C32588 + (C17211 + C17210) * C15957) * C32955) *
               C572) *
              C461 +
          ((((C17850 + C17851) * C15957 + (C17436 + C17435) * C32588) * C32955 +
            ((C17852 + C17853) * C15957 + (C17434 + C17433) * C32588) * C32944 +
            ((C15107 * C2601 + C17838 + C17838 + C15101 * C2607 +
              C15109 * C7115 + C17839 + C17839 + C32725 * C7121) *
                 C15957 +
             (C15107 * C2602 + C17840 + C17840 + C15101 * C2608 +
              C15109 * C7476 + C17841 + C17841 + C32725 * C7478) *
                 C32588) *
                C32925) *
               C572 -
           (((C17433 + C17434) * C32588 + (C17853 + C17852) * C15957) * C32925 +
            ((C17435 + C17436) * C32588 + (C17851 + C17850) * C15957) * C32944 +
            ((C15554 + C15555) * C32588 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C15957) *
                C32955) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15107 * C115 + C15112 + C15112 + C15101 * C129 +
                C15109 * C238 + C15113 + C15113 + C32725 * C258) *
                   C32960 +
               (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
                  C32680 * C32639 * C32625 * C110 -
              ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
               (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
                  C32680 * C32639 * C32625 * C111 +
              (C15164 * C32960 + C15165 * C32953 + (C15163 + C15162) * C32940 +
               (C15107 * C120 + C15138 + C15138 + C15101 * C134 +
                C15109 * C465 + C15139 + C15139 + C32725 * C467) *
                   C32891) *
                  C32680 * C32639 * C32625 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15107 * C115 + C15112 + C15112 + C15101 * C129 +
                C15109 * C238 + C15113 + C15113 + C32725 * C258) *
                   C32960 +
               (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
                  C32680 * C32639 * C230 -
              ((C15109 * C242 + C15264 + C15264 + C32725 * C262 +
                C15107 * C235 + C15265 + C15265 + C15101 * C255) *
                   C32891 +
               (C15109 * C241 + C15266 + C15266 + C32725 * C261 +
                C15107 * C236 + C15267 + C15267 + C15101 * C256) *
                   C32940 +
               (C15109 * C240 + C15268 + C15268 + C32725 * C260 +
                C15107 * C237 + C15269 + C15269 + C15101 * C257) *
                   C32953 +
               (C15109 * C239 + C15270 + C15270 + C32725 * C259 +
                C15107 * C238 + C15271 + C15271 + C15101 * C258) *
                   C32960) *
                  C32680 * C32639 * C231 +
              ((C15107 * C239 + C15272 + C15272 + C15101 * C259 +
                C15109 * C995 + C15273 + C15273 + C32725 * C1007) *
                   C32960 +
               (C15107 * C240 + C15274 + C15274 + C15101 * C260 +
                C15109 * C994 + C15275 + C15275 + C32725 * C1006) *
                   C32953 +
               (C15107 * C241 + C15276 + C15276 + C15101 * C261 +
                C15109 * C993 + C15277 + C15277 + C32725 * C1005) *
                   C32940 +
               (C15107 * C242 + C15278 + C15278 + C15101 * C262 +
                C15109 * C1330 + C15279 + C15279 + C32725 * C1332) *
                   C32891) *
                  C32680 * C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C336 -
          ((C15109 * C682 + C15378 + C15378 + C32725 * C692 + C15107 * C340 +
            C15379 + C15379 + C15101 * C360) *
               C32891 +
           (C15109 * C681 + C15380 + C15380 + C32725 * C691 + C15107 * C341 +
            C15381 + C15381 + C15101 * C361) *
               C32940 +
           (C15109 * C680 + C15382 + C15382 + C32725 * C690 + C15107 * C342 +
            C15383 + C15383 + C15101 * C362) *
               C32953 +
           (C15109 * C679 + C15384 + C15384 + C32725 * C689 + C15107 * C343 +
            C15385 + C15385 + C15101 * C363) *
               C32960) *
              C32680 * C337 +
          ((C15107 * C344 + C15386 + C15386 + C15101 * C364 + C15109 * C1142 +
            C15387 + C15387 + C32725 * C1160) *
               C32960 +
           (C15107 * C345 + C15388 + C15388 + C15101 * C365 + C15109 * C1144 +
            C15389 + C15389 + C32725 * C1162) *
               C32953 +
           (C15107 * C346 + C15390 + C15390 + C15101 * C366 + C15109 * C1146 +
            C15391 + C15391 + C32725 * C1164) *
               C32940 +
           (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
            C15393 + C15393 + C32725 * C2277) *
               C32891) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C16020 + C16021 + C16022 + C16023) * C32588 +
           (C16019 + C16018 + C16017 + C16016) * C15957) *
              C32680 * C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C15957 +
           (C15959 * C118 + C15996 + C15996 + C32961 * C132 + C15961 * C235 +
            C15997 + C15997 + C32957 * C255 + C15963 * C242 + C15998 + C15998 +
            C32947 * C262 + C15965 * C1330 + C15999 + C15999 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C230 -
          ((C15965 * C997 + C16122 + C16122 + C32899 * C1009 + C15963 * C994 +
            C16123 + C16123 + C32947 * C1006 + C15961 * C240 + C16124 + C16124 +
            C32957 * C260 + C15959 * C237 + C16125 + C16125 + C32961 * C257) *
               C32588 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C15957) *
              C32680 * C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C15957 +
           (C15959 * C240 + C16134 + C16134 + C32961 * C260 + C15961 * C994 +
            C16135 + C16135 + C32957 * C1006 + C15963 * C997 + C16136 + C16136 +
            C32947 * C1009 + C15965 * C6588 + C16137 + C16137 +
            C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C336 -
          ((C15965 * C1695 + C16236 + C16236 + C32899 * C1701 + C15963 * C1140 +
            C16237 + C16237 + C32947 * C1158 + C15961 * C680 + C16238 + C16238 +
            C32957 * C690 + C15959 * C342 + C16239 + C16239 + C32961 * C362) *
               C32588 +
           (C15965 * C1694 + C16240 + C16240 + C32899 * C1700 + C15963 * C1141 +
            C16241 + C16241 + C32947 * C1159 + C15961 * C679 + C16242 + C16242 +
            C32957 * C689 + C15959 * C343 + C16243 + C16243 + C32961 * C363) *
               C15957) *
              C32680 * C337 +
          ((C15959 * C344 + C16244 + C16244 + C32961 * C364 + C15961 * C1142 +
            C16245 + C16245 + C32957 * C1160 + C15963 * C1143 + C16246 +
            C16246 + C32947 * C1161 + C15965 * C6488 + C16247 + C16247 +
            C32899 * C6494) *
               C15957 +
           (C15959 * C345 + C16248 + C16248 + C32961 * C365 + C15961 * C1144 +
            C16249 + C16249 + C32957 * C1162 + C15963 * C1145 + C16250 +
            C16250 + C32947 * C1163 + C15965 * C7324 + C16251 + C16251 +
            C32899 * C7326) *
               C32588) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C15957 +
            (C15156 + C15157) * C32588) *
               C32955 +
           ((C15107 * C343 + C15385 + C15385 + C15101 * C363 + C15109 * C679 +
             C15384 + C15384 + C32725 * C689) *
                C15957 +
            (C15717 + C15716) * C32588) *
               C32944 +
           ((C15107 * C344 + C15386 + C15386 + C15101 * C364 + C15109 * C1142 +
             C15387 + C15387 + C32725 * C1160) *
                C15957 +
            (C16860 + C16861) * C32588) *
               C32925) *
              C32639 * C32625 * C110 -
          (((C16862 + C16863) * C32588 + (C16861 + C16860) * C15957) * C32925 +
           ((C15714 + C15715) * C32588 + (C15716 + C15717) * C15957) * C32944 +
           ((C15159 + C15158) * C32588 + (C15157 + C15156) * C15957) * C32955) *
              C32639 * C32625 * C111 +
          ((C15164 * C15957 + C15165 * C32588) * C32955 +
           ((C15715 + C15714) * C15957 + (C15713 + C15712) * C32588) * C32944 +
           ((C16863 + C16862) * C15957 +
            (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
             C15393 + C15393 + C32725 * C2277) *
                C32588) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C15957 +
            (C15156 + C15157) * C32588) *
               C32955 +
           ((C15107 * C343 + C15385 + C15385 + C15101 * C363 + C15109 * C679 +
             C15384 + C15384 + C32725 * C689) *
                C15957 +
            (C15717 + C15716) * C32588) *
               C32944 +
           ((C15107 * C344 + C15386 + C15386 + C15101 * C364 + C15109 * C1142 +
             C15387 + C15387 + C32725 * C1160) *
                C15957 +
            (C16860 + C16861) * C32588) *
               C32925) *
              C32639 * C230 -
          (((C15109 * C1145 + C17010 + C17010 + C32725 * C1163 +
             C15107 * C1144 + C17011 + C17011 + C15101 * C1162) *
                C32588 +
            (C15109 * C1143 + C17012 + C17012 + C32725 * C1161 +
             C15107 * C1142 + C17013 + C17013 + C15101 * C1160) *
                C15957) *
               C32925 +
           ((C15109 * C1140 + C15851 + C15851 + C32725 * C1158 + C15107 * C680 +
             C15850 + C15850 + C15101 * C690) *
                C32588 +
            (C15109 * C1141 + C15849 + C15849 + C32725 * C1159 + C15107 * C679 +
             C15848 + C15848 + C15101 * C689) *
                C15957) *
               C32944 +
           ((C15554 + C15555) * C32588 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C15957) *
               C32955) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C15957 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32588) *
               C32955 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C15957 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32588) *
               C32944 +
           ((C15107 * C1143 + C17018 + C17018 + C15101 * C1161 +
             C15109 * C6488 + C17019 + C17019 + C32725 * C6494) *
                C15957 +
            (C15107 * C1145 + C17020 + C17020 + C15101 * C1163 +
             C15109 * C7324 + C17021 + C17021 + C32725 * C7326) *
                C32588) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C15957 +
            (C15156 + C15157) * C32588) *
               C32955 +
           ((C17210 + C17211) * C15957 + (C15717 + C15716) * C32588) * C32944 +
           C17220 * C32925) *
              C336 -
          (((C17214 + C17215) * C32588 + (C17216 + C17217) * C15957) * C32925 +
           ((C16861 + C16860) * C32588 + (C17213 + C17212) * C15957) * C32944 +
           ((C15716 + C15717) * C32588 + (C17211 + C17210) * C15957) * C32955) *
              C337 +
          (C17220 * C32955 +
           ((C17217 + C17216) * C15957 + (C17215 + C17214) * C32588) * C32944 +
           ((C15107 * C2072 + C17189 + C17189 + C15101 * C2084 +
             C15109 * C7116 + C17190 + C17190 + C32725 * C7122) *
                C15957 +
            (C15107 * C2073 + C17191 + C17191 + C15101 * C2085 +
             C15109 * C12297 + C17192 + C17192 + C32725 * C12299) *
                C32588) *
               C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C15957 +
            (C16016 + C16017 + C16018 + C16019) * C32588) *
               C32680 * C571 -
           ((C16556 + C16557 + C16558 + C16559) * C32588 +
            (C15965 * C1694 + C16240 + C16240 + C32899 * C1700 +
             C15963 * C1141 + C16241 + C16241 + C32947 * C1159 + C15961 * C679 +
             C16242 + C16242 + C32957 * C689 + C15959 * C343 + C16243 + C16243 +
             C32961 * C363) *
                C15957) *
               C32680 * C572) *
              C32625 * C463 +
          (((C16559 + C16558 + C16557 + C16556) * C15957 +
            (C15959 * C341 + C16544 + C16544 + C32961 * C361 + C15961 * C681 +
             C16545 + C16545 + C32957 * C691 + C15963 * C1139 + C16546 +
             C16546 + C32947 * C1157 + C15965 * C1696 + C16547 + C16547 +
             C32899 * C1702) *
                C32588) *
               C32680 * C572 -
           ((C16020 + C16021 + C16022 + C16023) * C32588 +
            (C16019 + C16018 + C16017 + C16016) * C15957) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32960 +
            (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
               C32680 * C571 -
           ((C15712 + C15713) * C32891 + (C15714 + C15715) * C32940 +
            (C15716 + C15717) * C32953 +
            (C15109 * C679 + C15384 + C15384 + C32725 * C689 + C15107 * C343 +
             C15385 + C15385 + C15101 * C363) *
                C32960) *
               C32680 * C572) *
              C32625 * C463 +
          (((C15717 + C15716) * C32960 + (C15715 + C15714) * C32953 +
            (C15713 + C15712) * C32940 +
            (C15107 * C339 + C15698 + C15698 + C15101 * C359 + C15109 * C683 +
             C15699 + C15699 + C32725 * C693) *
                C32891) *
               C32680 * C572 -
           ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
            (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C15957 +
             (C15156 + C15157) * C32588) *
                C32955 +
            ((C17210 + C17211) * C15957 + C17631 * C32588) * C32944 +
            C17220 * C32925) *
               C571 -
           (((C17214 + C17215) * C32588 + (C17216 + C17217) * C15957) * C32925 +
            (C17632 * C32588 + (C17213 + C17212) * C15957) * C32944 +
            (C17633 * C32588 + (C17211 + C17210) * C15957) * C32955) *
               C572) *
              C32625 * C463 +
          (((C17631 * C15957 + (C15715 + C15714) * C32588) * C32955 +
            (C17176 * C15957 + (C16863 + C16862) * C32588) * C32944 +
            ((C17215 + C17214) * C15957 +
             (C15107 * C2069 + C17634 + C17634 + C15101 * C2081 +
              C15109 * C2603 + C17635 + C17635 + C32725 * C2609) *
                 C32588) *
                C32925) *
               C572 -
           (((C16862 + C16863) * C32588 + C17632 * C15957) * C32925 +
            ((C15714 + C15715) * C32588 + C17633 * C15957) * C32944 +
            ((C15159 + C15158) * C32588 + (C15157 + C15156) * C15957) *
                C32955) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C32639 * C230 -
          ((C15109 * C242 + C15264 + C15264 + C32725 * C262 + C15107 * C235 +
            C15265 + C15265 + C15101 * C255) *
               C32891 +
           (C15109 * C241 + C15266 + C15266 + C32725 * C261 + C15107 * C236 +
            C15267 + C15267 + C15101 * C256) *
               C32940 +
           (C15109 * C240 + C15268 + C15268 + C32725 * C260 + C15107 * C237 +
            C15269 + C15269 + C15101 * C257) *
               C32953 +
           (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
            C15271 + C15271 + C15101 * C258) *
               C32960) *
              C32680 * C32639 * C231 +
          ((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
            C15273 + C15273 + C32725 * C1007) *
               C32960 +
           (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
            C15275 + C15275 + C32725 * C1006) *
               C32953 +
           (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
            C15277 + C15277 + C32725 * C1005) *
               C32940 +
           (C15107 * C242 + C15278 + C15278 + C15101 * C262 + C15109 * C1330 +
            C15279 + C15279 + C32725 * C1332) *
               C32891) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C32639 * C32625 * C110 -
          ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
           (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
              C32680 * C32639 * C32625 * C111 +
          (C15164 * C32960 + C15165 * C32953 + (C15163 + C15162) * C32940 +
           (C15107 * C120 + C15138 + C15138 + C15101 * C134 + C15109 * C465 +
            C15139 + C15139 + C32725 * C467) *
               C32891) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C16020 + C16021 + C16022 + C16023) * C32588 +
           (C16019 + C16018 + C16017 + C16016) * C15957) *
              C32680 * C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C15957 +
           (C15959 * C118 + C15996 + C15996 + C32961 * C132 + C15961 * C235 +
            C15997 + C15997 + C32957 * C255 + C15963 * C242 + C15998 + C15998 +
            C32947 * C262 + C15965 * C1330 + C15999 + C15999 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C230 -
          ((C15965 * C997 + C16122 + C16122 + C32899 * C1009 + C15963 * C994 +
            C16123 + C16123 + C32947 * C1006 + C15961 * C240 + C16124 + C16124 +
            C32957 * C260 + C15959 * C237 + C16125 + C16125 + C32961 * C257) *
               C32588 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C15957) *
              C32680 * C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C15957 +
           (C15959 * C240 + C16134 + C16134 + C32961 * C260 + C15961 * C994 +
            C16135 + C16135 + C32957 * C1006 + C15963 * C997 + C16136 + C16136 +
            C32947 * C1009 + C15965 * C6588 + C16137 + C16137 +
            C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C15957 +
            (C15156 + C15157) * C32588) *
               C32955 +
           ((C15107 * C343 + C15385 + C15385 + C15101 * C363 + C15109 * C679 +
             C15384 + C15384 + C32725 * C689) *
                C15957 +
            (C15717 + C15716) * C32588) *
               C32944 +
           ((C15107 * C344 + C15386 + C15386 + C15101 * C364 + C15109 * C1142 +
             C15387 + C15387 + C32725 * C1160) *
                C15957 +
            (C16860 + C16861) * C32588) *
               C32925) *
              C32639 * C32625 * C110 -
          (((C16862 + C16863) * C32588 + (C16861 + C16860) * C15957) * C32925 +
           ((C15714 + C15715) * C32588 + (C15716 + C15717) * C15957) * C32944 +
           ((C15159 + C15158) * C32588 + (C15157 + C15156) * C15957) * C32955) *
              C32639 * C32625 * C111 +
          ((C15164 * C15957 + C15165 * C32588) * C32955 +
           ((C15715 + C15714) * C15957 + (C15713 + C15712) * C32588) * C32944 +
           ((C16863 + C16862) * C15957 +
            (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
             C15393 + C15393 + C32725 * C2277) *
                C32588) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C15957 +
            (C15156 + C15157) * C32588) *
               C32955 +
           ((C15107 * C343 + C15385 + C15385 + C15101 * C363 + C15109 * C679 +
             C15384 + C15384 + C32725 * C689) *
                C15957 +
            (C15717 + C15716) * C32588) *
               C32944 +
           ((C15107 * C344 + C15386 + C15386 + C15101 * C364 + C15109 * C1142 +
             C15387 + C15387 + C32725 * C1160) *
                C15957 +
            (C16860 + C16861) * C32588) *
               C32925) *
              C32639 * C230 -
          (((C15109 * C1145 + C17010 + C17010 + C32725 * C1163 +
             C15107 * C1144 + C17011 + C17011 + C15101 * C1162) *
                C32588 +
            (C15109 * C1143 + C17012 + C17012 + C32725 * C1161 +
             C15107 * C1142 + C17013 + C17013 + C15101 * C1160) *
                C15957) *
               C32925 +
           ((C15109 * C1140 + C15851 + C15851 + C32725 * C1158 + C15107 * C680 +
             C15850 + C15850 + C15101 * C690) *
                C32588 +
            (C15109 * C1141 + C15849 + C15849 + C32725 * C1159 + C15107 * C679 +
             C15848 + C15848 + C15101 * C689) *
                C15957) *
               C32944 +
           ((C15554 + C15555) * C32588 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C15957) *
               C32955) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C15957 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32588) *
               C32955 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C15957 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32588) *
               C32944 +
           ((C15107 * C1143 + C17018 + C17018 + C15101 * C1161 +
             C15109 * C6488 + C17019 + C17019 + C32725 * C6494) *
                C15957 +
            (C15107 * C1145 + C17020 + C17020 + C15101 * C1163 +
             C15109 * C7324 + C17021 + C17021 + C32725 * C7326) *
                C32588) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[15] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32583 +
             (C15156 + C15157) * C32591 + C15164 * C17968) *
                C32892 +
            ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
                C32767) *
               C32639 * C461 -
           (((C19450 + C19451) * C17968 + (C17435 + C17436) * C32591 +
             (C17851 + C17850) * C32583) *
                C32767 +
            ((C15552 + C15553) * C17968 + (C15554 + C15555) * C32591 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32583) *
                C32892) *
               C32639 * C462) *
              C463 +
          ((((C15555 + C15554) * C32583 + (C15553 + C15552) * C32591 +
             (C15551 + C15550) * C17968) *
                C32892 +
            ((C17436 + C17435) * C32583 + (C19451 + C19450) * C32591 +
             (C15107 * C682 + C15854 + C15854 + C15101 * C692 + C15109 * C1512 +
              C15855 + C15855 + C32725 * C1514) *
                 C17968) *
                C32767) *
               C32639 * C462 -
           (((C15712 + C15713) * C17968 + (C15714 + C15715) * C32591 +
             C17633 * C32583) *
                C32767 +
            ((C15161 + C15160) * C17968 + (C15159 + C15158) * C32591 +
             (C15157 + C15156) * C32583) *
                C32892) *
               C32639 * C461) *
              C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32583 +
             (C15156 + C15157) * C32591 + C15164 * C17968) *
                C32892 +
            ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
                C32767) *
               C571 -
           (((C16862 + C16863) * C17968 + C17632 * C32591 +
             (C17213 + C17212) * C32583) *
                C32767 +
            (C19646 * C17968 + C17633 * C32591 + (C17211 + C17210) * C32583) *
                C32892) *
               C572) *
              C461 +
          ((((C17850 + C17851) * C32583 + (C17436 + C17435) * C32591 +
             (C19451 + C19450) * C17968) *
                C32892 +
            ((C17852 + C17853) * C32583 + (C17434 + C17433) * C32591 +
             (C15107 * C1146 + C17423 + C17423 + C15101 * C1164 +
              C15109 * C1147 + C17424 + C17424 + C32725 * C1165) *
                 C17968) *
                C32767) *
               C572 -
           (((C19450 + C19451) * C17968 + (C17435 + C17436) * C32591 +
             (C17851 + C17850) * C32583) *
                C32767 +
            ((C15552 + C15553) * C17968 + (C15554 + C15555) * C32591 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32583) *
                C32892) *
               C571) *
              C462) *
         C32613) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32583 +
            (C15156 + C15157) * C32591 + C15164 * C17968) *
               C32892 +
           ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
               C32767) *
              C32639 * C230 -
          (((C15109 * C1139 + C15853 + C15853 + C32725 * C1157 + C15107 * C681 +
             C15852 + C15852 + C15101 * C691) *
                C17968 +
            (C17435 + C17436) * C32591 + (C17851 + C17850) * C32583) *
               C32767 +
           ((C15552 + C15553) * C17968 + (C15554 + C15555) * C32591 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32583) *
               C32892) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C32583 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32591 +
            (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
             C15277 + C15277 + C32725 * C1005) *
                C17968) *
               C32892 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C32583 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32591 +
            (C15107 * C1139 + C19100 + C19100 + C15101 * C1157 +
             C15109 * C1696 + C19101 + C19101 + C32725 * C1702) *
                C17968) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32583 +
            (C15156 + C15157) * C32591 + C15164 * C17968) *
               C32892 +
           ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C15712 + C15713) * C17968 + (C15714 + C15715) * C32591 +
            C17633 * C32583) *
               C32767 +
           ((C15161 + C15160) * C17968 + (C15159 + C15158) * C32591 +
            (C15157 + C15156) * C32583) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C15164 * C32583 + C15165 * C32591 + (C15163 + C15162) * C17968) *
               C32892 +
           (C18953 * C32583 + (C15713 + C15712) * C32591 +
            (C15107 * C339 + C15698 + C15698 + C15101 * C359 + C15109 * C683 +
             C15699 + C15699 + C32725 * C693) *
                C17968) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32583 +
            (C15156 + C15157) * C32591 + C15164 * C17968) *
               C32892 +
           ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
               C32767) *
              C336 -
          (((C16862 + C16863) * C17968 + C17632 * C32591 +
            (C17213 + C17212) * C32583) *
               C32767 +
           ((C15714 + C15715) * C17968 + C17633 * C32591 +
            (C17211 + C17210) * C32583) *
               C32892) *
              C337 +
          ((C17218 * C32583 + C17176 * C32591 + (C16863 + C16862) * C17968) *
               C32892 +
           ((C17217 + C17216) * C32583 + (C17215 + C17214) * C32591 +
            (C15107 * C2069 + C17634 + C17634 + C15101 * C2081 +
             C15109 * C2603 + C17635 + C17635 + C32725 * C2609) *
                C17968) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[18] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32583 +
             (C15156 + C15157) * C32591 + C15164 * C17968) *
                C32892 +
            ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
                C32767) *
               C571 -
           (((C16862 + C16863) * C17968 + C17632 * C32591 +
             (C17213 + C17212) * C32583) *
                C32767 +
            (C19646 * C17968 + C17633 * C32591 + (C17211 + C17210) * C32583) *
                C32892) *
               C572) *
              C32625 * C463 +
          (((C17631 * C32583 + C18953 * C32591 + (C15713 + C15712) * C17968) *
                C32892 +
            (C17176 * C32583 + (C16863 + C16862) * C32591 +
             (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
              C15393 + C15393 + C32725 * C2277) *
                 C17968) *
                C32767) *
               C572 -
           (((C15712 + C15713) * C17968 + C19646 * C32591 + C17633 * C32583) *
                C32767 +
            ((C15161 + C15160) * C17968 + (C15159 + C15158) * C32591 +
             (C15157 + C15156) * C32583) *
                C32892) *
               C571) *
              C32625 * C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32583 +
            (C15156 + C15157) * C32591 + C15164 * C17968) *
               C32892 +
           ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C15712 + C15713) * C17968 + (C15714 + C15715) * C32591 +
            C17633 * C32583) *
               C32767 +
           ((C15161 + C15160) * C17968 + (C15159 + C15158) * C32591 +
            (C15157 + C15156) * C32583) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C15164 * C32583 + C15165 * C32591 + (C15163 + C15162) * C17968) *
               C32892 +
           (C18953 * C32583 + (C15713 + C15712) * C32591 +
            (C15107 * C339 + C15698 + C15698 + C15101 * C359 + C15109 * C683 +
             C15699 + C15699 + C32725 * C693) *
                C17968) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32583 +
            (C15156 + C15157) * C32591 + C15164 * C17968) *
               C32892 +
           ((C17210 + C17211) * C32583 + C17631 * C32591 + C18953 * C17968) *
               C32767) *
              C32639 * C230 -
          (((C15109 * C1139 + C15853 + C15853 + C32725 * C1157 + C15107 * C681 +
             C15852 + C15852 + C15101 * C691) *
                C17968 +
            (C17435 + C17436) * C32591 + (C17851 + C17850) * C32583) *
               C32767 +
           ((C15552 + C15553) * C17968 + (C15554 + C15555) * C32591 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32583) *
               C32892) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C32583 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32591 +
            (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
             C15277 + C15277 + C32725 * C1005) *
                C17968) *
               C32892 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C32583 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32591 +
            (C15107 * C1139 + C19100 + C19100 + C15101 * C1157 +
             C15109 * C1696 + C19101 + C19101 + C32725 * C1702) *
                C17968) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[20] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32960 +
            (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
               C32680 * C32639 * C461 -
           ((C15550 + C15551) * C32891 + (C15552 + C15553) * C32940 +
            (C15554 + C15555) * C32953 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32960) *
               C32680 * C32639 * C462) *
              C463 +
          (((C15555 + C15554) * C32960 + (C15553 + C15552) * C32953 +
            (C15551 + C15550) * C32940 +
            (C15107 * C234 + C15536 + C15536 + C15101 * C254 + C15109 * C243 +
             C15537 + C15537 + C32725 * C263) *
                C32891) *
               C32680 * C32639 * C462 -
           ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
            (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C15957 +
            (C16016 + C16017 + C16018 + C16019) * C32588) *
               C32680 * C32639 * C461 -
           ((C16402 + C16403 + C16404 + C16405) * C32588 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C15957) *
               C32680 * C32639 * C462) *
              C463 +
          (((C16405 + C16404 + C16403 + C16402) * C15957 +
            (C15959 * C236 + C16390 + C16390 + C32961 * C256 + C15961 * C241 +
             C16391 + C16391 + C32957 * C261 + C15963 * C993 + C16392 + C16392 +
             C32947 * C1005 + C15965 * C998 + C16393 + C16393 +
             C32899 * C1010) *
                C32588) *
               C32680 * C32639 * C462 -
           ((C16020 + C16021 + C16022 + C16023) * C32588 +
            (C16019 + C16018 + C16017 + C16016) * C15957) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32960 +
            (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
               C32680 * C571 -
           ((C15712 + C15713) * C32891 + (C15714 + C15715) * C32940 +
            (C15716 + C15717) * C32953 +
            (C15109 * C679 + C15384 + C15384 + C32725 * C689 + C15107 * C343 +
             C15385 + C15385 + C15101 * C363) *
                C32960) *
               C32680 * C572) *
              C461 +
          (((C15107 * C679 + C15848 + C15848 + C15101 * C689 + C15109 * C1141 +
             C15849 + C15849 + C32725 * C1159) *
                C32960 +
            (C15107 * C680 + C15850 + C15850 + C15101 * C690 + C15109 * C1140 +
             C15851 + C15851 + C32725 * C1158) *
                C32953 +
            (C15107 * C681 + C15852 + C15852 + C15101 * C691 + C15109 * C1139 +
             C15853 + C15853 + C32725 * C1157) *
                C32940 +
            (C15107 * C682 + C15854 + C15854 + C15101 * C692 + C15109 * C1512 +
             C15855 + C15855 + C32725 * C1514) *
                C32891) *
               C32680 * C572 -
           ((C15550 + C15551) * C32891 + (C15552 + C15553) * C32940 +
            (C15554 + C15555) * C32953 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32960) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C15957 +
            (C16016 + C16017 + C16018 + C16019) * C32588) *
               C32680 * C571 -
           ((C16556 + C16557 + C16558 + C16559) * C32588 +
            (C15965 * C1694 + C16240 + C16240 + C32899 * C1700 +
             C15963 * C1141 + C16241 + C16241 + C32947 * C1159 + C15961 * C679 +
             C16242 + C16242 + C32957 * C689 + C15959 * C343 + C16243 + C16243 +
             C32961 * C363) *
                C15957) *
               C32680 * C572) *
              C461 +
          (((C15959 * C679 + C16690 + C16690 + C32961 * C689 + C15961 * C1141 +
             C16691 + C16691 + C32957 * C1159 + C15963 * C1694 + C16692 +
             C16692 + C32947 * C1700 + C15965 * C6487 + C16693 + C16693 +
             C32899 * C6493) *
                C15957 +
            (C15959 * C680 + C16694 + C16694 + C32961 * C690 + C15961 * C1140 +
             C16695 + C16695 + C32957 * C1158 + C15963 * C1695 + C16696 +
             C16696 + C32947 * C1701 + C15965 * C6678 + C16697 + C16697 +
             C32899 * C6680) *
                C32588) *
               C32680 * C572 -
           ((C16402 + C16403 + C16404 + C16405) * C32588 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C15957) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C32639 * C230 -
          ((C15109 * C242 + C15264 + C15264 + C32725 * C262 + C15107 * C235 +
            C15265 + C15265 + C15101 * C255) *
               C32891 +
           (C15109 * C241 + C15266 + C15266 + C32725 * C261 + C15107 * C236 +
            C15267 + C15267 + C15101 * C256) *
               C32940 +
           (C15109 * C240 + C15268 + C15268 + C32725 * C260 + C15107 * C237 +
            C15269 + C15269 + C15101 * C257) *
               C32953 +
           (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
            C15271 + C15271 + C15101 * C258) *
               C32960) *
              C32680 * C32639 * C231 +
          ((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
            C15273 + C15273 + C32725 * C1007) *
               C32960 +
           (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
            C15275 + C15275 + C32725 * C1006) *
               C32953 +
           (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
            C15277 + C15277 + C32725 * C1005) *
               C32940 +
           (C15107 * C242 + C15278 + C15278 + C15101 * C262 + C15109 * C1330 +
            C15279 + C15279 + C32725 * C1332) *
               C32891) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C32639 * C32625 * C110 -
          ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
           (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
              C32680 * C32639 * C32625 * C111 +
          (C15164 * C32960 + C15165 * C32953 + (C15163 + C15162) * C32940 +
           (C15107 * C120 + C15138 + C15138 + C15101 * C134 + C15109 * C465 +
            C15139 + C15139 + C32725 * C467) *
               C32891) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C336 -
          ((C15109 * C682 + C15378 + C15378 + C32725 * C692 + C15107 * C340 +
            C15379 + C15379 + C15101 * C360) *
               C32891 +
           (C15109 * C681 + C15380 + C15380 + C32725 * C691 + C15107 * C341 +
            C15381 + C15381 + C15101 * C361) *
               C32940 +
           (C15109 * C680 + C15382 + C15382 + C32725 * C690 + C15107 * C342 +
            C15383 + C15383 + C15101 * C362) *
               C32953 +
           (C15109 * C679 + C15384 + C15384 + C32725 * C689 + C15107 * C343 +
            C15385 + C15385 + C15101 * C363) *
               C32960) *
              C32680 * C337 +
          ((C15107 * C344 + C15386 + C15386 + C15101 * C364 + C15109 * C1142 +
            C15387 + C15387 + C32725 * C1160) *
               C32960 +
           (C15107 * C345 + C15388 + C15388 + C15101 * C365 + C15109 * C1144 +
            C15389 + C15389 + C32725 * C1162) *
               C32953 +
           (C15107 * C346 + C15390 + C15390 + C15101 * C366 + C15109 * C1146 +
            C15391 + C15391 + C32725 * C1164) *
               C32940 +
           (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
            C15393 + C15393 + C32725 * C2277) *
               C32891) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C16020 + C16021 + C16022 + C16023) * C32588 +
           (C16019 + C16018 + C16017 + C16016) * C15957) *
              C32680 * C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C15957 +
           (C15959 * C118 + C15996 + C15996 + C32961 * C132 + C15961 * C235 +
            C15997 + C15997 + C32957 * C255 + C15963 * C242 + C15998 + C15998 +
            C32947 * C262 + C15965 * C1330 + C15999 + C15999 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C230 -
          ((C15965 * C997 + C16122 + C16122 + C32899 * C1009 + C15963 * C994 +
            C16123 + C16123 + C32947 * C1006 + C15961 * C240 + C16124 + C16124 +
            C32957 * C260 + C15959 * C237 + C16125 + C16125 + C32961 * C257) *
               C32588 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C15957) *
              C32680 * C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C15957 +
           (C15959 * C240 + C16134 + C16134 + C32961 * C260 + C15961 * C994 +
            C16135 + C16135 + C32957 * C1006 + C15963 * C997 + C16136 + C16136 +
            C32947 * C1009 + C15965 * C6588 + C16137 + C16137 +
            C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C336 -
          ((C15965 * C1695 + C16236 + C16236 + C32899 * C1701 + C15963 * C1140 +
            C16237 + C16237 + C32947 * C1158 + C15961 * C680 + C16238 + C16238 +
            C32957 * C690 + C15959 * C342 + C16239 + C16239 + C32961 * C362) *
               C32588 +
           (C15965 * C1694 + C16240 + C16240 + C32899 * C1700 + C15963 * C1141 +
            C16241 + C16241 + C32947 * C1159 + C15961 * C679 + C16242 + C16242 +
            C32957 * C689 + C15959 * C343 + C16243 + C16243 + C32961 * C363) *
               C15957) *
              C32680 * C337 +
          ((C15959 * C344 + C16244 + C16244 + C32961 * C364 + C15961 * C1142 +
            C16245 + C16245 + C32957 * C1160 + C15963 * C1143 + C16246 +
            C16246 + C32947 * C1161 + C15965 * C6488 + C16247 + C16247 +
            C32899 * C6494) *
               C15957 +
           (C15959 * C345 + C16248 + C16248 + C32961 * C365 + C15961 * C1144 +
            C16249 + C16249 + C32957 * C1162 + C15963 * C1145 + C16250 +
            C16250 + C32947 * C1163 + C15965 * C7324 + C16251 + C16251 +
            C32899 * C7326) *
               C32588) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32960 +
            (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
               C32680 * C571 -
           ((C15712 + C15713) * C32891 + (C15714 + C15715) * C32940 +
            (C15716 + C15717) * C32953 +
            (C15109 * C679 + C15384 + C15384 + C32725 * C689 + C15107 * C343 +
             C15385 + C15385 + C15101 * C363) *
                C32960) *
               C32680 * C572) *
              C32625 * C463 +
          (((C15717 + C15716) * C32960 + (C15715 + C15714) * C32953 +
            (C15713 + C15712) * C32940 +
            (C15107 * C339 + C15698 + C15698 + C15101 * C359 + C15109 * C683 +
             C15699 + C15699 + C32725 * C693) *
                C32891) *
               C32680 * C572 -
           ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
            (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C15957 +
            (C16016 + C16017 + C16018 + C16019) * C32588) *
               C32680 * C571 -
           ((C16556 + C16557 + C16558 + C16559) * C32588 +
            (C15965 * C1694 + C16240 + C16240 + C32899 * C1700 +
             C15963 * C1141 + C16241 + C16241 + C32947 * C1159 + C15961 * C679 +
             C16242 + C16242 + C32957 * C689 + C15959 * C343 + C16243 + C16243 +
             C32961 * C363) *
                C15957) *
               C32680 * C572) *
              C32625 * C463 +
          (((C16559 + C16558 + C16557 + C16556) * C15957 +
            (C15959 * C341 + C16544 + C16544 + C32961 * C361 + C15961 * C681 +
             C16545 + C16545 + C32957 * C691 + C15963 * C1139 + C16546 +
             C16546 + C32947 * C1157 + C15965 * C1696 + C16547 + C16547 +
             C32899 * C1702) *
                C32588) *
               C32680 * C572 -
           ((C16020 + C16021 + C16022 + C16023) * C32588 +
            (C16019 + C16018 + C16017 + C16016) * C15957) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[24] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C32639 * C32625 * C110 -
          ((C15162 + C15163) * C32891 + (C15161 + C15160) * C32940 +
           (C15159 + C15158) * C32953 + (C15157 + C15156) * C32960) *
              C32680 * C32639 * C32625 * C111 +
          (C15164 * C32960 + C15165 * C32953 + (C15163 + C15162) * C32940 +
           (C15107 * C120 + C15138 + C15138 + C15101 * C134 + C15109 * C465 +
            C15139 + C15139 + C32725 * C467) *
               C32891) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32960 +
           (C15156 + C15157) * C32953 + C15164 * C32940 + C15165 * C32891) *
              C32680 * C32639 * C230 -
          ((C15109 * C242 + C15264 + C15264 + C32725 * C262 + C15107 * C235 +
            C15265 + C15265 + C15101 * C255) *
               C32891 +
           (C15109 * C241 + C15266 + C15266 + C32725 * C261 + C15107 * C236 +
            C15267 + C15267 + C15101 * C256) *
               C32940 +
           (C15109 * C240 + C15268 + C15268 + C32725 * C260 + C15107 * C237 +
            C15269 + C15269 + C15101 * C257) *
               C32953 +
           (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
            C15271 + C15271 + C15101 * C258) *
               C32960) *
              C32680 * C32639 * C231 +
          ((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
            C15273 + C15273 + C32725 * C1007) *
               C32960 +
           (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
            C15275 + C15275 + C32725 * C1006) *
               C32953 +
           (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
            C15277 + C15277 + C32725 * C1005) *
               C32940 +
           (C15107 * C242 + C15278 + C15278 + C15101 * C262 + C15109 * C1330 +
            C15279 + C15279 + C32725 * C1332) *
               C32891) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C16020 + C16021 + C16022 + C16023) * C32588 +
           (C16019 + C16018 + C16017 + C16016) * C15957) *
              C32680 * C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C15957 +
           (C15959 * C118 + C15996 + C15996 + C32961 * C132 + C15961 * C235 +
            C15997 + C15997 + C32957 * C255 + C15963 * C242 + C15998 + C15998 +
            C32947 * C262 + C15965 * C1330 + C15999 + C15999 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C15957 +
           (C16016 + C16017 + C16018 + C16019) * C32588) *
              C32680 * C32639 * C230 -
          ((C15965 * C997 + C16122 + C16122 + C32899 * C1009 + C15963 * C994 +
            C16123 + C16123 + C32947 * C1006 + C15961 * C240 + C16124 + C16124 +
            C32957 * C260 + C15959 * C237 + C16125 + C16125 + C32961 * C257) *
               C32588 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C15957) *
              C32680 * C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C15957 +
           (C15959 * C240 + C16134 + C16134 + C32961 * C260 + C15961 * C994 +
            C16135 + C16135 + C32957 * C1006 + C15963 * C997 + C16136 + C16136 +
            C32947 * C1009 + C15965 * C6588 + C16137 + C16137 +
            C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
              C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 +
              C17978 + C17965 * C259) *
                 C32872 +
             (C18027 + C18028 + C18029) * C32588) *
                C21055 +
            ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
               C32639 * C461 -
           (((C20542 + C20543 + C20544) * C32588 +
             (C20957 + C20956 + C20955) * C32872) *
                C32767 +
            ((C18470 + C18471 + C18472) * C32588 +
             (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
              C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 +
              C18156 + C32721 * C258) *
                 C32872) *
                C21055) *
               C32639 * C462) *
              C463 +
          ((((C18472 + C18471 + C18470) * C32872 +
             (C18469 + C18468 + C18467) * C32588) *
                C21055 +
            ((C20544 + C20543 + C20542) * C32872 +
             (C31733 * C681 + C18804 + C18804 + C32721 * C691 + C31721 * C1139 +
              C18805 + C18805 + C32728 * C1157 + C17973 * C1696 + C18806 +
              C18806 + C17965 * C1702) *
                 C32588) *
                C32767) *
               C32639 * C462 -
           (((C18646 + C18647 + C18648) * C32588 + C20742 * C32872) * C32767 +
            ((C18032 + C18031 + C18030) * C32588 +
             (C18029 + C18028 + C18027) * C32872) *
                C21055) *
               C32639 * C461) *
              C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
              C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 +
              C17978 + C17965 * C259) *
                 C32872 +
             (C18027 + C18028 + C18029) * C32588) *
                C21055 +
            ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
               C571 -
           (((C20330 + C20331 + C20332) * C32588 +
             (C20333 + C20334 + C20335) * C32872) *
                C32767 +
            (C20742 * C32588 + (C20329 + C20328 + C20327) * C32872) * C21055) *
               C572) *
              C461 +
          ((((C20955 + C20956 + C20957) * C32872 +
             (C20544 + C20543 + C20542) * C32588) *
                C21055 +
            ((C31733 * C1142 + C20943 + C20943 + C32721 * C1160 +
              C31721 * C1143 + C20944 + C20944 + C32728 * C1161 +
              C17973 * C6488 + C20945 + C20945 + C17965 * C6494) *
                 C32872 +
             (C31733 * C1144 + C20946 + C20946 + C32721 * C1162 +
              C31721 * C1145 + C20947 + C20947 + C32728 * C1163 +
              C17973 * C7324 + C20948 + C20948 + C17965 * C7326) *
                 C32588) *
                C32767) *
               C572 -
           (((C20542 + C20543 + C20544) * C32588 +
             (C20957 + C20956 + C20955) * C32872) *
                C32767 +
            ((C18470 + C18471 + C18472) * C32588 +
             (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
              C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 +
              C18156 + C32721 * C258) *
                 C32872) *
                C21055) *
               C571) *
              C462) *
         C32613) /
        (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32872 +
            (C18027 + C18028 + C18029) * C32588) *
               C21055 +
           ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
              C32639 * C230 -
          (((C20542 + C20543 + C20544) * C32588 +
            (C20957 + C20956 + C20955) * C32872) *
               C32767 +
           ((C18470 + C18471 + C18472) * C32588 +
            (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
             C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 + C18156 +
             C32721 * C258) *
                C32872) *
               C21055) *
              C32639 * C231 +
          (((C31733 * C239 + C18157 + C18157 + C32721 * C259 + C31721 * C995 +
             C18158 + C18158 + C32728 * C1007 + C17973 * C996 + C18159 +
             C18159 + C17965 * C1008) *
                C32872 +
            (C31733 * C240 + C18160 + C18160 + C32721 * C260 + C31721 * C994 +
             C18161 + C18161 + C32728 * C1006 + C17973 * C997 + C18162 +
             C18162 + C17965 * C1009) *
                C32588) *
               C21055 +
           ((C31733 * C1141 + C20133 + C20133 + C32721 * C1159 +
             C31721 * C1694 + C20134 + C20134 + C32728 * C1700 +
             C17973 * C6487 + C20135 + C20135 + C17965 * C6493) *
                C32872 +
            (C31733 * C1140 + C20136 + C20136 + C32721 * C1158 +
             C31721 * C1695 + C20137 + C20137 + C32728 * C1701 +
             C17973 * C6678 + C20138 + C20138 + C17965 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32872 +
            (C18027 + C18028 + C18029) * C32588) *
               C21055 +
           ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
              C32639 * C32625 * C110 -
          (((C18646 + C18647 + C18648) * C32588 + C20742 * C32872) * C32767 +
           ((C18032 + C18031 + C18030) * C32588 +
            (C18029 + C18028 + C18027) * C32872) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C18037 * C32872 + (C18035 + C18034 + C18033) * C32588) * C21055 +
           ((C18648 + C18647 + C18646) * C32872 +
            (C31733 * C340 + C18631 + C18631 + C32721 * C360 + C31721 * C682 +
             C18632 + C18632 + C32728 * C692 + C17973 * C1512 + C18633 +
             C18633 + C17965 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32872 +
            (C18027 + C18028 + C18029) * C32588) *
               C21055 +
           ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
              C336 -
          (((C20330 + C20331 + C20332) * C32588 +
            (C20333 + C20334 + C20335) * C32872) *
               C32767 +
           (C20742 * C32588 + (C20329 + C20328 + C20327) * C32872) * C21055) *
              C337 +
          (((C20335 + C20334 + C20333) * C32872 +
            (C20332 + C20331 + C20330) * C32588) *
               C21055 +
           ((C31733 * C2071 + C20303 + C20303 + C32721 * C2083 +
             C31721 * C2601 + C20304 + C20304 + C32728 * C2607 +
             C17973 * C7115 + C20305 + C20305 + C17965 * C7121) *
                C32872 +
            (C31733 * C2070 + C20306 + C20306 + C32721 * C2082 +
             C31721 * C2602 + C20307 + C20307 + C32728 * C2608 +
             C17973 * C7476 + C20308 + C20308 + C17965 * C7478) *
                C32588) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
              C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 +
              C17978 + C17965 * C259) *
                 C32872 +
             (C18027 + C18028 + C18029) * C32588) *
                C21055 +
            ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
               C571 -
           (((C20330 + C20331 + C20332) * C32588 +
             (C20333 + C20334 + C20335) * C32872) *
                C32767 +
            (C20742 * C32588 + (C20329 + C20328 + C20327) * C32872) * C21055) *
               C572) *
              C32625 * C463 +
          (((C20741 * C32872 + (C18648 + C18647 + C18646) * C32588) * C21055 +
            ((C20332 + C20331 + C20330) * C32872 +
             (C31733 * C346 + C18291 + C18291 + C32721 * C366 + C31721 * C1146 +
              C18292 + C18292 + C32728 * C1164 + C17973 * C1147 + C18293 +
              C18293 + C17965 * C1165) *
                 C32588) *
                C32767) *
               C572 -
           (((C18646 + C18647 + C18648) * C32588 + C20742 * C32872) * C32767 +
            ((C18032 + C18031 + C18030) * C32588 +
             (C18029 + C18028 + C18027) * C32872) *
                C21055) *
               C571) *
              C32625 * C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32872 +
            (C18027 + C18028 + C18029) * C32588) *
               C21055 +
           ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
              C32639 * C32625 * C110 -
          (((C18646 + C18647 + C18648) * C32588 + C20742 * C32872) * C32767 +
           ((C18032 + C18031 + C18030) * C32588 +
            (C18029 + C18028 + C18027) * C32872) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C18037 * C32872 + (C18035 + C18034 + C18033) * C32588) * C21055 +
           ((C18648 + C18647 + C18646) * C32872 +
            (C31733 * C340 + C18631 + C18631 + C32721 * C360 + C31721 * C682 +
             C18632 + C18632 + C32728 * C692 + C17973 * C1512 + C18633 +
             C18633 + C17965 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32872 +
            (C18027 + C18028 + C18029) * C32588) *
               C21055 +
           ((C20327 + C20328 + C20329) * C32872 + C20741 * C32588) * C32767) *
              C32639 * C230 -
          (((C20542 + C20543 + C20544) * C32588 +
            (C20957 + C20956 + C20955) * C32872) *
               C32767 +
           ((C18470 + C18471 + C18472) * C32588 +
            (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
             C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 + C18156 +
             C32721 * C258) *
                C32872) *
               C21055) *
              C32639 * C231 +
          (((C31733 * C239 + C18157 + C18157 + C32721 * C259 + C31721 * C995 +
             C18158 + C18158 + C32728 * C1007 + C17973 * C996 + C18159 +
             C18159 + C17965 * C1008) *
                C32872 +
            (C31733 * C240 + C18160 + C18160 + C32721 * C260 + C31721 * C994 +
             C18161 + C18161 + C32728 * C1006 + C17973 * C997 + C18162 +
             C18162 + C17965 * C1009) *
                C32588) *
               C21055 +
           ((C31733 * C1141 + C20133 + C20133 + C32721 * C1159 +
             C31721 * C1694 + C20134 + C20134 + C32728 * C1700 +
             C17973 * C6487 + C20135 + C20135 + C17965 * C6493) *
                C32872 +
            (C31733 * C1140 + C20136 + C20136 + C32721 * C1158 +
             C31721 * C1695 + C20137 + C20137 + C32728 * C1701 +
             C17973 * C6678 + C20138 + C20138 + C17965 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[30] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32578 * C32763 +
            (C20327 + C20328 + C20329) * C32578 * C32770 + C31128 * C24543) *
               C32639 * C461 -
           ((C17973 * C6488 + C20945 + C20945 + C17965 * C6494 +
             C31721 * C1143 + C20944 + C20944 + C32728 * C1161 +
             C31733 * C1142 + C20943 + C20943 + C32721 * C1160) *
                C32578 * C24543 +
            (C20957 + C20956 + C20955) * C32578 * C32770 +
            (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
             C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 + C18156 +
             C32721 * C258) *
                C32578 * C32763) *
               C32639 * C462) *
              C463 +
          (((C18472 + C18471 + C18470) * C32578 * C32763 +
            (C20544 + C20543 + C20542) * C32578 * C32770 +
            (C31733 * C1144 + C20946 + C20946 + C32721 * C1162 +
             C31721 * C1145 + C20947 + C20947 + C32728 * C1163 +
             C17973 * C7324 + C20948 + C20948 + C17965 * C7326) *
                C32578 * C24543) *
               C32639 * C462 -
           ((C20330 + C20331 + C20332) * C32578 * C24543 +
            C20742 * C32578 * C32770 +
            (C18029 + C18028 + C18027) * C32578 * C32763) *
               C32639 * C461) *
              C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[31] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32578 * C32763 +
            (C20327 + C20328 + C20329) * C32578 * C32770 + C31128 * C24543) *
               C571 -
           ((C31132 + C31133 + C31134) * C32578 * C24543 +
            (C20333 + C20334 + C20335) * C32578 * C32770 +
            (C20329 + C20328 + C20327) * C32578 * C32763) *
               C572) *
              C461 +
          (((C20955 + C20956 + C20957) * C32578 * C32763 +
            (C31588 + C31589 + C31590) * C32578 * C32770 +
            (C31733 * C2601 + C31579 + C31579 + C32721 * C2607 +
             C31721 * C7115 + C31580 + C31580 + C32728 * C7121 +
             C17973 * C7643 + C31581 + C31581 + C17965 * C7645) *
                C32578 * C24543) *
               C572 -
           ((C31590 + C31589 + C31588) * C32578 * C24543 +
            (C20957 + C20956 + C20955) * C32578 * C32770 +
            (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
             C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 + C18156 +
             C32721 * C258) *
                C32578 * C32763) *
               C571) *
              C462) *
         C32613) /
        (p * q * std::sqrt(p + q));
    d2ee[32] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
            C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
            C17965 * C259) *
               C32578 * C32763 +
           (C20327 + C20328 + C20329) * C32578 * C32770 +
           (C20335 + C20334 + C20333) * C32578 * C24543) *
              C32639 * C230 -
          ((C17973 * C6488 + C20945 + C20945 + C17965 * C6494 + C31721 * C1143 +
            C20944 + C20944 + C32728 * C1161 + C31733 * C1142 + C20943 +
            C20943 + C32721 * C1160) *
               C32578 * C24543 +
           (C20957 + C20956 + C20955) * C32578 * C32770 +
           (C17973 * C995 + C18154 + C18154 + C17965 * C1007 + C31721 * C239 +
            C18155 + C18155 + C32728 * C259 + C31733 * C238 + C18156 + C18156 +
            C32721 * C258) *
               C32578 * C32763) *
              C32639 * C231 +
          ((C31733 * C239 + C18157 + C18157 + C32721 * C259 + C31721 * C995 +
            C18158 + C18158 + C32728 * C1007 + C17973 * C996 + C18159 + C18159 +
            C17965 * C1008) *
               C32578 * C32763 +
           (C31733 * C1141 + C20133 + C20133 + C32721 * C1159 + C31721 * C1694 +
            C20134 + C20134 + C32728 * C1700 + C17973 * C6487 + C20135 +
            C20135 + C17965 * C6493) *
               C32578 * C32770 +
           (C31733 * C1143 + C31001 + C31001 + C32721 * C1161 + C31721 * C6488 +
            C31002 + C31002 + C32728 * C6494 + C17973 * C6489 + C31003 +
            C31003 + C17965 * C6495) *
               C32578 * C24543) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
            C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
            C17965 * C259) *
               C32578 * C32763 +
           (C20327 + C20328 + C20329) * C32578 * C32770 +
           (C20335 + C20334 + C20333) * C32578 * C24543) *
              C32639 * C32625 * C110 -
          ((C20330 + C20331 + C20332) * C32578 * C24543 +
           C20742 * C32578 * C32770 +
           (C18029 + C18028 + C18027) * C32578 * C32763) *
              C32639 * C32625 * C111 +
          (C18037 * C32578 * C32763 +
           (C18648 + C18647 + C18646) * C32578 * C32770 +
           (C31733 * C346 + C18291 + C18291 + C32721 * C366 + C31721 * C1146 +
            C18292 + C18292 + C32728 * C1164 + C17973 * C1147 + C18293 +
            C18293 + C17965 * C1165) *
               C32578 * C24543) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
            C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
            C17965 * C259) *
               C32578 * C32763 +
           (C20327 + C20328 + C20329) * C32578 * C32770 + C31128 * C24543) *
              C336 -
          ((C31132 + C31133 + C31134) * C32578 * C24543 +
           (C20333 + C20334 + C20335) * C32578 * C32770 +
           (C20329 + C20328 + C20327) * C32578 * C32763) *
              C337 +
          (C31128 * C32763 + (C31134 + C31133 + C31132) * C32578 * C32770 +
           (C31733 * C2072 + C31121 + C31121 + C32721 * C2084 + C31721 * C7116 +
            C31122 + C31122 + C32728 * C7122 + C17973 * C7117 + C31123 +
            C31123 + C17965 * C7123) *
               C32578 * C24543) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[33] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C17976 + C17976 + C32721 * C129 + C31721 * C238 +
             C17977 + C17977 + C32728 * C258 + C17973 * C239 + C17978 + C17978 +
             C17965 * C259) *
                C32578 * C32763 +
            (C20327 + C20328 + C20329) * C32578 * C32770 + C31128 * C24543) *
               C571 -
           ((C31132 + C31133 + C31134) * C32578 * C24543 +
            (C20333 + C20334 + C20335) * C32578 * C32770 +
            (C20329 + C20328 + C20327) * C32578 * C32763) *
               C572) *
              C32625 * C463 +
          ((C20741 * C32578 * C32763 +
            (C20332 + C20331 + C20330) * C32578 * C32770 +
            (C31733 * C2070 + C20306 + C20306 + C32721 * C2082 +
             C31721 * C2602 + C20307 + C20307 + C32728 * C2608 +
             C17973 * C7476 + C20308 + C20308 + C17965 * C7478) *
                C32578 * C24543) *
               C572 -
           ((C20330 + C20331 + C20332) * C32578 * C24543 +
            C20742 * C32578 * C32770 +
            (C18029 + C18028 + C18027) * C32578 * C32763) *
               C571) *
              C32625 * C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[34] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                    C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                    C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                       C32578 * C32763 +
                   (C20327 + C20328 + C20329) * C32578 * C32770 +
                   (C20335 + C20334 + C20333) * C32578 * C24543) *
                      C32639 * C32625 * C110 -
                  ((C20330 + C20331 + C20332) * C32578 * C24543 +
                   C20742 * C32578 * C32770 +
                   (C18029 + C18028 + C18027) * C32578 * C32763) *
                      C32639 * C32625 * C111 +
                  (C18037 * C32578 * C32763 +
                   (C18648 + C18647 + C18646) * C32578 * C32770 +
                   (C31733 * C346 + C18291 + C18291 + C32721 * C366 +
                    C31721 * C1146 + C18292 + C18292 + C32728 * C1164 +
                    C17973 * C1147 + C18293 + C18293 + C17965 * C1165) *
                       C32578 * C24543) *
                      C32639 * C32625 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((C31733 * C115 + C17976 + C17976 + C32721 * C129 +
                    C31721 * C238 + C17977 + C17977 + C32728 * C258 +
                    C17973 * C239 + C17978 + C17978 + C17965 * C259) *
                       C32578 * C32763 +
                   (C20327 + C20328 + C20329) * C32578 * C32770 +
                   (C20335 + C20334 + C20333) * C32578 * C24543) *
                      C32639 * C230 -
                  ((C17973 * C6488 + C20945 + C20945 + C17965 * C6494 +
                    C31721 * C1143 + C20944 + C20944 + C32728 * C1161 +
                    C31733 * C1142 + C20943 + C20943 + C32721 * C1160) *
                       C32578 * C24543 +
                   (C20957 + C20956 + C20955) * C32578 * C32770 +
                   (C17973 * C995 + C18154 + C18154 + C17965 * C1007 +
                    C31721 * C239 + C18155 + C18155 + C32728 * C259 +
                    C31733 * C238 + C18156 + C18156 + C32721 * C258) *
                       C32578 * C32763) *
                      C32639 * C231 +
                  ((C31733 * C239 + C18157 + C18157 + C32721 * C259 +
                    C31721 * C995 + C18158 + C18158 + C32728 * C1007 +
                    C17973 * C996 + C18159 + C18159 + C17965 * C1008) *
                       C32578 * C32763 +
                   (C31733 * C1141 + C20133 + C20133 + C32721 * C1159 +
                    C31721 * C1694 + C20134 + C20134 + C32728 * C1700 +
                    C17973 * C6487 + C20135 + C20135 + C17965 * C6493) *
                       C32578 * C32770 +
                   (C31733 * C1143 + C31001 + C31001 + C32721 * C1161 +
                    C31721 * C6488 + C31002 + C31002 + C32728 * C6494 +
                    C17973 * C6489 + C31003 + C31003 + C17965 * C6495) *
                       C32578 * C24543) *
                      C32639 * C232) *
                 C32613) /
                    (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C32578 * C21055 +
            (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
               C32639 * C461 -
           ((C15965 * C6487 + C16693 + C16693 + C32899 * C6493 +
             C15963 * C1694 + C16692 + C16692 + C32947 * C1700 +
             C15961 * C1141 + C16691 + C16691 + C32957 * C1159 + C15959 * C679 +
             C16690 + C16690 + C32961 * C689) *
                C32578 * C32767 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C32578 * C21055) *
               C32639 * C462) *
              C463 +
          (((C16405 + C16404 + C16403 + C16402) * C32578 * C21055 +
            (C15959 * C680 + C16694 + C16694 + C32961 * C690 + C15961 * C1140 +
             C16695 + C16695 + C32957 * C1158 + C15963 * C1695 + C16696 +
             C16696 + C32947 * C1701 + C15965 * C6678 + C16697 + C16697 +
             C32899 * C6680) *
                C32578 * C32767) *
               C32639 * C462 -
           ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
            (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32951 +
             (C15156 + C15157) * C32938 + C15164 * C32913) *
                C21055 +
            ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
                C32767) *
               C32639 * C461 -
           (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
             (C17851 + C17850) * C32951) *
                C32767 +
            ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32951) *
                C21055) *
               C32639 * C462) *
              C463 +
          ((((C15555 + C15554) * C32951 + (C15553 + C15552) * C32938 +
             (C15551 + C15550) * C32913) *
                C21055 +
            ((C17436 + C17435) * C32951 + (C19451 + C19450) * C32938 +
             (C15107 * C682 + C15854 + C15854 + C15101 * C692 + C15109 * C1512 +
              C15855 + C15855 + C32725 * C1514) *
                 C32913) *
                C32767) *
               C32639 * C462 -
           (((C15712 + C15713) * C32913 + C19646 * C32938 + C17633 * C32951) *
                C32767 +
            ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
             (C15157 + C15156) * C32951) *
                C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32578 * C32962 +
            (C17210 + C17211) * C32578 * C32959 + C28321 * C32950 +
            C28329 * C32906) *
               C32639 * C461 -
           ((C15109 * C7115 + C17839 + C17839 + C32725 * C7121 +
             C15107 * C2601 + C17838 + C17838 + C15101 * C2607) *
                C32578 * C32906 +
            (C17853 + C17852) * C32578 * C32950 +
            (C17851 + C17850) * C32578 * C32959 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32578 * C32962) *
               C32639 * C462) *
              C463 +
          (((C15555 + C15554) * C32578 * C32962 +
            (C17436 + C17435) * C32578 * C32959 +
            (C17434 + C17433) * C32578 * C32950 +
            (C15107 * C2602 + C17840 + C17840 + C15101 * C2608 +
             C15109 * C7476 + C17841 + C17841 + C32725 * C7478) *
                C32578 * C32906) *
               C32639 * C462 -
           ((C17214 + C17215) * C32578 * C32906 + C17632 * C32578 * C32950 +
            C17633 * C32578 * C32959 + (C15157 + C15156) * C32578 * C32962) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C32578 * C21055 +
            (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
               C571 -
           ((C27607 + C27608 + C27609 + C27610) * C32578 * C32767 +
            (C27606 + C27605 + C27604 + C27603) * C32578 * C21055) *
               C572) *
              C461 +
          (((C28021 + C28022 + C28023 + C28024) * C32578 * C21055 +
            (C15959 * C1142 + C28009 + C28009 + C32961 * C1160 +
             C15961 * C1143 + C28010 + C28010 + C32957 * C1161 +
             C15963 * C6488 + C28011 + C28011 + C32947 * C6494 +
             C15965 * C6489 + C28012 + C28012 + C32899 * C6495) *
                C32578 * C32767) *
               C572 -
           ((C28024 + C28023 + C28022 + C28021) * C32578 * C32767 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C32578 * C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32951 +
             (C15156 + C15157) * C32938 + C15164 * C32913) *
                C21055 +
            ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
                C32767) *
               C571 -
           (((C16862 + C16863) * C32913 + C17632 * C32938 +
             (C17213 + C17212) * C32951) *
                C32767 +
            (C19646 * C32913 + C17633 * C32938 + (C17211 + C17210) * C32951) *
                C21055) *
               C572) *
              C461 +
          ((((C17850 + C17851) * C32951 + (C17436 + C17435) * C32938 +
             (C19451 + C19450) * C32913) *
                C21055 +
            ((C17852 + C17853) * C32951 + (C17434 + C17433) * C32938 +
             (C15107 * C1146 + C17423 + C17423 + C15101 * C1164 +
              C15109 * C1147 + C17424 + C17424 + C32725 * C1165) *
                 C32913) *
                C32767) *
               C572 -
           (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
             (C17851 + C17850) * C32951) *
                C32767 +
            ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32951) *
                C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32578 * C32962 +
            (C17210 + C17211) * C32578 * C32959 + C28321 * C32950 +
            C28329 * C32906) *
               C571 -
           ((C28334 + C28335) * C32578 * C32906 +
            (C17216 + C17217) * C32578 * C32950 +
            (C17213 + C17212) * C32578 * C32959 +
            (C17211 + C17210) * C32578 * C32962) *
               C572) *
              C461 +
          (((C17850 + C17851) * C32578 * C32962 +
            (C17852 + C17853) * C32578 * C32959 +
            (C28736 + C28737) * C32578 * C32950 +
            (C15107 * C7116 + C28730 + C28730 + C15101 * C7122 +
             C15109 * C7117 + C28731 + C28731 + C32725 * C7123) *
                C32578 * C32906) *
               C572 -
           ((C28737 + C28736) * C32578 * C32906 +
            (C17853 + C17852) * C32578 * C32950 +
            (C17851 + C17850) * C32578 * C32959 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32578 * C32962) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 +
                 C15109 * C238 + C15113 + C15113 + C32725 * C258) *
                    C32951 +
                (C15156 + C15157) * C32938 + C15164 * C32913) *
                   C21055 +
               ((C17210 + C17211) * C32951 + C17631 * C32938 +
                C18953 * C32913) *
                   C32767) *
                  C32639 * C32625 * C110 -
              (((C15712 + C15713) * C32913 + C19646 * C32938 +
                C17633 * C32951) *
                   C32767 +
               ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
                (C15157 + C15156) * C32951) *
                   C21055) *
                  C32639 * C32625 * C111 +
              ((C15164 * C32951 + C15165 * C32938 +
                (C15163 + C15162) * C32913) *
                   C21055 +
               (C18953 * C32951 + (C15713 + C15712) * C32938 +
                (C15107 * C339 + C15698 + C15698 + C15101 * C359 +
                 C15109 * C683 + C15699 + C15699 + C32725 * C693) *
                    C32913) *
                   C32767) *
                  C32639 * C32625 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 +
                 C15109 * C238 + C15113 + C15113 + C32725 * C258) *
                    C32951 +
                (C15156 + C15157) * C32938 + C15164 * C32913) *
                   C21055 +
               ((C17210 + C17211) * C32951 + C17631 * C32938 +
                C18953 * C32913) *
                   C32767) *
                  C32639 * C230 -
              (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
                (C17851 + C17850) * C32951) *
                   C32767 +
               ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
                (C15109 * C239 + C15270 + C15270 + C32725 * C259 +
                 C15107 * C238 + C15271 + C15271 + C15101 * C258) *
                    C32951) *
                   C21055) *
                  C32639 * C231 +
              (((C15107 * C239 + C15272 + C15272 + C15101 * C259 +
                 C15109 * C995 + C15273 + C15273 + C32725 * C1007) *
                    C32951 +
                (C15107 * C240 + C15274 + C15274 + C15101 * C260 +
                 C15109 * C994 + C15275 + C15275 + C32725 * C1006) *
                    C32938 +
                (C15107 * C241 + C15276 + C15276 + C15101 * C261 +
                 C15109 * C993 + C15277 + C15277 + C32725 * C1005) *
                    C32913) *
                   C21055 +
               ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
                 C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                    C32951 +
                (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
                 C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                    C32938 +
                (C15107 * C1139 + C19100 + C19100 + C15101 * C1157 +
                 C15109 * C1696 + C19101 + C19101 + C32725 * C1702) *
                    C32913) *
                   C32767) *
                  C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C336 -
          (((C16862 + C16863) * C32913 + C17632 * C32938 +
            (C17213 + C17212) * C32951) *
               C32767 +
           (C19646 * C32913 + C17633 * C32938 + (C17211 + C17210) * C32951) *
               C21055) *
              C337 +
          ((C17218 * C32951 + C17176 * C32938 + (C16863 + C16862) * C32913) *
               C21055 +
           ((C17217 + C17216) * C32951 + (C17215 + C17214) * C32938 +
            (C15107 * C2069 + C17634 + C17634 + C15101 * C2081 +
             C15109 * C2603 + C17635 + C17635 + C32725 * C2609) *
                C32913) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
           (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
              C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C32578 * C21055 +
           (C15959 * C341 + C16544 + C16544 + C32961 * C361 + C15961 * C681 +
            C16545 + C16545 + C32957 * C691 + C15963 * C1139 + C16546 + C16546 +
            C32947 * C1157 + C15965 * C1696 + C16547 + C16547 +
            C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C15965 * C6487 + C16693 + C16693 + C32899 * C6493 + C15963 * C1694 +
            C16692 + C16692 + C32947 * C1700 + C15961 * C1141 + C16691 +
            C16691 + C32957 * C1159 + C15959 * C679 + C16690 + C16690 +
            C32961 * C689) *
               C32578 * C32767 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C32578 * C21055) *
              C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C32578 * C21055 +
           (C15959 * C1141 + C27465 + C27465 + C32961 * C1159 + C15961 * C1694 +
            C27466 + C27466 + C32957 * C1700 + C15963 * C6487 + C27467 +
            C27467 + C32947 * C6493 + C15965 * C6768 + C27468 + C27468 +
            C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
              C336 -
          ((C27607 + C27608 + C27609 + C27610) * C32578 * C32767 +
           (C27606 + C27605 + C27604 + C27603) * C32578 * C21055) *
              C337 +
          ((C27610 + C27609 + C27608 + C27607) * C32578 * C21055 +
           (C15959 * C2071 + C27583 + C27583 + C32961 * C2083 + C15961 * C2601 +
            C27584 + C27584 + C32957 * C2607 + C15963 * C7115 + C27585 +
            C27585 + C32947 * C7121 + C15965 * C7643 + C27586 + C27586 +
            C32899 * C7645) *
               C32578 * C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32578 * C32962 +
           (C17210 + C17211) * C32578 * C32959 + C17218 * C32578 * C32950 +
           (C17217 + C17216) * C32578 * C32906) *
              C32639 * C32625 * C110 -
          ((C17214 + C17215) * C32578 * C32906 + C17632 * C32578 * C32950 +
           C17633 * C32578 * C32959 + (C15157 + C15156) * C32578 * C32962) *
              C32639 * C32625 * C111 +
          (C15164 * C32578 * C32962 + C18953 * C32578 * C32959 +
           (C16863 + C16862) * C32578 * C32950 +
           (C15107 * C2069 + C17634 + C17634 + C15101 * C2081 + C15109 * C2603 +
            C17635 + C17635 + C32725 * C2609) *
               C32578 * C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32578 * C32962 +
           (C17210 + C17211) * C32578 * C32959 + C17218 * C32578 * C32950 +
           (C17217 + C17216) * C32578 * C32906) *
              C32639 * C230 -
          ((C15109 * C7115 + C17839 + C17839 + C32725 * C7121 + C15107 * C2601 +
            C17838 + C17838 + C15101 * C2607) *
               C32578 * C32906 +
           (C17853 + C17852) * C32578 * C32950 +
           (C17851 + C17850) * C32578 * C32959 +
           (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
            C15271 + C15271 + C15101 * C258) *
               C32578 * C32962) *
              C32639 * C231 +
          ((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
            C15273 + C15273 + C32725 * C1007) *
               C32578 * C32962 +
           (C15107 * C1141 + C17014 + C17014 + C15101 * C1159 + C15109 * C1694 +
            C17015 + C17015 + C32725 * C1700) *
               C32578 * C32959 +
           (C15107 * C1143 + C17018 + C17018 + C15101 * C1161 + C15109 * C6488 +
            C17019 + C17019 + C32725 * C6494) *
               C32578 * C32950 +
           (C15107 * C7115 + C28221 + C28221 + C15101 * C7121 + C15109 * C7643 +
            C28222 + C28222 + C32725 * C7645) *
               C32578 * C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32578 * C32962 +
           (C17210 + C17211) * C32578 * C32959 + C28321 * C32950 +
           C28329 * C32906) *
              C336 -
          ((C28334 + C28335) * C32578 * C32906 +
           (C17216 + C17217) * C32578 * C32950 +
           (C17213 + C17212) * C32578 * C32959 +
           (C17211 + C17210) * C32578 * C32962) *
              C337 +
          (C28321 * C32962 + C28329 * C32959 +
           (C28335 + C28334) * C32578 * C32950 +
           (C15107 * C12192 + C28327 + C28327 + C15101 * C12196 +
            C15109 * C12478 + C28328 + C28328 + C32725 * C12480) *
               C32578 * C32906) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C32578 * C21055 +
            (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
               C571 -
           ((C27607 + C27608 + C27609 + C27610) * C32578 * C32767 +
            (C27606 + C27605 + C27604 + C27603) * C32578 * C21055) *
               C572) *
              C32625 * C463 +
          (((C16559 + C16558 + C16557 + C16556) * C32578 * C21055 +
            (C15959 * C345 + C16248 + C16248 + C32961 * C365 + C15961 * C1144 +
             C16249 + C16249 + C32957 * C1162 + C15963 * C1145 + C16250 +
             C16250 + C32947 * C1163 + C15965 * C7324 + C16251 + C16251 +
             C32899 * C7326) *
                C32578 * C32767) *
               C572 -
           ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
            (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32951 +
             (C15156 + C15157) * C32938 + C15164 * C32913) *
                C21055 +
            ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
                C32767) *
               C571 -
           (((C16862 + C16863) * C32913 + C17632 * C32938 +
             (C17213 + C17212) * C32951) *
                C32767 +
            (C19646 * C32913 + C17633 * C32938 + (C17211 + C17210) * C32951) *
                C21055) *
               C572) *
              C32625 * C463 +
          (((C17631 * C32951 + C18953 * C32938 + (C15713 + C15712) * C32913) *
                C21055 +
            (C17176 * C32951 + (C16863 + C16862) * C32938 +
             (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
              C15393 + C15393 + C32725 * C2277) *
                 C32913) *
                C32767) *
               C572 -
           (((C15712 + C15713) * C32913 + C19646 * C32938 + C17633 * C32951) *
                C32767 +
            ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
             (C15157 + C15156) * C32951) *
                C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32578 * C32962 +
            (C17210 + C17211) * C32578 * C32959 + C28321 * C32950 +
            C28329 * C32906) *
               C571 -
           ((C28334 + C28335) * C32578 * C32906 +
            (C17216 + C17217) * C32578 * C32950 +
            (C17213 + C17212) * C32578 * C32959 +
            (C17211 + C17210) * C32578 * C32962) *
               C572) *
              C32625 * C463 +
          ((C17631 * C32578 * C32962 + C17176 * C32578 * C32959 +
            (C17215 + C17214) * C32578 * C32950 +
            (C15107 * C2073 + C17191 + C17191 + C15101 * C2085 +
             C15109 * C12297 + C17192 + C17192 + C32725 * C12299) *
                C32578 * C32906) *
               C572 -
           ((C17214 + C17215) * C32578 * C32906 + C17632 * C32578 * C32950 +
            C17633 * C32578 * C32959 + (C15157 + C15156) * C32578 * C32962) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C32639 * C230 -
          (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
            (C17851 + C17850) * C32951) *
               C32767 +
           ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32951) *
               C21055) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C32951 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32938 +
            (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
             C15277 + C15277 + C32725 * C1005) *
                C32913) *
               C21055 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C32951 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32938 +
            (C15107 * C1139 + C19100 + C19100 + C15101 * C1157 +
             C15109 * C1696 + C19101 + C19101 + C32725 * C1702) *
                C32913) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C15712 + C15713) * C32913 + C19646 * C32938 + C17633 * C32951) *
               C32767 +
           ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
            (C15157 + C15156) * C32951) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C15164 * C32951 + C15165 * C32938 + (C15163 + C15162) * C32913) *
               C21055 +
           (C18953 * C32951 + (C15713 + C15712) * C32938 +
            (C15107 * C339 + C15698 + C15698 + C15101 * C359 + C15109 * C683 +
             C15699 + C15699 + C32725 * C693) *
                C32913) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
           (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
              C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C32578 * C21055 +
           (C15959 * C341 + C16544 + C16544 + C32961 * C361 + C15961 * C681 +
            C16545 + C16545 + C32957 * C691 + C15963 * C1139 + C16546 + C16546 +
            C32947 * C1157 + C15965 * C1696 + C16547 + C16547 +
            C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C15965 * C6487 + C16693 + C16693 + C32899 * C6493 + C15963 * C1694 +
            C16692 + C16692 + C32947 * C1700 + C15961 * C1141 + C16691 +
            C16691 + C32957 * C1159 + C15959 * C679 + C16690 + C16690 +
            C32961 * C689) *
               C32578 * C32767 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C32578 * C21055) *
              C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C32578 * C21055 +
           (C15959 * C1141 + C27465 + C27465 + C32961 * C1159 + C15961 * C1694 +
            C27466 + C27466 + C32957 * C1700 + C15963 * C6487 + C27467 +
            C27467 + C32947 * C6493 + C15965 * C6768 + C27468 + C27468 +
            C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32578 * C32962 +
           (C17210 + C17211) * C32578 * C32959 + C17218 * C32578 * C32950 +
           (C17217 + C17216) * C32578 * C32906) *
              C32639 * C32625 * C110 -
          ((C17214 + C17215) * C32578 * C32906 + C17632 * C32578 * C32950 +
           C17633 * C32578 * C32959 + (C15157 + C15156) * C32578 * C32962) *
              C32639 * C32625 * C111 +
          (C15164 * C32578 * C32962 + C18953 * C32578 * C32959 +
           (C16863 + C16862) * C32578 * C32950 +
           (C15107 * C2069 + C17634 + C17634 + C15101 * C2081 + C15109 * C2603 +
            C17635 + C17635 + C32725 * C2609) *
               C32578 * C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
            C15113 + C15113 + C32725 * C258) *
               C32578 * C32962 +
           (C17210 + C17211) * C32578 * C32959 + C17218 * C32578 * C32950 +
           (C17217 + C17216) * C32578 * C32906) *
              C32639 * C230 -
          ((C15109 * C7115 + C17839 + C17839 + C32725 * C7121 + C15107 * C2601 +
            C17838 + C17838 + C15101 * C2607) *
               C32578 * C32906 +
           (C17853 + C17852) * C32578 * C32950 +
           (C17851 + C17850) * C32578 * C32959 +
           (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
            C15271 + C15271 + C15101 * C258) *
               C32578 * C32962) *
              C32639 * C231 +
          ((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
            C15273 + C15273 + C32725 * C1007) *
               C32578 * C32962 +
           (C15107 * C1141 + C17014 + C17014 + C15101 * C1159 + C15109 * C1694 +
            C17015 + C17015 + C32725 * C1700) *
               C32578 * C32959 +
           (C15107 * C1143 + C17018 + C17018 + C15101 * C1161 + C15109 * C6488 +
            C17019 + C17019 + C32725 * C6494) *
               C32578 * C32950 +
           (C15107 * C7115 + C28221 + C28221 + C15101 * C7121 + C15109 * C7643 +
            C28222 + C28222 + C32725 * C7645) *
               C32578 * C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32872 +
             (C15156 + C15157) * C32588) *
                C32763 +
            ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
            C30198 * C24543) *
               C32639 * C461 -
           (((C17433 + C17434) * C32588 + (C17853 + C17852) * C32872) * C24543 +
            ((C17435 + C17436) * C32588 + (C17851 + C17850) * C32872) * C32770 +
            ((C15554 + C15555) * C32588 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32872) *
                C32763) *
               C32639 * C462) *
              C463 +
          ((((C15555 + C15554) * C32872 + (C15553 + C15552) * C32588) * C32763 +
            ((C17436 + C17435) * C32872 + (C19451 + C19450) * C32588) * C32770 +
            ((C17434 + C17433) * C32872 +
             (C15107 * C1146 + C17423 + C17423 + C15101 * C1164 +
              C15109 * C1147 + C17424 + C17424 + C32725 * C1165) *
                 C32588) *
                C24543) *
               C32639 * C462 -
           (((C16862 + C16863) * C32588 + C17632 * C32872) * C24543 +
            (C19646 * C32588 + C17633 * C32872) * C32770 +
            ((C15159 + C15158) * C32588 + (C15157 + C15156) * C32872) *
                C32763) *
               C32639 * C461) *
              C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32872 +
             (C15156 + C15157) * C32588) *
                C32763 +
            ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
            C30198 * C24543) *
               C571 -
           (((C17214 + C17215) * C32588 + (C17216 + C17217) * C32872) * C24543 +
            (C17632 * C32588 + (C17213 + C17212) * C32872) * C32770 +
            (C17633 * C32588 + (C17211 + C17210) * C32872) * C32763) *
               C572) *
              C461 +
          ((((C17850 + C17851) * C32872 + (C17436 + C17435) * C32588) * C32763 +
            ((C17852 + C17853) * C32872 + (C17434 + C17433) * C32588) * C32770 +
            ((C28736 + C28737) * C32872 +
             (C15107 * C2602 + C17840 + C17840 + C15101 * C2608 +
              C15109 * C7476 + C17841 + C17841 + C32725 * C7478) *
                 C32588) *
                C24543) *
               C572 -
           (((C17433 + C17434) * C32588 + (C17853 + C17852) * C32872) * C24543 +
            ((C17435 + C17436) * C32588 + (C17851 + C17850) * C32872) * C32770 +
            ((C15554 + C15555) * C32588 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32872) *
                C32763) *
               C571) *
              C462) *
         C32613) /
        (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32872 +
            (C15156 + C15157) * C32588) *
               C32763 +
           ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
           (C17218 * C32872 + C17176 * C32588) * C24543) *
              C32639 * C230 -
          (((C17433 + C17434) * C32588 + (C17853 + C17852) * C32872) * C24543 +
           ((C17435 + C17436) * C32588 + (C17851 + C17850) * C32872) * C32770 +
           ((C15554 + C15555) * C32588 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32872) *
               C32763) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C32872 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32588) *
               C32763 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C32872 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32588) *
               C32770 +
           ((C15107 * C1143 + C17018 + C17018 + C15101 * C1161 +
             C15109 * C6488 + C17019 + C17019 + C32725 * C6494) *
                C32872 +
            (C15107 * C1145 + C17020 + C17020 + C15101 * C1163 +
             C15109 * C7324 + C17021 + C17021 + C32725 * C7326) *
                C32588) *
               C24543) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32872 +
            (C15156 + C15157) * C32588) *
               C32763 +
           ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
           (C17218 * C32872 + C17176 * C32588) * C24543) *
              C32639 * C32625 * C110 -
          (((C16862 + C16863) * C32588 + C17632 * C32872) * C24543 +
           (C19646 * C32588 + C17633 * C32872) * C32770 +
           ((C15159 + C15158) * C32588 + (C15157 + C15156) * C32872) * C32763) *
              C32639 * C32625 * C111 +
          ((C15164 * C32872 + C15165 * C32588) * C32763 +
           (C18953 * C32872 + (C15713 + C15712) * C32588) * C32770 +
           ((C16863 + C16862) * C32872 +
            (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
             C15393 + C15393 + C32725 * C2277) *
                C32588) *
               C24543) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32872 +
            (C15156 + C15157) * C32588) *
               C32763 +
           ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
           C30198 * C24543) *
              C336 -
          (((C17214 + C17215) * C32588 + (C17216 + C17217) * C32872) * C24543 +
           (C17632 * C32588 + (C17213 + C17212) * C32872) * C32770 +
           (C17633 * C32588 + (C17211 + C17210) * C32872) * C32763) *
              C337 +
          (C30198 * C32763 +
           (C28322 * C32872 + (C17215 + C17214) * C32588) * C32770 +
           ((C28335 + C28334) * C32872 +
            (C15107 * C2073 + C17191 + C17191 + C15101 * C2085 +
             C15109 * C12297 + C17192 + C17192 + C32725 * C12299) *
                C32588) *
               C24543) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32872 +
             (C15156 + C15157) * C32588) *
                C32763 +
            ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
            C30198 * C24543) *
               C571 -
           (((C17214 + C17215) * C32588 + (C17216 + C17217) * C32872) * C24543 +
            (C17632 * C32588 + (C17213 + C17212) * C32872) * C32770 +
            (C17633 * C32588 + (C17211 + C17210) * C32872) * C32763) *
               C572) *
              C32625 * C463 +
          (((C17631 * C32872 + C18953 * C32588) * C32763 +
            (C17176 * C32872 + (C16863 + C16862) * C32588) * C32770 +
            ((C17215 + C17214) * C32872 +
             (C15107 * C2069 + C17634 + C17634 + C15101 * C2081 +
              C15109 * C2603 + C17635 + C17635 + C32725 * C2609) *
                 C32588) *
                C24543) *
               C572 -
           (((C16862 + C16863) * C32588 + C17632 * C32872) * C24543 +
            (C19646 * C32588 + C17633 * C32872) * C32770 +
            ((C15159 + C15158) * C32588 + (C15157 + C15156) * C32872) *
                C32763) *
               C571) *
              C32625 * C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32872 +
            (C15156 + C15157) * C32588) *
               C32763 +
           ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
           (C17218 * C32872 + C17176 * C32588) * C24543) *
              C32639 * C32625 * C110 -
          (((C16862 + C16863) * C32588 + C17632 * C32872) * C24543 +
           (C19646 * C32588 + C17633 * C32872) * C32770 +
           ((C15159 + C15158) * C32588 + (C15157 + C15156) * C32872) * C32763) *
              C32639 * C32625 * C111 +
          ((C15164 * C32872 + C15165 * C32588) * C32763 +
           (C18953 * C32872 + (C15713 + C15712) * C32588) * C32770 +
           ((C16863 + C16862) * C32872 +
            (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
             C15393 + C15393 + C32725 * C2277) *
                C32588) *
               C24543) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32872 +
            (C15156 + C15157) * C32588) *
               C32763 +
           ((C17210 + C17211) * C32872 + C17631 * C32588) * C32770 +
           (C17218 * C32872 + C17176 * C32588) * C24543) *
              C32639 * C230 -
          (((C17433 + C17434) * C32588 + (C17853 + C17852) * C32872) * C24543 +
           ((C17435 + C17436) * C32588 + (C17851 + C17850) * C32872) * C32770 +
           ((C15554 + C15555) * C32588 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32872) *
               C32763) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C32872 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32588) *
               C32763 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C32872 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32588) *
               C32770 +
           ((C15107 * C1143 + C17018 + C17018 + C15101 * C1161 +
             C15109 * C6488 + C17019 + C17019 + C32725 * C6494) *
                C32872 +
            (C15107 * C1145 + C17020 + C17020 + C15101 * C1163 +
             C15109 * C7324 + C17021 + C17021 + C32725 * C7326) *
                C32588) *
               C24543) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32951 +
             (C15156 + C15157) * C32938 + C15164 * C32913) *
                C21055 +
            ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
                C32767) *
               C32639 * C461 -
           (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
             (C17851 + C17850) * C32951) *
                C32767 +
            ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32951) *
                C21055) *
               C32639 * C462) *
              C463 +
          ((((C15555 + C15554) * C32951 + (C15553 + C15552) * C32938 +
             (C15551 + C15550) * C32913) *
                C21055 +
            ((C17436 + C17435) * C32951 + (C19451 + C19450) * C32938 +
             (C15107 * C682 + C15854 + C15854 + C15101 * C692 + C15109 * C1512 +
              C15855 + C15855 + C32725 * C1514) *
                 C32913) *
                C32767) *
               C32639 * C462 -
           (((C15712 + C15713) * C32913 + C19646 * C32938 + C17633 * C32951) *
                C32767 +
            ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
             (C15157 + C15156) * C32951) *
                C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C32578 * C21055 +
            (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
               C32639 * C461 -
           ((C15965 * C6487 + C16693 + C16693 + C32899 * C6493 +
             C15963 * C1694 + C16692 + C16692 + C32947 * C1700 +
             C15961 * C1141 + C16691 + C16691 + C32957 * C1159 + C15959 * C679 +
             C16690 + C16690 + C32961 * C689) *
                C32578 * C32767 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C32578 * C21055) *
               C32639 * C462) *
              C463 +
          (((C16405 + C16404 + C16403 + C16402) * C32578 * C21055 +
            (C15959 * C680 + C16694 + C16694 + C32961 * C690 + C15961 * C1140 +
             C16695 + C16695 + C32957 * C1158 + C15963 * C1695 + C16696 +
             C16696 + C32947 * C1701 + C15965 * C6678 + C16697 + C16697 +
             C32899 * C6680) *
                C32578 * C32767) *
               C32639 * C462 -
           ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
            (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32951 +
             (C15156 + C15157) * C32938 + C15164 * C32913) *
                C21055 +
            ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
                C32767) *
               C571 -
           (((C16862 + C16863) * C32913 + C17632 * C32938 +
             (C17213 + C17212) * C32951) *
                C32767 +
            (C19646 * C32913 + C17633 * C32938 + (C17211 + C17210) * C32951) *
                C21055) *
               C572) *
              C461 +
          ((((C17850 + C17851) * C32951 + (C17436 + C17435) * C32938 +
             (C19451 + C19450) * C32913) *
                C21055 +
            ((C17852 + C17853) * C32951 + (C17434 + C17433) * C32938 +
             (C15107 * C1146 + C17423 + C17423 + C15101 * C1164 +
              C15109 * C1147 + C17424 + C17424 + C32725 * C1165) *
                 C32913) *
                C32767) *
               C572 -
           (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
             (C17851 + C17850) * C32951) *
                C32767 +
            ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
             (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
              C15271 + C15271 + C15101 * C258) *
                 C32951) *
                C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C32578 * C21055 +
            (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
               C571 -
           ((C27607 + C27608 + C27609 + C27610) * C32578 * C32767 +
            (C27606 + C27605 + C27604 + C27603) * C32578 * C21055) *
               C572) *
              C461 +
          (((C28021 + C28022 + C28023 + C28024) * C32578 * C21055 +
            (C15959 * C1142 + C28009 + C28009 + C32961 * C1160 +
             C15961 * C1143 + C28010 + C28010 + C32957 * C1161 +
             C15963 * C6488 + C28011 + C28011 + C32947 * C6494 +
             C15965 * C6489 + C28012 + C28012 + C32899 * C6495) *
                C32578 * C32767) *
               C572 -
           ((C28024 + C28023 + C28022 + C28021) * C32578 * C32767 +
            (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
             C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 +
             C16128 + C32957 * C259 + C15959 * C238 + C16129 + C16129 +
             C32961 * C258) *
                C32578 * C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C32639 * C230 -
          (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
            (C17851 + C17850) * C32951) *
               C32767 +
           ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32951) *
               C21055) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C32951 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32938 +
            (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
             C15277 + C15277 + C32725 * C1005) *
                C32913) *
               C21055 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C32951 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32938 +
            (C15107 * C1139 + C19100 + C19100 + C15101 * C1157 +
             C15109 * C1696 + C19101 + C19101 + C32725 * C1702) *
                C32913) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C15712 + C15713) * C32913 + C19646 * C32938 + C17633 * C32951) *
               C32767 +
           ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
            (C15157 + C15156) * C32951) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C15164 * C32951 + C15165 * C32938 + (C15163 + C15162) * C32913) *
               C21055 +
           (C18953 * C32951 + (C15713 + C15712) * C32938 +
            (C15107 * C339 + C15698 + C15698 + C15101 * C359 + C15109 * C683 +
             C15699 + C15699 + C32725 * C693) *
                C32913) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C336 -
          (((C16862 + C16863) * C32913 + C17632 * C32938 +
            (C17213 + C17212) * C32951) *
               C32767 +
           (C19646 * C32913 + C17633 * C32938 + (C17211 + C17210) * C32951) *
               C21055) *
              C337 +
          ((C17218 * C32951 + C17176 * C32938 + (C16863 + C16862) * C32913) *
               C21055 +
           ((C17217 + C17216) * C32951 + (C17215 + C17214) * C32938 +
            (C15107 * C2069 + C17634 + C17634 + C15101 * C2081 +
             C15109 * C2603 + C17635 + C17635 + C32725 * C2609) *
                C32913) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
           (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
              C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C32578 * C21055 +
           (C15959 * C341 + C16544 + C16544 + C32961 * C361 + C15961 * C681 +
            C16545 + C16545 + C32957 * C691 + C15963 * C1139 + C16546 + C16546 +
            C32947 * C1157 + C15965 * C1696 + C16547 + C16547 +
            C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C15965 * C6487 + C16693 + C16693 + C32899 * C6493 + C15963 * C1694 +
            C16692 + C16692 + C32947 * C1700 + C15961 * C1141 + C16691 +
            C16691 + C32957 * C1159 + C15959 * C679 + C16690 + C16690 +
            C32961 * C689) *
               C32578 * C32767 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C32578 * C21055) *
              C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C32578 * C21055 +
           (C15959 * C1141 + C27465 + C27465 + C32961 * C1159 + C15961 * C1694 +
            C27466 + C27466 + C32957 * C1700 + C15963 * C6487 + C27467 +
            C27467 + C32947 * C6493 + C15965 * C6768 + C27468 + C27468 +
            C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
              C336 -
          ((C27607 + C27608 + C27609 + C27610) * C32578 * C32767 +
           (C27606 + C27605 + C27604 + C27603) * C32578 * C21055) *
              C337 +
          ((C27610 + C27609 + C27608 + C27607) * C32578 * C21055 +
           (C15959 * C2071 + C27583 + C27583 + C32961 * C2083 + C15961 * C2601 +
            C27584 + C27584 + C32957 * C2607 + C15963 * C7115 + C27585 +
            C27585 + C32947 * C7121 + C15965 * C7643 + C27586 + C27586 +
            C32899 * C7645) *
               C32578 * C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
              C15113 + C15113 + C32725 * C258) *
                 C32951 +
             (C15156 + C15157) * C32938 + C15164 * C32913) *
                C21055 +
            ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
                C32767) *
               C571 -
           (((C16862 + C16863) * C32913 + C17632 * C32938 +
             (C17213 + C17212) * C32951) *
                C32767 +
            (C19646 * C32913 + C17633 * C32938 + (C17211 + C17210) * C32951) *
                C21055) *
               C572) *
              C32625 * C463 +
          (((C17631 * C32951 + C18953 * C32938 + (C15713 + C15712) * C32913) *
                C21055 +
            (C17176 * C32951 + (C16863 + C16862) * C32938 +
             (C15107 * C347 + C15392 + C15392 + C15101 * C367 + C15109 * C2275 +
              C15393 + C15393 + C32725 * C2277) *
                 C32913) *
                C32767) *
               C572 -
           (((C15712 + C15713) * C32913 + C19646 * C32938 + C17633 * C32951) *
                C32767 +
            ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
             (C15157 + C15156) * C32951) *
                C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
             C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
             C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
                C32578 * C21055 +
            (C27603 + C27604 + C27605 + C27606) * C32578 * C32767) *
               C571 -
           ((C27607 + C27608 + C27609 + C27610) * C32578 * C32767 +
            (C27606 + C27605 + C27604 + C27603) * C32578 * C21055) *
               C572) *
              C32625 * C463 +
          (((C16559 + C16558 + C16557 + C16556) * C32578 * C21055 +
            (C15959 * C345 + C16248 + C16248 + C32961 * C365 + C15961 * C1144 +
             C16249 + C16249 + C32957 * C1162 + C15963 * C1145 + C16250 +
             C16250 + C32947 * C1163 + C15965 * C7324 + C16251 + C16251 +
             C32899 * C7326) *
                C32578 * C32767) *
               C572 -
           ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
            (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C15712 + C15713) * C32913 + C19646 * C32938 + C17633 * C32951) *
               C32767 +
           ((C15161 + C15160) * C32913 + (C15159 + C15158) * C32938 +
            (C15157 + C15156) * C32951) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C15164 * C32951 + C15165 * C32938 + (C15163 + C15162) * C32913) *
               C21055 +
           (C18953 * C32951 + (C15713 + C15712) * C32938 +
            (C15107 * C339 + C15698 + C15698 + C15101 * C359 + C15109 * C683 +
             C15699 + C15699 + C32725 * C693) *
                C32913) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C115 + C15112 + C15112 + C15101 * C129 + C15109 * C238 +
             C15113 + C15113 + C32725 * C258) *
                C32951 +
            (C15156 + C15157) * C32938 + C15164 * C32913) *
               C21055 +
           ((C17210 + C17211) * C32951 + C17631 * C32938 + C18953 * C32913) *
               C32767) *
              C32639 * C230 -
          (((C19450 + C19451) * C32913 + (C17435 + C17436) * C32938 +
            (C17851 + C17850) * C32951) *
               C32767 +
           ((C15552 + C15553) * C32913 + (C15554 + C15555) * C32938 +
            (C15109 * C239 + C15270 + C15270 + C32725 * C259 + C15107 * C238 +
             C15271 + C15271 + C15101 * C258) *
                C32951) *
               C21055) *
              C32639 * C231 +
          (((C15107 * C239 + C15272 + C15272 + C15101 * C259 + C15109 * C995 +
             C15273 + C15273 + C32725 * C1007) *
                C32951 +
            (C15107 * C240 + C15274 + C15274 + C15101 * C260 + C15109 * C994 +
             C15275 + C15275 + C32725 * C1006) *
                C32938 +
            (C15107 * C241 + C15276 + C15276 + C15101 * C261 + C15109 * C993 +
             C15277 + C15277 + C32725 * C1005) *
                C32913) *
               C21055 +
           ((C15107 * C1141 + C17014 + C17014 + C15101 * C1159 +
             C15109 * C1694 + C17015 + C17015 + C32725 * C1700) *
                C32951 +
            (C15107 * C1140 + C17016 + C17016 + C15101 * C1158 +
             C15109 * C1695 + C17017 + C17017 + C32725 * C1701) *
                C32938 +
            (C15107 * C1139 + C19100 + C19100 + C15101 * C1157 +
             C15109 * C1696 + C19101 + C19101 + C32725 * C1702) *
                C32913) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C16556 + C16557 + C16558 + C16559) * C32578 * C32767 +
           (C16019 + C16018 + C16017 + C16016) * C32578 * C21055) *
              C32639 * C32625 * C111 +
          ((C16023 + C16022 + C16021 + C16020) * C32578 * C21055 +
           (C15959 * C341 + C16544 + C16544 + C32961 * C361 + C15961 * C681 +
            C16545 + C16545 + C32957 * C691 + C15963 * C1139 + C16546 + C16546 +
            C32947 * C1157 + C15965 * C1696 + C16547 + C16547 +
            C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15959 * C115 + C15968 + C15968 + C32961 * C129 + C15961 * C238 +
            C15969 + C15969 + C32957 * C258 + C15963 * C239 + C15970 + C15970 +
            C32947 * C259 + C15965 * C995 + C15971 + C15971 + C32899 * C1007) *
               C32578 * C21055 +
           (C15959 * C343 + C16243 + C16243 + C32961 * C363 + C15961 * C679 +
            C16242 + C16242 + C32957 * C689 + C15963 * C1141 + C16241 + C16241 +
            C32947 * C1159 + C15965 * C1694 + C16240 + C16240 +
            C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C15965 * C6487 + C16693 + C16693 + C32899 * C6493 + C15963 * C1694 +
            C16692 + C16692 + C32947 * C1700 + C15961 * C1141 + C16691 +
            C16691 + C32957 * C1159 + C15959 * C679 + C16690 + C16690 +
            C32961 * C689) *
               C32578 * C32767 +
           (C15965 * C996 + C16126 + C16126 + C32899 * C1008 + C15963 * C995 +
            C16127 + C16127 + C32947 * C1007 + C15961 * C239 + C16128 + C16128 +
            C32957 * C259 + C15959 * C238 + C16129 + C16129 + C32961 * C258) *
               C32578 * C21055) *
              C32639 * C231 +
          ((C15959 * C239 + C16130 + C16130 + C32961 * C259 + C15961 * C995 +
            C16131 + C16131 + C32957 * C1007 + C15963 * C996 + C16132 + C16132 +
            C32947 * C1008 + C15965 * C6409 + C16133 + C16133 +
            C32899 * C6413) *
               C32578 * C21055 +
           (C15959 * C1141 + C27465 + C27465 + C32961 * C1159 + C15961 * C1694 +
            C27466 + C27466 + C32957 * C1700 + C15963 * C6487 + C27467 +
            C27467 + C32947 * C6493 + C15965 * C6768 + C27468 + C27468 +
            C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32872 +
            (C7840 + C7841 + C7842 + C7843) * C32588) *
               C32680 * C32639 * C461 -
           ((C8226 + C8227 + C8228 + C8229) * C32588 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32872) *
               C32680 * C32639 * C462) *
              C463 +
          (((C8229 + C8228 + C8227 + C8226) * C32872 +
            (C7783 * C236 + C8214 + C8214 + C7777 * C256 + C7785 * C241 +
             C8215 + C8215 + C7778 * C261 + C7787 * C993 + C8216 + C8216 +
             C7779 * C1005 + C7789 * C998 + C8217 + C8217 + C32899 * C1010) *
                C32588) *
               C32680 * C32639 * C462 -
           ((C7844 + C7845 + C7846 + C7847) * C32588 +
            (C7843 + C7842 + C7841 + C7840) * C32872) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C2729 +
            (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
               C32680 * C32639 * C461 -
           ((C3176 + C3177) * C32891 + (C3178 + C3179) * C2731 +
            (C3180 + C3181) * C2730 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C2729) *
               C32680 * C32639 * C462) *
              C463 +
          (((C3181 + C3180) * C2729 + (C3179 + C3178) * C2730 +
            (C3177 + C3176) * C2731 +
            (C2733 * C234 + C3162 + C3162 + C32890 * C254 + C2735 * C243 +
             C3163 + C3163 + C32725 * C263) *
                C32891) *
               C32680 * C32639 * C462 -
           ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
            (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C32872 +
             (C2782 + C2783) * C32588) *
                C10429 +
            ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
            C12959 * C32925) *
               C32639 * C461 -
           (((C13170 + C13171) * C32588 +
             (C2735 * C1143 + C5291 + C5291 + C32725 * C1161 + C2733 * C1142 +
              C5290 + C5290 + C32890 * C1160) *
                 C32872) *
                C32925 +
            ((C4893 + C4894) * C32588 + (C5301 + C5300) * C32872) * C10430 +
            ((C3180 + C3181) * C32588 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C32872) *
                C10429) *
               C32639 * C462) *
              C463 +
          ((((C3181 + C3180) * C32872 + (C3179 + C3178) * C32588) * C10429 +
            ((C4894 + C4893) * C32872 + (C4892 + C4891) * C32588) * C10430 +
            ((C13171 + C13170) * C32872 +
             (C2733 * C1146 + C5294 + C5294 + C32890 * C1164 + C2735 * C1147 +
              C5295 + C5295 + C32725 * C1165) *
                 C32588) *
                C32925) *
               C32639 * C462 -
           (((C4675 + C4676) * C32588 + (C4677 + C4678) * C32872) * C32925 +
            (C5090 * C32588 + C5091 * C32872) * C10430 +
            ((C2785 + C2784) * C32588 + (C2783 + C2782) * C32872) * C10429) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32872 +
            (C7840 + C7841 + C7842 + C7843) * C32588) *
               C32680 * C571 -
           ((C8380 + C8381 + C8382 + C8383) * C32588 +
            (C7789 * C1694 + C8064 + C8064 + C32899 * C1700 + C7787 * C1141 +
             C8065 + C8065 + C7779 * C1159 + C7785 * C679 + C8066 + C8066 +
             C7778 * C689 + C7783 * C343 + C8067 + C8067 + C7777 * C363) *
                C32872) *
               C32680 * C572) *
              C461 +
          (((C7783 * C679 + C8514 + C8514 + C7777 * C689 + C7785 * C1141 +
             C8515 + C8515 + C7778 * C1159 + C7787 * C1694 + C8516 + C8516 +
             C7779 * C1700 + C7789 * C6487 + C8517 + C8517 + C32899 * C6493) *
                C32872 +
            (C7783 * C680 + C8518 + C8518 + C7777 * C690 + C7785 * C1140 +
             C8519 + C8519 + C7778 * C1158 + C7787 * C1695 + C8520 + C8520 +
             C7779 * C1701 + C7789 * C6678 + C8521 + C8521 + C32899 * C6680) *
                C32588) *
               C32680 * C572 -
           ((C8226 + C8227 + C8228 + C8229) * C32588 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32872) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C2729 +
            (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
               C32680 * C571 -
           ((C3338 + C3339) * C32891 + (C3340 + C3341) * C2731 +
            (C3342 + C3343) * C2730 +
            (C2735 * C679 + C3010 + C3010 + C32725 * C689 + C2733 * C343 +
             C3011 + C3011 + C32890 * C363) *
                C2729) *
               C32680 * C572) *
              C461 +
          (((C2733 * C679 + C3474 + C3474 + C32890 * C689 + C2735 * C1141 +
             C3475 + C3475 + C32725 * C1159) *
                C2729 +
            (C2733 * C680 + C3476 + C3476 + C32890 * C690 + C2735 * C1140 +
             C3477 + C3477 + C32725 * C1158) *
                C2730 +
            (C2733 * C681 + C3478 + C3478 + C32890 * C691 + C2735 * C1139 +
             C3479 + C3479 + C32725 * C1157) *
                C2731 +
            (C2733 * C682 + C3480 + C3480 + C32890 * C692 + C2735 * C1512 +
             C3481 + C3481 + C32725 * C1514) *
                C32891) *
               C32680 * C572 -
           ((C3176 + C3177) * C32891 + (C3178 + C3179) * C2731 +
            (C3180 + C3181) * C2730 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C2729) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C32872 +
             (C2782 + C2783) * C32588) *
                C10429 +
            ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
            C12959 * C32925) *
               C571 -
           (((C12964 + C12965) * C32588 + (C12966 + C12967) * C32872) * C32925 +
            (C13366 * C32588 + (C4679 + C4680) * C32872) * C10430 +
            (C5091 * C32588 + (C4674 + C4673) * C32872) * C10429) *
               C572) *
              C461 +
          ((((C5300 + C5301) * C32872 + (C4894 + C4893) * C32588) * C10429 +
            ((C13573 + C13574) * C32872 + (C13171 + C13170) * C32588) * C10430 +
            ((C2733 * C2601 + C13565 + C13565 + C32890 * C2607 + C2735 * C7115 +
              C13566 + C13566 + C32725 * C7121) *
                 C32872 +
             (C2733 * C2602 + C13567 + C13567 + C32890 * C2608 + C2735 * C7476 +
              C13568 + C13568 + C32725 * C7478) *
                 C32588) *
                C32925) *
               C572 -
           (((C13170 + C13171) * C32588 + (C13574 + C13573) * C32872) * C32925 +
            ((C4893 + C4894) * C32588 + (C5301 + C5300) * C32872) * C10430 +
            ((C3180 + C3181) * C32588 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C32872) *
                C10429) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
                C2739 + C2739 + C32725 * C258) *
                   C2729 +
               (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
                  C32680 * C32639 * C32625 * C110 -
              ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
               (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
                  C32680 * C32639 * C32625 * C111 +
              (C2790 * C2729 + C2791 * C2730 + (C2789 + C2788) * C2731 +
               (C2733 * C120 + C2764 + C2764 + C32890 * C134 + C2735 * C465 +
                C2765 + C2765 + C32725 * C467) *
                   C32891) *
                  C32680 * C32639 * C32625 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
                C2739 + C2739 + C32725 * C258) *
                   C2729 +
               (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
                  C32680 * C32639 * C230 -
              ((C2735 * C242 + C2890 + C2890 + C32725 * C262 + C2733 * C235 +
                C2891 + C2891 + C32890 * C255) *
                   C32891 +
               (C2735 * C241 + C2892 + C2892 + C32725 * C261 + C2733 * C236 +
                C2893 + C2893 + C32890 * C256) *
                   C2731 +
               (C2735 * C240 + C2894 + C2894 + C32725 * C260 + C2733 * C237 +
                C2895 + C2895 + C32890 * C257) *
                   C2730 +
               (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
                C2897 + C2897 + C32890 * C258) *
                   C2729) *
                  C32680 * C32639 * C231 +
              ((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
                C2899 + C2899 + C32725 * C1007) *
                   C2729 +
               (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
                C2901 + C2901 + C32725 * C1006) *
                   C2730 +
               (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
                C2903 + C2903 + C32725 * C1005) *
                   C2731 +
               (C2733 * C242 + C2904 + C2904 + C32890 * C262 + C2735 * C1330 +
                C2905 + C2905 + C32725 * C1332) *
                   C32891) *
                  C32680 * C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C336 -
          ((C2735 * C682 + C3004 + C3004 + C32725 * C692 + C2733 * C340 +
            C3005 + C3005 + C32890 * C360) *
               C32891 +
           (C2735 * C681 + C3006 + C3006 + C32725 * C691 + C2733 * C341 +
            C3007 + C3007 + C32890 * C361) *
               C2731 +
           (C2735 * C680 + C3008 + C3008 + C32725 * C690 + C2733 * C342 +
            C3009 + C3009 + C32890 * C362) *
               C2730 +
           (C2735 * C679 + C3010 + C3010 + C32725 * C689 + C2733 * C343 +
            C3011 + C3011 + C32890 * C363) *
               C2729) *
              C32680 * C337 +
          ((C2733 * C344 + C3012 + C3012 + C32890 * C364 + C2735 * C1142 +
            C3013 + C3013 + C32725 * C1160) *
               C2729 +
           (C2733 * C345 + C3014 + C3014 + C32890 * C365 + C2735 * C1144 +
            C3015 + C3015 + C32725 * C1162) *
               C2730 +
           (C2733 * C346 + C3016 + C3016 + C32890 * C366 + C2735 * C1146 +
            C3017 + C3017 + C32725 * C1164) *
               C2731 +
           (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
            C3019 + C3019 + C32725 * C2277) *
               C32891) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C7844 + C7845 + C7846 + C7847) * C32588 +
           (C7843 + C7842 + C7841 + C7840) * C32872) *
              C32680 * C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32872 +
           (C7783 * C118 + C7820 + C7820 + C7777 * C132 + C7785 * C235 + C7821 +
            C7821 + C7778 * C255 + C7787 * C242 + C7822 + C7822 + C7779 * C262 +
            C7789 * C1330 + C7823 + C7823 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C230 -
          ((C7789 * C997 + C7946 + C7946 + C32899 * C1009 + C7787 * C994 +
            C7947 + C7947 + C7779 * C1006 + C7785 * C240 + C7948 + C7948 +
            C7778 * C260 + C7783 * C237 + C7949 + C7949 + C7777 * C257) *
               C32588 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32872) *
              C32680 * C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32872 +
           (C7783 * C240 + C7958 + C7958 + C7777 * C260 + C7785 * C994 + C7959 +
            C7959 + C7778 * C1006 + C7787 * C997 + C7960 + C7960 +
            C7779 * C1009 + C7789 * C6588 + C7961 + C7961 + C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C336 -
          ((C7789 * C1695 + C8060 + C8060 + C32899 * C1701 + C7787 * C1140 +
            C8061 + C8061 + C7779 * C1158 + C7785 * C680 + C8062 + C8062 +
            C7778 * C690 + C7783 * C342 + C8063 + C8063 + C7777 * C362) *
               C32588 +
           (C7789 * C1694 + C8064 + C8064 + C32899 * C1700 + C7787 * C1141 +
            C8065 + C8065 + C7779 * C1159 + C7785 * C679 + C8066 + C8066 +
            C7778 * C689 + C7783 * C343 + C8067 + C8067 + C7777 * C363) *
               C32872) *
              C32680 * C337 +
          ((C7783 * C344 + C8068 + C8068 + C7777 * C364 + C7785 * C1142 +
            C8069 + C8069 + C7778 * C1160 + C7787 * C1143 + C8070 + C8070 +
            C7779 * C1161 + C7789 * C6488 + C8071 + C8071 + C32899 * C6494) *
               C32872 +
           (C7783 * C345 + C8072 + C8072 + C7777 * C365 + C7785 * C1144 +
            C8073 + C8073 + C7778 * C1162 + C7787 * C1145 + C8074 + C8074 +
            C7779 * C1163 + C7789 * C7324 + C8075 + C8075 + C32899 * C7326) *
               C32588) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32872 +
            (C2782 + C2783) * C32588) *
               C10429 +
           ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
           ((C4680 + C4679) * C32872 + (C4678 + C4677) * C32588) * C32925) *
              C32639 * C32625 * C110 -
          (((C4675 + C4676) * C32588 + (C4677 + C4678) * C32872) * C32925 +
           (C5090 * C32588 + C5091 * C32872) * C10430 +
           ((C2785 + C2784) * C32588 + (C2783 + C2782) * C32872) * C10429) *
              C32639 * C32625 * C111 +
          ((C2790 * C32872 + C2791 * C32588) * C10429 +
           (C4336 * C32872 + (C3339 + C3338) * C32588) * C10430 +
           ((C4676 + C4675) * C32872 +
            (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
             C3019 + C3019 + C32725 * C2277) *
                C32588) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32872 +
            (C2782 + C2783) * C32588) *
               C10429 +
           ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
           ((C4680 + C4679) * C32872 + (C4678 + C4677) * C32588) * C32925) *
              C32639 * C230 -
          (((C2735 * C1145 + C5293 + C5293 + C32725 * C1163 + C2733 * C1144 +
             C5292 + C5292 + C32890 * C1162) *
                C32588 +
            (C2735 * C1143 + C5291 + C5291 + C32725 * C1161 + C2733 * C1142 +
             C5290 + C5290 + C32890 * C1160) *
                C32872) *
               C32925 +
           ((C4893 + C4894) * C32588 + (C5301 + C5300) * C32872) * C10430 +
           ((C3180 + C3181) * C32588 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C32872) *
               C10429) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C32872 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C32588) *
               C10429 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C32872 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C32588) *
               C10430 +
           ((C2733 * C1143 + C12789 + C12789 + C32890 * C1161 + C2735 * C6488 +
             C12790 + C12790 + C32725 * C6494) *
                C32872 +
            (C2733 * C1145 + C12791 + C12791 + C32890 * C1163 + C2735 * C7324 +
             C12792 + C12792 + C32725 * C7326) *
                C32588) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32872 +
            (C2782 + C2783) * C32588) *
               C10429 +
           ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
           C12959 * C32925) *
              C336 -
          (((C12964 + C12965) * C32588 + (C12966 + C12967) * C32872) * C32925 +
           ((C4677 + C4678) * C32588 + (C4679 + C4680) * C32872) * C10430 +
           (C5091 * C32588 + (C4674 + C4673) * C32872) * C10429) *
              C337 +
          (C12959 * C10429 +
           ((C12967 + C12966) * C32872 + (C12965 + C12964) * C32588) * C10430 +
           ((C2733 * C2072 + C12949 + C12949 + C32890 * C2084 + C2735 * C7116 +
             C12950 + C12950 + C32725 * C7122) *
                C32872 +
            (C2733 * C2073 + C12951 + C12951 + C32890 * C2085 + C2735 * C12297 +
             C12952 + C12952 + C32725 * C12299) *
                C32588) *
               C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32872 +
            (C7840 + C7841 + C7842 + C7843) * C32588) *
               C32680 * C571 -
           ((C8380 + C8381 + C8382 + C8383) * C32588 +
            (C7789 * C1694 + C8064 + C8064 + C32899 * C1700 + C7787 * C1141 +
             C8065 + C8065 + C7779 * C1159 + C7785 * C679 + C8066 + C8066 +
             C7778 * C689 + C7783 * C343 + C8067 + C8067 + C7777 * C363) *
                C32872) *
               C32680 * C572) *
              C32625 * C463 +
          (((C8383 + C8382 + C8381 + C8380) * C32872 +
            (C7783 * C341 + C8368 + C8368 + C7777 * C361 + C7785 * C681 +
             C8369 + C8369 + C7778 * C691 + C7787 * C1139 + C8370 + C8370 +
             C7779 * C1157 + C7789 * C1696 + C8371 + C8371 + C32899 * C1702) *
                C32588) *
               C32680 * C572 -
           ((C7844 + C7845 + C7846 + C7847) * C32588 +
            (C7843 + C7842 + C7841 + C7840) * C32872) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C2729 +
            (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
               C32680 * C571 -
           ((C3338 + C3339) * C32891 + (C3340 + C3341) * C2731 +
            (C3342 + C3343) * C2730 +
            (C2735 * C679 + C3010 + C3010 + C32725 * C689 + C2733 * C343 +
             C3011 + C3011 + C32890 * C363) *
                C2729) *
               C32680 * C572) *
              C32625 * C463 +
          (((C3343 + C3342) * C2729 + (C3341 + C3340) * C2730 +
            (C3339 + C3338) * C2731 +
            (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
             C3325 + C3325 + C32725 * C693) *
                C32891) *
               C32680 * C572 -
           ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
            (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C32872 +
             (C2782 + C2783) * C32588) *
                C10429 +
            ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
            C12959 * C32925) *
               C571 -
           (((C12964 + C12965) * C32588 + (C12966 + C12967) * C32872) * C32925 +
            (C13366 * C32588 + (C4679 + C4680) * C32872) * C10430 +
            (C5091 * C32588 + (C4674 + C4673) * C32872) * C10429) *
               C572) *
              C32625 * C463 +
          (((C5089 * C32872 + C4336 * C32588) * C10429 +
            (C12940 * C32872 + (C4676 + C4675) * C32588) * C10430 +
            ((C12965 + C12964) * C32872 +
             (C2733 * C2069 + C4655 + C4655 + C32890 * C2081 + C2735 * C2603 +
              C4656 + C4656 + C32725 * C2609) *
                 C32588) *
                C32925) *
               C572 -
           (((C4675 + C4676) * C32588 + C13366 * C32872) * C32925 +
            (C5090 * C32588 + C5091 * C32872) * C10430 +
            ((C2785 + C2784) * C32588 + (C2783 + C2782) * C32872) * C10429) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[54] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C32639 * C230 -
          ((C2735 * C242 + C2890 + C2890 + C32725 * C262 + C2733 * C235 +
            C2891 + C2891 + C32890 * C255) *
               C32891 +
           (C2735 * C241 + C2892 + C2892 + C32725 * C261 + C2733 * C236 +
            C2893 + C2893 + C32890 * C256) *
               C2731 +
           (C2735 * C240 + C2894 + C2894 + C32725 * C260 + C2733 * C237 +
            C2895 + C2895 + C32890 * C257) *
               C2730 +
           (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
            C2897 + C2897 + C32890 * C258) *
               C2729) *
              C32680 * C32639 * C231 +
          ((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
            C2899 + C2899 + C32725 * C1007) *
               C2729 +
           (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
            C2901 + C2901 + C32725 * C1006) *
               C2730 +
           (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
            C2903 + C2903 + C32725 * C1005) *
               C2731 +
           (C2733 * C242 + C2904 + C2904 + C32890 * C262 + C2735 * C1330 +
            C2905 + C2905 + C32725 * C1332) *
               C32891) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C32639 * C32625 * C110 -
          ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
           (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
              C32680 * C32639 * C32625 * C111 +
          (C2790 * C2729 + C2791 * C2730 + (C2789 + C2788) * C2731 +
           (C2733 * C120 + C2764 + C2764 + C32890 * C134 + C2735 * C465 +
            C2765 + C2765 + C32725 * C467) *
               C32891) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C7844 + C7845 + C7846 + C7847) * C32588 +
           (C7843 + C7842 + C7841 + C7840) * C32872) *
              C32680 * C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32872 +
           (C7783 * C118 + C7820 + C7820 + C7777 * C132 + C7785 * C235 + C7821 +
            C7821 + C7778 * C255 + C7787 * C242 + C7822 + C7822 + C7779 * C262 +
            C7789 * C1330 + C7823 + C7823 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C230 -
          ((C7789 * C997 + C7946 + C7946 + C32899 * C1009 + C7787 * C994 +
            C7947 + C7947 + C7779 * C1006 + C7785 * C240 + C7948 + C7948 +
            C7778 * C260 + C7783 * C237 + C7949 + C7949 + C7777 * C257) *
               C32588 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32872) *
              C32680 * C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32872 +
           (C7783 * C240 + C7958 + C7958 + C7777 * C260 + C7785 * C994 + C7959 +
            C7959 + C7778 * C1006 + C7787 * C997 + C7960 + C7960 +
            C7779 * C1009 + C7789 * C6588 + C7961 + C7961 + C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32872 +
            (C2782 + C2783) * C32588) *
               C10429 +
           ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
           ((C4680 + C4679) * C32872 + (C4678 + C4677) * C32588) * C32925) *
              C32639 * C32625 * C110 -
          (((C4675 + C4676) * C32588 + (C4677 + C4678) * C32872) * C32925 +
           (C5090 * C32588 + C5091 * C32872) * C10430 +
           ((C2785 + C2784) * C32588 + (C2783 + C2782) * C32872) * C10429) *
              C32639 * C32625 * C111 +
          ((C2790 * C32872 + C2791 * C32588) * C10429 +
           (C4336 * C32872 + (C3339 + C3338) * C32588) * C10430 +
           ((C4676 + C4675) * C32872 +
            (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
             C3019 + C3019 + C32725 * C2277) *
                C32588) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32872 +
            (C2782 + C2783) * C32588) *
               C10429 +
           ((C4673 + C4674) * C32872 + C5089 * C32588) * C10430 +
           ((C4680 + C4679) * C32872 + (C4678 + C4677) * C32588) * C32925) *
              C32639 * C230 -
          (((C2735 * C1145 + C5293 + C5293 + C32725 * C1163 + C2733 * C1144 +
             C5292 + C5292 + C32890 * C1162) *
                C32588 +
            (C2735 * C1143 + C5291 + C5291 + C32725 * C1161 + C2733 * C1142 +
             C5290 + C5290 + C32890 * C1160) *
                C32872) *
               C32925 +
           ((C4893 + C4894) * C32588 + (C5301 + C5300) * C32872) * C10430 +
           ((C3180 + C3181) * C32588 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C32872) *
               C10429) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C32872 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C32588) *
               C10429 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C32872 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C32588) *
               C10430 +
           ((C2733 * C1143 + C12789 + C12789 + C32890 * C1161 + C2735 * C6488 +
             C12790 + C12790 + C32725 * C6494) *
                C32872 +
            (C2733 * C1145 + C12791 + C12791 + C32890 * C1163 + C2735 * C7324 +
             C12792 + C12792 + C32725 * C7326) *
                C32588) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[55] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32578 * C32892 +
            (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
               C32639 * C461 -
           ((C7789 * C6487 + C8517 + C8517 + C32899 * C6493 + C7787 * C1694 +
             C8516 + C8516 + C7779 * C1700 + C7785 * C1141 + C8515 + C8515 +
             C7778 * C1159 + C7783 * C679 + C8514 + C8514 + C7777 * C689) *
                C32578 * C32767 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32578 * C32892) *
               C32639 * C462) *
              C463 +
          (((C8229 + C8228 + C8227 + C8226) * C32578 * C32892 +
            (C7783 * C680 + C8518 + C8518 + C7777 * C690 + C7785 * C1140 +
             C8519 + C8519 + C7778 * C1158 + C7787 * C1695 + C8520 + C8520 +
             C7779 * C1701 + C7789 * C6678 + C8521 + C8521 + C32899 * C6680) *
                C32578 * C32767) *
               C32639 * C462 -
           ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
            (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C812 +
             (C2782 + C2783) * C813 + C2790 * C32913) *
                C32892 +
            ((C4673 + C4674) * C812 + (C3343 + C3342) * C813 + C4336 * C32913) *
                C32767) *
               C32639 * C461 -
           (((C4891 + C4892) * C32913 + (C4893 + C4894) * C813 +
             (C2735 * C1141 + C3475 + C3475 + C32725 * C1159 + C2733 * C679 +
              C3474 + C3474 + C32890 * C689) *
                 C812) *
                C32767 +
            ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C812) *
                C32892) *
               C32639 * C462) *
              C463 +
          ((((C3181 + C3180) * C812 + (C3179 + C3178) * C813 +
             (C3177 + C3176) * C32913) *
                C32892 +
            ((C4894 + C4893) * C812 + (C4892 + C4891) * C813 +
             (C2733 * C682 + C3480 + C3480 + C32890 * C692 + C2735 * C1512 +
              C3481 + C3481 + C32725 * C1514) *
                 C32913) *
                C32767) *
               C32639 * C462 -
           (((C3338 + C3339) * C32913 + (C3340 + C3341) * C813 +
             (C3342 + C3343) * C812) *
                C32767 +
            ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
             (C2783 + C2782) * C812) *
                C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32578 * C13672 +
            (C4673 + C4674) * C32578 * C13673 + C14587 * C13674 +
            C14595 * C32906) *
               C32639 * C461 -
           ((C2735 * C7115 + C13566 + C13566 + C32725 * C7121 + C2733 * C2601 +
             C13565 + C13565 + C32890 * C2607) *
                C32578 * C32906 +
            (C13574 + C13573) * C32578 * C13674 +
            (C5301 + C5300) * C32578 * C13673 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C32578 * C13672) *
               C32639 * C462) *
              C463 +
          (((C3181 + C3180) * C32578 * C13672 +
            (C4894 + C4893) * C32578 * C13673 +
            (C13171 + C13170) * C32578 * C13674 +
            (C2733 * C2602 + C13567 + C13567 + C32890 * C2608 + C2735 * C7476 +
             C13568 + C13568 + C32725 * C7478) *
                C32578 * C32906) *
               C32639 * C462 -
           ((C12964 + C12965) * C32578 * C32906 + C13366 * C32578 * C13674 +
            C5091 * C32578 * C13673 + (C2783 + C2782) * C32578 * C13672) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[56] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32578 * C32892 +
            (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
               C571 -
           ((C9902 + C9903 + C9904 + C9905) * C32578 * C32767 +
            (C9901 + C9900 + C9899 + C9898) * C32578 * C32892) *
               C572) *
              C461 +
          (((C10316 + C10317 + C10318 + C10319) * C32578 * C32892 +
            (C7783 * C1142 + C10304 + C10304 + C7777 * C1160 + C7785 * C1143 +
             C10305 + C10305 + C7778 * C1161 + C7787 * C6488 + C10306 + C10306 +
             C7779 * C6494 + C7789 * C6489 + C10307 + C10307 + C32899 * C6495) *
                C32578 * C32767) *
               C572 -
           ((C10319 + C10318 + C10317 + C10316) * C32578 * C32767 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32578 * C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C812 +
             (C2782 + C2783) * C813 + C2790 * C32913) *
                C32892 +
            ((C4673 + C4674) * C812 + C5089 * C813 + C4336 * C32913) * C32767) *
               C571 -
           (((C4675 + C4676) * C32913 + (C4677 + C4678) * C813 +
             (C4679 + C4680) * C812) *
                C32767 +
            (C5090 * C32913 + C5091 * C813 + (C4674 + C4673) * C812) * C32892) *
               C572) *
              C461 +
          ((((C5300 + C5301) * C812 + (C4894 + C4893) * C813 +
             (C4892 + C4891) * C32913) *
                C32892 +
            ((C2733 * C1142 + C5290 + C5290 + C32890 * C1160 + C2735 * C1143 +
              C5291 + C5291 + C32725 * C1161) *
                 C812 +
             (C2733 * C1144 + C5292 + C5292 + C32890 * C1162 + C2735 * C1145 +
              C5293 + C5293 + C32725 * C1163) *
                 C813 +
             (C2733 * C1146 + C5294 + C5294 + C32890 * C1164 + C2735 * C1147 +
              C5295 + C5295 + C32725 * C1165) *
                 C32913) *
                C32767) *
               C572 -
           (((C4891 + C4892) * C32913 + (C4893 + C4894) * C813 +
             (C5301 + C5300) * C812) *
                C32767 +
            ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C812) *
                C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32578 * C13672 +
            (C4673 + C4674) * C32578 * C13673 + C14587 * C13674 +
            C14595 * C32906) *
               C571 -
           ((C14600 + C14601) * C32578 * C32906 +
            (C12966 + C12967) * C32578 * C13674 +
            (C4679 + C4680) * C32578 * C13673 +
            (C4674 + C4673) * C32578 * C13672) *
               C572) *
              C461 +
          (((C5300 + C5301) * C32578 * C13672 +
            (C13573 + C13574) * C32578 * C13673 +
            (C15002 + C15003) * C32578 * C13674 +
            (C2733 * C7116 + C14996 + C14996 + C32890 * C7122 + C2735 * C7117 +
             C14997 + C14997 + C32725 * C7123) *
                C32578 * C32906) *
               C572 -
           ((C15003 + C15002) * C32578 * C32906 +
            (C13574 + C13573) * C32578 * C13674 +
            (C5301 + C5300) * C32578 * C13673 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C32578 * C13672) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[57] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
                 C2739 + C2739 + C32725 * C258) *
                    C812 +
                (C2782 + C2783) * C813 + C2790 * C32913) *
                   C32892 +
               ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
                 C3010 + C3010 + C32725 * C689) *
                    C812 +
                (C3343 + C3342) * C813 + C4336 * C32913) *
                   C32767) *
                  C32639 * C32625 * C110 -
              (((C3338 + C3339) * C32913 + (C3340 + C3341) * C813 +
                (C3342 + C3343) * C812) *
                   C32767 +
               ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
                (C2783 + C2782) * C812) *
                   C32892) *
                  C32639 * C32625 * C111 +
              ((C2790 * C812 + C2791 * C813 + (C2789 + C2788) * C32913) *
                   C32892 +
               (C4336 * C812 + (C3339 + C3338) * C813 +
                (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
                 C3325 + C3325 + C32725 * C693) *
                    C32913) *
                   C32767) *
                  C32639 * C32625 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
                 C2739 + C2739 + C32725 * C258) *
                    C812 +
                (C2782 + C2783) * C813 + C2790 * C32913) *
                   C32892 +
               ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
                 C3010 + C3010 + C32725 * C689) *
                    C812 +
                (C3343 + C3342) * C813 + C4336 * C32913) *
                   C32767) *
                  C32639 * C230 -
              (((C2735 * C1139 + C3479 + C3479 + C32725 * C1157 + C2733 * C681 +
                 C3478 + C3478 + C32890 * C691) *
                    C32913 +
                (C2735 * C1140 + C3477 + C3477 + C32725 * C1158 + C2733 * C680 +
                 C3476 + C3476 + C32890 * C690) *
                    C813 +
                (C2735 * C1141 + C3475 + C3475 + C32725 * C1159 + C2733 * C679 +
                 C3474 + C3474 + C32890 * C689) *
                    C812) *
                   C32767 +
               ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
                (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
                 C2897 + C2897 + C32890 * C258) *
                    C812) *
                   C32892) *
                  C32639 * C231 +
              (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
                 C2899 + C2899 + C32725 * C1007) *
                    C812 +
                (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
                 C2901 + C2901 + C32725 * C1006) *
                    C813 +
                (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
                 C2903 + C2903 + C32725 * C1005) *
                    C32913) *
                   C32892 +
               ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 +
                 C2735 * C1694 + C4484 + C4484 + C32725 * C1700) *
                    C812 +
                (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 +
                 C2735 * C1695 + C4486 + C4486 + C32725 * C1701) *
                    C813 +
                (C2733 * C1139 + C4487 + C4487 + C32890 * C1157 +
                 C2735 * C1696 + C4488 + C4488 + C32725 * C1702) *
                    C32913) *
                   C32767) *
                  C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C4673 + C4674) * C812 + (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C336 -
          (((C4675 + C4676) * C32913 + (C4677 + C4678) * C813 +
            (C4679 + C4680) * C812) *
               C32767 +
           ((C3340 + C3341) * C32913 + (C3342 + C3343) * C813 +
            (C4674 + C4673) * C812) *
               C32892) *
              C337 +
          (((C4680 + C4679) * C812 + (C4678 + C4677) * C813 +
            (C4676 + C4675) * C32913) *
               C32892 +
           ((C2733 * C2071 + C4651 + C4651 + C32890 * C2083 + C2735 * C2601 +
             C4652 + C4652 + C32725 * C2607) *
                C812 +
            (C2733 * C2070 + C4653 + C4653 + C32890 * C2082 + C2735 * C2602 +
             C4654 + C4654 + C32725 * C2608) *
                C813 +
            (C2733 * C2069 + C4655 + C4655 + C32890 * C2081 + C2735 * C2603 +
             C4656 + C4656 + C32725 * C2609) *
                C32913) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
           (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
              C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32578 * C32892 +
           (C7783 * C341 + C8368 + C8368 + C7777 * C361 + C7785 * C681 + C8369 +
            C8369 + C7778 * C691 + C7787 * C1139 + C8370 + C8370 +
            C7779 * C1157 + C7789 * C1696 + C8371 + C8371 + C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C7789 * C6487 + C8517 + C8517 + C32899 * C6493 + C7787 * C1694 +
            C8516 + C8516 + C7779 * C1700 + C7785 * C1141 + C8515 + C8515 +
            C7778 * C1159 + C7783 * C679 + C8514 + C8514 + C7777 * C689) *
               C32578 * C32767 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32578 * C32892) *
              C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32578 * C32892 +
           (C7783 * C1141 + C9760 + C9760 + C7777 * C1159 + C7785 * C1694 +
            C9761 + C9761 + C7778 * C1700 + C7787 * C6487 + C9762 + C9762 +
            C7779 * C6493 + C7789 * C6768 + C9763 + C9763 + C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
              C336 -
          ((C9902 + C9903 + C9904 + C9905) * C32578 * C32767 +
           (C9901 + C9900 + C9899 + C9898) * C32578 * C32892) *
              C337 +
          ((C9905 + C9904 + C9903 + C9902) * C32578 * C32892 +
           (C7783 * C2071 + C9878 + C9878 + C7777 * C2083 + C7785 * C2601 +
            C9879 + C9879 + C7778 * C2607 + C7787 * C7115 + C9880 + C9880 +
            C7779 * C7121 + C7789 * C7643 + C9881 + C9881 + C32899 * C7645) *
               C32578 * C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C32578 * C13672 +
           (C4673 + C4674) * C32578 * C13673 + C12939 * C32578 * C13674 +
           (C12967 + C12966) * C32578 * C32906) *
              C32639 * C32625 * C110 -
          ((C12964 + C12965) * C32578 * C32906 + C13366 * C32578 * C13674 +
           C5091 * C32578 * C13673 + (C2783 + C2782) * C32578 * C13672) *
              C32639 * C32625 * C111 +
          (C2790 * C32578 * C13672 + C4336 * C32578 * C13673 +
           (C4676 + C4675) * C32578 * C13674 +
           (C2733 * C2069 + C4655 + C4655 + C32890 * C2081 + C2735 * C2603 +
            C4656 + C4656 + C32725 * C2609) *
               C32578 * C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C32578 * C13672 +
           (C4673 + C4674) * C32578 * C13673 + C12939 * C32578 * C13674 +
           (C12967 + C12966) * C32578 * C32906) *
              C32639 * C230 -
          ((C2735 * C7115 + C13566 + C13566 + C32725 * C7121 + C2733 * C2601 +
            C13565 + C13565 + C32890 * C2607) *
               C32578 * C32906 +
           (C13574 + C13573) * C32578 * C13674 +
           (C5301 + C5300) * C32578 * C13673 +
           (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
            C2897 + C2897 + C32890 * C258) *
               C32578 * C13672) *
              C32639 * C231 +
          ((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
            C2899 + C2899 + C32725 * C1007) *
               C32578 * C13672 +
           (C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
            C4484 + C4484 + C32725 * C1700) *
               C32578 * C13673 +
           (C2733 * C1143 + C12789 + C12789 + C32890 * C1161 + C2735 * C6488 +
            C12790 + C12790 + C32725 * C6494) *
               C32578 * C13674 +
           (C2733 * C7115 + C14487 + C14487 + C32890 * C7121 + C2735 * C7643 +
            C14488 + C14488 + C32725 * C7645) *
               C32578 * C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C32578 * C13672 +
           (C4673 + C4674) * C32578 * C13673 + C14587 * C13674 +
           C14595 * C32906) *
              C336 -
          ((C14600 + C14601) * C32578 * C32906 +
           (C12966 + C12967) * C32578 * C13674 +
           (C4679 + C4680) * C32578 * C13673 +
           (C4674 + C4673) * C32578 * C13672) *
              C337 +
          (C14587 * C13672 + C14595 * C13673 +
           (C14601 + C14600) * C32578 * C13674 +
           (C2733 * C12192 + C14593 + C14593 + C32890 * C12196 +
            C2735 * C12478 + C14594 + C14594 + C32725 * C12480) *
               C32578 * C32906) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[58] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32578 * C32892 +
            (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
               C571 -
           ((C9902 + C9903 + C9904 + C9905) * C32578 * C32767 +
            (C9901 + C9900 + C9899 + C9898) * C32578 * C32892) *
               C572) *
              C32625 * C463 +
          (((C8383 + C8382 + C8381 + C8380) * C32578 * C32892 +
            (C7783 * C345 + C8072 + C8072 + C7777 * C365 + C7785 * C1144 +
             C8073 + C8073 + C7778 * C1162 + C7787 * C1145 + C8074 + C8074 +
             C7779 * C1163 + C7789 * C7324 + C8075 + C8075 + C32899 * C7326) *
                C32578 * C32767) *
               C572 -
           ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
            (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C812 +
             (C2782 + C2783) * C813 + C2790 * C32913) *
                C32892 +
            ((C4673 + C4674) * C812 + C5089 * C813 + C4336 * C32913) * C32767) *
               C571 -
           (((C4675 + C4676) * C32913 + (C4677 + C4678) * C813 +
             (C4679 + C4680) * C812) *
                C32767 +
            (C5090 * C32913 + C5091 * C813 + (C4674 + C4673) * C812) * C32892) *
               C572) *
              C32625 * C463 +
          (((C5089 * C812 + C4336 * C813 + (C3339 + C3338) * C32913) * C32892 +
            ((C4678 + C4677) * C812 + (C4676 + C4675) * C813 +
             (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
              C3019 + C3019 + C32725 * C2277) *
                 C32913) *
                C32767) *
               C572 -
           (((C3338 + C3339) * C32913 + C5090 * C813 + C5091 * C812) * C32767 +
            ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
             (C2783 + C2782) * C812) *
                C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32578 * C13672 +
            (C4673 + C4674) * C32578 * C13673 + C14587 * C13674 +
            C14595 * C32906) *
               C571 -
           ((C14600 + C14601) * C32578 * C32906 +
            (C12966 + C12967) * C32578 * C13674 +
            (C4679 + C4680) * C32578 * C13673 +
            (C4674 + C4673) * C32578 * C13672) *
               C572) *
              C32625 * C463 +
          ((C5089 * C32578 * C13672 + C12940 * C32578 * C13673 +
            (C12965 + C12964) * C32578 * C13674 +
            (C2733 * C2073 + C12951 + C12951 + C32890 * C2085 + C2735 * C12297 +
             C12952 + C12952 + C32725 * C12299) *
                C32578 * C32906) *
               C572 -
           ((C12964 + C12965) * C32578 * C32906 + C13366 * C32578 * C13674 +
            C5091 * C32578 * C13673 + (C2783 + C2782) * C32578 * C13672) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[59] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
             C3010 + C3010 + C32725 * C689) *
                C812 +
            (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C32639 * C230 -
          (((C2735 * C1139 + C3479 + C3479 + C32725 * C1157 + C2733 * C681 +
             C3478 + C3478 + C32890 * C691) *
                C32913 +
            (C2735 * C1140 + C3477 + C3477 + C32725 * C1158 + C2733 * C680 +
             C3476 + C3476 + C32890 * C690) *
                C813 +
            (C2735 * C1141 + C3475 + C3475 + C32725 * C1159 + C2733 * C679 +
             C3474 + C3474 + C32890 * C689) *
                C812) *
               C32767 +
           ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C812) *
               C32892) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C812 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C813 +
            (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
             C2903 + C2903 + C32725 * C1005) *
                C32913) *
               C32892 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C812 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C813 +
            (C2733 * C1139 + C4487 + C4487 + C32890 * C1157 + C2735 * C1696 +
             C4488 + C4488 + C32725 * C1702) *
                C32913) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
             C3010 + C3010 + C32725 * C689) *
                C812 +
            (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C3338 + C3339) * C32913 + (C3340 + C3341) * C813 +
            (C3342 + C3343) * C812) *
               C32767 +
           ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
            (C2783 + C2782) * C812) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C2790 * C812 + C2791 * C813 + (C2789 + C2788) * C32913) * C32892 +
           (C4336 * C812 + (C3339 + C3338) * C813 +
            (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
             C3325 + C3325 + C32725 * C693) *
                C32913) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
           (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
              C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32578 * C32892 +
           (C7783 * C341 + C8368 + C8368 + C7777 * C361 + C7785 * C681 + C8369 +
            C8369 + C7778 * C691 + C7787 * C1139 + C8370 + C8370 +
            C7779 * C1157 + C7789 * C1696 + C8371 + C8371 + C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C7789 * C6487 + C8517 + C8517 + C32899 * C6493 + C7787 * C1694 +
            C8516 + C8516 + C7779 * C1700 + C7785 * C1141 + C8515 + C8515 +
            C7778 * C1159 + C7783 * C679 + C8514 + C8514 + C7777 * C689) *
               C32578 * C32767 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32578 * C32892) *
              C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32578 * C32892 +
           (C7783 * C1141 + C9760 + C9760 + C7777 * C1159 + C7785 * C1694 +
            C9761 + C9761 + C7778 * C1700 + C7787 * C6487 + C9762 + C9762 +
            C7779 * C6493 + C7789 * C6768 + C9763 + C9763 + C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C32578 * C13672 +
           (C4673 + C4674) * C32578 * C13673 + C12939 * C32578 * C13674 +
           (C12967 + C12966) * C32578 * C32906) *
              C32639 * C32625 * C110 -
          ((C12964 + C12965) * C32578 * C32906 + C13366 * C32578 * C13674 +
           C5091 * C32578 * C13673 + (C2783 + C2782) * C32578 * C13672) *
              C32639 * C32625 * C111 +
          (C2790 * C32578 * C13672 + C4336 * C32578 * C13673 +
           (C4676 + C4675) * C32578 * C13674 +
           (C2733 * C2069 + C4655 + C4655 + C32890 * C2081 + C2735 * C2603 +
            C4656 + C4656 + C32725 * C2609) *
               C32578 * C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C32578 * C13672 +
           (C4673 + C4674) * C32578 * C13673 + C12939 * C32578 * C13674 +
           (C12967 + C12966) * C32578 * C32906) *
              C32639 * C230 -
          ((C2735 * C7115 + C13566 + C13566 + C32725 * C7121 + C2733 * C2601 +
            C13565 + C13565 + C32890 * C2607) *
               C32578 * C32906 +
           (C13574 + C13573) * C32578 * C13674 +
           (C5301 + C5300) * C32578 * C13673 +
           (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
            C2897 + C2897 + C32890 * C258) *
               C32578 * C13672) *
              C32639 * C231 +
          ((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
            C2899 + C2899 + C32725 * C1007) *
               C32578 * C13672 +
           (C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
            C4484 + C4484 + C32725 * C1700) *
               C32578 * C13673 +
           (C2733 * C1143 + C12789 + C12789 + C32890 * C1161 + C2735 * C6488 +
            C12790 + C12790 + C32725 * C6494) *
               C32578 * C13674 +
           (C2733 * C7115 + C14487 + C14487 + C32890 * C7121 + C2735 * C7643 +
            C14488 + C14488 + C32725 * C7645) *
               C32578 * C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[60] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C32680 * C32639 * C461 -
               (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
                (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
                   C32680 * C32639 * C462) *
                  C463 +
              ((C489 * C102 + C488 * C103 + C487 * C104 + C486 * C105 +
                (C113 * C465 + C477 + C477 + C32662 * C467) * C106) *
                   C32680 * C32639 * C462 -
               (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
                C164 * C102) *
                   C32680 * C32639 * C461) *
                  C464) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 +
                 C823 + C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
                 C32922 * C259) *
                    C812 +
                (C873 + C874 + C875) * C813 + C883 * C32913) *
                   C32680 * C32639 * C461 -
               ((C1361 + C1362 + C1363) * C32913 +
                (C1364 + C1365 + C1366) * C813 +
                (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
                 C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
                 C32954 * C258) *
                    C812) *
                   C32680 * C32639 * C462) *
                  C463 +
              (((C1366 + C1365 + C1364) * C812 +
                (C1363 + C1362 + C1361) * C813 +
                (C815 * C235 + C1346 + C1346 + C32954 * C255 + C817 * C242 +
                 C1347 + C1347 + C32942 * C262 + C819 * C1330 + C1348 + C1348 +
                 C32922 * C1332) *
                    C32913) *
                   C32680 * C32639 * C462 -
               ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
                (C875 + C874 + C873) * C812) *
                   C32680 * C32639 * C461) *
                  C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
             C165 * C32913) *
                C32955 +
            (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
               C32639 * C461 -
           ((C2296 * C32913 + C2297 * C813 +
             (C113 * C1142 + C1953 + C1953 + C32662 * C1160) * C812) *
                C32925 +
            (C2298 * C32913 + C2299 * C813 +
             (C113 * C679 + C695 + C695 + C32662 * C689) * C812) *
                C32944 +
            (C488 * C32913 + C489 * C813 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
                C32955) *
               C32639 * C462) *
              C463 +
          (((C489 * C812 + C488 * C813 + C487 * C32913) * C32955 +
            (C2299 * C812 + C2298 * C813 +
             (C113 * C682 + C698 + C698 + C32662 * C692) * C32913) *
                C32944 +
            (C2297 * C812 + C2296 * C813 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32913) *
                C32925) *
               C32639 * C462 -
           ((C1840 * C32913 + C1839 * C813 + C1838 * C812) * C32925 +
            (C595 * C32913 + C596 * C813 + C597 * C812) * C32944 +
            (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C32639 * C461 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C32639 * C462) *
              C463 +
          (((C5920 + C5919 + C5918) * C32951 +
            (C5917 + C5916 + C5915) * C32938 +
            (C5417 * C235 + C5900 + C5900 + C5411 * C255 + C5419 * C242 +
             C5901 + C5901 + C5412 * C262 + C5421 * C1330 + C5902 + C5902 +
             C32922 * C1332) *
                C32913) *
               C32680 * C32639 * C462 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C32639 * C461 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C32639 * C462) *
              C463 +
          ((C6322 * C237 + C6592 + C6592 + C6316 * C257 + C6324 * C240 + C6593 +
            C6593 + C6317 * C260 + C6326 * C994 + C6594 + C6594 +
            C6318 * C1006 + C6328 * C997 + C6595 + C6595 + C6319 * C1009 +
            C6330 * C6588 + C6596 + C6596 + C6320 * C6590) *
               C32578 * C32680 * C32639 * C462 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32578 * C32955 +
            (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
               C32639 * C461 -
           ((C5421 * C6488 + C6997 + C6997 + C32922 * C6494 + C5419 * C1143 +
             C6998 + C6998 + C5412 * C1161 + C5417 * C1142 + C6999 + C6999 +
             C5411 * C1160) *
                C32578 * C32925 +
            (C5421 * C1694 + C6248 + C6248 + C32922 * C1700 + C5419 * C1141 +
             C6247 + C6247 + C5412 * C1159 + C5417 * C679 + C6246 + C6246 +
             C5411 * C689) *
                C32578 * C32944 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32578 * C32955) *
               C32639 * C462) *
              C463 +
          (((C5920 + C5919 + C5918) * C32578 * C32955 +
            (C5417 * C680 + C6249 + C6249 + C5411 * C690 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5421 * C1695 + C6251 + C6251 +
             C32922 * C1701) *
                C32578 * C32944 +
            (C5417 * C1144 + C7328 + C7328 + C5411 * C1162 + C5419 * C1145 +
             C7329 + C7329 + C5412 * C1163 + C5421 * C7324 + C7330 + C7330 +
             C32922 * C7326) *
                C32578 * C32925) *
               C32639 * C462 -
           ((C5421 * C1145 + C5738 + C5738 + C32922 * C1163 + C5419 * C1144 +
             C5737 + C5737 + C5412 * C1162 + C5417 * C345 + C5736 + C5736 +
             C5411 * C365) *
                C32578 * C32925 +
            (C6097 + C6098 + C6099) * C32578 * C32944 +
            (C5477 + C5476 + C5475) * C32578 * C32955) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
             C164 * C32938 + C165 * C32913) *
                C10429 +
            (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
               C32639 * C461 -
           ((C2296 * C32913 + C2297 * C32938 + C2627 * C32951) * C32925 +
            (C2298 * C32913 + C2299 * C32938 + C2626 * C32951) * C10430 +
            (C488 * C32913 + C489 * C32938 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
                C10429) *
               C32639 * C462) *
              C463 +
          (((C489 * C32951 + C488 * C32938 + C487 * C32913) * C10429 +
            (C2299 * C32951 + C2298 * C32938 + C3921 * C32913) * C10430 +
            (C2297 * C32951 + C2296 * C32938 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32913) *
                C32925) *
               C32639 * C462 -
           ((C1840 * C32913 + C1839 * C32938 + C1838 * C32951) * C32925 +
            (C595 * C32913 + C596 * C32938 + C597 * C32951) * C10430 +
            (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C32578 * C10429 +
            (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
               C32639 * C461 -
           ((C819 * C6488 + C11334 + C11334 + C32922 * C6494 + C817 * C1143 +
             C11335 + C11335 + C32942 * C1161 + C815 * C1142 + C11336 + C11336 +
             C32954 * C1160) *
                C32578 * C32925 +
            (C819 * C1694 + C1706 + C1706 + C32922 * C1700 + C817 * C1141 +
             C1705 + C1705 + C32942 * C1159 + C815 * C679 + C1704 + C1704 +
             C32954 * C689) *
                C32578 * C10430 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C32578 * C10429) *
               C32639 * C462) *
              C463 +
          (((C1366 + C1365 + C1364) * C32578 * C10429 +
            (C815 * C680 + C1707 + C1707 + C32954 * C690 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C819 * C1695 + C1709 + C1709 +
             C32922 * C1701) *
                C32578 * C10430 +
            (C815 * C1144 + C11653 + C11653 + C32954 * C1162 + C817 * C1145 +
             C11654 + C11654 + C32942 * C1163 + C819 * C7324 + C11655 + C11655 +
             C32922 * C7326) *
                C32578 * C32925) *
               C32639 * C462 -
           ((C819 * C1145 + C1181 + C1181 + C32922 * C1163 + C817 * C1144 +
             C1180 + C1180 + C32942 * C1162 + C815 * C345 + C1179 + C1179 +
             C32954 * C365) *
                C32578 * C32925 +
            (C1546 + C1547 + C1548) * C32578 * C10430 +
            (C875 + C874 + C873) * C32578 * C10429) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
            C12199 * C12061 + C12200 * C12062 + C12201 * C12063 +
            C12214 * C12064) *
               C32639 * C461 -
           ((C113 * C7116 + C12128 + C12128 + C32662 * C7122) * C32578 *
                C12064 +
            (C113 * C2601 + C2619 + C2619 + C32662 * C2607) * C32578 * C12063 +
            C2627 * C32578 * C12062 + C2626 * C32578 * C12061 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32578 * C12060) *
               C32639 * C462) *
              C463 +
          ((C489 * C32578 * C12060 + C2299 * C32578 * C12061 +
            C2297 * C32578 * C12062 +
            (C113 * C2602 + C2620 + C2620 + C32662 * C2608) * C32578 * C12063 +
            (C113 * C12297 + C12301 + C12301 + C32662 * C12299) * C32578 *
                C12064) *
               C32639 * C462 -
           ((C113 * C2073 + C2106 + C2106 + C32662 * C2085) * C32578 * C12064 +
            C2121 * C32578 * C12063 + C1838 * C32578 * C12062 +
            C597 * C32578 * C12061 + C164 * C32578 * C12060) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[61] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C32680 * C571 -
               (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
                (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
                   C32680 * C572) *
                  C461 +
              (((C113 * C679 + C695 + C695 + C32662 * C689) * C102 +
                (C113 * C680 + C696 + C696 + C32662 * C690) * C103 +
                (C113 * C681 + C697 + C697 + C32662 * C691) * C104 +
                (C113 * C682 + C698 + C698 + C32662 * C692) * C105 +
                (C113 * C683 + C699 + C699 + C32662 * C693) * C106) *
                   C32680 * C572 -
               (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
                (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
                   C32680 * C571) *
                  C462) *
             C32613 +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 +
                 C823 + C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
                 C32922 * C259) *
                    C812 +
                (C873 + C874 + C875) * C813 + C883 * C32913) *
                   C32680 * C571 -
               ((C1543 + C1544 + C1545) * C32913 +
                (C1546 + C1547 + C1548) * C813 +
                (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
                 C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
                 C32954 * C363) *
                    C812) *
                   C32680 * C572) *
                  C461 +
              (((C815 * C679 + C1704 + C1704 + C32954 * C689 + C817 * C1141 +
                 C1705 + C1705 + C32942 * C1159 + C819 * C1694 + C1706 + C1706 +
                 C32922 * C1700) *
                    C812 +
                (C815 * C680 + C1707 + C1707 + C32954 * C690 + C817 * C1140 +
                 C1708 + C1708 + C32942 * C1158 + C819 * C1695 + C1709 + C1709 +
                 C32922 * C1701) *
                    C813 +
                (C815 * C681 + C1710 + C1710 + C32954 * C691 + C817 * C1139 +
                 C1711 + C1711 + C32942 * C1157 + C819 * C1696 + C1712 + C1712 +
                 C32922 * C1702) *
                    C32913) *
                   C32680 * C572 -
               ((C1361 + C1362 + C1363) * C32913 +
                (C1364 + C1365 + C1366) * C813 +
                (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
                 C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
                 C32954 * C258) *
                    C812) *
                   C32680 * C571) *
                  C462) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
             C165 * C32913) *
                C32955 +
            (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
               C571 -
           ((C2125 + C2126 + C2127) * C32925 +
            (C2095 + C2094 + C2124) * C32944 +
            (C2091 + C2090 + C2123) * C32955) *
               C572) *
              C461 +
          (((C2628 + C2613 + C2614) * C32955 +
            (C2629 + C2617 + C2618) * C32944 +
            ((C113 * C2601 + C2619 + C2619 + C32662 * C2607) * C812 +
             (C113 * C2602 + C2620 + C2620 + C32662 * C2608) * C813 +
             (C113 * C2603 + C2621 + C2621 + C32662 * C2609) * C32913) *
                C32925) *
               C572 -
           ((C2618 + C2617 + C2629) * C32925 +
            (C2614 + C2613 + C2628) * C32944 +
            (C488 * C32913 + C489 * C813 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
                C32955) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C461 +
          (((C5417 * C679 + C6246 + C6246 + C5411 * C689 + C5419 * C1141 +
             C6247 + C6247 + C5412 * C1159 + C5421 * C1694 + C6248 + C6248 +
             C32922 * C1700) *
                C32951 +
            (C5417 * C680 + C6249 + C6249 + C5411 * C690 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5421 * C1695 + C6251 + C6251 +
             C32922 * C1701) *
                C32938 +
            (C5417 * C681 + C6252 + C6252 + C5411 * C691 + C5419 * C1139 +
             C6253 + C6253 + C5412 * C1157 + C5421 * C1696 + C6254 + C6254 +
             C32922 * C1702) *
                C32913) *
               C32680 * C572 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C461 +
          ((C6322 * C679 + C6772 + C6772 + C6316 * C689 + C6324 * C1141 +
            C6773 + C6773 + C6317 * C1159 + C6326 * C1694 + C6774 + C6774 +
            C6318 * C1700 + C6328 * C6487 + C6775 + C6775 + C6319 * C6493 +
            C6330 * C6768 + C6776 + C6776 + C6320 * C6770) *
               C32578 * C32680 * C572 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32578 * C32955 +
            (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
               C571 -
           ((C7173 + C7174 + C7175) * C32578 * C32925 +
            (C7172 + C7171 + C7170) * C32578 * C32944 +
            (C7169 + C7168 + C7167) * C32578 * C32955) *
               C572) *
              C461 +
          (((C7674 + C7675 + C7676) * C32578 * C32955 +
            (C7677 + C7678 + C7679) * C32578 * C32944 +
            (C5417 * C2601 + C7659 + C7659 + C5411 * C2607 + C5419 * C7115 +
             C7660 + C7660 + C5412 * C7121 + C5421 * C7643 + C7661 + C7661 +
             C32922 * C7645) *
                C32578 * C32925) *
               C572 -
           ((C7679 + C7678 + C7677) * C32578 * C32925 +
            (C7676 + C7675 + C7674) * C32578 * C32944 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32578 * C32955) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
             C164 * C32938 + C165 * C32913) *
                C10429 +
            (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
               C571 -
           ((C10659 + C10660 + C10661) * C32925 +
            (C10658 + C10657 + C10656) * C10430 +
            (C10655 + C10654 + C10653) * C10429) *
               C572) *
              C461 +
          (((C11108 + C11109 + C11110) * C10429 +
            (C11111 + C11112 + C11113) * C10430 +
            ((C113 * C2601 + C2619 + C2619 + C32662 * C2607) * C32951 +
             (C113 * C2602 + C2620 + C2620 + C32662 * C2608) * C32938 +
             (C113 * C2603 + C2621 + C2621 + C32662 * C2609) * C32913) *
                C32925) *
               C572 -
           ((C11113 + C11112 + C11111) * C32925 +
            (C11110 + C11109 + C11108) * C10430 +
            (C488 * C32913 + C489 * C32938 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
                C10429) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C32578 * C10429 +
            (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
               C571 -
           ((C11501 + C11502 + C11503) * C32578 * C32925 +
            (C11500 + C11499 + C11498) * C32578 * C10430 +
            (C11497 + C11496 + C11495) * C32578 * C10429) *
               C572) *
              C461 +
          (((C11993 + C11994 + C11995) * C32578 * C10429 +
            (C11996 + C11997 + C11998) * C32578 * C10430 +
            (C815 * C2601 + C11978 + C11978 + C32954 * C2607 + C817 * C7115 +
             C11979 + C11979 + C32942 * C7121 + C819 * C7643 + C11980 + C11980 +
             C32922 * C7645) *
                C32578 * C32925) *
               C572 -
           ((C11998 + C11997 + C11996) * C32578 * C32925 +
            (C11995 + C11994 + C11993) * C32578 * C10430 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C32578 * C10429) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
            C12199 * C12061 + C12200 * C12062 + C12201 * C12063 +
            C12214 * C12064) *
               C571 -
           (C12215 * C12064 + C12214 * C12063 + C12201 * C12062 +
            C12200 * C12061 + C12199 * C12060) *
               C572) *
              C461 +
          ((C12482 * C12060 + C12483 * C12061 + C12495 * C12062 +
            C12496 * C12063 +
            (C113 * C12478 + C12488 + C12488 + C32662 * C12480) * C32578 *
                C12064) *
               C572 -
           (C12496 * C12064 + C12495 * C12063 + C12483 * C12062 +
            C12482 * C12061 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32578 * C12060) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (-0.25 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C32680 * C32639 * C32625 * C110 -
              (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
               C164 * C102) *
                  C32680 * C32639 * C32625 * C111 +
              (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
               (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
                  C32680 * C32639 * C32625 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C32680 * C32639 * C230 -
              ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
               (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
               (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
               (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
               (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
                  C32680 * C32639 * C231 +
              ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
               (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
               (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
               (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
               (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
                  C32680 * C32639 * C232) *
             C32613 +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C32680 * C336 -
              ((C113 * C339 + C370 + C370 + C32662 * C359) * C106 +
               (C113 * C340 + C371 + C371 + C32662 * C360) * C105 +
               (C113 * C341 + C372 + C372 + C32662 * C361) * C104 +
               (C113 * C342 + C373 + C373 + C32662 * C362) * C103 +
               (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
                  C32680 * C337 +
              ((C113 * C344 + C375 + C375 + C32662 * C364) * C102 +
               (C113 * C345 + C376 + C376 + C32662 * C365) * C103 +
               (C113 * C346 + C377 + C377 + C32662 * C366) * C104 +
               (C113 * C347 + C378 + C378 + C32662 * C367) * C105 +
               (C113 * C348 + C379 + C379 + C32662 * C368) * C106) *
                  C32680 * C338) *
             C32625 * C32613 -
         0.25 * std::pow(Pi, 2.5) *
             (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
                C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
                C32922 * C259) *
                   C812 +
               (C873 + C874 + C875) * C813 + C883 * C32913) *
                  C32680 * C32639 * C32625 * C110 -
              ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
               (C875 + C874 + C873) * C812) *
                  C32680 * C32639 * C32625 * C111 +
              (C883 * C812 + (C881 + C880 + C879) * C813 +
               (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
                C853 + C32942 * C254 + C819 * C243 + C854 + C854 +
                C32922 * C263) *
                   C32913) *
                  C32680 * C32639 * C32625 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
                C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
                C32922 * C259) *
                   C812 +
               (C873 + C874 + C875) * C813 + C883 * C32913) *
                  C32680 * C32639 * C230 -
              ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 +
                C1013 + C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
                C32954 * C256) *
                   C32913 +
               (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 +
                C1016 + C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
                C32954 * C257) *
                   C813 +
               (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
                C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
                C32954 * C258) *
                   C812) *
                  C32680 * C32639 * C231 +
              ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 +
                C1022 + C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
                C32922 * C1008) *
                   C812 +
               (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 +
                C1025 + C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
                C32922 * C1009) *
                   C813 +
               (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 +
                C1028 + C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
                C32922 * C1010) *
                   C32913) *
                  C32680 * C32639 * C232) *
             C32613 +
         0.5 * std::pow(Pi, 2.5) *
             (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
                C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
                C32922 * C259) *
                   C812 +
               (C873 + C874 + C875) * C813 + C883 * C32913) *
                  C32680 * C336 -
              ((C819 * C1139 + C1167 + C1167 + C32922 * C1157 + C817 * C681 +
                C1168 + C1168 + C32942 * C691 + C815 * C341 + C1169 + C1169 +
                C32954 * C361) *
                   C32913 +
               (C819 * C1140 + C1170 + C1170 + C32922 * C1158 + C817 * C680 +
                C1171 + C1171 + C32942 * C690 + C815 * C342 + C1172 + C1172 +
                C32954 * C362) *
                   C813 +
               (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
                C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
                C32954 * C363) *
                   C812) *
                  C32680 * C337 +
              ((C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 +
                C1177 + C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
                C32922 * C1161) *
                   C812 +
               (C815 * C345 + C1179 + C1179 + C32954 * C365 + C817 * C1144 +
                C1180 + C1180 + C32942 * C1162 + C819 * C1145 + C1181 + C1181 +
                C32922 * C1163) *
                   C813 +
               (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 +
                C1183 + C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
                C32922 * C1165) *
                   C32913) *
                  C32680 * C338) *
             C32625 * C32613 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 +
                C164 * C813 + C165 * C32913) *
                   C32955 +
               ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 +
                C597 * C813 + C596 * C32913) *
                   C32944 +
               ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 +
                C1838 * C813 + C1839 * C32913) *
                   C32925) *
                  C32639 * C32625 * C110 -
              ((C1840 * C32913 + C1839 * C813 + C1838 * C812) * C32925 +
               (C595 * C32913 + C596 * C813 + C597 * C812) * C32944 +
               (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
                  C32639 * C32625 * C111 +
              ((C165 * C812 + C166 * C813 + C167 * C32913) * C32955 +
               (C596 * C812 + C595 * C813 + C594 * C32913) * C32944 +
               (C1839 * C812 + C1840 * C813 +
                (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
                   C32925) *
                  C32639 * C32625 * C112) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 +
                C164 * C813 + C165 * C32913) *
                   C32955 +
               ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 +
                C597 * C813 + C596 * C32913) *
                   C32944 +
               ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 +
                C1838 * C813 + C1839 * C32913) *
                   C32925) *
                  C32639 * C230 -
              (((C113 * C1146 + C1951 + C1951 + C32662 * C1164) * C32913 +
                (C113 * C1144 + C1952 + C1952 + C32662 * C1162) * C813 +
                (C113 * C1142 + C1953 + C1953 + C32662 * C1160) * C812) *
                   C32925 +
               ((C113 * C681 + C697 + C697 + C32662 * C691) * C32913 +
                (C113 * C680 + C696 + C696 + C32662 * C690) * C813 +
                (C113 * C679 + C695 + C695 + C32662 * C689) * C812) *
                   C32944 +
               (C488 * C32913 + C489 * C813 +
                (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
                   C32955) *
                  C32639 * C231 +
              (((C113 * C239 + C270 + C270 + C32662 * C259) * C812 +
                (C113 * C240 + C271 + C271 + C32662 * C260) * C813 +
                (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
                   C32955 +
               ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C812 +
                (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C813 +
                (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
                   C32944 +
               ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C812 +
                (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C813 +
                (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
                   C32925) *
                  C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
              C336 -
          ((C2125 + C2126 + C2127) * C32925 + (C2095 + C2094 + C2124) * C32944 +
           (C2091 + C2090 + C2123) * C32955) *
              C337 +
          (C2129 * C32955 + (C2127 + C2126 + C2125) * C32944 +
           ((C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C812 +
            (C113 * C2073 + C2106 + C2106 + C32662 * C2085) * C813 +
            (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32913) *
               C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C336 -
          ((C5421 * C1139 + C5724 + C5724 + C32922 * C1157 + C5419 * C681 +
            C5725 + C5725 + C5412 * C691 + C5417 * C341 + C5726 + C5726 +
            C5411 * C361) *
               C32913 +
           (C5421 * C1140 + C5727 + C5727 + C32922 * C1158 + C5419 * C680 +
            C5728 + C5728 + C5412 * C690 + C5417 * C342 + C5729 + C5729 +
            C5411 * C362) *
               C32938 +
           (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
            C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
            C5411 * C363) *
               C32951) *
              C32680 * C337 +
          ((C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32951 +
           (C5417 * C345 + C5736 + C5736 + C5411 * C365 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5421 * C1145 + C5738 + C5738 +
            C32922 * C1163) *
               C32938 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32913) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C336 -
          (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
           C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
           C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
           C6322 * C343 + C6501 + C6501 + C6316 * C363) *
              C32578 * C32680 * C337 +
          (C6322 * C344 + C6502 + C6502 + C6316 * C364 + C6324 * C1142 + C6503 +
           C6503 + C6317 * C1160 + C6326 * C1143 + C6504 + C6504 +
           C6318 * C1161 + C6328 * C6488 + C6505 + C6505 + C6319 * C6494 +
           C6330 * C6489 + C6506 + C6506 + C6320 * C6495) *
              C32578 * C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C5421 * C1145 + C5738 + C5738 + C32922 * C1163 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5417 * C345 + C5736 + C5736 +
            C5411 * C365) *
               C32578 * C32925 +
           (C6097 + C6098 + C6099) * C32578 * C32944 +
           (C5477 + C5476 + C5475) * C32578 * C32955) *
              C32639 * C32625 * C111 +
          (C5485 * C32578 * C32955 + (C6096 + C6095 + C6094) * C32578 * C32944 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C5421 * C6488 + C6997 + C6997 + C32922 * C6494 + C5419 * C1143 +
            C6998 + C6998 + C5412 * C1161 + C5417 * C1142 + C6999 + C6999 +
            C5411 * C1160) *
               C32578 * C32925 +
           (C5421 * C1694 + C6248 + C6248 + C32922 * C1700 + C5419 * C1141 +
            C6247 + C6247 + C5412 * C1159 + C5417 * C679 + C6246 + C6246 +
            C5411 * C689) *
               C32578 * C32944 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32578 * C32955) *
              C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32578 * C32955 +
           (C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
            C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
            C32922 * C6493) *
               C32578 * C32944 +
           (C5417 * C1143 + C7003 + C7003 + C5411 * C1161 + C5419 * C6488 +
            C7004 + C7004 + C5412 * C6494 + C5421 * C6489 + C7005 + C7005 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
              C336 -
          ((C7173 + C7174 + C7175) * C32578 * C32925 +
           (C7172 + C7171 + C7170) * C32578 * C32944 +
           (C7169 + C7168 + C7167) * C32578 * C32955) *
              C337 +
          (C7178 * C32955 + (C7175 + C7174 + C7173) * C32578 * C32944 +
           (C5417 * C2072 + C7146 + C7146 + C5411 * C2084 + C5419 * C7116 +
            C7147 + C7147 + C5412 * C7122 + C5421 * C7117 + C7148 + C7148 +
            C32922 * C7123) *
               C32578 * C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C32625 * C110 -
          ((C1840 * C32913 + C1839 * C32938 + C1838 * C32951) * C32925 +
           (C595 * C32913 + C596 * C32938 + C597 * C32951) * C10430 +
           (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
              C32639 * C32625 * C111 +
          ((C165 * C32951 + C166 * C32938 + C167 * C32913) * C10429 +
           (C596 * C32951 + C595 * C32938 + C594 * C32913) * C10430 +
           (C1839 * C32951 + C1840 * C32938 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C230 -
          ((C2296 * C32913 + C2297 * C32938 + C2627 * C32951) * C32925 +
           (C2298 * C32913 + C2299 * C32938 + C2626 * C32951) * C10430 +
           (C488 * C32913 + C489 * C32938 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
               C10429) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32951 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32938 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
               C10429 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32951 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32938 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
               C10430 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32951 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32938 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
              C336 -
          ((C10659 + C10660 + C10661) * C32925 +
           (C10658 + C10657 + C10656) * C10430 +
           (C10655 + C10654 + C10653) * C10429) *
              C337 +
          (C10663 * C10429 + (C10661 + C10660 + C10659) * C10430 +
           ((C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C32951 +
            (C113 * C2073 + C2106 + C2106 + C32662 * C2085) * C32938 +
            (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32913) *
               C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C819 * C1145 + C1181 + C1181 + C32922 * C1163 + C817 * C1144 +
            C1180 + C1180 + C32942 * C1162 + C815 * C345 + C1179 + C1179 +
            C32954 * C365) *
               C32578 * C32925 +
           (C1546 + C1547 + C1548) * C32578 * C10430 +
           (C875 + C874 + C873) * C32578 * C10429) *
              C32639 * C32625 * C111 +
          (C883 * C32578 * C10429 + (C1545 + C1544 + C1543) * C32578 * C10430 +
           (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 + C1183 +
            C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C819 * C6488 + C11334 + C11334 + C32922 * C6494 + C817 * C1143 +
            C11335 + C11335 + C32942 * C1161 + C815 * C1142 + C11336 + C11336 +
            C32954 * C1160) *
               C32578 * C32925 +
           (C819 * C1694 + C1706 + C1706 + C32922 * C1700 + C817 * C1141 +
            C1705 + C1705 + C32942 * C1159 + C815 * C679 + C1704 + C1704 +
            C32954 * C689) *
               C32578 * C10430 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C32578 * C10429) *
              C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C32578 * C10429 +
           (C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
            C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
            C32922 * C6493) *
               C32578 * C10430 +
           (C815 * C1143 + C11340 + C11340 + C32954 * C1161 + C817 * C6488 +
            C11341 + C11341 + C32942 * C6494 + C819 * C6489 + C11342 + C11342 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
              C336 -
          ((C11501 + C11502 + C11503) * C32578 * C32925 +
           (C11500 + C11499 + C11498) * C32578 * C10430 +
           (C11497 + C11496 + C11495) * C32578 * C10429) *
              C337 +
          (C11506 * C10429 + (C11503 + C11502 + C11501) * C32578 * C10430 +
           (C815 * C2072 + C11474 + C11474 + C32954 * C2084 + C817 * C7116 +
            C11475 + C11475 + C32942 * C7122 + C819 * C7117 + C11476 + C11476 +
            C32922 * C7123) *
               C32578 * C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
           C2118 * C32578 * C12061 + C2119 * C32578 * C12062 +
           C2122 * C32578 * C12063 +
           (C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C32578 * C12064) *
              C32639 * C32625 * C110 -
          ((C113 * C2073 + C2106 + C2106 + C32662 * C2085) * C32578 * C12064 +
           C2121 * C32578 * C12063 + C1838 * C32578 * C12062 +
           C597 * C32578 * C12061 + C164 * C32578 * C12060) *
              C32639 * C32625 * C111 +
          (C165 * C32578 * C12060 + C596 * C32578 * C12061 +
           C1839 * C32578 * C12062 + C2120 * C32578 * C12063 +
           (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32578 * C12064) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
           C2118 * C32578 * C12061 + C2119 * C32578 * C12062 +
           C2122 * C32578 * C12063 +
           (C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C32578 * C12064) *
              C32639 * C230 -
          ((C113 * C7116 + C12128 + C12128 + C32662 * C7122) * C32578 * C12064 +
           (C113 * C2601 + C2619 + C2619 + C32662 * C2607) * C32578 * C12063 +
           C2627 * C32578 * C12062 + C2626 * C32578 * C12061 +
           (C113 * C238 + C269 + C269 + C32662 * C258) * C32578 * C12060) *
              C32639 * C231 +
          ((C113 * C239 + C270 + C270 + C32662 * C259) * C32578 * C12060 +
           (C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32578 * C12061 +
           (C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32578 * C12062 +
           (C113 * C7115 + C12129 + C12129 + C32662 * C7121) * C32578 * C12063 +
           (C113 * C7117 + C12130 + C12130 + C32662 * C7123) * C32578 *
               C12064) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
           C12199 * C12061 + C12200 * C12062 + C12201 * C12063 +
           C12214 * C12064) *
              C336 -
          (C12215 * C12064 + C12214 * C12063 + C12201 * C12062 +
           C12200 * C12061 + C12199 * C12060) *
              C337 +
          (C12200 * C12060 + C12201 * C12061 + C12214 * C12062 +
           C12215 * C12063 +
           (C113 * C12193 + C12207 + C12207 + C32662 * C12197) * C32578 *
               C12064) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
                C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                   C32680 * C571 -
               (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
                (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
                   C32680 * C572) *
                  C32625 * C463 +
              ((C597 * C102 + C596 * C103 + C595 * C104 + C594 * C105 +
                (C113 * C573 + C585 + C585 + C32662 * C575) * C106) *
                   C32680 * C572 -
               (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
                C164 * C102) *
                   C32680 * C571) *
                  C32625 * C464) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 +
                 C823 + C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
                 C32922 * C259) *
                    C812 +
                (C873 + C874 + C875) * C813 + C883 * C32913) *
                   C32680 * C571 -
               ((C1543 + C1544 + C1545) * C32913 +
                (C1546 + C1547 + C1548) * C813 +
                (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
                 C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
                 C32954 * C363) *
                    C812) *
                   C32680 * C572) *
                  C32625 * C463 +
              (((C1548 + C1547 + C1546) * C812 +
                (C1545 + C1544 + C1543) * C813 +
                (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 +
                 C1529 + C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
                 C32922 * C1514) *
                    C32913) *
                   C32680 * C572 -
               ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
                (C875 + C874 + C873) * C812) *
                   C32680 * C571) *
                  C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
             C165 * C32913) *
                C32955 +
            (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
               C571 -
           ((C2125 + C2126 + C2127) * C32925 +
            (C2095 + C2094 + C2124) * C32944 +
            (C2091 + C2090 + C2123) * C32955) *
               C572) *
              C32625 * C463 +
          (((C2449 + C2450 + C2451) * C32955 +
            (C2452 + C2453 + C2454) * C32944 +
            (C2121 * C812 + C2120 * C813 +
             (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32913) *
                C32925) *
               C572 -
           ((C2454 + C2453 + C2452) * C32925 +
            (C2451 + C2450 + C2449) * C32944 +
            (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C32625 * C463 +
          (((C6099 + C6098 + C6097) * C32951 +
            (C6096 + C6095 + C6094) * C32938 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32913) *
               C32680 * C572 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C32625 * C463 +
          ((C6322 * C342 + C6682 + C6682 + C6316 * C362 + C6324 * C680 + C6683 +
            C6683 + C6317 * C690 + C6326 * C1140 + C6684 + C6684 +
            C6318 * C1158 + C6328 * C1695 + C6685 + C6685 + C6319 * C1701 +
            C6330 * C6678 + C6686 + C6686 + C6320 * C6680) *
               C32578 * C32680 * C572 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32578 * C32955 +
            (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
               C571 -
           ((C7173 + C7174 + C7175) * C32578 * C32925 +
            (C7172 + C7171 + C7170) * C32578 * C32944 +
            (C7169 + C7168 + C7167) * C32578 * C32955) *
               C572) *
              C32625 * C463 +
          (((C6099 + C6098 + C6097) * C32578 * C32955 +
            (C7495 + C7496 + C7497) * C32578 * C32944 +
            (C5417 * C2070 + C7486 + C7486 + C5411 * C2082 + C5419 * C2602 +
             C7487 + C7487 + C5412 * C2608 + C5421 * C7476 + C7488 + C7488 +
             C32922 * C7478) *
                C32578 * C32925) *
               C572 -
           ((C7497 + C7496 + C7495) * C32578 * C32925 +
            (C6097 + C6098 + C6099) * C32578 * C32944 +
            (C5477 + C5476 + C5475) * C32578 * C32955) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
             C164 * C32938 + C165 * C32913) *
                C10429 +
            (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
               C571 -
           ((C10659 + C10660 + C10661) * C32925 +
            (C10658 + C10657 + C10656) * C10430 +
            (C10655 + C10654 + C10653) * C10429) *
               C572) *
              C32625 * C463 +
          (((C10956 + C10957 + C10958) * C10429 +
            (C10959 + C10960 + C10961) * C10430 +
            (C2121 * C32951 + C2120 * C32938 +
             (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32913) *
                C32925) *
               C572 -
           ((C10961 + C10960 + C10959) * C32925 +
            (C10958 + C10957 + C10956) * C10430 +
            (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C32578 * C10429 +
            (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
               C571 -
           ((C11501 + C11502 + C11503) * C32578 * C32925 +
            (C11500 + C11499 + C11498) * C32578 * C10430 +
            (C11497 + C11496 + C11495) * C32578 * C10429) *
               C572) *
              C32625 * C463 +
          (((C1548 + C1547 + C1546) * C32578 * C10429 +
            (C11817 + C11818 + C11819) * C32578 * C10430 +
            (C815 * C2070 + C11808 + C11808 + C32954 * C2082 + C817 * C2602 +
             C11809 + C11809 + C32942 * C2608 + C819 * C7476 + C11810 + C11810 +
             C32922 * C7478) *
                C32578 * C32925) *
               C572 -
           ((C11819 + C11818 + C11817) * C32578 * C32925 +
            (C1546 + C1547 + C1548) * C32578 * C10430 +
            (C875 + C874 + C873) * C32578 * C10429) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
            C12199 * C12061 + C12200 * C12062 + C12201 * C12063 +
            C12214 * C12064) *
               C571 -
           (C12215 * C12064 + C12214 * C12063 + C12201 * C12062 +
            C12200 * C12061 + C12199 * C12060) *
               C572) *
              C32625 * C463 +
          ((C12387 * C12060 + C12388 * C12061 + C12389 * C12062 +
            C12396 * C12063 +
            (C113 * C12383 + C12392 + C12392 + C32662 * C12385) * C32578 *
                C12064) *
               C572 -
           (C12396 * C12064 + C12389 * C12063 + C12388 * C12062 +
            C12387 * C12061 + C164 * C32578 * C12060) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C32625 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C32680 * C32639 * C32625 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C230 -
          ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
           (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
           (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
           (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
           (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
              C32680 * C32639 * C231 +
          ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
           (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
           (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
           (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
           (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
           (C875 + C874 + C873) * C812) *
              C32680 * C32639 * C32625 * C111 +
          (C883 * C812 + (C881 + C880 + C879) * C813 +
           (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
            C853 + C32942 * C254 + C819 * C243 + C854 + C854 + C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C230 -
          ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 + C1013 +
            C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
            C32954 * C256) *
               C32913 +
           (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 + C1016 +
            C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
            C32954 * C257) *
               C813 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C812) *
              C32680 * C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C812 +
           (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
            C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
            C32922 * C1009) *
               C813 +
           (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 + C1028 +
            C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 + C597 * C813 +
            C596 * C32913) *
               C32944 +
           ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 + C1838 * C813 +
            C1839 * C32913) *
               C32925) *
              C32639 * C32625 * C110 -
          ((C1840 * C32913 + C1839 * C813 + C1838 * C812) * C32925 +
           (C595 * C32913 + C596 * C813 + C597 * C812) * C32944 +
           (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
              C32639 * C32625 * C111 +
          ((C165 * C812 + C166 * C813 + C167 * C32913) * C32955 +
           (C596 * C812 + C595 * C813 + C594 * C32913) * C32944 +
           (C1839 * C812 + C1840 * C813 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 + C597 * C813 +
            C596 * C32913) *
               C32944 +
           ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 + C1838 * C813 +
            C1839 * C32913) *
               C32925) *
              C32639 * C230 -
          (((C113 * C1146 + C1951 + C1951 + C32662 * C1164) * C32913 +
            (C113 * C1144 + C1952 + C1952 + C32662 * C1162) * C813 +
            (C113 * C1142 + C1953 + C1953 + C32662 * C1160) * C812) *
               C32925 +
           ((C113 * C681 + C697 + C697 + C32662 * C691) * C32913 +
            (C113 * C680 + C696 + C696 + C32662 * C690) * C813 +
            (C113 * C679 + C695 + C695 + C32662 * C689) * C812) *
               C32944 +
           (C488 * C32913 + C489 * C813 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
               C32955) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C812 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C813 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
               C32955 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C812 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C813 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
               C32944 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C812 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C813 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C5421 * C1145 + C5738 + C5738 + C32922 * C1163 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5417 * C345 + C5736 + C5736 +
            C5411 * C365) *
               C32578 * C32925 +
           (C6097 + C6098 + C6099) * C32578 * C32944 +
           (C5477 + C5476 + C5475) * C32578 * C32955) *
              C32639 * C32625 * C111 +
          (C5485 * C32578 * C32955 + (C6096 + C6095 + C6094) * C32578 * C32944 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C5421 * C6488 + C6997 + C6997 + C32922 * C6494 + C5419 * C1143 +
            C6998 + C6998 + C5412 * C1161 + C5417 * C1142 + C6999 + C6999 +
            C5411 * C1160) *
               C32578 * C32925 +
           (C5421 * C1694 + C6248 + C6248 + C32922 * C1700 + C5419 * C1141 +
            C6247 + C6247 + C5412 * C1159 + C5417 * C679 + C6246 + C6246 +
            C5411 * C689) *
               C32578 * C32944 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32578 * C32955) *
              C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32578 * C32955 +
           (C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
            C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
            C32922 * C6493) *
               C32578 * C32944 +
           (C5417 * C1143 + C7003 + C7003 + C5411 * C1161 + C5419 * C6488 +
            C7004 + C7004 + C5412 * C6494 + C5421 * C6489 + C7005 + C7005 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C32625 * C110 -
          ((C1840 * C32913 + C1839 * C32938 + C1838 * C32951) * C32925 +
           (C595 * C32913 + C596 * C32938 + C597 * C32951) * C10430 +
           (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
              C32639 * C32625 * C111 +
          ((C165 * C32951 + C166 * C32938 + C167 * C32913) * C10429 +
           (C596 * C32951 + C595 * C32938 + C594 * C32913) * C10430 +
           (C1839 * C32951 + C1840 * C32938 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C230 -
          ((C2296 * C32913 + C2297 * C32938 + C2627 * C32951) * C32925 +
           (C2298 * C32913 + C2299 * C32938 + C2626 * C32951) * C10430 +
           (C488 * C32913 + C489 * C32938 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
               C10429) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32951 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32938 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
               C10429 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32951 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32938 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
               C10430 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32951 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32938 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C819 * C1145 + C1181 + C1181 + C32922 * C1163 + C817 * C1144 +
            C1180 + C1180 + C32942 * C1162 + C815 * C345 + C1179 + C1179 +
            C32954 * C365) *
               C32578 * C32925 +
           (C1546 + C1547 + C1548) * C32578 * C10430 +
           (C875 + C874 + C873) * C32578 * C10429) *
              C32639 * C32625 * C111 +
          (C883 * C32578 * C10429 + (C1545 + C1544 + C1543) * C32578 * C10430 +
           (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 + C1183 +
            C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C819 * C6488 + C11334 + C11334 + C32922 * C6494 + C817 * C1143 +
            C11335 + C11335 + C32942 * C1161 + C815 * C1142 + C11336 + C11336 +
            C32954 * C1160) *
               C32578 * C32925 +
           (C819 * C1694 + C1706 + C1706 + C32922 * C1700 + C817 * C1141 +
            C1705 + C1705 + C32942 * C1159 + C815 * C679 + C1704 + C1704 +
            C32954 * C689) *
               C32578 * C10430 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C32578 * C10429) *
              C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C32578 * C10429 +
           (C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
            C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
            C32922 * C6493) *
               C32578 * C10430 +
           (C815 * C1143 + C11340 + C11340 + C32954 * C1161 + C817 * C6488 +
            C11341 + C11341 + C32942 * C6494 + C819 * C6489 + C11342 + C11342 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
           C2118 * C32578 * C12061 + C2119 * C32578 * C12062 +
           C2122 * C32578 * C12063 +
           (C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C32578 * C12064) *
              C32639 * C32625 * C110 -
          ((C113 * C2073 + C2106 + C2106 + C32662 * C2085) * C32578 * C12064 +
           C2121 * C32578 * C12063 + C1838 * C32578 * C12062 +
           C597 * C32578 * C12061 + C164 * C32578 * C12060) *
              C32639 * C32625 * C111 +
          (C165 * C32578 * C12060 + C596 * C32578 * C12061 +
           C1839 * C32578 * C12062 + C2120 * C32578 * C12063 +
           (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32578 * C12064) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C32578 * C12060 +
           C2118 * C32578 * C12061 + C2119 * C32578 * C12062 +
           C2122 * C32578 * C12063 +
           (C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C32578 * C12064) *
              C32639 * C230 -
          ((C113 * C7116 + C12128 + C12128 + C32662 * C7122) * C32578 * C12064 +
           (C113 * C2601 + C2619 + C2619 + C32662 * C2607) * C32578 * C12063 +
           C2627 * C32578 * C12062 + C2626 * C32578 * C12061 +
           (C113 * C238 + C269 + C269 + C32662 * C258) * C32578 * C12060) *
              C32639 * C231 +
          ((C113 * C239 + C270 + C270 + C32662 * C259) * C32578 * C12060 +
           (C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32578 * C12061 +
           (C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32578 * C12062 +
           (C113 * C7115 + C12129 + C12129 + C32662 * C7121) * C32578 * C12063 +
           (C113 * C7117 + C12130 + C12130 + C32662 * C7123) * C32578 *
               C12064) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
              C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
              C32922 * C259) *
                 C32872 +
             (C5475 + C5476 + C5477) * C32588) *
                C32892 +
            ((C7167 + C7168 + C7169) * C32872 +
             (C6099 + C6098 + C6097) * C32588) *
                C32767) *
               C32639 * C461 -
           (((C9169 + C9170 + C9171) * C32588 +
             (C7676 + C7675 + C7674) * C32872) *
                C32767 +
            ((C5918 + C5919 + C5920) * C32588 +
             (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
              C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
              C5411 * C258) *
                 C32872) *
                C32892) *
               C32639 * C462) *
              C463 +
          ((((C5920 + C5919 + C5918) * C32872 +
             (C5917 + C5916 + C5915) * C32588) *
                C32892 +
            ((C9171 + C9170 + C9169) * C32872 +
             (C5417 * C681 + C6252 + C6252 + C5411 * C691 + C5419 * C1139 +
              C6253 + C6253 + C5412 * C1157 + C5421 * C1696 + C6254 + C6254 +
              C32922 * C1702) *
                 C32588) *
                C32767) *
               C32639 * C462 -
           (((C6094 + C6095 + C6096) * C32588 +
             (C6097 + C6098 + C6099) * C32872) *
                C32767 +
            ((C5480 + C5479 + C5478) * C32588 +
             (C5477 + C5476 + C5475) * C32872) *
                C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
             C164 * C2730 + C165 * C2731 + C166 * C32891) *
                C32892 +
            (C3779 + C3780 + C3781 + C3782) * C32767) *
               C32639 * C461 -
           ((C3921 * C32891 + C2298 * C2731 + C2299 * C2730 + C2626 * C2729) *
                C32767 +
            (C487 * C32891 + C488 * C2731 + C489 * C2730 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
                C32892) *
               C32639 * C462) *
              C463 +
          (((C489 * C2729 + C488 * C2730 + C487 * C2731 + C486 * C32891) *
                C32892 +
            (C2299 * C2729 + C2298 * C2730 + C3921 * C2731 +
             (C113 * C683 + C699 + C699 + C32662 * C693) * C32891) *
                C32767) *
               C32639 * C462 -
           ((C594 * C32891 + C595 * C2731 + C596 * C2730 + C597 * C2729) *
                C32767 +
            (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
                C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
             C164 * C32588) *
                C13672 +
            (C13874 + C13875) * C13673 + C13882 * C13674 + C13883 * C32906) *
               C32639 * C461 -
           ((C14018 * C32588 + C12493 * C32872) * C32906 +
            (C2297 * C32588 + C2627 * C32872) * C13674 +
            (C2299 * C32588 + C2626 * C32872) * C13673 +
            (C489 * C32588 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32872) *
                C13672) *
               C32639 * C462) *
              C463 +
          (((C489 * C32872 + C488 * C32588) * C13672 +
            (C2299 * C32872 + C2298 * C32588) * C13673 +
            (C2297 * C32872 + C2296 * C32588) * C13674 +
            (C14018 * C32872 +
             (C113 * C2603 + C2621 + C2621 + C32662 * C2609) * C32588) *
                C32906) *
               C32639 * C462 -
           ((C2120 * C32588 + C2121 * C32872) * C32906 +
            (C1839 * C32588 + C1838 * C32872) * C13674 +
            (C596 * C32588 + C597 * C32872) * C13673 +
            (C165 * C32588 + C164 * C32872) * C13672) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
              C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
              C32922 * C259) *
                 C32872 +
             (C5475 + C5476 + C5477) * C32588) *
                C32892 +
            ((C7167 + C7168 + C7169) * C32872 + C9368 * C32588) * C32767) *
               C571 -
           (((C7497 + C7496 + C7495) * C32588 +
             (C7172 + C7171 + C7170) * C32872) *
                C32767 +
            (C9369 * C32588 + (C7169 + C7168 + C7167) * C32872) * C32892) *
               C572) *
              C461 +
          ((((C7674 + C7675 + C7676) * C32872 +
             (C9171 + C9170 + C9169) * C32588) *
                C32892 +
            ((C7677 + C7678 + C7679) * C32872 +
             (C5417 * C1144 + C7328 + C7328 + C5411 * C1162 + C5419 * C1145 +
              C7329 + C7329 + C5412 * C1163 + C5421 * C7324 + C7330 + C7330 +
              C32922 * C7326) *
                 C32588) *
                C32767) *
               C572 -
           (((C9169 + C9170 + C9171) * C32588 +
             (C7676 + C7675 + C7674) * C32872) *
                C32767 +
            ((C5918 + C5919 + C5920) * C32588 +
             (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
              C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
              C5411 * C258) *
                 C32872) *
                C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
             C164 * C2730 + C165 * C2731 + C166 * C32891) *
                C32892 +
            (C3779 + C3780 + C3781 + C3782) * C32767) *
               C571 -
           ((C3783 + C3784 + C3785 + C3786) * C32767 +
            (C3782 + C3781 + C3780 + C3779) * C32892) *
               C572) *
              C461 +
          (((C4186 + C4187 + C4188 + C4189) * C32892 +
            (C2627 * C2729 + C2297 * C2730 + C2296 * C2731 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32891) *
                C32767) *
               C572 -
           ((C4189 + C4188 + C4187 + C4186) * C32767 +
            (C487 * C32891 + C488 * C2731 + C489 * C2730 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
                C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
             C164 * C32588) *
                C13672 +
            (C13874 + C13875) * C13673 + C13882 * C13674 + C13883 * C32906) *
               C571 -
           ((C13880 + C13881) * C32906 + (C13879 + C13878) * C13674 +
            (C13877 + C13876) * C13673 + (C13875 + C13874) * C13672) *
               C572) *
              C461 +
          (((C14285 + C14286) * C13672 + (C14287 + C14288) * C13673 +
            (C14289 + C14290) * C13674 +
            (C12494 * C32872 +
             (C113 * C12297 + C12301 + C12301 + C32662 * C12299) * C32588) *
                C32906) *
               C572 -
           ((C14290 + C14289) * C32906 + (C14288 + C14287) * C13674 +
            (C14286 + C14285) * C13673 +
            (C489 * C32588 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32872) *
                C13672) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
                C164 * C2730 + C165 * C2731 + C166 * C32891) *
                   C32892 +
               (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
                   C32767) *
                  C32639 * C32625 * C110 -
              ((C594 * C32891 + C595 * C2731 + C596 * C2730 + C597 * C2729) *
                   C32767 +
               (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
                   C32892) *
                  C32639 * C32625 * C111 +
              ((C165 * C2729 + C166 * C2730 + C167 * C2731 + C168 * C32891) *
                   C32892 +
               (C596 * C2729 + C595 * C2730 + C594 * C2731 +
                (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
                   C32767) *
                  C32639 * C32625 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
                C164 * C2730 + C165 * C2731 + C166 * C32891) *
                   C32892 +
               (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
                   C32767) *
                  C32639 * C230 -
              (((C113 * C682 + C698 + C698 + C32662 * C692) * C32891 +
                C2298 * C2731 + C2299 * C2730 + C2626 * C2729) *
                   C32767 +
               (C487 * C32891 + C488 * C2731 + C489 * C2730 +
                (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
                   C32892) *
                  C32639 * C231 +
              (((C113 * C239 + C270 + C270 + C32662 * C259) * C2729 +
                (C113 * C240 + C271 + C271 + C32662 * C260) * C2730 +
                (C113 * C241 + C272 + C272 + C32662 * C261) * C2731 +
                (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
                   C32892 +
               ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C2729 +
                (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C2730 +
                (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C2731 +
                (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
                   C32767) *
                  C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C3779 + C3780 + C3781 + C3782) * C32767) *
              C336 -
          ((C3783 + C3784 + C3785 + C3786) * C32767 +
           (C3782 + C3781 + C3780 + C3779) * C32892) *
              C337 +
          ((C3786 + C3785 + C3784 + C3783) * C32892 +
           (C2122 * C2729 + C2121 * C2730 + C2120 * C2731 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32891) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C6094 + C6095 + C6096) * C32588 +
            (C6097 + C6098 + C6099) * C32872) *
               C32767 +
           ((C5480 + C5479 + C5478) * C32588 +
            (C5477 + C5476 + C5475) * C32872) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C5485 * C32872 + (C5483 + C5482 + C5481) * C32588) * C32892 +
           ((C6096 + C6095 + C6094) * C32872 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C5421 * C1695 + C6251 + C6251 + C32922 * C1701 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5417 * C680 + C6249 + C6249 +
             C5411 * C690) *
                C32588 +
            (C7676 + C7675 + C7674) * C32872) *
               C32767 +
           ((C5918 + C5919 + C5920) * C32588 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32872) *
               C32892) *
              C32639 * C231 +
          (((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 +
             C5606 + C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
             C32922 * C1008) *
                C32872 +
            (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 +
             C5609 + C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
             C32922 * C1009) *
                C32588) *
               C32892 +
           ((C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
             C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
             C32922 * C6493) *
                C32872 +
            (C5417 * C1140 + C8814 + C8814 + C5411 * C1158 + C5419 * C1695 +
             C8815 + C8815 + C5412 * C1701 + C5421 * C6678 + C8816 + C8816 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C336 -
          (((C7497 + C7496 + C7495) * C32588 +
            (C7172 + C7171 + C7170) * C32872) *
               C32767 +
           ((C6097 + C6098 + C6099) * C32588 +
            (C7169 + C7168 + C7167) * C32872) *
               C32892) *
              C337 +
          ((C7177 * C32872 + (C7495 + C7496 + C7497) * C32588) * C32892 +
           ((C7175 + C7174 + C7173) * C32872 +
            (C5417 * C2070 + C7486 + C7486 + C5411 * C2082 + C5419 * C2602 +
             C7487 + C7487 + C5412 * C2608 + C5421 * C7476 + C7488 + C7488 +
             C32922 * C7478) *
                C32588) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
            C164 * C32588) *
               C13672 +
           (C2118 * C32872 + C597 * C32588) * C13673 +
           (C2119 * C32872 + C1838 * C32588) * C13674 +
           (C2122 * C32872 + C2121 * C32588) * C32906) *
              C32639 * C32625 * C110 -
          ((C2120 * C32588 + C2121 * C32872) * C32906 +
           (C1839 * C32588 + C1838 * C32872) * C13674 +
           (C596 * C32588 + C597 * C32872) * C13673 +
           (C165 * C32588 + C164 * C32872) * C13672) *
              C32639 * C32625 * C111 +
          ((C165 * C32872 + C166 * C32588) * C13672 +
           (C596 * C32872 + C595 * C32588) * C13673 +
           (C1839 * C32872 + C1840 * C32588) * C13674 +
           (C2120 * C32872 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32588) *
               C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
            C164 * C32588) *
               C13672 +
           (C2118 * C32872 + C597 * C32588) * C13673 +
           (C2119 * C32872 + C1838 * C32588) * C13674 +
           (C2122 * C32872 + C2121 * C32588) * C32906) *
              C32639 * C230 -
          (((C113 * C2602 + C2620 + C2620 + C32662 * C2608) * C32588 +
            C12493 * C32872) *
               C32906 +
           (C2297 * C32588 + C2627 * C32872) * C13674 +
           (C2299 * C32588 + C2626 * C32872) * C13673 +
           (C489 * C32588 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32872) *
               C13672) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32872 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32588) *
               C13672 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32872 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32588) *
               C13673 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32872 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32588) *
               C13674 +
           ((C113 * C7115 + C12129 + C12129 + C32662 * C7121) * C32872 +
            (C113 * C7476 + C13775 + C13775 + C32662 * C7478) * C32588) *
               C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
            C164 * C32588) *
               C13672 +
           (C13874 + C13875) * C13673 + C13882 * C13674 + C13883 * C32906) *
              C336 -
          ((C13880 + C13881) * C32906 + (C13879 + C13878) * C13674 +
           (C13877 + C13876) * C13673 + (C13875 + C13874) * C13672) *
              C337 +
          (C13882 * C13672 + C13883 * C13673 + (C13881 + C13880) * C13674 +
           (C12213 * C32872 +
            (C113 * C12383 + C12392 + C12392 + C32662 * C12385) * C32588) *
               C32906) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
              C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
              C32922 * C259) *
                 C32872 +
             (C5475 + C5476 + C5477) * C32588) *
                C32892 +
            ((C7167 + C7168 + C7169) * C32872 + C9368 * C32588) * C32767) *
               C571 -
           (((C7497 + C7496 + C7495) * C32588 +
             (C7172 + C7171 + C7170) * C32872) *
                C32767 +
            (C9369 * C32588 + (C7169 + C7168 + C7167) * C32872) * C32892) *
               C572) *
              C32625 * C463 +
          (((C9368 * C32872 + (C6096 + C6095 + C6094) * C32588) * C32892 +
            ((C7495 + C7496 + C7497) * C32872 +
             (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
              C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
              C32922 * C1165) *
                 C32588) *
                C32767) *
               C572 -
           (((C6094 + C6095 + C6096) * C32588 + C9369 * C32872) * C32767 +
            ((C5480 + C5479 + C5478) * C32588 +
             (C5477 + C5476 + C5475) * C32872) *
                C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
             C164 * C2730 + C165 * C2731 + C166 * C32891) *
                C32892 +
            (C3779 + C3780 + C3781 + C3782) * C32767) *
               C571 -
           ((C3783 + C3784 + C3785 + C3786) * C32767 +
            (C3782 + C3781 + C3780 + C3779) * C32892) *
               C572) *
              C32625 * C463 +
          (((C4052 + C4053 + C4054 + C4055) * C32892 +
            (C1838 * C2729 + C1839 * C2730 + C1840 * C2731 +
             (C113 * C348 + C379 + C379 + C32662 * C368) * C32891) *
                C32767) *
               C572 -
           ((C4055 + C4054 + C4053 + C4052) * C32767 +
            (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
                C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
             C164 * C32588) *
                C13672 +
            (C13874 + C13875) * C13673 + C13882 * C13674 + C13883 * C32906) *
               C571 -
           ((C13880 + C13881) * C32906 + (C13879 + C13878) * C13674 +
            (C13877 + C13876) * C13673 + (C13875 + C13874) * C13672) *
               C572) *
              C32625 * C463 +
          (((C14149 + C14150) * C13672 + (C14151 + C14152) * C13673 +
            (C14153 + C14154) * C13674 +
            (C12395 * C32872 +
             (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32588) *
                C32906) *
               C572 -
           ((C14154 + C14153) * C32906 + (C14152 + C14151) * C13674 +
            (C14150 + C14149) * C13673 +
            (C165 * C32588 + C164 * C32872) * C13672) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
               C32767) *
              C32639 * C230 -
          (((C113 * C682 + C698 + C698 + C32662 * C692) * C32891 +
            C2298 * C2731 + C2299 * C2730 + C2626 * C2729) *
               C32767 +
           (C487 * C32891 + C488 * C2731 + C489 * C2730 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
               C32892) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C2729 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C2730 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C2731 +
            (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
               C32892 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C2729 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C2730 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C2731 +
            (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
               C32767) *
              C32639 * C32625 * C110 -
          ((C594 * C32891 + C595 * C2731 + C596 * C2730 + C597 * C2729) *
               C32767 +
           (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C165 * C2729 + C166 * C2730 + C167 * C2731 + C168 * C32891) *
               C32892 +
           (C596 * C2729 + C595 * C2730 + C594 * C2731 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C6094 + C6095 + C6096) * C32588 +
            (C6097 + C6098 + C6099) * C32872) *
               C32767 +
           ((C5480 + C5479 + C5478) * C32588 +
            (C5477 + C5476 + C5475) * C32872) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C5485 * C32872 + (C5483 + C5482 + C5481) * C32588) * C32892 +
           ((C6096 + C6095 + C6094) * C32872 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C5421 * C1695 + C6251 + C6251 + C32922 * C1701 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5417 * C680 + C6249 + C6249 +
             C5411 * C690) *
                C32588 +
            (C7676 + C7675 + C7674) * C32872) *
               C32767 +
           ((C5918 + C5919 + C5920) * C32588 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32872) *
               C32892) *
              C32639 * C231 +
          (((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 +
             C5606 + C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
             C32922 * C1008) *
                C32872 +
            (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 +
             C5609 + C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
             C32922 * C1009) *
                C32588) *
               C32892 +
           ((C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
             C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
             C32922 * C6493) *
                C32872 +
            (C5417 * C1140 + C8814 + C8814 + C5411 * C1158 + C5419 * C1695 +
             C8815 + C8815 + C5412 * C1701 + C5421 * C6678 + C8816 + C8816 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
            C164 * C32588) *
               C13672 +
           (C2118 * C32872 + C597 * C32588) * C13673 +
           (C2119 * C32872 + C1838 * C32588) * C13674 +
           (C2122 * C32872 + C2121 * C32588) * C32906) *
              C32639 * C32625 * C110 -
          ((C2120 * C32588 + C2121 * C32872) * C32906 +
           (C1839 * C32588 + C1838 * C32872) * C13674 +
           (C596 * C32588 + C597 * C32872) * C13673 +
           (C165 * C32588 + C164 * C32872) * C13672) *
              C32639 * C32625 * C111 +
          ((C165 * C32872 + C166 * C32588) * C13672 +
           (C596 * C32872 + C595 * C32588) * C13673 +
           (C1839 * C32872 + C1840 * C32588) * C13674 +
           (C2120 * C32872 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32588) *
               C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32872 +
            C164 * C32588) *
               C13672 +
           (C2118 * C32872 + C597 * C32588) * C13673 +
           (C2119 * C32872 + C1838 * C32588) * C13674 +
           (C2122 * C32872 + C2121 * C32588) * C32906) *
              C32639 * C230 -
          (((C113 * C2602 + C2620 + C2620 + C32662 * C2608) * C32588 +
            C12493 * C32872) *
               C32906 +
           (C2297 * C32588 + C2627 * C32872) * C13674 +
           (C2299 * C32588 + C2626 * C32872) * C13673 +
           (C489 * C32588 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32872) *
               C13672) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32872 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32588) *
               C13672 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32872 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32588) *
               C13673 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32872 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32588) *
               C13674 +
           ((C113 * C7115 + C12129 + C12129 + C32662 * C7121) * C32872 +
            (C113 * C7476 + C13775 + C13775 + C32662 * C7478) * C32588) *
               C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C32639 * C461 -
           ((C1361 + C1362 + C1363) * C32913 + (C1364 + C1365 + C1366) * C813 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C812) *
               C32680 * C32639 * C462) *
              C463 +
          (((C1366 + C1365 + C1364) * C812 + (C1363 + C1362 + C1361) * C813 +
            (C815 * C235 + C1346 + C1346 + C32954 * C255 + C817 * C242 + C1347 +
             C1347 + C32942 * C262 + C819 * C1330 + C1348 + C1348 +
             C32922 * C1332) *
                C32913) *
               C32680 * C32639 * C462 -
           ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
            (C875 + C874 + C873) * C812) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C32639 * C461 -
           (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
               C32680 * C32639 * C462) *
              C463 +
          ((C489 * C102 + C488 * C103 + C487 * C104 + C486 * C105 +
            (C113 * C465 + C477 + C477 + C32662 * C467) * C106) *
               C32680 * C32639 * C462 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C32639 * C461 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C32639 * C462) *
              C463 +
          (((C5920 + C5919 + C5918) * C32951 +
            (C5917 + C5916 + C5915) * C32938 +
            (C5417 * C235 + C5900 + C5900 + C5411 * C255 + C5419 * C242 +
             C5901 + C5901 + C5412 * C262 + C5421 * C1330 + C5902 + C5902 +
             C32922 * C1332) *
                C32913) *
               C32680 * C32639 * C462 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C32639 * C461 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C32639 * C462) *
              C463 +
          ((C6322 * C237 + C6592 + C6592 + C6316 * C257 + C6324 * C240 + C6593 +
            C6593 + C6317 * C260 + C6326 * C994 + C6594 + C6594 +
            C6318 * C1006 + C6328 * C997 + C6595 + C6595 + C6319 * C1009 +
            C6330 * C6588 + C6596 + C6596 + C6320 * C6590) *
               C32578 * C32680 * C32639 * C462 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
             C164 * C32938 + C165 * C32913) *
                C10429 +
            (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
               C32639 * C461 -
           ((C2296 * C32913 + C2297 * C32938 + C2627 * C32951) * C32925 +
            (C2298 * C32913 + C2299 * C32938 + C2626 * C32951) * C10430 +
            (C488 * C32913 + C489 * C32938 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
                C10429) *
               C32639 * C462) *
              C463 +
          (((C489 * C32951 + C488 * C32938 + C487 * C32913) * C10429 +
            (C2299 * C32951 + C2298 * C32938 + C3921 * C32913) * C10430 +
            (C2297 * C32951 + C2296 * C32938 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32913) *
                C32925) *
               C32639 * C462 -
           ((C1840 * C32913 + C1839 * C32938 + C1838 * C32951) * C32925 +
            (C595 * C32913 + C596 * C32938 + C597 * C32951) * C10430 +
            (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C32578 * C10429 +
            (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
               C32639 * C461 -
           ((C819 * C6488 + C11334 + C11334 + C32922 * C6494 + C817 * C1143 +
             C11335 + C11335 + C32942 * C1161 + C815 * C1142 + C11336 + C11336 +
             C32954 * C1160) *
                C32578 * C32925 +
            (C819 * C1694 + C1706 + C1706 + C32922 * C1700 + C817 * C1141 +
             C1705 + C1705 + C32942 * C1159 + C815 * C679 + C1704 + C1704 +
             C32954 * C689) *
                C32578 * C10430 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C32578 * C10429) *
               C32639 * C462) *
              C463 +
          (((C1366 + C1365 + C1364) * C32578 * C10429 +
            (C815 * C680 + C1707 + C1707 + C32954 * C690 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C819 * C1695 + C1709 + C1709 +
             C32922 * C1701) *
                C32578 * C10430 +
            (C815 * C1144 + C11653 + C11653 + C32954 * C1162 + C817 * C1145 +
             C11654 + C11654 + C32942 * C1163 + C819 * C7324 + C11655 + C11655 +
             C32922 * C7326) *
                C32578 * C32925) *
               C32639 * C462 -
           ((C819 * C1145 + C1181 + C1181 + C32922 * C1163 + C817 * C1144 +
             C1180 + C1180 + C32942 * C1162 + C815 * C345 + C1179 + C1179 +
             C32954 * C365) *
                C32578 * C32925 +
            (C1546 + C1547 + C1548) * C32578 * C10430 +
            (C875 + C874 + C873) * C32578 * C10429) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C571 -
           ((C1543 + C1544 + C1545) * C32913 + (C1546 + C1547 + C1548) * C813 +
            (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
             C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
             C32954 * C363) *
                C812) *
               C32680 * C572) *
              C461 +
          (((C815 * C679 + C1704 + C1704 + C32954 * C689 + C817 * C1141 +
             C1705 + C1705 + C32942 * C1159 + C819 * C1694 + C1706 + C1706 +
             C32922 * C1700) *
                C812 +
            (C815 * C680 + C1707 + C1707 + C32954 * C690 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C819 * C1695 + C1709 + C1709 +
             C32922 * C1701) *
                C813 +
            (C815 * C681 + C1710 + C1710 + C32954 * C691 + C817 * C1139 +
             C1711 + C1711 + C32942 * C1157 + C819 * C1696 + C1712 + C1712 +
             C32922 * C1702) *
                C32913) *
               C32680 * C572 -
           ((C1361 + C1362 + C1363) * C32913 + (C1364 + C1365 + C1366) * C813 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C812) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C571 -
           (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
            (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
               C32680 * C572) *
              C461 +
          (((C113 * C679 + C695 + C695 + C32662 * C689) * C102 +
            (C113 * C680 + C696 + C696 + C32662 * C690) * C103 +
            (C113 * C681 + C697 + C697 + C32662 * C691) * C104 +
            (C113 * C682 + C698 + C698 + C32662 * C692) * C105 +
            (C113 * C683 + C699 + C699 + C32662 * C693) * C106) *
               C32680 * C572 -
           (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C461 +
          (((C5417 * C679 + C6246 + C6246 + C5411 * C689 + C5419 * C1141 +
             C6247 + C6247 + C5412 * C1159 + C5421 * C1694 + C6248 + C6248 +
             C32922 * C1700) *
                C32951 +
            (C5417 * C680 + C6249 + C6249 + C5411 * C690 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5421 * C1695 + C6251 + C6251 +
             C32922 * C1701) *
                C32938 +
            (C5417 * C681 + C6252 + C6252 + C5411 * C691 + C5419 * C1139 +
             C6253 + C6253 + C5412 * C1157 + C5421 * C1696 + C6254 + C6254 +
             C32922 * C1702) *
                C32913) *
               C32680 * C572 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C461 +
          ((C6322 * C679 + C6772 + C6772 + C6316 * C689 + C6324 * C1141 +
            C6773 + C6773 + C6317 * C1159 + C6326 * C1694 + C6774 + C6774 +
            C6318 * C1700 + C6328 * C6487 + C6775 + C6775 + C6319 * C6493 +
            C6330 * C6768 + C6776 + C6776 + C6320 * C6770) *
               C32578 * C32680 * C572 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
             C164 * C32938 + C165 * C32913) *
                C10429 +
            (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
               C571 -
           ((C10659 + C10660 + C10661) * C32925 +
            (C10658 + C10657 + C10656) * C10430 +
            (C10655 + C10654 + C10653) * C10429) *
               C572) *
              C461 +
          (((C11108 + C11109 + C11110) * C10429 +
            (C11111 + C11112 + C11113) * C10430 +
            ((C113 * C2601 + C2619 + C2619 + C32662 * C2607) * C32951 +
             (C113 * C2602 + C2620 + C2620 + C32662 * C2608) * C32938 +
             (C113 * C2603 + C2621 + C2621 + C32662 * C2609) * C32913) *
                C32925) *
               C572 -
           ((C11113 + C11112 + C11111) * C32925 +
            (C11110 + C11109 + C11108) * C10430 +
            (C488 * C32913 + C489 * C32938 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
                C10429) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C32578 * C10429 +
            (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
               C571 -
           ((C11501 + C11502 + C11503) * C32578 * C32925 +
            (C11500 + C11499 + C11498) * C32578 * C10430 +
            (C11497 + C11496 + C11495) * C32578 * C10429) *
               C572) *
              C461 +
          (((C11993 + C11994 + C11995) * C32578 * C10429 +
            (C11996 + C11997 + C11998) * C32578 * C10430 +
            (C815 * C2601 + C11978 + C11978 + C32954 * C2607 + C817 * C7115 +
             C11979 + C11979 + C32942 * C7121 + C819 * C7643 + C11980 + C11980 +
             C32922 * C7645) *
                C32578 * C32925) *
               C572 -
           ((C11998 + C11997 + C11996) * C32578 * C32925 +
            (C11995 + C11994 + C11993) * C32578 * C10430 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C32578 * C10429) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C32680 * C32639 * C32625 * C110 -
              (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
               C164 * C102) *
                  C32680 * C32639 * C32625 * C111 +
              (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
               (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
                  C32680 * C32639 * C32625 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C32680 * C32639 * C230 -
              ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
               (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
               (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
               (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
               (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
                  C32680 * C32639 * C231 +
              ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
               (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
               (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
               (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
               (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
                  C32680 * C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C336 -
          ((C113 * C339 + C370 + C370 + C32662 * C359) * C106 +
           (C113 * C340 + C371 + C371 + C32662 * C360) * C105 +
           (C113 * C341 + C372 + C372 + C32662 * C361) * C104 +
           (C113 * C342 + C373 + C373 + C32662 * C362) * C103 +
           (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
              C32680 * C337 +
          ((C113 * C344 + C375 + C375 + C32662 * C364) * C102 +
           (C113 * C345 + C376 + C376 + C32662 * C365) * C103 +
           (C113 * C346 + C377 + C377 + C32662 * C366) * C104 +
           (C113 * C347 + C378 + C378 + C32662 * C367) * C105 +
           (C113 * C348 + C379 + C379 + C32662 * C368) * C106) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
           (C875 + C874 + C873) * C812) *
              C32680 * C32639 * C32625 * C111 +
          (C883 * C812 + (C881 + C880 + C879) * C813 +
           (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
            C853 + C32942 * C254 + C819 * C243 + C854 + C854 + C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C230 -
          ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 + C1013 +
            C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
            C32954 * C256) *
               C32913 +
           (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 + C1016 +
            C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
            C32954 * C257) *
               C813 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C812) *
              C32680 * C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C812 +
           (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
            C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
            C32922 * C1009) *
               C813 +
           (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 + C1028 +
            C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C336 -
          ((C819 * C1139 + C1167 + C1167 + C32922 * C1157 + C817 * C681 +
            C1168 + C1168 + C32942 * C691 + C815 * C341 + C1169 + C1169 +
            C32954 * C361) *
               C32913 +
           (C819 * C1140 + C1170 + C1170 + C32922 * C1158 + C817 * C680 +
            C1171 + C1171 + C32942 * C690 + C815 * C342 + C1172 + C1172 +
            C32954 * C362) *
               C813 +
           (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
            C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
            C32954 * C363) *
               C812) *
              C32680 * C337 +
          ((C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C812 +
           (C815 * C345 + C1179 + C1179 + C32954 * C365 + C817 * C1144 + C1180 +
            C1180 + C32942 * C1162 + C819 * C1145 + C1181 + C1181 +
            C32922 * C1163) *
               C813 +
           (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 + C1183 +
            C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
            C32922 * C1165) *
               C32913) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C336 -
          ((C5421 * C1139 + C5724 + C5724 + C32922 * C1157 + C5419 * C681 +
            C5725 + C5725 + C5412 * C691 + C5417 * C341 + C5726 + C5726 +
            C5411 * C361) *
               C32913 +
           (C5421 * C1140 + C5727 + C5727 + C32922 * C1158 + C5419 * C680 +
            C5728 + C5728 + C5412 * C690 + C5417 * C342 + C5729 + C5729 +
            C5411 * C362) *
               C32938 +
           (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
            C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
            C5411 * C363) *
               C32951) *
              C32680 * C337 +
          ((C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32951 +
           (C5417 * C345 + C5736 + C5736 + C5411 * C365 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5421 * C1145 + C5738 + C5738 +
            C32922 * C1163) *
               C32938 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32913) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C336 -
          (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
           C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
           C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
           C6322 * C343 + C6501 + C6501 + C6316 * C363) *
              C32578 * C32680 * C337 +
          (C6322 * C344 + C6502 + C6502 + C6316 * C364 + C6324 * C1142 + C6503 +
           C6503 + C6317 * C1160 + C6326 * C1143 + C6504 + C6504 +
           C6318 * C1161 + C6328 * C6488 + C6505 + C6505 + C6319 * C6494 +
           C6330 * C6489 + C6506 + C6506 + C6320 * C6495) *
              C32578 * C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C32625 * C110 -
          ((C1840 * C32913 + C1839 * C32938 + C1838 * C32951) * C32925 +
           (C595 * C32913 + C596 * C32938 + C597 * C32951) * C10430 +
           (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
              C32639 * C32625 * C111 +
          ((C165 * C32951 + C166 * C32938 + C167 * C32913) * C10429 +
           (C596 * C32951 + C595 * C32938 + C594 * C32913) * C10430 +
           (C1839 * C32951 + C1840 * C32938 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C230 -
          ((C2296 * C32913 + C2297 * C32938 + C2627 * C32951) * C32925 +
           (C2298 * C32913 + C2299 * C32938 + C2626 * C32951) * C10430 +
           (C488 * C32913 + C489 * C32938 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
               C10429) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32951 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32938 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
               C10429 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32951 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32938 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
               C10430 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32951 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32938 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
              C336 -
          ((C10659 + C10660 + C10661) * C32925 +
           (C10658 + C10657 + C10656) * C10430 +
           (C10655 + C10654 + C10653) * C10429) *
              C337 +
          (C10663 * C10429 + (C10661 + C10660 + C10659) * C10430 +
           ((C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C32951 +
            (C113 * C2073 + C2106 + C2106 + C32662 * C2085) * C32938 +
            (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32913) *
               C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C819 * C1145 + C1181 + C1181 + C32922 * C1163 + C817 * C1144 +
            C1180 + C1180 + C32942 * C1162 + C815 * C345 + C1179 + C1179 +
            C32954 * C365) *
               C32578 * C32925 +
           (C1546 + C1547 + C1548) * C32578 * C10430 +
           (C875 + C874 + C873) * C32578 * C10429) *
              C32639 * C32625 * C111 +
          (C883 * C32578 * C10429 + (C1545 + C1544 + C1543) * C32578 * C10430 +
           (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 + C1183 +
            C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C819 * C6488 + C11334 + C11334 + C32922 * C6494 + C817 * C1143 +
            C11335 + C11335 + C32942 * C1161 + C815 * C1142 + C11336 + C11336 +
            C32954 * C1160) *
               C32578 * C32925 +
           (C819 * C1694 + C1706 + C1706 + C32922 * C1700 + C817 * C1141 +
            C1705 + C1705 + C32942 * C1159 + C815 * C679 + C1704 + C1704 +
            C32954 * C689) *
               C32578 * C10430 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C32578 * C10429) *
              C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C32578 * C10429 +
           (C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
            C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
            C32922 * C6493) *
               C32578 * C10430 +
           (C815 * C1143 + C11340 + C11340 + C32954 * C1161 + C817 * C6488 +
            C11341 + C11341 + C32942 * C6494 + C819 * C6489 + C11342 + C11342 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
              C336 -
          ((C11501 + C11502 + C11503) * C32578 * C32925 +
           (C11500 + C11499 + C11498) * C32578 * C10430 +
           (C11497 + C11496 + C11495) * C32578 * C10429) *
              C337 +
          (C11506 * C10429 + (C11503 + C11502 + C11501) * C32578 * C10430 +
           (C815 * C2072 + C11474 + C11474 + C32954 * C2084 + C817 * C7116 +
            C11475 + C11475 + C32942 * C7122 + C819 * C7117 + C11476 + C11476 +
            C32922 * C7123) *
               C32578 * C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C571 -
           ((C1543 + C1544 + C1545) * C32913 + (C1546 + C1547 + C1548) * C813 +
            (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
             C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
             C32954 * C363) *
                C812) *
               C32680 * C572) *
              C32625 * C463 +
          (((C1548 + C1547 + C1546) * C812 + (C1545 + C1544 + C1543) * C813 +
            (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 + C1529 +
             C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
             C32922 * C1514) *
                C32913) *
               C32680 * C572 -
           ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
            (C875 + C874 + C873) * C812) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C571 -
           (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
            (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
               C32680 * C572) *
              C32625 * C463 +
          ((C597 * C102 + C596 * C103 + C595 * C104 + C594 * C105 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C106) *
               C32680 * C572 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C32625 * C463 +
          (((C6099 + C6098 + C6097) * C32951 +
            (C6096 + C6095 + C6094) * C32938 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32913) *
               C32680 * C572 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C32625 * C463 +
          ((C6322 * C342 + C6682 + C6682 + C6316 * C362 + C6324 * C680 + C6683 +
            C6683 + C6317 * C690 + C6326 * C1140 + C6684 + C6684 +
            C6318 * C1158 + C6328 * C1695 + C6685 + C6685 + C6319 * C1701 +
            C6330 * C6678 + C6686 + C6686 + C6320 * C6680) *
               C32578 * C32680 * C572 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
             C164 * C32938 + C165 * C32913) *
                C10429 +
            (C10653 + C10654 + C10655) * C10430 + C10663 * C32925) *
               C571 -
           ((C10659 + C10660 + C10661) * C32925 +
            (C10658 + C10657 + C10656) * C10430 +
            (C10655 + C10654 + C10653) * C10429) *
               C572) *
              C32625 * C463 +
          (((C10956 + C10957 + C10958) * C10429 +
            (C10959 + C10960 + C10961) * C10430 +
            (C2121 * C32951 + C2120 * C32938 +
             (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32913) *
                C32925) *
               C572 -
           ((C10961 + C10960 + C10959) * C32925 +
            (C10958 + C10957 + C10956) * C10430 +
            (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C32578 * C10429 +
            (C11495 + C11496 + C11497) * C32578 * C10430 + C11506 * C32925) *
               C571 -
           ((C11501 + C11502 + C11503) * C32578 * C32925 +
            (C11500 + C11499 + C11498) * C32578 * C10430 +
            (C11497 + C11496 + C11495) * C32578 * C10429) *
               C572) *
              C32625 * C463 +
          (((C1548 + C1547 + C1546) * C32578 * C10429 +
            (C11817 + C11818 + C11819) * C32578 * C10430 +
            (C815 * C2070 + C11808 + C11808 + C32954 * C2082 + C817 * C2602 +
             C11809 + C11809 + C32942 * C2608 + C819 * C7476 + C11810 + C11810 +
             C32922 * C7478) *
                C32578 * C32925) *
               C572 -
           ((C11819 + C11818 + C11817) * C32578 * C32925 +
            (C1546 + C1547 + C1548) * C32578 * C10430 +
            (C875 + C874 + C873) * C32578 * C10429) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C230 -
          ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
           (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
           (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
           (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
           (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
              C32680 * C32639 * C231 +
          ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
           (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
           (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
           (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
           (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C32625 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C32680 * C32639 * C32625 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
           (C875 + C874 + C873) * C812) *
              C32680 * C32639 * C32625 * C111 +
          (C883 * C812 + (C881 + C880 + C879) * C813 +
           (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
            C853 + C32942 * C254 + C819 * C243 + C854 + C854 + C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C230 -
          ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 + C1013 +
            C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
            C32954 * C256) *
               C32913 +
           (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 + C1016 +
            C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
            C32954 * C257) *
               C813 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C812) *
              C32680 * C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C812 +
           (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
            C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
            C32922 * C1009) *
               C813 +
           (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 + C1028 +
            C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C32625 * C110 -
          ((C1840 * C32913 + C1839 * C32938 + C1838 * C32951) * C32925 +
           (C595 * C32913 + C596 * C32938 + C597 * C32951) * C10430 +
           (C166 * C32913 + C165 * C32938 + C164 * C32951) * C10429) *
              C32639 * C32625 * C111 +
          ((C165 * C32951 + C166 * C32938 + C167 * C32913) * C10429 +
           (C596 * C32951 + C595 * C32938 + C594 * C32913) * C10430 +
           (C1839 * C32951 + C1840 * C32938 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32951 +
            C164 * C32938 + C165 * C32913) *
               C10429 +
           (C2118 * C32951 + C597 * C32938 + C596 * C32913) * C10430 +
           (C2119 * C32951 + C1838 * C32938 + C1839 * C32913) * C32925) *
              C32639 * C230 -
          ((C2296 * C32913 + C2297 * C32938 + C2627 * C32951) * C32925 +
           (C2298 * C32913 + C2299 * C32938 + C2626 * C32951) * C10430 +
           (C488 * C32913 + C489 * C32938 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32951) *
               C10429) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32951 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32938 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
               C10429 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32951 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32938 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
               C10430 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32951 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32938 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C819 * C1145 + C1181 + C1181 + C32922 * C1163 + C817 * C1144 +
            C1180 + C1180 + C32942 * C1162 + C815 * C345 + C1179 + C1179 +
            C32954 * C365) *
               C32578 * C32925 +
           (C1546 + C1547 + C1548) * C32578 * C10430 +
           (C875 + C874 + C873) * C32578 * C10429) *
              C32639 * C32625 * C111 +
          (C883 * C32578 * C10429 + (C1545 + C1544 + C1543) * C32578 * C10430 +
           (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 + C1183 +
            C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C32578 * C10429 +
           (C815 * C343 + C1175 + C1175 + C32954 * C363 + C817 * C679 + C1174 +
            C1174 + C32942 * C689 + C819 * C1141 + C1173 + C1173 +
            C32922 * C1159) *
               C32578 * C10430 +
           (C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C819 * C6488 + C11334 + C11334 + C32922 * C6494 + C817 * C1143 +
            C11335 + C11335 + C32942 * C1161 + C815 * C1142 + C11336 + C11336 +
            C32954 * C1160) *
               C32578 * C32925 +
           (C819 * C1694 + C1706 + C1706 + C32922 * C1700 + C817 * C1141 +
            C1705 + C1705 + C32942 * C1159 + C815 * C679 + C1704 + C1704 +
            C32954 * C689) *
               C32578 * C10430 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C32578 * C10429) *
              C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C32578 * C10429 +
           (C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
            C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
            C32922 * C6493) *
               C32578 * C10430 +
           (C815 * C1143 + C11340 + C11340 + C32954 * C1161 + C817 * C6488 +
            C11341 + C11341 + C32942 * C6494 + C819 * C6489 + C11342 + C11342 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[75] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C32583 +
             (C2782 + C2783) * C32591 + C2790 * C17968) *
                C21055 +
            ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
                C32767) *
               C32639 * C461 -
           (((C4891 + C4892) * C17968 + (C4893 + C4894) * C32591 +
             (C5301 + C5300) * C32583) *
                C32767 +
            ((C3178 + C3179) * C17968 + (C3180 + C3181) * C32591 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C32583) *
                C21055) *
               C32639 * C462) *
              C463 +
          ((((C3181 + C3180) * C32583 + (C3179 + C3178) * C32591 +
             (C3177 + C3176) * C17968) *
                C21055 +
            ((C4894 + C4893) * C32583 + (C4892 + C4891) * C32591 +
             (C2733 * C682 + C3480 + C3480 + C32890 * C692 + C2735 * C1512 +
              C3481 + C3481 + C32725 * C1514) *
                 C17968) *
                C32767) *
               C32639 * C462 -
           (((C3338 + C3339) * C17968 + C5090 * C32591 + C5091 * C32583) *
                C32767 +
            ((C2787 + C2786) * C17968 + (C2785 + C2784) * C32591 +
             (C2783 + C2782) * C32583) *
                C21055) *
               C32639 * C461) *
              C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[76] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C32583 +
             (C2782 + C2783) * C32591 + C2790 * C17968) *
                C21055 +
            ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
                C32767) *
               C571 -
           (((C4675 + C4676) * C17968 + C13366 * C32591 +
             (C4679 + C4680) * C32583) *
                C32767 +
            (C5090 * C17968 + C5091 * C32591 + (C4674 + C4673) * C32583) *
                C21055) *
               C572) *
              C461 +
          ((((C5300 + C5301) * C32583 + (C4894 + C4893) * C32591 +
             (C4892 + C4891) * C17968) *
                C21055 +
            ((C13573 + C13574) * C32583 + (C13171 + C13170) * C32591 +
             (C2733 * C1146 + C5294 + C5294 + C32890 * C1164 + C2735 * C1147 +
              C5295 + C5295 + C32725 * C1165) *
                 C17968) *
                C32767) *
               C572 -
           (((C4891 + C4892) * C17968 + (C4893 + C4894) * C32591 +
             (C5301 + C5300) * C32583) *
                C32767 +
            ((C3178 + C3179) * C17968 + (C3180 + C3181) * C32591 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C32583) *
                C21055) *
               C571) *
              C462) *
         C32613) /
        (p * q * std::sqrt(p + q));
    d2ee[77] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32583 +
            (C2782 + C2783) * C32591 + C2790 * C17968) *
               C21055 +
           ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
               C32767) *
              C32639 * C230 -
          (((C4891 + C4892) * C17968 + (C4893 + C4894) * C32591 +
            (C5301 + C5300) * C32583) *
               C32767 +
           ((C3178 + C3179) * C17968 + (C3180 + C3181) * C32591 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C32583) *
               C21055) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C32583 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C32591 +
            (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
             C2903 + C2903 + C32725 * C1005) *
                C17968) *
               C21055 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C32583 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C32591 +
            (C2733 * C1139 + C4487 + C4487 + C32890 * C1157 + C2735 * C1696 +
             C4488 + C4488 + C32725 * C1702) *
                C17968) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32583 +
            (C2782 + C2783) * C32591 + C2790 * C17968) *
               C21055 +
           ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C3338 + C3339) * C17968 + C5090 * C32591 + C5091 * C32583) *
               C32767 +
           ((C2787 + C2786) * C17968 + (C2785 + C2784) * C32591 +
            (C2783 + C2782) * C32583) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C2790 * C32583 + C2791 * C32591 + (C2789 + C2788) * C17968) *
               C21055 +
           (C4336 * C32583 + (C3339 + C3338) * C32591 +
            (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
             C3325 + C3325 + C32725 * C693) *
                C17968) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32583 +
            (C2782 + C2783) * C32591 + C2790 * C17968) *
               C21055 +
           ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
               C32767) *
              C336 -
          (((C4675 + C4676) * C17968 + C13366 * C32591 +
            (C4679 + C4680) * C32583) *
               C32767 +
           (C5090 * C17968 + C5091 * C32591 + (C4674 + C4673) * C32583) *
               C21055) *
              C337 +
          ((C12939 * C32583 + C12940 * C32591 + (C4676 + C4675) * C17968) *
               C21055 +
           (C14588 * C32583 + (C12965 + C12964) * C32591 +
            (C2733 * C2069 + C4655 + C4655 + C32890 * C2081 + C2735 * C2603 +
             C4656 + C4656 + C32725 * C2609) *
                C17968) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[78] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C32583 +
             (C2782 + C2783) * C32591 + C2790 * C17968) *
                C21055 +
            ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
                C32767) *
               C571 -
           (((C4675 + C4676) * C17968 + C13366 * C32591 +
             (C4679 + C4680) * C32583) *
                C32767 +
            (C5090 * C17968 + C5091 * C32591 + (C4674 + C4673) * C32583) *
                C21055) *
               C572) *
              C32625 * C463 +
          (((C5089 * C32583 + C4336 * C32591 + (C3339 + C3338) * C17968) *
                C21055 +
            (C12940 * C32583 + (C4676 + C4675) * C32591 +
             (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
              C3019 + C3019 + C32725 * C2277) *
                 C17968) *
                C32767) *
               C572 -
           (((C3338 + C3339) * C17968 + C5090 * C32591 + C5091 * C32583) *
                C32767 +
            ((C2787 + C2786) * C17968 + (C2785 + C2784) * C32591 +
             (C2783 + C2782) * C32583) *
                C21055) *
               C571) *
              C32625 * C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[79] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32583 +
            (C2782 + C2783) * C32591 + C2790 * C17968) *
               C21055 +
           ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C3338 + C3339) * C17968 + C5090 * C32591 + C5091 * C32583) *
               C32767 +
           ((C2787 + C2786) * C17968 + (C2785 + C2784) * C32591 +
            (C2783 + C2782) * C32583) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C2790 * C32583 + C2791 * C32591 + (C2789 + C2788) * C17968) *
               C21055 +
           (C4336 * C32583 + (C3339 + C3338) * C32591 +
            (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
             C3325 + C3325 + C32725 * C693) *
                C17968) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C32583 +
            (C2782 + C2783) * C32591 + C2790 * C17968) *
               C21055 +
           ((C4673 + C4674) * C32583 + C5089 * C32591 + C4336 * C17968) *
               C32767) *
              C32639 * C230 -
          (((C4891 + C4892) * C17968 + (C4893 + C4894) * C32591 +
            (C5301 + C5300) * C32583) *
               C32767 +
           ((C3178 + C3179) * C17968 + (C3180 + C3181) * C32591 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C32583) *
               C21055) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C32583 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C32591 +
            (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
             C2903 + C2903 + C32725 * C1005) *
                C17968) *
               C21055 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C32583 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C32591 +
            (C2733 * C1139 + C4487 + C4487 + C32890 * C1157 + C2735 * C1696 +
             C4488 + C4488 + C32725 * C1702) *
                C17968) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[80] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C15957 +
             (C2782 + C2783) * C32588) *
                C32763 +
            ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
            C25666 * C24543) *
               C32639 * C461 -
           (((C13170 + C13171) * C32588 + (C13574 + C13573) * C15957) * C24543 +
            ((C4893 + C4894) * C32588 + (C5301 + C5300) * C15957) * C32770 +
            ((C3180 + C3181) * C32588 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C15957) *
                C32763) *
               C32639 * C462) *
              C463 +
          ((((C3181 + C3180) * C15957 + (C3179 + C3178) * C32588) * C32763 +
            ((C4894 + C4893) * C15957 + (C4892 + C4891) * C32588) * C32770 +
            ((C13171 + C13170) * C15957 +
             (C2733 * C1146 + C5294 + C5294 + C32890 * C1164 + C2735 * C1147 +
              C5295 + C5295 + C32725 * C1165) *
                 C32588) *
                C24543) *
               C32639 * C462 -
           (((C4675 + C4676) * C32588 + C13366 * C15957) * C24543 +
            (C5090 * C32588 + C5091 * C15957) * C32770 +
            ((C2785 + C2784) * C32588 + (C2783 + C2782) * C15957) * C32763) *
               C32639 * C461) *
              C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[81] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C15957 +
             (C2782 + C2783) * C32588) *
                C32763 +
            ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
            C25666 * C24543) *
               C571 -
           (((C12964 + C12965) * C32588 + (C12966 + C12967) * C15957) * C24543 +
            (C13366 * C32588 + (C4679 + C4680) * C15957) * C32770 +
            (C5091 * C32588 + (C4674 + C4673) * C15957) * C32763) *
               C572) *
              C461 +
          ((((C5300 + C5301) * C15957 + (C4894 + C4893) * C32588) * C32763 +
            ((C13573 + C13574) * C15957 + (C13171 + C13170) * C32588) * C32770 +
            ((C15002 + C15003) * C15957 +
             (C2733 * C2602 + C13567 + C13567 + C32890 * C2608 + C2735 * C7476 +
              C13568 + C13568 + C32725 * C7478) *
                 C32588) *
                C24543) *
               C572 -
           (((C13170 + C13171) * C32588 + (C13574 + C13573) * C15957) * C24543 +
            ((C4893 + C4894) * C32588 + (C5301 + C5300) * C15957) * C32770 +
            ((C3180 + C3181) * C32588 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C15957) *
                C32763) *
               C571) *
              C462) *
         C32613) /
        (p * q * std::sqrt(p + q));
    d2ee[82] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C15957 +
            (C2782 + C2783) * C32588) *
               C32763 +
           ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
           (C12939 * C15957 + C12940 * C32588) * C24543) *
              C32639 * C230 -
          (((C13170 + C13171) * C32588 + (C13574 + C13573) * C15957) * C24543 +
           ((C4893 + C4894) * C32588 + (C5301 + C5300) * C15957) * C32770 +
           ((C3180 + C3181) * C32588 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C15957) *
               C32763) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C15957 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C32588) *
               C32763 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C15957 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C32588) *
               C32770 +
           ((C2733 * C1143 + C12789 + C12789 + C32890 * C1161 + C2735 * C6488 +
             C12790 + C12790 + C32725 * C6494) *
                C15957 +
            (C2733 * C1145 + C12791 + C12791 + C32890 * C1163 + C2735 * C7324 +
             C12792 + C12792 + C32725 * C7326) *
                C32588) *
               C24543) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C15957 +
            (C2782 + C2783) * C32588) *
               C32763 +
           ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
           (C12939 * C15957 + C12940 * C32588) * C24543) *
              C32639 * C32625 * C110 -
          (((C4675 + C4676) * C32588 + C13366 * C15957) * C24543 +
           (C5090 * C32588 + C5091 * C15957) * C32770 +
           ((C2785 + C2784) * C32588 + (C2783 + C2782) * C15957) * C32763) *
              C32639 * C32625 * C111 +
          ((C2790 * C15957 + C2791 * C32588) * C32763 +
           (C4336 * C15957 + (C3339 + C3338) * C32588) * C32770 +
           ((C4676 + C4675) * C15957 +
            (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
             C3019 + C3019 + C32725 * C2277) *
                C32588) *
               C24543) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C15957 +
            (C2782 + C2783) * C32588) *
               C32763 +
           ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
           C25666 * C24543) *
              C336 -
          (((C12964 + C12965) * C32588 + (C12966 + C12967) * C15957) * C24543 +
           (C13366 * C32588 + (C4679 + C4680) * C15957) * C32770 +
           (C5091 * C32588 + (C4674 + C4673) * C15957) * C32763) *
              C337 +
          (C25666 * C32763 +
           (C14588 * C15957 + (C12965 + C12964) * C32588) * C32770 +
           ((C14601 + C14600) * C15957 +
            (C2733 * C2073 + C12951 + C12951 + C32890 * C2085 + C2735 * C12297 +
             C12952 + C12952 + C32725 * C12299) *
                C32588) *
               C24543) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[83] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C15957 +
             (C2782 + C2783) * C32588) *
                C32763 +
            ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
            C25666 * C24543) *
               C571 -
           (((C12964 + C12965) * C32588 + (C12966 + C12967) * C15957) * C24543 +
            (C13366 * C32588 + (C4679 + C4680) * C15957) * C32770 +
            (C5091 * C32588 + (C4674 + C4673) * C15957) * C32763) *
               C572) *
              C32625 * C463 +
          (((C5089 * C15957 + C4336 * C32588) * C32763 +
            (C12940 * C15957 + (C4676 + C4675) * C32588) * C32770 +
            ((C12965 + C12964) * C15957 +
             (C2733 * C2069 + C4655 + C4655 + C32890 * C2081 + C2735 * C2603 +
              C4656 + C4656 + C32725 * C2609) *
                 C32588) *
                C24543) *
               C572 -
           (((C4675 + C4676) * C32588 + C13366 * C15957) * C24543 +
            (C5090 * C32588 + C5091 * C15957) * C32770 +
            ((C2785 + C2784) * C32588 + (C2783 + C2782) * C15957) * C32763) *
               C571) *
              C32625 * C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[84] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C15957 +
            (C2782 + C2783) * C32588) *
               C32763 +
           ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
           (C12939 * C15957 + C12940 * C32588) * C24543) *
              C32639 * C32625 * C110 -
          (((C4675 + C4676) * C32588 + C13366 * C15957) * C24543 +
           (C5090 * C32588 + C5091 * C15957) * C32770 +
           ((C2785 + C2784) * C32588 + (C2783 + C2782) * C15957) * C32763) *
              C32639 * C32625 * C111 +
          ((C2790 * C15957 + C2791 * C32588) * C32763 +
           (C4336 * C15957 + (C3339 + C3338) * C32588) * C32770 +
           ((C4676 + C4675) * C15957 +
            (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
             C3019 + C3019 + C32725 * C2277) *
                C32588) *
               C24543) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C15957 +
            (C2782 + C2783) * C32588) *
               C32763 +
           ((C4673 + C4674) * C15957 + C5089 * C32588) * C32770 +
           (C12939 * C15957 + C12940 * C32588) * C24543) *
              C32639 * C230 -
          (((C13170 + C13171) * C32588 + (C13574 + C13573) * C15957) * C24543 +
           ((C4893 + C4894) * C32588 + (C5301 + C5300) * C15957) * C32770 +
           ((C3180 + C3181) * C32588 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C15957) *
               C32763) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C15957 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C32588) *
               C32763 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C15957 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C32588) *
               C32770 +
           ((C2733 * C1143 + C12789 + C12789 + C32890 * C1161 + C2735 * C6488 +
             C12790 + C12790 + C32725 * C6494) *
                C15957 +
            (C2733 * C1145 + C12791 + C12791 + C32890 * C1163 + C2735 * C7324 +
             C12792 + C12792 + C32725 * C7326) *
                C32588) *
               C24543) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[85] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
              C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
              C32922 * C259) *
                 C15957 +
             (C873 + C874 + C875) * C32588) *
                C21055 +
            ((C11495 + C11496 + C11497) * C15957 +
             (C1548 + C1547 + C1546) * C32588) *
                C32767) *
               C32639 * C461 -
           (((C22307 + C22308 + C22309) * C32588 +
             (C11995 + C11994 + C11993) * C15957) *
                C32767 +
            ((C1364 + C1365 + C1366) * C32588 +
             (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
              C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
              C32954 * C258) *
                 C15957) *
                C21055) *
               C32639 * C462) *
              C463 +
          ((((C1366 + C1365 + C1364) * C15957 +
             (C1363 + C1362 + C1361) * C32588) *
                C21055 +
            ((C22309 + C22308 + C22307) * C15957 +
             (C815 * C681 + C1710 + C1710 + C32954 * C691 + C817 * C1139 +
              C1711 + C1711 + C32942 * C1157 + C819 * C1696 + C1712 + C1712 +
              C32922 * C1702) *
                 C32588) *
                C32767) *
               C32639 * C462 -
           (((C1543 + C1544 + C1545) * C32588 +
             (C1546 + C1547 + C1548) * C15957) *
                C32767 +
            ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
                C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
             C164 * C32953 + C165 * C32940 + C166 * C32891) *
                C21055 +
            (C21254 + C21255 + C21256 + C21257) * C32767) *
               C32639 * C461 -
           ((C3921 * C32891 + C2298 * C32940 + C2299 * C32953 +
             C2626 * C32960) *
                C32767 +
            (C487 * C32891 + C488 * C32940 + C489 * C32953 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
                C21055) *
               C32639 * C462) *
              C463 +
          (((C489 * C32960 + C488 * C32953 + C487 * C32940 + C486 * C32891) *
                C21055 +
            (C2299 * C32960 + C2298 * C32953 + C3921 * C32940 +
             (C113 * C683 + C699 + C699 + C32662 * C693) * C32891) *
                C32767) *
               C32639 * C462 -
           ((C594 * C32891 + C595 * C32940 + C596 * C32953 + C597 * C32960) *
                C32767 +
            (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
                C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
             C164 * C32588) *
                C32962 +
            (C23000 + C23001) * C32959 + C23008 * C32950 + C23009 * C32906) *
               C32639 * C461 -
           ((C14018 * C32588 + C12493 * C15957) * C32906 +
            (C2297 * C32588 + C2627 * C15957) * C32950 +
            (C2299 * C32588 + C2626 * C15957) * C32959 +
            (C489 * C32588 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C15957) *
                C32962) *
               C32639 * C462) *
              C463 +
          (((C489 * C15957 + C488 * C32588) * C32962 +
            (C2299 * C15957 + C2298 * C32588) * C32959 +
            (C2297 * C15957 + C2296 * C32588) * C32950 +
            (C14018 * C15957 +
             (C113 * C2603 + C2621 + C2621 + C32662 * C2609) * C32588) *
                C32906) *
               C32639 * C462 -
           ((C2120 * C32588 + C2121 * C15957) * C32906 +
            (C1839 * C32588 + C1838 * C15957) * C32950 +
            (C596 * C32588 + C597 * C15957) * C32959 +
            (C165 * C32588 + C164 * C15957) * C32962) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[86] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
              C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
              C32922 * C259) *
                 C15957 +
             (C873 + C874 + C875) * C32588) *
                C21055 +
            ((C11495 + C11496 + C11497) * C15957 + C22506 * C32588) * C32767) *
               C571 -
           (((C11819 + C11818 + C11817) * C32588 +
             (C11500 + C11499 + C11498) * C15957) *
                C32767 +
            (C22507 * C32588 + (C11497 + C11496 + C11495) * C15957) * C21055) *
               C572) *
              C461 +
          ((((C11993 + C11994 + C11995) * C15957 +
             (C22309 + C22308 + C22307) * C32588) *
                C21055 +
            ((C11996 + C11997 + C11998) * C15957 +
             (C815 * C1144 + C11653 + C11653 + C32954 * C1162 + C817 * C1145 +
              C11654 + C11654 + C32942 * C1163 + C819 * C7324 + C11655 +
              C11655 + C32922 * C7326) *
                 C32588) *
                C32767) *
               C572 -
           (((C22307 + C22308 + C22309) * C32588 +
             (C11995 + C11994 + C11993) * C15957) *
                C32767 +
            ((C1364 + C1365 + C1366) * C32588 +
             (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
              C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
              C32954 * C258) *
                 C15957) *
                C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
             C164 * C32953 + C165 * C32940 + C166 * C32891) *
                C21055 +
            (C21254 + C21255 + C21256 + C21257) * C32767) *
               C571 -
           ((C21258 + C21259 + C21260 + C21261) * C32767 +
            (C21257 + C21256 + C21255 + C21254) * C21055) *
               C572) *
              C461 +
          (((C21656 + C21657 + C21658 + C21659) * C21055 +
            (C2627 * C32960 + C2297 * C32953 + C2296 * C32940 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32891) *
                C32767) *
               C572 -
           ((C21659 + C21658 + C21657 + C21656) * C32767 +
            (C487 * C32891 + C488 * C32940 + C489 * C32953 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
                C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
             C164 * C32588) *
                C32962 +
            (C23000 + C23001) * C32959 + C23008 * C32950 + C23009 * C32906) *
               C571 -
           ((C23006 + C23007) * C32906 + (C23005 + C23004) * C32950 +
            (C23003 + C23002) * C32959 + (C23001 + C23000) * C32962) *
               C572) *
              C461 +
          (((C23406 + C23407) * C32962 + (C23408 + C23409) * C32959 +
            (C23410 + C23411) * C32950 +
            (C12494 * C15957 +
             (C113 * C12297 + C12301 + C12301 + C32662 * C12299) * C32588) *
                C32906) *
               C572 -
           ((C23411 + C23410) * C32906 + (C23409 + C23408) * C32950 +
            (C23407 + C23406) * C32959 +
            (C489 * C32588 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C15957) *
                C32962) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
                C164 * C32953 + C165 * C32940 + C166 * C32891) *
                   C21055 +
               (C2118 * C32960 + C597 * C32953 + C596 * C32940 +
                C595 * C32891) *
                   C32767) *
                  C32639 * C32625 * C110 -
              ((C594 * C32891 + C595 * C32940 + C596 * C32953 + C597 * C32960) *
                   C32767 +
               (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
                   C21055) *
                  C32639 * C32625 * C111 +
              ((C165 * C32960 + C166 * C32953 + C167 * C32940 + C168 * C32891) *
                   C21055 +
               (C596 * C32960 + C595 * C32953 + C594 * C32940 +
                (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
                   C32767) *
                  C32639 * C32625 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
                C164 * C32953 + C165 * C32940 + C166 * C32891) *
                   C21055 +
               (C2118 * C32960 + C597 * C32953 + C596 * C32940 +
                C595 * C32891) *
                   C32767) *
                  C32639 * C230 -
              ((C3921 * C32891 + C2298 * C32940 + C2299 * C32953 +
                C2626 * C32960) *
                   C32767 +
               (C487 * C32891 + C488 * C32940 + C489 * C32953 +
                (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
                   C21055) *
                  C32639 * C231 +
              (((C113 * C239 + C270 + C270 + C32662 * C259) * C32960 +
                (C113 * C240 + C271 + C271 + C32662 * C260) * C32953 +
                (C113 * C241 + C272 + C272 + C32662 * C261) * C32940 +
                (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
                   C21055 +
               ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32960 +
                (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32953 +
                (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32940 +
                (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
                   C32767) *
                  C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C21254 + C21255 + C21256 + C21257) * C32767) *
              C336 -
          ((C21258 + C21259 + C21260 + C21261) * C32767 +
           (C21257 + C21256 + C21255 + C21254) * C21055) *
              C337 +
          ((C21261 + C21260 + C21259 + C21258) * C21055 +
           (C2122 * C32960 + C2121 * C32953 + C2120 * C32940 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32891) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C1543 + C1544 + C1545) * C32588 +
            (C1546 + C1547 + C1548) * C15957) *
               C32767 +
           ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C883 * C15957 + (C881 + C880 + C879) * C32588) * C21055 +
           ((C1545 + C1544 + C1543) * C15957 +
            (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 + C1529 +
             C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C819 * C1695 + C1709 + C1709 + C32922 * C1701 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C815 * C680 + C1707 + C1707 +
             C32954 * C690) *
                C32588 +
            (C11995 + C11994 + C11993) * C15957) *
               C32767 +
           ((C1364 + C1365 + C1366) * C32588 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C15957) *
               C21055) *
              C32639 * C231 +
          (((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
             C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
             C32922 * C1008) *
                C15957 +
            (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
             C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
             C32922 * C1009) *
                C32588) *
               C21055 +
           ((C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
             C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
             C32922 * C6493) *
                C15957 +
            (C815 * C1140 + C21952 + C21952 + C32954 * C1158 + C817 * C1695 +
             C21953 + C21953 + C32942 * C1701 + C819 * C6678 + C21954 + C21954 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C336 -
          (((C11819 + C11818 + C11817) * C32588 +
            (C11500 + C11499 + C11498) * C15957) *
               C32767 +
           ((C1546 + C1547 + C1548) * C32588 +
            (C11497 + C11496 + C11495) * C15957) *
               C21055) *
              C337 +
          ((C11505 * C15957 + (C11817 + C11818 + C11819) * C32588) * C21055 +
           ((C11503 + C11502 + C11501) * C15957 +
            (C815 * C2070 + C11808 + C11808 + C32954 * C2082 + C817 * C2602 +
             C11809 + C11809 + C32942 * C2608 + C819 * C7476 + C11810 + C11810 +
             C32922 * C7478) *
                C32588) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
            C164 * C32588) *
               C32962 +
           (C2118 * C15957 + C597 * C32588) * C32959 +
           (C2119 * C15957 + C1838 * C32588) * C32950 +
           (C2122 * C15957 + C2121 * C32588) * C32906) *
              C32639 * C32625 * C110 -
          ((C2120 * C32588 + C2121 * C15957) * C32906 +
           (C1839 * C32588 + C1838 * C15957) * C32950 +
           (C596 * C32588 + C597 * C15957) * C32959 +
           (C165 * C32588 + C164 * C15957) * C32962) *
              C32639 * C32625 * C111 +
          ((C165 * C15957 + C166 * C32588) * C32962 +
           (C596 * C15957 + C595 * C32588) * C32959 +
           (C1839 * C15957 + C1840 * C32588) * C32950 +
           (C2120 * C15957 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32588) *
               C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
            C164 * C32588) *
               C32962 +
           (C2118 * C15957 + C597 * C32588) * C32959 +
           (C2119 * C15957 + C1838 * C32588) * C32950 +
           (C2122 * C15957 + C2121 * C32588) * C32906) *
              C32639 * C230 -
          ((C14018 * C32588 + C12493 * C15957) * C32906 +
           (C2297 * C32588 + C2627 * C15957) * C32950 +
           (C2299 * C32588 + C2626 * C15957) * C32959 +
           (C489 * C32588 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C15957) *
               C32962) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C15957 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32588) *
               C32962 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C15957 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32588) *
               C32959 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C15957 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32588) *
               C32950 +
           ((C113 * C7115 + C12129 + C12129 + C32662 * C7121) * C15957 +
            (C113 * C7476 + C13775 + C13775 + C32662 * C7478) * C32588) *
               C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
            C164 * C32588) *
               C32962 +
           (C23000 + C23001) * C32959 + C23008 * C32950 + C23009 * C32906) *
              C336 -
          ((C23006 + C23007) * C32906 + (C23005 + C23004) * C32950 +
           (C23003 + C23002) * C32959 + (C23001 + C23000) * C32962) *
              C337 +
          (C23008 * C32962 + C23009 * C32959 + (C23007 + C23006) * C32950 +
           (C12213 * C15957 +
            (C113 * C12383 + C12392 + C12392 + C32662 * C12385) * C32588) *
               C32906) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[88] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
              C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
              C32922 * C259) *
                 C15957 +
             (C873 + C874 + C875) * C32588) *
                C21055 +
            ((C11495 + C11496 + C11497) * C15957 + C22506 * C32588) * C32767) *
               C571 -
           (((C11819 + C11818 + C11817) * C32588 +
             (C11500 + C11499 + C11498) * C15957) *
                C32767 +
            (C22507 * C32588 + (C11497 + C11496 + C11495) * C15957) * C21055) *
               C572) *
              C32625 * C463 +
          (((C22506 * C15957 + (C1545 + C1544 + C1543) * C32588) * C21055 +
            ((C11817 + C11818 + C11819) * C15957 +
             (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 +
              C1183 + C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
              C32922 * C1165) *
                 C32588) *
                C32767) *
               C572 -
           (((C1543 + C1544 + C1545) * C32588 + C22507 * C15957) * C32767 +
            ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
                C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
             C164 * C32953 + C165 * C32940 + C166 * C32891) *
                C21055 +
            (C21254 + C21255 + C21256 + C21257) * C32767) *
               C571 -
           ((C21258 + C21259 + C21260 + C21261) * C32767 +
            (C21257 + C21256 + C21255 + C21254) * C21055) *
               C572) *
              C32625 * C463 +
          (((C21522 + C21523 + C21524 + C21525) * C21055 +
            (C1838 * C32960 + C1839 * C32953 + C1840 * C32940 +
             (C113 * C348 + C379 + C379 + C32662 * C368) * C32891) *
                C32767) *
               C572 -
           ((C21525 + C21524 + C21523 + C21522) * C32767 +
            (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
                C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
             C164 * C32588) *
                C32962 +
            (C23000 + C23001) * C32959 + C23008 * C32950 + C23009 * C32906) *
               C571 -
           ((C23006 + C23007) * C32906 + (C23005 + C23004) * C32950 +
            (C23003 + C23002) * C32959 + (C23001 + C23000) * C32962) *
               C572) *
              C32625 * C463 +
          (((C23270 + C23271) * C32962 + (C23272 + C23273) * C32959 +
            (C23274 + C23275) * C32950 +
            (C12395 * C15957 +
             (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32588) *
                C32906) *
               C572 -
           ((C23275 + C23274) * C32906 + (C23273 + C23272) * C32950 +
            (C23271 + C23270) * C32959 +
            (C165 * C32588 + C164 * C15957) * C32962) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[89] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C2118 * C32960 + C597 * C32953 + C596 * C32940 + C595 * C32891) *
               C32767) *
              C32639 * C230 -
          ((C3921 * C32891 + C2298 * C32940 + C2299 * C32953 + C2626 * C32960) *
               C32767 +
           (C487 * C32891 + C488 * C32940 + C489 * C32953 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
               C21055) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32960 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32953 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32940 +
            (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
               C21055 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32960 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32953 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32940 +
            (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C2118 * C32960 + C597 * C32953 + C596 * C32940 + C595 * C32891) *
               C32767) *
              C32639 * C32625 * C110 -
          ((C594 * C32891 + C595 * C32940 + C596 * C32953 + C597 * C32960) *
               C32767 +
           (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C165 * C32960 + C166 * C32953 + C167 * C32940 + C168 * C32891) *
               C21055 +
           (C596 * C32960 + C595 * C32953 + C594 * C32940 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C1543 + C1544 + C1545) * C32588 +
            (C1546 + C1547 + C1548) * C15957) *
               C32767 +
           ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C883 * C15957 + (C881 + C880 + C879) * C32588) * C21055 +
           ((C1545 + C1544 + C1543) * C15957 +
            (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 + C1529 +
             C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C819 * C1695 + C1709 + C1709 + C32922 * C1701 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C815 * C680 + C1707 + C1707 +
             C32954 * C690) *
                C32588 +
            (C11995 + C11994 + C11993) * C15957) *
               C32767 +
           ((C1364 + C1365 + C1366) * C32588 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C15957) *
               C21055) *
              C32639 * C231 +
          (((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
             C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
             C32922 * C1008) *
                C15957 +
            (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
             C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
             C32922 * C1009) *
                C32588) *
               C21055 +
           ((C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
             C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
             C32922 * C6493) *
                C15957 +
            (C815 * C1140 + C21952 + C21952 + C32954 * C1158 + C817 * C1695 +
             C21953 + C21953 + C32942 * C1701 + C819 * C6678 + C21954 + C21954 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
            C164 * C32588) *
               C32962 +
           (C2118 * C15957 + C597 * C32588) * C32959 +
           (C2119 * C15957 + C1838 * C32588) * C32950 +
           (C2122 * C15957 + C2121 * C32588) * C32906) *
              C32639 * C32625 * C110 -
          ((C2120 * C32588 + C2121 * C15957) * C32906 +
           (C1839 * C32588 + C1838 * C15957) * C32950 +
           (C596 * C32588 + C597 * C15957) * C32959 +
           (C165 * C32588 + C164 * C15957) * C32962) *
              C32639 * C32625 * C111 +
          ((C165 * C15957 + C166 * C32588) * C32962 +
           (C596 * C15957 + C595 * C32588) * C32959 +
           (C1839 * C15957 + C1840 * C32588) * C32950 +
           (C2120 * C15957 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32588) *
               C32906) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C15957 +
            C164 * C32588) *
               C32962 +
           (C2118 * C15957 + C597 * C32588) * C32959 +
           (C2119 * C15957 + C1838 * C32588) * C32950 +
           (C2122 * C15957 + C2121 * C32588) * C32906) *
              C32639 * C230 -
          ((C14018 * C32588 + C12493 * C15957) * C32906 +
           (C2297 * C32588 + C2627 * C15957) * C32950 +
           (C2299 * C32588 + C2626 * C15957) * C32959 +
           (C489 * C32588 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C15957) *
               C32962) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C15957 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32588) *
               C32962 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C15957 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32588) *
               C32959 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C15957 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32588) *
               C32950 +
           ((C113 * C7115 + C12129 + C12129 + C32662 * C7121) * C15957 +
            (C113 * C7476 + C13775 + C13775 + C32662 * C7478) * C32588) *
               C32906) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[90] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
             C164 * C32591 + C165 * C17968) *
                C32763 +
            (C24765 + C24766 + C24767) * C32770 + C24775 * C24543) *
               C32639 * C461 -
           ((C2296 * C17968 + C2297 * C32591 + C2627 * C32583) * C24543 +
            (C2298 * C17968 + C2299 * C32591 + C2626 * C32583) * C32770 +
            (C488 * C17968 + C489 * C32591 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32583) *
                C32763) *
               C32639 * C462) *
              C463 +
          (((C489 * C32583 + C488 * C32591 + C487 * C17968) * C32763 +
            (C2299 * C32583 + C2298 * C32591 + C3921 * C17968) * C32770 +
            (C2297 * C32583 + C2296 * C32591 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C17968) *
                C24543) *
               C32639 * C462 -
           ((C1840 * C17968 + C1839 * C32591 + C1838 * C32583) * C24543 +
            (C595 * C17968 + C596 * C32591 + C597 * C32583) * C32770 +
            (C166 * C17968 + C165 * C32591 + C164 * C32583) * C32763) *
               C32639 * C461) *
              C464)) /
        (p * q * std::sqrt(p + q));
    d2ee[91] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
                     C164 * C32591 + C165 * C17968) *
                        C32763 +
                    (C24765 + C24766 + C24767) * C32770 + C24775 * C24543) *
                       C571 -
                   ((C24771 + C24772 + C24773) * C24543 +
                    (C24770 + C24769 + C24768) * C32770 +
                    (C24767 + C24766 + C24765) * C32763) *
                       C572) *
                      C461 +
                  (((C25220 + C25221 + C25222) * C32763 +
                    (C25223 + C25224 + C25225) * C32770 +
                    (C12493 * C32583 + C14018 * C32591 +
                     (C113 * C2603 + C2621 + C2621 + C32662 * C2609) * C17968) *
                        C24543) *
                       C572 -
                   ((C25225 + C25224 + C25223) * C24543 +
                    (C25222 + C25221 + C25220) * C32770 +
                    (C488 * C17968 + C489 * C32591 +
                     (C113 * C238 + C269 + C269 + C32662 * C258) * C32583) *
                        C32763) *
                       C571) *
                      C462) *
                 C32613) /
                (p * q * std::sqrt(p + q));
    d2ee[92] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
            C164 * C32591 + C165 * C17968) *
               C32763 +
           (C2118 * C32583 + C597 * C32591 + C596 * C17968) * C32770 +
           (C2119 * C32583 + C1838 * C32591 + C1839 * C17968) * C24543) *
              C32639 * C230 -
          ((C2296 * C17968 + C2297 * C32591 + C2627 * C32583) * C24543 +
           (C2298 * C17968 + C2299 * C32591 + C2626 * C32583) * C32770 +
           (C488 * C17968 + C489 * C32591 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32583) *
               C32763) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32583 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32591 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C17968) *
               C32763 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32583 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32591 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C17968) *
               C32770 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32583 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32591 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C17968) *
               C24543) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
            C164 * C32591 + C165 * C17968) *
               C32763 +
           (C2118 * C32583 + C597 * C32591 + C596 * C17968) * C32770 +
           (C2119 * C32583 + C1838 * C32591 + C1839 * C17968) * C24543) *
              C32639 * C32625 * C110 -
          ((C1840 * C17968 + C1839 * C32591 + C1838 * C32583) * C24543 +
           (C595 * C17968 + C596 * C32591 + C597 * C32583) * C32770 +
           (C166 * C17968 + C165 * C32591 + C164 * C32583) * C32763) *
              C32639 * C32625 * C111 +
          ((C165 * C32583 + C166 * C32591 + C167 * C17968) * C32763 +
           (C596 * C32583 + C595 * C32591 + C594 * C17968) * C32770 +
           (C1839 * C32583 + C1840 * C32591 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C17968) *
               C24543) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
            C164 * C32591 + C165 * C17968) *
               C32763 +
           (C24765 + C24766 + C24767) * C32770 + C24775 * C24543) *
              C336 -
          ((C24771 + C24772 + C24773) * C24543 +
           (C24770 + C24769 + C24768) * C32770 +
           (C24767 + C24766 + C24765) * C32763) *
              C337 +
          (C24775 * C32763 + (C24773 + C24772 + C24771) * C32770 +
           (C12212 * C32583 + C12395 * C32591 +
            (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C17968) *
               C24543) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[93] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
                     C164 * C32591 + C165 * C17968) *
                        C32763 +
                    (C24765 + C24766 + C24767) * C32770 + C24775 * C24543) *
                       C571 -
                   ((C24771 + C24772 + C24773) * C24543 +
                    (C24770 + C24769 + C24768) * C32770 +
                    (C24767 + C24766 + C24765) * C32763) *
                       C572) *
                      C32625 * C463 +
                  (((C25068 + C25069 + C25070) * C32763 +
                    (C25071 + C25072 + C25073) * C32770 +
                    (C2121 * C32583 + C2120 * C32591 +
                     (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C17968) *
                        C24543) *
                       C572 -
                   ((C25073 + C25072 + C25071) * C24543 +
                    (C25070 + C25069 + C25068) * C32770 +
                    (C166 * C17968 + C165 * C32591 + C164 * C32583) * C32763) *
                       C571) *
                      C32625 * C464)) /
                (p * q * std::sqrt(p + q));
    d2ee[94] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
            C164 * C32591 + C165 * C17968) *
               C32763 +
           (C2118 * C32583 + C597 * C32591 + C596 * C17968) * C32770 +
           (C2119 * C32583 + C1838 * C32591 + C1839 * C17968) * C24543) *
              C32639 * C32625 * C110 -
          ((C1840 * C17968 + C1839 * C32591 + C1838 * C32583) * C24543 +
           (C595 * C17968 + C596 * C32591 + C597 * C32583) * C32770 +
           (C166 * C17968 + C165 * C32591 + C164 * C32583) * C32763) *
              C32639 * C32625 * C111 +
          ((C165 * C32583 + C166 * C32591 + C167 * C17968) * C32763 +
           (C596 * C32583 + C595 * C32591 + C594 * C17968) * C32770 +
           (C1839 * C32583 + C1840 * C32591 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C17968) *
               C24543) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32583 +
            C164 * C32591 + C165 * C17968) *
               C32763 +
           (C2118 * C32583 + C597 * C32591 + C596 * C17968) * C32770 +
           (C2119 * C32583 + C1838 * C32591 + C1839 * C17968) * C24543) *
              C32639 * C230 -
          ((C2296 * C17968 + C2297 * C32591 + C2627 * C32583) * C24543 +
           (C2298 * C17968 + C2299 * C32591 + C2626 * C32583) * C32770 +
           (C488 * C17968 + C489 * C32591 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32583) *
               C32763) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32583 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32591 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C17968) *
               C32763 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32583 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32591 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C17968) *
               C32770 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C32583 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C32591 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C17968) *
               C24543) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[95] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
             C164 * C32953 + C165 * C32940 + C166 * C32891) *
                C21055 +
            (C21254 + C21255 + C21256 + C21257) * C32767) *
               C32639 * C461 -
           ((C3921 * C32891 + C2298 * C32940 + C2299 * C32953 +
             C2626 * C32960) *
                C32767 +
            (C487 * C32891 + C488 * C32940 + C489 * C32953 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
                C21055) *
               C32639 * C462) *
              C463 +
          (((C489 * C32960 + C488 * C32953 + C487 * C32940 + C486 * C32891) *
                C21055 +
            (C2299 * C32960 + C2298 * C32953 + C3921 * C32940 +
             (C113 * C683 + C699 + C699 + C32662 * C693) * C32891) *
                C32767) *
               C32639 * C462 -
           ((C594 * C32891 + C595 * C32940 + C596 * C32953 + C597 * C32960) *
                C32767 +
            (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
                C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
              C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
              C32922 * C259) *
                 C15957 +
             (C873 + C874 + C875) * C32588) *
                C21055 +
            ((C11495 + C11496 + C11497) * C15957 +
             (C1548 + C1547 + C1546) * C32588) *
                C32767) *
               C32639 * C461 -
           (((C22307 + C22308 + C22309) * C32588 +
             (C11995 + C11994 + C11993) * C15957) *
                C32767 +
            ((C1364 + C1365 + C1366) * C32588 +
             (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
              C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
              C32954 * C258) *
                 C15957) *
                C21055) *
               C32639 * C462) *
              C463 +
          ((((C1366 + C1365 + C1364) * C15957 +
             (C1363 + C1362 + C1361) * C32588) *
                C21055 +
            ((C22309 + C22308 + C22307) * C15957 +
             (C815 * C681 + C1710 + C1710 + C32954 * C691 + C817 * C1139 +
              C1711 + C1711 + C32942 * C1157 + C819 * C1696 + C1712 + C1712 +
              C32922 * C1702) *
                 C32588) *
                C32767) *
               C32639 * C462 -
           (((C1543 + C1544 + C1545) * C32588 +
             (C1546 + C1547 + C1548) * C15957) *
                C32767 +
            ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
                C21055) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[96] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
             C164 * C32953 + C165 * C32940 + C166 * C32891) *
                C21055 +
            (C21254 + C21255 + C21256 + C21257) * C32767) *
               C571 -
           ((C21258 + C21259 + C21260 + C21261) * C32767 +
            (C21257 + C21256 + C21255 + C21254) * C21055) *
               C572) *
              C461 +
          (((C21656 + C21657 + C21658 + C21659) * C21055 +
            (C2627 * C32960 + C2297 * C32953 + C2296 * C32940 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32891) *
                C32767) *
               C572 -
           ((C21659 + C21658 + C21657 + C21656) * C32767 +
            (C487 * C32891 + C488 * C32940 + C489 * C32953 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
                C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
              C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
              C32922 * C259) *
                 C15957 +
             (C873 + C874 + C875) * C32588) *
                C21055 +
            ((C11495 + C11496 + C11497) * C15957 + C22506 * C32588) * C32767) *
               C571 -
           (((C11819 + C11818 + C11817) * C32588 +
             (C11500 + C11499 + C11498) * C15957) *
                C32767 +
            (C22507 * C32588 + (C11497 + C11496 + C11495) * C15957) * C21055) *
               C572) *
              C461 +
          ((((C11993 + C11994 + C11995) * C15957 +
             (C22309 + C22308 + C22307) * C32588) *
                C21055 +
            ((C11996 + C11997 + C11998) * C15957 +
             (C815 * C1144 + C11653 + C11653 + C32954 * C1162 + C817 * C1145 +
              C11654 + C11654 + C32942 * C1163 + C819 * C7324 + C11655 +
              C11655 + C32922 * C7326) *
                 C32588) *
                C32767) *
               C572 -
           (((C22307 + C22308 + C22309) * C32588 +
             (C11995 + C11994 + C11993) * C15957) *
                C32767 +
            ((C1364 + C1365 + C1366) * C32588 +
             (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
              C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
              C32954 * C258) *
                 C15957) *
                C21055) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[97] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C2118 * C32960 + C597 * C32953 + C596 * C32940 + C595 * C32891) *
               C32767) *
              C32639 * C230 -
          ((C3921 * C32891 + C2298 * C32940 + C2299 * C32953 + C2626 * C32960) *
               C32767 +
           (C487 * C32891 + C488 * C32940 + C489 * C32953 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
               C21055) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32960 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32953 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32940 +
            (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
               C21055 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32960 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32953 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32940 +
            (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C2118 * C32960 + C597 * C32953 + C596 * C32940 + C595 * C32891) *
               C32767) *
              C32639 * C32625 * C110 -
          ((C594 * C32891 + C595 * C32940 + C596 * C32953 + C597 * C32960) *
               C32767 +
           (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C165 * C32960 + C166 * C32953 + C167 * C32940 + C168 * C32891) *
               C21055 +
           (C596 * C32960 + C595 * C32953 + C594 * C32940 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C21254 + C21255 + C21256 + C21257) * C32767) *
              C336 -
          ((C21258 + C21259 + C21260 + C21261) * C32767 +
           (C21257 + C21256 + C21255 + C21254) * C21055) *
              C337 +
          ((C21261 + C21260 + C21259 + C21258) * C21055 +
           (C2122 * C32960 + C2121 * C32953 + C2120 * C32940 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32891) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C1543 + C1544 + C1545) * C32588 +
            (C1546 + C1547 + C1548) * C15957) *
               C32767 +
           ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C883 * C15957 + (C881 + C880 + C879) * C32588) * C21055 +
           ((C1545 + C1544 + C1543) * C15957 +
            (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 + C1529 +
             C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C819 * C1695 + C1709 + C1709 + C32922 * C1701 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C815 * C680 + C1707 + C1707 +
             C32954 * C690) *
                C32588 +
            (C11995 + C11994 + C11993) * C15957) *
               C32767 +
           ((C1364 + C1365 + C1366) * C32588 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C15957) *
               C21055) *
              C32639 * C231 +
          (((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
             C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
             C32922 * C1008) *
                C15957 +
            (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
             C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
             C32922 * C1009) *
                C32588) *
               C21055 +
           ((C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
             C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
             C32922 * C6493) *
                C15957 +
            (C815 * C1140 + C21952 + C21952 + C32954 * C1158 + C817 * C1695 +
             C21953 + C21953 + C32942 * C1701 + C819 * C6678 + C21954 + C21954 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C336 -
          (((C11819 + C11818 + C11817) * C32588 +
            (C11500 + C11499 + C11498) * C15957) *
               C32767 +
           ((C1546 + C1547 + C1548) * C32588 +
            (C11497 + C11496 + C11495) * C15957) *
               C21055) *
              C337 +
          ((C11505 * C15957 + (C11817 + C11818 + C11819) * C32588) * C21055 +
           ((C11503 + C11502 + C11501) * C15957 +
            (C815 * C2070 + C11808 + C11808 + C32954 * C2082 + C817 * C2602 +
             C11809 + C11809 + C32942 * C2608 + C819 * C7476 + C11810 + C11810 +
             C32922 * C7478) *
                C32588) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[98] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
             C164 * C32953 + C165 * C32940 + C166 * C32891) *
                C21055 +
            (C21254 + C21255 + C21256 + C21257) * C32767) *
               C571 -
           ((C21258 + C21259 + C21260 + C21261) * C32767 +
            (C21257 + C21256 + C21255 + C21254) * C21055) *
               C572) *
              C32625 * C463 +
          (((C21522 + C21523 + C21524 + C21525) * C21055 +
            (C1838 * C32960 + C1839 * C32953 + C1840 * C32940 +
             (C113 * C348 + C379 + C379 + C32662 * C368) * C32891) *
                C32767) *
               C572 -
           ((C21525 + C21524 + C21523 + C21522) * C32767 +
            (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
                C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
              C823 + C32942 * C258 + C819 * C239 + C824 + C824 +
              C32922 * C259) *
                 C15957 +
             (C873 + C874 + C875) * C32588) *
                C21055 +
            ((C11495 + C11496 + C11497) * C15957 + C22506 * C32588) * C32767) *
               C571 -
           (((C11819 + C11818 + C11817) * C32588 +
             (C11500 + C11499 + C11498) * C15957) *
                C32767 +
            (C22507 * C32588 + (C11497 + C11496 + C11495) * C15957) * C21055) *
               C572) *
              C32625 * C463 +
          (((C22506 * C15957 + (C1545 + C1544 + C1543) * C32588) * C21055 +
            ((C11817 + C11818 + C11819) * C15957 +
             (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 +
              C1183 + C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
              C32922 * C1165) *
                 C32588) *
                C32767) *
               C572 -
           (((C1543 + C1544 + C1545) * C32588 + C22507 * C15957) * C32767 +
            ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
                C21055) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[99] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C2118 * C32960 + C597 * C32953 + C596 * C32940 + C595 * C32891) *
               C32767) *
              C32639 * C32625 * C110 -
          ((C594 * C32891 + C595 * C32940 + C596 * C32953 + C597 * C32960) *
               C32767 +
           (C167 * C32891 + C166 * C32940 + C165 * C32953 + C164 * C32960) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C165 * C32960 + C166 * C32953 + C167 * C32940 + C168 * C32891) *
               C21055 +
           (C596 * C32960 + C595 * C32953 + C594 * C32940 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C32960 +
            C164 * C32953 + C165 * C32940 + C166 * C32891) *
               C21055 +
           (C2118 * C32960 + C597 * C32953 + C596 * C32940 + C595 * C32891) *
               C32767) *
              C32639 * C230 -
          ((C3921 * C32891 + C2298 * C32940 + C2299 * C32953 + C2626 * C32960) *
               C32767 +
           (C487 * C32891 + C488 * C32940 + C489 * C32953 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C32960) *
               C21055) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C32960 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C32953 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32940 +
            (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
               C21055 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C32960 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C32953 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32940 +
            (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C1543 + C1544 + C1545) * C32588 +
            (C1546 + C1547 + C1548) * C15957) *
               C32767 +
           ((C878 + C877 + C876) * C32588 + (C875 + C874 + C873) * C15957) *
               C21055) *
              C32639 * C32625 * C111 +
          ((C883 * C15957 + (C881 + C880 + C879) * C32588) * C21055 +
           ((C1545 + C1544 + C1543) * C15957 +
            (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 + C1529 +
             C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C15957 +
            (C873 + C874 + C875) * C32588) *
               C21055 +
           ((C11495 + C11496 + C11497) * C15957 +
            (C1548 + C1547 + C1546) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C819 * C1695 + C1709 + C1709 + C32922 * C1701 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C815 * C680 + C1707 + C1707 +
             C32954 * C690) *
                C32588 +
            (C11995 + C11994 + C11993) * C15957) *
               C32767 +
           ((C1364 + C1365 + C1366) * C32588 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C15957) *
               C21055) *
              C32639 * C231 +
          (((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
             C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
             C32922 * C1008) *
                C15957 +
            (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
             C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
             C32922 * C1009) *
                C32588) *
               C21055 +
           ((C815 * C1141 + C11337 + C11337 + C32954 * C1159 + C817 * C1694 +
             C11338 + C11338 + C32942 * C1700 + C819 * C6487 + C11339 + C11339 +
             C32922 * C6493) *
                C15957 +
            (C815 * C1140 + C21952 + C21952 + C32954 * C1158 + C817 * C1695 +
             C21953 + C21953 + C32942 * C1701 + C819 * C6678 + C21954 + C21954 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C2729 +
            (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
               C32680 * C32639 * C461 -
           ((C3176 + C3177) * C32891 + (C3178 + C3179) * C2731 +
            (C3180 + C3181) * C2730 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C2729) *
               C32680 * C32639 * C462) *
              C463 +
          (((C3181 + C3180) * C2729 + (C3179 + C3178) * C2730 +
            (C3177 + C3176) * C2731 +
            (C2733 * C234 + C3162 + C3162 + C32890 * C254 + C2735 * C243 +
             C3163 + C3163 + C32725 * C263) *
                C32891) *
               C32680 * C32639 * C462 -
           ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
            (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32872 +
            (C7840 + C7841 + C7842 + C7843) * C32588) *
               C32680 * C32639 * C461 -
           ((C8226 + C8227 + C8228 + C8229) * C32588 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32872) *
               C32680 * C32639 * C462) *
              C463 +
          (((C8229 + C8228 + C8227 + C8226) * C32872 +
            (C7783 * C236 + C8214 + C8214 + C7777 * C256 + C7785 * C241 +
             C8215 + C8215 + C7778 * C261 + C7787 * C993 + C8216 + C8216 +
             C7779 * C1005 + C7789 * C998 + C8217 + C8217 + C32899 * C1010) *
                C32588) *
               C32680 * C32639 * C462 -
           ((C7844 + C7845 + C7846 + C7847) * C32588 +
            (C7843 + C7842 + C7841 + C7840) * C32872) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C2729 +
            (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
               C32680 * C571 -
           ((C3338 + C3339) * C32891 + (C3340 + C3341) * C2731 +
            (C3342 + C3343) * C2730 +
            (C2735 * C679 + C3010 + C3010 + C32725 * C689 + C2733 * C343 +
             C3011 + C3011 + C32890 * C363) *
                C2729) *
               C32680 * C572) *
              C461 +
          (((C2733 * C679 + C3474 + C3474 + C32890 * C689 + C2735 * C1141 +
             C3475 + C3475 + C32725 * C1159) *
                C2729 +
            (C2733 * C680 + C3476 + C3476 + C32890 * C690 + C2735 * C1140 +
             C3477 + C3477 + C32725 * C1158) *
                C2730 +
            (C2733 * C681 + C3478 + C3478 + C32890 * C691 + C2735 * C1139 +
             C3479 + C3479 + C32725 * C1157) *
                C2731 +
            (C2733 * C682 + C3480 + C3480 + C32890 * C692 + C2735 * C1512 +
             C3481 + C3481 + C32725 * C1514) *
                C32891) *
               C32680 * C572 -
           ((C3176 + C3177) * C32891 + (C3178 + C3179) * C2731 +
            (C3180 + C3181) * C2730 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C2729) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32872 +
            (C7840 + C7841 + C7842 + C7843) * C32588) *
               C32680 * C571 -
           ((C8380 + C8381 + C8382 + C8383) * C32588 +
            (C7789 * C1694 + C8064 + C8064 + C32899 * C1700 + C7787 * C1141 +
             C8065 + C8065 + C7779 * C1159 + C7785 * C679 + C8066 + C8066 +
             C7778 * C689 + C7783 * C343 + C8067 + C8067 + C7777 * C363) *
                C32872) *
               C32680 * C572) *
              C461 +
          (((C7783 * C679 + C8514 + C8514 + C7777 * C689 + C7785 * C1141 +
             C8515 + C8515 + C7778 * C1159 + C7787 * C1694 + C8516 + C8516 +
             C7779 * C1700 + C7789 * C6487 + C8517 + C8517 + C32899 * C6493) *
                C32872 +
            (C7783 * C680 + C8518 + C8518 + C7777 * C690 + C7785 * C1140 +
             C8519 + C8519 + C7778 * C1158 + C7787 * C1695 + C8520 + C8520 +
             C7779 * C1701 + C7789 * C6678 + C8521 + C8521 + C32899 * C6680) *
                C32588) *
               C32680 * C572 -
           ((C8226 + C8227 + C8228 + C8229) * C32588 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32872) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C32639 * C230 -
          ((C2735 * C242 + C2890 + C2890 + C32725 * C262 + C2733 * C235 +
            C2891 + C2891 + C32890 * C255) *
               C32891 +
           (C2735 * C241 + C2892 + C2892 + C32725 * C261 + C2733 * C236 +
            C2893 + C2893 + C32890 * C256) *
               C2731 +
           (C2735 * C240 + C2894 + C2894 + C32725 * C260 + C2733 * C237 +
            C2895 + C2895 + C32890 * C257) *
               C2730 +
           (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
            C2897 + C2897 + C32890 * C258) *
               C2729) *
              C32680 * C32639 * C231 +
          ((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
            C2899 + C2899 + C32725 * C1007) *
               C2729 +
           (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
            C2901 + C2901 + C32725 * C1006) *
               C2730 +
           (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
            C2903 + C2903 + C32725 * C1005) *
               C2731 +
           (C2733 * C242 + C2904 + C2904 + C32890 * C262 + C2735 * C1330 +
            C2905 + C2905 + C32725 * C1332) *
               C32891) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C32639 * C32625 * C110 -
          ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
           (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
              C32680 * C32639 * C32625 * C111 +
          (C2790 * C2729 + C2791 * C2730 + (C2789 + C2788) * C2731 +
           (C2733 * C120 + C2764 + C2764 + C32890 * C134 + C2735 * C465 +
            C2765 + C2765 + C32725 * C467) *
               C32891) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C336 -
          ((C2735 * C682 + C3004 + C3004 + C32725 * C692 + C2733 * C340 +
            C3005 + C3005 + C32890 * C360) *
               C32891 +
           (C2735 * C681 + C3006 + C3006 + C32725 * C691 + C2733 * C341 +
            C3007 + C3007 + C32890 * C361) *
               C2731 +
           (C2735 * C680 + C3008 + C3008 + C32725 * C690 + C2733 * C342 +
            C3009 + C3009 + C32890 * C362) *
               C2730 +
           (C2735 * C679 + C3010 + C3010 + C32725 * C689 + C2733 * C343 +
            C3011 + C3011 + C32890 * C363) *
               C2729) *
              C32680 * C337 +
          ((C2733 * C344 + C3012 + C3012 + C32890 * C364 + C2735 * C1142 +
            C3013 + C3013 + C32725 * C1160) *
               C2729 +
           (C2733 * C345 + C3014 + C3014 + C32890 * C365 + C2735 * C1144 +
            C3015 + C3015 + C32725 * C1162) *
               C2730 +
           (C2733 * C346 + C3016 + C3016 + C32890 * C366 + C2735 * C1146 +
            C3017 + C3017 + C32725 * C1164) *
               C2731 +
           (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
            C3019 + C3019 + C32725 * C2277) *
               C32891) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C7844 + C7845 + C7846 + C7847) * C32588 +
           (C7843 + C7842 + C7841 + C7840) * C32872) *
              C32680 * C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32872 +
           (C7783 * C118 + C7820 + C7820 + C7777 * C132 + C7785 * C235 + C7821 +
            C7821 + C7778 * C255 + C7787 * C242 + C7822 + C7822 + C7779 * C262 +
            C7789 * C1330 + C7823 + C7823 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C230 -
          ((C7789 * C997 + C7946 + C7946 + C32899 * C1009 + C7787 * C994 +
            C7947 + C7947 + C7779 * C1006 + C7785 * C240 + C7948 + C7948 +
            C7778 * C260 + C7783 * C237 + C7949 + C7949 + C7777 * C257) *
               C32588 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32872) *
              C32680 * C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32872 +
           (C7783 * C240 + C7958 + C7958 + C7777 * C260 + C7785 * C994 + C7959 +
            C7959 + C7778 * C1006 + C7787 * C997 + C7960 + C7960 +
            C7779 * C1009 + C7789 * C6588 + C7961 + C7961 + C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C336 -
          ((C7789 * C1695 + C8060 + C8060 + C32899 * C1701 + C7787 * C1140 +
            C8061 + C8061 + C7779 * C1158 + C7785 * C680 + C8062 + C8062 +
            C7778 * C690 + C7783 * C342 + C8063 + C8063 + C7777 * C362) *
               C32588 +
           (C7789 * C1694 + C8064 + C8064 + C32899 * C1700 + C7787 * C1141 +
            C8065 + C8065 + C7779 * C1159 + C7785 * C679 + C8066 + C8066 +
            C7778 * C689 + C7783 * C343 + C8067 + C8067 + C7777 * C363) *
               C32872) *
              C32680 * C337 +
          ((C7783 * C344 + C8068 + C8068 + C7777 * C364 + C7785 * C1142 +
            C8069 + C8069 + C7778 * C1160 + C7787 * C1143 + C8070 + C8070 +
            C7779 * C1161 + C7789 * C6488 + C8071 + C8071 + C32899 * C6494) *
               C32872 +
           (C7783 * C345 + C8072 + C8072 + C7777 * C365 + C7785 * C1144 +
            C8073 + C8073 + C7778 * C1162 + C7787 * C1145 + C8074 + C8074 +
            C7779 * C1163 + C7789 * C7324 + C8075 + C8075 + C32899 * C7326) *
               C32588) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C2729 +
            (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
               C32680 * C571 -
           ((C3338 + C3339) * C32891 + (C3340 + C3341) * C2731 +
            (C3342 + C3343) * C2730 +
            (C2735 * C679 + C3010 + C3010 + C32725 * C689 + C2733 * C343 +
             C3011 + C3011 + C32890 * C363) *
                C2729) *
               C32680 * C572) *
              C32625 * C463 +
          (((C3343 + C3342) * C2729 + (C3341 + C3340) * C2730 +
            (C3339 + C3338) * C2731 +
            (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
             C3325 + C3325 + C32725 * C693) *
                C32891) *
               C32680 * C572 -
           ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
            (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32872 +
            (C7840 + C7841 + C7842 + C7843) * C32588) *
               C32680 * C571 -
           ((C8380 + C8381 + C8382 + C8383) * C32588 +
            (C7789 * C1694 + C8064 + C8064 + C32899 * C1700 + C7787 * C1141 +
             C8065 + C8065 + C7779 * C1159 + C7785 * C679 + C8066 + C8066 +
             C7778 * C689 + C7783 * C343 + C8067 + C8067 + C7777 * C363) *
                C32872) *
               C32680 * C572) *
              C32625 * C463 +
          (((C8383 + C8382 + C8381 + C8380) * C32872 +
            (C7783 * C341 + C8368 + C8368 + C7777 * C361 + C7785 * C681 +
             C8369 + C8369 + C7778 * C691 + C7787 * C1139 + C8370 + C8370 +
             C7779 * C1157 + C7789 * C1696 + C8371 + C8371 + C32899 * C1702) *
                C32588) *
               C32680 * C572 -
           ((C7844 + C7845 + C7846 + C7847) * C32588 +
            (C7843 + C7842 + C7841 + C7840) * C32872) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C32639 * C32625 * C110 -
          ((C2788 + C2789) * C32891 + (C2787 + C2786) * C2731 +
           (C2785 + C2784) * C2730 + (C2783 + C2782) * C2729) *
              C32680 * C32639 * C32625 * C111 +
          (C2790 * C2729 + C2791 * C2730 + (C2789 + C2788) * C2731 +
           (C2733 * C120 + C2764 + C2764 + C32890 * C134 + C2735 * C465 +
            C2765 + C2765 + C32725 * C467) *
               C32891) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
            C2739 + C2739 + C32725 * C258) *
               C2729 +
           (C2782 + C2783) * C2730 + C2790 * C2731 + C2791 * C32891) *
              C32680 * C32639 * C230 -
          ((C2735 * C242 + C2890 + C2890 + C32725 * C262 + C2733 * C235 +
            C2891 + C2891 + C32890 * C255) *
               C32891 +
           (C2735 * C241 + C2892 + C2892 + C32725 * C261 + C2733 * C236 +
            C2893 + C2893 + C32890 * C256) *
               C2731 +
           (C2735 * C240 + C2894 + C2894 + C32725 * C260 + C2733 * C237 +
            C2895 + C2895 + C32890 * C257) *
               C2730 +
           (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
            C2897 + C2897 + C32890 * C258) *
               C2729) *
              C32680 * C32639 * C231 +
          ((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
            C2899 + C2899 + C32725 * C1007) *
               C2729 +
           (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
            C2901 + C2901 + C32725 * C1006) *
               C2730 +
           (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
            C2903 + C2903 + C32725 * C1005) *
               C2731 +
           (C2733 * C242 + C2904 + C2904 + C32890 * C262 + C2735 * C1330 +
            C2905 + C2905 + C32725 * C1332) *
               C32891) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C32625 * C110 -
          ((C7844 + C7845 + C7846 + C7847) * C32588 +
           (C7843 + C7842 + C7841 + C7840) * C32872) *
              C32680 * C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32872 +
           (C7783 * C118 + C7820 + C7820 + C7777 * C132 + C7785 * C235 + C7821 +
            C7821 + C7778 * C255 + C7787 * C242 + C7822 + C7822 + C7779 * C262 +
            C7789 * C1330 + C7823 + C7823 + C32899 * C1332) *
               C32588) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32872 +
           (C7840 + C7841 + C7842 + C7843) * C32588) *
              C32680 * C32639 * C230 -
          ((C7789 * C997 + C7946 + C7946 + C32899 * C1009 + C7787 * C994 +
            C7947 + C7947 + C7779 * C1006 + C7785 * C240 + C7948 + C7948 +
            C7778 * C260 + C7783 * C237 + C7949 + C7949 + C7777 * C257) *
               C32588 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32872) *
              C32680 * C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32872 +
           (C7783 * C240 + C7958 + C7958 + C7777 * C260 + C7785 * C994 + C7959 +
            C7959 + C7778 * C1006 + C7787 * C997 + C7960 + C7960 +
            C7779 * C1009 + C7789 * C6588 + C7961 + C7961 + C32899 * C6590) *
               C32588) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C812 +
             (C2782 + C2783) * C813 + C2790 * C32913) *
                C32892 +
            ((C4673 + C4674) * C812 + (C3343 + C3342) * C813 + C4336 * C32913) *
                C32767) *
               C32639 * C461 -
           (((C4891 + C4892) * C32913 + (C4893 + C4894) * C813 +
             (C2735 * C1141 + C3475 + C3475 + C32725 * C1159 + C2733 * C679 +
              C3474 + C3474 + C32890 * C689) *
                 C812) *
                C32767 +
            ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C812) *
                C32892) *
               C32639 * C462) *
              C463 +
          ((((C3181 + C3180) * C812 + (C3179 + C3178) * C813 +
             (C3177 + C3176) * C32913) *
                C32892 +
            ((C4894 + C4893) * C812 + (C4892 + C4891) * C813 +
             (C2733 * C682 + C3480 + C3480 + C32890 * C692 + C2735 * C1512 +
              C3481 + C3481 + C32725 * C1514) *
                 C32913) *
                C32767) *
               C32639 * C462 -
           (((C3338 + C3339) * C32913 + (C3340 + C3341) * C813 +
             (C3342 + C3343) * C812) *
                C32767 +
            ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
             (C2783 + C2782) * C812) *
                C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32578 * C32892 +
            (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
               C32639 * C461 -
           ((C7789 * C6487 + C8517 + C8517 + C32899 * C6493 + C7787 * C1694 +
             C8516 + C8516 + C7779 * C1700 + C7785 * C1141 + C8515 + C8515 +
             C7778 * C1159 + C7783 * C679 + C8514 + C8514 + C7777 * C689) *
                C32578 * C32767 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32578 * C32892) *
               C32639 * C462) *
              C463 +
          (((C8229 + C8228 + C8227 + C8226) * C32578 * C32892 +
            (C7783 * C680 + C8518 + C8518 + C7777 * C690 + C7785 * C1140 +
             C8519 + C8519 + C7778 * C1158 + C7787 * C1695 + C8520 + C8520 +
             C7779 * C1701 + C7789 * C6678 + C8521 + C8521 + C32899 * C6680) *
                C32578 * C32767) *
               C32639 * C462 -
           ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
            (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C812 +
             (C2782 + C2783) * C813 + C2790 * C32913) *
                C32892 +
            ((C4673 + C4674) * C812 + C5089 * C813 + C4336 * C32913) * C32767) *
               C571 -
           (((C4675 + C4676) * C32913 + (C4677 + C4678) * C813 +
             (C4679 + C4680) * C812) *
                C32767 +
            (C5090 * C32913 + C5091 * C813 + (C4674 + C4673) * C812) * C32892) *
               C572) *
              C461 +
          ((((C5300 + C5301) * C812 + (C4894 + C4893) * C813 +
             (C4892 + C4891) * C32913) *
                C32892 +
            ((C2733 * C1142 + C5290 + C5290 + C32890 * C1160 + C2735 * C1143 +
              C5291 + C5291 + C32725 * C1161) *
                 C812 +
             (C2733 * C1144 + C5292 + C5292 + C32890 * C1162 + C2735 * C1145 +
              C5293 + C5293 + C32725 * C1163) *
                 C813 +
             (C2733 * C1146 + C5294 + C5294 + C32890 * C1164 + C2735 * C1147 +
              C5295 + C5295 + C32725 * C1165) *
                 C32913) *
                C32767) *
               C572 -
           (((C4891 + C4892) * C32913 + (C4893 + C4894) * C813 +
             (C5301 + C5300) * C812) *
                C32767 +
            ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
             (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
              C2897 + C2897 + C32890 * C258) *
                 C812) *
                C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32578 * C32892 +
            (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
               C571 -
           ((C9902 + C9903 + C9904 + C9905) * C32578 * C32767 +
            (C9901 + C9900 + C9899 + C9898) * C32578 * C32892) *
               C572) *
              C461 +
          (((C10316 + C10317 + C10318 + C10319) * C32578 * C32892 +
            (C7783 * C1142 + C10304 + C10304 + C7777 * C1160 + C7785 * C1143 +
             C10305 + C10305 + C7778 * C1161 + C7787 * C6488 + C10306 + C10306 +
             C7779 * C6494 + C7789 * C6489 + C10307 + C10307 + C32899 * C6495) *
                C32578 * C32767) *
               C572 -
           ((C10319 + C10318 + C10317 + C10316) * C32578 * C32767 +
            (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
             C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
             C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
                C32578 * C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
             C3010 + C3010 + C32725 * C689) *
                C812 +
            (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C32639 * C230 -
          (((C2735 * C1139 + C3479 + C3479 + C32725 * C1157 + C2733 * C681 +
             C3478 + C3478 + C32890 * C691) *
                C32913 +
            (C2735 * C1140 + C3477 + C3477 + C32725 * C1158 + C2733 * C680 +
             C3476 + C3476 + C32890 * C690) *
                C813 +
            (C2735 * C1141 + C3475 + C3475 + C32725 * C1159 + C2733 * C679 +
             C3474 + C3474 + C32890 * C689) *
                C812) *
               C32767 +
           ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C812) *
               C32892) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C812 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C813 +
            (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
             C2903 + C2903 + C32725 * C1005) *
                C32913) *
               C32892 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C812 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C813 +
            (C2733 * C1139 + C4487 + C4487 + C32890 * C1157 + C2735 * C1696 +
             C4488 + C4488 + C32725 * C1702) *
                C32913) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
             C3010 + C3010 + C32725 * C689) *
                C812 +
            (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C3338 + C3339) * C32913 + (C3340 + C3341) * C813 +
            (C3342 + C3343) * C812) *
               C32767 +
           ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
            (C2783 + C2782) * C812) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C2790 * C812 + C2791 * C813 + (C2789 + C2788) * C32913) * C32892 +
           (C4336 * C812 + (C3339 + C3338) * C813 +
            (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
             C3325 + C3325 + C32725 * C693) *
                C32913) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C4673 + C4674) * C812 + (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C336 -
          (((C4675 + C4676) * C32913 + (C4677 + C4678) * C813 +
            (C4679 + C4680) * C812) *
               C32767 +
           ((C3340 + C3341) * C32913 + (C3342 + C3343) * C813 +
            (C4674 + C4673) * C812) *
               C32892) *
              C337 +
          (((C4680 + C4679) * C812 + (C4678 + C4677) * C813 +
            (C4676 + C4675) * C32913) *
               C32892 +
           ((C2733 * C2071 + C4651 + C4651 + C32890 * C2083 + C2735 * C2601 +
             C4652 + C4652 + C32725 * C2607) *
                C812 +
            (C2733 * C2070 + C4653 + C4653 + C32890 * C2082 + C2735 * C2602 +
             C4654 + C4654 + C32725 * C2608) *
                C813 +
            (C2733 * C2069 + C4655 + C4655 + C32890 * C2081 + C2735 * C2603 +
             C4656 + C4656 + C32725 * C2609) *
                C32913) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
           (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
              C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32578 * C32892 +
           (C7783 * C341 + C8368 + C8368 + C7777 * C361 + C7785 * C681 + C8369 +
            C8369 + C7778 * C691 + C7787 * C1139 + C8370 + C8370 +
            C7779 * C1157 + C7789 * C1696 + C8371 + C8371 + C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C7789 * C6487 + C8517 + C8517 + C32899 * C6493 + C7787 * C1694 +
            C8516 + C8516 + C7779 * C1700 + C7785 * C1141 + C8515 + C8515 +
            C7778 * C1159 + C7783 * C679 + C8514 + C8514 + C7777 * C689) *
               C32578 * C32767 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32578 * C32892) *
              C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32578 * C32892 +
           (C7783 * C1141 + C9760 + C9760 + C7777 * C1159 + C7785 * C1694 +
            C9761 + C9761 + C7778 * C1700 + C7787 * C6487 + C9762 + C9762 +
            C7779 * C6493 + C7789 * C6768 + C9763 + C9763 + C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
              C336 -
          ((C9902 + C9903 + C9904 + C9905) * C32578 * C32767 +
           (C9901 + C9900 + C9899 + C9898) * C32578 * C32892) *
              C337 +
          ((C9905 + C9904 + C9903 + C9902) * C32578 * C32892 +
           (C7783 * C2071 + C9878 + C9878 + C7777 * C2083 + C7785 * C2601 +
            C9879 + C9879 + C7778 * C2607 + C7787 * C7115 + C9880 + C9880 +
            C7779 * C7121 + C7789 * C7643 + C9881 + C9881 + C32899 * C7645) *
               C32578 * C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
              C2739 + C2739 + C32725 * C258) *
                 C812 +
             (C2782 + C2783) * C813 + C2790 * C32913) *
                C32892 +
            ((C4673 + C4674) * C812 + C5089 * C813 + C4336 * C32913) * C32767) *
               C571 -
           (((C4675 + C4676) * C32913 + (C4677 + C4678) * C813 +
             (C4679 + C4680) * C812) *
                C32767 +
            (C5090 * C32913 + C5091 * C813 + (C4674 + C4673) * C812) * C32892) *
               C572) *
              C32625 * C463 +
          (((C5089 * C812 + C4336 * C813 + (C3339 + C3338) * C32913) * C32892 +
            ((C4678 + C4677) * C812 + (C4676 + C4675) * C813 +
             (C2733 * C347 + C3018 + C3018 + C32890 * C367 + C2735 * C2275 +
              C3019 + C3019 + C32725 * C2277) *
                 C32913) *
                C32767) *
               C572 -
           (((C3338 + C3339) * C32913 + C5090 * C813 + C5091 * C812) * C32767 +
            ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
             (C2783 + C2782) * C812) *
                C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 +
             C7793 + C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 +
             C7779 * C259 + C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
                C32578 * C32892 +
            (C9898 + C9899 + C9900 + C9901) * C32578 * C32767) *
               C571 -
           ((C9902 + C9903 + C9904 + C9905) * C32578 * C32767 +
            (C9901 + C9900 + C9899 + C9898) * C32578 * C32892) *
               C572) *
              C32625 * C463 +
          (((C8383 + C8382 + C8381 + C8380) * C32578 * C32892 +
            (C7783 * C345 + C8072 + C8072 + C7777 * C365 + C7785 * C1144 +
             C8073 + C8073 + C7778 * C1162 + C7787 * C1145 + C8074 + C8074 +
             C7779 * C1163 + C7789 * C7324 + C8075 + C8075 + C32899 * C7326) *
                C32578 * C32767) *
               C572 -
           ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
            (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
             C3010 + C3010 + C32725 * C689) *
                C812 +
            (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C3338 + C3339) * C32913 + (C3340 + C3341) * C813 +
            (C3342 + C3343) * C812) *
               C32767 +
           ((C2787 + C2786) * C32913 + (C2785 + C2784) * C813 +
            (C2783 + C2782) * C812) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C2790 * C812 + C2791 * C813 + (C2789 + C2788) * C32913) * C32892 +
           (C4336 * C812 + (C3339 + C3338) * C813 +
            (C2733 * C339 + C3324 + C3324 + C32890 * C359 + C2735 * C683 +
             C3325 + C3325 + C32725 * C693) *
                C32913) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C2733 * C115 + C2738 + C2738 + C32890 * C129 + C2735 * C238 +
             C2739 + C2739 + C32725 * C258) *
                C812 +
            (C2782 + C2783) * C813 + C2790 * C32913) *
               C32892 +
           ((C2733 * C343 + C3011 + C3011 + C32890 * C363 + C2735 * C679 +
             C3010 + C3010 + C32725 * C689) *
                C812 +
            (C3343 + C3342) * C813 + C4336 * C32913) *
               C32767) *
              C32639 * C230 -
          (((C2735 * C1139 + C3479 + C3479 + C32725 * C1157 + C2733 * C681 +
             C3478 + C3478 + C32890 * C691) *
                C32913 +
            (C2735 * C1140 + C3477 + C3477 + C32725 * C1158 + C2733 * C680 +
             C3476 + C3476 + C32890 * C690) *
                C813 +
            (C2735 * C1141 + C3475 + C3475 + C32725 * C1159 + C2733 * C679 +
             C3474 + C3474 + C32890 * C689) *
                C812) *
               C32767 +
           ((C3178 + C3179) * C32913 + (C3180 + C3181) * C813 +
            (C2735 * C239 + C2896 + C2896 + C32725 * C259 + C2733 * C238 +
             C2897 + C2897 + C32890 * C258) *
                C812) *
               C32892) *
              C32639 * C231 +
          (((C2733 * C239 + C2898 + C2898 + C32890 * C259 + C2735 * C995 +
             C2899 + C2899 + C32725 * C1007) *
                C812 +
            (C2733 * C240 + C2900 + C2900 + C32890 * C260 + C2735 * C994 +
             C2901 + C2901 + C32725 * C1006) *
                C813 +
            (C2733 * C241 + C2902 + C2902 + C32890 * C261 + C2735 * C993 +
             C2903 + C2903 + C32725 * C1005) *
                C32913) *
               C32892 +
           ((C2733 * C1141 + C4483 + C4483 + C32890 * C1159 + C2735 * C1694 +
             C4484 + C4484 + C32725 * C1700) *
                C812 +
            (C2733 * C1140 + C4485 + C4485 + C32890 * C1158 + C2735 * C1695 +
             C4486 + C4486 + C32725 * C1701) *
                C813 +
            (C2733 * C1139 + C4487 + C4487 + C32890 * C1157 + C2735 * C1696 +
             C4488 + C4488 + C32725 * C1702) *
                C32913) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C32625 * C110 -
          ((C8380 + C8381 + C8382 + C8383) * C32578 * C32767 +
           (C7843 + C7842 + C7841 + C7840) * C32578 * C32892) *
              C32639 * C32625 * C111 +
          ((C7847 + C7846 + C7845 + C7844) * C32578 * C32892 +
           (C7783 * C341 + C8368 + C8368 + C7777 * C361 + C7785 * C681 + C8369 +
            C8369 + C7778 * C691 + C7787 * C1139 + C8370 + C8370 +
            C7779 * C1157 + C7789 * C1696 + C8371 + C8371 + C32899 * C1702) *
               C32578 * C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7783 * C115 + C7792 + C7792 + C7777 * C129 + C7785 * C238 + C7793 +
            C7793 + C7778 * C258 + C7787 * C239 + C7794 + C7794 + C7779 * C259 +
            C7789 * C995 + C7795 + C7795 + C32899 * C1007) *
               C32578 * C32892 +
           (C7783 * C343 + C8067 + C8067 + C7777 * C363 + C7785 * C679 + C8066 +
            C8066 + C7778 * C689 + C7787 * C1141 + C8065 + C8065 +
            C7779 * C1159 + C7789 * C1694 + C8064 + C8064 + C32899 * C1700) *
               C32578 * C32767) *
              C32639 * C230 -
          ((C7789 * C6487 + C8517 + C8517 + C32899 * C6493 + C7787 * C1694 +
            C8516 + C8516 + C7779 * C1700 + C7785 * C1141 + C8515 + C8515 +
            C7778 * C1159 + C7783 * C679 + C8514 + C8514 + C7777 * C689) *
               C32578 * C32767 +
           (C7789 * C996 + C7950 + C7950 + C32899 * C1008 + C7787 * C995 +
            C7951 + C7951 + C7779 * C1007 + C7785 * C239 + C7952 + C7952 +
            C7778 * C259 + C7783 * C238 + C7953 + C7953 + C7777 * C258) *
               C32578 * C32892) *
              C32639 * C231 +
          ((C7783 * C239 + C7954 + C7954 + C7777 * C259 + C7785 * C995 + C7955 +
            C7955 + C7778 * C1007 + C7787 * C996 + C7956 + C7956 +
            C7779 * C1008 + C7789 * C6409 + C7957 + C7957 + C32899 * C6413) *
               C32578 * C32892 +
           (C7783 * C1141 + C9760 + C9760 + C7777 * C1159 + C7785 * C1694 +
            C9761 + C9761 + C7778 * C1700 + C7787 * C6487 + C9762 + C9762 +
            C7779 * C6493 + C7789 * C6768 + C9763 + C9763 + C32899 * C6770) *
               C32578 * C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C32639 * C461 -
           ((C1361 + C1362 + C1363) * C32913 + (C1364 + C1365 + C1366) * C813 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C812) *
               C32680 * C32639 * C462) *
              C463 +
          (((C1366 + C1365 + C1364) * C812 + (C1363 + C1362 + C1361) * C813 +
            (C815 * C235 + C1346 + C1346 + C32954 * C255 + C817 * C242 + C1347 +
             C1347 + C32942 * C262 + C819 * C1330 + C1348 + C1348 +
             C32922 * C1332) *
                C32913) *
               C32680 * C32639 * C462 -
           ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
            (C875 + C874 + C873) * C812) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C32639 * C461 -
           (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
               C32680 * C32639 * C462) *
              C463 +
          ((C489 * C102 + C488 * C103 + C487 * C104 + C486 * C105 +
            (C113 * C465 + C477 + C477 + C32662 * C467) * C106) *
               C32680 * C32639 * C462 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
             C165 * C32913) *
                C32955 +
            (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
               C32639 * C461 -
           ((C2296 * C32913 + C2297 * C813 +
             (C113 * C1142 + C1953 + C1953 + C32662 * C1160) * C812) *
                C32925 +
            (C2298 * C32913 + C2299 * C813 +
             (C113 * C679 + C695 + C695 + C32662 * C689) * C812) *
                C32944 +
            (C488 * C32913 + C489 * C813 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
                C32955) *
               C32639 * C462) *
              C463 +
          (((C489 * C812 + C488 * C813 + C487 * C32913) * C32955 +
            (C2299 * C812 + C2298 * C813 +
             (C113 * C682 + C698 + C698 + C32662 * C692) * C32913) *
                C32944 +
            (C2297 * C812 + C2296 * C813 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32913) *
                C32925) *
               C32639 * C462 -
           ((C1840 * C32913 + C1839 * C813 + C1838 * C812) * C32925 +
            (C595 * C32913 + C596 * C813 + C597 * C812) * C32944 +
            (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C32639 * C461 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C32639 * C462) *
              C463 +
          (((C5920 + C5919 + C5918) * C32951 +
            (C5917 + C5916 + C5915) * C32938 +
            (C5417 * C235 + C5900 + C5900 + C5411 * C255 + C5419 * C242 +
             C5901 + C5901 + C5412 * C262 + C5421 * C1330 + C5902 + C5902 +
             C32922 * C1332) *
                C32913) *
               C32680 * C32639 * C462 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C32639 * C461 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C32639 * C462) *
              C463 +
          ((C6322 * C237 + C6592 + C6592 + C6316 * C257 + C6324 * C240 + C6593 +
            C6593 + C6317 * C260 + C6326 * C994 + C6594 + C6594 +
            C6318 * C1006 + C6328 * C997 + C6595 + C6595 + C6319 * C1009 +
            C6330 * C6588 + C6596 + C6596 + C6320 * C6590) *
               C32578 * C32680 * C32639 * C462 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32578 * C32955 +
            (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
               C32639 * C461 -
           ((C5421 * C6488 + C6997 + C6997 + C32922 * C6494 + C5419 * C1143 +
             C6998 + C6998 + C5412 * C1161 + C5417 * C1142 + C6999 + C6999 +
             C5411 * C1160) *
                C32578 * C32925 +
            (C5421 * C1694 + C6248 + C6248 + C32922 * C1700 + C5419 * C1141 +
             C6247 + C6247 + C5412 * C1159 + C5417 * C679 + C6246 + C6246 +
             C5411 * C689) *
                C32578 * C32944 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32578 * C32955) *
               C32639 * C462) *
              C463 +
          (((C5920 + C5919 + C5918) * C32578 * C32955 +
            (C5417 * C680 + C6249 + C6249 + C5411 * C690 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5421 * C1695 + C6251 + C6251 +
             C32922 * C1701) *
                C32578 * C32944 +
            (C5417 * C1144 + C7328 + C7328 + C5411 * C1162 + C5419 * C1145 +
             C7329 + C7329 + C5412 * C1163 + C5421 * C7324 + C7330 + C7330 +
             C32922 * C7326) *
                C32578 * C32925) *
               C32639 * C462 -
           ((C5421 * C1145 + C5738 + C5738 + C32922 * C1163 + C5419 * C1144 +
             C5737 + C5737 + C5412 * C1162 + C5417 * C345 + C5736 + C5736 +
             C5411 * C365) *
                C32578 * C32925 +
            (C6097 + C6098 + C6099) * C32578 * C32944 +
            (C5477 + C5476 + C5475) * C32578 * C32955) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C571 -
           ((C1543 + C1544 + C1545) * C32913 + (C1546 + C1547 + C1548) * C813 +
            (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
             C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
             C32954 * C363) *
                C812) *
               C32680 * C572) *
              C461 +
          (((C815 * C679 + C1704 + C1704 + C32954 * C689 + C817 * C1141 +
             C1705 + C1705 + C32942 * C1159 + C819 * C1694 + C1706 + C1706 +
             C32922 * C1700) *
                C812 +
            (C815 * C680 + C1707 + C1707 + C32954 * C690 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C819 * C1695 + C1709 + C1709 +
             C32922 * C1701) *
                C813 +
            (C815 * C681 + C1710 + C1710 + C32954 * C691 + C817 * C1139 +
             C1711 + C1711 + C32942 * C1157 + C819 * C1696 + C1712 + C1712 +
             C32922 * C1702) *
                C32913) *
               C32680 * C572 -
           ((C1361 + C1362 + C1363) * C32913 + (C1364 + C1365 + C1366) * C813 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C812) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C571 -
           (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
            (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
               C32680 * C572) *
              C461 +
          (((C113 * C679 + C695 + C695 + C32662 * C689) * C102 +
            (C113 * C680 + C696 + C696 + C32662 * C690) * C103 +
            (C113 * C681 + C697 + C697 + C32662 * C691) * C104 +
            (C113 * C682 + C698 + C698 + C32662 * C692) * C105 +
            (C113 * C683 + C699 + C699 + C32662 * C693) * C106) *
               C32680 * C572 -
           (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
             C165 * C32913) *
                C32955 +
            (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
               C571 -
           ((C2125 + C2126 + C2127) * C32925 +
            (C2095 + C2094 + C2124) * C32944 +
            (C2091 + C2090 + C2123) * C32955) *
               C572) *
              C461 +
          (((C2628 + C2613 + C2614) * C32955 +
            (C2629 + C2617 + C2618) * C32944 +
            ((C113 * C2601 + C2619 + C2619 + C32662 * C2607) * C812 +
             (C113 * C2602 + C2620 + C2620 + C32662 * C2608) * C813 +
             (C113 * C2603 + C2621 + C2621 + C32662 * C2609) * C32913) *
                C32925) *
               C572 -
           ((C2618 + C2617 + C2629) * C32925 +
            (C2614 + C2613 + C2628) * C32944 +
            (C488 * C32913 + C489 * C813 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
                C32955) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C461 +
          (((C5417 * C679 + C6246 + C6246 + C5411 * C689 + C5419 * C1141 +
             C6247 + C6247 + C5412 * C1159 + C5421 * C1694 + C6248 + C6248 +
             C32922 * C1700) *
                C32951 +
            (C5417 * C680 + C6249 + C6249 + C5411 * C690 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5421 * C1695 + C6251 + C6251 +
             C32922 * C1701) *
                C32938 +
            (C5417 * C681 + C6252 + C6252 + C5411 * C691 + C5419 * C1139 +
             C6253 + C6253 + C5412 * C1157 + C5421 * C1696 + C6254 + C6254 +
             C32922 * C1702) *
                C32913) *
               C32680 * C572 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C461 +
          ((C6322 * C679 + C6772 + C6772 + C6316 * C689 + C6324 * C1141 +
            C6773 + C6773 + C6317 * C1159 + C6326 * C1694 + C6774 + C6774 +
            C6318 * C1700 + C6328 * C6487 + C6775 + C6775 + C6319 * C6493 +
            C6330 * C6768 + C6776 + C6776 + C6320 * C6770) *
               C32578 * C32680 * C572 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32578 * C32955 +
            (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
               C571 -
           ((C7173 + C7174 + C7175) * C32578 * C32925 +
            (C7172 + C7171 + C7170) * C32578 * C32944 +
            (C7169 + C7168 + C7167) * C32578 * C32955) *
               C572) *
              C461 +
          (((C7674 + C7675 + C7676) * C32578 * C32955 +
            (C7677 + C7678 + C7679) * C32578 * C32944 +
            (C5417 * C2601 + C7659 + C7659 + C5411 * C2607 + C5419 * C7115 +
             C7660 + C7660 + C5412 * C7121 + C5421 * C7643 + C7661 + C7661 +
             C32922 * C7645) *
                C32578 * C32925) *
               C572 -
           ((C7679 + C7678 + C7677) * C32578 * C32925 +
            (C7676 + C7675 + C7674) * C32578 * C32944 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32578 * C32955) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C32680 * C32639 * C32625 * C110 -
              (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
               C164 * C102) *
                  C32680 * C32639 * C32625 * C111 +
              (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
               (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
                  C32680 * C32639 * C32625 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 +
               C164 * C103 + C165 * C104 + C166 * C105 + C167 * C106) *
                  C32680 * C32639 * C230 -
              ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
               (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
               (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
               (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
               (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
                  C32680 * C32639 * C231 +
              ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
               (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
               (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
               (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
               (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
                  C32680 * C32639 * C232) *
             C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C336 -
          ((C113 * C339 + C370 + C370 + C32662 * C359) * C106 +
           (C113 * C340 + C371 + C371 + C32662 * C360) * C105 +
           (C113 * C341 + C372 + C372 + C32662 * C361) * C104 +
           (C113 * C342 + C373 + C373 + C32662 * C362) * C103 +
           (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
              C32680 * C337 +
          ((C113 * C344 + C375 + C375 + C32662 * C364) * C102 +
           (C113 * C345 + C376 + C376 + C32662 * C365) * C103 +
           (C113 * C346 + C377 + C377 + C32662 * C366) * C104 +
           (C113 * C347 + C378 + C378 + C32662 * C367) * C105 +
           (C113 * C348 + C379 + C379 + C32662 * C368) * C106) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
           (C875 + C874 + C873) * C812) *
              C32680 * C32639 * C32625 * C111 +
          (C883 * C812 + (C881 + C880 + C879) * C813 +
           (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
            C853 + C32942 * C254 + C819 * C243 + C854 + C854 + C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C230 -
          ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 + C1013 +
            C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
            C32954 * C256) *
               C32913 +
           (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 + C1016 +
            C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
            C32954 * C257) *
               C813 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C812) *
              C32680 * C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C812 +
           (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
            C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
            C32922 * C1009) *
               C813 +
           (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 + C1028 +
            C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C336 -
          ((C819 * C1139 + C1167 + C1167 + C32922 * C1157 + C817 * C681 +
            C1168 + C1168 + C32942 * C691 + C815 * C341 + C1169 + C1169 +
            C32954 * C361) *
               C32913 +
           (C819 * C1140 + C1170 + C1170 + C32922 * C1158 + C817 * C680 +
            C1171 + C1171 + C32942 * C690 + C815 * C342 + C1172 + C1172 +
            C32954 * C362) *
               C813 +
           (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
            C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
            C32954 * C363) *
               C812) *
              C32680 * C337 +
          ((C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C812 +
           (C815 * C345 + C1179 + C1179 + C32954 * C365 + C817 * C1144 + C1180 +
            C1180 + C32942 * C1162 + C819 * C1145 + C1181 + C1181 +
            C32922 * C1163) *
               C813 +
           (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 + C1183 +
            C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
            C32922 * C1165) *
               C32913) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 + C597 * C813 +
            C596 * C32913) *
               C32944 +
           ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 + C1838 * C813 +
            C1839 * C32913) *
               C32925) *
              C32639 * C32625 * C110 -
          ((C1840 * C32913 + C1839 * C813 + C1838 * C812) * C32925 +
           (C595 * C32913 + C596 * C813 + C597 * C812) * C32944 +
           (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
              C32639 * C32625 * C111 +
          ((C165 * C812 + C166 * C813 + C167 * C32913) * C32955 +
           (C596 * C812 + C595 * C813 + C594 * C32913) * C32944 +
           (C1839 * C812 + C1840 * C813 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 + C597 * C813 +
            C596 * C32913) *
               C32944 +
           ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 + C1838 * C813 +
            C1839 * C32913) *
               C32925) *
              C32639 * C230 -
          (((C113 * C1146 + C1951 + C1951 + C32662 * C1164) * C32913 +
            (C113 * C1144 + C1952 + C1952 + C32662 * C1162) * C813 +
            (C113 * C1142 + C1953 + C1953 + C32662 * C1160) * C812) *
               C32925 +
           ((C113 * C681 + C697 + C697 + C32662 * C691) * C32913 +
            (C113 * C680 + C696 + C696 + C32662 * C690) * C813 +
            (C113 * C679 + C695 + C695 + C32662 * C689) * C812) *
               C32944 +
           (C488 * C32913 + C489 * C813 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
               C32955) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C812 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C813 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
               C32955 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C812 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C813 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
               C32944 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C812 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C813 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
              C336 -
          ((C2125 + C2126 + C2127) * C32925 + (C2095 + C2094 + C2124) * C32944 +
           (C2091 + C2090 + C2123) * C32955) *
              C337 +
          (C2129 * C32955 + (C2127 + C2126 + C2125) * C32944 +
           ((C113 * C2072 + C2105 + C2105 + C32662 * C2084) * C812 +
            (C113 * C2073 + C2106 + C2106 + C32662 * C2085) * C813 +
            (C113 * C2074 + C2107 + C2107 + C32662 * C2086) * C32913) *
               C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C336 -
          ((C5421 * C1139 + C5724 + C5724 + C32922 * C1157 + C5419 * C681 +
            C5725 + C5725 + C5412 * C691 + C5417 * C341 + C5726 + C5726 +
            C5411 * C361) *
               C32913 +
           (C5421 * C1140 + C5727 + C5727 + C32922 * C1158 + C5419 * C680 +
            C5728 + C5728 + C5412 * C690 + C5417 * C342 + C5729 + C5729 +
            C5411 * C362) *
               C32938 +
           (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
            C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
            C5411 * C363) *
               C32951) *
              C32680 * C337 +
          ((C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32951 +
           (C5417 * C345 + C5736 + C5736 + C5411 * C365 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5421 * C1145 + C5738 + C5738 +
            C32922 * C1163) *
               C32938 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32913) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C336 -
          (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
           C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
           C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
           C6322 * C343 + C6501 + C6501 + C6316 * C363) *
              C32578 * C32680 * C337 +
          (C6322 * C344 + C6502 + C6502 + C6316 * C364 + C6324 * C1142 + C6503 +
           C6503 + C6317 * C1160 + C6326 * C1143 + C6504 + C6504 +
           C6318 * C1161 + C6328 * C6488 + C6505 + C6505 + C6319 * C6494 +
           C6330 * C6489 + C6506 + C6506 + C6320 * C6495) *
              C32578 * C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C5421 * C1145 + C5738 + C5738 + C32922 * C1163 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5417 * C345 + C5736 + C5736 +
            C5411 * C365) *
               C32578 * C32925 +
           (C6097 + C6098 + C6099) * C32578 * C32944 +
           (C5477 + C5476 + C5475) * C32578 * C32955) *
              C32639 * C32625 * C111 +
          (C5485 * C32578 * C32955 + (C6096 + C6095 + C6094) * C32578 * C32944 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C5421 * C6488 + C6997 + C6997 + C32922 * C6494 + C5419 * C1143 +
            C6998 + C6998 + C5412 * C1161 + C5417 * C1142 + C6999 + C6999 +
            C5411 * C1160) *
               C32578 * C32925 +
           (C5421 * C1694 + C6248 + C6248 + C32922 * C1700 + C5419 * C1141 +
            C6247 + C6247 + C5412 * C1159 + C5417 * C679 + C6246 + C6246 +
            C5411 * C689) *
               C32578 * C32944 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32578 * C32955) *
              C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32578 * C32955 +
           (C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
            C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
            C32922 * C6493) *
               C32578 * C32944 +
           (C5417 * C1143 + C7003 + C7003 + C5411 * C1161 + C5419 * C6488 +
            C7004 + C7004 + C5412 * C6494 + C5421 * C6489 + C7005 + C7005 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
              C336 -
          ((C7173 + C7174 + C7175) * C32578 * C32925 +
           (C7172 + C7171 + C7170) * C32578 * C32944 +
           (C7169 + C7168 + C7167) * C32578 * C32955) *
              C337 +
          (C7178 * C32955 + (C7175 + C7174 + C7173) * C32578 * C32944 +
           (C5417 * C2072 + C7146 + C7146 + C5411 * C2084 + C5419 * C7116 +
            C7147 + C7147 + C5412 * C7122 + C5421 * C7117 + C7148 + C7148 +
            C32922 * C7123) *
               C32578 * C32925) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C571 -
           ((C1543 + C1544 + C1545) * C32913 + (C1546 + C1547 + C1548) * C813 +
            (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
             C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
             C32954 * C363) *
                C812) *
               C32680 * C572) *
              C32625 * C463 +
          (((C1548 + C1547 + C1546) * C812 + (C1545 + C1544 + C1543) * C813 +
            (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 + C1529 +
             C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
             C32922 * C1514) *
                C32913) *
               C32680 * C572 -
           ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
            (C875 + C874 + C873) * C812) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C571 -
           (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
            (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
               C32680 * C572) *
              C32625 * C463 +
          ((C597 * C102 + C596 * C103 + C595 * C104 + C594 * C105 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C106) *
               C32680 * C572 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
             C165 * C32913) *
                C32955 +
            (C2123 + C2090 + C2091) * C32944 + C2129 * C32925) *
               C571 -
           ((C2125 + C2126 + C2127) * C32925 +
            (C2095 + C2094 + C2124) * C32944 +
            (C2091 + C2090 + C2123) * C32955) *
               C572) *
              C32625 * C463 +
          (((C2449 + C2450 + C2451) * C32955 +
            (C2452 + C2453 + C2454) * C32944 +
            (C2121 * C812 + C2120 * C813 +
             (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32913) *
                C32925) *
               C572 -
           ((C2454 + C2453 + C2452) * C32925 +
            (C2451 + C2450 + C2449) * C32944 +
            (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C32625 * C463 +
          (((C6099 + C6098 + C6097) * C32951 +
            (C6096 + C6095 + C6094) * C32938 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32913) *
               C32680 * C572 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C32625 * C463 +
          ((C6322 * C342 + C6682 + C6682 + C6316 * C362 + C6324 * C680 + C6683 +
            C6683 + C6317 * C690 + C6326 * C1140 + C6684 + C6684 +
            C6318 * C1158 + C6328 * C1695 + C6685 + C6685 + C6319 * C1701 +
            C6330 * C6678 + C6686 + C6686 + C6320 * C6680) *
               C32578 * C32680 * C572 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32578 * C32955 +
            (C7167 + C7168 + C7169) * C32578 * C32944 + C7178 * C32925) *
               C571 -
           ((C7173 + C7174 + C7175) * C32578 * C32925 +
            (C7172 + C7171 + C7170) * C32578 * C32944 +
            (C7169 + C7168 + C7167) * C32578 * C32955) *
               C572) *
              C32625 * C463 +
          (((C6099 + C6098 + C6097) * C32578 * C32955 +
            (C7495 + C7496 + C7497) * C32578 * C32944 +
            (C5417 * C2070 + C7486 + C7486 + C5411 * C2082 + C5419 * C2602 +
             C7487 + C7487 + C5412 * C2608 + C5421 * C7476 + C7488 + C7488 +
             C32922 * C7478) *
                C32578 * C32925) *
               C572 -
           ((C7497 + C7496 + C7495) * C32578 * C32925 +
            (C6097 + C6098 + C6099) * C32578 * C32944 +
            (C5477 + C5476 + C5475) * C32578 * C32955) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C230 -
          ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
           (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
           (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
           (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
           (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
              C32680 * C32639 * C231 +
          ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
           (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
           (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
           (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
           (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C32625 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C32680 * C32639 * C32625 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
           (C875 + C874 + C873) * C812) *
              C32680 * C32639 * C32625 * C111 +
          (C883 * C812 + (C881 + C880 + C879) * C813 +
           (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
            C853 + C32942 * C254 + C819 * C243 + C854 + C854 + C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C230 -
          ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 + C1013 +
            C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
            C32954 * C256) *
               C32913 +
           (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 + C1016 +
            C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
            C32954 * C257) *
               C813 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C812) *
              C32680 * C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C812 +
           (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
            C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
            C32922 * C1009) *
               C813 +
           (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 + C1028 +
            C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 + C597 * C813 +
            C596 * C32913) *
               C32944 +
           ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 + C1838 * C813 +
            C1839 * C32913) *
               C32925) *
              C32639 * C32625 * C110 -
          ((C1840 * C32913 + C1839 * C813 + C1838 * C812) * C32925 +
           (C595 * C32913 + C596 * C813 + C597 * C812) * C32944 +
           (C166 * C32913 + C165 * C813 + C164 * C812) * C32955) *
              C32639 * C32625 * C111 +
          ((C165 * C812 + C166 * C813 + C167 * C32913) * C32955 +
           (C596 * C812 + C595 * C813 + C594 * C32913) * C32944 +
           (C1839 * C812 + C1840 * C813 +
            (C113 * C348 + C379 + C379 + C32662 * C368) * C32913) *
               C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C812 + C164 * C813 +
            C165 * C32913) *
               C32955 +
           ((C113 * C343 + C374 + C374 + C32662 * C363) * C812 + C597 * C813 +
            C596 * C32913) *
               C32944 +
           ((C113 * C344 + C375 + C375 + C32662 * C364) * C812 + C1838 * C813 +
            C1839 * C32913) *
               C32925) *
              C32639 * C230 -
          (((C113 * C1146 + C1951 + C1951 + C32662 * C1164) * C32913 +
            (C113 * C1144 + C1952 + C1952 + C32662 * C1162) * C813 +
            (C113 * C1142 + C1953 + C1953 + C32662 * C1160) * C812) *
               C32925 +
           ((C113 * C681 + C697 + C697 + C32662 * C691) * C32913 +
            (C113 * C680 + C696 + C696 + C32662 * C690) * C813 +
            (C113 * C679 + C695 + C695 + C32662 * C689) * C812) *
               C32944 +
           (C488 * C32913 + C489 * C813 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C812) *
               C32955) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C812 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C813 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C32913) *
               C32955 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C812 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C813 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C32913) *
               C32944 +
           ((C113 * C1143 + C1957 + C1957 + C32662 * C1161) * C812 +
            (C113 * C1145 + C1958 + C1958 + C32662 * C1163) * C813 +
            (C113 * C1147 + C1959 + C1959 + C32662 * C1165) * C32913) *
               C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C32625 * C110 -
          ((C5421 * C1145 + C5738 + C5738 + C32922 * C1163 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5417 * C345 + C5736 + C5736 +
            C5411 * C365) *
               C32578 * C32925 +
           (C6097 + C6098 + C6099) * C32578 * C32944 +
           (C5477 + C5476 + C5475) * C32578 * C32955) *
              C32639 * C32625 * C111 +
          (C5485 * C32578 * C32955 + (C6096 + C6095 + C6094) * C32578 * C32944 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32578 * C32925) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32578 * C32955 +
           (C5417 * C343 + C5732 + C5732 + C5411 * C363 + C5419 * C679 + C5731 +
            C5731 + C5412 * C689 + C5421 * C1141 + C5730 + C5730 +
            C32922 * C1159) *
               C32578 * C32944 +
           (C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32578 * C32925) *
              C32639 * C230 -
          ((C5421 * C6488 + C6997 + C6997 + C32922 * C6494 + C5419 * C1143 +
            C6998 + C6998 + C5412 * C1161 + C5417 * C1142 + C6999 + C6999 +
            C5411 * C1160) *
               C32578 * C32925 +
           (C5421 * C1694 + C6248 + C6248 + C32922 * C1700 + C5419 * C1141 +
            C6247 + C6247 + C5412 * C1159 + C5417 * C679 + C6246 + C6246 +
            C5411 * C689) *
               C32578 * C32944 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32578 * C32955) *
              C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32578 * C32955 +
           (C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
            C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
            C32922 * C6493) *
               C32578 * C32944 +
           (C5417 * C1143 + C7003 + C7003 + C5411 * C1161 + C5419 * C6488 +
            C7004 + C7004 + C5412 * C6494 + C5421 * C6489 + C7005 + C7005 +
            C32922 * C6495) *
               C32578 * C32925) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
             C164 * C2730 + C165 * C2731 + C166 * C32891) *
                C32892 +
            (C3779 + C3780 + C3781 + C3782) * C32767) *
               C32639 * C461 -
           ((C3921 * C32891 + C2298 * C2731 + C2299 * C2730 + C2626 * C2729) *
                C32767 +
            (C487 * C32891 + C488 * C2731 + C489 * C2730 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
                C32892) *
               C32639 * C462) *
              C463 +
          (((C489 * C2729 + C488 * C2730 + C487 * C2731 + C486 * C32891) *
                C32892 +
            (C2299 * C2729 + C2298 * C2730 + C3921 * C2731 +
             (C113 * C683 + C699 + C699 + C32662 * C693) * C32891) *
                C32767) *
               C32639 * C462 -
           ((C594 * C32891 + C595 * C2731 + C596 * C2730 + C597 * C2729) *
                C32767 +
            (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
                C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
              C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
              C32922 * C259) *
                 C32872 +
             (C5475 + C5476 + C5477) * C32588) *
                C32892 +
            ((C7167 + C7168 + C7169) * C32872 +
             (C6099 + C6098 + C6097) * C32588) *
                C32767) *
               C32639 * C461 -
           (((C9169 + C9170 + C9171) * C32588 +
             (C7676 + C7675 + C7674) * C32872) *
                C32767 +
            ((C5918 + C5919 + C5920) * C32588 +
             (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
              C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
              C5411 * C258) *
                 C32872) *
                C32892) *
               C32639 * C462) *
              C463 +
          ((((C5920 + C5919 + C5918) * C32872 +
             (C5917 + C5916 + C5915) * C32588) *
                C32892 +
            ((C9171 + C9170 + C9169) * C32872 +
             (C5417 * C681 + C6252 + C6252 + C5411 * C691 + C5419 * C1139 +
              C6253 + C6253 + C5412 * C1157 + C5421 * C1696 + C6254 + C6254 +
              C32922 * C1702) *
                 C32588) *
                C32767) *
               C32639 * C462 -
           (((C6094 + C6095 + C6096) * C32588 +
             (C6097 + C6098 + C6099) * C32872) *
                C32767 +
            ((C5480 + C5479 + C5478) * C32588 +
             (C5477 + C5476 + C5475) * C32872) *
                C32892) *
               C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
             C164 * C2730 + C165 * C2731 + C166 * C32891) *
                C32892 +
            (C3779 + C3780 + C3781 + C3782) * C32767) *
               C571 -
           ((C3783 + C3784 + C3785 + C3786) * C32767 +
            (C3782 + C3781 + C3780 + C3779) * C32892) *
               C572) *
              C461 +
          (((C4186 + C4187 + C4188 + C4189) * C32892 +
            (C2627 * C2729 + C2297 * C2730 + C2296 * C2731 +
             (C113 * C2275 + C2287 + C2287 + C32662 * C2277) * C32891) *
                C32767) *
               C572 -
           ((C4189 + C4188 + C4187 + C4186) * C32767 +
            (C487 * C32891 + C488 * C2731 + C489 * C2730 +
             (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
                C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
              C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
              C32922 * C259) *
                 C32872 +
             (C5475 + C5476 + C5477) * C32588) *
                C32892 +
            ((C7167 + C7168 + C7169) * C32872 + C9368 * C32588) * C32767) *
               C571 -
           (((C7497 + C7496 + C7495) * C32588 +
             (C7172 + C7171 + C7170) * C32872) *
                C32767 +
            (C9369 * C32588 + (C7169 + C7168 + C7167) * C32872) * C32892) *
               C572) *
              C461 +
          ((((C7674 + C7675 + C7676) * C32872 +
             (C9171 + C9170 + C9169) * C32588) *
                C32892 +
            ((C7677 + C7678 + C7679) * C32872 +
             (C5417 * C1144 + C7328 + C7328 + C5411 * C1162 + C5419 * C1145 +
              C7329 + C7329 + C5412 * C1163 + C5421 * C7324 + C7330 + C7330 +
              C32922 * C7326) *
                 C32588) *
                C32767) *
               C572 -
           (((C9169 + C9170 + C9171) * C32588 +
             (C7676 + C7675 + C7674) * C32872) *
                C32767 +
            ((C5918 + C5919 + C5920) * C32588 +
             (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
              C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
              C5411 * C258) *
                 C32872) *
                C32892) *
               C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
               C32767) *
              C32639 * C230 -
          (((C113 * C682 + C698 + C698 + C32662 * C692) * C32891 +
            C2298 * C2731 + C2299 * C2730 + C2626 * C2729) *
               C32767 +
           (C487 * C32891 + C488 * C2731 + C489 * C2730 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
               C32892) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C2729 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C2730 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C2731 +
            (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
               C32892 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C2729 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C2730 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C2731 +
            (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
               C32767) *
              C32639 * C32625 * C110 -
          ((C594 * C32891 + C595 * C2731 + C596 * C2730 + C597 * C2729) *
               C32767 +
           (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C165 * C2729 + C166 * C2730 + C167 * C2731 + C168 * C32891) *
               C32892 +
           (C596 * C2729 + C595 * C2730 + C594 * C2731 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C3779 + C3780 + C3781 + C3782) * C32767) *
              C336 -
          ((C3783 + C3784 + C3785 + C3786) * C32767 +
           (C3782 + C3781 + C3780 + C3779) * C32892) *
              C337 +
          ((C3786 + C3785 + C3784 + C3783) * C32892 +
           (C2122 * C2729 + C2121 * C2730 + C2120 * C2731 +
            (C113 * C2445 + C2455 + C2455 + C32662 * C2447) * C32891) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C6094 + C6095 + C6096) * C32588 +
            (C6097 + C6098 + C6099) * C32872) *
               C32767 +
           ((C5480 + C5479 + C5478) * C32588 +
            (C5477 + C5476 + C5475) * C32872) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C5485 * C32872 + (C5483 + C5482 + C5481) * C32588) * C32892 +
           ((C6096 + C6095 + C6094) * C32872 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C5421 * C1695 + C6251 + C6251 + C32922 * C1701 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5417 * C680 + C6249 + C6249 +
             C5411 * C690) *
                C32588 +
            (C7676 + C7675 + C7674) * C32872) *
               C32767 +
           ((C5918 + C5919 + C5920) * C32588 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32872) *
               C32892) *
              C32639 * C231 +
          (((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 +
             C5606 + C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
             C32922 * C1008) *
                C32872 +
            (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 +
             C5609 + C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
             C32922 * C1009) *
                C32588) *
               C32892 +
           ((C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
             C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
             C32922 * C6493) *
                C32872 +
            (C5417 * C1140 + C8814 + C8814 + C5411 * C1158 + C5419 * C1695 +
             C8815 + C8815 + C5412 * C1701 + C5421 * C6678 + C8816 + C8816 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C336 -
          (((C7497 + C7496 + C7495) * C32588 +
            (C7172 + C7171 + C7170) * C32872) *
               C32767 +
           ((C6097 + C6098 + C6099) * C32588 +
            (C7169 + C7168 + C7167) * C32872) *
               C32892) *
              C337 +
          ((C7177 * C32872 + (C7495 + C7496 + C7497) * C32588) * C32892 +
           ((C7175 + C7174 + C7173) * C32872 +
            (C5417 * C2070 + C7486 + C7486 + C5411 * C2082 + C5419 * C2602 +
             C7487 + C7487 + C5412 * C2608 + C5421 * C7476 + C7488 + C7488 +
             C32922 * C7478) *
                C32588) *
               C32767) *
              C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 +
             C164 * C2730 + C165 * C2731 + C166 * C32891) *
                C32892 +
            (C3779 + C3780 + C3781 + C3782) * C32767) *
               C571 -
           ((C3783 + C3784 + C3785 + C3786) * C32767 +
            (C3782 + C3781 + C3780 + C3779) * C32892) *
               C572) *
              C32625 * C463 +
          (((C4052 + C4053 + C4054 + C4055) * C32892 +
            (C1838 * C2729 + C1839 * C2730 + C1840 * C2731 +
             (C113 * C348 + C379 + C379 + C32662 * C368) * C32891) *
                C32767) *
               C572 -
           ((C4055 + C4054 + C4053 + C4052) * C32767 +
            (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
                C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
              C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
              C32922 * C259) *
                 C32872 +
             (C5475 + C5476 + C5477) * C32588) *
                C32892 +
            ((C7167 + C7168 + C7169) * C32872 + C9368 * C32588) * C32767) *
               C571 -
           (((C7497 + C7496 + C7495) * C32588 +
             (C7172 + C7171 + C7170) * C32872) *
                C32767 +
            (C9369 * C32588 + (C7169 + C7168 + C7167) * C32872) * C32892) *
               C572) *
              C32625 * C463 +
          (((C9368 * C32872 + (C6096 + C6095 + C6094) * C32588) * C32892 +
            ((C7495 + C7496 + C7497) * C32872 +
             (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
              C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
              C32922 * C1165) *
                 C32588) *
                C32767) *
               C572 -
           (((C6094 + C6095 + C6096) * C32588 + C9369 * C32872) * C32767 +
            ((C5480 + C5479 + C5478) * C32588 +
             (C5477 + C5476 + C5475) * C32872) *
                C32892) *
               C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
               C32767) *
              C32639 * C32625 * C110 -
          ((C594 * C32891 + C595 * C2731 + C596 * C2730 + C597 * C2729) *
               C32767 +
           (C167 * C32891 + C166 * C2731 + C165 * C2730 + C164 * C2729) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C165 * C2729 + C166 * C2730 + C167 * C2731 + C168 * C32891) *
               C32892 +
           (C596 * C2729 + C595 * C2730 + C594 * C2731 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C32891) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C2729 + C164 * C2730 +
            C165 * C2731 + C166 * C32891) *
               C32892 +
           (C2118 * C2729 + C597 * C2730 + C596 * C2731 + C595 * C32891) *
               C32767) *
              C32639 * C230 -
          (((C113 * C682 + C698 + C698 + C32662 * C692) * C32891 +
            C2298 * C2731 + C2299 * C2730 + C2626 * C2729) *
               C32767 +
           (C487 * C32891 + C488 * C2731 + C489 * C2730 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C2729) *
               C32892) *
              C32639 * C231 +
          (((C113 * C239 + C270 + C270 + C32662 * C259) * C2729 +
            (C113 * C240 + C271 + C271 + C32662 * C260) * C2730 +
            (C113 * C241 + C272 + C272 + C32662 * C261) * C2731 +
            (C113 * C242 + C273 + C273 + C32662 * C262) * C32891) *
               C32892 +
           ((C113 * C1141 + C1954 + C1954 + C32662 * C1159) * C2729 +
            (C113 * C1140 + C1955 + C1955 + C32662 * C1158) * C2730 +
            (C113 * C1139 + C1956 + C1956 + C32662 * C1157) * C2731 +
            (C113 * C1512 + C3680 + C3680 + C32662 * C1514) * C32891) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C32625 * C110 -
          (((C6094 + C6095 + C6096) * C32588 +
            (C6097 + C6098 + C6099) * C32872) *
               C32767 +
           ((C5480 + C5479 + C5478) * C32588 +
            (C5477 + C5476 + C5475) * C32872) *
               C32892) *
              C32639 * C32625 * C111 +
          ((C5485 * C32872 + (C5483 + C5482 + C5481) * C32588) * C32892 +
           ((C6096 + C6095 + C6094) * C32872 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32588) *
               C32767) *
              C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32872 +
            (C5475 + C5476 + C5477) * C32588) *
               C32892 +
           ((C7167 + C7168 + C7169) * C32872 +
            (C6099 + C6098 + C6097) * C32588) *
               C32767) *
              C32639 * C230 -
          (((C5421 * C1695 + C6251 + C6251 + C32922 * C1701 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5417 * C680 + C6249 + C6249 +
             C5411 * C690) *
                C32588 +
            (C7676 + C7675 + C7674) * C32872) *
               C32767 +
           ((C5918 + C5919 + C5920) * C32588 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32872) *
               C32892) *
              C32639 * C231 +
          (((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 +
             C5606 + C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
             C32922 * C1008) *
                C32872 +
            (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 +
             C5609 + C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
             C32922 * C1009) *
                C32588) *
               C32892 +
           ((C5417 * C1141 + C7000 + C7000 + C5411 * C1159 + C5419 * C1694 +
             C7001 + C7001 + C5412 * C1700 + C5421 * C6487 + C7002 + C7002 +
             C32922 * C6493) *
                C32872 +
            (C5417 * C1140 + C8814 + C8814 + C5411 * C1158 + C5419 * C1695 +
             C8815 + C8815 + C5412 * C1701 + C5421 * C6678 + C8816 + C8816 +
             C32922 * C6680) *
                C32588) *
               C32767) *
              C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C32639 * C461 -
           (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
               C32680 * C32639 * C462) *
              C463 +
          ((C489 * C102 + C488 * C103 + C487 * C104 + C486 * C105 +
            (C113 * C465 + C477 + C477 + C32662 * C467) * C106) *
               C32680 * C32639 * C462 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C32639 * C461 -
           ((C1361 + C1362 + C1363) * C32913 + (C1364 + C1365 + C1366) * C813 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C812) *
               C32680 * C32639 * C462) *
              C463 +
          (((C1366 + C1365 + C1364) * C812 + (C1363 + C1362 + C1361) * C813 +
            (C815 * C235 + C1346 + C1346 + C32954 * C255 + C817 * C242 + C1347 +
             C1347 + C32942 * C262 + C819 * C1330 + C1348 + C1348 +
             C32922 * C1332) *
                C32913) *
               C32680 * C32639 * C462 -
           ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
            (C875 + C874 + C873) * C812) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C32639 * C461 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C32639 * C462) *
              C463 +
          (((C5920 + C5919 + C5918) * C32951 +
            (C5917 + C5916 + C5915) * C32938 +
            (C5417 * C235 + C5900 + C5900 + C5411 * C255 + C5419 * C242 +
             C5901 + C5901 + C5412 * C262 + C5421 * C1330 + C5902 + C5902 +
             C32922 * C1332) *
                C32913) *
               C32680 * C32639 * C462 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C32639 * C461 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C32639 * C462) *
              C463 +
          ((C6322 * C237 + C6592 + C6592 + C6316 * C257 + C6324 * C240 + C6593 +
            C6593 + C6317 * C260 + C6326 * C994 + C6594 + C6594 +
            C6318 * C1006 + C6328 * C997 + C6595 + C6595 + C6319 * C1009 +
            C6330 * C6588 + C6596 + C6596 + C6320 * C6590) *
               C32578 * C32680 * C32639 * C462 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C32639 * C461) *
              C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C571 -
           (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
            (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
               C32680 * C572) *
              C461 +
          (((C113 * C679 + C695 + C695 + C32662 * C689) * C102 +
            (C113 * C680 + C696 + C696 + C32662 * C690) * C103 +
            (C113 * C681 + C697 + C697 + C32662 * C691) * C104 +
            (C113 * C682 + C698 + C698 + C32662 * C692) * C105 +
            (C113 * C683 + C699 + C699 + C32662 * C693) * C106) *
               C32680 * C572 -
           (C486 * C106 + C487 * C105 + C488 * C104 + C489 * C103 +
            (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C571 -
           ((C1543 + C1544 + C1545) * C32913 + (C1546 + C1547 + C1548) * C813 +
            (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
             C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
             C32954 * C363) *
                C812) *
               C32680 * C572) *
              C461 +
          (((C815 * C679 + C1704 + C1704 + C32954 * C689 + C817 * C1141 +
             C1705 + C1705 + C32942 * C1159 + C819 * C1694 + C1706 + C1706 +
             C32922 * C1700) *
                C812 +
            (C815 * C680 + C1707 + C1707 + C32954 * C690 + C817 * C1140 +
             C1708 + C1708 + C32942 * C1158 + C819 * C1695 + C1709 + C1709 +
             C32922 * C1701) *
                C813 +
            (C815 * C681 + C1710 + C1710 + C32954 * C691 + C817 * C1139 +
             C1711 + C1711 + C32942 * C1157 + C819 * C1696 + C1712 + C1712 +
             C32922 * C1702) *
                C32913) *
               C32680 * C572 -
           ((C1361 + C1362 + C1363) * C32913 + (C1364 + C1365 + C1366) * C813 +
            (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 +
             C1019 + C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
             C32954 * C258) *
                C812) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C461 +
          (((C5417 * C679 + C6246 + C6246 + C5411 * C689 + C5419 * C1141 +
             C6247 + C6247 + C5412 * C1159 + C5421 * C1694 + C6248 + C6248 +
             C32922 * C1700) *
                C32951 +
            (C5417 * C680 + C6249 + C6249 + C5411 * C690 + C5419 * C1140 +
             C6250 + C6250 + C5412 * C1158 + C5421 * C1695 + C6251 + C6251 +
             C32922 * C1701) *
                C32938 +
            (C5417 * C681 + C6252 + C6252 + C5411 * C691 + C5419 * C1139 +
             C6253 + C6253 + C5412 * C1157 + C5421 * C1696 + C6254 + C6254 +
             C32922 * C1702) *
                C32913) *
               C32680 * C572 -
           ((C5915 + C5916 + C5917) * C32913 +
            (C5918 + C5919 + C5920) * C32938 +
            (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
             C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
             C5411 * C258) *
                C32951) *
               C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C461 +
          ((C6322 * C679 + C6772 + C6772 + C6316 * C689 + C6324 * C1141 +
            C6773 + C6773 + C6317 * C1159 + C6326 * C1694 + C6774 + C6774 +
            C6318 * C1700 + C6328 * C6487 + C6775 + C6775 + C6319 * C6493 +
            C6330 * C6768 + C6776 + C6776 + C6320 * C6770) *
               C32578 * C32680 * C572 -
           (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
            C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
            C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
            C6322 * C238 + C6420 + C6420 + C6316 * C258) *
               C32578 * C32680 * C571) *
              C462) *
         C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C230 -
          ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
           (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
           (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
           (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
           (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
              C32680 * C32639 * C231 +
          ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
           (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
           (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
           (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
           (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C32625 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C32680 * C32639 * C32625 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C336 -
          ((C113 * C339 + C370 + C370 + C32662 * C359) * C106 +
           (C113 * C340 + C371 + C371 + C32662 * C360) * C105 +
           (C113 * C341 + C372 + C372 + C32662 * C361) * C104 +
           (C113 * C342 + C373 + C373 + C32662 * C362) * C103 +
           (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
              C32680 * C337 +
          ((C113 * C344 + C375 + C375 + C32662 * C364) * C102 +
           (C113 * C345 + C376 + C376 + C32662 * C365) * C103 +
           (C113 * C346 + C377 + C377 + C32662 * C366) * C104 +
           (C113 * C347 + C378 + C378 + C32662 * C367) * C105 +
           (C113 * C348 + C379 + C379 + C32662 * C368) * C106) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
           (C875 + C874 + C873) * C812) *
              C32680 * C32639 * C32625 * C111 +
          (C883 * C812 + (C881 + C880 + C879) * C813 +
           (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
            C853 + C32942 * C254 + C819 * C243 + C854 + C854 + C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C230 -
          ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 + C1013 +
            C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
            C32954 * C256) *
               C32913 +
           (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 + C1016 +
            C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
            C32954 * C257) *
               C813 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C812) *
              C32680 * C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C812 +
           (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
            C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
            C32922 * C1009) *
               C813 +
           (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 + C1028 +
            C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C336 -
          ((C819 * C1139 + C1167 + C1167 + C32922 * C1157 + C817 * C681 +
            C1168 + C1168 + C32942 * C691 + C815 * C341 + C1169 + C1169 +
            C32954 * C361) *
               C32913 +
           (C819 * C1140 + C1170 + C1170 + C32922 * C1158 + C817 * C680 +
            C1171 + C1171 + C32942 * C690 + C815 * C342 + C1172 + C1172 +
            C32954 * C362) *
               C813 +
           (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
            C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
            C32954 * C363) *
               C812) *
              C32680 * C337 +
          ((C815 * C344 + C1176 + C1176 + C32954 * C364 + C817 * C1142 + C1177 +
            C1177 + C32942 * C1160 + C819 * C1143 + C1178 + C1178 +
            C32922 * C1161) *
               C812 +
           (C815 * C345 + C1179 + C1179 + C32954 * C365 + C817 * C1144 + C1180 +
            C1180 + C32942 * C1162 + C819 * C1145 + C1181 + C1181 +
            C32922 * C1163) *
               C813 +
           (C815 * C346 + C1182 + C1182 + C32954 * C366 + C817 * C1146 + C1183 +
            C1183 + C32942 * C1164 + C819 * C1147 + C1184 + C1184 +
            C32922 * C1165) *
               C32913) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C336 -
          ((C5421 * C1139 + C5724 + C5724 + C32922 * C1157 + C5419 * C681 +
            C5725 + C5725 + C5412 * C691 + C5417 * C341 + C5726 + C5726 +
            C5411 * C361) *
               C32913 +
           (C5421 * C1140 + C5727 + C5727 + C32922 * C1158 + C5419 * C680 +
            C5728 + C5728 + C5412 * C690 + C5417 * C342 + C5729 + C5729 +
            C5411 * C362) *
               C32938 +
           (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
            C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
            C5411 * C363) *
               C32951) *
              C32680 * C337 +
          ((C5417 * C344 + C5733 + C5733 + C5411 * C364 + C5419 * C1142 +
            C5734 + C5734 + C5412 * C1160 + C5421 * C1143 + C5735 + C5735 +
            C32922 * C1161) *
               C32951 +
           (C5417 * C345 + C5736 + C5736 + C5411 * C365 + C5419 * C1144 +
            C5737 + C5737 + C5412 * C1162 + C5421 * C1145 + C5738 + C5738 +
            C32922 * C1163) *
               C32938 +
           (C5417 * C346 + C5739 + C5739 + C5411 * C366 + C5419 * C1146 +
            C5740 + C5740 + C5412 * C1164 + C5421 * C1147 + C5741 + C5741 +
            C32922 * C1165) *
               C32913) *
              C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C336 -
          (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
           C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
           C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
           C6322 * C343 + C6501 + C6501 + C6316 * C363) *
              C32578 * C32680 * C337 +
          (C6322 * C344 + C6502 + C6502 + C6316 * C364 + C6324 * C1142 + C6503 +
           C6503 + C6317 * C1160 + C6326 * C1143 + C6504 + C6504 +
           C6318 * C1161 + C6328 * C6488 + C6505 + C6505 + C6319 * C6494 +
           C6330 * C6489 + C6506 + C6506 + C6320 * C6495) *
              C32578 * C32680 * C338) *
         C32625 * C32613) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
            C165 * C104 + C166 * C105 + C167 * C106) *
               C32680 * C571 -
           (C594 * C106 + C595 * C105 + C596 * C104 + C597 * C103 +
            (C113 * C343 + C374 + C374 + C32662 * C363) * C102) *
               C32680 * C572) *
              C32625 * C463 +
          ((C597 * C102 + C596 * C103 + C595 * C104 + C594 * C105 +
            (C113 * C573 + C585 + C585 + C32662 * C575) * C106) *
               C32680 * C572 -
           (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
            C164 * C102) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
             C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
                C812 +
            (C873 + C874 + C875) * C813 + C883 * C32913) *
               C32680 * C571 -
           ((C1543 + C1544 + C1545) * C32913 + (C1546 + C1547 + C1548) * C813 +
            (C819 * C1141 + C1173 + C1173 + C32922 * C1159 + C817 * C679 +
             C1174 + C1174 + C32942 * C689 + C815 * C343 + C1175 + C1175 +
             C32954 * C363) *
                C812) *
               C32680 * C572) *
              C32625 * C463 +
          (((C1548 + C1547 + C1546) * C812 + (C1545 + C1544 + C1543) * C813 +
            (C815 * C340 + C1528 + C1528 + C32954 * C360 + C817 * C682 + C1529 +
             C1529 + C32942 * C692 + C819 * C1512 + C1530 + C1530 +
             C32922 * C1514) *
                C32913) *
               C32680 * C572 -
           ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
            (C875 + C874 + C873) * C812) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 +
             C5425 + C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
             C32922 * C259) *
                C32951 +
            (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
               C32680 * C571 -
           ((C6094 + C6095 + C6096) * C32913 +
            (C6097 + C6098 + C6099) * C32938 +
            (C5421 * C1141 + C5730 + C5730 + C32922 * C1159 + C5419 * C679 +
             C5731 + C5731 + C5412 * C689 + C5417 * C343 + C5732 + C5732 +
             C5411 * C363) *
                C32951) *
               C32680 * C572) *
              C32625 * C463 +
          (((C6099 + C6098 + C6097) * C32951 +
            (C6096 + C6095 + C6094) * C32938 +
            (C5417 * C340 + C6079 + C6079 + C5411 * C360 + C5419 * C682 +
             C6080 + C6080 + C5412 * C692 + C5421 * C1512 + C6081 + C6081 +
             C32922 * C1514) *
                C32913) *
               C32680 * C572 -
           ((C5481 + C5482 + C5483) * C32913 +
            (C5480 + C5479 + C5478) * C32938 +
            (C5477 + C5476 + C5475) * C32951) *
               C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
            C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
            C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 +
            C6337 + C6337 + C6320 * C1008) *
               C32578 * C32680 * C571 -
           (C6330 * C6487 + C6497 + C6497 + C6320 * C6493 + C6328 * C1694 +
            C6498 + C6498 + C6319 * C1700 + C6326 * C1141 + C6499 + C6499 +
            C6318 * C1159 + C6324 * C679 + C6500 + C6500 + C6317 * C689 +
            C6322 * C343 + C6501 + C6501 + C6316 * C363) *
               C32578 * C32680 * C572) *
              C32625 * C463 +
          ((C6322 * C342 + C6682 + C6682 + C6316 * C362 + C6324 * C680 + C6683 +
            C6683 + C6317 * C690 + C6326 * C1140 + C6684 + C6684 +
            C6318 * C1158 + C6328 * C1695 + C6685 + C6685 + C6319 * C1701 +
            C6330 * C6678 + C6686 + C6686 + C6320 * C6680) *
               C32578 * C32680 * C572 -
           (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 +
            C6339 + C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 +
            C6318 * C260 + C6324 * C237 + C6341 + C6341 + C6317 * C257 +
            C6322 * C116 + C6342 + C6342 + C6316 * C130) *
               C32578 * C32680 * C571) *
              C32625 * C464)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C32625 * C110 -
          (C168 * C106 + C167 * C105 + C166 * C104 + C165 * C103 +
           C164 * C102) *
              C32680 * C32639 * C32625 * C111 +
          (C165 * C102 + C166 * C103 + C167 * C104 + C168 * C105 +
           (C113 * C121 + C153 + C153 + C32662 * C135) * C106) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32662 * C129) * C102 + C164 * C103 +
           C165 * C104 + C166 * C105 + C167 * C106) *
              C32680 * C32639 * C230 -
          ((C113 * C234 + C265 + C265 + C32662 * C254) * C106 +
           (C113 * C235 + C266 + C266 + C32662 * C255) * C105 +
           (C113 * C236 + C267 + C267 + C32662 * C256) * C104 +
           (C113 * C237 + C268 + C268 + C32662 * C257) * C103 +
           (C113 * C238 + C269 + C269 + C32662 * C258) * C102) *
              C32680 * C32639 * C231 +
          ((C113 * C239 + C270 + C270 + C32662 * C259) * C102 +
           (C113 * C240 + C271 + C271 + C32662 * C260) * C103 +
           (C113 * C241 + C272 + C272 + C32662 * C261) * C104 +
           (C113 * C242 + C273 + C273 + C32662 * C262) * C105 +
           (C113 * C243 + C274 + C274 + C32662 * C263) * C106) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C879 + C880 + C881) * C32913 + (C878 + C877 + C876) * C813 +
           (C875 + C874 + C873) * C812) *
              C32680 * C32639 * C32625 * C111 +
          (C883 * C812 + (C881 + C880 + C879) * C813 +
           (C815 * C119 + C852 + C852 + C32954 * C133 + C817 * C234 + C853 +
            C853 + C32942 * C254 + C819 * C243 + C854 + C854 + C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C815 * C115 + C822 + C822 + C32954 * C129 + C817 * C238 + C823 +
            C823 + C32942 * C258 + C819 * C239 + C824 + C824 + C32922 * C259) *
               C812 +
           (C873 + C874 + C875) * C813 + C883 * C32913) *
              C32680 * C32639 * C230 -
          ((C819 * C993 + C1012 + C1012 + C32922 * C1005 + C817 * C241 + C1013 +
            C1013 + C32942 * C261 + C815 * C236 + C1014 + C1014 +
            C32954 * C256) *
               C32913 +
           (C819 * C994 + C1015 + C1015 + C32922 * C1006 + C817 * C240 + C1016 +
            C1016 + C32942 * C260 + C815 * C237 + C1017 + C1017 +
            C32954 * C257) *
               C813 +
           (C819 * C995 + C1018 + C1018 + C32922 * C1007 + C817 * C239 + C1019 +
            C1019 + C32942 * C259 + C815 * C238 + C1020 + C1020 +
            C32954 * C258) *
               C812) *
              C32680 * C32639 * C231 +
          ((C815 * C239 + C1021 + C1021 + C32954 * C259 + C817 * C995 + C1022 +
            C1022 + C32942 * C1007 + C819 * C996 + C1023 + C1023 +
            C32922 * C1008) *
               C812 +
           (C815 * C240 + C1024 + C1024 + C32954 * C260 + C817 * C994 + C1025 +
            C1025 + C32942 * C1006 + C819 * C997 + C1026 + C1026 +
            C32922 * C1009) *
               C813 +
           (C815 * C241 + C1027 + C1027 + C32954 * C261 + C817 * C993 + C1028 +
            C1028 + C32942 * C1005 + C819 * C998 + C1029 + C1029 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C32625 * C110 -
          ((C5481 + C5482 + C5483) * C32913 + (C5480 + C5479 + C5478) * C32938 +
           (C5477 + C5476 + C5475) * C32951) *
              C32680 * C32639 * C32625 * C111 +
          (C5485 * C32951 + (C5483 + C5482 + C5481) * C32938 +
           (C5417 * C119 + C5454 + C5454 + C5411 * C133 + C5419 * C234 + C5455 +
            C5455 + C5412 * C254 + C5421 * C243 + C5456 + C5456 +
            C32922 * C263) *
               C32913) *
              C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C5417 * C115 + C5424 + C5424 + C5411 * C129 + C5419 * C238 + C5425 +
            C5425 + C5412 * C258 + C5421 * C239 + C5426 + C5426 +
            C32922 * C259) *
               C32951 +
           (C5475 + C5476 + C5477) * C32938 + C5485 * C32913) *
              C32680 * C32639 * C230 -
          ((C5421 * C993 + C5596 + C5596 + C32922 * C1005 + C5419 * C241 +
            C5597 + C5597 + C5412 * C261 + C5417 * C236 + C5598 + C5598 +
            C5411 * C256) *
               C32913 +
           (C5421 * C994 + C5599 + C5599 + C32922 * C1006 + C5419 * C240 +
            C5600 + C5600 + C5412 * C260 + C5417 * C237 + C5601 + C5601 +
            C5411 * C257) *
               C32938 +
           (C5421 * C995 + C5602 + C5602 + C32922 * C1007 + C5419 * C239 +
            C5603 + C5603 + C5412 * C259 + C5417 * C238 + C5604 + C5604 +
            C5411 * C258) *
               C32951) *
              C32680 * C32639 * C231 +
          ((C5417 * C239 + C5605 + C5605 + C5411 * C259 + C5419 * C995 + C5606 +
            C5606 + C5412 * C1007 + C5421 * C996 + C5607 + C5607 +
            C32922 * C1008) *
               C32951 +
           (C5417 * C240 + C5608 + C5608 + C5411 * C260 + C5419 * C994 + C5609 +
            C5609 + C5412 * C1006 + C5421 * C997 + C5610 + C5610 +
            C32922 * C1009) *
               C32938 +
           (C5417 * C241 + C5611 + C5611 + C5411 * C261 + C5419 * C993 + C5612 +
            C5612 + C5412 * C1005 + C5421 * C998 + C5613 + C5613 +
            C32922 * C1010) *
               C32913) *
              C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C32625 * C110 -
          (C6330 * C997 + C6338 + C6338 + C6320 * C1009 + C6328 * C994 + C6339 +
           C6339 + C6319 * C1006 + C6326 * C240 + C6340 + C6340 + C6318 * C260 +
           C6324 * C237 + C6341 + C6341 + C6317 * C257 + C6322 * C116 + C6342 +
           C6342 + C6316 * C130) *
              C32578 * C32680 * C32639 * C32625 * C111 +
          (C6322 * C117 + C6343 + C6343 + C6316 * C131 + C6324 * C236 + C6344 +
           C6344 + C6317 * C256 + C6326 * C241 + C6345 + C6345 + C6318 * C261 +
           C6328 * C993 + C6346 + C6346 + C6319 * C1005 + C6330 * C998 + C6347 +
           C6347 + C6320 * C1010) *
              C32578 * C32680 * C32639 * C32625 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C6322 * C115 + C6333 + C6333 + C6316 * C129 + C6324 * C238 + C6334 +
           C6334 + C6317 * C258 + C6326 * C239 + C6335 + C6335 + C6318 * C259 +
           C6328 * C995 + C6336 + C6336 + C6319 * C1007 + C6330 * C996 + C6337 +
           C6337 + C6320 * C1008) *
              C32578 * C32680 * C32639 * C230 -
          (C6330 * C6409 + C6416 + C6416 + C6320 * C6413 + C6328 * C996 +
           C6417 + C6417 + C6319 * C1008 + C6326 * C995 + C6418 + C6418 +
           C6318 * C1007 + C6324 * C239 + C6419 + C6419 + C6317 * C259 +
           C6322 * C238 + C6420 + C6420 + C6316 * C258) *
              C32578 * C32680 * C32639 * C231 +
          (C6322 * C239 + C6421 + C6421 + C6316 * C259 + C6324 * C995 + C6422 +
           C6422 + C6317 * C1007 + C6326 * C996 + C6423 + C6423 +
           C6318 * C1008 + C6328 * C6409 + C6424 + C6424 + C6319 * C6413 +
           C6330 * C6410 + C6425 + C6425 + C6320 * C6414) *
              C32578 * C32680 * C32639 * C232) *
         C32613) /
            (p * q * std::sqrt(p + q));
}
