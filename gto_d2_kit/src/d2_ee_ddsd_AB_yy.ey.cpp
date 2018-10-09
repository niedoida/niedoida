/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddsd_AB_yy.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_2202_12_22(const double ae,
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
    const double C31568 = ae + be;
    const double C31567 = ae * be;
    const double C31566 = yA - yB;
    const double C31575 = 0 * be;
    const double C31635 = 0 * ae;
    const double C31630 = 0 * be;
    const double C31629 = 0 * be;
    const double C31714 = 0 * be;
    const double C31790 = p + q;
    const double C31789 = p * q;
    const double C31796 = bs[3];
    const double C31795 = yP - yQ;
    const double C31803 = bs[4];
    const double C31801 = xP - xQ;
    const double C31811 = bs[5];
    const double C31820 = bs[6];
    const double C31831 = bs[7];
    const double C31858 = bs[2];
    const double C31944 = zP - zQ;
    const double C115 = bs[0];
    const double C32581 = xA - xB;
    const double C32618 = ce + de;
    const double C32617 = ce * de;
    const double C32616 = xC - xD;
    const double C32630 = yC - yD;
    const double C32644 = zC - zD;
    const double C32685 = zA - zB;
    const double C31576 = std::pow(C31568, 2);
    const double C31608 = 2 * C31568;
    const double C31583 = 2 * C31567;
    const double C31577 = C31567 * C31566;
    const double C32668 = std::pow(C31566, 2);
    const double C32727 = C31566 * be;
    const double C32725 = C31566 * ae;
    const double C31632 = C31566 * C31575;
    const double C31631 = C31575 / C31568;
    const double C31678 = -2 * C31575;
    const double C31642 = C31635 / C31568;
    const double C31637 = C31566 * C31630;
    const double C31677 = -2 * C31630;
    const double C31715 = C31714 / C31568;
    const double C31791 = 2 * C31789;
    const double C31798 = std::pow(C31795, 2);
    const double C31844 = C31795 * ae;
    const double C31843 = C31795 * be;
    const double C31813 = std::pow(C31801, 2);
    const double C32047 = std::pow(C31944, 2);
    const double C32584 = C32581 * be;
    const double C32583 = C32581 * ae;
    const double C32582 = std::pow(C32581, 2);
    const double C32893 = 2 * C32618;
    const double C32892 = std::pow(C32618, 2);
    const double C32619 = std::pow(C32616, 2);
    const double C32891 = C32616 * ce;
    const double C32631 = std::pow(C32630, 2);
    const double C32894 = C32630 * ce;
    const double C32645 = std::pow(C32644, 2);
    const double C32895 = C32644 * ce;
    const double C32686 = std::pow(C32685, 2);
    const double C32769 = C32685 * be;
    const double C32767 = C32685 * ae;
    const double C31578 = 2 * C31576;
    const double C31719 = 4 * C31576;
    const double C31676 = C31576 * C31608;
    const double C32596 = std::pow(C31608, -1);
    const double C32887 = std::pow(C31608, -2);
    const double C32669 = C32668 * C31567;
    const double C32896 = std::pow(C32725, 2);
    const double C31640 = C31632 / C31568;
    const double C31687 = ae * C31678;
    const double C31643 = C31637 / C31568;
    const double C31686 = ae * C31677;
    const double C31793 = C31791 / C31790;
    const double C136 =
        ((std::pow(yP - yQ, 2) * bs[2] * std::pow(C31791 / C31790, 2) -
          (bs[1] * C31791) / C31790) *
         C31567) /
        C31576;
    const double C116 = -(C31801 * bs[1] * C31791) / C31790;
    const double C248 = -(C31795 * bs[1] * C31791) / C31790;
    const double C353 = -(C31944 * bs[1] * C31791) / C31790;
    const double C31805 = C31798 * C31803;
    const double C31814 = C31798 * C31811;
    const double C31822 = C31798 * C31820;
    const double C31834 = C31798 * C31831;
    const double C31846 = C31811 * C31844;
    const double C31851 = C31803 * C31844;
    const double C31862 = C31796 * C31844;
    const double C31882 = C31820 * C31844;
    const double C31908 = C31831 * C31844;
    const double C123 = (-(bs[1] * C31844 * C31791) / C31790) / C31568;
    const double C31845 = C31811 * C31843;
    const double C31850 = C31803 * C31843;
    const double C31861 = C31796 * C31843;
    const double C31878 = C31820 * C31843;
    const double C31902 = C31831 * C31843;
    const double C122 = (-(bs[1] * C31843 * C31791) / C31790) / C31568;
    const double C32880 = std::pow(C32583, 2);
    const double C32585 = C32582 * C31567;
    const double C32927 = std::pow(C32893, -2);
    const double C32925 = std::pow(C32893, -1);
    const double C32620 = C32619 * C32617;
    const double C32632 = C32631 * C32617;
    const double C32646 = C32645 * C32617;
    const double C32687 = C32686 * C31567;
    const double C32898 = std::pow(C32767, 2);
    const double C31634 = C31575 / C31578;
    const double C31639 = C31630 / C31578;
    const double C31638 = C31629 / C31578;
    const double C31721 = C31568 * C31719;
    const double C32890 = 4 * C31676;
    const double C32670 = C32669 / C31568;
    const double C31644 = 0 - C31640;
    const double C31692 = C31687 / C31676;
    const double C31691 = C31566 * C31687;
    const double C31647 = 0 - C31643;
    const double C31690 = C31686 / C31676;
    const double C31797 = -C31793;
    const double C31804 = std::pow(C31793, 4);
    const double C31821 = std::pow(C31793, 6);
    const double C31857 = std::pow(C31793, 2);
    const double C137 = ((xP - xQ) *
                         (bs[2] * std::pow(C31793, 2) +
                          std::pow(yP - yQ, 2) * bs[3] * std::pow(-C31793, 3)) *
                         C31567) /
                        C31576;
    const double C32586 = C32585 / C31568;
    const double C32621 = C32620 / C32618;
    const double C32633 = C32632 / C32618;
    const double C32647 = C32646 / C32618;
    const double C32688 = C32687 / C31568;
    const double C32671 = -C32670;
    const double C31648 = C31644 * ae;
    const double C31695 = C31691 / C31576;
    const double C31652 = C31647 * ae;
    const double C31799 = std::pow(C31797, 3);
    const double C31812 = std::pow(C31797, 5);
    const double C31832 = std::pow(C31797, 7);
    const double C31806 = C31805 * C31804;
    const double C31810 = C31803 * C31804;
    const double C31853 = C31804 * C31851;
    const double C31852 = C31804 * C31850;
    const double C31823 = C31822 * C31821;
    const double C31830 = C31820 * C31821;
    const double C31888 = C31821 * C31882;
    const double C31884 = C31821 * C31878;
    const double C31860 = C31858 * C31857;
    const double C124 = (C31801 * C31857 * C31858 * C31843) / C31568;
    const double C125 = (C31801 * C31857 * C31858 * C31844) / C31568;
    const double C262 = (C31795 * C31857 * C31858 * C31843) / C31568 -
                        (be * bs[1] * C31791) / (C31790 * C31568);
    const double C263 = (C31795 * C31857 * C31858 * C31844) / C31568 -
                        (ae * bs[1] * C31791) / (C31790 * C31568);
    const double C367 = (C31944 * C31857 * C31858 * C31843) / C31568;
    const double C368 = (C31944 * C31857 * C31858 * C31844) / C31568;
    const double C32587 = -C32586;
    const double C32622 = -C32621;
    const double C32634 = -C32633;
    const double C32648 = -C32647;
    const double C32689 = -C32688;
    const double C32672 = std::exp(C32671);
    const double C31653 = C31648 / C31568;
    const double C31656 = C31652 / C31568;
    const double C31802 = C31796 * C31799;
    const double C31864 = C31799 * C31862;
    const double C31863 = C31799 * C31861;
    const double C138 =
        ((bs[2] * std::pow(C31793, 2) + C31798 * C31796 * C31799) * C31567 +
         (C31796 * C31799 + C31798 * bs[4] * std::pow(C31793, 4)) * C31567 *
             std::pow(xP - xQ, 2)) /
        C31576;
    const double C278 =
        (ae * C31857 * C31858 * C31843 + be * C31857 * C31858 * C31844 +
         C31795 * (C31858 * C31857 + C31798 * C31796 * C31799) * C31567) /
        C31576;
    const double C31815 = C31814 * C31812;
    const double C31819 = C31811 * C31812;
    const double C31848 = C31812 * C31846;
    const double C31847 = C31812 * C31845;
    const double C31835 = C31834 * C31832;
    const double C31914 = C31832 * C31908;
    const double C31910 = C31832 * C31902;
    const double C31871 = C31810 * C31813;
    const double C31879 = C31801 * C31810;
    const double C31983 = C31810 * ae;
    const double C31981 = C31810 * C31798;
    const double C31980 = C31795 * C31810;
    const double C31979 = C31810 * be;
    const double C32561 = C31810 * C32047;
    const double C32564 = C31944 * C31810;
    const double C31868 = C31801 * C31853;
    const double C31970 = C31795 * C31853;
    const double C31976 = be * C31853;
    const double C31866 = C31801 * C31852;
    const double C31967 = C31795 * C31852;
    const double C31975 = ae * C31852;
    const double C31905 = C31830 * C31813;
    const double C32141 = C31830 * ae;
    const double C32135 = C31830 * C31798;
    const double C32134 = C31795 * C31830;
    const double C32133 = C31830 * be;
    const double C32215 = C31801 * C31830;
    const double C31891 = C31888 * C31813;
    const double C31907 = C31801 * C31888;
    const double C32092 = C31795 * C31888;
    const double C32128 = be * C31888;
    const double C32197 = C31888 * C32047;
    const double C32266 = C31944 * C31888;
    const double C31889 = C31884 * C31813;
    const double C31901 = C31801 * C31884;
    const double C32086 = C31795 * C31884;
    const double C32127 = ae * C31884;
    const double C32196 = C31884 * C32047;
    const double C32265 = C31944 * C31884;
    const double C383 =
        ((zP - zQ) * (C31860 + C31798 * C31796 * C31799) * C31567) / C31576;
    const double C117 = C31860 * C31813 - (bs[1] * C31791) / C31790;
    const double C247 = C31795 * C31801 * C31860;
    const double C249 = C31860 * C31798 - (bs[1] * C31791) / C31790;
    const double C352 = C31944 * C31801 * C31860;
    const double C354 = C31860 * C32047 - (bs[1] * C31791) / C31790;
    const double C705 = C31944 * C31795 * C31860;
    const double C32588 = std::exp(C32587);
    const double C32623 = std::exp(C32622);
    const double C32635 = std::exp(C32634);
    const double C32649 = std::exp(C32648);
    const double C32690 = std::exp(C32689);
    const double C147 = C32672 * C137;
    const double C31579 = C31577 * C32672;
    const double C113 = -(2 * ae * be * (yA - yB) * C32672) / (ae + be);
    const double C114 =
        -((C32672 - (C31566 * 2 * C31567 * C31566 * C32672) / C31568) * 2 *
          C31567) /
        C31568;
    const double C32726 = C32672 / C31608;
    const double C32728 = C32672 * C32725;
    const double C32735 = C32596 * C32672;
    const double C32903 = C32672 * C32727;
    const double C32932 = C32887 * C32672;
    const double C32930 = C32672 * C32896;
    const double C31657 = C31653 - C31639;
    const double C31660 = C31656 - C31638;
    const double C31807 = C31802 + C31806;
    const double C31867 = C31801 * C31802;
    const double C31971 = C31802 * ae;
    const double C31969 = C31795 * C31802;
    const double C31968 = C31802 * be;
    const double C118 =
        2 * C31801 * C31860 + C31801 * (C31860 + C31802 * C31813);
    const double C246 = C31795 * (C31860 + C31802 * C31813);
    const double C351 = C31944 * (C31860 + C31802 * C31813);
    const double C1024 =
        2 * C31795 * C31860 + C31795 * (C31860 + C31802 * C31798);
    const double C1158 = C31944 * (C31860 + C31802 * C31798);
    const double C2090 =
        2 * C31944 * C31860 + C31944 * (C31860 + C31802 * C32047);
    const double C2091 =
        3 * (C31860 + C31802 * C32047) +
        C31944 * (2 * C31944 * C31802 + C31944 * (C31802 + C31810 * C32047));
    const double C127 = (C31857 * C31858 * C31844 + C31864 * C31813) / C31568;
    const double C129 =
        (2 * C31801 * C31864 + C31801 * (C31864 + C31853 * C31813)) / C31568;
    const double C259 = (C31795 * (C31864 + C31853 * C31813) +
                         (C31860 + C31802 * C31813) * ae) /
                        C31568;
    const double C261 =
        (C31795 * C31801 * C31864 + C31801 * C31860 * ae) / C31568;
    const double C265 =
        (C31857 * C31858 * C31844 + C31795 * (C31795 * C31864 + C31860 * ae) +
         C31795 * C31860 * ae) /
        C31568;
    const double C364 = (C31944 * (C31864 + C31853 * C31813)) / C31568;
    const double C366 = (C31944 * C31801 * C31864) / C31568;
    const double C370 = (C31857 * C31858 * C31844 + C31864 * C32047) / C31568;
    const double C711 = (C31944 * (C31795 * C31864 + C31860 * ae)) / C31568;
    const double C2099 =
        (2 * C31944 * C31864 + C31944 * (C31864 + C31853 * C32047)) / C31568;
    const double C126 = (C31857 * C31858 * C31843 + C31863 * C31813) / C31568;
    const double C128 =
        (2 * C31801 * C31863 + C31801 * (C31863 + C31852 * C31813)) / C31568;
    const double C258 = (C31795 * (C31863 + C31852 * C31813) +
                         (C31860 + C31802 * C31813) * be) /
                        C31568;
    const double C260 =
        (C31795 * C31801 * C31863 + C31801 * C31860 * be) / C31568;
    const double C264 =
        (C31857 * C31858 * C31843 + C31795 * (C31795 * C31863 + C31860 * be) +
         C31795 * C31860 * be) /
        C31568;
    const double C363 = (C31944 * (C31863 + C31852 * C31813)) / C31568;
    const double C365 = (C31944 * C31801 * C31863) / C31568;
    const double C369 = (C31857 * C31858 * C31843 + C31863 * C32047) / C31568;
    const double C710 = (C31944 * (C31795 * C31863 + C31860 * be)) / C31568;
    const double C2098 =
        (2 * C31944 * C31863 + C31944 * (C31863 + C31852 * C32047)) / C31568;
    const double C151 = C32672 * C138;
    const double C31816 = C31810 + C31815;
    const double C31824 = C31819 + C31823;
    const double C31880 = C31819 * C31813;
    const double C31904 = C31801 * C31819;
    const double C32093 = C31819 * ae;
    const double C32089 = C31819 * C31798;
    const double C32088 = C31795 * C31819;
    const double C32087 = C31819 * be;
    const double C32565 = C31819 * C32047;
    const double C31872 = C31848 * C31813;
    const double C31881 = C31801 * C31848;
    const double C31982 = C31795 * C31848;
    const double C32083 = be * C31848;
    const double C32185 = C31944 * C31848;
    const double C32457 = C31848 * C32047;
    const double C2101 =
        (3 * (C31864 + C31853 * C32047) +
         C31944 * (2 * C31944 * C31853 + C31944 * (C31853 + C31848 * C32047))) /
        C31568;
    const double C31870 = C31847 * C31813;
    const double C31877 = C31801 * C31847;
    const double C31978 = C31795 * C31847;
    const double C32082 = ae * C31847;
    const double C32184 = C31944 * C31847;
    const double C32454 = C31847 * C32047;
    const double C2100 =
        (3 * (C31863 + C31852 * C32047) +
         C31944 * (2 * C31944 * C31852 + C31944 * (C31852 + C31847 * C32047))) /
        C31568;
    const double C31836 = C31830 + C31835;
    const double C31917 = C31914 * C31813;
    const double C32140 = C31795 * C31914;
    const double C32218 = C31801 * C31914;
    const double C31915 = C31910 * C31813;
    const double C32132 = C31795 * C31910;
    const double C32214 = C31801 * C31910;
    const double C31874 = C31802 + C31871;
    const double C31885 = 2 * C31879;
    const double C31963 = C31879 * ae;
    const double C31961 = C31795 * C31879;
    const double C31960 = C31879 * be;
    const double C31987 = C31802 + C31981;
    const double C31989 = C31980 * ae;
    const double C31986 = C31980 * be;
    const double C32090 = 2 * C31980;
    const double C32562 = C31802 + C32561;
    const double C32566 = 2 * C32564;
    const double C372 = (C31801 * C31864 + C31868 * C32047) / C31568;
    const double C371 = (C31801 * C31863 + C31866 * C32047) / C31568;
    const double C31984 = C31975 + C31976;
    const double C31912 = C31819 + C31905;
    const double C32147 = C31819 + C32135;
    const double C32149 = C32134 * ae;
    const double C32146 = C32134 * be;
    const double C32227 = C32215 * ae;
    const double C32225 = C32215 * C31798;
    const double C32224 = C31795 * C32215;
    const double C32223 = C32215 * be;
    const double C31894 = C31848 + C31891;
    const double C31913 = 2 * C31907;
    const double C32005 = C31795 * C31907;
    const double C32211 = be * C31907;
    const double C32255 = C31944 * C31907;
    const double C32473 = C31907 * C32047;
    const double C32200 = C31848 + C32197;
    const double C32271 = be * C32266;
    const double C31892 = C31847 + C31889;
    const double C31909 = 2 * C31901;
    const double C32001 = C31795 * C31901;
    const double C32210 = ae * C31901;
    const double C32254 = C31944 * C31901;
    const double C32470 = C31901 * C32047;
    const double C32144 = C32127 + C32128;
    const double C32199 = C31847 + C32196;
    const double C32270 = ae * C32265;
    const double C2116 = C32672 * C383;
    const double C32590 = C32588 * C32583;
    const double C32589 = C32588 / C31608;
    const double C32598 = C32596 * C32588;
    const double C32883 = C32588 * C32584;
    const double C32923 = C32887 * C32588;
    const double C32917 = C32588 * C32880;
    const double C32926 = C32623 * C32891;
    const double C110 =
        (C32623 * std::pow(C32891, 2)) / C32892 + C32623 / C32893;
    const double C112 = C32927 * C32623;
    const double C474 = C32925 * C32623;
    const double C32928 = C32635 * C32894;
    const double C240 =
        (C32635 * std::pow(C32894, 2)) / C32892 + C32635 / C32893;
    const double C242 = C32927 * C32635;
    const double C472 = C32925 * C32635;
    const double C32929 = C32649 * C32895;
    const double C346 =
        (C32649 * std::pow(C32895, 2)) / C32892 + C32649 / C32893;
    const double C348 = C32927 * C32649;
    const double C590 = C32925 * C32649;
    const double C32768 = C32690 / C31608;
    const double C32770 = C32690 * C32767;
    const double C32777 = C32596 * C32690;
    const double C32910 = C32690 * C32769;
    const double C32935 = C32887 * C32690;
    const double C32933 = C32690 * C32898;
    const double C31582 = 2 * C31579;
    const double C31636 = C31579 / C31576;
    const double C31680 = -4 * C31579;
    const double C845 = ((0 * ae) / C31568 - C31579 / C31576) / (2 * C31568) +
                        (0 * ae) / C31568;
    const double C2776 = (0 * ae) / C31568 - C31579 / C31576;
    const double C146 = C113 * C125;
    const double C144 = C113 * C124;
    const double C2115 = C113 * C368;
    const double C2113 = C113 * C367;
    const double C149 = C114 * C117;
    const double C145 = C114 * C116;
    const double C493 = C114 * C247;
    const double C609 = C114 * C352;
    const double C2120 = C114 * C354;
    const double C2114 = C114 * C353;
    const double C2652 = C114 * C705;
    const double C5447 = (C32672 * std::pow(C32727, 2)) / C31576 + C32726;
    const double C32729 = C32728 * C32727;
    const double C32734 = C32728 / C31578;
    const double C32900 = C32728 / C31568;
    const double C32897 = C32596 * C32728;
    const double C32736 = C32735 * C32727;
    const double C32909 = C32735 / C31719;
    const double C32907 = C32725 * C32735;
    const double C32906 = 2 * C32735;
    const double C6332 = C32735 / C32890;
    const double C17926 = C32735 / C31608;
    const double C32937 = C32903 / C31568;
    const double C5448 = (-2 * C32596 * C32903) / C31568;
    const double C32951 = C32930 / C31576;
    const double C31662 = C31657 / C31608;
    const double C31661 = C31566 * C31657;
    const double C31679 = 2 * C31657;
    const double C31665 = C31660 + C31631;
    const double C31808 = C31807 * C31567;
    const double C266 =
        (C31801 * C31863 + C31795 * (C31795 * C31866 + C31867 * be) +
         C31795 * C31867 * be) /
        C31568;
    const double C267 =
        (C31801 * C31864 + C31795 * (C31795 * C31868 + C31867 * ae) +
         C31795 * C31867 * ae) /
        C31568;
    const double C712 = (C31944 * (C31795 * C31866 + C31867 * be)) / C31568;
    const double C713 = (C31944 * (C31795 * C31868 + C31867 * ae)) / C31568;
    const double C250 = C31801 * C31860 + C31867 * C31798;
    const double C355 = C31801 * C31860 + C31867 * C32047;
    const double C706 = C31944 * C31795 * C31867;
    const double C1023 =
        2 * C31795 * C31867 + C31795 * (C31867 + C31879 * C31798);
    const double C1157 = C31944 * (C31867 + C31879 * C31798);
    const double C2089 =
        2 * C31944 * C31867 + C31944 * (C31867 + C31879 * C32047);
    const double C31973 = C31970 + C31971;
    const double C1159 = C31795 * C31860 + C31969 * C32047;
    const double C2638 =
        2 * C31944 * C31969 + C31944 * (C31969 + C31980 * C32047);
    const double C31972 = C31967 + C31968;
    const double C153 = C114 * C118;
    const double C489 = C114 * C246;
    const double C605 = C114 * C351;
    const double C2134 = C114 * C2090;
    const double C12185 = C114 * C2091;
    const double C150 = C113 * C127;
    const double C154 = C113 * C129;
    const double C490 = C113 * C259;
    const double C494 = C113 * C261;
    const double C606 = C113 * C364;
    const double C610 = C113 * C366;
    const double C2121 = C113 * C370;
    const double C2653 = C113 * C711;
    const double C2135 = C113 * C2099;
    const double C148 = C113 * C126;
    const double C152 = C113 * C128;
    const double C488 = C113 * C258;
    const double C492 = C113 * C260;
    const double C604 = C113 * C363;
    const double C608 = C113 * C365;
    const double C2119 = C113 * C369;
    const double C2651 = C113 * C710;
    const double C2133 = C113 * C2098;
    const double C31817 = C31816 * C31567;
    const double C31825 = C31824 * C31567;
    const double C31886 = C31810 + C31880;
    const double C31911 = 2 * C31904;
    const double C32006 = C31904 * ae;
    const double C32004 = C31904 * C31798;
    const double C32003 = C31795 * C31904;
    const double C32002 = C31904 * be;
    const double C32572 = C31904 * C32047;
    const double C2092 =
        3 * (C31867 + C31879 * C32047) +
        C31944 * (2 * C31944 * C31879 + C31944 * (C31879 + C31904 * C32047));
    const double C32099 = C32092 + C32093;
    const double C32098 = C31810 + C32089;
    const double C32100 = C32088 * ae;
    const double C32097 = C32088 * be;
    const double C32136 = 2 * C32088;
    const double C32575 = C32088 * C32047;
    const double C7077 =
        3 * (C31969 + C31980 * C32047) +
        C31944 * (2 * C31944 * C31980 + C31944 * (C31980 + C32088 * C32047));
    const double C32096 = C32086 + C32087;
    const double C32567 = C31810 + C32565;
    const double C31875 = C31853 + C31872;
    const double C31887 = 2 * C31881;
    const double C31962 = C31795 * C31881;
    const double C31999 = be * C31881;
    const double C2097 =
        (2 * C31944 * C31868 + C31944 * (C31868 + C31881 * C32047)) / C31568;
    const double C2103 =
        (3 * (C31868 + C31881 * C32047) +
         C31944 * (2 * C31944 * C31881 + C31944 * (C31881 + C31907 * C32047))) /
        C31568;
    const double C31988 = C31982 + C31983;
    const double C32188 = be * C32185;
    const double C32464 = 2 * C32185;
    const double C32458 = C31853 + C32457;
    const double C12186 = C113 * C2101;
    const double C31873 = C31852 + C31870;
    const double C31883 = 2 * C31877;
    const double C31959 = C31795 * C31877;
    const double C31998 = ae * C31877;
    const double C2096 =
        (2 * C31944 * C31866 + C31944 * (C31866 + C31877 * C32047)) / C31568;
    const double C2102 =
        (3 * (C31866 + C31877 * C32047) +
         C31944 * (2 * C31944 * C31877 + C31944 * (C31877 + C31901 * C32047))) /
        C31568;
    const double C31985 = C31978 + C31979;
    const double C32095 = C32082 + C32083;
    const double C32187 = ae * C32184;
    const double C32460 = 2 * C32184;
    const double C32455 = C31852 + C32454;
    const double C12184 = C113 * C2100;
    const double C31837 = C31836 * C31567;
    const double C31920 = C31888 + C31917;
    const double C32148 = C32140 + C32141;
    const double C32226 = C31795 * C32218;
    const double C31918 = C31884 + C31915;
    const double C32145 = C32132 + C32133;
    const double C32222 = C31795 * C32214;
    const double C119 = 3 * (C31860 + C31802 * C31813) +
                        C31801 * (2 * C31867 + C31801 * C31874);
    const double C245 = C31795 * (2 * C31867 + C31801 * C31874);
    const double C251 = C31860 + C31802 * C31813 + C31874 * C31798;
    const double C350 = C31944 * (2 * C31867 + C31801 * C31874);
    const double C356 = C31860 + C31802 * C31813 + C31874 * C32047;
    const double C707 = C31944 * C31795 * C31874;
    const double C1161 = C31795 * C31867 + C31961 * C32047;
    const double C1025 = 3 * (C31860 + C31802 * C31798) +
                         C31795 * (2 * C31969 + C31795 * C31987);
    const double C1160 = C31860 + C31802 * C31798 + C31987 * C32047;
    const double C1722 = C31944 * (2 * C31969 + C31795 * C31987);
    const double C12172 =
        4 * (2 * C31944 * C31802 + C31944 * C32562) +
        C31944 * (3 * C32562 + C31944 * (2 * C31944 * C31810 +
                                         C31944 * (C31810 + C31819 * C32047)));
    const double C1850 = C113 * C372;
    const double C1848 = C113 * C371;
    const double C31916 = C31801 * C31912;
    const double C32029 = C31912 * ae;
    const double C32027 = C31912 * C31798;
    const double C32026 = C31795 * C31912;
    const double C32025 = C31912 * be;
    const double C32157 = C32147 * ae;
    const double C32155 = C31795 * C32147;
    const double C32154 = C32147 * be;
    const double C32232 = C31904 + C32225;
    const double C32234 = C32224 * ae;
    const double C32231 = C32224 * be;
    const double C31896 = C31801 * C31894;
    const double C31906 = 3 * C31894;
    const double C31953 = C31795 * C31894;
    const double C32022 = be * C31894;
    const double C32258 = be * C32255;
    const double C32474 = C31881 + C32473;
    const double C32203 = be * C32200;
    const double C32465 = C31944 * C32200;
    const double C31895 = C31801 * C31892;
    const double C31900 = 3 * C31892;
    const double C31950 = C31795 * C31892;
    const double C32021 = ae * C31892;
    const double C32220 = C32210 + C32211;
    const double C32257 = ae * C32254;
    const double C32471 = C31877 + C32470;
    const double C32202 = ae * C32199;
    const double C32461 = C31944 * C32199;
    const double C32274 = C32270 + C32271;
    const double C32591 = C32590 * C32584;
    const double C32597 = C32590 / C31578;
    const double C32884 = C32596 * C32590;
    const double C32882 = C32590 / C31568;
    const double C838 = (C32588 * std::pow(C32584, 2)) / C31576 + C32589;
    const double C32599 = C32598 * C32584;
    const double C32901 = C32598 / C31719;
    const double C32888 = C32583 * C32598;
    const double C32886 = 2 * C32598;
    const double C106 = C32598 / C32890;
    const double C17929 = C32598 / C31608;
    const double C32919 = C32883 / C31568;
    const double C839 = (-2 * C32596 * C32883) / C31568;
    const double C32946 = C32917 / C31576;
    const double C111 = (2 * C32925 * C32926) / C32618;
    const double C473 = C32926 / C32618;
    const double C241 = (2 * C32925 * C32928) / C32618;
    const double C471 = C32928 / C32618;
    const double C347 = (2 * C32925 * C32929) / C32618;
    const double C589 = C32929 / C32618;
    const double C10400 = (C32690 * std::pow(C32769, 2)) / C31576 + C32768;
    const double C32771 = C32770 * C32769;
    const double C32776 = C32770 / C31578;
    const double C32902 = C32770 / C31568;
    const double C32899 = C32596 * C32770;
    const double C32778 = C32777 * C32769;
    const double C32916 = C32777 / C31719;
    const double C32914 = C32767 * C32777;
    const double C32913 = 2 * C32777;
    const double C12047 = C32777 / C32890;
    const double C24497 = C32777 / C31608;
    const double C32942 = C32910 / C31568;
    const double C10401 = (-2 * C32596 * C32910) / C31568;
    const double C32953 = C32933 / C31576;
    const double C31584 = C31566 * C31582;
    const double C5457 =
        ((-C31582 / C31568) / C31608 - (0 * be) / C31568) / C31608 -
        (0 * be) / C31568;
    const double C15106 = (-C31582 / C31568) / C31608 - (0 * be) / C31568;
    const double C31646 = C31642 - C31636;
    const double C31688 = C31680 / C31568;
    const double C2793 = C2776 * C259;
    const double C2791 = C2776 * C258;
    const double C2785 = C2776 * C261;
    const double C2783 = C2776 * C260;
    const double C4661 = C2776 * C711;
    const double C4659 = C2776 * C710;
    const double C164 = C144 - C145;
    const double C2137 = C2113 - C2114;
    const double C5475 = C5447 * C138;
    const double C5463 = C5447 * C137;
    const double C7092 = C5447 * C383;
    const double C32730 = C32729 / C31576;
    const double C2790 = C32900 * C138;
    const double C2782 = C32900 * C137;
    const double C4658 = C32900 * C383;
    const double C841 =
        (((0 - (C31566 * C31575) / C31568) * ae) / C31568 - (0 * be) / C31578) /
            (2 * C31568) +
        ((C31566 * (((C32672 - (C31566 * 2 * C31579) / C31568) * ae) / C31568 -
                    C31575 / C31578) +
          C32900) *
         ae) /
            C31568 +
        (0 * ae) / C31568 - C31579 / C31576;
    const double C32931 = 2 * C32897;
    const double C32737 = C32736 / C31568;
    const double C32940 = C32907 / C31578;
    const double C32955 = C32900 - C32937;
    const double C15098 = -C32937;
    const double C32964 = C32951 + C32726;
    const double C31666 = C31661 + 0;
    const double C31698 = C31695 + C31679;
    const double C31669 = C31665 / C31608;
    const double C139 =
        (2 * C31801 * C31808 +
         C31801 * (C31808 +
                   (C31803 * C31804 + C31798 * bs[5] * std::pow(C31797, 5)) *
                       C31567 * std::pow(C31801, 2))) /
        C31576;
    const double C277 =
        (ae * C31801 * C31799 * C31796 * C31843 +
         be * C31801 * C31799 * C31796 * C31844 + C31795 * C31801 * C31808) /
        C31576;
    const double C279 =
        ((C31860 + C31798 * C31796 * C31799) * C31567 +
         ae * (C31795 * C31863 + C31860 * be) +
         be * (C31795 * C31864 + C31860 * ae) +
         C31795 * (ae * C31863 + be * C31864 + C31795 * C31808)) /
        C31576;
    const double C382 = ((zP - zQ) * C31801 * C31808) / C31576;
    const double C384 = ((C31860 + C31798 * C31796 * C31799) * C31567 +
                         C31808 * std::pow(zP - zQ, 2)) /
                        C31576;
    const double C720 = (ae * C31944 * C31863 + be * C31944 * C31864 +
                         C31795 * C31944 * C31808) /
                        C31576;
    const double C856 = C845 * C266;
    const double C3179 = C2776 * C266;
    const double C858 = C845 * C267;
    const double C3181 = C2776 * C267;
    const double C2321 = C113 * C712;
    const double C3351 = C2776 * C712;
    const double C2323 = C113 * C713;
    const double C3353 = C2776 * C713;
    const double C1849 = C114 * C355;
    const double C2322 = C114 * C706;
    const double C2130 = C114 * C2089;
    const double C1033 = (2 * (C31795 * C31864 + C31860 * ae) +
                          C31795 * (C31864 + C31795 * C31973 + C31969 * ae) +
                          (C31860 + C31802 * C31798) * ae) /
                         C31568;
    const double C1170 =
        (C31944 * (C31864 + C31795 * C31973 + C31969 * ae)) / C31568;
    const double C1172 =
        (C31795 * C31864 + C31860 * ae + C31973 * C32047) / C31568;
    const double C2658 = C114 * C1159;
    const double C12472 = C114 * C2638;
    const double C1032 = (2 * (C31795 * C31863 + C31860 * be) +
                          C31795 * (C31863 + C31795 * C31972 + C31969 * be) +
                          (C31860 + C31802 * C31798) * be) /
                         C31568;
    const double C1169 =
        (C31944 * (C31863 + C31795 * C31972 + C31969 * be)) / C31568;
    const double C1171 =
        (C31795 * C31863 + C31860 * be + C31972 * C32047) / C31568;
    const double C165 = C148 - C149;
    const double C166 = C152 - C153;
    const double C498 = C488 - C489;
    const double C499 = C492 - C493;
    const double C614 = C604 - C605;
    const double C615 = C608 - C609;
    const double C2138 = C2119 - C2120;
    const double C2663 = C2651 - C2652;
    const double C2141 = C2133 - C2134;
    const double C31958 = C31801 * C31817;
    const double C31977 = C31795 * C31817;
    const double C32063 = C31944 * C31817;
    const double C140 =
        (3 * (C31808 + C31817 * C31813) +
         C31801 * (2 * C31801 * C31817 +
                   C31801 * (C31817 + (C31811 * C31812 +
                                       C31798 * bs[6] * std::pow(C31793, 6)) *
                                          C31567 * C31813))) /
        C31576;
    const double C276 = (ae * (C31799 * C31796 * C31843 + C31852 * C31813) +
                         be * (C31799 * C31796 * C31844 + C31853 * C31813) +
                         C31795 * (C31808 + C31817 * C31813)) /
                        C31576;
    const double C280 =
        (C31801 * C31808 + ae * (C31795 * C31866 + C31867 * be) +
         be * (C31795 * C31868 + C31867 * ae) +
         C31795 * (ae * C31866 + be * C31868 + C31795 * C31801 * C31817)) /
        C31576;
    const double C381 = ((zP - zQ) * (C31808 + C31817 * C31813)) / C31576;
    const double C385 =
        (C31801 * C31808 + C31801 * C31817 * std::pow(zP - zQ, 2)) / C31576;
    const double C721 = (ae * C31944 * C31866 + be * C31944 * C31868 +
                         C31795 * C31944 * C31801 * C31817) /
                        C31576;
    const double C1042 =
        (2 * (ae * C31863 + be * C31864 + C31795 * C31808) +
         ae * (C31863 + C31795 * C31972 + C31969 * be) +
         be * (C31864 + C31795 * C31973 + C31969 * ae) +
         C31795 * (C31808 + ae * C31972 + be * C31973 +
                   C31795 * (ae * C31852 + be * C31853 + C31795 * C31817))) /
        C31576;
    const double C1185 =
        (C31944 * C31808 + ae * C31944 * C31972 + be * C31944 * C31973 +
         C31795 * (ae * C31944 * C31852 + be * C31944 * C31853 +
                   C31795 * C31944 * C31817)) /
        C31576;
    const double C1186 =
        (ae * (C31863 + C31852 * C32047) + be * (C31864 + C31853 * C32047) +
         C31795 * (C31808 + C31817 * C32047)) /
        C31576;
    const double C2108 =
        (2 * C31944 * C31808 + C31944 * (C31808 + C31817 * C32047)) / C31576;
    const double C31826 = C31825 * C31813;
    const double C31829 = C31801 * C31825;
    const double C32084 = C31795 * C31825;
    const double C32186 = C31944 * C31825;
    const double C32193 = C31825 * C32047;
    const double C31890 = C31801 * C31886;
    const double C31903 = 3 * C31886;
    const double C31954 = C31886 * ae;
    const double C31952 = C31795 * C31886;
    const double C31951 = C31886 * be;
    const double C1022 =
        2 * C31795 * C31874 + C31795 * (C31874 + C31886 * C31798);
    const double C1156 = C31944 * (C31874 + C31886 * C31798);
    const double C2088 =
        2 * C31944 * C31874 + C31944 * (C31874 + C31886 * C32047);
    const double C2093 =
        3 * (C31874 + C31886 * C32047) +
        C31944 * (2 * C31944 * C31886 + C31944 * (C31886 + C31912 * C32047));
    const double C32011 = C32005 + C32006;
    const double C32010 = C31879 + C32004;
    const double C32012 = C32003 * ae;
    const double C32009 = C32003 * be;
    const double C32216 = 2 * C32003;
    const double C2639 =
        2 * C31944 * C31961 + C31944 * (C31961 + C32003 * C32047);
    const double C12281 =
        3 * (C31961 + C32003 * C32047) +
        C31944 * (2 * C31944 * C32003 + C31944 * (C32003 + C32224 * C32047));
    const double C32008 = C32001 + C32002;
    const double C32573 = C31879 + C32572;
    const double C12376 = C114 * C2092;
    const double C32106 = C31795 * C32099;
    const double C32139 = 2 * C32099;
    const double C32126 = be * C32099;
    const double C32264 = C31944 * C32099;
    const double C32479 = C32099 * C32047;
    const double C32107 = C32098 * ae;
    const double C32105 = C31795 * C32098;
    const double C32104 = C32098 * be;
    const double C32137 = 3 * C32098;
    const double C7076 =
        2 * C31944 * C31987 + C31944 * (C31987 + C32098 * C32047);
    const double C7078 =
        3 * (C31987 + C32098 * C32047) +
        C31944 * (2 * C31944 * C32098 + C31944 * (C32098 + C32147 * C32047));
    const double C32576 = C31980 + C32575;
    const double C12476 = C114 * C7077;
    const double C32103 = C31795 * C32096;
    const double C32131 = 2 * C32096;
    const double C32125 = ae * C32096;
    const double C32263 = C31944 * C32096;
    const double C32476 = C32096 * C32047;
    const double C32568 = C31944 * C32567;
    const double C131 = (3 * (C31864 + C31853 * C31813) +
                         C31801 * (2 * C31868 + C31801 * C31875)) /
                        C31568;
    const double C257 = (C31795 * (2 * C31868 + C31801 * C31875) +
                         (2 * C31867 + C31801 * C31874) * ae) /
                        C31568;
    const double C269 =
        (C31864 + C31853 * C31813 + C31795 * (C31795 * C31875 + C31874 * ae) +
         C31795 * C31874 * ae) /
        C31568;
    const double C362 = (C31944 * (2 * C31868 + C31801 * C31875)) / C31568;
    const double C374 = (C31864 + C31853 * C31813 + C31875 * C32047) / C31568;
    const double C715 = (C31944 * (C31795 * C31875 + C31874 * ae)) / C31568;
    const double C2095 =
        (2 * C31944 * C31875 + C31944 * (C31875 + C31894 * C32047)) / C31568;
    const double C31965 = C31962 + C31963;
    const double C2131 = C113 * C2097;
    const double C12377 = C113 * C2103;
    const double C31992 = C31795 * C31988;
    const double C32091 = 2 * C31988;
    const double C32081 = be * C31988;
    const double C2642 =
        (2 * C31944 * C31973 + C31944 * (C31973 + C31988 * C32047)) / C31568;
    const double C7082 =
        (3 * (C31973 + C31988 * C32047) +
         C31944 * (2 * C31944 * C31988 + C31944 * (C31988 + C32099 * C32047))) /
        C31568;
    const double C12175 =
        (4 * (2 * C31944 * C31853 + C31944 * C32458) +
         C31944 * (3 * C32458 + C31944 * (2 * C32185 + C31944 * C32200))) /
        C31568;
    const double C130 = (3 * (C31863 + C31852 * C31813) +
                         C31801 * (2 * C31866 + C31801 * C31873)) /
                        C31568;
    const double C256 = (C31795 * (2 * C31866 + C31801 * C31873) +
                         (2 * C31867 + C31801 * C31874) * be) /
                        C31568;
    const double C268 =
        (C31863 + C31852 * C31813 + C31795 * (C31795 * C31873 + C31874 * be) +
         C31795 * C31874 * be) /
        C31568;
    const double C361 = (C31944 * (2 * C31866 + C31801 * C31873)) / C31568;
    const double C373 = (C31863 + C31852 * C31813 + C31873 * C32047) / C31568;
    const double C714 = (C31944 * (C31795 * C31873 + C31874 * be)) / C31568;
    const double C2094 =
        (2 * C31944 * C31873 + C31944 * (C31873 + C31892 * C32047)) / C31568;
    const double C31964 = C31959 + C31960;
    const double C32007 = C31998 + C31999;
    const double C2129 = C113 * C2096;
    const double C12375 = C113 * C2102;
    const double C31991 = C31795 * C31985;
    const double C32085 = 2 * C31985;
    const double C32080 = ae * C31985;
    const double C1187 =
        (C31808 + C31817 * C32047 + ae * (C31972 + C31985 * C32047) +
         be * (C31973 + C31988 * C32047) +
         C31795 * (ae * (C31852 + C31847 * C32047) +
                   be * (C31853 + C31848 * C32047) +
                   C31795 * (C31817 + C31825 * C32047))) /
        C31576;
    const double C2641 =
        (2 * C31944 * C31972 + C31944 * (C31972 + C31985 * C32047)) / C31568;
    const double C7081 =
        (3 * (C31972 + C31985 * C32047) +
         C31944 * (2 * C31944 * C31985 + C31944 * (C31985 + C32096 * C32047))) /
        C31568;
    const double C32190 = C32187 + C32188;
    const double C12174 =
        (4 * (2 * C31944 * C31852 + C31944 * C32455) +
         C31944 * (3 * C32455 + C31944 * (2 * C32184 + C31944 * C32199))) /
        C31568;
    const double C12192 = C12184 - C12185;
    const double C31838 = C31837 * C31813;
    const double C32129 = C31795 * C31837;
    const double C32198 = C31837 * C32047;
    const double C32212 = C31801 * C31837;
    const double C32267 = C31944 * C31837;
    const double C31923 = C31801 * C31920;
    const double C32028 = C31795 * C31920;
    const double C2105 =
        (3 * (C31875 + C31894 * C32047) +
         C31944 * (2 * C31944 * C31894 + C31944 * (C31894 + C31920 * C32047))) /
        C31568;
    const double C32156 = C31795 * C32148;
    const double C32233 = C32226 + C32227;
    const double C31921 = C31801 * C31918;
    const double C32024 = C31795 * C31918;
    const double C2104 =
        (3 * (C31873 + C31892 * C32047) +
         C31944 * (2 * C31944 * C31892 + C31944 * (C31892 + C31918 * C32047))) /
        C31568;
    const double C32153 = C31795 * C32145;
    const double C32230 = C32222 + C32223;
    const double C157 = C114 * C119;
    const double C485 = C114 * C245;
    const double C601 = C114 * C350;
    const double C1853 = C114 * C356;
    const double C2318 = C114 * C707;
    const double C2314 = C114 * C1161;
    const double C12189 = C114 * C12172;
    const double C31919 = C31911 + C31916;
    const double C32033 = C31886 + C32027;
    const double C32035 = C32026 * ae;
    const double C32032 = C32026 * be;
    const double C32160 = C32136 + C32155;
    const double C32240 = C32232 * ae;
    const double C32238 = C31795 * C32232;
    const double C32237 = C32232 * be;
    const double C31898 = C31887 + C31896;
    const double C12369 =
        (4 * (2 * C31944 * C31881 + C31944 * C32474) +
         C31944 *
             (3 * C32474 +
              C31944 * (2 * C32255 + C31944 * (C31907 + C32218 * C32047)))) /
        C31568;
    const double C32466 = C32464 + C32465;
    const double C31897 = C31883 + C31895;
    const double C32030 = C32021 + C32022;
    const double C32260 = C32257 + C32258;
    const double C12368 =
        (4 * (2 * C31944 * C31877 + C31944 * C32471) +
         C31944 *
             (3 * C32471 +
              C31944 * (2 * C32254 + C31944 * (C31901 + C32214 * C32047)))) /
        C31568;
    const double C32205 = C32202 + C32203;
    const double C32462 = C32460 + C32461;
    const double C32592 = C32591 / C31576;
    const double C32920 = 2 * C32884;
    const double C32600 = C32599 / C31568;
    const double C32924 = C32888 / C31578;
    const double C32947 = C32882 - C32919;
    const double C15938 = -C32919;
    const double C32961 = C32946 + C32589;
    const double C32772 = C32771 / C31576;
    const double C32934 = 2 * C32899;
    const double C32779 = C32778 / C31568;
    const double C32945 = C32914 / C31578;
    const double C32958 = C32902 - C32942;
    const double C21006 = -C32942;
    const double C32965 = C32953 + C32768;
    const double C31585 = C31584 / C31568;
    const double C5470 = C5457 * C267;
    const double C5468 = C5457 * C266;
    const double C15123 = C15106 * C259;
    const double C15121 = C15106 * C258;
    const double C15115 = C15106 * C261;
    const double C15113 = C15106 * C260;
    const double C15511 = C15106 * C267;
    const double C15509 = C15106 * C266;
    const double C15683 = C15106 * C713;
    const double C15681 = C15106 * C712;
    const double C17119 = C15106 * C711;
    const double C17117 = C15106 * C710;
    const double C31651 = C31566 * C31646;
    const double C31684 = 2 * C31646;
    const double C31713 = C31646 / C31608;
    const double C169 = C164 - C146;
    const double C2142 = C2137 - C2115;
    const double C32731 = C32726 - C32730;
    const double C882 = C841 * C129;
    const double C880 = C841 * C128;
    const double C862 = C841 * C127;
    const double C860 = C841 * C126;
    const double C850 = C841 * C125;
    const double C848 = C841 * C124;
    const double C1365 = C841 * C261;
    const double C1363 = C841 * C260;
    const double C1353 = C841 * C259;
    const double C1351 = C841 * C258;
    const double C1557 = C841 * C366;
    const double C1555 = C841 * C365;
    const double C1545 = C841 * C364;
    const double C1543 = C841 * C363;
    const double C11449 = C841 * C2099;
    const double C11447 = C841 * C2098;
    const double C11429 = C841 * C370;
    const double C11427 = C841 * C369;
    const double C11417 = C841 * C368;
    const double C11415 = C841 * C367;
    const double C11775 = C841 * C372;
    const double C11773 = C841 * C371;
    const double C11942 = C841 * C711;
    const double C11940 = C841 * C710;
    const double C22253 = C841 * C713;
    const double C22251 = C841 * C712;
    const double C32952 = C32931 / C31568;
    const double C32738 = C32734 - C32737;
    const double C32966 = C32955 / C31608;
    const double C15120 = C15098 * C138;
    const double C15112 = C15098 * C137;
    const double C17116 = C15098 * C383;
    const double C863 = C32964 * C138;
    const double C851 = C32964 * C137;
    const double C11418 = C32964 * C383;
    const double C31670 = C31666 * be;
    const double C31701 = C31698 * be;
    const double C155 = C32672 * C139;
    const double C883 = C32964 * C139;
    const double C2798 = C32900 * C139;
    const double C5495 = C5447 * C139;
    const double C15128 = C15098 * C139;
    const double C495 = C32672 * C277;
    const double C1366 = C32964 * C277;
    const double C2786 = C32735 * C277;
    const double C3186 = C32900 * C277;
    const double C5467 = C5448 * C277;
    const double C5914 = C5447 * C277;
    const double C15116 = C32735 * C277;
    const double C15516 = C15098 * C277;
    const double C611 = C32672 * C382;
    const double C1558 = C32964 * C382;
    const double C3358 = C32900 * C382;
    const double C6102 = C5447 * C382;
    const double C15688 = C15098 * C382;
    const double C2122 = C32672 * C384;
    const double C4686 = C32900 * C384;
    const double C7104 = C5447 * C384;
    const double C11430 = C32964 * C384;
    const double C17124 = C15098 * C384;
    const double C2654 = C32672 * C720;
    const double C4662 = C32735 * C720;
    const double C5327 = C32900 * C720;
    const double C7096 = C5448 * C720;
    const double C7629 = C5447 * C720;
    const double C11943 = C32964 * C720;
    const double C17120 = C32735 * C720;
    const double C17790 = C15098 * C720;
    const double C1860 = C1848 - C1849;
    const double C2328 = C2321 - C2322;
    const double C5330 = C2776 * C1170;
    const double C7099 = C5457 * C1170;
    const double C11425 = C845 * C1170;
    const double C17793 = C15106 * C1170;
    const double C2659 = C113 * C1172;
    const double C4681 = C2776 * C1172;
    const double C11954 = C841 * C1172;
    const double C17127 = C15106 * C1172;
    const double C5328 = C2776 * C1169;
    const double C7097 = C5457 * C1169;
    const double C11423 = C845 * C1169;
    const double C17791 = C15106 * C1169;
    const double C2657 = C113 * C1171;
    const double C4679 = C2776 * C1171;
    const double C11952 = C841 * C1171;
    const double C17125 = C15106 * C1171;
    const double C170 = C165 - C150;
    const double C171 = C166 - C154;
    const double C502 = C498 - C490;
    const double C503 = C499 - C494;
    const double C618 = C614 - C606;
    const double C619 = C615 - C610;
    const double C2143 = C2138 - C2121;
    const double C2665 = C2663 - C2653;
    const double C2146 = C2141 - C2135;
    const double C31990 = C31984 + C31977;
    const double C2109 =
        (3 * (C31808 + C31817 * C32047) +
         C31944 * (2 * C32063 + C31944 * (C31817 + C31825 * C32047))) /
        C31576;
    const double C2647 =
        (ae * (2 * C31944 * C31852 + C31944 * (C31852 + C31847 * C32047)) +
         be * (2 * C31944 * C31853 + C31944 * (C31853 + C31848 * C32047)) +
         C31795 * (2 * C32063 + C31944 * (C31817 + C31825 * C32047))) /
        C31576;
    const double C159 = C32672 * C140;
    const double C2810 = C32900 * C140;
    const double C15140 = C15098 * C140;
    const double C491 = C32672 * C276;
    const double C1354 = C32964 * C276;
    const double C2794 = C32735 * C276;
    const double C3178 = C32900 * C276;
    const double C5479 = C5448 * C276;
    const double C5902 = C5447 * C276;
    const double C15124 = C32735 * C276;
    const double C15508 = C15098 * C276;
    const double C859 = C32932 * C280;
    const double C3182 = C32735 * C280;
    const double C5471 = C32932 * C280;
    const double C5910 = C5448 * C280;
    const double C15512 = C32735 * C280;
    const double C17948 = C17926 * C280;
    const double C607 = C32672 * C381;
    const double C1546 = C32964 * C381;
    const double C3350 = C32900 * C381;
    const double C6090 = C5447 * C381;
    const double C15680 = C15098 * C381;
    const double C1851 = C32672 * C385;
    const double C4678 = C32900 * C385;
    const double C7458 = C5447 * C385;
    const double C11776 = C32964 * C385;
    const double C16796 = C15098 * C385;
    const double C2324 = C32672 * C721;
    const double C3354 = C32735 * C721;
    const double C4920 = C32900 * C721;
    const double C6098 = C5448 * C721;
    const double C9121 = C5447 * C721;
    const double C15684 = C32735 * C721;
    const double C17383 = C15098 * C721;
    const double C22254 = C32964 * C721;
    const double C5331 = C32735 * C1185;
    const double C7100 = C32932 * C1185;
    const double C7633 = C5448 * C1185;
    const double C11426 = C32932 * C1185;
    const double C17794 = C32735 * C1185;
    const double C20229 = C17926 * C1185;
    const double C2660 = C32672 * C1186;
    const double C4682 = C32735 * C1186;
    const double C7108 = C5448 * C1186;
    const double C7641 = C5447 * C1186;
    const double C11955 = C32964 * C1186;
    const double C13558 = C32900 * C1186;
    const double C17128 = C32735 * C1186;
    const double C17798 = C15098 * C1186;
    const double C2136 = C32672 * C2108;
    const double C7124 = C5447 * C2108;
    const double C11450 = C32964 * C2108;
    const double C12942 = C32900 * C2108;
    const double C17145 = C15098 * C2108;
    const double C31827 = C31817 + C31826;
    const double C31833 = 2 * C31829;
    const double C32000 = C31795 * C31829;
    const double C32065 = C31944 * C31829;
    const double C1188 =
        (ae * (C31866 + C31877 * C32047) + be * (C31868 + C31881 * C32047) +
         C31795 * (C31958 + C31829 * C32047)) /
        C31576;
    const double C2107 =
        (2 * C31944 * C31958 + C31944 * (C31958 + C31829 * C32047)) / C31576;
    const double C32102 = C32095 + C32084;
    const double C32189 = C31795 * C32186;
    const double C32287 = 2 * C32186;
    const double C32194 = C31817 + C32193;
    const double C31893 = C31885 + C31890;
    const double C31956 = C31953 + C31954;
    const double C1163 = C31795 * C31874 + C31952 * C32047;
    const double C2640 =
        2 * C31944 * C31952 + C31944 * (C31952 + C32026 * C32047);
    const double C31955 = C31950 + C31951;
    const double C2126 = C114 * C2088;
    const double C32015 = C31795 * C32011;
    const double C32217 = 2 * C32011;
    const double C32209 = be * C32011;
    const double C1026 = 3 * (C31867 + C31879 * C31798) +
                         C31795 * (2 * C31961 + C31795 * C32010);
    const double C1162 = C31867 + C31879 * C31798 + C32010 * C32047;
    const double C1723 = C31944 * (2 * C31961 + C31795 * C32010);
    const double C7450 =
        2 * C31944 * C32010 + C31944 * (C32010 + C32232 * C32047);
    const double C14008 = C114 * C2639;
    const double C32014 = C31795 * C32008;
    const double C32213 = 2 * C32008;
    const double C32208 = ae * C32008;
    const double C12367 =
        4 * (2 * C31944 * C31879 + C31944 * C32573) +
        C31944 * (3 * C32573 + C31944 * (2 * C31944 * C31904 +
                                         C31944 * (C31904 + C32215 * C32047)));
    const double C32111 = C31848 + C32106;
    const double C32269 = be * C32264;
    const double C32480 = C31988 + C32479;
    const double C32110 = C32090 + C32105;
    const double C12464 =
        4 * (2 * C31944 * C31980 + C31944 * C32576) +
        C31944 * (3 * C32576 + C31944 * (2 * C31944 * C32088 +
                                         C31944 * (C32088 + C32134 * C32047)));
    const double C32109 = C31847 + C32103;
    const double C32143 = C31825 + C32125;
    const double C32268 = ae * C32263;
    const double C32477 = C31985 + C32476;
    const double C32569 = C32566 + C32568;
    const double C158 = C113 * C131;
    const double C486 = C113 * C257;
    const double C2801 = C2776 * C257;
    const double C15131 = C15106 * C257;
    const double C870 = C845 * C269;
    const double C3173 = C2776 * C269;
    const double C5482 = C5457 * C269;
    const double C15503 = C15106 * C269;
    const double C602 = C113 * C362;
    const double C1854 = C113 * C374;
    const double C2319 = C113 * C715;
    const double C3345 = C2776 * C715;
    const double C15675 = C15106 * C715;
    const double C2127 = C113 * C2095;
    const double C1031 = (2 * (C31795 * C31868 + C31867 * ae) +
                          C31795 * (C31868 + C31795 * C31965 + C31961 * ae) +
                          (C31867 + C31879 * C31798) * ae) /
                         C31568;
    const double C1168 =
        (C31944 * (C31868 + C31795 * C31965 + C31961 * ae)) / C31568;
    const double C1176 =
        (C31795 * C31868 + C31867 * ae + C31965 * C32047) / C31568;
    const double C2644 =
        (2 * C31944 * C31965 + C31944 * (C31965 + C32011 * C32047)) / C31568;
    const double C31994 = C31853 + C31992;
    const double C12473 = C113 * C2642;
    const double C12937 = C2776 * C2642;
    const double C17140 = C15106 * C2642;
    const double C12477 = C113 * C7082;
    const double C14584 = C2776 * C7082;
    const double C28289 = C15106 * C7082;
    const double C12190 = C113 * C12175;
    const double C156 = C113 * C130;
    const double C484 = C113 * C256;
    const double C2799 = C2776 * C256;
    const double C15129 = C15106 * C256;
    const double C868 = C845 * C268;
    const double C3171 = C2776 * C268;
    const double C5480 = C5457 * C268;
    const double C15501 = C15106 * C268;
    const double C600 = C113 * C361;
    const double C1852 = C113 * C373;
    const double C2317 = C113 * C714;
    const double C3343 = C2776 * C714;
    const double C15673 = C15106 * C714;
    const double C2125 = C113 * C2094;
    const double C1041 =
        (2 * (ae * C31866 + be * C31868 + C31795 * C31958) +
         ae * (C31866 + C31795 * C31964 + C31961 * be) +
         be * (C31868 + C31795 * C31965 + C31961 * ae) +
         C31795 * (C31958 + ae * C31964 + be * C31965 +
                   C31795 * (ae * C31877 + be * C31881 + C31795 * C31829))) /
        C31576;
    const double C1184 =
        (C31944 * C31958 + ae * C31944 * C31964 + be * C31944 * C31965 +
         C31795 * (ae * C31944 * C31877 + be * C31944 * C31881 +
                   C31795 * C31944 * C31829)) /
        C31576;
    const double C1189 =
        (C31958 + C31829 * C32047 + ae * (C31964 + C32008 * C32047) +
         be * (C31965 + C32011 * C32047) +
         C31795 * (ae * (C31877 + C31901 * C32047) +
                   be * (C31881 + C31907 * C32047) +
                   C31795 * (C31829 + C31801 * C31837 * C32047))) /
        C31576;
    const double C1030 = (2 * (C31795 * C31866 + C31867 * be) +
                          C31795 * (C31866 + C31795 * C31964 + C31961 * be) +
                          (C31867 + C31879 * C31798) * be) /
                         C31568;
    const double C1167 =
        (C31944 * (C31866 + C31795 * C31964 + C31961 * be)) / C31568;
    const double C1175 =
        (C31795 * C31866 + C31867 * be + C31964 * C32047) / C31568;
    const double C2643 =
        (2 * C31944 * C31964 + C31944 * (C31964 + C32008 * C32047)) / C31568;
    const double C2140 = C2129 - C2130;
    const double C12379 = C12375 - C12376;
    const double C31993 = C31852 + C31991;
    const double C32094 = C31817 + C32080;
    const double C7112 = C32932 * C1187;
    const double C7645 = C5448 * C1187;
    const double C11438 = C32932 * C1187;
    const double C13562 = C32735 * C1187;
    const double C17802 = C32735 * C1187;
    const double C20245 = C17926 * C1187;
    const double C12471 = C113 * C2641;
    const double C12935 = C2776 * C2641;
    const double C17138 = C15106 * C2641;
    const double C12475 = C113 * C7081;
    const double C14582 = C2776 * C7081;
    const double C28287 = C15106 * C7081;
    const double C12188 = C113 * C12174;
    const double C12194 = C12192 - C12186;
    const double C31839 = C31825 + C31838;
    const double C32152 = C32144 + C32129;
    const double C32201 = C31825 + C32198;
    const double C32221 = C31795 * C32212;
    const double C32256 = C31944 * C32212;
    const double C32283 = C32212 * C32047;
    const double C32272 = C31795 * C32267;
    const double C31926 = C31913 + C31923;
    const double C32034 = C32028 + C32029;
    const double C32161 = C31888 + C32156;
    const double C32239 = C31795 * C32233;
    const double C12283 =
        (3 * (C31965 + C32011 * C32047) +
         C31944 * (2 * C31944 * C32011 + C31944 * (C32011 + C32233 * C32047))) /
        C31568;
    const double C31924 = C31909 + C31921;
    const double C32031 = C32024 + C32025;
    const double C32159 = C31884 + C32153;
    const double C32236 = C31795 * C32230;
    const double C12282 =
        (3 * (C31964 + C32008 * C32047) +
         C31944 * (2 * C31944 * C32008 + C31944 * (C32008 + C32230 * C32047))) /
        C31568;
    const double C31922 = C31801 * C31919;
    const double C32058 = C31919 * ae;
    const double C32056 = C31795 * C31919;
    const double C32055 = C31919 * be;
    const double C1027 = 3 * (C31874 + C31886 * C31798) +
                         C31795 * (2 * C31952 + C31795 * C32033);
    const double C1164 = C31874 + C31886 * C31798 + C32033 * C32047;
    const double C1724 = C31944 * (2 * C31952 + C31795 * C32033);
    const double C32167 = C32160 * ae;
    const double C32165 = C31795 * C32160;
    const double C32164 = C32160 * be;
    const double C32243 = C32216 + C32238;
    const double C133 = (4 * (2 * C31868 + C31801 * C31875) +
                         C31801 * (3 * C31875 + C31801 * C31898)) /
                        C31568;
    const double C360 = (C31944 * (3 * C31875 + C31801 * C31898)) / C31568;
    const double C376 =
        (2 * C31868 + C31801 * C31875 + C31898 * C32047) / C31568;
    const double C12177 =
        (5 * (3 * C32458 + C31944 * C32466) +
         C31944 * (4 * C32466 +
                   C31944 * (3 * C32200 +
                             C31944 * (2 * C32266 +
                                       C31944 * (C31888 + C31914 * C32047))))) /
        C31568;
    const double C132 = (4 * (2 * C31866 + C31801 * C31873) +
                         C31801 * (3 * C31873 + C31801 * C31897)) /
                        C31568;
    const double C359 = (C31944 * (3 * C31873 + C31801 * C31897)) / C31568;
    const double C375 =
        (2 * C31866 + C31801 * C31873 + C31897 * C32047) / C31568;
    const double C12176 =
        (5 * (3 * C32455 + C31944 * C32462) +
         C31944 * (4 * C32462 +
                   C31944 * (3 * C32199 +
                             C31944 * (2 * C32265 +
                                       C31944 * (C31884 + C31910 * C32047))))) /
        C31568;
    const double C32593 = C32589 - C32592;
    const double C32948 = C32920 / C31568;
    const double C32601 = C32597 - C32600;
    const double C32962 = C32947 / C31608;
    const double C32773 = C32768 - C32772;
    const double C32954 = C32934 / C31568;
    const double C32780 = C32776 - C32779;
    const double C32968 = C32958 / C31608;
    const double C31586 = C32672 - C31585;
    const double C31655 = C31651 + C32735;
    const double C31716 = C31713 - C31715;
    const double C174 = C169 + C147;
    const double C2147 = C2142 + C2116;
    const double C17972 = C32731 * C139;
    const double C17952 = C32731 * C138;
    const double C17940 = C32731 * C137;
    const double C18391 = C32731 * C277;
    const double C18379 = C32731 * C276;
    const double C18579 = C32731 * C382;
    const double C18567 = C32731 * C381;
    const double C20253 = C32731 * C384;
    const double C20241 = C32731 * C385;
    const double C20221 = C32731 * C383;
    const double C20486 = C32731 * C721;
    const double C20891 = C32731 * C720;
    const double C31091 = C32731 * C2108;
    const double C31544 = C32731 * C1186;
    const double C32904 = C32731 * C32725;
    const double C32939 = C32906 + C32731;
    const double C867 = C32952 * C276;
    const double C855 = C32952 * C277;
    const double C1362 = C32952 * C280;
    const double C1554 = C32952 * C721;
    const double C11434 = C32952 * C1186;
    const double C11422 = C32952 * C720;
    const double C11959 = C32952 * C1187;
    const double C11947 = C32952 * C1185;
    const double C17956 = C32738 * C276;
    const double C17944 = C32738 * C277;
    const double C18387 = C32738 * C280;
    const double C18575 = C32738 * C721;
    const double C20249 = C32738 * C1186;
    const double C20225 = C32738 * C720;
    const double C20895 = C32738 * C1185;
    const double C31548 = C32738 * C1187;
    const double C32908 = C32738 / C31608;
    const double C32905 = C32738 * C32725;
    const double C7765 = C32966 - (C32731 * C32727) / C31568;
    const double C31672 = C31670 / C31568;
    const double C31704 = C31701 / C31568;
    const double C1863 = C1860 - C1850;
    const double C2332 = C2328 - C2323;
    const double C2664 = C2657 - C2658;
    const double C175 = C170 + C151;
    const double C176 = C171 + C155;
    const double C507 = C503 + C495;
    const double C623 = C619 + C611;
    const double C2148 = C2143 + C2122;
    const double C2667 = C2665 + C2654;
    const double C12187 = C32672 * C2109;
    const double C14589 = C32900 * C2109;
    const double C28294 = C15098 * C2109;
    const double C7120 = C5448 * C2647;
    const double C11446 = C32952 * C2647;
    const double C12474 = C32672 * C2647;
    const double C12938 = C32735 * C2647;
    const double C14990 = C32900 * C2647;
    const double C17141 = C32735 * C2647;
    const double C28695 = C15098 * C2647;
    const double C31087 = C32738 * C2647;
    const double C506 = C502 + C491;
    const double C622 = C618 + C607;
    const double C2151 = C2146 + C2136;
    const double C141 =
        (4 * (2 * C31801 * C31817 + C31801 * C31827) +
         C31801 * (3 * C31827 +
                   C31801 * (2 * C31801 * C31825 +
                             C31801 * (C31825 +
                                       (C31820 * C31821 +
                                        C31798 * bs[7] * std::pow(C31797, 7)) *
                                           C31567 * C31813)))) /
        C31576;
    const double C275 =
        (ae * (2 * C31801 * C31852 + C31801 * (C31852 + C31847 * C31813)) +
         be * (2 * C31801 * C31853 + C31801 * (C31853 + C31848 * C31813)) +
         C31795 * (2 * C31801 * C31817 + C31801 * C31827)) /
        C31576;
    const double C281 =
        (C31808 + C31817 * C31813 + ae * (C31795 * C31873 + C31874 * be) +
         be * (C31795 * C31875 + C31874 * ae) +
         C31795 * (ae * C31873 + be * C31875 + C31795 * C31827)) /
        C31576;
    const double C380 =
        ((zP - zQ) * (2 * C31801 * C31817 + C31801 * C31827)) / C31576;
    const double C386 =
        (C31808 + C31817 * C31813 + C31827 * std::pow(zP - zQ, 2)) / C31576;
    const double C722 = (ae * C31944 * C31873 + be * C31944 * C31875 +
                         C31795 * C31944 * C31827) /
                        C31576;
    const double C32013 = C32007 + C32000;
    const double C2110 =
        (3 * (C31958 + C31829 * C32047) +
         C31944 * (2 * C32065 + C31944 * (C31829 + C31801 * C31837 * C32047))) /
        C31576;
    const double C2648 =
        (ae * (2 * C31944 * C31877 + C31944 * (C31877 + C31901 * C32047)) +
         be * (2 * C31944 * C31881 + C31944 * (C31881 + C31907 * C32047)) +
         C31795 * (2 * C32065 + C31944 * (C31829 + C31801 * C31837 * C32047))) /
        C31576;
    const double C2316 = C32672 * C1188;
    const double C4674 = C32735 * C1188;
    const double C7462 = C5448 * C1188;
    const double C11780 = C32952 * C1188;
    const double C13159 = C32900 * C1188;
    const double C16800 = C32735 * C1188;
    const double C17375 = C15098 * C1188;
    const double C20237 = C32738 * C1188;
    const double C2132 = C32672 * C2107;
    const double C12934 = C32900 * C2107;
    const double C17137 = C15098 * C2107;
    const double C32108 = C31795 * C32102;
    const double C32122 = 2 * C32102;
    const double C32191 = C32190 + C32189;
    const double C254 = (C31795 * (3 * C31873 + C31801 * C31897) +
                         (3 * C31874 + C31801 * C31893) * be) /
                        C31568;
    const double C255 = (C31795 * (3 * C31875 + C31801 * C31898) +
                         (3 * C31874 + C31801 * C31893) * ae) /
                        C31568;
    const double C270 =
        (2 * C31866 + C31801 * C31873 +
         C31795 * (C31795 * C31897 + C31893 * be) + C31795 * C31893 * be) /
        C31568;
    const double C271 =
        (2 * C31868 + C31801 * C31875 +
         C31795 * (C31795 * C31898 + C31893 * ae) + C31795 * C31893 * ae) /
        C31568;
    const double C716 = (C31944 * (C31795 * C31897 + C31893 * be)) / C31568;
    const double C717 = (C31944 * (C31795 * C31898 + C31893 * ae)) / C31568;
    const double C120 = 4 * (2 * C31867 + C31801 * C31874) +
                        C31801 * (3 * C31874 + C31801 * C31893);
    const double C244 = C31795 * (3 * C31874 + C31801 * C31893);
    const double C252 = 2 * C31867 + C31801 * C31874 + C31893 * C31798;
    const double C349 = C31944 * (3 * C31874 + C31801 * C31893);
    const double C357 = 2 * C31867 + C31801 * C31874 + C31893 * C32047;
    const double C708 = C31944 * C31795 * C31893;
    const double C1338 =
        2 * C31795 * C31893 + C31795 * (C31893 + C31919 * C31798);
    const double C1530 = C31944 * (C31893 + C31919 * C31798);
    const double C2482 =
        2 * C31944 * C31893 + C31944 * (C31893 + C31919 * C32047);
    const double C1029 = (2 * (C31795 * C31875 + C31874 * ae) +
                          C31795 * (C31875 + C31795 * C31956 + C31952 * ae) +
                          (C31874 + C31886 * C31798) * ae) /
                         C31568;
    const double C1166 =
        (C31944 * (C31875 + C31795 * C31956 + C31952 * ae)) / C31568;
    const double C1180 =
        (C31795 * C31875 + C31874 * ae + C31956 * C32047) / C31568;
    const double C2310 = C114 * C1163;
    const double C1028 = (2 * (C31795 * C31873 + C31874 * be) +
                          C31795 * (C31873 + C31795 * C31955 + C31952 * be) +
                          (C31874 + C31886 * C31798) * be) /
                         C31568;
    const double C1165 =
        (C31944 * (C31873 + C31795 * C31955 + C31952 * be)) / C31568;
    const double C1179 =
        (C31795 * C31873 + C31874 * be + C31955 * C32047) / C31568;
    const double C32017 = C31881 + C32015;
    const double C32016 = C31877 + C32014;
    const double C32219 = C31829 + C32208;
    const double C32114 = C32111 + C32100;
    const double C12466 =
        (4 * (2 * C31944 * C31988 + C31944 * C32480) +
         C31944 *
             (3 * C32480 +
              C31944 * (2 * C32264 + C31944 * (C32099 + C32148 * C32047)))) /
        C31568;
    const double C6406 = 4 * (2 * C31969 + C31795 * C31987) +
                         C31795 * (3 * C31987 + C31795 * C32110);
    const double C6476 = C31944 * (3 * C31987 + C31795 * C32110);
    const double C6477 = 2 * C31969 + C31795 * C31987 + C32110 * C32047;
    const double C7621 =
        2 * C31944 * C32110 + C31944 * (C32110 + C32160 * C32047);
    const double C32113 = C32109 + C32097;
    const double C32151 = C32143 + C32126;
    const double C32273 = C32186 + C32268;
    const double C12465 =
        (4 * (2 * C31944 * C31985 + C31944 * C32477) +
         C31944 *
             (3 * C32477 +
              C31944 * (2 * C32263 + C31944 * (C32096 + C32145 * C32047)))) /
        C31568;
    const double C12173 =
        5 * (3 * C32562 + C31944 * C32569) +
        C31944 * (4 * C32569 +
                  C31944 * (3 * C32567 +
                            C31944 * (2 * C31944 * C31819 +
                                      C31944 * (C31819 + C31830 * C32047))));
    const double C1357 = C845 * C1031;
    const double C5905 = C5457 * C1031;
    const double C1549 = C845 * C1168;
    const double C4915 = C2776 * C1168;
    const double C6093 = C5457 * C1168;
    const double C17378 = C15106 * C1168;
    const double C2315 = C113 * C1176;
    const double C4673 = C2776 * C1176;
    const double C16799 = C15106 * C1176;
    const double C12929 = C2776 * C2644;
    const double C14009 = C113 * C2644;
    const double C17132 = C15106 * C2644;
    const double C31996 = C31994 + C31989;
    const double C167 = C156 - C157;
    const double C497 = C484 - C485;
    const double C613 = C600 - C601;
    const double C1861 = C1852 - C1853;
    const double C2327 = C2317 - C2318;
    const double C2139 = C2125 - C2126;
    const double C1358 = C32932 * C1041;
    const double C5906 = C32932 * C1041;
    const double C7795 = C32909 * C1041;
    const double C15964 = C32909 * C1041;
    const double C18383 = C17926 * C1041;
    const double C1550 = C32932 * C1184;
    const double C4916 = C32735 * C1184;
    const double C6094 = C32932 * C1184;
    const double C9117 = C5448 * C1184;
    const double C17379 = C32735 * C1184;
    const double C18571 = C17926 * C1184;
    const double C20482 = C32738 * C1184;
    const double C22250 = C32952 * C1184;
    const double C7466 = C32932 * C1189;
    const double C11784 = C32932 * C1189;
    const double C13155 = C32735 * C1189;
    const double C17371 = C32735 * C1189;
    const double C20233 = C17926 * C1189;
    const double C1355 = C845 * C1030;
    const double C5903 = C5457 * C1030;
    const double C1547 = C845 * C1167;
    const double C4913 = C2776 * C1167;
    const double C6091 = C5457 * C1167;
    const double C17376 = C15106 * C1167;
    const double C2313 = C113 * C1175;
    const double C4671 = C2776 * C1175;
    const double C16797 = C15106 * C1175;
    const double C12927 = C2776 * C2643;
    const double C14007 = C113 * C2643;
    const double C17130 = C15106 * C2643;
    const double C2145 = C2140 - C2131;
    const double C12380 = C12379 - C12377;
    const double C31995 = C31993 + C31986;
    const double C32101 = C32094 + C32081;
    const double C12479 = C12471 - C12472;
    const double C12480 = C12475 - C12476;
    const double C12193 = C12188 - C12189;
    const double C31840 = C31801 * C31839;
    const double C32023 = C31795 * C31839;
    const double C32067 = C31944 * C31839;
    const double C1040 =
        (2 * (ae * C31873 + be * C31875 + C31795 * C31827) +
         ae * (C31873 + C31795 * C31955 + C31952 * be) +
         be * (C31875 + C31795 * C31956 + C31952 * ae) +
         C31795 * (C31827 + ae * C31955 + be * C31956 +
                   C31795 * (ae * C31892 + be * C31894 + C31795 * C31839))) /
        C31576;
    const double C1183 =
        (C31944 * C31827 + ae * C31944 * C31955 + be * C31944 * C31956 +
         C31795 * (ae * C31944 * C31892 + be * C31944 * C31894 +
                   C31795 * C31944 * C31839)) /
        C31576;
    const double C1190 =
        (ae * (C31873 + C31892 * C32047) + be * (C31875 + C31894 * C32047) +
         C31795 * (C31827 + C31839 * C32047)) /
        C31576;
    const double C2106 =
        (2 * C31944 * C31827 + C31944 * (C31827 + C31839 * C32047)) / C31576;
    const double C32158 = C31795 * C32152;
    const double C32204 = C31795 * C32201;
    const double C32288 = C31944 * C32201;
    const double C7085 =
        (2 * C32063 + C31944 * C32194 +
         ae * (2 * C31944 * C31985 + C31944 * (C31985 + C32096 * C32047)) +
         be * (2 * C31944 * C31988 + C31944 * (C31988 + C32099 * C32047)) +
         C31795 * (ae * (2 * C32184 + C31944 * C32199) +
                   be * (2 * C32185 + C31944 * C32200) +
                   C31795 * (2 * C32186 + C31944 * C32201))) /
        C31576;
    const double C7086 =
        (ae * (3 * (C31852 + C31847 * C32047) +
               C31944 * (2 * C32184 + C31944 * C32199)) +
         be * (3 * (C31853 + C31848 * C32047) +
               C31944 * (2 * C32185 + C31944 * C32200)) +
         C31795 * (3 * C32194 + C31944 * (2 * C32186 + C31944 * C32201))) /
        C31576;
    const double C7087 =
        (3 * C32194 + C31944 * (2 * C32186 + C31944 * C32201) +
         ae * (3 * (C31985 + C32096 * C32047) +
               C31944 * (2 * C32263 + C31944 * (C32096 + C32145 * C32047))) +
         be * (3 * (C31988 + C32099 * C32047) +
               C31944 * (2 * C32264 + C31944 * (C32099 + C32148 * C32047))) +
         C31795 *
             (ae * (3 * C32199 +
                    C31944 *
                        (2 * C32265 + C31944 * (C31884 + C31910 * C32047))) +
              be * (3 * C32200 +
                    C31944 *
                        (2 * C32266 + C31944 * (C31888 + C31914 * C32047))) +
              C31795 * (3 * C32201 +
                        C31944 * (2 * C32267 +
                                  C31944 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C32047))))) /
        C31576;
    const double C32229 = C32220 + C32221;
    const double C32259 = C31795 * C32256;
    const double C32284 = C31829 + C32283;
    const double C32276 = C32274 + C32272;
    const double C31928 = C31801 * C31926;
    const double C32057 = C31795 * C31926;
    const double C2484 =
        (2 * C31944 * C31898 + C31944 * (C31898 + C31926 * C32047)) / C31568;
    const double C32038 = C31795 * C32034;
    const double C2646 =
        (2 * C31944 * C31956 + C31944 * (C31956 + C32034 * C32047)) / C31568;
    const double C32166 = C32161 + C32149;
    const double C32244 = C31907 + C32239;
    const double C31927 = C31801 * C31924;
    const double C32054 = C31795 * C31924;
    const double C2483 =
        (2 * C31944 * C31897 + C31944 * (C31897 + C31924 * C32047)) / C31568;
    const double C32037 = C31795 * C32031;
    const double C1191 =
        (C31827 + C31839 * C32047 + ae * (C31955 + C32031 * C32047) +
         be * (C31956 + C32034 * C32047) +
         C31795 * (ae * (C31892 + C31918 * C32047) +
                   be * (C31894 + C31920 * C32047) +
                   C31795 * (C31839 +
                             (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813) *
                                 C32047))) /
        C31576;
    const double C2645 =
        (2 * C31944 * C31955 + C31944 * (C31955 + C32031 * C32047)) / C31568;
    const double C32163 = C32159 + C32146;
    const double C32242 = C31901 + C32236;
    const double C31925 = C31903 + C31922;
    const double C2304 = C31795 * C31893 + C32056 * C32047;
    const double C32170 = C32137 + C32165;
    const double C6570 = 4 * (2 * C31961 + C31795 * C32010) +
                         C31795 * (3 * C32010 + C31795 * C32243);
    const double C6656 = C31944 * (3 * C32010 + C31795 * C32243);
    const double C7300 = 2 * C31961 + C31795 * C32010 + C32243 * C32047;
    const double C162 = C113 * C133;
    const double C598 = C113 * C360;
    const double C1858 = C113 * C376;
    const double C160 = C113 * C132;
    const double C596 = C113 * C359;
    const double C1856 = C113 * C375;
    const double C32881 = C32593 * C32583;
    const double C32922 = C32886 + C32593;
    const double C32889 = C32601 / C31608;
    const double C32885 = C32601 * C32583;
    const double C2770 = C32962 - (C32593 * C32584) / C31568;
    const double C32911 = C32773 * C32767;
    const double C32944 = C32913 + C32773;
    const double C32915 = C32780 / C31608;
    const double C32912 = C32780 * C32767;
    const double C13666 = C32968 - (C32773 * C32769) / C31568;
    const double C31587 = C31586 * C31583;
    const double C31633 = C31586 * ae;
    const double C843 =
        ((C31586 * ae) / C31568 - C31575 / C31578) / (2 * C31568) +
        ((C31566 * ((0 * ae) / C31568 - C31579 / C31576) + C32735) * ae) /
            C31568;
    const double C2774 = (C31586 * ae) / C31568 - C31575 / C31578;
    const double C5453 =
        ((-(0 * be) / C31568) / C31608 -
         ((0 - (C31566 * C31575) / C31568) * be) / C31568) /
            C31608 -
        ((C31566 * ((-C31575 / C31568) / C31608 - (C31586 * be) / C31568) +
          C15098) *
         be) /
            C31568 +
        (-C31582 / C31568) / C31608 - (0 * be) / C31568;
    const double C5455 =
        ((-C31575 / C31568) / C31608 - (C31586 * be) / C31568) / C31608 -
        ((C31566 * ((-C31582 / C31568) / C31608 - (0 * be) / C31568) + C32735) *
         be) /
            C31568;
    const double C15104 = (-C31631) / C31608 - (C31586 * be) / C31568;
    const double C31659 = C31655 * be;
    const double C17959 = C31716 * C269;
    const double C17957 = C31716 * C268;
    const double C17947 = C31716 * C267;
    const double C17945 = C31716 * C266;
    const double C18382 = C31716 * C1031;
    const double C18380 = C31716 * C1030;
    const double C18570 = C31716 * C1168;
    const double C18568 = C31716 * C1167;
    const double C20228 = C31716 * C1170;
    const double C20226 = C31716 * C1169;
    const double C31720 = 2 * C31716;
    const double C6342 =
        (C31716 / C31608 + (0 * ae) / C31568) / C31608 - (0 * be) / C31568;
    const double C7777 = C31716 / C31608 - (0 * be) / C31568;
    const double C15946 = C31716 / C31608 + (0 * ae) / C31568;
    const double C2152 = C2147 * C838;
    const double C10624 = C2147 * C32961;
    const double C12181 = C2147 * C32588;
    const double C13867 = C2147 * C32882;
    const double C22954 = C2147 * C15938;
    const double C24719 = C2147 * C32593;
    const double C32936 = C32904 / C31568;
    const double C32956 = C32939 / C31608;
    const double C32957 = C32940 + C32908;
    const double C7767 = C32908 - C32736 / C31578;
    const double C32938 = C32905 / C31568;
    const double C7811 = C7765 * C138;
    const double C7783 = C7765 * C137;
    const double C8177 = C7765 * C277;
    const double C8335 = C7765 * C382;
    const double C9848 = C7765 * C384;
    const double C9820 = C7765 * C383;
    const double C10266 = C7765 * C720;
    const double C31673 = C31669 - C31672;
    const double C31706 = C31690 - C31704;
    const double C1866 = C1863 + C1851;
    const double C2336 = C2332 + C2324;
    const double C2666 = C2664 - C2659;
    const double C2117 = C623 * C839;
    const double C2487 = C623 * C838;
    const double C10625 = C623 * C32948;
    const double C10927 = C623 * C32961;
    const double C12372 = C623 * C32588;
    const double C13868 = C623 * C32598;
    const double C14144 = C623 * C32882;
    const double C22955 = C623 * C32598;
    const double C23224 = C623 * C15938;
    const double C24720 = C623 * C32601;
    const double C25022 = C623 * C32593;
    const double C2153 = C2148 * C838;
    const double C10627 = C2148 * C32961;
    const double C12182 = C2148 * C32588;
    const double C13869 = C2148 * C32882;
    const double C22956 = C2148 * C15938;
    const double C24722 = C2148 * C32593;
    const double C2669 = C2667 * C838;
    const double C11079 = C2667 * C32961;
    const double C12469 = C2667 * C32588;
    const double C14280 = C2667 * C32882;
    const double C23360 = C2667 * C15938;
    const double C25174 = C2667 * C32593;
    const double C12196 = C12194 + C12187;
    const double C2118 = C622 * C32923;
    const double C2488 = C622 * C839;
    const double C10626 = C622 * C32923;
    const double C10928 = C622 * C32948;
    const double C14145 = C622 * C32598;
    const double C23225 = C622 * C32598;
    const double C24721 = C622 * C17929;
    const double C25023 = C622 * C32601;
    const double C2156 = C2151 * C838;
    const double C10632 = C2151 * C32961;
    const double C12183 = C2151 * C32588;
    const double C13871 = C2151 * C32882;
    const double C22958 = C2151 * C15938;
    const double C24727 = C2151 * C32593;
    const double C163 = C32672 * C141;
    const double C487 = C32672 * C275;
    const double C879 = C32952 * C275;
    const double C2802 = C32735 * C275;
    const double C3170 = C32900 * C275;
    const double C5491 = C5448 * C275;
    const double C15132 = C32735 * C275;
    const double C15500 = C15098 * C275;
    const double C17968 = C32738 * C275;
    const double C871 = C32932 * C281;
    const double C1350 = C32952 * C281;
    const double C3174 = C32735 * C281;
    const double C5483 = C32932 * C281;
    const double C5898 = C5448 * C281;
    const double C15504 = C32735 * C281;
    const double C17960 = C17926 * C281;
    const double C18375 = C32738 * C281;
    const double C603 = C32672 * C380;
    const double C3342 = C32900 * C380;
    const double C15672 = C15098 * C380;
    const double C1855 = C32672 * C386;
    const double C4670 = C32900 * C386;
    const double C16808 = C15098 * C386;
    const double C1542 = C32952 * C722;
    const double C2320 = C32672 * C722;
    const double C3346 = C32735 * C722;
    const double C4912 = C32900 * C722;
    const double C6086 = C5448 * C722;
    const double C15676 = C32735 * C722;
    const double C18563 = C32738 * C722;
    const double C19384 = C15098 * C722;
    const double C12378 = C32672 * C2110;
    const double C12930 = C32735 * C2648;
    const double C14010 = C32672 * C2648;
    const double C17133 = C32735 * C2648;
    const double C480 = C113 * C254;
    const double C2803 = C2776 * C254;
    const double C15133 = C15106 * C254;
    const double C482 = C113 * C255;
    const double C2805 = C2776 * C255;
    const double C15135 = C15106 * C255;
    const double C872 = C845 * C270;
    const double C3163 = C2776 * C270;
    const double C5484 = C5457 * C270;
    const double C15493 = C15106 * C270;
    const double C17961 = C31716 * C270;
    const double C874 = C845 * C271;
    const double C3165 = C2776 * C271;
    const double C5486 = C5457 * C271;
    const double C15495 = C15106 * C271;
    const double C17963 = C31716 * C271;
    const double C3335 = C2776 * C716;
    const double C3941 = C113 * C716;
    const double C15665 = C15106 * C716;
    const double C3337 = C2776 * C717;
    const double C3943 = C113 * C717;
    const double C15667 = C15106 * C717;
    const double C161 = C114 * C120;
    const double C481 = C114 * C244;
    const double C597 = C114 * C349;
    const double C1857 = C114 * C357;
    const double C3942 = C114 * C708;
    const double C1345 = C845 * C1029;
    const double C5893 = C5457 * C1029;
    const double C18370 = C31716 * C1029;
    const double C1537 = C845 * C1166;
    const double C4907 = C2776 * C1166;
    const double C6081 = C5457 * C1166;
    const double C18558 = C31716 * C1166;
    const double C19379 = C15106 * C1166;
    const double C2311 = C113 * C1180;
    const double C4665 = C2776 * C1180;
    const double C16803 = C15106 * C1180;
    const double C1343 = C845 * C1028;
    const double C5891 = C5457 * C1028;
    const double C18368 = C31716 * C1028;
    const double C1535 = C845 * C1165;
    const double C4905 = C2776 * C1165;
    const double C6079 = C5457 * C1165;
    const double C18556 = C31716 * C1165;
    const double C19377 = C15106 * C1165;
    const double C2309 = C113 * C1179;
    const double C4663 = C2776 * C1179;
    const double C16801 = C15106 * C1179;
    const double C32019 = C32017 + C32012;
    const double C32018 = C32016 + C32009;
    const double C32228 = C32219 + C32209;
    const double C32116 = C31795 * C32114;
    const double C32138 = 3 * C32114;
    const double C32124 = be * C32114;
    const double C32115 = C31795 * C32113;
    const double C32130 = 3 * C32113;
    const double C32123 = ae * C32113;
    const double C32275 = C32273 + C32269;
    const double C1035 =
        (3 * (C31864 + C31795 * C31973 + C31969 * ae) +
         C31795 * (2 * C31973 + C31795 * C31996 + C31987 * ae) +
         (2 * C31969 + C31795 * C31987) * ae) /
        C31568;
    const double C1174 =
        (C31864 + C31795 * C31973 + C31969 * ae + C31996 * C32047) / C31568;
    const double C1726 =
        (C31944 * (2 * C31973 + C31795 * C31996 + C31987 * ae)) / C31568;
    const double C7080 =
        (2 * C31944 * C31996 + C31944 * (C31996 + C32114 * C32047)) / C31568;
    const double C172 = C167 - C158;
    const double C501 = C497 - C486;
    const double C617 = C613 - C602;
    const double C1864 = C1861 - C1854;
    const double C2331 = C2327 - C2319;
    const double C2144 = C2139 - C2127;
    const double C2326 = C2313 - C2314;
    const double C14011 = C14007 - C14008;
    const double C2150 = C2145 + C2132;
    const double C1043 =
        (3 * (C31808 + ae * C31972 + be * C31973 + C31795 * C31990) +
         ae * (2 * C31972 + C31795 * C31995 + C31987 * be) +
         be * (2 * C31973 + C31795 * C31996 + C31987 * ae) +
         C31795 * (2 * C31990 + ae * C31995 + be * C31996 +
                   C31795 * (C31817 + ae * C31985 + be * C31988 +
                             C31795 * (ae * C31847 + be * C31848 +
                                       C31795 * C31825)))) /
        C31576;
    const double C1731 =
        (2 * (ae * C31944 * C31852 + be * C31944 * C31853 + C31795 * C32063) +
         ae * C31944 * C31995 + be * C31944 * C31996 +
         C31795 * (C32063 + ae * C31944 * C31985 + be * C31944 * C31988 +
                   C31795 * (ae * C31944 * C31847 + be * C31944 * C31848 +
                             C31795 * C31944 * C31825))) /
        C31576;
    const double C6486 =
        (2 * (ae * (C31852 + C31847 * C32047) +
              be * (C31853 + C31848 * C32047) + C31795 * C32194) +
         ae * (C31995 + C32113 * C32047) + be * (C31996 + C32114 * C32047) +
         C31795 * (C32194 + ae * (C31985 + C32096 * C32047) +
                   be * (C31988 + C32099 * C32047) +
                   C31795 * (ae * (C31847 + C31884 * C32047) +
                             be * (C31848 + C31888 * C32047) +
                             C31795 * (C31825 + C31837 * C32047)))) /
        C31576;
    const double C1034 =
        (3 * (C31863 + C31795 * C31972 + C31969 * be) +
         C31795 * (2 * C31972 + C31795 * C31995 + C31987 * be) +
         (2 * C31969 + C31795 * C31987) * be) /
        C31568;
    const double C1173 =
        (C31863 + C31795 * C31972 + C31969 * be + C31995 * C32047) / C31568;
    const double C1725 =
        (C31944 * (2 * C31972 + C31795 * C31995 + C31987 * be)) / C31568;
    const double C7079 =
        (2 * C31944 * C31995 + C31944 * (C31995 + C32113 * C32047)) / C31568;
    const double C32112 = C32101 + C32108;
    const double C12481 = C12479 - C12473;
    const double C12482 = C12480 - C12477;
    const double C12195 = C12193 - C12190;
    const double C31841 = C31833 + C31840;
    const double C32036 = C32030 + C32023;
    const double C2111 =
        (3 * (C31827 + C31839 * C32047) +
         C31944 * (2 * C32067 +
                   C31944 * (C31839 +
                             (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813) *
                                 C32047))) /
        C31576;
    const double C2649 =
        (ae * (2 * C31944 * C31892 + C31944 * (C31892 + C31918 * C32047)) +
         be * (2 * C31944 * C31894 + C31944 * (C31894 + C31920 * C32047)) +
         C31795 * (2 * C32067 +
                   C31944 * (C31839 +
                             (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813) *
                                 C32047))) /
        C31576;
    const double C1346 = C32932 * C1040;
    const double C5894 = C32932 * C1040;
    const double C7799 = C32909 * C1040;
    const double C15968 = C32909 * C1040;
    const double C18371 = C17926 * C1040;
    const double C1538 = C32932 * C1183;
    const double C4908 = C32735 * C1183;
    const double C6082 = C32932 * C1183;
    const double C18559 = C17926 * C1183;
    const double C19380 = C32735 * C1183;
    const double C2312 = C32672 * C1190;
    const double C4666 = C32735 * C1190;
    const double C16804 = C32735 * C1190;
    const double C2128 = C32672 * C2106;
    const double C32162 = C32151 + C32158;
    const double C32206 = C32205 + C32204;
    const double C32289 = C32287 + C32288;
    const double C7116 = C32932 * C7085;
    const double C11442 = C32932 * C7085;
    const double C14994 = C32735 * C7085;
    const double C28699 = C32735 * C7085;
    const double C31083 = C17926 * C7085;
    const double C12478 = C32672 * C7086;
    const double C14585 = C32735 * C7086;
    const double C28290 = C32735 * C7086;
    const double C32235 = C31795 * C32229;
    const double C32261 = C32260 + C32259;
    const double C7453 =
        (2 * C32065 + C31944 * C32284 +
         ae * (2 * C31944 * C32008 + C31944 * (C32008 + C32230 * C32047)) +
         be * (2 * C31944 * C32011 + C31944 * (C32011 + C32233 * C32047)) +
         C31795 * (ae * (2 * C32254 + C31944 * (C31901 + C32214 * C32047)) +
                   be * (2 * C32255 + C31944 * (C31907 + C32218 * C32047)) +
                   C31795 * (2 * C32256 +
                             C31944 * (C32212 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C32047)))) /
        C31576;
    const double C12284 =
        (ae * (3 * (C31877 + C31901 * C32047) +
               C31944 * (2 * C32254 + C31944 * (C31901 + C32214 * C32047))) +
         be * (3 * (C31881 + C31907 * C32047) +
               C31944 * (2 * C32255 + C31944 * (C31907 + C32218 * C32047))) +
         C31795 * (3 * C32284 +
                   C31944 * (2 * C32256 +
                             C31944 * (C32212 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C32047)))) /
        C31576;
    const double C12370 =
        (4 * (2 * C32065 + C31944 * C32284) +
         C31944 * (3 * C32284 +
                   C31944 * (2 * C32256 +
                             C31944 * (C32212 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C32047)))) /
        C31576;
    const double C32277 = C31795 * C32276;
    const double C31930 = C31906 + C31928;
    const double C32060 = C32057 + C32058;
    const double C32040 = C31894 + C32038;
    const double C32171 = C31795 * C32166;
    const double C7084 =
        (3 * (C31996 + C32114 * C32047) +
         C31944 * (2 * C31944 * C32114 + C31944 * (C32114 + C32166 * C32047))) /
        C31568;
    const double C32246 = C32244 + C32234;
    const double C31929 = C31900 + C31927;
    const double C32059 = C32054 + C32055;
    const double C32039 = C31892 + C32037;
    const double C32169 = C31795 * C32163;
    const double C7083 =
        (3 * (C31995 + C32113 * C32047) +
         C31944 * (2 * C31944 * C32113 + C31944 * (C32113 + C32163 * C32047))) /
        C31568;
    const double C32245 = C32242 + C32231;
    const double C121 = 5 * (3 * C31874 + C31801 * C31893) +
                        C31801 * (4 * C31893 + C31801 * C31925);
    const double C253 = 3 * C31874 + C31801 * C31893 + C31925 * C31798;
    const double C358 = 3 * C31874 + C31801 * C31893 + C31925 * C32047;
    const double C475 = C31795 * (4 * C31893 + C31801 * C31925);
    const double C591 = C31944 * (4 * C31893 + C31801 * C31925);
    const double C709 = C31944 * C31795 * C31925;
    const double C6407 = 5 * (3 * C31987 + C31795 * C32110) +
                         C31795 * (4 * C32110 + C31795 * C32170);
    const double C6478 = 3 * C31987 + C31795 * C32110 + C32170 * C32047;
    const double C6742 = C31944 * (4 * C32110 + C31795 * C32170);
    const double C32918 = C32881 / C31568;
    const double C32949 = C32922 / C31608;
    const double C32950 = C32924 + C32889;
    const double C2772 = C32889 - C32599 / C31578;
    const double C32921 = C32885 / C31568;
    const double C3810 = C2148 * C2770;
    const double C3803 = C2147 * C2770;
    const double C4078 = C623 * C2770;
    const double C4212 = C2667 * C2770;
    const double C32941 = C32911 / C31568;
    const double C32959 = C32944 / C31608;
    const double C32960 = C32945 + C32915;
    const double C13668 = C32915 - C32778 / C31578;
    const double C32943 = C32912 / C31568;
    const double C31592 = C31566 * C31587;
    const double C31683 = C31587 / C31578;
    const double C842 =
        (ae * -2 * C31575) / (C31576 * 2 * C31568) +
        (((C31566 * ((-4 * C31579) / C31568 - (C31566 * C31587) / C31568) *
           ae) /
              C31568 +
          2 * ((C31586 * ae) / C31568 - C31575 / C31578)) *
         ae) /
            C31568 -
        C31587 / C31578;
    const double C846 = (-C31587 / C31568) / (4 * C31576);
    const double C2777 = (-C31587 / C31568) / (2 * C31568);
    const double C5458 = (-C31587 / C31568) / (4 * C31576);
    const double C6343 =
        (-C31587 / C31568) / (4 * C31576 * std::pow(C31608, 2));
    const double C7778 = (-C31587 / C31568) / (4 * C31676);
    const double C15107 = (-C31587 / C31568) / C31608;
    const double C15947 = (-C31587 / C31568) / (4 * C31676);
    const double C17935 = (-C31587 / C31568) / C31719;
    const double C31641 = C31633 / C31568;
    const double C878 = C843 * C257;
    const double C876 = C843 * C256;
    const double C866 = C843 * C259;
    const double C864 = C843 * C258;
    const double C854 = C843 * C261;
    const double C852 = C843 * C260;
    const double C1361 = C843 * C267;
    const double C1359 = C843 * C266;
    const double C1349 = C843 * C269;
    const double C1347 = C843 * C268;
    const double C1553 = C843 * C713;
    const double C1551 = C843 * C712;
    const double C1541 = C843 * C715;
    const double C1539 = C843 * C714;
    const double C11445 = C843 * C2642;
    const double C11443 = C843 * C2641;
    const double C11433 = C843 * C1172;
    const double C11431 = C843 * C1171;
    const double C11421 = C843 * C711;
    const double C11419 = C843 * C710;
    const double C11779 = C843 * C1176;
    const double C11777 = C843 * C1175;
    const double C11946 = C843 * C1170;
    const double C11944 = C843 * C1169;
    const double C22249 = C843 * C1168;
    const double C22247 = C843 * C1167;
    const double C2809 = C2774 * C131;
    const double C2807 = C2774 * C130;
    const double C2797 = C2774 * C129;
    const double C2795 = C2774 * C128;
    const double C2789 = C2774 * C127;
    const double C2787 = C2774 * C126;
    const double C2781 = C2774 * C125;
    const double C2779 = C2774 * C124;
    const double C3185 = C2774 * C261;
    const double C3183 = C2774 * C260;
    const double C3177 = C2774 * C259;
    const double C3175 = C2774 * C258;
    const double C3169 = C2774 * C257;
    const double C3167 = C2774 * C256;
    const double C3357 = C2774 * C366;
    const double C3355 = C2774 * C365;
    const double C3349 = C2774 * C364;
    const double C3347 = C2774 * C363;
    const double C3341 = C2774 * C362;
    const double C3339 = C2774 * C361;
    const double C4685 = C2774 * C370;
    const double C4683 = C2774 * C369;
    const double C4677 = C2774 * C372;
    const double C4675 = C2774 * C371;
    const double C4669 = C2774 * C374;
    const double C4667 = C2774 * C373;
    const double C4657 = C2774 * C368;
    const double C4655 = C2774 * C367;
    const double C4919 = C2774 * C713;
    const double C4917 = C2774 * C712;
    const double C4911 = C2774 * C715;
    const double C4909 = C2774 * C714;
    const double C5326 = C2774 * C711;
    const double C5324 = C2774 * C710;
    const double C12941 = C2774 * C2099;
    const double C12939 = C2774 * C2098;
    const double C12933 = C2774 * C2097;
    const double C12931 = C2774 * C2096;
    const double C13158 = C2774 * C1176;
    const double C13156 = C2774 * C1175;
    const double C13557 = C2774 * C1172;
    const double C13555 = C2774 * C1171;
    const double C14588 = C2774 * C2101;
    const double C14586 = C2774 * C2100;
    const double C14989 = C2774 * C2642;
    const double C14987 = C2774 * C2641;
    const double C5494 = C5453 * C129;
    const double C5492 = C5453 * C128;
    const double C5474 = C5453 * C127;
    const double C5472 = C5453 * C126;
    const double C5462 = C5453 * C125;
    const double C5460 = C5453 * C124;
    const double C5913 = C5453 * C261;
    const double C5911 = C5453 * C260;
    const double C5901 = C5453 * C259;
    const double C5899 = C5453 * C258;
    const double C6101 = C5453 * C366;
    const double C6099 = C5453 * C365;
    const double C6089 = C5453 * C364;
    const double C6087 = C5453 * C363;
    const double C7123 = C5453 * C2099;
    const double C7121 = C5453 * C2098;
    const double C7103 = C5453 * C370;
    const double C7101 = C5453 * C369;
    const double C7091 = C5453 * C368;
    const double C7089 = C5453 * C367;
    const double C7457 = C5453 * C372;
    const double C7455 = C5453 * C371;
    const double C7640 = C5453 * C1172;
    const double C7638 = C5453 * C1171;
    const double C7628 = C5453 * C711;
    const double C7626 = C5453 * C710;
    const double C9120 = C5453 * C713;
    const double C9118 = C5453 * C712;
    const double C5490 = C5455 * C257;
    const double C5488 = C5455 * C256;
    const double C5478 = C5455 * C259;
    const double C5476 = C5455 * C258;
    const double C5466 = C5455 * C261;
    const double C5464 = C5455 * C260;
    const double C5909 = C5455 * C267;
    const double C5907 = C5455 * C266;
    const double C5897 = C5455 * C269;
    const double C5895 = C5455 * C268;
    const double C6097 = C5455 * C713;
    const double C6095 = C5455 * C712;
    const double C6085 = C5455 * C715;
    const double C6083 = C5455 * C714;
    const double C7119 = C5455 * C2642;
    const double C7117 = C5455 * C2641;
    const double C7107 = C5455 * C1172;
    const double C7105 = C5455 * C1171;
    const double C7095 = C5455 * C711;
    const double C7093 = C5455 * C710;
    const double C7461 = C5455 * C1176;
    const double C7459 = C5455 * C1175;
    const double C7632 = C5455 * C1170;
    const double C7630 = C5455 * C1169;
    const double C9116 = C5455 * C1168;
    const double C9114 = C5455 * C1167;
    const double C15139 = C15104 * C131;
    const double C15137 = C15104 * C130;
    const double C15127 = C15104 * C129;
    const double C15125 = C15104 * C128;
    const double C15119 = C15104 * C127;
    const double C15117 = C15104 * C126;
    const double C15111 = C15104 * C125;
    const double C15109 = C15104 * C124;
    const double C15515 = C15104 * C261;
    const double C15513 = C15104 * C260;
    const double C15507 = C15104 * C259;
    const double C15505 = C15104 * C258;
    const double C15499 = C15104 * C257;
    const double C15497 = C15104 * C256;
    const double C15687 = C15104 * C366;
    const double C15685 = C15104 * C365;
    const double C15679 = C15104 * C364;
    const double C15677 = C15104 * C363;
    const double C15671 = C15104 * C362;
    const double C15669 = C15104 * C361;
    const double C16807 = C15104 * C374;
    const double C16805 = C15104 * C373;
    const double C16795 = C15104 * C372;
    const double C16793 = C15104 * C371;
    const double C17144 = C15104 * C2099;
    const double C17142 = C15104 * C2098;
    const double C17136 = C15104 * C2097;
    const double C17134 = C15104 * C2096;
    const double C17123 = C15104 * C370;
    const double C17121 = C15104 * C369;
    const double C17115 = C15104 * C368;
    const double C17113 = C15104 * C367;
    const double C17382 = C15104 * C713;
    const double C17380 = C15104 * C712;
    const double C17374 = C15104 * C1176;
    const double C17372 = C15104 * C1175;
    const double C17797 = C15104 * C1172;
    const double C17795 = C15104 * C1171;
    const double C17789 = C15104 * C711;
    const double C17787 = C15104 * C710;
    const double C19383 = C15104 * C715;
    const double C19381 = C15104 * C714;
    const double C28293 = C15104 * C2101;
    const double C28291 = C15104 * C2100;
    const double C28694 = C15104 * C2642;
    const double C28692 = C15104 * C2641;
    const double C31664 = C31659 / C31568;
    const double C7798 = C7777 * C1029;
    const double C7796 = C7777 * C1028;
    const double C7794 = C7777 * C1031;
    const double C7792 = C7777 * C1030;
    const double C15967 = C15946 * C1029;
    const double C15965 = C15946 * C1028;
    const double C15963 = C15946 * C1031;
    const double C15961 = C15946 * C1030;
    const double C32971 = C32936 + C32966;
    const double C7766 = C32956 - (C32738 * C32727) / C31568;
    const double C15972 = C32957 * C281;
    const double C15960 = C32957 * C280;
    const double C16338 = C32957 * C1041;
    const double C16496 = C32957 * C1184;
    const double C27540 = C32957 * C1187;
    const double C27528 = C32957 * C1185;
    const double C6331 = C32957 / C31608 - C32736 / C31721;
    const double C7803 = C7767 * C281;
    const double C7791 = C7767 * C280;
    const double C8169 = C7767 * C1041;
    const double C8327 = C7767 * C1184;
    const double C9840 = C7767 * C1187;
    const double C9828 = C7767 * C1185;
    const double C32967 = C32938 + C32956;
    const double C2123 = C1866 * C839;
    const double C2490 = C1866 * C838;
    const double C10628 = C1866 * C32948;
    const double C10930 = C1866 * C32961;
    const double C12373 = C1866 * C32588;
    const double C13870 = C1866 * C32598;
    const double C14146 = C1866 * C32882;
    const double C22957 = C1866 * C32598;
    const double C23226 = C1866 * C15938;
    const double C24723 = C1866 * C32601;
    const double C25025 = C1866 * C32593;
    const double C2655 = C2336 * C839;
    const double C11080 = C2336 * C32948;
    const double C14281 = C2336 * C32598;
    const double C23361 = C2336 * C32598;
    const double C25175 = C2336 * C32601;
    const double C2668 = C2666 + C2660;
    const double C12198 = C12196 * C32588;
    const double C13874 = C12196 * C32882;
    const double C22961 = C12196 * C15938;
    const double C12381 = C12380 + C12378;
    const double C168 = C160 - C161;
    const double C496 = C480 - C481;
    const double C612 = C596 - C597;
    const double C1862 = C1856 - C1857;
    const double C3945 = C3941 - C3942;
    const double C2325 = C2309 - C2310;
    const double C1037 =
        (3 * (C31868 + C31795 * C31965 + C31961 * ae) +
         C31795 * (2 * C31965 + C31795 * C32019 + C32010 * ae) +
         (2 * C31961 + C31795 * C32010) * ae) /
        C31568;
    const double C1178 =
        (C31868 + C31795 * C31965 + C31961 * ae + C32019 * C32047) / C31568;
    const double C1728 =
        (C31944 * (2 * C31965 + C31795 * C32019 + C32010 * ae)) / C31568;
    const double C1044 =
        (3 * (C31958 + ae * C31964 + be * C31965 + C31795 * C32013) +
         ae * (2 * C31964 + C31795 * C32018 + C32010 * be) +
         be * (2 * C31965 + C31795 * C32019 + C32010 * ae) +
         C31795 * (2 * C32013 + ae * C32018 + be * C32019 +
                   C31795 * (C31829 + ae * C32008 + be * C32011 +
                             C31795 * (ae * C31901 + be * C31907 +
                                       C31795 * C31801 * C31837)))) /
        C31576;
    const double C1732 =
        (2 * (ae * C31944 * C31877 + be * C31944 * C31881 + C31795 * C32065) +
         ae * C31944 * C32018 + be * C31944 * C32019 +
         C31795 * (C32065 + ae * C31944 * C32008 + be * C31944 * C32011 +
                   C31795 * (ae * C31944 * C31901 + be * C31944 * C31907 +
                             C31795 * C31944 * C31801 * C31837))) /
        C31576;
    const double C1036 =
        (3 * (C31866 + C31795 * C31964 + C31961 * be) +
         C31795 * (2 * C31964 + C31795 * C32018 + C32010 * be) +
         (2 * C31961 + C31795 * C32010) * be) /
        C31568;
    const double C1177 =
        (C31866 + C31795 * C31964 + C31961 * be + C32018 * C32047) / C31568;
    const double C1727 =
        (C31944 * (2 * C31964 + C31795 * C32018 + C32010 * be)) / C31568;
    const double C32118 = C32091 + C32116;
    const double C32117 = C32085 + C32115;
    const double C32142 = C32122 + C32123;
    const double C7111 = C5457 * C1174;
    const double C7644 = C5455 * C1174;
    const double C11437 = C845 * C1174;
    const double C11958 = C843 * C1174;
    const double C13561 = C2776 * C1174;
    const double C17801 = C15106 * C1174;
    const double C20244 = C31716 * C1174;
    const double C7636 = C5457 * C1726;
    const double C9831 = C7777 * C1726;
    const double C11950 = C845 * C1726;
    const double C20898 = C31716 * C1726;
    const double C27531 = C15946 * C1726;
    const double C7115 = C5457 * C7080;
    const double C11441 = C845 * C7080;
    const double C14993 = C2776 * C7080;
    const double C28698 = C15106 * C7080;
    const double C31082 = C31716 * C7080;
    const double C177 = C172 + C159;
    const double C505 = C501 + C487;
    const double C621 = C617 + C603;
    const double C1867 = C1864 + C1855;
    const double C2335 = C2331 + C2320;
    const double C2330 = C2326 - C2315;
    const double C14012 = C14011 - C14009;
    const double C2155 = C2150 * C839;
    const double C10631 = C2150 * C32948;
    const double C12374 = C2150 * C32588;
    const double C13872 = C2150 * C32598;
    const double C14148 = C2150 * C32882;
    const double C22959 = C2150 * C32598;
    const double C23228 = C2150 * C15938;
    const double C24726 = C2150 * C32601;
    const double C7637 = C32932 * C1731;
    const double C9832 = C32909 * C1731;
    const double C10274 = C7767 * C1731;
    const double C11951 = C32932 * C1731;
    const double C20899 = C17926 * C1731;
    const double C27532 = C32909 * C1731;
    const double C27974 = C32957 * C1731;
    const double C7649 = C32932 * C6486;
    const double C9836 = C32909 * C6486;
    const double C11963 = C32932 * C6486;
    const double C27536 = C32909 * C6486;
    const double C31552 = C17926 * C6486;
    const double C7109 = C5457 * C1173;
    const double C7642 = C5455 * C1173;
    const double C11435 = C845 * C1173;
    const double C11956 = C843 * C1173;
    const double C13559 = C2776 * C1173;
    const double C17799 = C15106 * C1173;
    const double C20242 = C31716 * C1173;
    const double C7634 = C5457 * C1725;
    const double C9829 = C7777 * C1725;
    const double C11948 = C845 * C1725;
    const double C20896 = C31716 * C1725;
    const double C27529 = C15946 * C1725;
    const double C7113 = C5457 * C7079;
    const double C11439 = C845 * C7079;
    const double C14991 = C2776 * C7079;
    const double C28696 = C15106 * C7079;
    const double C31080 = C31716 * C7079;
    const double C12483 = C12481 + C12474;
    const double C142 =
        (5 * (3 * C31827 + C31801 * C31841) +
         C31801 *
             (4 * C31841 +
              C31801 * (3 * C31839 +
                        C31801 * (2 * C31801 * C31837 +
                                  C31801 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C274 =
        (ae * (3 * (C31804 * C31803 * C31843 + C31847 * C31813) +
               C31801 *
                   (2 * C31801 * C31847 +
                    C31801 * (C31847 + C31821 * C31820 * C31843 * C31813))) +
         be * (3 * (C31804 * C31803 * C31844 + C31848 * C31813) +
               C31801 *
                   (2 * C31801 * C31848 +
                    C31801 * (C31848 + C31821 * C31820 * C31844 * C31813))) +
         C31795 * (3 * C31827 + C31801 * C31841)) /
        C31576;
    const double C282 =
        (2 * C31801 * C31817 + C31801 * C31827 +
         ae * (C31795 * C31897 + C31893 * be) +
         be * (C31795 * C31898 + C31893 * ae) +
         C31795 * (ae * C31897 + be * C31898 + C31795 * C31841)) /
        C31576;
    const double C379 = ((zP - zQ) * (3 * C31827 + C31801 * C31841)) / C31576;
    const double C387 = (2 * C31801 * C31817 + C31801 * C31827 +
                         C31841 * std::pow(zP - zQ, 2)) /
                        C31576;
    const double C388 =
        (3 * C31827 + C31801 * C31841 +
         (3 * C31839 +
          C31801 * (2 * C31801 * C31837 +
                    C31801 * (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813))) *
             std::pow(zP - zQ, 2)) /
        C31576;
    const double C594 =
        ((zP - zQ) *
         (4 * C31841 +
          C31801 * (3 * C31839 +
                    C31801 * (2 * C31801 * C31837 +
                              C31801 * (C31837 +
                                        (C31831 * C31832 +
                                         C31798 * bs[8] * std::pow(C31793, 8)) *
                                            C31567 * C31813))))) /
        C31576;
    const double C723 = (ae * C31944 * C31897 + be * C31944 * C31898 +
                         C31795 * C31944 * C31841) /
                        C31576;
    const double C2307 =
        (ae * (C31897 + C31924 * C32047) + be * (C31898 + C31926 * C32047) +
         C31795 * (C31841 +
                   (2 * C31801 * C31837 +
                    C31801 * (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813)) *
                       C32047)) /
        C31576;
    const double C2485 =
        (2 * C31944 * C31841 +
         C31944 * (C31841 +
                   (2 * C31801 * C31837 +
                    C31801 * (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813)) *
                       C32047)) /
        C31576;
    const double C2149 = C2144 + C2128;
    const double C32168 = C31795 * C32162;
    const double C7624 =
        (2 * (ae * (2 * C32184 + C31944 * C32199) +
              be * (2 * C32185 + C31944 * C32200) + C31795 * C32289) +
         ae * (2 * C31944 * C32113 + C31944 * (C32113 + C32163 * C32047)) +
         be * (2 * C31944 * C32114 + C31944 * (C32114 + C32166 * C32047)) +
         C31795 *
             (C32289 + ae * (2 * C32263 + C31944 * (C32096 + C32145 * C32047)) +
              be * (2 * C32264 + C31944 * (C32099 + C32148 * C32047)) +
              C31795 *
                  (ae * (2 * C32265 + C31944 * (C31884 + C31910 * C32047)) +
                   be * (2 * C32266 + C31944 * (C31888 + C31914 * C32047)) +
                   C31795 * (2 * C32267 +
                             C31944 * (C31837 +
                                       (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C32047))))) /
        C31576;
    const double C12178 = (4 * (2 * C32063 + C31944 * C32194) +
                           C31944 * (3 * C32194 + C31944 * C32289)) /
                          C31576;
    const double C12179 =
        (5 * (3 * C32194 + C31944 * C32289) +
         C31944 *
             (4 * C32289 +
              C31944 * (3 * C32201 +
                        C31944 * (2 * C32267 +
                                  C31944 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C32047))))) /
        C31576;
    const double C12467 =
        (ae * (4 * (2 * C32184 + C31944 * C32199) +
               C31944 * (3 * C32199 +
                         C31944 * (2 * C32265 +
                                   C31944 * (C31884 + C31910 * C32047)))) +
         be * (4 * (2 * C32185 + C31944 * C32200) +
               C31944 * (3 * C32200 +
                         C31944 * (2 * C32266 +
                                   C31944 * (C31888 + C31914 * C32047)))) +
         C31795 *
             (4 * C32289 +
              C31944 * (3 * C32201 +
                        C31944 * (2 * C32267 +
                                  C31944 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C32047))))) /
        C31576;
    const double C12484 = C12482 + C12478;
    const double C32241 = C32228 + C32235;
    const double C32278 = C32275 + C32277;
    const double C135 = (5 * (3 * C31875 + C31801 * C31898) +
                         C31801 * (4 * C31898 + C31801 * C31930)) /
                        C31568;
    const double C273 =
        (3 * C31875 + C31801 * C31898 +
         C31795 * (C31795 * C31930 + C31925 * ae) + C31795 * C31925 * ae) /
        C31568;
    const double C378 =
        (3 * C31875 + C31801 * C31898 + C31930 * C32047) / C31568;
    const double C477 = (C31795 * (4 * C31898 + C31801 * C31930) +
                         (4 * C31893 + C31801 * C31925) * ae) /
                        C31568;
    const double C593 = (C31944 * (4 * C31898 + C31801 * C31930)) / C31568;
    const double C719 = (C31944 * (C31795 * C31930 + C31925 * ae)) / C31568;
    const double C1340 = (2 * (C31795 * C31898 + C31893 * ae) +
                          C31795 * (C31898 + C31795 * C32060 + C32056 * ae) +
                          (C31893 + C31919 * C31798) * ae) /
                         C31568;
    const double C1532 =
        (C31944 * (C31898 + C31795 * C32060 + C32056 * ae)) / C31568;
    const double C2306 =
        (C31795 * C31898 + C31893 * ae + C32060 * C32047) / C31568;
    const double C32042 = C32040 + C32035;
    const double C32174 = C32139 + C32171;
    const double C32248 = C31795 * C32246;
    const double C7452 =
        (2 * C31944 * C32019 + C31944 * (C32019 + C32246 * C32047)) / C31568;
    const double C283 =
        (3 * C31827 + C31801 * C31841 + ae * (C31795 * C31929 + C31925 * be) +
         be * (C31795 * C31930 + C31925 * ae) +
         C31795 *
             (ae * C31929 + be * C31930 +
              C31795 * (3 * C31839 +
                        C31801 * (2 * C31801 * C31837 +
                                  C31801 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C478 =
        (ae * (4 * C31897 + C31801 * C31929) +
         be * (4 * C31898 + C31801 * C31930) +
         C31795 *
             (4 * C31841 +
              C31801 * (3 * C31839 +
                        C31801 * (2 * C31801 * C31837 +
                                  C31801 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C724 =
        (ae * C31944 * C31929 + be * C31944 * C31930 +
         C31795 * C31944 *
             (3 * C31839 +
              C31801 *
                  (2 * C31801 * C31837 +
                   C31801 * (C31837 + (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                          C31567 * C31813)))) /
        C31576;
    const double C134 = (5 * (3 * C31873 + C31801 * C31897) +
                         C31801 * (4 * C31897 + C31801 * C31929)) /
                        C31568;
    const double C272 =
        (3 * C31873 + C31801 * C31897 +
         C31795 * (C31795 * C31929 + C31925 * be) + C31795 * C31925 * be) /
        C31568;
    const double C377 =
        (3 * C31873 + C31801 * C31897 + C31929 * C32047) / C31568;
    const double C476 = (C31795 * (4 * C31897 + C31801 * C31929) +
                         (4 * C31893 + C31801 * C31925) * be) /
                        C31568;
    const double C592 = (C31944 * (4 * C31897 + C31801 * C31929)) / C31568;
    const double C718 = (C31944 * (C31795 * C31929 + C31925 * be)) / C31568;
    const double C1341 =
        (2 * (ae * C31897 + be * C31898 + C31795 * C31841) +
         ae * (C31897 + C31795 * C32059 + C32056 * be) +
         be * (C31898 + C31795 * C32060 + C32056 * ae) +
         C31795 *
             (C31841 + ae * C32059 + be * C32060 +
              C31795 * (ae * C31924 + be * C31926 +
                        C31795 * (2 * C31801 * C31837 +
                                  C31801 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C1533 =
        (C31944 * C31841 + ae * C31944 * C32059 + be * C31944 * C32060 +
         C31795 *
             (ae * C31944 * C31924 + be * C31944 * C31926 +
              C31795 * C31944 *
                  (2 * C31801 * C31837 +
                   C31801 * (C31837 + (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                          C31567 * C31813)))) /
        C31576;
    const double C1339 = (2 * (C31795 * C31897 + C31893 * be) +
                          C31795 * (C31897 + C31795 * C32059 + C32056 * be) +
                          (C31893 + C31919 * C31798) * be) /
                         C31568;
    const double C1531 =
        (C31944 * (C31897 + C31795 * C32059 + C32056 * be)) / C31568;
    const double C2305 =
        (C31795 * C31897 + C31893 * be + C32059 * C32047) / C31568;
    const double C32041 = C32039 + C32032;
    const double C32173 = C32131 + C32169;
    const double C32247 = C31795 * C32245;
    const double C7303 =
        (2 * (ae * (C31877 + C31901 * C32047) +
              be * (C31881 + C31907 * C32047) + C31795 * C32284) +
         ae * (C32018 + C32245 * C32047) + be * (C32019 + C32246 * C32047) +
         C31795 * (C32284 + ae * (C32008 + C32230 * C32047) +
                   be * (C32011 + C32233 * C32047) +
                   C31795 * (ae * (C31901 + C32214 * C32047) +
                             be * (C31907 + C32218 * C32047) +
                             C31795 * (C32212 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C32047)))) /
        C31576;
    const double C7451 =
        (2 * C31944 * C32018 + C31944 * (C32018 + C32245 * C32047)) / C31568;
    const double C32970 = C32918 + C32962;
    const double C2771 = C32949 - (C32601 * C32584) / C31568;
    const double C21207 = C622 * C32950;
    const double C105 = C32950 / C31608 - C32599 / C31721;
    const double C3805 = C622 * C2772;
    const double C32963 = C32921 + C32949;
    const double C32972 = C32941 + C32968;
    const double C13667 = C32959 - (C32780 * C32769) / C31568;
    const double C12046 = C32960 / C31608 - C32778 / C31721;
    const double C32969 = C32943 + C32959;
    const double C31685 = C31592 / C31578;
    const double C31681 = C31592 / C31568;
    const double C844 =
        (((-4 * C31579) / C31568 - C31592 / C31568) * ae) / C31578 +
        ((2 * ((0 * ae) / C31568 - C31579 / C31576) - C31592 / C31578) * ae) /
            C31568;
    const double C2775 =
        (((-4 * C31579) / C31568 - C31592 / C31568) * ae) / C31568;
    const double C5454 =
        (-(be * -2 * C31575) / C31576) / C31608 -
        ((2 * ((-C31575 / C31568) / C31608 - (C31586 * be) / C31568) -
          (C31566 * ((-4 * C31579) / C31568 - C31592 / C31568) * be) / C31568) *
         be) /
            C31568 -
        C31587 / C31578;
    const double C5456 =
        (-(((-4 * C31579) / C31568 - C31592 / C31568) * be) / C31568) / C31608 -
        ((2 * ((-C31582 / C31568) / C31608 - (0 * be) / C31568) -
          C31592 / C31578) *
         be) /
            C31568;
    const double C881 = C842 * C118;
    const double C861 = C842 * C117;
    const double C849 = C842 * C116;
    const double C1364 = C842 * C247;
    const double C1352 = C842 * C246;
    const double C1556 = C842 * C352;
    const double C1544 = C842 * C351;
    const double C11448 = C842 * C2090;
    const double C11428 = C842 * C354;
    const double C11416 = C842 * C353;
    const double C11774 = C842 * C355;
    const double C11953 = C842 * C1159;
    const double C11941 = C842 * C705;
    const double C22252 = C842 * C706;
    const double C873 = C846 * C252;
    const double C869 = C846 * C251;
    const double C857 = C846 * C250;
    const double C1356 = C846 * C1023;
    const double C1344 = C846 * C1022;
    const double C1548 = C846 * C1157;
    const double C1536 = C846 * C1156;
    const double C11440 = C846 * C7076;
    const double C11436 = C846 * C1160;
    const double C11424 = C846 * C1158;
    const double C11782 = C846 * C1162;
    const double C11961 = C846 * C6477;
    const double C11949 = C846 * C1722;
    const double C22244 = C846 * C1723;
    const double C2804 = C2777 * C244;
    const double C2800 = C2777 * C245;
    const double C2792 = C2777 * C246;
    const double C2784 = C2777 * C247;
    const double C3180 = C2777 * C250;
    const double C3172 = C2777 * C251;
    const double C3164 = C2777 * C252;
    const double C3352 = C2777 * C706;
    const double C3344 = C2777 * C707;
    const double C3336 = C2777 * C708;
    const double C4680 = C2777 * C1159;
    const double C4672 = C2777 * C1161;
    const double C4664 = C2777 * C1163;
    const double C4660 = C2777 * C705;
    const double C4914 = C2777 * C1157;
    const double C4906 = C2777 * C1156;
    const double C5329 = C2777 * C1158;
    const double C12936 = C2777 * C2638;
    const double C12928 = C2777 * C2639;
    const double C13153 = C2777 * C1162;
    const double C13560 = C2777 * C1160;
    const double C14583 = C2777 * C7077;
    const double C14992 = C2777 * C7076;
    const double C5485 = C5458 * C252;
    const double C5481 = C5458 * C251;
    const double C5469 = C5458 * C250;
    const double C5904 = C5458 * C1023;
    const double C5892 = C5458 * C1022;
    const double C6092 = C5458 * C1157;
    const double C6080 = C5458 * C1156;
    const double C7114 = C5458 * C7076;
    const double C7110 = C5458 * C1160;
    const double C7098 = C5458 * C1158;
    const double C7464 = C5458 * C1162;
    const double C7647 = C5458 * C6477;
    const double C7635 = C5458 * C1722;
    const double C9111 = C5458 * C1723;
    const double C7797 = C7778 * C1022;
    const double C7793 = C7778 * C1023;
    const double C8163 = C7778 * C1026;
    const double C8321 = C7778 * C1723;
    const double C9834 = C7778 * C6477;
    const double C9830 = C7778 * C1722;
    const double C10276 = C7778 * C6476;
    const double C15134 = C15107 * C244;
    const double C15130 = C15107 * C245;
    const double C15122 = C15107 * C246;
    const double C15114 = C15107 * C247;
    const double C15510 = C15107 * C250;
    const double C15502 = C15107 * C251;
    const double C15494 = C15107 * C252;
    const double C15682 = C15107 * C706;
    const double C15674 = C15107 * C707;
    const double C15666 = C15107 * C708;
    const double C16802 = C15107 * C1163;
    const double C16798 = C15107 * C1161;
    const double C17139 = C15107 * C2638;
    const double C17131 = C15107 * C2639;
    const double C17126 = C15107 * C1159;
    const double C17118 = C15107 * C705;
    const double C17377 = C15107 * C1157;
    const double C17369 = C15107 * C1162;
    const double C17800 = C15107 * C1160;
    const double C17792 = C15107 * C1158;
    const double C19378 = C15107 * C1156;
    const double C28288 = C15107 * C7077;
    const double C28697 = C15107 * C7076;
    const double C15966 = C15947 * C1022;
    const double C15962 = C15947 * C1023;
    const double C16332 = C15947 * C1026;
    const double C16490 = C15947 * C1723;
    const double C27534 = C15947 * C6477;
    const double C27530 = C15947 * C1722;
    const double C27976 = C15947 * C6476;
    const double C17962 = C17935 * C252;
    const double C17958 = C17935 * C251;
    const double C17946 = C17935 * C250;
    const double C18381 = C17935 * C1023;
    const double C18369 = C17935 * C1022;
    const double C18569 = C17935 * C1157;
    const double C18557 = C17935 * C1156;
    const double C20243 = C17935 * C1160;
    const double C20231 = C17935 * C1162;
    const double C20227 = C17935 * C1158;
    const double C20476 = C17935 * C1723;
    const double C20897 = C17935 * C1722;
    const double C31081 = C17935 * C7076;
    const double C31550 = C17935 * C6477;
    const double C31645 = C31641 - C31634;
    const double C15980 = C32971 * C138;
    const double C15952 = C32971 * C137;
    const double C16346 = C32971 * C277;
    const double C16504 = C32971 * C382;
    const double C27548 = C32971 * C384;
    const double C27520 = C32971 * C383;
    const double C27966 = C32971 * C720;
    const double C6328 =
        (C32964 + 2 * C32731) / C31608 - (C32971 * C32727) / C31568;
    const double C7807 = C7766 * C276;
    const double C7787 = C7766 * C277;
    const double C8173 = C7766 * C280;
    const double C8331 = C7766 * C721;
    const double C9844 = C7766 * C1186;
    const double C9824 = C7766 * C720;
    const double C10270 = C7766 * C1185;
    const double C15976 = C32967 * C276;
    const double C15956 = C32967 * C277;
    const double C16342 = C32967 * C280;
    const double C16500 = C32967 * C721;
    const double C27544 = C32967 * C1186;
    const double C27524 = C32967 * C720;
    const double C27970 = C32967 * C1185;
    const double C6329 =
        (C32952 + 2 * C32738 + C32971) / C31608 - (C32967 * C32727) / C31568;
    const double C6330 = (C32932 + C32735 / C31568 + C32967) / C31608 -
                         (C32957 * C32727) / C31568;
    const double C2157 = C2153 + C2123;
    const double C10633 = C10627 + C10628;
    const double C13875 = C13869 + C13870;
    const double C22962 = C22956 + C22957;
    const double C24728 = C24722 + C24723;
    const double C2670 = C2668 * C838;
    const double C11082 = C2668 * C32961;
    const double C12470 = C2668 * C32588;
    const double C14282 = C2668 * C32882;
    const double C23362 = C2668 * C15938;
    const double C25177 = C2668 * C32593;
    const double C12382 = C12381 * C32588;
    const double C13873 = C12381 * C32598;
    const double C22960 = C12381 * C32598;
    const double C173 = C168 - C162;
    const double C500 = C496 - C482;
    const double C616 = C612 - C598;
    const double C1865 = C1862 - C1858;
    const double C3946 = C3945 - C3943;
    const double C2329 = C2325 - C2311;
    const double C8164 = C7777 * C1037;
    const double C16333 = C15946 * C1037;
    const double C7465 = C5457 * C1178;
    const double C11783 = C845 * C1178;
    const double C13154 = C2776 * C1178;
    const double C17370 = C15106 * C1178;
    const double C20232 = C31716 * C1178;
    const double C8322 = C7777 * C1728;
    const double C9112 = C5457 * C1728;
    const double C16491 = C15946 * C1728;
    const double C20477 = C31716 * C1728;
    const double C22245 = C845 * C1728;
    const double C8165 = C32909 * C1044;
    const double C16334 = C32909 * C1044;
    const double C8323 = C32909 * C1732;
    const double C9113 = C32932 * C1732;
    const double C16492 = C32909 * C1732;
    const double C20478 = C17926 * C1732;
    const double C22246 = C32932 * C1732;
    const double C8162 = C7777 * C1036;
    const double C16331 = C15946 * C1036;
    const double C7463 = C5457 * C1177;
    const double C11781 = C845 * C1177;
    const double C13152 = C2776 * C1177;
    const double C17368 = C15106 * C1177;
    const double C20230 = C31716 * C1177;
    const double C8320 = C7777 * C1727;
    const double C9110 = C5457 * C1727;
    const double C16489 = C15946 * C1727;
    const double C20475 = C31716 * C1727;
    const double C22243 = C845 * C1727;
    const double C32120 = C32118 + C32107;
    const double C32119 = C32117 + C32104;
    const double C32150 = C32142 + C32124;
    const double C2489 = C621 * C32923;
    const double C3806 = C621 * C32901;
    const double C4080 = C621 * C2772;
    const double C10929 = C621 * C32923;
    const double C21208 = C621 * C32901;
    const double C21475 = C621 * C32950;
    const double C25024 = C621 * C17929;
    const double C2124 = C1867 * C32923;
    const double C2491 = C1867 * C839;
    const double C3808 = C1867 * C2772;
    const double C10629 = C1867 * C32923;
    const double C10931 = C1867 * C32948;
    const double C14147 = C1867 * C32598;
    const double C21210 = C1867 * C32950;
    const double C23227 = C1867 * C32598;
    const double C24724 = C1867 * C17929;
    const double C25026 = C1867 * C32601;
    const double C2656 = C2335 * C32923;
    const double C4214 = C2335 * C2772;
    const double C11081 = C2335 * C32923;
    const double C21609 = C2335 * C32950;
    const double C25176 = C2335 * C17929;
    const double C2334 = C2330 + C2316;
    const double C14013 = C14012 + C14010;
    const double C13876 = C13871 + C13872;
    const double C22963 = C22958 + C22959;
    const double C12485 = C12483 * C32588;
    const double C14284 = C12483 * C32882;
    const double C23364 = C12483 * C15938;
    const double C483 = C32672 * C274;
    const double C2806 = C32735 * C274;
    const double C15136 = C32735 * C274;
    const double C875 = C32932 * C282;
    const double C3166 = C32735 * C282;
    const double C5487 = C32932 * C282;
    const double C15496 = C32735 * C282;
    const double C17964 = C17926 * C282;
    const double C599 = C32672 * C379;
    const double C1859 = C32672 * C387;
    const double C3338 = C32735 * C723;
    const double C3944 = C32672 * C723;
    const double C15668 = C32735 * C723;
    const double C2154 = C2149 * C32923;
    const double C10630 = C2149 * C32923;
    const double C14149 = C2149 * C32598;
    const double C23229 = C2149 * C32598;
    const double C24725 = C2149 * C17929;
    const double C12191 = C32672 * C12178;
    const double C12486 = C12484 * C32588;
    const double C1039 =
        (3 * (C31875 + C31795 * C31956 + C31952 * ae) +
         C31795 * (2 * C31956 + C31795 * C32042 + C32033 * ae) +
         (2 * C31952 + C31795 * C32033) * ae) /
        C31568;
    const double C1182 =
        (C31875 + C31795 * C31956 + C31952 * ae + C32042 * C32047) / C31568;
    const double C1730 =
        (C31944 * (2 * C31956 + C31795 * C32042 + C32033 * ae)) / C31568;
    const double C32176 = C32174 + C32157;
    const double C32250 = C32217 + C32248;
    const double C1045 =
        (3 * (C31827 + ae * C31955 + be * C31956 + C31795 * C32036) +
         ae * (2 * C31955 + C31795 * C32041 + C32033 * be) +
         be * (2 * C31956 + C31795 * C32042 + C32033 * ae) +
         C31795 *
             (2 * C32036 + ae * C32041 + be * C32042 +
              C31795 * (C31839 + ae * C32031 + be * C32034 +
                        C31795 * (ae * C31918 + be * C31920 +
                                  C31795 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C1733 =
        (2 * (ae * C31944 * C31892 + be * C31944 * C31894 + C31795 * C32067) +
         ae * C31944 * C32041 + be * C31944 * C32042 +
         C31795 *
             (C32067 + ae * C31944 * C32031 + be * C31944 * C32034 +
              C31795 * (ae * C31944 * C31918 + be * C31944 * C31920 +
                        C31795 * C31944 *
                            (C31837 + (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                          C31567 * C31813)))) /
        C31576;
    const double C1038 =
        (3 * (C31873 + C31795 * C31955 + C31952 * be) +
         C31795 * (2 * C31955 + C31795 * C32041 + C32033 * be) +
         (2 * C31952 + C31795 * C32033) * be) /
        C31568;
    const double C1181 =
        (C31873 + C31795 * C31955 + C31952 * be + C32041 * C32047) / C31568;
    const double C1729 =
        (C31944 * (2 * C31955 + C31795 * C32041 + C32033 * be)) / C31568;
    const double C32175 = C32173 + C32154;
    const double C32249 = C32213 + C32247;
    const double C21212 = C2148 * C32970;
    const double C21205 = C2147 * C32970;
    const double C21473 = C623 * C32970;
    const double C21607 = C2667 * C32970;
    const double C102 =
        (C32961 + 2 * C32593) / C31608 - (C32970 * C32584) / C31568;
    const double C3809 = C1866 * C2771;
    const double C3804 = C623 * C2771;
    const double C4079 = C622 * C2771;
    const double C4213 = C2336 * C2771;
    const double C21211 = C1866 * C32963;
    const double C21206 = C623 * C32963;
    const double C21474 = C622 * C32963;
    const double C21608 = C2336 * C32963;
    const double C103 =
        (C32948 + 2 * C32601 + C32970) / C31608 - (C32963 * C32584) / C31568;
    const double C104 = (C32923 + C32598 / C31568 + C32963) / C31608 -
                        (C32950 * C32584) / C31568;
    const double C12043 =
        (C32965 + 2 * C32773) / C31608 - (C32972 * C32769) / C31568;
    const double C12044 =
        (C32954 + 2 * C32780 + C32972) / C31608 - (C32969 * C32769) / C31568;
    const double C12045 = (C32935 + C32777 / C31568 + C32969) / C31608 -
                          (C32960 * C32769) / C31568;
    const double C31689 = C31684 - C31685;
    const double C31693 = C31688 - C31681;
    const double C877 = C844 * C245;
    const double C865 = C844 * C246;
    const double C853 = C844 * C247;
    const double C1360 = C844 * C250;
    const double C1348 = C844 * C251;
    const double C1552 = C844 * C706;
    const double C1540 = C844 * C707;
    const double C11444 = C844 * C2638;
    const double C11432 = C844 * C1159;
    const double C11420 = C844 * C705;
    const double C11778 = C844 * C1161;
    const double C11957 = C844 * C1160;
    const double C11945 = C844 * C1158;
    const double C22248 = C844 * C1157;
    const double C2808 = C2775 * C119;
    const double C2796 = C2775 * C118;
    const double C2788 = C2775 * C117;
    const double C2780 = C2775 * C116;
    const double C3184 = C2775 * C247;
    const double C3176 = C2775 * C246;
    const double C3168 = C2775 * C245;
    const double C3356 = C2775 * C352;
    const double C3348 = C2775 * C351;
    const double C3340 = C2775 * C350;
    const double C4684 = C2775 * C354;
    const double C4676 = C2775 * C355;
    const double C4668 = C2775 * C356;
    const double C4656 = C2775 * C353;
    const double C4918 = C2775 * C706;
    const double C4910 = C2775 * C707;
    const double C5325 = C2775 * C705;
    const double C12940 = C2775 * C2090;
    const double C12932 = C2775 * C2089;
    const double C13157 = C2775 * C1161;
    const double C13556 = C2775 * C1159;
    const double C14587 = C2775 * C2091;
    const double C14988 = C2775 * C2638;
    const double C5493 = C5454 * C118;
    const double C5473 = C5454 * C117;
    const double C5461 = C5454 * C116;
    const double C5912 = C5454 * C247;
    const double C5900 = C5454 * C246;
    const double C6100 = C5454 * C352;
    const double C6088 = C5454 * C351;
    const double C7122 = C5454 * C2090;
    const double C7102 = C5454 * C354;
    const double C7090 = C5454 * C353;
    const double C7456 = C5454 * C355;
    const double C7639 = C5454 * C1159;
    const double C7627 = C5454 * C705;
    const double C9119 = C5454 * C706;
    const double C5489 = C5456 * C245;
    const double C5477 = C5456 * C246;
    const double C5465 = C5456 * C247;
    const double C5908 = C5456 * C250;
    const double C5896 = C5456 * C251;
    const double C6096 = C5456 * C706;
    const double C6084 = C5456 * C707;
    const double C7118 = C5456 * C2638;
    const double C7106 = C5456 * C1159;
    const double C7094 = C5456 * C705;
    const double C7460 = C5456 * C1161;
    const double C7643 = C5456 * C1160;
    const double C7631 = C5456 * C1158;
    const double C9115 = C5456 * C1157;
    const double C892 = C880 - C881;
    const double C887 = C860 - C861;
    const double C884 = C848 - C849;
    const double C1372 = C1363 - C1364;
    const double C1369 = C1351 - C1352;
    const double C1564 = C1555 - C1556;
    const double C1561 = C1543 - C1544;
    const double C11459 = C11447 - C11448;
    const double C11454 = C11427 - C11428;
    const double C11451 = C11415 - C11416;
    const double C11785 = C11773 - C11774;
    const double C11967 = C11952 - C11953;
    const double C11964 = C11940 - C11941;
    const double C22257 = C22251 - C22252;
    const double C890 = C872 - C873;
    const double C889 = C868 - C869;
    const double C886 = C856 - C857;
    const double C1370 = C1355 - C1356;
    const double C1367 = C1343 - C1344;
    const double C1562 = C1547 - C1548;
    const double C1559 = C1535 - C1536;
    const double C11457 = C11439 - C11440;
    const double C11456 = C11435 - C11436;
    const double C11453 = C11423 - C11424;
    const double C11966 = C11948 - C11949;
    const double C2817 = C2803 - C2804;
    const double C2816 = C2799 - C2800;
    const double C2814 = C2791 - C2792;
    const double C2812 = C2783 - C2784;
    const double C3191 = C3179 - C3180;
    const double C3189 = C3171 - C3172;
    const double C3187 = C3163 - C3164;
    const double C3363 = C3351 - C3352;
    const double C3361 = C3343 - C3344;
    const double C3359 = C3335 - C3336;
    const double C4693 = C4679 - C4680;
    const double C4691 = C4671 - C4672;
    const double C4689 = C4663 - C4664;
    const double C4688 = C4659 - C4660;
    const double C4923 = C4913 - C4914;
    const double C4921 = C4905 - C4906;
    const double C5333 = C5328 - C5329;
    const double C12947 = C12935 - C12936;
    const double C12945 = C12927 - C12928;
    const double C13564 = C13559 - C13560;
    const double C14591 = C14582 - C14583;
    const double C14996 = C14991 - C14992;
    const double C5502 = C5484 - C5485;
    const double C5501 = C5480 - C5481;
    const double C5498 = C5468 - C5469;
    const double C5918 = C5903 - C5904;
    const double C5915 = C5891 - C5892;
    const double C6106 = C6091 - C6092;
    const double C6103 = C6079 - C6080;
    const double C7131 = C7113 - C7114;
    const double C7130 = C7109 - C7110;
    const double C7127 = C7097 - C7098;
    const double C7652 = C7634 - C7635;
    const double C7816 = C7796 - C7797;
    const double C7815 = C7792 - C7793;
    const double C9852 = C9829 - C9830;
    const double C15147 = C15133 - C15134;
    const double C15146 = C15129 - C15130;
    const double C15144 = C15121 - C15122;
    const double C15142 = C15113 - C15114;
    const double C15521 = C15509 - C15510;
    const double C15519 = C15501 - C15502;
    const double C15517 = C15493 - C15494;
    const double C15693 = C15681 - C15682;
    const double C15691 = C15673 - C15674;
    const double C15689 = C15665 - C15666;
    const double C16811 = C16801 - C16802;
    const double C16810 = C16797 - C16798;
    const double C17153 = C17138 - C17139;
    const double C17151 = C17130 - C17131;
    const double C17149 = C17125 - C17126;
    const double C17147 = C17117 - C17118;
    const double C17386 = C17376 - C17377;
    const double C17806 = C17799 - C17800;
    const double C17804 = C17791 - C17792;
    const double C19385 = C19377 - C19378;
    const double C28296 = C28287 - C28288;
    const double C28701 = C28696 - C28697;
    const double C15985 = C15965 - C15966;
    const double C15984 = C15961 - C15962;
    const double C27552 = C27529 - C27530;
    const double C17979 = C17961 - C17962;
    const double C17978 = C17957 - C17958;
    const double C17975 = C17945 - C17946;
    const double C18395 = C18380 - C18381;
    const double C18392 = C18368 - C18369;
    const double C18583 = C18568 - C18569;
    const double C18580 = C18556 - C18557;
    const double C20260 = C20242 - C20243;
    const double C20256 = C20226 - C20227;
    const double C20902 = C20896 - C20897;
    const double C31093 = C31080 - C31081;
    const double C31650 = C31645 / C31608;
    const double C31649 = C31566 * C31645;
    const double C31682 = 2 * C31645;
    const double C178 = C173 + C163;
    const double C2333 = C2329 + C2312;
    const double C8178 = C8162 - C8163;
    const double C16347 = C16331 - C16332;
    const double C7469 = C7463 - C7464;
    const double C11787 = C11781 - C11782;
    const double C13160 = C13152 - C13153;
    const double C17384 = C17368 - C17369;
    const double C20257 = C20230 - C20231;
    const double C8336 = C8320 - C8321;
    const double C9122 = C9110 - C9111;
    const double C16505 = C16489 - C16490;
    const double C20487 = C20475 - C20476;
    const double C22255 = C22243 - C22244;
    const double C6409 =
        (4 * (2 * C31973 + C31795 * C31996 + C31987 * ae) +
         C31795 * (3 * C31996 + C31795 * C32120 + C32110 * ae) +
         (3 * C31987 + C31795 * C32110) * ae) /
        C31568;
    const double C6480 =
        (C31944 * (3 * C31996 + C31795 * C32120 + C32110 * ae)) / C31568;
    const double C6482 =
        (2 * C31973 + C31795 * C31996 + C31987 * ae + C32120 * C32047) / C31568;
    const double C6412 =
        (4 * (2 * C31990 + ae * C31995 + be * C31996 + C31795 * C32112) +
         ae * (3 * C31995 + C31795 * C32119 + C32110 * be) +
         be * (3 * C31996 + C31795 * C32120 + C32110 * ae) +
         C31795 * (3 * C32112 + ae * C32119 + be * C32120 +
                   C31795 * (2 * C32102 + ae * C32113 + be * C32114 +
                             C31795 * (C31825 + ae * C32096 + be * C32099 +
                                       C31795 * (ae * C31884 + be * C31888 +
                                                 C31795 * C31837))))) /
        C31576;
    const double C6485 =
        (3 * (C32063 + ae * C31944 * C31985 + be * C31944 * C31988 +
              C31795 * C32191) +
         ae * C31944 * C32119 + be * C31944 * C32120 +
         C31795 *
             (2 * C32191 + ae * C31944 * C32113 + be * C31944 * C32114 +
              C31795 * (C32186 + ae * C31944 * C32096 + be * C31944 * C32099 +
                        C31795 * (ae * C31944 * C31884 + be * C31944 * C31888 +
                                  C31795 * C31944 * C31837)))) /
        C31576;
    const double C6408 =
        (4 * (2 * C31972 + C31795 * C31995 + C31987 * be) +
         C31795 * (3 * C31995 + C31795 * C32119 + C32110 * be) +
         (3 * C31987 + C31795 * C32110) * be) /
        C31568;
    const double C6479 =
        (C31944 * (3 * C31995 + C31795 * C32119 + C32110 * be)) / C31568;
    const double C6481 =
        (2 * C31972 + C31795 * C31995 + C31987 * be + C32119 * C32047) / C31568;
    const double C32172 = C32150 + C32168;
    const double C2158 = C2157 + C2124;
    const double C10634 = C10633 + C10629;
    const double C24729 = C24728 + C24724;
    const double C2661 = C2334 * C839;
    const double C11083 = C2334 * C32948;
    const double C14283 = C2334 * C32598;
    const double C23363 = C2334 * C32598;
    const double C25178 = C2334 * C32601;
    const double C14285 = C14013 * C32598;
    const double C23365 = C14013 * C32598;
    const double C504 = C500 + C483;
    const double C620 = C616 + C599;
    const double C1868 = C1865 + C1859;
    const double C3947 = C3946 + C3944;
    const double C12197 = C12195 + C12191;
    const double C32178 = C31795 * C32176;
    const double C7623 =
        (2 * C31944 * C32120 + C31944 * (C32120 + C32176 * C32047)) / C31568;
    const double C32252 = C32250 + C32240;
    const double C32177 = C31795 * C32175;
    const double C6487 =
        (3 * (C32194 + ae * (C31985 + C32096 * C32047) +
              be * (C31988 + C32099 * C32047) + C31795 * C32206) +
         ae * (C32119 + C32175 * C32047) + be * (C32120 + C32176 * C32047) +
         C31795 *
             (2 * C32206 + ae * (C32113 + C32163 * C32047) +
              be * (C32114 + C32166 * C32047) +
              C31795 * (C32201 + ae * (C32096 + C32145 * C32047) +
                        be * (C32099 + C32148 * C32047) +
                        C31795 * (ae * (C31884 + C31910 * C32047) +
                                  be * (C31888 + C31914 * C32047) +
                                  C31795 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C32047))))) /
        C31576;
    const double C7622 =
        (2 * C31944 * C32119 + C31944 * (C32119 + C32175 * C32047)) / C31568;
    const double C32251 = C32249 + C32237;
    const double C31694 = C31689 * be;
    const double C31696 = C31693 * ae;
    const double C15105 = -(C31693 * be) / C31568;
    const double C891 = C876 - C877;
    const double C888 = C864 - C865;
    const double C885 = C852 - C853;
    const double C1371 = C1359 - C1360;
    const double C1368 = C1347 - C1348;
    const double C1563 = C1551 - C1552;
    const double C1560 = C1539 - C1540;
    const double C11458 = C11443 - C11444;
    const double C11455 = C11431 - C11432;
    const double C11452 = C11419 - C11420;
    const double C11786 = C11777 - C11778;
    const double C11968 = C11956 - C11957;
    const double C11965 = C11944 - C11945;
    const double C22256 = C22247 - C22248;
    const double C2818 = C2807 - C2808;
    const double C2815 = C2795 - C2796;
    const double C2813 = C2787 - C2788;
    const double C2811 = C2779 - C2780;
    const double C3192 = C3183 - C3184;
    const double C3190 = C3175 - C3176;
    const double C3188 = C3167 - C3168;
    const double C3364 = C3355 - C3356;
    const double C3362 = C3347 - C3348;
    const double C3360 = C3339 - C3340;
    const double C4694 = C4683 - C4684;
    const double C4692 = C4675 - C4676;
    const double C4690 = C4667 - C4668;
    const double C4687 = C4655 - C4656;
    const double C4924 = C4917 - C4918;
    const double C4922 = C4909 - C4910;
    const double C5332 = C5324 - C5325;
    const double C12948 = C12939 - C12940;
    const double C12946 = C12931 - C12932;
    const double C13161 = C13156 - C13157;
    const double C13563 = C13555 - C13556;
    const double C14592 = C14586 - C14587;
    const double C14995 = C14987 - C14988;
    const double C5504 = C5492 - C5493;
    const double C5499 = C5472 - C5473;
    const double C5496 = C5460 - C5461;
    const double C5920 = C5911 - C5912;
    const double C5917 = C5899 - C5900;
    const double C6108 = C6099 - C6100;
    const double C6105 = C6087 - C6088;
    const double C7133 = C7121 - C7122;
    const double C7128 = C7101 - C7102;
    const double C7125 = C7089 - C7090;
    const double C7467 = C7455 - C7456;
    const double C7653 = C7638 - C7639;
    const double C7650 = C7626 - C7627;
    const double C9124 = C9118 - C9119;
    const double C5503 = C5488 - C5489;
    const double C5500 = C5476 - C5477;
    const double C5497 = C5464 - C5465;
    const double C5919 = C5907 - C5908;
    const double C5916 = C5895 - C5896;
    const double C6107 = C6095 - C6096;
    const double C6104 = C6083 - C6084;
    const double C7132 = C7117 - C7118;
    const double C7129 = C7105 - C7106;
    const double C7126 = C7093 - C7094;
    const double C7468 = C7459 - C7460;
    const double C7654 = C7642 - C7643;
    const double C7651 = C7630 - C7631;
    const double C9123 = C9114 - C9115;
    const double C901 = C892 - C882;
    const double C896 = C887 - C862;
    const double C893 = C884 - C850;
    const double C1378 = C1372 - C1365;
    const double C1375 = C1369 - C1353;
    const double C1570 = C1564 - C1557;
    const double C1567 = C1561 - C1545;
    const double C11468 = C11459 - C11449;
    const double C11463 = C11454 - C11429;
    const double C11460 = C11451 - C11417;
    const double C11788 = C11785 - C11775;
    const double C11973 = C11967 - C11954;
    const double C11970 = C11964 - C11942;
    const double C22260 = C22257 - C22253;
    const double C899 = C890 - C874;
    const double C898 = C889 - C870;
    const double C895 = C886 - C858;
    const double C1376 = C1370 - C1357;
    const double C1373 = C1367 - C1345;
    const double C1568 = C1562 - C1549;
    const double C1565 = C1559 - C1537;
    const double C11466 = C11457 - C11441;
    const double C11465 = C11456 - C11437;
    const double C11462 = C11453 - C11425;
    const double C11972 = C11966 - C11950;
    const double C2825 = C2817 - C2805;
    const double C2824 = C2816 - C2801;
    const double C2822 = C2814 - C2793;
    const double C2820 = C2812 - C2785;
    const double C3197 = C3191 - C3181;
    const double C3195 = C3189 - C3173;
    const double C3193 = C3187 - C3165;
    const double C3369 = C3363 - C3353;
    const double C3367 = C3361 - C3345;
    const double C3365 = C3359 - C3337;
    const double C4701 = C4693 - C4681;
    const double C4699 = C4691 - C4673;
    const double C4697 = C4689 - C4665;
    const double C4696 = C4688 - C4661;
    const double C4927 = C4923 - C4915;
    const double C4925 = C4921 - C4907;
    const double C5335 = C5333 - C5330;
    const double C12952 = C12947 - C12937;
    const double C12950 = C12945 - C12929;
    const double C13566 = C13564 - C13561;
    const double C14593 = C14591 - C14584;
    const double C14998 = C14996 - C14993;
    const double C5511 = C5502 - C5486;
    const double C5510 = C5501 - C5482;
    const double C5507 = C5498 - C5470;
    const double C5924 = C5918 - C5905;
    const double C5921 = C5915 - C5893;
    const double C6112 = C6106 - C6093;
    const double C6109 = C6103 - C6081;
    const double C7140 = C7131 - C7115;
    const double C7139 = C7130 - C7111;
    const double C7136 = C7127 - C7099;
    const double C7658 = C7652 - C7636;
    const double C7824 = C7816 - C7798;
    const double C7823 = C7815 - C7794;
    const double C9860 = C9852 - C9831;
    const double C15155 = C15147 - C15135;
    const double C15154 = C15146 - C15131;
    const double C15152 = C15144 - C15123;
    const double C15150 = C15142 - C15115;
    const double C15527 = C15521 - C15511;
    const double C15525 = C15519 - C15503;
    const double C15523 = C15517 - C15495;
    const double C15699 = C15693 - C15683;
    const double C15697 = C15691 - C15675;
    const double C15695 = C15689 - C15667;
    const double C16815 = C16811 - C16803;
    const double C16814 = C16810 - C16799;
    const double C17161 = C17153 - C17140;
    const double C17159 = C17151 - C17132;
    const double C17158 = C17149 - C17127;
    const double C17156 = C17147 - C17119;
    const double C17390 = C17386 - C17378;
    const double C17810 = C17806 - C17801;
    const double C17808 = C17804 - C17793;
    const double C19387 = C19385 - C19379;
    const double C28298 = C28296 - C28289;
    const double C28703 = C28701 - C28698;
    const double C15993 = C15985 - C15967;
    const double C15992 = C15984 - C15963;
    const double C27560 = C27552 - C27531;
    const double C17988 = C17979 - C17963;
    const double C17987 = C17978 - C17959;
    const double C17984 = C17975 - C17947;
    const double C18401 = C18395 - C18382;
    const double C18398 = C18392 - C18370;
    const double C18589 = C18583 - C18570;
    const double C18586 = C18580 - C18558;
    const double C20269 = C20260 - C20244;
    const double C20265 = C20256 - C20228;
    const double C20905 = C20902 - C20898;
    const double C31097 = C31093 - C31082;
    const double C31668 = C31650 - C31664;
    const double C31654 = C31649 + C32900;
    const double C2662 = C2333 * C32923;
    const double C11084 = C2333 * C32923;
    const double C25179 = C2333 * C17929;
    const double C8182 = C8178 - C8164;
    const double C16351 = C16347 - C16333;
    const double C7472 = C7469 - C7465;
    const double C11790 = C11787 - C11783;
    const double C13162 = C13160 - C13154;
    const double C17388 = C17384 - C17370;
    const double C20266 = C20257 - C20232;
    const double C8340 = C8336 - C8322;
    const double C9125 = C9122 - C9112;
    const double C16509 = C16505 - C16491;
    const double C20490 = C20487 - C20477;
    const double C22258 = C22255 - C22245;
    const double C10277 = C7777 * C6480;
    const double C27977 = C15946 * C6480;
    const double C7648 = C5457 * C6482;
    const double C9835 = C7777 * C6482;
    const double C11962 = C845 * C6482;
    const double C27535 = C15946 * C6482;
    const double C31551 = C31716 * C6482;
    const double C10278 = C32909 * C6485;
    const double C27978 = C32909 * C6485;
    const double C10275 = C7777 * C6479;
    const double C27975 = C15946 * C6479;
    const double C7646 = C5457 * C6481;
    const double C9833 = C7777 * C6481;
    const double C11960 = C845 * C6481;
    const double C27533 = C15946 * C6481;
    const double C31549 = C31716 * C6481;
    const double C4081 = C620 * C32901;
    const double C21476 = C620 * C32901;
    const double C2492 = C1868 * C32923;
    const double C3807 = C1868 * C32901;
    const double C10932 = C1868 * C32923;
    const double C21209 = C1868 * C32901;
    const double C25027 = C1868 * C17929;
    const double C4215 = C3947 * C32901;
    const double C21610 = C3947 * C32901;
    const double C12199 = C12197 * C32588;
    const double C32180 = C32138 + C32178;
    const double C6572 =
        (4 * (2 * C31965 + C31795 * C32019 + C32010 * ae) +
         C31795 * (3 * C32019 + C31795 * C32252 + C32243 * ae) +
         (3 * C32010 + C31795 * C32243) * ae) /
        C31568;
    const double C6658 =
        (C31944 * (3 * C32019 + C31795 * C32252 + C32243 * ae)) / C31568;
    const double C7302 =
        (2 * C31965 + C31795 * C32019 + C32010 * ae + C32252 * C32047) / C31568;
    const double C32179 = C32130 + C32177;
    const double C6573 =
        (4 * (2 * C32013 + ae * C32018 + be * C32019 + C31795 * C32241) +
         ae * (3 * C32018 + C31795 * C32251 + C32243 * be) +
         be * (3 * C32019 + C31795 * C32252 + C32243 * ae) +
         C31795 * (3 * C32241 + ae * C32251 + be * C32252 +
                   C31795 * (2 * C32229 + ae * C32245 + be * C32246 +
                             C31795 * (C32212 + ae * C32230 + be * C32233 +
                                       C31795 * (ae * C32214 + be * C32218 +
                                                 C31795 * C31801 *
                                                     (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                     C31567))))) /
        C31576;
    const double C6659 =
        (3 * (C32065 + ae * C31944 * C32008 + be * C31944 * C32011 +
              C31795 * C32261) +
         ae * C31944 * C32251 + be * C31944 * C32252 +
         C31795 *
             (2 * C32261 + ae * C31944 * C32245 + be * C31944 * C32246 +
              C31795 * (C32256 + ae * C31944 * C32230 + be * C31944 * C32233 +
                        C31795 * (ae * C31944 * C32214 + be * C31944 * C32218 +
                                  C31795 * C31944 * C31801 *
                                      (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                      C31567)))) /
        C31576;
    const double C6571 =
        (4 * (2 * C31964 + C31795 * C32018 + C32010 * be) +
         C31795 * (3 * C32018 + C31795 * C32251 + C32243 * be) +
         (3 * C32010 + C31795 * C32243) * be) /
        C31568;
    const double C6657 =
        (C31944 * (3 * C32018 + C31795 * C32251 + C32243 * be)) / C31568;
    const double C7301 =
        (2 * C31964 + C31795 * C32018 + C32010 * be + C32251 * C32047) / C31568;
    const double C31697 = C31694 / C31568;
    const double C31700 = C31696 / C31578;
    const double C31699 = C31566 * C31696;
    const double C15138 = C15105 * C119;
    const double C15126 = C15105 * C118;
    const double C15118 = C15105 * C117;
    const double C15110 = C15105 * C116;
    const double C15514 = C15105 * C247;
    const double C15506 = C15105 * C246;
    const double C15498 = C15105 * C245;
    const double C15686 = C15105 * C352;
    const double C15678 = C15105 * C351;
    const double C15670 = C15105 * C350;
    const double C16806 = C15105 * C356;
    const double C16794 = C15105 * C355;
    const double C17143 = C15105 * C2090;
    const double C17135 = C15105 * C2089;
    const double C17122 = C15105 * C354;
    const double C17114 = C15105 * C353;
    const double C17381 = C15105 * C706;
    const double C17373 = C15105 * C1161;
    const double C17796 = C15105 * C1159;
    const double C17788 = C15105 * C705;
    const double C19382 = C15105 * C707;
    const double C28292 = C15105 * C2091;
    const double C28693 = C15105 * C2638;
    const double C900 = C891 - C878;
    const double C897 = C888 - C866;
    const double C894 = C885 - C854;
    const double C1377 = C1371 - C1361;
    const double C1374 = C1368 - C1349;
    const double C1569 = C1563 - C1553;
    const double C1566 = C1560 - C1541;
    const double C11467 = C11458 - C11445;
    const double C11464 = C11455 - C11433;
    const double C11461 = C11452 - C11421;
    const double C11789 = C11786 - C11779;
    const double C11974 = C11968 - C11958;
    const double C11971 = C11965 - C11946;
    const double C22259 = C22256 - C22249;
    const double C2826 = C2818 - C2809;
    const double C2823 = C2815 - C2797;
    const double C2821 = C2813 - C2789;
    const double C2819 = C2811 - C2781;
    const double C3198 = C3192 - C3185;
    const double C3196 = C3190 - C3177;
    const double C3194 = C3188 - C3169;
    const double C3370 = C3364 - C3357;
    const double C3368 = C3362 - C3349;
    const double C3366 = C3360 - C3341;
    const double C4702 = C4694 - C4685;
    const double C4700 = C4692 - C4677;
    const double C4698 = C4690 - C4669;
    const double C4695 = C4687 - C4657;
    const double C4928 = C4924 - C4919;
    const double C4926 = C4922 - C4911;
    const double C5334 = C5332 - C5326;
    const double C12953 = C12948 - C12941;
    const double C12951 = C12946 - C12933;
    const double C13163 = C13161 - C13158;
    const double C13565 = C13563 - C13557;
    const double C14594 = C14592 - C14588;
    const double C14997 = C14995 - C14989;
    const double C5513 = C5504 - C5494;
    const double C5508 = C5499 - C5474;
    const double C5505 = C5496 - C5462;
    const double C5926 = C5920 - C5913;
    const double C5923 = C5917 - C5901;
    const double C6114 = C6108 - C6101;
    const double C6111 = C6105 - C6089;
    const double C7142 = C7133 - C7123;
    const double C7137 = C7128 - C7103;
    const double C7134 = C7125 - C7091;
    const double C7470 = C7467 - C7457;
    const double C7659 = C7653 - C7640;
    const double C7656 = C7650 - C7628;
    const double C9127 = C9124 - C9120;
    const double C5512 = C5503 - C5490;
    const double C5509 = C5500 - C5478;
    const double C5506 = C5497 - C5466;
    const double C5925 = C5919 - C5909;
    const double C5922 = C5916 - C5897;
    const double C6113 = C6107 - C6097;
    const double C6110 = C6104 - C6085;
    const double C7141 = C7132 - C7119;
    const double C7138 = C7129 - C7107;
    const double C7135 = C7126 - C7095;
    const double C7471 = C7468 - C7461;
    const double C7660 = C7654 - C7644;
    const double C7657 = C7651 - C7632;
    const double C9126 = C9123 - C9116;
    const double C910 = C901 + C883;
    const double C905 = C896 + C863;
    const double C902 = C893 + C851;
    const double C1384 = C1378 + C1366;
    const double C1381 = C1375 + C1354;
    const double C1576 = C1570 + C1558;
    const double C1573 = C1567 + C1546;
    const double C11477 = C11468 + C11450;
    const double C11472 = C11463 + C11430;
    const double C11469 = C11460 + C11418;
    const double C11791 = C11788 + C11776;
    const double C11979 = C11973 + C11955;
    const double C11976 = C11970 + C11943;
    const double C22263 = C22260 + C22254;
    const double C908 = C899 + C875;
    const double C907 = C898 + C871;
    const double C904 = C895 + C859;
    const double C1382 = C1376 + C1358;
    const double C1379 = C1373 + C1346;
    const double C1574 = C1568 + C1550;
    const double C1571 = C1565 + C1538;
    const double C11475 = C11466 + C11442;
    const double C11474 = C11465 + C11438;
    const double C11471 = C11462 + C11426;
    const double C11978 = C11972 + C11951;
    const double C2833 = C2825 + C2806;
    const double C2832 = C2824 + C2802;
    const double C2830 = C2822 + C2794;
    const double C2828 = C2820 + C2786;
    const double C3203 = C3197 + C3182;
    const double C3201 = C3195 + C3174;
    const double C3199 = C3193 + C3166;
    const double C3375 = C3369 + C3354;
    const double C3373 = C3367 + C3346;
    const double C3371 = C3365 + C3338;
    const double C4709 = C4701 + C4682;
    const double C4707 = C4699 + C4674;
    const double C4705 = C4697 + C4666;
    const double C4704 = C4696 + C4662;
    const double C4931 = C4927 + C4916;
    const double C4929 = C4925 + C4908;
    const double C5337 = C5335 + C5331;
    const double C12956 = C12952 + C12938;
    const double C12954 = C12950 + C12930;
    const double C13568 = C13566 + C13562;
    const double C14595 = C14593 + C14585;
    const double C15000 = C14998 + C14994;
    const double C5520 = C5511 + C5487;
    const double C5519 = C5510 + C5483;
    const double C5516 = C5507 + C5471;
    const double C5930 = C5924 + C5906;
    const double C5927 = C5921 + C5894;
    const double C6118 = C6112 + C6094;
    const double C6115 = C6109 + C6082;
    const double C7149 = C7140 + C7116;
    const double C7148 = C7139 + C7112;
    const double C7145 = C7136 + C7100;
    const double C7664 = C7658 + C7637;
    const double C7832 = C7824 + C7799;
    const double C7831 = C7823 + C7795;
    const double C9868 = C9860 + C9832;
    const double C15163 = C15155 + C15136;
    const double C15162 = C15154 + C15132;
    const double C15160 = C15152 + C15124;
    const double C15158 = C15150 + C15116;
    const double C15533 = C15527 + C15512;
    const double C15531 = C15525 + C15504;
    const double C15529 = C15523 + C15496;
    const double C15705 = C15699 + C15684;
    const double C15703 = C15697 + C15676;
    const double C15701 = C15695 + C15668;
    const double C16819 = C16815 + C16804;
    const double C16818 = C16814 + C16800;
    const double C17169 = C17161 + C17141;
    const double C17167 = C17159 + C17133;
    const double C17166 = C17158 + C17128;
    const double C17164 = C17156 + C17120;
    const double C17394 = C17390 + C17379;
    const double C17814 = C17810 + C17802;
    const double C17812 = C17808 + C17794;
    const double C19389 = C19387 + C19380;
    const double C28300 = C28298 + C28290;
    const double C28705 = C28703 + C28699;
    const double C16001 = C15993 + C15968;
    const double C16000 = C15992 + C15964;
    const double C27568 = C27560 + C27532;
    const double C17997 = C17988 + C17964;
    const double C17996 = C17987 + C17960;
    const double C17993 = C17984 + C17948;
    const double C18407 = C18401 + C18383;
    const double C18404 = C18398 + C18371;
    const double C18595 = C18589 + C18571;
    const double C18592 = C18586 + C18559;
    const double C20278 = C20269 + C20245;
    const double C20274 = C20265 + C20229;
    const double C20908 = C20905 + C20899;
    const double C31100 = C31097 + C31083;
    const double C17967 = C31668 * C257;
    const double C17965 = C31668 * C256;
    const double C17955 = C31668 * C259;
    const double C17953 = C31668 * C258;
    const double C17943 = C31668 * C261;
    const double C17941 = C31668 * C260;
    const double C18386 = C31668 * C267;
    const double C18384 = C31668 * C266;
    const double C18374 = C31668 * C269;
    const double C18372 = C31668 * C268;
    const double C18574 = C31668 * C713;
    const double C18572 = C31668 * C712;
    const double C18562 = C31668 * C715;
    const double C18560 = C31668 * C714;
    const double C20248 = C31668 * C1172;
    const double C20246 = C31668 * C1171;
    const double C20236 = C31668 * C1176;
    const double C20234 = C31668 * C1175;
    const double C20224 = C31668 * C711;
    const double C20222 = C31668 * C710;
    const double C20481 = C31668 * C1168;
    const double C20479 = C31668 * C1167;
    const double C20894 = C31668 * C1170;
    const double C20892 = C31668 * C1169;
    const double C31086 = C31668 * C2642;
    const double C31084 = C31668 * C2641;
    const double C31547 = C31668 * C1174;
    const double C31545 = C31668 * C1173;
    const double C6340 =
        (C31668 / C31608 + ((C31566 * C31716 + C17926) * ae) / C31568) /
            C31608 -
        ((C31566 * (C31716 / C31608 + (0 * ae) / C31568) + C32909) * be) /
            C31568;
    const double C7775 =
        C31668 / C31608 - ((C31566 * C31716 + C17926) * be) / C31568;
    const double C15944 =
        C31668 / C31608 + ((C31566 * C31716 + C17926) * ae) / C31568;
    const double C31658 = C31654 * be;
    const double C8186 = C8182 + C8165;
    const double C16355 = C16351 + C16334;
    const double C7475 = C7472 + C7466;
    const double C11793 = C11790 + C11784;
    const double C13164 = C13162 + C13155;
    const double C17392 = C17388 + C17371;
    const double C20275 = C20266 + C20233;
    const double C8344 = C8340 + C8323;
    const double C9128 = C9125 + C9113;
    const double C16513 = C16509 + C16492;
    const double C20493 = C20490 + C20478;
    const double C22261 = C22258 + C22246;
    const double C10282 = C10275 - C10276;
    const double C27982 = C27975 - C27976;
    const double C7655 = C7646 - C7647;
    const double C9853 = C9833 - C9834;
    const double C11969 = C11960 - C11961;
    const double C27553 = C27533 - C27534;
    const double C31555 = C31549 - C31550;
    const double C32182 = C32180 + C32167;
    const double C32181 = C32179 + C32164;
    const double C31703 = C31700 - C31697;
    const double C31702 = C31699 / C31568;
    const double C15148 = C15137 - C15138;
    const double C15145 = C15125 - C15126;
    const double C15143 = C15117 - C15118;
    const double C15141 = C15109 - C15110;
    const double C15522 = C15513 - C15514;
    const double C15520 = C15505 - C15506;
    const double C15518 = C15497 - C15498;
    const double C15694 = C15685 - C15686;
    const double C15692 = C15677 - C15678;
    const double C15690 = C15669 - C15670;
    const double C16812 = C16805 - C16806;
    const double C16809 = C16793 - C16794;
    const double C17154 = C17142 - C17143;
    const double C17152 = C17134 - C17135;
    const double C17148 = C17121 - C17122;
    const double C17146 = C17113 - C17114;
    const double C17387 = C17380 - C17381;
    const double C17385 = C17372 - C17373;
    const double C17805 = C17795 - C17796;
    const double C17803 = C17787 - C17788;
    const double C19386 = C19381 - C19382;
    const double C28297 = C28291 - C28292;
    const double C28700 = C28692 - C28693;
    const double C909 = C900 + C879;
    const double C906 = C897 + C867;
    const double C903 = C894 + C855;
    const double C1383 = C1377 + C1362;
    const double C1380 = C1374 + C1350;
    const double C1575 = C1569 + C1554;
    const double C1572 = C1566 + C1542;
    const double C11476 = C11467 + C11446;
    const double C11473 = C11464 + C11434;
    const double C11470 = C11461 + C11422;
    const double C11792 = C11789 + C11780;
    const double C11980 = C11974 + C11959;
    const double C11977 = C11971 + C11947;
    const double C22262 = C22259 + C22250;
    const double C2834 = C2826 + C2810;
    const double C2831 = C2823 + C2798;
    const double C2829 = C2821 + C2790;
    const double C2827 = C2819 + C2782;
    const double C3204 = C3198 + C3186;
    const double C3202 = C3196 + C3178;
    const double C3200 = C3194 + C3170;
    const double C3376 = C3370 + C3358;
    const double C3374 = C3368 + C3350;
    const double C3372 = C3366 + C3342;
    const double C4710 = C4702 + C4686;
    const double C4708 = C4700 + C4678;
    const double C4706 = C4698 + C4670;
    const double C4703 = C4695 + C4658;
    const double C4932 = C4928 + C4920;
    const double C4930 = C4926 + C4912;
    const double C5336 = C5334 + C5327;
    const double C12957 = C12953 + C12942;
    const double C12955 = C12951 + C12934;
    const double C13165 = C13163 + C13159;
    const double C13567 = C13565 + C13558;
    const double C14596 = C14594 + C14589;
    const double C14999 = C14997 + C14990;
    const double C5522 = C5513 + C5495;
    const double C5517 = C5508 + C5475;
    const double C5514 = C5505 + C5463;
    const double C5932 = C5926 + C5914;
    const double C5929 = C5923 + C5902;
    const double C6120 = C6114 + C6102;
    const double C6117 = C6111 + C6090;
    const double C7151 = C7142 + C7124;
    const double C7146 = C7137 + C7104;
    const double C7143 = C7134 + C7092;
    const double C7473 = C7470 + C7458;
    const double C7665 = C7659 + C7641;
    const double C7662 = C7656 + C7629;
    const double C9130 = C9127 + C9121;
    const double C5521 = C5512 + C5491;
    const double C5518 = C5509 + C5479;
    const double C5515 = C5506 + C5467;
    const double C5931 = C5925 + C5910;
    const double C5928 = C5922 + C5898;
    const double C6119 = C6113 + C6098;
    const double C6116 = C6110 + C6086;
    const double C7150 = C7141 + C7120;
    const double C7147 = C7138 + C7108;
    const double C7144 = C7135 + C7096;
    const double C7474 = C7471 + C7462;
    const double C7666 = C7660 + C7645;
    const double C7663 = C7657 + C7633;
    const double C9129 = C9126 + C9117;
    const double C7802 = C7775 * C269;
    const double C7800 = C7775 * C268;
    const double C7790 = C7775 * C267;
    const double C7788 = C7775 * C266;
    const double C8168 = C7775 * C1031;
    const double C8166 = C7775 * C1030;
    const double C8326 = C7775 * C1168;
    const double C8324 = C7775 * C1167;
    const double C9839 = C7775 * C1174;
    const double C9837 = C7775 * C1173;
    const double C9827 = C7775 * C1170;
    const double C9825 = C7775 * C1169;
    const double C10273 = C7775 * C1726;
    const double C10271 = C7775 * C1725;
    const double C15971 = C15944 * C269;
    const double C15969 = C15944 * C268;
    const double C15959 = C15944 * C267;
    const double C15957 = C15944 * C266;
    const double C16337 = C15944 * C1031;
    const double C16335 = C15944 * C1030;
    const double C16495 = C15944 * C1168;
    const double C16493 = C15944 * C1167;
    const double C27539 = C15944 * C1174;
    const double C27537 = C15944 * C1173;
    const double C27527 = C15944 * C1170;
    const double C27525 = C15944 * C1169;
    const double C27973 = C15944 * C1726;
    const double C27971 = C15944 * C1725;
    const double C31663 = C31658 / C31568;
    const double C10286 = C10282 - C10277;
    const double C27986 = C27982 - C27977;
    const double C7661 = C7655 - C7648;
    const double C9861 = C9853 - C9835;
    const double C11975 = C11969 - C11962;
    const double C27561 = C27553 - C27535;
    const double C31558 = C31555 - C31551;
    const double C6411 =
        (5 * (3 * C31996 + C31795 * C32120 + C32110 * ae) +
         C31795 * (4 * C32120 + C31795 * C32182 + C32170 * ae) +
         (4 * C32110 + C31795 * C32170) * ae) /
        C31568;
    const double C6484 =
        (3 * C31996 + C31795 * C32120 + C32110 * ae + C32182 * C32047) / C31568;
    const double C6744 =
        (C31944 * (4 * C32120 + C31795 * C32182 + C32170 * ae)) / C31568;
    const double C6413 =
        (5 * (3 * C32112 + ae * C32119 + be * C32120 + C31795 * C32172) +
         ae * (4 * C32119 + C31795 * C32181 + C32170 * be) +
         be * (4 * C32120 + C31795 * C32182 + C32170 * ae) +
         C31795 *
             (4 * C32172 + ae * C32181 + be * C32182 +
              C31795 *
                  (3 * C32162 + ae * C32175 + be * C32176 +
                   C31795 * (2 * C32152 + ae * C32163 + be * C32166 +
                             C31795 * (C31837 + ae * C32145 + be * C32148 +
                                       C31795 * (ae * C31910 + be * C31914 +
                                                 C31795 *
                                                     (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                     C31567)))))) /
        C31576;
    const double C6745 =
        (4 * (2 * C32191 + ae * C31944 * C32113 + be * C31944 * C32114 +
              C31795 * C32278) +
         ae * C31944 * C32181 + be * C31944 * C32182 +
         C31795 *
             (3 * C32278 + ae * C31944 * C32175 + be * C31944 * C32176 +
              C31795 *
                  (2 * C32276 + ae * C31944 * C32163 + be * C31944 * C32166 +
                   C31795 *
                       (C32267 + ae * C31944 * C32145 + be * C31944 * C32148 +
                        C31795 * (ae * C31944 * C31910 + be * C31944 * C31914 +
                                  C31795 * C31944 *
                                      (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                      C31567))))) /
        C31576;
    const double C6410 =
        (5 * (3 * C31995 + C31795 * C32119 + C32110 * be) +
         C31795 * (4 * C32119 + C31795 * C32181 + C32170 * be) +
         (4 * C32110 + C31795 * C32170) * be) /
        C31568;
    const double C6483 =
        (3 * C31995 + C31795 * C32119 + C32110 * be + C32181 * C32047) / C31568;
    const double C6743 =
        (C31944 * (4 * C32119 + C31795 * C32181 + C32170 * be)) / C31568;
    const double C17966 = C31703 * C245;
    const double C17954 = C31703 * C246;
    const double C17942 = C31703 * C247;
    const double C18385 = C31703 * C250;
    const double C18373 = C31703 * C251;
    const double C18573 = C31703 * C706;
    const double C18561 = C31703 * C707;
    const double C20247 = C31703 * C1159;
    const double C20235 = C31703 * C1161;
    const double C20223 = C31703 * C705;
    const double C20480 = C31703 * C1157;
    const double C20893 = C31703 * C1158;
    const double C31085 = C31703 * C2638;
    const double C31546 = C31703 * C1160;
    const double C6341 =
        (C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568) /
            C31608 -
        ((2 * (C31716 / C31608 + (0 * ae) / C31568) -
          C31592 / (C31568 * 4 * C31676)) *
         be) /
            C31568;
    const double C7776 =
        C31703 / C31608 - ((C31720 - C31592 / C31721) * be) / C31568;
    const double C15945 =
        C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568;
    const double C31705 = C31702 + C31682;
    const double C15156 = C15148 - C15139;
    const double C15153 = C15145 - C15127;
    const double C15151 = C15143 - C15119;
    const double C15149 = C15141 - C15111;
    const double C15528 = C15522 - C15515;
    const double C15526 = C15520 - C15507;
    const double C15524 = C15518 - C15499;
    const double C15700 = C15694 - C15687;
    const double C15698 = C15692 - C15679;
    const double C15696 = C15690 - C15671;
    const double C16816 = C16812 - C16807;
    const double C16813 = C16809 - C16795;
    const double C17162 = C17154 - C17144;
    const double C17160 = C17152 - C17136;
    const double C17157 = C17148 - C17123;
    const double C17155 = C17146 - C17115;
    const double C17391 = C17387 - C17382;
    const double C17389 = C17385 - C17374;
    const double C17809 = C17805 - C17797;
    const double C17807 = C17803 - C17789;
    const double C19388 = C19386 - C19383;
    const double C28299 = C28297 - C28293;
    const double C28702 = C28700 - C28694;
    const double C911 = C905 + C906;
    const double C22459 = C1575 + C1576;
    const double C22458 = C1576 + C1575;
    const double C11478 = C11472 + C11473;
    const double C2836 = C2831 + C2832;
    const double C2835 = C2829 + C2830;
    const double C5129 = C3375 + C3376;
    const double C5127 = C3376 + C3375;
    const double C4362 = C3374 + C3373;
    const double C5128 = C3373 + C3374;
    const double C12925 = C4710 + C4709;
    const double C12926 = C4708 + C4707;
    const double C13360 = C4707 + C4708;
    const double C14581 = C12957 + C12956;
    const double C5523 = C5517 + C5518;
    const double C9326 = C6119 + C6120;
    const double C9325 = C6120 + C6119;
    const double C7152 = C7146 + C7147;
    const double C31667 = C31662 - C31663;
    const double C10290 = C10286 + C10278;
    const double C27990 = C27986 + C27978;
    const double C7667 = C7661 + C7649;
    const double C9869 = C9861 + C9836;
    const double C11981 = C11975 + C11963;
    const double C27569 = C27561 + C27536;
    const double C31561 = C31558 + C31552;
    const double C17980 = C17965 - C17966;
    const double C17977 = C17953 - C17954;
    const double C17974 = C17941 - C17942;
    const double C18396 = C18384 - C18385;
    const double C18393 = C18372 - C18373;
    const double C18584 = C18572 - C18573;
    const double C18581 = C18560 - C18561;
    const double C20261 = C20246 - C20247;
    const double C20258 = C20234 - C20235;
    const double C20255 = C20222 - C20223;
    const double C20488 = C20479 - C20480;
    const double C20901 = C20892 - C20893;
    const double C31094 = C31084 - C31085;
    const double C31554 = C31545 - C31546;
    const double C7801 = C7776 * C251;
    const double C7789 = C7776 * C250;
    const double C8167 = C7776 * C1023;
    const double C8325 = C7776 * C1157;
    const double C9838 = C7776 * C1160;
    const double C9826 = C7776 * C1158;
    const double C10272 = C7776 * C1722;
    const double C15970 = C15945 * C251;
    const double C15958 = C15945 * C250;
    const double C16336 = C15945 * C1023;
    const double C16494 = C15945 * C1157;
    const double C27538 = C15945 * C1160;
    const double C27526 = C15945 * C1158;
    const double C27972 = C15945 * C1722;
    const double C31707 = C31705 * be;
    const double C15164 = C15156 + C15140;
    const double C15161 = C15153 + C15128;
    const double C15159 = C15151 + C15120;
    const double C15157 = C15149 + C15112;
    const double C15534 = C15528 + C15516;
    const double C15532 = C15526 + C15508;
    const double C15530 = C15524 + C15500;
    const double C15706 = C15700 + C15688;
    const double C15704 = C15698 + C15680;
    const double C15702 = C15696 + C15672;
    const double C16820 = C16816 + C16808;
    const double C16817 = C16813 + C16796;
    const double C17170 = C17162 + C17145;
    const double C17168 = C17160 + C17137;
    const double C17165 = C17157 + C17124;
    const double C17163 = C17155 + C17116;
    const double C17395 = C17391 + C17383;
    const double C17393 = C17389 + C17375;
    const double C17813 = C17809 + C17798;
    const double C17811 = C17807 + C17790;
    const double C19390 = C19388 + C19384;
    const double C28301 = C28299 + C28294;
    const double C28704 = C28702 + C28695;
    const double C912 = C911 + C907;
    const double C22461 = C1574 + C22459;
    const double C22460 = C22458 + C1574;
    const double C11479 = C11478 + C11474;
    const double C12943 = C12925 * C32882;
    const double C14580 = C12925 * C32588;
    const double C25618 = C12925 * C15938;
    const double C12944 = C12926 * C32598;
    const double C25619 = C12926 * C32598;
    const double C14590 = C14581 * C32588;
    const double C5524 = C5523 + C5519;
    const double C9328 = C6118 + C9326;
    const double C9327 = C9325 + C6118;
    const double C7153 = C7152 + C7148;
    const double C31671 = C31667 + C31646;
    const double C17989 = C17980 - C17967;
    const double C17986 = C17977 - C17955;
    const double C17983 = C17974 - C17943;
    const double C18402 = C18396 - C18386;
    const double C18399 = C18393 - C18374;
    const double C18590 = C18584 - C18574;
    const double C18587 = C18581 - C18562;
    const double C20270 = C20261 - C20248;
    const double C20267 = C20258 - C20236;
    const double C20264 = C20255 - C20224;
    const double C20491 = C20488 - C20481;
    const double C20904 = C20901 - C20894;
    const double C31098 = C31094 - C31086;
    const double C31557 = C31554 - C31547;
    const double C7817 = C7800 - C7801;
    const double C7814 = C7788 - C7789;
    const double C8179 = C8166 - C8167;
    const double C8337 = C8324 - C8325;
    const double C9854 = C9837 - C9838;
    const double C9851 = C9825 - C9826;
    const double C10281 = C10271 - C10272;
    const double C15986 = C15969 - C15970;
    const double C15983 = C15957 - C15958;
    const double C16348 = C16335 - C16336;
    const double C16506 = C16493 - C16494;
    const double C27554 = C27537 - C27538;
    const double C27551 = C27525 - C27526;
    const double C27981 = C27971 - C27972;
    const double C31708 = C31707 / C31568;
    const double C15166 = C15161 + C15162;
    const double C15165 = C15159 + C15160;
    const double C17592 = C15705 + C15706;
    const double C17590 = C15706 + C15705;
    const double C18890 = C15704 + C15703;
    const double C19585 = C15703 + C15704;
    const double C17129 = C16817 + C16818;
    const double C17591 = C16818 + C16817;
    const double C28286 = C17170 + C17169;
    const double C17171 = C17165 + C17166;
    const double C11480 = C11479 * C32588;
    const double C12949 = C12943 + C12944;
    const double C25620 = C25618 + C25619;
    const double C7154 = C7153 * C32588;
    const double C17971 = C31671 * C129;
    const double C17969 = C31671 * C128;
    const double C17951 = C31671 * C127;
    const double C17949 = C31671 * C126;
    const double C17939 = C31671 * C125;
    const double C17937 = C31671 * C124;
    const double C18390 = C31671 * C261;
    const double C18388 = C31671 * C260;
    const double C18378 = C31671 * C259;
    const double C18376 = C31671 * C258;
    const double C18578 = C31671 * C366;
    const double C18576 = C31671 * C365;
    const double C18566 = C31671 * C364;
    const double C18564 = C31671 * C363;
    const double C20252 = C31671 * C370;
    const double C20250 = C31671 * C369;
    const double C20240 = C31671 * C372;
    const double C20238 = C31671 * C371;
    const double C20220 = C31671 * C368;
    const double C20218 = C31671 * C367;
    const double C20485 = C31671 * C713;
    const double C20483 = C31671 * C712;
    const double C20890 = C31671 * C711;
    const double C20888 = C31671 * C710;
    const double C31090 = C31671 * C2099;
    const double C31088 = C31671 * C2098;
    const double C31543 = C31671 * C1172;
    const double C31541 = C31671 * C1171;
    const double C6334 =
        (((((0 - (C31566 * C31629) / C31568) * ae) / C31568 -
           (0 * be) / C31578 + (2 * C31630) / C31568) /
              C31608 -
          ((C31566 * C31665 + 0) * be) / C31568 + C31639 - C31653) /
             C31608 +
         ((C31566 * C31673 + 0) * ae) / C31568) /
            C31608 -
        ((C31566 * (C31673 / C31608 +
                    ((C31566 * C31671 + C32731) * ae) / C31568 + C31668) +
          C32971) *
         be) /
            C31568 +
        C31671 / C31608 + ((C31566 * C31668 + C32738) * ae) / C31568 +
        2 * (C31646 / C31608 - (0 * be) / C31568);
    const double C6336 =
        (C31673 / C31608 + ((C31566 * C31671 + C32731) * ae) / C31568 +
         C31668) /
            C31608 -
        ((C31566 * (C31671 / C31608 +
                    ((C31566 * C31668 + C32738) * ae) / C31568 + 2 * C31716) +
          C32967) *
         be) /
            C31568 +
        2 * (C31668 / C31608 + ((C31566 * C31716 + C17926) * ae) / C31568);
    const double C6338 =
        (C31671 / C31608 + ((C31566 * C31668 + C32738) * ae) / C31568 +
         C31720) /
            C31608 -
        ((C31566 *
              (C31668 / C31608 + ((C31566 * C31716 + C17926) * ae) / C31568) +
          C32957) *
         be) /
            C31568 +
        3 * (C31716 / C31608 + (0 * ae) / C31568);
    const double C7771 =
        C31673 / C31608 - ((C31566 * C31671 + C32731) * be) / C31568 + C31668;
    const double C7773 =
        C31671 / C31608 - ((C31566 * C31668 + C32738) * be) / C31568 + C31720;
    const double C15940 =
        C31673 / C31608 + ((C31566 * C31671 + C32731) * ae) / C31568 + C31668;
    const double C15942 =
        C31671 / C31608 + ((C31566 * C31668 + C32738) * ae) / C31568 + C31720;
    const double C17998 = C17989 + C17968;
    const double C17995 = C17986 + C17956;
    const double C17992 = C17983 + C17944;
    const double C18408 = C18402 + C18387;
    const double C18405 = C18399 + C18375;
    const double C18596 = C18590 + C18575;
    const double C18593 = C18587 + C18563;
    const double C20279 = C20270 + C20249;
    const double C20276 = C20267 + C20237;
    const double C20273 = C20264 + C20225;
    const double C20494 = C20491 + C20482;
    const double C20907 = C20904 + C20895;
    const double C31101 = C31098 + C31087;
    const double C31560 = C31557 + C31548;
    const double C7825 = C7817 - C7802;
    const double C7822 = C7814 - C7790;
    const double C8183 = C8179 - C8168;
    const double C8341 = C8337 - C8326;
    const double C9862 = C9854 - C9839;
    const double C9859 = C9851 - C9827;
    const double C10285 = C10281 - C10273;
    const double C15994 = C15986 - C15971;
    const double C15991 = C15983 - C15959;
    const double C16352 = C16348 - C16337;
    const double C16510 = C16506 - C16495;
    const double C27562 = C27554 - C27539;
    const double C27559 = C27551 - C27527;
    const double C27985 = C27981 - C27973;
    const double C31709 = C31692 - C31708;
    const double C17150 = C17129 * C32598;
    const double C30165 = C17129 * C32598;
    const double C28295 = C28286 * C32588;
    const double C17172 = C17171 * C15938;
    const double C28285 = C17171 * C32588;
    const double C30164 = C17171 * C32882;
    const double C7810 = C7771 * C127;
    const double C7808 = C7771 * C126;
    const double C7782 = C7771 * C125;
    const double C7780 = C7771 * C124;
    const double C8176 = C7771 * C261;
    const double C8174 = C7771 * C260;
    const double C8334 = C7771 * C366;
    const double C8332 = C7771 * C365;
    const double C9847 = C7771 * C370;
    const double C9845 = C7771 * C369;
    const double C9819 = C7771 * C368;
    const double C9817 = C7771 * C367;
    const double C10265 = C7771 * C711;
    const double C10263 = C7771 * C710;
    const double C7806 = C7773 * C259;
    const double C7804 = C7773 * C258;
    const double C7786 = C7773 * C261;
    const double C7784 = C7773 * C260;
    const double C8172 = C7773 * C267;
    const double C8170 = C7773 * C266;
    const double C8330 = C7773 * C713;
    const double C8328 = C7773 * C712;
    const double C9843 = C7773 * C1172;
    const double C9841 = C7773 * C1171;
    const double C9823 = C7773 * C711;
    const double C9821 = C7773 * C710;
    const double C10269 = C7773 * C1170;
    const double C10267 = C7773 * C1169;
    const double C15979 = C15940 * C127;
    const double C15977 = C15940 * C126;
    const double C15951 = C15940 * C125;
    const double C15949 = C15940 * C124;
    const double C16345 = C15940 * C261;
    const double C16343 = C15940 * C260;
    const double C16503 = C15940 * C366;
    const double C16501 = C15940 * C365;
    const double C27547 = C15940 * C370;
    const double C27545 = C15940 * C369;
    const double C27519 = C15940 * C368;
    const double C27517 = C15940 * C367;
    const double C27965 = C15940 * C711;
    const double C27963 = C15940 * C710;
    const double C15975 = C15942 * C259;
    const double C15973 = C15942 * C258;
    const double C15955 = C15942 * C261;
    const double C15953 = C15942 * C260;
    const double C16341 = C15942 * C267;
    const double C16339 = C15942 * C266;
    const double C16499 = C15942 * C713;
    const double C16497 = C15942 * C712;
    const double C27543 = C15942 * C1172;
    const double C27541 = C15942 * C1171;
    const double C27523 = C15942 * C711;
    const double C27521 = C15942 * C710;
    const double C27969 = C15942 * C1170;
    const double C27967 = C15942 * C1169;
    const double C7833 = C7825 + C7803;
    const double C7830 = C7822 + C7791;
    const double C8187 = C8183 + C8169;
    const double C8345 = C8341 + C8327;
    const double C9870 = C9862 + C9840;
    const double C9867 = C9859 + C9828;
    const double C10289 = C10285 + C10274;
    const double C16002 = C15994 + C15972;
    const double C15999 = C15991 + C15960;
    const double C16356 = C16352 + C16338;
    const double C16514 = C16510 + C16496;
    const double C27570 = C27562 + C27540;
    const double C27567 = C27559 + C27528;
    const double C27989 = C27985 + C27974;
    const double C31710 = C31709 - C31683;
    const double C17173 = C17172 + C17150;
    const double C30166 = C30164 + C30165;
    const double C17970 = C31710 * C118;
    const double C17950 = C31710 * C117;
    const double C17938 = C31710 * C116;
    const double C18389 = C31710 * C247;
    const double C18377 = C31710 * C246;
    const double C18577 = C31710 * C352;
    const double C18565 = C31710 * C351;
    const double C20251 = C31710 * C354;
    const double C20239 = C31710 * C355;
    const double C20219 = C31710 * C353;
    const double C20484 = C31710 * C706;
    const double C20889 = C31710 * C705;
    const double C31089 = C31710 * C2090;
    const double C31542 = C31710 * C1159;
    const double C6335 =
        (((ae * -2 * C31629) / C31676 -
          (((C31566 * C31686) / C31576 + 2 * C31665) * be) / C31568 -
          C31687 / C31576) /
             C31608 +
         ((C31566 * C31706 + 2 * C31673) * ae) / C31568) /
            C31608 -
        ((C31566 * (C31706 / C31608 +
                    ((C31566 * C31710 + 2 * C31671) * ae) / C31568 + C31703) +
          2 * (C31673 / C31608 + ((C31566 * C31671 + C32731) * ae) / C31568 +
               C31668)) *
         be) /
            C31568 +
        C31710 / C31608 + ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
        (-2 * C31587) / (C31568 * 4 * C31576);
    const double C6337 =
        (C31706 / C31608 + ((C31566 * C31710 + 2 * C31671) * ae) / C31568 +
         C31703) /
            C31608 -
        ((C31566 * (C31710 / C31608 +
                    ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
                    (-2 * C31587) / C31721) +
          2 * (C31671 / C31608 + ((C31566 * C31668 + C32738) * ae) / C31568 +
               C31720)) *
         be) /
            C31568 +
        2 * (C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568);
    const double C6339 =
        (C31710 / C31608 + ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
         (-2 * C31587) / C31721) /
            C31608 -
        ((C31566 *
              (C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568) +
          2 * (C31668 / C31608 + ((C31566 * C31716 + C17926) * ae) / C31568)) *
         be) /
            C31568 +
        (-3 * C31587) / (C31568 * 4 * C31676);
    const double C7772 = C31706 / C31608 -
                         ((C31566 * C31710 + 2 * C31671) * be) / C31568 +
                         C31703;
    const double C7774 = C31710 / C31608 -
                         ((C31566 * C31703 + 2 * C31668) * be) / C31568 +
                         (-2 * C31587) / C31721;
    const double C15941 = C31706 / C31608 +
                          ((C31566 * C31710 + 2 * C31671) * ae) / C31568 +
                          C31703;
    const double C15943 = C31710 / C31608 +
                          ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
                          (-2 * C31587) / C31721;
    const double C17981 = C17969 - C17970;
    const double C17976 = C17949 - C17950;
    const double C17973 = C17937 - C17938;
    const double C18397 = C18388 - C18389;
    const double C18394 = C18376 - C18377;
    const double C18585 = C18576 - C18577;
    const double C18582 = C18564 - C18565;
    const double C20262 = C20250 - C20251;
    const double C20259 = C20238 - C20239;
    const double C20254 = C20218 - C20219;
    const double C20489 = C20483 - C20484;
    const double C20900 = C20888 - C20889;
    const double C31095 = C31088 - C31089;
    const double C31553 = C31541 - C31542;
    const double C7809 = C7772 * C117;
    const double C7781 = C7772 * C116;
    const double C8175 = C7772 * C247;
    const double C8333 = C7772 * C352;
    const double C9846 = C7772 * C354;
    const double C9818 = C7772 * C353;
    const double C10264 = C7772 * C705;
    const double C7805 = C7774 * C246;
    const double C7785 = C7774 * C247;
    const double C8171 = C7774 * C250;
    const double C8329 = C7774 * C706;
    const double C9842 = C7774 * C1159;
    const double C9822 = C7774 * C705;
    const double C10268 = C7774 * C1158;
    const double C15978 = C15941 * C117;
    const double C15950 = C15941 * C116;
    const double C16344 = C15941 * C247;
    const double C16502 = C15941 * C352;
    const double C27546 = C15941 * C354;
    const double C27518 = C15941 * C353;
    const double C27964 = C15941 * C705;
    const double C15974 = C15943 * C246;
    const double C15954 = C15943 * C247;
    const double C16340 = C15943 * C250;
    const double C16498 = C15943 * C706;
    const double C27542 = C15943 * C1159;
    const double C27522 = C15943 * C705;
    const double C27968 = C15943 * C1158;
    const double C17990 = C17981 - C17971;
    const double C17985 = C17976 - C17951;
    const double C17982 = C17973 - C17939;
    const double C18403 = C18397 - C18390;
    const double C18400 = C18394 - C18378;
    const double C18591 = C18585 - C18578;
    const double C18588 = C18582 - C18566;
    const double C20271 = C20262 - C20252;
    const double C20268 = C20259 - C20240;
    const double C20263 = C20254 - C20220;
    const double C20492 = C20489 - C20485;
    const double C20903 = C20900 - C20890;
    const double C31099 = C31095 - C31090;
    const double C31556 = C31553 - C31543;
    const double C7819 = C7808 - C7809;
    const double C7812 = C7780 - C7781;
    const double C8181 = C8174 - C8175;
    const double C8339 = C8332 - C8333;
    const double C9856 = C9845 - C9846;
    const double C9849 = C9817 - C9818;
    const double C10279 = C10263 - C10264;
    const double C7818 = C7804 - C7805;
    const double C7813 = C7784 - C7785;
    const double C8180 = C8170 - C8171;
    const double C8338 = C8328 - C8329;
    const double C9855 = C9841 - C9842;
    const double C9850 = C9821 - C9822;
    const double C10280 = C10267 - C10268;
    const double C15988 = C15977 - C15978;
    const double C15981 = C15949 - C15950;
    const double C16350 = C16343 - C16344;
    const double C16508 = C16501 - C16502;
    const double C27556 = C27545 - C27546;
    const double C27549 = C27517 - C27518;
    const double C27979 = C27963 - C27964;
    const double C15987 = C15973 - C15974;
    const double C15982 = C15953 - C15954;
    const double C16349 = C16339 - C16340;
    const double C16507 = C16497 - C16498;
    const double C27555 = C27541 - C27542;
    const double C27550 = C27521 - C27522;
    const double C27980 = C27967 - C27968;
    const double C17999 = C17990 + C17972;
    const double C17994 = C17985 + C17952;
    const double C17991 = C17982 + C17940;
    const double C18409 = C18403 + C18391;
    const double C18406 = C18400 + C18379;
    const double C18597 = C18591 + C18579;
    const double C18594 = C18588 + C18567;
    const double C20280 = C20271 + C20253;
    const double C20277 = C20268 + C20241;
    const double C20272 = C20263 + C20221;
    const double C20495 = C20492 + C20486;
    const double C20906 = C20903 + C20891;
    const double C31102 = C31099 + C31091;
    const double C31559 = C31556 + C31544;
    const double C7827 = C7819 - C7810;
    const double C7820 = C7812 - C7782;
    const double C8185 = C8181 - C8176;
    const double C8343 = C8339 - C8334;
    const double C9864 = C9856 - C9847;
    const double C9857 = C9849 - C9819;
    const double C10283 = C10279 - C10265;
    const double C7826 = C7818 - C7806;
    const double C7821 = C7813 - C7786;
    const double C8184 = C8180 - C8172;
    const double C8342 = C8338 - C8330;
    const double C9863 = C9855 - C9843;
    const double C9858 = C9850 - C9823;
    const double C10284 = C10280 - C10269;
    const double C15996 = C15988 - C15979;
    const double C15989 = C15981 - C15951;
    const double C16354 = C16350 - C16345;
    const double C16512 = C16508 - C16503;
    const double C27564 = C27556 - C27547;
    const double C27557 = C27549 - C27519;
    const double C27983 = C27979 - C27965;
    const double C15995 = C15987 - C15975;
    const double C15990 = C15982 - C15955;
    const double C16353 = C16349 - C16341;
    const double C16511 = C16507 - C16499;
    const double C27563 = C27555 - C27543;
    const double C27558 = C27550 - C27523;
    const double C27984 = C27980 - C27969;
    const double C18000 = C17994 + C17995;
    const double C20691 = C18596 + C18597;
    const double C20690 = C18597 + C18596;
    const double C31079 = C20280 + C20279;
    const double C7835 = C7827 + C7811;
    const double C7828 = C7820 + C7783;
    const double C8189 = C8185 + C8177;
    const double C8347 = C8343 + C8335;
    const double C9872 = C9864 + C9848;
    const double C9865 = C9857 + C9820;
    const double C10287 = C10283 + C10266;
    const double C7834 = C7826 + C7807;
    const double C7829 = C7821 + C7787;
    const double C8188 = C8184 + C8173;
    const double C8346 = C8342 + C8331;
    const double C9871 = C9863 + C9844;
    const double C9866 = C9858 + C9824;
    const double C10288 = C10284 + C10270;
    const double C16004 = C15996 + C15980;
    const double C15997 = C15989 + C15952;
    const double C16358 = C16354 + C16346;
    const double C16516 = C16512 + C16504;
    const double C27572 = C27564 + C27548;
    const double C27565 = C27557 + C27520;
    const double C27987 = C27983 + C27966;
    const double C16003 = C15995 + C15976;
    const double C15998 = C15990 + C15956;
    const double C16357 = C16353 + C16342;
    const double C16515 = C16511 + C16500;
    const double C27571 = C27563 + C27544;
    const double C27566 = C27558 + C27524;
    const double C27988 = C27984 + C27970;
    const double C18001 = C18000 + C17996;
    const double C20693 = C18595 + C20691;
    const double C20692 = C20690 + C18595;
    const double C31092 = C31079 + C20278;
    const double C31096 = C31092 * C32588;
    d2ee[0] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32593 +
            (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
               C32690 * C32649 * C471 -
           ((C18404 + C18405 + C18406) * C17929 +
            (C18407 + C18408 + C18409) * C32601 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C32593) *
               C32690 * C32649 * C472) *
              C473 +
          (((C18409 + C18408 + C18407) * C32593 +
            (C18406 + C18405 + C18404) * C32601 +
            (C31671 * C256 - C31710 * C245 - C31671 * C257 + C32731 * C275 +
             C31668 * C270 - C31703 * C252 - C31668 * C271 + C32738 * C282 +
             C31716 * C1339 - C17935 * C1338 - C31716 * C1340 +
             C17926 * C1341) *
                C17929) *
               C32690 * C32649 * C472 -
           ((C17997 + C17998 + C17999) * C17929 +
            (C17996 + C17995 + C17994) * C32601 +
            (C17993 + C17992 + C17991) * C32593) *
               C32690 * C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[1] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32593 +
            (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
               C32690 * C589 -
           ((C18592 + C18593 + C18594) * C17929 +
            (C18595 + C18596 + C18597) * C32601 +
            (C31716 * C1169 - C17935 * C1158 - C31716 * C1170 + C17926 * C1185 +
             C31668 * C710 - C31703 * C705 - C31668 * C711 + C32738 * C720 +
             C31671 * C367 - C31710 * C353 - C31671 * C368 + C32731 * C383) *
                C32593) *
               C32690 * C590) *
              C471 +
          (((C31671 * C710 - C31710 * C705 - C31671 * C711 + C32731 * C720 +
             C31668 * C1169 - C31703 * C1158 - C31668 * C1170 + C32738 * C1185 +
             C31716 * C1725 - C17935 * C1722 - C31716 * C1726 +
             C17926 * C1731) *
                C32593 +
            (C31671 * C712 - C31710 * C706 - C31671 * C713 + C32731 * C721 +
             C31668 * C1167 - C31703 * C1157 - C31668 * C1168 + C32738 * C1184 +
             C31716 * C1727 - C17935 * C1723 - C31716 * C1728 +
             C17926 * C1732) *
                C32601 +
            (C31671 * C714 - C31710 * C707 - C31671 * C715 + C32731 * C722 +
             C31668 * C1165 - C31703 * C1156 - C31668 * C1166 + C32738 * C1183 +
             C31716 * C1729 - C17935 * C1724 - C31716 * C1730 +
             C17926 * C1733) *
                C17929) *
               C32690 * C590 -
           ((C18404 + C18405 + C18406) * C17929 +
            (C18407 + C18408 + C18409) * C32601 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C32593) *
               C32690 * C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[2] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32593 +
           (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
              C32690 * C32649 * C240 -
          ((C31716 * C1028 - C17935 * C1022 - C31716 * C1029 + C17926 * C1040 +
            C31668 * C268 - C31703 * C251 - C31668 * C269 + C32738 * C281 +
            C31671 * C258 - C31710 * C246 - C31671 * C259 + C32731 * C276) *
               C17929 +
           (C31716 * C1030 - C17935 * C1023 - C31716 * C1031 + C17926 * C1041 +
            C31668 * C266 - C31703 * C250 - C31668 * C267 + C32738 * C280 +
            C31671 * C260 - C31710 * C247 - C31671 * C261 + C32731 * C277) *
               C32601 +
           (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
            C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
            C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
               C32593) *
              C32690 * C32649 * C241 +
          ((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
            C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
            C31716 * C1034 - C17935 * C1025 - C31716 * C1035 + C17926 * C1043) *
               C32593 +
           (C31671 * C266 - C31710 * C250 - C31671 * C267 + C32731 * C280 +
            C31668 * C1030 - C31703 * C1023 - C31668 * C1031 + C32738 * C1041 +
            C31716 * C1036 - C17935 * C1026 - C31716 * C1037 + C17926 * C1044) *
               C32601 +
           (C31671 * C268 - C31710 * C251 - C31671 * C269 + C32731 * C281 +
            C31668 * C1028 - C31703 * C1022 - C31668 * C1029 + C32738 * C1040 +
            C31716 * C1038 - C17935 * C1027 - C31716 * C1039 + C17926 * C1045) *
               C17929) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32593 +
           (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
              C32690 * C32649 * C32635 * C110 -
          ((C17997 + C17998 + C17999) * C17929 +
           (C17996 + C17995 + C17994) * C32601 +
           (C17993 + C17992 + C17991) * C32593) *
              C32690 * C32649 * C32635 * C111 +
          (C18001 * C32593 + (C17999 + C17998 + C17997) * C32601 +
           (C31671 * C130 - C31710 * C119 - C31671 * C131 + C32731 * C140 +
            C31668 * C254 - C31703 * C244 - C31668 * C255 + C32738 * C274 +
            C31716 * C272 - C17935 * C253 - C31716 * C273 + C17926 * C283) *
               C17929) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32593 +
           (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
              C32690 * C346 -
          ((C31716 * C1165 - C17935 * C1156 - C31716 * C1166 + C17926 * C1183 +
            C31668 * C714 - C31703 * C707 - C31668 * C715 + C32738 * C722 +
            C31671 * C363 - C31710 * C351 - C31671 * C364 + C32731 * C381) *
               C17929 +
           (C31716 * C1167 - C17935 * C1157 - C31716 * C1168 + C17926 * C1184 +
            C31668 * C712 - C31703 * C706 - C31668 * C713 + C32738 * C721 +
            C31671 * C365 - C31710 * C352 - C31671 * C366 + C32731 * C382) *
               C32601 +
           (C31716 * C1169 - C17935 * C1158 - C31716 * C1170 + C17926 * C1185 +
            C31668 * C710 - C31703 * C705 - C31668 * C711 + C32738 * C720 +
            C31671 * C367 - C31710 * C353 - C31671 * C368 + C32731 * C383) *
               C32593) *
              C32690 * C347 +
          ((C31671 * C369 - C31710 * C354 - C31671 * C370 + C32731 * C384 +
            C31668 * C1171 - C31703 * C1159 - C31668 * C1172 + C32738 * C1186 +
            C31716 * C1173 - C17935 * C1160 - C31716 * C1174 + C17926 * C1187) *
               C32593 +
           (C31671 * C371 - C31710 * C355 - C31671 * C372 + C32731 * C385 +
            C31668 * C1175 - C31703 * C1161 - C31668 * C1176 + C32738 * C1188 +
            C31716 * C1177 - C17935 * C1162 - C31716 * C1178 + C17926 * C1189) *
               C32601 +
           (C31671 * C373 - C31710 * C356 - C31671 * C374 + C32731 * C386 +
            C31668 * C1179 - C31703 * C1163 - C31668 * C1180 + C32738 * C1190 +
            C31716 * C1181 - C17935 * C1164 - C31716 * C1182 + C17926 * C1191) *
               C17929) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[3] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32593 +
            (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
               C32690 * C589 -
           ((C18592 + C18593 + C18594) * C17929 +
            (C18595 + C18596 + C18597) * C32601 +
            (C31716 * C1169 - C17935 * C1158 - C31716 * C1170 + C17926 * C1185 +
             C31668 * C710 - C31703 * C705 - C31668 * C711 + C32738 * C720 +
             C31671 * C367 - C31710 * C353 - C31671 * C368 + C32731 * C383) *
                C32593) *
               C32690 * C590) *
              C32635 * C473 +
          (((C18597 + C18596 + C18595) * C32593 +
            (C18594 + C18593 + C18592) * C32601 +
            (C31671 * C361 - C31710 * C350 - C31671 * C362 + C32731 * C380 +
             C31668 * C716 - C31703 * C708 - C31668 * C717 + C32738 * C723 +
             C31716 * C1531 - C17935 * C1530 - C31716 * C1532 +
             C17926 * C1533) *
                C17929) *
               C32690 * C590 -
           ((C17997 + C17998 + C17999) * C17929 +
            (C17996 + C17995 + C17994) * C32601 +
            (C17993 + C17992 + C17991) * C32593) *
               C32690 * C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[4] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32593 +
           (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
              C32690 * C32649 * C32635 * C110 -
          ((C17997 + C17998 + C17999) * C17929 +
           (C17996 + C17995 + C17994) * C32601 +
           (C17993 + C17992 + C17991) * C32593) *
              C32690 * C32649 * C32635 * C111 +
          (C18001 * C32593 + (C17999 + C17998 + C17997) * C32601 +
           (C31671 * C130 - C31710 * C119 - C31671 * C131 + C32731 * C140 +
            C31668 * C254 - C31703 * C244 - C31668 * C255 + C32738 * C274 +
            C31716 * C272 - C17935 * C253 - C31716 * C273 + C17926 * C283) *
               C17929) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32593 +
           (C17991 + C17992 + C17993) * C32601 + C18001 * C17929) *
              C32690 * C32649 * C240 -
          ((C31716 * C1028 - C17935 * C1022 - C31716 * C1029 + C17926 * C1040 +
            C31668 * C268 - C31703 * C251 - C31668 * C269 + C32738 * C281 +
            C31671 * C258 - C31710 * C246 - C31671 * C259 + C32731 * C276) *
               C17929 +
           (C31716 * C1030 - C17935 * C1023 - C31716 * C1031 + C17926 * C1041 +
            C31668 * C266 - C31703 * C250 - C31668 * C267 + C32738 * C280 +
            C31671 * C260 - C31710 * C247 - C31671 * C261 + C32731 * C277) *
               C32601 +
           (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
            C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
            C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
               C32593) *
              C32690 * C32649 * C241 +
          ((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
            C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
            C31716 * C1034 - C17935 * C1025 - C31716 * C1035 + C17926 * C1043) *
               C32593 +
           (C31671 * C266 - C31710 * C250 - C31671 * C267 + C32731 * C280 +
            C31668 * C1030 - C31703 * C1023 - C31668 * C1031 + C32738 * C1041 +
            C31716 * C1036 - C17935 * C1026 - C31716 * C1037 + C17926 * C1044) *
               C32601 +
           (C31671 * C268 - C31710 * C251 - C31671 * C269 + C32731 * C281 +
            C31668 * C1028 - C31703 * C1022 - C31668 * C1029 + C32738 * C1040 +
            C31716 * C1038 - C17935 * C1027 - C31716 * C1039 + C17926 * C1045) *
               C17929) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[5] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
              C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
              C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                 C15938 +
             (C17991 + C17992 + C17993) * C32598) *
                C32902 +
            ((C20272 + C20273 + C20274) * C15938 +
             (C18597 + C18596 + C18595) * C32598) *
                C32777) *
               C32649 * C471 -
           (((C20493 + C20494 + C20495) * C32598 +
             (C31716 * C1725 - C17935 * C1722 - C31716 * C1726 +
              C17926 * C1731 + C31668 * C1169 - C31703 * C1158 -
              C31668 * C1170 + C32738 * C1185 + C31671 * C710 - C31710 * C705 -
              C31671 * C711 + C32731 * C720) *
                 C15938) *
                C32777 +
            ((C18407 + C18408 + C18409) * C32598 +
             (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 +
              C17926 * C1042 + C31668 * C264 - C31703 * C249 - C31668 * C265 +
              C32738 * C279 + C31671 * C262 - C31710 * C248 - C31671 * C263 +
              C32731 * C278) *
                 C15938) *
                C32902) *
               C32649 * C472) *
              C473 +
          ((((C18409 + C18408 + C18407) * C15938 +
             (C18406 + C18405 + C18404) * C32598) *
                C32902 +
            ((C20495 + C20494 + C20493) * C15938 +
             (C31671 * C714 - C31710 * C707 - C31671 * C715 + C32731 * C722 +
              C31668 * C1165 - C31703 * C1156 - C31668 * C1166 +
              C32738 * C1183 + C31716 * C1729 - C17935 * C1724 -
              C31716 * C1730 + C17926 * C1733) *
                 C32598) *
                C32777) *
               C32649 * C472 -
           (((C18592 + C18593 + C18594) * C32598 +
             (C18595 + C18596 + C18597) * C15938) *
                C32777 +
            ((C17996 + C17995 + C17994) * C32598 +
             (C17993 + C17992 + C17991) * C15938) *
                C32902) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[6] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
              C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
              C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                 C15938 +
             (C17991 + C17992 + C17993) * C32598) *
                C32902 +
            ((C20272 + C20273 + C20274) * C15938 + C20692 * C32598) * C32777) *
               C589 -
           (((C20275 + C20276 + C20277) * C32598 +
             (C20278 + C20279 + C20280) * C15938) *
                C32777 +
            (C20693 * C32598 + (C20274 + C20273 + C20272) * C15938) * C32902) *
               C590) *
              C471 +
          ((((C20906 + C20907 + C20908) * C15938 +
             (C20495 + C20494 + C20493) * C32598) *
                C32902 +
            ((C31671 * C1171 - C31710 * C1159 - C31671 * C1172 +
              C32731 * C1186 + C31668 * C1173 - C31703 * C1160 -
              C31668 * C1174 + C32738 * C1187 + C31716 * C6481 -
              C17935 * C6477 - C31716 * C6482 + C17926 * C6486) *
                 C15938 +
             (C31671 * C1175 - C31710 * C1161 - C31671 * C1176 +
              C32731 * C1188 + C31668 * C1177 - C31703 * C1162 -
              C31668 * C1178 + C32738 * C1189 + C31716 * C7301 -
              C17935 * C7300 - C31716 * C7302 + C17926 * C7303) *
                 C32598) *
                C32777) *
               C590 -
           (((C20493 + C20494 + C20495) * C32598 +
             (C20908 + C20907 + C20906) * C15938) *
                C32777 +
            ((C18407 + C18408 + C18409) * C32598 +
             (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 +
              C17926 * C1042 + C31668 * C264 - C31703 * C249 - C31668 * C265 +
              C32738 * C279 + C31671 * C262 - C31710 * C248 - C31671 * C263 +
              C32731 * C278) *
                 C15938) *
                C32902) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[7] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C15938 +
            (C17991 + C17992 + C17993) * C32598) *
               C32902 +
           ((C31671 * C367 - C31710 * C353 - C31671 * C368 + C32731 * C383 +
             C31668 * C710 - C31703 * C705 - C31668 * C711 + C32738 * C720 +
             C31716 * C1169 - C17935 * C1158 - C31716 * C1170 +
             C17926 * C1185) *
                C15938 +
            (C18597 + C18596 + C18595) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C31716 * C1727 - C17935 * C1723 - C31716 * C1728 + C17926 * C1732 +
             C31668 * C1167 - C31703 * C1157 - C31668 * C1168 + C32738 * C1184 +
             C31671 * C712 - C31710 * C706 - C31671 * C713 + C32731 * C721) *
                C32598 +
            (C31716 * C1725 - C17935 * C1722 - C31716 * C1726 + C17926 * C1731 +
             C31668 * C1169 - C31703 * C1158 - C31668 * C1170 + C32738 * C1185 +
             C31671 * C710 - C31710 * C705 - C31671 * C711 + C32731 * C720) *
                C15938) *
               C32777 +
           ((C18407 + C18408 + C18409) * C32598 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C15938) *
               C32902) *
              C32649 * C241 +
          (((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
             C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
             C31716 * C1034 - C17935 * C1025 - C31716 * C1035 +
             C17926 * C1043) *
                C15938 +
            (C31671 * C266 - C31710 * C250 - C31671 * C267 + C32731 * C280 +
             C31668 * C1030 - C31703 * C1023 - C31668 * C1031 + C32738 * C1041 +
             C31716 * C1036 - C17935 * C1026 - C31716 * C1037 +
             C17926 * C1044) *
                C32598) *
               C32902 +
           ((C31671 * C1169 - C31710 * C1158 - C31671 * C1170 + C32731 * C1185 +
             C31668 * C1725 - C31703 * C1722 - C31668 * C1726 + C32738 * C1731 +
             C31716 * C6479 - C17935 * C6476 - C31716 * C6480 +
             C17926 * C6485) *
                C15938 +
            (C31671 * C1167 - C31710 * C1157 - C31671 * C1168 + C32731 * C1184 +
             C31668 * C1727 - C31703 * C1723 - C31668 * C1728 + C32738 * C1732 +
             C31716 * C6657 - C17935 * C6656 - C31716 * C6658 +
             C17926 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C15938 +
            (C17991 + C17992 + C17993) * C32598) *
               C32902 +
           ((C31671 * C367 - C31710 * C353 - C31671 * C368 + C32731 * C383 +
             C31668 * C710 - C31703 * C705 - C31668 * C711 + C32738 * C720 +
             C31716 * C1169 - C17935 * C1158 - C31716 * C1170 +
             C17926 * C1185) *
                C15938 +
            (C18597 + C18596 + C18595) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C18592 + C18593 + C18594) * C32598 +
            (C18595 + C18596 + C18597) * C15938) *
               C32777 +
           ((C17996 + C17995 + C17994) * C32598 +
            (C17993 + C17992 + C17991) * C15938) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C18001 * C15938 + (C17999 + C17998 + C17997) * C32598) * C32902 +
           ((C18594 + C18593 + C18592) * C15938 +
            (C31671 * C361 - C31710 * C350 - C31671 * C362 + C32731 * C380 +
             C31668 * C716 - C31703 * C708 - C31668 * C717 + C32738 * C723 +
             C31716 * C1531 - C17935 * C1530 - C31716 * C1532 +
             C17926 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C15938 +
            (C17991 + C17992 + C17993) * C32598) *
               C32902 +
           ((C20272 + C20273 + C20274) * C15938 +
            (C18597 + C18596 + C18595) * C32598) *
               C32777) *
              C346 -
          (((C20275 + C20276 + C20277) * C32598 +
            (C20278 + C20279 + C20280) * C15938) *
               C32777 +
           ((C18595 + C18596 + C18597) * C32598 +
            (C20274 + C20273 + C20272) * C15938) *
               C32902) *
              C347 +
          (((C20280 + C20279 + C20278) * C15938 +
            (C20277 + C20276 + C20275) * C32598) *
               C32902 +
           ((C31671 * C2098 - C31710 * C2090 - C31671 * C2099 + C32731 * C2108 +
             C31668 * C2641 - C31703 * C2638 - C31668 * C2642 + C32738 * C2647 +
             C31716 * C7079 - C17935 * C7076 - C31716 * C7080 +
             C17926 * C7085) *
                C15938 +
            (C31671 * C2096 - C31710 * C2089 - C31671 * C2097 + C32731 * C2107 +
             C31668 * C2643 - C31703 * C2639 - C31668 * C2644 + C32738 * C2648 +
             C31716 * C7451 - C17935 * C7450 - C31716 * C7452 +
             C17926 * C7453) *
                C32598) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[8] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
              C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
              C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                 C15938 +
             (C17991 + C17992 + C17993) * C32598) *
                C32902 +
            ((C20272 + C20273 + C20274) * C15938 + C20692 * C32598) * C32777) *
               C589 -
           (((C20275 + C20276 + C20277) * C32598 +
             (C20278 + C20279 + C20280) * C15938) *
                C32777 +
            (C20693 * C32598 + (C20274 + C20273 + C20272) * C15938) * C32902) *
               C590) *
              C32635 * C473 +
          (((C20692 * C15938 + (C18594 + C18593 + C18592) * C32598) * C32902 +
            ((C20277 + C20276 + C20275) * C15938 +
             (C31671 * C373 - C31710 * C356 - C31671 * C374 + C32731 * C386 +
              C31668 * C1179 - C31703 * C1163 - C31668 * C1180 +
              C32738 * C1190 + C31716 * C1181 - C17935 * C1164 -
              C31716 * C1182 + C17926 * C1191) *
                 C32598) *
                C32777) *
               C590 -
           (((C18592 + C18593 + C18594) * C32598 + C20693 * C15938) * C32777 +
            ((C17996 + C17995 + C17994) * C32598 +
             (C17993 + C17992 + C17991) * C15938) *
                C32902) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[9] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C15938 +
            (C17991 + C17992 + C17993) * C32598) *
               C32902 +
           ((C31671 * C367 - C31710 * C353 - C31671 * C368 + C32731 * C383 +
             C31668 * C710 - C31703 * C705 - C31668 * C711 + C32738 * C720 +
             C31716 * C1169 - C17935 * C1158 - C31716 * C1170 +
             C17926 * C1185) *
                C15938 +
            (C18597 + C18596 + C18595) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C18592 + C18593 + C18594) * C32598 +
            (C18595 + C18596 + C18597) * C15938) *
               C32777 +
           ((C17996 + C17995 + C17994) * C32598 +
            (C17993 + C17992 + C17991) * C15938) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C18001 * C15938 + (C17999 + C17998 + C17997) * C32598) * C32902 +
           ((C18594 + C18593 + C18592) * C15938 +
            (C31671 * C361 - C31710 * C350 - C31671 * C362 + C32731 * C380 +
             C31668 * C716 - C31703 * C708 - C31668 * C717 + C32738 * C723 +
             C31716 * C1531 - C17935 * C1530 - C31716 * C1532 +
             C17926 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C15938 +
            (C17991 + C17992 + C17993) * C32598) *
               C32902 +
           ((C31671 * C367 - C31710 * C353 - C31671 * C368 + C32731 * C383 +
             C31668 * C710 - C31703 * C705 - C31668 * C711 + C32738 * C720 +
             C31716 * C1169 - C17935 * C1158 - C31716 * C1170 +
             C17926 * C1185) *
                C15938 +
            (C18597 + C18596 + C18595) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C31716 * C1727 - C17935 * C1723 - C31716 * C1728 + C17926 * C1732 +
             C31668 * C1167 - C31703 * C1157 - C31668 * C1168 + C32738 * C1184 +
             C31671 * C712 - C31710 * C706 - C31671 * C713 + C32731 * C721) *
                C32598 +
            (C31716 * C1725 - C17935 * C1722 - C31716 * C1726 + C17926 * C1731 +
             C31668 * C1169 - C31703 * C1158 - C31668 * C1170 + C32738 * C1185 +
             C31671 * C710 - C31710 * C705 - C31671 * C711 + C32731 * C720) *
                C15938) *
               C32777 +
           ((C18407 + C18408 + C18409) * C32598 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C15938) *
               C32902) *
              C32649 * C241 +
          (((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
             C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
             C31716 * C1034 - C17935 * C1025 - C31716 * C1035 +
             C17926 * C1043) *
                C15938 +
            (C31671 * C266 - C31710 * C250 - C31671 * C267 + C32731 * C280 +
             C31668 * C1030 - C31703 * C1023 - C31668 * C1031 + C32738 * C1041 +
             C31716 * C1036 - C17935 * C1026 - C31716 * C1037 +
             C17926 * C1044) *
                C32598) *
               C32902 +
           ((C31671 * C1169 - C31710 * C1158 - C31671 * C1170 + C32731 * C1185 +
             C31668 * C1725 - C31703 * C1722 - C31668 * C1726 + C32738 * C1731 +
             C31716 * C6479 - C17935 * C6476 - C31716 * C6480 +
             C17926 * C6485) *
                C15938 +
            (C31671 * C1167 - C31710 * C1157 - C31671 * C1168 + C32731 * C1184 +
             C31668 * C1727 - C31703 * C1723 - C31668 * C1728 + C32738 * C1732 +
             C31716 * C6657 - C17935 * C6656 - C31716 * C6658 +
             C17926 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[10] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C15938 +
            (C15997 + C15998 + C15999 + C16000) * C32598) *
               C32690 * C32649 * C471 -
           ((C16355 + C16356 + C16357 + C16358) * C32598 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C15938) *
               C32690 * C32649 * C472) *
              C473 +
          (((C16358 + C16357 + C16356 + C16355) * C15938 +
            (C15940 * C258 - C15941 * C246 - C15940 * C259 + C32971 * C276 +
             C15942 * C268 - C15943 * C251 - C15942 * C269 + C32967 * C281 +
             C15944 * C1028 - C15945 * C1022 - C15944 * C1029 + C32957 * C1040 +
             C15946 * C1038 - C15947 * C1027 - C15946 * C1039 +
             C32909 * C1045) *
                C32598) *
               C32690 * C32649 * C472 -
           ((C16001 + C16002 + C16003 + C16004) * C32598 +
            (C16000 + C15999 + C15998 + C15997) * C15938) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32970 +
            (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
               C32690 * C32649 * C471 -
           ((C15529 + C15530) * C32901 + (C15531 + C15532) * C32950 +
            (C15533 + C15534) * C32963 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32970) *
               C32690 * C32649 * C472) *
              C473 +
          (((C15534 + C15533) * C32970 + (C15532 + C15531) * C32963 +
            (C15530 + C15529) * C32950 +
            (C15104 * C254 - C15105 * C244 - C15104 * C255 + C15098 * C274 +
             C15106 * C272 - C15107 * C253 - C15106 * C273 + C32735 * C283) *
                C32901) *
               C32690 * C32649 * C472 -
           ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
            (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C15938 +
             (C15157 + C15158) * C32598) *
                C32965 +
            ((C17163 + C17164) * C15938 + (C15706 + C15705) * C32598) * C32954 +
            C17173 * C32935) *
               C32649 * C471 -
           (((C17392 + C17393) * C32598 +
             (C15106 * C1173 - C15107 * C1160 - C15106 * C1174 +
              C32735 * C1187 + C15104 * C1171 - C15105 * C1159 -
              C15104 * C1172 + C15098 * C1186) *
                 C15938) *
                C32935 +
            ((C17394 + C17395) * C32598 +
             (C15106 * C1169 - C15107 * C1158 - C15106 * C1170 +
              C32735 * C1185 + C15104 * C710 - C15105 * C705 - C15104 * C711 +
              C15098 * C720) *
                 C15938) *
                C32954 +
            ((C15533 + C15534) * C32598 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C15938) *
                C32965) *
               C32649 * C472) *
              C473 +
          ((((C15534 + C15533) * C15938 + (C15532 + C15531) * C32598) * C32965 +
            ((C17395 + C17394) * C15938 +
             (C15104 * C714 - C15105 * C707 - C15104 * C715 + C15098 * C722 +
              C15106 * C1165 - C15107 * C1156 - C15106 * C1166 +
              C32735 * C1183) *
                 C32598) *
                C32954 +
            ((C17393 + C17392) * C15938 +
             (C15104 * C1179 - C15105 * C1163 - C15104 * C1180 +
              C15098 * C1190 + C15106 * C1181 - C15107 * C1164 -
              C15106 * C1182 + C32735 * C1191) *
                 C32598) *
                C32935) *
               C32649 * C472 -
           (((C16819 + C16820) * C32598 + (C16818 + C16817) * C15938) * C32935 +
            ((C15703 + C15704) * C32598 + (C15705 + C15706) * C15938) * C32954 +
            ((C15160 + C15159) * C32598 + (C15158 + C15157) * C15938) *
                C32965) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C15938 +
            (C15997 + C15998 + C15999 + C16000) * C32598) *
               C32690 * C589 -
           ((C16513 + C16514 + C16515 + C16516) * C32598 +
            (C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731 +
             C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
             C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
             C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383) *
                C15938) *
               C32690 * C590) *
              C471 +
          (((C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720 +
             C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
             C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
             C15946 * C6479 - C15947 * C6476 - C15946 * C6480 +
             C32909 * C6485) *
                C15938 +
            (C15940 * C712 - C15941 * C706 - C15940 * C713 + C32971 * C721 +
             C15942 * C1167 - C15943 * C1157 - C15942 * C1168 + C32967 * C1184 +
             C15944 * C1727 - C15945 * C1723 - C15944 * C1728 + C32957 * C1732 +
             C15946 * C6657 - C15947 * C6656 - C15946 * C6658 +
             C32909 * C6659) *
                C32598) *
               C32690 * C590 -
           ((C16355 + C16356 + C16357 + C16358) * C32598 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C15938) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32970 +
            (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
               C32690 * C589 -
           ((C15701 + C15702) * C32901 + (C15703 + C15704) * C32950 +
            (C15705 + C15706) * C32963 +
            (C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720 +
             C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383) *
                C32970) *
               C32690 * C590) *
              C471 +
          (((C15104 * C710 - C15105 * C705 - C15104 * C711 + C15098 * C720 +
             C15106 * C1169 - C15107 * C1158 - C15106 * C1170 +
             C32735 * C1185) *
                C32970 +
            (C15104 * C712 - C15105 * C706 - C15104 * C713 + C15098 * C721 +
             C15106 * C1167 - C15107 * C1157 - C15106 * C1168 +
             C32735 * C1184) *
                C32963 +
            (C15104 * C714 - C15105 * C707 - C15104 * C715 + C15098 * C722 +
             C15106 * C1165 - C15107 * C1156 - C15106 * C1166 +
             C32735 * C1183) *
                C32950 +
            (C15104 * C716 - C15105 * C708 - C15104 * C717 + C15098 * C723 +
             C15106 * C1531 - C15107 * C1530 - C15106 * C1532 +
             C32735 * C1533) *
                C32901) *
               C32690 * C590 -
           ((C15529 + C15530) * C32901 + (C15531 + C15532) * C32950 +
            (C15533 + C15534) * C32963 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32970) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C15938 +
             (C15157 + C15158) * C32598) *
                C32965 +
            ((C17163 + C17164) * C15938 + C17590 * C32598) * C32954 +
            C17173 * C32935) *
               C589 -
           (((C17167 + C17168) * C32598 + (C17169 + C17170) * C15938) * C32935 +
            (C17591 * C32598 + (C17166 + C17165) * C15938) * C32954 +
            (C17592 * C32598 + (C17164 + C17163) * C15938) * C32965) *
               C590) *
              C471 +
          ((((C17811 + C17812) * C15938 + (C17395 + C17394) * C32598) * C32965 +
            ((C17813 + C17814) * C15938 + (C17393 + C17392) * C32598) * C32954 +
            ((C15104 * C2641 - C15105 * C2638 - C15104 * C2642 +
              C15098 * C2647 + C15106 * C7079 - C15107 * C7076 -
              C15106 * C7080 + C32735 * C7085) *
                 C15938 +
             (C15104 * C2643 - C15105 * C2639 - C15104 * C2644 +
              C15098 * C2648 + C15106 * C7451 - C15107 * C7450 -
              C15106 * C7452 + C32735 * C7453) *
                 C32598) *
                C32935) *
               C590 -
           (((C17392 + C17393) * C32598 + (C17814 + C17813) * C15938) * C32935 +
            ((C17394 + C17395) * C32598 + (C17812 + C17811) * C15938) * C32954 +
            ((C15533 + C15534) * C32598 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C15938) *
                C32965) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
                C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                   C32970 +
               (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
                  C32690 * C32649 * C32635 * C110 -
              ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
               (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
                  C32690 * C32649 * C32635 * C111 +
              (C15165 * C32970 + C15166 * C32963 + (C15164 + C15163) * C32950 +
               (C15104 * C132 - C15105 * C120 - C15104 * C133 + C15098 * C141 +
                C15106 * C476 - C15107 * C475 - C15106 * C477 + C32735 * C478) *
                   C32901) *
                  C32690 * C32649 * C32635 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
                C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                   C32970 +
               (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
                  C32690 * C32649 * C240 -
              ((C15106 * C270 - C15107 * C252 - C15106 * C271 + C32735 * C282 +
                C15104 * C256 - C15105 * C245 - C15104 * C257 + C15098 * C275) *
                   C32901 +
               (C15106 * C268 - C15107 * C251 - C15106 * C269 + C32735 * C281 +
                C15104 * C258 - C15105 * C246 - C15104 * C259 + C15098 * C276) *
                   C32950 +
               (C15106 * C266 - C15107 * C250 - C15106 * C267 + C32735 * C280 +
                C15104 * C260 - C15105 * C247 - C15104 * C261 + C15098 * C277) *
                   C32963 +
               (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
                C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                   C32970) *
                  C32690 * C32649 * C241 +
              ((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
                C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
                C32735 * C1042) *
                   C32970 +
               (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
                C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
                C32735 * C1041) *
                   C32963 +
               (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
                C15106 * C1028 - C15107 * C1022 - C15106 * C1029 +
                C32735 * C1040) *
                   C32950 +
               (C15104 * C270 - C15105 * C252 - C15104 * C271 + C15098 * C282 +
                C15106 * C1339 - C15107 * C1338 - C15106 * C1340 +
                C32735 * C1341) *
                   C32901) *
                  C32690 * C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C346 -
          ((C15106 * C716 - C15107 * C708 - C15106 * C717 + C32735 * C723 +
            C15104 * C361 - C15105 * C350 - C15104 * C362 + C15098 * C380) *
               C32901 +
           (C15106 * C714 - C15107 * C707 - C15106 * C715 + C32735 * C722 +
            C15104 * C363 - C15105 * C351 - C15104 * C364 + C15098 * C381) *
               C32950 +
           (C15106 * C712 - C15107 * C706 - C15106 * C713 + C32735 * C721 +
            C15104 * C365 - C15105 * C352 - C15104 * C366 + C15098 * C382) *
               C32963 +
           (C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720 +
            C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383) *
               C32970) *
              C32690 * C347 +
          ((C15104 * C369 - C15105 * C354 - C15104 * C370 + C15098 * C384 +
            C15106 * C1171 - C15107 * C1159 - C15106 * C1172 + C32735 * C1186) *
               C32970 +
           (C15104 * C371 - C15105 * C355 - C15104 * C372 + C15098 * C385 +
            C15106 * C1175 - C15107 * C1161 - C15106 * C1176 + C32735 * C1188) *
               C32963 +
           (C15104 * C373 - C15105 * C356 - C15104 * C374 + C15098 * C386 +
            C15106 * C1179 - C15107 * C1163 - C15106 * C1180 + C32735 * C1190) *
               C32950 +
           (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
            C15106 * C2305 - C15107 * C2304 - C15106 * C2306 + C32735 * C2307) *
               C32901) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C16001 + C16002 + C16003 + C16004) * C32598 +
           (C16000 + C15999 + C15998 + C15997) * C15938) *
              C32690 * C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C15938 +
           (C15940 * C128 - C15941 * C118 - C15940 * C129 + C32971 * C139 +
            C15942 * C256 - C15943 * C245 - C15942 * C257 + C32967 * C275 +
            C15944 * C270 - C15945 * C252 - C15944 * C271 + C32957 * C282 +
            C15946 * C1339 - C15947 * C1338 - C15946 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C240 -
          ((C15946 * C1036 - C15947 * C1026 - C15946 * C1037 + C32909 * C1044 +
            C15944 * C1030 - C15945 * C1023 - C15944 * C1031 + C32957 * C1041 +
            C15942 * C266 - C15943 * C250 - C15942 * C267 + C32967 * C280 +
            C15940 * C260 - C15941 * C247 - C15940 * C261 + C32971 * C277) *
               C32598 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C15938) *
              C32690 * C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C15938 +
           (C15940 * C266 - C15941 * C250 - C15940 * C267 + C32971 * C280 +
            C15942 * C1030 - C15943 * C1023 - C15942 * C1031 + C32967 * C1041 +
            C15944 * C1036 - C15945 * C1026 - C15944 * C1037 + C32957 * C1044 +
            C15946 * C6571 - C15947 * C6570 - C15946 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C346 -
          ((C15946 * C1727 - C15947 * C1723 - C15946 * C1728 + C32909 * C1732 +
            C15944 * C1167 - C15945 * C1157 - C15944 * C1168 + C32957 * C1184 +
            C15942 * C712 - C15943 * C706 - C15942 * C713 + C32967 * C721 +
            C15940 * C365 - C15941 * C352 - C15940 * C366 + C32971 * C382) *
               C32598 +
           (C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383) *
               C15938) *
              C32690 * C347 +
          ((C15940 * C369 - C15941 * C354 - C15940 * C370 + C32971 * C384 +
            C15942 * C1171 - C15943 * C1159 - C15942 * C1172 + C32967 * C1186 +
            C15944 * C1173 - C15945 * C1160 - C15944 * C1174 + C32957 * C1187 +
            C15946 * C6481 - C15947 * C6477 - C15946 * C6482 + C32909 * C6486) *
               C15938 +
           (C15940 * C371 - C15941 * C355 - C15940 * C372 + C32971 * C385 +
            C15942 * C1175 - C15943 * C1161 - C15942 * C1176 + C32967 * C1188 +
            C15944 * C1177 - C15945 * C1162 - C15944 * C1178 + C32957 * C1189 +
            C15946 * C7301 - C15947 * C7300 - C15946 * C7302 + C32909 * C7303) *
               C32598) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C15938 +
            (C15157 + C15158) * C32598) *
               C32965 +
           ((C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383 +
             C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720) *
                C15938 +
            (C15706 + C15705) * C32598) *
               C32954 +
           ((C15104 * C369 - C15105 * C354 - C15104 * C370 + C15098 * C384 +
             C15106 * C1171 - C15107 * C1159 - C15106 * C1172 +
             C32735 * C1186) *
                C15938 +
            (C16817 + C16818) * C32598) *
               C32935) *
              C32649 * C32635 * C110 -
          (((C16819 + C16820) * C32598 + (C16818 + C16817) * C15938) * C32935 +
           ((C15703 + C15704) * C32598 + (C15705 + C15706) * C15938) * C32954 +
           ((C15160 + C15159) * C32598 + (C15158 + C15157) * C15938) * C32965) *
              C32649 * C32635 * C111 +
          ((C15165 * C15938 + C15166 * C32598) * C32965 +
           ((C15704 + C15703) * C15938 + (C15702 + C15701) * C32598) * C32954 +
           ((C16820 + C16819) * C15938 +
            (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
             C15106 * C2305 - C15107 * C2304 - C15106 * C2306 +
             C32735 * C2307) *
                C32598) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C15938 +
            (C15157 + C15158) * C32598) *
               C32965 +
           ((C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383 +
             C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720) *
                C15938 +
            (C15706 + C15705) * C32598) *
               C32954 +
           ((C15104 * C369 - C15105 * C354 - C15104 * C370 + C15098 * C384 +
             C15106 * C1171 - C15107 * C1159 - C15106 * C1172 +
             C32735 * C1186) *
                C15938 +
            (C16817 + C16818) * C32598) *
               C32935) *
              C32649 * C240 -
          (((C15106 * C1177 - C15107 * C1162 - C15106 * C1178 + C32735 * C1189 +
             C15104 * C1175 - C15105 * C1161 - C15104 * C1176 +
             C15098 * C1188) *
                C32598 +
            (C15106 * C1173 - C15107 * C1160 - C15106 * C1174 + C32735 * C1187 +
             C15104 * C1171 - C15105 * C1159 - C15104 * C1172 +
             C15098 * C1186) *
                C15938) *
               C32935 +
           ((C15106 * C1167 - C15107 * C1157 - C15106 * C1168 + C32735 * C1184 +
             C15104 * C712 - C15105 * C706 - C15104 * C713 + C15098 * C721) *
                C32598 +
            (C15106 * C1169 - C15107 * C1158 - C15106 * C1170 + C32735 * C1185 +
             C15104 * C710 - C15105 * C705 - C15104 * C711 + C15098 * C720) *
                C15938) *
               C32954 +
           ((C15533 + C15534) * C32598 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C15938) *
               C32965) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C15938 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32598) *
               C32965 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C15938 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32598) *
               C32954 +
           ((C15104 * C1173 - C15105 * C1160 - C15104 * C1174 + C15098 * C1187 +
             C15106 * C6481 - C15107 * C6477 - C15106 * C6482 +
             C32735 * C6486) *
                C15938 +
            (C15104 * C1177 - C15105 * C1162 - C15104 * C1178 + C15098 * C1189 +
             C15106 * C7301 - C15107 * C7300 - C15106 * C7302 +
             C32735 * C7303) *
                C32598) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C15938 +
            (C15157 + C15158) * C32598) *
               C32965 +
           ((C17163 + C17164) * C15938 + (C15706 + C15705) * C32598) * C32954 +
           C17173 * C32935) *
              C346 -
          (((C17167 + C17168) * C32598 + (C17169 + C17170) * C15938) * C32935 +
           ((C16818 + C16817) * C32598 + (C17166 + C17165) * C15938) * C32954 +
           ((C15705 + C15706) * C32598 + (C17164 + C17163) * C15938) * C32965) *
              C347 +
          (C17173 * C32965 +
           ((C17170 + C17169) * C15938 + (C17168 + C17167) * C32598) * C32954 +
           ((C15104 * C2100 - C15105 * C2091 - C15104 * C2101 + C15098 * C2109 +
             C15106 * C7081 - C15107 * C7077 - C15106 * C7082 +
             C32735 * C7086) *
                C15938 +
            (C15104 * C2102 - C15105 * C2092 - C15104 * C2103 + C15098 * C2110 +
             C15106 * C12282 - C15107 * C12281 - C15106 * C12283 +
             C32735 * C12284) *
                C32598) *
               C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C15938 +
            (C15997 + C15998 + C15999 + C16000) * C32598) *
               C32690 * C589 -
           ((C16513 + C16514 + C16515 + C16516) * C32598 +
            (C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731 +
             C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
             C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
             C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383) *
                C15938) *
               C32690 * C590) *
              C32635 * C473 +
          (((C16516 + C16515 + C16514 + C16513) * C15938 +
            (C15940 * C363 - C15941 * C351 - C15940 * C364 + C32971 * C381 +
             C15942 * C714 - C15943 * C707 - C15942 * C715 + C32967 * C722 +
             C15944 * C1165 - C15945 * C1156 - C15944 * C1166 + C32957 * C1183 +
             C15946 * C1729 - C15947 * C1724 - C15946 * C1730 +
             C32909 * C1733) *
                C32598) *
               C32690 * C590 -
           ((C16001 + C16002 + C16003 + C16004) * C32598 +
            (C16000 + C15999 + C15998 + C15997) * C15938) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32970 +
            (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
               C32690 * C589 -
           ((C15701 + C15702) * C32901 + (C15703 + C15704) * C32950 +
            (C15705 + C15706) * C32963 +
            (C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720 +
             C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383) *
                C32970) *
               C32690 * C590) *
              C32635 * C473 +
          (((C15706 + C15705) * C32970 + (C15704 + C15703) * C32963 +
            (C15702 + C15701) * C32950 +
            (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
             C15106 * C718 - C15107 * C709 - C15106 * C719 + C32735 * C724) *
                C32901) *
               C32690 * C590 -
           ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
            (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C15938 +
             (C15157 + C15158) * C32598) *
                C32965 +
            ((C17163 + C17164) * C15938 + C17590 * C32598) * C32954 +
            C17173 * C32935) *
               C589 -
           (((C17167 + C17168) * C32598 + (C17169 + C17170) * C15938) * C32935 +
            (C17591 * C32598 + (C17166 + C17165) * C15938) * C32954 +
            (C17592 * C32598 + (C17164 + C17163) * C15938) * C32965) *
               C590) *
              C32635 * C473 +
          (((C17590 * C15938 + (C15704 + C15703) * C32598) * C32965 +
            (C17129 * C15938 + (C16820 + C16819) * C32598) * C32954 +
            ((C17168 + C17167) * C15938 +
             (C15104 * C2094 - C15105 * C2088 - C15104 * C2095 +
              C15098 * C2106 + C15106 * C2645 - C15107 * C2640 -
              C15106 * C2646 + C32735 * C2649) *
                 C32598) *
                C32935) *
               C590 -
           (((C16819 + C16820) * C32598 + C17591 * C15938) * C32935 +
            ((C15703 + C15704) * C32598 + C17592 * C15938) * C32954 +
            ((C15160 + C15159) * C32598 + (C15158 + C15157) * C15938) *
                C32965) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C32649 * C240 -
          ((C15106 * C270 - C15107 * C252 - C15106 * C271 + C32735 * C282 +
            C15104 * C256 - C15105 * C245 - C15104 * C257 + C15098 * C275) *
               C32901 +
           (C15106 * C268 - C15107 * C251 - C15106 * C269 + C32735 * C281 +
            C15104 * C258 - C15105 * C246 - C15104 * C259 + C15098 * C276) *
               C32950 +
           (C15106 * C266 - C15107 * C250 - C15106 * C267 + C32735 * C280 +
            C15104 * C260 - C15105 * C247 - C15104 * C261 + C15098 * C277) *
               C32963 +
           (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
            C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
               C32970) *
              C32690 * C32649 * C241 +
          ((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
            C15106 * C1032 - C15107 * C1024 - C15106 * C1033 + C32735 * C1042) *
               C32970 +
           (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
            C15106 * C1030 - C15107 * C1023 - C15106 * C1031 + C32735 * C1041) *
               C32963 +
           (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
            C15106 * C1028 - C15107 * C1022 - C15106 * C1029 + C32735 * C1040) *
               C32950 +
           (C15104 * C270 - C15105 * C252 - C15104 * C271 + C15098 * C282 +
            C15106 * C1339 - C15107 * C1338 - C15106 * C1340 + C32735 * C1341) *
               C32901) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C32649 * C32635 * C110 -
          ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
           (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
              C32690 * C32649 * C32635 * C111 +
          (C15165 * C32970 + C15166 * C32963 + (C15164 + C15163) * C32950 +
           (C15104 * C132 - C15105 * C120 - C15104 * C133 + C15098 * C141 +
            C15106 * C476 - C15107 * C475 - C15106 * C477 + C32735 * C478) *
               C32901) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C16001 + C16002 + C16003 + C16004) * C32598 +
           (C16000 + C15999 + C15998 + C15997) * C15938) *
              C32690 * C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C15938 +
           (C15940 * C128 - C15941 * C118 - C15940 * C129 + C32971 * C139 +
            C15942 * C256 - C15943 * C245 - C15942 * C257 + C32967 * C275 +
            C15944 * C270 - C15945 * C252 - C15944 * C271 + C32957 * C282 +
            C15946 * C1339 - C15947 * C1338 - C15946 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C240 -
          ((C15946 * C1036 - C15947 * C1026 - C15946 * C1037 + C32909 * C1044 +
            C15944 * C1030 - C15945 * C1023 - C15944 * C1031 + C32957 * C1041 +
            C15942 * C266 - C15943 * C250 - C15942 * C267 + C32967 * C280 +
            C15940 * C260 - C15941 * C247 - C15940 * C261 + C32971 * C277) *
               C32598 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C15938) *
              C32690 * C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C15938 +
           (C15940 * C266 - C15941 * C250 - C15940 * C267 + C32971 * C280 +
            C15942 * C1030 - C15943 * C1023 - C15942 * C1031 + C32967 * C1041 +
            C15944 * C1036 - C15945 * C1026 - C15944 * C1037 + C32957 * C1044 +
            C15946 * C6571 - C15947 * C6570 - C15946 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C15938 +
            (C15157 + C15158) * C32598) *
               C32965 +
           ((C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383 +
             C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720) *
                C15938 +
            (C15706 + C15705) * C32598) *
               C32954 +
           ((C15104 * C369 - C15105 * C354 - C15104 * C370 + C15098 * C384 +
             C15106 * C1171 - C15107 * C1159 - C15106 * C1172 +
             C32735 * C1186) *
                C15938 +
            (C16817 + C16818) * C32598) *
               C32935) *
              C32649 * C32635 * C110 -
          (((C16819 + C16820) * C32598 + (C16818 + C16817) * C15938) * C32935 +
           ((C15703 + C15704) * C32598 + (C15705 + C15706) * C15938) * C32954 +
           ((C15160 + C15159) * C32598 + (C15158 + C15157) * C15938) * C32965) *
              C32649 * C32635 * C111 +
          ((C15165 * C15938 + C15166 * C32598) * C32965 +
           ((C15704 + C15703) * C15938 + (C15702 + C15701) * C32598) * C32954 +
           ((C16820 + C16819) * C15938 +
            (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
             C15106 * C2305 - C15107 * C2304 - C15106 * C2306 +
             C32735 * C2307) *
                C32598) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C15938 +
            (C15157 + C15158) * C32598) *
               C32965 +
           ((C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383 +
             C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720) *
                C15938 +
            (C15706 + C15705) * C32598) *
               C32954 +
           ((C15104 * C369 - C15105 * C354 - C15104 * C370 + C15098 * C384 +
             C15106 * C1171 - C15107 * C1159 - C15106 * C1172 +
             C32735 * C1186) *
                C15938 +
            (C16817 + C16818) * C32598) *
               C32935) *
              C32649 * C240 -
          (((C15106 * C1177 - C15107 * C1162 - C15106 * C1178 + C32735 * C1189 +
             C15104 * C1175 - C15105 * C1161 - C15104 * C1176 +
             C15098 * C1188) *
                C32598 +
            (C15106 * C1173 - C15107 * C1160 - C15106 * C1174 + C32735 * C1187 +
             C15104 * C1171 - C15105 * C1159 - C15104 * C1172 +
             C15098 * C1186) *
                C15938) *
               C32935 +
           ((C15106 * C1167 - C15107 * C1157 - C15106 * C1168 + C32735 * C1184 +
             C15104 * C712 - C15105 * C706 - C15104 * C713 + C15098 * C721) *
                C32598 +
            (C15106 * C1169 - C15107 * C1158 - C15106 * C1170 + C32735 * C1185 +
             C15104 * C710 - C15105 * C705 - C15104 * C711 + C15098 * C720) *
                C15938) *
               C32954 +
           ((C15533 + C15534) * C32598 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C15938) *
               C32965) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C15938 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32598) *
               C32965 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C15938 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32598) *
               C32954 +
           ((C15104 * C1173 - C15105 * C1160 - C15104 * C1174 + C15098 * C1187 +
             C15106 * C6481 - C15107 * C6477 - C15106 * C6482 +
             C32735 * C6486) *
                C15938 +
            (C15104 * C1177 - C15105 * C1162 - C15104 * C1178 + C15098 * C1189 +
             C15106 * C7301 - C15107 * C7300 - C15106 * C7302 +
             C32735 * C7303) *
                C32598) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[15] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32593 +
             (C15157 + C15158) * C32601 + C15165 * C17929) *
                C32902 +
            ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
                C32777) *
               C32649 * C471 -
           (((C19389 + C19390) * C17929 + (C17394 + C17395) * C32601 +
             (C17812 + C17811) * C32593) *
                C32777 +
            ((C15531 + C15532) * C17929 + (C15533 + C15534) * C32601 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32593) *
                C32902) *
               C32649 * C472) *
              C473 +
          ((((C15534 + C15533) * C32593 + (C15532 + C15531) * C32601 +
             (C15530 + C15529) * C17929) *
                C32902 +
            ((C17395 + C17394) * C32593 + (C19390 + C19389) * C32601 +
             (C15104 * C716 - C15105 * C708 - C15104 * C717 + C15098 * C723 +
              C15106 * C1531 - C15107 * C1530 - C15106 * C1532 +
              C32735 * C1533) *
                 C17929) *
                C32777) *
               C32649 * C472 -
           (((C15701 + C15702) * C17929 + (C15703 + C15704) * C32601 +
             C17592 * C32593) *
                C32777 +
            ((C15162 + C15161) * C17929 + (C15160 + C15159) * C32601 +
             (C15158 + C15157) * C32593) *
                C32902) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32593 +
             (C15157 + C15158) * C32601 + C15165 * C17929) *
                C32902 +
            ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
                C32777) *
               C589 -
           (((C16819 + C16820) * C17929 + C17591 * C32601 +
             (C17166 + C17165) * C32593) *
                C32777 +
            (C19585 * C17929 + C17592 * C32601 + (C17164 + C17163) * C32593) *
                C32902) *
               C590) *
              C471 +
          ((((C17811 + C17812) * C32593 + (C17395 + C17394) * C32601 +
             (C19390 + C19389) * C17929) *
                C32902 +
            ((C17813 + C17814) * C32593 + (C17393 + C17392) * C32601 +
             (C15104 * C1179 - C15105 * C1163 - C15104 * C1180 +
              C15098 * C1190 + C15106 * C1181 - C15107 * C1164 -
              C15106 * C1182 + C32735 * C1191) *
                 C17929) *
                C32777) *
               C590 -
           (((C19389 + C19390) * C17929 + (C17394 + C17395) * C32601 +
             (C17812 + C17811) * C32593) *
                C32777 +
            ((C15531 + C15532) * C17929 + (C15533 + C15534) * C32601 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32593) *
                C32902) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32593 +
            (C15157 + C15158) * C32601 + C15165 * C17929) *
               C32902 +
           ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
               C32777) *
              C32649 * C240 -
          (((C15106 * C1165 - C15107 * C1156 - C15106 * C1166 + C32735 * C1183 +
             C15104 * C714 - C15105 * C707 - C15104 * C715 + C15098 * C722) *
                C17929 +
            (C17394 + C17395) * C32601 + (C17812 + C17811) * C32593) *
               C32777 +
           ((C15531 + C15532) * C17929 + (C15533 + C15534) * C32601 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32593) *
               C32902) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C32593 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32601 +
            (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
             C15106 * C1028 - C15107 * C1022 - C15106 * C1029 +
             C32735 * C1040) *
                C17929) *
               C32902 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C32593 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32601 +
            (C15104 * C1165 - C15105 * C1156 - C15104 * C1166 + C15098 * C1183 +
             C15106 * C1729 - C15107 * C1724 - C15106 * C1730 +
             C32735 * C1733) *
                C17929) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32593 +
            (C15157 + C15158) * C32601 + C15165 * C17929) *
               C32902 +
           ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C15701 + C15702) * C17929 + (C15703 + C15704) * C32601 +
            C17592 * C32593) *
               C32777 +
           ((C15162 + C15161) * C17929 + (C15160 + C15159) * C32601 +
            (C15158 + C15157) * C32593) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C15165 * C32593 + C15166 * C32601 + (C15164 + C15163) * C17929) *
               C32902 +
           (C18890 * C32593 + (C15702 + C15701) * C32601 +
            (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
             C15106 * C718 - C15107 * C709 - C15106 * C719 + C32735 * C724) *
                C17929) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32593 +
            (C15157 + C15158) * C32601 + C15165 * C17929) *
               C32902 +
           ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
               C32777) *
              C346 -
          (((C16819 + C16820) * C17929 + C17591 * C32601 +
            (C17166 + C17165) * C32593) *
               C32777 +
           ((C15703 + C15704) * C17929 + C17592 * C32601 +
            (C17164 + C17163) * C32593) *
               C32902) *
              C347 +
          ((C17171 * C32593 + C17129 * C32601 + (C16820 + C16819) * C17929) *
               C32902 +
           ((C17170 + C17169) * C32593 + (C17168 + C17167) * C32601 +
            (C15104 * C2094 - C15105 * C2088 - C15104 * C2095 + C15098 * C2106 +
             C15106 * C2645 - C15107 * C2640 - C15106 * C2646 +
             C32735 * C2649) *
                C17929) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[18] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32593 +
             (C15157 + C15158) * C32601 + C15165 * C17929) *
                C32902 +
            ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
                C32777) *
               C589 -
           (((C16819 + C16820) * C17929 + C17591 * C32601 +
             (C17166 + C17165) * C32593) *
                C32777 +
            (C19585 * C17929 + C17592 * C32601 + (C17164 + C17163) * C32593) *
                C32902) *
               C590) *
              C32635 * C473 +
          (((C17590 * C32593 + C18890 * C32601 + (C15702 + C15701) * C17929) *
                C32902 +
            (C17129 * C32593 + (C16820 + C16819) * C32601 +
             (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
              C15106 * C2305 - C15107 * C2304 - C15106 * C2306 +
              C32735 * C2307) *
                 C17929) *
                C32777) *
               C590 -
           (((C15701 + C15702) * C17929 + C19585 * C32601 + C17592 * C32593) *
                C32777 +
            ((C15162 + C15161) * C17929 + (C15160 + C15159) * C32601 +
             (C15158 + C15157) * C32593) *
                C32902) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32593 +
            (C15157 + C15158) * C32601 + C15165 * C17929) *
               C32902 +
           ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C15701 + C15702) * C17929 + (C15703 + C15704) * C32601 +
            C17592 * C32593) *
               C32777 +
           ((C15162 + C15161) * C17929 + (C15160 + C15159) * C32601 +
            (C15158 + C15157) * C32593) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C15165 * C32593 + C15166 * C32601 + (C15164 + C15163) * C17929) *
               C32902 +
           (C18890 * C32593 + (C15702 + C15701) * C32601 +
            (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
             C15106 * C718 - C15107 * C709 - C15106 * C719 + C32735 * C724) *
                C17929) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32593 +
            (C15157 + C15158) * C32601 + C15165 * C17929) *
               C32902 +
           ((C17163 + C17164) * C32593 + C17590 * C32601 + C18890 * C17929) *
               C32777) *
              C32649 * C240 -
          (((C15106 * C1165 - C15107 * C1156 - C15106 * C1166 + C32735 * C1183 +
             C15104 * C714 - C15105 * C707 - C15104 * C715 + C15098 * C722) *
                C17929 +
            (C17394 + C17395) * C32601 + (C17812 + C17811) * C32593) *
               C32777 +
           ((C15531 + C15532) * C17929 + (C15533 + C15534) * C32601 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32593) *
               C32902) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C32593 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32601 +
            (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
             C15106 * C1028 - C15107 * C1022 - C15106 * C1029 +
             C32735 * C1040) *
                C17929) *
               C32902 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C32593 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32601 +
            (C15104 * C1165 - C15105 * C1156 - C15104 * C1166 + C15098 * C1183 +
             C15106 * C1729 - C15107 * C1724 - C15106 * C1730 +
             C32735 * C1733) *
                C17929) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[20] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32970 +
            (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
               C32690 * C32649 * C471 -
           ((C15529 + C15530) * C32901 + (C15531 + C15532) * C32950 +
            (C15533 + C15534) * C32963 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32970) *
               C32690 * C32649 * C472) *
              C473 +
          (((C15534 + C15533) * C32970 + (C15532 + C15531) * C32963 +
            (C15530 + C15529) * C32950 +
            (C15104 * C254 - C15105 * C244 - C15104 * C255 + C15098 * C274 +
             C15106 * C272 - C15107 * C253 - C15106 * C273 + C32735 * C283) *
                C32901) *
               C32690 * C32649 * C472 -
           ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
            (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C15938 +
            (C15997 + C15998 + C15999 + C16000) * C32598) *
               C32690 * C32649 * C471 -
           ((C16355 + C16356 + C16357 + C16358) * C32598 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C15938) *
               C32690 * C32649 * C472) *
              C473 +
          (((C16358 + C16357 + C16356 + C16355) * C15938 +
            (C15940 * C258 - C15941 * C246 - C15940 * C259 + C32971 * C276 +
             C15942 * C268 - C15943 * C251 - C15942 * C269 + C32967 * C281 +
             C15944 * C1028 - C15945 * C1022 - C15944 * C1029 + C32957 * C1040 +
             C15946 * C1038 - C15947 * C1027 - C15946 * C1039 +
             C32909 * C1045) *
                C32598) *
               C32690 * C32649 * C472 -
           ((C16001 + C16002 + C16003 + C16004) * C32598 +
            (C16000 + C15999 + C15998 + C15997) * C15938) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32970 +
            (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
               C32690 * C589 -
           ((C15701 + C15702) * C32901 + (C15703 + C15704) * C32950 +
            (C15705 + C15706) * C32963 +
            (C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720 +
             C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383) *
                C32970) *
               C32690 * C590) *
              C471 +
          (((C15104 * C710 - C15105 * C705 - C15104 * C711 + C15098 * C720 +
             C15106 * C1169 - C15107 * C1158 - C15106 * C1170 +
             C32735 * C1185) *
                C32970 +
            (C15104 * C712 - C15105 * C706 - C15104 * C713 + C15098 * C721 +
             C15106 * C1167 - C15107 * C1157 - C15106 * C1168 +
             C32735 * C1184) *
                C32963 +
            (C15104 * C714 - C15105 * C707 - C15104 * C715 + C15098 * C722 +
             C15106 * C1165 - C15107 * C1156 - C15106 * C1166 +
             C32735 * C1183) *
                C32950 +
            (C15104 * C716 - C15105 * C708 - C15104 * C717 + C15098 * C723 +
             C15106 * C1531 - C15107 * C1530 - C15106 * C1532 +
             C32735 * C1533) *
                C32901) *
               C32690 * C590 -
           ((C15529 + C15530) * C32901 + (C15531 + C15532) * C32950 +
            (C15533 + C15534) * C32963 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32970) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C15938 +
            (C15997 + C15998 + C15999 + C16000) * C32598) *
               C32690 * C589 -
           ((C16513 + C16514 + C16515 + C16516) * C32598 +
            (C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731 +
             C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
             C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
             C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383) *
                C15938) *
               C32690 * C590) *
              C471 +
          (((C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720 +
             C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
             C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
             C15946 * C6479 - C15947 * C6476 - C15946 * C6480 +
             C32909 * C6485) *
                C15938 +
            (C15940 * C712 - C15941 * C706 - C15940 * C713 + C32971 * C721 +
             C15942 * C1167 - C15943 * C1157 - C15942 * C1168 + C32967 * C1184 +
             C15944 * C1727 - C15945 * C1723 - C15944 * C1728 + C32957 * C1732 +
             C15946 * C6657 - C15947 * C6656 - C15946 * C6658 +
             C32909 * C6659) *
                C32598) *
               C32690 * C590 -
           ((C16355 + C16356 + C16357 + C16358) * C32598 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C15938) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C32649 * C240 -
          ((C15106 * C270 - C15107 * C252 - C15106 * C271 + C32735 * C282 +
            C15104 * C256 - C15105 * C245 - C15104 * C257 + C15098 * C275) *
               C32901 +
           (C15106 * C268 - C15107 * C251 - C15106 * C269 + C32735 * C281 +
            C15104 * C258 - C15105 * C246 - C15104 * C259 + C15098 * C276) *
               C32950 +
           (C15106 * C266 - C15107 * C250 - C15106 * C267 + C32735 * C280 +
            C15104 * C260 - C15105 * C247 - C15104 * C261 + C15098 * C277) *
               C32963 +
           (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
            C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
               C32970) *
              C32690 * C32649 * C241 +
          ((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
            C15106 * C1032 - C15107 * C1024 - C15106 * C1033 + C32735 * C1042) *
               C32970 +
           (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
            C15106 * C1030 - C15107 * C1023 - C15106 * C1031 + C32735 * C1041) *
               C32963 +
           (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
            C15106 * C1028 - C15107 * C1022 - C15106 * C1029 + C32735 * C1040) *
               C32950 +
           (C15104 * C270 - C15105 * C252 - C15104 * C271 + C15098 * C282 +
            C15106 * C1339 - C15107 * C1338 - C15106 * C1340 + C32735 * C1341) *
               C32901) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C32649 * C32635 * C110 -
          ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
           (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
              C32690 * C32649 * C32635 * C111 +
          (C15165 * C32970 + C15166 * C32963 + (C15164 + C15163) * C32950 +
           (C15104 * C132 - C15105 * C120 - C15104 * C133 + C15098 * C141 +
            C15106 * C476 - C15107 * C475 - C15106 * C477 + C32735 * C478) *
               C32901) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C346 -
          ((C15106 * C716 - C15107 * C708 - C15106 * C717 + C32735 * C723 +
            C15104 * C361 - C15105 * C350 - C15104 * C362 + C15098 * C380) *
               C32901 +
           (C15106 * C714 - C15107 * C707 - C15106 * C715 + C32735 * C722 +
            C15104 * C363 - C15105 * C351 - C15104 * C364 + C15098 * C381) *
               C32950 +
           (C15106 * C712 - C15107 * C706 - C15106 * C713 + C32735 * C721 +
            C15104 * C365 - C15105 * C352 - C15104 * C366 + C15098 * C382) *
               C32963 +
           (C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720 +
            C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383) *
               C32970) *
              C32690 * C347 +
          ((C15104 * C369 - C15105 * C354 - C15104 * C370 + C15098 * C384 +
            C15106 * C1171 - C15107 * C1159 - C15106 * C1172 + C32735 * C1186) *
               C32970 +
           (C15104 * C371 - C15105 * C355 - C15104 * C372 + C15098 * C385 +
            C15106 * C1175 - C15107 * C1161 - C15106 * C1176 + C32735 * C1188) *
               C32963 +
           (C15104 * C373 - C15105 * C356 - C15104 * C374 + C15098 * C386 +
            C15106 * C1179 - C15107 * C1163 - C15106 * C1180 + C32735 * C1190) *
               C32950 +
           (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
            C15106 * C2305 - C15107 * C2304 - C15106 * C2306 + C32735 * C2307) *
               C32901) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C16001 + C16002 + C16003 + C16004) * C32598 +
           (C16000 + C15999 + C15998 + C15997) * C15938) *
              C32690 * C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C15938 +
           (C15940 * C128 - C15941 * C118 - C15940 * C129 + C32971 * C139 +
            C15942 * C256 - C15943 * C245 - C15942 * C257 + C32967 * C275 +
            C15944 * C270 - C15945 * C252 - C15944 * C271 + C32957 * C282 +
            C15946 * C1339 - C15947 * C1338 - C15946 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C240 -
          ((C15946 * C1036 - C15947 * C1026 - C15946 * C1037 + C32909 * C1044 +
            C15944 * C1030 - C15945 * C1023 - C15944 * C1031 + C32957 * C1041 +
            C15942 * C266 - C15943 * C250 - C15942 * C267 + C32967 * C280 +
            C15940 * C260 - C15941 * C247 - C15940 * C261 + C32971 * C277) *
               C32598 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C15938) *
              C32690 * C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C15938 +
           (C15940 * C266 - C15941 * C250 - C15940 * C267 + C32971 * C280 +
            C15942 * C1030 - C15943 * C1023 - C15942 * C1031 + C32967 * C1041 +
            C15944 * C1036 - C15945 * C1026 - C15944 * C1037 + C32957 * C1044 +
            C15946 * C6571 - C15947 * C6570 - C15946 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C346 -
          ((C15946 * C1727 - C15947 * C1723 - C15946 * C1728 + C32909 * C1732 +
            C15944 * C1167 - C15945 * C1157 - C15944 * C1168 + C32957 * C1184 +
            C15942 * C712 - C15943 * C706 - C15942 * C713 + C32967 * C721 +
            C15940 * C365 - C15941 * C352 - C15940 * C366 + C32971 * C382) *
               C32598 +
           (C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383) *
               C15938) *
              C32690 * C347 +
          ((C15940 * C369 - C15941 * C354 - C15940 * C370 + C32971 * C384 +
            C15942 * C1171 - C15943 * C1159 - C15942 * C1172 + C32967 * C1186 +
            C15944 * C1173 - C15945 * C1160 - C15944 * C1174 + C32957 * C1187 +
            C15946 * C6481 - C15947 * C6477 - C15946 * C6482 + C32909 * C6486) *
               C15938 +
           (C15940 * C371 - C15941 * C355 - C15940 * C372 + C32971 * C385 +
            C15942 * C1175 - C15943 * C1161 - C15942 * C1176 + C32967 * C1188 +
            C15944 * C1177 - C15945 * C1162 - C15944 * C1178 + C32957 * C1189 +
            C15946 * C7301 - C15947 * C7300 - C15946 * C7302 + C32909 * C7303) *
               C32598) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32970 +
            (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
               C32690 * C589 -
           ((C15701 + C15702) * C32901 + (C15703 + C15704) * C32950 +
            (C15705 + C15706) * C32963 +
            (C15106 * C710 - C15107 * C705 - C15106 * C711 + C32735 * C720 +
             C15104 * C367 - C15105 * C353 - C15104 * C368 + C15098 * C383) *
                C32970) *
               C32690 * C590) *
              C32635 * C473 +
          (((C15706 + C15705) * C32970 + (C15704 + C15703) * C32963 +
            (C15702 + C15701) * C32950 +
            (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
             C15106 * C718 - C15107 * C709 - C15106 * C719 + C32735 * C724) *
                C32901) *
               C32690 * C590 -
           ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
            (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C15938 +
            (C15997 + C15998 + C15999 + C16000) * C32598) *
               C32690 * C589 -
           ((C16513 + C16514 + C16515 + C16516) * C32598 +
            (C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731 +
             C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
             C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
             C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383) *
                C15938) *
               C32690 * C590) *
              C32635 * C473 +
          (((C16516 + C16515 + C16514 + C16513) * C15938 +
            (C15940 * C363 - C15941 * C351 - C15940 * C364 + C32971 * C381 +
             C15942 * C714 - C15943 * C707 - C15942 * C715 + C32967 * C722 +
             C15944 * C1165 - C15945 * C1156 - C15944 * C1166 + C32957 * C1183 +
             C15946 * C1729 - C15947 * C1724 - C15946 * C1730 +
             C32909 * C1733) *
                C32598) *
               C32690 * C590 -
           ((C16001 + C16002 + C16003 + C16004) * C32598 +
            (C16000 + C15999 + C15998 + C15997) * C15938) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[24] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C32649 * C32635 * C110 -
          ((C15163 + C15164) * C32901 + (C15162 + C15161) * C32950 +
           (C15160 + C15159) * C32963 + (C15158 + C15157) * C32970) *
              C32690 * C32649 * C32635 * C111 +
          (C15165 * C32970 + C15166 * C32963 + (C15164 + C15163) * C32950 +
           (C15104 * C132 - C15105 * C120 - C15104 * C133 + C15098 * C141 +
            C15106 * C476 - C15107 * C475 - C15106 * C477 + C32735 * C478) *
               C32901) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32970 +
           (C15157 + C15158) * C32963 + C15165 * C32950 + C15166 * C32901) *
              C32690 * C32649 * C240 -
          ((C15106 * C270 - C15107 * C252 - C15106 * C271 + C32735 * C282 +
            C15104 * C256 - C15105 * C245 - C15104 * C257 + C15098 * C275) *
               C32901 +
           (C15106 * C268 - C15107 * C251 - C15106 * C269 + C32735 * C281 +
            C15104 * C258 - C15105 * C246 - C15104 * C259 + C15098 * C276) *
               C32950 +
           (C15106 * C266 - C15107 * C250 - C15106 * C267 + C32735 * C280 +
            C15104 * C260 - C15105 * C247 - C15104 * C261 + C15098 * C277) *
               C32963 +
           (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
            C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
               C32970) *
              C32690 * C32649 * C241 +
          ((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
            C15106 * C1032 - C15107 * C1024 - C15106 * C1033 + C32735 * C1042) *
               C32970 +
           (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
            C15106 * C1030 - C15107 * C1023 - C15106 * C1031 + C32735 * C1041) *
               C32963 +
           (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
            C15106 * C1028 - C15107 * C1022 - C15106 * C1029 + C32735 * C1040) *
               C32950 +
           (C15104 * C270 - C15105 * C252 - C15104 * C271 + C15098 * C282 +
            C15106 * C1339 - C15107 * C1338 - C15106 * C1340 + C32735 * C1341) *
               C32901) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C16001 + C16002 + C16003 + C16004) * C32598 +
           (C16000 + C15999 + C15998 + C15997) * C15938) *
              C32690 * C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C15938 +
           (C15940 * C128 - C15941 * C118 - C15940 * C129 + C32971 * C139 +
            C15942 * C256 - C15943 * C245 - C15942 * C257 + C32967 * C275 +
            C15944 * C270 - C15945 * C252 - C15944 * C271 + C32957 * C282 +
            C15946 * C1339 - C15947 * C1338 - C15946 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C15938 +
           (C15997 + C15998 + C15999 + C16000) * C32598) *
              C32690 * C32649 * C240 -
          ((C15946 * C1036 - C15947 * C1026 - C15946 * C1037 + C32909 * C1044 +
            C15944 * C1030 - C15945 * C1023 - C15944 * C1031 + C32957 * C1041 +
            C15942 * C266 - C15943 * C250 - C15942 * C267 + C32967 * C280 +
            C15940 * C260 - C15941 * C247 - C15940 * C261 + C32971 * C277) *
               C32598 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C15938) *
              C32690 * C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C15938 +
           (C15940 * C266 - C15941 * C250 - C15940 * C267 + C32971 * C280 +
            C15942 * C1030 - C15943 * C1023 - C15942 * C1031 + C32967 * C1041 +
            C15944 * C1036 - C15945 * C1026 - C15944 * C1037 + C32957 * C1044 +
            C15946 * C6571 - C15947 * C6570 - C15946 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
              C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
              C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                 C32882 +
             (C17991 + C17992 + C17993) * C32598) *
                C21006 +
            ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
               C32649 * C471 -
           (((C20493 + C20494 + C20495) * C32598 +
             (C20908 + C20907 + C20906) * C32882) *
                C32777 +
            ((C18407 + C18408 + C18409) * C32598 +
             (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 +
              C17926 * C1042 + C31668 * C264 - C31703 * C249 - C31668 * C265 +
              C32738 * C279 + C31671 * C262 - C31710 * C248 - C31671 * C263 +
              C32731 * C278) *
                 C32882) *
                C21006) *
               C32649 * C472) *
              C473 +
          ((((C18409 + C18408 + C18407) * C32882 +
             (C18406 + C18405 + C18404) * C32598) *
                C21006 +
            ((C20495 + C20494 + C20493) * C32882 +
             (C31671 * C714 - C31710 * C707 - C31671 * C715 + C32731 * C722 +
              C31668 * C1165 - C31703 * C1156 - C31668 * C1166 +
              C32738 * C1183 + C31716 * C1729 - C17935 * C1724 -
              C31716 * C1730 + C17926 * C1733) *
                 C32598) *
                C32777) *
               C32649 * C472 -
           (((C18592 + C18593 + C18594) * C32598 + C20693 * C32882) * C32777 +
            ((C17996 + C17995 + C17994) * C32598 +
             (C17993 + C17992 + C17991) * C32882) *
                C21006) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
              C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
              C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                 C32882 +
             (C17991 + C17992 + C17993) * C32598) *
                C21006 +
            ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
               C589 -
           (((C20275 + C20276 + C20277) * C32598 +
             (C20278 + C20279 + C20280) * C32882) *
                C32777 +
            (C20693 * C32598 + (C20274 + C20273 + C20272) * C32882) * C21006) *
               C590) *
              C471 +
          ((((C20906 + C20907 + C20908) * C32882 +
             (C20495 + C20494 + C20493) * C32598) *
                C21006 +
            ((C31671 * C1171 - C31710 * C1159 - C31671 * C1172 +
              C32731 * C1186 + C31668 * C1173 - C31703 * C1160 -
              C31668 * C1174 + C32738 * C1187 + C31716 * C6481 -
              C17935 * C6477 - C31716 * C6482 + C17926 * C6486) *
                 C32882 +
             (C31671 * C1175 - C31710 * C1161 - C31671 * C1176 +
              C32731 * C1188 + C31668 * C1177 - C31703 * C1162 -
              C31668 * C1178 + C32738 * C1189 + C31716 * C7301 -
              C17935 * C7300 - C31716 * C7302 + C17926 * C7303) *
                 C32598) *
                C32777) *
               C590 -
           (((C20493 + C20494 + C20495) * C32598 +
             (C20908 + C20907 + C20906) * C32882) *
                C32777 +
            ((C18407 + C18408 + C18409) * C32598 +
             (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 +
              C17926 * C1042 + C31668 * C264 - C31703 * C249 - C31668 * C265 +
              C32738 * C279 + C31671 * C262 - C31710 * C248 - C31671 * C263 +
              C32731 * C278) *
                 C32882) *
                C21006) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32882 +
            (C17991 + C17992 + C17993) * C32598) *
               C21006 +
           ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
              C32649 * C240 -
          (((C20493 + C20494 + C20495) * C32598 +
            (C20908 + C20907 + C20906) * C32882) *
               C32777 +
           ((C18407 + C18408 + C18409) * C32598 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C32882) *
               C21006) *
              C32649 * C241 +
          (((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
             C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
             C31716 * C1034 - C17935 * C1025 - C31716 * C1035 +
             C17926 * C1043) *
                C32882 +
            (C31671 * C266 - C31710 * C250 - C31671 * C267 + C32731 * C280 +
             C31668 * C1030 - C31703 * C1023 - C31668 * C1031 + C32738 * C1041 +
             C31716 * C1036 - C17935 * C1026 - C31716 * C1037 +
             C17926 * C1044) *
                C32598) *
               C21006 +
           ((C31671 * C1169 - C31710 * C1158 - C31671 * C1170 + C32731 * C1185 +
             C31668 * C1725 - C31703 * C1722 - C31668 * C1726 + C32738 * C1731 +
             C31716 * C6479 - C17935 * C6476 - C31716 * C6480 +
             C17926 * C6485) *
                C32882 +
            (C31671 * C1167 - C31710 * C1157 - C31671 * C1168 + C32731 * C1184 +
             C31668 * C1727 - C31703 * C1723 - C31668 * C1728 + C32738 * C1732 +
             C31716 * C6657 - C17935 * C6656 - C31716 * C6658 +
             C17926 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32882 +
            (C17991 + C17992 + C17993) * C32598) *
               C21006 +
           ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
              C32649 * C32635 * C110 -
          (((C18592 + C18593 + C18594) * C32598 + C20693 * C32882) * C32777 +
           ((C17996 + C17995 + C17994) * C32598 +
            (C17993 + C17992 + C17991) * C32882) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C18001 * C32882 + (C17999 + C17998 + C17997) * C32598) * C21006 +
           ((C18594 + C18593 + C18592) * C32882 +
            (C31671 * C361 - C31710 * C350 - C31671 * C362 + C32731 * C380 +
             C31668 * C716 - C31703 * C708 - C31668 * C717 + C32738 * C723 +
             C31716 * C1531 - C17935 * C1530 - C31716 * C1532 +
             C17926 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32882 +
            (C17991 + C17992 + C17993) * C32598) *
               C21006 +
           ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
              C346 -
          (((C20275 + C20276 + C20277) * C32598 +
            (C20278 + C20279 + C20280) * C32882) *
               C32777 +
           (C20693 * C32598 + (C20274 + C20273 + C20272) * C32882) * C21006) *
              C347 +
          (((C20280 + C20279 + C20278) * C32882 +
            (C20277 + C20276 + C20275) * C32598) *
               C21006 +
           ((C31671 * C2098 - C31710 * C2090 - C31671 * C2099 + C32731 * C2108 +
             C31668 * C2641 - C31703 * C2638 - C31668 * C2642 + C32738 * C2647 +
             C31716 * C7079 - C17935 * C7076 - C31716 * C7080 +
             C17926 * C7085) *
                C32882 +
            (C31671 * C2096 - C31710 * C2089 - C31671 * C2097 + C32731 * C2107 +
             C31668 * C2643 - C31703 * C2639 - C31668 * C2644 + C32738 * C2648 +
             C31716 * C7451 - C17935 * C7450 - C31716 * C7452 +
             C17926 * C7453) *
                C32598) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
              C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
              C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                 C32882 +
             (C17991 + C17992 + C17993) * C32598) *
                C21006 +
            ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
               C589 -
           (((C20275 + C20276 + C20277) * C32598 +
             (C20278 + C20279 + C20280) * C32882) *
                C32777 +
            (C20693 * C32598 + (C20274 + C20273 + C20272) * C32882) * C21006) *
               C590) *
              C32635 * C473 +
          (((C20692 * C32882 + (C18594 + C18593 + C18592) * C32598) * C21006 +
            ((C20277 + C20276 + C20275) * C32882 +
             (C31671 * C373 - C31710 * C356 - C31671 * C374 + C32731 * C386 +
              C31668 * C1179 - C31703 * C1163 - C31668 * C1180 +
              C32738 * C1190 + C31716 * C1181 - C17935 * C1164 -
              C31716 * C1182 + C17926 * C1191) *
                 C32598) *
                C32777) *
               C590 -
           (((C18592 + C18593 + C18594) * C32598 + C20693 * C32882) * C32777 +
            ((C17996 + C17995 + C17994) * C32598 +
             (C17993 + C17992 + C17991) * C32882) *
                C21006) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32882 +
            (C17991 + C17992 + C17993) * C32598) *
               C21006 +
           ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
              C32649 * C32635 * C110 -
          (((C18592 + C18593 + C18594) * C32598 + C20693 * C32882) * C32777 +
           ((C17996 + C17995 + C17994) * C32598 +
            (C17993 + C17992 + C17991) * C32882) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C18001 * C32882 + (C17999 + C17998 + C17997) * C32598) * C21006 +
           ((C18594 + C18593 + C18592) * C32882 +
            (C31671 * C361 - C31710 * C350 - C31671 * C362 + C32731 * C380 +
             C31668 * C716 - C31703 * C708 - C31668 * C717 + C32738 * C723 +
             C31716 * C1531 - C17935 * C1530 - C31716 * C1532 +
             C17926 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32882 +
            (C17991 + C17992 + C17993) * C32598) *
               C21006 +
           ((C20272 + C20273 + C20274) * C32882 + C20692 * C32598) * C32777) *
              C32649 * C240 -
          (((C20493 + C20494 + C20495) * C32598 +
            (C20908 + C20907 + C20906) * C32882) *
               C32777 +
           ((C18407 + C18408 + C18409) * C32598 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C32882) *
               C21006) *
              C32649 * C241 +
          (((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
             C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
             C31716 * C1034 - C17935 * C1025 - C31716 * C1035 +
             C17926 * C1043) *
                C32882 +
            (C31671 * C266 - C31710 * C250 - C31671 * C267 + C32731 * C280 +
             C31668 * C1030 - C31703 * C1023 - C31668 * C1031 + C32738 * C1041 +
             C31716 * C1036 - C17935 * C1026 - C31716 * C1037 +
             C17926 * C1044) *
                C32598) *
               C21006 +
           ((C31671 * C1169 - C31710 * C1158 - C31671 * C1170 + C32731 * C1185 +
             C31668 * C1725 - C31703 * C1722 - C31668 * C1726 + C32738 * C1731 +
             C31716 * C6479 - C17935 * C6476 - C31716 * C6480 +
             C17926 * C6485) *
                C32882 +
            (C31671 * C1167 - C31710 * C1157 - C31671 * C1168 + C32731 * C1184 +
             C31668 * C1727 - C31703 * C1723 - C31668 * C1728 + C32738 * C1732 +
             C31716 * C6657 - C17935 * C6656 - C31716 * C6658 +
             C17926 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[30] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32588 * C32773 +
            (C20272 + C20273 + C20274) * C32588 * C32780 + C31096 * C24497) *
               C32649 * C471 -
           ((C31716 * C6481 - C17935 * C6477 - C31716 * C6482 + C17926 * C6486 +
             C31668 * C1173 - C31703 * C1160 - C31668 * C1174 + C32738 * C1187 +
             C31671 * C1171 - C31710 * C1159 - C31671 * C1172 +
             C32731 * C1186) *
                C32588 * C24497 +
            (C20908 + C20907 + C20906) * C32588 * C32780 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C32588 * C32773) *
               C32649 * C472) *
              C473 +
          (((C18409 + C18408 + C18407) * C32588 * C32773 +
            (C20495 + C20494 + C20493) * C32588 * C32780 +
            (C31671 * C1175 - C31710 * C1161 - C31671 * C1176 + C32731 * C1188 +
             C31668 * C1177 - C31703 * C1162 - C31668 * C1178 + C32738 * C1189 +
             C31716 * C7301 - C17935 * C7300 - C31716 * C7302 +
             C17926 * C7303) *
                C32588 * C24497) *
               C32649 * C472 -
           ((C20275 + C20276 + C20277) * C32588 * C24497 +
            C20693 * C32588 * C32780 +
            (C17993 + C17992 + C17991) * C32588 * C32773) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[31] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32588 * C32773 +
            (C20272 + C20273 + C20274) * C32588 * C32780 + C31096 * C24497) *
               C589 -
           ((C31100 + C31101 + C31102) * C32588 * C24497 +
            (C20278 + C20279 + C20280) * C32588 * C32780 +
            (C20274 + C20273 + C20272) * C32588 * C32773) *
               C590) *
              C471 +
          (((C20906 + C20907 + C20908) * C32588 * C32773 +
            (C31559 + C31560 + C31561) * C32588 * C32780 +
            (C31671 * C2641 - C31710 * C2638 - C31671 * C2642 + C32731 * C2647 +
             C31668 * C7079 - C31703 * C7076 - C31668 * C7080 + C32738 * C7085 +
             C31716 * C7622 - C17935 * C7621 - C31716 * C7623 +
             C17926 * C7624) *
                C32588 * C24497) *
               C590 -
           ((C31561 + C31560 + C31559) * C32588 * C24497 +
            (C20908 + C20907 + C20906) * C32588 * C32780 +
            (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
             C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
             C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
                C32588 * C32773) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[32] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32588 * C32773 +
           (C20272 + C20273 + C20274) * C32588 * C32780 +
           (C20280 + C20279 + C20278) * C32588 * C24497) *
              C32649 * C240 -
          ((C31716 * C6481 - C17935 * C6477 - C31716 * C6482 + C17926 * C6486 +
            C31668 * C1173 - C31703 * C1160 - C31668 * C1174 + C32738 * C1187 +
            C31671 * C1171 - C31710 * C1159 - C31671 * C1172 + C32731 * C1186) *
               C32588 * C24497 +
           (C20908 + C20907 + C20906) * C32588 * C32780 +
           (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
            C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
            C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
               C32588 * C32773) *
              C32649 * C241 +
          ((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
            C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
            C31716 * C1034 - C17935 * C1025 - C31716 * C1035 + C17926 * C1043) *
               C32588 * C32773 +
           (C31671 * C1169 - C31710 * C1158 - C31671 * C1170 + C32731 * C1185 +
            C31668 * C1725 - C31703 * C1722 - C31668 * C1726 + C32738 * C1731 +
            C31716 * C6479 - C17935 * C6476 - C31716 * C6480 + C17926 * C6485) *
               C32588 * C32780 +
           (C31671 * C1173 - C31710 * C1160 - C31671 * C1174 + C32731 * C1187 +
            C31668 * C6481 - C31703 * C6477 - C31668 * C6482 + C32738 * C6486 +
            C31716 * C6483 - C17935 * C6478 - C31716 * C6484 + C17926 * C6487) *
               C32588 * C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32588 * C32773 +
           (C20272 + C20273 + C20274) * C32588 * C32780 +
           (C20280 + C20279 + C20278) * C32588 * C24497) *
              C32649 * C32635 * C110 -
          ((C20275 + C20276 + C20277) * C32588 * C24497 +
           C20693 * C32588 * C32780 +
           (C17993 + C17992 + C17991) * C32588 * C32773) *
              C32649 * C32635 * C111 +
          (C18001 * C32588 * C32773 +
           (C18594 + C18593 + C18592) * C32588 * C32780 +
           (C31671 * C373 - C31710 * C356 - C31671 * C374 + C32731 * C386 +
            C31668 * C1179 - C31703 * C1163 - C31668 * C1180 + C32738 * C1190 +
            C31716 * C1181 - C17935 * C1164 - C31716 * C1182 + C17926 * C1191) *
               C32588 * C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32588 * C32773 +
           (C20272 + C20273 + C20274) * C32588 * C32780 + C31096 * C24497) *
              C346 -
          ((C31100 + C31101 + C31102) * C32588 * C24497 +
           (C20278 + C20279 + C20280) * C32588 * C32780 +
           (C20274 + C20273 + C20272) * C32588 * C32773) *
              C347 +
          (C31096 * C32773 + (C31102 + C31101 + C31100) * C32588 * C32780 +
           (C31671 * C2100 - C31710 * C2091 - C31671 * C2101 + C32731 * C2109 +
            C31668 * C7081 - C31703 * C7077 - C31668 * C7082 + C32738 * C7086 +
            C31716 * C7083 - C17935 * C7078 - C31716 * C7084 + C17926 * C7087) *
               C32588 * C24497) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[33] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
             C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
             C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
                C32588 * C32773 +
            (C20272 + C20273 + C20274) * C32588 * C32780 + C31096 * C24497) *
               C589 -
           ((C31100 + C31101 + C31102) * C32588 * C24497 +
            (C20278 + C20279 + C20280) * C32588 * C32780 +
            (C20274 + C20273 + C20272) * C32588 * C32773) *
               C590) *
              C32635 * C473 +
          ((C20692 * C32588 * C32773 +
            (C20277 + C20276 + C20275) * C32588 * C32780 +
            (C31671 * C2096 - C31710 * C2089 - C31671 * C2097 + C32731 * C2107 +
             C31668 * C2643 - C31703 * C2639 - C31668 * C2644 + C32738 * C2648 +
             C31716 * C7451 - C17935 * C7450 - C31716 * C7452 +
             C17926 * C7453) *
                C32588 * C24497) *
               C590 -
           ((C20275 + C20276 + C20277) * C32588 * C24497 +
            C20693 * C32588 * C32780 +
            (C17993 + C17992 + C17991) * C32588 * C32773) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[34] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32588 * C32773 +
           (C20272 + C20273 + C20274) * C32588 * C32780 +
           (C20280 + C20279 + C20278) * C32588 * C24497) *
              C32649 * C32635 * C110 -
          ((C20275 + C20276 + C20277) * C32588 * C24497 +
           C20693 * C32588 * C32780 +
           (C17993 + C17992 + C17991) * C32588 * C32773) *
              C32649 * C32635 * C111 +
          (C18001 * C32588 * C32773 +
           (C18594 + C18593 + C18592) * C32588 * C32780 +
           (C31671 * C373 - C31710 * C356 - C31671 * C374 + C32731 * C386 +
            C31668 * C1179 - C31703 * C1163 - C31668 * C1180 + C32738 * C1190 +
            C31716 * C1181 - C17935 * C1164 - C31716 * C1182 + C17926 * C1191) *
               C32588 * C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32731 * C136 +
            C31668 * C262 - C31703 * C248 - C31668 * C263 + C32738 * C278 +
            C31716 * C264 - C17935 * C249 - C31716 * C265 + C17926 * C279) *
               C32588 * C32773 +
           (C20272 + C20273 + C20274) * C32588 * C32780 +
           (C20280 + C20279 + C20278) * C32588 * C24497) *
              C32649 * C240 -
          ((C31716 * C6481 - C17935 * C6477 - C31716 * C6482 + C17926 * C6486 +
            C31668 * C1173 - C31703 * C1160 - C31668 * C1174 + C32738 * C1187 +
            C31671 * C1171 - C31710 * C1159 - C31671 * C1172 + C32731 * C1186) *
               C32588 * C24497 +
           (C20908 + C20907 + C20906) * C32588 * C32780 +
           (C31716 * C1032 - C17935 * C1024 - C31716 * C1033 + C17926 * C1042 +
            C31668 * C264 - C31703 * C249 - C31668 * C265 + C32738 * C279 +
            C31671 * C262 - C31710 * C248 - C31671 * C263 + C32731 * C278) *
               C32588 * C32773) *
              C32649 * C241 +
          ((C31671 * C264 - C31710 * C249 - C31671 * C265 + C32731 * C279 +
            C31668 * C1032 - C31703 * C1024 - C31668 * C1033 + C32738 * C1042 +
            C31716 * C1034 - C17935 * C1025 - C31716 * C1035 + C17926 * C1043) *
               C32588 * C32773 +
           (C31671 * C1169 - C31710 * C1158 - C31671 * C1170 + C32731 * C1185 +
            C31668 * C1725 - C31703 * C1722 - C31668 * C1726 + C32738 * C1731 +
            C31716 * C6479 - C17935 * C6476 - C31716 * C6480 + C17926 * C6485) *
               C32588 * C32780 +
           (C31671 * C1173 - C31710 * C1160 - C31671 * C1174 + C32731 * C1187 +
            C31668 * C6481 - C31703 * C6477 - C31668 * C6482 + C32738 * C6486 +
            C31716 * C6483 - C17935 * C6478 - C31716 * C6484 + C17926 * C6487) *
               C32588 * C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C32588 * C21006 +
            (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
               C32649 * C471 -
           ((C15946 * C6479 - C15947 * C6476 - C15946 * C6480 + C32909 * C6485 +
             C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
             C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
             C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720) *
                C32588 * C32777 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C32588 * C21006) *
               C32649 * C472) *
              C473 +
          (((C16358 + C16357 + C16356 + C16355) * C32588 * C21006 +
            (C15940 * C712 - C15941 * C706 - C15940 * C713 + C32971 * C721 +
             C15942 * C1167 - C15943 * C1157 - C15942 * C1168 + C32967 * C1184 +
             C15944 * C1727 - C15945 * C1723 - C15944 * C1728 + C32957 * C1732 +
             C15946 * C6657 - C15947 * C6656 - C15946 * C6658 +
             C32909 * C6659) *
                C32588 * C32777) *
               C32649 * C472 -
           ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
            (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32961 +
             (C15157 + C15158) * C32948 + C15165 * C32923) *
                C21006 +
            ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
                C32777) *
               C32649 * C471 -
           (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
             (C17812 + C17811) * C32961) *
                C32777 +
            ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32961) *
                C21006) *
               C32649 * C472) *
              C473 +
          ((((C15534 + C15533) * C32961 + (C15532 + C15531) * C32948 +
             (C15530 + C15529) * C32923) *
                C21006 +
            ((C17395 + C17394) * C32961 + (C19390 + C19389) * C32948 +
             (C15104 * C716 - C15105 * C708 - C15104 * C717 + C15098 * C723 +
              C15106 * C1531 - C15107 * C1530 - C15106 * C1532 +
              C32735 * C1533) *
                 C32923) *
                C32777) *
               C32649 * C472 -
           (((C15701 + C15702) * C32923 + C19585 * C32948 + C17592 * C32961) *
                C32777 +
            ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
             (C15158 + C15157) * C32961) *
                C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32588 * C32972 +
            (C17163 + C17164) * C32588 * C32969 + C28285 * C32960 +
            C28295 * C32916) *
               C32649 * C471 -
           ((C15106 * C7079 - C15107 * C7076 - C15106 * C7080 + C32735 * C7085 +
             C15104 * C2641 - C15105 * C2638 - C15104 * C2642 +
             C15098 * C2647) *
                C32588 * C32916 +
            (C17814 + C17813) * C32588 * C32960 +
            (C17812 + C17811) * C32588 * C32969 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32588 * C32972) *
               C32649 * C472) *
              C473 +
          (((C15534 + C15533) * C32588 * C32972 +
            (C17395 + C17394) * C32588 * C32969 +
            (C17393 + C17392) * C32588 * C32960 +
            (C15104 * C2643 - C15105 * C2639 - C15104 * C2644 + C15098 * C2648 +
             C15106 * C7451 - C15107 * C7450 - C15106 * C7452 +
             C32735 * C7453) *
                C32588 * C32916) *
               C32649 * C472 -
           ((C17167 + C17168) * C32588 * C32916 + C17591 * C32588 * C32960 +
            C17592 * C32588 * C32969 + (C15158 + C15157) * C32588 * C32972) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C32588 * C21006 +
            (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
               C589 -
           ((C27569 + C27570 + C27571 + C27572) * C32588 * C32777 +
            (C27568 + C27567 + C27566 + C27565) * C32588 * C21006) *
               C590) *
              C471 +
          (((C27987 + C27988 + C27989 + C27990) * C32588 * C21006 +
            (C15940 * C1171 - C15941 * C1159 - C15940 * C1172 + C32971 * C1186 +
             C15942 * C1173 - C15943 * C1160 - C15942 * C1174 + C32967 * C1187 +
             C15944 * C6481 - C15945 * C6477 - C15944 * C6482 + C32957 * C6486 +
             C15946 * C6483 - C15947 * C6478 - C15946 * C6484 +
             C32909 * C6487) *
                C32588 * C32777) *
               C590 -
           ((C27990 + C27989 + C27988 + C27987) * C32588 * C32777 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C32588 * C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32961 +
             (C15157 + C15158) * C32948 + C15165 * C32923) *
                C21006 +
            ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
                C32777) *
               C589 -
           (((C16819 + C16820) * C32923 + C17591 * C32948 +
             (C17166 + C17165) * C32961) *
                C32777 +
            (C19585 * C32923 + C17592 * C32948 + (C17164 + C17163) * C32961) *
                C21006) *
               C590) *
              C471 +
          ((((C17811 + C17812) * C32961 + (C17395 + C17394) * C32948 +
             (C19390 + C19389) * C32923) *
                C21006 +
            ((C17813 + C17814) * C32961 + (C17393 + C17392) * C32948 +
             (C15104 * C1179 - C15105 * C1163 - C15104 * C1180 +
              C15098 * C1190 + C15106 * C1181 - C15107 * C1164 -
              C15106 * C1182 + C32735 * C1191) *
                 C32923) *
                C32777) *
               C590 -
           (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
             (C17812 + C17811) * C32961) *
                C32777 +
            ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32961) *
                C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32588 * C32972 +
            (C17163 + C17164) * C32588 * C32969 + C28285 * C32960 +
            C28295 * C32916) *
               C589 -
           ((C28300 + C28301) * C32588 * C32916 +
            (C17169 + C17170) * C32588 * C32960 +
            (C17166 + C17165) * C32588 * C32969 +
            (C17164 + C17163) * C32588 * C32972) *
               C590) *
              C471 +
          (((C17811 + C17812) * C32588 * C32972 +
            (C17813 + C17814) * C32588 * C32969 +
            (C28704 + C28705) * C32588 * C32960 +
            (C15104 * C7081 - C15105 * C7077 - C15104 * C7082 + C15098 * C7086 +
             C15106 * C7083 - C15107 * C7078 - C15106 * C7084 +
             C32735 * C7087) *
                C32588 * C32916) *
               C590 -
           ((C28705 + C28704) * C32588 * C32916 +
            (C17814 + C17813) * C32588 * C32960 +
            (C17812 + C17811) * C32588 * C32969 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32588 * C32972) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
                 C15106 * C262 - C15107 * C248 - C15106 * C263 +
                 C32735 * C278) *
                    C32961 +
                (C15157 + C15158) * C32948 + C15165 * C32923) *
                   C21006 +
               ((C17163 + C17164) * C32961 + C17590 * C32948 +
                C18890 * C32923) *
                   C32777) *
                  C32649 * C32635 * C110 -
              (((C15701 + C15702) * C32923 + C19585 * C32948 +
                C17592 * C32961) *
                   C32777 +
               ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
                (C15158 + C15157) * C32961) *
                   C21006) *
                  C32649 * C32635 * C111 +
              ((C15165 * C32961 + C15166 * C32948 +
                (C15164 + C15163) * C32923) *
                   C21006 +
               (C18890 * C32961 + (C15702 + C15701) * C32948 +
                (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
                 C15106 * C718 - C15107 * C709 - C15106 * C719 +
                 C32735 * C724) *
                    C32923) *
                   C32777) *
                  C32649 * C32635 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
                 C15106 * C262 - C15107 * C248 - C15106 * C263 +
                 C32735 * C278) *
                    C32961 +
                (C15157 + C15158) * C32948 + C15165 * C32923) *
                   C21006 +
               ((C17163 + C17164) * C32961 + C17590 * C32948 +
                C18890 * C32923) *
                   C32777) *
                  C32649 * C240 -
              (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
                (C17812 + C17811) * C32961) *
                   C32777 +
               ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
                (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
                 C15104 * C262 - C15105 * C248 - C15104 * C263 +
                 C15098 * C278) *
                    C32961) *
                   C21006) *
                  C32649 * C241 +
              (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
                 C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
                 C32735 * C1042) *
                    C32961 +
                (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
                 C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
                 C32735 * C1041) *
                    C32948 +
                (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
                 C15106 * C1028 - C15107 * C1022 - C15106 * C1029 +
                 C32735 * C1040) *
                    C32923) *
                   C21006 +
               ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 +
                 C15098 * C1185 + C15106 * C1725 - C15107 * C1722 -
                 C15106 * C1726 + C32735 * C1731) *
                    C32961 +
                (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 +
                 C15098 * C1184 + C15106 * C1727 - C15107 * C1723 -
                 C15106 * C1728 + C32735 * C1732) *
                    C32948 +
                (C15104 * C1165 - C15105 * C1156 - C15104 * C1166 +
                 C15098 * C1183 + C15106 * C1729 - C15107 * C1724 -
                 C15106 * C1730 + C32735 * C1733) *
                    C32923) *
                   C32777) *
                  C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C346 -
          (((C16819 + C16820) * C32923 + C17591 * C32948 +
            (C17166 + C17165) * C32961) *
               C32777 +
           (C19585 * C32923 + C17592 * C32948 + (C17164 + C17163) * C32961) *
               C21006) *
              C347 +
          ((C17171 * C32961 + C17129 * C32948 + (C16820 + C16819) * C32923) *
               C21006 +
           ((C17170 + C17169) * C32961 + (C17168 + C17167) * C32948 +
            (C15104 * C2094 - C15105 * C2088 - C15104 * C2095 + C15098 * C2106 +
             C15106 * C2645 - C15107 * C2640 - C15106 * C2646 +
             C32735 * C2649) *
                C32923) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
           (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
              C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C32588 * C21006 +
           (C15940 * C363 - C15941 * C351 - C15940 * C364 + C32971 * C381 +
            C15942 * C714 - C15943 * C707 - C15942 * C715 + C32967 * C722 +
            C15944 * C1165 - C15945 * C1156 - C15944 * C1166 + C32957 * C1183 +
            C15946 * C1729 - C15947 * C1724 - C15946 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C15946 * C6479 - C15947 * C6476 - C15946 * C6480 + C32909 * C6485 +
            C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
            C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
            C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720) *
               C32588 * C32777 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C32588 * C21006) *
              C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C32588 * C21006 +
           (C15940 * C1169 - C15941 * C1158 - C15940 * C1170 + C32971 * C1185 +
            C15942 * C1725 - C15943 * C1722 - C15942 * C1726 + C32967 * C1731 +
            C15944 * C6479 - C15945 * C6476 - C15944 * C6480 + C32957 * C6485 +
            C15946 * C6743 - C15947 * C6742 - C15946 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
              C346 -
          ((C27569 + C27570 + C27571 + C27572) * C32588 * C32777 +
           (C27568 + C27567 + C27566 + C27565) * C32588 * C21006) *
              C347 +
          ((C27572 + C27571 + C27570 + C27569) * C32588 * C21006 +
           (C15940 * C2098 - C15941 * C2090 - C15940 * C2099 + C32971 * C2108 +
            C15942 * C2641 - C15943 * C2638 - C15942 * C2642 + C32967 * C2647 +
            C15944 * C7079 - C15945 * C7076 - C15944 * C7080 + C32957 * C7085 +
            C15946 * C7622 - C15947 * C7621 - C15946 * C7623 + C32909 * C7624) *
               C32588 * C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32588 * C32972 +
           (C17163 + C17164) * C32588 * C32969 + C17171 * C32588 * C32960 +
           (C17170 + C17169) * C32588 * C32916) *
              C32649 * C32635 * C110 -
          ((C17167 + C17168) * C32588 * C32916 + C17591 * C32588 * C32960 +
           C17592 * C32588 * C32969 + (C15158 + C15157) * C32588 * C32972) *
              C32649 * C32635 * C111 +
          (C15165 * C32588 * C32972 + C18890 * C32588 * C32969 +
           (C16820 + C16819) * C32588 * C32960 +
           (C15104 * C2094 - C15105 * C2088 - C15104 * C2095 + C15098 * C2106 +
            C15106 * C2645 - C15107 * C2640 - C15106 * C2646 + C32735 * C2649) *
               C32588 * C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32588 * C32972 +
           (C17163 + C17164) * C32588 * C32969 + C17171 * C32588 * C32960 +
           (C17170 + C17169) * C32588 * C32916) *
              C32649 * C240 -
          ((C15106 * C7079 - C15107 * C7076 - C15106 * C7080 + C32735 * C7085 +
            C15104 * C2641 - C15105 * C2638 - C15104 * C2642 + C15098 * C2647) *
               C32588 * C32916 +
           (C17814 + C17813) * C32588 * C32960 +
           (C17812 + C17811) * C32588 * C32969 +
           (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
            C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
               C32588 * C32972) *
              C32649 * C241 +
          ((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
            C15106 * C1032 - C15107 * C1024 - C15106 * C1033 + C32735 * C1042) *
               C32588 * C32972 +
           (C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
            C15106 * C1725 - C15107 * C1722 - C15106 * C1726 + C32735 * C1731) *
               C32588 * C32969 +
           (C15104 * C1173 - C15105 * C1160 - C15104 * C1174 + C15098 * C1187 +
            C15106 * C6481 - C15107 * C6477 - C15106 * C6482 + C32735 * C6486) *
               C32588 * C32960 +
           (C15104 * C7079 - C15105 * C7076 - C15104 * C7080 + C15098 * C7085 +
            C15106 * C7622 - C15107 * C7621 - C15106 * C7623 + C32735 * C7624) *
               C32588 * C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32588 * C32972 +
           (C17163 + C17164) * C32588 * C32969 + C28285 * C32960 +
           C28295 * C32916) *
              C346 -
          ((C28300 + C28301) * C32588 * C32916 +
           (C17169 + C17170) * C32588 * C32960 +
           (C17166 + C17165) * C32588 * C32969 +
           (C17164 + C17163) * C32588 * C32972) *
              C347 +
          (C28285 * C32972 + C28295 * C32969 +
           (C28301 + C28300) * C32588 * C32960 +
           (C15104 * C12174 - C15105 * C12172 - C15104 * C12175 +
            C15098 * C12178 + C15106 * C12465 - C15107 * C12464 -
            C15106 * C12466 + C32735 * C12467) *
               C32588 * C32916) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C32588 * C21006 +
            (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
               C589 -
           ((C27569 + C27570 + C27571 + C27572) * C32588 * C32777 +
            (C27568 + C27567 + C27566 + C27565) * C32588 * C21006) *
               C590) *
              C32635 * C473 +
          (((C16516 + C16515 + C16514 + C16513) * C32588 * C21006 +
            (C15940 * C371 - C15941 * C355 - C15940 * C372 + C32971 * C385 +
             C15942 * C1175 - C15943 * C1161 - C15942 * C1176 + C32967 * C1188 +
             C15944 * C1177 - C15945 * C1162 - C15944 * C1178 + C32957 * C1189 +
             C15946 * C7301 - C15947 * C7300 - C15946 * C7302 +
             C32909 * C7303) *
                C32588 * C32777) *
               C590 -
           ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
            (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32961 +
             (C15157 + C15158) * C32948 + C15165 * C32923) *
                C21006 +
            ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
                C32777) *
               C589 -
           (((C16819 + C16820) * C32923 + C17591 * C32948 +
             (C17166 + C17165) * C32961) *
                C32777 +
            (C19585 * C32923 + C17592 * C32948 + (C17164 + C17163) * C32961) *
                C21006) *
               C590) *
              C32635 * C473 +
          (((C17590 * C32961 + C18890 * C32948 + (C15702 + C15701) * C32923) *
                C21006 +
            (C17129 * C32961 + (C16820 + C16819) * C32948 +
             (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
              C15106 * C2305 - C15107 * C2304 - C15106 * C2306 +
              C32735 * C2307) *
                 C32923) *
                C32777) *
               C590 -
           (((C15701 + C15702) * C32923 + C19585 * C32948 + C17592 * C32961) *
                C32777 +
            ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
             (C15158 + C15157) * C32961) *
                C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32588 * C32972 +
            (C17163 + C17164) * C32588 * C32969 + C28285 * C32960 +
            C28295 * C32916) *
               C589 -
           ((C28300 + C28301) * C32588 * C32916 +
            (C17169 + C17170) * C32588 * C32960 +
            (C17166 + C17165) * C32588 * C32969 +
            (C17164 + C17163) * C32588 * C32972) *
               C590) *
              C32635 * C473 +
          ((C17590 * C32588 * C32972 + C17129 * C32588 * C32969 +
            (C17168 + C17167) * C32588 * C32960 +
            (C15104 * C2102 - C15105 * C2092 - C15104 * C2103 + C15098 * C2110 +
             C15106 * C12282 - C15107 * C12281 - C15106 * C12283 +
             C32735 * C12284) *
                C32588 * C32916) *
               C590 -
           ((C17167 + C17168) * C32588 * C32916 + C17591 * C32588 * C32960 +
            C17592 * C32588 * C32969 + (C15158 + C15157) * C32588 * C32972) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C32649 * C240 -
          (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
            (C17812 + C17811) * C32961) *
               C32777 +
           ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32961) *
               C21006) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C32961 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32948 +
            (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
             C15106 * C1028 - C15107 * C1022 - C15106 * C1029 +
             C32735 * C1040) *
                C32923) *
               C21006 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C32961 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32948 +
            (C15104 * C1165 - C15105 * C1156 - C15104 * C1166 + C15098 * C1183 +
             C15106 * C1729 - C15107 * C1724 - C15106 * C1730 +
             C32735 * C1733) *
                C32923) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C15701 + C15702) * C32923 + C19585 * C32948 + C17592 * C32961) *
               C32777 +
           ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
            (C15158 + C15157) * C32961) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C15165 * C32961 + C15166 * C32948 + (C15164 + C15163) * C32923) *
               C21006 +
           (C18890 * C32961 + (C15702 + C15701) * C32948 +
            (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
             C15106 * C718 - C15107 * C709 - C15106 * C719 + C32735 * C724) *
                C32923) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
           (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
              C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C32588 * C21006 +
           (C15940 * C363 - C15941 * C351 - C15940 * C364 + C32971 * C381 +
            C15942 * C714 - C15943 * C707 - C15942 * C715 + C32967 * C722 +
            C15944 * C1165 - C15945 * C1156 - C15944 * C1166 + C32957 * C1183 +
            C15946 * C1729 - C15947 * C1724 - C15946 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C15946 * C6479 - C15947 * C6476 - C15946 * C6480 + C32909 * C6485 +
            C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
            C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
            C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720) *
               C32588 * C32777 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C32588 * C21006) *
              C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C32588 * C21006 +
           (C15940 * C1169 - C15941 * C1158 - C15940 * C1170 + C32971 * C1185 +
            C15942 * C1725 - C15943 * C1722 - C15942 * C1726 + C32967 * C1731 +
            C15944 * C6479 - C15945 * C6476 - C15944 * C6480 + C32957 * C6485 +
            C15946 * C6743 - C15947 * C6742 - C15946 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32588 * C32972 +
           (C17163 + C17164) * C32588 * C32969 + C17171 * C32588 * C32960 +
           (C17170 + C17169) * C32588 * C32916) *
              C32649 * C32635 * C110 -
          ((C17167 + C17168) * C32588 * C32916 + C17591 * C32588 * C32960 +
           C17592 * C32588 * C32969 + (C15158 + C15157) * C32588 * C32972) *
              C32649 * C32635 * C111 +
          (C15165 * C32588 * C32972 + C18890 * C32588 * C32969 +
           (C16820 + C16819) * C32588 * C32960 +
           (C15104 * C2094 - C15105 * C2088 - C15104 * C2095 + C15098 * C2106 +
            C15106 * C2645 - C15107 * C2640 - C15106 * C2646 + C32735 * C2649) *
               C32588 * C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
            C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
               C32588 * C32972 +
           (C17163 + C17164) * C32588 * C32969 + C17171 * C32588 * C32960 +
           (C17170 + C17169) * C32588 * C32916) *
              C32649 * C240 -
          ((C15106 * C7079 - C15107 * C7076 - C15106 * C7080 + C32735 * C7085 +
            C15104 * C2641 - C15105 * C2638 - C15104 * C2642 + C15098 * C2647) *
               C32588 * C32916 +
           (C17814 + C17813) * C32588 * C32960 +
           (C17812 + C17811) * C32588 * C32969 +
           (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
            C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
               C32588 * C32972) *
              C32649 * C241 +
          ((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
            C15106 * C1032 - C15107 * C1024 - C15106 * C1033 + C32735 * C1042) *
               C32588 * C32972 +
           (C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
            C15106 * C1725 - C15107 * C1722 - C15106 * C1726 + C32735 * C1731) *
               C32588 * C32969 +
           (C15104 * C1173 - C15105 * C1160 - C15104 * C1174 + C15098 * C1187 +
            C15106 * C6481 - C15107 * C6477 - C15106 * C6482 + C32735 * C6486) *
               C32588 * C32960 +
           (C15104 * C7079 - C15105 * C7076 - C15104 * C7080 + C15098 * C7085 +
            C15106 * C7622 - C15107 * C7621 - C15106 * C7623 + C32735 * C7624) *
               C32588 * C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32882 +
             (C15157 + C15158) * C32598) *
                C32773 +
            ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
            C30166 * C24497) *
               C32649 * C471 -
           (((C17392 + C17393) * C32598 + (C17814 + C17813) * C32882) * C24497 +
            ((C17394 + C17395) * C32598 + (C17812 + C17811) * C32882) * C32780 +
            ((C15533 + C15534) * C32598 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32882) *
                C32773) *
               C32649 * C472) *
              C473 +
          ((((C15534 + C15533) * C32882 + (C15532 + C15531) * C32598) * C32773 +
            ((C17395 + C17394) * C32882 + (C19390 + C19389) * C32598) * C32780 +
            ((C17393 + C17392) * C32882 +
             (C15104 * C1179 - C15105 * C1163 - C15104 * C1180 +
              C15098 * C1190 + C15106 * C1181 - C15107 * C1164 -
              C15106 * C1182 + C32735 * C1191) *
                 C32598) *
                C24497) *
               C32649 * C472 -
           (((C16819 + C16820) * C32598 + C17591 * C32882) * C24497 +
            (C19585 * C32598 + C17592 * C32882) * C32780 +
            ((C15160 + C15159) * C32598 + (C15158 + C15157) * C32882) *
                C32773) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32882 +
             (C15157 + C15158) * C32598) *
                C32773 +
            ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
            C30166 * C24497) *
               C589 -
           (((C17167 + C17168) * C32598 + (C17169 + C17170) * C32882) * C24497 +
            (C17591 * C32598 + (C17166 + C17165) * C32882) * C32780 +
            (C17592 * C32598 + (C17164 + C17163) * C32882) * C32773) *
               C590) *
              C471 +
          ((((C17811 + C17812) * C32882 + (C17395 + C17394) * C32598) * C32773 +
            ((C17813 + C17814) * C32882 + (C17393 + C17392) * C32598) * C32780 +
            ((C28704 + C28705) * C32882 +
             (C15104 * C2643 - C15105 * C2639 - C15104 * C2644 +
              C15098 * C2648 + C15106 * C7451 - C15107 * C7450 -
              C15106 * C7452 + C32735 * C7453) *
                 C32598) *
                C24497) *
               C590 -
           (((C17392 + C17393) * C32598 + (C17814 + C17813) * C32882) * C24497 +
            ((C17394 + C17395) * C32598 + (C17812 + C17811) * C32882) * C32780 +
            ((C15533 + C15534) * C32598 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32882) *
                C32773) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32882 +
            (C15157 + C15158) * C32598) *
               C32773 +
           ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
           (C17171 * C32882 + C17129 * C32598) * C24497) *
              C32649 * C240 -
          (((C17392 + C17393) * C32598 + (C17814 + C17813) * C32882) * C24497 +
           ((C17394 + C17395) * C32598 + (C17812 + C17811) * C32882) * C32780 +
           ((C15533 + C15534) * C32598 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32882) *
               C32773) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C32882 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32598) *
               C32773 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C32882 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32598) *
               C32780 +
           ((C15104 * C1173 - C15105 * C1160 - C15104 * C1174 + C15098 * C1187 +
             C15106 * C6481 - C15107 * C6477 - C15106 * C6482 +
             C32735 * C6486) *
                C32882 +
            (C15104 * C1177 - C15105 * C1162 - C15104 * C1178 + C15098 * C1189 +
             C15106 * C7301 - C15107 * C7300 - C15106 * C7302 +
             C32735 * C7303) *
                C32598) *
               C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32882 +
            (C15157 + C15158) * C32598) *
               C32773 +
           ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
           (C17171 * C32882 + C17129 * C32598) * C24497) *
              C32649 * C32635 * C110 -
          (((C16819 + C16820) * C32598 + C17591 * C32882) * C24497 +
           (C19585 * C32598 + C17592 * C32882) * C32780 +
           ((C15160 + C15159) * C32598 + (C15158 + C15157) * C32882) * C32773) *
              C32649 * C32635 * C111 +
          ((C15165 * C32882 + C15166 * C32598) * C32773 +
           (C18890 * C32882 + (C15702 + C15701) * C32598) * C32780 +
           ((C16820 + C16819) * C32882 +
            (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
             C15106 * C2305 - C15107 * C2304 - C15106 * C2306 +
             C32735 * C2307) *
                C32598) *
               C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32882 +
            (C15157 + C15158) * C32598) *
               C32773 +
           ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
           C30166 * C24497) *
              C346 -
          (((C17167 + C17168) * C32598 + (C17169 + C17170) * C32882) * C24497 +
           (C17591 * C32598 + (C17166 + C17165) * C32882) * C32780 +
           (C17592 * C32598 + (C17164 + C17163) * C32882) * C32773) *
              C347 +
          (C30166 * C32773 +
           (C28286 * C32882 + (C17168 + C17167) * C32598) * C32780 +
           ((C28301 + C28300) * C32882 +
            (C15104 * C2102 - C15105 * C2092 - C15104 * C2103 + C15098 * C2110 +
             C15106 * C12282 - C15107 * C12281 - C15106 * C12283 +
             C32735 * C12284) *
                C32598) *
               C24497) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32882 +
             (C15157 + C15158) * C32598) *
                C32773 +
            ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
            C30166 * C24497) *
               C589 -
           (((C17167 + C17168) * C32598 + (C17169 + C17170) * C32882) * C24497 +
            (C17591 * C32598 + (C17166 + C17165) * C32882) * C32780 +
            (C17592 * C32598 + (C17164 + C17163) * C32882) * C32773) *
               C590) *
              C32635 * C473 +
          (((C17590 * C32882 + C18890 * C32598) * C32773 +
            (C17129 * C32882 + (C16820 + C16819) * C32598) * C32780 +
            ((C17168 + C17167) * C32882 +
             (C15104 * C2094 - C15105 * C2088 - C15104 * C2095 +
              C15098 * C2106 + C15106 * C2645 - C15107 * C2640 -
              C15106 * C2646 + C32735 * C2649) *
                 C32598) *
                C24497) *
               C590 -
           (((C16819 + C16820) * C32598 + C17591 * C32882) * C24497 +
            (C19585 * C32598 + C17592 * C32882) * C32780 +
            ((C15160 + C15159) * C32598 + (C15158 + C15157) * C32882) *
                C32773) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32882 +
            (C15157 + C15158) * C32598) *
               C32773 +
           ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
           (C17171 * C32882 + C17129 * C32598) * C24497) *
              C32649 * C32635 * C110 -
          (((C16819 + C16820) * C32598 + C17591 * C32882) * C24497 +
           (C19585 * C32598 + C17592 * C32882) * C32780 +
           ((C15160 + C15159) * C32598 + (C15158 + C15157) * C32882) * C32773) *
              C32649 * C32635 * C111 +
          ((C15165 * C32882 + C15166 * C32598) * C32773 +
           (C18890 * C32882 + (C15702 + C15701) * C32598) * C32780 +
           ((C16820 + C16819) * C32882 +
            (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
             C15106 * C2305 - C15107 * C2304 - C15106 * C2306 +
             C32735 * C2307) *
                C32598) *
               C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32882 +
            (C15157 + C15158) * C32598) *
               C32773 +
           ((C17163 + C17164) * C32882 + C17590 * C32598) * C32780 +
           (C17171 * C32882 + C17129 * C32598) * C24497) *
              C32649 * C240 -
          (((C17392 + C17393) * C32598 + (C17814 + C17813) * C32882) * C24497 +
           ((C17394 + C17395) * C32598 + (C17812 + C17811) * C32882) * C32780 +
           ((C15533 + C15534) * C32598 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32882) *
               C32773) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C32882 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32598) *
               C32773 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C32882 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32598) *
               C32780 +
           ((C15104 * C1173 - C15105 * C1160 - C15104 * C1174 + C15098 * C1187 +
             C15106 * C6481 - C15107 * C6477 - C15106 * C6482 +
             C32735 * C6486) *
                C32882 +
            (C15104 * C1177 - C15105 * C1162 - C15104 * C1178 + C15098 * C1189 +
             C15106 * C7301 - C15107 * C7300 - C15106 * C7302 +
             C32735 * C7303) *
                C32598) *
               C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32961 +
             (C15157 + C15158) * C32948 + C15165 * C32923) *
                C21006 +
            ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
                C32777) *
               C32649 * C471 -
           (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
             (C17812 + C17811) * C32961) *
                C32777 +
            ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32961) *
                C21006) *
               C32649 * C472) *
              C473 +
          ((((C15534 + C15533) * C32961 + (C15532 + C15531) * C32948 +
             (C15530 + C15529) * C32923) *
                C21006 +
            ((C17395 + C17394) * C32961 + (C19390 + C19389) * C32948 +
             (C15104 * C716 - C15105 * C708 - C15104 * C717 + C15098 * C723 +
              C15106 * C1531 - C15107 * C1530 - C15106 * C1532 +
              C32735 * C1533) *
                 C32923) *
                C32777) *
               C32649 * C472 -
           (((C15701 + C15702) * C32923 + C19585 * C32948 + C17592 * C32961) *
                C32777 +
            ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
             (C15158 + C15157) * C32961) *
                C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C32588 * C21006 +
            (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
               C32649 * C471 -
           ((C15946 * C6479 - C15947 * C6476 - C15946 * C6480 + C32909 * C6485 +
             C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
             C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
             C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720) *
                C32588 * C32777 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C32588 * C21006) *
               C32649 * C472) *
              C473 +
          (((C16358 + C16357 + C16356 + C16355) * C32588 * C21006 +
            (C15940 * C712 - C15941 * C706 - C15940 * C713 + C32971 * C721 +
             C15942 * C1167 - C15943 * C1157 - C15942 * C1168 + C32967 * C1184 +
             C15944 * C1727 - C15945 * C1723 - C15944 * C1728 + C32957 * C1732 +
             C15946 * C6657 - C15947 * C6656 - C15946 * C6658 +
             C32909 * C6659) *
                C32588 * C32777) *
               C32649 * C472 -
           ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
            (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32961 +
             (C15157 + C15158) * C32948 + C15165 * C32923) *
                C21006 +
            ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
                C32777) *
               C589 -
           (((C16819 + C16820) * C32923 + C17591 * C32948 +
             (C17166 + C17165) * C32961) *
                C32777 +
            (C19585 * C32923 + C17592 * C32948 + (C17164 + C17163) * C32961) *
                C21006) *
               C590) *
              C471 +
          ((((C17811 + C17812) * C32961 + (C17395 + C17394) * C32948 +
             (C19390 + C19389) * C32923) *
                C21006 +
            ((C17813 + C17814) * C32961 + (C17393 + C17392) * C32948 +
             (C15104 * C1179 - C15105 * C1163 - C15104 * C1180 +
              C15098 * C1190 + C15106 * C1181 - C15107 * C1164 -
              C15106 * C1182 + C32735 * C1191) *
                 C32923) *
                C32777) *
               C590 -
           (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
             (C17812 + C17811) * C32961) *
                C32777 +
            ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
             (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
              C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                 C32961) *
                C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C32588 * C21006 +
            (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
               C589 -
           ((C27569 + C27570 + C27571 + C27572) * C32588 * C32777 +
            (C27568 + C27567 + C27566 + C27565) * C32588 * C21006) *
               C590) *
              C471 +
          (((C27987 + C27988 + C27989 + C27990) * C32588 * C21006 +
            (C15940 * C1171 - C15941 * C1159 - C15940 * C1172 + C32971 * C1186 +
             C15942 * C1173 - C15943 * C1160 - C15942 * C1174 + C32967 * C1187 +
             C15944 * C6481 - C15945 * C6477 - C15944 * C6482 + C32957 * C6486 +
             C15946 * C6483 - C15947 * C6478 - C15946 * C6484 +
             C32909 * C6487) *
                C32588 * C32777) *
               C590 -
           ((C27990 + C27989 + C27988 + C27987) * C32588 * C32777 +
            (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
             C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
             C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
             C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
                C32588 * C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C32649 * C240 -
          (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
            (C17812 + C17811) * C32961) *
               C32777 +
           ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32961) *
               C21006) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C32961 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32948 +
            (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
             C15106 * C1028 - C15107 * C1022 - C15106 * C1029 +
             C32735 * C1040) *
                C32923) *
               C21006 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C32961 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32948 +
            (C15104 * C1165 - C15105 * C1156 - C15104 * C1166 + C15098 * C1183 +
             C15106 * C1729 - C15107 * C1724 - C15106 * C1730 +
             C32735 * C1733) *
                C32923) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C15701 + C15702) * C32923 + C19585 * C32948 + C17592 * C32961) *
               C32777 +
           ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
            (C15158 + C15157) * C32961) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C15165 * C32961 + C15166 * C32948 + (C15164 + C15163) * C32923) *
               C21006 +
           (C18890 * C32961 + (C15702 + C15701) * C32948 +
            (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
             C15106 * C718 - C15107 * C709 - C15106 * C719 + C32735 * C724) *
                C32923) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C346 -
          (((C16819 + C16820) * C32923 + C17591 * C32948 +
            (C17166 + C17165) * C32961) *
               C32777 +
           (C19585 * C32923 + C17592 * C32948 + (C17164 + C17163) * C32961) *
               C21006) *
              C347 +
          ((C17171 * C32961 + C17129 * C32948 + (C16820 + C16819) * C32923) *
               C21006 +
           ((C17170 + C17169) * C32961 + (C17168 + C17167) * C32948 +
            (C15104 * C2094 - C15105 * C2088 - C15104 * C2095 + C15098 * C2106 +
             C15106 * C2645 - C15107 * C2640 - C15106 * C2646 +
             C32735 * C2649) *
                C32923) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
           (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
              C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C32588 * C21006 +
           (C15940 * C363 - C15941 * C351 - C15940 * C364 + C32971 * C381 +
            C15942 * C714 - C15943 * C707 - C15942 * C715 + C32967 * C722 +
            C15944 * C1165 - C15945 * C1156 - C15944 * C1166 + C32957 * C1183 +
            C15946 * C1729 - C15947 * C1724 - C15946 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C15946 * C6479 - C15947 * C6476 - C15946 * C6480 + C32909 * C6485 +
            C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
            C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
            C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720) *
               C32588 * C32777 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C32588 * C21006) *
              C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C32588 * C21006 +
           (C15940 * C1169 - C15941 * C1158 - C15940 * C1170 + C32971 * C1185 +
            C15942 * C1725 - C15943 * C1722 - C15942 * C1726 + C32967 * C1731 +
            C15944 * C6479 - C15945 * C6476 - C15944 * C6480 + C32957 * C6485 +
            C15946 * C6743 - C15947 * C6742 - C15946 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
              C346 -
          ((C27569 + C27570 + C27571 + C27572) * C32588 * C32777 +
           (C27568 + C27567 + C27566 + C27565) * C32588 * C21006) *
              C347 +
          ((C27572 + C27571 + C27570 + C27569) * C32588 * C21006 +
           (C15940 * C2098 - C15941 * C2090 - C15940 * C2099 + C32971 * C2108 +
            C15942 * C2641 - C15943 * C2638 - C15942 * C2642 + C32967 * C2647 +
            C15944 * C7079 - C15945 * C7076 - C15944 * C7080 + C32957 * C7085 +
            C15946 * C7622 - C15947 * C7621 - C15946 * C7623 + C32909 * C7624) *
               C32588 * C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
              C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                 C32961 +
             (C15157 + C15158) * C32948 + C15165 * C32923) *
                C21006 +
            ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
                C32777) *
               C589 -
           (((C16819 + C16820) * C32923 + C17591 * C32948 +
             (C17166 + C17165) * C32961) *
                C32777 +
            (C19585 * C32923 + C17592 * C32948 + (C17164 + C17163) * C32961) *
                C21006) *
               C590) *
              C32635 * C473 +
          (((C17590 * C32961 + C18890 * C32948 + (C15702 + C15701) * C32923) *
                C21006 +
            (C17129 * C32961 + (C16820 + C16819) * C32948 +
             (C15104 * C375 - C15105 * C357 - C15104 * C376 + C15098 * C387 +
              C15106 * C2305 - C15107 * C2304 - C15106 * C2306 +
              C32735 * C2307) *
                 C32923) *
                C32777) *
               C590 -
           (((C15701 + C15702) * C32923 + C19585 * C32948 + C17592 * C32961) *
                C32777 +
            ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
             (C15158 + C15157) * C32961) *
                C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
             C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
             C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
             C15946 * C1032 - C15947 * C1024 - C15946 * C1033 +
             C32909 * C1042) *
                C32588 * C21006 +
            (C27565 + C27566 + C27567 + C27568) * C32588 * C32777) *
               C589 -
           ((C27569 + C27570 + C27571 + C27572) * C32588 * C32777 +
            (C27568 + C27567 + C27566 + C27565) * C32588 * C21006) *
               C590) *
              C32635 * C473 +
          (((C16516 + C16515 + C16514 + C16513) * C32588 * C21006 +
            (C15940 * C371 - C15941 * C355 - C15940 * C372 + C32971 * C385 +
             C15942 * C1175 - C15943 * C1161 - C15942 * C1176 + C32967 * C1188 +
             C15944 * C1177 - C15945 * C1162 - C15944 * C1178 + C32957 * C1189 +
             C15946 * C7301 - C15947 * C7300 - C15946 * C7302 +
             C32909 * C7303) *
                C32588 * C32777) *
               C590 -
           ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
            (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C15701 + C15702) * C32923 + C19585 * C32948 + C17592 * C32961) *
               C32777 +
           ((C15162 + C15161) * C32923 + (C15160 + C15159) * C32948 +
            (C15158 + C15157) * C32961) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C15165 * C32961 + C15166 * C32948 + (C15164 + C15163) * C32923) *
               C21006 +
           (C18890 * C32961 + (C15702 + C15701) * C32948 +
            (C15104 * C359 - C15105 * C349 - C15104 * C360 + C15098 * C379 +
             C15106 * C718 - C15107 * C709 - C15106 * C719 + C32735 * C724) *
                C32923) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C15104 * C122 - C15105 * C115 - C15104 * C123 + C15098 * C136 +
             C15106 * C262 - C15107 * C248 - C15106 * C263 + C32735 * C278) *
                C32961 +
            (C15157 + C15158) * C32948 + C15165 * C32923) *
               C21006 +
           ((C17163 + C17164) * C32961 + C17590 * C32948 + C18890 * C32923) *
               C32777) *
              C32649 * C240 -
          (((C19389 + C19390) * C32923 + (C17394 + C17395) * C32948 +
            (C17812 + C17811) * C32961) *
               C32777 +
           ((C15531 + C15532) * C32923 + (C15533 + C15534) * C32948 +
            (C15106 * C264 - C15107 * C249 - C15106 * C265 + C32735 * C279 +
             C15104 * C262 - C15105 * C248 - C15104 * C263 + C15098 * C278) *
                C32961) *
               C21006) *
              C32649 * C241 +
          (((C15104 * C264 - C15105 * C249 - C15104 * C265 + C15098 * C279 +
             C15106 * C1032 - C15107 * C1024 - C15106 * C1033 +
             C32735 * C1042) *
                C32961 +
            (C15104 * C266 - C15105 * C250 - C15104 * C267 + C15098 * C280 +
             C15106 * C1030 - C15107 * C1023 - C15106 * C1031 +
             C32735 * C1041) *
                C32948 +
            (C15104 * C268 - C15105 * C251 - C15104 * C269 + C15098 * C281 +
             C15106 * C1028 - C15107 * C1022 - C15106 * C1029 +
             C32735 * C1040) *
                C32923) *
               C21006 +
           ((C15104 * C1169 - C15105 * C1158 - C15104 * C1170 + C15098 * C1185 +
             C15106 * C1725 - C15107 * C1722 - C15106 * C1726 +
             C32735 * C1731) *
                C32961 +
            (C15104 * C1167 - C15105 * C1157 - C15104 * C1168 + C15098 * C1184 +
             C15106 * C1727 - C15107 * C1723 - C15106 * C1728 +
             C32735 * C1732) *
                C32948 +
            (C15104 * C1165 - C15105 * C1156 - C15104 * C1166 + C15098 * C1183 +
             C15106 * C1729 - C15107 * C1724 - C15106 * C1730 +
             C32735 * C1733) *
                C32923) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C16513 + C16514 + C16515 + C16516) * C32588 * C32777 +
           (C16000 + C15999 + C15998 + C15997) * C32588 * C21006) *
              C32649 * C32635 * C111 +
          ((C16004 + C16003 + C16002 + C16001) * C32588 * C21006 +
           (C15940 * C363 - C15941 * C351 - C15940 * C364 + C32971 * C381 +
            C15942 * C714 - C15943 * C707 - C15942 * C715 + C32967 * C722 +
            C15944 * C1165 - C15945 * C1156 - C15944 * C1166 + C32957 * C1183 +
            C15946 * C1729 - C15947 * C1724 - C15946 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15940 * C122 - C15941 * C115 - C15940 * C123 + C32971 * C136 +
            C15942 * C262 - C15943 * C248 - C15942 * C263 + C32967 * C278 +
            C15944 * C264 - C15945 * C249 - C15944 * C265 + C32957 * C279 +
            C15946 * C1032 - C15947 * C1024 - C15946 * C1033 + C32909 * C1042) *
               C32588 * C21006 +
           (C15940 * C367 - C15941 * C353 - C15940 * C368 + C32971 * C383 +
            C15942 * C710 - C15943 * C705 - C15942 * C711 + C32967 * C720 +
            C15944 * C1169 - C15945 * C1158 - C15944 * C1170 + C32957 * C1185 +
            C15946 * C1725 - C15947 * C1722 - C15946 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C15946 * C6479 - C15947 * C6476 - C15946 * C6480 + C32909 * C6485 +
            C15944 * C1725 - C15945 * C1722 - C15944 * C1726 + C32957 * C1731 +
            C15942 * C1169 - C15943 * C1158 - C15942 * C1170 + C32967 * C1185 +
            C15940 * C710 - C15941 * C705 - C15940 * C711 + C32971 * C720) *
               C32588 * C32777 +
           (C15946 * C1034 - C15947 * C1025 - C15946 * C1035 + C32909 * C1043 +
            C15944 * C1032 - C15945 * C1024 - C15944 * C1033 + C32957 * C1042 +
            C15942 * C264 - C15943 * C249 - C15942 * C265 + C32967 * C279 +
            C15940 * C262 - C15941 * C248 - C15940 * C263 + C32971 * C278) *
               C32588 * C21006) *
              C32649 * C241 +
          ((C15940 * C264 - C15941 * C249 - C15940 * C265 + C32971 * C279 +
            C15942 * C1032 - C15943 * C1024 - C15942 * C1033 + C32967 * C1042 +
            C15944 * C1034 - C15945 * C1025 - C15944 * C1035 + C32957 * C1043 +
            C15946 * C6408 - C15947 * C6406 - C15946 * C6409 + C32909 * C6412) *
               C32588 * C21006 +
           (C15940 * C1169 - C15941 * C1158 - C15940 * C1170 + C32971 * C1185 +
            C15942 * C1725 - C15943 * C1722 - C15942 * C1726 + C32967 * C1731 +
            C15944 * C6479 - C15945 * C6476 - C15944 * C6480 + C32957 * C6485 +
            C15946 * C6743 - C15947 * C6742 - C15946 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32882 +
            (C7828 + C7829 + C7830 + C7831) * C32598) *
               C32690 * C32649 * C471 -
           ((C8186 + C8187 + C8188 + C8189) * C32598 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32882) *
               C32690 * C32649 * C472) *
              C473 +
          (((C8189 + C8188 + C8187 + C8186) * C32882 +
            (C7771 * C258 - C7772 * C246 - C7771 * C259 + C7765 * C276 +
             C7773 * C268 - C7774 * C251 - C7773 * C269 + C7766 * C281 +
             C7775 * C1028 - C7776 * C1022 - C7775 * C1029 + C7767 * C1040 +
             C7777 * C1038 - C7778 * C1027 - C7777 * C1039 + C32909 * C1045) *
                C32598) *
               C32690 * C32649 * C472 -
           ((C7832 + C7833 + C7834 + C7835) * C32598 +
            (C7831 + C7830 + C7829 + C7828) * C32882) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C2770 +
            (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
               C32690 * C32649 * C471 -
           ((C3199 + C3200) * C32901 + (C3201 + C3202) * C2772 +
            (C3203 + C3204) * C2771 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C2770) *
               C32690 * C32649 * C472) *
              C473 +
          (((C3204 + C3203) * C2770 + (C3202 + C3201) * C2771 +
            (C3200 + C3199) * C2772 +
            (C2774 * C254 - C2775 * C244 - C2774 * C255 + C32900 * C274 +
             C2776 * C272 - C2777 * C253 - C2776 * C273 + C32735 * C283) *
                C32901) *
               C32690 * C32649 * C472 -
           ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
            (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C32882 +
             (C2827 + C2828) * C32598) *
                C10400 +
            ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
            C12949 * C32935) *
               C32649 * C471 -
           (((C13164 + C13165) * C32598 +
             (C2776 * C1173 - C2777 * C1160 - C2776 * C1174 + C32735 * C1187 +
              C2774 * C1171 - C2775 * C1159 - C2774 * C1172 + C32900 * C1186) *
                 C32882) *
                C32935 +
            ((C4931 + C4932) * C32598 + (C5337 + C5336) * C32882) * C10401 +
            ((C3203 + C3204) * C32598 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C32882) *
                C10400) *
               C32649 * C472) *
              C473 +
          ((((C3204 + C3203) * C32882 + (C3202 + C3201) * C32598) * C10400 +
            ((C4932 + C4931) * C32882 + (C4930 + C4929) * C32598) * C10401 +
            ((C13165 + C13164) * C32882 +
             (C2774 * C1179 - C2775 * C1163 - C2774 * C1180 + C32900 * C1190 +
              C2776 * C1181 - C2777 * C1164 - C2776 * C1182 + C32735 * C1191) *
                 C32598) *
                C32935) *
               C32649 * C472 -
           (((C4705 + C4706) * C32598 + (C4707 + C4708) * C32882) * C32935 +
            (C5128 * C32598 + C5129 * C32882) * C10401 +
            ((C2830 + C2829) * C32598 + (C2828 + C2827) * C32882) * C10400) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32882 +
            (C7828 + C7829 + C7830 + C7831) * C32598) *
               C32690 * C589 -
           ((C8344 + C8345 + C8346 + C8347) * C32598 +
            (C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731 +
             C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
             C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
             C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383) *
                C32882) *
               C32690 * C590) *
              C471 +
          (((C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720 +
             C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
             C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
             C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485) *
                C32882 +
            (C7771 * C712 - C7772 * C706 - C7771 * C713 + C7765 * C721 +
             C7773 * C1167 - C7774 * C1157 - C7773 * C1168 + C7766 * C1184 +
             C7775 * C1727 - C7776 * C1723 - C7775 * C1728 + C7767 * C1732 +
             C7777 * C6657 - C7778 * C6656 - C7777 * C6658 + C32909 * C6659) *
                C32598) *
               C32690 * C590 -
           ((C8186 + C8187 + C8188 + C8189) * C32598 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32882) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C2770 +
            (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
               C32690 * C589 -
           ((C3371 + C3372) * C32901 + (C3373 + C3374) * C2772 +
            (C3375 + C3376) * C2771 +
            (C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720 +
             C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383) *
                C2770) *
               C32690 * C590) *
              C471 +
          (((C2774 * C710 - C2775 * C705 - C2774 * C711 + C32900 * C720 +
             C2776 * C1169 - C2777 * C1158 - C2776 * C1170 + C32735 * C1185) *
                C2770 +
            (C2774 * C712 - C2775 * C706 - C2774 * C713 + C32900 * C721 +
             C2776 * C1167 - C2777 * C1157 - C2776 * C1168 + C32735 * C1184) *
                C2771 +
            (C2774 * C714 - C2775 * C707 - C2774 * C715 + C32900 * C722 +
             C2776 * C1165 - C2777 * C1156 - C2776 * C1166 + C32735 * C1183) *
                C2772 +
            (C2774 * C716 - C2775 * C708 - C2774 * C717 + C32900 * C723 +
             C2776 * C1531 - C2777 * C1530 - C2776 * C1532 + C32735 * C1533) *
                C32901) *
               C32690 * C590 -
           ((C3199 + C3200) * C32901 + (C3201 + C3202) * C2772 +
            (C3203 + C3204) * C2771 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C2770) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C32882 +
             (C2827 + C2828) * C32598) *
                C10400 +
            ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
            C12949 * C32935) *
               C589 -
           (((C12954 + C12955) * C32598 + (C12956 + C12957) * C32882) * C32935 +
            (C13360 * C32598 + (C4709 + C4710) * C32882) * C10401 +
            (C5129 * C32598 + (C4704 + C4703) * C32882) * C10400) *
               C590) *
              C471 +
          ((((C5336 + C5337) * C32882 + (C4932 + C4931) * C32598) * C10400 +
            ((C13567 + C13568) * C32882 + (C13165 + C13164) * C32598) * C10401 +
            ((C2774 * C2641 - C2775 * C2638 - C2774 * C2642 + C32900 * C2647 +
              C2776 * C7079 - C2777 * C7076 - C2776 * C7080 + C32735 * C7085) *
                 C32882 +
             (C2774 * C2643 - C2775 * C2639 - C2774 * C2644 + C32900 * C2648 +
              C2776 * C7451 - C2777 * C7450 - C2776 * C7452 + C32735 * C7453) *
                 C32598) *
                C32935) *
               C590 -
           (((C13164 + C13165) * C32598 + (C13568 + C13567) * C32882) * C32935 +
            ((C4931 + C4932) * C32598 + (C5337 + C5336) * C32882) * C10401 +
            ((C3203 + C3204) * C32598 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C32882) *
                C10400) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
                C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                   C2770 +
               (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
                  C32690 * C32649 * C32635 * C110 -
              ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
               (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
                  C32690 * C32649 * C32635 * C111 +
              (C2835 * C2770 + C2836 * C2771 + (C2834 + C2833) * C2772 +
               (C2774 * C132 - C2775 * C120 - C2774 * C133 + C32900 * C141 +
                C2776 * C476 - C2777 * C475 - C2776 * C477 + C32735 * C478) *
                   C32901) *
                  C32690 * C32649 * C32635 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
                C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                   C2770 +
               (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
                  C32690 * C32649 * C240 -
              ((C2776 * C270 - C2777 * C252 - C2776 * C271 + C32735 * C282 +
                C2774 * C256 - C2775 * C245 - C2774 * C257 + C32900 * C275) *
                   C32901 +
               (C2776 * C268 - C2777 * C251 - C2776 * C269 + C32735 * C281 +
                C2774 * C258 - C2775 * C246 - C2774 * C259 + C32900 * C276) *
                   C2772 +
               (C2776 * C266 - C2777 * C250 - C2776 * C267 + C32735 * C280 +
                C2774 * C260 - C2775 * C247 - C2774 * C261 + C32900 * C277) *
                   C2771 +
               (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
                C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                   C2770) *
                  C32690 * C32649 * C241 +
              ((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
                C2776 * C1032 - C2777 * C1024 - C2776 * C1033 +
                C32735 * C1042) *
                   C2770 +
               (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
                C2776 * C1030 - C2777 * C1023 - C2776 * C1031 +
                C32735 * C1041) *
                   C2771 +
               (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
                C2776 * C1028 - C2777 * C1022 - C2776 * C1029 +
                C32735 * C1040) *
                   C2772 +
               (C2774 * C270 - C2775 * C252 - C2774 * C271 + C32900 * C282 +
                C2776 * C1339 - C2777 * C1338 - C2776 * C1340 +
                C32735 * C1341) *
                   C32901) *
                  C32690 * C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C346 -
          ((C2776 * C716 - C2777 * C708 - C2776 * C717 + C32735 * C723 +
            C2774 * C361 - C2775 * C350 - C2774 * C362 + C32900 * C380) *
               C32901 +
           (C2776 * C714 - C2777 * C707 - C2776 * C715 + C32735 * C722 +
            C2774 * C363 - C2775 * C351 - C2774 * C364 + C32900 * C381) *
               C2772 +
           (C2776 * C712 - C2777 * C706 - C2776 * C713 + C32735 * C721 +
            C2774 * C365 - C2775 * C352 - C2774 * C366 + C32900 * C382) *
               C2771 +
           (C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720 +
            C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383) *
               C2770) *
              C32690 * C347 +
          ((C2774 * C369 - C2775 * C354 - C2774 * C370 + C32900 * C384 +
            C2776 * C1171 - C2777 * C1159 - C2776 * C1172 + C32735 * C1186) *
               C2770 +
           (C2774 * C371 - C2775 * C355 - C2774 * C372 + C32900 * C385 +
            C2776 * C1175 - C2777 * C1161 - C2776 * C1176 + C32735 * C1188) *
               C2771 +
           (C2774 * C373 - C2775 * C356 - C2774 * C374 + C32900 * C386 +
            C2776 * C1179 - C2777 * C1163 - C2776 * C1180 + C32735 * C1190) *
               C2772 +
           (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
            C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
               C32901) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C7832 + C7833 + C7834 + C7835) * C32598 +
           (C7831 + C7830 + C7829 + C7828) * C32882) *
              C32690 * C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32882 +
           (C7771 * C128 - C7772 * C118 - C7771 * C129 + C7765 * C139 +
            C7773 * C256 - C7774 * C245 - C7773 * C257 + C7766 * C275 +
            C7775 * C270 - C7776 * C252 - C7775 * C271 + C7767 * C282 +
            C7777 * C1339 - C7778 * C1338 - C7777 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C240 -
          ((C7777 * C1036 - C7778 * C1026 - C7777 * C1037 + C32909 * C1044 +
            C7775 * C1030 - C7776 * C1023 - C7775 * C1031 + C7767 * C1041 +
            C7773 * C266 - C7774 * C250 - C7773 * C267 + C7766 * C280 +
            C7771 * C260 - C7772 * C247 - C7771 * C261 + C7765 * C277) *
               C32598 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32882) *
              C32690 * C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32882 +
           (C7771 * C266 - C7772 * C250 - C7771 * C267 + C7765 * C280 +
            C7773 * C1030 - C7774 * C1023 - C7773 * C1031 + C7766 * C1041 +
            C7775 * C1036 - C7776 * C1026 - C7775 * C1037 + C7767 * C1044 +
            C7777 * C6571 - C7778 * C6570 - C7777 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C346 -
          ((C7777 * C1727 - C7778 * C1723 - C7777 * C1728 + C32909 * C1732 +
            C7775 * C1167 - C7776 * C1157 - C7775 * C1168 + C7767 * C1184 +
            C7773 * C712 - C7774 * C706 - C7773 * C713 + C7766 * C721 +
            C7771 * C365 - C7772 * C352 - C7771 * C366 + C7765 * C382) *
               C32598 +
           (C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383) *
               C32882) *
              C32690 * C347 +
          ((C7771 * C369 - C7772 * C354 - C7771 * C370 + C7765 * C384 +
            C7773 * C1171 - C7774 * C1159 - C7773 * C1172 + C7766 * C1186 +
            C7775 * C1173 - C7776 * C1160 - C7775 * C1174 + C7767 * C1187 +
            C7777 * C6481 - C7778 * C6477 - C7777 * C6482 + C32909 * C6486) *
               C32882 +
           (C7771 * C371 - C7772 * C355 - C7771 * C372 + C7765 * C385 +
            C7773 * C1175 - C7774 * C1161 - C7773 * C1176 + C7766 * C1188 +
            C7775 * C1177 - C7776 * C1162 - C7775 * C1178 + C7767 * C1189 +
            C7777 * C7301 - C7778 * C7300 - C7777 * C7302 + C32909 * C7303) *
               C32598) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32882 +
            (C2827 + C2828) * C32598) *
               C10400 +
           ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
           ((C4710 + C4709) * C32882 + (C4708 + C4707) * C32598) * C32935) *
              C32649 * C32635 * C110 -
          (((C4705 + C4706) * C32598 + (C4707 + C4708) * C32882) * C32935 +
           (C5128 * C32598 + C5129 * C32882) * C10401 +
           ((C2830 + C2829) * C32598 + (C2828 + C2827) * C32882) * C10400) *
              C32649 * C32635 * C111 +
          ((C2835 * C32882 + C2836 * C32598) * C10400 +
           (C4362 * C32882 + (C3372 + C3371) * C32598) * C10401 +
           ((C4706 + C4705) * C32882 +
            (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
             C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
                C32598) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32882 +
            (C2827 + C2828) * C32598) *
               C10400 +
           ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
           ((C4710 + C4709) * C32882 + (C4708 + C4707) * C32598) * C32935) *
              C32649 * C240 -
          (((C2776 * C1177 - C2777 * C1162 - C2776 * C1178 + C32735 * C1189 +
             C2774 * C1175 - C2775 * C1161 - C2774 * C1176 + C32900 * C1188) *
                C32598 +
            (C2776 * C1173 - C2777 * C1160 - C2776 * C1174 + C32735 * C1187 +
             C2774 * C1171 - C2775 * C1159 - C2774 * C1172 + C32900 * C1186) *
                C32882) *
               C32935 +
           ((C4931 + C4932) * C32598 + (C5337 + C5336) * C32882) * C10401 +
           ((C3203 + C3204) * C32598 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C32882) *
               C10400) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C32882 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C32598) *
               C10400 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C32882 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C32598) *
               C10401 +
           ((C2774 * C1173 - C2775 * C1160 - C2774 * C1174 + C32900 * C1187 +
             C2776 * C6481 - C2777 * C6477 - C2776 * C6482 + C32735 * C6486) *
                C32882 +
            (C2774 * C1177 - C2775 * C1162 - C2774 * C1178 + C32900 * C1189 +
             C2776 * C7301 - C2777 * C7300 - C2776 * C7302 + C32735 * C7303) *
                C32598) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32882 +
            (C2827 + C2828) * C32598) *
               C10400 +
           ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
           C12949 * C32935) *
              C346 -
          (((C12954 + C12955) * C32598 + (C12956 + C12957) * C32882) * C32935 +
           ((C4707 + C4708) * C32598 + (C4709 + C4710) * C32882) * C10401 +
           (C5129 * C32598 + (C4704 + C4703) * C32882) * C10400) *
              C347 +
          (C12949 * C10400 +
           ((C12957 + C12956) * C32882 + (C12955 + C12954) * C32598) * C10401 +
           ((C2774 * C2100 - C2775 * C2091 - C2774 * C2101 + C32900 * C2109 +
             C2776 * C7081 - C2777 * C7077 - C2776 * C7082 + C32735 * C7086) *
                C32882 +
            (C2774 * C2102 - C2775 * C2092 - C2774 * C2103 + C32900 * C2110 +
             C2776 * C12282 - C2777 * C12281 - C2776 * C12283 +
             C32735 * C12284) *
                C32598) *
               C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32882 +
            (C7828 + C7829 + C7830 + C7831) * C32598) *
               C32690 * C589 -
           ((C8344 + C8345 + C8346 + C8347) * C32598 +
            (C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731 +
             C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
             C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
             C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383) *
                C32882) *
               C32690 * C590) *
              C32635 * C473 +
          (((C8347 + C8346 + C8345 + C8344) * C32882 +
            (C7771 * C363 - C7772 * C351 - C7771 * C364 + C7765 * C381 +
             C7773 * C714 - C7774 * C707 - C7773 * C715 + C7766 * C722 +
             C7775 * C1165 - C7776 * C1156 - C7775 * C1166 + C7767 * C1183 +
             C7777 * C1729 - C7778 * C1724 - C7777 * C1730 + C32909 * C1733) *
                C32598) *
               C32690 * C590 -
           ((C7832 + C7833 + C7834 + C7835) * C32598 +
            (C7831 + C7830 + C7829 + C7828) * C32882) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C2770 +
            (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
               C32690 * C589 -
           ((C3371 + C3372) * C32901 + (C3373 + C3374) * C2772 +
            (C3375 + C3376) * C2771 +
            (C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720 +
             C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383) *
                C2770) *
               C32690 * C590) *
              C32635 * C473 +
          (((C3376 + C3375) * C2770 + (C3374 + C3373) * C2771 +
            (C3372 + C3371) * C2772 +
            (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
             C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                C32901) *
               C32690 * C590 -
           ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
            (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C32882 +
             (C2827 + C2828) * C32598) *
                C10400 +
            ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
            C12949 * C32935) *
               C589 -
           (((C12954 + C12955) * C32598 + (C12956 + C12957) * C32882) * C32935 +
            (C13360 * C32598 + (C4709 + C4710) * C32882) * C10401 +
            (C5129 * C32598 + (C4704 + C4703) * C32882) * C10400) *
               C590) *
              C32635 * C473 +
          (((C5127 * C32882 + C4362 * C32598) * C10400 +
            (C12926 * C32882 + (C4706 + C4705) * C32598) * C10401 +
            ((C12955 + C12954) * C32882 +
             (C2774 * C2094 - C2775 * C2088 - C2774 * C2095 + C32900 * C2106 +
              C2776 * C2645 - C2777 * C2640 - C2776 * C2646 + C32735 * C2649) *
                 C32598) *
                C32935) *
               C590 -
           (((C4705 + C4706) * C32598 + C13360 * C32882) * C32935 +
            (C5128 * C32598 + C5129 * C32882) * C10401 +
            ((C2830 + C2829) * C32598 + (C2828 + C2827) * C32882) * C10400) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[54] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C32649 * C240 -
          ((C2776 * C270 - C2777 * C252 - C2776 * C271 + C32735 * C282 +
            C2774 * C256 - C2775 * C245 - C2774 * C257 + C32900 * C275) *
               C32901 +
           (C2776 * C268 - C2777 * C251 - C2776 * C269 + C32735 * C281 +
            C2774 * C258 - C2775 * C246 - C2774 * C259 + C32900 * C276) *
               C2772 +
           (C2776 * C266 - C2777 * C250 - C2776 * C267 + C32735 * C280 +
            C2774 * C260 - C2775 * C247 - C2774 * C261 + C32900 * C277) *
               C2771 +
           (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
            C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
               C2770) *
              C32690 * C32649 * C241 +
          ((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
            C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
               C2770 +
           (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
            C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
               C2771 +
           (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
            C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
               C2772 +
           (C2774 * C270 - C2775 * C252 - C2774 * C271 + C32900 * C282 +
            C2776 * C1339 - C2777 * C1338 - C2776 * C1340 + C32735 * C1341) *
               C32901) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C32649 * C32635 * C110 -
          ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
           (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
              C32690 * C32649 * C32635 * C111 +
          (C2835 * C2770 + C2836 * C2771 + (C2834 + C2833) * C2772 +
           (C2774 * C132 - C2775 * C120 - C2774 * C133 + C32900 * C141 +
            C2776 * C476 - C2777 * C475 - C2776 * C477 + C32735 * C478) *
               C32901) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C7832 + C7833 + C7834 + C7835) * C32598 +
           (C7831 + C7830 + C7829 + C7828) * C32882) *
              C32690 * C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32882 +
           (C7771 * C128 - C7772 * C118 - C7771 * C129 + C7765 * C139 +
            C7773 * C256 - C7774 * C245 - C7773 * C257 + C7766 * C275 +
            C7775 * C270 - C7776 * C252 - C7775 * C271 + C7767 * C282 +
            C7777 * C1339 - C7778 * C1338 - C7777 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C240 -
          ((C7777 * C1036 - C7778 * C1026 - C7777 * C1037 + C32909 * C1044 +
            C7775 * C1030 - C7776 * C1023 - C7775 * C1031 + C7767 * C1041 +
            C7773 * C266 - C7774 * C250 - C7773 * C267 + C7766 * C280 +
            C7771 * C260 - C7772 * C247 - C7771 * C261 + C7765 * C277) *
               C32598 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32882) *
              C32690 * C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32882 +
           (C7771 * C266 - C7772 * C250 - C7771 * C267 + C7765 * C280 +
            C7773 * C1030 - C7774 * C1023 - C7773 * C1031 + C7766 * C1041 +
            C7775 * C1036 - C7776 * C1026 - C7775 * C1037 + C7767 * C1044 +
            C7777 * C6571 - C7778 * C6570 - C7777 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32882 +
            (C2827 + C2828) * C32598) *
               C10400 +
           ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
           ((C4710 + C4709) * C32882 + (C4708 + C4707) * C32598) * C32935) *
              C32649 * C32635 * C110 -
          (((C4705 + C4706) * C32598 + (C4707 + C4708) * C32882) * C32935 +
           (C5128 * C32598 + C5129 * C32882) * C10401 +
           ((C2830 + C2829) * C32598 + (C2828 + C2827) * C32882) * C10400) *
              C32649 * C32635 * C111 +
          ((C2835 * C32882 + C2836 * C32598) * C10400 +
           (C4362 * C32882 + (C3372 + C3371) * C32598) * C10401 +
           ((C4706 + C4705) * C32882 +
            (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
             C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
                C32598) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32882 +
            (C2827 + C2828) * C32598) *
               C10400 +
           ((C4703 + C4704) * C32882 + C5127 * C32598) * C10401 +
           ((C4710 + C4709) * C32882 + (C4708 + C4707) * C32598) * C32935) *
              C32649 * C240 -
          (((C2776 * C1177 - C2777 * C1162 - C2776 * C1178 + C32735 * C1189 +
             C2774 * C1175 - C2775 * C1161 - C2774 * C1176 + C32900 * C1188) *
                C32598 +
            (C2776 * C1173 - C2777 * C1160 - C2776 * C1174 + C32735 * C1187 +
             C2774 * C1171 - C2775 * C1159 - C2774 * C1172 + C32900 * C1186) *
                C32882) *
               C32935 +
           ((C4931 + C4932) * C32598 + (C5337 + C5336) * C32882) * C10401 +
           ((C3203 + C3204) * C32598 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C32882) *
               C10400) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C32882 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C32598) *
               C10400 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C32882 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C32598) *
               C10401 +
           ((C2774 * C1173 - C2775 * C1160 - C2774 * C1174 + C32900 * C1187 +
             C2776 * C6481 - C2777 * C6477 - C2776 * C6482 + C32735 * C6486) *
                C32882 +
            (C2774 * C1177 - C2775 * C1162 - C2774 * C1178 + C32900 * C1189 +
             C2776 * C7301 - C2777 * C7300 - C2776 * C7302 + C32735 * C7303) *
                C32598) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[55] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32588 * C32902 +
            (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
               C32649 * C471 -
           ((C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485 +
             C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
             C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
             C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720) *
                C32588 * C32777 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32588 * C32902) *
               C32649 * C472) *
              C473 +
          (((C8189 + C8188 + C8187 + C8186) * C32588 * C32902 +
            (C7771 * C712 - C7772 * C706 - C7771 * C713 + C7765 * C721 +
             C7773 * C1167 - C7774 * C1157 - C7773 * C1168 + C7766 * C1184 +
             C7775 * C1727 - C7776 * C1723 - C7775 * C1728 + C7767 * C1732 +
             C7777 * C6657 - C7778 * C6656 - C7777 * C6658 + C32909 * C6659) *
                C32588 * C32777) *
               C32649 * C472 -
           ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
            (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C838 +
             (C2827 + C2828) * C839 + C2835 * C32923) *
                C32902 +
            ((C4703 + C4704) * C838 + (C3376 + C3375) * C839 + C4362 * C32923) *
                C32777) *
               C32649 * C471 -
           (((C4929 + C4930) * C32923 + (C4931 + C4932) * C839 +
             (C2776 * C1169 - C2777 * C1158 - C2776 * C1170 + C32735 * C1185 +
              C2774 * C710 - C2775 * C705 - C2774 * C711 + C32900 * C720) *
                 C838) *
                C32777 +
            ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C838) *
                C32902) *
               C32649 * C472) *
              C473 +
          ((((C3204 + C3203) * C838 + (C3202 + C3201) * C839 +
             (C3200 + C3199) * C32923) *
                C32902 +
            ((C4932 + C4931) * C838 + (C4930 + C4929) * C839 +
             (C2774 * C716 - C2775 * C708 - C2774 * C717 + C32900 * C723 +
              C2776 * C1531 - C2777 * C1530 - C2776 * C1532 + C32735 * C1533) *
                 C32923) *
                C32777) *
               C32649 * C472 -
           (((C3371 + C3372) * C32923 + (C3373 + C3374) * C839 +
             (C3375 + C3376) * C838) *
                C32777 +
            ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
             (C2828 + C2827) * C838) *
                C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32588 * C13666 +
            (C4703 + C4704) * C32588 * C13667 + C14580 * C13668 +
            C14590 * C32916) *
               C32649 * C471 -
           ((C2776 * C7079 - C2777 * C7076 - C2776 * C7080 + C32735 * C7085 +
             C2774 * C2641 - C2775 * C2638 - C2774 * C2642 + C32900 * C2647) *
                C32588 * C32916 +
            (C13568 + C13567) * C32588 * C13668 +
            (C5337 + C5336) * C32588 * C13667 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C32588 * C13666) *
               C32649 * C472) *
              C473 +
          (((C3204 + C3203) * C32588 * C13666 +
            (C4932 + C4931) * C32588 * C13667 +
            (C13165 + C13164) * C32588 * C13668 +
            (C2774 * C2643 - C2775 * C2639 - C2774 * C2644 + C32900 * C2648 +
             C2776 * C7451 - C2777 * C7450 - C2776 * C7452 + C32735 * C7453) *
                C32588 * C32916) *
               C32649 * C472 -
           ((C12954 + C12955) * C32588 * C32916 + C13360 * C32588 * C13668 +
            C5129 * C32588 * C13667 + (C2828 + C2827) * C32588 * C13666) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[56] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32588 * C32902 +
            (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
               C589 -
           ((C9869 + C9870 + C9871 + C9872) * C32588 * C32777 +
            (C9868 + C9867 + C9866 + C9865) * C32588 * C32902) *
               C590) *
              C471 +
          (((C10287 + C10288 + C10289 + C10290) * C32588 * C32902 +
            (C7771 * C1171 - C7772 * C1159 - C7771 * C1172 + C7765 * C1186 +
             C7773 * C1173 - C7774 * C1160 - C7773 * C1174 + C7766 * C1187 +
             C7775 * C6481 - C7776 * C6477 - C7775 * C6482 + C7767 * C6486 +
             C7777 * C6483 - C7778 * C6478 - C7777 * C6484 + C32909 * C6487) *
                C32588 * C32777) *
               C590 -
           ((C10290 + C10289 + C10288 + C10287) * C32588 * C32777 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32588 * C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C838 +
             (C2827 + C2828) * C839 + C2835 * C32923) *
                C32902 +
            ((C4703 + C4704) * C838 + C5127 * C839 + C4362 * C32923) * C32777) *
               C589 -
           (((C4705 + C4706) * C32923 + (C4707 + C4708) * C839 +
             (C4709 + C4710) * C838) *
                C32777 +
            (C5128 * C32923 + C5129 * C839 + (C4704 + C4703) * C838) * C32902) *
               C590) *
              C471 +
          ((((C5336 + C5337) * C838 + (C4932 + C4931) * C839 +
             (C4930 + C4929) * C32923) *
                C32902 +
            ((C2774 * C1171 - C2775 * C1159 - C2774 * C1172 + C32900 * C1186 +
              C2776 * C1173 - C2777 * C1160 - C2776 * C1174 + C32735 * C1187) *
                 C838 +
             (C2774 * C1175 - C2775 * C1161 - C2774 * C1176 + C32900 * C1188 +
              C2776 * C1177 - C2777 * C1162 - C2776 * C1178 + C32735 * C1189) *
                 C839 +
             (C2774 * C1179 - C2775 * C1163 - C2774 * C1180 + C32900 * C1190 +
              C2776 * C1181 - C2777 * C1164 - C2776 * C1182 + C32735 * C1191) *
                 C32923) *
                C32777) *
               C590 -
           (((C4929 + C4930) * C32923 + (C4931 + C4932) * C839 +
             (C5337 + C5336) * C838) *
                C32777 +
            ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C838) *
                C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32588 * C13666 +
            (C4703 + C4704) * C32588 * C13667 + C14580 * C13668 +
            C14590 * C32916) *
               C589 -
           ((C14595 + C14596) * C32588 * C32916 +
            (C12956 + C12957) * C32588 * C13668 +
            (C4709 + C4710) * C32588 * C13667 +
            (C4704 + C4703) * C32588 * C13666) *
               C590) *
              C471 +
          (((C5336 + C5337) * C32588 * C13666 +
            (C13567 + C13568) * C32588 * C13667 +
            (C14999 + C15000) * C32588 * C13668 +
            (C2774 * C7081 - C2775 * C7077 - C2774 * C7082 + C32900 * C7086 +
             C2776 * C7083 - C2777 * C7078 - C2776 * C7084 + C32735 * C7087) *
                C32588 * C32916) *
               C590 -
           ((C15000 + C14999) * C32588 * C32916 +
            (C13568 + C13567) * C32588 * C13668 +
            (C5337 + C5336) * C32588 * C13667 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C32588 * C13666) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[57] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
                 C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                    C838 +
                (C2827 + C2828) * C839 + C2835 * C32923) *
                   C32902 +
               ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
                 C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                    C838 +
                (C3376 + C3375) * C839 + C4362 * C32923) *
                   C32777) *
                  C32649 * C32635 * C110 -
              (((C3371 + C3372) * C32923 + (C3373 + C3374) * C839 +
                (C3375 + C3376) * C838) *
                   C32777 +
               ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
                (C2828 + C2827) * C838) *
                   C32902) *
                  C32649 * C32635 * C111 +
              ((C2835 * C838 + C2836 * C839 + (C2834 + C2833) * C32923) *
                   C32902 +
               (C4362 * C838 + (C3372 + C3371) * C839 +
                (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
                 C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                    C32923) *
                   C32777) *
                  C32649 * C32635 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
                 C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                    C838 +
                (C2827 + C2828) * C839 + C2835 * C32923) *
                   C32902 +
               ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
                 C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                    C838 +
                (C3376 + C3375) * C839 + C4362 * C32923) *
                   C32777) *
                  C32649 * C240 -
              (((C2776 * C1165 - C2777 * C1156 - C2776 * C1166 +
                 C32735 * C1183 + C2774 * C714 - C2775 * C707 - C2774 * C715 +
                 C32900 * C722) *
                    C32923 +
                (C2776 * C1167 - C2777 * C1157 - C2776 * C1168 +
                 C32735 * C1184 + C2774 * C712 - C2775 * C706 - C2774 * C713 +
                 C32900 * C721) *
                    C839 +
                (C2776 * C1169 - C2777 * C1158 - C2776 * C1170 +
                 C32735 * C1185 + C2774 * C710 - C2775 * C705 - C2774 * C711 +
                 C32900 * C720) *
                    C838) *
                   C32777 +
               ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
                (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
                 C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                    C838) *
                   C32902) *
                  C32649 * C241 +
              (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
                 C2776 * C1032 - C2777 * C1024 - C2776 * C1033 +
                 C32735 * C1042) *
                    C838 +
                (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
                 C2776 * C1030 - C2777 * C1023 - C2776 * C1031 +
                 C32735 * C1041) *
                    C839 +
                (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
                 C2776 * C1028 - C2777 * C1022 - C2776 * C1029 +
                 C32735 * C1040) *
                    C32923) *
                   C32902 +
               ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 +
                 C32900 * C1185 + C2776 * C1725 - C2777 * C1722 -
                 C2776 * C1726 + C32735 * C1731) *
                    C838 +
                (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 +
                 C32900 * C1184 + C2776 * C1727 - C2777 * C1723 -
                 C2776 * C1728 + C32735 * C1732) *
                    C839 +
                (C2774 * C1165 - C2775 * C1156 - C2774 * C1166 +
                 C32900 * C1183 + C2776 * C1729 - C2777 * C1724 -
                 C2776 * C1730 + C32735 * C1733) *
                    C32923) *
                   C32777) *
                  C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C4703 + C4704) * C838 + (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C346 -
          (((C4705 + C4706) * C32923 + (C4707 + C4708) * C839 +
            (C4709 + C4710) * C838) *
               C32777 +
           ((C3373 + C3374) * C32923 + (C3375 + C3376) * C839 +
            (C4704 + C4703) * C838) *
               C32902) *
              C347 +
          (((C4710 + C4709) * C838 + (C4708 + C4707) * C839 +
            (C4706 + C4705) * C32923) *
               C32902 +
           ((C2774 * C2098 - C2775 * C2090 - C2774 * C2099 + C32900 * C2108 +
             C2776 * C2641 - C2777 * C2638 - C2776 * C2642 + C32735 * C2647) *
                C838 +
            (C2774 * C2096 - C2775 * C2089 - C2774 * C2097 + C32900 * C2107 +
             C2776 * C2643 - C2777 * C2639 - C2776 * C2644 + C32735 * C2648) *
                C839 +
            (C2774 * C2094 - C2775 * C2088 - C2774 * C2095 + C32900 * C2106 +
             C2776 * C2645 - C2777 * C2640 - C2776 * C2646 + C32735 * C2649) *
                C32923) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
           (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
              C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32588 * C32902 +
           (C7771 * C363 - C7772 * C351 - C7771 * C364 + C7765 * C381 +
            C7773 * C714 - C7774 * C707 - C7773 * C715 + C7766 * C722 +
            C7775 * C1165 - C7776 * C1156 - C7775 * C1166 + C7767 * C1183 +
            C7777 * C1729 - C7778 * C1724 - C7777 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485 +
            C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
            C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
            C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720) *
               C32588 * C32777 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32588 * C32902) *
              C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32588 * C32902 +
           (C7771 * C1169 - C7772 * C1158 - C7771 * C1170 + C7765 * C1185 +
            C7773 * C1725 - C7774 * C1722 - C7773 * C1726 + C7766 * C1731 +
            C7775 * C6479 - C7776 * C6476 - C7775 * C6480 + C7767 * C6485 +
            C7777 * C6743 - C7778 * C6742 - C7777 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
              C346 -
          ((C9869 + C9870 + C9871 + C9872) * C32588 * C32777 +
           (C9868 + C9867 + C9866 + C9865) * C32588 * C32902) *
              C347 +
          ((C9872 + C9871 + C9870 + C9869) * C32588 * C32902 +
           (C7771 * C2098 - C7772 * C2090 - C7771 * C2099 + C7765 * C2108 +
            C7773 * C2641 - C7774 * C2638 - C7773 * C2642 + C7766 * C2647 +
            C7775 * C7079 - C7776 * C7076 - C7775 * C7080 + C7767 * C7085 +
            C7777 * C7622 - C7778 * C7621 - C7777 * C7623 + C32909 * C7624) *
               C32588 * C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C32588 * C13666 +
           (C4703 + C4704) * C32588 * C13667 + C12925 * C32588 * C13668 +
           (C12957 + C12956) * C32588 * C32916) *
              C32649 * C32635 * C110 -
          ((C12954 + C12955) * C32588 * C32916 + C13360 * C32588 * C13668 +
           C5129 * C32588 * C13667 + (C2828 + C2827) * C32588 * C13666) *
              C32649 * C32635 * C111 +
          (C2835 * C32588 * C13666 + C4362 * C32588 * C13667 +
           (C4706 + C4705) * C32588 * C13668 +
           (C2774 * C2094 - C2775 * C2088 - C2774 * C2095 + C32900 * C2106 +
            C2776 * C2645 - C2777 * C2640 - C2776 * C2646 + C32735 * C2649) *
               C32588 * C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C32588 * C13666 +
           (C4703 + C4704) * C32588 * C13667 + C12925 * C32588 * C13668 +
           (C12957 + C12956) * C32588 * C32916) *
              C32649 * C240 -
          ((C2776 * C7079 - C2777 * C7076 - C2776 * C7080 + C32735 * C7085 +
            C2774 * C2641 - C2775 * C2638 - C2774 * C2642 + C32900 * C2647) *
               C32588 * C32916 +
           (C13568 + C13567) * C32588 * C13668 +
           (C5337 + C5336) * C32588 * C13667 +
           (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
            C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
               C32588 * C13666) *
              C32649 * C241 +
          ((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
            C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
               C32588 * C13666 +
           (C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
            C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
               C32588 * C13667 +
           (C2774 * C1173 - C2775 * C1160 - C2774 * C1174 + C32900 * C1187 +
            C2776 * C6481 - C2777 * C6477 - C2776 * C6482 + C32735 * C6486) *
               C32588 * C13668 +
           (C2774 * C7079 - C2775 * C7076 - C2774 * C7080 + C32900 * C7085 +
            C2776 * C7622 - C2777 * C7621 - C2776 * C7623 + C32735 * C7624) *
               C32588 * C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C32588 * C13666 +
           (C4703 + C4704) * C32588 * C13667 + C14580 * C13668 +
           C14590 * C32916) *
              C346 -
          ((C14595 + C14596) * C32588 * C32916 +
           (C12956 + C12957) * C32588 * C13668 +
           (C4709 + C4710) * C32588 * C13667 +
           (C4704 + C4703) * C32588 * C13666) *
              C347 +
          (C14580 * C13666 + C14590 * C13667 +
           (C14596 + C14595) * C32588 * C13668 +
           (C2774 * C12174 - C2775 * C12172 - C2774 * C12175 + C32900 * C12178 +
            C2776 * C12465 - C2777 * C12464 - C2776 * C12466 +
            C32735 * C12467) *
               C32588 * C32916) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[58] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32588 * C32902 +
            (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
               C589 -
           ((C9869 + C9870 + C9871 + C9872) * C32588 * C32777 +
            (C9868 + C9867 + C9866 + C9865) * C32588 * C32902) *
               C590) *
              C32635 * C473 +
          (((C8347 + C8346 + C8345 + C8344) * C32588 * C32902 +
            (C7771 * C371 - C7772 * C355 - C7771 * C372 + C7765 * C385 +
             C7773 * C1175 - C7774 * C1161 - C7773 * C1176 + C7766 * C1188 +
             C7775 * C1177 - C7776 * C1162 - C7775 * C1178 + C7767 * C1189 +
             C7777 * C7301 - C7778 * C7300 - C7777 * C7302 + C32909 * C7303) *
                C32588 * C32777) *
               C590 -
           ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
            (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C838 +
             (C2827 + C2828) * C839 + C2835 * C32923) *
                C32902 +
            ((C4703 + C4704) * C838 + C5127 * C839 + C4362 * C32923) * C32777) *
               C589 -
           (((C4705 + C4706) * C32923 + (C4707 + C4708) * C839 +
             (C4709 + C4710) * C838) *
                C32777 +
            (C5128 * C32923 + C5129 * C839 + (C4704 + C4703) * C838) * C32902) *
               C590) *
              C32635 * C473 +
          (((C5127 * C838 + C4362 * C839 + (C3372 + C3371) * C32923) * C32902 +
            ((C4708 + C4707) * C838 + (C4706 + C4705) * C839 +
             (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
              C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
                 C32923) *
                C32777) *
               C590 -
           (((C3371 + C3372) * C32923 + C5128 * C839 + C5129 * C838) * C32777 +
            ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
             (C2828 + C2827) * C838) *
                C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32588 * C13666 +
            (C4703 + C4704) * C32588 * C13667 + C14580 * C13668 +
            C14590 * C32916) *
               C589 -
           ((C14595 + C14596) * C32588 * C32916 +
            (C12956 + C12957) * C32588 * C13668 +
            (C4709 + C4710) * C32588 * C13667 +
            (C4704 + C4703) * C32588 * C13666) *
               C590) *
              C32635 * C473 +
          ((C5127 * C32588 * C13666 + C12926 * C32588 * C13667 +
            (C12955 + C12954) * C32588 * C13668 +
            (C2774 * C2102 - C2775 * C2092 - C2774 * C2103 + C32900 * C2110 +
             C2776 * C12282 - C2777 * C12281 - C2776 * C12283 +
             C32735 * C12284) *
                C32588 * C32916) *
               C590 -
           ((C12954 + C12955) * C32588 * C32916 + C13360 * C32588 * C13668 +
            C5129 * C32588 * C13667 + (C2828 + C2827) * C32588 * C13666) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[59] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
             C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                C838 +
            (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C32649 * C240 -
          (((C2776 * C1165 - C2777 * C1156 - C2776 * C1166 + C32735 * C1183 +
             C2774 * C714 - C2775 * C707 - C2774 * C715 + C32900 * C722) *
                C32923 +
            (C2776 * C1167 - C2777 * C1157 - C2776 * C1168 + C32735 * C1184 +
             C2774 * C712 - C2775 * C706 - C2774 * C713 + C32900 * C721) *
                C839 +
            (C2776 * C1169 - C2777 * C1158 - C2776 * C1170 + C32735 * C1185 +
             C2774 * C710 - C2775 * C705 - C2774 * C711 + C32900 * C720) *
                C838) *
               C32777 +
           ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C838) *
               C32902) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C838 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C839 +
            (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
             C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
                C32923) *
               C32902 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C838 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C839 +
            (C2774 * C1165 - C2775 * C1156 - C2774 * C1166 + C32900 * C1183 +
             C2776 * C1729 - C2777 * C1724 - C2776 * C1730 + C32735 * C1733) *
                C32923) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
             C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                C838 +
            (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C3371 + C3372) * C32923 + (C3373 + C3374) * C839 +
            (C3375 + C3376) * C838) *
               C32777 +
           ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
            (C2828 + C2827) * C838) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C2835 * C838 + C2836 * C839 + (C2834 + C2833) * C32923) * C32902 +
           (C4362 * C838 + (C3372 + C3371) * C839 +
            (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
             C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                C32923) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
           (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
              C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32588 * C32902 +
           (C7771 * C363 - C7772 * C351 - C7771 * C364 + C7765 * C381 +
            C7773 * C714 - C7774 * C707 - C7773 * C715 + C7766 * C722 +
            C7775 * C1165 - C7776 * C1156 - C7775 * C1166 + C7767 * C1183 +
            C7777 * C1729 - C7778 * C1724 - C7777 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485 +
            C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
            C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
            C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720) *
               C32588 * C32777 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32588 * C32902) *
              C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32588 * C32902 +
           (C7771 * C1169 - C7772 * C1158 - C7771 * C1170 + C7765 * C1185 +
            C7773 * C1725 - C7774 * C1722 - C7773 * C1726 + C7766 * C1731 +
            C7775 * C6479 - C7776 * C6476 - C7775 * C6480 + C7767 * C6485 +
            C7777 * C6743 - C7778 * C6742 - C7777 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C32588 * C13666 +
           (C4703 + C4704) * C32588 * C13667 + C12925 * C32588 * C13668 +
           (C12957 + C12956) * C32588 * C32916) *
              C32649 * C32635 * C110 -
          ((C12954 + C12955) * C32588 * C32916 + C13360 * C32588 * C13668 +
           C5129 * C32588 * C13667 + (C2828 + C2827) * C32588 * C13666) *
              C32649 * C32635 * C111 +
          (C2835 * C32588 * C13666 + C4362 * C32588 * C13667 +
           (C4706 + C4705) * C32588 * C13668 +
           (C2774 * C2094 - C2775 * C2088 - C2774 * C2095 + C32900 * C2106 +
            C2776 * C2645 - C2777 * C2640 - C2776 * C2646 + C32735 * C2649) *
               C32588 * C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C32588 * C13666 +
           (C4703 + C4704) * C32588 * C13667 + C12925 * C32588 * C13668 +
           (C12957 + C12956) * C32588 * C32916) *
              C32649 * C240 -
          ((C2776 * C7079 - C2777 * C7076 - C2776 * C7080 + C32735 * C7085 +
            C2774 * C2641 - C2775 * C2638 - C2774 * C2642 + C32900 * C2647) *
               C32588 * C32916 +
           (C13568 + C13567) * C32588 * C13668 +
           (C5337 + C5336) * C32588 * C13667 +
           (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
            C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
               C32588 * C13666) *
              C32649 * C241 +
          ((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
            C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
               C32588 * C13666 +
           (C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
            C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
               C32588 * C13667 +
           (C2774 * C1173 - C2775 * C1160 - C2774 * C1174 + C32900 * C1187 +
            C2776 * C6481 - C2777 * C6477 - C2776 * C6482 + C32735 * C6486) *
               C32588 * C13668 +
           (C2774 * C7079 - C2775 * C7076 - C2774 * C7080 + C32900 * C7085 +
            C2776 * C7622 - C2777 * C7621 - C2776 * C7623 + C32735 * C7624) *
               C32588 * C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[60] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C102 +
                C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                   C32690 * C32649 * C471 -
               (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
                (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                    C102) *
                   C32690 * C32649 * C472) *
                  C473 +
              ((C507 * C102 + C506 * C103 + C505 * C104 + C504 * C105 +
                (C113 * C476 - C114 * C475 - C113 * C477 + C32672 * C478) *
                    C106) *
                   C32690 * C32649 * C472 -
               (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
                C174 * C102) *
                   C32690 * C32649 * C471) *
                  C474) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
                 C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
                 C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                    C838 +
                (C902 + C903 + C904) * C839 + C912 * C32923) *
                   C32690 * C32649 * C471 -
               ((C1379 + C1380 + C1381) * C32923 +
                (C1382 + C1383 + C1384) * C839 +
                (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
                 C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
                 C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                    C838) *
                   C32690 * C32649 * C472) *
                  C473 +
              (((C1384 + C1383 + C1382) * C838 +
                (C1381 + C1380 + C1379) * C839 +
                (C841 * C256 - C842 * C245 - C841 * C257 + C32964 * C275 +
                 C843 * C270 - C844 * C252 - C843 * C271 + C32952 * C282 +
                 C845 * C1339 - C846 * C1338 - C845 * C1340 + C32932 * C1341) *
                    C32923) *
                   C32690 * C32649 * C472 -
               ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
                (C904 + C903 + C902) * C838) *
                   C32690 * C32649 * C471) *
                  C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
             C174 * C839 + C175 * C32923) *
                C32965 +
            (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
               C32649 * C471 -
           ((C2333 * C32923 + C2334 * C839 +
             (C113 * C1171 - C114 * C1159 - C113 * C1172 + C32672 * C1186) *
                 C838) *
                C32935 +
            (C2335 * C32923 + C2336 * C839 +
             (C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C838) *
                C32954 +
            (C506 * C32923 + C507 * C839 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C838) *
                C32965) *
               C32649 * C472) *
              C473 +
          (((C507 * C838 + C506 * C839 + C505 * C32923) * C32965 +
            (C2336 * C838 + C2335 * C839 +
             (C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) *
                 C32923) *
                C32954 +
            (C2334 * C838 + C2333 * C839 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32923) *
                C32935) *
               C32649 * C472 -
           ((C1868 * C32923 + C1867 * C839 + C1866 * C838) * C32935 +
            (C621 * C32923 + C622 * C839 + C623 * C838) * C32954 +
            (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C32649 * C471 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C32649 * C472) *
              C473 +
          (((C5932 + C5931 + C5930) * C32961 +
            (C5929 + C5928 + C5927) * C32948 +
            (C5453 * C256 - C5454 * C245 - C5453 * C257 + C5447 * C275 +
             C5455 * C270 - C5456 * C252 - C5455 * C271 + C5448 * C282 +
             C5457 * C1339 - C5458 * C1338 - C5457 * C1340 + C32932 * C1341) *
                C32923) *
               C32690 * C32649 * C472 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C32649 * C471 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C32649 * C472) *
              C473 +
          ((C6334 * C260 - C6335 * C247 - C6334 * C261 + C6328 * C277 +
            C6336 * C266 - C6337 * C250 - C6336 * C267 + C6329 * C280 +
            C6338 * C1030 - C6339 * C1023 - C6338 * C1031 + C6330 * C1041 +
            C6340 * C1036 - C6341 * C1026 - C6340 * C1037 + C6331 * C1044 +
            C6342 * C6571 - C6343 * C6570 - C6342 * C6572 + C6332 * C6573) *
               C32588 * C32690 * C32649 * C472 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32588 * C32965 +
            (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
               C32649 * C471 -
           ((C5457 * C6481 - C5458 * C6477 - C5457 * C6482 + C32932 * C6486 +
             C5455 * C1173 - C5456 * C1160 - C5455 * C1174 + C5448 * C1187 +
             C5453 * C1171 - C5454 * C1159 - C5453 * C1172 + C5447 * C1186) *
                C32588 * C32935 +
            (C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731 +
             C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
             C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720) *
                C32588 * C32954 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32588 * C32965) *
               C32649 * C472) *
              C473 +
          (((C5932 + C5931 + C5930) * C32588 * C32965 +
            (C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732) *
                C32588 * C32954 +
            (C5453 * C1175 - C5454 * C1161 - C5453 * C1176 + C5447 * C1188 +
             C5455 * C1177 - C5456 * C1162 - C5455 * C1178 + C5448 * C1189 +
             C5457 * C7301 - C5458 * C7300 - C5457 * C7302 + C32932 * C7303) *
                C32588 * C32935) *
               C32649 * C472 -
           ((C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189 +
             C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
             C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385) *
                C32588 * C32935 +
            (C6118 + C6119 + C6120) * C32588 * C32954 +
            (C5516 + C5515 + C5514) * C32588 * C32965) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32961 +
             C174 * C32948 + C175 * C32923) *
                C10400 +
            (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
               C32649 * C471 -
           ((C2333 * C32923 + C2334 * C32948 + C2668 * C32961) * C32935 +
            (C2335 * C32923 + C2336 * C32948 + C2667 * C32961) * C10401 +
            (C506 * C32923 + C507 * C32948 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32961) *
                C10400) *
               C32649 * C472) *
              C473 +
          (((C507 * C32961 + C506 * C32948 + C505 * C32923) * C10400 +
            (C2336 * C32961 + C2335 * C32948 + C3947 * C32923) * C10401 +
            (C2334 * C32961 + C2333 * C32948 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32923) *
                C32935) *
               C32649 * C472 -
           ((C1868 * C32923 + C1867 * C32948 + C1866 * C32961) * C32935 +
            (C621 * C32923 + C622 * C32948 + C623 * C32961) * C10401 +
            (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C32588 * C10400 +
            (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
               C32649 * C471 -
           ((C845 * C6481 - C846 * C6477 - C845 * C6482 + C32932 * C6486 +
             C843 * C1173 - C844 * C1160 - C843 * C1174 + C32952 * C1187 +
             C841 * C1171 - C842 * C1159 - C841 * C1172 + C32964 * C1186) *
                C32588 * C32935 +
            (C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731 +
             C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
             C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720) *
                C32588 * C10401 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C32588 * C10400) *
               C32649 * C472) *
              C473 +
          (((C1384 + C1383 + C1382) * C32588 * C10400 +
            (C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732) *
                C32588 * C10401 +
            (C841 * C1175 - C842 * C1161 - C841 * C1176 + C32964 * C1188 +
             C843 * C1177 - C844 * C1162 - C843 * C1178 + C32952 * C1189 +
             C845 * C7301 - C846 * C7300 - C845 * C7302 + C32932 * C7303) *
                C32588 * C32935) *
               C32649 * C472 -
           ((C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189 +
             C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
             C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385) *
                C32588 * C32935 +
            (C1574 + C1575 + C1576) * C32588 * C10401 +
            (C904 + C903 + C902) * C32588 * C10400) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
                C12043 +
            C12181 * C12044 + C12182 * C12045 + C12183 * C12046 +
            C12198 * C12047) *
               C32649 * C471 -
           ((C113 * C7081 - C114 * C7077 - C113 * C7082 + C32672 * C7086) *
                C32588 * C12047 +
            (C113 * C2641 - C114 * C2638 - C113 * C2642 + C32672 * C2647) *
                C32588 * C12046 +
            C2668 * C32588 * C12045 + C2667 * C32588 * C12044 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C32588 *
                C12043) *
               C32649 * C472) *
              C473 +
          ((C507 * C32588 * C12043 + C2336 * C32588 * C12044 +
            C2334 * C32588 * C12045 +
            (C113 * C2643 - C114 * C2639 - C113 * C2644 + C32672 * C2648) *
                C32588 * C12046 +
            (C113 * C12282 - C114 * C12281 - C113 * C12283 + C32672 * C12284) *
                C32588 * C12047) *
               C32649 * C472 -
           ((C113 * C2102 - C114 * C2092 - C113 * C2103 + C32672 * C2110) *
                C32588 * C12047 +
            C2150 * C32588 * C12046 + C1866 * C32588 * C12045 +
            C623 * C32588 * C12044 + C174 * C32588 * C12043) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[61] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C102 +
                C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                   C32690 * C589 -
               (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
                (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) *
                    C102) *
                   C32690 * C590) *
                  C471 +
              (((C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) *
                    C102 +
                (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) *
                    C103 +
                (C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) *
                    C104 +
                (C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) *
                    C105 +
                (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) *
                    C106) *
                   C32690 * C590 -
               (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
                (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                    C102) *
                   C32690 * C589) *
                  C472) *
             C32623 +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
                 C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
                 C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                    C838 +
                (C902 + C903 + C904) * C839 + C912 * C32923) *
                   C32690 * C589 -
               ((C1571 + C1572 + C1573) * C32923 +
                (C1574 + C1575 + C1576) * C839 +
                (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
                 C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
                 C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                    C838) *
                   C32690 * C590) *
                  C471 +
              (((C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720 +
                 C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
                 C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731) *
                    C838 +
                (C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721 +
                 C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
                 C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732) *
                    C839 +
                (C841 * C714 - C842 * C707 - C841 * C715 + C32964 * C722 +
                 C843 * C1165 - C844 * C1156 - C843 * C1166 + C32952 * C1183 +
                 C845 * C1729 - C846 * C1724 - C845 * C1730 + C32932 * C1733) *
                    C32923) *
                   C32690 * C590 -
               ((C1379 + C1380 + C1381) * C32923 +
                (C1382 + C1383 + C1384) * C839 +
                (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
                 C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
                 C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                    C838) *
                   C32690 * C589) *
                  C472) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
             C174 * C839 + C175 * C32923) *
                C32965 +
            (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
               C589 -
           ((C2154 + C2155 + C2156) * C32935 +
            (C2124 + C2123 + C2153) * C32954 +
            (C2118 + C2117 + C2152) * C32965) *
               C590) *
              C471 +
          (((C2669 + C2655 + C2656) * C32965 +
            (C2670 + C2661 + C2662) * C32954 +
            ((C113 * C2641 - C114 * C2638 - C113 * C2642 + C32672 * C2647) *
                 C838 +
             (C113 * C2643 - C114 * C2639 - C113 * C2644 + C32672 * C2648) *
                 C839 +
             (C113 * C2645 - C114 * C2640 - C113 * C2646 + C32672 * C2649) *
                 C32923) *
                C32935) *
               C590 -
           ((C2662 + C2661 + C2670) * C32935 +
            (C2656 + C2655 + C2669) * C32954 +
            (C506 * C32923 + C507 * C839 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C838) *
                C32965) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C471 +
          (((C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720 +
             C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
             C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731) *
                C32961 +
            (C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732) *
                C32948 +
            (C5453 * C714 - C5454 * C707 - C5453 * C715 + C5447 * C722 +
             C5455 * C1165 - C5456 * C1156 - C5455 * C1166 + C5448 * C1183 +
             C5457 * C1729 - C5458 * C1724 - C5457 * C1730 + C32932 * C1733) *
                C32923) *
               C32690 * C590 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C471 +
          ((C6334 * C710 - C6335 * C705 - C6334 * C711 + C6328 * C720 +
            C6336 * C1169 - C6337 * C1158 - C6336 * C1170 + C6329 * C1185 +
            C6338 * C1725 - C6339 * C1722 - C6338 * C1726 + C6330 * C1731 +
            C6340 * C6479 - C6341 * C6476 - C6340 * C6480 + C6331 * C6485 +
            C6342 * C6743 - C6343 * C6742 - C6342 * C6744 + C6332 * C6745) *
               C32588 * C32690 * C590 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32588 * C32965 +
            (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
               C589 -
           ((C7149 + C7150 + C7151) * C32588 * C32935 +
            (C7148 + C7147 + C7146) * C32588 * C32954 +
            (C7145 + C7144 + C7143) * C32588 * C32965) *
               C590) *
              C471 +
          (((C7662 + C7663 + C7664) * C32588 * C32965 +
            (C7665 + C7666 + C7667) * C32588 * C32954 +
            (C5453 * C2641 - C5454 * C2638 - C5453 * C2642 + C5447 * C2647 +
             C5455 * C7079 - C5456 * C7076 - C5455 * C7080 + C5448 * C7085 +
             C5457 * C7622 - C5458 * C7621 - C5457 * C7623 + C32932 * C7624) *
                C32588 * C32935) *
               C590 -
           ((C7667 + C7666 + C7665) * C32588 * C32935 +
            (C7664 + C7663 + C7662) * C32588 * C32954 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32588 * C32965) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32961 +
             C174 * C32948 + C175 * C32923) *
                C10400 +
            (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
               C589 -
           ((C10630 + C10631 + C10632) * C32935 +
            (C10629 + C10628 + C10627) * C10401 +
            (C10626 + C10625 + C10624) * C10400) *
               C590) *
              C471 +
          (((C11079 + C11080 + C11081) * C10400 +
            (C11082 + C11083 + C11084) * C10401 +
            ((C113 * C2641 - C114 * C2638 - C113 * C2642 + C32672 * C2647) *
                 C32961 +
             (C113 * C2643 - C114 * C2639 - C113 * C2644 + C32672 * C2648) *
                 C32948 +
             (C113 * C2645 - C114 * C2640 - C113 * C2646 + C32672 * C2649) *
                 C32923) *
                C32935) *
               C590 -
           ((C11084 + C11083 + C11082) * C32935 +
            (C11081 + C11080 + C11079) * C10401 +
            (C506 * C32923 + C507 * C32948 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32961) *
                C10400) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C32588 * C10400 +
            (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
               C589 -
           ((C11475 + C11476 + C11477) * C32588 * C32935 +
            (C11474 + C11473 + C11472) * C32588 * C10401 +
            (C11471 + C11470 + C11469) * C32588 * C10400) *
               C590) *
              C471 +
          (((C11976 + C11977 + C11978) * C32588 * C10400 +
            (C11979 + C11980 + C11981) * C32588 * C10401 +
            (C841 * C2641 - C842 * C2638 - C841 * C2642 + C32964 * C2647 +
             C843 * C7079 - C844 * C7076 - C843 * C7080 + C32952 * C7085 +
             C845 * C7622 - C846 * C7621 - C845 * C7623 + C32932 * C7624) *
                C32588 * C32935) *
               C590 -
           ((C11981 + C11980 + C11979) * C32588 * C32935 +
            (C11978 + C11977 + C11976) * C32588 * C10401 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C32588 * C10400) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
                C12043 +
            C12181 * C12044 + C12182 * C12045 + C12183 * C12046 +
            C12198 * C12047) *
               C589 -
           (C12199 * C12047 + C12198 * C12046 + C12183 * C12045 +
            C12182 * C12044 + C12181 * C12043) *
               C590) *
              C471 +
          ((C12469 * C12043 + C12470 * C12044 + C12485 * C12045 +
            C12486 * C12046 +
            (C113 * C12465 - C114 * C12464 - C113 * C12466 + C32672 * C12467) *
                C32588 * C12047) *
               C590 -
           (C12486 * C12047 + C12485 * C12046 + C12470 * C12045 +
            C12469 * C12044 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C32588 *
                C12043) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (-0.25 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                   C102 +
               C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                  C32690 * C32649 * C32635 * C110 -
              (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
               C174 * C102) *
                  C32690 * C32649 * C32635 * C111 +
              (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
               (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) *
                   C106) *
                  C32690 * C32649 * C32635 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                   C102 +
               C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                  C32690 * C32649 * C240 -
              ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) *
                   C106 +
               (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) *
                   C105 +
               (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) *
                   C104 +
               (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) *
                   C103 +
               (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                   C102) *
                  C32690 * C32649 * C241 +
              ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) *
                   C102 +
               (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                   C103 +
               (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                   C104 +
               (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                   C105 +
               (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) *
                   C106) *
                  C32690 * C32649 * C242) *
             C32623 +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                   C102 +
               C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                  C32690 * C346 -
              ((C113 * C359 - C114 * C349 - C113 * C360 + C32672 * C379) *
                   C106 +
               (C113 * C361 - C114 * C350 - C113 * C362 + C32672 * C380) *
                   C105 +
               (C113 * C363 - C114 * C351 - C113 * C364 + C32672 * C381) *
                   C104 +
               (C113 * C365 - C114 * C352 - C113 * C366 + C32672 * C382) *
                   C103 +
               (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) *
                   C102) *
                  C32690 * C347 +
              ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) *
                   C102 +
               (C113 * C371 - C114 * C355 - C113 * C372 + C32672 * C385) *
                   C103 +
               (C113 * C373 - C114 * C356 - C113 * C374 + C32672 * C386) *
                   C104 +
               (C113 * C375 - C114 * C357 - C113 * C376 + C32672 * C387) *
                   C105 +
               (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                   C106) *
                  C32690 * C348) *
             C32635 * C32623 -
         0.25 * std::pow(Pi, 2.5) *
             (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
                C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
                C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                   C838 +
               (C902 + C903 + C904) * C839 + C912 * C32923) *
                  C32690 * C32649 * C32635 * C110 -
              ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
               (C904 + C903 + C902) * C838) *
                  C32690 * C32649 * C32635 * C111 +
              (C912 * C838 + (C910 + C909 + C908) * C839 +
               (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
                C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
                C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
                   C32923) *
                  C32690 * C32649 * C32635 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
                C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
                C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                   C838 +
               (C902 + C903 + C904) * C839 + C912 * C32923) *
                  C32690 * C32649 * C240 -
              ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
                C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
                C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
                   C32923 +
               (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
                C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
                C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
                   C839 +
               (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
                C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
                C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                   C838) *
                  C32690 * C32649 * C241 +
              ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
                C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
                C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
                   C838 +
               (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
                C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
                C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
                   C839 +
               (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
                C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
                C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
                   C32923) *
                  C32690 * C32649 * C242) *
             C32623 +
         0.5 * std::pow(Pi, 2.5) *
             (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
                C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
                C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                   C838 +
               (C902 + C903 + C904) * C839 + C912 * C32923) *
                  C32690 * C346 -
              ((C845 * C1165 - C846 * C1156 - C845 * C1166 + C32932 * C1183 +
                C843 * C714 - C844 * C707 - C843 * C715 + C32952 * C722 +
                C841 * C363 - C842 * C351 - C841 * C364 + C32964 * C381) *
                   C32923 +
               (C845 * C1167 - C846 * C1157 - C845 * C1168 + C32932 * C1184 +
                C843 * C712 - C844 * C706 - C843 * C713 + C32952 * C721 +
                C841 * C365 - C842 * C352 - C841 * C366 + C32964 * C382) *
                   C839 +
               (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
                C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
                C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                   C838) *
                  C32690 * C347 +
              ((C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
                C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
                C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
                   C838 +
               (C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385 +
                C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
                C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189) *
                   C839 +
               (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
                C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
                C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
                   C32923) *
                  C32690 * C348) *
             C32635 * C32623 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C838 +
                C174 * C839 + C175 * C32923) *
                   C32965 +
               ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) *
                    C838 +
                C623 * C839 + C622 * C32923) *
                   C32954 +
               ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) *
                    C838 +
                C1866 * C839 + C1867 * C32923) *
                   C32935) *
                  C32649 * C32635 * C110 -
              ((C1868 * C32923 + C1867 * C839 + C1866 * C838) * C32935 +
               (C621 * C32923 + C622 * C839 + C623 * C838) * C32954 +
               (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
                  C32649 * C32635 * C111 +
              ((C175 * C838 + C176 * C839 + C177 * C32923) * C32965 +
               (C622 * C838 + C621 * C839 + C620 * C32923) * C32954 +
               (C1867 * C838 + C1868 * C839 +
                (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                    C32923) *
                   C32935) *
                  C32649 * C32635 * C112) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C838 +
                C174 * C839 + C175 * C32923) *
                   C32965 +
               ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) *
                    C838 +
                C623 * C839 + C622 * C32923) *
                   C32954 +
               ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) *
                    C838 +
                C1866 * C839 + C1867 * C32923) *
                   C32935) *
                  C32649 * C240 -
              (((C113 * C1179 - C114 * C1163 - C113 * C1180 + C32672 * C1190) *
                    C32923 +
                (C113 * C1175 - C114 * C1161 - C113 * C1176 + C32672 * C1188) *
                    C839 +
                (C113 * C1171 - C114 * C1159 - C113 * C1172 + C32672 * C1186) *
                    C838) *
                   C32935 +
               ((C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) *
                    C32923 +
                (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) *
                    C839 +
                (C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) *
                    C838) *
                   C32954 +
               (C506 * C32923 + C507 * C839 +
                (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                    C838) *
                   C32965) *
                  C32649 * C241 +
              (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) *
                    C838 +
                (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                    C839 +
                (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                    C32923) *
                   C32965 +
               ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                    C838 +
                (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                    C839 +
                (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                    C32923) *
                   C32954 +
               ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                    C838 +
                (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                    C839 +
                (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                    C32923) *
                   C32935) *
                  C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
              C346 -
          ((C2154 + C2155 + C2156) * C32935 + (C2124 + C2123 + C2153) * C32954 +
           (C2118 + C2117 + C2152) * C32965) *
              C347 +
          (C2158 * C32965 + (C2156 + C2155 + C2154) * C32954 +
           ((C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
                C838 +
            (C113 * C2102 - C114 * C2092 - C113 * C2103 + C32672 * C2110) *
                C839 +
            (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
                C32923) *
               C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C346 -
          ((C5457 * C1165 - C5458 * C1156 - C5457 * C1166 + C32932 * C1183 +
            C5455 * C714 - C5456 * C707 - C5455 * C715 + C5448 * C722 +
            C5453 * C363 - C5454 * C351 - C5453 * C364 + C5447 * C381) *
               C32923 +
           (C5457 * C1167 - C5458 * C1157 - C5457 * C1168 + C32932 * C1184 +
            C5455 * C712 - C5456 * C706 - C5455 * C713 + C5448 * C721 +
            C5453 * C365 - C5454 * C352 - C5453 * C366 + C5447 * C382) *
               C32948 +
           (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
               C32961) *
              C32690 * C347 +
          ((C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32961 +
           (C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189) *
               C32948 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32923) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C346 -
          (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
           C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
           C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
           C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
           C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
              C32588 * C32690 * C347 +
          (C6334 * C369 - C6335 * C354 - C6334 * C370 + C6328 * C384 +
           C6336 * C1171 - C6337 * C1159 - C6336 * C1172 + C6329 * C1186 +
           C6338 * C1173 - C6339 * C1160 - C6338 * C1174 + C6330 * C1187 +
           C6340 * C6481 - C6341 * C6477 - C6340 * C6482 + C6331 * C6486 +
           C6342 * C6483 - C6343 * C6478 - C6342 * C6484 + C6332 * C6487) *
              C32588 * C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385) *
               C32588 * C32935 +
           (C6118 + C6119 + C6120) * C32588 * C32954 +
           (C5516 + C5515 + C5514) * C32588 * C32965) *
              C32649 * C32635 * C111 +
          (C5524 * C32588 * C32965 + (C6117 + C6116 + C6115) * C32588 * C32954 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C5457 * C6481 - C5458 * C6477 - C5457 * C6482 + C32932 * C6486 +
            C5455 * C1173 - C5456 * C1160 - C5455 * C1174 + C5448 * C1187 +
            C5453 * C1171 - C5454 * C1159 - C5453 * C1172 + C5447 * C1186) *
               C32588 * C32935 +
           (C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731 +
            C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
            C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720) *
               C32588 * C32954 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32588 * C32965) *
              C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32588 * C32965 +
           (C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
            C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
            C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
               C32588 * C32954 +
           (C5453 * C1173 - C5454 * C1160 - C5453 * C1174 + C5447 * C1187 +
            C5455 * C6481 - C5456 * C6477 - C5455 * C6482 + C5448 * C6486 +
            C5457 * C6483 - C5458 * C6478 - C5457 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
              C346 -
          ((C7149 + C7150 + C7151) * C32588 * C32935 +
           (C7148 + C7147 + C7146) * C32588 * C32954 +
           (C7145 + C7144 + C7143) * C32588 * C32965) *
              C347 +
          (C7154 * C32965 + (C7151 + C7150 + C7149) * C32588 * C32954 +
           (C5453 * C2100 - C5454 * C2091 - C5453 * C2101 + C5447 * C2109 +
            C5455 * C7081 - C5456 * C7077 - C5455 * C7082 + C5448 * C7086 +
            C5457 * C7083 - C5458 * C7078 - C5457 * C7084 + C32932 * C7087) *
               C32588 * C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C32635 * C110 -
          ((C1868 * C32923 + C1867 * C32948 + C1866 * C32961) * C32935 +
           (C621 * C32923 + C622 * C32948 + C623 * C32961) * C10401 +
           (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
              C32649 * C32635 * C111 +
          ((C175 * C32961 + C176 * C32948 + C177 * C32923) * C10400 +
           (C622 * C32961 + C621 * C32948 + C620 * C32923) * C10401 +
           (C1867 * C32961 + C1868 * C32948 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C32923) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C240 -
          ((C2333 * C32923 + C2334 * C32948 + C2668 * C32961) * C32935 +
           (C2335 * C32923 + C2336 * C32948 + C2667 * C32961) * C10401 +
           (C506 * C32923 + C507 * C32948 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32961) *
               C10400) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32961 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32948 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C32923) *
               C10400 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32961 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32948 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32923) *
               C10401 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32961 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32948 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C32923) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
              C346 -
          ((C10630 + C10631 + C10632) * C32935 +
           (C10629 + C10628 + C10627) * C10401 +
           (C10626 + C10625 + C10624) * C10400) *
              C347 +
          (C10634 * C10400 + (C10632 + C10631 + C10630) * C10401 +
           ((C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
                C32961 +
            (C113 * C2102 - C114 * C2092 - C113 * C2103 + C32672 * C2110) *
                C32948 +
            (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
                C32923) *
               C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189 +
            C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
            C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385) *
               C32588 * C32935 +
           (C1574 + C1575 + C1576) * C32588 * C10401 +
           (C904 + C903 + C902) * C32588 * C10400) *
              C32649 * C32635 * C111 +
          (C912 * C32588 * C10400 + (C1573 + C1572 + C1571) * C32588 * C10401 +
           (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
            C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
            C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C845 * C6481 - C846 * C6477 - C845 * C6482 + C32932 * C6486 +
            C843 * C1173 - C844 * C1160 - C843 * C1174 + C32952 * C1187 +
            C841 * C1171 - C842 * C1159 - C841 * C1172 + C32964 * C1186) *
               C32588 * C32935 +
           (C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731 +
            C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
            C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720) *
               C32588 * C10401 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C32588 * C10400) *
              C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C32588 * C10400 +
           (C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
            C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
            C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
               C32588 * C10401 +
           (C841 * C1173 - C842 * C1160 - C841 * C1174 + C32964 * C1187 +
            C843 * C6481 - C844 * C6477 - C843 * C6482 + C32952 * C6486 +
            C845 * C6483 - C846 * C6478 - C845 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
              C346 -
          ((C11475 + C11476 + C11477) * C32588 * C32935 +
           (C11474 + C11473 + C11472) * C32588 * C10401 +
           (C11471 + C11470 + C11469) * C32588 * C10400) *
              C347 +
          (C11480 * C10400 + (C11477 + C11476 + C11475) * C32588 * C10401 +
           (C841 * C2100 - C842 * C2091 - C841 * C2101 + C32964 * C2109 +
            C843 * C7081 - C844 * C7077 - C843 * C7082 + C32952 * C7086 +
            C845 * C7083 - C846 * C7078 - C845 * C7084 + C32932 * C7087) *
               C32588 * C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
               C12043 +
           C2147 * C32588 * C12044 + C2148 * C32588 * C12045 +
           C2151 * C32588 * C12046 +
           (C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
               C32588 * C12047) *
              C32649 * C32635 * C110 -
          ((C113 * C2102 - C114 * C2092 - C113 * C2103 + C32672 * C2110) *
               C32588 * C12047 +
           C2150 * C32588 * C12046 + C1866 * C32588 * C12045 +
           C623 * C32588 * C12044 + C174 * C32588 * C12043) *
              C32649 * C32635 * C111 +
          (C175 * C32588 * C12043 + C622 * C32588 * C12044 +
           C1867 * C32588 * C12045 + C2149 * C32588 * C12046 +
           (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
               C32588 * C12047) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
               C12043 +
           C2147 * C32588 * C12044 + C2148 * C32588 * C12045 +
           C2151 * C32588 * C12046 +
           (C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
               C32588 * C12047) *
              C32649 * C240 -
          ((C113 * C7081 - C114 * C7077 - C113 * C7082 + C32672 * C7086) *
               C32588 * C12047 +
           (C113 * C2641 - C114 * C2638 - C113 * C2642 + C32672 * C2647) *
               C32588 * C12046 +
           C2668 * C32588 * C12045 + C2667 * C32588 * C12044 +
           (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C32588 *
               C12043) *
              C32649 * C241 +
          ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32588 *
               C12043 +
           (C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
               C32588 * C12044 +
           (C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
               C32588 * C12045 +
           (C113 * C7079 - C114 * C7076 - C113 * C7080 + C32672 * C7085) *
               C32588 * C12046 +
           (C113 * C7083 - C114 * C7078 - C113 * C7084 + C32672 * C7087) *
               C32588 * C12047) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
               C12043 +
           C12181 * C12044 + C12182 * C12045 + C12183 * C12046 +
           C12198 * C12047) *
              C346 -
          (C12199 * C12047 + C12198 * C12046 + C12183 * C12045 +
           C12182 * C12044 + C12181 * C12043) *
              C347 +
          (C12182 * C12043 + C12183 * C12044 + C12198 * C12045 +
           C12199 * C12046 +
           (C113 * C12176 - C114 * C12173 - C113 * C12177 + C32672 * C12179) *
               C32588 * C12047) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C102 +
                C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                   C32690 * C589 -
               (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
                (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) *
                    C102) *
                   C32690 * C590) *
                  C32635 * C473 +
              ((C623 * C102 + C622 * C103 + C621 * C104 + C620 * C105 +
                (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                    C106) *
                   C32690 * C590 -
               (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
                C174 * C102) *
                   C32690 * C589) *
                  C32635 * C474) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
                 C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
                 C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                    C838 +
                (C902 + C903 + C904) * C839 + C912 * C32923) *
                   C32690 * C589 -
               ((C1571 + C1572 + C1573) * C32923 +
                (C1574 + C1575 + C1576) * C839 +
                (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
                 C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
                 C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                    C838) *
                   C32690 * C590) *
                  C32635 * C473 +
              (((C1576 + C1575 + C1574) * C838 +
                (C1573 + C1572 + C1571) * C839 +
                (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
                 C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
                 C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                    C32923) *
                   C32690 * C590 -
               ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
                (C904 + C903 + C902) * C838) *
                   C32690 * C589) *
                  C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
             C174 * C839 + C175 * C32923) *
                C32965 +
            (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
               C589 -
           ((C2154 + C2155 + C2156) * C32935 +
            (C2124 + C2123 + C2153) * C32954 +
            (C2118 + C2117 + C2152) * C32965) *
               C590) *
              C32635 * C473 +
          (((C2487 + C2488 + C2489) * C32965 +
            (C2490 + C2491 + C2492) * C32954 +
            (C2150 * C838 + C2149 * C839 +
             (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                 C32923) *
                C32935) *
               C590 -
           ((C2492 + C2491 + C2490) * C32935 +
            (C2489 + C2488 + C2487) * C32954 +
            (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C32635 * C473 +
          (((C6120 + C6119 + C6118) * C32961 +
            (C6117 + C6116 + C6115) * C32948 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32923) *
               C32690 * C590 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C32635 * C473 +
          ((C6334 * C365 - C6335 * C352 - C6334 * C366 + C6328 * C382 +
            C6336 * C712 - C6337 * C706 - C6336 * C713 + C6329 * C721 +
            C6338 * C1167 - C6339 * C1157 - C6338 * C1168 + C6330 * C1184 +
            C6340 * C1727 - C6341 * C1723 - C6340 * C1728 + C6331 * C1732 +
            C6342 * C6657 - C6343 * C6656 - C6342 * C6658 + C6332 * C6659) *
               C32588 * C32690 * C590 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32588 * C32965 +
            (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
               C589 -
           ((C7149 + C7150 + C7151) * C32588 * C32935 +
            (C7148 + C7147 + C7146) * C32588 * C32954 +
            (C7145 + C7144 + C7143) * C32588 * C32965) *
               C590) *
              C32635 * C473 +
          (((C6120 + C6119 + C6118) * C32588 * C32965 +
            (C7473 + C7474 + C7475) * C32588 * C32954 +
            (C5453 * C2096 - C5454 * C2089 - C5453 * C2097 + C5447 * C2107 +
             C5455 * C2643 - C5456 * C2639 - C5455 * C2644 + C5448 * C2648 +
             C5457 * C7451 - C5458 * C7450 - C5457 * C7452 + C32932 * C7453) *
                C32588 * C32935) *
               C590 -
           ((C7475 + C7474 + C7473) * C32588 * C32935 +
            (C6118 + C6119 + C6120) * C32588 * C32954 +
            (C5516 + C5515 + C5514) * C32588 * C32965) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32961 +
             C174 * C32948 + C175 * C32923) *
                C10400 +
            (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
               C589 -
           ((C10630 + C10631 + C10632) * C32935 +
            (C10629 + C10628 + C10627) * C10401 +
            (C10626 + C10625 + C10624) * C10400) *
               C590) *
              C32635 * C473 +
          (((C10927 + C10928 + C10929) * C10400 +
            (C10930 + C10931 + C10932) * C10401 +
            (C2150 * C32961 + C2149 * C32948 +
             (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                 C32923) *
                C32935) *
               C590 -
           ((C10932 + C10931 + C10930) * C32935 +
            (C10929 + C10928 + C10927) * C10401 +
            (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C32588 * C10400 +
            (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
               C589 -
           ((C11475 + C11476 + C11477) * C32588 * C32935 +
            (C11474 + C11473 + C11472) * C32588 * C10401 +
            (C11471 + C11470 + C11469) * C32588 * C10400) *
               C590) *
              C32635 * C473 +
          (((C1576 + C1575 + C1574) * C32588 * C10400 +
            (C11791 + C11792 + C11793) * C32588 * C10401 +
            (C841 * C2096 - C842 * C2089 - C841 * C2097 + C32964 * C2107 +
             C843 * C2643 - C844 * C2639 - C843 * C2644 + C32952 * C2648 +
             C845 * C7451 - C846 * C7450 - C845 * C7452 + C32932 * C7453) *
                C32588 * C32935) *
               C590 -
           ((C11793 + C11792 + C11791) * C32588 * C32935 +
            (C1574 + C1575 + C1576) * C32588 * C10401 +
            (C904 + C903 + C902) * C32588 * C10400) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
                C12043 +
            C12181 * C12044 + C12182 * C12045 + C12183 * C12046 +
            C12198 * C12047) *
               C589 -
           (C12199 * C12047 + C12198 * C12046 + C12183 * C12045 +
            C12182 * C12044 + C12181 * C12043) *
               C590) *
              C32635 * C473 +
          ((C12372 * C12043 + C12373 * C12044 + C12374 * C12045 +
            C12382 * C12046 +
            (C113 * C12368 - C114 * C12367 - C113 * C12369 + C32672 * C12370) *
                C32588 * C12047) *
               C590 -
           (C12382 * C12047 + C12374 * C12046 + C12373 * C12045 +
            C12372 * C12044 + C174 * C32588 * C12043) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C32635 * C110 -
          (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
           C174 * C102) *
              C32690 * C32649 * C32635 * C111 +
          (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) * C106) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C240 -
          ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) * C106 +
           (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) * C105 +
           (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) * C104 +
           (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) * C103 +
           (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
              C32690 * C32649 * C241 +
          ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C102 +
           (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C103 +
           (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C104 +
           (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) * C105 +
           (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) * C106) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
           (C904 + C903 + C902) * C838) *
              C32690 * C32649 * C32635 * C111 +
          (C912 * C838 + (C910 + C909 + C908) * C839 +
           (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
            C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
            C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C240 -
          ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
            C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
            C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
               C32923 +
           (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
            C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
            C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
               C839 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C838) *
              C32690 * C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C838 +
           (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
            C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
            C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
               C839 +
           (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
            C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
            C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C838 +
            C623 * C839 + C622 * C32923) *
               C32954 +
           ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C838 +
            C1866 * C839 + C1867 * C32923) *
               C32935) *
              C32649 * C32635 * C110 -
          ((C1868 * C32923 + C1867 * C839 + C1866 * C838) * C32935 +
           (C621 * C32923 + C622 * C839 + C623 * C838) * C32954 +
           (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
              C32649 * C32635 * C111 +
          ((C175 * C838 + C176 * C839 + C177 * C32923) * C32965 +
           (C622 * C838 + C621 * C839 + C620 * C32923) * C32954 +
           (C1867 * C838 + C1868 * C839 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C32923) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C838 +
            C623 * C839 + C622 * C32923) *
               C32954 +
           ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C838 +
            C1866 * C839 + C1867 * C32923) *
               C32935) *
              C32649 * C240 -
          (((C113 * C1179 - C114 * C1163 - C113 * C1180 + C32672 * C1190) *
                C32923 +
            (C113 * C1175 - C114 * C1161 - C113 * C1176 + C32672 * C1188) *
                C839 +
            (C113 * C1171 - C114 * C1159 - C113 * C1172 + C32672 * C1186) *
                C838) *
               C32935 +
           ((C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) * C32923 +
            (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) * C839 +
            (C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C838) *
               C32954 +
           (C506 * C32923 + C507 * C839 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C838) *
               C32965) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C838 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C839 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C32923) *
               C32965 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C838 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C839 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32923) *
               C32954 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C838 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C839 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C32923) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385) *
               C32588 * C32935 +
           (C6118 + C6119 + C6120) * C32588 * C32954 +
           (C5516 + C5515 + C5514) * C32588 * C32965) *
              C32649 * C32635 * C111 +
          (C5524 * C32588 * C32965 + (C6117 + C6116 + C6115) * C32588 * C32954 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C5457 * C6481 - C5458 * C6477 - C5457 * C6482 + C32932 * C6486 +
            C5455 * C1173 - C5456 * C1160 - C5455 * C1174 + C5448 * C1187 +
            C5453 * C1171 - C5454 * C1159 - C5453 * C1172 + C5447 * C1186) *
               C32588 * C32935 +
           (C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731 +
            C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
            C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720) *
               C32588 * C32954 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32588 * C32965) *
              C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32588 * C32965 +
           (C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
            C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
            C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
               C32588 * C32954 +
           (C5453 * C1173 - C5454 * C1160 - C5453 * C1174 + C5447 * C1187 +
            C5455 * C6481 - C5456 * C6477 - C5455 * C6482 + C5448 * C6486 +
            C5457 * C6483 - C5458 * C6478 - C5457 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C32635 * C110 -
          ((C1868 * C32923 + C1867 * C32948 + C1866 * C32961) * C32935 +
           (C621 * C32923 + C622 * C32948 + C623 * C32961) * C10401 +
           (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
              C32649 * C32635 * C111 +
          ((C175 * C32961 + C176 * C32948 + C177 * C32923) * C10400 +
           (C622 * C32961 + C621 * C32948 + C620 * C32923) * C10401 +
           (C1867 * C32961 + C1868 * C32948 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C32923) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C240 -
          ((C2333 * C32923 + C2334 * C32948 + C2668 * C32961) * C32935 +
           (C2335 * C32923 + C2336 * C32948 + C2667 * C32961) * C10401 +
           (C506 * C32923 + C507 * C32948 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32961) *
               C10400) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32961 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32948 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C32923) *
               C10400 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32961 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32948 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32923) *
               C10401 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32961 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32948 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C32923) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189 +
            C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
            C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385) *
               C32588 * C32935 +
           (C1574 + C1575 + C1576) * C32588 * C10401 +
           (C904 + C903 + C902) * C32588 * C10400) *
              C32649 * C32635 * C111 +
          (C912 * C32588 * C10400 + (C1573 + C1572 + C1571) * C32588 * C10401 +
           (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
            C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
            C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C845 * C6481 - C846 * C6477 - C845 * C6482 + C32932 * C6486 +
            C843 * C1173 - C844 * C1160 - C843 * C1174 + C32952 * C1187 +
            C841 * C1171 - C842 * C1159 - C841 * C1172 + C32964 * C1186) *
               C32588 * C32935 +
           (C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731 +
            C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
            C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720) *
               C32588 * C10401 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C32588 * C10400) *
              C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C32588 * C10400 +
           (C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
            C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
            C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
               C32588 * C10401 +
           (C841 * C1173 - C842 * C1160 - C841 * C1174 + C32964 * C1187 +
            C843 * C6481 - C844 * C6477 - C843 * C6482 + C32952 * C6486 +
            C845 * C6483 - C846 * C6478 - C845 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
               C12043 +
           C2147 * C32588 * C12044 + C2148 * C32588 * C12045 +
           C2151 * C32588 * C12046 +
           (C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
               C32588 * C12047) *
              C32649 * C32635 * C110 -
          ((C113 * C2102 - C114 * C2092 - C113 * C2103 + C32672 * C2110) *
               C32588 * C12047 +
           C2150 * C32588 * C12046 + C1866 * C32588 * C12045 +
           C623 * C32588 * C12044 + C174 * C32588 * C12043) *
              C32649 * C32635 * C111 +
          (C175 * C32588 * C12043 + C622 * C32588 * C12044 +
           C1867 * C32588 * C12045 + C2149 * C32588 * C12046 +
           (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
               C32588 * C12047) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32588 *
               C12043 +
           C2147 * C32588 * C12044 + C2148 * C32588 * C12045 +
           C2151 * C32588 * C12046 +
           (C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
               C32588 * C12047) *
              C32649 * C240 -
          ((C113 * C7081 - C114 * C7077 - C113 * C7082 + C32672 * C7086) *
               C32588 * C12047 +
           (C113 * C2641 - C114 * C2638 - C113 * C2642 + C32672 * C2647) *
               C32588 * C12046 +
           C2668 * C32588 * C12045 + C2667 * C32588 * C12044 +
           (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C32588 *
               C12043) *
              C32649 * C241 +
          ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32588 *
               C12043 +
           (C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
               C32588 * C12044 +
           (C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
               C32588 * C12045 +
           (C113 * C7079 - C114 * C7076 - C113 * C7080 + C32672 * C7085) *
               C32588 * C12046 +
           (C113 * C7083 - C114 * C7078 - C113 * C7084 + C32672 * C7087) *
               C32588 * C12047) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
              C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
              C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                 C32882 +
             (C5514 + C5515 + C5516) * C32598) *
                C32902 +
            ((C7143 + C7144 + C7145) * C32882 +
             (C6120 + C6119 + C6118) * C32598) *
                C32777) *
               C32649 * C471 -
           (((C9128 + C9129 + C9130) * C32598 +
             (C7664 + C7663 + C7662) * C32882) *
                C32777 +
            ((C5930 + C5931 + C5932) * C32598 +
             (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
              C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
              C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                 C32882) *
                C32902) *
               C32649 * C472) *
              C473 +
          ((((C5932 + C5931 + C5930) * C32882 +
             (C5929 + C5928 + C5927) * C32598) *
                C32902 +
            ((C9130 + C9129 + C9128) * C32882 +
             (C5453 * C714 - C5454 * C707 - C5453 * C715 + C5447 * C722 +
              C5455 * C1165 - C5456 * C1156 - C5455 * C1166 + C5448 * C1183 +
              C5457 * C1729 - C5458 * C1724 - C5457 * C1730 + C32932 * C1733) *
                 C32598) *
                C32777) *
               C32649 * C472 -
           (((C6115 + C6116 + C6117) * C32598 +
             (C6118 + C6119 + C6120) * C32882) *
                C32777 +
            ((C5519 + C5518 + C5517) * C32598 +
             (C5516 + C5515 + C5514) * C32882) *
                C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
             C174 * C2771 + C175 * C2772 + C176 * C32901) *
                C32902 +
            (C3803 + C3804 + C3805 + C3806) * C32777) *
               C32649 * C471 -
           ((C3947 * C32901 + C2335 * C2772 + C2336 * C2771 + C2667 * C2770) *
                C32777 +
            (C505 * C32901 + C506 * C2772 + C507 * C2771 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C2770) *
                C32902) *
               C32649 * C472) *
              C473 +
          (((C507 * C2770 + C506 * C2771 + C505 * C2772 + C504 * C32901) *
                C32902 +
            (C2336 * C2770 + C2335 * C2771 + C3947 * C2772 +
             (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) *
                 C32901) *
                C32777) *
               C32649 * C472 -
           ((C620 * C32901 + C621 * C2772 + C622 * C2771 + C623 * C2770) *
                C32777 +
            (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
                C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32882 +
             C174 * C32598) *
                C13666 +
            (C13867 + C13868) * C13667 + C13875 * C13668 + C13876 * C32916) *
               C32649 * C471 -
           ((C14013 * C32598 + C12483 * C32882) * C32916 +
            (C2334 * C32598 + C2668 * C32882) * C13668 +
            (C2336 * C32598 + C2667 * C32882) * C13667 +
            (C507 * C32598 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32882) *
                C13666) *
               C32649 * C472) *
              C473 +
          (((C507 * C32882 + C506 * C32598) * C13666 +
            (C2336 * C32882 + C2335 * C32598) * C13667 +
            (C2334 * C32882 + C2333 * C32598) * C13668 +
            (C14013 * C32882 +
             (C113 * C2645 - C114 * C2640 - C113 * C2646 + C32672 * C2649) *
                 C32598) *
                C32916) *
               C32649 * C472 -
           ((C2149 * C32598 + C2150 * C32882) * C32916 +
            (C1867 * C32598 + C1866 * C32882) * C13668 +
            (C622 * C32598 + C623 * C32882) * C13667 +
            (C175 * C32598 + C174 * C32882) * C13666) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
              C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
              C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                 C32882 +
             (C5514 + C5515 + C5516) * C32598) *
                C32902 +
            ((C7143 + C7144 + C7145) * C32882 + C9327 * C32598) * C32777) *
               C589 -
           (((C7475 + C7474 + C7473) * C32598 +
             (C7148 + C7147 + C7146) * C32882) *
                C32777 +
            (C9328 * C32598 + (C7145 + C7144 + C7143) * C32882) * C32902) *
               C590) *
              C471 +
          ((((C7662 + C7663 + C7664) * C32882 +
             (C9130 + C9129 + C9128) * C32598) *
                C32902 +
            ((C7665 + C7666 + C7667) * C32882 +
             (C5453 * C1175 - C5454 * C1161 - C5453 * C1176 + C5447 * C1188 +
              C5455 * C1177 - C5456 * C1162 - C5455 * C1178 + C5448 * C1189 +
              C5457 * C7301 - C5458 * C7300 - C5457 * C7302 + C32932 * C7303) *
                 C32598) *
                C32777) *
               C590 -
           (((C9128 + C9129 + C9130) * C32598 +
             (C7664 + C7663 + C7662) * C32882) *
                C32777 +
            ((C5930 + C5931 + C5932) * C32598 +
             (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
              C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
              C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                 C32882) *
                C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
             C174 * C2771 + C175 * C2772 + C176 * C32901) *
                C32902 +
            (C3803 + C3804 + C3805 + C3806) * C32777) *
               C589 -
           ((C3807 + C3808 + C3809 + C3810) * C32777 +
            (C3806 + C3805 + C3804 + C3803) * C32902) *
               C590) *
              C471 +
          (((C4212 + C4213 + C4214 + C4215) * C32902 +
            (C2668 * C2770 + C2334 * C2771 + C2333 * C2772 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32901) *
                C32777) *
               C590 -
           ((C4215 + C4214 + C4213 + C4212) * C32777 +
            (C505 * C32901 + C506 * C2772 + C507 * C2771 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C2770) *
                C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32882 +
             C174 * C32598) *
                C13666 +
            (C13867 + C13868) * C13667 + C13875 * C13668 + C13876 * C32916) *
               C589 -
           ((C13873 + C13874) * C32916 + (C13872 + C13871) * C13668 +
            (C13870 + C13869) * C13667 + (C13868 + C13867) * C13666) *
               C590) *
              C471 +
          (((C14280 + C14281) * C13666 + (C14282 + C14283) * C13667 +
            (C14284 + C14285) * C13668 +
            (C12484 * C32882 +
             (C113 * C12282 - C114 * C12281 - C113 * C12283 + C32672 * C12284) *
                 C32598) *
                C32916) *
               C590 -
           ((C14285 + C14284) * C32916 + (C14283 + C14282) * C13668 +
            (C14281 + C14280) * C13667 +
            (C507 * C32598 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32882) *
                C13666) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C2770 +
                C174 * C2771 + C175 * C2772 + C176 * C32901) *
                   C32902 +
               (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
                   C32777) *
                  C32649 * C32635 * C110 -
              ((C620 * C32901 + C621 * C2772 + C622 * C2771 + C623 * C2770) *
                   C32777 +
               (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
                   C32902) *
                  C32649 * C32635 * C111 +
              ((C175 * C2770 + C176 * C2771 + C177 * C2772 + C178 * C32901) *
                   C32902 +
               (C622 * C2770 + C621 * C2771 + C620 * C2772 +
                (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                    C32901) *
                   C32777) *
                  C32649 * C32635 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C2770 +
                C174 * C2771 + C175 * C2772 + C176 * C32901) *
                   C32902 +
               (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
                   C32777) *
                  C32649 * C240 -
              (((C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) *
                    C32901 +
                C2335 * C2772 + C2336 * C2771 + C2667 * C2770) *
                   C32777 +
               (C505 * C32901 + C506 * C2772 + C507 * C2771 +
                (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                    C2770) *
                   C32902) *
                  C32649 * C241 +
              (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) *
                    C2770 +
                (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                    C2771 +
                (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                    C2772 +
                (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                    C32901) *
                   C32902 +
               ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                    C2770 +
                (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                    C2771 +
                (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                    C2772 +
                (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                    C32901) *
                   C32777) *
                  C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C3803 + C3804 + C3805 + C3806) * C32777) *
              C346 -
          ((C3807 + C3808 + C3809 + C3810) * C32777 +
           (C3806 + C3805 + C3804 + C3803) * C32902) *
              C347 +
          ((C3810 + C3809 + C3808 + C3807) * C32902 +
           (C2151 * C2770 + C2150 * C2771 + C2149 * C2772 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32901) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C6115 + C6116 + C6117) * C32598 +
            (C6118 + C6119 + C6120) * C32882) *
               C32777 +
           ((C5519 + C5518 + C5517) * C32598 +
            (C5516 + C5515 + C5514) * C32882) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C5524 * C32882 + (C5522 + C5521 + C5520) * C32598) * C32902 +
           ((C6117 + C6116 + C6115) * C32882 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721) *
                C32598 +
            (C7664 + C7663 + C7662) * C32882) *
               C32777 +
           ((C5930 + C5931 + C5932) * C32598 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32882) *
               C32902) *
              C32649 * C241 +
          (((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
             C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
             C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
                C32882 +
            (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
             C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
             C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
                C32598) *
               C32902 +
           ((C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
             C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
             C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
                C32882 +
            (C5453 * C1167 - C5454 * C1157 - C5453 * C1168 + C5447 * C1184 +
             C5455 * C1727 - C5456 * C1723 - C5455 * C1728 + C5448 * C1732 +
             C5457 * C6657 - C5458 * C6656 - C5457 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C346 -
          (((C7475 + C7474 + C7473) * C32598 +
            (C7148 + C7147 + C7146) * C32882) *
               C32777 +
           ((C6118 + C6119 + C6120) * C32598 +
            (C7145 + C7144 + C7143) * C32882) *
               C32902) *
              C347 +
          ((C7153 * C32882 + (C7473 + C7474 + C7475) * C32598) * C32902 +
           ((C7151 + C7150 + C7149) * C32882 +
            (C5453 * C2096 - C5454 * C2089 - C5453 * C2097 + C5447 * C2107 +
             C5455 * C2643 - C5456 * C2639 - C5455 * C2644 + C5448 * C2648 +
             C5457 * C7451 - C5458 * C7450 - C5457 * C7452 + C32932 * C7453) *
                C32598) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32882 +
            C174 * C32598) *
               C13666 +
           (C2147 * C32882 + C623 * C32598) * C13667 +
           (C2148 * C32882 + C1866 * C32598) * C13668 +
           (C2151 * C32882 + C2150 * C32598) * C32916) *
              C32649 * C32635 * C110 -
          ((C2149 * C32598 + C2150 * C32882) * C32916 +
           (C1867 * C32598 + C1866 * C32882) * C13668 +
           (C622 * C32598 + C623 * C32882) * C13667 +
           (C175 * C32598 + C174 * C32882) * C13666) *
              C32649 * C32635 * C111 +
          ((C175 * C32882 + C176 * C32598) * C13666 +
           (C622 * C32882 + C621 * C32598) * C13667 +
           (C1867 * C32882 + C1868 * C32598) * C13668 +
           (C2149 * C32882 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32598) *
               C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32882 +
            C174 * C32598) *
               C13666 +
           (C2147 * C32882 + C623 * C32598) * C13667 +
           (C2148 * C32882 + C1866 * C32598) * C13668 +
           (C2151 * C32882 + C2150 * C32598) * C32916) *
              C32649 * C240 -
          (((C113 * C2643 - C114 * C2639 - C113 * C2644 + C32672 * C2648) *
                C32598 +
            C12483 * C32882) *
               C32916 +
           (C2334 * C32598 + C2668 * C32882) * C13668 +
           (C2336 * C32598 + C2667 * C32882) * C13667 +
           (C507 * C32598 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32882) *
               C13666) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32882 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                C32598) *
               C13666 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32882 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32598) *
               C13667 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32882 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32598) *
               C13668 +
           ((C113 * C7079 - C114 * C7076 - C113 * C7080 + C32672 * C7085) *
                C32882 +
            (C113 * C7451 - C114 * C7450 - C113 * C7452 + C32672 * C7453) *
                C32598) *
               C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32882 +
            C174 * C32598) *
               C13666 +
           (C13867 + C13868) * C13667 + C13875 * C13668 + C13876 * C32916) *
              C346 -
          ((C13873 + C13874) * C32916 + (C13872 + C13871) * C13668 +
           (C13870 + C13869) * C13667 + (C13868 + C13867) * C13666) *
              C347 +
          (C13875 * C13666 + C13876 * C13667 + (C13874 + C13873) * C13668 +
           (C12197 * C32882 +
            (C113 * C12368 - C114 * C12367 - C113 * C12369 + C32672 * C12370) *
                C32598) *
               C32916) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
              C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
              C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                 C32882 +
             (C5514 + C5515 + C5516) * C32598) *
                C32902 +
            ((C7143 + C7144 + C7145) * C32882 + C9327 * C32598) * C32777) *
               C589 -
           (((C7475 + C7474 + C7473) * C32598 +
             (C7148 + C7147 + C7146) * C32882) *
                C32777 +
            (C9328 * C32598 + (C7145 + C7144 + C7143) * C32882) * C32902) *
               C590) *
              C32635 * C473 +
          (((C9327 * C32882 + (C6117 + C6116 + C6115) * C32598) * C32902 +
            ((C7473 + C7474 + C7475) * C32882 +
             (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
              C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
              C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
                 C32598) *
                C32777) *
               C590 -
           (((C6115 + C6116 + C6117) * C32598 + C9328 * C32882) * C32777 +
            ((C5519 + C5518 + C5517) * C32598 +
             (C5516 + C5515 + C5514) * C32882) *
                C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
             C174 * C2771 + C175 * C2772 + C176 * C32901) *
                C32902 +
            (C3803 + C3804 + C3805 + C3806) * C32777) *
               C589 -
           ((C3807 + C3808 + C3809 + C3810) * C32777 +
            (C3806 + C3805 + C3804 + C3803) * C32902) *
               C590) *
              C32635 * C473 +
          (((C4078 + C4079 + C4080 + C4081) * C32902 +
            (C1866 * C2770 + C1867 * C2771 + C1868 * C2772 +
             (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                 C32901) *
                C32777) *
               C590 -
           ((C4081 + C4080 + C4079 + C4078) * C32777 +
            (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
                C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32882 +
             C174 * C32598) *
                C13666 +
            (C13867 + C13868) * C13667 + C13875 * C13668 + C13876 * C32916) *
               C589 -
           ((C13873 + C13874) * C32916 + (C13872 + C13871) * C13668 +
            (C13870 + C13869) * C13667 + (C13868 + C13867) * C13666) *
               C590) *
              C32635 * C473 +
          (((C14144 + C14145) * C13666 + (C14146 + C14147) * C13667 +
            (C14148 + C14149) * C13668 +
            (C12381 * C32882 +
             (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
                 C32598) *
                C32916) *
               C590 -
           ((C14149 + C14148) * C32916 + (C14147 + C14146) * C13668 +
            (C14145 + C14144) * C13667 +
            (C175 * C32598 + C174 * C32882) * C13666) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
               C32777) *
              C32649 * C240 -
          (((C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) * C32901 +
            C2335 * C2772 + C2336 * C2771 + C2667 * C2770) *
               C32777 +
           (C505 * C32901 + C506 * C2772 + C507 * C2771 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C2770) *
               C32902) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C2770 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C2771 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C2772 +
            (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                C32901) *
               C32902 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C2770 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C2771 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C2772 +
            (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                C32901) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
               C32777) *
              C32649 * C32635 * C110 -
          ((C620 * C32901 + C621 * C2772 + C622 * C2771 + C623 * C2770) *
               C32777 +
           (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C175 * C2770 + C176 * C2771 + C177 * C2772 + C178 * C32901) *
               C32902 +
           (C622 * C2770 + C621 * C2771 + C620 * C2772 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                C32901) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C6115 + C6116 + C6117) * C32598 +
            (C6118 + C6119 + C6120) * C32882) *
               C32777 +
           ((C5519 + C5518 + C5517) * C32598 +
            (C5516 + C5515 + C5514) * C32882) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C5524 * C32882 + (C5522 + C5521 + C5520) * C32598) * C32902 +
           ((C6117 + C6116 + C6115) * C32882 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721) *
                C32598 +
            (C7664 + C7663 + C7662) * C32882) *
               C32777 +
           ((C5930 + C5931 + C5932) * C32598 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32882) *
               C32902) *
              C32649 * C241 +
          (((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
             C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
             C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
                C32882 +
            (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
             C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
             C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
                C32598) *
               C32902 +
           ((C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
             C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
             C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
                C32882 +
            (C5453 * C1167 - C5454 * C1157 - C5453 * C1168 + C5447 * C1184 +
             C5455 * C1727 - C5456 * C1723 - C5455 * C1728 + C5448 * C1732 +
             C5457 * C6657 - C5458 * C6656 - C5457 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32882 +
            C174 * C32598) *
               C13666 +
           (C2147 * C32882 + C623 * C32598) * C13667 +
           (C2148 * C32882 + C1866 * C32598) * C13668 +
           (C2151 * C32882 + C2150 * C32598) * C32916) *
              C32649 * C32635 * C110 -
          ((C2149 * C32598 + C2150 * C32882) * C32916 +
           (C1867 * C32598 + C1866 * C32882) * C13668 +
           (C622 * C32598 + C623 * C32882) * C13667 +
           (C175 * C32598 + C174 * C32882) * C13666) *
              C32649 * C32635 * C111 +
          ((C175 * C32882 + C176 * C32598) * C13666 +
           (C622 * C32882 + C621 * C32598) * C13667 +
           (C1867 * C32882 + C1868 * C32598) * C13668 +
           (C2149 * C32882 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32598) *
               C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32882 +
            C174 * C32598) *
               C13666 +
           (C2147 * C32882 + C623 * C32598) * C13667 +
           (C2148 * C32882 + C1866 * C32598) * C13668 +
           (C2151 * C32882 + C2150 * C32598) * C32916) *
              C32649 * C240 -
          (((C113 * C2643 - C114 * C2639 - C113 * C2644 + C32672 * C2648) *
                C32598 +
            C12483 * C32882) *
               C32916 +
           (C2334 * C32598 + C2668 * C32882) * C13668 +
           (C2336 * C32598 + C2667 * C32882) * C13667 +
           (C507 * C32598 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32882) *
               C13666) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32882 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                C32598) *
               C13666 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32882 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32598) *
               C13667 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32882 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32598) *
               C13668 +
           ((C113 * C7079 - C114 * C7076 - C113 * C7080 + C32672 * C7085) *
                C32882 +
            (C113 * C7451 - C114 * C7450 - C113 * C7452 + C32672 * C7453) *
                C32598) *
               C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C32649 * C471 -
           ((C1379 + C1380 + C1381) * C32923 + (C1382 + C1383 + C1384) * C839 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C838) *
               C32690 * C32649 * C472) *
              C473 +
          (((C1384 + C1383 + C1382) * C838 + (C1381 + C1380 + C1379) * C839 +
            (C841 * C256 - C842 * C245 - C841 * C257 + C32964 * C275 +
             C843 * C270 - C844 * C252 - C843 * C271 + C32952 * C282 +
             C845 * C1339 - C846 * C1338 - C845 * C1340 + C32932 * C1341) *
                C32923) *
               C32690 * C32649 * C472 -
           ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
            (C904 + C903 + C902) * C838) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C32649 * C471 -
           (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
               C32690 * C32649 * C472) *
              C473 +
          ((C507 * C102 + C506 * C103 + C505 * C104 + C504 * C105 +
            (C113 * C476 - C114 * C475 - C113 * C477 + C32672 * C478) * C106) *
               C32690 * C32649 * C472 -
           (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
            C174 * C102) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C32649 * C471 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C32649 * C472) *
              C473 +
          (((C5932 + C5931 + C5930) * C32961 +
            (C5929 + C5928 + C5927) * C32948 +
            (C5453 * C256 - C5454 * C245 - C5453 * C257 + C5447 * C275 +
             C5455 * C270 - C5456 * C252 - C5455 * C271 + C5448 * C282 +
             C5457 * C1339 - C5458 * C1338 - C5457 * C1340 + C32932 * C1341) *
                C32923) *
               C32690 * C32649 * C472 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C32649 * C471 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C32649 * C472) *
              C473 +
          ((C6334 * C260 - C6335 * C247 - C6334 * C261 + C6328 * C277 +
            C6336 * C266 - C6337 * C250 - C6336 * C267 + C6329 * C280 +
            C6338 * C1030 - C6339 * C1023 - C6338 * C1031 + C6330 * C1041 +
            C6340 * C1036 - C6341 * C1026 - C6340 * C1037 + C6331 * C1044 +
            C6342 * C6571 - C6343 * C6570 - C6342 * C6572 + C6332 * C6573) *
               C32588 * C32690 * C32649 * C472 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32961 +
             C174 * C32948 + C175 * C32923) *
                C10400 +
            (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
               C32649 * C471 -
           ((C2333 * C32923 + C2334 * C32948 + C2668 * C32961) * C32935 +
            (C2335 * C32923 + C2336 * C32948 + C2667 * C32961) * C10401 +
            (C506 * C32923 + C507 * C32948 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32961) *
                C10400) *
               C32649 * C472) *
              C473 +
          (((C507 * C32961 + C506 * C32948 + C505 * C32923) * C10400 +
            (C2336 * C32961 + C2335 * C32948 + C3947 * C32923) * C10401 +
            (C2334 * C32961 + C2333 * C32948 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32923) *
                C32935) *
               C32649 * C472 -
           ((C1868 * C32923 + C1867 * C32948 + C1866 * C32961) * C32935 +
            (C621 * C32923 + C622 * C32948 + C623 * C32961) * C10401 +
            (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C32588 * C10400 +
            (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
               C32649 * C471 -
           ((C845 * C6481 - C846 * C6477 - C845 * C6482 + C32932 * C6486 +
             C843 * C1173 - C844 * C1160 - C843 * C1174 + C32952 * C1187 +
             C841 * C1171 - C842 * C1159 - C841 * C1172 + C32964 * C1186) *
                C32588 * C32935 +
            (C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731 +
             C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
             C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720) *
                C32588 * C10401 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C32588 * C10400) *
               C32649 * C472) *
              C473 +
          (((C1384 + C1383 + C1382) * C32588 * C10400 +
            (C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732) *
                C32588 * C10401 +
            (C841 * C1175 - C842 * C1161 - C841 * C1176 + C32964 * C1188 +
             C843 * C1177 - C844 * C1162 - C843 * C1178 + C32952 * C1189 +
             C845 * C7301 - C846 * C7300 - C845 * C7302 + C32932 * C7303) *
                C32588 * C32935) *
               C32649 * C472 -
           ((C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189 +
             C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
             C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385) *
                C32588 * C32935 +
            (C1574 + C1575 + C1576) * C32588 * C10401 +
            (C904 + C903 + C902) * C32588 * C10400) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C589 -
           ((C1571 + C1572 + C1573) * C32923 + (C1574 + C1575 + C1576) * C839 +
            (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
             C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
             C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                C838) *
               C32690 * C590) *
              C471 +
          (((C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720 +
             C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
             C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731) *
                C838 +
            (C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732) *
                C839 +
            (C841 * C714 - C842 * C707 - C841 * C715 + C32964 * C722 +
             C843 * C1165 - C844 * C1156 - C843 * C1166 + C32952 * C1183 +
             C845 * C1729 - C846 * C1724 - C845 * C1730 + C32932 * C1733) *
                C32923) *
               C32690 * C590 -
           ((C1379 + C1380 + C1381) * C32923 + (C1382 + C1383 + C1384) * C839 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C838) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C589 -
           (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
            (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
               C32690 * C590) *
              C471 +
          (((C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C102 +
            (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) * C103 +
            (C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) * C104 +
            (C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) * C105 +
            (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) * C106) *
               C32690 * C590 -
           (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C471 +
          (((C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720 +
             C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
             C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731) *
                C32961 +
            (C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732) *
                C32948 +
            (C5453 * C714 - C5454 * C707 - C5453 * C715 + C5447 * C722 +
             C5455 * C1165 - C5456 * C1156 - C5455 * C1166 + C5448 * C1183 +
             C5457 * C1729 - C5458 * C1724 - C5457 * C1730 + C32932 * C1733) *
                C32923) *
               C32690 * C590 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C471 +
          ((C6334 * C710 - C6335 * C705 - C6334 * C711 + C6328 * C720 +
            C6336 * C1169 - C6337 * C1158 - C6336 * C1170 + C6329 * C1185 +
            C6338 * C1725 - C6339 * C1722 - C6338 * C1726 + C6330 * C1731 +
            C6340 * C6479 - C6341 * C6476 - C6340 * C6480 + C6331 * C6485 +
            C6342 * C6743 - C6343 * C6742 - C6342 * C6744 + C6332 * C6745) *
               C32588 * C32690 * C590 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32961 +
             C174 * C32948 + C175 * C32923) *
                C10400 +
            (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
               C589 -
           ((C10630 + C10631 + C10632) * C32935 +
            (C10629 + C10628 + C10627) * C10401 +
            (C10626 + C10625 + C10624) * C10400) *
               C590) *
              C471 +
          (((C11079 + C11080 + C11081) * C10400 +
            (C11082 + C11083 + C11084) * C10401 +
            ((C113 * C2641 - C114 * C2638 - C113 * C2642 + C32672 * C2647) *
                 C32961 +
             (C113 * C2643 - C114 * C2639 - C113 * C2644 + C32672 * C2648) *
                 C32948 +
             (C113 * C2645 - C114 * C2640 - C113 * C2646 + C32672 * C2649) *
                 C32923) *
                C32935) *
               C590 -
           ((C11084 + C11083 + C11082) * C32935 +
            (C11081 + C11080 + C11079) * C10401 +
            (C506 * C32923 + C507 * C32948 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32961) *
                C10400) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C32588 * C10400 +
            (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
               C589 -
           ((C11475 + C11476 + C11477) * C32588 * C32935 +
            (C11474 + C11473 + C11472) * C32588 * C10401 +
            (C11471 + C11470 + C11469) * C32588 * C10400) *
               C590) *
              C471 +
          (((C11976 + C11977 + C11978) * C32588 * C10400 +
            (C11979 + C11980 + C11981) * C32588 * C10401 +
            (C841 * C2641 - C842 * C2638 - C841 * C2642 + C32964 * C2647 +
             C843 * C7079 - C844 * C7076 - C843 * C7080 + C32952 * C7085 +
             C845 * C7622 - C846 * C7621 - C845 * C7623 + C32932 * C7624) *
                C32588 * C32935) *
               C590 -
           ((C11981 + C11980 + C11979) * C32588 * C32935 +
            (C11978 + C11977 + C11976) * C32588 * C10401 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C32588 * C10400) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                   C102 +
               C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                  C32690 * C32649 * C32635 * C110 -
              (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
               C174 * C102) *
                  C32690 * C32649 * C32635 * C111 +
              (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
               (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) *
                   C106) *
                  C32690 * C32649 * C32635 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                   C102 +
               C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                  C32690 * C32649 * C240 -
              ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) *
                   C106 +
               (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) *
                   C105 +
               (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) *
                   C104 +
               (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) *
                   C103 +
               (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                   C102) *
                  C32690 * C32649 * C241 +
              ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) *
                   C102 +
               (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                   C103 +
               (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                   C104 +
               (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                   C105 +
               (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) *
                   C106) *
                  C32690 * C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C346 -
          ((C113 * C359 - C114 * C349 - C113 * C360 + C32672 * C379) * C106 +
           (C113 * C361 - C114 * C350 - C113 * C362 + C32672 * C380) * C105 +
           (C113 * C363 - C114 * C351 - C113 * C364 + C32672 * C381) * C104 +
           (C113 * C365 - C114 * C352 - C113 * C366 + C32672 * C382) * C103 +
           (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
              C32690 * C347 +
          ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C102 +
           (C113 * C371 - C114 * C355 - C113 * C372 + C32672 * C385) * C103 +
           (C113 * C373 - C114 * C356 - C113 * C374 + C32672 * C386) * C104 +
           (C113 * C375 - C114 * C357 - C113 * C376 + C32672 * C387) * C105 +
           (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) * C106) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
           (C904 + C903 + C902) * C838) *
              C32690 * C32649 * C32635 * C111 +
          (C912 * C838 + (C910 + C909 + C908) * C839 +
           (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
            C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
            C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C240 -
          ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
            C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
            C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
               C32923 +
           (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
            C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
            C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
               C839 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C838) *
              C32690 * C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C838 +
           (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
            C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
            C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
               C839 +
           (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
            C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
            C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C346 -
          ((C845 * C1165 - C846 * C1156 - C845 * C1166 + C32932 * C1183 +
            C843 * C714 - C844 * C707 - C843 * C715 + C32952 * C722 +
            C841 * C363 - C842 * C351 - C841 * C364 + C32964 * C381) *
               C32923 +
           (C845 * C1167 - C846 * C1157 - C845 * C1168 + C32932 * C1184 +
            C843 * C712 - C844 * C706 - C843 * C713 + C32952 * C721 +
            C841 * C365 - C842 * C352 - C841 * C366 + C32964 * C382) *
               C839 +
           (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
               C838) *
              C32690 * C347 +
          ((C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C838 +
           (C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385 +
            C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
            C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189) *
               C839 +
           (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
            C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
            C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
               C32923) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C346 -
          ((C5457 * C1165 - C5458 * C1156 - C5457 * C1166 + C32932 * C1183 +
            C5455 * C714 - C5456 * C707 - C5455 * C715 + C5448 * C722 +
            C5453 * C363 - C5454 * C351 - C5453 * C364 + C5447 * C381) *
               C32923 +
           (C5457 * C1167 - C5458 * C1157 - C5457 * C1168 + C32932 * C1184 +
            C5455 * C712 - C5456 * C706 - C5455 * C713 + C5448 * C721 +
            C5453 * C365 - C5454 * C352 - C5453 * C366 + C5447 * C382) *
               C32948 +
           (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
               C32961) *
              C32690 * C347 +
          ((C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32961 +
           (C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189) *
               C32948 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32923) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C346 -
          (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
           C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
           C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
           C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
           C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
              C32588 * C32690 * C347 +
          (C6334 * C369 - C6335 * C354 - C6334 * C370 + C6328 * C384 +
           C6336 * C1171 - C6337 * C1159 - C6336 * C1172 + C6329 * C1186 +
           C6338 * C1173 - C6339 * C1160 - C6338 * C1174 + C6330 * C1187 +
           C6340 * C6481 - C6341 * C6477 - C6340 * C6482 + C6331 * C6486 +
           C6342 * C6483 - C6343 * C6478 - C6342 * C6484 + C6332 * C6487) *
              C32588 * C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C32635 * C110 -
          ((C1868 * C32923 + C1867 * C32948 + C1866 * C32961) * C32935 +
           (C621 * C32923 + C622 * C32948 + C623 * C32961) * C10401 +
           (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
              C32649 * C32635 * C111 +
          ((C175 * C32961 + C176 * C32948 + C177 * C32923) * C10400 +
           (C622 * C32961 + C621 * C32948 + C620 * C32923) * C10401 +
           (C1867 * C32961 + C1868 * C32948 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C32923) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C240 -
          ((C2333 * C32923 + C2334 * C32948 + C2668 * C32961) * C32935 +
           (C2335 * C32923 + C2336 * C32948 + C2667 * C32961) * C10401 +
           (C506 * C32923 + C507 * C32948 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32961) *
               C10400) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32961 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32948 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C32923) *
               C10400 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32961 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32948 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32923) *
               C10401 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32961 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32948 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C32923) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
              C346 -
          ((C10630 + C10631 + C10632) * C32935 +
           (C10629 + C10628 + C10627) * C10401 +
           (C10626 + C10625 + C10624) * C10400) *
              C347 +
          (C10634 * C10400 + (C10632 + C10631 + C10630) * C10401 +
           ((C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
                C32961 +
            (C113 * C2102 - C114 * C2092 - C113 * C2103 + C32672 * C2110) *
                C32948 +
            (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
                C32923) *
               C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189 +
            C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
            C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385) *
               C32588 * C32935 +
           (C1574 + C1575 + C1576) * C32588 * C10401 +
           (C904 + C903 + C902) * C32588 * C10400) *
              C32649 * C32635 * C111 +
          (C912 * C32588 * C10400 + (C1573 + C1572 + C1571) * C32588 * C10401 +
           (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
            C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
            C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C845 * C6481 - C846 * C6477 - C845 * C6482 + C32932 * C6486 +
            C843 * C1173 - C844 * C1160 - C843 * C1174 + C32952 * C1187 +
            C841 * C1171 - C842 * C1159 - C841 * C1172 + C32964 * C1186) *
               C32588 * C32935 +
           (C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731 +
            C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
            C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720) *
               C32588 * C10401 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C32588 * C10400) *
              C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C32588 * C10400 +
           (C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
            C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
            C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
               C32588 * C10401 +
           (C841 * C1173 - C842 * C1160 - C841 * C1174 + C32964 * C1187 +
            C843 * C6481 - C844 * C6477 - C843 * C6482 + C32952 * C6486 +
            C845 * C6483 - C846 * C6478 - C845 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
              C346 -
          ((C11475 + C11476 + C11477) * C32588 * C32935 +
           (C11474 + C11473 + C11472) * C32588 * C10401 +
           (C11471 + C11470 + C11469) * C32588 * C10400) *
              C347 +
          (C11480 * C10400 + (C11477 + C11476 + C11475) * C32588 * C10401 +
           (C841 * C2100 - C842 * C2091 - C841 * C2101 + C32964 * C2109 +
            C843 * C7081 - C844 * C7077 - C843 * C7082 + C32952 * C7086 +
            C845 * C7083 - C846 * C7078 - C845 * C7084 + C32932 * C7087) *
               C32588 * C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C589 -
           ((C1571 + C1572 + C1573) * C32923 + (C1574 + C1575 + C1576) * C839 +
            (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
             C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
             C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                C838) *
               C32690 * C590) *
              C32635 * C473 +
          (((C1576 + C1575 + C1574) * C838 + (C1573 + C1572 + C1571) * C839 +
            (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
             C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
             C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                C32923) *
               C32690 * C590 -
           ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
            (C904 + C903 + C902) * C838) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C589 -
           (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
            (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
               C32690 * C590) *
              C32635 * C473 +
          ((C623 * C102 + C622 * C103 + C621 * C104 + C620 * C105 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) * C106) *
               C32690 * C590 -
           (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
            C174 * C102) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C32635 * C473 +
          (((C6120 + C6119 + C6118) * C32961 +
            (C6117 + C6116 + C6115) * C32948 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32923) *
               C32690 * C590 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C32635 * C473 +
          ((C6334 * C365 - C6335 * C352 - C6334 * C366 + C6328 * C382 +
            C6336 * C712 - C6337 * C706 - C6336 * C713 + C6329 * C721 +
            C6338 * C1167 - C6339 * C1157 - C6338 * C1168 + C6330 * C1184 +
            C6340 * C1727 - C6341 * C1723 - C6340 * C1728 + C6331 * C1732 +
            C6342 * C6657 - C6343 * C6656 - C6342 * C6658 + C6332 * C6659) *
               C32588 * C32690 * C590 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32961 +
             C174 * C32948 + C175 * C32923) *
                C10400 +
            (C10624 + C10625 + C10626) * C10401 + C10634 * C32935) *
               C589 -
           ((C10630 + C10631 + C10632) * C32935 +
            (C10629 + C10628 + C10627) * C10401 +
            (C10626 + C10625 + C10624) * C10400) *
               C590) *
              C32635 * C473 +
          (((C10927 + C10928 + C10929) * C10400 +
            (C10930 + C10931 + C10932) * C10401 +
            (C2150 * C32961 + C2149 * C32948 +
             (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                 C32923) *
                C32935) *
               C590 -
           ((C10932 + C10931 + C10930) * C32935 +
            (C10929 + C10928 + C10927) * C10401 +
            (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C32588 * C10400 +
            (C11469 + C11470 + C11471) * C32588 * C10401 + C11480 * C32935) *
               C589 -
           ((C11475 + C11476 + C11477) * C32588 * C32935 +
            (C11474 + C11473 + C11472) * C32588 * C10401 +
            (C11471 + C11470 + C11469) * C32588 * C10400) *
               C590) *
              C32635 * C473 +
          (((C1576 + C1575 + C1574) * C32588 * C10400 +
            (C11791 + C11792 + C11793) * C32588 * C10401 +
            (C841 * C2096 - C842 * C2089 - C841 * C2097 + C32964 * C2107 +
             C843 * C2643 - C844 * C2639 - C843 * C2644 + C32952 * C2648 +
             C845 * C7451 - C846 * C7450 - C845 * C7452 + C32932 * C7453) *
                C32588 * C32935) *
               C590 -
           ((C11793 + C11792 + C11791) * C32588 * C32935 +
            (C1574 + C1575 + C1576) * C32588 * C10401 +
            (C904 + C903 + C902) * C32588 * C10400) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C240 -
          ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) * C106 +
           (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) * C105 +
           (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) * C104 +
           (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) * C103 +
           (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
              C32690 * C32649 * C241 +
          ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C102 +
           (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C103 +
           (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C104 +
           (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) * C105 +
           (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) * C106) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C32635 * C110 -
          (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
           C174 * C102) *
              C32690 * C32649 * C32635 * C111 +
          (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) * C106) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
           (C904 + C903 + C902) * C838) *
              C32690 * C32649 * C32635 * C111 +
          (C912 * C838 + (C910 + C909 + C908) * C839 +
           (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
            C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
            C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C240 -
          ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
            C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
            C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
               C32923 +
           (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
            C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
            C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
               C839 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C838) *
              C32690 * C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C838 +
           (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
            C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
            C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
               C839 +
           (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
            C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
            C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C32635 * C110 -
          ((C1868 * C32923 + C1867 * C32948 + C1866 * C32961) * C32935 +
           (C621 * C32923 + C622 * C32948 + C623 * C32961) * C10401 +
           (C176 * C32923 + C175 * C32948 + C174 * C32961) * C10400) *
              C32649 * C32635 * C111 +
          ((C175 * C32961 + C176 * C32948 + C177 * C32923) * C10400 +
           (C622 * C32961 + C621 * C32948 + C620 * C32923) * C10401 +
           (C1867 * C32961 + C1868 * C32948 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C32923) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32961 +
            C174 * C32948 + C175 * C32923) *
               C10400 +
           (C2147 * C32961 + C623 * C32948 + C622 * C32923) * C10401 +
           (C2148 * C32961 + C1866 * C32948 + C1867 * C32923) * C32935) *
              C32649 * C240 -
          ((C2333 * C32923 + C2334 * C32948 + C2668 * C32961) * C32935 +
           (C2335 * C32923 + C2336 * C32948 + C2667 * C32961) * C10401 +
           (C506 * C32923 + C507 * C32948 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32961) *
               C10400) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32961 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32948 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C32923) *
               C10400 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32961 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32948 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32923) *
               C10401 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32961 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32948 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C32923) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189 +
            C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
            C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385) *
               C32588 * C32935 +
           (C1574 + C1575 + C1576) * C32588 * C10401 +
           (C904 + C903 + C902) * C32588 * C10400) *
              C32649 * C32635 * C111 +
          (C912 * C32588 * C10400 + (C1573 + C1572 + C1571) * C32588 * C10401 +
           (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
            C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
            C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C32588 * C10400 +
           (C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185) *
               C32588 * C10401 +
           (C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C845 * C6481 - C846 * C6477 - C845 * C6482 + C32932 * C6486 +
            C843 * C1173 - C844 * C1160 - C843 * C1174 + C32952 * C1187 +
            C841 * C1171 - C842 * C1159 - C841 * C1172 + C32964 * C1186) *
               C32588 * C32935 +
           (C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731 +
            C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
            C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720) *
               C32588 * C10401 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C32588 * C10400) *
              C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C32588 * C10400 +
           (C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
            C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
            C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
               C32588 * C10401 +
           (C841 * C1173 - C842 * C1160 - C841 * C1174 + C32964 * C1187 +
            C843 * C6481 - C844 * C6477 - C843 * C6482 + C32952 * C6486 +
            C845 * C6483 - C846 * C6478 - C845 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[75] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C32593 +
             (C2827 + C2828) * C32601 + C2835 * C17929) *
                C21006 +
            ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
                C32777) *
               C32649 * C471 -
           (((C4929 + C4930) * C17929 + (C4931 + C4932) * C32601 +
             (C5337 + C5336) * C32593) *
                C32777 +
            ((C3201 + C3202) * C17929 + (C3203 + C3204) * C32601 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C32593) *
                C21006) *
               C32649 * C472) *
              C473 +
          ((((C3204 + C3203) * C32593 + (C3202 + C3201) * C32601 +
             (C3200 + C3199) * C17929) *
                C21006 +
            ((C4932 + C4931) * C32593 + (C4930 + C4929) * C32601 +
             (C2774 * C716 - C2775 * C708 - C2774 * C717 + C32900 * C723 +
              C2776 * C1531 - C2777 * C1530 - C2776 * C1532 + C32735 * C1533) *
                 C17929) *
                C32777) *
               C32649 * C472 -
           (((C3371 + C3372) * C17929 + C5128 * C32601 + C5129 * C32593) *
                C32777 +
            ((C2832 + C2831) * C17929 + (C2830 + C2829) * C32601 +
             (C2828 + C2827) * C32593) *
                C21006) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[76] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C32593 +
             (C2827 + C2828) * C32601 + C2835 * C17929) *
                C21006 +
            ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
                C32777) *
               C589 -
           (((C4705 + C4706) * C17929 + C13360 * C32601 +
             (C4709 + C4710) * C32593) *
                C32777 +
            (C5128 * C17929 + C5129 * C32601 + (C4704 + C4703) * C32593) *
                C21006) *
               C590) *
              C471 +
          ((((C5336 + C5337) * C32593 + (C4932 + C4931) * C32601 +
             (C4930 + C4929) * C17929) *
                C21006 +
            ((C13567 + C13568) * C32593 + (C13165 + C13164) * C32601 +
             (C2774 * C1179 - C2775 * C1163 - C2774 * C1180 + C32900 * C1190 +
              C2776 * C1181 - C2777 * C1164 - C2776 * C1182 + C32735 * C1191) *
                 C17929) *
                C32777) *
               C590 -
           (((C4929 + C4930) * C17929 + (C4931 + C4932) * C32601 +
             (C5337 + C5336) * C32593) *
                C32777 +
            ((C3201 + C3202) * C17929 + (C3203 + C3204) * C32601 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C32593) *
                C21006) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[77] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32593 +
            (C2827 + C2828) * C32601 + C2835 * C17929) *
               C21006 +
           ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
               C32777) *
              C32649 * C240 -
          (((C4929 + C4930) * C17929 + (C4931 + C4932) * C32601 +
            (C5337 + C5336) * C32593) *
               C32777 +
           ((C3201 + C3202) * C17929 + (C3203 + C3204) * C32601 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C32593) *
               C21006) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C32593 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C32601 +
            (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
             C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
                C17929) *
               C21006 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C32593 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C32601 +
            (C2774 * C1165 - C2775 * C1156 - C2774 * C1166 + C32900 * C1183 +
             C2776 * C1729 - C2777 * C1724 - C2776 * C1730 + C32735 * C1733) *
                C17929) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32593 +
            (C2827 + C2828) * C32601 + C2835 * C17929) *
               C21006 +
           ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C3371 + C3372) * C17929 + C5128 * C32601 + C5129 * C32593) *
               C32777 +
           ((C2832 + C2831) * C17929 + (C2830 + C2829) * C32601 +
            (C2828 + C2827) * C32593) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C2835 * C32593 + C2836 * C32601 + (C2834 + C2833) * C17929) *
               C21006 +
           (C4362 * C32593 + (C3372 + C3371) * C32601 +
            (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
             C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                C17929) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32593 +
            (C2827 + C2828) * C32601 + C2835 * C17929) *
               C21006 +
           ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
               C32777) *
              C346 -
          (((C4705 + C4706) * C17929 + C13360 * C32601 +
            (C4709 + C4710) * C32593) *
               C32777 +
           (C5128 * C17929 + C5129 * C32601 + (C4704 + C4703) * C32593) *
               C21006) *
              C347 +
          ((C12925 * C32593 + C12926 * C32601 + (C4706 + C4705) * C17929) *
               C21006 +
           (C14581 * C32593 + (C12955 + C12954) * C32601 +
            (C2774 * C2094 - C2775 * C2088 - C2774 * C2095 + C32900 * C2106 +
             C2776 * C2645 - C2777 * C2640 - C2776 * C2646 + C32735 * C2649) *
                C17929) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[78] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C32593 +
             (C2827 + C2828) * C32601 + C2835 * C17929) *
                C21006 +
            ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
                C32777) *
               C589 -
           (((C4705 + C4706) * C17929 + C13360 * C32601 +
             (C4709 + C4710) * C32593) *
                C32777 +
            (C5128 * C17929 + C5129 * C32601 + (C4704 + C4703) * C32593) *
                C21006) *
               C590) *
              C32635 * C473 +
          (((C5127 * C32593 + C4362 * C32601 + (C3372 + C3371) * C17929) *
                C21006 +
            (C12926 * C32593 + (C4706 + C4705) * C32601 +
             (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
              C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
                 C17929) *
                C32777) *
               C590 -
           (((C3371 + C3372) * C17929 + C5128 * C32601 + C5129 * C32593) *
                C32777 +
            ((C2832 + C2831) * C17929 + (C2830 + C2829) * C32601 +
             (C2828 + C2827) * C32593) *
                C21006) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[79] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32593 +
            (C2827 + C2828) * C32601 + C2835 * C17929) *
               C21006 +
           ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C3371 + C3372) * C17929 + C5128 * C32601 + C5129 * C32593) *
               C32777 +
           ((C2832 + C2831) * C17929 + (C2830 + C2829) * C32601 +
            (C2828 + C2827) * C32593) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C2835 * C32593 + C2836 * C32601 + (C2834 + C2833) * C17929) *
               C21006 +
           (C4362 * C32593 + (C3372 + C3371) * C32601 +
            (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
             C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                C17929) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C32593 +
            (C2827 + C2828) * C32601 + C2835 * C17929) *
               C21006 +
           ((C4703 + C4704) * C32593 + C5127 * C32601 + C4362 * C17929) *
               C32777) *
              C32649 * C240 -
          (((C4929 + C4930) * C17929 + (C4931 + C4932) * C32601 +
            (C5337 + C5336) * C32593) *
               C32777 +
           ((C3201 + C3202) * C17929 + (C3203 + C3204) * C32601 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C32593) *
               C21006) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C32593 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C32601 +
            (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
             C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
                C17929) *
               C21006 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C32593 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C32601 +
            (C2774 * C1165 - C2775 * C1156 - C2774 * C1166 + C32900 * C1183 +
             C2776 * C1729 - C2777 * C1724 - C2776 * C1730 + C32735 * C1733) *
                C17929) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[80] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C15938 +
             (C2827 + C2828) * C32598) *
                C32773 +
            ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
            C25620 * C24497) *
               C32649 * C471 -
           (((C13164 + C13165) * C32598 + (C13568 + C13567) * C15938) * C24497 +
            ((C4931 + C4932) * C32598 + (C5337 + C5336) * C15938) * C32780 +
            ((C3203 + C3204) * C32598 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C15938) *
                C32773) *
               C32649 * C472) *
              C473 +
          ((((C3204 + C3203) * C15938 + (C3202 + C3201) * C32598) * C32773 +
            ((C4932 + C4931) * C15938 + (C4930 + C4929) * C32598) * C32780 +
            ((C13165 + C13164) * C15938 +
             (C2774 * C1179 - C2775 * C1163 - C2774 * C1180 + C32900 * C1190 +
              C2776 * C1181 - C2777 * C1164 - C2776 * C1182 + C32735 * C1191) *
                 C32598) *
                C24497) *
               C32649 * C472 -
           (((C4705 + C4706) * C32598 + C13360 * C15938) * C24497 +
            (C5128 * C32598 + C5129 * C15938) * C32780 +
            ((C2830 + C2829) * C32598 + (C2828 + C2827) * C15938) * C32773) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[81] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C15938 +
             (C2827 + C2828) * C32598) *
                C32773 +
            ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
            C25620 * C24497) *
               C589 -
           (((C12954 + C12955) * C32598 + (C12956 + C12957) * C15938) * C24497 +
            (C13360 * C32598 + (C4709 + C4710) * C15938) * C32780 +
            (C5129 * C32598 + (C4704 + C4703) * C15938) * C32773) *
               C590) *
              C471 +
          ((((C5336 + C5337) * C15938 + (C4932 + C4931) * C32598) * C32773 +
            ((C13567 + C13568) * C15938 + (C13165 + C13164) * C32598) * C32780 +
            ((C14999 + C15000) * C15938 +
             (C2774 * C2643 - C2775 * C2639 - C2774 * C2644 + C32900 * C2648 +
              C2776 * C7451 - C2777 * C7450 - C2776 * C7452 + C32735 * C7453) *
                 C32598) *
                C24497) *
               C590 -
           (((C13164 + C13165) * C32598 + (C13568 + C13567) * C15938) * C24497 +
            ((C4931 + C4932) * C32598 + (C5337 + C5336) * C15938) * C32780 +
            ((C3203 + C3204) * C32598 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C15938) *
                C32773) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[82] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C15938 +
            (C2827 + C2828) * C32598) *
               C32773 +
           ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
           (C12925 * C15938 + C12926 * C32598) * C24497) *
              C32649 * C240 -
          (((C13164 + C13165) * C32598 + (C13568 + C13567) * C15938) * C24497 +
           ((C4931 + C4932) * C32598 + (C5337 + C5336) * C15938) * C32780 +
           ((C3203 + C3204) * C32598 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C15938) *
               C32773) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C15938 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C32598) *
               C32773 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C15938 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C32598) *
               C32780 +
           ((C2774 * C1173 - C2775 * C1160 - C2774 * C1174 + C32900 * C1187 +
             C2776 * C6481 - C2777 * C6477 - C2776 * C6482 + C32735 * C6486) *
                C15938 +
            (C2774 * C1177 - C2775 * C1162 - C2774 * C1178 + C32900 * C1189 +
             C2776 * C7301 - C2777 * C7300 - C2776 * C7302 + C32735 * C7303) *
                C32598) *
               C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C15938 +
            (C2827 + C2828) * C32598) *
               C32773 +
           ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
           (C12925 * C15938 + C12926 * C32598) * C24497) *
              C32649 * C32635 * C110 -
          (((C4705 + C4706) * C32598 + C13360 * C15938) * C24497 +
           (C5128 * C32598 + C5129 * C15938) * C32780 +
           ((C2830 + C2829) * C32598 + (C2828 + C2827) * C15938) * C32773) *
              C32649 * C32635 * C111 +
          ((C2835 * C15938 + C2836 * C32598) * C32773 +
           (C4362 * C15938 + (C3372 + C3371) * C32598) * C32780 +
           ((C4706 + C4705) * C15938 +
            (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
             C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
                C32598) *
               C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C15938 +
            (C2827 + C2828) * C32598) *
               C32773 +
           ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
           C25620 * C24497) *
              C346 -
          (((C12954 + C12955) * C32598 + (C12956 + C12957) * C15938) * C24497 +
           (C13360 * C32598 + (C4709 + C4710) * C15938) * C32780 +
           (C5129 * C32598 + (C4704 + C4703) * C15938) * C32773) *
              C347 +
          (C25620 * C32773 +
           (C14581 * C15938 + (C12955 + C12954) * C32598) * C32780 +
           ((C14596 + C14595) * C15938 +
            (C2774 * C2102 - C2775 * C2092 - C2774 * C2103 + C32900 * C2110 +
             C2776 * C12282 - C2777 * C12281 - C2776 * C12283 +
             C32735 * C12284) *
                C32598) *
               C24497) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[83] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C15938 +
             (C2827 + C2828) * C32598) *
                C32773 +
            ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
            C25620 * C24497) *
               C589 -
           (((C12954 + C12955) * C32598 + (C12956 + C12957) * C15938) * C24497 +
            (C13360 * C32598 + (C4709 + C4710) * C15938) * C32780 +
            (C5129 * C32598 + (C4704 + C4703) * C15938) * C32773) *
               C590) *
              C32635 * C473 +
          (((C5127 * C15938 + C4362 * C32598) * C32773 +
            (C12926 * C15938 + (C4706 + C4705) * C32598) * C32780 +
            ((C12955 + C12954) * C15938 +
             (C2774 * C2094 - C2775 * C2088 - C2774 * C2095 + C32900 * C2106 +
              C2776 * C2645 - C2777 * C2640 - C2776 * C2646 + C32735 * C2649) *
                 C32598) *
                C24497) *
               C590 -
           (((C4705 + C4706) * C32598 + C13360 * C15938) * C24497 +
            (C5128 * C32598 + C5129 * C15938) * C32780 +
            ((C2830 + C2829) * C32598 + (C2828 + C2827) * C15938) * C32773) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[84] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C15938 +
            (C2827 + C2828) * C32598) *
               C32773 +
           ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
           (C12925 * C15938 + C12926 * C32598) * C24497) *
              C32649 * C32635 * C110 -
          (((C4705 + C4706) * C32598 + C13360 * C15938) * C24497 +
           (C5128 * C32598 + C5129 * C15938) * C32780 +
           ((C2830 + C2829) * C32598 + (C2828 + C2827) * C15938) * C32773) *
              C32649 * C32635 * C111 +
          ((C2835 * C15938 + C2836 * C32598) * C32773 +
           (C4362 * C15938 + (C3372 + C3371) * C32598) * C32780 +
           ((C4706 + C4705) * C15938 +
            (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
             C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
                C32598) *
               C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C15938 +
            (C2827 + C2828) * C32598) *
               C32773 +
           ((C4703 + C4704) * C15938 + C5127 * C32598) * C32780 +
           (C12925 * C15938 + C12926 * C32598) * C24497) *
              C32649 * C240 -
          (((C13164 + C13165) * C32598 + (C13568 + C13567) * C15938) * C24497 +
           ((C4931 + C4932) * C32598 + (C5337 + C5336) * C15938) * C32780 +
           ((C3203 + C3204) * C32598 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C15938) *
               C32773) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C15938 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C32598) *
               C32773 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C15938 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C32598) *
               C32780 +
           ((C2774 * C1173 - C2775 * C1160 - C2774 * C1174 + C32900 * C1187 +
             C2776 * C6481 - C2777 * C6477 - C2776 * C6482 + C32735 * C6486) *
                C15938 +
            (C2774 * C1177 - C2775 * C1162 - C2774 * C1178 + C32900 * C1189 +
             C2776 * C7301 - C2777 * C7300 - C2776 * C7302 + C32735 * C7303) *
                C32598) *
               C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[85] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
              C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
              C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                 C15938 +
             (C902 + C903 + C904) * C32598) *
                C21006 +
            ((C11469 + C11470 + C11471) * C15938 +
             (C1576 + C1575 + C1574) * C32598) *
                C32777) *
               C32649 * C471 -
           (((C22261 + C22262 + C22263) * C32598 +
             (C11978 + C11977 + C11976) * C15938) *
                C32777 +
            ((C1382 + C1383 + C1384) * C32598 +
             (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
              C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
              C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                 C15938) *
                C21006) *
               C32649 * C472) *
              C473 +
          ((((C1384 + C1383 + C1382) * C15938 +
             (C1381 + C1380 + C1379) * C32598) *
                C21006 +
            ((C22263 + C22262 + C22261) * C15938 +
             (C841 * C714 - C842 * C707 - C841 * C715 + C32964 * C722 +
              C843 * C1165 - C844 * C1156 - C843 * C1166 + C32952 * C1183 +
              C845 * C1729 - C846 * C1724 - C845 * C1730 + C32932 * C1733) *
                 C32598) *
                C32777) *
               C32649 * C472 -
           (((C1571 + C1572 + C1573) * C32598 +
             (C1574 + C1575 + C1576) * C15938) *
                C32777 +
            ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
                C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32970 +
             C174 * C32963 + C175 * C32950 + C176 * C32901) *
                C21006 +
            (C21205 + C21206 + C21207 + C21208) * C32777) *
               C32649 * C471 -
           ((C3947 * C32901 + C2335 * C32950 + C2336 * C32963 +
             C2667 * C32970) *
                C32777 +
            (C505 * C32901 + C506 * C32950 + C507 * C32963 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32970) *
                C21006) *
               C32649 * C472) *
              C473 +
          (((C507 * C32970 + C506 * C32963 + C505 * C32950 + C504 * C32901) *
                C21006 +
            (C2336 * C32970 + C2335 * C32963 + C3947 * C32950 +
             (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) *
                 C32901) *
                C32777) *
               C32649 * C472 -
           ((C620 * C32901 + C621 * C32950 + C622 * C32963 + C623 * C32970) *
                C32777 +
            (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
                C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C15938 +
             C174 * C32598) *
                C32972 +
            (C22954 + C22955) * C32969 + C22962 * C32960 + C22963 * C32916) *
               C32649 * C471 -
           ((C14013 * C32598 + C12483 * C15938) * C32916 +
            (C2334 * C32598 + C2668 * C15938) * C32960 +
            (C2336 * C32598 + C2667 * C15938) * C32969 +
            (C507 * C32598 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C15938) *
                C32972) *
               C32649 * C472) *
              C473 +
          (((C507 * C15938 + C506 * C32598) * C32972 +
            (C2336 * C15938 + C2335 * C32598) * C32969 +
            (C2334 * C15938 + C2333 * C32598) * C32960 +
            (C14013 * C15938 +
             (C113 * C2645 - C114 * C2640 - C113 * C2646 + C32672 * C2649) *
                 C32598) *
                C32916) *
               C32649 * C472 -
           ((C2149 * C32598 + C2150 * C15938) * C32916 +
            (C1867 * C32598 + C1866 * C15938) * C32960 +
            (C622 * C32598 + C623 * C15938) * C32969 +
            (C175 * C32598 + C174 * C15938) * C32972) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[86] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
              C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
              C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                 C15938 +
             (C902 + C903 + C904) * C32598) *
                C21006 +
            ((C11469 + C11470 + C11471) * C15938 + C22460 * C32598) * C32777) *
               C589 -
           (((C11793 + C11792 + C11791) * C32598 +
             (C11474 + C11473 + C11472) * C15938) *
                C32777 +
            (C22461 * C32598 + (C11471 + C11470 + C11469) * C15938) * C21006) *
               C590) *
              C471 +
          ((((C11976 + C11977 + C11978) * C15938 +
             (C22263 + C22262 + C22261) * C32598) *
                C21006 +
            ((C11979 + C11980 + C11981) * C15938 +
             (C841 * C1175 - C842 * C1161 - C841 * C1176 + C32964 * C1188 +
              C843 * C1177 - C844 * C1162 - C843 * C1178 + C32952 * C1189 +
              C845 * C7301 - C846 * C7300 - C845 * C7302 + C32932 * C7303) *
                 C32598) *
                C32777) *
               C590 -
           (((C22261 + C22262 + C22263) * C32598 +
             (C11978 + C11977 + C11976) * C15938) *
                C32777 +
            ((C1382 + C1383 + C1384) * C32598 +
             (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
              C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
              C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                 C15938) *
                C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32970 +
             C174 * C32963 + C175 * C32950 + C176 * C32901) *
                C21006 +
            (C21205 + C21206 + C21207 + C21208) * C32777) *
               C589 -
           ((C21209 + C21210 + C21211 + C21212) * C32777 +
            (C21208 + C21207 + C21206 + C21205) * C21006) *
               C590) *
              C471 +
          (((C21607 + C21608 + C21609 + C21610) * C21006 +
            (C2668 * C32970 + C2334 * C32963 + C2333 * C32950 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32901) *
                C32777) *
               C590 -
           ((C21610 + C21609 + C21608 + C21607) * C32777 +
            (C505 * C32901 + C506 * C32950 + C507 * C32963 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32970) *
                C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C15938 +
             C174 * C32598) *
                C32972 +
            (C22954 + C22955) * C32969 + C22962 * C32960 + C22963 * C32916) *
               C589 -
           ((C22960 + C22961) * C32916 + (C22959 + C22958) * C32960 +
            (C22957 + C22956) * C32969 + (C22955 + C22954) * C32972) *
               C590) *
              C471 +
          (((C23360 + C23361) * C32972 + (C23362 + C23363) * C32969 +
            (C23364 + C23365) * C32960 +
            (C12484 * C15938 +
             (C113 * C12282 - C114 * C12281 - C113 * C12283 + C32672 * C12284) *
                 C32598) *
                C32916) *
               C590 -
           ((C23365 + C23364) * C32916 + (C23363 + C23362) * C32960 +
            (C23361 + C23360) * C32969 +
            (C507 * C32598 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C15938) *
                C32972) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C32970 +
                C174 * C32963 + C175 * C32950 + C176 * C32901) *
                   C21006 +
               (C2147 * C32970 + C623 * C32963 + C622 * C32950 +
                C621 * C32901) *
                   C32777) *
                  C32649 * C32635 * C110 -
              ((C620 * C32901 + C621 * C32950 + C622 * C32963 + C623 * C32970) *
                   C32777 +
               (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
                   C21006) *
                  C32649 * C32635 * C111 +
              ((C175 * C32970 + C176 * C32963 + C177 * C32950 + C178 * C32901) *
                   C21006 +
               (C622 * C32970 + C621 * C32963 + C620 * C32950 +
                (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                    C32901) *
                   C32777) *
                  C32649 * C32635 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                    C32970 +
                C174 * C32963 + C175 * C32950 + C176 * C32901) *
                   C21006 +
               (C2147 * C32970 + C623 * C32963 + C622 * C32950 +
                C621 * C32901) *
                   C32777) *
                  C32649 * C240 -
              ((C3947 * C32901 + C2335 * C32950 + C2336 * C32963 +
                C2667 * C32970) *
                   C32777 +
               (C505 * C32901 + C506 * C32950 + C507 * C32963 +
                (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                    C32970) *
                   C21006) *
                  C32649 * C241 +
              (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) *
                    C32970 +
                (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                    C32963 +
                (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                    C32950 +
                (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                    C32901) *
                   C21006 +
               ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                    C32970 +
                (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                    C32963 +
                (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                    C32950 +
                (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                    C32901) *
                   C32777) *
                  C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C21205 + C21206 + C21207 + C21208) * C32777) *
              C346 -
          ((C21209 + C21210 + C21211 + C21212) * C32777 +
           (C21208 + C21207 + C21206 + C21205) * C21006) *
              C347 +
          ((C21212 + C21211 + C21210 + C21209) * C21006 +
           (C2151 * C32970 + C2150 * C32963 + C2149 * C32950 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32901) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C1571 + C1572 + C1573) * C32598 +
            (C1574 + C1575 + C1576) * C15938) *
               C32777 +
           ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C912 * C15938 + (C910 + C909 + C908) * C32598) * C21006 +
           ((C1573 + C1572 + C1571) * C15938 +
            (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
             C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
             C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721) *
                C32598 +
            (C11978 + C11977 + C11976) * C15938) *
               C32777 +
           ((C1382 + C1383 + C1384) * C32598 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C15938) *
               C21006) *
              C32649 * C241 +
          (((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
             C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
             C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
                C15938 +
            (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
             C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
             C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
                C32598) *
               C21006 +
           ((C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
             C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
             C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
                C15938 +
            (C841 * C1167 - C842 * C1157 - C841 * C1168 + C32964 * C1184 +
             C843 * C1727 - C844 * C1723 - C843 * C1728 + C32952 * C1732 +
             C845 * C6657 - C846 * C6656 - C845 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C346 -
          (((C11793 + C11792 + C11791) * C32598 +
            (C11474 + C11473 + C11472) * C15938) *
               C32777 +
           ((C1574 + C1575 + C1576) * C32598 +
            (C11471 + C11470 + C11469) * C15938) *
               C21006) *
              C347 +
          ((C11479 * C15938 + (C11791 + C11792 + C11793) * C32598) * C21006 +
           ((C11477 + C11476 + C11475) * C15938 +
            (C841 * C2096 - C842 * C2089 - C841 * C2097 + C32964 * C2107 +
             C843 * C2643 - C844 * C2639 - C843 * C2644 + C32952 * C2648 +
             C845 * C7451 - C846 * C7450 - C845 * C7452 + C32932 * C7453) *
                C32598) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C15938 +
            C174 * C32598) *
               C32972 +
           (C2147 * C15938 + C623 * C32598) * C32969 +
           (C2148 * C15938 + C1866 * C32598) * C32960 +
           (C2151 * C15938 + C2150 * C32598) * C32916) *
              C32649 * C32635 * C110 -
          ((C2149 * C32598 + C2150 * C15938) * C32916 +
           (C1867 * C32598 + C1866 * C15938) * C32960 +
           (C622 * C32598 + C623 * C15938) * C32969 +
           (C175 * C32598 + C174 * C15938) * C32972) *
              C32649 * C32635 * C111 +
          ((C175 * C15938 + C176 * C32598) * C32972 +
           (C622 * C15938 + C621 * C32598) * C32969 +
           (C1867 * C15938 + C1868 * C32598) * C32960 +
           (C2149 * C15938 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32598) *
               C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C15938 +
            C174 * C32598) *
               C32972 +
           (C2147 * C15938 + C623 * C32598) * C32969 +
           (C2148 * C15938 + C1866 * C32598) * C32960 +
           (C2151 * C15938 + C2150 * C32598) * C32916) *
              C32649 * C240 -
          ((C14013 * C32598 + C12483 * C15938) * C32916 +
           (C2334 * C32598 + C2668 * C15938) * C32960 +
           (C2336 * C32598 + C2667 * C15938) * C32969 +
           (C507 * C32598 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C15938) *
               C32972) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C15938 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                C32598) *
               C32972 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C15938 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32598) *
               C32969 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C15938 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32598) *
               C32960 +
           ((C113 * C7079 - C114 * C7076 - C113 * C7080 + C32672 * C7085) *
                C15938 +
            (C113 * C7451 - C114 * C7450 - C113 * C7452 + C32672 * C7453) *
                C32598) *
               C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C15938 +
            C174 * C32598) *
               C32972 +
           (C22954 + C22955) * C32969 + C22962 * C32960 + C22963 * C32916) *
              C346 -
          ((C22960 + C22961) * C32916 + (C22959 + C22958) * C32960 +
           (C22957 + C22956) * C32969 + (C22955 + C22954) * C32972) *
              C347 +
          (C22962 * C32972 + C22963 * C32969 + (C22961 + C22960) * C32960 +
           (C12197 * C15938 +
            (C113 * C12368 - C114 * C12367 - C113 * C12369 + C32672 * C12370) *
                C32598) *
               C32916) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[88] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
              C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
              C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                 C15938 +
             (C902 + C903 + C904) * C32598) *
                C21006 +
            ((C11469 + C11470 + C11471) * C15938 + C22460 * C32598) * C32777) *
               C589 -
           (((C11793 + C11792 + C11791) * C32598 +
             (C11474 + C11473 + C11472) * C15938) *
                C32777 +
            (C22461 * C32598 + (C11471 + C11470 + C11469) * C15938) * C21006) *
               C590) *
              C32635 * C473 +
          (((C22460 * C15938 + (C1573 + C1572 + C1571) * C32598) * C21006 +
            ((C11791 + C11792 + C11793) * C15938 +
             (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
              C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
              C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
                 C32598) *
                C32777) *
               C590 -
           (((C1571 + C1572 + C1573) * C32598 + C22461 * C15938) * C32777 +
            ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
                C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32970 +
             C174 * C32963 + C175 * C32950 + C176 * C32901) *
                C21006 +
            (C21205 + C21206 + C21207 + C21208) * C32777) *
               C589 -
           ((C21209 + C21210 + C21211 + C21212) * C32777 +
            (C21208 + C21207 + C21206 + C21205) * C21006) *
               C590) *
              C32635 * C473 +
          (((C21473 + C21474 + C21475 + C21476) * C21006 +
            (C1866 * C32970 + C1867 * C32963 + C1868 * C32950 +
             (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                 C32901) *
                C32777) *
               C590 -
           ((C21476 + C21475 + C21474 + C21473) * C32777 +
            (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
                C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C15938 +
             C174 * C32598) *
                C32972 +
            (C22954 + C22955) * C32969 + C22962 * C32960 + C22963 * C32916) *
               C589 -
           ((C22960 + C22961) * C32916 + (C22959 + C22958) * C32960 +
            (C22957 + C22956) * C32969 + (C22955 + C22954) * C32972) *
               C590) *
              C32635 * C473 +
          (((C23224 + C23225) * C32972 + (C23226 + C23227) * C32969 +
            (C23228 + C23229) * C32960 +
            (C12381 * C15938 +
             (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
                 C32598) *
                C32916) *
               C590 -
           ((C23229 + C23228) * C32916 + (C23227 + C23226) * C32960 +
            (C23225 + C23224) * C32969 +
            (C175 * C32598 + C174 * C15938) * C32972) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[89] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C2147 * C32970 + C623 * C32963 + C622 * C32950 + C621 * C32901) *
               C32777) *
              C32649 * C240 -
          ((C3947 * C32901 + C2335 * C32950 + C2336 * C32963 + C2667 * C32970) *
               C32777 +
           (C505 * C32901 + C506 * C32950 + C507 * C32963 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32970) *
               C21006) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32970 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32963 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C32950 +
            (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                C32901) *
               C21006 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32970 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32963 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32950 +
            (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                C32901) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C2147 * C32970 + C623 * C32963 + C622 * C32950 + C621 * C32901) *
               C32777) *
              C32649 * C32635 * C110 -
          ((C620 * C32901 + C621 * C32950 + C622 * C32963 + C623 * C32970) *
               C32777 +
           (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C175 * C32970 + C176 * C32963 + C177 * C32950 + C178 * C32901) *
               C21006 +
           (C622 * C32970 + C621 * C32963 + C620 * C32950 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                C32901) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C1571 + C1572 + C1573) * C32598 +
            (C1574 + C1575 + C1576) * C15938) *
               C32777 +
           ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C912 * C15938 + (C910 + C909 + C908) * C32598) * C21006 +
           ((C1573 + C1572 + C1571) * C15938 +
            (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
             C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
             C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721) *
                C32598 +
            (C11978 + C11977 + C11976) * C15938) *
               C32777 +
           ((C1382 + C1383 + C1384) * C32598 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C15938) *
               C21006) *
              C32649 * C241 +
          (((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
             C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
             C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
                C15938 +
            (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
             C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
             C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
                C32598) *
               C21006 +
           ((C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
             C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
             C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
                C15938 +
            (C841 * C1167 - C842 * C1157 - C841 * C1168 + C32964 * C1184 +
             C843 * C1727 - C844 * C1723 - C843 * C1728 + C32952 * C1732 +
             C845 * C6657 - C846 * C6656 - C845 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C15938 +
            C174 * C32598) *
               C32972 +
           (C2147 * C15938 + C623 * C32598) * C32969 +
           (C2148 * C15938 + C1866 * C32598) * C32960 +
           (C2151 * C15938 + C2150 * C32598) * C32916) *
              C32649 * C32635 * C110 -
          ((C2149 * C32598 + C2150 * C15938) * C32916 +
           (C1867 * C32598 + C1866 * C15938) * C32960 +
           (C622 * C32598 + C623 * C15938) * C32969 +
           (C175 * C32598 + C174 * C15938) * C32972) *
              C32649 * C32635 * C111 +
          ((C175 * C15938 + C176 * C32598) * C32972 +
           (C622 * C15938 + C621 * C32598) * C32969 +
           (C1867 * C15938 + C1868 * C32598) * C32960 +
           (C2149 * C15938 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32598) *
               C32916) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C15938 +
            C174 * C32598) *
               C32972 +
           (C2147 * C15938 + C623 * C32598) * C32969 +
           (C2148 * C15938 + C1866 * C32598) * C32960 +
           (C2151 * C15938 + C2150 * C32598) * C32916) *
              C32649 * C240 -
          ((C14013 * C32598 + C12483 * C15938) * C32916 +
           (C2334 * C32598 + C2668 * C15938) * C32960 +
           (C2336 * C32598 + C2667 * C15938) * C32969 +
           (C507 * C32598 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C15938) *
               C32972) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C15938 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                C32598) *
               C32972 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C15938 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32598) *
               C32969 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C15938 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32598) *
               C32960 +
           ((C113 * C7079 - C114 * C7076 - C113 * C7080 + C32672 * C7085) *
                C15938 +
            (C113 * C7451 - C114 * C7450 - C113 * C7452 + C32672 * C7453) *
                C32598) *
               C32916) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[90] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32593 +
             C174 * C32601 + C175 * C17929) *
                C32773 +
            (C24719 + C24720 + C24721) * C32780 + C24729 * C24497) *
               C32649 * C471 -
           ((C2333 * C17929 + C2334 * C32601 + C2668 * C32593) * C24497 +
            (C2335 * C17929 + C2336 * C32601 + C2667 * C32593) * C32780 +
            (C506 * C17929 + C507 * C32601 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32593) *
                C32773) *
               C32649 * C472) *
              C473 +
          (((C507 * C32593 + C506 * C32601 + C505 * C17929) * C32773 +
            (C2336 * C32593 + C2335 * C32601 + C3947 * C17929) * C32780 +
            (C2334 * C32593 + C2333 * C32601 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C17929) *
                C24497) *
               C32649 * C472 -
           ((C1868 * C17929 + C1867 * C32601 + C1866 * C32593) * C24497 +
            (C621 * C17929 + C622 * C32601 + C623 * C32593) * C32780 +
            (C176 * C17929 + C175 * C32601 + C174 * C32593) * C32773) *
               C32649 * C471) *
              C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[91] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32593 +
             C174 * C32601 + C175 * C17929) *
                C32773 +
            (C24719 + C24720 + C24721) * C32780 + C24729 * C24497) *
               C589 -
           ((C24725 + C24726 + C24727) * C24497 +
            (C24724 + C24723 + C24722) * C32780 +
            (C24721 + C24720 + C24719) * C32773) *
               C590) *
              C471 +
          (((C25174 + C25175 + C25176) * C32773 +
            (C25177 + C25178 + C25179) * C32780 +
            (C12483 * C32593 + C14013 * C32601 +
             (C113 * C2645 - C114 * C2640 - C113 * C2646 + C32672 * C2649) *
                 C17929) *
                C24497) *
               C590 -
           ((C25179 + C25178 + C25177) * C24497 +
            (C25176 + C25175 + C25174) * C32780 +
            (C506 * C17929 + C507 * C32601 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32593) *
                C32773) *
               C589) *
              C472) *
         C32623) /
        (p * q * std::sqrt(p + q));
    d2ee[92] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32593 +
            C174 * C32601 + C175 * C17929) *
               C32773 +
           (C2147 * C32593 + C623 * C32601 + C622 * C17929) * C32780 +
           (C2148 * C32593 + C1866 * C32601 + C1867 * C17929) * C24497) *
              C32649 * C240 -
          ((C2333 * C17929 + C2334 * C32601 + C2668 * C32593) * C24497 +
           (C2335 * C17929 + C2336 * C32601 + C2667 * C32593) * C32780 +
           (C506 * C17929 + C507 * C32601 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32593) *
               C32773) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32593 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32601 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C17929) *
               C32773 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32593 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32601 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C17929) *
               C32780 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32593 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32601 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C17929) *
               C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32593 +
            C174 * C32601 + C175 * C17929) *
               C32773 +
           (C2147 * C32593 + C623 * C32601 + C622 * C17929) * C32780 +
           (C2148 * C32593 + C1866 * C32601 + C1867 * C17929) * C24497) *
              C32649 * C32635 * C110 -
          ((C1868 * C17929 + C1867 * C32601 + C1866 * C32593) * C24497 +
           (C621 * C17929 + C622 * C32601 + C623 * C32593) * C32780 +
           (C176 * C17929 + C175 * C32601 + C174 * C32593) * C32773) *
              C32649 * C32635 * C111 +
          ((C175 * C32593 + C176 * C32601 + C177 * C17929) * C32773 +
           (C622 * C32593 + C621 * C32601 + C620 * C17929) * C32780 +
           (C1867 * C32593 + C1868 * C32601 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C17929) *
               C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32593 +
            C174 * C32601 + C175 * C17929) *
               C32773 +
           (C24719 + C24720 + C24721) * C32780 + C24729 * C24497) *
              C346 -
          ((C24725 + C24726 + C24727) * C24497 +
           (C24724 + C24723 + C24722) * C32780 +
           (C24721 + C24720 + C24719) * C32773) *
              C347 +
          (C24729 * C32773 + (C24727 + C24726 + C24725) * C32780 +
           (C12196 * C32593 + C12381 * C32601 +
            (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
                C17929) *
               C24497) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[93] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32593 +
             C174 * C32601 + C175 * C17929) *
                C32773 +
            (C24719 + C24720 + C24721) * C32780 + C24729 * C24497) *
               C589 -
           ((C24725 + C24726 + C24727) * C24497 +
            (C24724 + C24723 + C24722) * C32780 +
            (C24721 + C24720 + C24719) * C32773) *
               C590) *
              C32635 * C473 +
          (((C25022 + C25023 + C25024) * C32773 +
            (C25025 + C25026 + C25027) * C32780 +
            (C2150 * C32593 + C2149 * C32601 +
             (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                 C17929) *
                C24497) *
               C590 -
           ((C25027 + C25026 + C25025) * C24497 +
            (C25024 + C25023 + C25022) * C32780 +
            (C176 * C17929 + C175 * C32601 + C174 * C32593) * C32773) *
               C589) *
              C32635 * C474)) /
        (p * q * std::sqrt(p + q));
    d2ee[94] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32593 +
            C174 * C32601 + C175 * C17929) *
               C32773 +
           (C2147 * C32593 + C623 * C32601 + C622 * C17929) * C32780 +
           (C2148 * C32593 + C1866 * C32601 + C1867 * C17929) * C24497) *
              C32649 * C32635 * C110 -
          ((C1868 * C17929 + C1867 * C32601 + C1866 * C32593) * C24497 +
           (C621 * C17929 + C622 * C32601 + C623 * C32593) * C32780 +
           (C176 * C17929 + C175 * C32601 + C174 * C32593) * C32773) *
              C32649 * C32635 * C111 +
          ((C175 * C32593 + C176 * C32601 + C177 * C17929) * C32773 +
           (C622 * C32593 + C621 * C32601 + C620 * C17929) * C32780 +
           (C1867 * C32593 + C1868 * C32601 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C17929) *
               C24497) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32593 +
            C174 * C32601 + C175 * C17929) *
               C32773 +
           (C2147 * C32593 + C623 * C32601 + C622 * C17929) * C32780 +
           (C2148 * C32593 + C1866 * C32601 + C1867 * C17929) * C24497) *
              C32649 * C240 -
          ((C2333 * C17929 + C2334 * C32601 + C2668 * C32593) * C24497 +
           (C2335 * C17929 + C2336 * C32601 + C2667 * C32593) * C32780 +
           (C506 * C17929 + C507 * C32601 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32593) *
               C32773) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32593 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32601 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C17929) *
               C32773 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32593 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32601 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C17929) *
               C32780 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C32593 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C32601 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C17929) *
               C24497) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[95] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32970 +
             C174 * C32963 + C175 * C32950 + C176 * C32901) *
                C21006 +
            (C21205 + C21206 + C21207 + C21208) * C32777) *
               C32649 * C471 -
           ((C3947 * C32901 + C2335 * C32950 + C2336 * C32963 +
             C2667 * C32970) *
                C32777 +
            (C505 * C32901 + C506 * C32950 + C507 * C32963 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32970) *
                C21006) *
               C32649 * C472) *
              C473 +
          (((C507 * C32970 + C506 * C32963 + C505 * C32950 + C504 * C32901) *
                C21006 +
            (C2336 * C32970 + C2335 * C32963 + C3947 * C32950 +
             (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) *
                 C32901) *
                C32777) *
               C32649 * C472 -
           ((C620 * C32901 + C621 * C32950 + C622 * C32963 + C623 * C32970) *
                C32777 +
            (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
                C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
              C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
              C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                 C15938 +
             (C902 + C903 + C904) * C32598) *
                C21006 +
            ((C11469 + C11470 + C11471) * C15938 +
             (C1576 + C1575 + C1574) * C32598) *
                C32777) *
               C32649 * C471 -
           (((C22261 + C22262 + C22263) * C32598 +
             (C11978 + C11977 + C11976) * C15938) *
                C32777 +
            ((C1382 + C1383 + C1384) * C32598 +
             (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
              C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
              C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                 C15938) *
                C21006) *
               C32649 * C472) *
              C473 +
          ((((C1384 + C1383 + C1382) * C15938 +
             (C1381 + C1380 + C1379) * C32598) *
                C21006 +
            ((C22263 + C22262 + C22261) * C15938 +
             (C841 * C714 - C842 * C707 - C841 * C715 + C32964 * C722 +
              C843 * C1165 - C844 * C1156 - C843 * C1166 + C32952 * C1183 +
              C845 * C1729 - C846 * C1724 - C845 * C1730 + C32932 * C1733) *
                 C32598) *
                C32777) *
               C32649 * C472 -
           (((C1571 + C1572 + C1573) * C32598 +
             (C1574 + C1575 + C1576) * C15938) *
                C32777 +
            ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
                C21006) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[96] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32970 +
             C174 * C32963 + C175 * C32950 + C176 * C32901) *
                C21006 +
            (C21205 + C21206 + C21207 + C21208) * C32777) *
               C589 -
           ((C21209 + C21210 + C21211 + C21212) * C32777 +
            (C21208 + C21207 + C21206 + C21205) * C21006) *
               C590) *
              C471 +
          (((C21607 + C21608 + C21609 + C21610) * C21006 +
            (C2668 * C32970 + C2334 * C32963 + C2333 * C32950 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32901) *
                C32777) *
               C590 -
           ((C21610 + C21609 + C21608 + C21607) * C32777 +
            (C505 * C32901 + C506 * C32950 + C507 * C32963 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C32970) *
                C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
              C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
              C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                 C15938 +
             (C902 + C903 + C904) * C32598) *
                C21006 +
            ((C11469 + C11470 + C11471) * C15938 + C22460 * C32598) * C32777) *
               C589 -
           (((C11793 + C11792 + C11791) * C32598 +
             (C11474 + C11473 + C11472) * C15938) *
                C32777 +
            (C22461 * C32598 + (C11471 + C11470 + C11469) * C15938) * C21006) *
               C590) *
              C471 +
          ((((C11976 + C11977 + C11978) * C15938 +
             (C22263 + C22262 + C22261) * C32598) *
                C21006 +
            ((C11979 + C11980 + C11981) * C15938 +
             (C841 * C1175 - C842 * C1161 - C841 * C1176 + C32964 * C1188 +
              C843 * C1177 - C844 * C1162 - C843 * C1178 + C32952 * C1189 +
              C845 * C7301 - C846 * C7300 - C845 * C7302 + C32932 * C7303) *
                 C32598) *
                C32777) *
               C590 -
           (((C22261 + C22262 + C22263) * C32598 +
             (C11978 + C11977 + C11976) * C15938) *
                C32777 +
            ((C1382 + C1383 + C1384) * C32598 +
             (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
              C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
              C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                 C15938) *
                C21006) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[97] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C2147 * C32970 + C623 * C32963 + C622 * C32950 + C621 * C32901) *
               C32777) *
              C32649 * C240 -
          ((C3947 * C32901 + C2335 * C32950 + C2336 * C32963 + C2667 * C32970) *
               C32777 +
           (C505 * C32901 + C506 * C32950 + C507 * C32963 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32970) *
               C21006) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32970 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32963 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C32950 +
            (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                C32901) *
               C21006 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32970 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32963 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32950 +
            (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                C32901) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C2147 * C32970 + C623 * C32963 + C622 * C32950 + C621 * C32901) *
               C32777) *
              C32649 * C32635 * C110 -
          ((C620 * C32901 + C621 * C32950 + C622 * C32963 + C623 * C32970) *
               C32777 +
           (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C175 * C32970 + C176 * C32963 + C177 * C32950 + C178 * C32901) *
               C21006 +
           (C622 * C32970 + C621 * C32963 + C620 * C32950 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                C32901) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C21205 + C21206 + C21207 + C21208) * C32777) *
              C346 -
          ((C21209 + C21210 + C21211 + C21212) * C32777 +
           (C21208 + C21207 + C21206 + C21205) * C21006) *
              C347 +
          ((C21212 + C21211 + C21210 + C21209) * C21006 +
           (C2151 * C32970 + C2150 * C32963 + C2149 * C32950 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32901) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C1571 + C1572 + C1573) * C32598 +
            (C1574 + C1575 + C1576) * C15938) *
               C32777 +
           ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C912 * C15938 + (C910 + C909 + C908) * C32598) * C21006 +
           ((C1573 + C1572 + C1571) * C15938 +
            (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
             C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
             C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721) *
                C32598 +
            (C11978 + C11977 + C11976) * C15938) *
               C32777 +
           ((C1382 + C1383 + C1384) * C32598 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C15938) *
               C21006) *
              C32649 * C241 +
          (((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
             C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
             C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
                C15938 +
            (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
             C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
             C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
                C32598) *
               C21006 +
           ((C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
             C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
             C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
                C15938 +
            (C841 * C1167 - C842 * C1157 - C841 * C1168 + C32964 * C1184 +
             C843 * C1727 - C844 * C1723 - C843 * C1728 + C32952 * C1732 +
             C845 * C6657 - C846 * C6656 - C845 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C346 -
          (((C11793 + C11792 + C11791) * C32598 +
            (C11474 + C11473 + C11472) * C15938) *
               C32777 +
           ((C1574 + C1575 + C1576) * C32598 +
            (C11471 + C11470 + C11469) * C15938) *
               C21006) *
              C347 +
          ((C11479 * C15938 + (C11791 + C11792 + C11793) * C32598) * C21006 +
           ((C11477 + C11476 + C11475) * C15938 +
            (C841 * C2096 - C842 * C2089 - C841 * C2097 + C32964 * C2107 +
             C843 * C2643 - C844 * C2639 - C843 * C2644 + C32952 * C2648 +
             C845 * C7451 - C846 * C7450 - C845 * C7452 + C32932 * C7453) *
                C32598) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[98] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                 C32970 +
             C174 * C32963 + C175 * C32950 + C176 * C32901) *
                C21006 +
            (C21205 + C21206 + C21207 + C21208) * C32777) *
               C589 -
           ((C21209 + C21210 + C21211 + C21212) * C32777 +
            (C21208 + C21207 + C21206 + C21205) * C21006) *
               C590) *
              C32635 * C473 +
          (((C21473 + C21474 + C21475 + C21476) * C21006 +
            (C1866 * C32970 + C1867 * C32963 + C1868 * C32950 +
             (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                 C32901) *
                C32777) *
               C590 -
           ((C21476 + C21475 + C21474 + C21473) * C32777 +
            (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
                C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
              C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
              C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                 C15938 +
             (C902 + C903 + C904) * C32598) *
                C21006 +
            ((C11469 + C11470 + C11471) * C15938 + C22460 * C32598) * C32777) *
               C589 -
           (((C11793 + C11792 + C11791) * C32598 +
             (C11474 + C11473 + C11472) * C15938) *
                C32777 +
            (C22461 * C32598 + (C11471 + C11470 + C11469) * C15938) * C21006) *
               C590) *
              C32635 * C473 +
          (((C22460 * C15938 + (C1573 + C1572 + C1571) * C32598) * C21006 +
            ((C11791 + C11792 + C11793) * C15938 +
             (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
              C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
              C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
                 C32598) *
                C32777) *
               C590 -
           (((C1571 + C1572 + C1573) * C32598 + C22461 * C15938) * C32777 +
            ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
                C21006) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[99] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C2147 * C32970 + C623 * C32963 + C622 * C32950 + C621 * C32901) *
               C32777) *
              C32649 * C32635 * C110 -
          ((C620 * C32901 + C621 * C32950 + C622 * C32963 + C623 * C32970) *
               C32777 +
           (C177 * C32901 + C176 * C32950 + C175 * C32963 + C174 * C32970) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C175 * C32970 + C176 * C32963 + C177 * C32950 + C178 * C32901) *
               C21006 +
           (C622 * C32970 + C621 * C32963 + C620 * C32950 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                C32901) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C32970 +
            C174 * C32963 + C175 * C32950 + C176 * C32901) *
               C21006 +
           (C2147 * C32970 + C623 * C32963 + C622 * C32950 + C621 * C32901) *
               C32777) *
              C32649 * C240 -
          ((C3947 * C32901 + C2335 * C32950 + C2336 * C32963 + C2667 * C32970) *
               C32777 +
           (C505 * C32901 + C506 * C32950 + C507 * C32963 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                C32970) *
               C21006) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C32970 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C32963 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C32950 +
            (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                C32901) *
               C21006 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C32970 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C32963 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32950 +
            (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                C32901) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C1571 + C1572 + C1573) * C32598 +
            (C1574 + C1575 + C1576) * C15938) *
               C32777 +
           ((C907 + C906 + C905) * C32598 + (C904 + C903 + C902) * C15938) *
               C21006) *
              C32649 * C32635 * C111 +
          ((C912 * C15938 + (C910 + C909 + C908) * C32598) * C21006 +
           ((C1573 + C1572 + C1571) * C15938 +
            (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
             C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
             C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C15938 +
            (C902 + C903 + C904) * C32598) *
               C21006 +
           ((C11469 + C11470 + C11471) * C15938 +
            (C1576 + C1575 + C1574) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721) *
                C32598 +
            (C11978 + C11977 + C11976) * C15938) *
               C32777 +
           ((C1382 + C1383 + C1384) * C32598 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C15938) *
               C21006) *
              C32649 * C241 +
          (((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
             C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
             C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
                C15938 +
            (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
             C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
             C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
                C32598) *
               C21006 +
           ((C841 * C1169 - C842 * C1158 - C841 * C1170 + C32964 * C1185 +
             C843 * C1725 - C844 * C1722 - C843 * C1726 + C32952 * C1731 +
             C845 * C6479 - C846 * C6476 - C845 * C6480 + C32932 * C6485) *
                C15938 +
            (C841 * C1167 - C842 * C1157 - C841 * C1168 + C32964 * C1184 +
             C843 * C1727 - C844 * C1723 - C843 * C1728 + C32952 * C1732 +
             C845 * C6657 - C846 * C6656 - C845 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C2770 +
            (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
               C32690 * C32649 * C471 -
           ((C3199 + C3200) * C32901 + (C3201 + C3202) * C2772 +
            (C3203 + C3204) * C2771 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C2770) *
               C32690 * C32649 * C472) *
              C473 +
          (((C3204 + C3203) * C2770 + (C3202 + C3201) * C2771 +
            (C3200 + C3199) * C2772 +
            (C2774 * C254 - C2775 * C244 - C2774 * C255 + C32900 * C274 +
             C2776 * C272 - C2777 * C253 - C2776 * C273 + C32735 * C283) *
                C32901) *
               C32690 * C32649 * C472 -
           ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
            (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32882 +
            (C7828 + C7829 + C7830 + C7831) * C32598) *
               C32690 * C32649 * C471 -
           ((C8186 + C8187 + C8188 + C8189) * C32598 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32882) *
               C32690 * C32649 * C472) *
              C473 +
          (((C8189 + C8188 + C8187 + C8186) * C32882 +
            (C7771 * C258 - C7772 * C246 - C7771 * C259 + C7765 * C276 +
             C7773 * C268 - C7774 * C251 - C7773 * C269 + C7766 * C281 +
             C7775 * C1028 - C7776 * C1022 - C7775 * C1029 + C7767 * C1040 +
             C7777 * C1038 - C7778 * C1027 - C7777 * C1039 + C32909 * C1045) *
                C32598) *
               C32690 * C32649 * C472 -
           ((C7832 + C7833 + C7834 + C7835) * C32598 +
            (C7831 + C7830 + C7829 + C7828) * C32882) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C2770 +
            (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
               C32690 * C589 -
           ((C3371 + C3372) * C32901 + (C3373 + C3374) * C2772 +
            (C3375 + C3376) * C2771 +
            (C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720 +
             C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383) *
                C2770) *
               C32690 * C590) *
              C471 +
          (((C2774 * C710 - C2775 * C705 - C2774 * C711 + C32900 * C720 +
             C2776 * C1169 - C2777 * C1158 - C2776 * C1170 + C32735 * C1185) *
                C2770 +
            (C2774 * C712 - C2775 * C706 - C2774 * C713 + C32900 * C721 +
             C2776 * C1167 - C2777 * C1157 - C2776 * C1168 + C32735 * C1184) *
                C2771 +
            (C2774 * C714 - C2775 * C707 - C2774 * C715 + C32900 * C722 +
             C2776 * C1165 - C2777 * C1156 - C2776 * C1166 + C32735 * C1183) *
                C2772 +
            (C2774 * C716 - C2775 * C708 - C2774 * C717 + C32900 * C723 +
             C2776 * C1531 - C2777 * C1530 - C2776 * C1532 + C32735 * C1533) *
                C32901) *
               C32690 * C590 -
           ((C3199 + C3200) * C32901 + (C3201 + C3202) * C2772 +
            (C3203 + C3204) * C2771 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C2770) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32882 +
            (C7828 + C7829 + C7830 + C7831) * C32598) *
               C32690 * C589 -
           ((C8344 + C8345 + C8346 + C8347) * C32598 +
            (C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731 +
             C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
             C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
             C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383) *
                C32882) *
               C32690 * C590) *
              C471 +
          (((C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720 +
             C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
             C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
             C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485) *
                C32882 +
            (C7771 * C712 - C7772 * C706 - C7771 * C713 + C7765 * C721 +
             C7773 * C1167 - C7774 * C1157 - C7773 * C1168 + C7766 * C1184 +
             C7775 * C1727 - C7776 * C1723 - C7775 * C1728 + C7767 * C1732 +
             C7777 * C6657 - C7778 * C6656 - C7777 * C6658 + C32909 * C6659) *
                C32598) *
               C32690 * C590 -
           ((C8186 + C8187 + C8188 + C8189) * C32598 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32882) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C32649 * C240 -
          ((C2776 * C270 - C2777 * C252 - C2776 * C271 + C32735 * C282 +
            C2774 * C256 - C2775 * C245 - C2774 * C257 + C32900 * C275) *
               C32901 +
           (C2776 * C268 - C2777 * C251 - C2776 * C269 + C32735 * C281 +
            C2774 * C258 - C2775 * C246 - C2774 * C259 + C32900 * C276) *
               C2772 +
           (C2776 * C266 - C2777 * C250 - C2776 * C267 + C32735 * C280 +
            C2774 * C260 - C2775 * C247 - C2774 * C261 + C32900 * C277) *
               C2771 +
           (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
            C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
               C2770) *
              C32690 * C32649 * C241 +
          ((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
            C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
               C2770 +
           (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
            C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
               C2771 +
           (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
            C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
               C2772 +
           (C2774 * C270 - C2775 * C252 - C2774 * C271 + C32900 * C282 +
            C2776 * C1339 - C2777 * C1338 - C2776 * C1340 + C32735 * C1341) *
               C32901) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C32649 * C32635 * C110 -
          ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
           (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
              C32690 * C32649 * C32635 * C111 +
          (C2835 * C2770 + C2836 * C2771 + (C2834 + C2833) * C2772 +
           (C2774 * C132 - C2775 * C120 - C2774 * C133 + C32900 * C141 +
            C2776 * C476 - C2777 * C475 - C2776 * C477 + C32735 * C478) *
               C32901) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C346 -
          ((C2776 * C716 - C2777 * C708 - C2776 * C717 + C32735 * C723 +
            C2774 * C361 - C2775 * C350 - C2774 * C362 + C32900 * C380) *
               C32901 +
           (C2776 * C714 - C2777 * C707 - C2776 * C715 + C32735 * C722 +
            C2774 * C363 - C2775 * C351 - C2774 * C364 + C32900 * C381) *
               C2772 +
           (C2776 * C712 - C2777 * C706 - C2776 * C713 + C32735 * C721 +
            C2774 * C365 - C2775 * C352 - C2774 * C366 + C32900 * C382) *
               C2771 +
           (C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720 +
            C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383) *
               C2770) *
              C32690 * C347 +
          ((C2774 * C369 - C2775 * C354 - C2774 * C370 + C32900 * C384 +
            C2776 * C1171 - C2777 * C1159 - C2776 * C1172 + C32735 * C1186) *
               C2770 +
           (C2774 * C371 - C2775 * C355 - C2774 * C372 + C32900 * C385 +
            C2776 * C1175 - C2777 * C1161 - C2776 * C1176 + C32735 * C1188) *
               C2771 +
           (C2774 * C373 - C2775 * C356 - C2774 * C374 + C32900 * C386 +
            C2776 * C1179 - C2777 * C1163 - C2776 * C1180 + C32735 * C1190) *
               C2772 +
           (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
            C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
               C32901) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C7832 + C7833 + C7834 + C7835) * C32598 +
           (C7831 + C7830 + C7829 + C7828) * C32882) *
              C32690 * C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32882 +
           (C7771 * C128 - C7772 * C118 - C7771 * C129 + C7765 * C139 +
            C7773 * C256 - C7774 * C245 - C7773 * C257 + C7766 * C275 +
            C7775 * C270 - C7776 * C252 - C7775 * C271 + C7767 * C282 +
            C7777 * C1339 - C7778 * C1338 - C7777 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C240 -
          ((C7777 * C1036 - C7778 * C1026 - C7777 * C1037 + C32909 * C1044 +
            C7775 * C1030 - C7776 * C1023 - C7775 * C1031 + C7767 * C1041 +
            C7773 * C266 - C7774 * C250 - C7773 * C267 + C7766 * C280 +
            C7771 * C260 - C7772 * C247 - C7771 * C261 + C7765 * C277) *
               C32598 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32882) *
              C32690 * C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32882 +
           (C7771 * C266 - C7772 * C250 - C7771 * C267 + C7765 * C280 +
            C7773 * C1030 - C7774 * C1023 - C7773 * C1031 + C7766 * C1041 +
            C7775 * C1036 - C7776 * C1026 - C7775 * C1037 + C7767 * C1044 +
            C7777 * C6571 - C7778 * C6570 - C7777 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C346 -
          ((C7777 * C1727 - C7778 * C1723 - C7777 * C1728 + C32909 * C1732 +
            C7775 * C1167 - C7776 * C1157 - C7775 * C1168 + C7767 * C1184 +
            C7773 * C712 - C7774 * C706 - C7773 * C713 + C7766 * C721 +
            C7771 * C365 - C7772 * C352 - C7771 * C366 + C7765 * C382) *
               C32598 +
           (C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383) *
               C32882) *
              C32690 * C347 +
          ((C7771 * C369 - C7772 * C354 - C7771 * C370 + C7765 * C384 +
            C7773 * C1171 - C7774 * C1159 - C7773 * C1172 + C7766 * C1186 +
            C7775 * C1173 - C7776 * C1160 - C7775 * C1174 + C7767 * C1187 +
            C7777 * C6481 - C7778 * C6477 - C7777 * C6482 + C32909 * C6486) *
               C32882 +
           (C7771 * C371 - C7772 * C355 - C7771 * C372 + C7765 * C385 +
            C7773 * C1175 - C7774 * C1161 - C7773 * C1176 + C7766 * C1188 +
            C7775 * C1177 - C7776 * C1162 - C7775 * C1178 + C7767 * C1189 +
            C7777 * C7301 - C7778 * C7300 - C7777 * C7302 + C32909 * C7303) *
               C32598) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C2770 +
            (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
               C32690 * C589 -
           ((C3371 + C3372) * C32901 + (C3373 + C3374) * C2772 +
            (C3375 + C3376) * C2771 +
            (C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720 +
             C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383) *
                C2770) *
               C32690 * C590) *
              C32635 * C473 +
          (((C3376 + C3375) * C2770 + (C3374 + C3373) * C2771 +
            (C3372 + C3371) * C2772 +
            (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
             C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                C32901) *
               C32690 * C590 -
           ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
            (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32882 +
            (C7828 + C7829 + C7830 + C7831) * C32598) *
               C32690 * C589 -
           ((C8344 + C8345 + C8346 + C8347) * C32598 +
            (C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731 +
             C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
             C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
             C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383) *
                C32882) *
               C32690 * C590) *
              C32635 * C473 +
          (((C8347 + C8346 + C8345 + C8344) * C32882 +
            (C7771 * C363 - C7772 * C351 - C7771 * C364 + C7765 * C381 +
             C7773 * C714 - C7774 * C707 - C7773 * C715 + C7766 * C722 +
             C7775 * C1165 - C7776 * C1156 - C7775 * C1166 + C7767 * C1183 +
             C7777 * C1729 - C7778 * C1724 - C7777 * C1730 + C32909 * C1733) *
                C32598) *
               C32690 * C590 -
           ((C7832 + C7833 + C7834 + C7835) * C32598 +
            (C7831 + C7830 + C7829 + C7828) * C32882) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C32649 * C32635 * C110 -
          ((C2833 + C2834) * C32901 + (C2832 + C2831) * C2772 +
           (C2830 + C2829) * C2771 + (C2828 + C2827) * C2770) *
              C32690 * C32649 * C32635 * C111 +
          (C2835 * C2770 + C2836 * C2771 + (C2834 + C2833) * C2772 +
           (C2774 * C132 - C2775 * C120 - C2774 * C133 + C32900 * C141 +
            C2776 * C476 - C2777 * C475 - C2776 * C477 + C32735 * C478) *
               C32901) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
            C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
               C2770 +
           (C2827 + C2828) * C2771 + C2835 * C2772 + C2836 * C32901) *
              C32690 * C32649 * C240 -
          ((C2776 * C270 - C2777 * C252 - C2776 * C271 + C32735 * C282 +
            C2774 * C256 - C2775 * C245 - C2774 * C257 + C32900 * C275) *
               C32901 +
           (C2776 * C268 - C2777 * C251 - C2776 * C269 + C32735 * C281 +
            C2774 * C258 - C2775 * C246 - C2774 * C259 + C32900 * C276) *
               C2772 +
           (C2776 * C266 - C2777 * C250 - C2776 * C267 + C32735 * C280 +
            C2774 * C260 - C2775 * C247 - C2774 * C261 + C32900 * C277) *
               C2771 +
           (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
            C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
               C2770) *
              C32690 * C32649 * C241 +
          ((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
            C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
               C2770 +
           (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
            C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
               C2771 +
           (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
            C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
               C2772 +
           (C2774 * C270 - C2775 * C252 - C2774 * C271 + C32900 * C282 +
            C2776 * C1339 - C2777 * C1338 - C2776 * C1340 + C32735 * C1341) *
               C32901) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C32635 * C110 -
          ((C7832 + C7833 + C7834 + C7835) * C32598 +
           (C7831 + C7830 + C7829 + C7828) * C32882) *
              C32690 * C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32882 +
           (C7771 * C128 - C7772 * C118 - C7771 * C129 + C7765 * C139 +
            C7773 * C256 - C7774 * C245 - C7773 * C257 + C7766 * C275 +
            C7775 * C270 - C7776 * C252 - C7775 * C271 + C7767 * C282 +
            C7777 * C1339 - C7778 * C1338 - C7777 * C1340 + C32909 * C1341) *
               C32598) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32882 +
           (C7828 + C7829 + C7830 + C7831) * C32598) *
              C32690 * C32649 * C240 -
          ((C7777 * C1036 - C7778 * C1026 - C7777 * C1037 + C32909 * C1044 +
            C7775 * C1030 - C7776 * C1023 - C7775 * C1031 + C7767 * C1041 +
            C7773 * C266 - C7774 * C250 - C7773 * C267 + C7766 * C280 +
            C7771 * C260 - C7772 * C247 - C7771 * C261 + C7765 * C277) *
               C32598 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32882) *
              C32690 * C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32882 +
           (C7771 * C266 - C7772 * C250 - C7771 * C267 + C7765 * C280 +
            C7773 * C1030 - C7774 * C1023 - C7773 * C1031 + C7766 * C1041 +
            C7775 * C1036 - C7776 * C1026 - C7775 * C1037 + C7767 * C1044 +
            C7777 * C6571 - C7778 * C6570 - C7777 * C6572 + C32909 * C6573) *
               C32598) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C838 +
             (C2827 + C2828) * C839 + C2835 * C32923) *
                C32902 +
            ((C4703 + C4704) * C838 + (C3376 + C3375) * C839 + C4362 * C32923) *
                C32777) *
               C32649 * C471 -
           (((C4929 + C4930) * C32923 + (C4931 + C4932) * C839 +
             (C2776 * C1169 - C2777 * C1158 - C2776 * C1170 + C32735 * C1185 +
              C2774 * C710 - C2775 * C705 - C2774 * C711 + C32900 * C720) *
                 C838) *
                C32777 +
            ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C838) *
                C32902) *
               C32649 * C472) *
              C473 +
          ((((C3204 + C3203) * C838 + (C3202 + C3201) * C839 +
             (C3200 + C3199) * C32923) *
                C32902 +
            ((C4932 + C4931) * C838 + (C4930 + C4929) * C839 +
             (C2774 * C716 - C2775 * C708 - C2774 * C717 + C32900 * C723 +
              C2776 * C1531 - C2777 * C1530 - C2776 * C1532 + C32735 * C1533) *
                 C32923) *
                C32777) *
               C32649 * C472 -
           (((C3371 + C3372) * C32923 + (C3373 + C3374) * C839 +
             (C3375 + C3376) * C838) *
                C32777 +
            ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
             (C2828 + C2827) * C838) *
                C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32588 * C32902 +
            (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
               C32649 * C471 -
           ((C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485 +
             C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
             C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
             C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720) *
                C32588 * C32777 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32588 * C32902) *
               C32649 * C472) *
              C473 +
          (((C8189 + C8188 + C8187 + C8186) * C32588 * C32902 +
            (C7771 * C712 - C7772 * C706 - C7771 * C713 + C7765 * C721 +
             C7773 * C1167 - C7774 * C1157 - C7773 * C1168 + C7766 * C1184 +
             C7775 * C1727 - C7776 * C1723 - C7775 * C1728 + C7767 * C1732 +
             C7777 * C6657 - C7778 * C6656 - C7777 * C6658 + C32909 * C6659) *
                C32588 * C32777) *
               C32649 * C472 -
           ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
            (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C838 +
             (C2827 + C2828) * C839 + C2835 * C32923) *
                C32902 +
            ((C4703 + C4704) * C838 + C5127 * C839 + C4362 * C32923) * C32777) *
               C589 -
           (((C4705 + C4706) * C32923 + (C4707 + C4708) * C839 +
             (C4709 + C4710) * C838) *
                C32777 +
            (C5128 * C32923 + C5129 * C839 + (C4704 + C4703) * C838) * C32902) *
               C590) *
              C471 +
          ((((C5336 + C5337) * C838 + (C4932 + C4931) * C839 +
             (C4930 + C4929) * C32923) *
                C32902 +
            ((C2774 * C1171 - C2775 * C1159 - C2774 * C1172 + C32900 * C1186 +
              C2776 * C1173 - C2777 * C1160 - C2776 * C1174 + C32735 * C1187) *
                 C838 +
             (C2774 * C1175 - C2775 * C1161 - C2774 * C1176 + C32900 * C1188 +
              C2776 * C1177 - C2777 * C1162 - C2776 * C1178 + C32735 * C1189) *
                 C839 +
             (C2774 * C1179 - C2775 * C1163 - C2774 * C1180 + C32900 * C1190 +
              C2776 * C1181 - C2777 * C1164 - C2776 * C1182 + C32735 * C1191) *
                 C32923) *
                C32777) *
               C590 -
           (((C4929 + C4930) * C32923 + (C4931 + C4932) * C839 +
             (C5337 + C5336) * C838) *
                C32777 +
            ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
             (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
              C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                 C838) *
                C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32588 * C32902 +
            (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
               C589 -
           ((C9869 + C9870 + C9871 + C9872) * C32588 * C32777 +
            (C9868 + C9867 + C9866 + C9865) * C32588 * C32902) *
               C590) *
              C471 +
          (((C10287 + C10288 + C10289 + C10290) * C32588 * C32902 +
            (C7771 * C1171 - C7772 * C1159 - C7771 * C1172 + C7765 * C1186 +
             C7773 * C1173 - C7774 * C1160 - C7773 * C1174 + C7766 * C1187 +
             C7775 * C6481 - C7776 * C6477 - C7775 * C6482 + C7767 * C6486 +
             C7777 * C6483 - C7778 * C6478 - C7777 * C6484 + C32909 * C6487) *
                C32588 * C32777) *
               C590 -
           ((C10290 + C10289 + C10288 + C10287) * C32588 * C32777 +
            (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
             C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
             C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
             C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
                C32588 * C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
             C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                C838 +
            (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C32649 * C240 -
          (((C2776 * C1165 - C2777 * C1156 - C2776 * C1166 + C32735 * C1183 +
             C2774 * C714 - C2775 * C707 - C2774 * C715 + C32900 * C722) *
                C32923 +
            (C2776 * C1167 - C2777 * C1157 - C2776 * C1168 + C32735 * C1184 +
             C2774 * C712 - C2775 * C706 - C2774 * C713 + C32900 * C721) *
                C839 +
            (C2776 * C1169 - C2777 * C1158 - C2776 * C1170 + C32735 * C1185 +
             C2774 * C710 - C2775 * C705 - C2774 * C711 + C32900 * C720) *
                C838) *
               C32777 +
           ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C838) *
               C32902) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C838 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C839 +
            (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
             C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
                C32923) *
               C32902 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C838 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C839 +
            (C2774 * C1165 - C2775 * C1156 - C2774 * C1166 + C32900 * C1183 +
             C2776 * C1729 - C2777 * C1724 - C2776 * C1730 + C32735 * C1733) *
                C32923) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
             C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                C838 +
            (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C3371 + C3372) * C32923 + (C3373 + C3374) * C839 +
            (C3375 + C3376) * C838) *
               C32777 +
           ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
            (C2828 + C2827) * C838) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C2835 * C838 + C2836 * C839 + (C2834 + C2833) * C32923) * C32902 +
           (C4362 * C838 + (C3372 + C3371) * C839 +
            (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
             C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                C32923) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C4703 + C4704) * C838 + (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C346 -
          (((C4705 + C4706) * C32923 + (C4707 + C4708) * C839 +
            (C4709 + C4710) * C838) *
               C32777 +
           ((C3373 + C3374) * C32923 + (C3375 + C3376) * C839 +
            (C4704 + C4703) * C838) *
               C32902) *
              C347 +
          (((C4710 + C4709) * C838 + (C4708 + C4707) * C839 +
            (C4706 + C4705) * C32923) *
               C32902 +
           ((C2774 * C2098 - C2775 * C2090 - C2774 * C2099 + C32900 * C2108 +
             C2776 * C2641 - C2777 * C2638 - C2776 * C2642 + C32735 * C2647) *
                C838 +
            (C2774 * C2096 - C2775 * C2089 - C2774 * C2097 + C32900 * C2107 +
             C2776 * C2643 - C2777 * C2639 - C2776 * C2644 + C32735 * C2648) *
                C839 +
            (C2774 * C2094 - C2775 * C2088 - C2774 * C2095 + C32900 * C2106 +
             C2776 * C2645 - C2777 * C2640 - C2776 * C2646 + C32735 * C2649) *
                C32923) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
           (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
              C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32588 * C32902 +
           (C7771 * C363 - C7772 * C351 - C7771 * C364 + C7765 * C381 +
            C7773 * C714 - C7774 * C707 - C7773 * C715 + C7766 * C722 +
            C7775 * C1165 - C7776 * C1156 - C7775 * C1166 + C7767 * C1183 +
            C7777 * C1729 - C7778 * C1724 - C7777 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485 +
            C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
            C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
            C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720) *
               C32588 * C32777 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32588 * C32902) *
              C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32588 * C32902 +
           (C7771 * C1169 - C7772 * C1158 - C7771 * C1170 + C7765 * C1185 +
            C7773 * C1725 - C7774 * C1722 - C7773 * C1726 + C7766 * C1731 +
            C7775 * C6479 - C7776 * C6476 - C7775 * C6480 + C7767 * C6485 +
            C7777 * C6743 - C7778 * C6742 - C7777 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
              C346 -
          ((C9869 + C9870 + C9871 + C9872) * C32588 * C32777 +
           (C9868 + C9867 + C9866 + C9865) * C32588 * C32902) *
              C347 +
          ((C9872 + C9871 + C9870 + C9869) * C32588 * C32902 +
           (C7771 * C2098 - C7772 * C2090 - C7771 * C2099 + C7765 * C2108 +
            C7773 * C2641 - C7774 * C2638 - C7773 * C2642 + C7766 * C2647 +
            C7775 * C7079 - C7776 * C7076 - C7775 * C7080 + C7767 * C7085 +
            C7777 * C7622 - C7778 * C7621 - C7777 * C7623 + C32909 * C7624) *
               C32588 * C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
              C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                 C838 +
             (C2827 + C2828) * C839 + C2835 * C32923) *
                C32902 +
            ((C4703 + C4704) * C838 + C5127 * C839 + C4362 * C32923) * C32777) *
               C589 -
           (((C4705 + C4706) * C32923 + (C4707 + C4708) * C839 +
             (C4709 + C4710) * C838) *
                C32777 +
            (C5128 * C32923 + C5129 * C839 + (C4704 + C4703) * C838) * C32902) *
               C590) *
              C32635 * C473 +
          (((C5127 * C838 + C4362 * C839 + (C3372 + C3371) * C32923) * C32902 +
            ((C4708 + C4707) * C838 + (C4706 + C4705) * C839 +
             (C2774 * C375 - C2775 * C357 - C2774 * C376 + C32900 * C387 +
              C2776 * C2305 - C2777 * C2304 - C2776 * C2306 + C32735 * C2307) *
                 C32923) *
                C32777) *
               C590 -
           (((C3371 + C3372) * C32923 + C5128 * C839 + C5129 * C838) * C32777 +
            ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
             (C2828 + C2827) * C838) *
                C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
             C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
             C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
             C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
                C32588 * C32902 +
            (C9865 + C9866 + C9867 + C9868) * C32588 * C32777) *
               C589 -
           ((C9869 + C9870 + C9871 + C9872) * C32588 * C32777 +
            (C9868 + C9867 + C9866 + C9865) * C32588 * C32902) *
               C590) *
              C32635 * C473 +
          (((C8347 + C8346 + C8345 + C8344) * C32588 * C32902 +
            (C7771 * C371 - C7772 * C355 - C7771 * C372 + C7765 * C385 +
             C7773 * C1175 - C7774 * C1161 - C7773 * C1176 + C7766 * C1188 +
             C7775 * C1177 - C7776 * C1162 - C7775 * C1178 + C7767 * C1189 +
             C7777 * C7301 - C7778 * C7300 - C7777 * C7302 + C32909 * C7303) *
                C32588 * C32777) *
               C590 -
           ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
            (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
             C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                C838 +
            (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C3371 + C3372) * C32923 + (C3373 + C3374) * C839 +
            (C3375 + C3376) * C838) *
               C32777 +
           ((C2832 + C2831) * C32923 + (C2830 + C2829) * C839 +
            (C2828 + C2827) * C838) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C2835 * C838 + C2836 * C839 + (C2834 + C2833) * C32923) * C32902 +
           (C4362 * C838 + (C3372 + C3371) * C839 +
            (C2774 * C359 - C2775 * C349 - C2774 * C360 + C32900 * C379 +
             C2776 * C718 - C2777 * C709 - C2776 * C719 + C32735 * C724) *
                C32923) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C2774 * C122 - C2775 * C115 - C2774 * C123 + C32900 * C136 +
             C2776 * C262 - C2777 * C248 - C2776 * C263 + C32735 * C278) *
                C838 +
            (C2827 + C2828) * C839 + C2835 * C32923) *
               C32902 +
           ((C2774 * C367 - C2775 * C353 - C2774 * C368 + C32900 * C383 +
             C2776 * C710 - C2777 * C705 - C2776 * C711 + C32735 * C720) *
                C838 +
            (C3376 + C3375) * C839 + C4362 * C32923) *
               C32777) *
              C32649 * C240 -
          (((C2776 * C1165 - C2777 * C1156 - C2776 * C1166 + C32735 * C1183 +
             C2774 * C714 - C2775 * C707 - C2774 * C715 + C32900 * C722) *
                C32923 +
            (C2776 * C1167 - C2777 * C1157 - C2776 * C1168 + C32735 * C1184 +
             C2774 * C712 - C2775 * C706 - C2774 * C713 + C32900 * C721) *
                C839 +
            (C2776 * C1169 - C2777 * C1158 - C2776 * C1170 + C32735 * C1185 +
             C2774 * C710 - C2775 * C705 - C2774 * C711 + C32900 * C720) *
                C838) *
               C32777 +
           ((C3201 + C3202) * C32923 + (C3203 + C3204) * C839 +
            (C2776 * C264 - C2777 * C249 - C2776 * C265 + C32735 * C279 +
             C2774 * C262 - C2775 * C248 - C2774 * C263 + C32900 * C278) *
                C838) *
               C32902) *
              C32649 * C241 +
          (((C2774 * C264 - C2775 * C249 - C2774 * C265 + C32900 * C279 +
             C2776 * C1032 - C2777 * C1024 - C2776 * C1033 + C32735 * C1042) *
                C838 +
            (C2774 * C266 - C2775 * C250 - C2774 * C267 + C32900 * C280 +
             C2776 * C1030 - C2777 * C1023 - C2776 * C1031 + C32735 * C1041) *
                C839 +
            (C2774 * C268 - C2775 * C251 - C2774 * C269 + C32900 * C281 +
             C2776 * C1028 - C2777 * C1022 - C2776 * C1029 + C32735 * C1040) *
                C32923) *
               C32902 +
           ((C2774 * C1169 - C2775 * C1158 - C2774 * C1170 + C32900 * C1185 +
             C2776 * C1725 - C2777 * C1722 - C2776 * C1726 + C32735 * C1731) *
                C838 +
            (C2774 * C1167 - C2775 * C1157 - C2774 * C1168 + C32900 * C1184 +
             C2776 * C1727 - C2777 * C1723 - C2776 * C1728 + C32735 * C1732) *
                C839 +
            (C2774 * C1165 - C2775 * C1156 - C2774 * C1166 + C32900 * C1183 +
             C2776 * C1729 - C2777 * C1724 - C2776 * C1730 + C32735 * C1733) *
                C32923) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C32635 * C110 -
          ((C8344 + C8345 + C8346 + C8347) * C32588 * C32777 +
           (C7831 + C7830 + C7829 + C7828) * C32588 * C32902) *
              C32649 * C32635 * C111 +
          ((C7835 + C7834 + C7833 + C7832) * C32588 * C32902 +
           (C7771 * C363 - C7772 * C351 - C7771 * C364 + C7765 * C381 +
            C7773 * C714 - C7774 * C707 - C7773 * C715 + C7766 * C722 +
            C7775 * C1165 - C7776 * C1156 - C7775 * C1166 + C7767 * C1183 +
            C7777 * C1729 - C7778 * C1724 - C7777 * C1730 + C32909 * C1733) *
               C32588 * C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7771 * C122 - C7772 * C115 - C7771 * C123 + C7765 * C136 +
            C7773 * C262 - C7774 * C248 - C7773 * C263 + C7766 * C278 +
            C7775 * C264 - C7776 * C249 - C7775 * C265 + C7767 * C279 +
            C7777 * C1032 - C7778 * C1024 - C7777 * C1033 + C32909 * C1042) *
               C32588 * C32902 +
           (C7771 * C367 - C7772 * C353 - C7771 * C368 + C7765 * C383 +
            C7773 * C710 - C7774 * C705 - C7773 * C711 + C7766 * C720 +
            C7775 * C1169 - C7776 * C1158 - C7775 * C1170 + C7767 * C1185 +
            C7777 * C1725 - C7778 * C1722 - C7777 * C1726 + C32909 * C1731) *
               C32588 * C32777) *
              C32649 * C240 -
          ((C7777 * C6479 - C7778 * C6476 - C7777 * C6480 + C32909 * C6485 +
            C7775 * C1725 - C7776 * C1722 - C7775 * C1726 + C7767 * C1731 +
            C7773 * C1169 - C7774 * C1158 - C7773 * C1170 + C7766 * C1185 +
            C7771 * C710 - C7772 * C705 - C7771 * C711 + C7765 * C720) *
               C32588 * C32777 +
           (C7777 * C1034 - C7778 * C1025 - C7777 * C1035 + C32909 * C1043 +
            C7775 * C1032 - C7776 * C1024 - C7775 * C1033 + C7767 * C1042 +
            C7773 * C264 - C7774 * C249 - C7773 * C265 + C7766 * C279 +
            C7771 * C262 - C7772 * C248 - C7771 * C263 + C7765 * C278) *
               C32588 * C32902) *
              C32649 * C241 +
          ((C7771 * C264 - C7772 * C249 - C7771 * C265 + C7765 * C279 +
            C7773 * C1032 - C7774 * C1024 - C7773 * C1033 + C7766 * C1042 +
            C7775 * C1034 - C7776 * C1025 - C7775 * C1035 + C7767 * C1043 +
            C7777 * C6408 - C7778 * C6406 - C7777 * C6409 + C32909 * C6412) *
               C32588 * C32902 +
           (C7771 * C1169 - C7772 * C1158 - C7771 * C1170 + C7765 * C1185 +
            C7773 * C1725 - C7774 * C1722 - C7773 * C1726 + C7766 * C1731 +
            C7775 * C6479 - C7776 * C6476 - C7775 * C6480 + C7767 * C6485 +
            C7777 * C6743 - C7778 * C6742 - C7777 * C6744 + C32909 * C6745) *
               C32588 * C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C32649 * C471 -
           ((C1379 + C1380 + C1381) * C32923 + (C1382 + C1383 + C1384) * C839 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C838) *
               C32690 * C32649 * C472) *
              C473 +
          (((C1384 + C1383 + C1382) * C838 + (C1381 + C1380 + C1379) * C839 +
            (C841 * C256 - C842 * C245 - C841 * C257 + C32964 * C275 +
             C843 * C270 - C844 * C252 - C843 * C271 + C32952 * C282 +
             C845 * C1339 - C846 * C1338 - C845 * C1340 + C32932 * C1341) *
                C32923) *
               C32690 * C32649 * C472 -
           ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
            (C904 + C903 + C902) * C838) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C32649 * C471 -
           (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
               C32690 * C32649 * C472) *
              C473 +
          ((C507 * C102 + C506 * C103 + C505 * C104 + C504 * C105 +
            (C113 * C476 - C114 * C475 - C113 * C477 + C32672 * C478) * C106) *
               C32690 * C32649 * C472 -
           (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
            C174 * C102) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
             C174 * C839 + C175 * C32923) *
                C32965 +
            (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
               C32649 * C471 -
           ((C2333 * C32923 + C2334 * C839 +
             (C113 * C1171 - C114 * C1159 - C113 * C1172 + C32672 * C1186) *
                 C838) *
                C32935 +
            (C2335 * C32923 + C2336 * C839 +
             (C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C838) *
                C32954 +
            (C506 * C32923 + C507 * C839 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C838) *
                C32965) *
               C32649 * C472) *
              C473 +
          (((C507 * C838 + C506 * C839 + C505 * C32923) * C32965 +
            (C2336 * C838 + C2335 * C839 +
             (C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) *
                 C32923) *
                C32954 +
            (C2334 * C838 + C2333 * C839 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32923) *
                C32935) *
               C32649 * C472 -
           ((C1868 * C32923 + C1867 * C839 + C1866 * C838) * C32935 +
            (C621 * C32923 + C622 * C839 + C623 * C838) * C32954 +
            (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C32649 * C471 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C32649 * C472) *
              C473 +
          (((C5932 + C5931 + C5930) * C32961 +
            (C5929 + C5928 + C5927) * C32948 +
            (C5453 * C256 - C5454 * C245 - C5453 * C257 + C5447 * C275 +
             C5455 * C270 - C5456 * C252 - C5455 * C271 + C5448 * C282 +
             C5457 * C1339 - C5458 * C1338 - C5457 * C1340 + C32932 * C1341) *
                C32923) *
               C32690 * C32649 * C472 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C32649 * C471 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C32649 * C472) *
              C473 +
          ((C6334 * C260 - C6335 * C247 - C6334 * C261 + C6328 * C277 +
            C6336 * C266 - C6337 * C250 - C6336 * C267 + C6329 * C280 +
            C6338 * C1030 - C6339 * C1023 - C6338 * C1031 + C6330 * C1041 +
            C6340 * C1036 - C6341 * C1026 - C6340 * C1037 + C6331 * C1044 +
            C6342 * C6571 - C6343 * C6570 - C6342 * C6572 + C6332 * C6573) *
               C32588 * C32690 * C32649 * C472 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32588 * C32965 +
            (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
               C32649 * C471 -
           ((C5457 * C6481 - C5458 * C6477 - C5457 * C6482 + C32932 * C6486 +
             C5455 * C1173 - C5456 * C1160 - C5455 * C1174 + C5448 * C1187 +
             C5453 * C1171 - C5454 * C1159 - C5453 * C1172 + C5447 * C1186) *
                C32588 * C32935 +
            (C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731 +
             C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
             C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720) *
                C32588 * C32954 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32588 * C32965) *
               C32649 * C472) *
              C473 +
          (((C5932 + C5931 + C5930) * C32588 * C32965 +
            (C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732) *
                C32588 * C32954 +
            (C5453 * C1175 - C5454 * C1161 - C5453 * C1176 + C5447 * C1188 +
             C5455 * C1177 - C5456 * C1162 - C5455 * C1178 + C5448 * C1189 +
             C5457 * C7301 - C5458 * C7300 - C5457 * C7302 + C32932 * C7303) *
                C32588 * C32935) *
               C32649 * C472 -
           ((C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189 +
             C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
             C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385) *
                C32588 * C32935 +
            (C6118 + C6119 + C6120) * C32588 * C32954 +
            (C5516 + C5515 + C5514) * C32588 * C32965) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C589 -
           ((C1571 + C1572 + C1573) * C32923 + (C1574 + C1575 + C1576) * C839 +
            (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
             C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
             C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                C838) *
               C32690 * C590) *
              C471 +
          (((C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720 +
             C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
             C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731) *
                C838 +
            (C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732) *
                C839 +
            (C841 * C714 - C842 * C707 - C841 * C715 + C32964 * C722 +
             C843 * C1165 - C844 * C1156 - C843 * C1166 + C32952 * C1183 +
             C845 * C1729 - C846 * C1724 - C845 * C1730 + C32932 * C1733) *
                C32923) *
               C32690 * C590 -
           ((C1379 + C1380 + C1381) * C32923 + (C1382 + C1383 + C1384) * C839 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C838) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C589 -
           (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
            (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
               C32690 * C590) *
              C471 +
          (((C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C102 +
            (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) * C103 +
            (C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) * C104 +
            (C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) * C105 +
            (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) * C106) *
               C32690 * C590 -
           (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
             C174 * C839 + C175 * C32923) *
                C32965 +
            (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
               C589 -
           ((C2154 + C2155 + C2156) * C32935 +
            (C2124 + C2123 + C2153) * C32954 +
            (C2118 + C2117 + C2152) * C32965) *
               C590) *
              C471 +
          (((C2669 + C2655 + C2656) * C32965 +
            (C2670 + C2661 + C2662) * C32954 +
            ((C113 * C2641 - C114 * C2638 - C113 * C2642 + C32672 * C2647) *
                 C838 +
             (C113 * C2643 - C114 * C2639 - C113 * C2644 + C32672 * C2648) *
                 C839 +
             (C113 * C2645 - C114 * C2640 - C113 * C2646 + C32672 * C2649) *
                 C32923) *
                C32935) *
               C590 -
           ((C2662 + C2661 + C2670) * C32935 +
            (C2656 + C2655 + C2669) * C32954 +
            (C506 * C32923 + C507 * C839 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C838) *
                C32965) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C471 +
          (((C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720 +
             C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
             C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731) *
                C32961 +
            (C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732) *
                C32948 +
            (C5453 * C714 - C5454 * C707 - C5453 * C715 + C5447 * C722 +
             C5455 * C1165 - C5456 * C1156 - C5455 * C1166 + C5448 * C1183 +
             C5457 * C1729 - C5458 * C1724 - C5457 * C1730 + C32932 * C1733) *
                C32923) *
               C32690 * C590 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C471 +
          ((C6334 * C710 - C6335 * C705 - C6334 * C711 + C6328 * C720 +
            C6336 * C1169 - C6337 * C1158 - C6336 * C1170 + C6329 * C1185 +
            C6338 * C1725 - C6339 * C1722 - C6338 * C1726 + C6330 * C1731 +
            C6340 * C6479 - C6341 * C6476 - C6340 * C6480 + C6331 * C6485 +
            C6342 * C6743 - C6343 * C6742 - C6342 * C6744 + C6332 * C6745) *
               C32588 * C32690 * C590 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32588 * C32965 +
            (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
               C589 -
           ((C7149 + C7150 + C7151) * C32588 * C32935 +
            (C7148 + C7147 + C7146) * C32588 * C32954 +
            (C7145 + C7144 + C7143) * C32588 * C32965) *
               C590) *
              C471 +
          (((C7662 + C7663 + C7664) * C32588 * C32965 +
            (C7665 + C7666 + C7667) * C32588 * C32954 +
            (C5453 * C2641 - C5454 * C2638 - C5453 * C2642 + C5447 * C2647 +
             C5455 * C7079 - C5456 * C7076 - C5455 * C7080 + C5448 * C7085 +
             C5457 * C7622 - C5458 * C7621 - C5457 * C7623 + C32932 * C7624) *
                C32588 * C32935) *
               C590 -
           ((C7667 + C7666 + C7665) * C32588 * C32935 +
            (C7664 + C7663 + C7662) * C32588 * C32954 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32588 * C32965) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                   C102 +
               C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                  C32690 * C32649 * C32635 * C110 -
              (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
               C174 * C102) *
                  C32690 * C32649 * C32635 * C111 +
              (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
               (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) *
                   C106) *
                  C32690 * C32649 * C32635 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) *
                   C102 +
               C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
                  C32690 * C32649 * C240 -
              ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) *
                   C106 +
               (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) *
                   C105 +
               (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) *
                   C104 +
               (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) *
                   C103 +
               (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                   C102) *
                  C32690 * C32649 * C241 +
              ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) *
                   C102 +
               (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) *
                   C103 +
               (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                   C104 +
               (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                   C105 +
               (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) *
                   C106) *
                  C32690 * C32649 * C242) *
             C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C346 -
          ((C113 * C359 - C114 * C349 - C113 * C360 + C32672 * C379) * C106 +
           (C113 * C361 - C114 * C350 - C113 * C362 + C32672 * C380) * C105 +
           (C113 * C363 - C114 * C351 - C113 * C364 + C32672 * C381) * C104 +
           (C113 * C365 - C114 * C352 - C113 * C366 + C32672 * C382) * C103 +
           (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
              C32690 * C347 +
          ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C102 +
           (C113 * C371 - C114 * C355 - C113 * C372 + C32672 * C385) * C103 +
           (C113 * C373 - C114 * C356 - C113 * C374 + C32672 * C386) * C104 +
           (C113 * C375 - C114 * C357 - C113 * C376 + C32672 * C387) * C105 +
           (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) * C106) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
           (C904 + C903 + C902) * C838) *
              C32690 * C32649 * C32635 * C111 +
          (C912 * C838 + (C910 + C909 + C908) * C839 +
           (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
            C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
            C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C240 -
          ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
            C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
            C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
               C32923 +
           (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
            C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
            C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
               C839 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C838) *
              C32690 * C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C838 +
           (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
            C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
            C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
               C839 +
           (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
            C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
            C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C346 -
          ((C845 * C1165 - C846 * C1156 - C845 * C1166 + C32932 * C1183 +
            C843 * C714 - C844 * C707 - C843 * C715 + C32952 * C722 +
            C841 * C363 - C842 * C351 - C841 * C364 + C32964 * C381) *
               C32923 +
           (C845 * C1167 - C846 * C1157 - C845 * C1168 + C32932 * C1184 +
            C843 * C712 - C844 * C706 - C843 * C713 + C32952 * C721 +
            C841 * C365 - C842 * C352 - C841 * C366 + C32964 * C382) *
               C839 +
           (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
               C838) *
              C32690 * C347 +
          ((C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C838 +
           (C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385 +
            C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
            C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189) *
               C839 +
           (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
            C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
            C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
               C32923) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C838 +
            C623 * C839 + C622 * C32923) *
               C32954 +
           ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C838 +
            C1866 * C839 + C1867 * C32923) *
               C32935) *
              C32649 * C32635 * C110 -
          ((C1868 * C32923 + C1867 * C839 + C1866 * C838) * C32935 +
           (C621 * C32923 + C622 * C839 + C623 * C838) * C32954 +
           (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
              C32649 * C32635 * C111 +
          ((C175 * C838 + C176 * C839 + C177 * C32923) * C32965 +
           (C622 * C838 + C621 * C839 + C620 * C32923) * C32954 +
           (C1867 * C838 + C1868 * C839 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C32923) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C838 +
            C623 * C839 + C622 * C32923) *
               C32954 +
           ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C838 +
            C1866 * C839 + C1867 * C32923) *
               C32935) *
              C32649 * C240 -
          (((C113 * C1179 - C114 * C1163 - C113 * C1180 + C32672 * C1190) *
                C32923 +
            (C113 * C1175 - C114 * C1161 - C113 * C1176 + C32672 * C1188) *
                C839 +
            (C113 * C1171 - C114 * C1159 - C113 * C1172 + C32672 * C1186) *
                C838) *
               C32935 +
           ((C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) * C32923 +
            (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) * C839 +
            (C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C838) *
               C32954 +
           (C506 * C32923 + C507 * C839 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C838) *
               C32965) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C838 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C839 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C32923) *
               C32965 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C838 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C839 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32923) *
               C32954 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C838 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C839 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C32923) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
              C346 -
          ((C2154 + C2155 + C2156) * C32935 + (C2124 + C2123 + C2153) * C32954 +
           (C2118 + C2117 + C2152) * C32965) *
              C347 +
          (C2158 * C32965 + (C2156 + C2155 + C2154) * C32954 +
           ((C113 * C2100 - C114 * C2091 - C113 * C2101 + C32672 * C2109) *
                C838 +
            (C113 * C2102 - C114 * C2092 - C113 * C2103 + C32672 * C2110) *
                C839 +
            (C113 * C2104 - C114 * C2093 - C113 * C2105 + C32672 * C2111) *
                C32923) *
               C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C346 -
          ((C5457 * C1165 - C5458 * C1156 - C5457 * C1166 + C32932 * C1183 +
            C5455 * C714 - C5456 * C707 - C5455 * C715 + C5448 * C722 +
            C5453 * C363 - C5454 * C351 - C5453 * C364 + C5447 * C381) *
               C32923 +
           (C5457 * C1167 - C5458 * C1157 - C5457 * C1168 + C32932 * C1184 +
            C5455 * C712 - C5456 * C706 - C5455 * C713 + C5448 * C721 +
            C5453 * C365 - C5454 * C352 - C5453 * C366 + C5447 * C382) *
               C32948 +
           (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
               C32961) *
              C32690 * C347 +
          ((C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32961 +
           (C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189) *
               C32948 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32923) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C346 -
          (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
           C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
           C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
           C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
           C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
              C32588 * C32690 * C347 +
          (C6334 * C369 - C6335 * C354 - C6334 * C370 + C6328 * C384 +
           C6336 * C1171 - C6337 * C1159 - C6336 * C1172 + C6329 * C1186 +
           C6338 * C1173 - C6339 * C1160 - C6338 * C1174 + C6330 * C1187 +
           C6340 * C6481 - C6341 * C6477 - C6340 * C6482 + C6331 * C6486 +
           C6342 * C6483 - C6343 * C6478 - C6342 * C6484 + C6332 * C6487) *
              C32588 * C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385) *
               C32588 * C32935 +
           (C6118 + C6119 + C6120) * C32588 * C32954 +
           (C5516 + C5515 + C5514) * C32588 * C32965) *
              C32649 * C32635 * C111 +
          (C5524 * C32588 * C32965 + (C6117 + C6116 + C6115) * C32588 * C32954 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C5457 * C6481 - C5458 * C6477 - C5457 * C6482 + C32932 * C6486 +
            C5455 * C1173 - C5456 * C1160 - C5455 * C1174 + C5448 * C1187 +
            C5453 * C1171 - C5454 * C1159 - C5453 * C1172 + C5447 * C1186) *
               C32588 * C32935 +
           (C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731 +
            C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
            C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720) *
               C32588 * C32954 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32588 * C32965) *
              C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32588 * C32965 +
           (C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
            C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
            C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
               C32588 * C32954 +
           (C5453 * C1173 - C5454 * C1160 - C5453 * C1174 + C5447 * C1187 +
            C5455 * C6481 - C5456 * C6477 - C5455 * C6482 + C5448 * C6486 +
            C5457 * C6483 - C5458 * C6478 - C5457 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
              C346 -
          ((C7149 + C7150 + C7151) * C32588 * C32935 +
           (C7148 + C7147 + C7146) * C32588 * C32954 +
           (C7145 + C7144 + C7143) * C32588 * C32965) *
              C347 +
          (C7154 * C32965 + (C7151 + C7150 + C7149) * C32588 * C32954 +
           (C5453 * C2100 - C5454 * C2091 - C5453 * C2101 + C5447 * C2109 +
            C5455 * C7081 - C5456 * C7077 - C5455 * C7082 + C5448 * C7086 +
            C5457 * C7083 - C5458 * C7078 - C5457 * C7084 + C32932 * C7087) *
               C32588 * C32935) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C589 -
           ((C1571 + C1572 + C1573) * C32923 + (C1574 + C1575 + C1576) * C839 +
            (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
             C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
             C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                C838) *
               C32690 * C590) *
              C32635 * C473 +
          (((C1576 + C1575 + C1574) * C838 + (C1573 + C1572 + C1571) * C839 +
            (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
             C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
             C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                C32923) *
               C32690 * C590 -
           ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
            (C904 + C903 + C902) * C838) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C589 -
           (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
            (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
               C32690 * C590) *
              C32635 * C473 +
          ((C623 * C102 + C622 * C103 + C621 * C104 + C620 * C105 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) * C106) *
               C32690 * C590 -
           (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
            C174 * C102) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
             C174 * C839 + C175 * C32923) *
                C32965 +
            (C2152 + C2117 + C2118) * C32954 + C2158 * C32935) *
               C589 -
           ((C2154 + C2155 + C2156) * C32935 +
            (C2124 + C2123 + C2153) * C32954 +
            (C2118 + C2117 + C2152) * C32965) *
               C590) *
              C32635 * C473 +
          (((C2487 + C2488 + C2489) * C32965 +
            (C2490 + C2491 + C2492) * C32954 +
            (C2150 * C838 + C2149 * C839 +
             (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                 C32923) *
                C32935) *
               C590 -
           ((C2492 + C2491 + C2490) * C32935 +
            (C2489 + C2488 + C2487) * C32954 +
            (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C32635 * C473 +
          (((C6120 + C6119 + C6118) * C32961 +
            (C6117 + C6116 + C6115) * C32948 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32923) *
               C32690 * C590 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C32635 * C473 +
          ((C6334 * C365 - C6335 * C352 - C6334 * C366 + C6328 * C382 +
            C6336 * C712 - C6337 * C706 - C6336 * C713 + C6329 * C721 +
            C6338 * C1167 - C6339 * C1157 - C6338 * C1168 + C6330 * C1184 +
            C6340 * C1727 - C6341 * C1723 - C6340 * C1728 + C6331 * C1732 +
            C6342 * C6657 - C6343 * C6656 - C6342 * C6658 + C6332 * C6659) *
               C32588 * C32690 * C590 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32588 * C32965 +
            (C7143 + C7144 + C7145) * C32588 * C32954 + C7154 * C32935) *
               C589 -
           ((C7149 + C7150 + C7151) * C32588 * C32935 +
            (C7148 + C7147 + C7146) * C32588 * C32954 +
            (C7145 + C7144 + C7143) * C32588 * C32965) *
               C590) *
              C32635 * C473 +
          (((C6120 + C6119 + C6118) * C32588 * C32965 +
            (C7473 + C7474 + C7475) * C32588 * C32954 +
            (C5453 * C2096 - C5454 * C2089 - C5453 * C2097 + C5447 * C2107 +
             C5455 * C2643 - C5456 * C2639 - C5455 * C2644 + C5448 * C2648 +
             C5457 * C7451 - C5458 * C7450 - C5457 * C7452 + C32932 * C7453) *
                C32588 * C32935) *
               C590 -
           ((C7475 + C7474 + C7473) * C32588 * C32935 +
            (C6118 + C6119 + C6120) * C32588 * C32954 +
            (C5516 + C5515 + C5514) * C32588 * C32965) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C240 -
          ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) * C106 +
           (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) * C105 +
           (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) * C104 +
           (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) * C103 +
           (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
              C32690 * C32649 * C241 +
          ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C102 +
           (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C103 +
           (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C104 +
           (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) * C105 +
           (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) * C106) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C32635 * C110 -
          (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
           C174 * C102) *
              C32690 * C32649 * C32635 * C111 +
          (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) * C106) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
           (C904 + C903 + C902) * C838) *
              C32690 * C32649 * C32635 * C111 +
          (C912 * C838 + (C910 + C909 + C908) * C839 +
           (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
            C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
            C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C240 -
          ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
            C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
            C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
               C32923 +
           (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
            C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
            C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
               C839 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C838) *
              C32690 * C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C838 +
           (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
            C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
            C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
               C839 +
           (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
            C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
            C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C838 +
            C623 * C839 + C622 * C32923) *
               C32954 +
           ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C838 +
            C1866 * C839 + C1867 * C32923) *
               C32935) *
              C32649 * C32635 * C110 -
          ((C1868 * C32923 + C1867 * C839 + C1866 * C838) * C32935 +
           (C621 * C32923 + C622 * C839 + C623 * C838) * C32954 +
           (C176 * C32923 + C175 * C839 + C174 * C838) * C32965) *
              C32649 * C32635 * C111 +
          ((C175 * C838 + C176 * C839 + C177 * C32923) * C32965 +
           (C622 * C838 + C621 * C839 + C620 * C32923) * C32954 +
           (C1867 * C838 + C1868 * C839 +
            (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                C32923) *
               C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C838 +
            C174 * C839 + C175 * C32923) *
               C32965 +
           ((C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C838 +
            C623 * C839 + C622 * C32923) *
               C32954 +
           ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C838 +
            C1866 * C839 + C1867 * C32923) *
               C32935) *
              C32649 * C240 -
          (((C113 * C1179 - C114 * C1163 - C113 * C1180 + C32672 * C1190) *
                C32923 +
            (C113 * C1175 - C114 * C1161 - C113 * C1176 + C32672 * C1188) *
                C839 +
            (C113 * C1171 - C114 * C1159 - C113 * C1172 + C32672 * C1186) *
                C838) *
               C32935 +
           ((C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) * C32923 +
            (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) * C839 +
            (C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C838) *
               C32954 +
           (C506 * C32923 + C507 * C839 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C838) *
               C32965) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C838 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C839 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) *
                C32923) *
               C32965 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C838 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C839 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C32923) *
               C32954 +
           ((C113 * C1173 - C114 * C1160 - C113 * C1174 + C32672 * C1187) *
                C838 +
            (C113 * C1177 - C114 * C1162 - C113 * C1178 + C32672 * C1189) *
                C839 +
            (C113 * C1181 - C114 * C1164 - C113 * C1182 + C32672 * C1191) *
                C32923) *
               C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C32635 * C110 -
          ((C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385) *
               C32588 * C32935 +
           (C6118 + C6119 + C6120) * C32588 * C32954 +
           (C5516 + C5515 + C5514) * C32588 * C32965) *
              C32649 * C32635 * C111 +
          (C5524 * C32588 * C32965 + (C6117 + C6116 + C6115) * C32588 * C32954 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32588 * C32935) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32588 * C32965 +
           (C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185) *
               C32588 * C32954 +
           (C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32588 * C32935) *
              C32649 * C240 -
          ((C5457 * C6481 - C5458 * C6477 - C5457 * C6482 + C32932 * C6486 +
            C5455 * C1173 - C5456 * C1160 - C5455 * C1174 + C5448 * C1187 +
            C5453 * C1171 - C5454 * C1159 - C5453 * C1172 + C5447 * C1186) *
               C32588 * C32935 +
           (C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731 +
            C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
            C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720) *
               C32588 * C32954 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32588 * C32965) *
              C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32588 * C32965 +
           (C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
            C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
            C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
               C32588 * C32954 +
           (C5453 * C1173 - C5454 * C1160 - C5453 * C1174 + C5447 * C1187 +
            C5455 * C6481 - C5456 * C6477 - C5455 * C6482 + C5448 * C6486 +
            C5457 * C6483 - C5458 * C6478 - C5457 * C6484 + C32932 * C6487) *
               C32588 * C32935) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
             C174 * C2771 + C175 * C2772 + C176 * C32901) *
                C32902 +
            (C3803 + C3804 + C3805 + C3806) * C32777) *
               C32649 * C471 -
           ((C3947 * C32901 + C2335 * C2772 + C2336 * C2771 + C2667 * C2770) *
                C32777 +
            (C505 * C32901 + C506 * C2772 + C507 * C2771 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C2770) *
                C32902) *
               C32649 * C472) *
              C473 +
          (((C507 * C2770 + C506 * C2771 + C505 * C2772 + C504 * C32901) *
                C32902 +
            (C2336 * C2770 + C2335 * C2771 + C3947 * C2772 +
             (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) *
                 C32901) *
                C32777) *
               C32649 * C472 -
           ((C620 * C32901 + C621 * C2772 + C622 * C2771 + C623 * C2770) *
                C32777 +
            (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
                C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
              C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
              C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                 C32882 +
             (C5514 + C5515 + C5516) * C32598) *
                C32902 +
            ((C7143 + C7144 + C7145) * C32882 +
             (C6120 + C6119 + C6118) * C32598) *
                C32777) *
               C32649 * C471 -
           (((C9128 + C9129 + C9130) * C32598 +
             (C7664 + C7663 + C7662) * C32882) *
                C32777 +
            ((C5930 + C5931 + C5932) * C32598 +
             (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
              C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
              C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                 C32882) *
                C32902) *
               C32649 * C472) *
              C473 +
          ((((C5932 + C5931 + C5930) * C32882 +
             (C5929 + C5928 + C5927) * C32598) *
                C32902 +
            ((C9130 + C9129 + C9128) * C32882 +
             (C5453 * C714 - C5454 * C707 - C5453 * C715 + C5447 * C722 +
              C5455 * C1165 - C5456 * C1156 - C5455 * C1166 + C5448 * C1183 +
              C5457 * C1729 - C5458 * C1724 - C5457 * C1730 + C32932 * C1733) *
                 C32598) *
                C32777) *
               C32649 * C472 -
           (((C6115 + C6116 + C6117) * C32598 +
             (C6118 + C6119 + C6120) * C32882) *
                C32777 +
            ((C5519 + C5518 + C5517) * C32598 +
             (C5516 + C5515 + C5514) * C32882) *
                C32902) *
               C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
             C174 * C2771 + C175 * C2772 + C176 * C32901) *
                C32902 +
            (C3803 + C3804 + C3805 + C3806) * C32777) *
               C589 -
           ((C3807 + C3808 + C3809 + C3810) * C32777 +
            (C3806 + C3805 + C3804 + C3803) * C32902) *
               C590) *
              C471 +
          (((C4212 + C4213 + C4214 + C4215) * C32902 +
            (C2668 * C2770 + C2334 * C2771 + C2333 * C2772 +
             (C113 * C2305 - C114 * C2304 - C113 * C2306 + C32672 * C2307) *
                 C32901) *
                C32777) *
               C590 -
           ((C4215 + C4214 + C4213 + C4212) * C32777 +
            (C505 * C32901 + C506 * C2772 + C507 * C2771 +
             (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) *
                 C2770) *
                C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
              C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
              C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                 C32882 +
             (C5514 + C5515 + C5516) * C32598) *
                C32902 +
            ((C7143 + C7144 + C7145) * C32882 + C9327 * C32598) * C32777) *
               C589 -
           (((C7475 + C7474 + C7473) * C32598 +
             (C7148 + C7147 + C7146) * C32882) *
                C32777 +
            (C9328 * C32598 + (C7145 + C7144 + C7143) * C32882) * C32902) *
               C590) *
              C471 +
          ((((C7662 + C7663 + C7664) * C32882 +
             (C9130 + C9129 + C9128) * C32598) *
                C32902 +
            ((C7665 + C7666 + C7667) * C32882 +
             (C5453 * C1175 - C5454 * C1161 - C5453 * C1176 + C5447 * C1188 +
              C5455 * C1177 - C5456 * C1162 - C5455 * C1178 + C5448 * C1189 +
              C5457 * C7301 - C5458 * C7300 - C5457 * C7302 + C32932 * C7303) *
                 C32598) *
                C32777) *
               C590 -
           (((C9128 + C9129 + C9130) * C32598 +
             (C7664 + C7663 + C7662) * C32882) *
                C32777 +
            ((C5930 + C5931 + C5932) * C32598 +
             (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
              C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
              C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                 C32882) *
                C32902) *
               C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
               C32777) *
              C32649 * C240 -
          (((C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) * C32901 +
            C2335 * C2772 + C2336 * C2771 + C2667 * C2770) *
               C32777 +
           (C505 * C32901 + C506 * C2772 + C507 * C2771 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C2770) *
               C32902) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C2770 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C2771 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C2772 +
            (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                C32901) *
               C32902 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C2770 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C2771 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C2772 +
            (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                C32901) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
               C32777) *
              C32649 * C32635 * C110 -
          ((C620 * C32901 + C621 * C2772 + C622 * C2771 + C623 * C2770) *
               C32777 +
           (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C175 * C2770 + C176 * C2771 + C177 * C2772 + C178 * C32901) *
               C32902 +
           (C622 * C2770 + C621 * C2771 + C620 * C2772 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                C32901) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C3803 + C3804 + C3805 + C3806) * C32777) *
              C346 -
          ((C3807 + C3808 + C3809 + C3810) * C32777 +
           (C3806 + C3805 + C3804 + C3803) * C32902) *
              C347 +
          ((C3810 + C3809 + C3808 + C3807) * C32902 +
           (C2151 * C2770 + C2150 * C2771 + C2149 * C2772 +
            (C113 * C2483 - C114 * C2482 - C113 * C2484 + C32672 * C2485) *
                C32901) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C6115 + C6116 + C6117) * C32598 +
            (C6118 + C6119 + C6120) * C32882) *
               C32777 +
           ((C5519 + C5518 + C5517) * C32598 +
            (C5516 + C5515 + C5514) * C32882) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C5524 * C32882 + (C5522 + C5521 + C5520) * C32598) * C32902 +
           ((C6117 + C6116 + C6115) * C32882 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721) *
                C32598 +
            (C7664 + C7663 + C7662) * C32882) *
               C32777 +
           ((C5930 + C5931 + C5932) * C32598 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32882) *
               C32902) *
              C32649 * C241 +
          (((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
             C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
             C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
                C32882 +
            (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
             C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
             C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
                C32598) *
               C32902 +
           ((C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
             C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
             C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
                C32882 +
            (C5453 * C1167 - C5454 * C1157 - C5453 * C1168 + C5447 * C1184 +
             C5455 * C1727 - C5456 * C1723 - C5455 * C1728 + C5448 * C1732 +
             C5457 * C6657 - C5458 * C6656 - C5457 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C346 -
          (((C7475 + C7474 + C7473) * C32598 +
            (C7148 + C7147 + C7146) * C32882) *
               C32777 +
           ((C6118 + C6119 + C6120) * C32598 +
            (C7145 + C7144 + C7143) * C32882) *
               C32902) *
              C347 +
          ((C7153 * C32882 + (C7473 + C7474 + C7475) * C32598) * C32902 +
           ((C7151 + C7150 + C7149) * C32882 +
            (C5453 * C2096 - C5454 * C2089 - C5453 * C2097 + C5447 * C2107 +
             C5455 * C2643 - C5456 * C2639 - C5455 * C2644 + C5448 * C2648 +
             C5457 * C7451 - C5458 * C7450 - C5457 * C7452 + C32932 * C7453) *
                C32598) *
               C32777) *
              C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
             C174 * C2771 + C175 * C2772 + C176 * C32901) *
                C32902 +
            (C3803 + C3804 + C3805 + C3806) * C32777) *
               C589 -
           ((C3807 + C3808 + C3809 + C3810) * C32777 +
            (C3806 + C3805 + C3804 + C3803) * C32902) *
               C590) *
              C32635 * C473 +
          (((C4078 + C4079 + C4080 + C4081) * C32902 +
            (C1866 * C2770 + C1867 * C2771 + C1868 * C2772 +
             (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) *
                 C32901) *
                C32777) *
               C590 -
           ((C4081 + C4080 + C4079 + C4078) * C32777 +
            (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
                C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
              C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
              C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                 C32882 +
             (C5514 + C5515 + C5516) * C32598) *
                C32902 +
            ((C7143 + C7144 + C7145) * C32882 + C9327 * C32598) * C32777) *
               C589 -
           (((C7475 + C7474 + C7473) * C32598 +
             (C7148 + C7147 + C7146) * C32882) *
                C32777 +
            (C9328 * C32598 + (C7145 + C7144 + C7143) * C32882) * C32902) *
               C590) *
              C32635 * C473 +
          (((C9327 * C32882 + (C6117 + C6116 + C6115) * C32598) * C32902 +
            ((C7473 + C7474 + C7475) * C32882 +
             (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
              C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
              C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
                 C32598) *
                C32777) *
               C590 -
           (((C6115 + C6116 + C6117) * C32598 + C9328 * C32882) * C32777 +
            ((C5519 + C5518 + C5517) * C32598 +
             (C5516 + C5515 + C5514) * C32882) *
                C32902) *
               C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
               C32777) *
              C32649 * C32635 * C110 -
          ((C620 * C32901 + C621 * C2772 + C622 * C2771 + C623 * C2770) *
               C32777 +
           (C177 * C32901 + C176 * C2772 + C175 * C2771 + C174 * C2770) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C175 * C2770 + C176 * C2771 + C177 * C2772 + C178 * C32901) *
               C32902 +
           (C622 * C2770 + C621 * C2771 + C620 * C2772 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) *
                C32901) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C2770 +
            C174 * C2771 + C175 * C2772 + C176 * C32901) *
               C32902 +
           (C2147 * C2770 + C623 * C2771 + C622 * C2772 + C621 * C32901) *
               C32777) *
              C32649 * C240 -
          (((C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) * C32901 +
            C2335 * C2772 + C2336 * C2771 + C2667 * C2770) *
               C32777 +
           (C505 * C32901 + C506 * C2772 + C507 * C2771 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C2770) *
               C32902) *
              C32649 * C241 +
          (((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C2770 +
            (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C2771 +
            (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C2772 +
            (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) *
                C32901) *
               C32902 +
           ((C113 * C1169 - C114 * C1158 - C113 * C1170 + C32672 * C1185) *
                C2770 +
            (C113 * C1167 - C114 * C1157 - C113 * C1168 + C32672 * C1184) *
                C2771 +
            (C113 * C1165 - C114 * C1156 - C113 * C1166 + C32672 * C1183) *
                C2772 +
            (C113 * C1531 - C114 * C1530 - C113 * C1532 + C32672 * C1533) *
                C32901) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C32635 * C110 -
          (((C6115 + C6116 + C6117) * C32598 +
            (C6118 + C6119 + C6120) * C32882) *
               C32777 +
           ((C5519 + C5518 + C5517) * C32598 +
            (C5516 + C5515 + C5514) * C32882) *
               C32902) *
              C32649 * C32635 * C111 +
          ((C5524 * C32882 + (C5522 + C5521 + C5520) * C32598) * C32902 +
           ((C6117 + C6116 + C6115) * C32882 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32598) *
               C32777) *
              C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32882 +
            (C5514 + C5515 + C5516) * C32598) *
               C32902 +
           ((C7143 + C7144 + C7145) * C32882 +
            (C6120 + C6119 + C6118) * C32598) *
               C32777) *
              C32649 * C240 -
          (((C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721) *
                C32598 +
            (C7664 + C7663 + C7662) * C32882) *
               C32777 +
           ((C5930 + C5931 + C5932) * C32598 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32882) *
               C32902) *
              C32649 * C241 +
          (((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
             C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
             C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
                C32882 +
            (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
             C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
             C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
                C32598) *
               C32902 +
           ((C5453 * C1169 - C5454 * C1158 - C5453 * C1170 + C5447 * C1185 +
             C5455 * C1725 - C5456 * C1722 - C5455 * C1726 + C5448 * C1731 +
             C5457 * C6479 - C5458 * C6476 - C5457 * C6480 + C32932 * C6485) *
                C32882 +
            (C5453 * C1167 - C5454 * C1157 - C5453 * C1168 + C5447 * C1184 +
             C5455 * C1727 - C5456 * C1723 - C5455 * C1728 + C5448 * C1732 +
             C5457 * C6657 - C5458 * C6656 - C5457 * C6658 + C32932 * C6659) *
                C32598) *
               C32777) *
              C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C32649 * C471 -
           (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
               C32690 * C32649 * C472) *
              C473 +
          ((C507 * C102 + C506 * C103 + C505 * C104 + C504 * C105 +
            (C113 * C476 - C114 * C475 - C113 * C477 + C32672 * C478) * C106) *
               C32690 * C32649 * C472 -
           (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
            C174 * C102) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C32649 * C471 -
           ((C1379 + C1380 + C1381) * C32923 + (C1382 + C1383 + C1384) * C839 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C838) *
               C32690 * C32649 * C472) *
              C473 +
          (((C1384 + C1383 + C1382) * C838 + (C1381 + C1380 + C1379) * C839 +
            (C841 * C256 - C842 * C245 - C841 * C257 + C32964 * C275 +
             C843 * C270 - C844 * C252 - C843 * C271 + C32952 * C282 +
             C845 * C1339 - C846 * C1338 - C845 * C1340 + C32932 * C1341) *
                C32923) *
               C32690 * C32649 * C472 -
           ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
            (C904 + C903 + C902) * C838) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C32649 * C471 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C32649 * C472) *
              C473 +
          (((C5932 + C5931 + C5930) * C32961 +
            (C5929 + C5928 + C5927) * C32948 +
            (C5453 * C256 - C5454 * C245 - C5453 * C257 + C5447 * C275 +
             C5455 * C270 - C5456 * C252 - C5455 * C271 + C5448 * C282 +
             C5457 * C1339 - C5458 * C1338 - C5457 * C1340 + C32932 * C1341) *
                C32923) *
               C32690 * C32649 * C472 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C32649 * C471 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C32649 * C472) *
              C473 +
          ((C6334 * C260 - C6335 * C247 - C6334 * C261 + C6328 * C277 +
            C6336 * C266 - C6337 * C250 - C6336 * C267 + C6329 * C280 +
            C6338 * C1030 - C6339 * C1023 - C6338 * C1031 + C6330 * C1041 +
            C6340 * C1036 - C6341 * C1026 - C6340 * C1037 + C6331 * C1044 +
            C6342 * C6571 - C6343 * C6570 - C6342 * C6572 + C6332 * C6573) *
               C32588 * C32690 * C32649 * C472 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C32649 * C471) *
              C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C589 -
           (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
            (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
               C32690 * C590) *
              C471 +
          (((C113 * C710 - C114 * C705 - C113 * C711 + C32672 * C720) * C102 +
            (C113 * C712 - C114 * C706 - C113 * C713 + C32672 * C721) * C103 +
            (C113 * C714 - C114 * C707 - C113 * C715 + C32672 * C722) * C104 +
            (C113 * C716 - C114 * C708 - C113 * C717 + C32672 * C723) * C105 +
            (C113 * C718 - C114 * C709 - C113 * C719 + C32672 * C724) * C106) *
               C32690 * C590 -
           (C504 * C106 + C505 * C105 + C506 * C104 + C507 * C103 +
            (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C589 -
           ((C1571 + C1572 + C1573) * C32923 + (C1574 + C1575 + C1576) * C839 +
            (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
             C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
             C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                C838) *
               C32690 * C590) *
              C471 +
          (((C841 * C710 - C842 * C705 - C841 * C711 + C32964 * C720 +
             C843 * C1169 - C844 * C1158 - C843 * C1170 + C32952 * C1185 +
             C845 * C1725 - C846 * C1722 - C845 * C1726 + C32932 * C1731) *
                C838 +
            (C841 * C712 - C842 * C706 - C841 * C713 + C32964 * C721 +
             C843 * C1167 - C844 * C1157 - C843 * C1168 + C32952 * C1184 +
             C845 * C1727 - C846 * C1723 - C845 * C1728 + C32932 * C1732) *
                C839 +
            (C841 * C714 - C842 * C707 - C841 * C715 + C32964 * C722 +
             C843 * C1165 - C844 * C1156 - C843 * C1166 + C32952 * C1183 +
             C845 * C1729 - C846 * C1724 - C845 * C1730 + C32932 * C1733) *
                C32923) *
               C32690 * C590 -
           ((C1379 + C1380 + C1381) * C32923 + (C1382 + C1383 + C1384) * C839 +
            (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
             C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
             C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
                C838) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C471 +
          (((C5453 * C710 - C5454 * C705 - C5453 * C711 + C5447 * C720 +
             C5455 * C1169 - C5456 * C1158 - C5455 * C1170 + C5448 * C1185 +
             C5457 * C1725 - C5458 * C1722 - C5457 * C1726 + C32932 * C1731) *
                C32961 +
            (C5453 * C712 - C5454 * C706 - C5453 * C713 + C5447 * C721 +
             C5455 * C1167 - C5456 * C1157 - C5455 * C1168 + C5448 * C1184 +
             C5457 * C1727 - C5458 * C1723 - C5457 * C1728 + C32932 * C1732) *
                C32948 +
            (C5453 * C714 - C5454 * C707 - C5453 * C715 + C5447 * C722 +
             C5455 * C1165 - C5456 * C1156 - C5455 * C1166 + C5448 * C1183 +
             C5457 * C1729 - C5458 * C1724 - C5457 * C1730 + C32932 * C1733) *
                C32923) *
               C32690 * C590 -
           ((C5927 + C5928 + C5929) * C32923 +
            (C5930 + C5931 + C5932) * C32948 +
            (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
             C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
             C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
                C32961) *
               C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C471 +
          ((C6334 * C710 - C6335 * C705 - C6334 * C711 + C6328 * C720 +
            C6336 * C1169 - C6337 * C1158 - C6336 * C1170 + C6329 * C1185 +
            C6338 * C1725 - C6339 * C1722 - C6338 * C1726 + C6330 * C1731 +
            C6340 * C6479 - C6341 * C6476 - C6340 * C6480 + C6331 * C6485 +
            C6342 * C6743 - C6343 * C6742 - C6342 * C6744 + C6332 * C6745) *
               C32588 * C32690 * C590 -
           (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
            C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
            C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
            C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
            C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
               C32588 * C32690 * C589) *
              C472) *
         C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C240 -
          ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) * C106 +
           (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) * C105 +
           (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) * C104 +
           (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) * C103 +
           (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
              C32690 * C32649 * C241 +
          ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C102 +
           (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C103 +
           (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C104 +
           (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) * C105 +
           (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) * C106) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C32635 * C110 -
          (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
           C174 * C102) *
              C32690 * C32649 * C32635 * C111 +
          (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) * C106) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C346 -
          ((C113 * C359 - C114 * C349 - C113 * C360 + C32672 * C379) * C106 +
           (C113 * C361 - C114 * C350 - C113 * C362 + C32672 * C380) * C105 +
           (C113 * C363 - C114 * C351 - C113 * C364 + C32672 * C381) * C104 +
           (C113 * C365 - C114 * C352 - C113 * C366 + C32672 * C382) * C103 +
           (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
              C32690 * C347 +
          ((C113 * C369 - C114 * C354 - C113 * C370 + C32672 * C384) * C102 +
           (C113 * C371 - C114 * C355 - C113 * C372 + C32672 * C385) * C103 +
           (C113 * C373 - C114 * C356 - C113 * C374 + C32672 * C386) * C104 +
           (C113 * C375 - C114 * C357 - C113 * C376 + C32672 * C387) * C105 +
           (C113 * C377 - C114 * C358 - C113 * C378 + C32672 * C388) * C106) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
           (C904 + C903 + C902) * C838) *
              C32690 * C32649 * C32635 * C111 +
          (C912 * C838 + (C910 + C909 + C908) * C839 +
           (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
            C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
            C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C240 -
          ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
            C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
            C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
               C32923 +
           (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
            C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
            C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
               C839 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C838) *
              C32690 * C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C838 +
           (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
            C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
            C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
               C839 +
           (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
            C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
            C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C346 -
          ((C845 * C1165 - C846 * C1156 - C845 * C1166 + C32932 * C1183 +
            C843 * C714 - C844 * C707 - C843 * C715 + C32952 * C722 +
            C841 * C363 - C842 * C351 - C841 * C364 + C32964 * C381) *
               C32923 +
           (C845 * C1167 - C846 * C1157 - C845 * C1168 + C32932 * C1184 +
            C843 * C712 - C844 * C706 - C843 * C713 + C32952 * C721 +
            C841 * C365 - C842 * C352 - C841 * C366 + C32964 * C382) *
               C839 +
           (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
            C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
            C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
               C838) *
              C32690 * C347 +
          ((C841 * C369 - C842 * C354 - C841 * C370 + C32964 * C384 +
            C843 * C1171 - C844 * C1159 - C843 * C1172 + C32952 * C1186 +
            C845 * C1173 - C846 * C1160 - C845 * C1174 + C32932 * C1187) *
               C838 +
           (C841 * C371 - C842 * C355 - C841 * C372 + C32964 * C385 +
            C843 * C1175 - C844 * C1161 - C843 * C1176 + C32952 * C1188 +
            C845 * C1177 - C846 * C1162 - C845 * C1178 + C32932 * C1189) *
               C839 +
           (C841 * C373 - C842 * C356 - C841 * C374 + C32964 * C386 +
            C843 * C1179 - C844 * C1163 - C843 * C1180 + C32952 * C1190 +
            C845 * C1181 - C846 * C1164 - C845 * C1182 + C32932 * C1191) *
               C32923) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C346 -
          ((C5457 * C1165 - C5458 * C1156 - C5457 * C1166 + C32932 * C1183 +
            C5455 * C714 - C5456 * C707 - C5455 * C715 + C5448 * C722 +
            C5453 * C363 - C5454 * C351 - C5453 * C364 + C5447 * C381) *
               C32923 +
           (C5457 * C1167 - C5458 * C1157 - C5457 * C1168 + C32932 * C1184 +
            C5455 * C712 - C5456 * C706 - C5455 * C713 + C5448 * C721 +
            C5453 * C365 - C5454 * C352 - C5453 * C366 + C5447 * C382) *
               C32948 +
           (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
            C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
            C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
               C32961) *
              C32690 * C347 +
          ((C5453 * C369 - C5454 * C354 - C5453 * C370 + C5447 * C384 +
            C5455 * C1171 - C5456 * C1159 - C5455 * C1172 + C5448 * C1186 +
            C5457 * C1173 - C5458 * C1160 - C5457 * C1174 + C32932 * C1187) *
               C32961 +
           (C5453 * C371 - C5454 * C355 - C5453 * C372 + C5447 * C385 +
            C5455 * C1175 - C5456 * C1161 - C5455 * C1176 + C5448 * C1188 +
            C5457 * C1177 - C5458 * C1162 - C5457 * C1178 + C32932 * C1189) *
               C32948 +
           (C5453 * C373 - C5454 * C356 - C5453 * C374 + C5447 * C386 +
            C5455 * C1179 - C5456 * C1163 - C5455 * C1180 + C5448 * C1190 +
            C5457 * C1181 - C5458 * C1164 - C5457 * C1182 + C32932 * C1191) *
               C32923) *
              C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C346 -
          (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
           C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
           C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
           C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
           C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
              C32588 * C32690 * C347 +
          (C6334 * C369 - C6335 * C354 - C6334 * C370 + C6328 * C384 +
           C6336 * C1171 - C6337 * C1159 - C6336 * C1172 + C6329 * C1186 +
           C6338 * C1173 - C6339 * C1160 - C6338 * C1174 + C6330 * C1187 +
           C6340 * C6481 - C6341 * C6477 - C6340 * C6482 + C6331 * C6486 +
           C6342 * C6483 - C6343 * C6478 - C6342 * C6484 + C6332 * C6487) *
              C32588 * C32690 * C348) *
         C32635 * C32623) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
            C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
               C32690 * C589 -
           (C620 * C106 + C621 * C105 + C622 * C104 + C623 * C103 +
            (C113 * C367 - C114 * C353 - C113 * C368 + C32672 * C383) * C102) *
               C32690 * C590) *
              C32635 * C473 +
          ((C623 * C102 + C622 * C103 + C621 * C104 + C620 * C105 +
            (C113 * C592 - C114 * C591 - C113 * C593 + C32672 * C594) * C106) *
               C32690 * C590 -
           (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
            C174 * C102) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
             C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
             C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
                C838 +
            (C902 + C903 + C904) * C839 + C912 * C32923) *
               C32690 * C589 -
           ((C1571 + C1572 + C1573) * C32923 + (C1574 + C1575 + C1576) * C839 +
            (C845 * C1169 - C846 * C1158 - C845 * C1170 + C32932 * C1185 +
             C843 * C710 - C844 * C705 - C843 * C711 + C32952 * C720 +
             C841 * C367 - C842 * C353 - C841 * C368 + C32964 * C383) *
                C838) *
               C32690 * C590) *
              C32635 * C473 +
          (((C1576 + C1575 + C1574) * C838 + (C1573 + C1572 + C1571) * C839 +
            (C841 * C361 - C842 * C350 - C841 * C362 + C32964 * C380 +
             C843 * C716 - C844 * C708 - C843 * C717 + C32952 * C723 +
             C845 * C1531 - C846 * C1530 - C845 * C1532 + C32932 * C1533) *
                C32923) *
               C32690 * C590 -
           ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
            (C904 + C903 + C902) * C838) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
             C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
             C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
                C32961 +
            (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
               C32690 * C589 -
           ((C6115 + C6116 + C6117) * C32923 +
            (C6118 + C6119 + C6120) * C32948 +
            (C5457 * C1169 - C5458 * C1158 - C5457 * C1170 + C32932 * C1185 +
             C5455 * C710 - C5456 * C705 - C5455 * C711 + C5448 * C720 +
             C5453 * C367 - C5454 * C353 - C5453 * C368 + C5447 * C383) *
                C32961) *
               C32690 * C590) *
              C32635 * C473 +
          (((C6120 + C6119 + C6118) * C32961 +
            (C6117 + C6116 + C6115) * C32948 +
            (C5453 * C361 - C5454 * C350 - C5453 * C362 + C5447 * C380 +
             C5455 * C716 - C5456 * C708 - C5455 * C717 + C5448 * C723 +
             C5457 * C1531 - C5458 * C1530 - C5457 * C1532 + C32932 * C1533) *
                C32923) *
               C32690 * C590 -
           ((C5520 + C5521 + C5522) * C32923 +
            (C5519 + C5518 + C5517) * C32948 +
            (C5516 + C5515 + C5514) * C32961) *
               C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
            C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
            C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
            C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
            C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
               C32588 * C32690 * C589 -
           (C6342 * C6479 - C6343 * C6476 - C6342 * C6480 + C6332 * C6485 +
            C6340 * C1725 - C6341 * C1722 - C6340 * C1726 + C6331 * C1731 +
            C6338 * C1169 - C6339 * C1158 - C6338 * C1170 + C6330 * C1185 +
            C6336 * C710 - C6337 * C705 - C6336 * C711 + C6329 * C720 +
            C6334 * C367 - C6335 * C353 - C6334 * C368 + C6328 * C383) *
               C32588 * C32690 * C590) *
              C32635 * C473 +
          ((C6334 * C365 - C6335 * C352 - C6334 * C366 + C6328 * C382 +
            C6336 * C712 - C6337 * C706 - C6336 * C713 + C6329 * C721 +
            C6338 * C1167 - C6339 * C1157 - C6338 * C1168 + C6330 * C1184 +
            C6340 * C1727 - C6341 * C1723 - C6340 * C1728 + C6331 * C1732 +
            C6342 * C6657 - C6343 * C6656 - C6342 * C6658 + C6332 * C6659) *
               C32588 * C32690 * C590 -
           (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
            C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
            C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
            C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
            C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
               C32588 * C32690 * C589) *
              C32635 * C474)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C32635 * C110 -
          (C178 * C106 + C177 * C105 + C176 * C104 + C175 * C103 +
           C174 * C102) *
              C32690 * C32649 * C32635 * C111 +
          (C175 * C102 + C176 * C103 + C177 * C104 + C178 * C105 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32672 * C142) * C106) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32672 * C136) * C102 +
           C174 * C103 + C175 * C104 + C176 * C105 + C177 * C106) *
              C32690 * C32649 * C240 -
          ((C113 * C254 - C114 * C244 - C113 * C255 + C32672 * C274) * C106 +
           (C113 * C256 - C114 * C245 - C113 * C257 + C32672 * C275) * C105 +
           (C113 * C258 - C114 * C246 - C113 * C259 + C32672 * C276) * C104 +
           (C113 * C260 - C114 * C247 - C113 * C261 + C32672 * C277) * C103 +
           (C113 * C262 - C114 * C248 - C113 * C263 + C32672 * C278) * C102) *
              C32690 * C32649 * C241 +
          ((C113 * C264 - C114 * C249 - C113 * C265 + C32672 * C279) * C102 +
           (C113 * C266 - C114 * C250 - C113 * C267 + C32672 * C280) * C103 +
           (C113 * C268 - C114 * C251 - C113 * C269 + C32672 * C281) * C104 +
           (C113 * C270 - C114 * C252 - C113 * C271 + C32672 * C282) * C105 +
           (C113 * C272 - C114 * C253 - C113 * C273 + C32672 * C283) * C106) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C908 + C909 + C910) * C32923 + (C907 + C906 + C905) * C839 +
           (C904 + C903 + C902) * C838) *
              C32690 * C32649 * C32635 * C111 +
          (C912 * C838 + (C910 + C909 + C908) * C839 +
           (C841 * C130 - C842 * C119 - C841 * C131 + C32964 * C140 +
            C843 * C254 - C844 * C244 - C843 * C255 + C32952 * C274 +
            C845 * C272 - C846 * C253 - C845 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C841 * C122 - C842 * C115 - C841 * C123 + C32964 * C136 +
            C843 * C262 - C844 * C248 - C843 * C263 + C32952 * C278 +
            C845 * C264 - C846 * C249 - C845 * C265 + C32932 * C279) *
               C838 +
           (C902 + C903 + C904) * C839 + C912 * C32923) *
              C32690 * C32649 * C240 -
          ((C845 * C1028 - C846 * C1022 - C845 * C1029 + C32932 * C1040 +
            C843 * C268 - C844 * C251 - C843 * C269 + C32952 * C281 +
            C841 * C258 - C842 * C246 - C841 * C259 + C32964 * C276) *
               C32923 +
           (C845 * C1030 - C846 * C1023 - C845 * C1031 + C32932 * C1041 +
            C843 * C266 - C844 * C250 - C843 * C267 + C32952 * C280 +
            C841 * C260 - C842 * C247 - C841 * C261 + C32964 * C277) *
               C839 +
           (C845 * C1032 - C846 * C1024 - C845 * C1033 + C32932 * C1042 +
            C843 * C264 - C844 * C249 - C843 * C265 + C32952 * C279 +
            C841 * C262 - C842 * C248 - C841 * C263 + C32964 * C278) *
               C838) *
              C32690 * C32649 * C241 +
          ((C841 * C264 - C842 * C249 - C841 * C265 + C32964 * C279 +
            C843 * C1032 - C844 * C1024 - C843 * C1033 + C32952 * C1042 +
            C845 * C1034 - C846 * C1025 - C845 * C1035 + C32932 * C1043) *
               C838 +
           (C841 * C266 - C842 * C250 - C841 * C267 + C32964 * C280 +
            C843 * C1030 - C844 * C1023 - C843 * C1031 + C32952 * C1041 +
            C845 * C1036 - C846 * C1026 - C845 * C1037 + C32932 * C1044) *
               C839 +
           (C841 * C268 - C842 * C251 - C841 * C269 + C32964 * C281 +
            C843 * C1028 - C844 * C1022 - C843 * C1029 + C32952 * C1040 +
            C845 * C1038 - C846 * C1027 - C845 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C32635 * C110 -
          ((C5520 + C5521 + C5522) * C32923 + (C5519 + C5518 + C5517) * C32948 +
           (C5516 + C5515 + C5514) * C32961) *
              C32690 * C32649 * C32635 * C111 +
          (C5524 * C32961 + (C5522 + C5521 + C5520) * C32948 +
           (C5453 * C130 - C5454 * C119 - C5453 * C131 + C5447 * C140 +
            C5455 * C254 - C5456 * C244 - C5455 * C255 + C5448 * C274 +
            C5457 * C272 - C5458 * C253 - C5457 * C273 + C32932 * C283) *
               C32923) *
              C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C5453 * C122 - C5454 * C115 - C5453 * C123 + C5447 * C136 +
            C5455 * C262 - C5456 * C248 - C5455 * C263 + C5448 * C278 +
            C5457 * C264 - C5458 * C249 - C5457 * C265 + C32932 * C279) *
               C32961 +
           (C5514 + C5515 + C5516) * C32948 + C5524 * C32923) *
              C32690 * C32649 * C240 -
          ((C5457 * C1028 - C5458 * C1022 - C5457 * C1029 + C32932 * C1040 +
            C5455 * C268 - C5456 * C251 - C5455 * C269 + C5448 * C281 +
            C5453 * C258 - C5454 * C246 - C5453 * C259 + C5447 * C276) *
               C32923 +
           (C5457 * C1030 - C5458 * C1023 - C5457 * C1031 + C32932 * C1041 +
            C5455 * C266 - C5456 * C250 - C5455 * C267 + C5448 * C280 +
            C5453 * C260 - C5454 * C247 - C5453 * C261 + C5447 * C277) *
               C32948 +
           (C5457 * C1032 - C5458 * C1024 - C5457 * C1033 + C32932 * C1042 +
            C5455 * C264 - C5456 * C249 - C5455 * C265 + C5448 * C279 +
            C5453 * C262 - C5454 * C248 - C5453 * C263 + C5447 * C278) *
               C32961) *
              C32690 * C32649 * C241 +
          ((C5453 * C264 - C5454 * C249 - C5453 * C265 + C5447 * C279 +
            C5455 * C1032 - C5456 * C1024 - C5455 * C1033 + C5448 * C1042 +
            C5457 * C1034 - C5458 * C1025 - C5457 * C1035 + C32932 * C1043) *
               C32961 +
           (C5453 * C266 - C5454 * C250 - C5453 * C267 + C5447 * C280 +
            C5455 * C1030 - C5456 * C1023 - C5455 * C1031 + C5448 * C1041 +
            C5457 * C1036 - C5458 * C1026 - C5457 * C1037 + C32932 * C1044) *
               C32948 +
           (C5453 * C268 - C5454 * C251 - C5453 * C269 + C5447 * C281 +
            C5455 * C1028 - C5456 * C1022 - C5455 * C1029 + C5448 * C1040 +
            C5457 * C1038 - C5458 * C1027 - C5457 * C1039 + C32932 * C1045) *
               C32923) *
              C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C32635 * C110 -
          (C6342 * C1036 - C6343 * C1026 - C6342 * C1037 + C6332 * C1044 +
           C6340 * C1030 - C6341 * C1023 - C6340 * C1031 + C6331 * C1041 +
           C6338 * C266 - C6339 * C250 - C6338 * C267 + C6330 * C280 +
           C6336 * C260 - C6337 * C247 - C6336 * C261 + C6329 * C277 +
           C6334 * C124 - C6335 * C116 - C6334 * C125 + C6328 * C137) *
              C32588 * C32690 * C32649 * C32635 * C111 +
          (C6334 * C126 - C6335 * C117 - C6334 * C127 + C6328 * C138 +
           C6336 * C258 - C6337 * C246 - C6336 * C259 + C6329 * C276 +
           C6338 * C268 - C6339 * C251 - C6338 * C269 + C6330 * C281 +
           C6340 * C1028 - C6341 * C1022 - C6340 * C1029 + C6331 * C1040 +
           C6342 * C1038 - C6343 * C1027 - C6342 * C1039 + C6332 * C1045) *
              C32588 * C32690 * C32649 * C32635 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C6334 * C122 - C6335 * C115 - C6334 * C123 + C6328 * C136 +
           C6336 * C262 - C6337 * C248 - C6336 * C263 + C6329 * C278 +
           C6338 * C264 - C6339 * C249 - C6338 * C265 + C6330 * C279 +
           C6340 * C1032 - C6341 * C1024 - C6340 * C1033 + C6331 * C1042 +
           C6342 * C1034 - C6343 * C1025 - C6342 * C1035 + C6332 * C1043) *
              C32588 * C32690 * C32649 * C240 -
          (C6342 * C6408 - C6343 * C6406 - C6342 * C6409 + C6332 * C6412 +
           C6340 * C1034 - C6341 * C1025 - C6340 * C1035 + C6331 * C1043 +
           C6338 * C1032 - C6339 * C1024 - C6338 * C1033 + C6330 * C1042 +
           C6336 * C264 - C6337 * C249 - C6336 * C265 + C6329 * C279 +
           C6334 * C262 - C6335 * C248 - C6334 * C263 + C6328 * C278) *
              C32588 * C32690 * C32649 * C241 +
          (C6334 * C264 - C6335 * C249 - C6334 * C265 + C6328 * C279 +
           C6336 * C1032 - C6337 * C1024 - C6336 * C1033 + C6329 * C1042 +
           C6338 * C1034 - C6339 * C1025 - C6338 * C1035 + C6330 * C1043 +
           C6340 * C6408 - C6341 * C6406 - C6340 * C6409 + C6331 * C6412 +
           C6342 * C6410 - C6343 * C6407 - C6342 * C6411 + C6332 * C6413) *
              C32588 * C32690 * C32649 * C242) *
         C32623) /
            (p * q * std::sqrt(p + q));
}
