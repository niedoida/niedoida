/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddsd_AB_zz.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_2202_12_33(const double ae,
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
    const double C31566 = zA - zB;
    const double C31575 = 0 * be;
    const double C31635 = 0 * ae;
    const double C31630 = 0 * be;
    const double C31629 = 0 * be;
    const double C31714 = 0 * be;
    const double C31790 = p + q;
    const double C31789 = p * q;
    const double C31796 = bs[3];
    const double C31795 = zP - zQ;
    const double C31803 = bs[4];
    const double C31801 = xP - xQ;
    const double C31811 = bs[5];
    const double C31820 = bs[6];
    const double C31831 = bs[7];
    const double C31868 = bs[2];
    const double C31944 = yP - yQ;
    const double C115 = bs[0];
    const double C32766 = xA - xB;
    const double C32801 = ce + de;
    const double C32800 = ce * de;
    const double C32799 = xC - xD;
    const double C32813 = yC - yD;
    const double C32827 = zC - zD;
    const double C32851 = yA - yB;
    const double C31576 = std::pow(C31568, 2);
    const double C31608 = 2 * C31568;
    const double C31583 = 2 * C31567;
    const double C31577 = C31567 * C31566;
    const double C32869 = std::pow(C31566, 2);
    const double C32952 = C31566 * be;
    const double C32950 = C31566 * ae;
    const double C31632 = C31566 * C31575;
    const double C31631 = C31575 / C31568;
    const double C31678 = -2 * C31575;
    const double C31642 = C31635 / C31568;
    const double C31637 = C31566 * C31630;
    const double C31677 = -2 * C31630;
    const double C31715 = C31714 / C31568;
    const double C31791 = 2 * C31789;
    const double C31798 = std::pow(C31795, 2);
    const double C31854 = C31795 * ae;
    const double C31853 = C31795 * be;
    const double C31813 = std::pow(C31801, 2);
    const double C31954 = std::pow(C31944, 2);
    const double C32769 = C32766 * be;
    const double C32768 = C32766 * ae;
    const double C32767 = std::pow(C32766, 2);
    const double C33076 = 2 * C32801;
    const double C33075 = std::pow(C32801, 2);
    const double C32802 = std::pow(C32799, 2);
    const double C33074 = C32799 * ce;
    const double C32814 = std::pow(C32813, 2);
    const double C33077 = C32813 * ce;
    const double C32828 = std::pow(C32827, 2);
    const double C33078 = C32827 * ce;
    const double C32852 = std::pow(C32851, 2);
    const double C32910 = C32851 * be;
    const double C32908 = C32851 * ae;
    const double C31578 = 2 * C31576;
    const double C31719 = 4 * C31576;
    const double C31676 = C31576 * C31608;
    const double C32781 = std::pow(C31608, -1);
    const double C33070 = std::pow(C31608, -2);
    const double C32870 = C32869 * C31567;
    const double C33081 = std::pow(C32950, 2);
    const double C31640 = C31632 / C31568;
    const double C31687 = ae * C31678;
    const double C31643 = C31637 / C31568;
    const double C31686 = ae * C31677;
    const double C31793 = C31791 / C31790;
    const double C136 =
        ((std::pow(zP - zQ, 2) * bs[2] * std::pow(C31791 / C31790, 2) -
          (bs[1] * C31791) / C31790) *
         C31567) /
        C31576;
    const double C116 = -(C31801 * bs[1] * C31791) / C31790;
    const double C253 = -(C31944 * bs[1] * C31791) / C31790;
    const double C358 = -(C31795 * bs[1] * C31791) / C31790;
    const double C31805 = C31798 * C31803;
    const double C31814 = C31798 * C31811;
    const double C31822 = C31798 * C31820;
    const double C31834 = C31798 * C31831;
    const double C31856 = C31811 * C31854;
    const double C31861 = C31803 * C31854;
    const double C31872 = C31796 * C31854;
    const double C31892 = C31820 * C31854;
    const double C31918 = C31831 * C31854;
    const double C123 = (-(bs[1] * C31854 * C31791) / C31790) / C31568;
    const double C31855 = C31811 * C31853;
    const double C31860 = C31803 * C31853;
    const double C31871 = C31796 * C31853;
    const double C31888 = C31820 * C31853;
    const double C31912 = C31831 * C31853;
    const double C122 = (-(bs[1] * C31853 * C31791) / C31790) / C31568;
    const double C33063 = std::pow(C32768, 2);
    const double C32770 = C32767 * C31567;
    const double C33110 = std::pow(C33076, -2);
    const double C33108 = std::pow(C33076, -1);
    const double C32803 = C32802 * C32800;
    const double C32815 = C32814 * C32800;
    const double C32829 = C32828 * C32800;
    const double C32853 = C32852 * C31567;
    const double C33079 = std::pow(C32908, 2);
    const double C31634 = C31575 / C31578;
    const double C31639 = C31630 / C31578;
    const double C31638 = C31629 / C31578;
    const double C31721 = C31568 * C31719;
    const double C33073 = 4 * C31676;
    const double C32871 = C32870 / C31568;
    const double C31644 = 0 - C31640;
    const double C31692 = C31687 / C31676;
    const double C31691 = C31566 * C31687;
    const double C31647 = 0 - C31643;
    const double C31690 = C31686 / C31676;
    const double C31797 = -C31793;
    const double C31804 = std::pow(C31793, 4);
    const double C31821 = std::pow(C31793, 6);
    const double C31867 = std::pow(C31793, 2);
    const double C137 = ((xP - xQ) *
                         (bs[2] * std::pow(C31793, 2) +
                          std::pow(zP - zQ, 2) * bs[3] * std::pow(-C31793, 3)) *
                         C31567) /
                        C31576;
    const double C32771 = C32770 / C31568;
    const double C32804 = C32803 / C32801;
    const double C32816 = C32815 / C32801;
    const double C32830 = C32829 / C32801;
    const double C32854 = C32853 / C31568;
    const double C32872 = -C32871;
    const double C31648 = C31644 * ae;
    const double C31695 = C31691 / C31576;
    const double C31652 = C31647 * ae;
    const double C31799 = std::pow(C31797, 3);
    const double C31812 = std::pow(C31797, 5);
    const double C31832 = std::pow(C31797, 7);
    const double C31806 = C31805 * C31804;
    const double C31810 = C31803 * C31804;
    const double C31863 = C31804 * C31861;
    const double C31862 = C31804 * C31860;
    const double C31823 = C31822 * C31821;
    const double C31830 = C31820 * C31821;
    const double C31898 = C31821 * C31892;
    const double C31894 = C31821 * C31888;
    const double C31870 = C31868 * C31867;
    const double C124 = (C31801 * C31867 * C31868 * C31853) / C31568;
    const double C125 = (C31801 * C31867 * C31868 * C31854) / C31568;
    const double C267 = (C31944 * C31867 * C31868 * C31853) / C31568;
    const double C268 = (C31944 * C31867 * C31868 * C31854) / C31568;
    const double C372 = (C31795 * C31867 * C31868 * C31853) / C31568 -
                        (be * bs[1] * C31791) / (C31790 * C31568);
    const double C373 = (C31795 * C31867 * C31868 * C31854) / C31568 -
                        (ae * bs[1] * C31791) / (C31790 * C31568);
    const double C32772 = -C32771;
    const double C32805 = -C32804;
    const double C32817 = -C32816;
    const double C32831 = -C32830;
    const double C32855 = -C32854;
    const double C32873 = std::exp(C32872);
    const double C31653 = C31648 / C31568;
    const double C31656 = C31652 / C31568;
    const double C31802 = C31796 * C31799;
    const double C31874 = C31799 * C31872;
    const double C31873 = C31799 * C31871;
    const double C138 =
        ((bs[2] * std::pow(C31793, 2) + C31798 * C31796 * C31799) * C31567 +
         (C31796 * C31799 + C31798 * bs[4] * std::pow(C31793, 4)) * C31567 *
             std::pow(xP - xQ, 2)) /
        C31576;
    const double C283 =
        ((yP - yQ) * (bs[2] * std::pow(C31793, 2) + C31798 * C31796 * C31799) *
         C31567) /
        C31576;
    const double C388 =
        (ae * C31867 * C31868 * C31853 + be * C31867 * C31868 * C31854 +
         C31795 * (C31868 * C31867 + C31798 * C31796 * C31799) * C31567) /
        C31576;
    const double C31815 = C31814 * C31812;
    const double C31819 = C31811 * C31812;
    const double C31858 = C31812 * C31856;
    const double C31857 = C31812 * C31855;
    const double C31835 = C31834 * C31832;
    const double C31924 = C31832 * C31918;
    const double C31920 = C31832 * C31912;
    const double C31881 = C31810 * C31813;
    const double C31889 = C31801 * C31810;
    const double C31966 = C31810 * C31954;
    const double C32031 = C31810 * ae;
    const double C32029 = C31810 * C31798;
    const double C32028 = C31795 * C31810;
    const double C32027 = C31810 * be;
    const double C32106 = C31944 * C31810;
    const double C31878 = C31801 * C31863;
    const double C31963 = C31944 * C31863;
    const double C32018 = C31795 * C31863;
    const double C32024 = be * C31863;
    const double C31876 = C31801 * C31862;
    const double C31961 = C31944 * C31862;
    const double C32015 = C31795 * C31862;
    const double C32023 = ae * C31862;
    const double C31915 = C31830 * C31813;
    const double C32172 = C31830 * C31954;
    const double C32258 = C31801 * C31830;
    const double C32351 = C31830 * ae;
    const double C32345 = C31830 * C31798;
    const double C32344 = C31795 * C31830;
    const double C32343 = C31830 * be;
    const double C32470 = C31944 * C31830;
    const double C31901 = C31898 * C31813;
    const double C31917 = C31801 * C31898;
    const double C32156 = C31898 * C31954;
    const double C32174 = C31944 * C31898;
    const double C32302 = C31795 * C31898;
    const double C32338 = be * C31898;
    const double C31899 = C31894 * C31813;
    const double C31911 = C31801 * C31894;
    const double C32152 = C31894 * C31954;
    const double C32168 = C31944 * C31894;
    const double C32296 = C31795 * C31894;
    const double C32337 = ae * C31894;
    const double C117 = C31870 * C31813 - (bs[1] * C31791) / C31790;
    const double C252 = C31944 * C31801 * C31870;
    const double C254 = C31870 * C31954 - (bs[1] * C31791) / C31790;
    const double C357 = C31795 * C31801 * C31870;
    const double C359 = C31870 * C31798 - (bs[1] * C31791) / C31790;
    const double C718 = C31795 * C31944 * C31870;
    const double C32773 = std::exp(C32772);
    const double C32806 = std::exp(C32805);
    const double C32818 = std::exp(C32817);
    const double C32832 = std::exp(C32831);
    const double C32856 = std::exp(C32855);
    const double C147 = C32873 * C137;
    const double C31579 = C31577 * C32873;
    const double C113 = -(2 * ae * be * (zA - zB) * C32873) / (ae + be);
    const double C114 =
        -((C32873 - (C31566 * 2 * C31567 * C31566 * C32873) / C31568) * 2 *
          C31567) /
        C31568;
    const double C32951 = C32873 / C31608;
    const double C32953 = C32873 * C32950;
    const double C32960 = C32781 * C32873;
    const double C33093 = C32873 * C32952;
    const double C33118 = C33070 * C32873;
    const double C33116 = C32873 * C33081;
    const double C31657 = C31653 - C31639;
    const double C31660 = C31656 - C31638;
    const double C31807 = C31802 + C31806;
    const double C31877 = C31801 * C31802;
    const double C31962 = C31944 * C31802;
    const double C32019 = C31802 * ae;
    const double C32017 = C31795 * C31802;
    const double C32016 = C31802 * be;
    const double C118 =
        2 * C31801 * C31870 + C31801 * (C31870 + C31802 * C31813);
    const double C251 = C31944 * (C31870 + C31802 * C31813);
    const double C356 = C31795 * (C31870 + C31802 * C31813);
    const double C998 =
        2 * C31944 * C31870 + C31944 * (C31870 + C31802 * C31954);
    const double C1167 = C31795 * (C31870 + C31802 * C31954);
    const double C2120 =
        2 * C31795 * C31870 + C31795 * (C31870 + C31802 * C31798);
    const double C127 = (C31867 * C31868 * C31854 + C31874 * C31813) / C31568;
    const double C129 =
        (2 * C31801 * C31874 + C31801 * (C31874 + C31863 * C31813)) / C31568;
    const double C264 = (C31944 * (C31874 + C31863 * C31813)) / C31568;
    const double C266 = (C31944 * C31801 * C31874) / C31568;
    const double C270 = (C31867 * C31868 * C31854 + C31874 * C31954) / C31568;
    const double C369 = (C31795 * (C31874 + C31863 * C31813) +
                         (C31870 + C31802 * C31813) * ae) /
                        C31568;
    const double C371 =
        (C31795 * C31801 * C31874 + C31801 * C31870 * ae) / C31568;
    const double C375 =
        (C31867 * C31868 * C31854 + C31795 * (C31795 * C31874 + C31870 * ae) +
         C31795 * C31870 * ae) /
        C31568;
    const double C724 =
        (C31795 * C31944 * C31874 + C31944 * C31870 * ae) / C31568;
    const double C1007 =
        (2 * C31944 * C31874 + C31944 * (C31874 + C31863 * C31954)) / C31568;
    const double C1179 = (C31795 * (C31874 + C31863 * C31954) +
                          (C31870 + C31802 * C31954) * ae) /
                         C31568;
    const double C126 = (C31867 * C31868 * C31853 + C31873 * C31813) / C31568;
    const double C128 =
        (2 * C31801 * C31873 + C31801 * (C31873 + C31862 * C31813)) / C31568;
    const double C263 = (C31944 * (C31873 + C31862 * C31813)) / C31568;
    const double C265 = (C31944 * C31801 * C31873) / C31568;
    const double C269 = (C31867 * C31868 * C31853 + C31873 * C31954) / C31568;
    const double C368 = (C31795 * (C31873 + C31862 * C31813) +
                         (C31870 + C31802 * C31813) * be) /
                        C31568;
    const double C370 =
        (C31795 * C31801 * C31873 + C31801 * C31870 * be) / C31568;
    const double C374 =
        (C31867 * C31868 * C31853 + C31795 * (C31795 * C31873 + C31870 * be) +
         C31795 * C31870 * be) /
        C31568;
    const double C723 =
        (C31795 * C31944 * C31873 + C31944 * C31870 * be) / C31568;
    const double C1006 =
        (2 * C31944 * C31873 + C31944 * (C31873 + C31862 * C31954)) / C31568;
    const double C1178 = (C31795 * (C31873 + C31862 * C31954) +
                          (C31870 + C31802 * C31954) * be) /
                         C31568;
    const double C151 = C32873 * C138;
    const double C1024 = C32873 * C283;
    const double C31816 = C31810 + C31815;
    const double C31824 = C31819 + C31823;
    const double C31890 = C31819 * C31813;
    const double C31914 = C31801 * C31819;
    const double C32154 = C31819 * C31954;
    const double C32171 = C31944 * C31819;
    const double C32303 = C31819 * ae;
    const double C32299 = C31819 * C31798;
    const double C32298 = C31795 * C31819;
    const double C32297 = C31819 * be;
    const double C31882 = C31858 * C31813;
    const double C31891 = C31801 * C31858;
    const double C31967 = C31858 * C31954;
    const double C32030 = C31795 * C31858;
    const double C32107 = C31944 * C31858;
    const double C32293 = be * C31858;
    const double C31880 = C31857 * C31813;
    const double C31887 = C31801 * C31857;
    const double C31965 = C31857 * C31954;
    const double C32026 = C31795 * C31857;
    const double C32105 = C31944 * C31857;
    const double C32292 = ae * C31857;
    const double C31836 = C31830 + C31835;
    const double C31927 = C31924 * C31813;
    const double C32175 = C31924 * C31954;
    const double C32260 = C31801 * C31924;
    const double C32350 = C31795 * C31924;
    const double C32473 = C31944 * C31924;
    const double C31925 = C31920 * C31813;
    const double C32169 = C31920 * C31954;
    const double C32256 = C31801 * C31920;
    const double C32342 = C31795 * C31920;
    const double C32469 = C31944 * C31920;
    const double C31884 = C31802 + C31881;
    const double C31895 = 2 * C31889;
    const double C31973 = C31944 * C31889;
    const double C32011 = C31889 * ae;
    const double C32009 = C31795 * C31889;
    const double C32008 = C31889 * be;
    const double C31969 = C31802 + C31966;
    const double C32035 = C31802 + C32029;
    const double C32037 = C32028 * ae;
    const double C32034 = C32028 * be;
    const double C32300 = 2 * C32028;
    const double C32112 = C32106 * ae;
    const double C32110 = C31795 * C32106;
    const double C32109 = C32106 * be;
    const double C32153 = 2 * C32106;
    const double C272 = (C31801 * C31874 + C31878 * C31954) / C31568;
    const double C271 = (C31801 * C31873 + C31876 * C31954) / C31568;
    const double C32032 = C32023 + C32024;
    const double C31922 = C31819 + C31915;
    const double C32179 = C31819 + C32172;
    const double C32262 = C32258 * C31954;
    const double C32398 = C31944 * C32258;
    const double C32434 = C32258 * ae;
    const double C32430 = C32258 * C31798;
    const double C32429 = C31795 * C32258;
    const double C32428 = C32258 * be;
    const double C32357 = C31819 + C32345;
    const double C32359 = C32344 * ae;
    const double C32356 = C32344 * be;
    const double C32482 = C32470 * ae;
    const double C32480 = C32470 * C31798;
    const double C32479 = C31795 * C32470;
    const double C32478 = C32470 * be;
    const double C31904 = C31858 + C31901;
    const double C31923 = 2 * C31917;
    const double C31978 = C31917 * C31954;
    const double C32053 = C31795 * C31917;
    const double C32119 = C31944 * C31917;
    const double C32424 = be * C31917;
    const double C32159 = C31858 + C32156;
    const double C32180 = 2 * C32174;
    const double C32216 = C31795 * C32174;
    const double C32466 = be * C32174;
    const double C31902 = C31857 + C31899;
    const double C31919 = 2 * C31911;
    const double C31976 = C31911 * C31954;
    const double C32049 = C31795 * C31911;
    const double C32117 = C31944 * C31911;
    const double C32423 = ae * C31911;
    const double C32157 = C31857 + C32152;
    const double C32176 = 2 * C32168;
    const double C32212 = C31795 * C32168;
    const double C32465 = ae * C32168;
    const double C32354 = C32337 + C32338;
    const double C32775 = C32773 * C32768;
    const double C32774 = C32773 / C31608;
    const double C32783 = C32781 * C32773;
    const double C33066 = C32773 * C32769;
    const double C33106 = C33070 * C32773;
    const double C33100 = C32773 * C33063;
    const double C33109 = C32806 * C33074;
    const double C110 =
        (C32806 * std::pow(C33074, 2)) / C33075 + C32806 / C33076;
    const double C112 = C33110 * C32806;
    const double C479 = C33108 * C32806;
    const double C33111 = C32818 * C33077;
    const double C245 =
        (C32818 * std::pow(C33077, 2)) / C33075 + C32818 / C33076;
    const double C247 = C33110 * C32818;
    const double C477 = C33108 * C32818;
    const double C33112 = C32832 * C33078;
    const double C351 =
        (C32832 * std::pow(C33078, 2)) / C33075 + C32832 / C33076;
    const double C353 = C33110 * C32832;
    const double C599 = C33108 * C32832;
    const double C32909 = C32856 / C31608;
    const double C32911 = C32856 * C32908;
    const double C32918 = C32781 * C32856;
    const double C33086 = C32856 * C32910;
    const double C33115 = C33070 * C32856;
    const double C33113 = C32856 * C33079;
    const double C31582 = 2 * C31579;
    const double C31636 = C31579 / C31576;
    const double C31680 = -4 * C31579;
    const double C1830 = ((0 * ae) / C31568 - C31579 / C31576) / (2 * C31568) +
                         (0 * ae) / C31568;
    const double C3505 = (0 * ae) / C31568 - C31579 / C31576;
    const double C146 = C113 * C125;
    const double C144 = C113 * C124;
    const double C1023 = C113 * C268;
    const double C1021 = C113 * C267;
    const double C149 = C114 * C117;
    const double C145 = C114 * C116;
    const double C498 = C114 * C252;
    const double C618 = C114 * C357;
    const double C1026 = C114 * C254;
    const double C1022 = C114 * C253;
    const double C1705 = C114 * C718;
    const double C10199 = (C32873 * std::pow(C32952, 2)) / C31576 + C32951;
    const double C32954 = C32953 * C32952;
    const double C32959 = C32953 / C31578;
    const double C33085 = C32953 / C31568;
    const double C33082 = C32781 * C32953;
    const double C32961 = C32960 * C32952;
    const double C33099 = C32960 / C31719;
    const double C33097 = C32950 * C32960;
    const double C33096 = 2 * C32960;
    const double C11978 = C32960 / C33073;
    const double C24261 = C32960 / C31608;
    const double C33125 = C33093 / C31568;
    const double C10200 = (-2 * C32781 * C33093) / C31568;
    const double C33136 = C33116 / C31576;
    const double C31662 = C31657 / C31608;
    const double C31661 = C31566 * C31657;
    const double C31679 = 2 * C31657;
    const double C31665 = C31660 + C31631;
    const double C31808 = C31807 * C31567;
    const double C376 =
        (C31801 * C31873 + C31795 * (C31795 * C31876 + C31877 * be) +
         C31795 * C31877 * be) /
        C31568;
    const double C377 =
        (C31801 * C31874 + C31795 * (C31795 * C31878 + C31877 * ae) +
         C31795 * C31877 * ae) /
        C31568;
    const double C725 =
        (C31795 * C31944 * C31876 + C31944 * C31877 * be) / C31568;
    const double C726 =
        (C31795 * C31944 * C31878 + C31944 * C31877 * ae) / C31568;
    const double C255 = C31801 * C31870 + C31877 * C31954;
    const double C360 = C31801 * C31870 + C31877 * C31798;
    const double C719 = C31795 * C31944 * C31877;
    const double C997 =
        2 * C31944 * C31877 + C31944 * (C31877 + C31889 * C31954);
    const double C1166 = C31795 * (C31877 + C31889 * C31954);
    const double C2119 =
        2 * C31795 * C31877 + C31795 * (C31877 + C31889 * C31798);
    const double C1180 =
        (C31944 * C31873 + C31795 * (C31795 * C31961 + C31962 * be) +
         C31795 * C31962 * be) /
        C31568;
    const double C1181 =
        (C31944 * C31874 + C31795 * (C31795 * C31963 + C31962 * ae) +
         C31795 * C31962 * ae) /
        C31568;
    const double C1168 = C31944 * C31870 + C31962 * C31798;
    const double C2672 =
        2 * C31795 * C31962 + C31795 * (C31962 + C32106 * C31798);
    const double C32021 = C32018 + C32019;
    const double C32020 = C32015 + C32016;
    const double C153 = C114 * C118;
    const double C494 = C114 * C251;
    const double C614 = C114 * C356;
    const double C1038 = C114 * C998;
    const double C1701 = C114 * C1167;
    const double C150 = C113 * C127;
    const double C154 = C113 * C129;
    const double C495 = C113 * C264;
    const double C499 = C113 * C266;
    const double C1027 = C113 * C270;
    const double C615 = C113 * C369;
    const double C619 = C113 * C371;
    const double C1706 = C113 * C724;
    const double C1039 = C113 * C1007;
    const double C1702 = C113 * C1179;
    const double C148 = C113 * C126;
    const double C152 = C113 * C128;
    const double C493 = C113 * C263;
    const double C497 = C113 * C265;
    const double C1025 = C113 * C269;
    const double C613 = C113 * C368;
    const double C617 = C113 * C370;
    const double C1704 = C113 * C723;
    const double C1037 = C113 * C1006;
    const double C1700 = C113 * C1178;
    const double C31817 = C31816 * C31567;
    const double C31825 = C31824 * C31567;
    const double C31896 = C31810 + C31890;
    const double C31921 = 2 * C31914;
    const double C31977 = C31914 * C31954;
    const double C32054 = C31914 * ae;
    const double C32052 = C31914 * C31798;
    const double C32051 = C31795 * C31914;
    const double C32050 = C31914 * be;
    const double C32118 = C31944 * C31914;
    const double C32158 = C31810 + C32154;
    const double C32178 = 2 * C32171;
    const double C32217 = C32171 * ae;
    const double C32215 = C32171 * C31798;
    const double C32214 = C31795 * C32171;
    const double C32213 = C32171 * be;
    const double C32309 = C32302 + C32303;
    const double C32308 = C31810 + C32299;
    const double C32310 = C32298 * ae;
    const double C32307 = C32298 * be;
    const double C32346 = 2 * C32298;
    const double C32306 = C32296 + C32297;
    const double C31885 = C31863 + C31882;
    const double C31897 = 2 * C31891;
    const double C31974 = C31944 * C31891;
    const double C32010 = C31795 * C31891;
    const double C32047 = be * C31891;
    const double C1005 =
        (2 * C31944 * C31878 + C31944 * (C31878 + C31891 * C31954)) / C31568;
    const double C1177 = (C31795 * (C31878 + C31891 * C31954) +
                          (C31877 + C31889 * C31954) * ae) /
                         C31568;
    const double C31970 = C31863 + C31967;
    const double C32036 = C32030 + C32031;
    const double C32111 = C31795 * C32107;
    const double C32155 = 2 * C32107;
    const double C32210 = be * C32107;
    const double C31883 = C31862 + C31880;
    const double C31893 = 2 * C31887;
    const double C31972 = C31944 * C31887;
    const double C32007 = C31795 * C31887;
    const double C32046 = ae * C31887;
    const double C1004 =
        (2 * C31944 * C31876 + C31944 * (C31876 + C31887 * C31954)) / C31568;
    const double C1176 = (C31795 * (C31876 + C31887 * C31954) +
                          (C31877 + C31889 * C31954) * be) /
                         C31568;
    const double C31968 = C31862 + C31965;
    const double C32033 = C32026 + C32027;
    const double C32108 = C31795 * C32105;
    const double C32151 = 2 * C32105;
    const double C32209 = ae * C32105;
    const double C32305 = C32292 + C32293;
    const double C31837 = C31836 * C31567;
    const double C31930 = C31898 + C31927;
    const double C32181 = C31898 + C32175;
    const double C32263 = C32260 * C31954;
    const double C32399 = C31944 * C32260;
    const double C32433 = C31795 * C32260;
    const double C32358 = C32350 + C32351;
    const double C32481 = C31795 * C32473;
    const double C31928 = C31894 + C31925;
    const double C32177 = C31894 + C32169;
    const double C32261 = C32256 * C31954;
    const double C32397 = C31944 * C32256;
    const double C32427 = C31795 * C32256;
    const double C32355 = C32342 + C32343;
    const double C32477 = C31795 * C32469;
    const double C119 = 3 * (C31870 + C31802 * C31813) +
                        C31801 * (2 * C31877 + C31801 * C31884);
    const double C250 = C31944 * (2 * C31877 + C31801 * C31884);
    const double C256 = C31870 + C31802 * C31813 + C31884 * C31954;
    const double C355 = C31795 * (2 * C31877 + C31801 * C31884);
    const double C361 = C31870 + C31802 * C31813 + C31884 * C31798;
    const double C720 = C31795 * C31944 * C31884;
    const double C1170 = C31944 * C31877 + C31973 * C31798;
    const double C999 = 3 * (C31870 + C31802 * C31954) +
                        C31944 * (2 * C31962 + C31944 * C31969);
    const double C1169 = C31870 + C31802 * C31954 + C31969 * C31798;
    const double C1687 = C31795 * (2 * C31962 + C31944 * C31969);
    const double C2121 = 3 * (C31870 + C31802 * C31798) +
                         C31795 * (2 * C32017 + C31795 * C32035);
    const double C859 = C113 * C272;
    const double C857 = C113 * C271;
    const double C31926 = C31801 * C31922;
    const double C31988 = C31922 * C31954;
    const double C32077 = C31922 * ae;
    const double C32075 = C31922 * C31798;
    const double C32074 = C31795 * C31922;
    const double C32073 = C31922 * be;
    const double C32130 = C31944 * C31922;
    const double C32183 = C31944 * C32179;
    const double C32240 = C32179 * ae;
    const double C32238 = C32179 * C31798;
    const double C32237 = C31795 * C32179;
    const double C32236 = C32179 * be;
    const double C32265 = C31914 + C32262;
    const double C32407 = C32398 * ae;
    const double C32405 = C32398 * C31798;
    const double C32404 = C31795 * C32398;
    const double C32403 = C32398 * be;
    const double C32439 = C31914 + C32430;
    const double C32441 = C32429 * ae;
    const double C32438 = C32429 * be;
    const double C32367 = C32357 * ae;
    const double C32365 = C31795 * C32357;
    const double C32364 = C32357 * be;
    const double C32487 = C32171 + C32480;
    const double C32489 = C32479 * ae;
    const double C32486 = C32479 * be;
    const double C31906 = C31801 * C31904;
    const double C31916 = 3 * C31904;
    const double C31985 = C31944 * C31904;
    const double C32002 = C31795 * C31904;
    const double C32070 = be * C31904;
    const double C31981 = C31891 + C31978;
    const double C32123 = C31795 * C32119;
    const double C32259 = 2 * C32119;
    const double C32395 = be * C32119;
    const double C32162 = C31944 * C32159;
    const double C32173 = 3 * C32159;
    const double C32204 = C31795 * C32159;
    const double C32233 = be * C32159;
    const double C31905 = C31801 * C31902;
    const double C31910 = 3 * C31902;
    const double C31983 = C31944 * C31902;
    const double C31999 = C31795 * C31902;
    const double C32069 = ae * C31902;
    const double C31979 = C31887 + C31976;
    const double C32120 = C31795 * C32117;
    const double C32255 = 2 * C32117;
    const double C32394 = ae * C32117;
    const double C32436 = C32423 + C32424;
    const double C32160 = C31944 * C32157;
    const double C32167 = 3 * C32157;
    const double C32201 = C31795 * C32157;
    const double C32232 = ae * C32157;
    const double C32475 = C32465 + C32466;
    const double C32776 = C32775 * C32769;
    const double C32782 = C32775 / C31578;
    const double C33067 = C32781 * C32775;
    const double C33065 = C32775 / C31568;
    const double C851 = (C32773 * std::pow(C32769, 2)) / C31576 + C32774;
    const double C32784 = C32783 * C32769;
    const double C33084 = C32783 / C31719;
    const double C33071 = C32768 * C32783;
    const double C33069 = 2 * C32783;
    const double C107 = C32783 / C33073;
    const double C17578 = C32783 / C31608;
    const double C33102 = C33066 / C31568;
    const double C852 = (-2 * C32781 * C33066) / C31568;
    const double C33129 = C33100 / C31576;
    const double C111 = (2 * C33108 * C33109) / C32801;
    const double C478 = C33109 / C32801;
    const double C246 = (2 * C33108 * C33111) / C32801;
    const double C476 = C33111 / C32801;
    const double C352 = (2 * C33108 * C33112) / C32801;
    const double C598 = C33112 / C32801;
    const double C5472 = (C32856 * std::pow(C32910, 2)) / C31576 + C32909;
    const double C32912 = C32911 * C32910;
    const double C32917 = C32911 / C31578;
    const double C33083 = C32911 / C31568;
    const double C33080 = C32781 * C32911;
    const double C32919 = C32918 * C32910;
    const double C33092 = C32918 / C31719;
    const double C33090 = C32908 * C32918;
    const double C33089 = 2 * C32918;
    const double C6225 = C32918 / C33073;
    const double C17575 = C32918 / C31608;
    const double C33120 = C33086 / C31568;
    const double C5473 = (-2 * C32781 * C33086) / C31568;
    const double C33134 = C33113 / C31576;
    const double C31584 = C31566 * C31582;
    const double C10206 =
        ((-C31582 / C31568) / C31608 - (0 * be) / C31568) / C31608 -
        (0 * be) / C31568;
    const double C20405 = (-C31582 / C31568) / C31608 - (0 * be) / C31568;
    const double C31646 = C31642 - C31636;
    const double C31688 = C31680 / C31568;
    const double C3522 = C3505 * C369;
    const double C3520 = C3505 * C368;
    const double C3514 = C3505 * C371;
    const double C3512 = C3505 * C370;
    const double C4560 = C3505 * C1179;
    const double C4558 = C3505 * C1178;
    const double C4540 = C3505 * C724;
    const double C4538 = C3505 * C723;
    const double C164 = C144 - C145;
    const double C1041 = C1021 - C1022;
    const double C10224 = C10199 * C138;
    const double C10212 = C10199 * C137;
    const double C11240 = C10199 * C283;
    const double C32955 = C32954 / C31576;
    const double C3519 = C33085 * C138;
    const double C3511 = C33085 * C137;
    const double C4537 = C33085 * C283;
    const double C1826 =
        (((0 - (C31566 * C31575) / C31568) * ae) / C31568 - (0 * be) / C31578) /
            (2 * C31568) +
        ((C31566 * (((C32873 - (C31566 * 2 * C31579) / C31568) * ae) / C31568 -
                    C31575 / C31578) +
          C33085) *
         ae) /
            C31568 +
        (0 * ae) / C31568 - C31579 / C31576;
    const double C33117 = 2 * C33082;
    const double C32962 = C32961 / C31568;
    const double C33128 = C33097 / C31578;
    const double C33141 = C33085 - C33125;
    const double C20401 = -C33125;
    const double C33148 = C33136 + C32951;
    const double C31666 = C31661 + 0;
    const double C31698 = C31695 + C31679;
    const double C31669 = C31665 / C31608;
    const double C139 =
        (2 * C31801 * C31808 +
         C31801 * (C31808 +
                   (C31803 * C31804 + C31798 * bs[5] * std::pow(C31797, 5)) *
                       C31567 * std::pow(C31801, 2))) /
        C31576;
    const double C282 = ((yP - yQ) * C31801 * C31808) / C31576;
    const double C284 =
        ((bs[2] * std::pow(C31793, 2) + C31798 * C31796 * C31799) * C31567 +
         C31808 * std::pow(yP - yQ, 2)) /
        C31576;
    const double C387 =
        (ae * C31801 * C31799 * C31796 * C31853 +
         be * C31801 * C31799 * C31796 * C31854 + C31795 * C31801 * C31808) /
        C31576;
    const double C389 =
        ((C31870 + C31798 * C31796 * C31799) * C31567 +
         ae * (C31795 * C31873 + C31870 * be) +
         be * (C31795 * C31874 + C31870 * ae) +
         C31795 * (ae * C31873 + be * C31874 + C31795 * C31808)) /
        C31576;
    const double C733 = (ae * C31944 * C31873 + be * C31944 * C31874 +
                         C31795 * C31944 * C31808) /
                        C31576;
    const double C1841 = C1830 * C376;
    const double C4082 = C3505 * C376;
    const double C1843 = C1830 * C377;
    const double C4084 = C3505 * C377;
    const double C1521 = C113 * C725;
    const double C3910 = C3505 * C725;
    const double C1523 = C113 * C726;
    const double C3912 = C3505 * C726;
    const double C858 = C114 * C255;
    const double C1522 = C114 * C719;
    const double C1034 = C114 * C997;
    const double C1518 = C114 * C1166;
    const double C5349 = C3505 * C1180;
    const double C6893 = C1830 * C1180;
    const double C5351 = C3505 * C1181;
    const double C6895 = C1830 * C1181;
    const double C2129 = (2 * (C31795 * C31874 + C31870 * ae) +
                          C31795 * (C31874 + C31795 * C32021 + C32017 * ae) +
                          (C31870 + C31802 * C31798) * ae) /
                         C31568;
    const double C2128 = (2 * (C31795 * C31873 + C31870 * be) +
                          C31795 * (C31873 + C31795 * C32020 + C32017 * be) +
                          (C31870 + C31802 * C31798) * be) /
                         C31568;
    const double C165 = C148 - C149;
    const double C166 = C152 - C153;
    const double C503 = C493 - C494;
    const double C504 = C497 - C498;
    const double C1042 = C1025 - C1026;
    const double C623 = C613 - C614;
    const double C624 = C617 - C618;
    const double C1709 = C1704 - C1705;
    const double C1045 = C1037 - C1038;
    const double C1708 = C1700 - C1701;
    const double C31951 = C31801 * C31817;
    const double C32025 = C31795 * C31817;
    const double C32104 = C31944 * C31817;
    const double C140 =
        (3 * (C31808 + C31817 * C31813) +
         C31801 * (2 * C31801 * C31817 +
                   C31801 * (C31817 + (C31811 * C31812 +
                                       C31798 * bs[6] * std::pow(C31793, 6)) *
                                          C31567 * C31813))) /
        C31576;
    const double C281 = ((yP - yQ) * (C31808 + C31817 * C31813)) / C31576;
    const double C285 =
        (C31801 * C31808 + C31801 * C31817 * std::pow(yP - yQ, 2)) / C31576;
    const double C386 = (ae * (C31799 * C31796 * C31853 + C31862 * C31813) +
                         be * (C31799 * C31796 * C31854 + C31863 * C31813) +
                         C31795 * (C31808 + C31817 * C31813)) /
                        C31576;
    const double C390 =
        (C31801 * C31808 + ae * (C31795 * C31876 + C31877 * be) +
         be * (C31795 * C31878 + C31877 * ae) +
         C31795 * (ae * C31876 + be * C31878 + C31795 * C31801 * C31817)) /
        C31576;
    const double C734 = (ae * C31944 * C31876 + be * C31944 * C31878 +
                         C31795 * C31944 * C31801 * C31817) /
                        C31576;
    const double C1016 = (2 * C31944 * C31808 +
                          C31944 * (C31808 + C31817 * std::pow(C31944, 2))) /
                         C31576;
    const double C1194 =
        (ae * (C31873 + C31862 * C31954) + be * (C31874 + C31863 * C31954) +
         C31795 * (C31808 + C31817 * C31954)) /
        C31576;
    const double C1195 =
        (C31944 * C31808 + ae * (C31795 * C31961 + C31962 * be) +
         be * (C31795 * C31963 + C31962 * ae) +
         C31795 * (ae * C31961 + be * C31963 + C31795 * C31944 * C31817)) /
        C31576;
    const double C2138 =
        (2 * (ae * C31873 + be * C31874 + C31795 * C31808) +
         ae * (C31873 + C31795 * C32020 + C32017 * be) +
         be * (C31874 + C31795 * C32021 + C32017 * ae) +
         C31795 * (C31808 + ae * C32020 + be * C32021 +
                   C31795 * (ae * C31862 + be * C31863 + C31795 * C31817))) /
        C31576;
    const double C31826 = C31825 * C31813;
    const double C31829 = C31801 * C31825;
    const double C32140 = C31825 * C31954;
    const double C32143 = C31944 * C31825;
    const double C32294 = C31795 * C31825;
    const double C1017 =
        (3 * (C31808 + C31817 * C31954) +
         C31944 * (2 * C31944 * C31817 + C31944 * (C31817 + C31825 * C31954))) /
        C31576;
    const double C31900 = C31801 * C31896;
    const double C31913 = 3 * C31896;
    const double C31984 = C31944 * C31896;
    const double C32003 = C31896 * ae;
    const double C32001 = C31795 * C31896;
    const double C32000 = C31896 * be;
    const double C996 =
        2 * C31944 * C31884 + C31944 * (C31884 + C31896 * C31954);
    const double C1165 = C31795 * (C31884 + C31896 * C31954);
    const double C2118 =
        2 * C31795 * C31884 + C31795 * (C31884 + C31896 * C31798);
    const double C31980 = C31889 + C31977;
    const double C32059 = C32053 + C32054;
    const double C32058 = C31889 + C32052;
    const double C32060 = C32051 * ae;
    const double C32057 = C32051 * be;
    const double C32431 = 2 * C32051;
    const double C32056 = C32049 + C32050;
    const double C32124 = C32118 * ae;
    const double C32122 = C31795 * C32118;
    const double C32121 = C32118 * be;
    const double C32257 = 2 * C32118;
    const double C2673 =
        2 * C31795 * C31973 + C31795 * (C31973 + C32118 * C31798);
    const double C32161 = C31944 * C32158;
    const double C32170 = 3 * C32158;
    const double C32205 = C32158 * ae;
    const double C32203 = C31795 * C32158;
    const double C32202 = C32158 * be;
    const double C7059 =
        2 * C31795 * C31969 + C31795 * (C31969 + C32158 * C31798);
    const double C32222 = C32216 + C32217;
    const double C32221 = C32106 + C32215;
    const double C32223 = C32214 * ae;
    const double C32220 = C32214 * be;
    const double C32471 = 2 * C32214;
    const double C32219 = C32212 + C32213;
    const double C32316 = C31795 * C32309;
    const double C32349 = 2 * C32309;
    const double C32336 = be * C32309;
    const double C32317 = C32308 * ae;
    const double C32315 = C31795 * C32308;
    const double C32314 = C32308 * be;
    const double C32347 = 3 * C32308;
    const double C32313 = C31795 * C32306;
    const double C32341 = 2 * C32306;
    const double C32335 = ae * C32306;
    const double C131 = (3 * (C31874 + C31863 * C31813) +
                         C31801 * (2 * C31878 + C31801 * C31885)) /
                        C31568;
    const double C262 = (C31944 * (2 * C31878 + C31801 * C31885)) / C31568;
    const double C274 = (C31874 + C31863 * C31813 + C31885 * C31954) / C31568;
    const double C367 = (C31795 * (2 * C31878 + C31801 * C31885) +
                         (2 * C31877 + C31801 * C31884) * ae) /
                        C31568;
    const double C379 =
        (C31874 + C31863 * C31813 + C31795 * (C31795 * C31885 + C31884 * ae) +
         C31795 * C31884 * ae) /
        C31568;
    const double C728 =
        (C31795 * C31944 * C31885 + C31944 * C31884 * ae) / C31568;
    const double C1003 =
        (2 * C31944 * C31885 + C31944 * (C31885 + C31904 * C31954)) / C31568;
    const double C1175 = (C31795 * (C31885 + C31904 * C31954) +
                          (C31884 + C31896 * C31954) * ae) /
                         C31568;
    const double C1185 =
        (C31944 * C31878 + C31795 * (C31795 * C31974 + C31973 * ae) +
         C31795 * C31973 * ae) /
        C31568;
    const double C32013 = C32010 + C32011;
    const double C1035 = C113 * C1005;
    const double C1519 = C113 * C1177;
    const double C4552 = C3505 * C1177;
    const double C1009 = (3 * (C31874 + C31863 * C31954) +
                          C31944 * (2 * C31963 + C31944 * C31970)) /
                         C31568;
    const double C1183 =
        (C31874 + C31863 * C31954 + C31795 * (C31795 * C31970 + C31969 * ae) +
         C31795 * C31969 * ae) /
        C31568;
    const double C1691 = (C31795 * (2 * C31963 + C31944 * C31970) +
                          (2 * C31962 + C31944 * C31969) * ae) /
                         C31568;
    const double C32040 = C31795 * C32036;
    const double C32301 = 2 * C32036;
    const double C32291 = be * C32036;
    const double C32114 = C32111 + C32112;
    const double C130 = (3 * (C31873 + C31862 * C31813) +
                         C31801 * (2 * C31876 + C31801 * C31883)) /
                        C31568;
    const double C261 = (C31944 * (2 * C31876 + C31801 * C31883)) / C31568;
    const double C273 = (C31873 + C31862 * C31813 + C31883 * C31954) / C31568;
    const double C366 = (C31795 * (2 * C31876 + C31801 * C31883) +
                         (2 * C31877 + C31801 * C31884) * be) /
                        C31568;
    const double C378 =
        (C31873 + C31862 * C31813 + C31795 * (C31795 * C31883 + C31884 * be) +
         C31795 * C31884 * be) /
        C31568;
    const double C727 =
        (C31795 * C31944 * C31883 + C31944 * C31884 * be) / C31568;
    const double C1002 =
        (2 * C31944 * C31883 + C31944 * (C31883 + C31902 * C31954)) / C31568;
    const double C1174 = (C31795 * (C31883 + C31902 * C31954) +
                          (C31884 + C31896 * C31954) * be) /
                         C31568;
    const double C1184 =
        (C31944 * C31876 + C31795 * (C31795 * C31972 + C31973 * be) +
         C31795 * C31973 * be) /
        C31568;
    const double C32012 = C32007 + C32008;
    const double C32055 = C32046 + C32047;
    const double C1033 = C113 * C1004;
    const double C1517 = C113 * C1176;
    const double C4550 = C3505 * C1176;
    const double C1196 =
        (C31808 + C31817 * C31954 + ae * (C31795 * C31968 + C31969 * be) +
         be * (C31795 * C31970 + C31969 * ae) +
         C31795 * (ae * C31968 + be * C31970 +
                   C31795 * (C31817 + C31825 * C31954))) /
        C31576;
    const double C1696 =
        (ae * (2 * C31961 + C31944 * C31968) +
         be * (2 * C31963 + C31944 * C31970) +
         C31795 * (2 * C31944 * C31817 + C31944 * (C31817 + C31825 * C31954))) /
        C31576;
    const double C1008 = (3 * (C31873 + C31862 * C31954) +
                          C31944 * (2 * C31961 + C31944 * C31968)) /
                         C31568;
    const double C1182 =
        (C31873 + C31862 * C31954 + C31795 * (C31795 * C31968 + C31969 * be) +
         C31795 * C31969 * be) /
        C31568;
    const double C1690 = (C31795 * (2 * C31961 + C31944 * C31968) +
                          (2 * C31962 + C31944 * C31969) * be) /
                         C31568;
    const double C32039 = C31795 * C32033;
    const double C32295 = 2 * C32033;
    const double C32290 = ae * C32033;
    const double C32113 = C32108 + C32109;
    const double C32218 = C32209 + C32210;
    const double C31838 = C31837 * C31813;
    const double C32144 = C31837 * C31954;
    const double C32195 = C31801 * C31837;
    const double C32339 = C31795 * C31837;
    const double C32467 = C31944 * C31837;
    const double C31933 = C31801 * C31930;
    const double C31989 = C31930 * C31954;
    const double C32076 = C31795 * C31930;
    const double C32131 = C31944 * C31930;
    const double C32184 = C31944 * C32181;
    const double C32239 = C31795 * C32181;
    const double C32266 = C31917 + C32263;
    const double C32406 = C31795 * C32399;
    const double C32440 = C32433 + C32434;
    const double C32366 = C31795 * C32358;
    const double C32488 = C32481 + C32482;
    const double C31931 = C31801 * C31928;
    const double C31987 = C31928 * C31954;
    const double C32072 = C31795 * C31928;
    const double C32129 = C31944 * C31928;
    const double C32182 = C31944 * C32177;
    const double C32235 = C31795 * C32177;
    const double C32264 = C31911 + C32261;
    const double C32402 = C31795 * C32397;
    const double C32437 = C32427 + C32428;
    const double C32363 = C31795 * C32355;
    const double C32485 = C32477 + C32478;
    const double C157 = C114 * C119;
    const double C490 = C114 * C250;
    const double C864 = C114 * C256;
    const double C610 = C114 * C355;
    const double C1513 = C114 * C720;
    const double C6299 = C114 * C999;
    const double C6656 = C114 * C1687;
    const double C31929 = C31921 + C31926;
    const double C31991 = C31896 + C31988;
    const double C32081 = C31896 + C32075;
    const double C32083 = C32074 * ae;
    const double C32080 = C32074 * be;
    const double C32136 = C32130 * ae;
    const double C32134 = C31795 * C32130;
    const double C32133 = C32130 * be;
    const double C32186 = C32178 + C32183;
    const double C32244 = C32158 + C32238;
    const double C32246 = C32237 * ae;
    const double C32243 = C32237 * be;
    const double C32268 = C31944 * C32265;
    const double C32278 = C32265 * ae;
    const double C32276 = C31795 * C32265;
    const double C32275 = C32265 * be;
    const double C32411 = C32118 + C32405;
    const double C32413 = C32404 * ae;
    const double C32410 = C32404 * be;
    const double C32448 = C32439 * ae;
    const double C32446 = C31795 * C32439;
    const double C32445 = C32439 * be;
    const double C32370 = C32346 + C32365;
    const double C32495 = C32487 * ae;
    const double C32493 = C31795 * C32487;
    const double C32492 = C32487 * be;
    const double C31908 = C31897 + C31906;
    const double C1011 = (3 * (C31878 + C31891 * C31954) +
                          C31944 * (2 * C31974 + C31944 * C31981)) /
                         C31568;
    const double C32165 = C32155 + C32162;
    const double C31907 = C31893 + C31905;
    const double C32078 = C32069 + C32070;
    const double C1010 = (3 * (C31876 + C31887 * C31954) +
                          C31944 * (2 * C31972 + C31944 * C31979)) /
                         C31568;
    const double C32400 = C32394 + C32395;
    const double C32163 = C32151 + C32160;
    const double C32241 = C32232 + C32233;
    const double C32777 = C32776 / C31576;
    const double C33103 = 2 * C33067;
    const double C32785 = C32784 / C31568;
    const double C33107 = C33071 / C31578;
    const double C33130 = C33065 - C33102;
    const double C15814 = -C33102;
    const double C33144 = C33129 + C32774;
    const double C32913 = C32912 / C31576;
    const double C33114 = 2 * C33080;
    const double C32920 = C32919 / C31568;
    const double C33123 = C33090 / C31578;
    const double C33138 = C33083 - C33120;
    const double C15098 = -C33120;
    const double C33147 = C33134 + C32909;
    const double C31585 = C31584 / C31568;
    const double C10219 = C10206 * C377;
    const double C10217 = C10206 * C376;
    const double C11247 = C10206 * C1181;
    const double C11245 = C10206 * C1180;
    const double C20422 = C20405 * C369;
    const double C20420 = C20405 * C368;
    const double C20414 = C20405 * C371;
    const double C20412 = C20405 * C370;
    const double C20812 = C20405 * C726;
    const double C20810 = C20405 * C725;
    const double C20984 = C20405 * C377;
    const double C20982 = C20405 * C376;
    const double C21290 = C20405 * C1177;
    const double C21288 = C20405 * C1176;
    const double C21472 = C20405 * C1179;
    const double C21470 = C20405 * C1178;
    const double C21464 = C20405 * C724;
    const double C21462 = C20405 * C723;
    const double C22285 = C20405 * C1181;
    const double C22283 = C20405 * C1180;
    const double C31651 = C31566 * C31646;
    const double C31684 = 2 * C31646;
    const double C31713 = C31646 / C31608;
    const double C169 = C164 - C146;
    const double C1046 = C1041 - C1023;
    const double C32956 = C32951 - C32955;
    const double C1867 = C1826 * C129;
    const double C1865 = C1826 * C128;
    const double C1847 = C1826 * C127;
    const double C1845 = C1826 * C126;
    const double C1835 = C1826 * C125;
    const double C1833 = C1826 * C124;
    const double C2315 = C1826 * C266;
    const double C2313 = C1826 * C265;
    const double C2303 = C1826 * C264;
    const double C2301 = C1826 * C263;
    const double C2507 = C1826 * C371;
    const double C2505 = C1826 * C370;
    const double C2495 = C1826 * C369;
    const double C2493 = C1826 * C368;
    const double C6919 = C1826 * C1007;
    const double C6917 = C1826 * C1006;
    const double C6899 = C1826 * C270;
    const double C6897 = C1826 * C269;
    const double C6887 = C1826 * C268;
    const double C6885 = C1826 * C267;
    const double C7224 = C1826 * C272;
    const double C7222 = C1826 * C271;
    const double C7565 = C1826 * C724;
    const double C7563 = C1826 * C723;
    const double C7553 = C1826 * C1179;
    const double C7551 = C1826 * C1178;
    const double C17259 = C1826 * C726;
    const double C17257 = C1826 * C725;
    const double C33137 = C33117 / C31568;
    const double C32963 = C32959 - C32962;
    const double C33151 = C33141 / C31608;
    const double C20419 = C20401 * C138;
    const double C20411 = C20401 * C137;
    const double C21461 = C20401 * C283;
    const double C1848 = C33148 * C138;
    const double C1836 = C33148 * C137;
    const double C6888 = C33148 * C283;
    const double C31670 = C31666 * be;
    const double C31701 = C31698 * be;
    const double C155 = C32873 * C139;
    const double C1868 = C33148 * C139;
    const double C3527 = C33085 * C139;
    const double C10244 = C10199 * C139;
    const double C20427 = C20401 * C139;
    const double C500 = C32873 * C282;
    const double C2316 = C33148 * C282;
    const double C3917 = C33085 * C282;
    const double C10664 = C10199 * C282;
    const double C20817 = C20401 * C282;
    const double C1028 = C32873 * C284;
    const double C4565 = C33085 * C284;
    const double C6900 = C33148 * C284;
    const double C11252 = C10199 * C284;
    const double C21469 = C20401 * C284;
    const double C620 = C32873 * C387;
    const double C2508 = C33148 * C387;
    const double C3515 = C32960 * C387;
    const double C4089 = C33085 * C387;
    const double C10216 = C10200 * C387;
    const double C10852 = C10199 * C387;
    const double C20415 = C32960 * C387;
    const double C20989 = C20401 * C387;
    const double C1707 = C32873 * C733;
    const double C4541 = C32960 * C733;
    const double C5356 = C33085 * C733;
    const double C7566 = C33148 * C733;
    const double C11244 = C10200 * C733;
    const double C11894 = C10199 * C733;
    const double C21465 = C32960 * C733;
    const double C22290 = C20401 * C733;
    const double C873 = C857 - C858;
    const double C1529 = C1521 - C1522;
    const double C170 = C165 - C150;
    const double C171 = C166 - C154;
    const double C507 = C503 - C495;
    const double C508 = C504 - C499;
    const double C1047 = C1042 - C1027;
    const double C627 = C623 - C615;
    const double C628 = C624 - C619;
    const double C1711 = C1709 - C1706;
    const double C1050 = C1045 - C1039;
    const double C1710 = C1708 - C1702;
    const double C32038 = C32032 + C32025;
    const double C159 = C32873 * C140;
    const double C3539 = C33085 * C140;
    const double C20439 = C20401 * C140;
    const double C496 = C32873 * C281;
    const double C2304 = C33148 * C281;
    const double C3909 = C33085 * C281;
    const double C10652 = C10199 * C281;
    const double C20809 = C20401 * C281;
    const double C860 = C32873 * C285;
    const double C4557 = C33085 * C285;
    const double C7225 = C33148 * C285;
    const double C11561 = C10199 * C285;
    const double C21287 = C20401 * C285;
    const double C616 = C32873 * C386;
    const double C2496 = C33148 * C386;
    const double C3523 = C32960 * C386;
    const double C4081 = C33085 * C386;
    const double C10228 = C10200 * C386;
    const double C10840 = C10199 * C386;
    const double C20423 = C32960 * C386;
    const double C20981 = C20401 * C386;
    const double C1844 = C33118 * C390;
    const double C4085 = C32960 * C390;
    const double C10220 = C33118 * C390;
    const double C10848 = C10200 * C390;
    const double C20985 = C32960 * C390;
    const double C24280 = C24261 * C390;
    const double C1524 = C32873 * C734;
    const double C3913 = C32960 * C734;
    const double C5142 = C33085 * C734;
    const double C10660 = C10200 * C734;
    const double C13221 = C10199 * C734;
    const double C17260 = C33148 * C734;
    const double C20813 = C32960 * C734;
    const double C22068 = C20401 * C734;
    const double C1040 = C32873 * C1016;
    const double C6920 = C33148 * C1016;
    const double C8607 = C33085 * C1016;
    const double C11272 = C10199 * C1016;
    const double C21490 = C20401 * C1016;
    const double C1703 = C32873 * C1194;
    const double C4561 = C32960 * C1194;
    const double C7554 = C33148 * C1194;
    const double C9370 = C33085 * C1194;
    const double C11256 = C10200 * C1194;
    const double C11882 = C10199 * C1194;
    const double C21473 = C32960 * C1194;
    const double C22282 = C20401 * C1194;
    const double C5352 = C32960 * C1195;
    const double C6896 = C33118 * C1195;
    const double C11248 = C33118 * C1195;
    const double C11890 = C10200 * C1195;
    const double C22286 = C32960 * C1195;
    const double C25380 = C24261 * C1195;
    const double C31827 = C31817 + C31826;
    const double C31833 = 2 * C31829;
    const double C32048 = C31795 * C31829;
    const double C32116 = C31944 * C31829;
    const double C1015 = (2 * C31944 * C31951 +
                          C31944 * (C31951 + C31829 * std::pow(C31944, 2))) /
                         C31576;
    const double C1018 =
        (3 * (C31951 + C31829 * C31954) +
         C31944 * (2 * C31944 * C31829 +
                   C31944 * (C31829 + C31801 * C31837 * C31954))) /
        C31576;
    const double C1193 =
        (ae * (C31876 + C31887 * C31954) + be * (C31878 + C31891 * C31954) +
         C31795 * (C31951 + C31829 * C31954)) /
        C31576;
    const double C1197 =
        (C31944 * C31951 + ae * (C31795 * C31972 + C31973 * be) +
         be * (C31795 * C31974 + C31973 * ae) +
         C31795 * (ae * C31972 + be * C31974 + C31795 * C31944 * C31829)) /
        C31576;
    const double C1697 =
        (ae * (2 * C31972 + C31944 * C31979) +
         be * (2 * C31974 + C31944 * C31981) +
         C31795 * (2 * C31944 * C31829 +
                   C31944 * (C31829 + C31801 * C31837 * C31954))) /
        C31576;
    const double C32141 = C31817 + C32140;
    const double C32145 = 2 * C32143;
    const double C32211 = C31795 * C32143;
    const double C32312 = C32305 + C32294;
    const double C6301 = C32873 * C1017;
    const double C9581 = C33085 * C1017;
    const double C27433 = C20401 * C1017;
    const double C31903 = C31895 + C31900;
    const double C1188 =
        (C31944 * C31883 + C31795 * (C31795 * C31983 + C31984 * be) +
         C31795 * C31984 * be) /
        C31568;
    const double C1189 =
        (C31944 * C31885 + C31795 * (C31795 * C31985 + C31984 * ae) +
         C31795 * C31984 * ae) /
        C31568;
    const double C1172 = C31944 * C31884 + C31984 * C31798;
    const double C2674 =
        2 * C31795 * C31984 + C31795 * (C31984 + C32130 * C31798);
    const double C32005 = C32002 + C32003;
    const double C32004 = C31999 + C32000;
    const double C1030 = C114 * C996;
    const double C1509 = C114 * C1165;
    const double C1198 =
        (C31951 + C31829 * C31954 + ae * (C31795 * C31979 + C31980 * be) +
         be * (C31795 * C31981 + C31980 * ae) +
         C31795 * (ae * C31979 + be * C31981 +
                   C31795 * (C31829 + C31801 * C31837 * C31954))) /
        C31576;
    const double C1186 =
        (C31876 + C31887 * C31954 + C31795 * (C31795 * C31979 + C31980 * be) +
         C31795 * C31980 * be) /
        C31568;
    const double C1187 =
        (C31878 + C31891 * C31954 + C31795 * (C31795 * C31981 + C31980 * ae) +
         C31795 * C31980 * ae) /
        C31568;
    const double C1692 = (C31795 * (2 * C31972 + C31944 * C31979) +
                          (2 * C31973 + C31944 * C31980) * be) /
                         C31568;
    const double C1693 = (C31795 * (2 * C31974 + C31944 * C31981) +
                          (2 * C31973 + C31944 * C31980) * ae) /
                         C31568;
    const double C1000 = 3 * (C31877 + C31889 * C31954) +
                         C31944 * (2 * C31973 + C31944 * C31980);
    const double C1171 = C31877 + C31889 * C31954 + C31980 * C31798;
    const double C1688 = C31795 * (2 * C31973 + C31944 * C31980);
    const double C7388 =
        2 * C31795 * C31980 + C31795 * (C31980 + C32265 * C31798);
    const double C32063 = C31795 * C32059;
    const double C32432 = 2 * C32059;
    const double C32422 = be * C32059;
    const double C2122 = 3 * (C31877 + C31889 * C31798) +
                         C31795 * (2 * C32009 + C31795 * C32058);
    const double C32062 = C31795 * C32056;
    const double C32426 = 2 * C32056;
    const double C32421 = ae * C32056;
    const double C32126 = C32123 + C32124;
    const double C32125 = C32120 + C32121;
    const double C32164 = C32153 + C32161;
    const double C32207 = C32204 + C32205;
    const double C32206 = C32201 + C32202;
    const double C32226 = C31795 * C32222;
    const double C32472 = 2 * C32222;
    const double C32464 = be * C32222;
    const double C7060 = 3 * (C31962 + C32106 * C31798) +
                         C31795 * (2 * C32110 + C31795 * C32221);
    const double C32225 = C31795 * C32219;
    const double C32468 = 2 * C32219;
    const double C32463 = ae * C32219;
    const double C32321 = C31858 + C32316;
    const double C32320 = C32300 + C32315;
    const double C32319 = C31857 + C32313;
    const double C32353 = C31825 + C32335;
    const double C158 = C113 * C131;
    const double C491 = C113 * C262;
    const double C865 = C113 * C274;
    const double C611 = C113 * C367;
    const double C3530 = C3505 * C367;
    const double C20430 = C20405 * C367;
    const double C1855 = C1830 * C379;
    const double C4076 = C3505 * C379;
    const double C10231 = C10206 * C379;
    const double C20976 = C20405 * C379;
    const double C1514 = C113 * C728;
    const double C3904 = C3505 * C728;
    const double C20804 = C20405 * C728;
    const double C1031 = C113 * C1003;
    const double C1510 = C113 * C1175;
    const double C4544 = C3505 * C1175;
    const double C21294 = C20405 * C1175;
    const double C2307 = C1830 * C1185;
    const double C5137 = C3505 * C1185;
    const double C10655 = C10206 * C1185;
    const double C22063 = C20405 * C1185;
    const double C2127 = (2 * (C31795 * C31878 + C31877 * ae) +
                          C31795 * (C31878 + C31795 * C32013 + C32009 * ae) +
                          (C31877 + C31889 * C31798) * ae) /
                         C31568;
    const double C6300 = C113 * C1009;
    const double C6907 = C1830 * C1183;
    const double C9365 = C3505 * C1183;
    const double C11259 = C10206 * C1183;
    const double C22277 = C20405 * C1183;
    const double C6657 = C113 * C1691;
    const double C8602 = C3505 * C1691;
    const double C21485 = C20405 * C1691;
    const double C32042 = C31863 + C32040;
    const double C2676 = (2 * (C31795 * C31963 + C31962 * ae) +
                          C31795 * (C31963 + C31795 * C32114 + C32110 * ae) +
                          (C31962 + C32106 * C31798) * ae) /
                         C31568;
    const double C156 = C113 * C130;
    const double C489 = C113 * C261;
    const double C863 = C113 * C273;
    const double C609 = C113 * C366;
    const double C3528 = C3505 * C366;
    const double C20428 = C20405 * C366;
    const double C1853 = C1830 * C378;
    const double C4074 = C3505 * C378;
    const double C10229 = C10206 * C378;
    const double C20974 = C20405 * C378;
    const double C1512 = C113 * C727;
    const double C3902 = C3505 * C727;
    const double C20802 = C20405 * C727;
    const double C1029 = C113 * C1002;
    const double C1508 = C113 * C1174;
    const double C4542 = C3505 * C1174;
    const double C21292 = C20405 * C1174;
    const double C2305 = C1830 * C1184;
    const double C5135 = C3505 * C1184;
    const double C10653 = C10206 * C1184;
    const double C22061 = C20405 * C1184;
    const double C2137 =
        (2 * (ae * C31876 + be * C31878 + C31795 * C31951) +
         ae * (C31876 + C31795 * C32012 + C32009 * be) +
         be * (C31878 + C31795 * C32013 + C32009 * ae) +
         C31795 * (C31951 + ae * C32012 + be * C32013 +
                   C31795 * (ae * C31887 + be * C31891 + C31795 * C31829))) /
        C31576;
    const double C2126 = (2 * (C31795 * C31876 + C31877 * be) +
                          C31795 * (C31876 + C31795 * C32012 + C32009 * be) +
                          (C31877 + C31889 * C31798) * be) /
                         C31568;
    const double C1044 = C1033 - C1034;
    const double C1528 = C1517 - C1518;
    const double C6908 = C33118 * C1196;
    const double C9366 = C32960 * C1196;
    const double C11260 = C33118 * C1196;
    const double C11878 = C10200 * C1196;
    const double C22278 = C32960 * C1196;
    const double C25396 = C24261 * C1196;
    const double C6658 = C32873 * C1696;
    const double C8603 = C32960 * C1696;
    const double C10083 = C33085 * C1696;
    const double C11268 = C10200 * C1696;
    const double C21486 = C32960 * C1696;
    const double C27935 = C20401 * C1696;
    const double C6298 = C113 * C1008;
    const double C6905 = C1830 * C1182;
    const double C9363 = C3505 * C1182;
    const double C11257 = C10206 * C1182;
    const double C22275 = C20405 * C1182;
    const double C6655 = C113 * C1690;
    const double C8600 = C3505 * C1690;
    const double C21483 = C20405 * C1690;
    const double C32041 = C31862 + C32039;
    const double C32304 = C31817 + C32290;
    const double C2681 = (2 * (ae * C31961 + be * C31963 + C31795 * C32104) +
                          ae * (C31961 + C31795 * C32113 + C32110 * be) +
                          be * (C31963 + C31795 * C32114 + C32110 * ae) +
                          C31795 * (C32104 + ae * C32113 + be * C32114 +
                                    C31795 * (ae * C32105 + be * C32107 +
                                              C31795 * C31944 * C31825))) /
                         C31576;
    const double C2675 = (2 * (C31795 * C31961 + C31962 * be) +
                          C31795 * (C31961 + C31795 * C32113 + C32110 * be) +
                          (C31962 + C32106 * C31798) * be) /
                         C31568;
    const double C31839 = C31825 + C31838;
    const double C32146 = C31825 + C32144;
    const double C32196 = C32195 * C31954;
    const double C32396 = C31944 * C32195;
    const double C32425 = C31795 * C32195;
    const double C32362 = C32354 + C32339;
    const double C32476 = C31795 * C32467;
    const double C31936 = C31923 + C31933;
    const double C31992 = C31904 + C31989;
    const double C32082 = C32076 + C32077;
    const double C32135 = C31795 * C32131;
    const double C32187 = C32180 + C32184;
    const double C32245 = C32239 + C32240;
    const double C32269 = C31944 * C32266;
    const double C32277 = C31795 * C32266;
    const double C32412 = C32406 + C32407;
    const double C32447 = C31795 * C32440;
    const double C32371 = C31898 + C32366;
    const double C32494 = C31795 * C32488;
    const double C31934 = C31919 + C31931;
    const double C31990 = C31902 + C31987;
    const double C32079 = C32072 + C32073;
    const double C32132 = C31795 * C32129;
    const double C32185 = C32176 + C32182;
    const double C32242 = C32235 + C32236;
    const double C32267 = C31944 * C32264;
    const double C32274 = C31795 * C32264;
    const double C32409 = C32402 + C32403;
    const double C32444 = C31795 * C32437;
    const double C32369 = C31894 + C32363;
    const double C32491 = C31795 * C32485;
    const double C31932 = C31801 * C31929;
    const double C32093 = C31944 * C31929;
    const double C32100 = C31929 * ae;
    const double C32098 = C31795 * C31929;
    const double C32097 = C31929 * be;
    const double C1001 = 3 * (C31884 + C31896 * C31954) +
                         C31944 * (2 * C31984 + C31944 * C31991);
    const double C1173 = C31884 + C31896 * C31954 + C31991 * C31798;
    const double C1689 = C31795 * (2 * C31984 + C31944 * C31991);
    const double C2123 = 3 * (C31884 + C31896 * C31798) +
                         C31795 * (2 * C32001 + C31795 * C32081);
    const double C32189 = C31944 * C32186;
    const double C32286 = C32186 * ae;
    const double C32284 = C31795 * C32186;
    const double C32283 = C32186 * be;
    const double C7061 = 3 * (C31969 + C32158 * C31798) +
                         C31795 * (2 * C32203 + C31795 * C32244);
    const double C32271 = C32257 + C32268;
    const double C12203 = 3 * (C31973 + C32118 * C31798) +
                          C31795 * (2 * C32122 + C31795 * C32411);
    const double C32451 = C32431 + C32446;
    const double C32377 = C32370 * ae;
    const double C32375 = C31795 * C32370;
    const double C32374 = C32370 * be;
    const double C32498 = C32471 + C32493;
    const double C133 = (4 * (2 * C31878 + C31801 * C31885) +
                         C31801 * (3 * C31885 + C31801 * C31908)) /
                        C31568;
    const double C260 = (C31944 * (3 * C31885 + C31801 * C31908)) / C31568;
    const double C276 =
        (2 * C31878 + C31801 * C31885 + C31908 * C31954) / C31568;
    const double C6474 = C113 * C1011;
    const double C6292 = (4 * (2 * C31963 + C31944 * C31970) +
                          C31944 * (3 * C31970 + C31944 * C32165)) /
                         C31568;
    const double C132 = (4 * (2 * C31876 + C31801 * C31883) +
                         C31801 * (3 * C31883 + C31801 * C31907)) /
                        C31568;
    const double C259 = (C31944 * (3 * C31883 + C31801 * C31907)) / C31568;
    const double C275 =
        (2 * C31876 + C31801 * C31883 + C31907 * C31954) / C31568;
    const double C6472 = C113 * C1010;
    const double C6291 = (4 * (2 * C31961 + C31944 * C31968) +
                          C31944 * (3 * C31968 + C31944 * C32163)) /
                         C31568;
    const double C32778 = C32774 - C32777;
    const double C33131 = C33103 / C31568;
    const double C32786 = C32782 - C32785;
    const double C33145 = C33130 / C31608;
    const double C32914 = C32909 - C32913;
    const double C33135 = C33114 / C31568;
    const double C32921 = C32917 - C32920;
    const double C33149 = C33138 / C31608;
    const double C31586 = C32873 - C31585;
    const double C31655 = C31651 + C32960;
    const double C31716 = C31713 - C31715;
    const double C174 = C169 + C147;
    const double C1051 = C1046 + C1024;
    const double C24304 = C32956 * C139;
    const double C24284 = C32956 * C138;
    const double C24272 = C32956 * C137;
    const double C24724 = C32956 * C282;
    const double C24712 = C32956 * C281;
    const double C24912 = C32956 * C387;
    const double C24900 = C32956 * C386;
    const double C25404 = C32956 * C284;
    const double C25392 = C32956 * C285;
    const double C25372 = C32956 * C283;
    const double C25981 = C32956 * C734;
    const double C26196 = C32956 * C733;
    const double C30982 = C32956 * C1016;
    const double C31552 = C32956 * C1194;
    const double C33094 = C32956 * C32950;
    const double C33127 = C33096 + C32956;
    const double C1852 = C33137 * C386;
    const double C1840 = C33137 * C387;
    const double C2312 = C33137 * C734;
    const double C2504 = C33137 * C390;
    const double C6916 = C33137 * C1696;
    const double C6904 = C33137 * C1194;
    const double C6892 = C33137 * C733;
    const double C7562 = C33137 * C1195;
    const double C7550 = C33137 * C1196;
    const double C24288 = C32963 * C386;
    const double C24276 = C32963 * C387;
    const double C24720 = C32963 * C734;
    const double C24908 = C32963 * C390;
    const double C25400 = C32963 * C1194;
    const double C25376 = C32963 * C733;
    const double C26192 = C32963 * C1195;
    const double C30978 = C32963 * C1696;
    const double C31548 = C32963 * C1196;
    const double C33098 = C32963 / C31608;
    const double C33095 = C32963 * C32950;
    const double C13522 = C33151 - (C32956 * C32952) / C31568;
    const double C31672 = C31670 / C31568;
    const double C31704 = C31701 / C31568;
    const double C877 = C873 - C859;
    const double C1533 = C1529 - C1523;
    const double C175 = C170 + C151;
    const double C176 = C171 + C155;
    const double C512 = C508 + C500;
    const double C1052 = C1047 + C1028;
    const double C632 = C628 + C620;
    const double C1713 = C1711 + C1707;
    const double C511 = C507 + C496;
    const double C631 = C627 + C616;
    const double C1055 = C1050 + C1040;
    const double C1712 = C1710 + C1703;
    const double C141 =
        (4 * (2 * C31801 * C31817 + C31801 * C31827) +
         C31801 * (3 * C31827 +
                   C31801 * (2 * C31801 * C31825 +
                             C31801 * (C31825 +
                                       (C31820 * C31821 +
                                        C31798 * bs[7] * std::pow(C31797, 7)) *
                                           C31567 * C31813)))) /
        C31576;
    const double C280 =
        ((yP - yQ) * (2 * C31801 * C31817 + C31801 * C31827)) / C31576;
    const double C286 =
        (C31808 + C31817 * C31813 + C31827 * std::pow(yP - yQ, 2)) / C31576;
    const double C385 =
        (ae * (2 * C31801 * C31862 + C31801 * (C31862 + C31857 * C31813)) +
         be * (2 * C31801 * C31863 + C31801 * (C31863 + C31858 * C31813)) +
         C31795 * (2 * C31801 * C31817 + C31801 * C31827)) /
        C31576;
    const double C391 =
        (C31808 + C31817 * C31813 + ae * (C31795 * C31883 + C31884 * be) +
         be * (C31795 * C31885 + C31884 * ae) +
         C31795 * (ae * C31883 + be * C31885 + C31795 * C31827)) /
        C31576;
    const double C735 = (ae * C31944 * C31883 + be * C31944 * C31885 +
                         C31795 * C31944 * C31827) /
                        C31576;
    const double C32061 = C32055 + C32048;
    const double C1036 = C32873 * C1015;
    const double C8599 = C33085 * C1015;
    const double C21482 = C20401 * C1015;
    const double C6475 = C32873 * C1018;
    const double C1520 = C32873 * C1193;
    const double C4553 = C32960 * C1193;
    const double C7229 = C33137 * C1193;
    const double C9162 = C33085 * C1193;
    const double C11565 = C10200 * C1193;
    const double C21291 = C32960 * C1193;
    const double C22060 = C20401 * C1193;
    const double C25388 = C32963 * C1193;
    const double C2308 = C33118 * C1197;
    const double C5138 = C32960 * C1197;
    const double C10656 = C33118 * C1197;
    const double C13217 = C10200 * C1197;
    const double C17256 = C33137 * C1197;
    const double C22064 = C32960 * C1197;
    const double C24716 = C24261 * C1197;
    const double C25977 = C32963 * C1197;
    const double C8160 = C32873 * C1697;
    const double C8595 = C32960 * C1697;
    const double C21478 = C32960 * C1697;
    const double C6295 =
        (4 * (2 * C32104 + C31944 * C32141) +
         C31944 *
             (3 * C32141 + C31944 * (2 * C31944 * C31825 +
                                     C31944 * (C31825 + C31837 * C31954)))) /
        C31576;
    const double C32224 = C32218 + C32211;
    const double C32318 = C31795 * C32312;
    const double C32332 = 2 * C32312;
    const double C364 = (C31795 * (3 * C31883 + C31801 * C31907) +
                         (3 * C31884 + C31801 * C31903) * be) /
                        C31568;
    const double C365 = (C31795 * (3 * C31885 + C31801 * C31908) +
                         (3 * C31884 + C31801 * C31903) * ae) /
                        C31568;
    const double C380 =
        (2 * C31876 + C31801 * C31883 +
         C31795 * (C31795 * C31907 + C31903 * be) + C31795 * C31903 * be) /
        C31568;
    const double C381 =
        (2 * C31878 + C31801 * C31885 +
         C31795 * (C31795 * C31908 + C31903 * ae) + C31795 * C31903 * ae) /
        C31568;
    const double C729 =
        (C31795 * C31944 * C31907 + C31944 * C31903 * be) / C31568;
    const double C730 =
        (C31795 * C31944 * C31908 + C31944 * C31903 * ae) / C31568;
    const double C120 = 4 * (2 * C31877 + C31801 * C31884) +
                        C31801 * (3 * C31884 + C31801 * C31903);
    const double C249 = C31944 * (3 * C31884 + C31801 * C31903);
    const double C257 = 2 * C31877 + C31801 * C31884 + C31903 * C31954;
    const double C354 = C31795 * (3 * C31884 + C31801 * C31903);
    const double C362 = 2 * C31877 + C31801 * C31884 + C31903 * C31798;
    const double C721 = C31795 * C31944 * C31903;
    const double C1347 =
        2 * C31944 * C31903 + C31944 * (C31903 + C31929 * C31954);
    const double C1503 = C31795 * (C31903 + C31929 * C31954);
    const double C2480 =
        2 * C31795 * C31903 + C31795 * (C31903 + C31929 * C31798);
    const double C2293 = C1830 * C1188;
    const double C5127 = C3505 * C1188;
    const double C10641 = C10206 * C1188;
    const double C23942 = C20405 * C1188;
    const double C2295 = C1830 * C1189;
    const double C5129 = C3505 * C1189;
    const double C10643 = C10206 * C1189;
    const double C23944 = C20405 * C1189;
    const double C2125 = (2 * (C31795 * C31885 + C31884 * ae) +
                          C31795 * (C31885 + C31795 * C32005 + C32001 * ae) +
                          (C31884 + C31896 * C31798) * ae) /
                         C31568;
    const double C2124 = (2 * (C31795 * C31883 + C31884 * be) +
                          C31795 * (C31883 + C31795 * C32004 + C32001 * be) +
                          (C31884 + C31896 * C31798) * be) /
                         C31568;
    const double C7233 = C33118 * C1198;
    const double C9158 = C32960 * C1198;
    const double C11569 = C33118 * C1198;
    const double C22056 = C32960 * C1198;
    const double C25384 = C24261 * C1198;
    const double C7230 = C1830 * C1186;
    const double C9155 = C3505 * C1186;
    const double C11566 = C10206 * C1186;
    const double C22053 = C20405 * C1186;
    const double C7232 = C1830 * C1187;
    const double C9157 = C3505 * C1187;
    const double C11568 = C10206 * C1187;
    const double C22055 = C20405 * C1187;
    const double C8157 = C113 * C1692;
    const double C8592 = C3505 * C1692;
    const double C21475 = C20405 * C1692;
    const double C8159 = C113 * C1693;
    const double C8594 = C3505 * C1693;
    const double C21477 = C20405 * C1693;
    const double C6473 = C114 * C1000;
    const double C8158 = C114 * C1688;
    const double C32065 = C31891 + C32063;
    const double C32064 = C31887 + C32062;
    const double C32435 = C31829 + C32421;
    const double C2678 = (2 * (C31795 * C31974 + C31973 * ae) +
                          C31795 * (C31974 + C31795 * C32126 + C32122 * ae) +
                          (C31973 + C32118 * C31798) * ae) /
                         C31568;
    const double C2682 =
        (2 * (ae * C31972 + be * C31974 + C31795 * C32116) +
         ae * (C31972 + C31795 * C32125 + C32122 * be) +
         be * (C31974 + C31795 * C32126 + C32122 * ae) +
         C31795 * (C32116 + ae * C32125 + be * C32126 +
                   C31795 * (ae * C32117 + be * C32119 +
                             C31795 * C31944 * C31801 * C31837))) /
        C31576;
    const double C2677 = (2 * (C31795 * C31972 + C31973 * be) +
                          C31795 * (C31972 + C31795 * C32125 + C32122 * be) +
                          (C31973 + C32118 * C31798) * be) /
                         C31568;
    const double C6376 = (C31795 * (3 * C31968 + C31944 * C32163) +
                          (3 * C31969 + C31944 * C32164) * be) /
                         C31568;
    const double C6377 = (C31795 * (3 * C31970 + C31944 * C32165) +
                          (3 * C31969 + C31944 * C32164) * ae) /
                         C31568;
    const double C6378 =
        (2 * C31961 + C31944 * C31968 +
         C31795 * (C31795 * C32163 + C32164 * be) + C31795 * C32164 * be) /
        C31568;
    const double C6379 =
        (2 * C31963 + C31944 * C31970 +
         C31795 * (C31795 * C32165 + C32164 * ae) + C31795 * C32164 * ae) /
        C31568;
    const double C6289 = 4 * (2 * C31962 + C31944 * C31969) +
                         C31944 * (3 * C31969 + C31944 * C32164);
    const double C6373 = C31795 * (3 * C31969 + C31944 * C32164);
    const double C6374 = 2 * C31962 + C31944 * C31969 + C32164 * C31798;
    const double C7538 =
        2 * C31795 * C32164 + C31795 * (C32164 + C32186 * C31798);
    const double C7063 = (2 * (C31795 * C31970 + C31969 * ae) +
                          C31795 * (C31970 + C31795 * C32207 + C32203 * ae) +
                          (C31969 + C32158 * C31798) * ae) /
                         C31568;
    const double C7062 = (2 * (C31795 * C31968 + C31969 * be) +
                          C31795 * (C31968 + C31795 * C32206 + C32203 * be) +
                          (C31969 + C32158 * C31798) * be) /
                         C31568;
    const double C32228 = C32107 + C32226;
    const double C32227 = C32105 + C32225;
    const double C32474 = C32143 + C32463;
    const double C32324 = C32321 + C32310;
    const double C12113 = 4 * (2 * C32017 + C31795 * C32035) +
                          C31795 * (3 * C32035 + C31795 * C32320);
    const double C32323 = C32319 + C32307;
    const double C32361 = C32353 + C32336;
    const double C2499 = C1830 * C2127;
    const double C10843 = C10206 * C2127;
    const double C32044 = C32042 + C32037;
    const double C7557 = C1830 * C2676;
    const double C11885 = C10206 * C2676;
    const double C167 = C156 - C157;
    const double C502 = C489 - C490;
    const double C875 = C863 - C864;
    const double C622 = C609 - C610;
    const double C1527 = C1512 - C1513;
    const double C1043 = C1029 - C1030;
    const double C1526 = C1508 - C1509;
    const double C2500 = C33118 * C2137;
    const double C10844 = C33118 * C2137;
    const double C13550 = C33099 * C2137;
    const double C22428 = C33099 * C2137;
    const double C24904 = C24261 * C2137;
    const double C2497 = C1830 * C2126;
    const double C10841 = C10206 * C2126;
    const double C1049 = C1044 - C1035;
    const double C1532 = C1528 - C1519;
    const double C6306 = C6298 - C6299;
    const double C6660 = C6655 - C6656;
    const double C32043 = C32041 + C32034;
    const double C32311 = C32304 + C32291;
    const double C7558 = C33118 * C2681;
    const double C11886 = C33118 * C2681;
    const double C14444 = C33099 * C2681;
    const double C26188 = C24261 * C2681;
    const double C28153 = C33099 * C2681;
    const double C7555 = C1830 * C2675;
    const double C11883 = C10206 * C2675;
    const double C31840 = C31801 * C31839;
    const double C32071 = C31795 * C31839;
    const double C32128 = C31944 * C31839;
    const double C1014 = (2 * C31944 * C31827 +
                          C31944 * (C31827 + C31839 * std::pow(C31944, 2))) /
                         C31576;
    const double C1019 =
        (3 * (C31827 + C31839 * C31954) +
         C31944 * (2 * C31944 * C31839 +
                   C31944 * (C31839 +
                             (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813) *
                                 C31954))) /
        C31576;
    const double C1192 =
        (ae * (C31883 + C31902 * C31954) + be * (C31885 + C31904 * C31954) +
         C31795 * (C31827 + C31839 * C31954)) /
        C31576;
    const double C1199 =
        (C31944 * C31827 + ae * (C31795 * C31983 + C31984 * be) +
         be * (C31795 * C31985 + C31984 * ae) +
         C31795 * (ae * C31983 + be * C31985 + C31795 * C31944 * C31839)) /
        C31576;
    const double C2136 =
        (2 * (ae * C31883 + be * C31885 + C31795 * C31827) +
         ae * (C31883 + C31795 * C32004 + C32001 * be) +
         be * (C31885 + C31795 * C32005 + C32001 * ae) +
         C31795 * (C31827 + ae * C32004 + be * C32005 +
                   C31795 * (ae * C31902 + be * C31904 + C31795 * C31839))) /
        C31576;
    const double C32147 = C31944 * C32146;
    const double C32234 = C31795 * C32146;
    const double C7068 =
        (2 * (ae * C31968 + be * C31970 + C31795 * C32141) +
         ae * (C31968 + C31795 * C32206 + C32203 * be) +
         be * (C31970 + C31795 * C32207 + C32203 * ae) +
         C31795 * (C32141 + ae * C32206 + be * C32207 +
                   C31795 * (ae * C32157 + be * C32159 + C31795 * C32146))) /
        C31576;
    const double C32197 = C31829 + C32196;
    const double C32401 = C31795 * C32396;
    const double C32443 = C32436 + C32425;
    const double C32368 = C31795 * C32362;
    const double C32484 = C32475 + C32476;
    const double C31938 = C31801 * C31936;
    const double C32094 = C31944 * C31936;
    const double C32099 = C31795 * C31936;
    const double C1349 =
        (2 * C31944 * C31908 + C31944 * (C31908 + C31936 * C31954)) / C31568;
    const double C1505 = (C31795 * (C31908 + C31936 * C31954) +
                          (C31903 + C31929 * C31954) * ae) /
                         C31568;
    const double C1013 = (3 * (C31885 + C31904 * C31954) +
                          C31944 * (2 * C31985 + C31944 * C31992)) /
                         C31568;
    const double C1191 =
        (C31885 + C31904 * C31954 + C31795 * (C31795 * C31992 + C31991 * ae) +
         C31795 * C31991 * ae) /
        C31568;
    const double C1695 = (C31795 * (2 * C31985 + C31944 * C31992) +
                          (2 * C31984 + C31944 * C31991) * ae) /
                         C31568;
    const double C32086 = C31795 * C32082;
    const double C32138 = C32135 + C32136;
    const double C32190 = C31944 * C32187;
    const double C32285 = C31795 * C32187;
    const double C32249 = C31795 * C32245;
    const double C32272 = C32259 + C32269;
    const double C32280 = C32277 + C32278;
    const double C32415 = C31795 * C32412;
    const double C32452 = C31917 + C32447;
    const double C32376 = C32371 + C32359;
    const double C32499 = C32174 + C32494;
    const double C31937 = C31801 * C31934;
    const double C32092 = C31944 * C31934;
    const double C32096 = C31795 * C31934;
    const double C1348 =
        (2 * C31944 * C31907 + C31944 * (C31907 + C31934 * C31954)) / C31568;
    const double C1504 = (C31795 * (C31907 + C31934 * C31954) +
                          (C31903 + C31929 * C31954) * be) /
                         C31568;
    const double C1200 =
        (C31827 + C31839 * C31954 + ae * (C31795 * C31990 + C31991 * be) +
         be * (C31795 * C31992 + C31991 * ae) +
         C31795 * (ae * C31990 + be * C31992 +
                   C31795 * (C31839 +
                             (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813) *
                                 C31954))) /
        C31576;
    const double C1698 =
        (ae * (2 * C31983 + C31944 * C31990) +
         be * (2 * C31985 + C31944 * C31992) +
         C31795 * (2 * C31944 * C31839 +
                   C31944 * (C31839 +
                             (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813) *
                                 C31954))) /
        C31576;
    const double C1012 = (3 * (C31883 + C31902 * C31954) +
                          C31944 * (2 * C31983 + C31944 * C31990)) /
                         C31568;
    const double C1190 =
        (C31883 + C31902 * C31954 + C31795 * (C31795 * C31990 + C31991 * be) +
         C31795 * C31991 * be) /
        C31568;
    const double C1694 = (C31795 * (2 * C31983 + C31944 * C31990) +
                          (2 * C31984 + C31944 * C31991) * be) /
                         C31568;
    const double C32085 = C31795 * C32079;
    const double C32137 = C32132 + C32133;
    const double C32188 = C31944 * C32185;
    const double C32282 = C31795 * C32185;
    const double C32248 = C31795 * C32242;
    const double C32270 = C32255 + C32267;
    const double C32279 = C32274 + C32275;
    const double C32414 = C31795 * C32409;
    const double C32450 = C31911 + C32444;
    const double C32373 = C32369 + C32356;
    const double C32497 = C32168 + C32491;
    const double C31935 = C31913 + C31932;
    const double C2288 = C31944 * C31903 + C32093 * C31798;
    const double C32192 = C32170 + C32189;
    const double C6467 = 4 * (2 * C31973 + C31944 * C31980) +
                         C31944 * (3 * C31980 + C31944 * C32271);
    const double C6560 = C31795 * (3 * C31980 + C31944 * C32271);
    const double C7217 = 2 * C31973 + C31944 * C31980 + C32271 * C31798;
    const double C12289 = 4 * (2 * C32009 + C31795 * C32058) +
                          C31795 * (3 * C32058 + C31795 * C32451);
    const double C32380 = C32347 + C32375;
    const double C12375 = 4 * (2 * C32110 + C31795 * C32221) +
                          C31795 * (3 * C32221 + C31795 * C32498);
    const double C162 = C113 * C133;
    const double C487 = C113 * C260;
    const double C869 = C113 * C276;
    const double C6304 = C113 * C6292;
    const double C160 = C113 * C132;
    const double C485 = C113 * C259;
    const double C867 = C113 * C275;
    const double C6302 = C113 * C6291;
    const double C33064 = C32778 * C32768;
    const double C33105 = C33069 + C32778;
    const double C33072 = C32786 / C31608;
    const double C33068 = C32786 * C32768;
    const double C2784 = C33145 - (C32778 * C32769) / C31568;
    const double C33087 = C32914 * C32908;
    const double C33122 = C33089 + C32914;
    const double C33091 = C32921 / C31608;
    const double C33088 = C32921 * C32908;
    const double C7682 = C33149 - (C32914 * C32910) / C31568;
    const double C31587 = C31586 * C31583;
    const double C31633 = C31586 * ae;
    const double C1828 =
        ((C31586 * ae) / C31568 - C31575 / C31578) / (2 * C31568) +
        ((C31566 * ((0 * ae) / C31568 - C31579 / C31576) + C32960) * ae) /
            C31568;
    const double C3503 = (C31586 * ae) / C31568 - C31575 / C31578;
    const double C10202 =
        ((-(0 * be) / C31568) / C31608 -
         ((0 - (C31566 * C31575) / C31568) * be) / C31568) /
            C31608 -
        ((C31566 * ((-C31575 / C31568) / C31608 - (C31586 * be) / C31568) +
          C20401) *
         be) /
            C31568 +
        (-C31582 / C31568) / C31608 - (0 * be) / C31568;
    const double C10204 =
        ((-C31575 / C31568) / C31608 - (C31586 * be) / C31568) / C31608 -
        ((C31566 * ((-C31582 / C31568) / C31608 - (0 * be) / C31568) + C32960) *
         be) /
            C31568;
    const double C20403 = (-C31631) / C31608 - (C31586 * be) / C31568;
    const double C31659 = C31655 * be;
    const double C24291 = C31716 * C379;
    const double C24289 = C31716 * C378;
    const double C24279 = C31716 * C377;
    const double C24277 = C31716 * C376;
    const double C24715 = C31716 * C1185;
    const double C24713 = C31716 * C1184;
    const double C24703 = C31716 * C1189;
    const double C24701 = C31716 * C1188;
    const double C24903 = C31716 * C2127;
    const double C24901 = C31716 * C2126;
    const double C25395 = C31716 * C1183;
    const double C25393 = C31716 * C1182;
    const double C25383 = C31716 * C1187;
    const double C25381 = C31716 * C1186;
    const double C25379 = C31716 * C1181;
    const double C25377 = C31716 * C1180;
    const double C26187 = C31716 * C2676;
    const double C26185 = C31716 * C2675;
    const double C31720 = 2 * C31716;
    const double C11987 =
        (C31716 / C31608 + (0 * ae) / C31568) / C31608 - (0 * be) / C31568;
    const double C13532 = C31716 / C31608 - (0 * be) / C31568;
    const double C22410 = C31716 / C31608 + (0 * ae) / C31568;
    const double C179 = C174 * C32856;
    const double C855 = C174 * C33147;
    const double C2789 = C174 * C33083;
    const double C5479 = C174 * C5472;
    const double C15105 = C174 * C15098;
    const double C17580 = C174 * C32914;
    const double C33124 = C33094 / C31568;
    const double C33142 = C33127 / C31608;
    const double C33143 = C33128 + C33098;
    const double C13524 = C33098 - C32961 / C31578;
    const double C33126 = C33095 / C31568;
    const double C13566 = C13522 * C138;
    const double C13538 = C13522 * C137;
    const double C13932 = C13522 * C282;
    const double C14090 = C13522 * C387;
    const double C14460 = C13522 * C284;
    const double C14432 = C13522 * C283;
    const double C14988 = C13522 * C733;
    const double C31673 = C31669 - C31672;
    const double C31706 = C31690 - C31704;
    const double C880 = C877 + C860;
    const double C1537 = C1533 + C1524;
    const double C180 = C175 * C32856;
    const double C861 = C175 * C33147;
    const double C2791 = C175 * C33083;
    const double C5482 = C175 * C5472;
    const double C15107 = C175 * C15098;
    const double C17583 = C175 * C32914;
    const double C181 = C176 * C32856;
    const double C872 = C176 * C33147;
    const double C2793 = C176 * C33083;
    const double C5487 = C176 * C5472;
    const double C15109 = C176 * C15098;
    const double C17588 = C176 * C32914;
    const double C516 = C512 * C32856;
    const double C856 = C512 * C33135;
    const double C1357 = C512 * C33147;
    const double C2790 = C512 * C32918;
    const double C3130 = C512 * C33083;
    const double C5480 = C512 * C5473;
    const double C5861 = C512 * C5472;
    const double C15106 = C512 * C32918;
    const double C15446 = C512 * C15098;
    const double C17581 = C512 * C32921;
    const double C17962 = C512 * C32914;
    const double C636 = C632 * C32856;
    const double C1525 = C632 * C33147;
    const double C3269 = C632 * C33083;
    const double C6013 = C632 * C5472;
    const double C15582 = C632 * C15098;
    const double C18114 = C632 * C32914;
    const double C515 = C511 * C32856;
    const double C862 = C511 * C33135;
    const double C1354 = C511 * C33147;
    const double C2792 = C511 * C32918;
    const double C3128 = C511 * C33083;
    const double C5483 = C511 * C5473;
    const double C5858 = C511 * C5472;
    const double C15108 = C511 * C32918;
    const double C15444 = C511 * C15098;
    const double C17584 = C511 * C32921;
    const double C17959 = C511 * C32914;
    const double C635 = C631 * C32856;
    const double C1516 = C631 * C33147;
    const double C3267 = C631 * C33083;
    const double C6010 = C631 * C5472;
    const double C15580 = C631 * C15098;
    const double C18111 = C631 * C32914;
    const double C163 = C32873 * C141;
    const double C492 = C32873 * C280;
    const double C3901 = C33085 * C280;
    const double C20801 = C20401 * C280;
    const double C866 = C32873 * C286;
    const double C4549 = C33085 * C286;
    const double C21299 = C20401 * C286;
    const double C612 = C32873 * C385;
    const double C1864 = C33137 * C385;
    const double C3531 = C32960 * C385;
    const double C4073 = C33085 * C385;
    const double C10240 = C10200 * C385;
    const double C20431 = C32960 * C385;
    const double C20973 = C20401 * C385;
    const double C24300 = C32963 * C385;
    const double C1856 = C33118 * C391;
    const double C2492 = C33137 * C391;
    const double C4077 = C32960 * C391;
    const double C10232 = C33118 * C391;
    const double C10836 = C10200 * C391;
    const double C20977 = C32960 * C391;
    const double C24292 = C24261 * C391;
    const double C24896 = C32963 * C391;
    const double C1515 = C32873 * C735;
    const double C2300 = C33137 * C735;
    const double C3905 = C32960 * C735;
    const double C5134 = C33085 * C735;
    const double C10648 = C10200 * C735;
    const double C20805 = C32960 * C735;
    const double C23949 = C20401 * C735;
    const double C24708 = C32963 * C735;
    const double C6305 = C32873 * C6295;
    const double C605 = C113 * C364;
    const double C3532 = C3505 * C364;
    const double C20432 = C20405 * C364;
    const double C607 = C113 * C365;
    const double C3534 = C3505 * C365;
    const double C20434 = C20405 * C365;
    const double C1857 = C1830 * C380;
    const double C4066 = C3505 * C380;
    const double C10233 = C10206 * C380;
    const double C20966 = C20405 * C380;
    const double C24293 = C31716 * C380;
    const double C1859 = C1830 * C381;
    const double C4068 = C3505 * C381;
    const double C10235 = C10206 * C381;
    const double C20968 = C20405 * C381;
    const double C24295 = C31716 * C381;
    const double C3261 = C113 * C729;
    const double C3894 = C3505 * C729;
    const double C20794 = C20405 * C729;
    const double C3263 = C113 * C730;
    const double C3896 = C3505 * C730;
    const double C20796 = C20405 * C730;
    const double C161 = C114 * C120;
    const double C486 = C114 * C249;
    const double C868 = C114 * C257;
    const double C606 = C114 * C354;
    const double C3262 = C114 * C721;
    const double C2487 = C1830 * C2125;
    const double C10831 = C10206 * C2125;
    const double C24891 = C31716 * C2125;
    const double C2485 = C1830 * C2124;
    const double C10829 = C10206 * C2124;
    const double C24889 = C31716 * C2124;
    const double C6476 = C6472 - C6473;
    const double C8164 = C8157 - C8158;
    const double C32067 = C32065 + C32060;
    const double C32066 = C32064 + C32057;
    const double C32442 = C32435 + C32422;
    const double C13212 = C10206 * C2678;
    const double C17251 = C1830 * C2678;
    const double C25972 = C31716 * C2678;
    const double C13213 = C33118 * C2682;
    const double C13920 = C33099 * C2682;
    const double C17252 = C33118 * C2682;
    const double C22798 = C33099 * C2682;
    const double C25973 = C24261 * C2682;
    const double C13210 = C10206 * C2677;
    const double C17249 = C1830 * C2677;
    const double C25970 = C31716 * C2677;
    const double C6651 = C113 * C6376;
    const double C9574 = C3505 * C6376;
    const double C27426 = C20405 * C6376;
    const double C6653 = C113 * C6377;
    const double C9576 = C3505 * C6377;
    const double C27428 = C20405 * C6377;
    const double C6909 = C1830 * C6378;
    const double C10076 = C3505 * C6378;
    const double C11261 = C10206 * C6378;
    const double C27928 = C20405 * C6378;
    const double C30971 = C31716 * C6378;
    const double C6911 = C1830 * C6379;
    const double C10078 = C3505 * C6379;
    const double C11263 = C10206 * C6379;
    const double C27930 = C20405 * C6379;
    const double C30973 = C31716 * C6379;
    const double C6303 = C114 * C6289;
    const double C6652 = C114 * C6373;
    const double C7545 = C1830 * C7063;
    const double C11873 = C10206 * C7063;
    const double C31543 = C31716 * C7063;
    const double C7543 = C1830 * C7062;
    const double C11871 = C10206 * C7062;
    const double C31541 = C31716 * C7062;
    const double C32230 = C32228 + C32223;
    const double C32229 = C32227 + C32220;
    const double C32483 = C32474 + C32464;
    const double C32326 = C31795 * C32324;
    const double C32348 = 3 * C32324;
    const double C32334 = be * C32324;
    const double C32325 = C31795 * C32323;
    const double C32340 = 3 * C32323;
    const double C32333 = ae * C32323;
    const double C2131 =
        (3 * (C31874 + C31795 * C32021 + C32017 * ae) +
         C31795 * (2 * C32021 + C31795 * C32044 + C32035 * ae) +
         (2 * C32017 + C31795 * C32035) * ae) /
        C31568;
    const double C172 = C167 - C158;
    const double C506 = C502 - C491;
    const double C878 = C875 - C865;
    const double C626 = C622 - C611;
    const double C1531 = C1527 - C1514;
    const double C1048 = C1043 - C1031;
    const double C1530 = C1526 - C1510;
    const double C1054 = C1049 + C1036;
    const double C1536 = C1532 + C1520;
    const double C6308 = C6306 - C6300;
    const double C6662 = C6660 - C6657;
    const double C2139 =
        (3 * (C31808 + ae * C32020 + be * C32021 + C31795 * C32038) +
         ae * (2 * C32020 + C31795 * C32043 + C32035 * be) +
         be * (2 * C32021 + C31795 * C32044 + C32035 * ae) +
         C31795 * (2 * C32038 + ae * C32043 + be * C32044 +
                   C31795 * (C31817 + ae * C32033 + be * C32036 +
                             C31795 * (ae * C31857 + be * C31858 +
                                       C31795 * C31825)))) /
        C31576;
    const double C2130 =
        (3 * (C31873 + C31795 * C32020 + C32017 * be) +
         C31795 * (2 * C32020 + C31795 * C32043 + C32035 * be) +
         (2 * C32017 + C31795 * C32035) * be) /
        C31568;
    const double C32322 = C32311 + C32318;
    const double C31841 = C31833 + C31840;
    const double C32084 = C32078 + C32071;
    const double C1032 = C32873 * C1014;
    const double C1511 = C32873 * C1192;
    const double C4545 = C32960 * C1192;
    const double C21295 = C32960 * C1192;
    const double C2296 = C33118 * C1199;
    const double C5130 = C32960 * C1199;
    const double C10644 = C33118 * C1199;
    const double C23945 = C32960 * C1199;
    const double C24704 = C24261 * C1199;
    const double C2488 = C33118 * C2136;
    const double C10832 = C33118 * C2136;
    const double C13554 = C33099 * C2136;
    const double C22432 = C33099 * C2136;
    const double C24892 = C24261 * C2136;
    const double C32148 = C32145 + C32147;
    const double C32247 = C32241 + C32234;
    const double C7546 = C33118 * C7068;
    const double C11874 = C33118 * C7068;
    const double C14448 = C33099 * C7068;
    const double C28157 = C33099 * C7068;
    const double C31544 = C24261 * C7068;
    const double C6470 =
        (4 * (2 * C32116 + C31944 * C32197) +
         C31944 * (3 * C32197 +
                   C31944 * (2 * C31944 * C32195 +
                             C31944 * (C32195 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C31954)))) /
        C31576;
    const double C6563 =
        (ae * (3 * C31979 +
               C31944 * (2 * C32117 +
                         C31944 * (C31911 + C31801 * C31920 * C31954))) +
         be * (3 * C31981 +
               C31944 * (2 * C32119 +
                         C31944 * (C31917 + C31801 * C31924 * C31954))) +
         C31795 * (3 * C32197 +
                   C31944 * (2 * C31944 * C32195 +
                             C31944 * (C32195 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C31954)))) /
        C31576;
    const double C32408 = C32400 + C32401;
    const double C32449 = C31795 * C32443;
    const double C32372 = C32361 + C32368;
    const double C32490 = C31795 * C32484;
    const double C31940 = C31916 + C31938;
    const double C2290 =
        (C31944 * C31908 + C31795 * (C31795 * C32094 + C32093 * ae) +
         C31795 * C32093 * ae) /
        C31568;
    const double C32102 = C32099 + C32100;
    const double C32088 = C31904 + C32086;
    const double C2680 = (2 * (C31795 * C31985 + C31984 * ae) +
                          C31795 * (C31985 + C31795 * C32138 + C32134 * ae) +
                          (C31984 + C32130 * C31798) * ae) /
                         C31568;
    const double C32193 = C32173 + C32190;
    const double C32288 = C32285 + C32286;
    const double C32251 = C32159 + C32249;
    const double C6469 = (4 * (2 * C31974 + C31944 * C31981) +
                          C31944 * (3 * C31981 + C31944 * C32272)) /
                         C31568;
    const double C6562 = (C31795 * (3 * C31981 + C31944 * C32272) +
                          (3 * C31980 + C31944 * C32271) * ae) /
                         C31568;
    const double C7219 =
        (2 * C31974 + C31944 * C31981 +
         C31795 * (C31795 * C32272 + C32271 * ae) + C31795 * C32271 * ae) /
        C31568;
    const double C7390 = (2 * (C31795 * C31981 + C31980 * ae) +
                          C31795 * (C31981 + C31795 * C32280 + C32276 * ae) +
                          (C31980 + C32265 * C31798) * ae) /
                         C31568;
    const double C32417 = C32119 + C32415;
    const double C32455 = C32452 + C32441;
    const double C32381 = C31795 * C32376;
    const double C32501 = C32499 + C32489;
    const double C31939 = C31910 + C31937;
    const double C2289 =
        (C31944 * C31907 + C31795 * (C31795 * C32092 + C32093 * be) +
         C31795 * C32093 * be) /
        C31568;
    const double C32101 = C32096 + C32097;
    const double C32087 = C31902 + C32085;
    const double C2683 =
        (2 * (ae * C31983 + be * C31985 + C31795 * C32128) +
         ae * (C31983 + C31795 * C32137 + C32134 * be) +
         be * (C31985 + C31795 * C32138 + C32134 * ae) +
         C31795 *
             (C32128 + ae * C32137 + be * C32138 +
              C31795 * (ae * C32129 + be * C32131 +
                        C31795 * C31944 *
                            (C31837 + (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                          C31567 * C31813)))) /
        C31576;
    const double C2679 = (2 * (C31795 * C31983 + C31984 * be) +
                          C31795 * (C31983 + C31795 * C32137 + C32134 * be) +
                          (C31984 + C32130 * C31798) * be) /
                         C31568;
    const double C32191 = C32167 + C32188;
    const double C32287 = C32282 + C32283;
    const double C32250 = C32157 + C32248;
    const double C7220 =
        (2 * C32116 + C31944 * C32197 + ae * (C31795 * C32270 + C32271 * be) +
         be * (C31795 * C32272 + C32271 * ae) +
         C31795 * (ae * C32270 + be * C32272 +
                   C31795 * (2 * C31944 * C32195 +
                             C31944 * (C32195 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C31954)))) /
        C31576;
    const double C6468 = (4 * (2 * C31972 + C31944 * C31979) +
                          C31944 * (3 * C31979 + C31944 * C32270)) /
                         C31568;
    const double C6561 = (C31795 * (3 * C31979 + C31944 * C32270) +
                          (3 * C31980 + C31944 * C32271) * be) /
                         C31568;
    const double C7218 =
        (2 * C31972 + C31944 * C31979 +
         C31795 * (C31795 * C32270 + C32271 * be) + C31795 * C32271 * be) /
        C31568;
    const double C7391 =
        (2 * (ae * C31979 + be * C31981 + C31795 * C32197) +
         ae * (C31979 + C31795 * C32279 + C32276 * be) +
         be * (C31981 + C31795 * C32280 + C32276 * ae) +
         C31795 * (C32197 + ae * C32279 + be * C32280 +
                   C31795 * (ae * C32264 + be * C32266 +
                             C31795 * (C32195 + C31801 *
                                                    (C31831 * C31832 +
                                                     C31798 * bs[8] *
                                                         std::pow(C31793, 8)) *
                                                    C31567 * C31954)))) /
        C31576;
    const double C7389 = (2 * (C31795 * C31979 + C31980 * be) +
                          C31795 * (C31979 + C31795 * C32279 + C32276 * be) +
                          (C31980 + C32265 * C31798) * be) /
                         C31568;
    const double C32416 = C32117 + C32414;
    const double C32454 = C32450 + C32438;
    const double C32379 = C31795 * C32373;
    const double C32500 = C32497 + C32486;
    const double C121 = 5 * (3 * C31884 + C31801 * C31903) +
                        C31801 * (4 * C31903 + C31801 * C31935);
    const double C258 = 3 * C31884 + C31801 * C31903 + C31935 * C31954;
    const double C363 = 3 * C31884 + C31801 * C31903 + C31935 * C31798;
    const double C480 = C31944 * (4 * C31903 + C31801 * C31935);
    const double C600 = C31795 * (4 * C31903 + C31801 * C31935);
    const double C722 = C31795 * C31944 * C31935;
    const double C6290 = 5 * (3 * C31969 + C31944 * C32164) +
                         C31944 * (4 * C32164 + C31944 * C32192);
    const double C6375 = 3 * C31969 + C31944 * C32164 + C32192 * C31798;
    const double C6646 = C31795 * (4 * C32164 + C31944 * C32192);
    const double C12114 = 5 * (3 * C32035 + C31795 * C32320) +
                          C31795 * (4 * C32320 + C31795 * C32380);
    const double C33101 = C33064 / C31568;
    const double C33132 = C33105 / C31608;
    const double C33133 = C33107 + C33072;
    const double C2786 = C33072 - C32784 / C31578;
    const double C33104 = C33068 / C31568;
    const double C33119 = C33087 / C31568;
    const double C33139 = C33122 / C31608;
    const double C33140 = C33123 + C33091;
    const double C7684 = C33091 - C32919 / C31578;
    const double C33121 = C33088 / C31568;
    const double C7696 = C175 * C7682;
    const double C7689 = C174 * C7682;
    const double C8026 = C512 * C7682;
    const double C8163 = C632 * C7682;
    const double C31592 = C31566 * C31587;
    const double C31683 = C31587 / C31578;
    const double C1827 =
        (ae * -2 * C31575) / (C31576 * 2 * C31568) +
        (((C31566 * ((-4 * C31579) / C31568 - (C31566 * C31587) / C31568) *
           ae) /
              C31568 +
          2 * ((C31586 * ae) / C31568 - C31575 / C31578)) *
         ae) /
            C31568 -
        C31587 / C31578;
    const double C1831 = (-C31587 / C31568) / (4 * C31576);
    const double C3506 = (-C31587 / C31568) / (2 * C31568);
    const double C10207 = (-C31587 / C31568) / (4 * C31576);
    const double C11988 =
        (-C31587 / C31568) / (4 * C31576 * std::pow(C31608, 2));
    const double C13533 = (-C31587 / C31568) / (4 * C31676);
    const double C20406 = (-C31587 / C31568) / C31608;
    const double C22411 = (-C31587 / C31568) / (4 * C31676);
    const double C24267 = (-C31587 / C31568) / C31719;
    const double C31641 = C31633 / C31568;
    const double C1863 = C1828 * C367;
    const double C1861 = C1828 * C366;
    const double C1851 = C1828 * C369;
    const double C1849 = C1828 * C368;
    const double C1839 = C1828 * C371;
    const double C1837 = C1828 * C370;
    const double C2311 = C1828 * C726;
    const double C2309 = C1828 * C725;
    const double C2299 = C1828 * C728;
    const double C2297 = C1828 * C727;
    const double C2503 = C1828 * C377;
    const double C2501 = C1828 * C376;
    const double C2491 = C1828 * C379;
    const double C2489 = C1828 * C378;
    const double C6915 = C1828 * C1691;
    const double C6913 = C1828 * C1690;
    const double C6903 = C1828 * C1179;
    const double C6901 = C1828 * C1178;
    const double C6891 = C1828 * C724;
    const double C6889 = C1828 * C723;
    const double C7228 = C1828 * C1177;
    const double C7226 = C1828 * C1176;
    const double C7561 = C1828 * C1181;
    const double C7559 = C1828 * C1180;
    const double C7549 = C1828 * C1183;
    const double C7547 = C1828 * C1182;
    const double C17255 = C1828 * C1185;
    const double C17253 = C1828 * C1184;
    const double C3538 = C3503 * C131;
    const double C3536 = C3503 * C130;
    const double C3526 = C3503 * C129;
    const double C3524 = C3503 * C128;
    const double C3518 = C3503 * C127;
    const double C3516 = C3503 * C126;
    const double C3510 = C3503 * C125;
    const double C3508 = C3503 * C124;
    const double C3916 = C3503 * C266;
    const double C3914 = C3503 * C265;
    const double C3908 = C3503 * C264;
    const double C3906 = C3503 * C263;
    const double C3900 = C3503 * C262;
    const double C3898 = C3503 * C261;
    const double C4088 = C3503 * C371;
    const double C4086 = C3503 * C370;
    const double C4080 = C3503 * C369;
    const double C4078 = C3503 * C368;
    const double C4072 = C3503 * C367;
    const double C4070 = C3503 * C366;
    const double C4564 = C3503 * C270;
    const double C4562 = C3503 * C269;
    const double C4556 = C3503 * C272;
    const double C4554 = C3503 * C271;
    const double C4548 = C3503 * C274;
    const double C4546 = C3503 * C273;
    const double C4536 = C3503 * C268;
    const double C4534 = C3503 * C267;
    const double C5141 = C3503 * C726;
    const double C5139 = C3503 * C725;
    const double C5133 = C3503 * C728;
    const double C5131 = C3503 * C727;
    const double C5355 = C3503 * C724;
    const double C5353 = C3503 * C723;
    const double C8606 = C3503 * C1007;
    const double C8604 = C3503 * C1006;
    const double C8598 = C3503 * C1005;
    const double C8596 = C3503 * C1004;
    const double C9161 = C3503 * C1177;
    const double C9159 = C3503 * C1176;
    const double C9369 = C3503 * C1179;
    const double C9367 = C3503 * C1178;
    const double C9580 = C3503 * C1009;
    const double C9578 = C3503 * C1008;
    const double C10082 = C3503 * C1691;
    const double C10080 = C3503 * C1690;
    const double C10243 = C10202 * C129;
    const double C10241 = C10202 * C128;
    const double C10223 = C10202 * C127;
    const double C10221 = C10202 * C126;
    const double C10211 = C10202 * C125;
    const double C10209 = C10202 * C124;
    const double C10663 = C10202 * C266;
    const double C10661 = C10202 * C265;
    const double C10651 = C10202 * C264;
    const double C10649 = C10202 * C263;
    const double C10851 = C10202 * C371;
    const double C10849 = C10202 * C370;
    const double C10839 = C10202 * C369;
    const double C10837 = C10202 * C368;
    const double C11271 = C10202 * C1007;
    const double C11269 = C10202 * C1006;
    const double C11251 = C10202 * C270;
    const double C11249 = C10202 * C269;
    const double C11239 = C10202 * C268;
    const double C11237 = C10202 * C267;
    const double C11560 = C10202 * C272;
    const double C11558 = C10202 * C271;
    const double C11893 = C10202 * C724;
    const double C11891 = C10202 * C723;
    const double C11881 = C10202 * C1179;
    const double C11879 = C10202 * C1178;
    const double C13220 = C10202 * C726;
    const double C13218 = C10202 * C725;
    const double C10239 = C10204 * C367;
    const double C10237 = C10204 * C366;
    const double C10227 = C10204 * C369;
    const double C10225 = C10204 * C368;
    const double C10215 = C10204 * C371;
    const double C10213 = C10204 * C370;
    const double C10659 = C10204 * C726;
    const double C10657 = C10204 * C725;
    const double C10647 = C10204 * C728;
    const double C10645 = C10204 * C727;
    const double C10847 = C10204 * C377;
    const double C10845 = C10204 * C376;
    const double C10835 = C10204 * C379;
    const double C10833 = C10204 * C378;
    const double C11267 = C10204 * C1691;
    const double C11265 = C10204 * C1690;
    const double C11255 = C10204 * C1179;
    const double C11253 = C10204 * C1178;
    const double C11243 = C10204 * C724;
    const double C11241 = C10204 * C723;
    const double C11564 = C10204 * C1177;
    const double C11562 = C10204 * C1176;
    const double C11889 = C10204 * C1181;
    const double C11887 = C10204 * C1180;
    const double C11877 = C10204 * C1183;
    const double C11875 = C10204 * C1182;
    const double C13216 = C10204 * C1185;
    const double C13214 = C10204 * C1184;
    const double C20438 = C20403 * C131;
    const double C20436 = C20403 * C130;
    const double C20426 = C20403 * C129;
    const double C20424 = C20403 * C128;
    const double C20418 = C20403 * C127;
    const double C20416 = C20403 * C126;
    const double C20410 = C20403 * C125;
    const double C20408 = C20403 * C124;
    const double C20816 = C20403 * C266;
    const double C20814 = C20403 * C265;
    const double C20808 = C20403 * C264;
    const double C20806 = C20403 * C263;
    const double C20800 = C20403 * C262;
    const double C20798 = C20403 * C261;
    const double C20988 = C20403 * C371;
    const double C20986 = C20403 * C370;
    const double C20980 = C20403 * C369;
    const double C20978 = C20403 * C368;
    const double C20972 = C20403 * C367;
    const double C20970 = C20403 * C366;
    const double C21298 = C20403 * C274;
    const double C21296 = C20403 * C273;
    const double C21286 = C20403 * C272;
    const double C21284 = C20403 * C271;
    const double C21489 = C20403 * C1007;
    const double C21487 = C20403 * C1006;
    const double C21481 = C20403 * C1005;
    const double C21479 = C20403 * C1004;
    const double C21468 = C20403 * C270;
    const double C21466 = C20403 * C269;
    const double C21460 = C20403 * C268;
    const double C21458 = C20403 * C267;
    const double C22067 = C20403 * C726;
    const double C22065 = C20403 * C725;
    const double C22059 = C20403 * C1177;
    const double C22057 = C20403 * C1176;
    const double C22289 = C20403 * C724;
    const double C22287 = C20403 * C723;
    const double C22281 = C20403 * C1179;
    const double C22279 = C20403 * C1178;
    const double C23948 = C20403 * C728;
    const double C23946 = C20403 * C727;
    const double C27432 = C20403 * C1009;
    const double C27430 = C20403 * C1008;
    const double C27934 = C20403 * C1691;
    const double C27932 = C20403 * C1690;
    const double C31664 = C31659 / C31568;
    const double C13553 = C13532 * C2125;
    const double C13551 = C13532 * C2124;
    const double C13549 = C13532 * C2127;
    const double C13547 = C13532 * C2126;
    const double C13919 = C13532 * C2678;
    const double C13917 = C13532 * C2677;
    const double C14447 = C13532 * C7063;
    const double C14445 = C13532 * C7062;
    const double C14443 = C13532 * C2676;
    const double C14441 = C13532 * C2675;
    const double C22431 = C22410 * C2125;
    const double C22429 = C22410 * C2124;
    const double C22427 = C22410 * C2127;
    const double C22425 = C22410 * C2126;
    const double C22797 = C22410 * C2678;
    const double C22795 = C22410 * C2677;
    const double C28156 = C22410 * C7063;
    const double C28154 = C22410 * C7062;
    const double C28152 = C22410 * C2676;
    const double C28150 = C22410 * C2675;
    const double C33155 = C33124 + C33151;
    const double C13523 = C33142 - (C32963 * C32952) / C31568;
    const double C22436 = C33143 * C391;
    const double C22424 = C33143 * C390;
    const double C22802 = C33143 * C1197;
    const double C22960 = C33143 * C2137;
    const double C28161 = C33143 * C1196;
    const double C28149 = C33143 * C1195;
    const double C28689 = C33143 * C2681;
    const double C11977 = C33143 / C31608 - C32961 / C31721;
    const double C13558 = C13524 * C391;
    const double C13546 = C13524 * C390;
    const double C13924 = C13524 * C1197;
    const double C14082 = C13524 * C2137;
    const double C14452 = C13524 * C1196;
    const double C14440 = C13524 * C1195;
    const double C14980 = C13524 * C2681;
    const double C33152 = C33126 + C33142;
    const double C883 = C880 * C33115;
    const double C1356 = C880 * C33135;
    const double C3129 = C880 * C32918;
    const double C5481 = C880 * C33115;
    const double C5860 = C880 * C5473;
    const double C15445 = C880 * C32918;
    const double C17582 = C880 * C17575;
    const double C17961 = C880 * C32921;
    const double C1541 = C1537 * C33135;
    const double C3268 = C1537 * C32918;
    const double C6012 = C1537 * C5473;
    const double C15581 = C1537 * C32918;
    const double C18113 = C1537 * C32921;
    const double C874 = C861 + C862;
    const double C2797 = C2791 + C2792;
    const double C5488 = C5482 + C5483;
    const double C15113 = C15107 + C15108;
    const double C17589 = C17583 + C17584;
    const double C168 = C160 - C161;
    const double C501 = C485 - C486;
    const double C876 = C867 - C868;
    const double C621 = C605 - C606;
    const double C3270 = C3261 - C3262;
    const double C6477 = C6476 - C6474;
    const double C8165 = C8164 - C8159;
    const double C2133 =
        (3 * (C31878 + C31795 * C32013 + C32009 * ae) +
         C31795 * (2 * C32013 + C31795 * C32067 + C32058 * ae) +
         (2 * C32009 + C31795 * C32058) * ae) /
        C31568;
    const double C2140 =
        (3 * (C31951 + ae * C32012 + be * C32013 + C31795 * C32061) +
         ae * (2 * C32012 + C31795 * C32066 + C32058 * be) +
         be * (2 * C32013 + C31795 * C32067 + C32058 * ae) +
         C31795 * (2 * C32061 + ae * C32066 + be * C32067 +
                   C31795 * (C31829 + ae * C32056 + be * C32059 +
                             C31795 * (ae * C31911 + be * C31917 +
                                       C31795 * C31801 * C31837)))) /
        C31576;
    const double C2132 =
        (3 * (C31876 + C31795 * C32012 + C32009 * be) +
         C31795 * (2 * C32012 + C31795 * C32066 + C32058 * be) +
         (2 * C32009 + C31795 * C32058) * be) /
        C31568;
    const double C6307 = C6302 - C6303;
    const double C6659 = C6651 - C6652;
    const double C7065 =
        (3 * (C31963 + C31795 * C32114 + C32110 * ae) +
         C31795 * (2 * C32114 + C31795 * C32230 + C32221 * ae) +
         (2 * C32110 + C31795 * C32221) * ae) /
        C31568;
    const double C7069 =
        (3 * (C32104 + ae * C32113 + be * C32114 + C31795 * C32224) +
         ae * (2 * C32113 + C31795 * C32229 + C32221 * be) +
         be * (2 * C32114 + C31795 * C32230 + C32221 * ae) +
         C31795 * (2 * C32224 + ae * C32229 + be * C32230 +
                   C31795 * (C32143 + ae * C32219 + be * C32222 +
                             C31795 * (ae * C32168 + be * C32174 +
                                       C31795 * C31944 * C31837)))) /
        C31576;
    const double C7064 =
        (3 * (C31961 + C31795 * C32113 + C32110 * be) +
         C31795 * (2 * C32113 + C31795 * C32229 + C32221 * be) +
         (2 * C32110 + C31795 * C32221) * be) /
        C31568;
    const double C32328 = C32301 + C32326;
    const double C32327 = C32295 + C32325;
    const double C32352 = C32332 + C32333;
    const double C177 = C172 + C159;
    const double C510 = C506 + C492;
    const double C881 = C878 + C866;
    const double C630 = C626 + C612;
    const double C1535 = C1531 + C1515;
    const double C1355 = C1054 * C33115;
    const double C5859 = C1054 * C33115;
    const double C7692 = C1054 * C33092;
    const double C15820 = C1054 * C33092;
    const double C17960 = C1054 * C17575;
    const double C1540 = C1536 * C33115;
    const double C6011 = C1536 * C33115;
    const double C18112 = C1536 * C17575;
    const double C6310 = C6308 + C6301;
    const double C6664 = C6662 + C6658;
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
    const double C279 = ((yP - yQ) * (3 * C31827 + C31801 * C31841)) / C31576;
    const double C287 = (2 * C31801 * C31817 + C31801 * C31827 +
                         C31841 * std::pow(yP - yQ, 2)) /
                        C31576;
    const double C288 =
        (3 * C31827 + C31801 * C31841 +
         (3 * C31839 +
          C31801 * (2 * C31801 * C31837 +
                    C31801 * (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813))) *
             std::pow(yP - yQ, 2)) /
        C31576;
    const double C384 =
        (ae * (3 * (C31804 * C31803 * C31853 + C31857 * C31813) +
               C31801 *
                   (2 * C31801 * C31857 +
                    C31801 * (C31857 + C31821 * C31820 * C31853 * C31813))) +
         be * (3 * (C31804 * C31803 * C31854 + C31858 * C31813) +
               C31801 *
                   (2 * C31801 * C31858 +
                    C31801 * (C31858 + C31821 * C31820 * C31854 * C31813))) +
         C31795 * (3 * C31827 + C31801 * C31841)) /
        C31576;
    const double C392 =
        (2 * C31801 * C31817 + C31801 * C31827 +
         ae * (C31795 * C31907 + C31903 * be) +
         be * (C31795 * C31908 + C31903 * ae) +
         C31795 * (ae * C31907 + be * C31908 + C31795 * C31841)) /
        C31576;
    const double C483 =
        ((yP - yQ) *
         (4 * C31841 +
          C31801 * (3 * C31839 +
                    C31801 * (2 * C31801 * C31837 +
                              C31801 * (C31837 +
                                        (C31831 * C31832 +
                                         C31798 * bs[8] * std::pow(C31793, 8)) *
                                            C31567 * C31813))))) /
        C31576;
    const double C736 = (ae * C31944 * C31907 + be * C31944 * C31908 +
                         C31795 * C31944 * C31841) /
                        C31576;
    const double C1350 =
        (2 * C31944 * C31841 +
         C31944 * (C31841 +
                   (2 * C31801 * C31837 +
                    C31801 * (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813)) *
                       C31954)) /
        C31576;
    const double C1506 =
        (ae * (C31907 + C31934 * C31954) + be * (C31908 + C31936 * C31954) +
         C31795 * (C31841 +
                   (2 * C31801 * C31837 +
                    C31801 * (C31837 + (C31831 * C31832 +
                                        C31798 * bs[8] * std::pow(C31793, 8)) *
                                           C31567 * C31813)) *
                       C31954)) /
        C31576;
    const double C2291 =
        (C31944 * C31841 + ae * (C31795 * C32092 + C32093 * be) +
         be * (C31795 * C32094 + C32093 * ae) +
         C31795 *
             (ae * C32092 + be * C32094 +
              C31795 * C31944 *
                  (2 * C31801 * C31837 +
                   C31801 * (C31837 + (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                          C31567 * C31813)))) /
        C31576;
    const double C1053 = C1048 + C1032;
    const double C1534 = C1530 + C1511;
    const double C6296 =
        (5 * (3 * C32141 + C31944 * C32148) +
         C31944 *
             (4 * C32148 +
              C31944 * (3 * C32146 +
                        C31944 * (2 * C31944 * C31837 +
                                  C31944 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31954))))) /
        C31576;
    const double C6382 =
        (ae * (3 * C31968 +
               C31944 * (2 * C32105 + C31944 * (C31857 + C31894 * C31954))) +
         be * (3 * C31970 +
               C31944 * (2 * C32107 + C31944 * (C31858 + C31898 * C31954))) +
         C31795 * (3 * C32141 + C31944 * C32148)) /
        C31576;
    const double C6383 =
        (2 * C32104 + C31944 * C32141 + ae * (C31795 * C32163 + C32164 * be) +
         be * (C31795 * C32165 + C32164 * ae) +
         C31795 * (ae * C32163 + be * C32165 + C31795 * C32148)) /
        C31576;
    const double C32453 = C32442 + C32449;
    const double C32378 = C31795 * C32372;
    const double C32496 = C32483 + C32490;
    const double C135 = (5 * (3 * C31885 + C31801 * C31908) +
                         C31801 * (4 * C31908 + C31801 * C31940)) /
                        C31568;
    const double C278 =
        (3 * C31885 + C31801 * C31908 + C31940 * C31954) / C31568;
    const double C383 =
        (3 * C31885 + C31801 * C31908 +
         C31795 * (C31795 * C31940 + C31935 * ae) + C31795 * C31935 * ae) /
        C31568;
    const double C482 = (C31944 * (4 * C31908 + C31801 * C31940)) / C31568;
    const double C602 = (C31795 * (4 * C31908 + C31801 * C31940) +
                         (4 * C31903 + C31801 * C31935) * ae) /
                        C31568;
    const double C732 =
        (C31795 * C31944 * C31940 + C31944 * C31935 * ae) / C31568;
    const double C2482 = (2 * (C31795 * C31908 + C31903 * ae) +
                          C31795 * (C31908 + C31795 * C32102 + C32098 * ae) +
                          (C31903 + C31929 * C31798) * ae) /
                         C31568;
    const double C32090 = C32088 + C32083;
    const double C6294 = (5 * (3 * C31970 + C31944 * C32165) +
                          C31944 * (4 * C32165 + C31944 * C32193)) /
                         C31568;
    const double C6381 =
        (3 * C31970 + C31944 * C32165 +
         C31795 * (C31795 * C32193 + C32192 * ae) + C31795 * C32192 * ae) /
        C31568;
    const double C6648 = (C31795 * (4 * C32165 + C31944 * C32193) +
                          (4 * C32164 + C31944 * C32192) * ae) /
                         C31568;
    const double C7540 = (2 * (C31795 * C32165 + C32164 * ae) +
                          C31795 * (C32165 + C31795 * C32288 + C32284 * ae) +
                          (C32164 + C32186 * C31798) * ae) /
                         C31568;
    const double C32253 = C32251 + C32246;
    const double C32419 = C32417 + C32413;
    const double C32457 = C31795 * C32455;
    const double C32384 = C32349 + C32381;
    const double C32503 = C31795 * C32501;
    const double C393 =
        (3 * C31827 + C31801 * C31841 + ae * (C31795 * C31939 + C31935 * be) +
         be * (C31795 * C31940 + C31935 * ae) +
         C31795 *
             (ae * C31939 + be * C31940 +
              C31795 * (3 * C31839 +
                        C31801 * (2 * C31801 * C31837 +
                                  C31801 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C603 =
        (ae * (4 * C31907 + C31801 * C31939) +
         be * (4 * C31908 + C31801 * C31940) +
         C31795 *
             (4 * C31841 +
              C31801 * (3 * C31839 +
                        C31801 * (2 * C31801 * C31837 +
                                  C31801 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C737 =
        (ae * C31944 * C31939 + be * C31944 * C31940 +
         C31795 * C31944 *
             (3 * C31839 +
              C31801 *
                  (2 * C31801 * C31837 +
                   C31801 * (C31837 + (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                          C31567 * C31813)))) /
        C31576;
    const double C134 = (5 * (3 * C31883 + C31801 * C31907) +
                         C31801 * (4 * C31907 + C31801 * C31939)) /
                        C31568;
    const double C277 =
        (3 * C31883 + C31801 * C31907 + C31939 * C31954) / C31568;
    const double C382 =
        (3 * C31883 + C31801 * C31907 +
         C31795 * (C31795 * C31939 + C31935 * be) + C31795 * C31935 * be) /
        C31568;
    const double C481 = (C31944 * (4 * C31907 + C31801 * C31939)) / C31568;
    const double C601 = (C31795 * (4 * C31907 + C31801 * C31939) +
                         (4 * C31903 + C31801 * C31935) * be) /
                        C31568;
    const double C731 =
        (C31795 * C31944 * C31939 + C31944 * C31935 * be) / C31568;
    const double C2483 =
        (2 * (ae * C31907 + be * C31908 + C31795 * C31841) +
         ae * (C31907 + C31795 * C32101 + C32098 * be) +
         be * (C31908 + C31795 * C32102 + C32098 * ae) +
         C31795 *
             (C31841 + ae * C32101 + be * C32102 +
              C31795 * (ae * C31934 + be * C31936 +
                        C31795 * (2 * C31801 * C31837 +
                                  C31801 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C2481 = (2 * (C31795 * C31907 + C31903 * be) +
                          C31795 * (C31907 + C31795 * C32101 + C32098 * be) +
                          (C31903 + C31929 * C31798) * be) /
                         C31568;
    const double C32089 = C32087 + C32080;
    const double C6384 =
        (3 * C32141 + C31944 * C32148 + ae * (C31795 * C32191 + C32192 * be) +
         be * (C31795 * C32193 + C32192 * ae) +
         C31795 *
             (ae * C32191 + be * C32193 +
              C31795 * (3 * C32146 +
                        C31944 * (2 * C31944 * C31837 +
                                  C31944 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31954))))) /
        C31576;
    const double C6649 =
        (ae * (4 * C32163 + C31944 * C32191) +
         be * (4 * C32165 + C31944 * C32193) +
         C31795 *
             (4 * C32148 +
              C31944 * (3 * C32146 +
                        C31944 * (2 * C31944 * C31837 +
                                  C31944 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31954))))) /
        C31576;
    const double C6293 = (5 * (3 * C31968 + C31944 * C32163) +
                          C31944 * (4 * C32163 + C31944 * C32191)) /
                         C31568;
    const double C6380 =
        (3 * C31968 + C31944 * C32163 +
         C31795 * (C31795 * C32191 + C32192 * be) + C31795 * C32192 * be) /
        C31568;
    const double C6647 = (C31795 * (4 * C32163 + C31944 * C32191) +
                          (4 * C32164 + C31944 * C32192) * be) /
                         C31568;
    const double C7541 =
        (2 * (ae * C32163 + be * C32165 + C31795 * C32148) +
         ae * (C32163 + C31795 * C32287 + C32284 * be) +
         be * (C32165 + C31795 * C32288 + C32284 * ae) +
         C31795 *
             (C32148 + ae * C32287 + be * C32288 +
              C31795 * (ae * C32185 + be * C32187 +
                        C31795 * (2 * C31944 * C31837 +
                                  C31944 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31954))))) /
        C31576;
    const double C7539 = (2 * (C31795 * C32163 + C32164 * be) +
                          C31795 * (C32163 + C31795 * C32287 + C32284 * be) +
                          (C32164 + C32186 * C31798) * be) /
                         C31568;
    const double C32252 = C32250 + C32243;
    const double C32418 = C32416 + C32410;
    const double C32456 = C31795 * C32454;
    const double C32383 = C32341 + C32379;
    const double C32502 = C31795 * C32500;
    const double C33153 = C33101 + C33145;
    const double C2785 = C33132 - (C32786 * C32769) / C31568;
    const double C106 = C33133 / C31608 - C32784 / C31721;
    const double C33146 = C33104 + C33132;
    const double C33154 = C33119 + C33149;
    const double C7683 = C33139 - (C32921 * C32910) / C31568;
    const double C15819 = C880 * C33140;
    const double C16152 = C1054 * C33140;
    const double C16286 = C1536 * C33140;
    const double C6224 = C33140 / C31608 - C32919 / C31721;
    const double C7691 = C880 * C7684;
    const double C8024 = C1054 * C7684;
    const double C8161 = C1536 * C7684;
    const double C33150 = C33121 + C33139;
    const double C31685 = C31592 / C31578;
    const double C31681 = C31592 / C31568;
    const double C1829 =
        (((-4 * C31579) / C31568 - C31592 / C31568) * ae) / C31578 +
        ((2 * ((0 * ae) / C31568 - C31579 / C31576) - C31592 / C31578) * ae) /
            C31568;
    const double C3504 =
        (((-4 * C31579) / C31568 - C31592 / C31568) * ae) / C31568;
    const double C10203 =
        (-(be * -2 * C31575) / C31576) / C31608 -
        ((2 * ((-C31575 / C31568) / C31608 - (C31586 * be) / C31568) -
          (C31566 * ((-4 * C31579) / C31568 - C31592 / C31568) * be) / C31568) *
         be) /
            C31568 -
        C31587 / C31578;
    const double C10205 =
        (-(((-4 * C31579) / C31568 - C31592 / C31568) * be) / C31568) / C31608 -
        ((2 * ((-C31582 / C31568) / C31608 - (0 * be) / C31568) -
          C31592 / C31578) *
         be) /
            C31568;
    const double C1866 = C1827 * C118;
    const double C1846 = C1827 * C117;
    const double C1834 = C1827 * C116;
    const double C2314 = C1827 * C252;
    const double C2302 = C1827 * C251;
    const double C2506 = C1827 * C357;
    const double C2494 = C1827 * C356;
    const double C6918 = C1827 * C998;
    const double C6898 = C1827 * C254;
    const double C6886 = C1827 * C253;
    const double C7223 = C1827 * C255;
    const double C7564 = C1827 * C718;
    const double C7552 = C1827 * C1167;
    const double C17258 = C1827 * C719;
    const double C1858 = C1831 * C362;
    const double C1854 = C1831 * C361;
    const double C1842 = C1831 * C360;
    const double C2306 = C1831 * C1170;
    const double C2294 = C1831 * C1172;
    const double C2498 = C1831 * C2119;
    const double C2486 = C1831 * C2118;
    const double C6910 = C1831 * C6374;
    const double C6906 = C1831 * C1169;
    const double C6894 = C1831 * C1168;
    const double C7231 = C1831 * C1171;
    const double C7556 = C1831 * C2672;
    const double C7544 = C1831 * C7059;
    const double C17250 = C1831 * C2673;
    const double C3533 = C3506 * C354;
    const double C3529 = C3506 * C355;
    const double C3521 = C3506 * C356;
    const double C3513 = C3506 * C357;
    const double C3911 = C3506 * C719;
    const double C3903 = C3506 * C720;
    const double C3895 = C3506 * C721;
    const double C4083 = C3506 * C360;
    const double C4075 = C3506 * C361;
    const double C4067 = C3506 * C362;
    const double C4559 = C3506 * C1167;
    const double C4551 = C3506 * C1166;
    const double C4543 = C3506 * C1165;
    const double C4539 = C3506 * C718;
    const double C5136 = C3506 * C1170;
    const double C5128 = C3506 * C1172;
    const double C5350 = C3506 * C1168;
    const double C8601 = C3506 * C1687;
    const double C8593 = C3506 * C1688;
    const double C9156 = C3506 * C1171;
    const double C9364 = C3506 * C1169;
    const double C9575 = C3506 * C6373;
    const double C10077 = C3506 * C6374;
    const double C10234 = C10207 * C362;
    const double C10230 = C10207 * C361;
    const double C10218 = C10207 * C360;
    const double C10654 = C10207 * C1170;
    const double C10642 = C10207 * C1172;
    const double C10842 = C10207 * C2119;
    const double C10830 = C10207 * C2118;
    const double C11262 = C10207 * C6374;
    const double C11258 = C10207 * C1169;
    const double C11246 = C10207 * C1168;
    const double C11567 = C10207 * C1171;
    const double C11884 = C10207 * C2672;
    const double C11872 = C10207 * C7059;
    const double C13211 = C10207 * C2673;
    const double C13552 = C13533 * C2118;
    const double C13548 = C13533 * C2119;
    const double C13918 = C13533 * C2673;
    const double C14076 = C13533 * C2122;
    const double C14446 = C13533 * C7059;
    const double C14442 = C13533 * C2672;
    const double C14974 = C13533 * C7060;
    const double C20433 = C20406 * C354;
    const double C20429 = C20406 * C355;
    const double C20421 = C20406 * C356;
    const double C20413 = C20406 * C357;
    const double C20811 = C20406 * C719;
    const double C20803 = C20406 * C720;
    const double C20795 = C20406 * C721;
    const double C20983 = C20406 * C360;
    const double C20975 = C20406 * C361;
    const double C20967 = C20406 * C362;
    const double C21293 = C20406 * C1165;
    const double C21289 = C20406 * C1166;
    const double C21484 = C20406 * C1687;
    const double C21476 = C20406 * C1688;
    const double C21471 = C20406 * C1167;
    const double C21463 = C20406 * C718;
    const double C22062 = C20406 * C1170;
    const double C22054 = C20406 * C1171;
    const double C22284 = C20406 * C1168;
    const double C22276 = C20406 * C1169;
    const double C23943 = C20406 * C1172;
    const double C27427 = C20406 * C6373;
    const double C27929 = C20406 * C6374;
    const double C22430 = C22411 * C2118;
    const double C22426 = C22411 * C2119;
    const double C22796 = C22411 * C2673;
    const double C22954 = C22411 * C2122;
    const double C28155 = C22411 * C7059;
    const double C28151 = C22411 * C2672;
    const double C28683 = C22411 * C7060;
    const double C24294 = C24267 * C362;
    const double C24290 = C24267 * C361;
    const double C24278 = C24267 * C360;
    const double C24714 = C24267 * C1170;
    const double C24702 = C24267 * C1172;
    const double C24902 = C24267 * C2119;
    const double C24890 = C24267 * C2118;
    const double C25394 = C24267 * C1169;
    const double C25382 = C24267 * C1171;
    const double C25378 = C24267 * C1168;
    const double C25971 = C24267 * C2673;
    const double C26186 = C24267 * C2672;
    const double C30972 = C24267 * C6374;
    const double C31542 = C24267 * C7059;
    const double C31645 = C31641 - C31634;
    const double C22444 = C33155 * C138;
    const double C22416 = C33155 * C137;
    const double C22810 = C33155 * C282;
    const double C22968 = C33155 * C387;
    const double C28169 = C33155 * C284;
    const double C28141 = C33155 * C283;
    const double C28697 = C33155 * C733;
    const double C11974 =
        (C33148 + 2 * C32956) / C31608 - (C33155 * C32952) / C31568;
    const double C13562 = C13523 * C386;
    const double C13542 = C13523 * C387;
    const double C13928 = C13523 * C734;
    const double C14086 = C13523 * C390;
    const double C14456 = C13523 * C1194;
    const double C14436 = C13523 * C733;
    const double C14984 = C13523 * C1195;
    const double C22440 = C33152 * C386;
    const double C22420 = C33152 * C387;
    const double C22806 = C33152 * C734;
    const double C22964 = C33152 * C390;
    const double C28165 = C33152 * C1194;
    const double C28145 = C33152 * C733;
    const double C28693 = C33152 * C1195;
    const double C11975 =
        (C33137 + 2 * C32963 + C33155) / C31608 - (C33152 * C32952) / C31568;
    const double C11976 = (C33118 + C32960 / C31568 + C33152) / C31608 -
                          (C33143 * C32952) / C31568;
    const double C173 = C168 - C162;
    const double C505 = C501 - C487;
    const double C879 = C876 - C869;
    const double C625 = C621 - C607;
    const double C3271 = C3270 - C3263;
    const double C6478 = C6477 + C6475;
    const double C8166 = C8165 + C8160;
    const double C14077 = C13532 * C2133;
    const double C22955 = C22410 * C2133;
    const double C14078 = C33099 * C2140;
    const double C22956 = C33099 * C2140;
    const double C14075 = C13532 * C2132;
    const double C22953 = C22410 * C2132;
    const double C6309 = C6307 - C6304;
    const double C6661 = C6659 - C6653;
    const double C14975 = C13532 * C7065;
    const double C28684 = C22410 * C7065;
    const double C14976 = C33099 * C7069;
    const double C28685 = C33099 * C7069;
    const double C14973 = C13532 * C7064;
    const double C28682 = C22410 * C7064;
    const double C32330 = C32328 + C32317;
    const double C32329 = C32327 + C32314;
    const double C32360 = C32352 + C32334;
    const double C182 = C177 * C32856;
    const double C2796 = C177 * C33083;
    const double C15112 = C177 * C15098;
    const double C514 = C510 * C32856;
    const double C871 = C510 * C33135;
    const double C2794 = C510 * C32918;
    const double C3126 = C510 * C33083;
    const double C5486 = C510 * C5473;
    const double C15110 = C510 * C32918;
    const double C15442 = C510 * C15098;
    const double C17587 = C510 * C32921;
    const double C884 = C881 * C33115;
    const double C1353 = C881 * C33135;
    const double C3127 = C881 * C32918;
    const double C5484 = C881 * C33115;
    const double C5857 = C881 * C5473;
    const double C7694 = C881 * C7684;
    const double C15443 = C881 * C32918;
    const double C15822 = C881 * C33140;
    const double C17585 = C881 * C17575;
    const double C17958 = C881 * C32921;
    const double C634 = C630 * C32856;
    const double C3265 = C630 * C33083;
    const double C15578 = C630 * C15098;
    const double C1539 = C1535 * C33135;
    const double C3266 = C1535 * C32918;
    const double C6009 = C1535 * C5473;
    const double C15579 = C1535 * C32918;
    const double C18110 = C1535 * C32921;
    const double C488 = C32873 * C279;
    const double C870 = C32873 * C287;
    const double C608 = C32873 * C384;
    const double C3535 = C32960 * C384;
    const double C20435 = C32960 * C384;
    const double C1860 = C33118 * C392;
    const double C4069 = C32960 * C392;
    const double C10236 = C33118 * C392;
    const double C20969 = C32960 * C392;
    const double C24296 = C24261 * C392;
    const double C3264 = C32873 * C736;
    const double C3897 = C32960 * C736;
    const double C20797 = C32960 * C736;
    const double C1352 = C1053 * C33115;
    const double C5856 = C1053 * C33115;
    const double C7693 = C1053 * C33092;
    const double C15821 = C1053 * C33092;
    const double C17957 = C1053 * C17575;
    const double C1538 = C1534 * C33115;
    const double C6008 = C1534 * C33115;
    const double C18109 = C1534 * C17575;
    const double C6654 = C32873 * C6382;
    const double C9577 = C32960 * C6382;
    const double C27429 = C32960 * C6382;
    const double C6912 = C33118 * C6383;
    const double C10079 = C32960 * C6383;
    const double C11264 = C33118 * C6383;
    const double C27931 = C32960 * C6383;
    const double C30974 = C24261 * C6383;
    const double C2135 =
        (3 * (C31885 + C31795 * C32005 + C32001 * ae) +
         C31795 * (2 * C32005 + C31795 * C32090 + C32081 * ae) +
         (2 * C32001 + C31795 * C32081) * ae) /
        C31568;
    const double C7067 =
        (3 * (C31970 + C31795 * C32207 + C32203 * ae) +
         C31795 * (2 * C32207 + C31795 * C32253 + C32244 * ae) +
         (2 * C32203 + C31795 * C32244) * ae) /
        C31568;
    const double C12205 =
        (3 * (C31974 + C31795 * C32126 + C32122 * ae) +
         C31795 * (2 * C32126 + C31795 * C32419 + C32411 * ae) +
         (2 * C32122 + C31795 * C32411) * ae) /
        C31568;
    const double C32459 = C32432 + C32457;
    const double C32386 = C32384 + C32367;
    const double C32505 = C32472 + C32503;
    const double C2141 =
        (3 * (C31827 + ae * C32004 + be * C32005 + C31795 * C32084) +
         ae * (2 * C32004 + C31795 * C32089 + C32081 * be) +
         be * (2 * C32005 + C31795 * C32090 + C32081 * ae) +
         C31795 *
             (2 * C32084 + ae * C32089 + be * C32090 +
              C31795 * (C31839 + ae * C32079 + be * C32082 +
                        C31795 * (ae * C31928 + be * C31930 +
                                  C31795 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31813))))) /
        C31576;
    const double C2134 =
        (3 * (C31883 + C31795 * C32004 + C32001 * be) +
         C31795 * (2 * C32004 + C31795 * C32089 + C32081 * be) +
         (2 * C32001 + C31795 * C32081) * be) /
        C31568;
    const double C7070 =
        (3 * (C32141 + ae * C32206 + be * C32207 + C31795 * C32247) +
         ae * (2 * C32206 + C31795 * C32252 + C32244 * be) +
         be * (2 * C32207 + C31795 * C32253 + C32244 * ae) +
         C31795 *
             (2 * C32247 + ae * C32252 + be * C32253 +
              C31795 * (C32146 + ae * C32242 + be * C32245 +
                        C31795 * (ae * C32177 + be * C32181 +
                                  C31795 * (C31837 + (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                         C31567 * C31954))))) /
        C31576;
    const double C7066 =
        (3 * (C31968 + C31795 * C32206 + C32203 * be) +
         C31795 * (2 * C32206 + C31795 * C32252 + C32244 * be) +
         (2 * C32203 + C31795 * C32244) * be) /
        C31568;
    const double C12206 =
        (3 * (C32116 + ae * C32125 + be * C32126 + C31795 * C32408) +
         ae * (2 * C32125 + C31795 * C32418 + C32411 * be) +
         be * (2 * C32126 + C31795 * C32419 + C32411 * ae) +
         C31795 *
             (2 * C32408 + ae * C32418 + be * C32419 +
              C31795 * (C32396 + ae * C32409 + be * C32412 +
                        C31795 * (ae * C32397 + be * C32399 +
                                  C31795 * C31944 * C31801 *
                                      (C31831 * C31832 +
                                       C31798 * bs[8] * std::pow(C31793, 8)) *
                                      C31567)))) /
        C31576;
    const double C12204 =
        (3 * (C31972 + C31795 * C32125 + C32122 * be) +
         C31795 * (2 * C32125 + C31795 * C32418 + C32411 * be) +
         (2 * C32122 + C31795 * C32411) * be) /
        C31568;
    const double C32458 = C32426 + C32456;
    const double C32385 = C32383 + C32364;
    const double C32504 = C32468 + C32502;
    const double C103 =
        (C33144 + 2 * C32778) / C31608 - (C33153 * C32769) / C31568;
    const double C104 =
        (C33131 + 2 * C32786 + C33153) / C31608 - (C33146 * C32769) / C31568;
    const double C105 = (C33106 + C32783 / C31568 + C33146) / C31608 -
                        (C33133 * C32769) / C31568;
    const double C15824 = C175 * C33154;
    const double C15817 = C174 * C33154;
    const double C16154 = C512 * C33154;
    const double C16288 = C632 * C33154;
    const double C6221 =
        (C33147 + 2 * C32914) / C31608 - (C33154 * C32910) / C31568;
    const double C7695 = C511 * C7683;
    const double C7690 = C512 * C7683;
    const double C8025 = C880 * C7683;
    const double C8162 = C1537 * C7683;
    const double C15823 = C511 * C33150;
    const double C15818 = C512 * C33150;
    const double C16153 = C880 * C33150;
    const double C16287 = C1537 * C33150;
    const double C6222 =
        (C33135 + 2 * C32921 + C33154) / C31608 - (C33150 * C32910) / C31568;
    const double C6223 = (C33115 + C32918 / C31568 + C33150) / C31608 -
                         (C33140 * C32910) / C31568;
    const double C31689 = C31684 - C31685;
    const double C31693 = C31688 - C31681;
    const double C1862 = C1829 * C355;
    const double C1850 = C1829 * C356;
    const double C1838 = C1829 * C357;
    const double C2310 = C1829 * C719;
    const double C2298 = C1829 * C720;
    const double C2502 = C1829 * C360;
    const double C2490 = C1829 * C361;
    const double C6914 = C1829 * C1687;
    const double C6902 = C1829 * C1167;
    const double C6890 = C1829 * C718;
    const double C7227 = C1829 * C1166;
    const double C7560 = C1829 * C1168;
    const double C7548 = C1829 * C1169;
    const double C17254 = C1829 * C1170;
    const double C3537 = C3504 * C119;
    const double C3525 = C3504 * C118;
    const double C3517 = C3504 * C117;
    const double C3509 = C3504 * C116;
    const double C3915 = C3504 * C252;
    const double C3907 = C3504 * C251;
    const double C3899 = C3504 * C250;
    const double C4087 = C3504 * C357;
    const double C4079 = C3504 * C356;
    const double C4071 = C3504 * C355;
    const double C4563 = C3504 * C254;
    const double C4555 = C3504 * C255;
    const double C4547 = C3504 * C256;
    const double C4535 = C3504 * C253;
    const double C5140 = C3504 * C719;
    const double C5132 = C3504 * C720;
    const double C5354 = C3504 * C718;
    const double C8605 = C3504 * C998;
    const double C8597 = C3504 * C997;
    const double C9160 = C3504 * C1166;
    const double C9368 = C3504 * C1167;
    const double C9579 = C3504 * C999;
    const double C10081 = C3504 * C1687;
    const double C10242 = C10203 * C118;
    const double C10222 = C10203 * C117;
    const double C10210 = C10203 * C116;
    const double C10662 = C10203 * C252;
    const double C10650 = C10203 * C251;
    const double C10850 = C10203 * C357;
    const double C10838 = C10203 * C356;
    const double C11270 = C10203 * C998;
    const double C11250 = C10203 * C254;
    const double C11238 = C10203 * C253;
    const double C11559 = C10203 * C255;
    const double C11892 = C10203 * C718;
    const double C11880 = C10203 * C1167;
    const double C13219 = C10203 * C719;
    const double C10238 = C10205 * C355;
    const double C10226 = C10205 * C356;
    const double C10214 = C10205 * C357;
    const double C10658 = C10205 * C719;
    const double C10646 = C10205 * C720;
    const double C10846 = C10205 * C360;
    const double C10834 = C10205 * C361;
    const double C11266 = C10205 * C1687;
    const double C11254 = C10205 * C1167;
    const double C11242 = C10205 * C718;
    const double C11563 = C10205 * C1166;
    const double C11888 = C10205 * C1168;
    const double C11876 = C10205 * C1169;
    const double C13215 = C10205 * C1170;
    const double C1877 = C1865 - C1866;
    const double C1872 = C1845 - C1846;
    const double C1869 = C1833 - C1834;
    const double C2322 = C2313 - C2314;
    const double C2319 = C2301 - C2302;
    const double C2514 = C2505 - C2506;
    const double C2511 = C2493 - C2494;
    const double C6929 = C6917 - C6918;
    const double C6924 = C6897 - C6898;
    const double C6921 = C6885 - C6886;
    const double C7234 = C7222 - C7223;
    const double C7572 = C7563 - C7564;
    const double C7569 = C7551 - C7552;
    const double C17263 = C17257 - C17258;
    const double C1875 = C1857 - C1858;
    const double C1874 = C1853 - C1854;
    const double C1871 = C1841 - C1842;
    const double C2320 = C2305 - C2306;
    const double C2317 = C2293 - C2294;
    const double C2512 = C2497 - C2498;
    const double C2509 = C2485 - C2486;
    const double C6927 = C6909 - C6910;
    const double C6926 = C6905 - C6906;
    const double C6923 = C6893 - C6894;
    const double C7236 = C7230 - C7231;
    const double C7570 = C7555 - C7556;
    const double C7567 = C7543 - C7544;
    const double C17261 = C17249 - C17250;
    const double C3546 = C3532 - C3533;
    const double C3545 = C3528 - C3529;
    const double C3543 = C3520 - C3521;
    const double C3541 = C3512 - C3513;
    const double C3922 = C3910 - C3911;
    const double C3920 = C3902 - C3903;
    const double C3918 = C3894 - C3895;
    const double C4094 = C4082 - C4083;
    const double C4092 = C4074 - C4075;
    const double C4090 = C4066 - C4067;
    const double C4572 = C4558 - C4559;
    const double C4570 = C4550 - C4551;
    const double C4568 = C4542 - C4543;
    const double C4567 = C4538 - C4539;
    const double C5145 = C5135 - C5136;
    const double C5143 = C5127 - C5128;
    const double C5357 = C5349 - C5350;
    const double C8610 = C8600 - C8601;
    const double C8608 = C8592 - C8593;
    const double C9163 = C9155 - C9156;
    const double C9371 = C9363 - C9364;
    const double C9582 = C9574 - C9575;
    const double C10084 = C10076 - C10077;
    const double C10251 = C10233 - C10234;
    const double C10250 = C10229 - C10230;
    const double C10247 = C10217 - C10218;
    const double C10668 = C10653 - C10654;
    const double C10665 = C10641 - C10642;
    const double C10856 = C10841 - C10842;
    const double C10853 = C10829 - C10830;
    const double C11279 = C11261 - C11262;
    const double C11278 = C11257 - C11258;
    const double C11275 = C11245 - C11246;
    const double C11572 = C11566 - C11567;
    const double C11898 = C11883 - C11884;
    const double C11895 = C11871 - C11872;
    const double C13222 = C13210 - C13211;
    const double C13571 = C13551 - C13552;
    const double C13570 = C13547 - C13548;
    const double C13933 = C13917 - C13918;
    const double C14465 = C14445 - C14446;
    const double C14464 = C14441 - C14442;
    const double C20446 = C20432 - C20433;
    const double C20445 = C20428 - C20429;
    const double C20443 = C20420 - C20421;
    const double C20441 = C20412 - C20413;
    const double C20822 = C20810 - C20811;
    const double C20820 = C20802 - C20803;
    const double C20818 = C20794 - C20795;
    const double C20994 = C20982 - C20983;
    const double C20992 = C20974 - C20975;
    const double C20990 = C20966 - C20967;
    const double C21302 = C21292 - C21293;
    const double C21301 = C21288 - C21289;
    const double C21497 = C21483 - C21484;
    const double C21495 = C21475 - C21476;
    const double C21494 = C21470 - C21471;
    const double C21492 = C21462 - C21463;
    const double C22071 = C22061 - C22062;
    const double C22069 = C22053 - C22054;
    const double C22293 = C22283 - C22284;
    const double C22291 = C22275 - C22276;
    const double C23950 = C23942 - C23943;
    const double C27434 = C27426 - C27427;
    const double C27936 = C27928 - C27929;
    const double C22449 = C22429 - C22430;
    const double C22448 = C22425 - C22426;
    const double C22811 = C22795 - C22796;
    const double C28174 = C28154 - C28155;
    const double C28173 = C28150 - C28151;
    const double C24311 = C24293 - C24294;
    const double C24310 = C24289 - C24290;
    const double C24307 = C24277 - C24278;
    const double C24728 = C24713 - C24714;
    const double C24725 = C24701 - C24702;
    const double C24916 = C24901 - C24902;
    const double C24913 = C24889 - C24890;
    const double C25411 = C25393 - C25394;
    const double C25408 = C25381 - C25382;
    const double C25407 = C25377 - C25378;
    const double C25982 = C25970 - C25971;
    const double C26197 = C26185 - C26186;
    const double C30984 = C30971 - C30972;
    const double C31553 = C31541 - C31542;
    const double C31650 = C31645 / C31608;
    const double C31649 = C31566 * C31645;
    const double C31682 = 2 * C31645;
    const double C178 = C173 + C163;
    const double C8023 = C6478 * C33092;
    const double C16151 = C6478 * C33092;
    const double C8167 = C8166 * C33092;
    const double C16285 = C8166 * C33092;
    const double C14091 = C14075 - C14076;
    const double C22969 = C22953 - C22954;
    const double C6311 = C6309 + C6305;
    const double C14989 = C14973 - C14974;
    const double C28698 = C28682 - C28683;
    const double C12116 =
        (4 * (2 * C32021 + C31795 * C32044 + C32035 * ae) +
         C31795 * (3 * C32044 + C31795 * C32330 + C32320 * ae) +
         (3 * C32035 + C31795 * C32320) * ae) /
        C31568;
    const double C12119 =
        (4 * (2 * C32038 + ae * C32043 + be * C32044 + C31795 * C32322) +
         ae * (3 * C32043 + C31795 * C32329 + C32320 * be) +
         be * (3 * C32044 + C31795 * C32330 + C32320 * ae) +
         C31795 * (3 * C32322 + ae * C32329 + be * C32330 +
                   C31795 * (2 * C32312 + ae * C32323 + be * C32324 +
                             C31795 * (C31825 + ae * C32306 + be * C32309 +
                                       C31795 * (ae * C31894 + be * C31898 +
                                                 C31795 * C31837))))) /
        C31576;
    const double C12115 =
        (4 * (2 * C32020 + C31795 * C32043 + C32035 * be) +
         C31795 * (3 * C32043 + C31795 * C32329 + C32320 * be) +
         (3 * C32035 + C31795 * C32320) * be) /
        C31568;
    const double C32382 = C32360 + C32378;
    const double C2798 = C2793 + C2794;
    const double C15114 = C15109 + C15110;
    const double C886 = C874 + C884;
    const double C5489 = C5488 + C5484;
    const double C17590 = C17589 + C17585;
    const double C509 = C505 + C488;
    const double C882 = C879 + C870;
    const double C629 = C625 + C608;
    const double C3272 = C3271 + C3264;
    const double C6663 = C6661 + C6654;
    const double C32461 = C32459 + C32448;
    const double C32388 = C31795 * C32386;
    const double C32507 = C32505 + C32495;
    const double C32460 = C32458 + C32445;
    const double C32387 = C31795 * C32385;
    const double C32506 = C32504 + C32492;
    const double C31694 = C31689 * be;
    const double C31696 = C31693 * ae;
    const double C20404 = -(C31693 * be) / C31568;
    const double C1876 = C1861 - C1862;
    const double C1873 = C1849 - C1850;
    const double C1870 = C1837 - C1838;
    const double C2321 = C2309 - C2310;
    const double C2318 = C2297 - C2298;
    const double C2513 = C2501 - C2502;
    const double C2510 = C2489 - C2490;
    const double C6928 = C6913 - C6914;
    const double C6925 = C6901 - C6902;
    const double C6922 = C6889 - C6890;
    const double C7235 = C7226 - C7227;
    const double C7571 = C7559 - C7560;
    const double C7568 = C7547 - C7548;
    const double C17262 = C17253 - C17254;
    const double C3547 = C3536 - C3537;
    const double C3544 = C3524 - C3525;
    const double C3542 = C3516 - C3517;
    const double C3540 = C3508 - C3509;
    const double C3923 = C3914 - C3915;
    const double C3921 = C3906 - C3907;
    const double C3919 = C3898 - C3899;
    const double C4095 = C4086 - C4087;
    const double C4093 = C4078 - C4079;
    const double C4091 = C4070 - C4071;
    const double C4573 = C4562 - C4563;
    const double C4571 = C4554 - C4555;
    const double C4569 = C4546 - C4547;
    const double C4566 = C4534 - C4535;
    const double C5146 = C5139 - C5140;
    const double C5144 = C5131 - C5132;
    const double C5358 = C5353 - C5354;
    const double C8611 = C8604 - C8605;
    const double C8609 = C8596 - C8597;
    const double C9164 = C9159 - C9160;
    const double C9372 = C9367 - C9368;
    const double C9583 = C9578 - C9579;
    const double C10085 = C10080 - C10081;
    const double C10253 = C10241 - C10242;
    const double C10248 = C10221 - C10222;
    const double C10245 = C10209 - C10210;
    const double C10670 = C10661 - C10662;
    const double C10667 = C10649 - C10650;
    const double C10858 = C10849 - C10850;
    const double C10855 = C10837 - C10838;
    const double C11281 = C11269 - C11270;
    const double C11276 = C11249 - C11250;
    const double C11273 = C11237 - C11238;
    const double C11570 = C11558 - C11559;
    const double C11900 = C11891 - C11892;
    const double C11897 = C11879 - C11880;
    const double C13224 = C13218 - C13219;
    const double C10252 = C10237 - C10238;
    const double C10249 = C10225 - C10226;
    const double C10246 = C10213 - C10214;
    const double C10669 = C10657 - C10658;
    const double C10666 = C10645 - C10646;
    const double C10857 = C10845 - C10846;
    const double C10854 = C10833 - C10834;
    const double C11280 = C11265 - C11266;
    const double C11277 = C11253 - C11254;
    const double C11274 = C11241 - C11242;
    const double C11571 = C11562 - C11563;
    const double C11899 = C11887 - C11888;
    const double C11896 = C11875 - C11876;
    const double C13223 = C13214 - C13215;
    const double C1886 = C1877 - C1867;
    const double C1881 = C1872 - C1847;
    const double C1878 = C1869 - C1835;
    const double C2328 = C2322 - C2315;
    const double C2325 = C2319 - C2303;
    const double C2520 = C2514 - C2507;
    const double C2517 = C2511 - C2495;
    const double C6938 = C6929 - C6919;
    const double C6933 = C6924 - C6899;
    const double C6930 = C6921 - C6887;
    const double C7237 = C7234 - C7224;
    const double C7578 = C7572 - C7565;
    const double C7575 = C7569 - C7553;
    const double C17266 = C17263 - C17259;
    const double C1884 = C1875 - C1859;
    const double C1883 = C1874 - C1855;
    const double C1880 = C1871 - C1843;
    const double C2326 = C2320 - C2307;
    const double C2323 = C2317 - C2295;
    const double C2518 = C2512 - C2499;
    const double C2515 = C2509 - C2487;
    const double C6936 = C6927 - C6911;
    const double C6935 = C6926 - C6907;
    const double C6932 = C6923 - C6895;
    const double C7239 = C7236 - C7232;
    const double C7576 = C7570 - C7557;
    const double C7573 = C7567 - C7545;
    const double C17264 = C17261 - C17251;
    const double C3554 = C3546 - C3534;
    const double C3553 = C3545 - C3530;
    const double C3551 = C3543 - C3522;
    const double C3549 = C3541 - C3514;
    const double C3928 = C3922 - C3912;
    const double C3926 = C3920 - C3904;
    const double C3924 = C3918 - C3896;
    const double C4100 = C4094 - C4084;
    const double C4098 = C4092 - C4076;
    const double C4096 = C4090 - C4068;
    const double C4580 = C4572 - C4560;
    const double C4578 = C4570 - C4552;
    const double C4576 = C4568 - C4544;
    const double C4575 = C4567 - C4540;
    const double C5149 = C5145 - C5137;
    const double C5147 = C5143 - C5129;
    const double C5359 = C5357 - C5351;
    const double C8614 = C8610 - C8602;
    const double C8612 = C8608 - C8594;
    const double C9165 = C9163 - C9157;
    const double C9373 = C9371 - C9365;
    const double C9584 = C9582 - C9576;
    const double C10086 = C10084 - C10078;
    const double C10260 = C10251 - C10235;
    const double C10259 = C10250 - C10231;
    const double C10256 = C10247 - C10219;
    const double C10674 = C10668 - C10655;
    const double C10671 = C10665 - C10643;
    const double C10862 = C10856 - C10843;
    const double C10859 = C10853 - C10831;
    const double C11288 = C11279 - C11263;
    const double C11287 = C11278 - C11259;
    const double C11284 = C11275 - C11247;
    const double C11575 = C11572 - C11568;
    const double C11904 = C11898 - C11885;
    const double C11901 = C11895 - C11873;
    const double C13225 = C13222 - C13212;
    const double C13579 = C13571 - C13553;
    const double C13578 = C13570 - C13549;
    const double C13937 = C13933 - C13919;
    const double C14473 = C14465 - C14447;
    const double C14472 = C14464 - C14443;
    const double C20454 = C20446 - C20434;
    const double C20453 = C20445 - C20430;
    const double C20451 = C20443 - C20422;
    const double C20449 = C20441 - C20414;
    const double C20828 = C20822 - C20812;
    const double C20826 = C20820 - C20804;
    const double C20824 = C20818 - C20796;
    const double C21000 = C20994 - C20984;
    const double C20998 = C20992 - C20976;
    const double C20996 = C20990 - C20968;
    const double C21306 = C21302 - C21294;
    const double C21305 = C21301 - C21290;
    const double C21505 = C21497 - C21485;
    const double C21503 = C21495 - C21477;
    const double C21502 = C21494 - C21472;
    const double C21500 = C21492 - C21464;
    const double C22075 = C22071 - C22063;
    const double C22073 = C22069 - C22055;
    const double C22297 = C22293 - C22285;
    const double C22295 = C22291 - C22277;
    const double C23952 = C23950 - C23944;
    const double C27436 = C27434 - C27428;
    const double C27938 = C27936 - C27930;
    const double C22457 = C22449 - C22431;
    const double C22456 = C22448 - C22427;
    const double C22815 = C22811 - C22797;
    const double C28182 = C28174 - C28156;
    const double C28181 = C28173 - C28152;
    const double C24320 = C24311 - C24295;
    const double C24319 = C24310 - C24291;
    const double C24316 = C24307 - C24279;
    const double C24734 = C24728 - C24715;
    const double C24731 = C24725 - C24703;
    const double C24922 = C24916 - C24903;
    const double C24919 = C24913 - C24891;
    const double C25420 = C25411 - C25395;
    const double C25417 = C25408 - C25383;
    const double C25416 = C25407 - C25379;
    const double C25985 = C25982 - C25972;
    const double C26200 = C26197 - C26187;
    const double C30987 = C30984 - C30973;
    const double C31556 = C31553 - C31543;
    const double C31668 = C31650 - C31664;
    const double C31654 = C31649 + C33085;
    const double C183 = C178 * C32856;
    const double C14095 = C14091 - C14077;
    const double C22973 = C22969 - C22955;
    const double C14993 = C14989 - C14975;
    const double C28702 = C28698 - C28684;
    const double C513 = C509 * C32856;
    const double C2795 = C509 * C32918;
    const double C15111 = C509 * C32918;
    const double C885 = C882 * C33115;
    const double C3125 = C882 * C32918;
    const double C5485 = C882 * C33115;
    const double C15441 = C882 * C32918;
    const double C17586 = C882 * C17575;
    const double C633 = C629 * C32856;
    const double C3273 = C3272 * C32918;
    const double C15577 = C3272 * C32918;
    const double C12291 =
        (4 * (2 * C32013 + C31795 * C32067 + C32058 * ae) +
         C31795 * (3 * C32067 + C31795 * C32461 + C32451 * ae) +
         (3 * C32058 + C31795 * C32451) * ae) /
        C31568;
    const double C32390 = C32348 + C32388;
    const double C12377 =
        (4 * (2 * C32114 + C31795 * C32230 + C32221 * ae) +
         C31795 * (3 * C32230 + C31795 * C32507 + C32498 * ae) +
         (3 * C32221 + C31795 * C32498) * ae) /
        C31568;
    const double C12292 =
        (4 * (2 * C32061 + ae * C32066 + be * C32067 + C31795 * C32453) +
         ae * (3 * C32066 + C31795 * C32460 + C32451 * be) +
         be * (3 * C32067 + C31795 * C32461 + C32451 * ae) +
         C31795 * (3 * C32453 + ae * C32460 + be * C32461 +
                   C31795 * (2 * C32443 + ae * C32454 + be * C32455 +
                             C31795 * (C32195 + ae * C32437 + be * C32440 +
                                       C31795 * (ae * C32256 + be * C32260 +
                                                 C31795 * C31801 *
                                                     (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                     C31567))))) /
        C31576;
    const double C12290 =
        (4 * (2 * C32012 + C31795 * C32066 + C32058 * be) +
         C31795 * (3 * C32066 + C31795 * C32460 + C32451 * be) +
         (3 * C32058 + C31795 * C32451) * be) /
        C31568;
    const double C32389 = C32340 + C32387;
    const double C12378 =
        (4 * (2 * C32224 + ae * C32229 + be * C32230 + C31795 * C32496) +
         ae * (3 * C32229 + C31795 * C32506 + C32498 * be) +
         be * (3 * C32230 + C31795 * C32507 + C32498 * ae) +
         C31795 * (3 * C32496 + ae * C32506 + be * C32507 +
                   C31795 * (2 * C32484 + ae * C32500 + be * C32501 +
                             C31795 * (C32467 + ae * C32485 + be * C32488 +
                                       C31795 * (ae * C32469 + be * C32473 +
                                                 C31795 * C31944 *
                                                     (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                     C31567))))) /
        C31576;
    const double C12376 =
        (4 * (2 * C32113 + C31795 * C32229 + C32221 * be) +
         C31795 * (3 * C32229 + C31795 * C32506 + C32498 * be) +
         (3 * C32221 + C31795 * C32498) * be) /
        C31568;
    const double C31697 = C31694 / C31568;
    const double C31700 = C31696 / C31578;
    const double C31699 = C31566 * C31696;
    const double C20437 = C20404 * C119;
    const double C20425 = C20404 * C118;
    const double C20417 = C20404 * C117;
    const double C20409 = C20404 * C116;
    const double C20815 = C20404 * C252;
    const double C20807 = C20404 * C251;
    const double C20799 = C20404 * C250;
    const double C20987 = C20404 * C357;
    const double C20979 = C20404 * C356;
    const double C20971 = C20404 * C355;
    const double C21297 = C20404 * C256;
    const double C21285 = C20404 * C255;
    const double C21488 = C20404 * C998;
    const double C21480 = C20404 * C997;
    const double C21467 = C20404 * C254;
    const double C21459 = C20404 * C253;
    const double C22066 = C20404 * C719;
    const double C22058 = C20404 * C1166;
    const double C22288 = C20404 * C718;
    const double C22280 = C20404 * C1167;
    const double C23947 = C20404 * C720;
    const double C27431 = C20404 * C999;
    const double C27933 = C20404 * C1687;
    const double C1885 = C1876 - C1863;
    const double C1882 = C1873 - C1851;
    const double C1879 = C1870 - C1839;
    const double C2327 = C2321 - C2311;
    const double C2324 = C2318 - C2299;
    const double C2519 = C2513 - C2503;
    const double C2516 = C2510 - C2491;
    const double C6937 = C6928 - C6915;
    const double C6934 = C6925 - C6903;
    const double C6931 = C6922 - C6891;
    const double C7238 = C7235 - C7228;
    const double C7577 = C7571 - C7561;
    const double C7574 = C7568 - C7549;
    const double C17265 = C17262 - C17255;
    const double C3555 = C3547 - C3538;
    const double C3552 = C3544 - C3526;
    const double C3550 = C3542 - C3518;
    const double C3548 = C3540 - C3510;
    const double C3929 = C3923 - C3916;
    const double C3927 = C3921 - C3908;
    const double C3925 = C3919 - C3900;
    const double C4101 = C4095 - C4088;
    const double C4099 = C4093 - C4080;
    const double C4097 = C4091 - C4072;
    const double C4581 = C4573 - C4564;
    const double C4579 = C4571 - C4556;
    const double C4577 = C4569 - C4548;
    const double C4574 = C4566 - C4536;
    const double C5150 = C5146 - C5141;
    const double C5148 = C5144 - C5133;
    const double C5360 = C5358 - C5355;
    const double C8615 = C8611 - C8606;
    const double C8613 = C8609 - C8598;
    const double C9166 = C9164 - C9161;
    const double C9374 = C9372 - C9369;
    const double C9585 = C9583 - C9580;
    const double C10087 = C10085 - C10082;
    const double C10262 = C10253 - C10243;
    const double C10257 = C10248 - C10223;
    const double C10254 = C10245 - C10211;
    const double C10676 = C10670 - C10663;
    const double C10673 = C10667 - C10651;
    const double C10864 = C10858 - C10851;
    const double C10861 = C10855 - C10839;
    const double C11290 = C11281 - C11271;
    const double C11285 = C11276 - C11251;
    const double C11282 = C11273 - C11239;
    const double C11573 = C11570 - C11560;
    const double C11906 = C11900 - C11893;
    const double C11903 = C11897 - C11881;
    const double C13227 = C13224 - C13220;
    const double C10261 = C10252 - C10239;
    const double C10258 = C10249 - C10227;
    const double C10255 = C10246 - C10215;
    const double C10675 = C10669 - C10659;
    const double C10672 = C10666 - C10647;
    const double C10863 = C10857 - C10847;
    const double C10860 = C10854 - C10835;
    const double C11289 = C11280 - C11267;
    const double C11286 = C11277 - C11255;
    const double C11283 = C11274 - C11243;
    const double C11574 = C11571 - C11564;
    const double C11905 = C11899 - C11889;
    const double C11902 = C11896 - C11877;
    const double C13226 = C13223 - C13216;
    const double C1895 = C1886 + C1868;
    const double C1890 = C1881 + C1848;
    const double C1887 = C1878 + C1836;
    const double C2334 = C2328 + C2316;
    const double C2331 = C2325 + C2304;
    const double C2526 = C2520 + C2508;
    const double C2523 = C2517 + C2496;
    const double C6947 = C6938 + C6920;
    const double C6942 = C6933 + C6900;
    const double C6939 = C6930 + C6888;
    const double C7240 = C7237 + C7225;
    const double C7584 = C7578 + C7566;
    const double C7581 = C7575 + C7554;
    const double C17269 = C17266 + C17260;
    const double C1893 = C1884 + C1860;
    const double C1892 = C1883 + C1856;
    const double C1889 = C1880 + C1844;
    const double C2332 = C2326 + C2308;
    const double C2329 = C2323 + C2296;
    const double C2524 = C2518 + C2500;
    const double C2521 = C2515 + C2488;
    const double C6945 = C6936 + C6912;
    const double C6944 = C6935 + C6908;
    const double C6941 = C6932 + C6896;
    const double C7242 = C7239 + C7233;
    const double C7582 = C7576 + C7558;
    const double C7579 = C7573 + C7546;
    const double C17267 = C17264 + C17252;
    const double C3562 = C3554 + C3535;
    const double C3561 = C3553 + C3531;
    const double C3559 = C3551 + C3523;
    const double C3557 = C3549 + C3515;
    const double C3934 = C3928 + C3913;
    const double C3932 = C3926 + C3905;
    const double C3930 = C3924 + C3897;
    const double C4106 = C4100 + C4085;
    const double C4104 = C4098 + C4077;
    const double C4102 = C4096 + C4069;
    const double C4588 = C4580 + C4561;
    const double C4586 = C4578 + C4553;
    const double C4584 = C4576 + C4545;
    const double C4583 = C4575 + C4541;
    const double C5153 = C5149 + C5138;
    const double C5151 = C5147 + C5130;
    const double C5361 = C5359 + C5352;
    const double C8618 = C8614 + C8603;
    const double C8616 = C8612 + C8595;
    const double C9167 = C9165 + C9158;
    const double C9375 = C9373 + C9366;
    const double C9586 = C9584 + C9577;
    const double C10088 = C10086 + C10079;
    const double C10269 = C10260 + C10236;
    const double C10268 = C10259 + C10232;
    const double C10265 = C10256 + C10220;
    const double C10680 = C10674 + C10656;
    const double C10677 = C10671 + C10644;
    const double C10868 = C10862 + C10844;
    const double C10865 = C10859 + C10832;
    const double C11297 = C11288 + C11264;
    const double C11296 = C11287 + C11260;
    const double C11293 = C11284 + C11248;
    const double C11578 = C11575 + C11569;
    const double C11910 = C11904 + C11886;
    const double C11907 = C11901 + C11874;
    const double C13228 = C13225 + C13213;
    const double C13587 = C13579 + C13554;
    const double C13586 = C13578 + C13550;
    const double C13941 = C13937 + C13920;
    const double C14481 = C14473 + C14448;
    const double C14480 = C14472 + C14444;
    const double C20462 = C20454 + C20435;
    const double C20461 = C20453 + C20431;
    const double C20459 = C20451 + C20423;
    const double C20457 = C20449 + C20415;
    const double C20834 = C20828 + C20813;
    const double C20832 = C20826 + C20805;
    const double C20830 = C20824 + C20797;
    const double C21006 = C21000 + C20985;
    const double C21004 = C20998 + C20977;
    const double C21002 = C20996 + C20969;
    const double C21310 = C21306 + C21295;
    const double C21309 = C21305 + C21291;
    const double C21513 = C21505 + C21486;
    const double C21511 = C21503 + C21478;
    const double C21510 = C21502 + C21473;
    const double C21508 = C21500 + C21465;
    const double C22079 = C22075 + C22064;
    const double C22077 = C22073 + C22056;
    const double C22301 = C22297 + C22286;
    const double C22299 = C22295 + C22278;
    const double C23954 = C23952 + C23945;
    const double C27438 = C27436 + C27429;
    const double C27940 = C27938 + C27931;
    const double C22465 = C22457 + C22432;
    const double C22464 = C22456 + C22428;
    const double C22819 = C22815 + C22798;
    const double C28190 = C28182 + C28157;
    const double C28189 = C28181 + C28153;
    const double C24329 = C24320 + C24296;
    const double C24328 = C24319 + C24292;
    const double C24325 = C24316 + C24280;
    const double C24740 = C24734 + C24716;
    const double C24737 = C24731 + C24704;
    const double C24928 = C24922 + C24904;
    const double C24925 = C24919 + C24892;
    const double C25429 = C25420 + C25396;
    const double C25426 = C25417 + C25384;
    const double C25425 = C25416 + C25380;
    const double C25988 = C25985 + C25973;
    const double C26203 = C26200 + C26188;
    const double C30990 = C30987 + C30974;
    const double C31559 = C31556 + C31544;
    const double C24299 = C31668 * C367;
    const double C24297 = C31668 * C366;
    const double C24287 = C31668 * C369;
    const double C24285 = C31668 * C368;
    const double C24275 = C31668 * C371;
    const double C24273 = C31668 * C370;
    const double C24719 = C31668 * C726;
    const double C24717 = C31668 * C725;
    const double C24707 = C31668 * C728;
    const double C24705 = C31668 * C727;
    const double C24907 = C31668 * C377;
    const double C24905 = C31668 * C376;
    const double C24895 = C31668 * C379;
    const double C24893 = C31668 * C378;
    const double C25399 = C31668 * C1179;
    const double C25397 = C31668 * C1178;
    const double C25387 = C31668 * C1177;
    const double C25385 = C31668 * C1176;
    const double C25375 = C31668 * C724;
    const double C25373 = C31668 * C723;
    const double C25976 = C31668 * C1185;
    const double C25974 = C31668 * C1184;
    const double C26191 = C31668 * C1181;
    const double C26189 = C31668 * C1180;
    const double C30977 = C31668 * C1691;
    const double C30975 = C31668 * C1690;
    const double C31547 = C31668 * C1183;
    const double C31545 = C31668 * C1182;
    const double C11985 =
        (C31668 / C31608 + ((C31566 * C31716 + C24261) * ae) / C31568) /
            C31608 -
        ((C31566 * (C31716 / C31608 + (0 * ae) / C31568) + C33099) * be) /
            C31568;
    const double C13530 =
        C31668 / C31608 - ((C31566 * C31716 + C24261) * be) / C31568;
    const double C22408 =
        C31668 / C31608 + ((C31566 * C31716 + C24261) * ae) / C31568;
    const double C31658 = C31654 * be;
    const double C14099 = C14095 + C14078;
    const double C22977 = C22973 + C22956;
    const double C14997 = C14993 + C14976;
    const double C28706 = C28702 + C28685;
    const double C32392 = C32390 + C32377;
    const double C32391 = C32389 + C32374;
    const double C31703 = C31700 - C31697;
    const double C31702 = C31699 / C31568;
    const double C20447 = C20436 - C20437;
    const double C20444 = C20424 - C20425;
    const double C20442 = C20416 - C20417;
    const double C20440 = C20408 - C20409;
    const double C20823 = C20814 - C20815;
    const double C20821 = C20806 - C20807;
    const double C20819 = C20798 - C20799;
    const double C20995 = C20986 - C20987;
    const double C20993 = C20978 - C20979;
    const double C20991 = C20970 - C20971;
    const double C21303 = C21296 - C21297;
    const double C21300 = C21284 - C21285;
    const double C21498 = C21487 - C21488;
    const double C21496 = C21479 - C21480;
    const double C21493 = C21466 - C21467;
    const double C21491 = C21458 - C21459;
    const double C22072 = C22065 - C22066;
    const double C22070 = C22057 - C22058;
    const double C22294 = C22287 - C22288;
    const double C22292 = C22279 - C22280;
    const double C23951 = C23946 - C23947;
    const double C27435 = C27430 - C27431;
    const double C27937 = C27932 - C27933;
    const double C1894 = C1885 + C1864;
    const double C1891 = C1882 + C1852;
    const double C1888 = C1879 + C1840;
    const double C2333 = C2327 + C2312;
    const double C2330 = C2324 + C2300;
    const double C2525 = C2519 + C2504;
    const double C2522 = C2516 + C2492;
    const double C6946 = C6937 + C6916;
    const double C6943 = C6934 + C6904;
    const double C6940 = C6931 + C6892;
    const double C7241 = C7238 + C7229;
    const double C7583 = C7577 + C7562;
    const double C7580 = C7574 + C7550;
    const double C17268 = C17265 + C17256;
    const double C3563 = C3555 + C3539;
    const double C3560 = C3552 + C3527;
    const double C3558 = C3550 + C3519;
    const double C3556 = C3548 + C3511;
    const double C3935 = C3929 + C3917;
    const double C3933 = C3927 + C3909;
    const double C3931 = C3925 + C3901;
    const double C4107 = C4101 + C4089;
    const double C4105 = C4099 + C4081;
    const double C4103 = C4097 + C4073;
    const double C4589 = C4581 + C4565;
    const double C4587 = C4579 + C4557;
    const double C4585 = C4577 + C4549;
    const double C4582 = C4574 + C4537;
    const double C5154 = C5150 + C5142;
    const double C5152 = C5148 + C5134;
    const double C5362 = C5360 + C5356;
    const double C8619 = C8615 + C8607;
    const double C8617 = C8613 + C8599;
    const double C9168 = C9166 + C9162;
    const double C9376 = C9374 + C9370;
    const double C9587 = C9585 + C9581;
    const double C10089 = C10087 + C10083;
    const double C10271 = C10262 + C10244;
    const double C10266 = C10257 + C10224;
    const double C10263 = C10254 + C10212;
    const double C10682 = C10676 + C10664;
    const double C10679 = C10673 + C10652;
    const double C10870 = C10864 + C10852;
    const double C10867 = C10861 + C10840;
    const double C11299 = C11290 + C11272;
    const double C11294 = C11285 + C11252;
    const double C11291 = C11282 + C11240;
    const double C11576 = C11573 + C11561;
    const double C11912 = C11906 + C11894;
    const double C11909 = C11903 + C11882;
    const double C13230 = C13227 + C13221;
    const double C10270 = C10261 + C10240;
    const double C10267 = C10258 + C10228;
    const double C10264 = C10255 + C10216;
    const double C10681 = C10675 + C10660;
    const double C10678 = C10672 + C10648;
    const double C10869 = C10863 + C10848;
    const double C10866 = C10860 + C10836;
    const double C11298 = C11289 + C11268;
    const double C11295 = C11286 + C11256;
    const double C11292 = C11283 + C11244;
    const double C11577 = C11574 + C11565;
    const double C11911 = C11905 + C11890;
    const double C11908 = C11902 + C11878;
    const double C13229 = C13226 + C13217;
    const double C13557 = C13530 * C379;
    const double C13555 = C13530 * C378;
    const double C13545 = C13530 * C377;
    const double C13543 = C13530 * C376;
    const double C13923 = C13530 * C1185;
    const double C13921 = C13530 * C1184;
    const double C14081 = C13530 * C2127;
    const double C14079 = C13530 * C2126;
    const double C14451 = C13530 * C1183;
    const double C14449 = C13530 * C1182;
    const double C14439 = C13530 * C1181;
    const double C14437 = C13530 * C1180;
    const double C14979 = C13530 * C2676;
    const double C14977 = C13530 * C2675;
    const double C22435 = C22408 * C379;
    const double C22433 = C22408 * C378;
    const double C22423 = C22408 * C377;
    const double C22421 = C22408 * C376;
    const double C22801 = C22408 * C1185;
    const double C22799 = C22408 * C1184;
    const double C22959 = C22408 * C2127;
    const double C22957 = C22408 * C2126;
    const double C28160 = C22408 * C1183;
    const double C28158 = C22408 * C1182;
    const double C28148 = C22408 * C1181;
    const double C28146 = C22408 * C1180;
    const double C28688 = C22408 * C2676;
    const double C28686 = C22408 * C2675;
    const double C31663 = C31658 / C31568;
    const double C12118 =
        (5 * (3 * C32044 + C31795 * C32330 + C32320 * ae) +
         C31795 * (4 * C32330 + C31795 * C32392 + C32380 * ae) +
         (4 * C32320 + C31795 * C32380) * ae) /
        C31568;
    const double C12120 =
        (5 * (3 * C32322 + ae * C32329 + be * C32330 + C31795 * C32382) +
         ae * (4 * C32329 + C31795 * C32391 + C32380 * be) +
         be * (4 * C32330 + C31795 * C32392 + C32380 * ae) +
         C31795 *
             (4 * C32382 + ae * C32391 + be * C32392 +
              C31795 *
                  (3 * C32372 + ae * C32385 + be * C32386 +
                   C31795 * (2 * C32362 + ae * C32373 + be * C32376 +
                             C31795 * (C31837 + ae * C32355 + be * C32358 +
                                       C31795 * (ae * C31920 + be * C31924 +
                                                 C31795 *
                                                     (C31831 * C31832 +
                                                      C31798 * bs[8] *
                                                          std::pow(C31793, 8)) *
                                                     C31567)))))) /
        C31576;
    const double C12117 =
        (5 * (3 * C32043 + C31795 * C32329 + C32320 * be) +
         C31795 * (4 * C32329 + C31795 * C32391 + C32380 * be) +
         (4 * C32320 + C31795 * C32380) * be) /
        C31568;
    const double C24298 = C31703 * C355;
    const double C24286 = C31703 * C356;
    const double C24274 = C31703 * C357;
    const double C24718 = C31703 * C719;
    const double C24706 = C31703 * C720;
    const double C24906 = C31703 * C360;
    const double C24894 = C31703 * C361;
    const double C25398 = C31703 * C1167;
    const double C25386 = C31703 * C1166;
    const double C25374 = C31703 * C718;
    const double C25975 = C31703 * C1170;
    const double C26190 = C31703 * C1168;
    const double C30976 = C31703 * C1687;
    const double C31546 = C31703 * C1169;
    const double C11986 =
        (C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568) /
            C31608 -
        ((2 * (C31716 / C31608 + (0 * ae) / C31568) -
          C31592 / (C31568 * 4 * C31676)) *
         be) /
            C31568;
    const double C13531 =
        C31703 / C31608 - ((C31720 - C31592 / C31721) * be) / C31568;
    const double C22409 =
        C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568;
    const double C31705 = C31702 + C31682;
    const double C20455 = C20447 - C20438;
    const double C20452 = C20444 - C20426;
    const double C20450 = C20442 - C20418;
    const double C20448 = C20440 - C20410;
    const double C20829 = C20823 - C20816;
    const double C20827 = C20821 - C20808;
    const double C20825 = C20819 - C20800;
    const double C21001 = C20995 - C20988;
    const double C20999 = C20993 - C20980;
    const double C20997 = C20991 - C20972;
    const double C21307 = C21303 - C21298;
    const double C21304 = C21300 - C21286;
    const double C21506 = C21498 - C21489;
    const double C21504 = C21496 - C21481;
    const double C21501 = C21493 - C21468;
    const double C21499 = C21491 - C21460;
    const double C22076 = C22072 - C22067;
    const double C22074 = C22070 - C22059;
    const double C22298 = C22294 - C22289;
    const double C22296 = C22292 - C22281;
    const double C23953 = C23951 - C23948;
    const double C27437 = C27435 - C27432;
    const double C27939 = C27937 - C27934;
    const double C1896 = C1890 + C1891;
    const double C17052 = C2333 + C2334;
    const double C17051 = C2334 + C2333;
    const double C6948 = C6942 + C6943;
    const double C3565 = C3560 + C3561;
    const double C3564 = C3558 + C3559;
    const double C4932 = C3934 + C3935;
    const double C4930 = C3935 + C3934;
    const double C4385 = C3933 + C3932;
    const double C4931 = C3932 + C3933;
    const double C8590 = C4589 + C4588;
    const double C8591 = C4587 + C4586;
    const double C8960 = C4586 + C4587;
    const double C9573 = C8619 + C8618;
    const double C10272 = C10266 + C10267;
    const double C13013 = C10681 + C10682;
    const double C13012 = C10682 + C10681;
    const double C11300 = C11294 + C11295;
    const double C31667 = C31662 - C31663;
    const double C24312 = C24297 - C24298;
    const double C24309 = C24285 - C24286;
    const double C24306 = C24273 - C24274;
    const double C24729 = C24717 - C24718;
    const double C24726 = C24705 - C24706;
    const double C24917 = C24905 - C24906;
    const double C24914 = C24893 - C24894;
    const double C25412 = C25397 - C25398;
    const double C25409 = C25385 - C25386;
    const double C25406 = C25373 - C25374;
    const double C25983 = C25974 - C25975;
    const double C26198 = C26189 - C26190;
    const double C30985 = C30975 - C30976;
    const double C31554 = C31545 - C31546;
    const double C13556 = C13531 * C361;
    const double C13544 = C13531 * C360;
    const double C13922 = C13531 * C1170;
    const double C14080 = C13531 * C2119;
    const double C14450 = C13531 * C1169;
    const double C14438 = C13531 * C1168;
    const double C14978 = C13531 * C2672;
    const double C22434 = C22409 * C361;
    const double C22422 = C22409 * C360;
    const double C22800 = C22409 * C1170;
    const double C22958 = C22409 * C2119;
    const double C28159 = C22409 * C1169;
    const double C28147 = C22409 * C1168;
    const double C28687 = C22409 * C2672;
    const double C31707 = C31705 * be;
    const double C20463 = C20455 + C20439;
    const double C20460 = C20452 + C20427;
    const double C20458 = C20450 + C20419;
    const double C20456 = C20448 + C20411;
    const double C20835 = C20829 + C20817;
    const double C20833 = C20827 + C20809;
    const double C20831 = C20825 + C20801;
    const double C21007 = C21001 + C20989;
    const double C21005 = C20999 + C20981;
    const double C21003 = C20997 + C20973;
    const double C21311 = C21307 + C21299;
    const double C21308 = C21304 + C21287;
    const double C21514 = C21506 + C21490;
    const double C21512 = C21504 + C21482;
    const double C21509 = C21501 + C21469;
    const double C21507 = C21499 + C21461;
    const double C22080 = C22076 + C22068;
    const double C22078 = C22074 + C22060;
    const double C22302 = C22298 + C22290;
    const double C22300 = C22296 + C22282;
    const double C23955 = C23953 + C23949;
    const double C27439 = C27437 + C27433;
    const double C27941 = C27939 + C27935;
    const double C1897 = C1896 + C1892;
    const double C17054 = C2332 + C17052;
    const double C17053 = C17051 + C2332;
    const double C6949 = C6948 + C6944;
    const double C3567 = C3565 * C32856;
    const double C3566 = C3564 * C32856;
    const double C4384 = C3564 * C33083;
    const double C18407 = C3564 * C15098;
    const double C4386 = C4385 * C32918;
    const double C18408 = C4385 * C32918;
    const double C10273 = C10272 + C10268;
    const double C13015 = C10680 + C13013;
    const double C13014 = C13012 + C10680;
    const double C11301 = C11300 + C11296;
    const double C31671 = C31667 + C31646;
    const double C24321 = C24312 - C24299;
    const double C24318 = C24309 - C24287;
    const double C24315 = C24306 - C24275;
    const double C24735 = C24729 - C24719;
    const double C24732 = C24726 - C24707;
    const double C24923 = C24917 - C24907;
    const double C24920 = C24914 - C24895;
    const double C25421 = C25412 - C25399;
    const double C25418 = C25409 - C25387;
    const double C25415 = C25406 - C25375;
    const double C25986 = C25983 - C25976;
    const double C26201 = C26198 - C26191;
    const double C30988 = C30985 - C30977;
    const double C31557 = C31554 - C31547;
    const double C13572 = C13555 - C13556;
    const double C13569 = C13543 - C13544;
    const double C13934 = C13921 - C13922;
    const double C14092 = C14079 - C14080;
    const double C14466 = C14449 - C14450;
    const double C14463 = C14437 - C14438;
    const double C14990 = C14977 - C14978;
    const double C22450 = C22433 - C22434;
    const double C22447 = C22421 - C22422;
    const double C22812 = C22799 - C22800;
    const double C22970 = C22957 - C22958;
    const double C28175 = C28158 - C28159;
    const double C28172 = C28146 - C28147;
    const double C28699 = C28686 - C28687;
    const double C31708 = C31707 / C31568;
    const double C20465 = C20460 + C20461;
    const double C20464 = C20458 + C20459;
    const double C21858 = C20834 + C20835;
    const double C21856 = C20835 + C20834;
    const double C23258 = C20833 + C20832;
    const double C23747 = C20832 + C20833;
    const double C21474 = C21308 + C21309;
    const double C21857 = C21309 + C21308;
    const double C27425 = C21514 + C21513;
    const double C21515 = C21509 + C21510;
    const double C1898 = C1897 * C32856;
    const double C4387 = C4384 + C4386;
    const double C18409 = C18407 + C18408;
    const double C10274 = C10273 * C32856;
    const double C24303 = C31671 * C129;
    const double C24301 = C31671 * C128;
    const double C24283 = C31671 * C127;
    const double C24281 = C31671 * C126;
    const double C24271 = C31671 * C125;
    const double C24269 = C31671 * C124;
    const double C24723 = C31671 * C266;
    const double C24721 = C31671 * C265;
    const double C24711 = C31671 * C264;
    const double C24709 = C31671 * C263;
    const double C24911 = C31671 * C371;
    const double C24909 = C31671 * C370;
    const double C24899 = C31671 * C369;
    const double C24897 = C31671 * C368;
    const double C25403 = C31671 * C270;
    const double C25401 = C31671 * C269;
    const double C25391 = C31671 * C272;
    const double C25389 = C31671 * C271;
    const double C25371 = C31671 * C268;
    const double C25369 = C31671 * C267;
    const double C25980 = C31671 * C726;
    const double C25978 = C31671 * C725;
    const double C26195 = C31671 * C724;
    const double C26193 = C31671 * C723;
    const double C30981 = C31671 * C1007;
    const double C30979 = C31671 * C1006;
    const double C31551 = C31671 * C1179;
    const double C31549 = C31671 * C1178;
    const double C11979 =
        (((((0 - (C31566 * C31629) / C31568) * ae) / C31568 -
           (0 * be) / C31578 + (2 * C31630) / C31568) /
              C31608 -
          ((C31566 * C31665 + 0) * be) / C31568 + C31639 - C31653) /
             C31608 +
         ((C31566 * C31673 + 0) * ae) / C31568) /
            C31608 -
        ((C31566 * (C31673 / C31608 +
                    ((C31566 * C31671 + C32956) * ae) / C31568 + C31668) +
          C33155) *
         be) /
            C31568 +
        C31671 / C31608 + ((C31566 * C31668 + C32963) * ae) / C31568 +
        2 * (C31646 / C31608 - (0 * be) / C31568);
    const double C11981 =
        (C31673 / C31608 + ((C31566 * C31671 + C32956) * ae) / C31568 +
         C31668) /
            C31608 -
        ((C31566 * (C31671 / C31608 +
                    ((C31566 * C31668 + C32963) * ae) / C31568 + 2 * C31716) +
          C33152) *
         be) /
            C31568 +
        2 * (C31668 / C31608 + ((C31566 * C31716 + C24261) * ae) / C31568);
    const double C11983 =
        (C31671 / C31608 + ((C31566 * C31668 + C32963) * ae) / C31568 +
         C31720) /
            C31608 -
        ((C31566 *
              (C31668 / C31608 + ((C31566 * C31716 + C24261) * ae) / C31568) +
          C33143) *
         be) /
            C31568 +
        3 * (C31716 / C31608 + (0 * ae) / C31568);
    const double C13526 =
        C31673 / C31608 - ((C31566 * C31671 + C32956) * be) / C31568 + C31668;
    const double C13528 =
        C31671 / C31608 - ((C31566 * C31668 + C32963) * be) / C31568 + C31720;
    const double C22404 =
        C31673 / C31608 + ((C31566 * C31671 + C32956) * ae) / C31568 + C31668;
    const double C22406 =
        C31671 / C31608 + ((C31566 * C31668 + C32963) * ae) / C31568 + C31720;
    const double C24330 = C24321 + C24300;
    const double C24327 = C24318 + C24288;
    const double C24324 = C24315 + C24276;
    const double C24741 = C24735 + C24720;
    const double C24738 = C24732 + C24708;
    const double C24929 = C24923 + C24908;
    const double C24926 = C24920 + C24896;
    const double C25430 = C25421 + C25400;
    const double C25427 = C25418 + C25388;
    const double C25424 = C25415 + C25376;
    const double C25989 = C25986 + C25977;
    const double C26204 = C26201 + C26192;
    const double C30991 = C30988 + C30978;
    const double C31560 = C31557 + C31548;
    const double C13580 = C13572 - C13557;
    const double C13577 = C13569 - C13545;
    const double C13938 = C13934 - C13923;
    const double C14096 = C14092 - C14081;
    const double C14474 = C14466 - C14451;
    const double C14471 = C14463 - C14439;
    const double C14994 = C14990 - C14979;
    const double C22458 = C22450 - C22435;
    const double C22455 = C22447 - C22423;
    const double C22816 = C22812 - C22801;
    const double C22974 = C22970 - C22959;
    const double C28183 = C28175 - C28160;
    const double C28180 = C28172 - C28148;
    const double C28703 = C28699 - C28688;
    const double C31709 = C31692 - C31708;
    const double C20467 = C20465 * C32856;
    const double C20466 = C20464 * C32856;
    const double C23257 = C20464 * C33083;
    const double C26352 = C20464 * C15098;
    const double C23259 = C23258 * C32918;
    const double C26353 = C23258 * C32918;
    const double C13565 = C13526 * C127;
    const double C13563 = C13526 * C126;
    const double C13537 = C13526 * C125;
    const double C13535 = C13526 * C124;
    const double C13931 = C13526 * C266;
    const double C13929 = C13526 * C265;
    const double C14089 = C13526 * C371;
    const double C14087 = C13526 * C370;
    const double C14459 = C13526 * C270;
    const double C14457 = C13526 * C269;
    const double C14431 = C13526 * C268;
    const double C14429 = C13526 * C267;
    const double C14987 = C13526 * C724;
    const double C14985 = C13526 * C723;
    const double C13561 = C13528 * C369;
    const double C13559 = C13528 * C368;
    const double C13541 = C13528 * C371;
    const double C13539 = C13528 * C370;
    const double C13927 = C13528 * C726;
    const double C13925 = C13528 * C725;
    const double C14085 = C13528 * C377;
    const double C14083 = C13528 * C376;
    const double C14455 = C13528 * C1179;
    const double C14453 = C13528 * C1178;
    const double C14435 = C13528 * C724;
    const double C14433 = C13528 * C723;
    const double C14983 = C13528 * C1181;
    const double C14981 = C13528 * C1180;
    const double C22443 = C22404 * C127;
    const double C22441 = C22404 * C126;
    const double C22415 = C22404 * C125;
    const double C22413 = C22404 * C124;
    const double C22809 = C22404 * C266;
    const double C22807 = C22404 * C265;
    const double C22967 = C22404 * C371;
    const double C22965 = C22404 * C370;
    const double C28168 = C22404 * C270;
    const double C28166 = C22404 * C269;
    const double C28140 = C22404 * C268;
    const double C28138 = C22404 * C267;
    const double C28696 = C22404 * C724;
    const double C28694 = C22404 * C723;
    const double C22439 = C22406 * C369;
    const double C22437 = C22406 * C368;
    const double C22419 = C22406 * C371;
    const double C22417 = C22406 * C370;
    const double C22805 = C22406 * C726;
    const double C22803 = C22406 * C725;
    const double C22963 = C22406 * C377;
    const double C22961 = C22406 * C376;
    const double C28164 = C22406 * C1179;
    const double C28162 = C22406 * C1178;
    const double C28144 = C22406 * C724;
    const double C28142 = C22406 * C723;
    const double C28692 = C22406 * C1181;
    const double C28690 = C22406 * C1180;
    const double C13588 = C13580 + C13558;
    const double C13585 = C13577 + C13546;
    const double C13942 = C13938 + C13924;
    const double C14100 = C14096 + C14082;
    const double C14482 = C14474 + C14452;
    const double C14479 = C14471 + C14440;
    const double C14998 = C14994 + C14980;
    const double C22466 = C22458 + C22436;
    const double C22463 = C22455 + C22424;
    const double C22820 = C22816 + C22802;
    const double C22978 = C22974 + C22960;
    const double C28191 = C28183 + C28161;
    const double C28188 = C28180 + C28149;
    const double C28707 = C28703 + C28689;
    const double C31710 = C31709 - C31683;
    const double C23260 = C23257 + C23259;
    const double C26354 = C26352 + C26353;
    const double C24302 = C31710 * C118;
    const double C24282 = C31710 * C117;
    const double C24270 = C31710 * C116;
    const double C24722 = C31710 * C252;
    const double C24710 = C31710 * C251;
    const double C24910 = C31710 * C357;
    const double C24898 = C31710 * C356;
    const double C25402 = C31710 * C254;
    const double C25390 = C31710 * C255;
    const double C25370 = C31710 * C253;
    const double C25979 = C31710 * C719;
    const double C26194 = C31710 * C718;
    const double C30980 = C31710 * C998;
    const double C31550 = C31710 * C1167;
    const double C11980 =
        (((ae * -2 * C31629) / C31676 -
          (((C31566 * C31686) / C31576 + 2 * C31665) * be) / C31568 -
          C31687 / C31576) /
             C31608 +
         ((C31566 * C31706 + 2 * C31673) * ae) / C31568) /
            C31608 -
        ((C31566 * (C31706 / C31608 +
                    ((C31566 * C31710 + 2 * C31671) * ae) / C31568 + C31703) +
          2 * (C31673 / C31608 + ((C31566 * C31671 + C32956) * ae) / C31568 +
               C31668)) *
         be) /
            C31568 +
        C31710 / C31608 + ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
        (-2 * C31587) / (C31568 * 4 * C31576);
    const double C11982 =
        (C31706 / C31608 + ((C31566 * C31710 + 2 * C31671) * ae) / C31568 +
         C31703) /
            C31608 -
        ((C31566 * (C31710 / C31608 +
                    ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
                    (-2 * C31587) / C31721) +
          2 * (C31671 / C31608 + ((C31566 * C31668 + C32963) * ae) / C31568 +
               C31720)) *
         be) /
            C31568 +
        2 * (C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568);
    const double C11984 =
        (C31710 / C31608 + ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
         (-2 * C31587) / C31721) /
            C31608 -
        ((C31566 *
              (C31703 / C31608 + ((C31720 - C31592 / C31721) * ae) / C31568) +
          2 * (C31668 / C31608 + ((C31566 * C31716 + C24261) * ae) / C31568)) *
         be) /
            C31568 +
        (-3 * C31587) / (C31568 * 4 * C31676);
    const double C13527 = C31706 / C31608 -
                          ((C31566 * C31710 + 2 * C31671) * be) / C31568 +
                          C31703;
    const double C13529 = C31710 / C31608 -
                          ((C31566 * C31703 + 2 * C31668) * be) / C31568 +
                          (-2 * C31587) / C31721;
    const double C22405 = C31706 / C31608 +
                          ((C31566 * C31710 + 2 * C31671) * ae) / C31568 +
                          C31703;
    const double C22407 = C31710 / C31608 +
                          ((C31566 * C31703 + 2 * C31668) * ae) / C31568 +
                          (-2 * C31587) / C31721;
    const double C24313 = C24301 - C24302;
    const double C24308 = C24281 - C24282;
    const double C24305 = C24269 - C24270;
    const double C24730 = C24721 - C24722;
    const double C24727 = C24709 - C24710;
    const double C24918 = C24909 - C24910;
    const double C24915 = C24897 - C24898;
    const double C25413 = C25401 - C25402;
    const double C25410 = C25389 - C25390;
    const double C25405 = C25369 - C25370;
    const double C25984 = C25978 - C25979;
    const double C26199 = C26193 - C26194;
    const double C30986 = C30979 - C30980;
    const double C31555 = C31549 - C31550;
    const double C13564 = C13527 * C117;
    const double C13536 = C13527 * C116;
    const double C13930 = C13527 * C252;
    const double C14088 = C13527 * C357;
    const double C14458 = C13527 * C254;
    const double C14430 = C13527 * C253;
    const double C14986 = C13527 * C718;
    const double C13560 = C13529 * C356;
    const double C13540 = C13529 * C357;
    const double C13926 = C13529 * C719;
    const double C14084 = C13529 * C360;
    const double C14454 = C13529 * C1167;
    const double C14434 = C13529 * C718;
    const double C14982 = C13529 * C1168;
    const double C22442 = C22405 * C117;
    const double C22414 = C22405 * C116;
    const double C22808 = C22405 * C252;
    const double C22966 = C22405 * C357;
    const double C28167 = C22405 * C254;
    const double C28139 = C22405 * C253;
    const double C28695 = C22405 * C718;
    const double C22438 = C22407 * C356;
    const double C22418 = C22407 * C357;
    const double C22804 = C22407 * C719;
    const double C22962 = C22407 * C360;
    const double C28163 = C22407 * C1167;
    const double C28143 = C22407 * C718;
    const double C28691 = C22407 * C1168;
    const double C24322 = C24313 - C24303;
    const double C24317 = C24308 - C24283;
    const double C24314 = C24305 - C24271;
    const double C24736 = C24730 - C24723;
    const double C24733 = C24727 - C24711;
    const double C24924 = C24918 - C24911;
    const double C24921 = C24915 - C24899;
    const double C25422 = C25413 - C25403;
    const double C25419 = C25410 - C25391;
    const double C25414 = C25405 - C25371;
    const double C25987 = C25984 - C25980;
    const double C26202 = C26199 - C26195;
    const double C30989 = C30986 - C30981;
    const double C31558 = C31555 - C31551;
    const double C13574 = C13563 - C13564;
    const double C13567 = C13535 - C13536;
    const double C13936 = C13929 - C13930;
    const double C14094 = C14087 - C14088;
    const double C14468 = C14457 - C14458;
    const double C14461 = C14429 - C14430;
    const double C14992 = C14985 - C14986;
    const double C13573 = C13559 - C13560;
    const double C13568 = C13539 - C13540;
    const double C13935 = C13925 - C13926;
    const double C14093 = C14083 - C14084;
    const double C14467 = C14453 - C14454;
    const double C14462 = C14433 - C14434;
    const double C14991 = C14981 - C14982;
    const double C22452 = C22441 - C22442;
    const double C22445 = C22413 - C22414;
    const double C22814 = C22807 - C22808;
    const double C22972 = C22965 - C22966;
    const double C28177 = C28166 - C28167;
    const double C28170 = C28138 - C28139;
    const double C28701 = C28694 - C28695;
    const double C22451 = C22437 - C22438;
    const double C22446 = C22417 - C22418;
    const double C22813 = C22803 - C22804;
    const double C22971 = C22961 - C22962;
    const double C28176 = C28162 - C28163;
    const double C28171 = C28142 - C28143;
    const double C28700 = C28690 - C28691;
    const double C24331 = C24322 + C24304;
    const double C24326 = C24317 + C24284;
    const double C24323 = C24314 + C24272;
    const double C24742 = C24736 + C24724;
    const double C24739 = C24733 + C24712;
    const double C24930 = C24924 + C24912;
    const double C24927 = C24921 + C24900;
    const double C25431 = C25422 + C25404;
    const double C25428 = C25419 + C25392;
    const double C25423 = C25414 + C25372;
    const double C25990 = C25987 + C25981;
    const double C26205 = C26202 + C26196;
    const double C30992 = C30989 + C30982;
    const double C31561 = C31558 + C31552;
    const double C13582 = C13574 - C13565;
    const double C13575 = C13567 - C13537;
    const double C13940 = C13936 - C13931;
    const double C14098 = C14094 - C14089;
    const double C14476 = C14468 - C14459;
    const double C14469 = C14461 - C14431;
    const double C14996 = C14992 - C14987;
    const double C13581 = C13573 - C13561;
    const double C13576 = C13568 - C13541;
    const double C13939 = C13935 - C13927;
    const double C14097 = C14093 - C14085;
    const double C14475 = C14467 - C14455;
    const double C14470 = C14462 - C14435;
    const double C14995 = C14991 - C14983;
    const double C22460 = C22452 - C22443;
    const double C22453 = C22445 - C22415;
    const double C22818 = C22814 - C22809;
    const double C22976 = C22972 - C22967;
    const double C28185 = C28177 - C28168;
    const double C28178 = C28170 - C28140;
    const double C28705 = C28701 - C28696;
    const double C22459 = C22451 - C22439;
    const double C22454 = C22446 - C22419;
    const double C22817 = C22813 - C22805;
    const double C22975 = C22971 - C22963;
    const double C28184 = C28176 - C28164;
    const double C28179 = C28171 - C28144;
    const double C28704 = C28700 - C28692;
    const double C24332 = C24326 + C24327;
    const double C25773 = C24741 + C24742;
    const double C25772 = C24742 + C24741;
    const double C30970 = C25431 + C25430;
    const double C13590 = C13582 + C13566;
    const double C13583 = C13575 + C13538;
    const double C13944 = C13940 + C13932;
    const double C14102 = C14098 + C14090;
    const double C14484 = C14476 + C14460;
    const double C14477 = C14469 + C14432;
    const double C15000 = C14996 + C14988;
    const double C13589 = C13581 + C13562;
    const double C13584 = C13576 + C13542;
    const double C13943 = C13939 + C13928;
    const double C14101 = C14097 + C14086;
    const double C14483 = C14475 + C14456;
    const double C14478 = C14470 + C14436;
    const double C14999 = C14995 + C14984;
    const double C22468 = C22460 + C22444;
    const double C22461 = C22453 + C22416;
    const double C22822 = C22818 + C22810;
    const double C22980 = C22976 + C22968;
    const double C28193 = C28185 + C28169;
    const double C28186 = C28178 + C28141;
    const double C28709 = C28705 + C28697;
    const double C22467 = C22459 + C22440;
    const double C22462 = C22454 + C22420;
    const double C22821 = C22817 + C22806;
    const double C22979 = C22975 + C22964;
    const double C28192 = C28184 + C28165;
    const double C28187 = C28179 + C28145;
    const double C28708 = C28704 + C28693;
    const double C24333 = C24332 + C24328;
    const double C25775 = C24740 + C25773;
    const double C25774 = C25772 + C24740;
    const double C30983 = C30970 + C25429;
    const double C24334 = C24333 * C32856;
    d2ee[0] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C32914 +
             C1051 * C32921 + C1052 * C17575) *
                C32778 +
            (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
               C32832 * C476 -
           ((C17957 + C17958 + C17959) * C17578 +
            (C17960 + C17961 + C17962) * C32786 +
            (C1055 * C17575 + C1052 * C32921 + C1051 * C32914) * C32778) *
               C32832 * C477) *
              C478 +
          (((C17962 + C17961 + C17960) * C32778 +
            (C17959 + C17958 + C17957) * C32786 +
            (C510 * C32914 + C882 * C32921 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C17575) *
                C17578) *
               C32832 * C477 -
           ((C17586 + C17587 + C17588) * C17578 +
            (C17585 + C17584 + C17583) * C32786 +
            (C17582 + C17581 + C17580) * C32778) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[1] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C32914 +
             C1051 * C32921 + C1052 * C17575) *
                C32778 +
            (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
               C598 -
           ((C18109 + C18110 + C18111) * C17578 +
            (C18112 + C18113 + C18114) * C32786 +
            (C1712 * C17575 + C1713 * C32921 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C32914) *
                C32778) *
               C599) *
              C476 +
          (((C1713 * C32914 + C1712 * C32921 + C6664 * C17575) * C32778 +
            (C1537 * C32914 + C1536 * C32921 + C8166 * C17575) * C32786 +
            (C1535 * C32914 + C1534 * C32921 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C17575) *
                C17578) *
               C599 -
           ((C17957 + C17958 + C17959) * C17578 +
            (C17960 + C17961 + C17962) * C32786 +
            (C1055 * C17575 + C1052 * C32921 + C1051 * C32914) * C32778) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[2] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32914 +
            C1051 * C32921 + C1052 * C17575) *
               C32778 +
           (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
              C32832 * C245 -
          ((C1053 * C17575 + C881 * C32921 + C511 * C32914) * C17578 +
           (C1054 * C17575 + C880 * C32921 + C512 * C32914) * C32786 +
           (C1055 * C17575 + C1052 * C32921 + C1051 * C32914) * C32778) *
              C32832 * C246 +
          ((C1052 * C32914 + C1055 * C32921 + C6310 * C17575) * C32778 +
           (C880 * C32914 + C1054 * C32921 + C6478 * C17575) * C32786 +
           (C881 * C32914 + C1053 * C32921 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C17575) *
               C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32914 +
            C1051 * C32921 + C1052 * C17575) *
               C32778 +
           (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
              C32832 * C32818 * C110 -
          ((C17586 + C17587 + C17588) * C17578 +
           (C17585 + C17584 + C17583) * C32786 +
           (C17582 + C17581 + C17580) * C32778) *
              C32832 * C32818 * C111 +
          (C17590 * C32778 + (C17588 + C17587 + C17586) * C32786 +
           (C177 * C32914 + C509 * C32921 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C17575) *
               C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32914 +
            C1051 * C32921 + C1052 * C17575) *
               C32778 +
           (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
              C351 -
          ((C1534 * C17575 + C1535 * C32921 + C631 * C32914) * C17578 +
           (C1536 * C17575 + C1537 * C32921 + C632 * C32914) * C32786 +
           (C1712 * C17575 + C1713 * C32921 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C32914) *
               C32778) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C32914 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C32921 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C17575) *
               C32778 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C32914 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C32921 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C17575) *
               C32786 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C32914 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C32921 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C17575) *
               C17578) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[3] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C32914 +
             C1051 * C32921 + C1052 * C17575) *
                C32778 +
            (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
               C598 -
           ((C18109 + C18110 + C18111) * C17578 +
            (C18112 + C18113 + C18114) * C32786 +
            (C1712 * C17575 + C1713 * C32921 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C32914) *
                C32778) *
               C599) *
              C32818 * C478 +
          (((C18114 + C18113 + C18112) * C32778 +
            (C18111 + C18110 + C18109) * C32786 +
            (C630 * C32914 + C3272 * C32921 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C17575) *
                C17578) *
               C599 -
           ((C17586 + C17587 + C17588) * C17578 +
            (C17585 + C17584 + C17583) * C32786 +
            (C17582 + C17581 + C17580) * C32778) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[4] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32914 +
            C1051 * C32921 + C1052 * C17575) *
               C32778 +
           (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
              C32832 * C32818 * C110 -
          ((C17586 + C17587 + C17588) * C17578 +
           (C17585 + C17584 + C17583) * C32786 +
           (C17582 + C17581 + C17580) * C32778) *
              C32832 * C32818 * C111 +
          (C17590 * C32778 + (C17588 + C17587 + C17586) * C32786 +
           (C177 * C32914 + C509 * C32921 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C17575) *
               C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32914 +
            C1051 * C32921 + C1052 * C17575) *
               C32778 +
           (C17580 + C17581 + C17582) * C32786 + C17590 * C17578) *
              C32832 * C245 -
          ((C1053 * C17575 + C881 * C32921 + C511 * C32914) * C17578 +
           (C1054 * C17575 + C880 * C32921 + C512 * C32914) * C32786 +
           (C1055 * C17575 + C1052 * C32921 + C1051 * C32914) * C32778) *
              C32832 * C246 +
          ((C1052 * C32914 + C1055 * C32921 + C6310 * C17575) * C32778 +
           (C880 * C32914 + C1054 * C32921 + C6478 * C17575) * C32786 +
           (C881 * C32914 + C1053 * C32921 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C17575) *
               C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[5] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C32914 +
             (C4582 + C4583) * C32921 + C8590 * C17575) *
                C15814 +
            ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
                C32783) *
               C32832 * C476 -
           (((C8616 + C8617) * C17575 + C8960 * C32921 + C4932 * C32914) *
                C32783 +
            ((C8618 + C8619) * C17575 + (C4588 + C4589) * C32921 +
             (C4583 + C4582) * C32914) *
                C15814) *
               C32832 * C477) *
              C478 +
          (((C4930 * C32914 + C8591 * C32921 + (C8617 + C8616) * C17575) *
                C15814 +
            (C4385 * C32914 + (C4585 + C4584) * C32921 +
             (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
              C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                 C17575) *
                C32783) *
               C32832 * C477 -
           (((C4584 + C4585) * C17575 + C4931 * C32921 +
             (C3559 + C3558) * C32914) *
                C32783 +
            (C8960 * C17575 + C4932 * C32921 + (C3557 + C3556) * C32914) *
                C15814) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[6] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C32914 +
             (C4582 + C4583) * C32921 + C8590 * C17575) *
                C15814 +
            ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
                C32783) *
               C598 -
           (((C9167 + C9168) * C17575 + (C5153 + C5154) * C32921 +
             (C4106 + C4107) * C32914) *
                C32783 +
            ((C9375 + C9376) * C17575 + (C5361 + C5362) * C32921 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C32914) *
                C15814) *
               C599) *
              C476 +
          ((((C5362 + C5361) * C32914 + (C9376 + C9375) * C32921 +
             (C10089 + C10088) * C17575) *
                C15814 +
            ((C5154 + C5153) * C32914 + (C9168 + C9167) * C32921 +
             (C3503 * C1692 - C3504 * C1688 - C3503 * C1693 + C33085 * C1697 +
              C3505 * C7218 - C3506 * C7217 - C3505 * C7219 + C32960 * C7220) *
                 C17575) *
                C32783) *
               C599 -
           (((C8616 + C8617) * C17575 + C8960 * C32921 + C4932 * C32914) *
                C32783 +
            ((C8618 + C8619) * C17575 + (C4588 + C4589) * C32921 +
             (C4583 + C4582) * C32914) *
                C15814) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[7] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32914 +
            (C4582 + C4583) * C32921 + C8590 * C17575) *
               C15814 +
           ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
               C32783) *
              C32832 * C245 -
          (((C8616 + C8617) * C17575 + C8960 * C32921 + C4932 * C32914) *
               C32783 +
           ((C8618 + C8619) * C17575 + (C4588 + C4589) * C32921 +
            (C4583 + C4582) * C32914) *
               C15814) *
              C32832 * C246 +
          ((C8590 * C32914 + C9573 * C32921 + (C9587 + C9586) * C17575) *
               C15814 +
           (C8591 * C32914 + (C8617 + C8616) * C32921 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C17575) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32914 +
            (C4582 + C4583) * C32921 + C8590 * C17575) *
               C15814 +
           ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C4584 + C4585) * C17575 + C4931 * C32921 +
            (C3559 + C3558) * C32914) *
               C32783 +
           (C8960 * C17575 + C4932 * C32921 + (C3557 + C3556) * C32914) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C3564 * C32914 + C4385 * C32921 + (C4585 + C4584) * C17575) *
               C15814 +
           (C3565 * C32914 + (C3931 + C3930) * C32921 +
            (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
             C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                C17575) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32914 +
            (C4582 + C4583) * C32921 + C8590 * C17575) *
               C15814 +
           ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
               C32783) *
              C351 -
          (((C9167 + C9168) * C17575 + (C5153 + C5154) * C32921 +
            (C4106 + C4107) * C32914) *
               C32783 +
           ((C9375 + C9376) * C17575 + (C5361 + C5362) * C32921 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C32914) *
               C15814) *
              C352 +
          (((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
             C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
                C32914 +
            (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
             C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
                C32921 +
            (C3503 * C1182 - C3504 * C1169 - C3503 * C1183 + C33085 * C1196 +
             C3505 * C7062 - C3506 * C7059 - C3505 * C7063 + C32960 * C7068) *
                C17575) *
               C15814 +
           ((C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
             C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
                C32914 +
            (C3503 * C1184 - C3504 * C1170 - C3503 * C1185 + C33085 * C1197 +
             C3505 * C2677 - C3506 * C2673 - C3505 * C2678 + C32960 * C2682) *
                C32921 +
            (C3503 * C1186 - C3504 * C1171 - C3503 * C1187 + C33085 * C1198 +
             C3505 * C7389 - C3506 * C7388 - C3505 * C7390 + C32960 * C7391) *
                C17575) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[8] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C32914 +
             (C4582 + C4583) * C32921 + C8590 * C17575) *
                C15814 +
            ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
                C32783) *
               C598 -
           (((C9167 + C9168) * C17575 + (C5153 + C5154) * C32921 +
             (C4106 + C4107) * C32914) *
                C32783 +
            ((C9375 + C9376) * C17575 + (C5361 + C5362) * C32921 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C32914) *
                C15814) *
               C599) *
              C32818 * C478 +
          ((((C4107 + C4106) * C32914 + (C5154 + C5153) * C32921 +
             (C9168 + C9167) * C17575) *
                C15814 +
            ((C4105 + C4104) * C32914 + (C5152 + C5151) * C32921 +
             (C3503 * C1174 - C3504 * C1165 - C3503 * C1175 + C33085 * C1192 +
              C3505 * C1190 - C3506 * C1173 - C3505 * C1191 + C32960 * C1200) *
                 C17575) *
                C32783) *
               C599 -
           (((C4584 + C4585) * C17575 + C4931 * C32921 +
             (C3559 + C3558) * C32914) *
                C32783 +
            (C8960 * C17575 + C4932 * C32921 + (C3557 + C3556) * C32914) *
                C15814) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[9] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32914 +
            (C4582 + C4583) * C32921 + C8590 * C17575) *
               C15814 +
           ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C4584 + C4585) * C17575 + C4931 * C32921 +
            (C3559 + C3558) * C32914) *
               C32783 +
           (C8960 * C17575 + C4932 * C32921 + (C3557 + C3556) * C32914) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C3564 * C32914 + C4385 * C32921 + (C4585 + C4584) * C17575) *
               C15814 +
           (C3565 * C32914 + (C3931 + C3930) * C32921 +
            (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
             C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                C17575) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32914 +
            (C4582 + C4583) * C32921 + C8590 * C17575) *
               C15814 +
           ((C3556 + C3557) * C32914 + C4930 * C32921 + C8591 * C17575) *
               C32783) *
              C32832 * C245 -
          (((C8616 + C8617) * C17575 + C8960 * C32921 + C4932 * C32914) *
               C32783 +
           ((C8618 + C8619) * C17575 + (C4588 + C4589) * C32921 +
            (C4583 + C4582) * C32914) *
               C15814) *
              C32832 * C246 +
          ((C8590 * C32914 + C9573 * C32921 + (C9587 + C9586) * C17575) *
               C15814 +
           (C8591 * C32914 + (C8617 + C8616) * C32921 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C17575) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[10] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33154 +
             C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
                C15814 +
            (C15817 + C15818 + C15819 + C15820) * C32783) *
               C32832 * C476 -
           ((C16151 + C16152 + C16153 + C16154) * C32783 +
            (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 +
             C1051 * C33154) *
                C15814) *
               C32832 * C477) *
              C478 +
          (((C16154 + C16153 + C16152 + C16151) * C15814 +
            (C511 * C33154 + C881 * C33150 + C1053 * C33140 +
             (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                 C33092) *
                C32783) *
               C32832 * C477 -
           ((C15821 + C15822 + C15823 + C15824) * C32783 +
            (C15820 + C15819 + C15818 + C15817) * C15814) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C15098 +
             C1051 * C32918) *
                C33153 +
            (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
               C32832 * C476 -
           ((C15441 + C15442) * C33084 + (C15443 + C15444) * C33133 +
            (C15445 + C15446) * C33146 +
            (C1052 * C32918 + C1051 * C15098) * C33153) *
               C32832 * C477) *
              C478 +
          (((C15446 + C15445) * C33153 + (C15444 + C15443) * C33146 +
            (C15442 + C15441) * C33133 +
            (C509 * C15098 +
             (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                 C32918) *
                C33084) *
               C32832 * C477 -
           ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
            (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
              C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
              C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                 C15098 +
             (C6939 + C6940 + C6941) * C32918) *
                C15814 +
            ((C1887 + C1888 + C1889) * C15098 + C17053 * C32918) * C32783) *
               C32832 * C476 -
           (((C7242 + C7241 + C7240) * C32918 + C17054 * C15098) * C32783 +
            ((C6944 + C6943 + C6942) * C32918 +
             (C6941 + C6940 + C6939) * C15098) *
                C15814) *
               C32832 * C477) *
              C478 +
          (((C17053 * C15098 + (C7240 + C7241 + C7242) * C32918) * C15814 +
            ((C2331 + C2330 + C2329) * C15098 +
             (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
              C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
              C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
                 C32918) *
                C32783) *
               C32832 * C477 -
           (((C2329 + C2330 + C2331) * C32918 +
             (C1892 + C1891 + C1890) * C15098) *
                C32783 +
            (C17054 * C32918 + (C1889 + C1888 + C1887) * C15098) * C15814) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33154 +
             C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
                C15814 +
            (C15817 + C15818 + C15819 + C15820) * C32783) *
               C598 -
           ((C16285 + C16286 + C16287 + C16288) * C32783 +
            (C6664 * C33092 + C1712 * C33140 + C1713 * C33150 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33154) *
                C15814) *
               C599) *
              C476 +
          (((C1713 * C33154 + C1712 * C33150 + C6664 * C33140 +
             C6663 * C33092) *
                C15814 +
            (C1537 * C33154 + C1536 * C33150 + C8166 * C33140 +
             (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                 C33092) *
                C32783) *
               C599 -
           ((C16151 + C16152 + C16153 + C16154) * C32783 +
            (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 +
             C1051 * C33154) *
                C15814) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C15098 +
             C1051 * C32918) *
                C33153 +
            (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
               C598 -
           ((C15577 + C15578) * C33084 + (C15579 + C15580) * C33133 +
            (C15581 + C15582) * C33146 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C15098) *
                C33153) *
               C599) *
              C476 +
          (((C1713 * C15098 + C1712 * C32918) * C33153 +
            (C1537 * C15098 + C1536 * C32918) * C33146 +
            (C1535 * C15098 + C1534 * C32918) * C33133 +
            (C3272 * C15098 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C32918) *
                C33084) *
               C599 -
           ((C15441 + C15442) * C33084 + (C15443 + C15444) * C33133 +
            (C15445 + C15446) * C33146 +
            (C1052 * C32918 + C1051 * C15098) * C33153) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
              C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
              C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                 C15098 +
             (C6939 + C6940 + C6941) * C32918) *
                C15814 +
            ((C1887 + C1888 + C1889) * C15098 + C17053 * C32918) * C32783) *
               C598 -
           (((C17267 + C17268 + C17269) * C32918 +
             (C2524 + C2525 + C2526) * C15098) *
                C32783 +
            ((C7582 + C7583 + C7584) * C32918 +
             (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
              C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
              C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                 C15098) *
                C15814) *
               C599) *
              C476 +
          ((((C7584 + C7583 + C7582) * C15098 +
             (C7581 + C7580 + C7579) * C32918) *
                C15814 +
            ((C17269 + C17268 + C17267) * C15098 +
             (C1826 * C1176 - C1827 * C1166 - C1826 * C1177 + C33148 * C1193 +
              C1828 * C1186 - C1829 * C1171 - C1828 * C1187 + C33137 * C1198 +
              C1830 * C7389 - C1831 * C7388 - C1830 * C7390 + C33118 * C7391) *
                 C32918) *
                C32783) *
               C599 -
           (((C7242 + C7241 + C7240) * C32918 + C17054 * C15098) * C32783 +
            ((C6944 + C6943 + C6942) * C32918 +
             (C6941 + C6940 + C6939) * C15098) *
                C15814) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C15098 +
                C1051 * C32918) *
                   C33153 +
               (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
                  C32832 * C32818 * C110 -
              ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
               (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
                  C32832 * C32818 * C111 +
              (C15113 * C33153 + C15114 * C33146 + (C15112 + C15111) * C33133 +
               (C178 * C15098 +
                (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                    C32918) *
                   C33084) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C15098 +
                C1051 * C32918) *
                   C33153 +
               (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
                  C32832 * C245 -
              ((C882 * C32918 + C510 * C15098) * C33084 +
               (C881 * C32918 + C511 * C15098) * C33133 +
               (C880 * C32918 + C512 * C15098) * C33146 +
               (C1052 * C32918 + C1051 * C15098) * C33153) *
                  C32832 * C246 +
              ((C1052 * C15098 + C1055 * C32918) * C33153 +
               (C880 * C15098 + C1054 * C32918) * C33146 +
               (C881 * C15098 + C1053 * C32918) * C33133 +
               (C882 * C15098 +
                (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                    C32918) *
                   C33084) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C351 -
          ((C3272 * C32918 + C630 * C15098) * C33084 +
           (C1535 * C32918 + C631 * C15098) * C33133 +
           (C1537 * C32918 + C632 * C15098) * C33146 +
           (C1713 * C32918 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C15098) *
               C33153) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C15098 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C32918) *
               C33153 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C15098 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C32918) *
               C33146 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C15098 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C32918) *
               C33133 +
           ((C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) * C15098 +
            (C113 * C2289 - C114 * C2288 - C113 * C2290 + C32873 * C2291) *
                C32918) *
               C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C32818 * C110 -
          ((C15821 + C15822 + C15823 + C15824) * C32783 +
           (C15820 + C15819 + C15818 + C15817) * C15814) *
              C32832 * C32818 * C111 +
          ((C15824 + C15823 + C15822 + C15821) * C15814 +
           (C176 * C33154 + C510 * C33150 + C882 * C33140 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C33140 + C880 * C33150 + C512 * C33154) *
               C32783 +
           (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 + C1051 * C33154) *
               C15814) *
              C32832 * C246 +
          ((C1052 * C33154 + C1055 * C33150 + C6310 * C33140 + C6311 * C33092) *
               C15814 +
           (C880 * C33154 + C1054 * C33150 + C6478 * C33140 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C351 -
          ((C8166 * C33092 + C1536 * C33140 + C1537 * C33150 + C632 * C33154) *
               C32783 +
           (C6664 * C33092 + C1712 * C33140 + C1713 * C33150 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C33154) *
               C15814) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C33154 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C33150 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33140 +
            (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
                C33092) *
               C15814 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C33154 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C33150 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33140 +
            (C113 * C7218 - C114 * C7217 - C113 * C7219 + C32873 * C7220) *
                C33092) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C15098 +
            (C6939 + C6940 + C6941) * C32918) *
               C15814 +
           ((C1887 + C1888 + C1889) * C15098 +
            (C2334 + C2333 + C2332) * C32918) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C2329 + C2330 + C2331) * C32918 +
            (C1892 + C1891 + C1890) * C15098) *
               C32783 +
           ((C2332 + C2333 + C2334) * C32918 +
            (C1889 + C1888 + C1887) * C15098) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C1897 * C15098 + (C2331 + C2330 + C2329) * C32918) * C15814 +
           ((C1895 + C1894 + C1893) * C15098 +
            (C1826 * C261 - C1827 * C250 - C1826 * C262 + C33148 * C280 +
             C1828 * C729 - C1829 * C721 - C1828 * C730 + C33137 * C736 +
             C1830 * C2289 - C1831 * C2288 - C1830 * C2290 + C33118 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C15098 +
            (C6939 + C6940 + C6941) * C32918) *
               C15814 +
           ((C1887 + C1888 + C1889) * C15098 +
            (C2334 + C2333 + C2332) * C32918) *
               C32783) *
              C32832 * C245 -
          (((C7242 + C7241 + C7240) * C32918 +
            (C2332 + C2333 + C2334) * C15098) *
               C32783 +
           ((C6944 + C6943 + C6942) * C32918 +
            (C6941 + C6940 + C6939) * C15098) *
               C15814) *
              C32832 * C246 +
          ((C6949 * C15098 + (C6947 + C6946 + C6945) * C32918) * C15814 +
           ((C7240 + C7241 + C7242) * C15098 +
            (C1826 * C1004 - C1827 * C997 - C1826 * C1005 + C33148 * C1015 +
             C1828 * C1692 - C1829 * C1688 - C1828 * C1693 + C33137 * C1697 +
             C1830 * C7218 - C1831 * C7217 - C1830 * C7219 + C33118 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C15098 +
            (C6939 + C6940 + C6941) * C32918) *
               C15814 +
           ((C1887 + C1888 + C1889) * C15098 +
            (C2334 + C2333 + C2332) * C32918) *
               C32783) *
              C351 -
          (((C1830 * C2677 - C1831 * C2673 - C1830 * C2678 + C33118 * C2682 +
             C1828 * C1184 - C1829 * C1170 - C1828 * C1185 + C33137 * C1197 +
             C1826 * C725 - C1827 * C719 - C1826 * C726 + C33148 * C734) *
                C32918 +
            (C2524 + C2525 + C2526) * C15098) *
               C32783 +
           ((C7582 + C7583 + C7584) * C32918 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C15098) *
               C15814) *
              C352 +
          (((C1826 * C374 - C1827 * C359 - C1826 * C375 + C33148 * C389 +
             C1828 * C2128 - C1829 * C2120 - C1828 * C2129 + C33137 * C2138 +
             C1830 * C2130 - C1831 * C2121 - C1830 * C2131 + C33118 * C2139) *
                C15098 +
            (C1826 * C1180 - C1827 * C1168 - C1826 * C1181 + C33148 * C1195 +
             C1828 * C2675 - C1829 * C2672 - C1828 * C2676 + C33137 * C2681 +
             C1830 * C7064 - C1831 * C7060 - C1830 * C7065 + C33118 * C7069) *
                C32918) *
               C15814 +
           ((C1826 * C376 - C1827 * C360 - C1826 * C377 + C33148 * C390 +
             C1828 * C2126 - C1829 * C2119 - C1828 * C2127 + C33137 * C2137 +
             C1830 * C2132 - C1831 * C2122 - C1830 * C2133 + C33118 * C2140) *
                C15098 +
            (C1826 * C1184 - C1827 * C1170 - C1826 * C1185 + C33148 * C1197 +
             C1828 * C2677 - C1829 * C2673 - C1828 * C2678 + C33137 * C2682 +
             C1830 * C12204 - C1831 * C12203 - C1830 * C12205 +
             C33118 * C12206) *
                C32918) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33154 +
             C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
                C15814 +
            (C15817 + C15818 + C15819 + C15820) * C32783) *
               C598 -
           ((C16285 + C16286 + C16287 + C16288) * C32783 +
            (C6664 * C33092 + C1712 * C33140 + C1713 * C33150 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33154) *
                C15814) *
               C599) *
              C32818 * C478 +
          (((C16288 + C16287 + C16286 + C16285) * C15814 +
            (C631 * C33154 + C1535 * C33150 + C1534 * C33140 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33092) *
                C32783) *
               C599 -
           ((C15821 + C15822 + C15823 + C15824) * C32783 +
            (C15820 + C15819 + C15818 + C15817) * C15814) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C15098 +
             C1051 * C32918) *
                C33153 +
            (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
               C598 -
           ((C15577 + C15578) * C33084 + (C15579 + C15580) * C33133 +
            (C15581 + C15582) * C33146 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C15098) *
                C33153) *
               C599) *
              C32818 * C478 +
          (((C15582 + C15581) * C33153 + (C15580 + C15579) * C33146 +
            (C15578 + C15577) * C33133 +
            (C629 * C15098 +
             (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) *
                 C32918) *
                C33084) *
               C599 -
           ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
            (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
              C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
              C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                 C15098 +
             (C6939 + C6940 + C6941) * C32918) *
                C15814 +
            ((C1887 + C1888 + C1889) * C15098 + C17053 * C32918) * C32783) *
               C598 -
           (((C17267 + C17268 + C17269) * C32918 +
             (C2524 + C2525 + C2526) * C15098) *
                C32783 +
            ((C7582 + C7583 + C7584) * C32918 +
             (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
              C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
              C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                 C15098) *
                C15814) *
               C599) *
              C32818 * C478 +
          ((((C2526 + C2525 + C2524) * C15098 +
             (C17269 + C17268 + C17267) * C32918) *
                C15814 +
            ((C2523 + C2522 + C2521) * C15098 +
             (C1826 * C727 - C1827 * C720 - C1826 * C728 + C33148 * C735 +
              C1828 * C1188 - C1829 * C1172 - C1828 * C1189 + C33137 * C1199 +
              C1830 * C2679 - C1831 * C2674 - C1830 * C2680 + C33118 * C2683) *
                 C32918) *
                C32783) *
               C599 -
           (((C2329 + C2330 + C2331) * C32918 +
             (C1892 + C1891 + C1890) * C15098) *
                C32783 +
            (C17054 * C32918 + (C1889 + C1888 + C1887) * C15098) * C15814) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C32832 * C245 -
          ((C882 * C32918 + C510 * C15098) * C33084 +
           (C881 * C32918 + C511 * C15098) * C33133 +
           (C880 * C32918 + C512 * C15098) * C33146 +
           (C1052 * C32918 + C1051 * C15098) * C33153) *
              C32832 * C246 +
          ((C1052 * C15098 + C1055 * C32918) * C33153 +
           (C880 * C15098 + C1054 * C32918) * C33146 +
           (C881 * C15098 + C1053 * C32918) * C33133 +
           (C882 * C15098 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C32918) *
               C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C32832 * C32818 * C110 -
          ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
           (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
              C32832 * C32818 * C111 +
          (C15113 * C33153 + C15114 * C33146 + (C15112 + C15111) * C33133 +
           (C178 * C15098 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                C32918) *
               C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C32818 * C110 -
          ((C15821 + C15822 + C15823 + C15824) * C32783 +
           (C15820 + C15819 + C15818 + C15817) * C15814) *
              C32832 * C32818 * C111 +
          ((C15824 + C15823 + C15822 + C15821) * C15814 +
           (C176 * C33154 + C510 * C33150 + C882 * C33140 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C33140 + C880 * C33150 + C512 * C33154) *
               C32783 +
           (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 + C1051 * C33154) *
               C15814) *
              C32832 * C246 +
          ((C1052 * C33154 + C1055 * C33150 + C6310 * C33140 + C6311 * C33092) *
               C15814 +
           (C880 * C33154 + C1054 * C33150 + C6478 * C33140 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C15098 +
            (C6939 + C6940 + C6941) * C32918) *
               C15814 +
           ((C1887 + C1888 + C1889) * C15098 +
            (C2334 + C2333 + C2332) * C32918) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C2329 + C2330 + C2331) * C32918 +
            (C1892 + C1891 + C1890) * C15098) *
               C32783 +
           ((C2332 + C2333 + C2334) * C32918 +
            (C1889 + C1888 + C1887) * C15098) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C1897 * C15098 + (C2331 + C2330 + C2329) * C32918) * C15814 +
           ((C1895 + C1894 + C1893) * C15098 +
            (C1826 * C261 - C1827 * C250 - C1826 * C262 + C33148 * C280 +
             C1828 * C729 - C1829 * C721 - C1828 * C730 + C33137 * C736 +
             C1830 * C2289 - C1831 * C2288 - C1830 * C2290 + C33118 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C15098 +
            (C6939 + C6940 + C6941) * C32918) *
               C15814 +
           ((C1887 + C1888 + C1889) * C15098 +
            (C2334 + C2333 + C2332) * C32918) *
               C32783) *
              C32832 * C245 -
          (((C7242 + C7241 + C7240) * C32918 +
            (C2332 + C2333 + C2334) * C15098) *
               C32783 +
           ((C6944 + C6943 + C6942) * C32918 +
            (C6941 + C6940 + C6939) * C15098) *
               C15814) *
              C32832 * C246 +
          ((C6949 * C15098 + (C6947 + C6946 + C6945) * C32918) * C15814 +
           ((C7240 + C7241 + C7242) * C15098 +
            (C1826 * C1004 - C1827 * C997 - C1826 * C1005 + C33148 * C1015 +
             C1828 * C1692 - C1829 * C1688 - C1828 * C1693 + C33137 * C1697 +
             C1830 * C7218 - C1831 * C7217 - C1830 * C7219 + C33118 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[15] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C15098 +
             (C4582 + C4583) * C32918) *
                C32778 +
            ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
            C18409 * C17578) *
               C32832 * C476 -
           (((C4584 + C4585) * C32918 + C4931 * C15098) * C17578 +
            (C8960 * C32918 + C4932 * C15098) * C32786 +
            ((C4588 + C4589) * C32918 + (C4583 + C4582) * C15098) * C32778) *
               C32832 * C477) *
              C478 +
          (((C4930 * C15098 + C8591 * C32918) * C32778 +
            (C4385 * C15098 + (C4585 + C4584) * C32918) * C32786 +
            ((C3931 + C3930) * C15098 +
             (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
              C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                 C32918) *
                C17578) *
               C32832 * C477 -
           (((C3930 + C3931) * C32918 + (C3561 + C3560) * C15098) * C17578 +
            (C4931 * C32918 + (C3559 + C3558) * C15098) * C32786 +
            (C4932 * C32918 + (C3557 + C3556) * C15098) * C32778) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C15098 +
             (C4582 + C4583) * C32918) *
                C32778 +
            ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
            C18409 * C17578) *
               C598 -
           (((C5151 + C5152) * C32918 + (C4104 + C4105) * C15098) * C17578 +
            ((C5153 + C5154) * C32918 + (C4106 + C4107) * C15098) * C32786 +
            ((C5361 + C5362) * C32918 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C15098) *
                C32778) *
               C599) *
              C476 +
          ((((C5362 + C5361) * C15098 + (C9376 + C9375) * C32918) * C32778 +
            ((C5154 + C5153) * C15098 + (C9168 + C9167) * C32918) * C32786 +
            ((C5152 + C5151) * C15098 +
             (C3503 * C1174 - C3504 * C1165 - C3503 * C1175 + C33085 * C1192 +
              C3505 * C1190 - C3506 * C1173 - C3505 * C1191 + C32960 * C1200) *
                 C32918) *
                C17578) *
               C599 -
           (((C4584 + C4585) * C32918 + C4931 * C15098) * C17578 +
            (C8960 * C32918 + C4932 * C15098) * C32786 +
            ((C4588 + C4589) * C32918 + (C4583 + C4582) * C15098) * C32778) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C15098 +
            (C4582 + C4583) * C32918) *
               C32778 +
           ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
           C18409 * C17578) *
              C32832 * C245 -
          (((C4584 + C4585) * C32918 + C4931 * C15098) * C17578 +
           (C8960 * C32918 + C4932 * C15098) * C32786 +
           ((C4588 + C4589) * C32918 + (C4583 + C4582) * C15098) * C32778) *
              C32832 * C246 +
          ((C8590 * C15098 + C9573 * C32918) * C32778 +
           (C8591 * C15098 + (C8617 + C8616) * C32918) * C32786 +
           ((C4585 + C4584) * C15098 +
            (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
             C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                C32918) *
               C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C15098 +
            (C4582 + C4583) * C32918) *
               C32778 +
           ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
           C18409 * C17578) *
              C32832 * C32818 * C110 -
          (((C3930 + C3931) * C32918 + (C3561 + C3560) * C15098) * C17578 +
           (C4931 * C32918 + (C3559 + C3558) * C15098) * C32786 +
           (C4932 * C32918 + (C3557 + C3556) * C15098) * C32778) *
              C32832 * C32818 * C111 +
          (C18409 * C32778 +
           (C3565 * C15098 + (C3931 + C3930) * C32918) * C32786 +
           ((C3563 + C3562) * C15098 +
            (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
             C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                C32918) *
               C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C15098 +
            (C4582 + C4583) * C32918) *
               C32778 +
           ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
           C18409 * C17578) *
              C351 -
          (((C5151 + C5152) * C32918 + (C4104 + C4105) * C15098) * C17578 +
           ((C5153 + C5154) * C32918 + (C4106 + C4107) * C15098) * C32786 +
           ((C5361 + C5362) * C32918 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C15098) *
               C32778) *
              C352 +
          (((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
             C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
                C15098 +
            (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
             C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
                C32918) *
               C32778 +
           ((C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
             C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
                C15098 +
            (C3503 * C1184 - C3504 * C1170 - C3503 * C1185 + C33085 * C1197 +
             C3505 * C2677 - C3506 * C2673 - C3505 * C2678 + C32960 * C2682) *
                C32918) *
               C32786 +
           ((C3503 * C378 - C3504 * C361 - C3503 * C379 + C33085 * C391 +
             C3505 * C2124 - C3506 * C2118 - C3505 * C2125 + C32960 * C2136) *
                C15098 +
            (C3503 * C1188 - C3504 * C1172 - C3503 * C1189 + C33085 * C1199 +
             C3505 * C2679 - C3506 * C2674 - C3505 * C2680 + C32960 * C2683) *
                C32918) *
               C17578) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[18] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C15098 +
             (C4582 + C4583) * C32918) *
                C32778 +
            ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
            C18409 * C17578) *
               C598 -
           (((C5151 + C5152) * C32918 + (C4104 + C4105) * C15098) * C17578 +
            ((C5153 + C5154) * C32918 + (C4106 + C4107) * C15098) * C32786 +
            ((C5361 + C5362) * C32918 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C15098) *
                C32778) *
               C599) *
              C32818 * C478 +
          ((((C4107 + C4106) * C15098 + (C5154 + C5153) * C32918) * C32778 +
            ((C4105 + C4104) * C15098 + (C5152 + C5151) * C32918) * C32786 +
            ((C4103 + C4102) * C15098 +
             (C3503 * C729 - C3504 * C721 - C3503 * C730 + C33085 * C736 +
              C3505 * C2289 - C3506 * C2288 - C3505 * C2290 + C32960 * C2291) *
                 C32918) *
                C17578) *
               C599 -
           (((C3930 + C3931) * C32918 + (C3561 + C3560) * C15098) * C17578 +
            (C4931 * C32918 + (C3559 + C3558) * C15098) * C32786 +
            (C4932 * C32918 + (C3557 + C3556) * C15098) * C32778) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C15098 +
            (C4582 + C4583) * C32918) *
               C32778 +
           ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
           C18409 * C17578) *
              C32832 * C32818 * C110 -
          (((C3930 + C3931) * C32918 + (C3561 + C3560) * C15098) * C17578 +
           (C4931 * C32918 + (C3559 + C3558) * C15098) * C32786 +
           (C4932 * C32918 + (C3557 + C3556) * C15098) * C32778) *
              C32832 * C32818 * C111 +
          (C18409 * C32778 +
           (C3565 * C15098 + (C3931 + C3930) * C32918) * C32786 +
           ((C3563 + C3562) * C15098 +
            (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
             C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                C32918) *
               C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C15098 +
            (C4582 + C4583) * C32918) *
               C32778 +
           ((C3556 + C3557) * C15098 + C4930 * C32918) * C32786 +
           C18409 * C17578) *
              C32832 * C245 -
          (((C4584 + C4585) * C32918 + C4931 * C15098) * C17578 +
           (C8960 * C32918 + C4932 * C15098) * C32786 +
           ((C4588 + C4589) * C32918 + (C4583 + C4582) * C15098) * C32778) *
              C32832 * C246 +
          ((C8590 * C15098 + C9573 * C32918) * C32778 +
           (C8591 * C15098 + (C8617 + C8616) * C32918) * C32786 +
           ((C4585 + C4584) * C15098 +
            (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
             C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                C32918) *
               C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[20] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C15098 +
             C1051 * C32918) *
                C33153 +
            (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
               C32832 * C476 -
           ((C15441 + C15442) * C33084 + (C15443 + C15444) * C33133 +
            (C15445 + C15446) * C33146 +
            (C1052 * C32918 + C1051 * C15098) * C33153) *
               C32832 * C477) *
              C478 +
          (((C15446 + C15445) * C33153 + (C15444 + C15443) * C33146 +
            (C15442 + C15441) * C33133 +
            (C509 * C15098 +
             (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                 C32918) *
                C33084) *
               C32832 * C477 -
           ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
            (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33154 +
             C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
                C15814 +
            (C15817 + C15818 + C15819 + C15820) * C32783) *
               C32832 * C476 -
           ((C16151 + C16152 + C16153 + C16154) * C32783 +
            (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 +
             C1051 * C33154) *
                C15814) *
               C32832 * C477) *
              C478 +
          (((C16154 + C16153 + C16152 + C16151) * C15814 +
            (C511 * C33154 + C881 * C33150 + C1053 * C33140 +
             (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                 C33092) *
                C32783) *
               C32832 * C477 -
           ((C15821 + C15822 + C15823 + C15824) * C32783 +
            (C15820 + C15819 + C15818 + C15817) * C15814) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C15098 +
             C1051 * C32918) *
                C33153 +
            (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
               C598 -
           ((C15577 + C15578) * C33084 + (C15579 + C15580) * C33133 +
            (C15581 + C15582) * C33146 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C15098) *
                C33153) *
               C599) *
              C476 +
          (((C1713 * C15098 + C1712 * C32918) * C33153 +
            (C1537 * C15098 + C1536 * C32918) * C33146 +
            (C1535 * C15098 + C1534 * C32918) * C33133 +
            (C3272 * C15098 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C32918) *
                C33084) *
               C599 -
           ((C15441 + C15442) * C33084 + (C15443 + C15444) * C33133 +
            (C15445 + C15446) * C33146 +
            (C1052 * C32918 + C1051 * C15098) * C33153) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33154 +
             C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
                C15814 +
            (C15817 + C15818 + C15819 + C15820) * C32783) *
               C598 -
           ((C16285 + C16286 + C16287 + C16288) * C32783 +
            (C6664 * C33092 + C1712 * C33140 + C1713 * C33150 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33154) *
                C15814) *
               C599) *
              C476 +
          (((C1713 * C33154 + C1712 * C33150 + C6664 * C33140 +
             C6663 * C33092) *
                C15814 +
            (C1537 * C33154 + C1536 * C33150 + C8166 * C33140 +
             (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                 C33092) *
                C32783) *
               C599 -
           ((C16151 + C16152 + C16153 + C16154) * C32783 +
            (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 +
             C1051 * C33154) *
                C15814) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C32832 * C245 -
          ((C882 * C32918 + C510 * C15098) * C33084 +
           (C881 * C32918 + C511 * C15098) * C33133 +
           (C880 * C32918 + C512 * C15098) * C33146 +
           (C1052 * C32918 + C1051 * C15098) * C33153) *
              C32832 * C246 +
          ((C1052 * C15098 + C1055 * C32918) * C33153 +
           (C880 * C15098 + C1054 * C32918) * C33146 +
           (C881 * C15098 + C1053 * C32918) * C33133 +
           (C882 * C15098 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C32918) *
               C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C32832 * C32818 * C110 -
          ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
           (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
              C32832 * C32818 * C111 +
          (C15113 * C33153 + C15114 * C33146 + (C15112 + C15111) * C33133 +
           (C178 * C15098 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                C32918) *
               C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C351 -
          ((C3272 * C32918 + C630 * C15098) * C33084 +
           (C1535 * C32918 + C631 * C15098) * C33133 +
           (C1537 * C32918 + C632 * C15098) * C33146 +
           (C1713 * C32918 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C15098) *
               C33153) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C15098 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C32918) *
               C33153 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C15098 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C32918) *
               C33146 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C15098 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C32918) *
               C33133 +
           ((C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) * C15098 +
            (C113 * C2289 - C114 * C2288 - C113 * C2290 + C32873 * C2291) *
                C32918) *
               C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C32818 * C110 -
          ((C15821 + C15822 + C15823 + C15824) * C32783 +
           (C15820 + C15819 + C15818 + C15817) * C15814) *
              C32832 * C32818 * C111 +
          ((C15824 + C15823 + C15822 + C15821) * C15814 +
           (C176 * C33154 + C510 * C33150 + C882 * C33140 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C33140 + C880 * C33150 + C512 * C33154) *
               C32783 +
           (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 + C1051 * C33154) *
               C15814) *
              C32832 * C246 +
          ((C1052 * C33154 + C1055 * C33150 + C6310 * C33140 + C6311 * C33092) *
               C15814 +
           (C880 * C33154 + C1054 * C33150 + C6478 * C33140 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C351 -
          ((C8166 * C33092 + C1536 * C33140 + C1537 * C33150 + C632 * C33154) *
               C32783 +
           (C6664 * C33092 + C1712 * C33140 + C1713 * C33150 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C33154) *
               C15814) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C33154 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C33150 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33140 +
            (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
                C33092) *
               C15814 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C33154 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C33150 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33140 +
            (C113 * C7218 - C114 * C7217 - C113 * C7219 + C32873 * C7220) *
                C33092) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C15098 +
             C1051 * C32918) *
                C33153 +
            (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
               C598 -
           ((C15577 + C15578) * C33084 + (C15579 + C15580) * C33133 +
            (C15581 + C15582) * C33146 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C15098) *
                C33153) *
               C599) *
              C32818 * C478 +
          (((C15582 + C15581) * C33153 + (C15580 + C15579) * C33146 +
            (C15578 + C15577) * C33133 +
            (C629 * C15098 +
             (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) *
                 C32918) *
                C33084) *
               C599 -
           ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
            (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33154 +
             C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
                C15814 +
            (C15817 + C15818 + C15819 + C15820) * C32783) *
               C598 -
           ((C16285 + C16286 + C16287 + C16288) * C32783 +
            (C6664 * C33092 + C1712 * C33140 + C1713 * C33150 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33154) *
                C15814) *
               C599) *
              C32818 * C478 +
          (((C16288 + C16287 + C16286 + C16285) * C15814 +
            (C631 * C33154 + C1535 * C33150 + C1534 * C33140 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33092) *
                C32783) *
               C599 -
           ((C15821 + C15822 + C15823 + C15824) * C32783 +
            (C15820 + C15819 + C15818 + C15817) * C15814) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[24] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C32832 * C32818 * C110 -
          ((C15111 + C15112) * C33084 + (C15110 + C15109) * C33133 +
           (C15108 + C15107) * C33146 + (C15106 + C15105) * C33153) *
              C32832 * C32818 * C111 +
          (C15113 * C33153 + C15114 * C33146 + (C15112 + C15111) * C33133 +
           (C178 * C15098 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                C32918) *
               C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C15098 +
            C1051 * C32918) *
               C33153 +
           (C15105 + C15106) * C33146 + C15113 * C33133 + C15114 * C33084) *
              C32832 * C245 -
          ((C882 * C32918 + C510 * C15098) * C33084 +
           (C881 * C32918 + C511 * C15098) * C33133 +
           (C880 * C32918 + C512 * C15098) * C33146 +
           (C1052 * C32918 + C1051 * C15098) * C33153) *
              C32832 * C246 +
          ((C1052 * C15098 + C1055 * C32918) * C33153 +
           (C880 * C15098 + C1054 * C32918) * C33146 +
           (C881 * C15098 + C1053 * C32918) * C33133 +
           (C882 * C15098 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C32918) *
               C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C32818 * C110 -
          ((C15821 + C15822 + C15823 + C15824) * C32783 +
           (C15820 + C15819 + C15818 + C15817) * C15814) *
              C32832 * C32818 * C111 +
          ((C15824 + C15823 + C15822 + C15821) * C15814 +
           (C176 * C33154 + C510 * C33150 + C882 * C33140 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33154 +
            C1051 * C33150 + C1052 * C33140 + C1055 * C33092) *
               C15814 +
           (C15817 + C15818 + C15819 + C15820) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C33140 + C880 * C33150 + C512 * C33154) *
               C32783 +
           (C6310 * C33092 + C1055 * C33140 + C1052 * C33150 + C1051 * C33154) *
               C15814) *
              C32832 * C246 +
          ((C1052 * C33154 + C1055 * C33150 + C6310 * C33140 + C6311 * C33092) *
               C15814 +
           (C880 * C33154 + C1054 * C33150 + C6478 * C33140 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C32914 +
             (C21507 + C21508) * C32921 + C21515 * C17575) *
                C33065 +
            ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
                C32783) *
               C32832 * C476 -
           (((C21511 + C21512) * C17575 + C21857 * C32921 + C21858 * C32914) *
                C32783 +
            ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32921 +
             (C21508 + C21507) * C32914) *
                C33065) *
               C32832 * C477) *
              C478 +
          (((C21856 * C32914 + C21474 * C32921 + (C21512 + C21511) * C17575) *
                C33065 +
            (C23258 * C32914 + (C21311 + C21310) * C32921 +
             (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
              C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
              C32960 * C1698) *
                 C17575) *
                C32783) *
               C32832 * C477 -
           (((C21310 + C21311) * C17575 + C23747 * C32921 +
             (C20459 + C20458) * C32914) *
                C32783 +
            (C21857 * C17575 + C21858 * C32921 + (C20457 + C20456) * C32914) *
                C33065) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C32914 +
             (C21507 + C21508) * C32921 + C21515 * C17575) *
                C33065 +
            ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
                C32783) *
               C598 -
           (((C22077 + C22078) * C17575 + (C22079 + C22080) * C32921 +
             (C21006 + C21007) * C32914) *
                C32783 +
            ((C22299 + C22300) * C17575 + (C22301 + C22302) * C32921 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C32914) *
                C33065) *
               C599) *
              C476 +
          ((((C22302 + C22301) * C32914 + (C22300 + C22299) * C32921 +
             (C27941 + C27940) * C17575) *
                C33065 +
            ((C22080 + C22079) * C32914 + (C22078 + C22077) * C32921 +
             (C20403 * C1692 - C20404 * C1688 - C20403 * C1693 +
              C20401 * C1697 + C20405 * C7218 - C20406 * C7217 -
              C20405 * C7219 + C32960 * C7220) *
                 C17575) *
                C32783) *
               C599 -
           (((C21511 + C21512) * C17575 + C21857 * C32921 + C21858 * C32914) *
                C32783 +
            ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32921 +
             (C21508 + C21507) * C32914) *
                C33065) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32914 +
            (C21507 + C21508) * C32921 + C21515 * C17575) *
               C33065 +
           ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
               C32783) *
              C32832 * C245 -
          (((C21511 + C21512) * C17575 + C21857 * C32921 + C21858 * C32914) *
               C32783 +
           ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32921 +
            (C21508 + C21507) * C32914) *
               C33065) *
              C32832 * C246 +
          ((C21515 * C32914 + C27425 * C32921 + (C27439 + C27438) * C17575) *
               C33065 +
           (C21474 * C32914 + (C21512 + C21511) * C32921 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C17575) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32914 +
            (C21507 + C21508) * C32921 + C21515 * C17575) *
               C33065 +
           ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C21310 + C21311) * C17575 + C23747 * C32921 +
            (C20459 + C20458) * C32914) *
               C32783 +
           (C21857 * C17575 + C21858 * C32921 + (C20457 + C20456) * C32914) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C20464 * C32914 + C23258 * C32921 + (C21311 + C21310) * C17575) *
               C33065 +
           (C20465 * C32914 + (C20831 + C20830) * C32921 +
            (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
             C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
             C32960 * C1506) *
                C17575) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32914 +
            (C21507 + C21508) * C32921 + C21515 * C17575) *
               C33065 +
           ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
               C32783) *
              C351 -
          (((C22077 + C22078) * C17575 + (C22079 + C22080) * C32921 +
            (C21006 + C21007) * C32914) *
               C32783 +
           ((C22299 + C22300) * C17575 + (C22301 + C22302) * C32921 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C32914) *
               C33065) *
              C352 +
          (((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
             C20405 * C2128 - C20406 * C2120 - C20405 * C2129 +
             C32960 * C2138) *
                C32914 +
            (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
             C20405 * C2675 - C20406 * C2672 - C20405 * C2676 +
             C32960 * C2681) *
                C32921 +
            (C20403 * C1182 - C20404 * C1169 - C20403 * C1183 + C20401 * C1196 +
             C20405 * C7062 - C20406 * C7059 - C20405 * C7063 +
             C32960 * C7068) *
                C17575) *
               C33065 +
           ((C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
             C20405 * C2126 - C20406 * C2119 - C20405 * C2127 +
             C32960 * C2137) *
                C32914 +
            (C20403 * C1184 - C20404 * C1170 - C20403 * C1185 + C20401 * C1197 +
             C20405 * C2677 - C20406 * C2673 - C20405 * C2678 +
             C32960 * C2682) *
                C32921 +
            (C20403 * C1186 - C20404 * C1171 - C20403 * C1187 + C20401 * C1198 +
             C20405 * C7389 - C20406 * C7388 - C20405 * C7390 +
             C32960 * C7391) *
                C17575) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C32914 +
             (C21507 + C21508) * C32921 + C21515 * C17575) *
                C33065 +
            ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
                C32783) *
               C598 -
           (((C22077 + C22078) * C17575 + (C22079 + C22080) * C32921 +
             (C21006 + C21007) * C32914) *
                C32783 +
            ((C22299 + C22300) * C17575 + (C22301 + C22302) * C32921 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C32914) *
                C33065) *
               C599) *
              C32818 * C478 +
          ((((C21007 + C21006) * C32914 + (C22080 + C22079) * C32921 +
             (C22078 + C22077) * C17575) *
                C33065 +
            ((C21005 + C21004) * C32914 + (C23955 + C23954) * C32921 +
             (C20403 * C1174 - C20404 * C1165 - C20403 * C1175 +
              C20401 * C1192 + C20405 * C1190 - C20406 * C1173 -
              C20405 * C1191 + C32960 * C1200) *
                 C17575) *
                C32783) *
               C599 -
           (((C21310 + C21311) * C17575 + C23747 * C32921 +
             (C20459 + C20458) * C32914) *
                C32783 +
            (C21857 * C17575 + C21858 * C32921 + (C20457 + C20456) * C32914) *
                C33065) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32914 +
            (C21507 + C21508) * C32921 + C21515 * C17575) *
               C33065 +
           ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C21310 + C21311) * C17575 + C23747 * C32921 +
            (C20459 + C20458) * C32914) *
               C32783 +
           (C21857 * C17575 + C21858 * C32921 + (C20457 + C20456) * C32914) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C20464 * C32914 + C23258 * C32921 + (C21311 + C21310) * C17575) *
               C33065 +
           (C20465 * C32914 + (C20831 + C20830) * C32921 +
            (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
             C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
             C32960 * C1506) *
                C17575) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32914 +
            (C21507 + C21508) * C32921 + C21515 * C17575) *
               C33065 +
           ((C20456 + C20457) * C32914 + C21856 * C32921 + C21474 * C17575) *
               C32783) *
              C32832 * C245 -
          (((C21511 + C21512) * C17575 + C21857 * C32921 + C21858 * C32914) *
               C32783 +
           ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32921 +
            (C21508 + C21507) * C32914) *
               C33065) *
              C32832 * C246 +
          ((C21515 * C32914 + C27425 * C32921 + (C27439 + C27438) * C17575) *
               C33065 +
           (C21474 * C32914 + (C21512 + C21511) * C32921 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C17575) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[30] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C32914 +
            (C25423 + C25424 + C25425) * C32921 + C30983 * C17575) *
               C32773 * C32832 * C476 -
           ((C30990 + C30991 + C30992) * C17575 +
            (C25429 + C25430 + C25431) * C32921 +
            (C25425 + C25424 + C25423) * C32914) *
               C32773 * C32832 * C477) *
              C478 +
          ((C25774 * C32914 + (C25428 + C25427 + C25426) * C32921 +
            (C31671 * C1004 - C31710 * C997 - C31671 * C1005 + C32956 * C1015 +
             C31668 * C1692 - C31703 * C1688 - C31668 * C1693 + C32963 * C1697 +
             C31716 * C7218 - C24267 * C7217 - C31716 * C7219 +
             C24261 * C7220) *
                C17575) *
               C32773 * C32832 * C477 -
           ((C25426 + C25427 + C25428) * C17575 + C25775 * C32921 +
            (C24325 + C24324 + C24323) * C32914) *
               C32773 * C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[31] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C32914 +
            (C25423 + C25424 + C25425) * C32921 + C30983 * C17575) *
               C32773 * C598 -
           ((C31559 + C31560 + C31561) * C17575 +
            (C26203 + C26204 + C26205) * C32921 +
            (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
             C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
             C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
                C32914) *
               C32773 * C599) *
              C476 +
          (((C26205 + C26204 + C26203) * C32914 +
            (C31561 + C31560 + C31559) * C32921 +
            (C31671 * C1690 - C31710 * C1687 - C31671 * C1691 + C32956 * C1696 +
             C31668 * C6378 - C31703 * C6374 - C31668 * C6379 + C32963 * C6383 +
             C31716 * C7539 - C24267 * C7538 - C31716 * C7540 +
             C24261 * C7541) *
                C17575) *
               C32773 * C599 -
           ((C30990 + C30991 + C30992) * C17575 +
            (C25429 + C25430 + C25431) * C32921 +
            (C25425 + C25424 + C25423) * C32914) *
               C32773 * C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[32] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32914 +
           (C25423 + C25424 + C25425) * C32921 + C30983 * C17575) *
              C32773 * C32832 * C245 -
          ((C30990 + C30991 + C30992) * C17575 +
           (C25429 + C25430 + C25431) * C32921 +
           (C25425 + C25424 + C25423) * C32914) *
              C32773 * C32832 * C246 +
          (C30983 * C32914 + (C30992 + C30991 + C30990) * C32921 +
           (C31671 * C1008 - C31710 * C999 - C31671 * C1009 + C32956 * C1017 +
            C31668 * C6376 - C31703 * C6373 - C31668 * C6377 + C32963 * C6382 +
            C31716 * C6380 - C24267 * C6375 - C31716 * C6381 + C24261 * C6384) *
               C17575) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32914 +
           (C25423 + C25424 + C25425) * C32921 +
           (C25431 + C25430 + C25429) * C17575) *
              C32773 * C32832 * C32818 * C110 -
          ((C25426 + C25427 + C25428) * C17575 + C25775 * C32921 +
           (C24325 + C24324 + C24323) * C32914) *
              C32773 * C32832 * C32818 * C111 +
          (C24333 * C32914 + (C24739 + C24738 + C24737) * C32921 +
           (C31671 * C273 - C31710 * C256 - C31671 * C274 + C32956 * C286 +
            C31668 * C1174 - C31703 * C1165 - C31668 * C1175 + C32963 * C1192 +
            C31716 * C1190 - C24267 * C1173 - C31716 * C1191 + C24261 * C1200) *
               C17575) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32914 +
           (C25423 + C25424 + C25425) * C32921 + C30983 * C17575) *
              C32773 * C351 -
          ((C31716 * C7062 - C24267 * C7059 - C31716 * C7063 + C24261 * C7068 +
            C31668 * C1182 - C31703 * C1169 - C31668 * C1183 + C32963 * C1196 +
            C31671 * C1178 - C31710 * C1167 - C31671 * C1179 + C32956 * C1194) *
               C17575 +
           (C26203 + C26204 + C26205) * C32921 +
           (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
            C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
            C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
               C32914) *
              C32773 * C352 +
          ((C31671 * C374 - C31710 * C359 - C31671 * C375 + C32956 * C389 +
            C31668 * C2128 - C31703 * C2120 - C31668 * C2129 + C32963 * C2138 +
            C31716 * C2130 - C24267 * C2121 - C31716 * C2131 + C24261 * C2139) *
               C32914 +
           (C31671 * C1180 - C31710 * C1168 - C31671 * C1181 + C32956 * C1195 +
            C31668 * C2675 - C31703 * C2672 - C31668 * C2676 + C32963 * C2681 +
            C31716 * C7064 - C24267 * C7060 - C31716 * C7065 + C24261 * C7069) *
               C32921 +
           (C31671 * C1182 - C31710 * C1169 - C31671 * C1183 + C32956 * C1196 +
            C31668 * C7062 - C31703 * C7059 - C31668 * C7063 + C32963 * C7068 +
            C31716 * C7066 - C24267 * C7061 - C31716 * C7067 + C24261 * C7070) *
               C17575) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[33] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C32914 +
            (C25423 + C25424 + C25425) * C32921 + C30983 * C17575) *
               C32773 * C598 -
           ((C31716 * C7062 - C24267 * C7059 - C31716 * C7063 + C24261 * C7068 +
             C31668 * C1182 - C31703 * C1169 - C31668 * C1183 + C32963 * C1196 +
             C31671 * C1178 - C31710 * C1167 - C31671 * C1179 +
             C32956 * C1194) *
                C17575 +
            (C26203 + C26204 + C26205) * C32921 +
            (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
             C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
             C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
                C32914) *
               C32773 * C599) *
              C32818 * C478 +
          (((C24930 + C24929 + C24928) * C32914 +
            (C25990 + C25989 + C25988) * C32921 +
            (C31671 * C1176 - C31710 * C1166 - C31671 * C1177 + C32956 * C1193 +
             C31668 * C1186 - C31703 * C1171 - C31668 * C1187 + C32963 * C1198 +
             C31716 * C7389 - C24267 * C7388 - C31716 * C7390 +
             C24261 * C7391) *
                C17575) *
               C32773 * C599 -
           ((C25426 + C25427 + C25428) * C17575 + C25775 * C32921 +
            (C24325 + C24324 + C24323) * C32914) *
               C32773 * C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[34] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32914 +
           (C25423 + C25424 + C25425) * C32921 +
           (C25431 + C25430 + C25429) * C17575) *
              C32773 * C32832 * C32818 * C110 -
          ((C25426 + C25427 + C25428) * C17575 + C25775 * C32921 +
           (C24325 + C24324 + C24323) * C32914) *
              C32773 * C32832 * C32818 * C111 +
          (C24333 * C32914 + (C24739 + C24738 + C24737) * C32921 +
           (C31671 * C273 - C31710 * C256 - C31671 * C274 + C32956 * C286 +
            C31668 * C1174 - C31703 * C1165 - C31668 * C1175 + C32963 * C1192 +
            C31716 * C1190 - C24267 * C1173 - C31716 * C1191 + C24261 * C1200) *
               C17575) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32914 +
           (C25423 + C25424 + C25425) * C32921 + C30983 * C17575) *
              C32773 * C32832 * C245 -
          ((C30990 + C30991 + C30992) * C17575 +
           (C25429 + C25430 + C25431) * C32921 +
           (C25425 + C25424 + C25423) * C32914) *
              C32773 * C32832 * C246 +
          (C30983 * C32914 + (C30992 + C30991 + C30990) * C32921 +
           (C31671 * C1008 - C31710 * C999 - C31671 * C1009 + C32956 * C1017 +
            C31668 * C6376 - C31703 * C6373 - C31668 * C6377 + C32963 * C6382 +
            C31716 * C6380 - C24267 * C6375 - C31716 * C6381 + C24261 * C6384) *
               C17575) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33154 +
            (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
               C32773 * C32832 * C476 -
           ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
            (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
               C32773 * C32832 * C477) *
              C478 +
          ((C21856 * C33154 + C21474 * C33150 + (C21512 + C21511) * C33140 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C33092) *
               C32773 * C32832 * C477 -
           ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
            (C20457 + C20456) * C33154) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C15098 +
             (C21507 + C21508) * C32918) *
                C33144 +
            ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
            C26354 * C33106) *
               C32832 * C476 -
           (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
            (C21857 * C32918 + C21858 * C15098) * C33131 +
            ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) *
                C33144) *
               C32832 * C477) *
              C478 +
          (((C21856 * C15098 + C21474 * C32918) * C33144 +
            (C23258 * C15098 + (C21311 + C21310) * C32918) * C33131 +
            ((C20831 + C20830) * C15098 +
             (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
              C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
              C32960 * C1506) *
                 C32918) *
                C33106) *
               C32832 * C477 -
           (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) * C33106 +
            (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
            (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
             C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
             C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
             C22410 * C2128 - C22411 * C2120 - C22410 * C2129 +
             C33099 * C2138) *
                C15098 +
            (C28186 + C28187 + C28188 + C28189) * C32918) *
               C32773 * C32832 * C476 -
           ((C28190 + C28191 + C28192 + C28193) * C32918 +
            (C28189 + C28188 + C28187 + C28186) * C15098) *
               C32773 * C32832 * C477) *
              C478 +
          (((C22822 + C22821 + C22820 + C22819) * C15098 +
            (C22404 * C271 - C22405 * C255 - C22404 * C272 + C33155 * C285 +
             C22406 * C1176 - C22407 * C1166 - C22406 * C1177 + C33152 * C1193 +
             C22408 * C1186 - C22409 * C1171 - C22408 * C1187 + C33143 * C1198 +
             C22410 * C7389 - C22411 * C7388 - C22410 * C7390 +
             C33099 * C7391) *
                C32918) *
               C32773 * C32832 * C477 -
           ((C22819 + C22820 + C22821 + C22822) * C32918 +
            (C22464 + C22463 + C22462 + C22461) * C15098) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33154 +
            (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
               C32773 * C598 -
           ((C27940 + C27941) * C33092 + (C22299 + C22300) * C33140 +
            (C22301 + C22302) * C33150 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C33154) *
               C32773 * C599) *
              C476 +
          (((C22302 + C22301) * C33154 + (C22300 + C22299) * C33150 +
            (C27941 + C27940) * C33140 +
            (C20403 * C6376 - C20404 * C6373 - C20403 * C6377 + C20401 * C6382 +
             C20405 * C6380 - C20406 * C6375 - C20405 * C6381 +
             C32960 * C6384) *
                C33092) *
               C32773 * C599 -
           ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
            (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C15098 +
             (C21507 + C21508) * C32918) *
                C33144 +
            ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
            C26354 * C33106) *
               C598 -
           (((C23954 + C23955) * C32918 + (C21004 + C21005) * C15098) * C33106 +
            ((C22079 + C22080) * C32918 + (C21006 + C21007) * C15098) * C33131 +
            ((C22301 + C22302) * C32918 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C15098) *
                C33144) *
               C599) *
              C476 +
          ((((C22302 + C22301) * C15098 + (C22300 + C22299) * C32918) * C33144 +
            ((C22080 + C22079) * C15098 + (C22078 + C22077) * C32918) * C33131 +
            ((C23955 + C23954) * C15098 +
             (C20403 * C1174 - C20404 * C1165 - C20403 * C1175 +
              C20401 * C1192 + C20405 * C1190 - C20406 * C1173 -
              C20405 * C1191 + C32960 * C1200) *
                 C32918) *
                C33106) *
               C599 -
           (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
            (C21857 * C32918 + C21858 * C15098) * C33131 +
            ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) *
                C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
             C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
             C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
             C22410 * C2128 - C22411 * C2120 - C22410 * C2129 +
             C33099 * C2138) *
                C15098 +
            (C28186 + C28187 + C28188 + C28189) * C32918) *
               C32773 * C598 -
           ((C28706 + C28707 + C28708 + C28709) * C32918 +
            (C22410 * C2130 - C22411 * C2121 - C22410 * C2131 + C33099 * C2139 +
             C22408 * C2128 - C22409 * C2120 - C22408 * C2129 + C33143 * C2138 +
             C22406 * C374 - C22407 * C359 - C22406 * C375 + C33152 * C389 +
             C22404 * C372 - C22405 * C358 - C22404 * C373 + C33155 * C388) *
                C15098) *
               C32773 * C599) *
              C476 +
          (((C28709 + C28708 + C28707 + C28706) * C15098 +
            (C22404 * C1178 - C22405 * C1167 - C22404 * C1179 + C33155 * C1194 +
             C22406 * C1182 - C22407 * C1169 - C22406 * C1183 + C33152 * C1196 +
             C22408 * C7062 - C22409 * C7059 - C22408 * C7063 + C33143 * C7068 +
             C22410 * C7066 - C22411 * C7061 - C22410 * C7067 +
             C33099 * C7070) *
                C32918) *
               C32773 * C599 -
           ((C28190 + C28191 + C28192 + C28193) * C32918 +
            (C28189 + C28188 + C28187 + C28186) * C15098) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
                 C20405 * C372 - C20406 * C358 - C20405 * C373 +
                 C32960 * C388) *
                    C15098 +
                (C21507 + C21508) * C32918) *
                   C33144 +
               ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
               C26354 * C33106) *
                  C32832 * C32818 * C110 -
              (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) *
                   C33106 +
               (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
               (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
                  C32832 * C32818 * C111 +
              (C26354 * C33144 +
               (C20465 * C15098 + (C20831 + C20830) * C32918) * C33131 +
               ((C20463 + C20462) * C15098 +
                (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
                 C20405 * C731 - C20406 * C722 - C20405 * C732 +
                 C32960 * C737) *
                    C32918) *
                   C33106) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
                 C20405 * C372 - C20406 * C358 - C20405 * C373 +
                 C32960 * C388) *
                    C15098 +
                (C21507 + C21508) * C32918) *
                   C33144 +
               ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
               C26354 * C33106) *
                  C32832 * C245 -
              (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
               (C21857 * C32918 + C21858 * C15098) * C33131 +
               ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) *
                   C33144) *
                  C32832 * C246 +
              ((C21515 * C15098 + (C21514 + C21513) * C32918) * C33144 +
               (C21474 * C15098 + (C21512 + C21511) * C32918) * C33131 +
               ((C21311 + C21310) * C15098 +
                (C20403 * C1002 - C20404 * C996 - C20403 * C1003 +
                 C20401 * C1014 + C20405 * C1694 - C20406 * C1689 -
                 C20405 * C1695 + C32960 * C1698) *
                    C32918) *
                   C33106) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C351 -
          (((C23954 + C23955) * C32918 + (C21004 + C21005) * C15098) * C33106 +
           ((C22079 + C22080) * C32918 + (C21006 + C21007) * C15098) * C33131 +
           ((C22301 + C22302) * C32918 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C15098) *
               C33144) *
              C352 +
          (((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
             C20405 * C2128 - C20406 * C2120 - C20405 * C2129 +
             C32960 * C2138) *
                C15098 +
            (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
             C20405 * C2675 - C20406 * C2672 - C20405 * C2676 +
             C32960 * C2681) *
                C32918) *
               C33144 +
           ((C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
             C20405 * C2126 - C20406 * C2119 - C20405 * C2127 +
             C32960 * C2137) *
                C15098 +
            (C20403 * C1184 - C20404 * C1170 - C20403 * C1185 + C20401 * C1197 +
             C20405 * C2677 - C20406 * C2673 - C20405 * C2678 +
             C32960 * C2682) *
                C32918) *
               C33131 +
           ((C20403 * C378 - C20404 * C361 - C20403 * C379 + C20401 * C391 +
             C20405 * C2124 - C20406 * C2118 - C20405 * C2125 +
             C32960 * C2136) *
                C15098 +
            (C20403 * C1188 - C20404 * C1172 - C20403 * C1189 + C20401 * C1199 +
             C20405 * C2679 - C20406 * C2674 - C20405 * C2680 +
             C32960 * C2683) *
                C32918) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 +
           (C21514 + C21513) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
           (C20457 + C20456) * C33154) *
              C32773 * C32832 * C32818 * C111 +
          (C20464 * C33154 + C23258 * C33150 + (C21311 + C21310) * C33140 +
           (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
            C20405 * C1694 - C20406 * C1689 - C20405 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
              C32773 * C32832 * C245 -
          ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
           (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
              C32773 * C32832 * C246 +
          (C21515 * C33154 + C27425 * C33150 + (C27439 + C27438) * C33140 +
           (C20403 * C6291 - C20404 * C6289 - C20403 * C6292 + C20401 * C6295 +
            C20405 * C6647 - C20406 * C6646 - C20405 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
              C32773 * C351 -
          ((C20405 * C6378 - C20406 * C6374 - C20405 * C6379 + C32960 * C6383 +
            C20403 * C1690 - C20404 * C1687 - C20403 * C1691 + C20401 * C1696) *
               C33092 +
           (C22299 + C22300) * C33140 + (C22301 + C22302) * C33150 +
           (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
            C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
               C33154) *
              C32773 * C352 +
          ((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
            C20405 * C2128 - C20406 * C2120 - C20405 * C2129 + C32960 * C2138) *
               C33154 +
           (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
            C20405 * C2675 - C20406 * C2672 - C20405 * C2676 + C32960 * C2681) *
               C33150 +
           (C20403 * C1182 - C20404 * C1169 - C20403 * C1183 + C20401 * C1196 +
            C20405 * C7062 - C20406 * C7059 - C20405 * C7063 + C32960 * C7068) *
               C33140 +
           (C20403 * C6378 - C20404 * C6374 - C20403 * C6379 + C20401 * C6383 +
            C20405 * C7539 - C20406 * C7538 - C20405 * C7540 + C32960 * C7541) *
               C33092) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C15098 +
           (C22404 * C267 - C22405 * C253 - C22404 * C268 + C33155 * C283 +
            C22406 * C723 - C22407 * C718 - C22406 * C724 + C33152 * C733 +
            C22408 * C1180 - C22409 * C1168 - C22408 * C1181 + C33143 * C1195 +
            C22410 * C2675 - C22411 * C2672 - C22410 * C2676 + C33099 * C2681) *
               C32918) *
              C32773 * C32832 * C32818 * C110 -
          ((C22819 + C22820 + C22821 + C22822) * C32918 +
           (C22464 + C22463 + C22462 + C22461) * C15098) *
              C32773 * C32832 * C32818 * C111 +
          ((C22468 + C22467 + C22466 + C22465) * C15098 +
           (C22404 * C263 - C22405 * C251 - C22404 * C264 + C33155 * C281 +
            C22406 * C727 - C22407 * C720 - C22406 * C728 + C33152 * C735 +
            C22408 * C1188 - C22409 * C1172 - C22408 * C1189 + C33143 * C1199 +
            C22410 * C2679 - C22411 * C2674 - C22410 * C2680 + C33099 * C2683) *
               C32918) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C15098 +
           (C28186 + C28187 + C28188 + C28189) * C32918) *
              C32773 * C32832 * C245 -
          ((C28190 + C28191 + C28192 + C28193) * C32918 +
           (C28189 + C28188 + C28187 + C28186) * C15098) *
              C32773 * C32832 * C246 +
          ((C28193 + C28192 + C28191 + C28190) * C15098 +
           (C22404 * C1006 - C22405 * C998 - C22404 * C1007 + C33155 * C1016 +
            C22406 * C1690 - C22407 * C1687 - C22406 * C1691 + C33152 * C1696 +
            C22408 * C6378 - C22409 * C6374 - C22408 * C6379 + C33143 * C6383 +
            C22410 * C7539 - C22411 * C7538 - C22410 * C7540 + C33099 * C7541) *
               C32918) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C15098 +
           (C28186 + C28187 + C28188 + C28189) * C32918) *
              C32773 * C351 -
          ((C22410 * C7064 - C22411 * C7060 - C22410 * C7065 + C33099 * C7069 +
            C22408 * C2675 - C22409 * C2672 - C22408 * C2676 + C33143 * C2681 +
            C22406 * C1180 - C22407 * C1168 - C22406 * C1181 + C33152 * C1195 +
            C22404 * C723 - C22405 * C718 - C22404 * C724 + C33155 * C733) *
               C32918 +
           (C22410 * C2130 - C22411 * C2121 - C22410 * C2131 + C33099 * C2139 +
            C22408 * C2128 - C22409 * C2120 - C22408 * C2129 + C33143 * C2138 +
            C22406 * C374 - C22407 * C359 - C22406 * C375 + C33152 * C389 +
            C22404 * C372 - C22405 * C358 - C22404 * C373 + C33155 * C388) *
               C15098) *
              C32773 * C352 +
          ((C22404 * C374 - C22405 * C359 - C22404 * C375 + C33155 * C389 +
            C22406 * C2128 - C22407 * C2120 - C22406 * C2129 + C33152 * C2138 +
            C22408 * C2130 - C22409 * C2121 - C22408 * C2131 + C33143 * C2139 +
            C22410 * C12115 - C22411 * C12113 - C22410 * C12116 +
            C33099 * C12119) *
               C15098 +
           (C22404 * C1180 - C22405 * C1168 - C22404 * C1181 + C33155 * C1195 +
            C22406 * C2675 - C22407 * C2672 - C22406 * C2676 + C33152 * C2681 +
            C22408 * C7064 - C22409 * C7060 - C22408 * C7065 + C33143 * C7069 +
            C22410 * C12376 - C22411 * C12375 - C22410 * C12377 +
            C33099 * C12378) *
               C32918) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33154 +
            (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
               C32773 * C598 -
           ((C20405 * C6378 - C20406 * C6374 - C20405 * C6379 + C32960 * C6383 +
             C20403 * C1690 - C20404 * C1687 - C20403 * C1691 +
             C20401 * C1696) *
                C33092 +
            (C22299 + C22300) * C33140 + (C22301 + C22302) * C33150 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C33154) *
               C32773 * C599) *
              C32818 * C478 +
          (((C21007 + C21006) * C33154 + (C22080 + C22079) * C33150 +
            (C22078 + C22077) * C33140 +
            (C20403 * C1692 - C20404 * C1688 - C20403 * C1693 + C20401 * C1697 +
             C20405 * C7218 - C20406 * C7217 - C20405 * C7219 +
             C32960 * C7220) *
                C33092) *
               C32773 * C599 -
           ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
            (C20457 + C20456) * C33154) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C15098 +
             (C21507 + C21508) * C32918) *
                C33144 +
            ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
            C26354 * C33106) *
               C598 -
           (((C23954 + C23955) * C32918 + (C21004 + C21005) * C15098) * C33106 +
            ((C22079 + C22080) * C32918 + (C21006 + C21007) * C15098) * C33131 +
            ((C22301 + C22302) * C32918 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C15098) *
                C33144) *
               C599) *
              C32818 * C478 +
          ((((C21007 + C21006) * C15098 + (C22080 + C22079) * C32918) * C33144 +
            ((C21005 + C21004) * C15098 + (C23955 + C23954) * C32918) * C33131 +
            ((C21003 + C21002) * C15098 +
             (C20403 * C729 - C20404 * C721 - C20403 * C730 + C20401 * C736 +
              C20405 * C2289 - C20406 * C2288 - C20405 * C2290 +
              C32960 * C2291) *
                 C32918) *
                C33106) *
               C599 -
           (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) * C33106 +
            (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
            (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
             C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
             C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
             C22410 * C2128 - C22411 * C2120 - C22410 * C2129 +
             C33099 * C2138) *
                C15098 +
            (C28186 + C28187 + C28188 + C28189) * C32918) *
               C32773 * C598 -
           ((C22410 * C7064 - C22411 * C7060 - C22410 * C7065 + C33099 * C7069 +
             C22408 * C2675 - C22409 * C2672 - C22408 * C2676 + C33143 * C2681 +
             C22406 * C1180 - C22407 * C1168 - C22406 * C1181 + C33152 * C1195 +
             C22404 * C723 - C22405 * C718 - C22404 * C724 + C33155 * C733) *
                C32918 +
            (C22410 * C2130 - C22411 * C2121 - C22410 * C2131 + C33099 * C2139 +
             C22408 * C2128 - C22409 * C2120 - C22408 * C2129 + C33143 * C2138 +
             C22406 * C374 - C22407 * C359 - C22406 * C375 + C33152 * C389 +
             C22404 * C372 - C22405 * C358 - C22404 * C373 + C33155 * C388) *
                C15098) *
               C32773 * C599) *
              C32818 * C478 +
          (((C22980 + C22979 + C22978 + C22977) * C15098 +
            (C22404 * C725 - C22405 * C719 - C22404 * C726 + C33155 * C734 +
             C22406 * C1184 - C22407 * C1170 - C22406 * C1185 + C33152 * C1197 +
             C22408 * C2677 - C22409 * C2673 - C22408 * C2678 + C33143 * C2682 +
             C22410 * C12204 - C22411 * C12203 - C22410 * C12205 +
             C33099 * C12206) *
                C32918) *
               C32773 * C599 -
           ((C22819 + C22820 + C22821 + C22822) * C32918 +
            (C22464 + C22463 + C22462 + C22461) * C15098) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C32832 * C245 -
          (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
           (C21857 * C32918 + C21858 * C15098) * C33131 +
           ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) * C33144) *
              C32832 * C246 +
          ((C21515 * C15098 + (C21514 + C21513) * C32918) * C33144 +
           (C21474 * C15098 + (C21512 + C21511) * C32918) * C33131 +
           ((C21311 + C21310) * C15098 +
            (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
             C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
             C32960 * C1698) *
                C32918) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C32832 * C32818 * C110 -
          (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) * C33106 +
           (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
           (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
              C32832 * C32818 * C111 +
          (C26354 * C33144 +
           (C20465 * C15098 + (C20831 + C20830) * C32918) * C33131 +
           ((C20463 + C20462) * C15098 +
            (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
             C20405 * C731 - C20406 * C722 - C20405 * C732 + C32960 * C737) *
                C32918) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 +
           (C21514 + C21513) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
           (C20457 + C20456) * C33154) *
              C32773 * C32832 * C32818 * C111 +
          (C20464 * C33154 + C23258 * C33150 + (C21311 + C21310) * C33140 +
           (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
            C20405 * C1694 - C20406 * C1689 - C20405 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
              C32773 * C32832 * C245 -
          ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
           (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
              C32773 * C32832 * C246 +
          (C21515 * C33154 + C27425 * C33150 + (C27439 + C27438) * C33140 +
           (C20403 * C6291 - C20404 * C6289 - C20403 * C6292 + C20401 * C6295 +
            C20405 * C6647 - C20406 * C6646 - C20405 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C15098 +
           (C22404 * C267 - C22405 * C253 - C22404 * C268 + C33155 * C283 +
            C22406 * C723 - C22407 * C718 - C22406 * C724 + C33152 * C733 +
            C22408 * C1180 - C22409 * C1168 - C22408 * C1181 + C33143 * C1195 +
            C22410 * C2675 - C22411 * C2672 - C22410 * C2676 + C33099 * C2681) *
               C32918) *
              C32773 * C32832 * C32818 * C110 -
          ((C22819 + C22820 + C22821 + C22822) * C32918 +
           (C22464 + C22463 + C22462 + C22461) * C15098) *
              C32773 * C32832 * C32818 * C111 +
          ((C22468 + C22467 + C22466 + C22465) * C15098 +
           (C22404 * C263 - C22405 * C251 - C22404 * C264 + C33155 * C281 +
            C22406 * C727 - C22407 * C720 - C22406 * C728 + C33152 * C735 +
            C22408 * C1188 - C22409 * C1172 - C22408 * C1189 + C33143 * C1199 +
            C22410 * C2679 - C22411 * C2674 - C22410 * C2680 + C33099 * C2683) *
               C32918) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C15098 +
           (C28186 + C28187 + C28188 + C28189) * C32918) *
              C32773 * C32832 * C245 -
          ((C28190 + C28191 + C28192 + C28193) * C32918 +
           (C28189 + C28188 + C28187 + C28186) * C15098) *
              C32773 * C32832 * C246 +
          ((C28193 + C28192 + C28191 + C28190) * C15098 +
           (C22404 * C1006 - C22405 * C998 - C22404 * C1007 + C33155 * C1016 +
            C22406 * C1690 - C22407 * C1687 - C22406 * C1691 + C33152 * C1696 +
            C22408 * C6378 - C22409 * C6374 - C22408 * C6379 + C33143 * C6383 +
            C22410 * C7539 - C22411 * C7538 - C22410 * C7540 + C33099 * C7541) *
               C32918) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
              C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
              C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                 C15098 +
             (C25423 + C25424 + C25425) * C32918) *
                C33065 +
            ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
               C32832 * C476 -
           (((C25426 + C25427 + C25428) * C32918 + C25775 * C15098) * C32783 +
            ((C25429 + C25430 + C25431) * C32918 +
             (C25425 + C25424 + C25423) * C15098) *
                C33065) *
               C32832 * C477) *
              C478 +
          (((C25774 * C15098 + (C25428 + C25427 + C25426) * C32918) * C33065 +
            ((C24739 + C24738 + C24737) * C15098 +
             (C31671 * C273 - C31710 * C256 - C31671 * C274 + C32956 * C286 +
              C31668 * C1174 - C31703 * C1165 - C31668 * C1175 +
              C32963 * C1192 + C31716 * C1190 - C24267 * C1173 -
              C31716 * C1191 + C24261 * C1200) *
                 C32918) *
                C32783) *
               C32832 * C477 -
           (((C24737 + C24738 + C24739) * C32918 +
             (C24328 + C24327 + C24326) * C15098) *
                C32783 +
            (C25775 * C32918 + (C24325 + C24324 + C24323) * C15098) * C33065) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
              C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
              C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                 C15098 +
             (C25423 + C25424 + C25425) * C32918) *
                C33065 +
            ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
               C598 -
           (((C25988 + C25989 + C25990) * C32918 +
             (C24928 + C24929 + C24930) * C15098) *
                C32783 +
            ((C26203 + C26204 + C26205) * C32918 +
             (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 +
              C24261 * C2138 + C31668 * C374 - C31703 * C359 - C31668 * C375 +
              C32963 * C389 + C31671 * C372 - C31710 * C358 - C31671 * C373 +
              C32956 * C388) *
                 C15098) *
                C33065) *
               C599) *
              C476 +
          ((((C26205 + C26204 + C26203) * C15098 +
             (C31671 * C1178 - C31710 * C1167 - C31671 * C1179 +
              C32956 * C1194 + C31668 * C1182 - C31703 * C1169 -
              C31668 * C1183 + C32963 * C1196 + C31716 * C7062 -
              C24267 * C7059 - C31716 * C7063 + C24261 * C7068) *
                 C32918) *
                C33065 +
            ((C25990 + C25989 + C25988) * C15098 +
             (C31671 * C1176 - C31710 * C1166 - C31671 * C1177 +
              C32956 * C1193 + C31668 * C1186 - C31703 * C1171 -
              C31668 * C1187 + C32963 * C1198 + C31716 * C7389 -
              C24267 * C7388 - C31716 * C7390 + C24261 * C7391) *
                 C32918) *
                C32783) *
               C599 -
           (((C25426 + C25427 + C25428) * C32918 + C25775 * C15098) * C32783 +
            ((C25429 + C25430 + C25431) * C32918 +
             (C25425 + C25424 + C25423) * C15098) *
                C33065) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C15098 +
            (C25423 + C25424 + C25425) * C32918) *
               C33065 +
           ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
              C32832 * C245 -
          (((C25426 + C25427 + C25428) * C32918 + C25775 * C15098) * C32783 +
           ((C25429 + C25430 + C25431) * C32918 +
            (C25425 + C25424 + C25423) * C15098) *
               C33065) *
              C32832 * C246 +
          (((C25431 + C25430 + C25429) * C15098 +
            (C31671 * C1006 - C31710 * C998 - C31671 * C1007 + C32956 * C1016 +
             C31668 * C1690 - C31703 * C1687 - C31668 * C1691 + C32963 * C1696 +
             C31716 * C6378 - C24267 * C6374 - C31716 * C6379 +
             C24261 * C6383) *
                C32918) *
               C33065 +
           ((C25428 + C25427 + C25426) * C15098 +
            (C31671 * C1004 - C31710 * C997 - C31671 * C1005 + C32956 * C1015 +
             C31668 * C1692 - C31703 * C1688 - C31668 * C1693 + C32963 * C1697 +
             C31716 * C7218 - C24267 * C7217 - C31716 * C7219 +
             C24261 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C15098 +
            (C25423 + C25424 + C25425) * C32918) *
               C33065 +
           ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
              C32832 * C32818 * C110 -
          (((C24737 + C24738 + C24739) * C32918 +
            (C24328 + C24327 + C24326) * C15098) *
               C32783 +
           (C25775 * C32918 + (C24325 + C24324 + C24323) * C15098) * C33065) *
              C32832 * C32818 * C111 +
          ((C24333 * C15098 + (C24739 + C24738 + C24737) * C32918) * C33065 +
           ((C24331 + C24330 + C24329) * C15098 +
            (C31671 * C261 - C31710 * C250 - C31671 * C262 + C32956 * C280 +
             C31668 * C729 - C31703 * C721 - C31668 * C730 + C32963 * C736 +
             C31716 * C2289 - C24267 * C2288 - C31716 * C2290 +
             C24261 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C15098 +
            (C25423 + C25424 + C25425) * C32918) *
               C33065 +
           ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
              C351 -
          (((C25988 + C25989 + C25990) * C32918 +
            (C24928 + C24929 + C24930) * C15098) *
               C32783 +
           ((C26203 + C26204 + C26205) * C32918 +
            (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
             C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
             C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
                C15098) *
               C33065) *
              C352 +
          (((C31671 * C374 - C31710 * C359 - C31671 * C375 + C32956 * C389 +
             C31668 * C2128 - C31703 * C2120 - C31668 * C2129 + C32963 * C2138 +
             C31716 * C2130 - C24267 * C2121 - C31716 * C2131 +
             C24261 * C2139) *
                C15098 +
            (C31671 * C1180 - C31710 * C1168 - C31671 * C1181 + C32956 * C1195 +
             C31668 * C2675 - C31703 * C2672 - C31668 * C2676 + C32963 * C2681 +
             C31716 * C7064 - C24267 * C7060 - C31716 * C7065 +
             C24261 * C7069) *
                C32918) *
               C33065 +
           ((C31671 * C376 - C31710 * C360 - C31671 * C377 + C32956 * C390 +
             C31668 * C2126 - C31703 * C2119 - C31668 * C2127 + C32963 * C2137 +
             C31716 * C2132 - C24267 * C2122 - C31716 * C2133 +
             C24261 * C2140) *
                C15098 +
            (C31671 * C1184 - C31710 * C1170 - C31671 * C1185 + C32956 * C1197 +
             C31668 * C2677 - C31703 * C2673 - C31668 * C2678 + C32963 * C2682 +
             C31716 * C12204 - C24267 * C12203 - C31716 * C12205 +
             C24261 * C12206) *
                C32918) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
              C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
              C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                 C15098 +
             (C25423 + C25424 + C25425) * C32918) *
                C33065 +
            ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
               C598 -
           (((C25988 + C25989 + C25990) * C32918 +
             (C24928 + C24929 + C24930) * C15098) *
                C32783 +
            ((C26203 + C26204 + C26205) * C32918 +
             (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 +
              C24261 * C2138 + C31668 * C374 - C31703 * C359 - C31668 * C375 +
              C32963 * C389 + C31671 * C372 - C31710 * C358 - C31671 * C373 +
              C32956 * C388) *
                 C15098) *
                C33065) *
               C599) *
              C32818 * C478 +
          ((((C24930 + C24929 + C24928) * C15098 +
             (C25990 + C25989 + C25988) * C32918) *
                C33065 +
            ((C24927 + C24926 + C24925) * C15098 +
             (C31671 * C727 - C31710 * C720 - C31671 * C728 + C32956 * C735 +
              C31668 * C1188 - C31703 * C1172 - C31668 * C1189 +
              C32963 * C1199 + C31716 * C2679 - C24267 * C2674 -
              C31716 * C2680 + C24261 * C2683) *
                 C32918) *
                C32783) *
               C599 -
           (((C24737 + C24738 + C24739) * C32918 +
             (C24328 + C24327 + C24326) * C15098) *
                C32783 +
            (C25775 * C32918 + (C24325 + C24324 + C24323) * C15098) * C33065) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C15098 +
            (C25423 + C25424 + C25425) * C32918) *
               C33065 +
           ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
              C32832 * C32818 * C110 -
          (((C24737 + C24738 + C24739) * C32918 +
            (C24328 + C24327 + C24326) * C15098) *
               C32783 +
           (C25775 * C32918 + (C24325 + C24324 + C24323) * C15098) * C33065) *
              C32832 * C32818 * C111 +
          ((C24333 * C15098 + (C24739 + C24738 + C24737) * C32918) * C33065 +
           ((C24331 + C24330 + C24329) * C15098 +
            (C31671 * C261 - C31710 * C250 - C31671 * C262 + C32956 * C280 +
             C31668 * C729 - C31703 * C721 - C31668 * C730 + C32963 * C736 +
             C31716 * C2289 - C24267 * C2288 - C31716 * C2290 +
             C24261 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C15098 +
            (C25423 + C25424 + C25425) * C32918) *
               C33065 +
           ((C24323 + C24324 + C24325) * C15098 + C25774 * C32918) * C32783) *
              C32832 * C245 -
          (((C25426 + C25427 + C25428) * C32918 + C25775 * C15098) * C32783 +
           ((C25429 + C25430 + C25431) * C32918 +
            (C25425 + C25424 + C25423) * C15098) *
               C33065) *
              C32832 * C246 +
          (((C25431 + C25430 + C25429) * C15098 +
            (C31671 * C1006 - C31710 * C998 - C31671 * C1007 + C32956 * C1016 +
             C31668 * C1690 - C31703 * C1687 - C31668 * C1691 + C32963 * C1696 +
             C31716 * C6378 - C24267 * C6374 - C31716 * C6379 +
             C24261 * C6383) *
                C32918) *
               C33065 +
           ((C25428 + C25427 + C25426) * C15098 +
            (C31671 * C1004 - C31710 * C997 - C31671 * C1005 + C32956 * C1015 +
             C31668 * C1692 - C31703 * C1688 - C31668 * C1693 + C32963 * C1697 +
             C31716 * C7218 - C24267 * C7217 - C31716 * C7219 +
             C24261 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C15098 +
             (C21507 + C21508) * C32918) *
                C33144 +
            ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
            C26354 * C33106) *
               C32832 * C476 -
           (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
            (C21857 * C32918 + C21858 * C15098) * C33131 +
            ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) *
                C33144) *
               C32832 * C477) *
              C478 +
          (((C21856 * C15098 + C21474 * C32918) * C33144 +
            (C23258 * C15098 + (C21311 + C21310) * C32918) * C33131 +
            ((C20831 + C20830) * C15098 +
             (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
              C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
              C32960 * C1506) *
                 C32918) *
                C33106) *
               C32832 * C477 -
           (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) * C33106 +
            (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
            (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33154 +
            (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
               C32773 * C32832 * C476 -
           ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
            (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
               C32773 * C32832 * C477) *
              C478 +
          ((C21856 * C33154 + C21474 * C33150 + (C21512 + C21511) * C33140 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C33092) *
               C32773 * C32832 * C477 -
           ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
            (C20457 + C20456) * C33154) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C15098 +
             (C21507 + C21508) * C32918) *
                C33144 +
            ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
            C26354 * C33106) *
               C598 -
           (((C23954 + C23955) * C32918 + (C21004 + C21005) * C15098) * C33106 +
            ((C22079 + C22080) * C32918 + (C21006 + C21007) * C15098) * C33131 +
            ((C22301 + C22302) * C32918 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C15098) *
                C33144) *
               C599) *
              C476 +
          ((((C22302 + C22301) * C15098 + (C22300 + C22299) * C32918) * C33144 +
            ((C22080 + C22079) * C15098 + (C22078 + C22077) * C32918) * C33131 +
            ((C23955 + C23954) * C15098 +
             (C20403 * C1174 - C20404 * C1165 - C20403 * C1175 +
              C20401 * C1192 + C20405 * C1190 - C20406 * C1173 -
              C20405 * C1191 + C32960 * C1200) *
                 C32918) *
                C33106) *
               C599 -
           (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
            (C21857 * C32918 + C21858 * C15098) * C33131 +
            ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) *
                C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33154 +
            (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
               C32773 * C598 -
           ((C27940 + C27941) * C33092 + (C22299 + C22300) * C33140 +
            (C22301 + C22302) * C33150 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C33154) *
               C32773 * C599) *
              C476 +
          (((C22302 + C22301) * C33154 + (C22300 + C22299) * C33150 +
            (C27941 + C27940) * C33140 +
            (C20403 * C6376 - C20404 * C6373 - C20403 * C6377 + C20401 * C6382 +
             C20405 * C6380 - C20406 * C6375 - C20405 * C6381 +
             C32960 * C6384) *
                C33092) *
               C32773 * C599 -
           ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
            (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C32832 * C245 -
          (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
           (C21857 * C32918 + C21858 * C15098) * C33131 +
           ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) * C33144) *
              C32832 * C246 +
          ((C21515 * C15098 + (C21514 + C21513) * C32918) * C33144 +
           (C21474 * C15098 + (C21512 + C21511) * C32918) * C33131 +
           ((C21311 + C21310) * C15098 +
            (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
             C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
             C32960 * C1698) *
                C32918) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C32832 * C32818 * C110 -
          (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) * C33106 +
           (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
           (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
              C32832 * C32818 * C111 +
          (C26354 * C33144 +
           (C20465 * C15098 + (C20831 + C20830) * C32918) * C33131 +
           ((C20463 + C20462) * C15098 +
            (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
             C20405 * C731 - C20406 * C722 - C20405 * C732 + C32960 * C737) *
                C32918) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C351 -
          (((C23954 + C23955) * C32918 + (C21004 + C21005) * C15098) * C33106 +
           ((C22079 + C22080) * C32918 + (C21006 + C21007) * C15098) * C33131 +
           ((C22301 + C22302) * C32918 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C15098) *
               C33144) *
              C352 +
          (((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
             C20405 * C2128 - C20406 * C2120 - C20405 * C2129 +
             C32960 * C2138) *
                C15098 +
            (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
             C20405 * C2675 - C20406 * C2672 - C20405 * C2676 +
             C32960 * C2681) *
                C32918) *
               C33144 +
           ((C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
             C20405 * C2126 - C20406 * C2119 - C20405 * C2127 +
             C32960 * C2137) *
                C15098 +
            (C20403 * C1184 - C20404 * C1170 - C20403 * C1185 + C20401 * C1197 +
             C20405 * C2677 - C20406 * C2673 - C20405 * C2678 +
             C32960 * C2682) *
                C32918) *
               C33131 +
           ((C20403 * C378 - C20404 * C361 - C20403 * C379 + C20401 * C391 +
             C20405 * C2124 - C20406 * C2118 - C20405 * C2125 +
             C32960 * C2136) *
                C15098 +
            (C20403 * C1188 - C20404 * C1172 - C20403 * C1189 + C20401 * C1199 +
             C20405 * C2679 - C20406 * C2674 - C20405 * C2680 +
             C32960 * C2683) *
                C32918) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 +
           (C21514 + C21513) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
           (C20457 + C20456) * C33154) *
              C32773 * C32832 * C32818 * C111 +
          (C20464 * C33154 + C23258 * C33150 + (C21311 + C21310) * C33140 +
           (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
            C20405 * C1694 - C20406 * C1689 - C20405 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
              C32773 * C32832 * C245 -
          ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
           (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
              C32773 * C32832 * C246 +
          (C21515 * C33154 + C27425 * C33150 + (C27439 + C27438) * C33140 +
           (C20403 * C6291 - C20404 * C6289 - C20403 * C6292 + C20401 * C6295 +
            C20405 * C6647 - C20406 * C6646 - C20405 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
              C32773 * C351 -
          ((C20405 * C6378 - C20406 * C6374 - C20405 * C6379 + C32960 * C6383 +
            C20403 * C1690 - C20404 * C1687 - C20403 * C1691 + C20401 * C1696) *
               C33092 +
           (C22299 + C22300) * C33140 + (C22301 + C22302) * C33150 +
           (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
            C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
               C33154) *
              C32773 * C352 +
          ((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
            C20405 * C2128 - C20406 * C2120 - C20405 * C2129 + C32960 * C2138) *
               C33154 +
           (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
            C20405 * C2675 - C20406 * C2672 - C20405 * C2676 + C32960 * C2681) *
               C33150 +
           (C20403 * C1182 - C20404 * C1169 - C20403 * C1183 + C20401 * C1196 +
            C20405 * C7062 - C20406 * C7059 - C20405 * C7063 + C32960 * C7068) *
               C33140 +
           (C20403 * C6378 - C20404 * C6374 - C20403 * C6379 + C20401 * C6383 +
            C20405 * C7539 - C20406 * C7538 - C20405 * C7540 + C32960 * C7541) *
               C33092) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C15098 +
             (C21507 + C21508) * C32918) *
                C33144 +
            ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
            C26354 * C33106) *
               C598 -
           (((C23954 + C23955) * C32918 + (C21004 + C21005) * C15098) * C33106 +
            ((C22079 + C22080) * C32918 + (C21006 + C21007) * C15098) * C33131 +
            ((C22301 + C22302) * C32918 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C15098) *
                C33144) *
               C599) *
              C32818 * C478 +
          ((((C21007 + C21006) * C15098 + (C22080 + C22079) * C32918) * C33144 +
            ((C21005 + C21004) * C15098 + (C23955 + C23954) * C32918) * C33131 +
            ((C21003 + C21002) * C15098 +
             (C20403 * C729 - C20404 * C721 - C20403 * C730 + C20401 * C736 +
              C20405 * C2289 - C20406 * C2288 - C20405 * C2290 +
              C32960 * C2291) *
                 C32918) *
                C33106) *
               C599 -
           (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) * C33106 +
            (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
            (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33154 +
            (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
               C32773 * C598 -
           ((C20405 * C6378 - C20406 * C6374 - C20405 * C6379 + C32960 * C6383 +
             C20403 * C1690 - C20404 * C1687 - C20403 * C1691 +
             C20401 * C1696) *
                C33092 +
            (C22299 + C22300) * C33140 + (C22301 + C22302) * C33150 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C33154) *
               C32773 * C599) *
              C32818 * C478 +
          (((C21007 + C21006) * C33154 + (C22080 + C22079) * C33150 +
            (C22078 + C22077) * C33140 +
            (C20403 * C1692 - C20404 * C1688 - C20403 * C1693 + C20401 * C1697 +
             C20405 * C7218 - C20406 * C7217 - C20405 * C7219 +
             C32960 * C7220) *
                C33092) *
               C32773 * C599 -
           ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
            (C20457 + C20456) * C33154) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C32832 * C32818 * C110 -
          (((C20830 + C20831) * C32918 + (C20461 + C20460) * C15098) * C33106 +
           (C23747 * C32918 + (C20459 + C20458) * C15098) * C33131 +
           (C21858 * C32918 + (C20457 + C20456) * C15098) * C33144) *
              C32832 * C32818 * C111 +
          (C26354 * C33144 +
           (C20465 * C15098 + (C20831 + C20830) * C32918) * C33131 +
           ((C20463 + C20462) * C15098 +
            (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
             C20405 * C731 - C20406 * C722 - C20405 * C732 + C32960 * C737) *
                C32918) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C15098 +
            (C21507 + C21508) * C32918) *
               C33144 +
           ((C20456 + C20457) * C15098 + C21856 * C32918) * C33131 +
           C26354 * C33106) *
              C32832 * C245 -
          (((C21310 + C21311) * C32918 + C23747 * C15098) * C33106 +
           (C21857 * C32918 + C21858 * C15098) * C33131 +
           ((C21510 + C21509) * C32918 + (C21508 + C21507) * C15098) * C33144) *
              C32832 * C246 +
          ((C21515 * C15098 + (C21514 + C21513) * C32918) * C33144 +
           (C21474 * C15098 + (C21512 + C21511) * C32918) * C33131 +
           ((C21311 + C21310) * C15098 +
            (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
             C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
             C32960 * C1698) *
                C32918) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 +
           (C21514 + C21513) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C21511 + C21512) * C33092 + C21857 * C33140 + C21858 * C33150 +
           (C20457 + C20456) * C33154) *
              C32773 * C32832 * C32818 * C111 +
          (C20464 * C33154 + C23258 * C33150 + (C21311 + C21310) * C33140 +
           (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
            C20405 * C1694 - C20406 * C1689 - C20405 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C33154 +
           (C21507 + C21508) * C33150 + C21515 * C33140 + C27425 * C33092) *
              C32773 * C32832 * C245 -
          ((C27438 + C27439) * C33092 + (C21513 + C21514) * C33140 +
           (C21510 + C21509) * C33150 + (C21508 + C21507) * C33154) *
              C32773 * C32832 * C246 +
          (C21515 * C33154 + C27425 * C33150 + (C27439 + C27438) * C33140 +
           (C20403 * C6291 - C20404 * C6289 - C20403 * C6292 + C20401 * C6295 +
            C20405 * C6647 - C20406 * C6646 - C20405 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
             C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
                C33065 +
            (C7689 + C7690 + C7691 + C7692) * C32783) *
               C32832 * C476 -
           ((C8023 + C8024 + C8025 + C8026) * C32783 +
            (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
                C33065) *
               C32832 * C477) *
              C478 +
          (((C8026 + C8025 + C8024 + C8023) * C33065 +
            (C511 * C7682 + C881 * C7683 + C1053 * C7684 +
             (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                 C33092) *
                C32783) *
               C32832 * C477 -
           ((C7693 + C7694 + C7695 + C7696) * C32783 +
            (C7692 + C7691 + C7690 + C7689) * C33065) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33083 +
             C1051 * C32918) *
                C2784 +
            (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
               C32832 * C476 -
           ((C3125 + C3126) * C33084 + (C3127 + C3128) * C2786 +
            (C3129 + C3130) * C2785 +
            (C1052 * C32918 + C1051 * C33083) * C2784) *
               C32832 * C477) *
              C478 +
          (((C3130 + C3129) * C2784 + (C3128 + C3127) * C2785 +
            (C3126 + C3125) * C2786 +
            (C509 * C33083 +
             (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                 C32918) *
                C33084) *
               C32832 * C477 -
           ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
            (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
              C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
              C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                 C33083 +
             (C11291 + C11292 + C11293) * C32918) *
                C33065 +
            ((C10263 + C10264 + C10265) * C33083 + C13014 * C32918) * C32783) *
               C32832 * C476 -
           (((C11578 + C11577 + C11576) * C32918 + C13015 * C33083) * C32783 +
            ((C11296 + C11295 + C11294) * C32918 +
             (C11293 + C11292 + C11291) * C33083) *
                C33065) *
               C32832 * C477) *
              C478 +
          (((C13014 * C33083 + (C11576 + C11577 + C11578) * C32918) * C33065 +
            ((C10679 + C10678 + C10677) * C33083 +
             (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
              C10204 * C1174 - C10205 * C1165 - C10204 * C1175 +
              C10200 * C1192 + C10206 * C1190 - C10207 * C1173 -
              C10206 * C1191 + C33118 * C1200) *
                 C32918) *
                C32783) *
               C32832 * C477 -
           (((C10677 + C10678 + C10679) * C32918 +
             (C10268 + C10267 + C10266) * C33083) *
                C32783 +
            (C13015 * C32918 + (C10265 + C10264 + C10263) * C33083) * C33065) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
             C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
                C33065 +
            (C7689 + C7690 + C7691 + C7692) * C32783) *
               C598 -
           ((C8167 + C8161 + C8162 + C8163) * C32783 +
            (C6664 * C33092 + C1712 * C7684 + C1713 * C7683 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C7682) *
                C33065) *
               C599) *
              C476 +
          (((C1713 * C7682 + C1712 * C7683 + C6664 * C7684 + C6663 * C33092) *
                C33065 +
            (C1537 * C7682 + C1536 * C7683 + C8166 * C7684 +
             (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                 C33092) *
                C32783) *
               C599 -
           ((C8023 + C8024 + C8025 + C8026) * C32783 +
            (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
                C33065) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33083 +
             C1051 * C32918) *
                C2784 +
            (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
               C598 -
           ((C3273 + C3265) * C33084 + (C3266 + C3267) * C2786 +
            (C3268 + C3269) * C2785 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33083) *
                C2784) *
               C599) *
              C476 +
          (((C1713 * C33083 + C1712 * C32918) * C2784 +
            (C1537 * C33083 + C1536 * C32918) * C2785 +
            (C1535 * C33083 + C1534 * C32918) * C2786 +
            (C3272 * C33083 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C32918) *
                C33084) *
               C599 -
           ((C3125 + C3126) * C33084 + (C3127 + C3128) * C2786 +
            (C3129 + C3130) * C2785 +
            (C1052 * C32918 + C1051 * C33083) * C2784) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
              C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
              C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                 C33083 +
             (C11291 + C11292 + C11293) * C32918) *
                C33065 +
            ((C10263 + C10264 + C10265) * C33083 + C13014 * C32918) * C32783) *
               C598 -
           (((C13228 + C13229 + C13230) * C32918 +
             (C10868 + C10869 + C10870) * C33083) *
                C32783 +
            ((C11910 + C11911 + C11912) * C32918 +
             (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 +
              C33118 * C2138 + C10204 * C374 - C10205 * C359 - C10204 * C375 +
              C10200 * C389 + C10202 * C372 - C10203 * C358 - C10202 * C373 +
              C10199 * C388) *
                 C33083) *
                C33065) *
               C599) *
              C476 +
          ((((C11912 + C11911 + C11910) * C33083 +
             (C11909 + C11908 + C11907) * C32918) *
                C33065 +
            ((C13230 + C13229 + C13228) * C33083 +
             (C10202 * C1176 - C10203 * C1166 - C10202 * C1177 +
              C10199 * C1193 + C10204 * C1186 - C10205 * C1171 -
              C10204 * C1187 + C10200 * C1198 + C10206 * C7389 -
              C10207 * C7388 - C10206 * C7390 + C33118 * C7391) *
                 C32918) *
                C32783) *
               C599 -
           (((C11578 + C11577 + C11576) * C32918 + C13015 * C33083) * C32783 +
            ((C11296 + C11295 + C11294) * C32918 +
             (C11293 + C11292 + C11291) * C33083) *
                C33065) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C33083 +
                C1051 * C32918) *
                   C2784 +
               (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
                  C32832 * C32818 * C110 -
              ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
               (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
                  C32832 * C32818 * C111 +
              (C2797 * C2784 + C2798 * C2785 + (C2796 + C2795) * C2786 +
               (C178 * C33083 +
                (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                    C32918) *
                   C33084) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C33083 +
                C1051 * C32918) *
                   C2784 +
               (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
                  C32832 * C245 -
              ((C882 * C32918 + C510 * C33083) * C33084 +
               (C881 * C32918 + C511 * C33083) * C2786 +
               (C880 * C32918 + C512 * C33083) * C2785 +
               (C1052 * C32918 + C1051 * C33083) * C2784) *
                  C32832 * C246 +
              ((C1052 * C33083 + C1055 * C32918) * C2784 +
               (C880 * C33083 + C1054 * C32918) * C2785 +
               (C881 * C33083 + C1053 * C32918) * C2786 +
               (C882 * C33083 +
                (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                    C32918) *
                   C33084) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C351 -
          (((C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) * C32918 +
            C630 * C33083) *
               C33084 +
           (C1535 * C32918 + C631 * C33083) * C2786 +
           (C1537 * C32918 + C632 * C33083) * C2785 +
           (C1713 * C32918 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C33083) *
               C2784) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C33083 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C32918) *
               C2784 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C33083 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C32918) *
               C2785 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C33083 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C32918) *
               C2786 +
           ((C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) * C33083 +
            (C113 * C2289 - C114 * C2288 - C113 * C2290 + C32873 * C2291) *
                C32918) *
               C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C32818 * C110 -
          ((C7693 + C7694 + C7695 + C7696) * C32783 +
           (C7692 + C7691 + C7690 + C7689) * C33065) *
              C32832 * C32818 * C111 +
          ((C7696 + C7695 + C7694 + C7693) * C33065 +
           (C176 * C7682 + C510 * C7683 + C882 * C7684 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C7684 + C880 * C7683 + C512 * C7682) *
               C32783 +
           (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
               C33065) *
              C32832 * C246 +
          ((C1052 * C7682 + C1055 * C7683 + C6310 * C7684 + C6311 * C33092) *
               C33065 +
           (C880 * C7682 + C1054 * C7683 + C6478 * C7684 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C351 -
          (((C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                C33092 +
            C1536 * C7684 + C1537 * C7683 + C632 * C7682) *
               C32783 +
           (C6664 * C33092 + C1712 * C7684 + C1713 * C7683 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C7682) *
               C33065) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C7682 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C7683 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C7684 +
            (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
                C33092) *
               C33065 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C7682 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C7683 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C7684 +
            (C113 * C7218 - C114 * C7217 - C113 * C7219 + C32873 * C7220) *
                C33092) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33083 +
            (C11291 + C11292 + C11293) * C32918) *
               C33065 +
           ((C10263 + C10264 + C10265) * C33083 +
            (C10682 + C10681 + C10680) * C32918) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C10677 + C10678 + C10679) * C32918 +
            (C10268 + C10267 + C10266) * C33083) *
               C32783 +
           ((C10680 + C10681 + C10682) * C32918 +
            (C10265 + C10264 + C10263) * C33083) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C10273 * C33083 + (C10679 + C10678 + C10677) * C32918) * C33065 +
           ((C10271 + C10270 + C10269) * C33083 +
            (C10202 * C261 - C10203 * C250 - C10202 * C262 + C10199 * C280 +
             C10204 * C729 - C10205 * C721 - C10204 * C730 + C10200 * C736 +
             C10206 * C2289 - C10207 * C2288 - C10206 * C2290 +
             C33118 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33083 +
            (C11291 + C11292 + C11293) * C32918) *
               C33065 +
           ((C10263 + C10264 + C10265) * C33083 +
            (C10682 + C10681 + C10680) * C32918) *
               C32783) *
              C32832 * C245 -
          (((C11578 + C11577 + C11576) * C32918 +
            (C10680 + C10681 + C10682) * C33083) *
               C32783 +
           ((C11296 + C11295 + C11294) * C32918 +
            (C11293 + C11292 + C11291) * C33083) *
               C33065) *
              C32832 * C246 +
          ((C11301 * C33083 + (C11299 + C11298 + C11297) * C32918) * C33065 +
           ((C11576 + C11577 + C11578) * C33083 +
            (C10202 * C1004 - C10203 * C997 - C10202 * C1005 + C10199 * C1015 +
             C10204 * C1692 - C10205 * C1688 - C10204 * C1693 + C10200 * C1697 +
             C10206 * C7218 - C10207 * C7217 - C10206 * C7219 +
             C33118 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33083 +
            (C11291 + C11292 + C11293) * C32918) *
               C33065 +
           ((C10263 + C10264 + C10265) * C33083 +
            (C10682 + C10681 + C10680) * C32918) *
               C32783) *
              C351 -
          (((C10206 * C2677 - C10207 * C2673 - C10206 * C2678 + C33118 * C2682 +
             C10204 * C1184 - C10205 * C1170 - C10204 * C1185 + C10200 * C1197 +
             C10202 * C725 - C10203 * C719 - C10202 * C726 + C10199 * C734) *
                C32918 +
            (C10868 + C10869 + C10870) * C33083) *
               C32783 +
           ((C11910 + C11911 + C11912) * C32918 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C33083) *
               C33065) *
              C352 +
          (((C10202 * C374 - C10203 * C359 - C10202 * C375 + C10199 * C389 +
             C10204 * C2128 - C10205 * C2120 - C10204 * C2129 + C10200 * C2138 +
             C10206 * C2130 - C10207 * C2121 - C10206 * C2131 +
             C33118 * C2139) *
                C33083 +
            (C10202 * C1180 - C10203 * C1168 - C10202 * C1181 + C10199 * C1195 +
             C10204 * C2675 - C10205 * C2672 - C10204 * C2676 + C10200 * C2681 +
             C10206 * C7064 - C10207 * C7060 - C10206 * C7065 +
             C33118 * C7069) *
                C32918) *
               C33065 +
           ((C10202 * C376 - C10203 * C360 - C10202 * C377 + C10199 * C390 +
             C10204 * C2126 - C10205 * C2119 - C10204 * C2127 + C10200 * C2137 +
             C10206 * C2132 - C10207 * C2122 - C10206 * C2133 +
             C33118 * C2140) *
                C33083 +
            (C10202 * C1184 - C10203 * C1170 - C10202 * C1185 + C10199 * C1197 +
             C10204 * C2677 - C10205 * C2673 - C10204 * C2678 + C10200 * C2682 +
             C10206 * C12204 - C10207 * C12203 - C10206 * C12205 +
             C33118 * C12206) *
                C32918) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
             C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
                C33065 +
            (C7689 + C7690 + C7691 + C7692) * C32783) *
               C598 -
           ((C8167 + C8161 + C8162 + C8163) * C32783 +
            (C6664 * C33092 + C1712 * C7684 + C1713 * C7683 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C7682) *
                C33065) *
               C599) *
              C32818 * C478 +
          (((C8163 + C8162 + C8161 + C8167) * C33065 +
            (C631 * C7682 + C1535 * C7683 + C1534 * C7684 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33092) *
                C32783) *
               C599 -
           ((C7693 + C7694 + C7695 + C7696) * C32783 +
            (C7692 + C7691 + C7690 + C7689) * C33065) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33083 +
             C1051 * C32918) *
                C2784 +
            (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
               C598 -
           ((C3273 + C3265) * C33084 + (C3266 + C3267) * C2786 +
            (C3268 + C3269) * C2785 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33083) *
                C2784) *
               C599) *
              C32818 * C478 +
          (((C3269 + C3268) * C2784 + (C3267 + C3266) * C2785 +
            (C3265 + C3273) * C2786 +
            (C629 * C33083 +
             (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) *
                 C32918) *
                C33084) *
               C599 -
           ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
            (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
              C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
              C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                 C33083 +
             (C11291 + C11292 + C11293) * C32918) *
                C33065 +
            ((C10263 + C10264 + C10265) * C33083 + C13014 * C32918) * C32783) *
               C598 -
           (((C13228 + C13229 + C13230) * C32918 +
             (C10868 + C10869 + C10870) * C33083) *
                C32783 +
            ((C11910 + C11911 + C11912) * C32918 +
             (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 +
              C33118 * C2138 + C10204 * C374 - C10205 * C359 - C10204 * C375 +
              C10200 * C389 + C10202 * C372 - C10203 * C358 - C10202 * C373 +
              C10199 * C388) *
                 C33083) *
                C33065) *
               C599) *
              C32818 * C478 +
          ((((C10870 + C10869 + C10868) * C33083 +
             (C13230 + C13229 + C13228) * C32918) *
                C33065 +
            ((C10867 + C10866 + C10865) * C33083 +
             (C10202 * C727 - C10203 * C720 - C10202 * C728 + C10199 * C735 +
              C10204 * C1188 - C10205 * C1172 - C10204 * C1189 +
              C10200 * C1199 + C10206 * C2679 - C10207 * C2674 -
              C10206 * C2680 + C33118 * C2683) *
                 C32918) *
                C32783) *
               C599 -
           (((C10677 + C10678 + C10679) * C32918 +
             (C10268 + C10267 + C10266) * C33083) *
                C32783 +
            (C13015 * C32918 + (C10265 + C10264 + C10263) * C33083) * C33065) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[54] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C32832 * C245 -
          ((C882 * C32918 + C510 * C33083) * C33084 +
           (C881 * C32918 + C511 * C33083) * C2786 +
           (C880 * C32918 + C512 * C33083) * C2785 +
           (C1052 * C32918 + C1051 * C33083) * C2784) *
              C32832 * C246 +
          ((C1052 * C33083 + C1055 * C32918) * C2784 +
           (C880 * C33083 + C1054 * C32918) * C2785 +
           (C881 * C33083 + C1053 * C32918) * C2786 +
           (C882 * C33083 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C32918) *
               C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C32832 * C32818 * C110 -
          ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
           (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
              C32832 * C32818 * C111 +
          (C2797 * C2784 + C2798 * C2785 + (C2796 + C2795) * C2786 +
           (C178 * C33083 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                C32918) *
               C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C32818 * C110 -
          ((C7693 + C7694 + C7695 + C7696) * C32783 +
           (C7692 + C7691 + C7690 + C7689) * C33065) *
              C32832 * C32818 * C111 +
          ((C7696 + C7695 + C7694 + C7693) * C33065 +
           (C176 * C7682 + C510 * C7683 + C882 * C7684 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C7684 + C880 * C7683 + C512 * C7682) *
               C32783 +
           (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
               C33065) *
              C32832 * C246 +
          ((C1052 * C7682 + C1055 * C7683 + C6310 * C7684 + C6311 * C33092) *
               C33065 +
           (C880 * C7682 + C1054 * C7683 + C6478 * C7684 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33083 +
            (C11291 + C11292 + C11293) * C32918) *
               C33065 +
           ((C10263 + C10264 + C10265) * C33083 +
            (C10682 + C10681 + C10680) * C32918) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C10677 + C10678 + C10679) * C32918 +
            (C10268 + C10267 + C10266) * C33083) *
               C32783 +
           ((C10680 + C10681 + C10682) * C32918 +
            (C10265 + C10264 + C10263) * C33083) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C10273 * C33083 + (C10679 + C10678 + C10677) * C32918) * C33065 +
           ((C10271 + C10270 + C10269) * C33083 +
            (C10202 * C261 - C10203 * C250 - C10202 * C262 + C10199 * C280 +
             C10204 * C729 - C10205 * C721 - C10204 * C730 + C10200 * C736 +
             C10206 * C2289 - C10207 * C2288 - C10206 * C2290 +
             C33118 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33083 +
            (C11291 + C11292 + C11293) * C32918) *
               C33065 +
           ((C10263 + C10264 + C10265) * C33083 +
            (C10682 + C10681 + C10680) * C32918) *
               C32783) *
              C32832 * C245 -
          (((C11578 + C11577 + C11576) * C32918 +
            (C10680 + C10681 + C10682) * C33083) *
               C32783 +
           ((C11296 + C11295 + C11294) * C32918 +
            (C11293 + C11292 + C11291) * C33083) *
               C33065) *
              C32832 * C246 +
          ((C11301 * C33083 + (C11299 + C11298 + C11297) * C32918) * C33065 +
           ((C11576 + C11577 + C11578) * C33083 +
            (C10202 * C1004 - C10203 * C997 - C10202 * C1005 + C10199 * C1015 +
             C10204 * C1692 - C10205 * C1688 - C10204 * C1693 + C10200 * C1697 +
             C10206 * C7218 - C10207 * C7217 - C10206 * C7219 +
             C33118 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[55] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C7682 +
            (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
               C32773 * C32832 * C476 -
           ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
            (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
               C32773 * C32832 * C477) *
              C478 +
          ((C4930 * C7682 + C8591 * C7683 + (C8617 + C8616) * C7684 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C33092) *
               C32773 * C32832 * C477 -
           ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
            (C3557 + C3556) * C7682) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C33083 +
             (C4582 + C4583) * C32918) *
                C851 +
            ((C3556 + C3557) * C33083 + C4930 * C32918) * C852 +
            C4387 * C33106) *
               C32832 * C476 -
           (((C4584 + C4585) * C32918 + C4931 * C33083) * C33106 +
            ((C4586 + C4587) * C32918 + C4932 * C33083) * C852 +
            ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
               C32832 * C477) *
              C478 +
          (((C4930 * C33083 + (C4587 + C4586) * C32918) * C851 +
            (C4385 * C33083 + (C4585 + C4584) * C32918) * C852 +
            ((C3931 + C3930) * C33083 +
             (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
              C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                 C32918) *
                C33106) *
               C32832 * C477 -
           (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
            (C4931 * C32918 + (C3559 + C3558) * C33083) * C852 +
            (C4932 * C32918 + (C3557 + C3556) * C33083) * C851) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
             C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
             C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
             C13532 * C2128 - C13533 * C2120 - C13532 * C2129 +
             C33099 * C2138) *
                C33083 +
            (C14477 + C14478 + C14479 + C14480) * C32918) *
               C32773 * C32832 * C476 -
           ((C14481 + C14482 + C14483 + C14484) * C32918 +
            (C14480 + C14479 + C14478 + C14477) * C33083) *
               C32773 * C32832 * C477) *
              C478 +
          (((C13944 + C13943 + C13942 + C13941) * C33083 +
            (C13526 * C271 - C13527 * C255 - C13526 * C272 + C13522 * C285 +
             C13528 * C1176 - C13529 * C1166 - C13528 * C1177 + C13523 * C1193 +
             C13530 * C1186 - C13531 * C1171 - C13530 * C1187 + C13524 * C1198 +
             C13532 * C7389 - C13533 * C7388 - C13532 * C7390 +
             C33099 * C7391) *
                C32918) *
               C32773 * C32832 * C477 -
           ((C13941 + C13942 + C13943 + C13944) * C32918 +
            (C13586 + C13585 + C13584 + C13583) * C33083) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[56] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C7682 +
            (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
               C32773 * C598 -
           ((C10088 + C10089) * C33092 + (C9375 + C9376) * C7684 +
            (C5361 + C5362) * C7683 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C7682) *
               C32773 * C599) *
              C476 +
          (((C5362 + C5361) * C7682 + (C9376 + C9375) * C7683 +
            (C10089 + C10088) * C7684 +
            (C3503 * C6376 - C3504 * C6373 - C3503 * C6377 + C33085 * C6382 +
             C3505 * C6380 - C3506 * C6375 - C3505 * C6381 + C32960 * C6384) *
                C33092) *
               C32773 * C599 -
           ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
            (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C33083 +
             (C4582 + C4583) * C32918) *
                C851 +
            ((C3556 + C3557) * C33083 + C4930 * C32918) * C852 +
            C4387 * C33106) *
               C598 -
           (((C5151 + C5152) * C32918 + (C4104 + C4105) * C33083) * C33106 +
            ((C5153 + C5154) * C32918 + (C4106 + C4107) * C33083) * C852 +
            ((C5361 + C5362) * C32918 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C33083) *
                C851) *
               C599) *
              C476 +
          ((((C5362 + C5361) * C33083 +
             (C3503 * C1178 - C3504 * C1167 - C3503 * C1179 + C33085 * C1194 +
              C3505 * C1182 - C3506 * C1169 - C3505 * C1183 + C32960 * C1196) *
                 C32918) *
                C851 +
            ((C5154 + C5153) * C33083 +
             (C3503 * C1176 - C3504 * C1166 - C3503 * C1177 + C33085 * C1193 +
              C3505 * C1186 - C3506 * C1171 - C3505 * C1187 + C32960 * C1198) *
                 C32918) *
                C852 +
            ((C5152 + C5151) * C33083 +
             (C3503 * C1174 - C3504 * C1165 - C3503 * C1175 + C33085 * C1192 +
              C3505 * C1190 - C3506 * C1173 - C3505 * C1191 + C32960 * C1200) *
                 C32918) *
                C33106) *
               C599 -
           (((C4584 + C4585) * C32918 + C4931 * C33083) * C33106 +
            ((C4586 + C4587) * C32918 + C4932 * C33083) * C852 +
            ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
             C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
             C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
             C13532 * C2128 - C13533 * C2120 - C13532 * C2129 +
             C33099 * C2138) *
                C33083 +
            (C14477 + C14478 + C14479 + C14480) * C32918) *
               C32773 * C598 -
           ((C14997 + C14998 + C14999 + C15000) * C32918 +
            (C13532 * C2130 - C13533 * C2121 - C13532 * C2131 + C33099 * C2139 +
             C13530 * C2128 - C13531 * C2120 - C13530 * C2129 + C13524 * C2138 +
             C13528 * C374 - C13529 * C359 - C13528 * C375 + C13523 * C389 +
             C13526 * C372 - C13527 * C358 - C13526 * C373 + C13522 * C388) *
                C33083) *
               C32773 * C599) *
              C476 +
          (((C15000 + C14999 + C14998 + C14997) * C33083 +
            (C13526 * C1178 - C13527 * C1167 - C13526 * C1179 + C13522 * C1194 +
             C13528 * C1182 - C13529 * C1169 - C13528 * C1183 + C13523 * C1196 +
             C13530 * C7062 - C13531 * C7059 - C13530 * C7063 + C13524 * C7068 +
             C13532 * C7066 - C13533 * C7061 - C13532 * C7067 +
             C33099 * C7070) *
                C32918) *
               C32773 * C599 -
           ((C14481 + C14482 + C14483 + C14484) * C32918 +
            (C14480 + C14479 + C14478 + C14477) * C33083) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[57] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
                 C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                    C33083 +
                (C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283 +
                 C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733) *
                    C32918) *
                   C851 +
               ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
               C4387 * C33106) *
                  C32832 * C32818 * C110 -
              (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
               ((C3932 + C3933) * C32918 + (C3559 + C3558) * C33083) * C852 +
               ((C3934 + C3935) * C32918 + (C3557 + C3556) * C33083) * C851) *
                  C32832 * C32818 * C111 +
              (C4387 * C851 +
               (C3565 * C33083 + (C3931 + C3930) * C32918) * C852 +
               ((C3563 + C3562) * C33083 +
                (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
                 C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                    C32918) *
                   C33106) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
                 C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                    C33083 +
                (C4582 + C4583) * C32918) *
                   C851 +
               ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
               C4387 * C33106) *
                  C32832 * C245 -
              (((C4584 + C4585) * C32918 + (C3932 + C3933) * C33083) * C33106 +
               ((C4586 + C4587) * C32918 + (C3934 + C3935) * C33083) * C852 +
               ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
                  C32832 * C246 +
              (((C4589 + C4588) * C33083 +
                (C3503 * C1006 - C3504 * C998 - C3503 * C1007 + C33085 * C1016 +
                 C3505 * C1690 - C3506 * C1687 - C3505 * C1691 +
                 C32960 * C1696) *
                    C32918) *
                   C851 +
               ((C4587 + C4586) * C33083 +
                (C3503 * C1004 - C3504 * C997 - C3503 * C1005 + C33085 * C1015 +
                 C3505 * C1692 - C3506 * C1688 - C3505 * C1693 +
                 C32960 * C1697) *
                    C32918) *
                   C852 +
               ((C4585 + C4584) * C33083 +
                (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
                 C3505 * C1694 - C3506 * C1689 - C3505 * C1695 +
                 C32960 * C1698) *
                    C32918) *
                   C33106) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C4582 + C4583) * C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C351 -
          (((C3505 * C1188 - C3506 * C1172 - C3505 * C1189 + C32960 * C1199 +
             C3503 * C727 - C3504 * C720 - C3503 * C728 + C33085 * C735) *
                C32918 +
            (C4104 + C4105) * C33083) *
               C33106 +
           ((C3505 * C1184 - C3506 * C1170 - C3505 * C1185 + C32960 * C1197 +
             C3503 * C725 - C3504 * C719 - C3503 * C726 + C33085 * C734) *
                C32918 +
            (C4106 + C4107) * C33083) *
               C852 +
           ((C3505 * C1180 - C3506 * C1168 - C3505 * C1181 + C32960 * C1195 +
             C3503 * C723 - C3504 * C718 - C3503 * C724 + C33085 * C733) *
                C32918 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C33083) *
               C851) *
              C352 +
          (((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
             C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
                C33083 +
            (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
             C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
                C32918) *
               C851 +
           ((C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
             C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
                C33083 +
            (C3503 * C1184 - C3504 * C1170 - C3503 * C1185 + C33085 * C1197 +
             C3505 * C2677 - C3506 * C2673 - C3505 * C2678 + C32960 * C2682) *
                C32918) *
               C852 +
           ((C3503 * C378 - C3504 * C361 - C3503 * C379 + C33085 * C391 +
             C3505 * C2124 - C3506 * C2118 - C3505 * C2125 + C32960 * C2136) *
                C33083 +
            (C3503 * C1188 - C3504 * C1172 - C3503 * C1189 + C33085 * C1199 +
             C3505 * C2679 - C3506 * C2674 - C3505 * C2680 + C32960 * C2683) *
                C32918) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + (C8619 + C8618) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
           (C3557 + C3556) * C7682) *
              C32773 * C32832 * C32818 * C111 +
          (C3564 * C7682 + C4385 * C7683 + (C4585 + C4584) * C7684 +
           (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
            C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
              C32773 * C32832 * C245 -
          ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
           (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
              C32773 * C32832 * C246 +
          (C8590 * C7682 + C9573 * C7683 + (C9587 + C9586) * C7684 +
           (C3503 * C6291 - C3504 * C6289 - C3503 * C6292 + C33085 * C6295 +
            C3505 * C6647 - C3506 * C6646 - C3505 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
              C32773 * C351 -
          ((C3505 * C6378 - C3506 * C6374 - C3505 * C6379 + C32960 * C6383 +
            C3503 * C1690 - C3504 * C1687 - C3503 * C1691 + C33085 * C1696) *
               C33092 +
           (C9375 + C9376) * C7684 + (C5361 + C5362) * C7683 +
           (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
            C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
               C7682) *
              C32773 * C352 +
          ((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
            C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
               C7682 +
           (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
            C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
               C7683 +
           (C3503 * C1182 - C3504 * C1169 - C3503 * C1183 + C33085 * C1196 +
            C3505 * C7062 - C3506 * C7059 - C3505 * C7063 + C32960 * C7068) *
               C7684 +
           (C3503 * C6378 - C3504 * C6374 - C3503 * C6379 + C33085 * C6383 +
            C3505 * C7539 - C3506 * C7538 - C3505 * C7540 + C32960 * C7541) *
               C33092) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C33083 +
           (C13526 * C267 - C13527 * C253 - C13526 * C268 + C13522 * C283 +
            C13528 * C723 - C13529 * C718 - C13528 * C724 + C13523 * C733 +
            C13530 * C1180 - C13531 * C1168 - C13530 * C1181 + C13524 * C1195 +
            C13532 * C2675 - C13533 * C2672 - C13532 * C2676 + C33099 * C2681) *
               C32918) *
              C32773 * C32832 * C32818 * C110 -
          ((C13941 + C13942 + C13943 + C13944) * C32918 +
           (C13586 + C13585 + C13584 + C13583) * C33083) *
              C32773 * C32832 * C32818 * C111 +
          ((C13590 + C13589 + C13588 + C13587) * C33083 +
           (C13526 * C263 - C13527 * C251 - C13526 * C264 + C13522 * C281 +
            C13528 * C727 - C13529 * C720 - C13528 * C728 + C13523 * C735 +
            C13530 * C1188 - C13531 * C1172 - C13530 * C1189 + C13524 * C1199 +
            C13532 * C2679 - C13533 * C2674 - C13532 * C2680 + C33099 * C2683) *
               C32918) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C33083 +
           (C14477 + C14478 + C14479 + C14480) * C32918) *
              C32773 * C32832 * C245 -
          ((C14481 + C14482 + C14483 + C14484) * C32918 +
           (C14480 + C14479 + C14478 + C14477) * C33083) *
              C32773 * C32832 * C246 +
          ((C14484 + C14483 + C14482 + C14481) * C33083 +
           (C13526 * C1006 - C13527 * C998 - C13526 * C1007 + C13522 * C1016 +
            C13528 * C1690 - C13529 * C1687 - C13528 * C1691 + C13523 * C1696 +
            C13530 * C6378 - C13531 * C6374 - C13530 * C6379 + C13524 * C6383 +
            C13532 * C7539 - C13533 * C7538 - C13532 * C7540 + C33099 * C7541) *
               C32918) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C33083 +
           (C14477 + C14478 + C14479 + C14480) * C32918) *
              C32773 * C351 -
          ((C13532 * C7064 - C13533 * C7060 - C13532 * C7065 + C33099 * C7069 +
            C13530 * C2675 - C13531 * C2672 - C13530 * C2676 + C13524 * C2681 +
            C13528 * C1180 - C13529 * C1168 - C13528 * C1181 + C13523 * C1195 +
            C13526 * C723 - C13527 * C718 - C13526 * C724 + C13522 * C733) *
               C32918 +
           (C13532 * C2130 - C13533 * C2121 - C13532 * C2131 + C33099 * C2139 +
            C13530 * C2128 - C13531 * C2120 - C13530 * C2129 + C13524 * C2138 +
            C13528 * C374 - C13529 * C359 - C13528 * C375 + C13523 * C389 +
            C13526 * C372 - C13527 * C358 - C13526 * C373 + C13522 * C388) *
               C33083) *
              C32773 * C352 +
          ((C13526 * C374 - C13527 * C359 - C13526 * C375 + C13522 * C389 +
            C13528 * C2128 - C13529 * C2120 - C13528 * C2129 + C13523 * C2138 +
            C13530 * C2130 - C13531 * C2121 - C13530 * C2131 + C13524 * C2139 +
            C13532 * C12115 - C13533 * C12113 - C13532 * C12116 +
            C33099 * C12119) *
               C33083 +
           (C13526 * C1180 - C13527 * C1168 - C13526 * C1181 + C13522 * C1195 +
            C13528 * C2675 - C13529 * C2672 - C13528 * C2676 + C13523 * C2681 +
            C13530 * C7064 - C13531 * C7060 - C13530 * C7065 + C13524 * C7069 +
            C13532 * C12376 - C13533 * C12375 - C13532 * C12377 +
            C33099 * C12378) *
               C32918) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[58] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C7682 +
            (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
               C32773 * C598 -
           ((C3505 * C6378 - C3506 * C6374 - C3505 * C6379 + C32960 * C6383 +
             C3503 * C1690 - C3504 * C1687 - C3503 * C1691 + C33085 * C1696) *
                C33092 +
            (C9375 + C9376) * C7684 + (C5361 + C5362) * C7683 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C7682) *
               C32773 * C599) *
              C32818 * C478 +
          (((C4107 + C4106) * C7682 + (C5154 + C5153) * C7683 +
            (C9168 + C9167) * C7684 +
            (C3503 * C1692 - C3504 * C1688 - C3503 * C1693 + C33085 * C1697 +
             C3505 * C7218 - C3506 * C7217 - C3505 * C7219 + C32960 * C7220) *
                C33092) *
               C32773 * C599 -
           ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
            (C3557 + C3556) * C7682) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C33083 +
             (C4582 + C4583) * C32918) *
                C851 +
            ((C3556 + C3557) * C33083 + C4930 * C32918) * C852 +
            C4387 * C33106) *
               C598 -
           (((C5151 + C5152) * C32918 + (C4104 + C4105) * C33083) * C33106 +
            ((C5153 + C5154) * C32918 + (C4106 + C4107) * C33083) * C852 +
            ((C3505 * C1180 - C3506 * C1168 - C3505 * C1181 + C32960 * C1195 +
              C3503 * C723 - C3504 * C718 - C3503 * C724 + C33085 * C733) *
                 C32918 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C33083) *
                C851) *
               C599) *
              C32818 * C478 +
          ((((C4107 + C4106) * C33083 + (C5154 + C5153) * C32918) * C851 +
            ((C4105 + C4104) * C33083 + (C5152 + C5151) * C32918) * C852 +
            ((C4103 + C4102) * C33083 +
             (C3503 * C729 - C3504 * C721 - C3503 * C730 + C33085 * C736 +
              C3505 * C2289 - C3506 * C2288 - C3505 * C2290 + C32960 * C2291) *
                 C32918) *
                C33106) *
               C599 -
           (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
            (C4931 * C32918 + (C3559 + C3558) * C33083) * C852 +
            (C4932 * C32918 + (C3557 + C3556) * C33083) * C851) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
             C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
             C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
             C13532 * C2128 - C13533 * C2120 - C13532 * C2129 +
             C33099 * C2138) *
                C33083 +
            (C14477 + C14478 + C14479 + C14480) * C32918) *
               C32773 * C598 -
           ((C13532 * C7064 - C13533 * C7060 - C13532 * C7065 + C33099 * C7069 +
             C13530 * C2675 - C13531 * C2672 - C13530 * C2676 + C13524 * C2681 +
             C13528 * C1180 - C13529 * C1168 - C13528 * C1181 + C13523 * C1195 +
             C13526 * C723 - C13527 * C718 - C13526 * C724 + C13522 * C733) *
                C32918 +
            (C13532 * C2130 - C13533 * C2121 - C13532 * C2131 + C33099 * C2139 +
             C13530 * C2128 - C13531 * C2120 - C13530 * C2129 + C13524 * C2138 +
             C13528 * C374 - C13529 * C359 - C13528 * C375 + C13523 * C389 +
             C13526 * C372 - C13527 * C358 - C13526 * C373 + C13522 * C388) *
                C33083) *
               C32773 * C599) *
              C32818 * C478 +
          (((C14102 + C14101 + C14100 + C14099) * C33083 +
            (C13526 * C725 - C13527 * C719 - C13526 * C726 + C13522 * C734 +
             C13528 * C1184 - C13529 * C1170 - C13528 * C1185 + C13523 * C1197 +
             C13530 * C2677 - C13531 * C2673 - C13530 * C2678 + C13524 * C2682 +
             C13532 * C12204 - C13533 * C12203 - C13532 * C12205 +
             C33099 * C12206) *
                C32918) *
               C32773 * C599 -
           ((C13941 + C13942 + C13943 + C13944) * C32918 +
            (C13586 + C13585 + C13584 + C13583) * C33083) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[59] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C4582 + C4583) * C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C32832 * C245 -
          (((C4584 + C4585) * C32918 + (C3932 + C3933) * C33083) * C33106 +
           ((C4586 + C4587) * C32918 + (C3934 + C3935) * C33083) * C852 +
           ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
              C32832 * C246 +
          (((C4589 + C4588) * C33083 +
            (C3503 * C1006 - C3504 * C998 - C3503 * C1007 + C33085 * C1016 +
             C3505 * C1690 - C3506 * C1687 - C3505 * C1691 + C32960 * C1696) *
                C32918) *
               C851 +
           ((C4587 + C4586) * C33083 +
            (C3503 * C1004 - C3504 * C997 - C3503 * C1005 + C33085 * C1015 +
             C3505 * C1692 - C3506 * C1688 - C3505 * C1693 + C32960 * C1697) *
                C32918) *
               C852 +
           ((C4585 + C4584) * C33083 +
            (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
             C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                C32918) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283 +
             C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733) *
                C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C32832 * C32818 * C110 -
          (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
           ((C3932 + C3933) * C32918 + (C3559 + C3558) * C33083) * C852 +
           ((C3934 + C3935) * C32918 + (C3557 + C3556) * C33083) * C851) *
              C32832 * C32818 * C111 +
          (C4387 * C851 + (C3565 * C33083 + (C3931 + C3930) * C32918) * C852 +
           ((C3563 + C3562) * C33083 +
            (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
             C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                C32918) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + (C8619 + C8618) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
           (C3557 + C3556) * C7682) *
              C32773 * C32832 * C32818 * C111 +
          (C3564 * C7682 + C4385 * C7683 + (C4585 + C4584) * C7684 +
           (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
            C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
              C32773 * C32832 * C245 -
          ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
           (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
              C32773 * C32832 * C246 +
          (C8590 * C7682 + C9573 * C7683 + (C9587 + C9586) * C7684 +
           (C3503 * C6291 - C3504 * C6289 - C3503 * C6292 + C33085 * C6295 +
            C3505 * C6647 - C3506 * C6646 - C3505 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C33083 +
           (C13526 * C267 - C13527 * C253 - C13526 * C268 + C13522 * C283 +
            C13528 * C723 - C13529 * C718 - C13528 * C724 + C13523 * C733 +
            C13530 * C1180 - C13531 * C1168 - C13530 * C1181 + C13524 * C1195 +
            C13532 * C2675 - C13533 * C2672 - C13532 * C2676 + C33099 * C2681) *
               C32918) *
              C32773 * C32832 * C32818 * C110 -
          ((C13941 + C13942 + C13943 + C13944) * C32918 +
           (C13586 + C13585 + C13584 + C13583) * C33083) *
              C32773 * C32832 * C32818 * C111 +
          ((C13590 + C13589 + C13588 + C13587) * C33083 +
           (C13526 * C263 - C13527 * C251 - C13526 * C264 + C13522 * C281 +
            C13528 * C727 - C13529 * C720 - C13528 * C728 + C13523 * C735 +
            C13530 * C1188 - C13531 * C1172 - C13530 * C1189 + C13524 * C1199 +
            C13532 * C2679 - C13533 * C2674 - C13532 * C2680 + C33099 * C2683) *
               C32918) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C33083 +
           (C14477 + C14478 + C14479 + C14480) * C32918) *
              C32773 * C32832 * C245 -
          ((C14481 + C14482 + C14483 + C14484) * C32918 +
           (C14480 + C14479 + C14478 + C14477) * C33083) *
              C32773 * C32832 * C246 +
          ((C14484 + C14483 + C14482 + C14481) * C33083 +
           (C13526 * C1006 - C13527 * C998 - C13526 * C1007 + C13522 * C1016 +
            C13528 * C1690 - C13529 * C1687 - C13528 * C1691 + C13523 * C1696 +
            C13530 * C6378 - C13531 * C6374 - C13530 * C6379 + C13524 * C6383 +
            C13532 * C7539 - C13533 * C7538 - C13532 * C7540 + C33099 * C7541) *
               C32918) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[60] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C32856 * C103 +
                C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                   C32832 * C476 -
               (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
                (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) *
                    C32856 * C103) *
                   C32832 * C477) *
                  C478 +
              ((C516 * C103 + C515 * C104 + C514 * C105 + C513 * C106 +
                (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                    C32856 * C107) *
                   C32832 * C477 -
               (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
                C179 * C103) *
                   C32832 * C476) *
                  C479) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                     C33147 +
                 C1051 * C33135 + C1052 * C33115) *
                    C851 +
                (C855 + C856 + C883) * C852 + C886 * C33106) *
                   C32832 * C476 -
               ((C1352 + C1353 + C1354) * C33106 +
                (C1355 + C1356 + C1357) * C852 +
                (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
                   C32832 * C477) *
                  C478 +
              (((C1357 + C1356 + C1355) * C851 +
                (C1354 + C1353 + C1352) * C852 +
                (C510 * C33147 + C882 * C33135 +
                 (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                     C33115) *
                    C33106) *
                   C32832 * C477 -
               ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
                (C883 + C856 + C855) * C851) *
                   C32832 * C476) *
                  C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C32856 * C851 +
            (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
               C32832 * C476 -
           ((C2329 + C2330 + C2331) * C32856 * C33106 +
            (C2332 + C2333 + C2334) * C32856 * C852 +
            (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
             C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
             C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
                C32856 * C851) *
               C32832 * C477) *
              C478 +
          (((C2334 + C2333 + C2332) * C32856 * C851 +
            (C2331 + C2330 + C2329) * C32856 * C852 +
            (C1826 * C261 - C1827 * C250 - C1826 * C262 + C33148 * C280 +
             C1828 * C729 - C1829 * C721 - C1828 * C730 + C33137 * C736 +
             C1830 * C2289 - C1831 * C2288 - C1830 * C2290 + C33118 * C2291) *
                C32856 * C33106) *
               C32832 * C477 -
           ((C1893 + C1894 + C1895) * C32856 * C33106 +
            (C1892 + C1891 + C1890) * C32856 * C852 +
            (C1889 + C1888 + C1887) * C32856 * C851) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C32832 * C476 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C32832 * C477) *
              C478 +
          (((C5861 + C5860 + C5859) * C33144 +
            (C5858 + C5857 + C5856) * C33131 +
            (C510 * C5472 + C882 * C5473 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C33115) *
                C33106) *
               C32832 * C477 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C32832 * C476 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C32832 * C477) *
              C478 +
          ((C512 * C6221 + C880 * C6222 + C1054 * C6223 + C6478 * C6224 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C6225) *
               C32773 * C32832 * C477 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C5472 +
            (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
               C32773 * C32832 * C476 -
           ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
            (C6941 + C6940 + C6939) * C5472) *
               C32773 * C32832 * C477) *
              C478 +
          (((C2334 + C2333 + C2332) * C5472 + (C7240 + C7241 + C7242) * C5473 +
            (C1826 * C1004 - C1827 * C997 - C1826 * C1005 + C33148 * C1015 +
             C1828 * C1692 - C1829 * C1688 - C1828 * C1693 + C33137 * C1697 +
             C1830 * C7218 - C1831 * C7217 - C1830 * C7219 + C33118 * C7220) *
                C33115) *
               C32773 * C32832 * C477 -
           ((C7242 + C7241 + C7240) * C33115 + (C2332 + C2333 + C2334) * C5473 +
            (C1889 + C1888 + C1887) * C5472) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C32856 * C33144 +
            (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
               C32832 * C476 -
           ((C10677 + C10678 + C10679) * C32856 * C33106 +
            (C10680 + C10681 + C10682) * C32856 * C33131 +
            (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
             C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
             C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
                C32856 * C33144) *
               C32832 * C477) *
              C478 +
          (((C10682 + C10681 + C10680) * C32856 * C33144 +
            (C10679 + C10678 + C10677) * C32856 * C33131 +
            (C10202 * C261 - C10203 * C250 - C10202 * C262 + C10199 * C280 +
             C10204 * C729 - C10205 * C721 - C10204 * C730 + C10200 * C736 +
             C10206 * C2289 - C10207 * C2288 - C10206 * C2290 +
             C33118 * C2291) *
                C32856 * C33106) *
               C32832 * C477 -
           ((C10269 + C10270 + C10271) * C32856 * C33106 +
            (C10268 + C10267 + C10266) * C32856 * C33131 +
            (C10265 + C10264 + C10263) * C32856 * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33147 +
            (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
               C32773 * C32832 * C476 -
           ((C11297 + C11298 + C11299) * C33115 +
            (C11296 + C11295 + C11294) * C33135 +
            (C11293 + C11292 + C11291) * C33147) *
               C32773 * C32832 * C477) *
              C478 +
          (((C10682 + C10681 + C10680) * C33147 +
            (C11576 + C11577 + C11578) * C33135 +
            (C10202 * C1004 - C10203 * C997 - C10202 * C1005 + C10199 * C1015 +
             C10204 * C1692 - C10205 * C1688 - C10204 * C1693 + C10200 * C1697 +
             C10206 * C7218 - C10207 * C7217 - C10206 * C7219 +
             C33118 * C7220) *
                C33115) *
               C32773 * C32832 * C477 -
           ((C11578 + C11577 + C11576) * C33115 +
            (C10680 + C10681 + C10682) * C33135 +
            (C10265 + C10264 + C10263) * C33147) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
            C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
            C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
            C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
            C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
               C32856 * C32773 * C32832 * C476 -
           (C11987 * C7064 - C11988 * C7060 - C11987 * C7065 + C11978 * C7069 +
            C11985 * C2675 - C11986 * C2672 - C11985 * C2676 + C11977 * C2681 +
            C11983 * C1180 - C11984 * C1168 - C11983 * C1181 + C11976 * C1195 +
            C11981 * C723 - C11982 * C718 - C11981 * C724 + C11975 * C733 +
            C11979 * C267 - C11980 * C253 - C11979 * C268 + C11974 * C283) *
               C32856 * C32773 * C32832 * C477) *
              C478 +
          ((C11979 * C265 - C11980 * C252 - C11979 * C266 + C11974 * C282 +
            C11981 * C725 - C11982 * C719 - C11981 * C726 + C11975 * C734 +
            C11983 * C1184 - C11984 * C1170 - C11983 * C1185 + C11976 * C1197 +
            C11985 * C2677 - C11986 * C2673 - C11985 * C2678 + C11977 * C2682 +
            C11987 * C12204 - C11988 * C12203 - C11987 * C12205 +
            C11978 * C12206) *
               C32856 * C32773 * C32832 * C477 -
           (C11987 * C2132 - C11988 * C2122 - C11987 * C2133 + C11978 * C2140 +
            C11985 * C2126 - C11986 * C2119 - C11985 * C2127 + C11977 * C2137 +
            C11983 * C376 - C11984 * C360 - C11983 * C377 + C11976 * C390 +
            C11981 * C370 - C11982 * C357 - C11981 * C371 + C11975 * C387 +
            C11979 * C124 - C11980 * C116 - C11979 * C125 + C11974 * C137) *
               C32856 * C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[61] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C32856 * C103 +
                C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                   C598 -
               (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
                (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                    C32856 * C103) *
                   C599) *
                  C476 +
              (((C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) *
                    C32856 * C103 +
                (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) *
                    C32856 * C104 +
                (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) *
                    C32856 * C105 +
                (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) *
                    C32856 * C106 +
                (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) *
                    C32856 * C107) *
                   C599 -
               (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
                (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) *
                    C32856 * C103) *
                   C598) *
                  C477) *
             C32806 +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                     C33147 +
                 C1051 * C33135 + C1052 * C33115) *
                    C851 +
                (C855 + C856 + C883) * C852 + C886 * C33106) *
                   C598 -
               ((C1538 + C1539 + C1516) * C33106 +
                (C1540 + C1541 + C1525) * C852 +
                (C1712 * C33115 + C1713 * C33135 +
                 (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                     C33147) *
                    C851) *
                   C599) *
                  C476 +
              (((C1713 * C33147 + C1712 * C33135 +
                 (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                     C33115) *
                    C851 +
                (C1537 * C33147 + C1536 * C33135 +
                 (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                     C33115) *
                    C852 +
                (C1535 * C33147 + C1534 * C33135 +
                 (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                     C33115) *
                    C33106) *
                   C599 -
               ((C1352 + C1353 + C1354) * C33106 +
                (C1355 + C1356 + C1357) * C852 +
                (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
                   C598) *
                  C477) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C32856 * C851 +
            (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
               C598 -
           ((C2521 + C2522 + C2523) * C32856 * C33106 +
            (C2524 + C2525 + C2526) * C32856 * C852 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C32856 * C851) *
               C599) *
              C476 +
          (((C1826 * C723 - C1827 * C718 - C1826 * C724 + C33148 * C733 +
             C1828 * C1180 - C1829 * C1168 - C1828 * C1181 + C33137 * C1195 +
             C1830 * C2675 - C1831 * C2672 - C1830 * C2676 + C33118 * C2681) *
                C32856 * C851 +
            (C1826 * C725 - C1827 * C719 - C1826 * C726 + C33148 * C734 +
             C1828 * C1184 - C1829 * C1170 - C1828 * C1185 + C33137 * C1197 +
             C1830 * C2677 - C1831 * C2673 - C1830 * C2678 + C33118 * C2682) *
                C32856 * C852 +
            (C1826 * C727 - C1827 * C720 - C1826 * C728 + C33148 * C735 +
             C1828 * C1188 - C1829 * C1172 - C1828 * C1189 + C33137 * C1199 +
             C1830 * C2679 - C1831 * C2674 - C1830 * C2680 + C33118 * C2683) *
                C32856 * C33106) *
               C599 -
           ((C2329 + C2330 + C2331) * C32856 * C33106 +
            (C2332 + C2333 + C2334) * C32856 * C852 +
            (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
             C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
             C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
                C32856 * C851) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C476 +
          (((C1713 * C5472 + C1712 * C5473 +
             (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                 C33115) *
                C33144 +
            (C1537 * C5472 + C1536 * C5473 +
             (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                 C33115) *
                C33131 +
            (C1535 * C5472 + C1534 * C5473 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33115) *
                C33106) *
               C599 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           (C6663 * C6225 + C6664 * C6224 + C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C476 +
          ((C1713 * C6221 + C1712 * C6222 + C6664 * C6223 + C6663 * C6224 +
            (C113 * C6647 - C114 * C6646 - C113 * C6648 + C32873 * C6649) *
                C6225) *
               C32773 * C599 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C5472 +
            (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
               C32773 * C598 -
           ((C7579 + C7580 + C7581) * C33115 + (C7582 + C7583 + C7584) * C5473 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C5472) *
               C32773 * C599) *
              C476 +
          (((C7584 + C7583 + C7582) * C5472 + (C7581 + C7580 + C7579) * C5473 +
            (C1826 * C1690 - C1827 * C1687 - C1826 * C1691 + C33148 * C1696 +
             C1828 * C6378 - C1829 * C6374 - C1828 * C6379 + C33137 * C6383 +
             C1830 * C7539 - C1831 * C7538 - C1830 * C7540 + C33118 * C7541) *
                C33115) *
               C32773 * C599 -
           ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
            (C6941 + C6940 + C6939) * C5472) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C32856 * C33144 +
            (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
               C598 -
           ((C10865 + C10866 + C10867) * C32856 * C33106 +
            (C10868 + C10869 + C10870) * C32856 * C33131 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C32856 * C33144) *
               C599) *
              C476 +
          (((C10202 * C723 - C10203 * C718 - C10202 * C724 + C10199 * C733 +
             C10204 * C1180 - C10205 * C1168 - C10204 * C1181 + C10200 * C1195 +
             C10206 * C2675 - C10207 * C2672 - C10206 * C2676 +
             C33118 * C2681) *
                C32856 * C33144 +
            (C10202 * C725 - C10203 * C719 - C10202 * C726 + C10199 * C734 +
             C10204 * C1184 - C10205 * C1170 - C10204 * C1185 + C10200 * C1197 +
             C10206 * C2677 - C10207 * C2673 - C10206 * C2678 +
             C33118 * C2682) *
                C32856 * C33131 +
            (C10202 * C727 - C10203 * C720 - C10202 * C728 + C10199 * C735 +
             C10204 * C1188 - C10205 * C1172 - C10204 * C1189 + C10200 * C1199 +
             C10206 * C2679 - C10207 * C2674 - C10206 * C2680 +
             C33118 * C2683) *
                C32856 * C33106) *
               C599 -
           ((C10677 + C10678 + C10679) * C32856 * C33106 +
            (C10680 + C10681 + C10682) * C32856 * C33131 +
            (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
             C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
             C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
                C32856 * C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33147 +
            (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
               C32773 * C598 -
           ((C11907 + C11908 + C11909) * C33115 +
            (C11910 + C11911 + C11912) * C33135 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C33147) *
               C32773 * C599) *
              C476 +
          (((C11912 + C11911 + C11910) * C33147 +
            (C11909 + C11908 + C11907) * C33135 +
            (C10202 * C1690 - C10203 * C1687 - C10202 * C1691 + C10199 * C1696 +
             C10204 * C6378 - C10205 * C6374 - C10204 * C6379 + C10200 * C6383 +
             C10206 * C7539 - C10207 * C7538 - C10206 * C7540 +
             C33118 * C7541) *
                C33115) *
               C32773 * C599 -
           ((C11297 + C11298 + C11299) * C33115 +
            (C11296 + C11295 + C11294) * C33135 +
            (C11293 + C11292 + C11291) * C33147) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
            C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
            C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
            C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
            C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
               C32856 * C32773 * C598 -
           (C11987 * C12115 - C11988 * C12113 - C11987 * C12116 +
            C11978 * C12119 + C11985 * C2130 - C11986 * C2121 - C11985 * C2131 +
            C11977 * C2139 + C11983 * C2128 - C11984 * C2120 - C11983 * C2129 +
            C11976 * C2138 + C11981 * C374 - C11982 * C359 - C11981 * C375 +
            C11975 * C389 + C11979 * C372 - C11980 * C358 - C11979 * C373 +
            C11974 * C388) *
               C32856 * C32773 * C599) *
              C476 +
          ((C11979 * C723 - C11980 * C718 - C11979 * C724 + C11974 * C733 +
            C11981 * C1180 - C11982 * C1168 - C11981 * C1181 + C11975 * C1195 +
            C11983 * C2675 - C11984 * C2672 - C11983 * C2676 + C11976 * C2681 +
            C11985 * C7064 - C11986 * C7060 - C11985 * C7065 + C11977 * C7069 +
            C11987 * C12376 - C11988 * C12375 - C11987 * C12377 +
            C11978 * C12378) *
               C32856 * C32773 * C599 -
           (C11987 * C7064 - C11988 * C7060 - C11987 * C7065 + C11978 * C7069 +
            C11985 * C2675 - C11986 * C2672 - C11985 * C2676 + C11977 * C2681 +
            C11983 * C1180 - C11984 * C1168 - C11983 * C1181 + C11976 * C1195 +
            C11981 * C723 - C11982 * C718 - C11981 * C724 + C11975 * C733 +
            C11979 * C267 - C11980 * C253 - C11979 * C268 + C11974 * C283) *
               C32856 * C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (-0.25 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                   C32856 * C103 +
               C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                  C32832 * C32818 * C110 -
              (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
               C179 * C103) *
                  C32832 * C32818 * C111 +
              (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
               (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) *
                   C32856 * C107) *
                  C32832 * C32818 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                   C32856 * C103 +
               C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                  C32832 * C245 -
              ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) *
                   C32856 * C107 +
               (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) *
                   C32856 * C106 +
               (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) *
                   C32856 * C105 +
               (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) *
                   C32856 * C104 +
               (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) *
                   C32856 * C103) *
                  C32832 * C246 +
              ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                   C32856 * C103 +
               (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) *
                   C32856 * C104 +
               (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) *
                   C32856 * C105 +
               (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) *
                   C32856 * C106 +
               (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                   C32856 * C107) *
                  C32832 * C247) *
             C32806 +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                   C32856 * C103 +
               C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                  C351 -
              ((C113 * C364 - C114 * C354 - C113 * C365 + C32873 * C384) *
                   C32856 * C107 +
               (C113 * C366 - C114 * C355 - C113 * C367 + C32873 * C385) *
                   C32856 * C106 +
               (C113 * C368 - C114 * C356 - C113 * C369 + C32873 * C386) *
                   C32856 * C105 +
               (C113 * C370 - C114 * C357 - C113 * C371 + C32873 * C387) *
                   C32856 * C104 +
               (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                   C32856 * C103) *
                  C352 +
              ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) *
                   C32856 * C103 +
               (C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) *
                   C32856 * C104 +
               (C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) *
                   C32856 * C105 +
               (C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) *
                   C32856 * C106 +
               (C113 * C382 - C114 * C363 - C113 * C383 + C32873 * C393) *
                   C32856 * C107) *
                  C353) *
             C32818 * C32806 -
         0.25 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C33147 +
                (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) *
                    C33135 +
                (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                    C33115) *
                   C851 +
               (C855 + C856 + C883) * C852 + C886 * C33106) *
                  C32832 * C32818 * C110 -
              ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
               (C883 + C856 + C855) * C851) *
                  C32832 * C32818 * C111 +
              (C886 * C851 + (C872 + C871 + C885) * C852 +
               (C177 * C33147 + C509 * C33135 +
                (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                    C33115) *
                   C33106) *
                  C32832 * C32818 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C33147 +
                C1051 * C33135 + C1052 * C33115) *
                   C851 +
               (C855 + C856 + C883) * C852 + C886 * C33106) *
                  C32832 * C245 -
              ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
               (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
               (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
                  C32832 * C246 +
              ((C1052 * C33147 + C1055 * C33135 +
                (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                    C33115) *
                   C851 +
               (C880 * C33147 + C1054 * C33135 +
                (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                    C33115) *
                   C852 +
               (C881 * C33147 + C1053 * C33135 +
                (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                    C33115) *
                   C33106) *
                  C32832 * C247) *
             C32806 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C33147 +
                C1051 * C33135 + C1052 * C33115) *
                   C851 +
               (C855 + C856 + C883) * C852 + C886 * C33106) *
                  C351 -
              (((C113 * C1174 - C114 * C1165 - C113 * C1175 + C32873 * C1192) *
                    C33115 +
                (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) *
                    C33135 +
                C631 * C33147) *
                   C33106 +
               ((C113 * C1176 - C114 * C1166 - C113 * C1177 + C32873 * C1193) *
                    C33115 +
                (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) *
                    C33135 +
                C632 * C33147) *
                   C852 +
               ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                    C33115 +
                (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) *
                    C33135 +
                (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                    C33147) *
                   C851) *
                  C352 +
              (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) *
                    C33147 +
                (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                    C33135 +
                (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                    C33115) *
                   C851 +
               ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) *
                    C33147 +
                (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                    C33135 +
                (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                    C33115) *
                   C852 +
               ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) *
                    C33147 +
                (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                    C33135 +
                (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                    C33115) *
                   C33106) *
                  C353) *
             C32818 * C32806 +
         0.5 * std::pow(Pi, 2.5) *
             (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
                C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
                C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                   C32856 * C851 +
               (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
                  C32832 * C32818 * C110 -
              ((C1893 + C1894 + C1895) * C32856 * C33106 +
               (C1892 + C1891 + C1890) * C32856 * C852 +
               (C1889 + C1888 + C1887) * C32856 * C851) *
                  C32832 * C32818 * C111 +
              (C1898 * C851 + (C1895 + C1894 + C1893) * C32856 * C852 +
               (C1826 * C130 - C1827 * C119 - C1826 * C131 + C33148 * C140 +
                C1828 * C364 - C1829 * C354 - C1828 * C365 + C33137 * C384 +
                C1830 * C382 - C1831 * C363 - C1830 * C383 + C33118 * C393) *
                   C32856 * C33106) *
                  C32832 * C32818 * C112) +
         0.5 * std::pow(Pi, 2.5) *
             (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
                C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
                C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                   C32856 * C851 +
               (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
                  C32832 * C245 -
              ((C1830 * C1188 - C1831 * C1172 - C1830 * C1189 + C33118 * C1199 +
                C1828 * C727 - C1829 * C720 - C1828 * C728 + C33137 * C735 +
                C1826 * C263 - C1827 * C251 - C1826 * C264 + C33148 * C281) *
                   C32856 * C33106 +
               (C1830 * C1184 - C1831 * C1170 - C1830 * C1185 + C33118 * C1197 +
                C1828 * C725 - C1829 * C719 - C1828 * C726 + C33137 * C734 +
                C1826 * C265 - C1827 * C252 - C1826 * C266 + C33148 * C282) *
                   C32856 * C852 +
               (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
                C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
                C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
                   C32856 * C851) *
                  C32832 * C246 +
              ((C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
                C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
                C1830 * C1182 - C1831 * C1169 - C1830 * C1183 +
                C33118 * C1196) *
                   C32856 * C851 +
               (C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285 +
                C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
                C1830 * C1186 - C1831 * C1171 - C1830 * C1187 +
                C33118 * C1198) *
                   C32856 * C852 +
               (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
                C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
                C1830 * C1190 - C1831 * C1173 - C1830 * C1191 +
                C33118 * C1200) *
                   C32856 * C33106) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C351 -
          ((C1830 * C2124 - C1831 * C2118 - C1830 * C2125 + C33118 * C2136 +
            C1828 * C378 - C1829 * C361 - C1828 * C379 + C33137 * C391 +
            C1826 * C368 - C1827 * C356 - C1826 * C369 + C33148 * C386) *
               C32856 * C33106 +
           (C1830 * C2126 - C1831 * C2119 - C1830 * C2127 + C33118 * C2137 +
            C1828 * C376 - C1829 * C360 - C1828 * C377 + C33137 * C390 +
            C1826 * C370 - C1827 * C357 - C1826 * C371 + C33148 * C387) *
               C32856 * C852 +
           (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
            C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
            C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
               C32856 * C851) *
              C352 +
          ((C1826 * C374 - C1827 * C359 - C1826 * C375 + C33148 * C389 +
            C1828 * C2128 - C1829 * C2120 - C1828 * C2129 + C33137 * C2138 +
            C1830 * C2130 - C1831 * C2121 - C1830 * C2131 + C33118 * C2139) *
               C32856 * C851 +
           (C1826 * C376 - C1827 * C360 - C1826 * C377 + C33148 * C390 +
            C1828 * C2126 - C1829 * C2119 - C1828 * C2127 + C33137 * C2137 +
            C1830 * C2132 - C1831 * C2122 - C1830 * C2133 + C33118 * C2140) *
               C32856 * C852 +
           (C1826 * C378 - C1827 * C361 - C1826 * C379 + C33148 * C391 +
            C1828 * C2124 - C1829 * C2118 - C1828 * C2125 + C33137 * C2136 +
            C1830 * C2134 - C1831 * C2123 - C1830 * C2135 + C33118 * C2141) *
               C32856 * C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C351 -
          ((C1534 * C33115 + C1535 * C5473 + C631 * C5472) * C33106 +
           (C1536 * C33115 + C1537 * C5473 + C632 * C5472) * C33131 +
           (C1712 * C33115 + C1713 * C5473 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C5472) *
               C33144) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C5472 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C5473 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33115) *
               C33144 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C5472 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C5473 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33115) *
               C33131 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C5472 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C5473 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C33115) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C351 -
          ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
               C6225 +
           (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
               C6224 +
           C1712 * C6223 + C1713 * C6222 +
           (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
              C32773 * C352 +
          ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C6221 +
           (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
               C6222 +
           (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
               C6223 +
           (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
               C6224 +
           (C113 * C6380 - C114 * C6375 - C113 * C6381 + C32873 * C6384) *
               C6225) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283 +
            C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
            C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195) *
               C5473 +
           (C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
            C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
            C1830 * C1182 - C1831 * C1169 - C1830 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C1830 * C1186 - C1831 * C1171 - C1830 * C1187 + C33118 * C1198 +
            C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
            C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285) *
               C33115 +
           (C2332 + C2333 + C2334) * C5473 + (C1889 + C1888 + C1887) * C5472) *
              C32773 * C32832 * C32818 * C111 +
          (C1897 * C5472 + (C2331 + C2330 + C2329) * C5473 +
           (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
            C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
            C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
              C32773 * C32832 * C245 -
          ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
           (C6941 + C6940 + C6939) * C5472) *
              C32773 * C32832 * C246 +
          (C6949 * C5472 + (C6947 + C6946 + C6945) * C5473 +
           (C1826 * C1008 - C1827 * C999 - C1826 * C1009 + C33148 * C1017 +
            C1828 * C6376 - C1829 * C6373 - C1828 * C6377 + C33137 * C6382 +
            C1830 * C6380 - C1831 * C6375 - C1830 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
              C32773 * C351 -
          ((C1830 * C7062 - C1831 * C7059 - C1830 * C7063 + C33118 * C7068 +
            C1828 * C1182 - C1829 * C1169 - C1828 * C1183 + C33137 * C1196 +
            C1826 * C1178 - C1827 * C1167 - C1826 * C1179 + C33148 * C1194) *
               C33115 +
           (C1830 * C2675 - C1831 * C2672 - C1830 * C2676 + C33118 * C2681 +
            C1828 * C1180 - C1829 * C1168 - C1828 * C1181 + C33137 * C1195 +
            C1826 * C723 - C1827 * C718 - C1826 * C724 + C33148 * C733) *
               C5473 +
           (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
            C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
            C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
               C5472) *
              C32773 * C352 +
          ((C1826 * C374 - C1827 * C359 - C1826 * C375 + C33148 * C389 +
            C1828 * C2128 - C1829 * C2120 - C1828 * C2129 + C33137 * C2138 +
            C1830 * C2130 - C1831 * C2121 - C1830 * C2131 + C33118 * C2139) *
               C5472 +
           (C1826 * C1180 - C1827 * C1168 - C1826 * C1181 + C33148 * C1195 +
            C1828 * C2675 - C1829 * C2672 - C1828 * C2676 + C33137 * C2681 +
            C1830 * C7064 - C1831 * C7060 - C1830 * C7065 + C33118 * C7069) *
               C5473 +
           (C1826 * C1182 - C1827 * C1169 - C1826 * C1183 + C33148 * C1196 +
            C1828 * C7062 - C1829 * C7059 - C1828 * C7063 + C33137 * C7068 +
            C1830 * C7066 - C1831 * C7061 - C1830 * C7067 + C33118 * C7070) *
               C33115) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C32818 * C110 -
          ((C10269 + C10270 + C10271) * C32856 * C33106 +
           (C10268 + C10267 + C10266) * C32856 * C33131 +
           (C10265 + C10264 + C10263) * C32856 * C33144) *
              C32832 * C32818 * C111 +
          (C10274 * C33144 + (C10271 + C10270 + C10269) * C32856 * C33131 +
           (C10202 * C130 - C10203 * C119 - C10202 * C131 + C10199 * C140 +
            C10204 * C364 - C10205 * C354 - C10204 * C365 + C10200 * C384 +
            C10206 * C382 - C10207 * C363 - C10206 * C383 + C33118 * C393) *
               C32856 * C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C245 -
          ((C10206 * C1188 - C10207 * C1172 - C10206 * C1189 + C33118 * C1199 +
            C10204 * C727 - C10205 * C720 - C10204 * C728 + C10200 * C735 +
            C10202 * C263 - C10203 * C251 - C10202 * C264 + C10199 * C281) *
               C32856 * C33106 +
           (C10206 * C1184 - C10207 * C1170 - C10206 * C1185 + C33118 * C1197 +
            C10204 * C725 - C10205 * C719 - C10204 * C726 + C10200 * C734 +
            C10202 * C265 - C10203 * C252 - C10202 * C266 + C10199 * C282) *
               C32856 * C33131 +
           (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
               C32856 * C33144) *
              C32832 * C246 +
          ((C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C32856 * C33144 +
           (C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198) *
               C32856 * C33131 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C32856 * C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C351 -
          ((C10206 * C2124 - C10207 * C2118 - C10206 * C2125 + C33118 * C2136 +
            C10204 * C378 - C10205 * C361 - C10204 * C379 + C10200 * C391 +
            C10202 * C368 - C10203 * C356 - C10202 * C369 + C10199 * C386) *
               C32856 * C33106 +
           (C10206 * C2126 - C10207 * C2119 - C10206 * C2127 + C33118 * C2137 +
            C10204 * C376 - C10205 * C360 - C10204 * C377 + C10200 * C390 +
            C10202 * C370 - C10203 * C357 - C10202 * C371 + C10199 * C387) *
               C32856 * C33131 +
           (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
            C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
            C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
               C32856 * C33144) *
              C352 +
          ((C10202 * C374 - C10203 * C359 - C10202 * C375 + C10199 * C389 +
            C10204 * C2128 - C10205 * C2120 - C10204 * C2129 + C10200 * C2138 +
            C10206 * C2130 - C10207 * C2121 - C10206 * C2131 + C33118 * C2139) *
               C32856 * C33144 +
           (C10202 * C376 - C10203 * C360 - C10202 * C377 + C10199 * C390 +
            C10204 * C2126 - C10205 * C2119 - C10204 * C2127 + C10200 * C2137 +
            C10206 * C2132 - C10207 * C2122 - C10206 * C2133 + C33118 * C2140) *
               C32856 * C33131 +
           (C10202 * C378 - C10203 * C361 - C10202 * C379 + C10199 * C391 +
            C10204 * C2124 - C10205 * C2118 - C10204 * C2125 + C10200 * C2136 +
            C10206 * C2134 - C10207 * C2123 - C10206 * C2135 + C33118 * C2141) *
               C32856 * C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195) *
               C33135 +
           (C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285) *
               C33115 +
           (C10680 + C10681 + C10682) * C33135 +
           (C10265 + C10264 + C10263) * C33147) *
              C32773 * C32832 * C32818 * C111 +
          (C10273 * C33147 + (C10679 + C10678 + C10677) * C33135 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
              C32773 * C32832 * C245 -
          ((C11297 + C11298 + C11299) * C33115 +
           (C11296 + C11295 + C11294) * C33135 +
           (C11293 + C11292 + C11291) * C33147) *
              C32773 * C32832 * C246 +
          (C11301 * C33147 + (C11299 + C11298 + C11297) * C33135 +
           (C10202 * C1008 - C10203 * C999 - C10202 * C1009 + C10199 * C1017 +
            C10204 * C6376 - C10205 * C6373 - C10204 * C6377 + C10200 * C6382 +
            C10206 * C6380 - C10207 * C6375 - C10206 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
              C32773 * C351 -
          ((C10206 * C7062 - C10207 * C7059 - C10206 * C7063 + C33118 * C7068 +
            C10204 * C1182 - C10205 * C1169 - C10204 * C1183 + C10200 * C1196 +
            C10202 * C1178 - C10203 * C1167 - C10202 * C1179 + C10199 * C1194) *
               C33115 +
           (C10206 * C2675 - C10207 * C2672 - C10206 * C2676 + C33118 * C2681 +
            C10204 * C1180 - C10205 * C1168 - C10204 * C1181 + C10200 * C1195 +
            C10202 * C723 - C10203 * C718 - C10202 * C724 + C10199 * C733) *
               C33135 +
           (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
            C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
            C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
               C33147) *
              C32773 * C352 +
          ((C10202 * C374 - C10203 * C359 - C10202 * C375 + C10199 * C389 +
            C10204 * C2128 - C10205 * C2120 - C10204 * C2129 + C10200 * C2138 +
            C10206 * C2130 - C10207 * C2121 - C10206 * C2131 + C33118 * C2139) *
               C33147 +
           (C10202 * C1180 - C10203 * C1168 - C10202 * C1181 + C10199 * C1195 +
            C10204 * C2675 - C10205 * C2672 - C10204 * C2676 + C10200 * C2681 +
            C10206 * C7064 - C10207 * C7060 - C10206 * C7065 + C33118 * C7069) *
               C33135 +
           (C10202 * C1182 - C10203 * C1169 - C10202 * C1183 + C10199 * C1196 +
            C10204 * C7062 - C10205 * C7059 - C10204 * C7063 + C10200 * C7068 +
            C10206 * C7066 - C10207 * C7061 - C10206 * C7067 + C33118 * C7070) *
               C33115) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
           C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
           C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
           C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
           C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
              C32856 * C32773 * C32832 * C32818 * C110 -
          (C11987 * C2132 - C11988 * C2122 - C11987 * C2133 + C11978 * C2140 +
           C11985 * C2126 - C11986 * C2119 - C11985 * C2127 + C11977 * C2137 +
           C11983 * C376 - C11984 * C360 - C11983 * C377 + C11976 * C390 +
           C11981 * C370 - C11982 * C357 - C11981 * C371 + C11975 * C387 +
           C11979 * C124 - C11980 * C116 - C11979 * C125 + C11974 * C137) *
              C32856 * C32773 * C32832 * C32818 * C111 +
          (C11979 * C126 - C11980 * C117 - C11979 * C127 + C11974 * C138 +
           C11981 * C368 - C11982 * C356 - C11981 * C369 + C11975 * C386 +
           C11983 * C378 - C11984 * C361 - C11983 * C379 + C11976 * C391 +
           C11985 * C2124 - C11986 * C2118 - C11985 * C2125 + C11977 * C2136 +
           C11987 * C2134 - C11988 * C2123 - C11987 * C2135 + C11978 * C2141) *
              C32856 * C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
           C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
           C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
           C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
           C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
              C32856 * C32773 * C32832 * C245 -
          (C11987 * C7064 - C11988 * C7060 - C11987 * C7065 + C11978 * C7069 +
           C11985 * C2675 - C11986 * C2672 - C11985 * C2676 + C11977 * C2681 +
           C11983 * C1180 - C11984 * C1168 - C11983 * C1181 + C11976 * C1195 +
           C11981 * C723 - C11982 * C718 - C11981 * C724 + C11975 * C733 +
           C11979 * C267 - C11980 * C253 - C11979 * C268 + C11974 * C283) *
              C32856 * C32773 * C32832 * C246 +
          (C11979 * C269 - C11980 * C254 - C11979 * C270 + C11974 * C284 +
           C11981 * C1178 - C11982 * C1167 - C11981 * C1179 + C11975 * C1194 +
           C11983 * C1182 - C11984 * C1169 - C11983 * C1183 + C11976 * C1196 +
           C11985 * C7062 - C11986 * C7059 - C11985 * C7063 + C11977 * C7068 +
           C11987 * C7066 - C11988 * C7061 - C11987 * C7067 + C11978 * C7070) *
              C32856 * C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
           C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
           C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
           C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
           C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
              C32856 * C32773 * C351 -
          (C11987 * C12115 - C11988 * C12113 - C11987 * C12116 +
           C11978 * C12119 + C11985 * C2130 - C11986 * C2121 - C11985 * C2131 +
           C11977 * C2139 + C11983 * C2128 - C11984 * C2120 - C11983 * C2129 +
           C11976 * C2138 + C11981 * C374 - C11982 * C359 - C11981 * C375 +
           C11975 * C389 + C11979 * C372 - C11980 * C358 - C11979 * C373 +
           C11974 * C388) *
              C32856 * C32773 * C352 +
          (C11979 * C374 - C11980 * C359 - C11979 * C375 + C11974 * C389 +
           C11981 * C2128 - C11982 * C2120 - C11981 * C2129 + C11975 * C2138 +
           C11983 * C2130 - C11984 * C2121 - C11983 * C2131 + C11976 * C2139 +
           C11985 * C12115 - C11986 * C12113 - C11985 * C12116 +
           C11977 * C12119 + C11987 * C12117 - C11988 * C12114 -
           C11987 * C12118 + C11978 * C12120) *
              C32856 * C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                    C32856 * C103 +
                C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                   C598 -
               (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
                (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                    C32856 * C103) *
                   C599) *
                  C32818 * C478 +
              ((C636 * C103 + C635 * C104 + C634 * C105 + C633 * C106 +
                (C113 * C601 - C114 * C600 - C113 * C602 + C32873 * C603) *
                    C32856 * C107) *
                   C599 -
               (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
                C179 * C103) *
                   C598) *
                  C32818 * C479) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                     C33147 +
                 C1051 * C33135 + C1052 * C33115) *
                    C851 +
                (C855 + C856 + C883) * C852 + C886 * C33106) *
                   C598 -
               ((C1538 + C1539 + C1516) * C33106 +
                (C1540 + C1541 + C1525) * C852 +
                ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                     C33115 +
                 (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) *
                     C33135 +
                 (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                     C33147) *
                    C851) *
                   C599) *
                  C32818 * C478 +
              (((C1525 + C1541 + C1540) * C851 +
                (C1516 + C1539 + C1538) * C852 +
                (C630 * C33147 +
                 (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) *
                     C33135 +
                 (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                     C33115) *
                    C33106) *
                   C599 -
               ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
                (C883 + C856 + C855) * C851) *
                   C598) *
                  C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C32856 * C851 +
            (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
               C598 -
           ((C2521 + C2522 + C2523) * C32856 * C33106 +
            (C2524 + C2525 + C2526) * C32856 * C852 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C32856 * C851) *
               C599) *
              C32818 * C478 +
          (((C2526 + C2525 + C2524) * C32856 * C851 +
            (C2523 + C2522 + C2521) * C32856 * C852 +
            (C1826 * C366 - C1827 * C355 - C1826 * C367 + C33148 * C385 +
             C1828 * C380 - C1829 * C362 - C1828 * C381 + C33137 * C392 +
             C1830 * C2481 - C1831 * C2480 - C1830 * C2482 + C33118 * C2483) *
                C32856 * C33106) *
               C599 -
           ((C1893 + C1894 + C1895) * C32856 * C33106 +
            (C1892 + C1891 + C1890) * C32856 * C852 +
            (C1889 + C1888 + C1887) * C32856 * C851) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C32818 * C478 +
          (((C6013 + C6012 + C6011) * C33144 +
            (C6010 + C6009 + C6008) * C33131 +
            (C630 * C5472 + C3272 * C5473 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C33115) *
                C33106) *
               C599 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
                C6225 +
            (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                C6224 +
            C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C32818 * C478 +
          ((C632 * C6221 + C1537 * C6222 + C1536 * C6223 +
            (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                C6224 +
            (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                C6225) *
               C32773 * C599 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C5472 +
            (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
               C32773 * C598 -
           ((C1830 * C7062 - C1831 * C7059 - C1830 * C7063 + C33118 * C7068 +
             C1828 * C1182 - C1829 * C1169 - C1828 * C1183 + C33137 * C1196 +
             C1826 * C1178 - C1827 * C1167 - C1826 * C1179 + C33148 * C1194) *
                C33115 +
            (C1830 * C2675 - C1831 * C2672 - C1830 * C2676 + C33118 * C2681 +
             C1828 * C1180 - C1829 * C1168 - C1828 * C1181 + C33137 * C1195 +
             C1826 * C723 - C1827 * C718 - C1826 * C724 + C33148 * C733) *
                C5473 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C5472) *
               C32773 * C599) *
              C32818 * C478 +
          (((C2526 + C2525 + C2524) * C5472 +
            (C1826 * C725 - C1827 * C719 - C1826 * C726 + C33148 * C734 +
             C1828 * C1184 - C1829 * C1170 - C1828 * C1185 + C33137 * C1197 +
             C1830 * C2677 - C1831 * C2673 - C1830 * C2678 + C33118 * C2682) *
                C5473 +
            (C1826 * C1176 - C1827 * C1166 - C1826 * C1177 + C33148 * C1193 +
             C1828 * C1186 - C1829 * C1171 - C1828 * C1187 + C33137 * C1198 +
             C1830 * C7389 - C1831 * C7388 - C1830 * C7390 + C33118 * C7391) *
                C33115) *
               C32773 * C599 -
           ((C7242 + C7241 + C7240) * C33115 + (C2332 + C2333 + C2334) * C5473 +
            (C1889 + C1888 + C1887) * C5472) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C32856 * C33144 +
            (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
               C598 -
           ((C10865 + C10866 + C10867) * C32856 * C33106 +
            (C10868 + C10869 + C10870) * C32856 * C33131 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C32856 * C33144) *
               C599) *
              C32818 * C478 +
          (((C10870 + C10869 + C10868) * C32856 * C33144 +
            (C10867 + C10866 + C10865) * C32856 * C33131 +
            (C10202 * C366 - C10203 * C355 - C10202 * C367 + C10199 * C385 +
             C10204 * C380 - C10205 * C362 - C10204 * C381 + C10200 * C392 +
             C10206 * C2481 - C10207 * C2480 - C10206 * C2482 +
             C33118 * C2483) *
                C32856 * C33106) *
               C599 -
           ((C10269 + C10270 + C10271) * C32856 * C33106 +
            (C10268 + C10267 + C10266) * C32856 * C33131 +
            (C10265 + C10264 + C10263) * C32856 * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33147 +
            (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
               C32773 * C598 -
           ((C10206 * C7062 - C10207 * C7059 - C10206 * C7063 + C33118 * C7068 +
             C10204 * C1182 - C10205 * C1169 - C10204 * C1183 + C10200 * C1196 +
             C10202 * C1178 - C10203 * C1167 - C10202 * C1179 +
             C10199 * C1194) *
                C33115 +
            (C10206 * C2675 - C10207 * C2672 - C10206 * C2676 + C33118 * C2681 +
             C10204 * C1180 - C10205 * C1168 - C10204 * C1181 + C10200 * C1195 +
             C10202 * C723 - C10203 * C718 - C10202 * C724 + C10199 * C733) *
                C33135 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C33147) *
               C32773 * C599) *
              C32818 * C478 +
          (((C10870 + C10869 + C10868) * C33147 +
            (C10202 * C725 - C10203 * C719 - C10202 * C726 + C10199 * C734 +
             C10204 * C1184 - C10205 * C1170 - C10204 * C1185 + C10200 * C1197 +
             C10206 * C2677 - C10207 * C2673 - C10206 * C2678 +
             C33118 * C2682) *
                C33135 +
            (C10202 * C1176 - C10203 * C1166 - C10202 * C1177 + C10199 * C1193 +
             C10204 * C1186 - C10205 * C1171 - C10204 * C1187 + C10200 * C1198 +
             C10206 * C7389 - C10207 * C7388 - C10206 * C7390 +
             C33118 * C7391) *
                C33115) *
               C32773 * C599 -
           ((C11578 + C11577 + C11576) * C33115 +
            (C10680 + C10681 + C10682) * C33135 +
            (C10265 + C10264 + C10263) * C33147) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
            C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
            C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
            C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
            C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
               C32856 * C32773 * C598 -
           (C11987 * C12115 - C11988 * C12113 - C11987 * C12116 +
            C11978 * C12119 + C11985 * C2130 - C11986 * C2121 - C11985 * C2131 +
            C11977 * C2139 + C11983 * C2128 - C11984 * C2120 - C11983 * C2129 +
            C11976 * C2138 + C11981 * C374 - C11982 * C359 - C11981 * C375 +
            C11975 * C389 + C11979 * C372 - C11980 * C358 - C11979 * C373 +
            C11974 * C388) *
               C32856 * C32773 * C599) *
              C32818 * C478 +
          ((C11979 * C370 - C11980 * C357 - C11979 * C371 + C11974 * C387 +
            C11981 * C376 - C11982 * C360 - C11981 * C377 + C11975 * C390 +
            C11983 * C2126 - C11984 * C2119 - C11983 * C2127 + C11976 * C2137 +
            C11985 * C2132 - C11986 * C2122 - C11985 * C2133 + C11977 * C2140 +
            C11987 * C12290 - C11988 * C12289 - C11987 * C12291 +
            C11978 * C12292) *
               C32856 * C32773 * C599 -
           (C11987 * C2132 - C11988 * C2122 - C11987 * C2133 + C11978 * C2140 +
            C11985 * C2126 - C11986 * C2119 - C11985 * C2127 + C11977 * C2137 +
            C11983 * C376 - C11984 * C360 - C11983 * C377 + C11976 * C390 +
            C11981 * C370 - C11982 * C357 - C11981 * C371 + C11975 * C387 +
            C11979 * C124 - C11980 * C116 - C11979 * C125 + C11974 * C137) *
               C32856 * C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C32818 * C110 -
          (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
           C179 * C103) *
              C32832 * C32818 * C111 +
          (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) * C32856 *
               C107) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C245 -
          ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) * C32856 *
               C107 +
           (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) * C32856 *
               C106 +
           (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) * C32856 *
               C105 +
           (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) * C32856 *
               C104 +
           (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
               C103) *
              C32832 * C246 +
          ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) * C32856 *
               C103 +
           (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) * C32856 *
               C104 +
           (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) * C32856 *
               C105 +
           (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) * C32856 *
               C106 +
           (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) * C32856 *
               C107) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C33135 +
            (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C32818 * C110 -
          ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
           (C883 + C856 + C855) * C851) *
              C32832 * C32818 * C111 +
          (C886 * C851 + (C872 + C871 + C885) * C852 +
           (C177 * C33147 + C509 * C33135 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
           (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
           (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
              C32832 * C246 +
          ((C1052 * C33147 + C1055 * C33135 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C851 +
           (C880 * C33147 + C1054 * C33135 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C852 +
           (C881 * C33147 + C1053 * C33135 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C32832 * C32818 * C110 -
          ((C1893 + C1894 + C1895) * C32856 * C33106 +
           (C1892 + C1891 + C1890) * C32856 * C852 +
           (C1889 + C1888 + C1887) * C32856 * C851) *
              C32832 * C32818 * C111 +
          (C1898 * C851 + (C1895 + C1894 + C1893) * C32856 * C852 +
           (C1826 * C130 - C1827 * C119 - C1826 * C131 + C33148 * C140 +
            C1828 * C364 - C1829 * C354 - C1828 * C365 + C33137 * C384 +
            C1830 * C382 - C1831 * C363 - C1830 * C383 + C33118 * C393) *
               C32856 * C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C32832 * C245 -
          ((C1830 * C1188 - C1831 * C1172 - C1830 * C1189 + C33118 * C1199 +
            C1828 * C727 - C1829 * C720 - C1828 * C728 + C33137 * C735 +
            C1826 * C263 - C1827 * C251 - C1826 * C264 + C33148 * C281) *
               C32856 * C33106 +
           (C1830 * C1184 - C1831 * C1170 - C1830 * C1185 + C33118 * C1197 +
            C1828 * C725 - C1829 * C719 - C1828 * C726 + C33137 * C734 +
            C1826 * C265 - C1827 * C252 - C1826 * C266 + C33148 * C282) *
               C32856 * C852 +
           (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
            C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
            C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
               C32856 * C851) *
              C32832 * C246 +
          ((C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
            C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
            C1830 * C1182 - C1831 * C1169 - C1830 * C1183 + C33118 * C1196) *
               C32856 * C851 +
           (C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285 +
            C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
            C1830 * C1186 - C1831 * C1171 - C1830 * C1187 + C33118 * C1198) *
               C32856 * C852 +
           (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
            C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
            C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
               C32856 * C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283 +
            C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
            C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195) *
               C5473 +
           (C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
            C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
            C1830 * C1182 - C1831 * C1169 - C1830 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C1830 * C1186 - C1831 * C1171 - C1830 * C1187 + C33118 * C1198 +
            C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
            C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285) *
               C33115 +
           (C2332 + C2333 + C2334) * C5473 + (C1889 + C1888 + C1887) * C5472) *
              C32773 * C32832 * C32818 * C111 +
          (C1897 * C5472 + (C2331 + C2330 + C2329) * C5473 +
           (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
            C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
            C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
              C32773 * C32832 * C245 -
          ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
           (C6941 + C6940 + C6939) * C5472) *
              C32773 * C32832 * C246 +
          (C6949 * C5472 + (C6947 + C6946 + C6945) * C5473 +
           (C1826 * C1008 - C1827 * C999 - C1826 * C1009 + C33148 * C1017 +
            C1828 * C6376 - C1829 * C6373 - C1828 * C6377 + C33137 * C6382 +
            C1830 * C6380 - C1831 * C6375 - C1830 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C32818 * C110 -
          ((C10269 + C10270 + C10271) * C32856 * C33106 +
           (C10268 + C10267 + C10266) * C32856 * C33131 +
           (C10265 + C10264 + C10263) * C32856 * C33144) *
              C32832 * C32818 * C111 +
          (C10274 * C33144 + (C10271 + C10270 + C10269) * C32856 * C33131 +
           (C10202 * C130 - C10203 * C119 - C10202 * C131 + C10199 * C140 +
            C10204 * C364 - C10205 * C354 - C10204 * C365 + C10200 * C384 +
            C10206 * C382 - C10207 * C363 - C10206 * C383 + C33118 * C393) *
               C32856 * C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C245 -
          ((C10206 * C1188 - C10207 * C1172 - C10206 * C1189 + C33118 * C1199 +
            C10204 * C727 - C10205 * C720 - C10204 * C728 + C10200 * C735 +
            C10202 * C263 - C10203 * C251 - C10202 * C264 + C10199 * C281) *
               C32856 * C33106 +
           (C10206 * C1184 - C10207 * C1170 - C10206 * C1185 + C33118 * C1197 +
            C10204 * C725 - C10205 * C719 - C10204 * C726 + C10200 * C734 +
            C10202 * C265 - C10203 * C252 - C10202 * C266 + C10199 * C282) *
               C32856 * C33131 +
           (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
               C32856 * C33144) *
              C32832 * C246 +
          ((C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C32856 * C33144 +
           (C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198) *
               C32856 * C33131 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C32856 * C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195) *
               C33135 +
           (C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285) *
               C33115 +
           (C10680 + C10681 + C10682) * C33135 +
           (C10265 + C10264 + C10263) * C33147) *
              C32773 * C32832 * C32818 * C111 +
          (C10273 * C33147 + (C10679 + C10678 + C10677) * C33135 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
              C32773 * C32832 * C245 -
          ((C11297 + C11298 + C11299) * C33115 +
           (C11296 + C11295 + C11294) * C33135 +
           (C11293 + C11292 + C11291) * C33147) *
              C32773 * C32832 * C246 +
          (C11301 * C33147 + (C11299 + C11298 + C11297) * C33135 +
           (C10202 * C1008 - C10203 * C999 - C10202 * C1009 + C10199 * C1017 +
            C10204 * C6376 - C10205 * C6373 - C10204 * C6377 + C10200 * C6382 +
            C10206 * C6380 - C10207 * C6375 - C10206 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
           C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
           C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
           C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
           C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
              C32856 * C32773 * C32832 * C32818 * C110 -
          (C11987 * C2132 - C11988 * C2122 - C11987 * C2133 + C11978 * C2140 +
           C11985 * C2126 - C11986 * C2119 - C11985 * C2127 + C11977 * C2137 +
           C11983 * C376 - C11984 * C360 - C11983 * C377 + C11976 * C390 +
           C11981 * C370 - C11982 * C357 - C11981 * C371 + C11975 * C387 +
           C11979 * C124 - C11980 * C116 - C11979 * C125 + C11974 * C137) *
              C32856 * C32773 * C32832 * C32818 * C111 +
          (C11979 * C126 - C11980 * C117 - C11979 * C127 + C11974 * C138 +
           C11981 * C368 - C11982 * C356 - C11981 * C369 + C11975 * C386 +
           C11983 * C378 - C11984 * C361 - C11983 * C379 + C11976 * C391 +
           C11985 * C2124 - C11986 * C2118 - C11985 * C2125 + C11977 * C2136 +
           C11987 * C2134 - C11988 * C2123 - C11987 * C2135 + C11978 * C2141) *
              C32856 * C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C11979 * C122 - C11980 * C115 - C11979 * C123 + C11974 * C136 +
           C11981 * C372 - C11982 * C358 - C11981 * C373 + C11975 * C388 +
           C11983 * C374 - C11984 * C359 - C11983 * C375 + C11976 * C389 +
           C11985 * C2128 - C11986 * C2120 - C11985 * C2129 + C11977 * C2138 +
           C11987 * C2130 - C11988 * C2121 - C11987 * C2131 + C11978 * C2139) *
              C32856 * C32773 * C32832 * C245 -
          (C11987 * C7064 - C11988 * C7060 - C11987 * C7065 + C11978 * C7069 +
           C11985 * C2675 - C11986 * C2672 - C11985 * C2676 + C11977 * C2681 +
           C11983 * C1180 - C11984 * C1168 - C11983 * C1181 + C11976 * C1195 +
           C11981 * C723 - C11982 * C718 - C11981 * C724 + C11975 * C733 +
           C11979 * C267 - C11980 * C253 - C11979 * C268 + C11974 * C283) *
              C32856 * C32773 * C32832 * C246 +
          (C11979 * C269 - C11980 * C254 - C11979 * C270 + C11974 * C284 +
           C11981 * C1178 - C11982 * C1167 - C11981 * C1179 + C11975 * C1194 +
           C11983 * C1182 - C11984 * C1169 - C11983 * C1183 + C11976 * C1196 +
           C11985 * C7062 - C11986 * C7059 - C11985 * C7063 + C11977 * C7068 +
           C11987 * C7066 - C11988 * C7061 - C11987 * C7067 + C11978 * C7070) *
              C32856 * C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C5472 +
             (C4582 + C4583) * C5473 + C8590 * C33115) *
                C33065 +
            ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
                C32783) *
               C32832 * C476 -
           (((C8616 + C8617) * C33115 + C8960 * C5473 + C4932 * C5472) *
                C32783 +
            ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
             (C4583 + C4582) * C5472) *
                C33065) *
               C32832 * C477) *
              C478 +
          (((C4930 * C5472 + C8591 * C5473 + (C8617 + C8616) * C33115) *
                C33065 +
            (C4385 * C5472 + (C4585 + C4584) * C5473 +
             (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
              C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                 C33115) *
                C32783) *
               C32832 * C477 -
           (((C4584 + C4585) * C33115 + C4931 * C5473 +
             (C3559 + C3558) * C5472) *
                C32783 +
            (C8960 * C33115 + C4932 * C5473 + (C3557 + C3556) * C5472) *
                C33065) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32856 * C2784 +
            (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
               C32832 * C476 -
           ((C3930 + C3931) * C32856 * C33084 +
            (C3932 + C3933) * C32856 * C2786 +
            (C3934 + C3935) * C32856 * C2785 +
            (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
             C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
                C32856 * C2784) *
               C32832 * C477) *
              C478 +
          (((C3935 + C3934) * C32856 * C2784 +
            (C3933 + C3932) * C32856 * C2785 +
            (C3931 + C3930) * C32856 * C2786 +
            (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
             C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                C32856 * C33084) *
               C32832 * C477 -
           ((C3562 + C3563) * C32856 * C33084 +
            (C3561 + C3560) * C32856 * C2786 +
            (C3559 + C3558) * C32856 * C2785 +
            (C3557 + C3556) * C32856 * C2784) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
             C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
             C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
             C13532 * C2128 - C13533 * C2120 - C13532 * C2129 +
             C33099 * C2138) *
                C32856 * C33065 +
            (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
               C32832 * C476 -
           ((C13941 + C13942 + C13943 + C13944) * C32856 * C32783 +
            (C13532 * C2675 - C13533 * C2672 - C13532 * C2676 + C33099 * C2681 +
             C13530 * C1180 - C13531 * C1168 - C13530 * C1181 + C13524 * C1195 +
             C13528 * C723 - C13529 * C718 - C13528 * C724 + C13523 * C733 +
             C13526 * C267 - C13527 * C253 - C13526 * C268 + C13522 * C283) *
                C32856 * C33065) *
               C32832 * C477) *
              C478 +
          (((C13944 + C13943 + C13942 + C13941) * C32856 * C33065 +
            (C13526 * C263 - C13527 * C251 - C13526 * C264 + C13522 * C281 +
             C13528 * C727 - C13529 * C720 - C13528 * C728 + C13523 * C735 +
             C13530 * C1188 - C13531 * C1172 - C13530 * C1189 + C13524 * C1199 +
             C13532 * C2679 - C13533 * C2674 - C13532 * C2680 +
             C33099 * C2683) *
                C32856 * C32783) *
               C32832 * C477 -
           ((C13587 + C13588 + C13589 + C13590) * C32856 * C32783 +
            (C13586 + C13585 + C13584 + C13583) * C32856 * C33065) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C5472 +
             (C4582 + C4583) * C5473 + C8590 * C33115) *
                C33065 +
            ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
                C32783) *
               C598 -
           (((C9167 + C9168) * C33115 + (C5153 + C5154) * C5473 +
             (C4106 + C4107) * C5472) *
                C32783 +
            ((C9375 + C9376) * C33115 + (C5361 + C5362) * C5473 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C5472) *
                C33065) *
               C599) *
              C476 +
          ((((C5362 + C5361) * C5472 + (C9376 + C9375) * C5473 +
             (C3503 * C1690 - C3504 * C1687 - C3503 * C1691 + C33085 * C1696 +
              C3505 * C6378 - C3506 * C6374 - C3505 * C6379 + C32960 * C6383) *
                 C33115) *
                C33065 +
            ((C5154 + C5153) * C5472 + (C9168 + C9167) * C5473 +
             (C3503 * C1692 - C3504 * C1688 - C3503 * C1693 + C33085 * C1697 +
              C3505 * C7218 - C3506 * C7217 - C3505 * C7219 + C32960 * C7220) *
                 C33115) *
                C32783) *
               C599 -
           (((C8616 + C8617) * C33115 + C8960 * C5473 + C4932 * C5472) *
                C32783 +
            ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
             (C4583 + C4582) * C5472) *
                C33065) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32856 * C2784 +
            (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
               C598 -
           ((C4102 + C4103) * C32856 * C33084 +
            (C4104 + C4105) * C32856 * C2786 +
            (C4106 + C4107) * C32856 * C2785 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C32856 * C2784) *
               C599) *
              C476 +
          (((C3503 * C723 - C3504 * C718 - C3503 * C724 + C33085 * C733 +
             C3505 * C1180 - C3506 * C1168 - C3505 * C1181 + C32960 * C1195) *
                C32856 * C2784 +
            (C3503 * C725 - C3504 * C719 - C3503 * C726 + C33085 * C734 +
             C3505 * C1184 - C3506 * C1170 - C3505 * C1185 + C32960 * C1197) *
                C32856 * C2785 +
            (C3503 * C727 - C3504 * C720 - C3503 * C728 + C33085 * C735 +
             C3505 * C1188 - C3506 * C1172 - C3505 * C1189 + C32960 * C1199) *
                C32856 * C2786 +
            (C3503 * C729 - C3504 * C721 - C3503 * C730 + C33085 * C736 +
             C3505 * C2289 - C3506 * C2288 - C3505 * C2290 + C32960 * C2291) *
                C32856 * C33084) *
               C599 -
           ((C3930 + C3931) * C32856 * C33084 +
            (C3932 + C3933) * C32856 * C2786 +
            (C3934 + C3935) * C32856 * C2785 +
            (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
             C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
                C32856 * C2784) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
             C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
             C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
             C13532 * C2128 - C13533 * C2120 - C13532 * C2129 +
             C33099 * C2138) *
                C32856 * C33065 +
            (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
               C598 -
           ((C14099 + C14100 + C14101 + C14102) * C32856 * C32783 +
            (C13532 * C2130 - C13533 * C2121 - C13532 * C2131 + C33099 * C2139 +
             C13530 * C2128 - C13531 * C2120 - C13530 * C2129 + C13524 * C2138 +
             C13528 * C374 - C13529 * C359 - C13528 * C375 + C13523 * C389 +
             C13526 * C372 - C13527 * C358 - C13526 * C373 + C13522 * C388) *
                C32856 * C33065) *
               C599) *
              C476 +
          (((C13526 * C723 - C13527 * C718 - C13526 * C724 + C13522 * C733 +
             C13528 * C1180 - C13529 * C1168 - C13528 * C1181 + C13523 * C1195 +
             C13530 * C2675 - C13531 * C2672 - C13530 * C2676 + C13524 * C2681 +
             C13532 * C7064 - C13533 * C7060 - C13532 * C7065 +
             C33099 * C7069) *
                C32856 * C33065 +
            (C13526 * C725 - C13527 * C719 - C13526 * C726 + C13522 * C734 +
             C13528 * C1184 - C13529 * C1170 - C13528 * C1185 + C13523 * C1197 +
             C13530 * C2677 - C13531 * C2673 - C13530 * C2678 + C13524 * C2682 +
             C13532 * C12204 - C13533 * C12203 - C13532 * C12205 +
             C33099 * C12206) *
                C32856 * C32783) *
               C599 -
           ((C13941 + C13942 + C13943 + C13944) * C32856 * C32783 +
            (C13532 * C2675 - C13533 * C2672 - C13532 * C2676 + C33099 * C2681 +
             C13530 * C1180 - C13531 * C1168 - C13530 * C1181 + C13524 * C1195 +
             C13528 * C723 - C13529 * C718 - C13528 * C724 + C13523 * C733 +
             C13526 * C267 - C13527 * C253 - C13526 * C268 + C13522 * C283) *
                C32856 * C33065) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
                C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                   C32856 * C2784 +
               (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 +
               C3567 * C33084) *
                  C32832 * C32818 * C110 -
              ((C3562 + C3563) * C32856 * C33084 +
               (C3561 + C3560) * C32856 * C2786 +
               (C3559 + C3558) * C32856 * C2785 +
               (C3557 + C3556) * C32856 * C2784) *
                  C32832 * C32818 * C111 +
              (C3566 * C2784 + C3567 * C2785 +
               (C3563 + C3562) * C32856 * C2786 +
               (C3503 * C132 - C3504 * C120 - C3503 * C133 + C33085 * C141 +
                C3505 * C601 - C3506 * C600 - C3505 * C602 + C32960 * C603) *
                   C32856 * C33084) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
                C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                   C32856 * C2784 +
               (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 +
               C3567 * C33084) *
                  C32832 * C245 -
              ((C3505 * C729 - C3506 * C721 - C3505 * C730 + C32960 * C736 +
                C3503 * C261 - C3504 * C250 - C3503 * C262 + C33085 * C280) *
                   C32856 * C33084 +
               (C3505 * C727 - C3506 * C720 - C3505 * C728 + C32960 * C735 +
                C3503 * C263 - C3504 * C251 - C3503 * C264 + C33085 * C281) *
                   C32856 * C2786 +
               (C3505 * C725 - C3506 * C719 - C3505 * C726 + C32960 * C734 +
                C3503 * C265 - C3504 * C252 - C3503 * C266 + C33085 * C282) *
                   C32856 * C2785 +
               (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
                C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
                   C32856 * C2784) *
                  C32832 * C246 +
              ((C3503 * C269 - C3504 * C254 - C3503 * C270 + C33085 * C284 +
                C3505 * C1178 - C3506 * C1167 - C3505 * C1179 +
                C32960 * C1194) *
                   C32856 * C2784 +
               (C3503 * C271 - C3504 * C255 - C3503 * C272 + C33085 * C285 +
                C3505 * C1176 - C3506 * C1166 - C3505 * C1177 +
                C32960 * C1193) *
                   C32856 * C2785 +
               (C3503 * C273 - C3504 * C256 - C3503 * C274 + C33085 * C286 +
                C3505 * C1174 - C3506 * C1165 - C3505 * C1175 +
                C32960 * C1192) *
                   C32856 * C2786 +
               (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
                C3505 * C1504 - C3506 * C1503 - C3505 * C1505 +
                C32960 * C1506) *
                   C32856 * C33084) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C351 -
          ((C3505 * C380 - C3506 * C362 - C3505 * C381 + C32960 * C392 +
            C3503 * C366 - C3504 * C355 - C3503 * C367 + C33085 * C385) *
               C32856 * C33084 +
           (C3505 * C378 - C3506 * C361 - C3505 * C379 + C32960 * C391 +
            C3503 * C368 - C3504 * C356 - C3503 * C369 + C33085 * C386) *
               C32856 * C2786 +
           (C3505 * C376 - C3506 * C360 - C3505 * C377 + C32960 * C390 +
            C3503 * C370 - C3504 * C357 - C3503 * C371 + C33085 * C387) *
               C32856 * C2785 +
           (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
            C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
               C32856 * C2784) *
              C352 +
          ((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
            C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
               C32856 * C2784 +
           (C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
            C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
               C32856 * C2785 +
           (C3503 * C378 - C3504 * C361 - C3503 * C379 + C33085 * C391 +
            C3505 * C2124 - C3506 * C2118 - C3505 * C2125 + C32960 * C2136) *
               C32856 * C2786 +
           (C3503 * C380 - C3504 * C362 - C3503 * C381 + C33085 * C392 +
            C3505 * C2481 - C3506 * C2480 - C3505 * C2482 + C32960 * C2483) *
               C32856 * C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + (C4589 + C4588) * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 +
            (C4587 + C4586) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C4584 + C4585) * C33115 + C4931 * C5473 +
            (C3559 + C3558) * C5472) *
               C32783 +
           ((C4586 + C4587) * C33115 + C4932 * C5473 +
            (C3557 + C3556) * C5472) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C3564 * C5472 + C4385 * C5473 + (C4585 + C4584) * C33115) * C33065 +
           (C3565 * C5472 + (C3931 + C3930) * C5473 +
            (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
             C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + C8590 * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C8616 + C8617) * C33115 + (C4586 + C4587) * C5473 +
            C4932 * C5472) *
               C32783 +
           ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
            (C4583 + C4582) * C5472) *
               C33065) *
              C32832 * C246 +
          ((C8590 * C5472 + (C8619 + C8618) * C5473 +
            (C3503 * C1008 - C3504 * C999 - C3503 * C1009 + C33085 * C1017 +
             C3505 * C6376 - C3506 * C6373 - C3505 * C6377 + C32960 * C6382) *
                C33115) *
               C33065 +
           (C8591 * C5472 + (C8617 + C8616) * C5473 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + C8590 * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
               C32783) *
              C351 -
          (((C3505 * C1186 - C3506 * C1171 - C3505 * C1187 + C32960 * C1198 +
             C3503 * C1176 - C3504 * C1166 - C3503 * C1177 + C33085 * C1193) *
                C33115 +
            (C5153 + C5154) * C5473 + (C4106 + C4107) * C5472) *
               C32783 +
           ((C3505 * C1182 - C3506 * C1169 - C3505 * C1183 + C32960 * C1196 +
             C3503 * C1178 - C3504 * C1167 - C3503 * C1179 + C33085 * C1194) *
                C33115 +
            (C5361 + C5362) * C5473 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C5472) *
               C33065) *
              C352 +
          (((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
             C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
                C5472 +
            (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
             C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
                C5473 +
            (C3503 * C1182 - C3504 * C1169 - C3503 * C1183 + C33085 * C1196 +
             C3505 * C7062 - C3506 * C7059 - C3505 * C7063 + C32960 * C7068) *
                C33115) *
               C33065 +
           ((C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
             C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
                C5472 +
            (C3503 * C1184 - C3504 * C1170 - C3503 * C1185 + C33085 * C1197 +
             C3505 * C2677 - C3506 * C2673 - C3505 * C2678 + C32960 * C2682) *
                C5473 +
            (C3503 * C1186 - C3504 * C1171 - C3503 * C1187 + C33085 * C1198 +
             C3505 * C7389 - C3506 * C7388 - C3505 * C7390 + C32960 * C7391) *
                C33115) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C32856 * C33065 +
           (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
              C32832 * C32818 * C110 -
          ((C13587 + C13588 + C13589 + C13590) * C32856 * C32783 +
           (C13586 + C13585 + C13584 + C13583) * C32856 * C33065) *
              C32832 * C32818 * C111 +
          ((C13590 + C13589 + C13588 + C13587) * C32856 * C33065 +
           (C13526 * C128 - C13527 * C118 - C13526 * C129 + C13522 * C139 +
            C13528 * C366 - C13529 * C355 - C13528 * C367 + C13523 * C385 +
            C13530 * C380 - C13531 * C362 - C13530 * C381 + C13524 * C392 +
            C13532 * C2481 - C13533 * C2480 - C13532 * C2482 + C33099 * C2483) *
               C32856 * C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C32856 * C33065 +
           (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
              C32832 * C245 -
          ((C13532 * C2677 - C13533 * C2673 - C13532 * C2678 + C33099 * C2682 +
            C13530 * C1184 - C13531 * C1170 - C13530 * C1185 + C13524 * C1197 +
            C13528 * C725 - C13529 * C719 - C13528 * C726 + C13523 * C734 +
            C13526 * C265 - C13527 * C252 - C13526 * C266 + C13522 * C282) *
               C32856 * C32783 +
           (C13532 * C2675 - C13533 * C2672 - C13532 * C2676 + C33099 * C2681 +
            C13530 * C1180 - C13531 * C1168 - C13530 * C1181 + C13524 * C1195 +
            C13528 * C723 - C13529 * C718 - C13528 * C724 + C13523 * C733 +
            C13526 * C267 - C13527 * C253 - C13526 * C268 + C13522 * C283) *
               C32856 * C33065) *
              C32832 * C246 +
          ((C13526 * C269 - C13527 * C254 - C13526 * C270 + C13522 * C284 +
            C13528 * C1178 - C13529 * C1167 - C13528 * C1179 + C13523 * C1194 +
            C13530 * C1182 - C13531 * C1169 - C13530 * C1183 + C13524 * C1196 +
            C13532 * C7062 - C13533 * C7059 - C13532 * C7063 + C33099 * C7068) *
               C32856 * C33065 +
           (C13526 * C271 - C13527 * C255 - C13526 * C272 + C13522 * C285 +
            C13528 * C1176 - C13529 * C1166 - C13528 * C1177 + C13523 * C1193 +
            C13530 * C1186 - C13531 * C1171 - C13530 * C1187 + C13524 * C1198 +
            C13532 * C7389 - C13533 * C7388 - C13532 * C7390 + C33099 * C7391) *
               C32856 * C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C32856 * C33065 +
           (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
              C351 -
          ((C13532 * C2132 - C13533 * C2122 - C13532 * C2133 + C33099 * C2140 +
            C13530 * C2126 - C13531 * C2119 - C13530 * C2127 + C13524 * C2137 +
            C13528 * C376 - C13529 * C360 - C13528 * C377 + C13523 * C390 +
            C13526 * C370 - C13527 * C357 - C13526 * C371 + C13522 * C387) *
               C32856 * C32783 +
           (C13532 * C2130 - C13533 * C2121 - C13532 * C2131 + C33099 * C2139 +
            C13530 * C2128 - C13531 * C2120 - C13530 * C2129 + C13524 * C2138 +
            C13528 * C374 - C13529 * C359 - C13528 * C375 + C13523 * C389 +
            C13526 * C372 - C13527 * C358 - C13526 * C373 + C13522 * C388) *
               C32856 * C33065) *
              C352 +
          ((C13526 * C374 - C13527 * C359 - C13526 * C375 + C13522 * C389 +
            C13528 * C2128 - C13529 * C2120 - C13528 * C2129 + C13523 * C2138 +
            C13530 * C2130 - C13531 * C2121 - C13530 * C2131 + C13524 * C2139 +
            C13532 * C12115 - C13533 * C12113 - C13532 * C12116 +
            C33099 * C12119) *
               C32856 * C33065 +
           (C13526 * C376 - C13527 * C360 - C13526 * C377 + C13522 * C390 +
            C13528 * C2126 - C13529 * C2119 - C13528 * C2127 + C13523 * C2137 +
            C13530 * C2132 - C13531 * C2122 - C13530 * C2133 + C13524 * C2140 +
            C13532 * C12290 - C13533 * C12289 - C13532 * C12291 +
            C33099 * C12292) *
               C32856 * C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C5472 +
             (C4582 + C4583) * C5473 + C8590 * C33115) *
                C33065 +
            ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
                C32783) *
               C598 -
           (((C9167 + C9168) * C33115 + (C5153 + C5154) * C5473 +
             (C4106 + C4107) * C5472) *
                C32783 +
            ((C3505 * C1182 - C3506 * C1169 - C3505 * C1183 + C32960 * C1196 +
              C3503 * C1178 - C3504 * C1167 - C3503 * C1179 + C33085 * C1194) *
                 C33115 +
             (C5361 + C5362) * C5473 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C5472) *
                C33065) *
               C599) *
              C32818 * C478 +
          ((((C4107 + C4106) * C5472 + (C5154 + C5153) * C5473 +
             (C9168 + C9167) * C33115) *
                C33065 +
            ((C4105 + C4104) * C5472 + (C5152 + C5151) * C5473 +
             (C3503 * C1174 - C3504 * C1165 - C3503 * C1175 + C33085 * C1192 +
              C3505 * C1190 - C3506 * C1173 - C3505 * C1191 + C32960 * C1200) *
                 C33115) *
                C32783) *
               C599 -
           (((C4584 + C4585) * C33115 + C4931 * C5473 +
             (C3559 + C3558) * C5472) *
                C32783 +
            (C8960 * C33115 + C4932 * C5473 + (C3557 + C3556) * C5472) *
                C33065) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32856 * C2784 +
            (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
               C598 -
           ((C4102 + C4103) * C32856 * C33084 +
            (C4104 + C4105) * C32856 * C2786 +
            (C4106 + C4107) * C32856 * C2785 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C32856 * C2784) *
               C599) *
              C32818 * C478 +
          (((C4107 + C4106) * C32856 * C2784 +
            (C4105 + C4104) * C32856 * C2785 +
            (C4103 + C4102) * C32856 * C2786 +
            (C3503 * C364 - C3504 * C354 - C3503 * C365 + C33085 * C384 +
             C3505 * C382 - C3506 * C363 - C3505 * C383 + C32960 * C393) *
                C32856 * C33084) *
               C599 -
           ((C3562 + C3563) * C32856 * C33084 +
            (C3561 + C3560) * C32856 * C2786 +
            (C3559 + C3558) * C32856 * C2785 +
            (C3557 + C3556) * C32856 * C2784) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
             C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
             C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
             C13532 * C2128 - C13533 * C2120 - C13532 * C2129 +
             C33099 * C2138) *
                C32856 * C33065 +
            (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
               C598 -
           ((C14099 + C14100 + C14101 + C14102) * C32856 * C32783 +
            (C13532 * C2130 - C13533 * C2121 - C13532 * C2131 + C33099 * C2139 +
             C13530 * C2128 - C13531 * C2120 - C13530 * C2129 + C13524 * C2138 +
             C13528 * C374 - C13529 * C359 - C13528 * C375 + C13523 * C389 +
             C13526 * C372 - C13527 * C358 - C13526 * C373 + C13522 * C388) *
                C32856 * C33065) *
               C599) *
              C32818 * C478 +
          (((C14102 + C14101 + C14100 + C14099) * C32856 * C33065 +
            (C13526 * C368 - C13527 * C356 - C13526 * C369 + C13522 * C386 +
             C13528 * C378 - C13529 * C361 - C13528 * C379 + C13523 * C391 +
             C13530 * C2124 - C13531 * C2118 - C13530 * C2125 + C13524 * C2136 +
             C13532 * C2134 - C13533 * C2123 - C13532 * C2135 +
             C33099 * C2141) *
                C32856 * C32783) *
               C599 -
           ((C13587 + C13588 + C13589 + C13590) * C32856 * C32783 +
            (C13586 + C13585 + C13584 + C13583) * C32856 * C33065) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C32832 * C245 -
          ((C3505 * C729 - C3506 * C721 - C3505 * C730 + C32960 * C736 +
            C3503 * C261 - C3504 * C250 - C3503 * C262 + C33085 * C280) *
               C32856 * C33084 +
           (C3505 * C727 - C3506 * C720 - C3505 * C728 + C32960 * C735 +
            C3503 * C263 - C3504 * C251 - C3503 * C264 + C33085 * C281) *
               C32856 * C2786 +
           (C3505 * C725 - C3506 * C719 - C3505 * C726 + C32960 * C734 +
            C3503 * C265 - C3504 * C252 - C3503 * C266 + C33085 * C282) *
               C32856 * C2785 +
           (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
            C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
               C32856 * C2784) *
              C32832 * C246 +
          ((C3503 * C269 - C3504 * C254 - C3503 * C270 + C33085 * C284 +
            C3505 * C1178 - C3506 * C1167 - C3505 * C1179 + C32960 * C1194) *
               C32856 * C2784 +
           (C3503 * C271 - C3504 * C255 - C3503 * C272 + C33085 * C285 +
            C3505 * C1176 - C3506 * C1166 - C3505 * C1177 + C32960 * C1193) *
               C32856 * C2785 +
           (C3503 * C273 - C3504 * C256 - C3503 * C274 + C33085 * C286 +
            C3505 * C1174 - C3506 * C1165 - C3505 * C1175 + C32960 * C1192) *
               C32856 * C2786 +
           (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
            C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
               C32856 * C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C32832 * C32818 * C110 -
          ((C3562 + C3563) * C32856 * C33084 +
           (C3561 + C3560) * C32856 * C2786 + (C3559 + C3558) * C32856 * C2785 +
           (C3557 + C3556) * C32856 * C2784) *
              C32832 * C32818 * C111 +
          (C3566 * C2784 + C3567 * C2785 + (C3563 + C3562) * C32856 * C2786 +
           (C3503 * C132 - C3504 * C120 - C3503 * C133 + C33085 * C141 +
            C3505 * C601 - C3506 * C600 - C3505 * C602 + C32960 * C603) *
               C32856 * C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + (C4589 + C4588) * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 +
            (C4587 + C4586) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C4584 + C4585) * C33115 + C4931 * C5473 +
            (C3559 + C3558) * C5472) *
               C32783 +
           ((C4586 + C4587) * C33115 + C4932 * C5473 +
            (C3557 + C3556) * C5472) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C3564 * C5472 + C4385 * C5473 + (C4585 + C4584) * C33115) * C33065 +
           (C3565 * C5472 + (C3931 + C3930) * C5473 +
            (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
             C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + C8590 * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C8616 + C8617) * C33115 + (C4586 + C4587) * C5473 +
            C4932 * C5472) *
               C32783 +
           ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
            (C4583 + C4582) * C5472) *
               C33065) *
              C32832 * C246 +
          ((C8590 * C5472 + (C8619 + C8618) * C5473 +
            (C3503 * C1008 - C3504 * C999 - C3503 * C1009 + C33085 * C1017 +
             C3505 * C6376 - C3506 * C6373 - C3505 * C6377 + C32960 * C6382) *
                C33115) *
               C33065 +
           (C8591 * C5472 + (C8617 + C8616) * C5473 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C32856 * C33065 +
           (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
              C32832 * C32818 * C110 -
          ((C13587 + C13588 + C13589 + C13590) * C32856 * C32783 +
           (C13586 + C13585 + C13584 + C13583) * C32856 * C33065) *
              C32832 * C32818 * C111 +
          ((C13590 + C13589 + C13588 + C13587) * C32856 * C33065 +
           (C13526 * C128 - C13527 * C118 - C13526 * C129 + C13522 * C139 +
            C13528 * C366 - C13529 * C355 - C13528 * C367 + C13523 * C385 +
            C13530 * C380 - C13531 * C362 - C13530 * C381 + C13524 * C392 +
            C13532 * C2481 - C13533 * C2480 - C13532 * C2482 + C33099 * C2483) *
               C32856 * C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13526 * C122 - C13527 * C115 - C13526 * C123 + C13522 * C136 +
            C13528 * C372 - C13529 * C358 - C13528 * C373 + C13523 * C388 +
            C13530 * C374 - C13531 * C359 - C13530 * C375 + C13524 * C389 +
            C13532 * C2128 - C13533 * C2120 - C13532 * C2129 + C33099 * C2138) *
               C32856 * C33065 +
           (C13583 + C13584 + C13585 + C13586) * C32856 * C32783) *
              C32832 * C245 -
          ((C13532 * C2677 - C13533 * C2673 - C13532 * C2678 + C33099 * C2682 +
            C13530 * C1184 - C13531 * C1170 - C13530 * C1185 + C13524 * C1197 +
            C13528 * C725 - C13529 * C719 - C13528 * C726 + C13523 * C734 +
            C13526 * C265 - C13527 * C252 - C13526 * C266 + C13522 * C282) *
               C32856 * C32783 +
           (C13532 * C2675 - C13533 * C2672 - C13532 * C2676 + C33099 * C2681 +
            C13530 * C1180 - C13531 * C1168 - C13530 * C1181 + C13524 * C1195 +
            C13528 * C723 - C13529 * C718 - C13528 * C724 + C13523 * C733 +
            C13526 * C267 - C13527 * C253 - C13526 * C268 + C13522 * C283) *
               C32856 * C33065) *
              C32832 * C246 +
          ((C13526 * C269 - C13527 * C254 - C13526 * C270 + C13522 * C284 +
            C13528 * C1178 - C13529 * C1167 - C13528 * C1179 + C13523 * C1194 +
            C13530 * C1182 - C13531 * C1169 - C13530 * C1183 + C13524 * C1196 +
            C13532 * C7062 - C13533 * C7059 - C13532 * C7063 + C33099 * C7068) *
               C32856 * C33065 +
           (C13526 * C271 - C13527 * C255 - C13526 * C272 + C13522 * C285 +
            C13528 * C1176 - C13529 * C1166 - C13528 * C1177 + C13523 * C1193 +
            C13530 * C1186 - C13531 * C1171 - C13530 * C1187 + C13524 * C1198 +
            C13532 * C7389 - C13533 * C7388 - C13532 * C7390 + C33099 * C7391) *
               C32856 * C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C32832 * C476 -
           ((C1352 + C1353 + C1354) * C33106 + (C1355 + C1356 + C1357) * C852 +
            (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
               C32832 * C477) *
              C478 +
          (((C1357 + C1356 + C1355) * C851 + (C1354 + C1353 + C1352) * C852 +
            (C510 * C33147 + C882 * C33135 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C33115) *
                C33106) *
               C32832 * C477 -
           ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
            (C883 + C856 + C855) * C851) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C32832 * C476 -
           (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
                C103) *
               C32832 * C477) *
              C478 +
          ((C516 * C103 + C515 * C104 + C514 * C105 + C513 * C106 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) * C32856 *
                C107) *
               C32832 * C477 -
           (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
            C179 * C103) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C32832 * C476 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C32832 * C477) *
              C478 +
          (((C5861 + C5860 + C5859) * C33144 +
            (C5858 + C5857 + C5856) * C33131 +
            (C510 * C5472 + C882 * C5473 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C33115) *
                C33106) *
               C32832 * C477 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C32832 * C476 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C32832 * C477) *
              C478 +
          ((C512 * C6221 + C880 * C6222 + C1054 * C6223 + C6478 * C6224 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C6225) *
               C32773 * C32832 * C477 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C32856 * C33144 +
            (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
               C32832 * C476 -
           ((C10677 + C10678 + C10679) * C32856 * C33106 +
            (C10680 + C10681 + C10682) * C32856 * C33131 +
            (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
             C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
             C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
                C32856 * C33144) *
               C32832 * C477) *
              C478 +
          (((C10682 + C10681 + C10680) * C32856 * C33144 +
            (C10679 + C10678 + C10677) * C32856 * C33131 +
            (C10202 * C261 - C10203 * C250 - C10202 * C262 + C10199 * C280 +
             C10204 * C729 - C10205 * C721 - C10204 * C730 + C10200 * C736 +
             C10206 * C2289 - C10207 * C2288 - C10206 * C2290 +
             C33118 * C2291) *
                C32856 * C33106) *
               C32832 * C477 -
           ((C10269 + C10270 + C10271) * C32856 * C33106 +
            (C10268 + C10267 + C10266) * C32856 * C33131 +
            (C10265 + C10264 + C10263) * C32856 * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33147 +
            (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
               C32773 * C32832 * C476 -
           ((C11297 + C11298 + C11299) * C33115 +
            (C11296 + C11295 + C11294) * C33135 +
            (C11293 + C11292 + C11291) * C33147) *
               C32773 * C32832 * C477) *
              C478 +
          (((C10682 + C10681 + C10680) * C33147 +
            (C11576 + C11577 + C11578) * C33135 +
            (C10202 * C1004 - C10203 * C997 - C10202 * C1005 + C10199 * C1015 +
             C10204 * C1692 - C10205 * C1688 - C10204 * C1693 + C10200 * C1697 +
             C10206 * C7218 - C10207 * C7217 - C10206 * C7219 +
             C33118 * C7220) *
                C33115) *
               C32773 * C32832 * C477 -
           ((C11578 + C11577 + C11576) * C33115 +
            (C10680 + C10681 + C10682) * C33135 +
            (C10265 + C10264 + C10263) * C33147) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C598 -
           ((C1538 + C1539 + C1516) * C33106 + (C1540 + C1541 + C1525) * C852 +
            (C1712 * C33115 + C1713 * C33135 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33147) *
                C851) *
               C599) *
              C476 +
          (((C1713 * C33147 + C1712 * C33135 +
             (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                 C33115) *
                C851 +
            (C1537 * C33147 + C1536 * C33135 +
             (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                 C33115) *
                C852 +
            (C1535 * C33147 + C1534 * C33135 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33115) *
                C33106) *
               C599 -
           ((C1352 + C1353 + C1354) * C33106 + (C1355 + C1356 + C1357) * C852 +
            (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C598 -
           (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
                C103) *
               C599) *
              C476 +
          (((C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) * C32856 *
                C103 +
            (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) * C32856 *
                C104 +
            (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) * C32856 *
                C105 +
            (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) * C32856 *
                C106 +
            (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) * C32856 *
                C107) *
               C599 -
           (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
                C103) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C476 +
          (((C1713 * C5472 + C1712 * C5473 +
             (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                 C33115) *
                C33144 +
            (C1537 * C5472 + C1536 * C5473 +
             (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                 C33115) *
                C33131 +
            (C1535 * C5472 + C1534 * C5473 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33115) *
                C33106) *
               C599 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           (C6663 * C6225 + C6664 * C6224 + C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C476 +
          ((C1713 * C6221 + C1712 * C6222 + C6664 * C6223 + C6663 * C6224 +
            (C113 * C6647 - C114 * C6646 - C113 * C6648 + C32873 * C6649) *
                C6225) *
               C32773 * C599 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C32856 * C33144 +
            (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
               C598 -
           ((C10865 + C10866 + C10867) * C32856 * C33106 +
            (C10868 + C10869 + C10870) * C32856 * C33131 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C32856 * C33144) *
               C599) *
              C476 +
          (((C10202 * C723 - C10203 * C718 - C10202 * C724 + C10199 * C733 +
             C10204 * C1180 - C10205 * C1168 - C10204 * C1181 + C10200 * C1195 +
             C10206 * C2675 - C10207 * C2672 - C10206 * C2676 +
             C33118 * C2681) *
                C32856 * C33144 +
            (C10202 * C725 - C10203 * C719 - C10202 * C726 + C10199 * C734 +
             C10204 * C1184 - C10205 * C1170 - C10204 * C1185 + C10200 * C1197 +
             C10206 * C2677 - C10207 * C2673 - C10206 * C2678 +
             C33118 * C2682) *
                C32856 * C33131 +
            (C10202 * C727 - C10203 * C720 - C10202 * C728 + C10199 * C735 +
             C10204 * C1188 - C10205 * C1172 - C10204 * C1189 + C10200 * C1199 +
             C10206 * C2679 - C10207 * C2674 - C10206 * C2680 +
             C33118 * C2683) *
                C32856 * C33106) *
               C599 -
           ((C10677 + C10678 + C10679) * C32856 * C33106 +
            (C10680 + C10681 + C10682) * C32856 * C33131 +
            (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
             C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
             C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
                C32856 * C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33147 +
            (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
               C32773 * C598 -
           ((C11907 + C11908 + C11909) * C33115 +
            (C11910 + C11911 + C11912) * C33135 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C33147) *
               C32773 * C599) *
              C476 +
          (((C11912 + C11911 + C11910) * C33147 +
            (C11909 + C11908 + C11907) * C33135 +
            (C10202 * C1690 - C10203 * C1687 - C10202 * C1691 + C10199 * C1696 +
             C10204 * C6378 - C10205 * C6374 - C10204 * C6379 + C10200 * C6383 +
             C10206 * C7539 - C10207 * C7538 - C10206 * C7540 +
             C33118 * C7541) *
                C33115) *
               C32773 * C599 -
           ((C11297 + C11298 + C11299) * C33115 +
            (C11296 + C11295 + C11294) * C33135 +
            (C11293 + C11292 + C11291) * C33147) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                   C32856 * C103 +
               C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                  C32832 * C32818 * C110 -
              (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
               C179 * C103) *
                  C32832 * C32818 * C111 +
              (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
               (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) *
                   C32856 * C107) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                   C32856 * C103 +
               C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                  C32832 * C245 -
              ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) *
                   C32856 * C107 +
               (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) *
                   C32856 * C106 +
               (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) *
                   C32856 * C105 +
               (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) *
                   C32856 * C104 +
               (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) *
                   C32856 * C103) *
                  C32832 * C246 +
              ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                   C32856 * C103 +
               (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) *
                   C32856 * C104 +
               (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) *
                   C32856 * C105 +
               (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) *
                   C32856 * C106 +
               (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                   C32856 * C107) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C351 -
          ((C113 * C364 - C114 * C354 - C113 * C365 + C32873 * C384) * C32856 *
               C107 +
           (C113 * C366 - C114 * C355 - C113 * C367 + C32873 * C385) * C32856 *
               C106 +
           (C113 * C368 - C114 * C356 - C113 * C369 + C32873 * C386) * C32856 *
               C105 +
           (C113 * C370 - C114 * C357 - C113 * C371 + C32873 * C387) * C32856 *
               C104 +
           (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
               C103) *
              C352 +
          ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C32856 *
               C103 +
           (C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C32856 *
               C104 +
           (C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C32856 *
               C105 +
           (C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) * C32856 *
               C106 +
           (C113 * C382 - C114 * C363 - C113 * C383 + C32873 * C393) * C32856 *
               C107) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C33135 +
            (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C32818 * C110 -
          ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
           (C883 + C856 + C855) * C851) *
              C32832 * C32818 * C111 +
          (C886 * C851 + (C872 + C871 + C885) * C852 +
           (C177 * C33147 + C509 * C33135 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
           (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
           (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
              C32832 * C246 +
          ((C1052 * C33147 + C1055 * C33135 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C851 +
           (C880 * C33147 + C1054 * C33135 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C852 +
           (C881 * C33147 + C1053 * C33135 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C351 -
          (((C113 * C1174 - C114 * C1165 - C113 * C1175 + C32873 * C1192) *
                C33115 +
            (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) * C33135 +
            C631 * C33147) *
               C33106 +
           ((C113 * C1176 - C114 * C1166 - C113 * C1177 + C32873 * C1193) *
                C33115 +
            (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) * C33135 +
            C632 * C33147) *
               C852 +
           ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                C33115 +
            (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) * C33135 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C33147) *
               C851) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C33147 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C33135 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33115) *
               C851 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C33147 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C33135 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33115) *
               C852 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C33147 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C33135 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C33115) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C351 -
          ((C1534 * C33115 + C1535 * C5473 + C631 * C5472) * C33106 +
           (C1536 * C33115 + C1537 * C5473 + C632 * C5472) * C33131 +
           (C1712 * C33115 + C1713 * C5473 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C5472) *
               C33144) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C5472 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C5473 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33115) *
               C33144 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C5472 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C5473 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33115) *
               C33131 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C5472 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C5473 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C33115) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C351 -
          ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
               C6225 +
           (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
               C6224 +
           C1712 * C6223 + C1713 * C6222 +
           (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
              C32773 * C352 +
          ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C6221 +
           (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
               C6222 +
           (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
               C6223 +
           (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
               C6224 +
           (C113 * C6380 - C114 * C6375 - C113 * C6381 + C32873 * C6384) *
               C6225) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C32818 * C110 -
          ((C10269 + C10270 + C10271) * C32856 * C33106 +
           (C10268 + C10267 + C10266) * C32856 * C33131 +
           (C10265 + C10264 + C10263) * C32856 * C33144) *
              C32832 * C32818 * C111 +
          (C10274 * C33144 + (C10271 + C10270 + C10269) * C32856 * C33131 +
           (C10202 * C130 - C10203 * C119 - C10202 * C131 + C10199 * C140 +
            C10204 * C364 - C10205 * C354 - C10204 * C365 + C10200 * C384 +
            C10206 * C382 - C10207 * C363 - C10206 * C383 + C33118 * C393) *
               C32856 * C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C245 -
          ((C10206 * C1188 - C10207 * C1172 - C10206 * C1189 + C33118 * C1199 +
            C10204 * C727 - C10205 * C720 - C10204 * C728 + C10200 * C735 +
            C10202 * C263 - C10203 * C251 - C10202 * C264 + C10199 * C281) *
               C32856 * C33106 +
           (C10206 * C1184 - C10207 * C1170 - C10206 * C1185 + C33118 * C1197 +
            C10204 * C725 - C10205 * C719 - C10204 * C726 + C10200 * C734 +
            C10202 * C265 - C10203 * C252 - C10202 * C266 + C10199 * C282) *
               C32856 * C33131 +
           (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
               C32856 * C33144) *
              C32832 * C246 +
          ((C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C32856 * C33144 +
           (C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198) *
               C32856 * C33131 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C32856 * C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C351 -
          ((C10206 * C2124 - C10207 * C2118 - C10206 * C2125 + C33118 * C2136 +
            C10204 * C378 - C10205 * C361 - C10204 * C379 + C10200 * C391 +
            C10202 * C368 - C10203 * C356 - C10202 * C369 + C10199 * C386) *
               C32856 * C33106 +
           (C10206 * C2126 - C10207 * C2119 - C10206 * C2127 + C33118 * C2137 +
            C10204 * C376 - C10205 * C360 - C10204 * C377 + C10200 * C390 +
            C10202 * C370 - C10203 * C357 - C10202 * C371 + C10199 * C387) *
               C32856 * C33131 +
           (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
            C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
            C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
               C32856 * C33144) *
              C352 +
          ((C10202 * C374 - C10203 * C359 - C10202 * C375 + C10199 * C389 +
            C10204 * C2128 - C10205 * C2120 - C10204 * C2129 + C10200 * C2138 +
            C10206 * C2130 - C10207 * C2121 - C10206 * C2131 + C33118 * C2139) *
               C32856 * C33144 +
           (C10202 * C376 - C10203 * C360 - C10202 * C377 + C10199 * C390 +
            C10204 * C2126 - C10205 * C2119 - C10204 * C2127 + C10200 * C2137 +
            C10206 * C2132 - C10207 * C2122 - C10206 * C2133 + C33118 * C2140) *
               C32856 * C33131 +
           (C10202 * C378 - C10203 * C361 - C10202 * C379 + C10199 * C391 +
            C10204 * C2124 - C10205 * C2118 - C10204 * C2125 + C10200 * C2136 +
            C10206 * C2134 - C10207 * C2123 - C10206 * C2135 + C33118 * C2141) *
               C32856 * C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195) *
               C33135 +
           (C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285) *
               C33115 +
           (C10680 + C10681 + C10682) * C33135 +
           (C10265 + C10264 + C10263) * C33147) *
              C32773 * C32832 * C32818 * C111 +
          (C10273 * C33147 + (C10679 + C10678 + C10677) * C33135 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
              C32773 * C32832 * C245 -
          ((C11297 + C11298 + C11299) * C33115 +
           (C11296 + C11295 + C11294) * C33135 +
           (C11293 + C11292 + C11291) * C33147) *
              C32773 * C32832 * C246 +
          (C11301 * C33147 + (C11299 + C11298 + C11297) * C33135 +
           (C10202 * C1008 - C10203 * C999 - C10202 * C1009 + C10199 * C1017 +
            C10204 * C6376 - C10205 * C6373 - C10204 * C6377 + C10200 * C6382 +
            C10206 * C6380 - C10207 * C6375 - C10206 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
              C32773 * C351 -
          ((C10206 * C7062 - C10207 * C7059 - C10206 * C7063 + C33118 * C7068 +
            C10204 * C1182 - C10205 * C1169 - C10204 * C1183 + C10200 * C1196 +
            C10202 * C1178 - C10203 * C1167 - C10202 * C1179 + C10199 * C1194) *
               C33115 +
           (C10206 * C2675 - C10207 * C2672 - C10206 * C2676 + C33118 * C2681 +
            C10204 * C1180 - C10205 * C1168 - C10204 * C1181 + C10200 * C1195 +
            C10202 * C723 - C10203 * C718 - C10202 * C724 + C10199 * C733) *
               C33135 +
           (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
            C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
            C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
               C33147) *
              C32773 * C352 +
          ((C10202 * C374 - C10203 * C359 - C10202 * C375 + C10199 * C389 +
            C10204 * C2128 - C10205 * C2120 - C10204 * C2129 + C10200 * C2138 +
            C10206 * C2130 - C10207 * C2121 - C10206 * C2131 + C33118 * C2139) *
               C33147 +
           (C10202 * C1180 - C10203 * C1168 - C10202 * C1181 + C10199 * C1195 +
            C10204 * C2675 - C10205 * C2672 - C10204 * C2676 + C10200 * C2681 +
            C10206 * C7064 - C10207 * C7060 - C10206 * C7065 + C33118 * C7069) *
               C33135 +
           (C10202 * C1182 - C10203 * C1169 - C10202 * C1183 + C10199 * C1196 +
            C10204 * C7062 - C10205 * C7059 - C10204 * C7063 + C10200 * C7068 +
            C10206 * C7066 - C10207 * C7061 - C10206 * C7067 + C33118 * C7070) *
               C33115) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C598 -
           ((C1538 + C1539 + C1516) * C33106 + (C1540 + C1541 + C1525) * C852 +
            ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                 C33115 +
             (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) *
                 C33135 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33147) *
                C851) *
               C599) *
              C32818 * C478 +
          (((C1525 + C1541 + C1540) * C851 + (C1516 + C1539 + C1538) * C852 +
            (C630 * C33147 +
             (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) *
                 C33135 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C33115) *
                C33106) *
               C599 -
           ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
            (C883 + C856 + C855) * C851) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C598 -
           (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
                C103) *
               C599) *
              C32818 * C478 +
          ((C636 * C103 + C635 * C104 + C634 * C105 + C633 * C106 +
            (C113 * C601 - C114 * C600 - C113 * C602 + C32873 * C603) * C32856 *
                C107) *
               C599 -
           (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
            C179 * C103) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C32818 * C478 +
          (((C6013 + C6012 + C6011) * C33144 +
            (C6010 + C6009 + C6008) * C33131 +
            (C630 * C5472 + C3272 * C5473 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C33115) *
                C33106) *
               C599 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
                C6225 +
            (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                C6224 +
            C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C32818 * C478 +
          ((C632 * C6221 + C1537 * C6222 + C1536 * C6223 +
            (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                C6224 +
            (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                C6225) *
               C32773 * C599 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C32856 * C33144 +
            (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
               C598 -
           ((C10865 + C10866 + C10867) * C32856 * C33106 +
            (C10868 + C10869 + C10870) * C32856 * C33131 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C32856 * C33144) *
               C599) *
              C32818 * C478 +
          (((C10870 + C10869 + C10868) * C32856 * C33144 +
            (C10867 + C10866 + C10865) * C32856 * C33131 +
            (C10202 * C366 - C10203 * C355 - C10202 * C367 + C10199 * C385 +
             C10204 * C380 - C10205 * C362 - C10204 * C381 + C10200 * C392 +
             C10206 * C2481 - C10207 * C2480 - C10206 * C2482 +
             C33118 * C2483) *
                C32856 * C33106) *
               C599 -
           ((C10269 + C10270 + C10271) * C32856 * C33106 +
            (C10268 + C10267 + C10266) * C32856 * C33131 +
            (C10265 + C10264 + C10263) * C32856 * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
             C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
             C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
                C33147 +
            (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
               C32773 * C598 -
           ((C10206 * C7062 - C10207 * C7059 - C10206 * C7063 + C33118 * C7068 +
             C10204 * C1182 - C10205 * C1169 - C10204 * C1183 + C10200 * C1196 +
             C10202 * C1178 - C10203 * C1167 - C10202 * C1179 +
             C10199 * C1194) *
                C33115 +
            (C10206 * C2675 - C10207 * C2672 - C10206 * C2676 + C33118 * C2681 +
             C10204 * C1180 - C10205 * C1168 - C10204 * C1181 + C10200 * C1195 +
             C10202 * C723 - C10203 * C718 - C10202 * C724 + C10199 * C733) *
                C33135 +
            (C10206 * C2128 - C10207 * C2120 - C10206 * C2129 + C33118 * C2138 +
             C10204 * C374 - C10205 * C359 - C10204 * C375 + C10200 * C389 +
             C10202 * C372 - C10203 * C358 - C10202 * C373 + C10199 * C388) *
                C33147) *
               C32773 * C599) *
              C32818 * C478 +
          (((C10870 + C10869 + C10868) * C33147 +
            (C10202 * C725 - C10203 * C719 - C10202 * C726 + C10199 * C734 +
             C10204 * C1184 - C10205 * C1170 - C10204 * C1185 + C10200 * C1197 +
             C10206 * C2677 - C10207 * C2673 - C10206 * C2678 +
             C33118 * C2682) *
                C33135 +
            (C10202 * C1176 - C10203 * C1166 - C10202 * C1177 + C10199 * C1193 +
             C10204 * C1186 - C10205 * C1171 - C10204 * C1187 + C10200 * C1198 +
             C10206 * C7389 - C10207 * C7388 - C10206 * C7390 +
             C33118 * C7391) *
                C33115) *
               C32773 * C599 -
           ((C11578 + C11577 + C11576) * C33115 +
            (C10680 + C10681 + C10682) * C33135 +
            (C10265 + C10264 + C10263) * C33147) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C245 -
          ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) * C32856 *
               C107 +
           (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) * C32856 *
               C106 +
           (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) * C32856 *
               C105 +
           (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) * C32856 *
               C104 +
           (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
               C103) *
              C32832 * C246 +
          ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) * C32856 *
               C103 +
           (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) * C32856 *
               C104 +
           (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) * C32856 *
               C105 +
           (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) * C32856 *
               C106 +
           (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) * C32856 *
               C107) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C32818 * C110 -
          (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
           C179 * C103) *
              C32832 * C32818 * C111 +
          (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) * C32856 *
               C107) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C33135 +
            (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C32818 * C110 -
          ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
           (C883 + C856 + C855) * C851) *
              C32832 * C32818 * C111 +
          (C886 * C851 + (C872 + C871 + C885) * C852 +
           (C177 * C33147 + C509 * C33135 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
           (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
           (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
              C32832 * C246 +
          ((C1052 * C33147 + C1055 * C33135 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C851 +
           (C880 * C33147 + C1054 * C33135 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C852 +
           (C881 * C33147 + C1053 * C33135 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C32818 * C110 -
          ((C10269 + C10270 + C10271) * C32856 * C33106 +
           (C10268 + C10267 + C10266) * C32856 * C33131 +
           (C10265 + C10264 + C10263) * C32856 * C33144) *
              C32832 * C32818 * C111 +
          (C10274 * C33144 + (C10271 + C10270 + C10269) * C32856 * C33131 +
           (C10202 * C130 - C10203 * C119 - C10202 * C131 + C10199 * C140 +
            C10204 * C364 - C10205 * C354 - C10204 * C365 + C10200 * C384 +
            C10206 * C382 - C10207 * C363 - C10206 * C383 + C33118 * C393) *
               C32856 * C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C32856 * C33144 +
           (C10263 + C10264 + C10265) * C32856 * C33131 + C10274 * C33106) *
              C32832 * C245 -
          ((C10206 * C1188 - C10207 * C1172 - C10206 * C1189 + C33118 * C1199 +
            C10204 * C727 - C10205 * C720 - C10204 * C728 + C10200 * C735 +
            C10202 * C263 - C10203 * C251 - C10202 * C264 + C10199 * C281) *
               C32856 * C33106 +
           (C10206 * C1184 - C10207 * C1170 - C10206 * C1185 + C33118 * C1197 +
            C10204 * C725 - C10205 * C719 - C10204 * C726 + C10200 * C734 +
            C10202 * C265 - C10203 * C252 - C10202 * C266 + C10199 * C282) *
               C32856 * C33131 +
           (C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283) *
               C32856 * C33144) *
              C32832 * C246 +
          ((C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C32856 * C33144 +
           (C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198) *
               C32856 * C33131 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C32856 * C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C10202 * C267 - C10203 * C253 - C10202 * C268 + C10199 * C283 +
            C10204 * C723 - C10205 * C718 - C10204 * C724 + C10200 * C733 +
            C10206 * C1180 - C10207 * C1168 - C10206 * C1181 + C33118 * C1195) *
               C33135 +
           (C10202 * C269 - C10203 * C254 - C10202 * C270 + C10199 * C284 +
            C10204 * C1178 - C10205 * C1167 - C10204 * C1179 + C10200 * C1194 +
            C10206 * C1182 - C10207 * C1169 - C10206 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C10206 * C1186 - C10207 * C1171 - C10206 * C1187 + C33118 * C1198 +
            C10204 * C1176 - C10205 * C1166 - C10204 * C1177 + C10200 * C1193 +
            C10202 * C271 - C10203 * C255 - C10202 * C272 + C10199 * C285) *
               C33115 +
           (C10680 + C10681 + C10682) * C33135 +
           (C10265 + C10264 + C10263) * C33147) *
              C32773 * C32832 * C32818 * C111 +
          (C10273 * C33147 + (C10679 + C10678 + C10677) * C33135 +
           (C10202 * C273 - C10203 * C256 - C10202 * C274 + C10199 * C286 +
            C10204 * C1174 - C10205 * C1165 - C10204 * C1175 + C10200 * C1192 +
            C10206 * C1190 - C10207 * C1173 - C10206 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10202 * C122 - C10203 * C115 - C10202 * C123 + C10199 * C136 +
            C10204 * C372 - C10205 * C358 - C10204 * C373 + C10200 * C388 +
            C10206 * C374 - C10207 * C359 - C10206 * C375 + C33118 * C389) *
               C33147 +
           (C11291 + C11292 + C11293) * C33135 + C11301 * C33115) *
              C32773 * C32832 * C245 -
          ((C11297 + C11298 + C11299) * C33115 +
           (C11296 + C11295 + C11294) * C33135 +
           (C11293 + C11292 + C11291) * C33147) *
              C32773 * C32832 * C246 +
          (C11301 * C33147 + (C11299 + C11298 + C11297) * C33135 +
           (C10202 * C1008 - C10203 * C999 - C10202 * C1009 + C10199 * C1017 +
            C10204 * C6376 - C10205 * C6373 - C10204 * C6377 + C10200 * C6382 +
            C10206 * C6380 - C10207 * C6375 - C10206 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[75] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33083 +
             (C21507 + C21508) * C32918) *
                C32778 +
            ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
            C23260 * C17578) *
               C32832 * C476 -
           (((C21310 + C21311) * C32918 + C23747 * C33083) * C17578 +
            (C21857 * C32918 + C21858 * C33083) * C32786 +
            ((C21510 + C21509) * C32918 + (C21508 + C21507) * C33083) *
                C32778) *
               C32832 * C477) *
              C478 +
          (((C21856 * C33083 + C21474 * C32918) * C32778 +
            (C23258 * C33083 + (C21311 + C21310) * C32918) * C32786 +
            ((C20831 + C20830) * C33083 +
             (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
              C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
              C32960 * C1506) *
                 C32918) *
                C17578) *
               C32832 * C477 -
           (((C20830 + C20831) * C32918 + (C20461 + C20460) * C33083) * C17578 +
            (C23747 * C32918 + (C20459 + C20458) * C33083) * C32786 +
            (C21858 * C32918 + (C20457 + C20456) * C33083) * C32778) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[76] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33083 +
             (C21507 + C21508) * C32918) *
                C32778 +
            ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
            C23260 * C17578) *
               C598 -
           (((C23954 + C23955) * C32918 + (C21004 + C21005) * C33083) * C17578 +
            ((C22079 + C22080) * C32918 + (C21006 + C21007) * C33083) * C32786 +
            ((C22301 + C22302) * C32918 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C33083) *
                C32778) *
               C599) *
              C476 +
          ((((C22302 + C22301) * C33083 + (C22300 + C22299) * C32918) * C32778 +
            ((C22080 + C22079) * C33083 + (C22078 + C22077) * C32918) * C32786 +
            ((C23955 + C23954) * C33083 +
             (C20403 * C1174 - C20404 * C1165 - C20403 * C1175 +
              C20401 * C1192 + C20405 * C1190 - C20406 * C1173 -
              C20405 * C1191 + C32960 * C1200) *
                 C32918) *
                C17578) *
               C599 -
           (((C21310 + C21311) * C32918 + C23747 * C33083) * C17578 +
            (C21857 * C32918 + C21858 * C33083) * C32786 +
            ((C21510 + C21509) * C32918 + (C21508 + C21507) * C33083) *
                C32778) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[77] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33083 +
            (C21507 + C21508) * C32918) *
               C32778 +
           ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
           C23260 * C17578) *
              C32832 * C245 -
          (((C21310 + C21311) * C32918 + (C20832 + C20833) * C33083) * C17578 +
           (C21857 * C32918 + C21858 * C33083) * C32786 +
           ((C21510 + C21509) * C32918 + (C21508 + C21507) * C33083) * C32778) *
              C32832 * C246 +
          ((C21515 * C33083 + (C21514 + C21513) * C32918) * C32778 +
           (C21474 * C33083 + (C21512 + C21511) * C32918) * C32786 +
           ((C21311 + C21310) * C33083 +
            (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
             C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
             C32960 * C1698) *
                C32918) *
               C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33083 +
            (C21507 + C21508) * C32918) *
               C32778 +
           ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
           C23260 * C17578) *
              C32832 * C32818 * C110 -
          (((C20830 + C20831) * C32918 + (C20461 + C20460) * C33083) * C17578 +
           ((C20832 + C20833) * C32918 + (C20459 + C20458) * C33083) * C32786 +
           (C21858 * C32918 + (C20457 + C20456) * C33083) * C32778) *
              C32832 * C32818 * C111 +
          (C23260 * C32778 +
           (C20465 * C33083 + (C20831 + C20830) * C32918) * C32786 +
           ((C20463 + C20462) * C33083 +
            (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
             C20405 * C731 - C20406 * C722 - C20405 * C732 + C32960 * C737) *
                C32918) *
               C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33083 +
            (C21507 + C21508) * C32918) *
               C32778 +
           ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
           C23260 * C17578) *
              C351 -
          (((C20405 * C1188 - C20406 * C1172 - C20405 * C1189 + C32960 * C1199 +
             C20403 * C727 - C20404 * C720 - C20403 * C728 + C20401 * C735) *
                C32918 +
            (C21004 + C21005) * C33083) *
               C17578 +
           ((C22079 + C22080) * C32918 + (C21006 + C21007) * C33083) * C32786 +
           ((C22301 + C22302) * C32918 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C33083) *
               C32778) *
              C352 +
          (((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
             C20405 * C2128 - C20406 * C2120 - C20405 * C2129 +
             C32960 * C2138) *
                C33083 +
            (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
             C20405 * C2675 - C20406 * C2672 - C20405 * C2676 +
             C32960 * C2681) *
                C32918) *
               C32778 +
           ((C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
             C20405 * C2126 - C20406 * C2119 - C20405 * C2127 +
             C32960 * C2137) *
                C33083 +
            (C20403 * C1184 - C20404 * C1170 - C20403 * C1185 + C20401 * C1197 +
             C20405 * C2677 - C20406 * C2673 - C20405 * C2678 +
             C32960 * C2682) *
                C32918) *
               C32786 +
           ((C20403 * C378 - C20404 * C361 - C20403 * C379 + C20401 * C391 +
             C20405 * C2124 - C20406 * C2118 - C20405 * C2125 +
             C32960 * C2136) *
                C33083 +
            (C20403 * C1188 - C20404 * C1172 - C20403 * C1189 + C20401 * C1199 +
             C20405 * C2679 - C20406 * C2674 - C20405 * C2680 +
             C32960 * C2683) *
                C32918) *
               C17578) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[78] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33083 +
             (C21507 + C21508) * C32918) *
                C32778 +
            ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
            C23260 * C17578) *
               C598 -
           (((C23954 + C23955) * C32918 + (C21004 + C21005) * C33083) * C17578 +
            ((C22079 + C22080) * C32918 + (C21006 + C21007) * C33083) * C32786 +
            ((C22301 + C22302) * C32918 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C33083) *
                C32778) *
               C599) *
              C32818 * C478 +
          ((((C21007 + C21006) * C33083 + (C22080 + C22079) * C32918) * C32778 +
            ((C21005 + C21004) * C33083 + (C23955 + C23954) * C32918) * C32786 +
            ((C21003 + C21002) * C33083 +
             (C20403 * C729 - C20404 * C721 - C20403 * C730 + C20401 * C736 +
              C20405 * C2289 - C20406 * C2288 - C20405 * C2290 +
              C32960 * C2291) *
                 C32918) *
                C17578) *
               C599 -
           (((C20830 + C20831) * C32918 + (C20461 + C20460) * C33083) * C17578 +
            (C23747 * C32918 + (C20459 + C20458) * C33083) * C32786 +
            (C21858 * C32918 + (C20457 + C20456) * C33083) * C32778) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[79] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33083 +
            (C21507 + C21508) * C32918) *
               C32778 +
           ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
           C23260 * C17578) *
              C32832 * C32818 * C110 -
          (((C20830 + C20831) * C32918 + (C20461 + C20460) * C33083) * C17578 +
           ((C20832 + C20833) * C32918 + (C20459 + C20458) * C33083) * C32786 +
           (C21858 * C32918 + (C20457 + C20456) * C33083) * C32778) *
              C32832 * C32818 * C111 +
          (C23260 * C32778 +
           (C20465 * C33083 + (C20831 + C20830) * C32918) * C32786 +
           ((C20463 + C20462) * C33083 +
            (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
             C20405 * C731 - C20406 * C722 - C20405 * C732 + C32960 * C737) *
                C32918) *
               C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33083 +
            (C21507 + C21508) * C32918) *
               C32778 +
           ((C20456 + C20457) * C33083 + C21856 * C32918) * C32786 +
           C23260 * C17578) *
              C32832 * C245 -
          (((C21310 + C21311) * C32918 + (C20832 + C20833) * C33083) * C17578 +
           (C21857 * C32918 + C21858 * C33083) * C32786 +
           ((C21510 + C21509) * C32918 + (C21508 + C21507) * C33083) * C32778) *
              C32832 * C246 +
          ((C21515 * C33083 + (C21514 + C21513) * C32918) * C32778 +
           (C21474 * C33083 + (C21512 + C21511) * C32918) * C32786 +
           ((C21311 + C21310) * C33083 +
            (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
             C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
             C32960 * C1698) *
                C32918) *
               C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[80] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
              C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
              C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                 C33083 +
             (C25423 + C25424 + C25425) * C32918) *
                C15814 +
            ((C24323 + C24324 + C24325) * C33083 + C25774 * C32918) * C32783) *
               C32832 * C476 -
           (((C25426 + C25427 + C25428) * C32918 + C25775 * C33083) * C32783 +
            ((C25429 + C25430 + C25431) * C32918 +
             (C25425 + C25424 + C25423) * C33083) *
                C15814) *
               C32832 * C477) *
              C478 +
          (((C25774 * C33083 + (C25428 + C25427 + C25426) * C32918) * C15814 +
            ((C24739 + C24738 + C24737) * C33083 +
             (C31671 * C273 - C31710 * C256 - C31671 * C274 + C32956 * C286 +
              C31668 * C1174 - C31703 * C1165 - C31668 * C1175 +
              C32963 * C1192 + C31716 * C1190 - C24267 * C1173 -
              C31716 * C1191 + C24261 * C1200) *
                 C32918) *
                C32783) *
               C32832 * C477 -
           (((C24737 + C24738 + C24739) * C32918 +
             (C24328 + C24327 + C24326) * C33083) *
                C32783 +
            (C25775 * C32918 + (C24325 + C24324 + C24323) * C33083) * C15814) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[81] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
              C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
              C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                 C33083 +
             (C25423 + C25424 + C25425) * C32918) *
                C15814 +
            ((C24323 + C24324 + C24325) * C33083 + C25774 * C32918) * C32783) *
               C598 -
           (((C25988 + C25989 + C25990) * C32918 +
             (C24928 + C24929 + C24930) * C33083) *
                C32783 +
            ((C26203 + C26204 + C26205) * C32918 +
             (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 +
              C24261 * C2138 + C31668 * C374 - C31703 * C359 - C31668 * C375 +
              C32963 * C389 + C31671 * C372 - C31710 * C358 - C31671 * C373 +
              C32956 * C388) *
                 C33083) *
                C15814) *
               C599) *
              C476 +
          ((((C26205 + C26204 + C26203) * C33083 +
             (C31671 * C1178 - C31710 * C1167 - C31671 * C1179 +
              C32956 * C1194 + C31668 * C1182 - C31703 * C1169 -
              C31668 * C1183 + C32963 * C1196 + C31716 * C7062 -
              C24267 * C7059 - C31716 * C7063 + C24261 * C7068) *
                 C32918) *
                C15814 +
            ((C25990 + C25989 + C25988) * C33083 +
             (C31671 * C1176 - C31710 * C1166 - C31671 * C1177 +
              C32956 * C1193 + C31668 * C1186 - C31703 * C1171 -
              C31668 * C1187 + C32963 * C1198 + C31716 * C7389 -
              C24267 * C7388 - C31716 * C7390 + C24261 * C7391) *
                 C32918) *
                C32783) *
               C599 -
           (((C25426 + C25427 + C25428) * C32918 + C25775 * C33083) * C32783 +
            ((C25429 + C25430 + C25431) * C32918 +
             (C25425 + C25424 + C25423) * C33083) *
                C15814) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[82] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C33083 +
            (C25423 + C25424 + C25425) * C32918) *
               C15814 +
           ((C24323 + C24324 + C24325) * C33083 +
            (C24742 + C24741 + C24740) * C32918) *
               C32783) *
              C32832 * C245 -
          (((C25426 + C25427 + C25428) * C32918 +
            (C24740 + C24741 + C24742) * C33083) *
               C32783 +
           ((C25429 + C25430 + C25431) * C32918 +
            (C25425 + C25424 + C25423) * C33083) *
               C15814) *
              C32832 * C246 +
          (((C25431 + C25430 + C25429) * C33083 +
            (C31671 * C1006 - C31710 * C998 - C31671 * C1007 + C32956 * C1016 +
             C31668 * C1690 - C31703 * C1687 - C31668 * C1691 + C32963 * C1696 +
             C31716 * C6378 - C24267 * C6374 - C31716 * C6379 +
             C24261 * C6383) *
                C32918) *
               C15814 +
           ((C25428 + C25427 + C25426) * C33083 +
            (C31671 * C1004 - C31710 * C997 - C31671 * C1005 + C32956 * C1015 +
             C31668 * C1692 - C31703 * C1688 - C31668 * C1693 + C32963 * C1697 +
             C31716 * C7218 - C24267 * C7217 - C31716 * C7219 +
             C24261 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C33083 +
            (C31671 * C267 - C31710 * C253 - C31671 * C268 + C32956 * C283 +
             C31668 * C723 - C31703 * C718 - C31668 * C724 + C32963 * C733 +
             C31716 * C1180 - C24267 * C1168 - C31716 * C1181 +
             C24261 * C1195) *
                C32918) *
               C15814 +
           ((C24323 + C24324 + C24325) * C33083 +
            (C24742 + C24741 + C24740) * C32918) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C24737 + C24738 + C24739) * C32918 +
            (C24328 + C24327 + C24326) * C33083) *
               C32783 +
           ((C24740 + C24741 + C24742) * C32918 +
            (C24325 + C24324 + C24323) * C33083) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C24333 * C33083 + (C24739 + C24738 + C24737) * C32918) * C15814 +
           ((C24331 + C24330 + C24329) * C33083 +
            (C31671 * C261 - C31710 * C250 - C31671 * C262 + C32956 * C280 +
             C31668 * C729 - C31703 * C721 - C31668 * C730 + C32963 * C736 +
             C31716 * C2289 - C24267 * C2288 - C31716 * C2290 +
             C24261 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C33083 +
            (C25423 + C25424 + C25425) * C32918) *
               C15814 +
           ((C24323 + C24324 + C24325) * C33083 +
            (C24742 + C24741 + C24740) * C32918) *
               C32783) *
              C351 -
          (((C31716 * C2677 - C24267 * C2673 - C31716 * C2678 + C24261 * C2682 +
             C31668 * C1184 - C31703 * C1170 - C31668 * C1185 + C32963 * C1197 +
             C31671 * C725 - C31710 * C719 - C31671 * C726 + C32956 * C734) *
                C32918 +
            (C24928 + C24929 + C24930) * C33083) *
               C32783 +
           ((C31716 * C2675 - C24267 * C2672 - C31716 * C2676 + C24261 * C2681 +
             C31668 * C1180 - C31703 * C1168 - C31668 * C1181 + C32963 * C1195 +
             C31671 * C723 - C31710 * C718 - C31671 * C724 + C32956 * C733) *
                C32918 +
            (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
             C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
             C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
                C33083) *
               C15814) *
              C352 +
          (((C31671 * C374 - C31710 * C359 - C31671 * C375 + C32956 * C389 +
             C31668 * C2128 - C31703 * C2120 - C31668 * C2129 + C32963 * C2138 +
             C31716 * C2130 - C24267 * C2121 - C31716 * C2131 +
             C24261 * C2139) *
                C33083 +
            (C31671 * C1180 - C31710 * C1168 - C31671 * C1181 + C32956 * C1195 +
             C31668 * C2675 - C31703 * C2672 - C31668 * C2676 + C32963 * C2681 +
             C31716 * C7064 - C24267 * C7060 - C31716 * C7065 +
             C24261 * C7069) *
                C32918) *
               C15814 +
           ((C31671 * C376 - C31710 * C360 - C31671 * C377 + C32956 * C390 +
             C31668 * C2126 - C31703 * C2119 - C31668 * C2127 + C32963 * C2137 +
             C31716 * C2132 - C24267 * C2122 - C31716 * C2133 +
             C24261 * C2140) *
                C33083 +
            (C31671 * C1184 - C31710 * C1170 - C31671 * C1185 + C32956 * C1197 +
             C31668 * C2677 - C31703 * C2673 - C31668 * C2678 + C32963 * C2682 +
             C31716 * C12204 - C24267 * C12203 - C31716 * C12205 +
             C24261 * C12206) *
                C32918) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[83] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
              C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
              C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                 C33083 +
             (C25423 + C25424 + C25425) * C32918) *
                C15814 +
            ((C24323 + C24324 + C24325) * C33083 + C25774 * C32918) * C32783) *
               C598 -
           (((C25988 + C25989 + C25990) * C32918 +
             (C24928 + C24929 + C24930) * C33083) *
                C32783 +
            ((C31716 * C2675 - C24267 * C2672 - C31716 * C2676 +
              C24261 * C2681 + C31668 * C1180 - C31703 * C1168 -
              C31668 * C1181 + C32963 * C1195 + C31671 * C723 - C31710 * C718 -
              C31671 * C724 + C32956 * C733) *
                 C32918 +
             (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 +
              C24261 * C2138 + C31668 * C374 - C31703 * C359 - C31668 * C375 +
              C32963 * C389 + C31671 * C372 - C31710 * C358 - C31671 * C373 +
              C32956 * C388) *
                 C33083) *
                C15814) *
               C599) *
              C32818 * C478 +
          ((((C24930 + C24929 + C24928) * C33083 +
             (C25990 + C25989 + C25988) * C32918) *
                C15814 +
            ((C24927 + C24926 + C24925) * C33083 +
             (C31671 * C727 - C31710 * C720 - C31671 * C728 + C32956 * C735 +
              C31668 * C1188 - C31703 * C1172 - C31668 * C1189 +
              C32963 * C1199 + C31716 * C2679 - C24267 * C2674 -
              C31716 * C2680 + C24261 * C2683) *
                 C32918) *
                C32783) *
               C599 -
           (((C24737 + C24738 + C24739) * C32918 +
             (C24328 + C24327 + C24326) * C33083) *
                C32783 +
            (C25775 * C32918 + (C24325 + C24324 + C24323) * C33083) * C15814) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[84] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C33083 +
            (C31671 * C267 - C31710 * C253 - C31671 * C268 + C32956 * C283 +
             C31668 * C723 - C31703 * C718 - C31668 * C724 + C32963 * C733 +
             C31716 * C1180 - C24267 * C1168 - C31716 * C1181 +
             C24261 * C1195) *
                C32918) *
               C15814 +
           ((C24323 + C24324 + C24325) * C33083 +
            (C24742 + C24741 + C24740) * C32918) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C24737 + C24738 + C24739) * C32918 +
            (C24328 + C24327 + C24326) * C33083) *
               C32783 +
           ((C24740 + C24741 + C24742) * C32918 +
            (C24325 + C24324 + C24323) * C33083) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C24333 * C33083 + (C24739 + C24738 + C24737) * C32918) * C15814 +
           ((C24331 + C24330 + C24329) * C33083 +
            (C31671 * C261 - C31710 * C250 - C31671 * C262 + C32956 * C280 +
             C31668 * C729 - C31703 * C721 - C31668 * C730 + C32963 * C736 +
             C31716 * C2289 - C24267 * C2288 - C31716 * C2290 +
             C24261 * C2291) *
                C32918) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C33083 +
            (C25423 + C25424 + C25425) * C32918) *
               C15814 +
           ((C24323 + C24324 + C24325) * C33083 +
            (C24742 + C24741 + C24740) * C32918) *
               C32783) *
              C32832 * C245 -
          (((C25426 + C25427 + C25428) * C32918 +
            (C24740 + C24741 + C24742) * C33083) *
               C32783 +
           ((C25429 + C25430 + C25431) * C32918 +
            (C25425 + C25424 + C25423) * C33083) *
               C15814) *
              C32832 * C246 +
          (((C25431 + C25430 + C25429) * C33083 +
            (C31671 * C1006 - C31710 * C998 - C31671 * C1007 + C32956 * C1016 +
             C31668 * C1690 - C31703 * C1687 - C31668 * C1691 + C32963 * C1696 +
             C31716 * C6378 - C24267 * C6374 - C31716 * C6379 +
             C24261 * C6383) *
                C32918) *
               C15814 +
           ((C25428 + C25427 + C25426) * C33083 +
            (C31671 * C1004 - C31710 * C997 - C31671 * C1005 + C32956 * C1015 +
             C31668 * C1692 - C31703 * C1688 - C31668 * C1693 + C32963 * C1697 +
             C31716 * C7218 - C24267 * C7217 - C31716 * C7219 +
             C24261 * C7220) *
                C32918) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[85] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33147 +
             (C21507 + C21508) * C33135 + C21515 * C33115) *
                C15814 +
            ((C20456 + C20457) * C33147 + C21856 * C33135 + C21474 * C33115) *
                C32783) *
               C32832 * C476 -
           (((C21511 + C21512) * C33115 + C21857 * C33135 + C21858 * C33147) *
                C32783 +
            ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
             (C21508 + C21507) * C33147) *
                C15814) *
               C32832 * C477) *
              C478 +
          (((C21856 * C33147 + C21474 * C33135 + (C21512 + C21511) * C33115) *
                C15814 +
            ((C20833 + C20832) * C33147 + (C21311 + C21310) * C33135 +
             (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
              C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
              C32960 * C1698) *
                 C33115) *
                C32783) *
               C32832 * C477 -
           (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
             (C20459 + C20458) * C33147) *
                C32783 +
            (C21857 * C33115 + C21858 * C33135 + (C20457 + C20456) * C33147) *
                C15814) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32856 * C33153 +
            (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
            C20467 * C33084) *
               C32832 * C476 -
           ((C20830 + C20831) * C32856 * C33084 +
            (C20832 + C20833) * C32856 * C33133 +
            (C20834 + C20835) * C32856 * C33146 +
            (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
             C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
                C32856 * C33153) *
               C32832 * C477) *
              C478 +
          (((C20835 + C20834) * C32856 * C33153 +
            (C20833 + C20832) * C32856 * C33146 +
            (C20831 + C20830) * C32856 * C33133 +
            (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
             C20405 * C731 - C20406 * C722 - C20405 * C732 + C32960 * C737) *
                C32856 * C33084) *
               C32832 * C477 -
           ((C20462 + C20463) * C32856 * C33084 +
            (C20461 + C20460) * C32856 * C33133 +
            (C20459 + C20458) * C32856 * C33146 +
            (C20457 + C20456) * C32856 * C33153) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
             C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
             C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
             C22410 * C2128 - C22411 * C2120 - C22410 * C2129 +
             C33099 * C2138) *
                C32856 * C15814 +
            (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
               C32832 * C476 -
           ((C22819 + C22820 + C22821 + C22822) * C32856 * C32783 +
            (C22410 * C2675 - C22411 * C2672 - C22410 * C2676 + C33099 * C2681 +
             C22408 * C1180 - C22409 * C1168 - C22408 * C1181 + C33143 * C1195 +
             C22406 * C723 - C22407 * C718 - C22406 * C724 + C33152 * C733 +
             C22404 * C267 - C22405 * C253 - C22404 * C268 + C33155 * C283) *
                C32856 * C15814) *
               C32832 * C477) *
              C478 +
          (((C22822 + C22821 + C22820 + C22819) * C32856 * C15814 +
            (C22404 * C263 - C22405 * C251 - C22404 * C264 + C33155 * C281 +
             C22406 * C727 - C22407 * C720 - C22406 * C728 + C33152 * C735 +
             C22408 * C1188 - C22409 * C1172 - C22408 * C1189 + C33143 * C1199 +
             C22410 * C2679 - C22411 * C2674 - C22410 * C2680 +
             C33099 * C2683) *
                C32856 * C32783) *
               C32832 * C477 -
           ((C22465 + C22466 + C22467 + C22468) * C32856 * C32783 +
            (C22464 + C22463 + C22462 + C22461) * C32856 * C15814) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[86] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33147 +
             (C21507 + C21508) * C33135 + C21515 * C33115) *
                C15814 +
            ((C20456 + C20457) * C33147 + C21856 * C33135 + C21474 * C33115) *
                C32783) *
               C598 -
           (((C22077 + C22078) * C33115 + (C22079 + C22080) * C33135 +
             (C21006 + C21007) * C33147) *
                C32783 +
            ((C22299 + C22300) * C33115 + (C22301 + C22302) * C33135 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C33147) *
                C15814) *
               C599) *
              C476 +
          ((((C22302 + C22301) * C33147 + (C22300 + C22299) * C33135 +
             (C20403 * C1690 - C20404 * C1687 - C20403 * C1691 +
              C20401 * C1696 + C20405 * C6378 - C20406 * C6374 -
              C20405 * C6379 + C32960 * C6383) *
                 C33115) *
                C15814 +
            ((C22080 + C22079) * C33147 + (C22078 + C22077) * C33135 +
             (C20403 * C1692 - C20404 * C1688 - C20403 * C1693 +
              C20401 * C1697 + C20405 * C7218 - C20406 * C7217 -
              C20405 * C7219 + C32960 * C7220) *
                 C33115) *
                C32783) *
               C599 -
           (((C21511 + C21512) * C33115 + C21857 * C33135 + C21858 * C33147) *
                C32783 +
            ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
             (C21508 + C21507) * C33147) *
                C15814) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32856 * C33153 +
            (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
            C20467 * C33084) *
               C598 -
           ((C21002 + C21003) * C32856 * C33084 +
            (C21004 + C21005) * C32856 * C33133 +
            (C21006 + C21007) * C32856 * C33146 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C32856 * C33153) *
               C599) *
              C476 +
          (((C20403 * C723 - C20404 * C718 - C20403 * C724 + C20401 * C733 +
             C20405 * C1180 - C20406 * C1168 - C20405 * C1181 +
             C32960 * C1195) *
                C32856 * C33153 +
            (C20403 * C725 - C20404 * C719 - C20403 * C726 + C20401 * C734 +
             C20405 * C1184 - C20406 * C1170 - C20405 * C1185 +
             C32960 * C1197) *
                C32856 * C33146 +
            (C20403 * C727 - C20404 * C720 - C20403 * C728 + C20401 * C735 +
             C20405 * C1188 - C20406 * C1172 - C20405 * C1189 +
             C32960 * C1199) *
                C32856 * C33133 +
            (C20403 * C729 - C20404 * C721 - C20403 * C730 + C20401 * C736 +
             C20405 * C2289 - C20406 * C2288 - C20405 * C2290 +
             C32960 * C2291) *
                C32856 * C33084) *
               C599 -
           ((C20830 + C20831) * C32856 * C33084 +
            (C20832 + C20833) * C32856 * C33133 +
            (C20834 + C20835) * C32856 * C33146 +
            (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
             C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
                C32856 * C33153) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
             C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
             C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
             C22410 * C2128 - C22411 * C2120 - C22410 * C2129 +
             C33099 * C2138) *
                C32856 * C15814 +
            (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
               C598 -
           ((C22977 + C22978 + C22979 + C22980) * C32856 * C32783 +
            (C22410 * C2130 - C22411 * C2121 - C22410 * C2131 + C33099 * C2139 +
             C22408 * C2128 - C22409 * C2120 - C22408 * C2129 + C33143 * C2138 +
             C22406 * C374 - C22407 * C359 - C22406 * C375 + C33152 * C389 +
             C22404 * C372 - C22405 * C358 - C22404 * C373 + C33155 * C388) *
                C32856 * C15814) *
               C599) *
              C476 +
          (((C22404 * C723 - C22405 * C718 - C22404 * C724 + C33155 * C733 +
             C22406 * C1180 - C22407 * C1168 - C22406 * C1181 + C33152 * C1195 +
             C22408 * C2675 - C22409 * C2672 - C22408 * C2676 + C33143 * C2681 +
             C22410 * C7064 - C22411 * C7060 - C22410 * C7065 +
             C33099 * C7069) *
                C32856 * C15814 +
            (C22404 * C725 - C22405 * C719 - C22404 * C726 + C33155 * C734 +
             C22406 * C1184 - C22407 * C1170 - C22406 * C1185 + C33152 * C1197 +
             C22408 * C2677 - C22409 * C2673 - C22408 * C2678 + C33143 * C2682 +
             C22410 * C12204 - C22411 * C12203 - C22410 * C12205 +
             C33099 * C12206) *
                C32856 * C32783) *
               C599 -
           ((C22819 + C22820 + C22821 + C22822) * C32856 * C32783 +
            (C22410 * C2675 - C22411 * C2672 - C22410 * C2676 + C33099 * C2681 +
             C22408 * C1180 - C22409 * C1168 - C22408 * C1181 + C33143 * C1195 +
             C22406 * C723 - C22407 * C718 - C22406 * C724 + C33152 * C733 +
             C22404 * C267 - C22405 * C253 - C22404 * C268 + C33155 * C283) *
                C32856 * C15814) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
                C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                   C32856 * C33153 +
               (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
               C20467 * C33084) *
                  C32832 * C32818 * C110 -
              ((C20462 + C20463) * C32856 * C33084 +
               (C20461 + C20460) * C32856 * C33133 +
               (C20459 + C20458) * C32856 * C33146 +
               (C20457 + C20456) * C32856 * C33153) *
                  C32832 * C32818 * C111 +
              (C20466 * C33153 + C20467 * C33146 +
               (C20463 + C20462) * C32856 * C33133 +
               (C20403 * C132 - C20404 * C120 - C20403 * C133 + C20401 * C141 +
                C20405 * C601 - C20406 * C600 - C20405 * C602 + C32960 * C603) *
                   C32856 * C33084) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
                C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                   C32856 * C33153 +
               (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
               C20467 * C33084) *
                  C32832 * C245 -
              ((C20405 * C729 - C20406 * C721 - C20405 * C730 + C32960 * C736 +
                C20403 * C261 - C20404 * C250 - C20403 * C262 + C20401 * C280) *
                   C32856 * C33084 +
               (C20405 * C727 - C20406 * C720 - C20405 * C728 + C32960 * C735 +
                C20403 * C263 - C20404 * C251 - C20403 * C264 + C20401 * C281) *
                   C32856 * C33133 +
               (C20405 * C725 - C20406 * C719 - C20405 * C726 + C32960 * C734 +
                C20403 * C265 - C20404 * C252 - C20403 * C266 + C20401 * C282) *
                   C32856 * C33146 +
               (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
                C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
                   C32856 * C33153) *
                  C32832 * C246 +
              ((C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
                C20405 * C1178 - C20406 * C1167 - C20405 * C1179 +
                C32960 * C1194) *
                   C32856 * C33153 +
               (C20403 * C271 - C20404 * C255 - C20403 * C272 + C20401 * C285 +
                C20405 * C1176 - C20406 * C1166 - C20405 * C1177 +
                C32960 * C1193) *
                   C32856 * C33146 +
               (C20403 * C273 - C20404 * C256 - C20403 * C274 + C20401 * C286 +
                C20405 * C1174 - C20406 * C1165 - C20405 * C1175 +
                C32960 * C1192) *
                   C32856 * C33133 +
               (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
                C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
                C32960 * C1506) *
                   C32856 * C33084) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C351 -
          ((C20405 * C380 - C20406 * C362 - C20405 * C381 + C32960 * C392 +
            C20403 * C366 - C20404 * C355 - C20403 * C367 + C20401 * C385) *
               C32856 * C33084 +
           (C20405 * C378 - C20406 * C361 - C20405 * C379 + C32960 * C391 +
            C20403 * C368 - C20404 * C356 - C20403 * C369 + C20401 * C386) *
               C32856 * C33133 +
           (C20405 * C376 - C20406 * C360 - C20405 * C377 + C32960 * C390 +
            C20403 * C370 - C20404 * C357 - C20403 * C371 + C20401 * C387) *
               C32856 * C33146 +
           (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
            C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
               C32856 * C33153) *
              C352 +
          ((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
            C20405 * C2128 - C20406 * C2120 - C20405 * C2129 + C32960 * C2138) *
               C32856 * C33153 +
           (C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
            C20405 * C2126 - C20406 * C2119 - C20405 * C2127 + C32960 * C2137) *
               C32856 * C33146 +
           (C20403 * C378 - C20404 * C361 - C20403 * C379 + C20401 * C391 +
            C20405 * C2124 - C20406 * C2118 - C20405 * C2125 + C32960 * C2136) *
               C32856 * C33133 +
           (C20403 * C380 - C20404 * C362 - C20403 * C381 + C20401 * C392 +
            C20405 * C2481 - C20406 * C2480 - C20405 * C2482 + C32960 * C2483) *
               C32856 * C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283 +
             C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733) *
                C33135 +
            (C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
             C20405 * C1178 - C20406 * C1167 - C20405 * C1179 +
             C32960 * C1194) *
                C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            (C21308 + C21309) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
            (C20459 + C20458) * C33147) *
               C32783 +
           ((C21309 + C21308) * C33115 + (C20834 + C20835) * C33135 +
            (C20457 + C20456) * C33147) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C20464 * C33147 + (C20833 + C20832) * C33135 +
            (C21311 + C21310) * C33115) *
               C15814 +
           (C20465 * C33147 + (C20831 + C20830) * C33135 +
            (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
             C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
             C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C21507 + C21508) * C33135 + C21515 * C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            C21474 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C21511 + C21512) * C33115 + (C21309 + C21308) * C33135 +
            (C20834 + C20835) * C33147) *
               C32783 +
           ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
            (C21508 + C21507) * C33147) *
               C15814) *
              C32832 * C246 +
          ((C21515 * C33147 + (C21514 + C21513) * C33135 +
            (C20403 * C1008 - C20404 * C999 - C20403 * C1009 + C20401 * C1017 +
             C20405 * C6376 - C20406 * C6373 - C20405 * C6377 +
             C32960 * C6382) *
                C33115) *
               C15814 +
           (C21474 * C33147 + (C21512 + C21511) * C33135 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C21507 + C21508) * C33135 + C21515 * C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            C21474 * C33115) *
               C32783) *
              C351 -
          (((C20405 * C1186 - C20406 * C1171 - C20405 * C1187 + C32960 * C1198 +
             C20403 * C1176 - C20404 * C1166 - C20403 * C1177 +
             C20401 * C1193) *
                C33115 +
            (C20405 * C1184 - C20406 * C1170 - C20405 * C1185 + C32960 * C1197 +
             C20403 * C725 - C20404 * C719 - C20403 * C726 + C20401 * C734) *
                C33135 +
            (C21006 + C21007) * C33147) *
               C32783 +
           ((C20405 * C1182 - C20406 * C1169 - C20405 * C1183 + C32960 * C1196 +
             C20403 * C1178 - C20404 * C1167 - C20403 * C1179 +
             C20401 * C1194) *
                C33115 +
            (C20405 * C1180 - C20406 * C1168 - C20405 * C1181 + C32960 * C1195 +
             C20403 * C723 - C20404 * C718 - C20403 * C724 + C20401 * C733) *
                C33135 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C33147) *
               C15814) *
              C352 +
          (((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
             C20405 * C2128 - C20406 * C2120 - C20405 * C2129 +
             C32960 * C2138) *
                C33147 +
            (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
             C20405 * C2675 - C20406 * C2672 - C20405 * C2676 +
             C32960 * C2681) *
                C33135 +
            (C20403 * C1182 - C20404 * C1169 - C20403 * C1183 + C20401 * C1196 +
             C20405 * C7062 - C20406 * C7059 - C20405 * C7063 +
             C32960 * C7068) *
                C33115) *
               C15814 +
           ((C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
             C20405 * C2126 - C20406 * C2119 - C20405 * C2127 +
             C32960 * C2137) *
                C33147 +
            (C20403 * C1184 - C20404 * C1170 - C20403 * C1185 + C20401 * C1197 +
             C20405 * C2677 - C20406 * C2673 - C20405 * C2678 +
             C32960 * C2682) *
                C33135 +
            (C20403 * C1186 - C20404 * C1171 - C20403 * C1187 + C20401 * C1198 +
             C20405 * C7389 - C20406 * C7388 - C20405 * C7390 +
             C32960 * C7391) *
                C33115) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C32856 * C15814 +
           (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
              C32832 * C32818 * C110 -
          ((C22465 + C22466 + C22467 + C22468) * C32856 * C32783 +
           (C22464 + C22463 + C22462 + C22461) * C32856 * C15814) *
              C32832 * C32818 * C111 +
          ((C22468 + C22467 + C22466 + C22465) * C32856 * C15814 +
           (C22404 * C128 - C22405 * C118 - C22404 * C129 + C33155 * C139 +
            C22406 * C366 - C22407 * C355 - C22406 * C367 + C33152 * C385 +
            C22408 * C380 - C22409 * C362 - C22408 * C381 + C33143 * C392 +
            C22410 * C2481 - C22411 * C2480 - C22410 * C2482 + C33099 * C2483) *
               C32856 * C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C32856 * C15814 +
           (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
              C32832 * C245 -
          ((C22410 * C2677 - C22411 * C2673 - C22410 * C2678 + C33099 * C2682 +
            C22408 * C1184 - C22409 * C1170 - C22408 * C1185 + C33143 * C1197 +
            C22406 * C725 - C22407 * C719 - C22406 * C726 + C33152 * C734 +
            C22404 * C265 - C22405 * C252 - C22404 * C266 + C33155 * C282) *
               C32856 * C32783 +
           (C22410 * C2675 - C22411 * C2672 - C22410 * C2676 + C33099 * C2681 +
            C22408 * C1180 - C22409 * C1168 - C22408 * C1181 + C33143 * C1195 +
            C22406 * C723 - C22407 * C718 - C22406 * C724 + C33152 * C733 +
            C22404 * C267 - C22405 * C253 - C22404 * C268 + C33155 * C283) *
               C32856 * C15814) *
              C32832 * C246 +
          ((C22404 * C269 - C22405 * C254 - C22404 * C270 + C33155 * C284 +
            C22406 * C1178 - C22407 * C1167 - C22406 * C1179 + C33152 * C1194 +
            C22408 * C1182 - C22409 * C1169 - C22408 * C1183 + C33143 * C1196 +
            C22410 * C7062 - C22411 * C7059 - C22410 * C7063 + C33099 * C7068) *
               C32856 * C15814 +
           (C22404 * C271 - C22405 * C255 - C22404 * C272 + C33155 * C285 +
            C22406 * C1176 - C22407 * C1166 - C22406 * C1177 + C33152 * C1193 +
            C22408 * C1186 - C22409 * C1171 - C22408 * C1187 + C33143 * C1198 +
            C22410 * C7389 - C22411 * C7388 - C22410 * C7390 + C33099 * C7391) *
               C32856 * C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C32856 * C15814 +
           (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
              C351 -
          ((C22410 * C2132 - C22411 * C2122 - C22410 * C2133 + C33099 * C2140 +
            C22408 * C2126 - C22409 * C2119 - C22408 * C2127 + C33143 * C2137 +
            C22406 * C376 - C22407 * C360 - C22406 * C377 + C33152 * C390 +
            C22404 * C370 - C22405 * C357 - C22404 * C371 + C33155 * C387) *
               C32856 * C32783 +
           (C22410 * C2130 - C22411 * C2121 - C22410 * C2131 + C33099 * C2139 +
            C22408 * C2128 - C22409 * C2120 - C22408 * C2129 + C33143 * C2138 +
            C22406 * C374 - C22407 * C359 - C22406 * C375 + C33152 * C389 +
            C22404 * C372 - C22405 * C358 - C22404 * C373 + C33155 * C388) *
               C32856 * C15814) *
              C352 +
          ((C22404 * C374 - C22405 * C359 - C22404 * C375 + C33155 * C389 +
            C22406 * C2128 - C22407 * C2120 - C22406 * C2129 + C33152 * C2138 +
            C22408 * C2130 - C22409 * C2121 - C22408 * C2131 + C33143 * C2139 +
            C22410 * C12115 - C22411 * C12113 - C22410 * C12116 +
            C33099 * C12119) *
               C32856 * C15814 +
           (C22404 * C376 - C22405 * C360 - C22404 * C377 + C33155 * C390 +
            C22406 * C2126 - C22407 * C2119 - C22406 * C2127 + C33152 * C2137 +
            C22408 * C2132 - C22409 * C2122 - C22408 * C2133 + C33143 * C2140 +
            C22410 * C12290 - C22411 * C12289 - C22410 * C12291 +
            C33099 * C12292) *
               C32856 * C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[88] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33147 +
             (C21507 + C21508) * C33135 + C21515 * C33115) *
                C15814 +
            ((C20456 + C20457) * C33147 + C21856 * C33135 + C21474 * C33115) *
                C32783) *
               C598 -
           (((C22077 + C22078) * C33115 + (C22079 + C22080) * C33135 +
             (C21006 + C21007) * C33147) *
                C32783 +
            ((C20405 * C1182 - C20406 * C1169 - C20405 * C1183 +
              C32960 * C1196 + C20403 * C1178 - C20404 * C1167 -
              C20403 * C1179 + C20401 * C1194) *
                 C33115 +
             (C20405 * C1180 - C20406 * C1168 - C20405 * C1181 +
              C32960 * C1195 + C20403 * C723 - C20404 * C718 - C20403 * C724 +
              C20401 * C733) *
                 C33135 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C33147) *
                C15814) *
               C599) *
              C32818 * C478 +
          ((((C21007 + C21006) * C33147 + (C22080 + C22079) * C33135 +
             (C22078 + C22077) * C33115) *
                C15814 +
            ((C21005 + C21004) * C33147 +
             (C20403 * C727 - C20404 * C720 - C20403 * C728 + C20401 * C735 +
              C20405 * C1188 - C20406 * C1172 - C20405 * C1189 +
              C32960 * C1199) *
                 C33135 +
             (C20403 * C1174 - C20404 * C1165 - C20403 * C1175 +
              C20401 * C1192 + C20405 * C1190 - C20406 * C1173 -
              C20405 * C1191 + C32960 * C1200) *
                 C33115) *
                C32783) *
               C599 -
           (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
             (C20459 + C20458) * C33147) *
                C32783 +
            (C21857 * C33115 + C21858 * C33135 + (C20457 + C20456) * C33147) *
                C15814) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32856 * C33153 +
            (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
            C20467 * C33084) *
               C598 -
           ((C21002 + C21003) * C32856 * C33084 +
            (C21004 + C21005) * C32856 * C33133 +
            (C21006 + C21007) * C32856 * C33146 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C32856 * C33153) *
               C599) *
              C32818 * C478 +
          (((C21007 + C21006) * C32856 * C33153 +
            (C21005 + C21004) * C32856 * C33146 +
            (C21003 + C21002) * C32856 * C33133 +
            (C20403 * C364 - C20404 * C354 - C20403 * C365 + C20401 * C384 +
             C20405 * C382 - C20406 * C363 - C20405 * C383 + C32960 * C393) *
                C32856 * C33084) *
               C599 -
           ((C20462 + C20463) * C32856 * C33084 +
            (C20461 + C20460) * C32856 * C33133 +
            (C20459 + C20458) * C32856 * C33146 +
            (C20457 + C20456) * C32856 * C33153) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
             C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
             C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
             C22410 * C2128 - C22411 * C2120 - C22410 * C2129 +
             C33099 * C2138) *
                C32856 * C15814 +
            (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
               C598 -
           ((C22977 + C22978 + C22979 + C22980) * C32856 * C32783 +
            (C22410 * C2130 - C22411 * C2121 - C22410 * C2131 + C33099 * C2139 +
             C22408 * C2128 - C22409 * C2120 - C22408 * C2129 + C33143 * C2138 +
             C22406 * C374 - C22407 * C359 - C22406 * C375 + C33152 * C389 +
             C22404 * C372 - C22405 * C358 - C22404 * C373 + C33155 * C388) *
                C32856 * C15814) *
               C599) *
              C32818 * C478 +
          (((C22980 + C22979 + C22978 + C22977) * C32856 * C15814 +
            (C22404 * C368 - C22405 * C356 - C22404 * C369 + C33155 * C386 +
             C22406 * C378 - C22407 * C361 - C22406 * C379 + C33152 * C391 +
             C22408 * C2124 - C22409 * C2118 - C22408 * C2125 + C33143 * C2136 +
             C22410 * C2134 - C22411 * C2123 - C22410 * C2135 +
             C33099 * C2141) *
                C32856 * C32783) *
               C599 -
           ((C22465 + C22466 + C22467 + C22468) * C32856 * C32783 +
            (C22464 + C22463 + C22462 + C22461) * C32856 * C15814) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[89] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C32832 * C245 -
          ((C20405 * C729 - C20406 * C721 - C20405 * C730 + C32960 * C736 +
            C20403 * C261 - C20404 * C250 - C20403 * C262 + C20401 * C280) *
               C32856 * C33084 +
           (C20405 * C727 - C20406 * C720 - C20405 * C728 + C32960 * C735 +
            C20403 * C263 - C20404 * C251 - C20403 * C264 + C20401 * C281) *
               C32856 * C33133 +
           (C20405 * C725 - C20406 * C719 - C20405 * C726 + C32960 * C734 +
            C20403 * C265 - C20404 * C252 - C20403 * C266 + C20401 * C282) *
               C32856 * C33146 +
           (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
            C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
               C32856 * C33153) *
              C32832 * C246 +
          ((C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
            C20405 * C1178 - C20406 * C1167 - C20405 * C1179 + C32960 * C1194) *
               C32856 * C33153 +
           (C20403 * C271 - C20404 * C255 - C20403 * C272 + C20401 * C285 +
            C20405 * C1176 - C20406 * C1166 - C20405 * C1177 + C32960 * C1193) *
               C32856 * C33146 +
           (C20403 * C273 - C20404 * C256 - C20403 * C274 + C20401 * C286 +
            C20405 * C1174 - C20406 * C1165 - C20405 * C1175 + C32960 * C1192) *
               C32856 * C33133 +
           (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
            C20405 * C1504 - C20406 * C1503 - C20405 * C1505 + C32960 * C1506) *
               C32856 * C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C32832 * C32818 * C110 -
          ((C20462 + C20463) * C32856 * C33084 +
           (C20461 + C20460) * C32856 * C33133 +
           (C20459 + C20458) * C32856 * C33146 +
           (C20457 + C20456) * C32856 * C33153) *
              C32832 * C32818 * C111 +
          (C20466 * C33153 + C20467 * C33146 +
           (C20463 + C20462) * C32856 * C33133 +
           (C20403 * C132 - C20404 * C120 - C20403 * C133 + C20401 * C141 +
            C20405 * C601 - C20406 * C600 - C20405 * C602 + C32960 * C603) *
               C32856 * C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283 +
             C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733) *
                C33135 +
            (C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
             C20405 * C1178 - C20406 * C1167 - C20405 * C1179 +
             C32960 * C1194) *
                C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            (C21308 + C21309) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
            (C20459 + C20458) * C33147) *
               C32783 +
           ((C21309 + C21308) * C33115 + (C20834 + C20835) * C33135 +
            (C20457 + C20456) * C33147) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C20464 * C33147 + (C20833 + C20832) * C33135 +
            (C21311 + C21310) * C33115) *
               C15814 +
           (C20465 * C33147 + (C20831 + C20830) * C33135 +
            (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
             C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
             C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C21507 + C21508) * C33135 + C21515 * C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            C21474 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C21511 + C21512) * C33115 + (C21309 + C21308) * C33135 +
            (C20834 + C20835) * C33147) *
               C32783 +
           ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
            (C21508 + C21507) * C33147) *
               C15814) *
              C32832 * C246 +
          ((C21515 * C33147 + (C21514 + C21513) * C33135 +
            (C20403 * C1008 - C20404 * C999 - C20403 * C1009 + C20401 * C1017 +
             C20405 * C6376 - C20406 * C6373 - C20405 * C6377 +
             C32960 * C6382) *
                C33115) *
               C15814 +
           (C21474 * C33147 + (C21512 + C21511) * C33135 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C32856 * C15814 +
           (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
              C32832 * C32818 * C110 -
          ((C22465 + C22466 + C22467 + C22468) * C32856 * C32783 +
           (C22464 + C22463 + C22462 + C22461) * C32856 * C15814) *
              C32832 * C32818 * C111 +
          ((C22468 + C22467 + C22466 + C22465) * C32856 * C15814 +
           (C22404 * C128 - C22405 * C118 - C22404 * C129 + C33155 * C139 +
            C22406 * C366 - C22407 * C355 - C22406 * C367 + C33152 * C385 +
            C22408 * C380 - C22409 * C362 - C22408 * C381 + C33143 * C392 +
            C22410 * C2481 - C22411 * C2480 - C22410 * C2482 + C33099 * C2483) *
               C32856 * C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22404 * C122 - C22405 * C115 - C22404 * C123 + C33155 * C136 +
            C22406 * C372 - C22407 * C358 - C22406 * C373 + C33152 * C388 +
            C22408 * C374 - C22409 * C359 - C22408 * C375 + C33143 * C389 +
            C22410 * C2128 - C22411 * C2120 - C22410 * C2129 + C33099 * C2138) *
               C32856 * C15814 +
           (C22461 + C22462 + C22463 + C22464) * C32856 * C32783) *
              C32832 * C245 -
          ((C22410 * C2677 - C22411 * C2673 - C22410 * C2678 + C33099 * C2682 +
            C22408 * C1184 - C22409 * C1170 - C22408 * C1185 + C33143 * C1197 +
            C22406 * C725 - C22407 * C719 - C22406 * C726 + C33152 * C734 +
            C22404 * C265 - C22405 * C252 - C22404 * C266 + C33155 * C282) *
               C32856 * C32783 +
           (C22410 * C2675 - C22411 * C2672 - C22410 * C2676 + C33099 * C2681 +
            C22408 * C1180 - C22409 * C1168 - C22408 * C1181 + C33143 * C1195 +
            C22406 * C723 - C22407 * C718 - C22406 * C724 + C33152 * C733 +
            C22404 * C267 - C22405 * C253 - C22404 * C268 + C33155 * C283) *
               C32856 * C15814) *
              C32832 * C246 +
          ((C22404 * C269 - C22405 * C254 - C22404 * C270 + C33155 * C284 +
            C22406 * C1178 - C22407 * C1167 - C22406 * C1179 + C33152 * C1194 +
            C22408 * C1182 - C22409 * C1169 - C22408 * C1183 + C33143 * C1196 +
            C22410 * C7062 - C22411 * C7059 - C22410 * C7063 + C33099 * C7068) *
               C32856 * C15814 +
           (C22404 * C271 - C22405 * C255 - C22404 * C272 + C33155 * C285 +
            C22406 * C1176 - C22407 * C1166 - C22406 * C1177 + C33152 * C1193 +
            C22408 * C1186 - C22409 * C1171 - C22408 * C1187 + C33143 * C1198 +
            C22410 * C7389 - C22411 * C7388 - C22410 * C7390 + C33099 * C7391) *
               C32856 * C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[90] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C32856 * C32778 +
            (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
               C32832 * C476 -
           ((C24737 + C24738 + C24739) * C32856 * C17578 +
            (C24740 + C24741 + C24742) * C32856 * C32786 +
            (C31716 * C1180 - C24267 * C1168 - C31716 * C1181 + C24261 * C1195 +
             C31668 * C723 - C31703 * C718 - C31668 * C724 + C32963 * C733 +
             C31671 * C267 - C31710 * C253 - C31671 * C268 + C32956 * C283) *
                C32856 * C32778) *
               C32832 * C477) *
              C478 +
          (((C24742 + C24741 + C24740) * C32856 * C32778 +
            (C24739 + C24738 + C24737) * C32856 * C32786 +
            (C31671 * C261 - C31710 * C250 - C31671 * C262 + C32956 * C280 +
             C31668 * C729 - C31703 * C721 - C31668 * C730 + C32963 * C736 +
             C31716 * C2289 - C24267 * C2288 - C31716 * C2290 +
             C24261 * C2291) *
                C32856 * C17578) *
               C32832 * C477 -
           ((C24329 + C24330 + C24331) * C32856 * C17578 +
            (C24328 + C24327 + C24326) * C32856 * C32786 +
            (C24325 + C24324 + C24323) * C32856 * C32778) *
               C32832 * C476) *
              C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[91] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C32856 * C32778 +
            (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
               C598 -
           ((C24925 + C24926 + C24927) * C32856 * C17578 +
            (C24928 + C24929 + C24930) * C32856 * C32786 +
            (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
             C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
             C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
                C32856 * C32778) *
               C599) *
              C476 +
          (((C31671 * C723 - C31710 * C718 - C31671 * C724 + C32956 * C733 +
             C31668 * C1180 - C31703 * C1168 - C31668 * C1181 + C32963 * C1195 +
             C31716 * C2675 - C24267 * C2672 - C31716 * C2676 +
             C24261 * C2681) *
                C32856 * C32778 +
            (C31671 * C725 - C31710 * C719 - C31671 * C726 + C32956 * C734 +
             C31668 * C1184 - C31703 * C1170 - C31668 * C1185 + C32963 * C1197 +
             C31716 * C2677 - C24267 * C2673 - C31716 * C2678 +
             C24261 * C2682) *
                C32856 * C32786 +
            (C31671 * C727 - C31710 * C720 - C31671 * C728 + C32956 * C735 +
             C31668 * C1188 - C31703 * C1172 - C31668 * C1189 + C32963 * C1199 +
             C31716 * C2679 - C24267 * C2674 - C31716 * C2680 +
             C24261 * C2683) *
                C32856 * C17578) *
               C599 -
           ((C24737 + C24738 + C24739) * C32856 * C17578 +
            (C24740 + C24741 + C24742) * C32856 * C32786 +
            (C31716 * C1180 - C24267 * C1168 - C31716 * C1181 + C24261 * C1195 +
             C31668 * C723 - C31703 * C718 - C31668 * C724 + C32963 * C733 +
             C31671 * C267 - C31710 * C253 - C31671 * C268 + C32956 * C283) *
                C32856 * C32778) *
               C598) *
              C477) *
         C32806) /
        (p * q * std::sqrt(p + q));
    d2ee[92] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32856 * C32778 +
           (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
              C32832 * C245 -
          ((C31716 * C1188 - C24267 * C1172 - C31716 * C1189 + C24261 * C1199 +
            C31668 * C727 - C31703 * C720 - C31668 * C728 + C32963 * C735 +
            C31671 * C263 - C31710 * C251 - C31671 * C264 + C32956 * C281) *
               C32856 * C17578 +
           (C31716 * C1184 - C24267 * C1170 - C31716 * C1185 + C24261 * C1197 +
            C31668 * C725 - C31703 * C719 - C31668 * C726 + C32963 * C734 +
            C31671 * C265 - C31710 * C252 - C31671 * C266 + C32956 * C282) *
               C32856 * C32786 +
           (C31716 * C1180 - C24267 * C1168 - C31716 * C1181 + C24261 * C1195 +
            C31668 * C723 - C31703 * C718 - C31668 * C724 + C32963 * C733 +
            C31671 * C267 - C31710 * C253 - C31671 * C268 + C32956 * C283) *
               C32856 * C32778) *
              C32832 * C246 +
          ((C31671 * C269 - C31710 * C254 - C31671 * C270 + C32956 * C284 +
            C31668 * C1178 - C31703 * C1167 - C31668 * C1179 + C32963 * C1194 +
            C31716 * C1182 - C24267 * C1169 - C31716 * C1183 + C24261 * C1196) *
               C32856 * C32778 +
           (C31671 * C271 - C31710 * C255 - C31671 * C272 + C32956 * C285 +
            C31668 * C1176 - C31703 * C1166 - C31668 * C1177 + C32963 * C1193 +
            C31716 * C1186 - C24267 * C1171 - C31716 * C1187 + C24261 * C1198) *
               C32856 * C32786 +
           (C31671 * C273 - C31710 * C256 - C31671 * C274 + C32956 * C286 +
            C31668 * C1174 - C31703 * C1165 - C31668 * C1175 + C32963 * C1192 +
            C31716 * C1190 - C24267 * C1173 - C31716 * C1191 + C24261 * C1200) *
               C32856 * C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32856 * C32778 +
           (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
              C32832 * C32818 * C110 -
          ((C24329 + C24330 + C24331) * C32856 * C17578 +
           (C24328 + C24327 + C24326) * C32856 * C32786 +
           (C24325 + C24324 + C24323) * C32856 * C32778) *
              C32832 * C32818 * C111 +
          (C24334 * C32778 + (C24331 + C24330 + C24329) * C32856 * C32786 +
           (C31671 * C130 - C31710 * C119 - C31671 * C131 + C32956 * C140 +
            C31668 * C364 - C31703 * C354 - C31668 * C365 + C32963 * C384 +
            C31716 * C382 - C24267 * C363 - C31716 * C383 + C24261 * C393) *
               C32856 * C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32856 * C32778 +
           (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
              C351 -
          ((C31716 * C2124 - C24267 * C2118 - C31716 * C2125 + C24261 * C2136 +
            C31668 * C378 - C31703 * C361 - C31668 * C379 + C32963 * C391 +
            C31671 * C368 - C31710 * C356 - C31671 * C369 + C32956 * C386) *
               C32856 * C17578 +
           (C31716 * C2126 - C24267 * C2119 - C31716 * C2127 + C24261 * C2137 +
            C31668 * C376 - C31703 * C360 - C31668 * C377 + C32963 * C390 +
            C31671 * C370 - C31710 * C357 - C31671 * C371 + C32956 * C387) *
               C32856 * C32786 +
           (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
            C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
            C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
               C32856 * C32778) *
              C352 +
          ((C31671 * C374 - C31710 * C359 - C31671 * C375 + C32956 * C389 +
            C31668 * C2128 - C31703 * C2120 - C31668 * C2129 + C32963 * C2138 +
            C31716 * C2130 - C24267 * C2121 - C31716 * C2131 + C24261 * C2139) *
               C32856 * C32778 +
           (C31671 * C376 - C31710 * C360 - C31671 * C377 + C32956 * C390 +
            C31668 * C2126 - C31703 * C2119 - C31668 * C2127 + C32963 * C2137 +
            C31716 * C2132 - C24267 * C2122 - C31716 * C2133 + C24261 * C2140) *
               C32856 * C32786 +
           (C31671 * C378 - C31710 * C361 - C31671 * C379 + C32956 * C391 +
            C31668 * C2124 - C31703 * C2118 - C31668 * C2125 + C32963 * C2136 +
            C31716 * C2134 - C24267 * C2123 - C31716 * C2135 + C24261 * C2141) *
               C32856 * C17578) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[93] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
             C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
             C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
                C32856 * C32778 +
            (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
               C598 -
           ((C24925 + C24926 + C24927) * C32856 * C17578 +
            (C24928 + C24929 + C24930) * C32856 * C32786 +
            (C31716 * C2128 - C24267 * C2120 - C31716 * C2129 + C24261 * C2138 +
             C31668 * C374 - C31703 * C359 - C31668 * C375 + C32963 * C389 +
             C31671 * C372 - C31710 * C358 - C31671 * C373 + C32956 * C388) *
                C32856 * C32778) *
               C599) *
              C32818 * C478 +
          (((C24930 + C24929 + C24928) * C32856 * C32778 +
            (C24927 + C24926 + C24925) * C32856 * C32786 +
            (C31671 * C366 - C31710 * C355 - C31671 * C367 + C32956 * C385 +
             C31668 * C380 - C31703 * C362 - C31668 * C381 + C32963 * C392 +
             C31716 * C2481 - C24267 * C2480 - C31716 * C2482 +
             C24261 * C2483) *
                C32856 * C17578) *
               C599 -
           ((C24329 + C24330 + C24331) * C32856 * C17578 +
            (C24328 + C24327 + C24326) * C32856 * C32786 +
            (C24325 + C24324 + C24323) * C32856 * C32778) *
               C598) *
              C32818 * C479)) /
        (p * q * std::sqrt(p + q));
    d2ee[94] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32856 * C32778 +
           (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
              C32832 * C32818 * C110 -
          ((C24329 + C24330 + C24331) * C32856 * C17578 +
           (C24328 + C24327 + C24326) * C32856 * C32786 +
           (C24325 + C24324 + C24323) * C32856 * C32778) *
              C32832 * C32818 * C111 +
          (C24334 * C32778 + (C24331 + C24330 + C24329) * C32856 * C32786 +
           (C31671 * C130 - C31710 * C119 - C31671 * C131 + C32956 * C140 +
            C31668 * C364 - C31703 * C354 - C31668 * C365 + C32963 * C384 +
            C31716 * C382 - C24267 * C363 - C31716 * C383 + C24261 * C393) *
               C32856 * C17578) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31671 * C122 - C31710 * C115 - C31671 * C123 + C32956 * C136 +
            C31668 * C372 - C31703 * C358 - C31668 * C373 + C32963 * C388 +
            C31716 * C374 - C24267 * C359 - C31716 * C375 + C24261 * C389) *
               C32856 * C32778 +
           (C24323 + C24324 + C24325) * C32856 * C32786 + C24334 * C17578) *
              C32832 * C245 -
          ((C31716 * C1188 - C24267 * C1172 - C31716 * C1189 + C24261 * C1199 +
            C31668 * C727 - C31703 * C720 - C31668 * C728 + C32963 * C735 +
            C31671 * C263 - C31710 * C251 - C31671 * C264 + C32956 * C281) *
               C32856 * C17578 +
           (C31716 * C1184 - C24267 * C1170 - C31716 * C1185 + C24261 * C1197 +
            C31668 * C725 - C31703 * C719 - C31668 * C726 + C32963 * C734 +
            C31671 * C265 - C31710 * C252 - C31671 * C266 + C32956 * C282) *
               C32856 * C32786 +
           (C31716 * C1180 - C24267 * C1168 - C31716 * C1181 + C24261 * C1195 +
            C31668 * C723 - C31703 * C718 - C31668 * C724 + C32963 * C733 +
            C31671 * C267 - C31710 * C253 - C31671 * C268 + C32956 * C283) *
               C32856 * C32778) *
              C32832 * C246 +
          ((C31671 * C269 - C31710 * C254 - C31671 * C270 + C32956 * C284 +
            C31668 * C1178 - C31703 * C1167 - C31668 * C1179 + C32963 * C1194 +
            C31716 * C1182 - C24267 * C1169 - C31716 * C1183 + C24261 * C1196) *
               C32856 * C32778 +
           (C31671 * C271 - C31710 * C255 - C31671 * C272 + C32956 * C285 +
            C31668 * C1176 - C31703 * C1166 - C31668 * C1177 + C32963 * C1193 +
            C31716 * C1186 - C24267 * C1171 - C31716 * C1187 + C24261 * C1198) *
               C32856 * C32786 +
           (C31671 * C273 - C31710 * C256 - C31671 * C274 + C32956 * C286 +
            C31668 * C1174 - C31703 * C1165 - C31668 * C1175 + C32963 * C1192 +
            C31716 * C1190 - C24267 * C1173 - C31716 * C1191 + C24261 * C1200) *
               C32856 * C17578) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[95] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32856 * C33153 +
            (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
            C20467 * C33084) *
               C32832 * C476 -
           ((C20830 + C20831) * C32856 * C33084 +
            (C20832 + C20833) * C32856 * C33133 +
            (C20834 + C20835) * C32856 * C33146 +
            (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
             C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
                C32856 * C33153) *
               C32832 * C477) *
              C478 +
          (((C20835 + C20834) * C32856 * C33153 +
            (C20833 + C20832) * C32856 * C33146 +
            (C20831 + C20830) * C32856 * C33133 +
            (C20403 * C259 - C20404 * C249 - C20403 * C260 + C20401 * C279 +
             C20405 * C731 - C20406 * C722 - C20405 * C732 + C32960 * C737) *
                C32856 * C33084) *
               C32832 * C477 -
           ((C20462 + C20463) * C32856 * C33084 +
            (C20461 + C20460) * C32856 * C33133 +
            (C20459 + C20458) * C32856 * C33146 +
            (C20457 + C20456) * C32856 * C33153) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33147 +
             (C21507 + C21508) * C33135 + C21515 * C33115) *
                C15814 +
            ((C20456 + C20457) * C33147 + C21856 * C33135 + C21474 * C33115) *
                C32783) *
               C32832 * C476 -
           (((C21511 + C21512) * C33115 + C21857 * C33135 + C21858 * C33147) *
                C32783 +
            ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
             (C21508 + C21507) * C33147) *
                C15814) *
               C32832 * C477) *
              C478 +
          (((C21856 * C33147 + C21474 * C33135 + (C21512 + C21511) * C33115) *
                C15814 +
            ((C20833 + C20832) * C33147 + (C21311 + C21310) * C33135 +
             (C20403 * C1002 - C20404 * C996 - C20403 * C1003 + C20401 * C1014 +
              C20405 * C1694 - C20406 * C1689 - C20405 * C1695 +
              C32960 * C1698) *
                 C33115) *
                C32783) *
               C32832 * C477 -
           (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
             (C20459 + C20458) * C33147) *
                C32783 +
            (C21857 * C33115 + C21858 * C33135 + (C20457 + C20456) * C33147) *
                C15814) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[96] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32856 * C33153 +
            (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
            C20467 * C33084) *
               C598 -
           ((C21002 + C21003) * C32856 * C33084 +
            (C21004 + C21005) * C32856 * C33133 +
            (C21006 + C21007) * C32856 * C33146 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C32856 * C33153) *
               C599) *
              C476 +
          (((C20403 * C723 - C20404 * C718 - C20403 * C724 + C20401 * C733 +
             C20405 * C1180 - C20406 * C1168 - C20405 * C1181 +
             C32960 * C1195) *
                C32856 * C33153 +
            (C20403 * C725 - C20404 * C719 - C20403 * C726 + C20401 * C734 +
             C20405 * C1184 - C20406 * C1170 - C20405 * C1185 +
             C32960 * C1197) *
                C32856 * C33146 +
            (C20403 * C727 - C20404 * C720 - C20403 * C728 + C20401 * C735 +
             C20405 * C1188 - C20406 * C1172 - C20405 * C1189 +
             C32960 * C1199) *
                C32856 * C33133 +
            (C20403 * C729 - C20404 * C721 - C20403 * C730 + C20401 * C736 +
             C20405 * C2289 - C20406 * C2288 - C20405 * C2290 +
             C32960 * C2291) *
                C32856 * C33084) *
               C599 -
           ((C20830 + C20831) * C32856 * C33084 +
            (C20832 + C20833) * C32856 * C33133 +
            (C20834 + C20835) * C32856 * C33146 +
            (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
             C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
                C32856 * C33153) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33147 +
             (C21507 + C21508) * C33135 + C21515 * C33115) *
                C15814 +
            ((C20456 + C20457) * C33147 + C21856 * C33135 + C21474 * C33115) *
                C32783) *
               C598 -
           (((C22077 + C22078) * C33115 + (C22079 + C22080) * C33135 +
             (C21006 + C21007) * C33147) *
                C32783 +
            ((C22299 + C22300) * C33115 + (C22301 + C22302) * C33135 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C33147) *
                C15814) *
               C599) *
              C476 +
          ((((C22302 + C22301) * C33147 + (C22300 + C22299) * C33135 +
             (C20403 * C1690 - C20404 * C1687 - C20403 * C1691 +
              C20401 * C1696 + C20405 * C6378 - C20406 * C6374 -
              C20405 * C6379 + C32960 * C6383) *
                 C33115) *
                C15814 +
            ((C22080 + C22079) * C33147 + (C22078 + C22077) * C33135 +
             (C20403 * C1692 - C20404 * C1688 - C20403 * C1693 +
              C20401 * C1697 + C20405 * C7218 - C20406 * C7217 -
              C20405 * C7219 + C32960 * C7220) *
                 C33115) *
                C32783) *
               C599 -
           (((C21511 + C21512) * C33115 + C21857 * C33135 + C21858 * C33147) *
                C32783 +
            ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
             (C21508 + C21507) * C33147) *
                C15814) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[97] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C32832 * C245 -
          ((C20405 * C729 - C20406 * C721 - C20405 * C730 + C32960 * C736 +
            C20403 * C261 - C20404 * C250 - C20403 * C262 + C20401 * C280) *
               C32856 * C33084 +
           (C20405 * C727 - C20406 * C720 - C20405 * C728 + C32960 * C735 +
            C20403 * C263 - C20404 * C251 - C20403 * C264 + C20401 * C281) *
               C32856 * C33133 +
           (C20405 * C725 - C20406 * C719 - C20405 * C726 + C32960 * C734 +
            C20403 * C265 - C20404 * C252 - C20403 * C266 + C20401 * C282) *
               C32856 * C33146 +
           (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
            C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
               C32856 * C33153) *
              C32832 * C246 +
          ((C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
            C20405 * C1178 - C20406 * C1167 - C20405 * C1179 + C32960 * C1194) *
               C32856 * C33153 +
           (C20403 * C271 - C20404 * C255 - C20403 * C272 + C20401 * C285 +
            C20405 * C1176 - C20406 * C1166 - C20405 * C1177 + C32960 * C1193) *
               C32856 * C33146 +
           (C20403 * C273 - C20404 * C256 - C20403 * C274 + C20401 * C286 +
            C20405 * C1174 - C20406 * C1165 - C20405 * C1175 + C32960 * C1192) *
               C32856 * C33133 +
           (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
            C20405 * C1504 - C20406 * C1503 - C20405 * C1505 + C32960 * C1506) *
               C32856 * C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C32832 * C32818 * C110 -
          ((C20462 + C20463) * C32856 * C33084 +
           (C20461 + C20460) * C32856 * C33133 +
           (C20459 + C20458) * C32856 * C33146 +
           (C20457 + C20456) * C32856 * C33153) *
              C32832 * C32818 * C111 +
          (C20466 * C33153 + C20467 * C33146 +
           (C20463 + C20462) * C32856 * C33133 +
           (C20403 * C132 - C20404 * C120 - C20403 * C133 + C20401 * C141 +
            C20405 * C601 - C20406 * C600 - C20405 * C602 + C32960 * C603) *
               C32856 * C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C351 -
          ((C20405 * C380 - C20406 * C362 - C20405 * C381 + C32960 * C392 +
            C20403 * C366 - C20404 * C355 - C20403 * C367 + C20401 * C385) *
               C32856 * C33084 +
           (C20405 * C378 - C20406 * C361 - C20405 * C379 + C32960 * C391 +
            C20403 * C368 - C20404 * C356 - C20403 * C369 + C20401 * C386) *
               C32856 * C33133 +
           (C20405 * C376 - C20406 * C360 - C20405 * C377 + C32960 * C390 +
            C20403 * C370 - C20404 * C357 - C20403 * C371 + C20401 * C387) *
               C32856 * C33146 +
           (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
            C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
               C32856 * C33153) *
              C352 +
          ((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
            C20405 * C2128 - C20406 * C2120 - C20405 * C2129 + C32960 * C2138) *
               C32856 * C33153 +
           (C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
            C20405 * C2126 - C20406 * C2119 - C20405 * C2127 + C32960 * C2137) *
               C32856 * C33146 +
           (C20403 * C378 - C20404 * C361 - C20403 * C379 + C20401 * C391 +
            C20405 * C2124 - C20406 * C2118 - C20405 * C2125 + C32960 * C2136) *
               C32856 * C33133 +
           (C20403 * C380 - C20404 * C362 - C20403 * C381 + C20401 * C392 +
            C20405 * C2481 - C20406 * C2480 - C20405 * C2482 + C32960 * C2483) *
               C32856 * C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283 +
             C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733) *
                C33135 +
            (C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
             C20405 * C1178 - C20406 * C1167 - C20405 * C1179 +
             C32960 * C1194) *
                C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            (C21308 + C21309) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
            (C20459 + C20458) * C33147) *
               C32783 +
           ((C21309 + C21308) * C33115 + (C20834 + C20835) * C33135 +
            (C20457 + C20456) * C33147) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C20464 * C33147 + (C20833 + C20832) * C33135 +
            (C21311 + C21310) * C33115) *
               C15814 +
           (C20465 * C33147 + (C20831 + C20830) * C33135 +
            (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
             C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
             C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C21507 + C21508) * C33135 + C21515 * C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            C21474 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C21511 + C21512) * C33115 + (C21309 + C21308) * C33135 +
            (C20834 + C20835) * C33147) *
               C32783 +
           ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
            (C21508 + C21507) * C33147) *
               C15814) *
              C32832 * C246 +
          ((C21515 * C33147 + (C21514 + C21513) * C33135 +
            (C20403 * C1008 - C20404 * C999 - C20403 * C1009 + C20401 * C1017 +
             C20405 * C6376 - C20406 * C6373 - C20405 * C6377 +
             C32960 * C6382) *
                C33115) *
               C15814 +
           (C21474 * C33147 + (C21512 + C21511) * C33135 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C21507 + C21508) * C33135 + C21515 * C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            C21474 * C33115) *
               C32783) *
              C351 -
          (((C20405 * C1186 - C20406 * C1171 - C20405 * C1187 + C32960 * C1198 +
             C20403 * C1176 - C20404 * C1166 - C20403 * C1177 +
             C20401 * C1193) *
                C33115 +
            (C20405 * C1184 - C20406 * C1170 - C20405 * C1185 + C32960 * C1197 +
             C20403 * C725 - C20404 * C719 - C20403 * C726 + C20401 * C734) *
                C33135 +
            (C21006 + C21007) * C33147) *
               C32783 +
           ((C20405 * C1182 - C20406 * C1169 - C20405 * C1183 + C32960 * C1196 +
             C20403 * C1178 - C20404 * C1167 - C20403 * C1179 +
             C20401 * C1194) *
                C33115 +
            (C20405 * C1180 - C20406 * C1168 - C20405 * C1181 + C32960 * C1195 +
             C20403 * C723 - C20404 * C718 - C20403 * C724 + C20401 * C733) *
                C33135 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C33147) *
               C15814) *
              C352 +
          (((C20403 * C374 - C20404 * C359 - C20403 * C375 + C20401 * C389 +
             C20405 * C2128 - C20406 * C2120 - C20405 * C2129 +
             C32960 * C2138) *
                C33147 +
            (C20403 * C1180 - C20404 * C1168 - C20403 * C1181 + C20401 * C1195 +
             C20405 * C2675 - C20406 * C2672 - C20405 * C2676 +
             C32960 * C2681) *
                C33135 +
            (C20403 * C1182 - C20404 * C1169 - C20403 * C1183 + C20401 * C1196 +
             C20405 * C7062 - C20406 * C7059 - C20405 * C7063 +
             C32960 * C7068) *
                C33115) *
               C15814 +
           ((C20403 * C376 - C20404 * C360 - C20403 * C377 + C20401 * C390 +
             C20405 * C2126 - C20406 * C2119 - C20405 * C2127 +
             C32960 * C2137) *
                C33147 +
            (C20403 * C1184 - C20404 * C1170 - C20403 * C1185 + C20401 * C1197 +
             C20405 * C2677 - C20406 * C2673 - C20405 * C2678 +
             C32960 * C2682) *
                C33135 +
            (C20403 * C1186 - C20404 * C1171 - C20403 * C1187 + C20401 * C1198 +
             C20405 * C7389 - C20406 * C7388 - C20405 * C7390 +
             C32960 * C7391) *
                C33115) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[98] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C32856 * C33153 +
            (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
            C20467 * C33084) *
               C598 -
           ((C21002 + C21003) * C32856 * C33084 +
            (C21004 + C21005) * C32856 * C33133 +
            (C21006 + C21007) * C32856 * C33146 +
            (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
             C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                C32856 * C33153) *
               C599) *
              C32818 * C478 +
          (((C21007 + C21006) * C32856 * C33153 +
            (C21005 + C21004) * C32856 * C33146 +
            (C21003 + C21002) * C32856 * C33133 +
            (C20403 * C364 - C20404 * C354 - C20403 * C365 + C20401 * C384 +
             C20405 * C382 - C20406 * C363 - C20405 * C383 + C32960 * C393) *
                C32856 * C33084) *
               C599 -
           ((C20462 + C20463) * C32856 * C33084 +
            (C20461 + C20460) * C32856 * C33133 +
            (C20459 + C20458) * C32856 * C33146 +
            (C20457 + C20456) * C32856 * C33153) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
              C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                 C33147 +
             (C21507 + C21508) * C33135 + C21515 * C33115) *
                C15814 +
            ((C20456 + C20457) * C33147 + C21856 * C33135 + C21474 * C33115) *
                C32783) *
               C598 -
           (((C22077 + C22078) * C33115 + (C22079 + C22080) * C33135 +
             (C21006 + C21007) * C33147) *
                C32783 +
            ((C20405 * C1182 - C20406 * C1169 - C20405 * C1183 +
              C32960 * C1196 + C20403 * C1178 - C20404 * C1167 -
              C20403 * C1179 + C20401 * C1194) *
                 C33115 +
             (C20405 * C1180 - C20406 * C1168 - C20405 * C1181 +
              C32960 * C1195 + C20403 * C723 - C20404 * C718 - C20403 * C724 +
              C20401 * C733) *
                 C33135 +
             (C20405 * C374 - C20406 * C359 - C20405 * C375 + C32960 * C389 +
              C20403 * C372 - C20404 * C358 - C20403 * C373 + C20401 * C388) *
                 C33147) *
                C15814) *
               C599) *
              C32818 * C478 +
          ((((C21007 + C21006) * C33147 + (C22080 + C22079) * C33135 +
             (C22078 + C22077) * C33115) *
                C15814 +
            ((C21005 + C21004) * C33147 +
             (C20403 * C727 - C20404 * C720 - C20403 * C728 + C20401 * C735 +
              C20405 * C1188 - C20406 * C1172 - C20405 * C1189 +
              C32960 * C1199) *
                 C33135 +
             (C20403 * C1174 - C20404 * C1165 - C20403 * C1175 +
              C20401 * C1192 + C20405 * C1190 - C20406 * C1173 -
              C20405 * C1191 + C32960 * C1200) *
                 C33115) *
                C32783) *
               C599 -
           (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
             (C20459 + C20458) * C33147) *
                C32783 +
            (C21857 * C33115 + C21858 * C33135 + (C20457 + C20456) * C33147) *
                C15814) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[99] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C32832 * C32818 * C110 -
          ((C20462 + C20463) * C32856 * C33084 +
           (C20461 + C20460) * C32856 * C33133 +
           (C20459 + C20458) * C32856 * C33146 +
           (C20457 + C20456) * C32856 * C33153) *
              C32832 * C32818 * C111 +
          (C20466 * C33153 + C20467 * C33146 +
           (C20463 + C20462) * C32856 * C33133 +
           (C20403 * C132 - C20404 * C120 - C20403 * C133 + C20401 * C141 +
            C20405 * C601 - C20406 * C600 - C20405 * C602 + C32960 * C603) *
               C32856 * C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
            C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
               C32856 * C33153 +
           (C20456 + C20457) * C32856 * C33146 + C20466 * C33133 +
           C20467 * C33084) *
              C32832 * C245 -
          ((C20405 * C729 - C20406 * C721 - C20405 * C730 + C32960 * C736 +
            C20403 * C261 - C20404 * C250 - C20403 * C262 + C20401 * C280) *
               C32856 * C33084 +
           (C20405 * C727 - C20406 * C720 - C20405 * C728 + C32960 * C735 +
            C20403 * C263 - C20404 * C251 - C20403 * C264 + C20401 * C281) *
               C32856 * C33133 +
           (C20405 * C725 - C20406 * C719 - C20405 * C726 + C32960 * C734 +
            C20403 * C265 - C20404 * C252 - C20403 * C266 + C20401 * C282) *
               C32856 * C33146 +
           (C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733 +
            C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283) *
               C32856 * C33153) *
              C32832 * C246 +
          ((C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
            C20405 * C1178 - C20406 * C1167 - C20405 * C1179 + C32960 * C1194) *
               C32856 * C33153 +
           (C20403 * C271 - C20404 * C255 - C20403 * C272 + C20401 * C285 +
            C20405 * C1176 - C20406 * C1166 - C20405 * C1177 + C32960 * C1193) *
               C32856 * C33146 +
           (C20403 * C273 - C20404 * C256 - C20403 * C274 + C20401 * C286 +
            C20405 * C1174 - C20406 * C1165 - C20405 * C1175 + C32960 * C1192) *
               C32856 * C33133 +
           (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
            C20405 * C1504 - C20406 * C1503 - C20405 * C1505 + C32960 * C1506) *
               C32856 * C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C20403 * C267 - C20404 * C253 - C20403 * C268 + C20401 * C283 +
             C20405 * C723 - C20406 * C718 - C20405 * C724 + C32960 * C733) *
                C33135 +
            (C20403 * C269 - C20404 * C254 - C20403 * C270 + C20401 * C284 +
             C20405 * C1178 - C20406 * C1167 - C20405 * C1179 +
             C32960 * C1194) *
                C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            (C21308 + C21309) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C21310 + C21311) * C33115 + (C20832 + C20833) * C33135 +
            (C20459 + C20458) * C33147) *
               C32783 +
           ((C21309 + C21308) * C33115 + (C20834 + C20835) * C33135 +
            (C20457 + C20456) * C33147) *
               C15814) *
              C32832 * C32818 * C111 +
          ((C20464 * C33147 + (C20833 + C20832) * C33135 +
            (C21311 + C21310) * C33115) *
               C15814 +
           (C20465 * C33147 + (C20831 + C20830) * C33135 +
            (C20403 * C275 - C20404 * C257 - C20403 * C276 + C20401 * C287 +
             C20405 * C1504 - C20406 * C1503 - C20405 * C1505 +
             C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C122 - C20404 * C115 - C20403 * C123 + C20401 * C136 +
             C20405 * C372 - C20406 * C358 - C20405 * C373 + C32960 * C388) *
                C33147 +
            (C21507 + C21508) * C33135 + C21515 * C33115) *
               C15814 +
           ((C20456 + C20457) * C33147 + (C20835 + C20834) * C33135 +
            C21474 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C21511 + C21512) * C33115 + (C21309 + C21308) * C33135 +
            (C20834 + C20835) * C33147) *
               C32783 +
           ((C21513 + C21514) * C33115 + (C21510 + C21509) * C33135 +
            (C21508 + C21507) * C33147) *
               C15814) *
              C32832 * C246 +
          ((C21515 * C33147 + (C21514 + C21513) * C33135 +
            (C20403 * C1008 - C20404 * C999 - C20403 * C1009 + C20401 * C1017 +
             C20405 * C6376 - C20406 * C6373 - C20405 * C6377 +
             C32960 * C6382) *
                C33115) *
               C15814 +
           (C21474 * C33147 + (C21512 + C21511) * C33135 +
            (C20403 * C1010 - C20404 * C1000 - C20403 * C1011 + C20401 * C1018 +
             C20405 * C6561 - C20406 * C6560 - C20405 * C6562 +
             C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33083 +
             C1051 * C32918) *
                C2784 +
            (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
               C32832 * C476 -
           ((C3125 + C3126) * C33084 + (C3127 + C3128) * C2786 +
            (C3129 + C3130) * C2785 +
            (C1052 * C32918 + C1051 * C33083) * C2784) *
               C32832 * C477) *
              C478 +
          (((C3130 + C3129) * C2784 + (C3128 + C3127) * C2785 +
            (C3126 + C3125) * C2786 +
            (C509 * C33083 +
             (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                 C32918) *
                C33084) *
               C32832 * C477 -
           ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
            (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
             C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
                C33065 +
            (C7689 + C7690 + C7691 + C7692) * C32783) *
               C32832 * C476 -
           ((C8023 + C8024 + C8025 + C8026) * C32783 +
            (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
                C33065) *
               C32832 * C477) *
              C478 +
          (((C8026 + C8025 + C8024 + C8023) * C33065 +
            (C511 * C7682 + C881 * C7683 + C1053 * C7684 +
             (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                 C33092) *
                C32783) *
               C32832 * C477 -
           ((C7693 + C7694 + C7695 + C7696) * C32783 +
            (C7692 + C7691 + C7690 + C7689) * C33065) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33083 +
             C1051 * C32918) *
                C2784 +
            (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
               C598 -
           ((C3273 + C3265) * C33084 + (C3266 + C3267) * C2786 +
            (C3268 + C3269) * C2785 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33083) *
                C2784) *
               C599) *
              C476 +
          (((C1713 * C33083 + C1712 * C32918) * C2784 +
            (C1537 * C33083 + C1536 * C32918) * C2785 +
            (C1535 * C33083 + C1534 * C32918) * C2786 +
            (C3272 * C33083 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C32918) *
                C33084) *
               C599 -
           ((C3125 + C3126) * C33084 + (C3127 + C3128) * C2786 +
            (C3129 + C3130) * C2785 +
            (C1052 * C32918 + C1051 * C33083) * C2784) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
             C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
                C33065 +
            (C7689 + C7690 + C7691 + C7692) * C32783) *
               C598 -
           ((C8167 + C8161 + C8162 + C8163) * C32783 +
            (C6664 * C33092 + C1712 * C7684 + C1713 * C7683 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C7682) *
                C33065) *
               C599) *
              C476 +
          (((C1713 * C7682 + C1712 * C7683 + C6664 * C7684 + C6663 * C33092) *
                C33065 +
            (C1537 * C7682 + C1536 * C7683 + C8166 * C7684 +
             (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                 C33092) *
                C32783) *
               C599 -
           ((C8023 + C8024 + C8025 + C8026) * C32783 +
            (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
                C33065) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C32832 * C245 -
          ((C882 * C32918 + C510 * C33083) * C33084 +
           (C881 * C32918 + C511 * C33083) * C2786 +
           (C880 * C32918 + C512 * C33083) * C2785 +
           (C1052 * C32918 + C1051 * C33083) * C2784) *
              C32832 * C246 +
          ((C1052 * C33083 + C1055 * C32918) * C2784 +
           (C880 * C33083 + C1054 * C32918) * C2785 +
           (C881 * C33083 + C1053 * C32918) * C2786 +
           (C882 * C33083 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C32918) *
               C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C32832 * C32818 * C110 -
          ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
           (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
              C32832 * C32818 * C111 +
          (C2797 * C2784 + C2798 * C2785 + (C2796 + C2795) * C2786 +
           (C178 * C33083 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                C32918) *
               C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C351 -
          (((C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) * C32918 +
            C630 * C33083) *
               C33084 +
           (C1535 * C32918 + C631 * C33083) * C2786 +
           (C1537 * C32918 + C632 * C33083) * C2785 +
           (C1713 * C32918 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C33083) *
               C2784) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C33083 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C32918) *
               C2784 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C33083 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C32918) *
               C2785 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C33083 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C32918) *
               C2786 +
           ((C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) * C33083 +
            (C113 * C2289 - C114 * C2288 - C113 * C2290 + C32873 * C2291) *
                C32918) *
               C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C32818 * C110 -
          ((C7693 + C7694 + C7695 + C7696) * C32783 +
           (C7692 + C7691 + C7690 + C7689) * C33065) *
              C32832 * C32818 * C111 +
          ((C7696 + C7695 + C7694 + C7693) * C33065 +
           (C176 * C7682 + C510 * C7683 + C882 * C7684 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C7684 + C880 * C7683 + C512 * C7682) *
               C32783 +
           (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
               C33065) *
              C32832 * C246 +
          ((C1052 * C7682 + C1055 * C7683 + C6310 * C7684 + C6311 * C33092) *
               C33065 +
           (C880 * C7682 + C1054 * C7683 + C6478 * C7684 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C351 -
          (((C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                C33092 +
            C1536 * C7684 + C1537 * C7683 + C632 * C7682) *
               C32783 +
           (C6664 * C33092 + C1712 * C7684 + C1713 * C7683 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C7682) *
               C33065) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C7682 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C7683 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C7684 +
            (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
                C33092) *
               C33065 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C7682 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C7683 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C7684 +
            (C113 * C7218 - C114 * C7217 - C113 * C7219 + C32873 * C7220) *
                C33092) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33083 +
             C1051 * C32918) *
                C2784 +
            (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
               C598 -
           ((C3273 + C3265) * C33084 + (C3266 + C3267) * C2786 +
            (C3268 + C3269) * C2785 +
            (C1713 * C32918 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33083) *
                C2784) *
               C599) *
              C32818 * C478 +
          (((C3269 + C3268) * C2784 + (C3267 + C3266) * C2785 +
            (C3265 + C3273) * C2786 +
            (C629 * C33083 +
             (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) *
                 C32918) *
                C33084) *
               C599 -
           ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
            (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
             C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
                C33065 +
            (C7689 + C7690 + C7691 + C7692) * C32783) *
               C598 -
           ((C8167 + C8161 + C8162 + C8163) * C32783 +
            (C6664 * C33092 + C1712 * C7684 + C1713 * C7683 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C7682) *
                C33065) *
               C599) *
              C32818 * C478 +
          (((C8163 + C8162 + C8161 + C8167) * C33065 +
            (C631 * C7682 + C1535 * C7683 + C1534 * C7684 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33092) *
                C32783) *
               C599 -
           ((C7693 + C7694 + C7695 + C7696) * C32783 +
            (C7692 + C7691 + C7690 + C7689) * C33065) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C32832 * C32818 * C110 -
          ((C2795 + C2796) * C33084 + (C2794 + C2793) * C2786 +
           (C2792 + C2791) * C2785 + (C2790 + C2789) * C2784) *
              C32832 * C32818 * C111 +
          (C2797 * C2784 + C2798 * C2785 + (C2796 + C2795) * C2786 +
           (C178 * C33083 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) *
                C32918) *
               C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33083 +
            C1051 * C32918) *
               C2784 +
           (C2789 + C2790) * C2785 + C2797 * C2786 + C2798 * C33084) *
              C32832 * C245 -
          ((C882 * C32918 + C510 * C33083) * C33084 +
           (C881 * C32918 + C511 * C33083) * C2786 +
           (C880 * C32918 + C512 * C33083) * C2785 +
           (C1052 * C32918 + C1051 * C33083) * C2784) *
              C32832 * C246 +
          ((C1052 * C33083 + C1055 * C32918) * C2784 +
           (C880 * C33083 + C1054 * C32918) * C2785 +
           (C881 * C33083 + C1053 * C32918) * C2786 +
           (C882 * C33083 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C32918) *
               C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C32818 * C110 -
          ((C7693 + C7694 + C7695 + C7696) * C32783 +
           (C7692 + C7691 + C7690 + C7689) * C33065) *
              C32832 * C32818 * C111 +
          ((C7696 + C7695 + C7694 + C7693) * C33065 +
           (C176 * C7682 + C510 * C7683 + C882 * C7684 +
            (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                C33092) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C7682 +
            C1051 * C7683 + C1052 * C7684 + C1055 * C33092) *
               C33065 +
           (C7689 + C7690 + C7691 + C7692) * C32783) *
              C32832 * C245 -
          ((C6478 * C33092 + C1054 * C7684 + C880 * C7683 + C512 * C7682) *
               C32783 +
           (C6310 * C33092 + C1055 * C7684 + C1052 * C7683 + C1051 * C7682) *
               C33065) *
              C32832 * C246 +
          ((C1052 * C7682 + C1055 * C7683 + C6310 * C7684 + C6311 * C33092) *
               C33065 +
           (C880 * C7682 + C1054 * C7683 + C6478 * C7684 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C33092) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C33083 +
             (C4582 + C4583) * C32918) *
                C851 +
            ((C3556 + C3557) * C33083 + C4930 * C32918) * C852 +
            C4387 * C33106) *
               C32832 * C476 -
           (((C4584 + C4585) * C32918 + C4931 * C33083) * C33106 +
            ((C4586 + C4587) * C32918 + C4932 * C33083) * C852 +
            ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
               C32832 * C477) *
              C478 +
          (((C4930 * C33083 + (C4587 + C4586) * C32918) * C851 +
            (C4385 * C33083 + (C4585 + C4584) * C32918) * C852 +
            ((C3931 + C3930) * C33083 +
             (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
              C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                 C32918) *
                C33106) *
               C32832 * C477 -
           (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
            (C4931 * C32918 + (C3559 + C3558) * C33083) * C852 +
            (C4932 * C32918 + (C3557 + C3556) * C33083) * C851) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C7682 +
            (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
               C32773 * C32832 * C476 -
           ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
            (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
               C32773 * C32832 * C477) *
              C478 +
          ((C4930 * C7682 + C8591 * C7683 + (C8617 + C8616) * C7684 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C33092) *
               C32773 * C32832 * C477 -
           ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
            (C3557 + C3556) * C7682) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C33083 +
             (C4582 + C4583) * C32918) *
                C851 +
            ((C3556 + C3557) * C33083 + C4930 * C32918) * C852 +
            C4387 * C33106) *
               C598 -
           (((C5151 + C5152) * C32918 + (C4104 + C4105) * C33083) * C33106 +
            ((C5153 + C5154) * C32918 + (C4106 + C4107) * C33083) * C852 +
            ((C5361 + C5362) * C32918 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C33083) *
                C851) *
               C599) *
              C476 +
          ((((C5362 + C5361) * C33083 +
             (C3503 * C1178 - C3504 * C1167 - C3503 * C1179 + C33085 * C1194 +
              C3505 * C1182 - C3506 * C1169 - C3505 * C1183 + C32960 * C1196) *
                 C32918) *
                C851 +
            ((C5154 + C5153) * C33083 +
             (C3503 * C1176 - C3504 * C1166 - C3503 * C1177 + C33085 * C1193 +
              C3505 * C1186 - C3506 * C1171 - C3505 * C1187 + C32960 * C1198) *
                 C32918) *
                C852 +
            ((C5152 + C5151) * C33083 +
             (C3503 * C1174 - C3504 * C1165 - C3503 * C1175 + C33085 * C1192 +
              C3505 * C1190 - C3506 * C1173 - C3505 * C1191 + C32960 * C1200) *
                 C32918) *
                C33106) *
               C599 -
           (((C4584 + C4585) * C32918 + C4931 * C33083) * C33106 +
            ((C4586 + C4587) * C32918 + C4932 * C33083) * C852 +
            ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C7682 +
            (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
               C32773 * C598 -
           ((C10088 + C10089) * C33092 + (C9375 + C9376) * C7684 +
            (C5361 + C5362) * C7683 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C7682) *
               C32773 * C599) *
              C476 +
          (((C5362 + C5361) * C7682 + (C9376 + C9375) * C7683 +
            (C10089 + C10088) * C7684 +
            (C3503 * C6376 - C3504 * C6373 - C3503 * C6377 + C33085 * C6382 +
             C3505 * C6380 - C3506 * C6375 - C3505 * C6381 + C32960 * C6384) *
                C33092) *
               C32773 * C599 -
           ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
            (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C4582 + C4583) * C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C32832 * C245 -
          (((C4584 + C4585) * C32918 + (C3932 + C3933) * C33083) * C33106 +
           ((C4586 + C4587) * C32918 + (C3934 + C3935) * C33083) * C852 +
           ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
              C32832 * C246 +
          (((C4589 + C4588) * C33083 +
            (C3503 * C1006 - C3504 * C998 - C3503 * C1007 + C33085 * C1016 +
             C3505 * C1690 - C3506 * C1687 - C3505 * C1691 + C32960 * C1696) *
                C32918) *
               C851 +
           ((C4587 + C4586) * C33083 +
            (C3503 * C1004 - C3504 * C997 - C3503 * C1005 + C33085 * C1015 +
             C3505 * C1692 - C3506 * C1688 - C3505 * C1693 + C32960 * C1697) *
                C32918) *
               C852 +
           ((C4585 + C4584) * C33083 +
            (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
             C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                C32918) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283 +
             C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733) *
                C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C32832 * C32818 * C110 -
          (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
           ((C3932 + C3933) * C32918 + (C3559 + C3558) * C33083) * C852 +
           ((C3934 + C3935) * C32918 + (C3557 + C3556) * C33083) * C851) *
              C32832 * C32818 * C111 +
          (C4387 * C851 + (C3565 * C33083 + (C3931 + C3930) * C32918) * C852 +
           ((C3563 + C3562) * C33083 +
            (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
             C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                C32918) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C4582 + C4583) * C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C351 -
          (((C3505 * C1188 - C3506 * C1172 - C3505 * C1189 + C32960 * C1199 +
             C3503 * C727 - C3504 * C720 - C3503 * C728 + C33085 * C735) *
                C32918 +
            (C4104 + C4105) * C33083) *
               C33106 +
           ((C3505 * C1184 - C3506 * C1170 - C3505 * C1185 + C32960 * C1197 +
             C3503 * C725 - C3504 * C719 - C3503 * C726 + C33085 * C734) *
                C32918 +
            (C4106 + C4107) * C33083) *
               C852 +
           ((C3505 * C1180 - C3506 * C1168 - C3505 * C1181 + C32960 * C1195 +
             C3503 * C723 - C3504 * C718 - C3503 * C724 + C33085 * C733) *
                C32918 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C33083) *
               C851) *
              C352 +
          (((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
             C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
                C33083 +
            (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
             C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
                C32918) *
               C851 +
           ((C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
             C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
                C33083 +
            (C3503 * C1184 - C3504 * C1170 - C3503 * C1185 + C33085 * C1197 +
             C3505 * C2677 - C3506 * C2673 - C3505 * C2678 + C32960 * C2682) *
                C32918) *
               C852 +
           ((C3503 * C378 - C3504 * C361 - C3503 * C379 + C33085 * C391 +
             C3505 * C2124 - C3506 * C2118 - C3505 * C2125 + C32960 * C2136) *
                C33083 +
            (C3503 * C1188 - C3504 * C1172 - C3503 * C1189 + C33085 * C1199 +
             C3505 * C2679 - C3506 * C2674 - C3505 * C2680 + C32960 * C2683) *
                C32918) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + (C8619 + C8618) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
           (C3557 + C3556) * C7682) *
              C32773 * C32832 * C32818 * C111 +
          (C3564 * C7682 + C4385 * C7683 + (C4585 + C4584) * C7684 +
           (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
            C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
              C32773 * C32832 * C245 -
          ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
           (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
              C32773 * C32832 * C246 +
          (C8590 * C7682 + C9573 * C7683 + (C9587 + C9586) * C7684 +
           (C3503 * C6291 - C3504 * C6289 - C3503 * C6292 + C33085 * C6295 +
            C3505 * C6647 - C3506 * C6646 - C3505 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
              C32773 * C351 -
          ((C3505 * C6378 - C3506 * C6374 - C3505 * C6379 + C32960 * C6383 +
            C3503 * C1690 - C3504 * C1687 - C3503 * C1691 + C33085 * C1696) *
               C33092 +
           (C9375 + C9376) * C7684 + (C5361 + C5362) * C7683 +
           (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
            C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
               C7682) *
              C32773 * C352 +
          ((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
            C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
               C7682 +
           (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
            C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
               C7683 +
           (C3503 * C1182 - C3504 * C1169 - C3503 * C1183 + C33085 * C1196 +
            C3505 * C7062 - C3506 * C7059 - C3505 * C7063 + C32960 * C7068) *
               C7684 +
           (C3503 * C6378 - C3504 * C6374 - C3503 * C6379 + C33085 * C6383 +
            C3505 * C7539 - C3506 * C7538 - C3505 * C7540 + C32960 * C7541) *
               C33092) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C33083 +
             (C4582 + C4583) * C32918) *
                C851 +
            ((C3556 + C3557) * C33083 + C4930 * C32918) * C852 +
            C4387 * C33106) *
               C598 -
           (((C5151 + C5152) * C32918 + (C4104 + C4105) * C33083) * C33106 +
            ((C5153 + C5154) * C32918 + (C4106 + C4107) * C33083) * C852 +
            ((C3505 * C1180 - C3506 * C1168 - C3505 * C1181 + C32960 * C1195 +
              C3503 * C723 - C3504 * C718 - C3503 * C724 + C33085 * C733) *
                 C32918 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C33083) *
                C851) *
               C599) *
              C32818 * C478 +
          ((((C4107 + C4106) * C33083 + (C5154 + C5153) * C32918) * C851 +
            ((C4105 + C4104) * C33083 + (C5152 + C5151) * C32918) * C852 +
            ((C4103 + C4102) * C33083 +
             (C3503 * C729 - C3504 * C721 - C3503 * C730 + C33085 * C736 +
              C3505 * C2289 - C3506 * C2288 - C3505 * C2290 + C32960 * C2291) *
                 C32918) *
                C33106) *
               C599 -
           (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
            (C4931 * C32918 + (C3559 + C3558) * C33083) * C852 +
            (C4932 * C32918 + (C3557 + C3556) * C33083) * C851) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C7682 +
            (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
               C32773 * C598 -
           ((C3505 * C6378 - C3506 * C6374 - C3505 * C6379 + C32960 * C6383 +
             C3503 * C1690 - C3504 * C1687 - C3503 * C1691 + C33085 * C1696) *
                C33092 +
            (C9375 + C9376) * C7684 + (C5361 + C5362) * C7683 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C7682) *
               C32773 * C599) *
              C32818 * C478 +
          (((C4107 + C4106) * C7682 + (C5154 + C5153) * C7683 +
            (C9168 + C9167) * C7684 +
            (C3503 * C1692 - C3504 * C1688 - C3503 * C1693 + C33085 * C1697 +
             C3505 * C7218 - C3506 * C7217 - C3505 * C7219 + C32960 * C7220) *
                C33092) *
               C32773 * C599 -
           ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
            (C3557 + C3556) * C7682) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283 +
             C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733) *
                C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C32832 * C32818 * C110 -
          (((C3930 + C3931) * C32918 + (C3561 + C3560) * C33083) * C33106 +
           ((C3932 + C3933) * C32918 + (C3559 + C3558) * C33083) * C852 +
           ((C3934 + C3935) * C32918 + (C3557 + C3556) * C33083) * C851) *
              C32832 * C32818 * C111 +
          (C4387 * C851 + (C3565 * C33083 + (C3931 + C3930) * C32918) * C852 +
           ((C3563 + C3562) * C33083 +
            (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
             C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                C32918) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C33083 +
            (C4582 + C4583) * C32918) *
               C851 +
           ((C3556 + C3557) * C33083 + (C3935 + C3934) * C32918) * C852 +
           C4387 * C33106) *
              C32832 * C245 -
          (((C4584 + C4585) * C32918 + (C3932 + C3933) * C33083) * C33106 +
           ((C4586 + C4587) * C32918 + (C3934 + C3935) * C33083) * C852 +
           ((C4588 + C4589) * C32918 + (C4583 + C4582) * C33083) * C851) *
              C32832 * C246 +
          (((C4589 + C4588) * C33083 +
            (C3503 * C1006 - C3504 * C998 - C3503 * C1007 + C33085 * C1016 +
             C3505 * C1690 - C3506 * C1687 - C3505 * C1691 + C32960 * C1696) *
                C32918) *
               C851 +
           ((C4587 + C4586) * C33083 +
            (C3503 * C1004 - C3504 * C997 - C3503 * C1005 + C33085 * C1015 +
             C3505 * C1692 - C3506 * C1688 - C3505 * C1693 + C32960 * C1697) *
                C32918) *
               C852 +
           ((C4585 + C4584) * C33083 +
            (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
             C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                C32918) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + (C8619 + C8618) * C33092) *
              C32773 * C32832 * C32818 * C110 -
          ((C8616 + C8617) * C33092 + C8960 * C7684 + C4932 * C7683 +
           (C3557 + C3556) * C7682) *
              C32773 * C32832 * C32818 * C111 +
          (C3564 * C7682 + C4385 * C7683 + (C4585 + C4584) * C7684 +
           (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
            C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
               C33092) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C7682 +
           (C4582 + C4583) * C7683 + C8590 * C7684 + C9573 * C33092) *
              C32773 * C32832 * C245 -
          ((C9586 + C9587) * C33092 + (C8618 + C8619) * C7684 +
           (C4588 + C4589) * C7683 + (C4583 + C4582) * C7682) *
              C32773 * C32832 * C246 +
          (C8590 * C7682 + C9573 * C7683 + (C9587 + C9586) * C7684 +
           (C3503 * C6291 - C3504 * C6289 - C3503 * C6292 + C33085 * C6295 +
            C3505 * C6647 - C3506 * C6646 - C3505 * C6648 + C32960 * C6649) *
               C33092) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C32832 * C476 -
           ((C1352 + C1353 + C1354) * C33106 + (C1355 + C1356 + C1357) * C852 +
            (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
               C32832 * C477) *
              C478 +
          (((C1357 + C1356 + C1355) * C851 + (C1354 + C1353 + C1352) * C852 +
            (C510 * C33147 + C882 * C33135 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C33115) *
                C33106) *
               C32832 * C477 -
           ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
            (C883 + C856 + C855) * C851) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C32832 * C476 -
           (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
                C103) *
               C32832 * C477) *
              C478 +
          ((C516 * C103 + C515 * C104 + C514 * C105 + C513 * C106 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) * C32856 *
                C107) *
               C32832 * C477 -
           (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
            C179 * C103) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C32856 * C851 +
            (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
               C32832 * C476 -
           ((C2329 + C2330 + C2331) * C32856 * C33106 +
            (C2332 + C2333 + C2334) * C32856 * C852 +
            (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
             C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
             C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
                C32856 * C851) *
               C32832 * C477) *
              C478 +
          (((C2334 + C2333 + C2332) * C32856 * C851 +
            (C2331 + C2330 + C2329) * C32856 * C852 +
            (C1826 * C261 - C1827 * C250 - C1826 * C262 + C33148 * C280 +
             C1828 * C729 - C1829 * C721 - C1828 * C730 + C33137 * C736 +
             C1830 * C2289 - C1831 * C2288 - C1830 * C2290 + C33118 * C2291) *
                C32856 * C33106) *
               C32832 * C477 -
           ((C1893 + C1894 + C1895) * C32856 * C33106 +
            (C1892 + C1891 + C1890) * C32856 * C852 +
            (C1889 + C1888 + C1887) * C32856 * C851) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C32832 * C476 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C32832 * C477) *
              C478 +
          (((C5861 + C5860 + C5859) * C33144 +
            (C5858 + C5857 + C5856) * C33131 +
            (C510 * C5472 + C882 * C5473 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C33115) *
                C33106) *
               C32832 * C477 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C32832 * C476 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C32832 * C477) *
              C478 +
          ((C512 * C6221 + C880 * C6222 + C1054 * C6223 + C6478 * C6224 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C6225) *
               C32773 * C32832 * C477 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C5472 +
            (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
               C32773 * C32832 * C476 -
           ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
            (C6941 + C6940 + C6939) * C5472) *
               C32773 * C32832 * C477) *
              C478 +
          (((C2334 + C2333 + C2332) * C5472 + (C7240 + C7241 + C7242) * C5473 +
            (C1826 * C1004 - C1827 * C997 - C1826 * C1005 + C33148 * C1015 +
             C1828 * C1692 - C1829 * C1688 - C1828 * C1693 + C33137 * C1697 +
             C1830 * C7218 - C1831 * C7217 - C1830 * C7219 + C33118 * C7220) *
                C33115) *
               C32773 * C32832 * C477 -
           ((C7242 + C7241 + C7240) * C33115 + (C2332 + C2333 + C2334) * C5473 +
            (C1889 + C1888 + C1887) * C5472) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C598 -
           ((C1538 + C1539 + C1516) * C33106 + (C1540 + C1541 + C1525) * C852 +
            (C1712 * C33115 + C1713 * C33135 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33147) *
                C851) *
               C599) *
              C476 +
          (((C1713 * C33147 + C1712 * C33135 +
             (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                 C33115) *
                C851 +
            (C1537 * C33147 + C1536 * C33135 +
             (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                 C33115) *
                C852 +
            (C1535 * C33147 + C1534 * C33135 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33115) *
                C33106) *
               C599 -
           ((C1352 + C1353 + C1354) * C33106 + (C1355 + C1356 + C1357) * C852 +
            (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C598 -
           (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
                C103) *
               C599) *
              C476 +
          (((C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) * C32856 *
                C103 +
            (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) * C32856 *
                C104 +
            (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) * C32856 *
                C105 +
            (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) * C32856 *
                C106 +
            (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) * C32856 *
                C107) *
               C599 -
           (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
                C103) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C32856 * C851 +
            (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
               C598 -
           ((C2521 + C2522 + C2523) * C32856 * C33106 +
            (C2524 + C2525 + C2526) * C32856 * C852 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C32856 * C851) *
               C599) *
              C476 +
          (((C1826 * C723 - C1827 * C718 - C1826 * C724 + C33148 * C733 +
             C1828 * C1180 - C1829 * C1168 - C1828 * C1181 + C33137 * C1195 +
             C1830 * C2675 - C1831 * C2672 - C1830 * C2676 + C33118 * C2681) *
                C32856 * C851 +
            (C1826 * C725 - C1827 * C719 - C1826 * C726 + C33148 * C734 +
             C1828 * C1184 - C1829 * C1170 - C1828 * C1185 + C33137 * C1197 +
             C1830 * C2677 - C1831 * C2673 - C1830 * C2678 + C33118 * C2682) *
                C32856 * C852 +
            (C1826 * C727 - C1827 * C720 - C1826 * C728 + C33148 * C735 +
             C1828 * C1188 - C1829 * C1172 - C1828 * C1189 + C33137 * C1199 +
             C1830 * C2679 - C1831 * C2674 - C1830 * C2680 + C33118 * C2683) *
                C32856 * C33106) *
               C599 -
           ((C2329 + C2330 + C2331) * C32856 * C33106 +
            (C2332 + C2333 + C2334) * C32856 * C852 +
            (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
             C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
             C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
                C32856 * C851) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C476 +
          (((C1713 * C5472 + C1712 * C5473 +
             (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                 C33115) *
                C33144 +
            (C1537 * C5472 + C1536 * C5473 +
             (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                 C33115) *
                C33131 +
            (C1535 * C5472 + C1534 * C5473 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33115) *
                C33106) *
               C599 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           (C6663 * C6225 + C6664 * C6224 + C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C476 +
          ((C1713 * C6221 + C1712 * C6222 + C6664 * C6223 + C6663 * C6224 +
            (C113 * C6647 - C114 * C6646 - C113 * C6648 + C32873 * C6649) *
                C6225) *
               C32773 * C599 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C5472 +
            (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
               C32773 * C598 -
           ((C7579 + C7580 + C7581) * C33115 + (C7582 + C7583 + C7584) * C5473 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C5472) *
               C32773 * C599) *
              C476 +
          (((C7584 + C7583 + C7582) * C5472 + (C7581 + C7580 + C7579) * C5473 +
            (C1826 * C1690 - C1827 * C1687 - C1826 * C1691 + C33148 * C1696 +
             C1828 * C6378 - C1829 * C6374 - C1828 * C6379 + C33137 * C6383 +
             C1830 * C7539 - C1831 * C7538 - C1830 * C7540 + C33118 * C7541) *
                C33115) *
               C32773 * C599 -
           ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
            (C6941 + C6940 + C6939) * C5472) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                   C32856 * C103 +
               C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                  C32832 * C32818 * C110 -
              (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
               C179 * C103) *
                  C32832 * C32818 * C111 +
              (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
               (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) *
                   C32856 * C107) *
                  C32832 * C32818 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                   C32856 * C103 +
               C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
                  C32832 * C245 -
              ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) *
                   C32856 * C107 +
               (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) *
                   C32856 * C106 +
               (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) *
                   C32856 * C105 +
               (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) *
                   C32856 * C104 +
               (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) *
                   C32856 * C103) *
                  C32832 * C246 +
              ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                   C32856 * C103 +
               (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) *
                   C32856 * C104 +
               (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) *
                   C32856 * C105 +
               (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) *
                   C32856 * C106 +
               (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                   C32856 * C107) *
                  C32832 * C247) *
             C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C351 -
          ((C113 * C364 - C114 * C354 - C113 * C365 + C32873 * C384) * C32856 *
               C107 +
           (C113 * C366 - C114 * C355 - C113 * C367 + C32873 * C385) * C32856 *
               C106 +
           (C113 * C368 - C114 * C356 - C113 * C369 + C32873 * C386) * C32856 *
               C105 +
           (C113 * C370 - C114 * C357 - C113 * C371 + C32873 * C387) * C32856 *
               C104 +
           (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
               C103) *
              C352 +
          ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C32856 *
               C103 +
           (C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C32856 *
               C104 +
           (C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C32856 *
               C105 +
           (C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) * C32856 *
               C106 +
           (C113 * C382 - C114 * C363 - C113 * C383 + C32873 * C393) * C32856 *
               C107) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C33135 +
            (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C32818 * C110 -
          ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
           (C883 + C856 + C855) * C851) *
              C32832 * C32818 * C111 +
          (C886 * C851 + (C872 + C871 + C885) * C852 +
           (C177 * C33147 + C509 * C33135 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
           (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
           (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
              C32832 * C246 +
          ((C1052 * C33147 + C1055 * C33135 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C851 +
           (C880 * C33147 + C1054 * C33135 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C852 +
           (C881 * C33147 + C1053 * C33135 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C351 -
          (((C113 * C1174 - C114 * C1165 - C113 * C1175 + C32873 * C1192) *
                C33115 +
            (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) * C33135 +
            C631 * C33147) *
               C33106 +
           ((C113 * C1176 - C114 * C1166 - C113 * C1177 + C32873 * C1193) *
                C33115 +
            (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) * C33135 +
            C632 * C33147) *
               C852 +
           ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                C33115 +
            (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) * C33135 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C33147) *
               C851) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C33147 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C33135 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33115) *
               C851 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C33147 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C33135 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33115) *
               C852 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C33147 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C33135 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C33115) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C32832 * C32818 * C110 -
          ((C1893 + C1894 + C1895) * C32856 * C33106 +
           (C1892 + C1891 + C1890) * C32856 * C852 +
           (C1889 + C1888 + C1887) * C32856 * C851) *
              C32832 * C32818 * C111 +
          (C1898 * C851 + (C1895 + C1894 + C1893) * C32856 * C852 +
           (C1826 * C130 - C1827 * C119 - C1826 * C131 + C33148 * C140 +
            C1828 * C364 - C1829 * C354 - C1828 * C365 + C33137 * C384 +
            C1830 * C382 - C1831 * C363 - C1830 * C383 + C33118 * C393) *
               C32856 * C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C32832 * C245 -
          ((C1830 * C1188 - C1831 * C1172 - C1830 * C1189 + C33118 * C1199 +
            C1828 * C727 - C1829 * C720 - C1828 * C728 + C33137 * C735 +
            C1826 * C263 - C1827 * C251 - C1826 * C264 + C33148 * C281) *
               C32856 * C33106 +
           (C1830 * C1184 - C1831 * C1170 - C1830 * C1185 + C33118 * C1197 +
            C1828 * C725 - C1829 * C719 - C1828 * C726 + C33137 * C734 +
            C1826 * C265 - C1827 * C252 - C1826 * C266 + C33148 * C282) *
               C32856 * C852 +
           (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
            C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
            C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
               C32856 * C851) *
              C32832 * C246 +
          ((C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
            C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
            C1830 * C1182 - C1831 * C1169 - C1830 * C1183 + C33118 * C1196) *
               C32856 * C851 +
           (C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285 +
            C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
            C1830 * C1186 - C1831 * C1171 - C1830 * C1187 + C33118 * C1198) *
               C32856 * C852 +
           (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
            C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
            C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
               C32856 * C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C351 -
          ((C1830 * C2124 - C1831 * C2118 - C1830 * C2125 + C33118 * C2136 +
            C1828 * C378 - C1829 * C361 - C1828 * C379 + C33137 * C391 +
            C1826 * C368 - C1827 * C356 - C1826 * C369 + C33148 * C386) *
               C32856 * C33106 +
           (C1830 * C2126 - C1831 * C2119 - C1830 * C2127 + C33118 * C2137 +
            C1828 * C376 - C1829 * C360 - C1828 * C377 + C33137 * C390 +
            C1826 * C370 - C1827 * C357 - C1826 * C371 + C33148 * C387) *
               C32856 * C852 +
           (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
            C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
            C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
               C32856 * C851) *
              C352 +
          ((C1826 * C374 - C1827 * C359 - C1826 * C375 + C33148 * C389 +
            C1828 * C2128 - C1829 * C2120 - C1828 * C2129 + C33137 * C2138 +
            C1830 * C2130 - C1831 * C2121 - C1830 * C2131 + C33118 * C2139) *
               C32856 * C851 +
           (C1826 * C376 - C1827 * C360 - C1826 * C377 + C33148 * C390 +
            C1828 * C2126 - C1829 * C2119 - C1828 * C2127 + C33137 * C2137 +
            C1830 * C2132 - C1831 * C2122 - C1830 * C2133 + C33118 * C2140) *
               C32856 * C852 +
           (C1826 * C378 - C1827 * C361 - C1826 * C379 + C33148 * C391 +
            C1828 * C2124 - C1829 * C2118 - C1828 * C2125 + C33137 * C2136 +
            C1830 * C2134 - C1831 * C2123 - C1830 * C2135 + C33118 * C2141) *
               C32856 * C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C351 -
          ((C1534 * C33115 + C1535 * C5473 + C631 * C5472) * C33106 +
           (C1536 * C33115 + C1537 * C5473 + C632 * C5472) * C33131 +
           (C1712 * C33115 + C1713 * C5473 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C5472) *
               C33144) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C5472 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C5473 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33115) *
               C33144 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C5472 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C5473 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33115) *
               C33131 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C5472 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C5473 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C33115) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C351 -
          ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
               C6225 +
           (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
               C6224 +
           C1712 * C6223 + C1713 * C6222 +
           (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
              C32773 * C352 +
          ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C6221 +
           (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
               C6222 +
           (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
               C6223 +
           (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
               C6224 +
           (C113 * C6380 - C114 * C6375 - C113 * C6381 + C32873 * C6384) *
               C6225) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283 +
            C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
            C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195) *
               C5473 +
           (C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
            C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
            C1830 * C1182 - C1831 * C1169 - C1830 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C1830 * C1186 - C1831 * C1171 - C1830 * C1187 + C33118 * C1198 +
            C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
            C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285) *
               C33115 +
           (C2332 + C2333 + C2334) * C5473 + (C1889 + C1888 + C1887) * C5472) *
              C32773 * C32832 * C32818 * C111 +
          (C1897 * C5472 + (C2331 + C2330 + C2329) * C5473 +
           (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
            C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
            C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
              C32773 * C32832 * C245 -
          ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
           (C6941 + C6940 + C6939) * C5472) *
              C32773 * C32832 * C246 +
          (C6949 * C5472 + (C6947 + C6946 + C6945) * C5473 +
           (C1826 * C1008 - C1827 * C999 - C1826 * C1009 + C33148 * C1017 +
            C1828 * C6376 - C1829 * C6373 - C1828 * C6377 + C33137 * C6382 +
            C1830 * C6380 - C1831 * C6375 - C1830 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
              C32773 * C351 -
          ((C1830 * C7062 - C1831 * C7059 - C1830 * C7063 + C33118 * C7068 +
            C1828 * C1182 - C1829 * C1169 - C1828 * C1183 + C33137 * C1196 +
            C1826 * C1178 - C1827 * C1167 - C1826 * C1179 + C33148 * C1194) *
               C33115 +
           (C1830 * C2675 - C1831 * C2672 - C1830 * C2676 + C33118 * C2681 +
            C1828 * C1180 - C1829 * C1168 - C1828 * C1181 + C33137 * C1195 +
            C1826 * C723 - C1827 * C718 - C1826 * C724 + C33148 * C733) *
               C5473 +
           (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
            C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
            C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
               C5472) *
              C32773 * C352 +
          ((C1826 * C374 - C1827 * C359 - C1826 * C375 + C33148 * C389 +
            C1828 * C2128 - C1829 * C2120 - C1828 * C2129 + C33137 * C2138 +
            C1830 * C2130 - C1831 * C2121 - C1830 * C2131 + C33118 * C2139) *
               C5472 +
           (C1826 * C1180 - C1827 * C1168 - C1826 * C1181 + C33148 * C1195 +
            C1828 * C2675 - C1829 * C2672 - C1828 * C2676 + C33137 * C2681 +
            C1830 * C7064 - C1831 * C7060 - C1830 * C7065 + C33118 * C7069) *
               C5473 +
           (C1826 * C1182 - C1827 * C1169 - C1826 * C1183 + C33148 * C1196 +
            C1828 * C7062 - C1829 * C7059 - C1828 * C7063 + C33137 * C7068 +
            C1830 * C7066 - C1831 * C7061 - C1830 * C7067 + C33118 * C7070) *
               C33115) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C598 -
           ((C1538 + C1539 + C1516) * C33106 + (C1540 + C1541 + C1525) * C852 +
            ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                 C33115 +
             (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) *
                 C33135 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33147) *
                C851) *
               C599) *
              C32818 * C478 +
          (((C1525 + C1541 + C1540) * C851 + (C1516 + C1539 + C1538) * C852 +
            (C630 * C33147 +
             (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) *
                 C33135 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C33115) *
                C33106) *
               C599 -
           ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
            (C883 + C856 + C855) * C851) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C598 -
           (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
                C103) *
               C599) *
              C32818 * C478 +
          ((C636 * C103 + C635 * C104 + C634 * C105 + C633 * C106 +
            (C113 * C601 - C114 * C600 - C113 * C602 + C32873 * C603) * C32856 *
                C107) *
               C599 -
           (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
            C179 * C103) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C32856 * C851 +
            (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
               C598 -
           ((C2521 + C2522 + C2523) * C32856 * C33106 +
            (C2524 + C2525 + C2526) * C32856 * C852 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C32856 * C851) *
               C599) *
              C32818 * C478 +
          (((C2526 + C2525 + C2524) * C32856 * C851 +
            (C2523 + C2522 + C2521) * C32856 * C852 +
            (C1826 * C366 - C1827 * C355 - C1826 * C367 + C33148 * C385 +
             C1828 * C380 - C1829 * C362 - C1828 * C381 + C33137 * C392 +
             C1830 * C2481 - C1831 * C2480 - C1830 * C2482 + C33118 * C2483) *
                C32856 * C33106) *
               C599 -
           ((C1893 + C1894 + C1895) * C32856 * C33106 +
            (C1892 + C1891 + C1890) * C32856 * C852 +
            (C1889 + C1888 + C1887) * C32856 * C851) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C32818 * C478 +
          (((C6013 + C6012 + C6011) * C33144 +
            (C6010 + C6009 + C6008) * C33131 +
            (C630 * C5472 + C3272 * C5473 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C33115) *
                C33106) *
               C599 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
                C6225 +
            (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                C6224 +
            C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C32818 * C478 +
          ((C632 * C6221 + C1537 * C6222 + C1536 * C6223 +
            (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                C6224 +
            (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                C6225) *
               C32773 * C599 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
             C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
             C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
                C5472 +
            (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
               C32773 * C598 -
           ((C1830 * C7062 - C1831 * C7059 - C1830 * C7063 + C33118 * C7068 +
             C1828 * C1182 - C1829 * C1169 - C1828 * C1183 + C33137 * C1196 +
             C1826 * C1178 - C1827 * C1167 - C1826 * C1179 + C33148 * C1194) *
                C33115 +
            (C1830 * C2675 - C1831 * C2672 - C1830 * C2676 + C33118 * C2681 +
             C1828 * C1180 - C1829 * C1168 - C1828 * C1181 + C33137 * C1195 +
             C1826 * C723 - C1827 * C718 - C1826 * C724 + C33148 * C733) *
                C5473 +
            (C1830 * C2128 - C1831 * C2120 - C1830 * C2129 + C33118 * C2138 +
             C1828 * C374 - C1829 * C359 - C1828 * C375 + C33137 * C389 +
             C1826 * C372 - C1827 * C358 - C1826 * C373 + C33148 * C388) *
                C5472) *
               C32773 * C599) *
              C32818 * C478 +
          (((C2526 + C2525 + C2524) * C5472 +
            (C1826 * C725 - C1827 * C719 - C1826 * C726 + C33148 * C734 +
             C1828 * C1184 - C1829 * C1170 - C1828 * C1185 + C33137 * C1197 +
             C1830 * C2677 - C1831 * C2673 - C1830 * C2678 + C33118 * C2682) *
                C5473 +
            (C1826 * C1176 - C1827 * C1166 - C1826 * C1177 + C33148 * C1193 +
             C1828 * C1186 - C1829 * C1171 - C1828 * C1187 + C33137 * C1198 +
             C1830 * C7389 - C1831 * C7388 - C1830 * C7390 + C33118 * C7391) *
                C33115) *
               C32773 * C599 -
           ((C7242 + C7241 + C7240) * C33115 + (C2332 + C2333 + C2334) * C5473 +
            (C1889 + C1888 + C1887) * C5472) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C245 -
          ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) * C32856 *
               C107 +
           (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) * C32856 *
               C106 +
           (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) * C32856 *
               C105 +
           (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) * C32856 *
               C104 +
           (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
               C103) *
              C32832 * C246 +
          ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) * C32856 *
               C103 +
           (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) * C32856 *
               C104 +
           (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) * C32856 *
               C105 +
           (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) * C32856 *
               C106 +
           (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) * C32856 *
               C107) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C32818 * C110 -
          (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
           C179 * C103) *
              C32832 * C32818 * C111 +
          (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) * C32856 *
               C107) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C33135 +
            (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C32818 * C110 -
          ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
           (C883 + C856 + C855) * C851) *
              C32832 * C32818 * C111 +
          (C886 * C851 + (C872 + C871 + C885) * C852 +
           (C177 * C33147 + C509 * C33135 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
           (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
           (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
              C32832 * C246 +
          ((C1052 * C33147 + C1055 * C33135 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C851 +
           (C880 * C33147 + C1054 * C33135 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C852 +
           (C881 * C33147 + C1053 * C33135 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C32832 * C32818 * C110 -
          ((C1893 + C1894 + C1895) * C32856 * C33106 +
           (C1892 + C1891 + C1890) * C32856 * C852 +
           (C1889 + C1888 + C1887) * C32856 * C851) *
              C32832 * C32818 * C111 +
          (C1898 * C851 + (C1895 + C1894 + C1893) * C32856 * C852 +
           (C1826 * C130 - C1827 * C119 - C1826 * C131 + C33148 * C140 +
            C1828 * C364 - C1829 * C354 - C1828 * C365 + C33137 * C384 +
            C1830 * C382 - C1831 * C363 - C1830 * C383 + C33118 * C393) *
               C32856 * C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C32856 * C851 +
           (C1887 + C1888 + C1889) * C32856 * C852 + C1898 * C33106) *
              C32832 * C245 -
          ((C1830 * C1188 - C1831 * C1172 - C1830 * C1189 + C33118 * C1199 +
            C1828 * C727 - C1829 * C720 - C1828 * C728 + C33137 * C735 +
            C1826 * C263 - C1827 * C251 - C1826 * C264 + C33148 * C281) *
               C32856 * C33106 +
           (C1830 * C1184 - C1831 * C1170 - C1830 * C1185 + C33118 * C1197 +
            C1828 * C725 - C1829 * C719 - C1828 * C726 + C33137 * C734 +
            C1826 * C265 - C1827 * C252 - C1826 * C266 + C33148 * C282) *
               C32856 * C852 +
           (C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195 +
            C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
            C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283) *
               C32856 * C851) *
              C32832 * C246 +
          ((C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
            C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
            C1830 * C1182 - C1831 * C1169 - C1830 * C1183 + C33118 * C1196) *
               C32856 * C851 +
           (C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285 +
            C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
            C1830 * C1186 - C1831 * C1171 - C1830 * C1187 + C33118 * C1198) *
               C32856 * C852 +
           (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
            C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
            C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
               C32856 * C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C1826 * C267 - C1827 * C253 - C1826 * C268 + C33148 * C283 +
            C1828 * C723 - C1829 * C718 - C1828 * C724 + C33137 * C733 +
            C1830 * C1180 - C1831 * C1168 - C1830 * C1181 + C33118 * C1195) *
               C5473 +
           (C1826 * C269 - C1827 * C254 - C1826 * C270 + C33148 * C284 +
            C1828 * C1178 - C1829 * C1167 - C1828 * C1179 + C33137 * C1194 +
            C1830 * C1182 - C1831 * C1169 - C1830 * C1183 + C33118 * C1196) *
               C33115) *
              C32773 * C32832 * C32818 * C110 -
          ((C1830 * C1186 - C1831 * C1171 - C1830 * C1187 + C33118 * C1198 +
            C1828 * C1176 - C1829 * C1166 - C1828 * C1177 + C33137 * C1193 +
            C1826 * C271 - C1827 * C255 - C1826 * C272 + C33148 * C285) *
               C33115 +
           (C2332 + C2333 + C2334) * C5473 + (C1889 + C1888 + C1887) * C5472) *
              C32773 * C32832 * C32818 * C111 +
          (C1897 * C5472 + (C2331 + C2330 + C2329) * C5473 +
           (C1826 * C273 - C1827 * C256 - C1826 * C274 + C33148 * C286 +
            C1828 * C1174 - C1829 * C1165 - C1828 * C1175 + C33137 * C1192 +
            C1830 * C1190 - C1831 * C1173 - C1830 * C1191 + C33118 * C1200) *
               C33115) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1826 * C122 - C1827 * C115 - C1826 * C123 + C33148 * C136 +
            C1828 * C372 - C1829 * C358 - C1828 * C373 + C33137 * C388 +
            C1830 * C374 - C1831 * C359 - C1830 * C375 + C33118 * C389) *
               C5472 +
           (C6939 + C6940 + C6941) * C5473 + C6949 * C33115) *
              C32773 * C32832 * C245 -
          ((C6945 + C6946 + C6947) * C33115 + (C6944 + C6943 + C6942) * C5473 +
           (C6941 + C6940 + C6939) * C5472) *
              C32773 * C32832 * C246 +
          (C6949 * C5472 + (C6947 + C6946 + C6945) * C5473 +
           (C1826 * C1008 - C1827 * C999 - C1826 * C1009 + C33148 * C1017 +
            C1828 * C6376 - C1829 * C6373 - C1828 * C6377 + C33137 * C6382 +
            C1830 * C6380 - C1831 * C6375 - C1830 * C6381 + C33118 * C6384) *
               C33115) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32856 * C2784 +
            (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
               C32832 * C476 -
           ((C3930 + C3931) * C32856 * C33084 +
            (C3932 + C3933) * C32856 * C2786 +
            (C3934 + C3935) * C32856 * C2785 +
            (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
             C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
                C32856 * C2784) *
               C32832 * C477) *
              C478 +
          (((C3935 + C3934) * C32856 * C2784 +
            (C3933 + C3932) * C32856 * C2785 +
            (C3931 + C3930) * C32856 * C2786 +
            (C3503 * C259 - C3504 * C249 - C3503 * C260 + C33085 * C279 +
             C3505 * C731 - C3506 * C722 - C3505 * C732 + C32960 * C737) *
                C32856 * C33084) *
               C32832 * C477 -
           ((C3562 + C3563) * C32856 * C33084 +
            (C3561 + C3560) * C32856 * C2786 +
            (C3559 + C3558) * C32856 * C2785 +
            (C3557 + C3556) * C32856 * C2784) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C5472 +
             (C4582 + C4583) * C5473 + C8590 * C33115) *
                C33065 +
            ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
                C32783) *
               C32832 * C476 -
           (((C8616 + C8617) * C33115 + C8960 * C5473 + C4932 * C5472) *
                C32783 +
            ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
             (C4583 + C4582) * C5472) *
                C33065) *
               C32832 * C477) *
              C478 +
          (((C4930 * C5472 + C8591 * C5473 + (C8617 + C8616) * C33115) *
                C33065 +
            (C4385 * C5472 + (C4585 + C4584) * C5473 +
             (C3503 * C1002 - C3504 * C996 - C3503 * C1003 + C33085 * C1014 +
              C3505 * C1694 - C3506 * C1689 - C3505 * C1695 + C32960 * C1698) *
                 C33115) *
                C32783) *
               C32832 * C477 -
           (((C4584 + C4585) * C33115 + C4931 * C5473 +
             (C3559 + C3558) * C5472) *
                C32783 +
            (C8960 * C33115 + C4932 * C5473 + (C3557 + C3556) * C5472) *
                C33065) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32856 * C2784 +
            (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
               C598 -
           ((C4102 + C4103) * C32856 * C33084 +
            (C4104 + C4105) * C32856 * C2786 +
            (C4106 + C4107) * C32856 * C2785 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C32856 * C2784) *
               C599) *
              C476 +
          (((C3503 * C723 - C3504 * C718 - C3503 * C724 + C33085 * C733 +
             C3505 * C1180 - C3506 * C1168 - C3505 * C1181 + C32960 * C1195) *
                C32856 * C2784 +
            (C3503 * C725 - C3504 * C719 - C3503 * C726 + C33085 * C734 +
             C3505 * C1184 - C3506 * C1170 - C3505 * C1185 + C32960 * C1197) *
                C32856 * C2785 +
            (C3503 * C727 - C3504 * C720 - C3503 * C728 + C33085 * C735 +
             C3505 * C1188 - C3506 * C1172 - C3505 * C1189 + C32960 * C1199) *
                C32856 * C2786 +
            (C3503 * C729 - C3504 * C721 - C3503 * C730 + C33085 * C736 +
             C3505 * C2289 - C3506 * C2288 - C3505 * C2290 + C32960 * C2291) *
                C32856 * C33084) *
               C599 -
           ((C3930 + C3931) * C32856 * C33084 +
            (C3932 + C3933) * C32856 * C2786 +
            (C3934 + C3935) * C32856 * C2785 +
            (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
             C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
                C32856 * C2784) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C5472 +
             (C4582 + C4583) * C5473 + C8590 * C33115) *
                C33065 +
            ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
                C32783) *
               C598 -
           (((C9167 + C9168) * C33115 + (C5153 + C5154) * C5473 +
             (C4106 + C4107) * C5472) *
                C32783 +
            ((C9375 + C9376) * C33115 + (C5361 + C5362) * C5473 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C5472) *
                C33065) *
               C599) *
              C476 +
          ((((C5362 + C5361) * C5472 + (C9376 + C9375) * C5473 +
             (C3503 * C1690 - C3504 * C1687 - C3503 * C1691 + C33085 * C1696 +
              C3505 * C6378 - C3506 * C6374 - C3505 * C6379 + C32960 * C6383) *
                 C33115) *
                C33065 +
            ((C5154 + C5153) * C5472 + (C9168 + C9167) * C5473 +
             (C3503 * C1692 - C3504 * C1688 - C3503 * C1693 + C33085 * C1697 +
              C3505 * C7218 - C3506 * C7217 - C3505 * C7219 + C32960 * C7220) *
                 C33115) *
                C32783) *
               C599 -
           (((C8616 + C8617) * C33115 + C8960 * C5473 + C4932 * C5472) *
                C32783 +
            ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
             (C4583 + C4582) * C5472) *
                C33065) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C32832 * C245 -
          ((C3505 * C729 - C3506 * C721 - C3505 * C730 + C32960 * C736 +
            C3503 * C261 - C3504 * C250 - C3503 * C262 + C33085 * C280) *
               C32856 * C33084 +
           (C3505 * C727 - C3506 * C720 - C3505 * C728 + C32960 * C735 +
            C3503 * C263 - C3504 * C251 - C3503 * C264 + C33085 * C281) *
               C32856 * C2786 +
           (C3505 * C725 - C3506 * C719 - C3505 * C726 + C32960 * C734 +
            C3503 * C265 - C3504 * C252 - C3503 * C266 + C33085 * C282) *
               C32856 * C2785 +
           (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
            C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
               C32856 * C2784) *
              C32832 * C246 +
          ((C3503 * C269 - C3504 * C254 - C3503 * C270 + C33085 * C284 +
            C3505 * C1178 - C3506 * C1167 - C3505 * C1179 + C32960 * C1194) *
               C32856 * C2784 +
           (C3503 * C271 - C3504 * C255 - C3503 * C272 + C33085 * C285 +
            C3505 * C1176 - C3506 * C1166 - C3505 * C1177 + C32960 * C1193) *
               C32856 * C2785 +
           (C3503 * C273 - C3504 * C256 - C3503 * C274 + C33085 * C286 +
            C3505 * C1174 - C3506 * C1165 - C3505 * C1175 + C32960 * C1192) *
               C32856 * C2786 +
           (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
            C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
               C32856 * C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C32832 * C32818 * C110 -
          ((C3562 + C3563) * C32856 * C33084 +
           (C3561 + C3560) * C32856 * C2786 + (C3559 + C3558) * C32856 * C2785 +
           (C3557 + C3556) * C32856 * C2784) *
              C32832 * C32818 * C111 +
          (C3566 * C2784 + C3567 * C2785 + (C3563 + C3562) * C32856 * C2786 +
           (C3503 * C132 - C3504 * C120 - C3503 * C133 + C33085 * C141 +
            C3505 * C601 - C3506 * C600 - C3505 * C602 + C32960 * C603) *
               C32856 * C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C351 -
          ((C3505 * C380 - C3506 * C362 - C3505 * C381 + C32960 * C392 +
            C3503 * C366 - C3504 * C355 - C3503 * C367 + C33085 * C385) *
               C32856 * C33084 +
           (C3505 * C378 - C3506 * C361 - C3505 * C379 + C32960 * C391 +
            C3503 * C368 - C3504 * C356 - C3503 * C369 + C33085 * C386) *
               C32856 * C2786 +
           (C3505 * C376 - C3506 * C360 - C3505 * C377 + C32960 * C390 +
            C3503 * C370 - C3504 * C357 - C3503 * C371 + C33085 * C387) *
               C32856 * C2785 +
           (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
            C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
               C32856 * C2784) *
              C352 +
          ((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
            C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
               C32856 * C2784 +
           (C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
            C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
               C32856 * C2785 +
           (C3503 * C378 - C3504 * C361 - C3503 * C379 + C33085 * C391 +
            C3505 * C2124 - C3506 * C2118 - C3505 * C2125 + C32960 * C2136) *
               C32856 * C2786 +
           (C3503 * C380 - C3504 * C362 - C3503 * C381 + C33085 * C392 +
            C3505 * C2481 - C3506 * C2480 - C3505 * C2482 + C32960 * C2483) *
               C32856 * C33084) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + (C4589 + C4588) * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 +
            (C4587 + C4586) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C4584 + C4585) * C33115 + C4931 * C5473 +
            (C3559 + C3558) * C5472) *
               C32783 +
           ((C4586 + C4587) * C33115 + C4932 * C5473 +
            (C3557 + C3556) * C5472) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C3564 * C5472 + C4385 * C5473 + (C4585 + C4584) * C33115) * C33065 +
           (C3565 * C5472 + (C3931 + C3930) * C5473 +
            (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
             C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + C8590 * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C8616 + C8617) * C33115 + (C4586 + C4587) * C5473 +
            C4932 * C5472) *
               C32783 +
           ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
            (C4583 + C4582) * C5472) *
               C33065) *
              C32832 * C246 +
          ((C8590 * C5472 + (C8619 + C8618) * C5473 +
            (C3503 * C1008 - C3504 * C999 - C3503 * C1009 + C33085 * C1017 +
             C3505 * C6376 - C3506 * C6373 - C3505 * C6377 + C32960 * C6382) *
                C33115) *
               C33065 +
           (C8591 * C5472 + (C8617 + C8616) * C5473 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + C8590 * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
               C32783) *
              C351 -
          (((C3505 * C1186 - C3506 * C1171 - C3505 * C1187 + C32960 * C1198 +
             C3503 * C1176 - C3504 * C1166 - C3503 * C1177 + C33085 * C1193) *
                C33115 +
            (C5153 + C5154) * C5473 + (C4106 + C4107) * C5472) *
               C32783 +
           ((C3505 * C1182 - C3506 * C1169 - C3505 * C1183 + C32960 * C1196 +
             C3503 * C1178 - C3504 * C1167 - C3503 * C1179 + C33085 * C1194) *
                C33115 +
            (C5361 + C5362) * C5473 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C5472) *
               C33065) *
              C352 +
          (((C3503 * C374 - C3504 * C359 - C3503 * C375 + C33085 * C389 +
             C3505 * C2128 - C3506 * C2120 - C3505 * C2129 + C32960 * C2138) *
                C5472 +
            (C3503 * C1180 - C3504 * C1168 - C3503 * C1181 + C33085 * C1195 +
             C3505 * C2675 - C3506 * C2672 - C3505 * C2676 + C32960 * C2681) *
                C5473 +
            (C3503 * C1182 - C3504 * C1169 - C3503 * C1183 + C33085 * C1196 +
             C3505 * C7062 - C3506 * C7059 - C3505 * C7063 + C32960 * C7068) *
                C33115) *
               C33065 +
           ((C3503 * C376 - C3504 * C360 - C3503 * C377 + C33085 * C390 +
             C3505 * C2126 - C3506 * C2119 - C3505 * C2127 + C32960 * C2137) *
                C5472 +
            (C3503 * C1184 - C3504 * C1170 - C3503 * C1185 + C33085 * C1197 +
             C3505 * C2677 - C3506 * C2673 - C3505 * C2678 + C32960 * C2682) *
                C5473 +
            (C3503 * C1186 - C3504 * C1171 - C3503 * C1187 + C33085 * C1198 +
             C3505 * C7389 - C3506 * C7388 - C3505 * C7390 + C32960 * C7391) *
                C33115) *
               C32783) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C32856 * C2784 +
            (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
               C598 -
           ((C4102 + C4103) * C32856 * C33084 +
            (C4104 + C4105) * C32856 * C2786 +
            (C4106 + C4107) * C32856 * C2785 +
            (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
             C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                C32856 * C2784) *
               C599) *
              C32818 * C478 +
          (((C4107 + C4106) * C32856 * C2784 +
            (C4105 + C4104) * C32856 * C2785 +
            (C4103 + C4102) * C32856 * C2786 +
            (C3503 * C364 - C3504 * C354 - C3503 * C365 + C33085 * C384 +
             C3505 * C382 - C3506 * C363 - C3505 * C383 + C32960 * C393) *
                C32856 * C33084) *
               C599 -
           ((C3562 + C3563) * C32856 * C33084 +
            (C3561 + C3560) * C32856 * C2786 +
            (C3559 + C3558) * C32856 * C2785 +
            (C3557 + C3556) * C32856 * C2784) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
              C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                 C5472 +
             (C4582 + C4583) * C5473 + C8590 * C33115) *
                C33065 +
            ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
                C32783) *
               C598 -
           (((C9167 + C9168) * C33115 + (C5153 + C5154) * C5473 +
             (C4106 + C4107) * C5472) *
                C32783 +
            ((C3505 * C1182 - C3506 * C1169 - C3505 * C1183 + C32960 * C1196 +
              C3503 * C1178 - C3504 * C1167 - C3503 * C1179 + C33085 * C1194) *
                 C33115 +
             (C5361 + C5362) * C5473 +
             (C3505 * C374 - C3506 * C359 - C3505 * C375 + C32960 * C389 +
              C3503 * C372 - C3504 * C358 - C3503 * C373 + C33085 * C388) *
                 C5472) *
                C33065) *
               C599) *
              C32818 * C478 +
          ((((C4107 + C4106) * C5472 + (C5154 + C5153) * C5473 +
             (C9168 + C9167) * C33115) *
                C33065 +
            ((C4105 + C4104) * C5472 + (C5152 + C5151) * C5473 +
             (C3503 * C1174 - C3504 * C1165 - C3503 * C1175 + C33085 * C1192 +
              C3505 * C1190 - C3506 * C1173 - C3505 * C1191 + C32960 * C1200) *
                 C33115) *
                C32783) *
               C599 -
           (((C4584 + C4585) * C33115 + C4931 * C5473 +
             (C3559 + C3558) * C5472) *
                C32783 +
            (C8960 * C33115 + C4932 * C5473 + (C3557 + C3556) * C5472) *
                C33065) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C32832 * C32818 * C110 -
          ((C3562 + C3563) * C32856 * C33084 +
           (C3561 + C3560) * C32856 * C2786 + (C3559 + C3558) * C32856 * C2785 +
           (C3557 + C3556) * C32856 * C2784) *
              C32832 * C32818 * C111 +
          (C3566 * C2784 + C3567 * C2785 + (C3563 + C3562) * C32856 * C2786 +
           (C3503 * C132 - C3504 * C120 - C3503 * C133 + C33085 * C141 +
            C3505 * C601 - C3506 * C600 - C3505 * C602 + C32960 * C603) *
               C32856 * C33084) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
            C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
               C32856 * C2784 +
           (C3556 + C3557) * C32856 * C2785 + C3566 * C2786 + C3567 * C33084) *
              C32832 * C245 -
          ((C3505 * C729 - C3506 * C721 - C3505 * C730 + C32960 * C736 +
            C3503 * C261 - C3504 * C250 - C3503 * C262 + C33085 * C280) *
               C32856 * C33084 +
           (C3505 * C727 - C3506 * C720 - C3505 * C728 + C32960 * C735 +
            C3503 * C263 - C3504 * C251 - C3503 * C264 + C33085 * C281) *
               C32856 * C2786 +
           (C3505 * C725 - C3506 * C719 - C3505 * C726 + C32960 * C734 +
            C3503 * C265 - C3504 * C252 - C3503 * C266 + C33085 * C282) *
               C32856 * C2785 +
           (C3505 * C723 - C3506 * C718 - C3505 * C724 + C32960 * C733 +
            C3503 * C267 - C3504 * C253 - C3503 * C268 + C33085 * C283) *
               C32856 * C2784) *
              C32832 * C246 +
          ((C3503 * C269 - C3504 * C254 - C3503 * C270 + C33085 * C284 +
            C3505 * C1178 - C3506 * C1167 - C3505 * C1179 + C32960 * C1194) *
               C32856 * C2784 +
           (C3503 * C271 - C3504 * C255 - C3503 * C272 + C33085 * C285 +
            C3505 * C1176 - C3506 * C1166 - C3505 * C1177 + C32960 * C1193) *
               C32856 * C2785 +
           (C3503 * C273 - C3504 * C256 - C3503 * C274 + C33085 * C286 +
            C3505 * C1174 - C3506 * C1165 - C3505 * C1175 + C32960 * C1192) *
               C32856 * C2786 +
           (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
            C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
               C32856 * C33084) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + (C4589 + C4588) * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 +
            (C4587 + C4586) * C33115) *
               C32783) *
              C32832 * C32818 * C110 -
          (((C4584 + C4585) * C33115 + C4931 * C5473 +
            (C3559 + C3558) * C5472) *
               C32783 +
           ((C4586 + C4587) * C33115 + C4932 * C5473 +
            (C3557 + C3556) * C5472) *
               C33065) *
              C32832 * C32818 * C111 +
          ((C3564 * C5472 + C4385 * C5473 + (C4585 + C4584) * C33115) * C33065 +
           (C3565 * C5472 + (C3931 + C3930) * C5473 +
            (C3503 * C275 - C3504 * C257 - C3503 * C276 + C33085 * C287 +
             C3505 * C1504 - C3506 * C1503 - C3505 * C1505 + C32960 * C1506) *
                C33115) *
               C32783) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3503 * C122 - C3504 * C115 - C3503 * C123 + C33085 * C136 +
             C3505 * C372 - C3506 * C358 - C3505 * C373 + C32960 * C388) *
                C5472 +
            (C4582 + C4583) * C5473 + C8590 * C33115) *
               C33065 +
           ((C3556 + C3557) * C5472 + C4930 * C5473 + C8591 * C33115) *
               C32783) *
              C32832 * C245 -
          (((C8616 + C8617) * C33115 + (C4586 + C4587) * C5473 +
            C4932 * C5472) *
               C32783 +
           ((C8618 + C8619) * C33115 + (C4588 + C4589) * C5473 +
            (C4583 + C4582) * C5472) *
               C33065) *
              C32832 * C246 +
          ((C8590 * C5472 + (C8619 + C8618) * C5473 +
            (C3503 * C1008 - C3504 * C999 - C3503 * C1009 + C33085 * C1017 +
             C3505 * C6376 - C3506 * C6373 - C3505 * C6377 + C32960 * C6382) *
                C33115) *
               C33065 +
           (C8591 * C5472 + (C8617 + C8616) * C5473 +
            (C3503 * C1010 - C3504 * C1000 - C3503 * C1011 + C33085 * C1018 +
             C3505 * C6561 - C3506 * C6560 - C3505 * C6562 + C32960 * C6563) *
                C33115) *
               C32783) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C32832 * C476 -
           (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
                C103) *
               C32832 * C477) *
              C478 +
          ((C516 * C103 + C515 * C104 + C514 * C105 + C513 * C106 +
            (C113 * C481 - C114 * C480 - C113 * C482 + C32873 * C483) * C32856 *
                C107) *
               C32832 * C477 -
           (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
            C179 * C103) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C32832 * C476 -
           ((C1352 + C1353 + C1354) * C33106 + (C1355 + C1356 + C1357) * C852 +
            (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
               C32832 * C477) *
              C478 +
          (((C1357 + C1356 + C1355) * C851 + (C1354 + C1353 + C1352) * C852 +
            (C510 * C33147 + C882 * C33135 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C33115) *
                C33106) *
               C32832 * C477 -
           ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
            (C883 + C856 + C855) * C851) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C32832 * C476 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C32832 * C477) *
              C478 +
          (((C5861 + C5860 + C5859) * C33144 +
            (C5858 + C5857 + C5856) * C33131 +
            (C510 * C5472 + C882 * C5473 +
             (C113 * C1348 - C114 * C1347 - C113 * C1349 + C32873 * C1350) *
                 C33115) *
                C33106) *
               C32832 * C477 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C32832 * C476 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C32832 * C477) *
              C478 +
          ((C512 * C6221 + C880 * C6222 + C1054 * C6223 + C6478 * C6224 +
            (C113 * C6468 - C114 * C6467 - C113 * C6469 + C32873 * C6470) *
                C6225) *
               C32773 * C32832 * C477 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C32832 * C476) *
              C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C598 -
           (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
                C103) *
               C599) *
              C476 +
          (((C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) * C32856 *
                C103 +
            (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) * C32856 *
                C104 +
            (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) * C32856 *
                C105 +
            (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) * C32856 *
                C106 +
            (C113 * C731 - C114 * C722 - C113 * C732 + C32873 * C737) * C32856 *
                C107) *
               C599 -
           (C513 * C107 + C514 * C106 + C515 * C105 + C516 * C104 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
                C103) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C598 -
           ((C1538 + C1539 + C1516) * C33106 + (C1540 + C1541 + C1525) * C852 +
            (C1712 * C33115 + C1713 * C33135 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33147) *
                C851) *
               C599) *
              C476 +
          (((C1713 * C33147 + C1712 * C33135 +
             (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                 C33115) *
                C851 +
            (C1537 * C33147 + C1536 * C33135 +
             (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                 C33115) *
                C852 +
            (C1535 * C33147 + C1534 * C33135 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33115) *
                C33106) *
               C599 -
           ((C1352 + C1353 + C1354) * C33106 + (C1355 + C1356 + C1357) * C852 +
            (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C476 +
          (((C1713 * C5472 + C1712 * C5473 +
             (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                 C33115) *
                C33144 +
            (C1537 * C5472 + C1536 * C5473 +
             (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                 C33115) *
                C33131 +
            (C1535 * C5472 + C1534 * C5473 +
             (C113 * C1694 - C114 * C1689 - C113 * C1695 + C32873 * C1698) *
                 C33115) *
                C33106) *
               C599 -
           ((C5856 + C5857 + C5858) * C33106 +
            (C5859 + C5860 + C5861) * C33131 +
            (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
               C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           (C6663 * C6225 + C6664 * C6224 + C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C476 +
          ((C1713 * C6221 + C1712 * C6222 + C6664 * C6223 + C6663 * C6224 +
            (C113 * C6647 - C114 * C6646 - C113 * C6648 + C32873 * C6649) *
                C6225) *
               C32773 * C599 -
           (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
            C1051 * C6221) *
               C32773 * C598) *
              C477) *
         C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C245 -
          ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) * C32856 *
               C107 +
           (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) * C32856 *
               C106 +
           (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) * C32856 *
               C105 +
           (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) * C32856 *
               C104 +
           (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
               C103) *
              C32832 * C246 +
          ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) * C32856 *
               C103 +
           (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) * C32856 *
               C104 +
           (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) * C32856 *
               C105 +
           (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) * C32856 *
               C106 +
           (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) * C32856 *
               C107) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C32818 * C110 -
          (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
           C179 * C103) *
              C32832 * C32818 * C111 +
          (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) * C32856 *
               C107) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C351 -
          ((C113 * C364 - C114 * C354 - C113 * C365 + C32873 * C384) * C32856 *
               C107 +
           (C113 * C366 - C114 * C355 - C113 * C367 + C32873 * C385) * C32856 *
               C106 +
           (C113 * C368 - C114 * C356 - C113 * C369 + C32873 * C386) * C32856 *
               C105 +
           (C113 * C370 - C114 * C357 - C113 * C371 + C32873 * C387) * C32856 *
               C104 +
           (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
               C103) *
              C352 +
          ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C32856 *
               C103 +
           (C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C32856 *
               C104 +
           (C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C32856 *
               C105 +
           (C113 * C380 - C114 * C362 - C113 * C381 + C32873 * C392) * C32856 *
               C106 +
           (C113 * C382 - C114 * C363 - C113 * C383 + C32873 * C393) * C32856 *
               C107) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C33135 +
            (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C32818 * C110 -
          ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
           (C883 + C856 + C855) * C851) *
              C32832 * C32818 * C111 +
          (C886 * C851 + (C872 + C871 + C885) * C852 +
           (C177 * C33147 + C509 * C33135 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
           (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
           (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
              C32832 * C246 +
          ((C1052 * C33147 + C1055 * C33135 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C851 +
           (C880 * C33147 + C1054 * C33135 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C852 +
           (C881 * C33147 + C1053 * C33135 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C351 -
          (((C113 * C1174 - C114 * C1165 - C113 * C1175 + C32873 * C1192) *
                C33115 +
            (C113 * C727 - C114 * C720 - C113 * C728 + C32873 * C735) * C33135 +
            C631 * C33147) *
               C33106 +
           ((C113 * C1176 - C114 * C1166 - C113 * C1177 + C32873 * C1193) *
                C33115 +
            (C113 * C725 - C114 * C719 - C113 * C726 + C32873 * C734) * C33135 +
            C632 * C33147) *
               C852 +
           ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                C33115 +
            (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) * C33135 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                C33147) *
               C851) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C33147 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C33135 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33115) *
               C851 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C33147 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C33135 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33115) *
               C852 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C33147 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C33135 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C33115) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C351 -
          ((C1534 * C33115 + C1535 * C5473 + C631 * C5472) * C33106 +
           (C1536 * C33115 + C1537 * C5473 + C632 * C5472) * C33131 +
           (C1712 * C33115 + C1713 * C5473 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C5472) *
               C33144) *
              C352 +
          (((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C5472 +
            (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
                C5473 +
            (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
                C33115) *
               C33144 +
           ((C113 * C376 - C114 * C360 - C113 * C377 + C32873 * C390) * C5472 +
            (C113 * C1184 - C114 * C1170 - C113 * C1185 + C32873 * C1197) *
                C5473 +
            (C113 * C1186 - C114 * C1171 - C113 * C1187 + C32873 * C1198) *
                C33115) *
               C33131 +
           ((C113 * C378 - C114 * C361 - C113 * C379 + C32873 * C391) * C5472 +
            (C113 * C1188 - C114 * C1172 - C113 * C1189 + C32873 * C1199) *
                C5473 +
            (C113 * C1190 - C114 * C1173 - C113 * C1191 + C32873 * C1200) *
                C33115) *
               C33106) *
              C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C351 -
          ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
               C6225 +
           (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
               C6224 +
           C1712 * C6223 + C1713 * C6222 +
           (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
              C32773 * C352 +
          ((C113 * C374 - C114 * C359 - C113 * C375 + C32873 * C389) * C6221 +
           (C113 * C1180 - C114 * C1168 - C113 * C1181 + C32873 * C1195) *
               C6222 +
           (C113 * C1182 - C114 * C1169 - C113 * C1183 + C32873 * C1196) *
               C6223 +
           (C113 * C6378 - C114 * C6374 - C113 * C6379 + C32873 * C6383) *
               C6224 +
           (C113 * C6380 - C114 * C6375 - C113 * C6381 + C32873 * C6384) *
               C6225) *
              C32773 * C353) *
         C32818 * C32806) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
                C103 +
            C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
               C598 -
           (C633 * C107 + C634 * C106 + C635 * C105 + C636 * C104 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C32856 *
                C103) *
               C599) *
              C32818 * C478 +
          ((C636 * C103 + C635 * C104 + C634 * C105 + C633 * C106 +
            (C113 * C601 - C114 * C600 - C113 * C602 + C32873 * C603) * C32856 *
                C107) *
               C599 -
           (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
            C179 * C103) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) *
                 C33147 +
             C1051 * C33135 + C1052 * C33115) *
                C851 +
            (C855 + C856 + C883) * C852 + C886 * C33106) *
               C598 -
           ((C1538 + C1539 + C1516) * C33106 + (C1540 + C1541 + C1525) * C852 +
            ((C113 * C1178 - C114 * C1167 - C113 * C1179 + C32873 * C1194) *
                 C33115 +
             (C113 * C723 - C114 * C718 - C113 * C724 + C32873 * C733) *
                 C33135 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C33147) *
                C851) *
               C599) *
              C32818 * C478 +
          (((C1525 + C1541 + C1540) * C851 + (C1516 + C1539 + C1538) * C852 +
            (C630 * C33147 +
             (C113 * C729 - C114 * C721 - C113 * C730 + C32873 * C736) *
                 C33135 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C33115) *
                C33106) *
               C599 -
           ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
            (C883 + C856 + C855) * C851) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
             C1051 * C5473 + C1052 * C33115) *
                C33144 +
            (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
               C598 -
           ((C6008 + C6009 + C6010) * C33106 +
            (C6011 + C6012 + C6013) * C33131 +
            (C1712 * C33115 + C1713 * C5473 +
             (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) *
                 C5472) *
                C33144) *
               C599) *
              C32818 * C478 +
          (((C6013 + C6012 + C6011) * C33144 +
            (C6010 + C6009 + C6008) * C33131 +
            (C630 * C5472 + C3272 * C5473 +
             (C113 * C1504 - C114 * C1503 - C113 * C1505 + C32873 * C1506) *
                 C33115) *
                C33106) *
               C599 -
           ((C5485 + C5486 + C5487) * C33106 +
            (C5484 + C5483 + C5482) * C33131 +
            (C5481 + C5480 + C5479) * C33144) *
               C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
            C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
               C32773 * C598 -
           ((C113 * C6376 - C114 * C6373 - C113 * C6377 + C32873 * C6382) *
                C6225 +
            (C113 * C1690 - C114 * C1687 - C113 * C1691 + C32873 * C1696) *
                C6224 +
            C1712 * C6223 + C1713 * C6222 +
            (C113 * C372 - C114 * C358 - C113 * C373 + C32873 * C388) * C6221) *
               C32773 * C599) *
              C32818 * C478 +
          ((C632 * C6221 + C1537 * C6222 + C1536 * C6223 +
            (C113 * C1692 - C114 * C1688 - C113 * C1693 + C32873 * C1697) *
                C6224 +
            (C113 * C6561 - C114 * C6560 - C113 * C6562 + C32873 * C6563) *
                C6225) *
               C32773 * C599 -
           (C6478 * C6225 + C1054 * C6224 + C880 * C6223 + C512 * C6222 +
            C174 * C6221) *
               C32773 * C598) *
              C32818 * C479)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C32818 * C110 -
          (C183 * C107 + C182 * C106 + C181 * C105 + C180 * C104 +
           C179 * C103) *
              C32832 * C32818 * C111 +
          (C180 * C103 + C181 * C104 + C182 * C105 + C183 * C106 +
           (C113 * C134 - C114 * C121 - C113 * C135 + C32873 * C142) * C32856 *
               C107) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C32856 *
               C103 +
           C179 * C104 + C180 * C105 + C181 * C106 + C182 * C107) *
              C32832 * C245 -
          ((C113 * C259 - C114 * C249 - C113 * C260 + C32873 * C279) * C32856 *
               C107 +
           (C113 * C261 - C114 * C250 - C113 * C262 + C32873 * C280) * C32856 *
               C106 +
           (C113 * C263 - C114 * C251 - C113 * C264 + C32873 * C281) * C32856 *
               C105 +
           (C113 * C265 - C114 * C252 - C113 * C266 + C32873 * C282) * C32856 *
               C104 +
           (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C32856 *
               C103) *
              C32832 * C246 +
          ((C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) * C32856 *
               C103 +
           (C113 * C271 - C114 * C255 - C113 * C272 + C32873 * C285) * C32856 *
               C104 +
           (C113 * C273 - C114 * C256 - C113 * C274 + C32873 * C286) * C32856 *
               C105 +
           (C113 * C275 - C114 * C257 - C113 * C276 + C32873 * C287) * C32856 *
               C106 +
           (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) * C32856 *
               C107) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            (C113 * C267 - C114 * C253 - C113 * C268 + C32873 * C283) * C33135 +
            (C113 * C269 - C114 * C254 - C113 * C270 + C32873 * C284) *
                C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C32818 * C110 -
          ((C885 + C871 + C872) * C33106 + (C884 + C862 + C861) * C852 +
           (C883 + C856 + C855) * C851) *
              C32832 * C32818 * C111 +
          (C886 * C851 + (C872 + C871 + C885) * C852 +
           (C177 * C33147 + C509 * C33135 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C33147 +
            C1051 * C33135 + C1052 * C33115) *
               C851 +
           (C855 + C856 + C883) * C852 + C886 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C33135 + C511 * C33147) * C33106 +
           (C1054 * C33115 + C880 * C33135 + C512 * C33147) * C852 +
           (C1055 * C33115 + C1052 * C33135 + C1051 * C33147) * C851) *
              C32832 * C246 +
          ((C1052 * C33147 + C1055 * C33135 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C851 +
           (C880 * C33147 + C1054 * C33135 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C852 +
           (C881 * C33147 + C1053 * C33135 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C32818 * C110 -
          ((C5485 + C5486 + C5487) * C33106 + (C5484 + C5483 + C5482) * C33131 +
           (C5481 + C5480 + C5479) * C33144) *
              C32832 * C32818 * C111 +
          (C5489 * C33144 + (C5487 + C5486 + C5485) * C33131 +
           (C177 * C5472 + C509 * C5473 +
            (C113 * C277 - C114 * C258 - C113 * C278 + C32873 * C288) *
                C33115) *
               C33106) *
              C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C5472 +
            C1051 * C5473 + C1052 * C33115) *
               C33144 +
           (C5479 + C5480 + C5481) * C33131 + C5489 * C33106) *
              C32832 * C245 -
          ((C1053 * C33115 + C881 * C5473 + C511 * C5472) * C33106 +
           (C1054 * C33115 + C880 * C5473 + C512 * C5472) * C33131 +
           (C1055 * C33115 + C1052 * C5473 + C1051 * C5472) * C33144) *
              C32832 * C246 +
          ((C1052 * C5472 + C1055 * C5473 +
            (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
                C33115) *
               C33144 +
           (C880 * C5472 + C1054 * C5473 +
            (C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
                C33115) *
               C33131 +
           (C881 * C5472 + C1053 * C5473 +
            (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
                C33115) *
               C33106) *
              C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 +
           (C113 * C1008 - C114 * C999 - C113 * C1009 + C32873 * C1017) *
               C6225) *
              C32773 * C32832 * C32818 * C110 -
          ((C113 * C1010 - C114 * C1000 - C113 * C1011 + C32873 * C1018) *
               C6225 +
           C1054 * C6224 + C880 * C6223 + C512 * C6222 + C174 * C6221) *
              C32773 * C32832 * C32818 * C111 +
          (C175 * C6221 + C511 * C6222 + C881 * C6223 + C1053 * C6224 +
           (C113 * C1012 - C114 * C1001 - C113 * C1013 + C32873 * C1019) *
               C6225) *
              C32773 * C32832 * C32818 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C122 - C114 * C115 - C113 * C123 + C32873 * C136) * C6221 +
           C1051 * C6222 + C1052 * C6223 + C1055 * C6224 + C6310 * C6225) *
              C32773 * C32832 * C245 -
          (C6311 * C6225 + C6310 * C6224 + C1055 * C6223 + C1052 * C6222 +
           C1051 * C6221) *
              C32773 * C32832 * C246 +
          (C1052 * C6221 + C1055 * C6222 + C6310 * C6223 + C6311 * C6224 +
           (C113 * C6293 - C114 * C6290 - C113 * C6294 + C32873 * C6296) *
               C6225) *
              C32773 * C32832 * C247) *
         C32806) /
            (p * q * std::sqrt(p + q));
}
