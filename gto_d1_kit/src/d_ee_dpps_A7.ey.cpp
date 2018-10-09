/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_1_et(const double ae,
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
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C26835 = g[0];
    const double C26853 = g[1];
    const double C26870 = g[2];
    const double C26887 = g[3];
    const double C26979 = g[4];
    const double C26996 = g[5];
    const double C27012 = g[6];
    const double C27028 = g[7];
    const double C27122 = g[8];
    const double C27139 = g[9];
    const double C27155 = g[10];
    const double C27171 = g[11];
    const double C27264 = g[12];
    const double C27283 = g[13];
    const double C27298 = g[14];
    const double C27313 = g[15];
    const double C27400 = g[16];
    const double C27418 = g[17];
    const double C27433 = g[18];
    const double C27450 = g[19];
    const double C27536 = g[20];
    const double C27553 = g[21];
    const double C27568 = g[22];
    const double C27583 = g[23];
    const double C27668 = g[24];
    const double C27684 = g[25];
    const double C27803 = g[26];
    const double C27920 = g[27];
    const double C28022 = g[28];
    const double C28037 = g[29];
    const double C28066 = g[30];
    const double C28081 = g[31];
    const double C28138 = g[32];
    const double C29165 = g[33];
    const double C29269 = g[34];
    const double C29453 = g[35];
    const double C30611 = g[36];
    const double C26840 = vrx[0];
    const double C26857 = vrx[1];
    const double C26858 = vrx[2];
    const double C26907 = vrx[3];
    const double C26952 = vrx[4];
    const double C26983 = vrx[5];
    const double C27000 = vrx[6];
    const double C27047 = vrx[7];
    const double C27048 = vrx[8];
    const double C27095 = vrx[9];
    const double C27126 = vrx[10];
    const double C27143 = vrx[11];
    const double C27190 = vrx[12];
    const double C27235 = vrx[13];
    const double C27236 = vrx[14];
    const double C27270 = vrx[15];
    const double C27373 = vrx[16];
    const double C27405 = vrx[17];
    const double C27540 = vrx[18];
    const double C27672 = vrx[19];
    const double C27688 = vrx[20];
    const double C27717 = vrx[21];
    const double C27746 = vrx[22];
    const double C27761 = vrx[23];
    const double C27776 = vrx[24];
    const double C27791 = vrx[25];
    const double C27821 = vrx[26];
    const double C27836 = vrx[27];
    const double C27864 = vrx[28];
    const double C27893 = vrx[29];
    const double C27908 = vrx[30];
    const double C27938 = vrx[31];
    const double C27953 = vrx[32];
    const double C27982 = vrx[33];
    const double C28010 = vrx[34];
    const double C28172 = vry[0];
    const double C28188 = vry[1];
    const double C28189 = vry[2];
    const double C28236 = vry[3];
    const double C28281 = vry[4];
    const double C28311 = vry[5];
    const double C28327 = vry[6];
    const double C28372 = vry[7];
    const double C28373 = vry[8];
    const double C28420 = vry[9];
    const double C28450 = vry[10];
    const double C28466 = vry[11];
    const double C28511 = vry[12];
    const double C28556 = vry[13];
    const double C28557 = vry[14];
    const double C28589 = vry[15];
    const double C28689 = vry[16];
    const double C28720 = vry[17];
    const double C28851 = vry[18];
    const double C28979 = vry[19];
    const double C28994 = vry[20];
    const double C29023 = vry[21];
    const double C29052 = vry[22];
    const double C29067 = vry[23];
    const double C29082 = vry[24];
    const double C29097 = vry[25];
    const double C29126 = vry[26];
    const double C29141 = vry[27];
    const double C29170 = vry[28];
    const double C29199 = vry[29];
    const double C29214 = vry[30];
    const double C29243 = vry[31];
    const double C29258 = vry[32];
    const double C29288 = vry[33];
    const double C29316 = vry[34];
    const double C29474 = vrz[0];
    const double C29490 = vrz[1];
    const double C29491 = vrz[2];
    const double C29538 = vrz[3];
    const double C29583 = vrz[4];
    const double C29613 = vrz[5];
    const double C29629 = vrz[6];
    const double C29674 = vrz[7];
    const double C29675 = vrz[8];
    const double C29722 = vrz[9];
    const double C29752 = vrz[10];
    const double C29768 = vrz[11];
    const double C29813 = vrz[12];
    const double C29858 = vrz[13];
    const double C29859 = vrz[14];
    const double C29891 = vrz[15];
    const double C29991 = vrz[16];
    const double C30022 = vrz[17];
    const double C30153 = vrz[18];
    const double C30281 = vrz[19];
    const double C30296 = vrz[20];
    const double C30325 = vrz[21];
    const double C30354 = vrz[22];
    const double C30369 = vrz[23];
    const double C30384 = vrz[24];
    const double C30399 = vrz[25];
    const double C30428 = vrz[26];
    const double C30443 = vrz[27];
    const double C30471 = vrz[28];
    const double C30500 = vrz[29];
    const double C30515 = vrz[30];
    const double C30544 = vrz[31];
    const double C30559 = vrz[32];
    const double C30588 = vrz[33];
    const double C30617 = vrz[34];
    const double C27266 = 2 * q;
    const double C30811 = C27540 / q;
    const double C30810 = C27405 / q;
    const double C30809 = C27938 * p;
    const double C30808 = C27908 * p;
    const double C30807 = C27893 * p;
    const double C30806 = C27540 * p;
    const double C30805 = C27836 * p;
    const double C30804 = C27270 / q;
    const double C30803 = C27791 * p;
    const double C30802 = C27776 * p;
    const double C30801 = C27761 * p;
    const double C30800 = C27746 * p;
    const double C30799 = C27405 * p;
    const double C30798 = C27717 * p;
    const double C30797 = C27270 * p;
    const double C30788 = C27373 * p;
    const double C30781 = C27190 * p;
    const double C30779 = C27143 * p;
    const double C30776 = C27095 * p;
    const double C30773 = C27000 * p;
    const double C30770 = C26952 * p;
    const double C30769 = de * zCD;
    const double C30768 = be * zAB;
    const double C30765 = C26907 * p;
    const double C30764 = de * yCD;
    const double C30763 = be * yAB;
    const double C30761 = de * xCD;
    const double C30760 = be * xAB;
    const double C30870 = C28851 / q;
    const double C30869 = C28720 / q;
    const double C30868 = C29243 * p;
    const double C30867 = C29214 * p;
    const double C30866 = C29199 * p;
    const double C30865 = C28851 * p;
    const double C30864 = C29141 * p;
    const double C30863 = C28589 / q;
    const double C30862 = C29097 * p;
    const double C30861 = C29082 * p;
    const double C30860 = C29067 * p;
    const double C30859 = C29052 * p;
    const double C30858 = C28720 * p;
    const double C30857 = C29023 * p;
    const double C30856 = C28589 * p;
    const double C30847 = C28689 * p;
    const double C30840 = C28511 * p;
    const double C30838 = C28466 * p;
    const double C30835 = C28420 * p;
    const double C30832 = C28327 * p;
    const double C30829 = C28281 * p;
    const double C30826 = C28236 * p;
    const double C30926 = C30153 / q;
    const double C30925 = C30022 / q;
    const double C30924 = C30544 * p;
    const double C30923 = C30515 * p;
    const double C30922 = C30500 * p;
    const double C30921 = C30153 * p;
    const double C30920 = C30443 * p;
    const double C30919 = C29891 / q;
    const double C30918 = C30399 * p;
    const double C30917 = C30384 * p;
    const double C30916 = C30369 * p;
    const double C30915 = C30354 * p;
    const double C30914 = C30022 * p;
    const double C30913 = C30325 * p;
    const double C30912 = C29891 * p;
    const double C30903 = C29991 * p;
    const double C30896 = C29813 * p;
    const double C30894 = C29768 * p;
    const double C30891 = C29722 * p;
    const double C30888 = C29629 * p;
    const double C30885 = C29583 * p;
    const double C30882 = C29538 * p;
    const double C30796 = C27672 / C27266;
    const double C30795 = C27540 / C27266;
    const double C30791 = C27235 / C27266;
    const double C30790 = C27405 / C27266;
    const double C30786 = C26857 / C27266;
    const double C30784 = C27047 / C27266;
    const double C30783 = C27270 / C27266;
    const double C30778 = C27126 / C27266;
    const double C30772 = C26983 / C27266;
    const double C30762 = C26840 / C27266;
    const double C30855 = C28979 / C27266;
    const double C30854 = C28851 / C27266;
    const double C30850 = C28556 / C27266;
    const double C30849 = C28720 / C27266;
    const double C30845 = C28188 / C27266;
    const double C30843 = C28372 / C27266;
    const double C30842 = C28589 / C27266;
    const double C30837 = C28450 / C27266;
    const double C30831 = C28311 / C27266;
    const double C30825 = C28172 / C27266;
    const double C30911 = C30281 / C27266;
    const double C30910 = C30153 / C27266;
    const double C30906 = C29858 / C27266;
    const double C30905 = C30022 / C27266;
    const double C30901 = C29490 / C27266;
    const double C30899 = C29674 / C27266;
    const double C30898 = C29891 / C27266;
    const double C30893 = C29752 / C27266;
    const double C30887 = C29613 / C27266;
    const double C30881 = C29474 / C27266;
    const double C30820 = C30808 / q;
    const double C30819 = C30803 / q;
    const double C30818 = C30801 / q;
    const double C30815 = C30768 + C30769;
    const double C30813 = C30763 + C30764;
    const double C30812 = C30760 + C30761;
    const double C30876 = C30867 / q;
    const double C30875 = C30862 / q;
    const double C30874 = C30860 / q;
    const double C30932 = C30923 / q;
    const double C30931 = C30918 / q;
    const double C30930 = C30916 / q;
    const double C25627 = -(C26840 * C30815 + C30770) / q;
    const double C25696 = -(C26983 * C30815 + C30776) / q;
    const double C25765 = C27235 / q - (C27126 * C30815) / q - (C27236 * p) / q;
    const double C25834 = -(C27270 * C30815 + C30788) / q;
    const double C25903 = C30786 - (C27405 * C30815) / q - C30779 / q;
    const double C25972 = C30784 - (C27540 * C30815) / q - C30781 / q;
    const double C26891 = -(C26857 * C30815 + C30799) / q;
    const double C26892 = -(C26858 * C30815 + C30800) / q;
    const double C26937 = -(C26907 * C30815 + C30802) / q;
    const double C26967 = C30762 - (C26952 * C30815) / q - C30819;
    const double C27032 = -(C27000 * C30815 + C30805) / q;
    const double C27079 = -(C27047 * C30815 + C30806) / q;
    const double C27080 = -(C27048 * C30815 + C30807) / q;
    const double C27110 = C30772 - (C27095 * C30815) / q - C30820;
    const double C27175 = C30810 - (C27143 * C30815) / q - (C27953 * p) / q;
    const double C27220 = C30811 - (C27190 * C30815) / q - (C27982 * p) / q;
    const double C27251 = C30796 - (C27235 * C30815) / q - (C27126 * p) / q;
    const double C27252 =
        (3 * C27126) / C27266 - (C27236 * C30815) / q - (C28010 * p) / q;
    const double C27388 = C30783 - (C27373 * C30815) / q - C30809 / q;
    const double C26041 = -(C28172 * C30815 + C30829) / q;
    const double C26110 = -(C28311 * C30815 + C30835) / q;
    const double C26179 = C28556 / q - (C28450 * C30815) / q - (C28557 * p) / q;
    const double C26248 = -(C28589 * C30815 + C30847) / q;
    const double C26317 = C30845 - (C28720 * C30815) / q - C30838 / q;
    const double C26386 = C30843 - (C28851 * C30815) / q - C30840 / q;
    const double C28220 = -(C28188 * C30815 + C30858) / q;
    const double C28221 = -(C28189 * C30815 + C30859) / q;
    const double C28266 = -(C28236 * C30815 + C30861) / q;
    const double C28357 = -(C28327 * C30815 + C30864) / q;
    const double C28404 = -(C28372 * C30815 + C30865) / q;
    const double C28405 = -(C28373 * C30815 + C30866) / q;
    const double C28496 = C30869 - (C28466 * C30815) / q - (C29258 * p) / q;
    const double C28541 = C30870 - (C28511 * C30815) / q - (C29288 * p) / q;
    const double C28572 = C30855 - (C28556 * C30815) / q - (C28450 * p) / q;
    const double C28573 =
        (3 * C28450) / C27266 - (C28557 * C30815) / q - (C29316 * p) / q;
    const double C28704 = C30842 - (C28689 * C30815) / q - C30868 / q;
    const double C26455 = -(C26853 * be + C29474 * C30815 + C30885) / q;
    const double C26524 = -(C26996 * be + C29613 * C30815 + C30891) / q;
    const double C26593 =
        C29858 / q - (C27139 * be + C29752 * C30815) / q - (C29859 * p) / q;
    const double C26662 = -(C27283 * be + C29891 * C30815 + C30903) / q;
    const double C26731 =
        C30901 - (C27418 * be + C30022 * C30815) / q - C30894 / q;
    const double C26800 =
        C30899 - (C27553 * be + C30153 * C30815) / q - C30896 / q;
    const double C29522 = -(C27668 * be + C29490 * C30815 + C30914) / q;
    const double C29523 = -(C27684 * be + C29491 * C30815 + C30915) / q;
    const double C29568 = -(C28037 * be + C29538 * C30815 + C30917) / q;
    const double C29659 = -(C27803 * be + C29629 * C30815 + C30920) / q;
    const double C29706 = -(C28022 * be + C29674 * C30815 + C30921) / q;
    const double C29707 = -(C29165 * be + C29675 * C30815 + C30922) / q;
    const double C29798 =
        C30925 - (C27920 * be + C29768 * C30815) / q - (C30559 * p) / q;
    const double C29843 =
        C30926 - (C29269 * be + C29813 * C30815) / q - (C30588 * p) / q;
    const double C29874 =
        C30911 - (C28066 * be + C29858 * C30815) / q - (C29752 * p) / q;
    const double C29875 = (3 * C29752) / C27266 -
                          (C30611 * be + C29859 * C30815) / q -
                          (C30617 * p) / q;
    const double C30006 =
        C30898 - (C28138 * be + C29991 * C30815) / q - C30924 / q;
    const double C25604 = -(C26840 * C30813 + C30765) / q;
    const double C25673 = C27047 / q - (C26983 * C30813) / q - (C27048 * p) / q;
    const double C25742 = -(C27126 * C30813 + C30781) / q;
    const double C25811 = C30786 - (C27270 * C30813) / q - C30773 / q;
    const double C25880 = -(C27405 * C30813 + C30788) / q;
    const double C25949 = C30791 - (C27540 * C30813) / q - C30776 / q;
    const double C26874 = -(C26857 * C30813 + C30797) / q;
    const double C26875 = -(C26858 * C30813 + C30798) / q;
    const double C26922 = C30762 - (C26907 * C30813) / q - C30818;
    const double C27016 = C30804 - (C27000 * C30813) / q - (C27821 * p) / q;
    const double C27063 = C30796 - (C27047 * C30813) / q - (C26983 * p) / q;
    const double C27064 =
        (3 * C26983) / C27266 - (C27048 * C30813) / q - (C27864 * p) / q;
    const double C27159 = -(C27143 * C30813 + C30809) / q;
    const double C27205 = C30778 - (C27190 * C30813) / q - C30820;
    const double C27437 = -(C27235 * C30813 + C30806) / q;
    const double C27438 = -(C26952 * C30813 + C30802) / q;
    const double C27482 = C30790 - (C27373 * C30813) / q - C30805 / q;
    const double C27615 = C30811 - (C27095 * C30813) / q - C30807 / q;
    const double C26018 = -(C26853 * be + C28172 * C30813 + C30826) / q;
    const double C26087 =
        C28372 / q - (C26996 * be + C28311 * C30813) / q - (C28373 * p) / q;
    const double C26156 = -(C27139 * be + C28450 * C30813 + C30840) / q;
    const double C26225 =
        C30845 - (C27283 * be + C28589 * C30813) / q - C30832 / q;
    const double C26294 = -(C27418 * be + C28720 * C30813 + C30847) / q;
    const double C26363 =
        C30850 - (C27553 * be + C28851 * C30813) / q - C30835 / q;
    const double C28204 = -(C27668 * be + C28188 * C30813 + C30856) / q;
    const double C28205 = -(C27684 * be + C28189 * C30813 + C30857) / q;
    const double C28342 =
        C30863 - (C27803 * be + C28327 * C30813) / q - (C29126 * p) / q;
    const double C28388 =
        C30855 - (C28022 * be + C28372 * C30813) / q - (C28311 * p) / q;
    const double C28389 = (3 * C28311) / C27266 -
                          (C29165 * be + C28373 * C30813) / q -
                          (C29170 * p) / q;
    const double C28481 = -(C27920 * be + C28466 * C30813 + C30868) / q;
    const double C28750 = -(C28066 * be + C28556 * C30813 + C30865) / q;
    const double C28751 = -(C28081 * be + C28281 * C30813 + C30861) / q;
    const double C28794 =
        C30849 - (C28138 * be + C28689 * C30813) / q - C30864 / q;
    const double C28923 =
        C30870 - (C29453 * be + C28420 * C30813) / q - C30866 / q;
    const double C26432 = -(C29474 * C30813 + C30882) / q;
    const double C26501 = C29674 / q - (C29613 * C30813) / q - (C29675 * p) / q;
    const double C26570 = -(C29752 * C30813 + C30896) / q;
    const double C26639 = C30901 - (C29891 * C30813) / q - C30888 / q;
    const double C26708 = -(C30022 * C30813 + C30903) / q;
    const double C26777 = C30906 - (C30153 * C30813) / q - C30891 / q;
    const double C29506 = -(C29490 * C30813 + C30912) / q;
    const double C29507 = -(C29491 * C30813 + C30913) / q;
    const double C29644 = C30919 - (C29629 * C30813) / q - (C30428 * p) / q;
    const double C29690 = C30911 - (C29674 * C30813) / q - (C29613 * p) / q;
    const double C29691 =
        (3 * C29613) / C27266 - (C29675 * C30813) / q - (C30471 * p) / q;
    const double C29783 = -(C29768 * C30813 + C30924) / q;
    const double C30052 = -(C29858 * C30813 + C30921) / q;
    const double C30053 = -(C29583 * C30813 + C30917) / q;
    const double C30096 = C30905 - (C29991 * C30813) / q - C30920 / q;
    const double C30225 = C30926 - (C29722 * C30813) / q - C30922 / q;
    const double C25580 =
        C26857 / q - (C26853 * be + C26840 * C30812) / q - (C26858 * p) / q;
    const double C25649 = -(C26996 * be + C26983 * C30812 + C30773) / q;
    const double C25718 = -(C27139 * be + C27126 * C30812 + C30779) / q;
    const double C25787 =
        C30784 - (C27283 * be + C27270 * C30812) / q - C30765 / q;
    const double C25856 =
        C30791 - (C27418 * be + C27405 * C30812) / q - C30770 / q;
    const double C25925 = -(C27553 * be + C27540 * C30812 + C30788) / q;
    const double C26839 =
        C30796 - (C27668 * be + C26857 * C30812) / q - (C26840 * p) / q;
    const double C26841 = (3 * C26840) / C27266 -
                          (C27684 * be + C26858 * C30812) / q -
                          (C27688 * p) / q;
    const double C26984 = C30772 - (C27803 * be + C27000 * C30812) / q - C30818;
    const double C27127 = C30778 - (C27920 * be + C27143 * C30812) / q - C30819;
    const double C27269 = -(C28022 * be + C27047 * C30812 + C30797) / q;
    const double C27271 =
        C30804 - (C28037 * be + C26907 * C30812) / q - C30798 / q;
    const double C27404 = -(C28066 * be + C27235 * C30812 + C30799) / q;
    const double C27406 =
        C30810 - (C28081 * be + C26952 * C30812) / q - C30800 / q;
    const double C27541 =
        C30795 - (C28138 * be + C27373 * C30812) / q - C30802 / q;
    const double C25994 = C28188 / q - (C28172 * C30812) / q - (C28189 * p) / q;
    const double C26063 = -(C28311 * C30812 + C30832) / q;
    const double C26132 = -(C28450 * C30812 + C30838) / q;
    const double C26201 = C30843 - (C28589 * C30812) / q - C30826 / q;
    const double C26270 = C30850 - (C28720 * C30812) / q - C30829 / q;
    const double C26339 = -(C28851 * C30812 + C30847) / q;
    const double C28171 = C30855 - (C28188 * C30812) / q - (C28172 * p) / q;
    const double C28173 =
        (3 * C28172) / C27266 - (C28189 * C30812) / q - (C28994 * p) / q;
    const double C28588 = -(C28372 * C30812 + C30856) / q;
    const double C28590 = C30863 - (C28236 * C30812) / q - C30857 / q;
    const double C28719 = -(C28556 * C30812 + C30858) / q;
    const double C28721 = C30869 - (C28281 * C30812) / q - C30859 / q;
    const double C28852 = C30854 - (C28689 * C30812) / q - C30861 / q;
    const double C26408 = C29490 / q - (C29474 * C30812) / q - (C29491 * p) / q;
    const double C26477 = -(C29613 * C30812 + C30888) / q;
    const double C26546 = -(C29752 * C30812 + C30894) / q;
    const double C26615 = C30899 - (C29891 * C30812) / q - C30882 / q;
    const double C26684 = C30906 - (C30022 * C30812) / q - C30885 / q;
    const double C26753 = -(C30153 * C30812 + C30903) / q;
    const double C29473 = C30911 - (C29490 * C30812) / q - (C29474 * p) / q;
    const double C29475 =
        (3 * C29474) / C27266 - (C29491 * C30812) / q - (C30296 * p) / q;
    const double C29890 = -(C29674 * C30812 + C30912) / q;
    const double C29892 = C30919 - (C29538 * C30812) / q - C30913 / q;
    const double C30021 = -(C29858 * C30812 + C30914) / q;
    const double C30023 = C30925 - (C29583 * C30812) / q - C30915 / q;
    const double C30154 = C30910 - (C29991 * C30812) / q - C30917 / q;
    const double C28435 = C30831 - (C28420 * C30815) / q - C30876;
    const double C28526 = C30837 - (C29269 * be + C28511 * C30813) / q - C30876;
    const double C28296 = C30825 - (C28281 * C30815) / q - C30875;
    const double C28451 = C30837 - (C28466 * C30812) / q - C30875;
    const double C28251 = C30825 - (C28037 * be + C28236 * C30813) / q - C30874;
    const double C28312 = C30831 - (C28327 * C30812) / q - C30874;
    const double C29737 = C30887 - (C29453 * be + C29722 * C30815) / q - C30932;
    const double C29828 = C30893 - (C29813 * C30813) / q - C30932;
    const double C29598 = C30881 - (C28081 * be + C29583 * C30815) / q - C30931;
    const double C29753 = C30893 - (C29768 * C30812) / q - C30931;
    const double C29553 = C30881 - (C29538 * C30813) / q - C30930;
    const double C29614 = C30887 - (C29629 * C30812) / q - C30930;
    const double C30787 = C26891 / C27266;
    const double C25596 =
        C26891 / q - (C26887 * be + C25627 * C30812) / q - (C26892 * p) / q;
    const double C30767 = C26937 * p;
    const double C30771 = C26967 * p;
    const double C30775 = C27032 * p;
    const double C30785 = C27079 / C27266;
    const double C25688 = C27079 / q - (C25696 * C30813) / q - (C27080 * p) / q;
    const double C30777 = C27110 * p;
    const double C30780 = C27175 * p;
    const double C30782 = C27220 * p;
    const double C30793 = C27251 / C27266;
    const double C25779 =
        C27251 / q - (C25765 * C30815) / q + C30778 - (C27252 * p) / q;
    const double C30789 = C27388 * p;
    const double C30846 = C28220 / C27266;
    const double C26010 = C28220 / q - (C26041 * C30812) / q - (C28221 * p) / q;
    const double C30828 = C28266 * p;
    const double C30834 = C28357 * p;
    const double C30844 = C28404 / C27266;
    const double C26102 =
        C28404 / q - (C27028 * be + C26110 * C30813) / q - (C28405 * p) / q;
    const double C30839 = C28496 * p;
    const double C30841 = C28541 * p;
    const double C30852 = C28572 / C27266;
    const double C26193 =
        C28572 / q - (C26179 * C30815) / q + C30837 - (C28573 * p) / q;
    const double C30848 = C28704 * p;
    const double C30902 = C29522 / C27266;
    const double C26424 = C29522 / q - (C26455 * C30812) / q - (C29523 * p) / q;
    const double C30884 = C29568 * p;
    const double C30890 = C29659 * p;
    const double C30900 = C29706 / C27266;
    const double C26516 = C29706 / q - (C26524 * C30813) / q - (C29707 * p) / q;
    const double C30895 = C29798 * p;
    const double C30897 = C29843 * p;
    const double C30908 = C29874 / C27266;
    const double C26607 = C29874 / q - (C27171 * be + C26593 * C30815) / q +
                          C30893 - (C29875 * p) / q;
    const double C30904 = C30006 * p;
    const double C25588 =
        C26874 / q - (C26870 * be + C25604 * C30812) / q - (C26875 * p) / q;
    const double C30766 = C26922 * p;
    const double C30774 = C27016 * p;
    const double C25680 =
        C27063 / q - (C25673 * C30813) / q + C30772 - (C27064 * p) / q;
    const double C25726 = -(C27155 * be + C25742 * C30812 + C27159 * p) / q;
    const double C25749 = C30778 - (C25742 * C30813) / q - (C27205 * p) / q;
    const double C30792 = C27437 / C27266;
    const double C30794 = C27482 * p;
    const double C26002 = C28204 / q - (C26018 * C30812) / q - (C28205 * p) / q;
    const double C30833 = C28342 * p;
    const double C26094 = C28388 / q - (C27012 * be + C26087 * C30813) / q +
                          C30831 - (C28389 * p) / q;
    const double C26140 = -(C26156 * C30812 + C28481 * p) / q;
    const double C30851 = C28750 / C27266;
    const double C30853 = C28794 * p;
    const double C26416 = C29506 / q - (C26432 * C30812) / q - (C29507 * p) / q;
    const double C30889 = C29644 * p;
    const double C26508 =
        C29690 / q - (C26501 * C30813) / q + C30887 - (C29691 * p) / q;
    const double C26554 = -(C26570 * C30812 + C29783 * p) / q;
    const double C30907 = C30052 / C27266;
    const double C30909 = C30096 * p;
    const double C25579 = C26839 / q - (C26835 * be + C25580 * C30812) / q +
                          C30762 - (C26841 * p) / q;
    const double C25648 =
        C30772 - (C26979 * be + C25649 * C30812) / q - (C26984 * p) / q;
    const double C25717 =
        C30778 - (C27122 * be + C25718 * C30812) / q - (C27127 * p) / q;
    const double C25786 = C27269 / C27266 -
                          (C27264 * be + C25787 * C30812) / q + C30783 -
                          (C27271 * p) / q;
    const double C25855 = C27404 / C27266 -
                          (C27400 * be + C25856 * C30812) / q + C30790 -
                          (C27406 * p) / q;
    const double C25924 =
        C30795 - (C27536 * be + C25925 * C30812) / q - (C27541 * p) / q;
    const double C25993 =
        C28171 / q - (C25994 * C30812) / q + C30825 - (C28173 * p) / q;
    const double C26200 =
        C28588 / C27266 - (C26201 * C30812) / q + C30842 - (C28590 * p) / q;
    const double C26269 =
        C28719 / C27266 - (C26270 * C30812) / q + C30849 - (C28721 * p) / q;
    const double C26338 = C30854 - (C26339 * C30812) / q - (C28852 * p) / q;
    const double C26407 =
        C29473 / q - (C26408 * C30812) / q + C30881 - (C29475 * p) / q;
    const double C26614 =
        C29890 / C27266 - (C26615 * C30812) / q + C30898 - (C29892 * p) / q;
    const double C26683 =
        C30021 / C27266 - (C26684 * C30812) / q + C30905 - (C30023 * p) / q;
    const double C26752 = C30910 - (C26753 * C30812) / q - (C30154 * p) / q;
    const double C30836 = C28435 * p;
    const double C26163 =
        C30837 - (C27155 * be + C26156 * C30813) / q - (C28526 * p) / q;
    const double C30830 = C28296 * p;
    const double C26131 = C30837 - (C26132 * C30812) / q - (C28451 * p) / q;
    const double C30827 = C28251 * p;
    const double C26062 = C30831 - (C26063 * C30812) / q - (C28312 * p) / q;
    const double C30892 = C29737 * p;
    const double C26577 = C30893 - (C26570 * C30813) / q - (C29828 * p) / q;
    const double C30886 = C29598 * p;
    const double C26545 = C30893 - (C26546 * C30812) / q - (C29753 * p) / q;
    const double C30883 = C29553 * p;
    const double C26476 = C30887 - (C26477 * C30812) / q - (C29614 * p) / q;
    const double C25619 = -(C25627 * C30813 + C30767) / q;
    const double C30816 = C30771 / q;
    const double C25665 = -(C27028 * be + C25696 * C30812 + C30775) / q;
    const double C25826 = C30787 - (C25834 * C30813) / q - C30775 / q;
    const double C25803 =
        C30785 - (C27313 * be + C25834 * C30812) / q - C30767 / q;
    const double C30817 = C30777 / q;
    const double C25734 = -(C27171 * be + C25765 * C30812 + C30780) / q;
    const double C25917 = C30787 - (C25903 * C30815) / q + C30790 - C30780 / q;
    const double C25757 = -(C25765 * C30813 + C30782) / q;
    const double C25986 = C30785 - (C25972 * C30815) / q + C30795 - C30782 / q;
    const double C25848 = C30783 - (C25834 * C30815) / q - C30789 / q;
    const double C25895 = -(C25903 * C30813 + C30789) / q;
    const double C25941 = -(C27583 * be + C25972 * C30812 + C30789) / q;
    const double C26033 = -(C26887 * be + C26041 * C30813 + C30828) / q;
    const double C26079 = -(C26110 * C30812 + C30834) / q;
    const double C26240 =
        C30846 - (C27313 * be + C26248 * C30813) / q - C30834 / q;
    const double C26217 = C30844 - (C26248 * C30812) / q - C30828 / q;
    const double C26148 = -(C26179 * C30812 + C30839) / q;
    const double C26331 = C30846 - (C26317 * C30815) / q + C30849 - C30839 / q;
    const double C26171 = -(C27171 * be + C26179 * C30813 + C30841) / q;
    const double C26400 = C30844 - (C26386 * C30815) / q + C30854 - C30841 / q;
    const double C26262 = C30842 - (C26248 * C30815) / q - C30848 / q;
    const double C26309 = -(C27450 * be + C26317 * C30813 + C30848) / q;
    const double C26355 = -(C26386 * C30812 + C30848) / q;
    const double C26447 = -(C26455 * C30813 + C30884) / q;
    const double C26493 = -(C26524 * C30812 + C30890) / q;
    const double C26654 = C30902 - (C26662 * C30813) / q - C30890 / q;
    const double C26631 = C30900 - (C26662 * C30812) / q - C30884 / q;
    const double C26562 = -(C26593 * C30812 + C30895) / q;
    const double C26745 =
        C30902 - (C27450 * be + C26731 * C30815) / q + C30905 - C30895 / q;
    const double C26585 = -(C26593 * C30813 + C30897) / q;
    const double C26814 =
        C30900 - (C27583 * be + C26800 * C30815) / q + C30910 - C30897 / q;
    const double C26676 =
        C30898 - (C27313 * be + C26662 * C30815) / q - C30904 / q;
    const double C26723 = -(C26731 * C30813 + C30904) / q;
    const double C26769 = -(C26800 * C30812 + C30904) / q;
    const double C30814 = C30766 / q;
    const double C25657 = -(C27012 * be + C25673 * C30812 + C30774) / q;
    const double C25818 =
        C26874 / C27266 - (C25811 * C30813) / q + C30783 - C30774 / q;
    const double C25864 =
        C30792 - (C27433 * be + C25880 * C30812) / q - (C27438 * p) / q;
    const double C25956 =
        C30792 - (C25949 * C30813) / q + C30795 - (C27615 * p) / q;
    const double C25887 = C30790 - (C25880 * C30813) / q - C30794 / q;
    const double C25933 = -(C27568 * be + C25949 * C30812 + C30794) / q;
    const double C26071 = -(C26087 * C30812 + C30833) / q;
    const double C26232 = C28204 / C27266 -
                          (C27298 * be + C26225 * C30813) / q + C30842 -
                          C30833 / q;
    const double C26278 = C30851 - (C26294 * C30812) / q - (C28751 * p) / q;
    const double C26370 = C30851 - (C27568 * be + C26363 * C30813) / q +
                          C30854 - (C28923 * p) / q;
    const double C26301 =
        C30849 - (C27433 * be + C26294 * C30813) / q - C30853 / q;
    const double C26347 = -(C26363 * C30812 + C30853) / q;
    const double C26485 = -(C26501 * C30812 + C30889) / q;
    const double C26646 =
        C29506 / C27266 - (C26639 * C30813) / q + C30898 - C30889 / q;
    const double C26692 = C30907 - (C26708 * C30812) / q - (C30053 * p) / q;
    const double C26784 =
        C30907 - (C26777 * C30813) / q + C30910 - (C30225 * p) / q;
    const double C26715 = C30905 - (C26708 * C30813) / q - C30909 / q;
    const double C26761 = -(C26777 * C30812 + C30909) / q;
    const double C30873 = C30836 / q;
    const double C30872 = C30830 / q;
    const double C30871 = C30827 / q;
    const double C30929 = C30892 / q;
    const double C30928 = C30886 / q;
    const double C30927 = C30883 / q;
    const double C25641 = C30762 - (C25627 * C30815) / q - C30816;
    const double C25872 = C30793 - (C27450 * be + C25903 * C30812) / q - C30816;
    const double C25710 = C30772 - (C25696 * C30815) / q - C30817;
    const double C25964 = C30793 - (C25972 * C30813) / q - C30817;
    const double C25611 = C30762 - (C25604 * C30813) / q - C30814;
    const double C25795 =
        C27063 / C27266 - (C27298 * be + C25811 * C30812) / q - C30814;
    const double C26124 = C30831 - (C26110 * C30815) / q - C30873;
    const double C26378 = C30852 - (C27583 * be + C26386 * C30813) / q - C30873;
    const double C26055 = C30825 - (C26041 * C30815) / q - C30872;
    const double C26286 = C30852 - (C26317 * C30812) / q - C30872;
    const double C26025 = C30825 - (C26870 * be + C26018 * C30813) / q - C30871;
    const double C26209 = C28388 / C27266 - (C26225 * C30812) / q - C30871;
    const double C26538 = C30887 - (C27028 * be + C26524 * C30815) / q - C30929;
    const double C26792 = C30908 - (C26800 * C30813) / q - C30929;
    const double C26469 = C30881 - (C26887 * be + C26455 * C30815) / q - C30928;
    const double C26700 = C30908 - (C26731 * C30812) / q - C30928;
    const double C26439 = C30881 - (C26432 * C30813) / q - C30927;
    const double C26623 = C29690 / C27266 - (C26639 * C30812) / q - C30927;
    etx[0] = C25579;
    etx[1] = C25580;
    etx[2] = C25588;
    etx[3] = C25596;
    etx[4] = C25604;
    etx[5] = C25611;
    etx[6] = C25619;
    etx[7] = C25627;
    etx[8] = C25641;
    etx[9] = C25648;
    etx[10] = C25649;
    etx[11] = C25657;
    etx[12] = C25665;
    etx[13] = C25673;
    etx[14] = C25680;
    etx[15] = C25688;
    etx[16] = C25696;
    etx[17] = C25710;
    etx[18] = C25717;
    etx[19] = C25718;
    etx[20] = C25726;
    etx[21] = C25734;
    etx[22] = C25742;
    etx[23] = C25749;
    etx[24] = C25757;
    etx[25] = C25765;
    etx[26] = C25779;
    etx[27] = C25786;
    etx[28] = C25787;
    etx[29] = C25795;
    etx[30] = C25803;
    etx[31] = C25811;
    etx[32] = C25818;
    etx[33] = C25826;
    etx[34] = C25834;
    etx[35] = C25848;
    etx[36] = C25855;
    etx[37] = C25856;
    etx[38] = C25864;
    etx[39] = C25872;
    etx[40] = C25880;
    etx[41] = C25887;
    etx[42] = C25895;
    etx[43] = C25903;
    etx[44] = C25917;
    etx[45] = C25924;
    etx[46] = C25925;
    etx[47] = C25933;
    etx[48] = C25941;
    etx[49] = C25949;
    etx[50] = C25956;
    etx[51] = C25964;
    etx[52] = C25972;
    etx[53] = C25986;
    ety[0] = C25993;
    ety[1] = C25994;
    ety[2] = C26002;
    ety[3] = C26010;
    ety[4] = C26018;
    ety[5] = C26025;
    ety[6] = C26033;
    ety[7] = C26041;
    ety[8] = C26055;
    ety[9] = C26062;
    ety[10] = C26063;
    ety[11] = C26071;
    ety[12] = C26079;
    ety[13] = C26087;
    ety[14] = C26094;
    ety[15] = C26102;
    ety[16] = C26110;
    ety[17] = C26124;
    ety[18] = C26131;
    ety[19] = C26132;
    ety[20] = C26140;
    ety[21] = C26148;
    ety[22] = C26156;
    ety[23] = C26163;
    ety[24] = C26171;
    ety[25] = C26179;
    ety[26] = C26193;
    ety[27] = C26200;
    ety[28] = C26201;
    ety[29] = C26209;
    ety[30] = C26217;
    ety[31] = C26225;
    ety[32] = C26232;
    ety[33] = C26240;
    ety[34] = C26248;
    ety[35] = C26262;
    ety[36] = C26269;
    ety[37] = C26270;
    ety[38] = C26278;
    ety[39] = C26286;
    ety[40] = C26294;
    ety[41] = C26301;
    ety[42] = C26309;
    ety[43] = C26317;
    ety[44] = C26331;
    ety[45] = C26338;
    ety[46] = C26339;
    ety[47] = C26347;
    ety[48] = C26355;
    ety[49] = C26363;
    ety[50] = C26370;
    ety[51] = C26378;
    ety[52] = C26386;
    ety[53] = C26400;
    etz[0] = C26407;
    etz[1] = C26408;
    etz[2] = C26416;
    etz[3] = C26424;
    etz[4] = C26432;
    etz[5] = C26439;
    etz[6] = C26447;
    etz[7] = C26455;
    etz[8] = C26469;
    etz[9] = C26476;
    etz[10] = C26477;
    etz[11] = C26485;
    etz[12] = C26493;
    etz[13] = C26501;
    etz[14] = C26508;
    etz[15] = C26516;
    etz[16] = C26524;
    etz[17] = C26538;
    etz[18] = C26545;
    etz[19] = C26546;
    etz[20] = C26554;
    etz[21] = C26562;
    etz[22] = C26570;
    etz[23] = C26577;
    etz[24] = C26585;
    etz[25] = C26593;
    etz[26] = C26607;
    etz[27] = C26614;
    etz[28] = C26615;
    etz[29] = C26623;
    etz[30] = C26631;
    etz[31] = C26639;
    etz[32] = C26646;
    etz[33] = C26654;
    etz[34] = C26662;
    etz[35] = C26676;
    etz[36] = C26683;
    etz[37] = C26684;
    etz[38] = C26692;
    etz[39] = C26700;
    etz[40] = C26708;
    etz[41] = C26715;
    etz[42] = C26723;
    etz[43] = C26731;
    etz[44] = C26745;
    etz[45] = C26752;
    etz[46] = C26753;
    etz[47] = C26761;
    etz[48] = C26769;
    etz[49] = C26777;
    etz[50] = C26784;
    etz[51] = C26792;
    etz[52] = C26800;
    etz[53] = C26814;
}
