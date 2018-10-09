/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_1_et(const double ae,
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
    const double C2434 = g[1];
    const double C2467 = g[4];
    const double C2500 = g[7];
    const double C2695 = g[10];
    const double C2728 = g[13];
    const double C2761 = g[16];
    const double C2956 = g[19];
    const double C2989 = g[22];
    const double C3022 = g[25];
    const double C3216 = g[28];
    const double C3246 = g[31];
    const double C3276 = g[34];
    const double C3459 = g[37];
    const double C3489 = g[40];
    const double C3519 = g[43];
    const double C3693 = g[46];
    const double C3723 = g[49];
    const double C3753 = g[52];
    const double C9295 = g[54];
    const double C9329 = g[55];
    const double C9345 = g[56];
    const double C9361 = g[57];
    const double C9392 = g[58];
    const double C9570 = g[59];
    const double C9586 = g[60];
    const double C9602 = g[61];
    const double C9617 = g[62];
    const double C9707 = g[63];
    const double C9723 = g[64];
    const double C9739 = g[65];
    const double C9755 = g[66];
    const double C9843 = g[67];
    const double C9875 = g[68];
    const double C9890 = g[69];
    const double C9905 = g[70];
    const double C9934 = g[71];
    const double C10113 = g[72];
    const double C10129 = g[73];
    const double C10144 = g[74];
    const double C10159 = g[75];
    const double C10249 = g[76];
    const double C10265 = g[77];
    const double C10280 = g[78];
    const double C10296 = g[79];
    const double C10385 = g[80];
    const double C10417 = g[81];
    const double C10432 = g[82];
    const double C10447 = g[83];
    const double C10477 = g[84];
    const double C10655 = g[85];
    const double C10671 = g[86];
    const double C10686 = g[87];
    const double C10701 = g[88];
    const double C10789 = g[89];
    const double C10805 = g[90];
    const double C10820 = g[91];
    const double C10836 = g[92];
    const double C10939 = g[93];
    const double C11053 = g[94];
    const double C11069 = g[95];
    const double C11084 = g[96];
    const double C11099 = g[97];
    const double C11199 = g[98];
    const double C11327 = g[99];
    const double C11440 = g[100];
    const double C11455 = g[101];
    const double C11574 = g[102];
    const double C11634 = g[103];
    const double C11692 = g[104];
    const double C11779 = g[105];
    const double C11839 = g[106];
    const double C11897 = g[107];
    const double C11983 = g[108];
    const double C12027 = g[109];
    const double C12085 = g[110];
    const double C12100 = g[111];
    const double C12115 = g[112];
    const double C14590 = g[113];
    const double C14664 = g[114];
    const double C14793 = g[115];
    const double C14851 = g[116];
    const double C17655 = g[117];
    const double C9300 = vrx[0];
    const double C9317 = vrx[1];
    const double C9333 = vrx[2];
    const double C9349 = vrx[3];
    const double C9426 = vrx[4];
    const double C9441 = vrx[5];
    const double C9514 = vrx[6];
    const double C9529 = vrx[7];
    const double C9590 = vrx[8];
    const double C9635 = vrx[9];
    const double C9680 = vrx[10];
    const double C9727 = vrx[11];
    const double C9816 = vrx[12];
    const double C9847 = vrx[13];
    const double C9863 = vrx[14];
    const double C9966 = vrx[15];
    const double C9981 = vrx[16];
    const double C9982 = vrx[17];
    const double C10057 = vrx[18];
    const double C10072 = vrx[19];
    const double C10177 = vrx[20];
    const double C10222 = vrx[21];
    const double C10314 = vrx[22];
    const double C10358 = vrx[23];
    const double C10389 = vrx[24];
    const double C10405 = vrx[25];
    const double C10509 = vrx[26];
    const double C10524 = vrx[27];
    const double C10597 = vrx[28];
    const double C10612 = vrx[29];
    const double C10613 = vrx[30];
    const double C10762 = vrx[31];
    const double C10897 = vrx[32];
    const double C11027 = vrx[33];
    const double C11444 = vrx[34];
    const double C11459 = vrx[35];
    const double C11474 = vrx[36];
    const double C11503 = vrx[37];
    const double C11532 = vrx[38];
    const double C11547 = vrx[39];
    const double C11562 = vrx[40];
    const double C11592 = vrx[41];
    const double C11607 = vrx[42];
    const double C11622 = vrx[43];
    const double C11680 = vrx[44];
    const double C11710 = vrx[45];
    const double C11738 = vrx[46];
    const double C11767 = vrx[47];
    const double C11797 = vrx[48];
    const double C11812 = vrx[49];
    const double C11827 = vrx[50];
    const double C11885 = vrx[51];
    const double C11943 = vrx[52];
    const double C11958 = vrx[53];
    const double C12015 = vrx[54];
    const double C12073 = vrx[55];
    const double C12148 = vry[0];
    const double C12165 = vry[1];
    const double C12180 = vry[2];
    const double C12195 = vry[3];
    const double C12270 = vry[4];
    const double C12285 = vry[5];
    const double C12358 = vry[6];
    const double C12373 = vry[7];
    const double C12432 = vry[8];
    const double C12475 = vry[9];
    const double C12520 = vry[10];
    const double C12565 = vry[11];
    const double C12652 = vry[12];
    const double C12682 = vry[13];
    const double C12698 = vry[14];
    const double C12797 = vry[15];
    const double C12812 = vry[16];
    const double C12813 = vry[17];
    const double C12888 = vry[18];
    const double C12903 = vry[19];
    const double C13004 = vry[20];
    const double C13049 = vry[21];
    const double C13137 = vry[22];
    const double C13181 = vry[23];
    const double C13211 = vry[24];
    const double C13227 = vry[25];
    const double C13327 = vry[26];
    const double C13342 = vry[27];
    const double C13415 = vry[28];
    const double C13430 = vry[29];
    const double C13431 = vry[30];
    const double C13576 = vry[31];
    const double C13707 = vry[32];
    const double C13836 = vry[33];
    const double C14246 = vry[34];
    const double C14260 = vry[35];
    const double C14275 = vry[36];
    const double C14304 = vry[37];
    const double C14333 = vry[38];
    const double C14348 = vry[39];
    const double C14363 = vry[40];
    const double C14392 = vry[41];
    const double C14407 = vry[42];
    const double C14422 = vry[43];
    const double C14479 = vry[44];
    const double C14508 = vry[45];
    const double C14536 = vry[46];
    const double C14565 = vry[47];
    const double C14595 = vry[48];
    const double C14610 = vry[49];
    const double C14625 = vry[50];
    const double C14683 = vry[51];
    const double C14740 = vry[52];
    const double C14755 = vry[53];
    const double C14812 = vry[54];
    const double C14870 = vry[55];
    const double C14942 = vrz[0];
    const double C14959 = vrz[1];
    const double C14974 = vrz[2];
    const double C14989 = vrz[3];
    const double C15064 = vrz[4];
    const double C15079 = vrz[5];
    const double C15152 = vrz[6];
    const double C15167 = vrz[7];
    const double C15226 = vrz[8];
    const double C15269 = vrz[9];
    const double C15314 = vrz[10];
    const double C15359 = vrz[11];
    const double C15446 = vrz[12];
    const double C15476 = vrz[13];
    const double C15492 = vrz[14];
    const double C15591 = vrz[15];
    const double C15606 = vrz[16];
    const double C15607 = vrz[17];
    const double C15682 = vrz[18];
    const double C15697 = vrz[19];
    const double C15798 = vrz[20];
    const double C15843 = vrz[21];
    const double C15931 = vrz[22];
    const double C15975 = vrz[23];
    const double C16005 = vrz[24];
    const double C16021 = vrz[25];
    const double C16121 = vrz[26];
    const double C16136 = vrz[27];
    const double C16209 = vrz[28];
    const double C16224 = vrz[29];
    const double C16225 = vrz[30];
    const double C16370 = vrz[31];
    const double C16501 = vrz[32];
    const double C16630 = vrz[33];
    const double C17040 = vrz[34];
    const double C17054 = vrz[35];
    const double C17069 = vrz[36];
    const double C17098 = vrz[37];
    const double C17127 = vrz[38];
    const double C17142 = vrz[39];
    const double C17157 = vrz[40];
    const double C17186 = vrz[41];
    const double C17201 = vrz[42];
    const double C17216 = vrz[43];
    const double C17273 = vrz[44];
    const double C17302 = vrz[45];
    const double C17330 = vrz[46];
    const double C17359 = vrz[47];
    const double C17388 = vrz[48];
    const double C17403 = vrz[49];
    const double C17418 = vrz[50];
    const double C17475 = vrz[51];
    const double C17532 = vrz[52];
    const double C17547 = vrz[53];
    const double C17603 = vrz[54];
    const double C17661 = vrz[55];
    const double C9297 = 2 * q;
    const double C17826 = C11943 * p;
    const double C17825 = C11885 * p;
    const double C17824 = C11027 / q;
    const double C17823 = C11827 * p;
    const double C17822 = C11812 * p;
    const double C17821 = C11767 * p;
    const double C17820 = C10314 * p;
    const double C17819 = C11738 * p;
    const double C17818 = C11680 * p;
    const double C17817 = C11622 * p;
    const double C17816 = C11607 * p;
    const double C17815 = C11592 * p;
    const double C17814 = C11562 * p;
    const double C17813 = C11547 * p;
    const double C17812 = C11532 * p;
    const double C17811 = C9727 * p;
    const double C17810 = C11503 * p;
    const double C17809 = C9590 * p;
    const double C17808 = C11474 * p;
    const double C17798 = C11027 * p;
    const double C17790 = C10762 * p;
    const double C17787 = C10597 * p;
    const double C17783 = C10524 * p;
    const double C17782 = C10509 * p;
    const double C17778 = C10389 * p;
    const double C17774 = C10358 * p;
    const double C17772 = C10314 / q;
    const double C17768 = C10222 * p;
    const double C17764 = C10072 * p;
    const double C17763 = C10057 * p;
    const double C17760 = C9966 * p;
    const double C17756 = C9847 * p;
    const double C17752 = C9816 * p;
    const double C17749 = C9727 / q;
    const double C17746 = C9680 * p;
    const double C17742 = C9635 * p;
    const double C17739 = C9590 / q;
    const double C17735 = C9529 * p;
    const double C17734 = C9514 * p;
    const double C17733 = de * zCD;
    const double C17732 = be * zAB;
    const double C17727 = C9441 * p;
    const double C17726 = C9426 * p;
    const double C17725 = de * yCD;
    const double C17724 = be * yAB;
    const double C17721 = de * xCD;
    const double C17720 = be * xAB;
    const double C17959 = C14740 * p;
    const double C17958 = C14683 * p;
    const double C17957 = C13836 / q;
    const double C17956 = C14625 * p;
    const double C17955 = C14610 * p;
    const double C17954 = C14565 * p;
    const double C17953 = C13137 * p;
    const double C17952 = C14536 * p;
    const double C17951 = C14479 * p;
    const double C17950 = C14422 * p;
    const double C17949 = C14407 * p;
    const double C17948 = C14392 * p;
    const double C17947 = C14363 * p;
    const double C17946 = C14348 * p;
    const double C17945 = C14333 * p;
    const double C17944 = C12565 * p;
    const double C17943 = C14304 * p;
    const double C17942 = C12432 * p;
    const double C17941 = C14275 * p;
    const double C17931 = C13836 * p;
    const double C17923 = C13576 * p;
    const double C17920 = C13415 * p;
    const double C17916 = C13342 * p;
    const double C17915 = C13327 * p;
    const double C17911 = C13211 * p;
    const double C17907 = C13181 * p;
    const double C17905 = C13137 / q;
    const double C17901 = C13049 * p;
    const double C17897 = C12903 * p;
    const double C17896 = C12888 * p;
    const double C17893 = C12797 * p;
    const double C17889 = C12682 * p;
    const double C17885 = C12652 * p;
    const double C17882 = C12565 / q;
    const double C17879 = C12520 * p;
    const double C17875 = C12475 * p;
    const double C17872 = C12432 / q;
    const double C17868 = C12373 * p;
    const double C17867 = C12358 * p;
    const double C17862 = C12285 * p;
    const double C17861 = C12270 * p;
    const double C18089 = C17532 * p;
    const double C18088 = C17475 * p;
    const double C18087 = C16630 / q;
    const double C18086 = C17418 * p;
    const double C18085 = C17403 * p;
    const double C18084 = C17359 * p;
    const double C18083 = C15931 * p;
    const double C18082 = C17330 * p;
    const double C18081 = C17273 * p;
    const double C18080 = C17216 * p;
    const double C18079 = C17201 * p;
    const double C18078 = C17186 * p;
    const double C18077 = C17157 * p;
    const double C18076 = C17142 * p;
    const double C18075 = C17127 * p;
    const double C18074 = C15359 * p;
    const double C18073 = C17098 * p;
    const double C18072 = C15226 * p;
    const double C18071 = C17069 * p;
    const double C18061 = C16630 * p;
    const double C18053 = C16370 * p;
    const double C18050 = C16209 * p;
    const double C18046 = C16136 * p;
    const double C18045 = C16121 * p;
    const double C18041 = C16005 * p;
    const double C18037 = C15975 * p;
    const double C18035 = C15931 / q;
    const double C18031 = C15843 * p;
    const double C18027 = C15697 * p;
    const double C18026 = C15682 * p;
    const double C18023 = C15591 * p;
    const double C18019 = C15476 * p;
    const double C18015 = C15446 * p;
    const double C18012 = C15359 / q;
    const double C18009 = C15314 * p;
    const double C18005 = C15269 * p;
    const double C18002 = C15226 / q;
    const double C17998 = C15167 * p;
    const double C17997 = C15152 * p;
    const double C17992 = C15079 * p;
    const double C17991 = C15064 * p;
    const double C17807 = C11459 / C9297;
    const double C17803 = C10612 / C9297;
    const double C17802 = C9727 / C9297;
    const double C17801 = C10314 / C9297;
    const double C17800 = C11027 / C9297;
    const double C17796 = C9349 / C9297;
    const double C17794 = C9981 / C9297;
    const double C17793 = C9590 / C9297;
    const double C17792 = C10613 / C9297;
    const double C17789 = C10524 / C9297;
    const double C17777 = C10405 / C9297;
    const double C17776 = C10389 / C9297;
    const double C17770 = C10072 / C9297;
    const double C17767 = C9982 / C9297;
    const double C17755 = C9863 / C9297;
    const double C17754 = C9847 / C9297;
    const double C17748 = C9529 / C9297;
    const double C17738 = C9441 / C9297;
    const double C17723 = C9317 / C9297;
    const double C17722 = C9300 / C9297;
    const double C17940 = C14260 / C9297;
    const double C17936 = C13430 / C9297;
    const double C17935 = C12565 / C9297;
    const double C17934 = C13137 / C9297;
    const double C17933 = C13836 / C9297;
    const double C17929 = C12195 / C9297;
    const double C17927 = C12812 / C9297;
    const double C17926 = C12432 / C9297;
    const double C17925 = C13431 / C9297;
    const double C17922 = C13342 / C9297;
    const double C17910 = C13227 / C9297;
    const double C17909 = C13211 / C9297;
    const double C17903 = C12903 / C9297;
    const double C17900 = C12813 / C9297;
    const double C17888 = C12698 / C9297;
    const double C17887 = C12682 / C9297;
    const double C17881 = C12373 / C9297;
    const double C17871 = C12285 / C9297;
    const double C17860 = C12165 / C9297;
    const double C17859 = C12148 / C9297;
    const double C18070 = C17054 / C9297;
    const double C18066 = C16224 / C9297;
    const double C18065 = C15359 / C9297;
    const double C18064 = C15931 / C9297;
    const double C18063 = C16630 / C9297;
    const double C18059 = C14989 / C9297;
    const double C18057 = C15606 / C9297;
    const double C18056 = C15226 / C9297;
    const double C18055 = C16225 / C9297;
    const double C18052 = C16136 / C9297;
    const double C18040 = C16021 / C9297;
    const double C18039 = C16005 / C9297;
    const double C18033 = C15697 / C9297;
    const double C18030 = C15607 / C9297;
    const double C18018 = C15492 / C9297;
    const double C18017 = C15476 / C9297;
    const double C18011 = C15167 / C9297;
    const double C18001 = C15079 / C9297;
    const double C17990 = C14959 / C9297;
    const double C17989 = C14942 / C9297;
    const double C17854 = C17825 / q;
    const double C17853 = C17823 / q;
    const double C17852 = C17821 / q;
    const double C17851 = C17818 / q;
    const double C17849 = C17817 / q;
    const double C17850 = C17816 / q;
    const double C17848 = C17815 / q;
    const double C17847 = C17814 / q;
    const double C17846 = C17812 / q;
    const double C17844 = C17774 / q;
    const double C17839 = C17752 / q;
    const double C17834 = C17742 / q;
    const double C17831 = C17732 + C17733;
    const double C17828 = C17724 + C17725;
    const double C17827 = C17720 + C17721;
    const double C17984 = C17958 / q;
    const double C17983 = C17956 / q;
    const double C17982 = C17954 / q;
    const double C17981 = C17951 / q;
    const double C17979 = C17950 / q;
    const double C17980 = C17949 / q;
    const double C17978 = C17948 / q;
    const double C17977 = C17947 / q;
    const double C17976 = C17945 / q;
    const double C17974 = C17907 / q;
    const double C17969 = C17885 / q;
    const double C17964 = C17875 / q;
    const double C18114 = C18088 / q;
    const double C18113 = C18086 / q;
    const double C18112 = C18084 / q;
    const double C18111 = C18081 / q;
    const double C18109 = C18080 / q;
    const double C18110 = C18079 / q;
    const double C18108 = C18078 / q;
    const double C18107 = C18077 / q;
    const double C18106 = C18075 / q;
    const double C18104 = C18037 / q;
    const double C18099 = C18015 / q;
    const double C18094 = C18005 / q;
    const double C2503 = -(C9300 * C17831 + C17734) / q;
    const double C2504 = -(C9317 * C17831 + C17735) / q;
    const double C2587 = -(C9441 * C17831 + C17746) / q;
    const double C2668 = C17723 - (C9529 * C17831) / q - C17839;
    const double C2764 = -(C9847 * C17831 + C17763) / q;
    const double C2765 = -(C9863 * C17831 + C17764) / q;
    const double C2848 = -(C9982 * C17831 + C17768) / q;
    const double C2929 = C17755 - (C10072 * C17831) / q - C17844;
    const double C3025 = C17749 - (C10389 * C17831) / q - C17787 / q;
    const double C3026 = C10612 / q - (C10405 * C17831) / q - (C10613 * p) / q;
    const double C3109 = C17772 - (C10524 * C17831) / q - C17790 / q;
    const double C3190 =
        (3 * C10405) / C9297 - (C10613 * C17831) / q - (C10897 * p) / q;
    const double C3279 = -(C9590 * C17831 + C17798) / q;
    const double C3433 = C17793 - (C11027 * C17831) / q - C17782 / q;
    const double C3522 = C17796 - (C9727 * C17831) / q - C17778 / q;
    const double C3756 = C17794 - (C10314 * C17831) / q - C17783 / q;
    const double C9396 = -(C9333 * C17831 + C17810) / q;
    const double C9411 = -(C9349 * C17831 + C17811) / q;
    const double C9485 = -(C9426 * C17831 + C17813) / q;
    const double C9544 = C17722 - (C9514 * C17831) / q - C17847;
    const double C9665 = -(C9635 * C17831 + C17816) / q;
    const double C9695 = C17738 - (C9680 * C17831) / q - C17849;
    const double C9831 = C9529 / q - (C9816 * C17831) / q - C17851;
    const double C10027 = -(C9966 * C17831 + C17819) / q;
    const double C10042 = -(C9981 * C17831 + C17820) / q;
    const double C10087 = C17754 - (C10057 * C17831) / q - C17852;
    const double C10207 = -(C10177 * C17831 + C17822) / q;
    const double C10237 = C17767 - (C10222 * C17831) / q - C17853;
    const double C10373 = C10072 / q - (C10358 * C17831) / q - C17854;
    const double C10568 = C17824 - (C10509 * C17831) / q - C17826 / q;
    const double C10628 =
        (3 * C10389) / C9297 - (C10597 * C17831) / q - (C11958 * p) / q;
    const double C10643 = C17807 - (C10612 * C17831) / q - (C10405 * p) / q;
    const double C10777 =
        (3 * C10524) / C9297 - (C10762 * C17831) / q - (C12015 * p) / q;
    const double C10912 =
        (2 * C10613) / q - (C10897 * C17831) / q - (C12073 * p) / q;
    const double C5231 = -(C12148 * C17831 + C17867) / q;
    const double C5232 = -(C12165 * C17831 + C17868) / q;
    const double C5314 = -(C12285 * C17831 + C17879) / q;
    const double C5483 = -(C12682 * C17831 + C17896) / q;
    const double C5484 = -(C12698 * C17831 + C17897) / q;
    const double C5566 = -(C12813 * C17831 + C17901) / q;
    const double C5735 = C17882 - (C13211 * C17831) / q - C17920 / q;
    const double C5736 = C13430 / q - (C13227 * C17831) / q - (C13431 * p) / q;
    const double C5818 = C17905 - (C13342 * C17831) / q - C17923 / q;
    const double C5899 =
        (3 * C13227) / C9297 - (C13431 * C17831) / q - (C13707 * p) / q;
    const double C5980 = -(C12432 * C17831 + C17931) / q;
    const double C6133 = C17926 - (C13836 * C17831) / q - C17915 / q;
    const double C6214 = C17929 - (C12565 * C17831) / q - C17911 / q;
    const double C6439 = C17927 - (C13137 * C17831) / q - C17916 / q;
    const double C12240 = -(C12180 * C17831 + C17943) / q;
    const double C12255 = -(C12195 * C17831 + C17944) / q;
    const double C12329 = -(C12270 * C17831 + C17946) / q;
    const double C12505 = -(C12475 * C17831 + C17949) / q;
    const double C12858 = -(C12797 * C17831 + C17952) / q;
    const double C12873 = -(C12812 * C17831 + C17953) / q;
    const double C13034 = -(C13004 * C17831 + C17955) / q;
    const double C13386 = C17957 - (C13327 * C17831) / q - C17959 / q;
    const double C13446 =
        (3 * C13211) / C9297 - (C13415 * C17831) / q - (C14755 * p) / q;
    const double C13461 = C17940 - (C13430 * C17831) / q - (C13227 * p) / q;
    const double C13591 =
        (3 * C13342) / C9297 - (C13576 * C17831) / q - (C14812 * p) / q;
    const double C13722 =
        (2 * C13431) / q - (C13707 * C17831) / q - (C14870 * p) / q;
    const double C7913 = -(C9329 * be + C14942 * C17831 + C17997) / q;
    const double C7914 = -(C9345 * be + C14959 * C17831 + C17998) / q;
    const double C7996 = -(C9586 * be + C15079 * C17831 + C18009) / q;
    const double C8165 = -(C9875 * be + C15476 * C17831 + C18026) / q;
    const double C8166 = -(C9890 * be + C15492 * C17831 + C18027) / q;
    const double C8248 = -(C10129 * be + C15607 * C17831 + C18031) / q;
    const double C8417 =
        C18012 - (C10417 * be + C16005 * C17831) / q - C18050 / q;
    const double C8418 =
        C16224 / q - (C10432 * be + C16021 * C17831) / q - (C16225 * p) / q;
    const double C8500 =
        C18035 - (C10671 * be + C16136 * C17831) / q - C18053 / q;
    const double C8581 = (3 * C16021) / C9297 -
                         (C10805 * be + C16225 * C17831) / q - (C16501 * p) / q;
    const double C8662 = -(C10939 * be + C15226 * C17831 + C18061) / q;
    const double C8815 =
        C18056 - (C11069 * be + C16630 * C17831) / q - C18045 / q;
    const double C8896 =
        C18059 - (C11199 * be + C15359 * C17831) / q - C18041 / q;
    const double C9121 =
        C18057 - (C11327 * be + C15931 * C17831) / q - C18046 / q;
    const double C15034 = -(C11440 * be + C14974 * C17831 + C18073) / q;
    const double C15049 = -(C11455 * be + C14989 * C17831 + C18074) / q;
    const double C15123 = -(C11574 * be + C15064 * C17831 + C18076) / q;
    const double C15299 = -(C11692 * be + C15269 * C17831 + C18079) / q;
    const double C15652 = -(C11779 * be + C15591 * C17831 + C18082) / q;
    const double C15667 = -(C12085 * be + C15606 * C17831 + C18083) / q;
    const double C15828 = -(C14590 * be + C15798 * C17831 + C18085) / q;
    const double C16180 =
        C18087 - (C11983 * be + C16121 * C17831) / q - C18089 / q;
    const double C16240 = (3 * C16005) / C9297 -
                          (C12027 * be + C16209 * C17831) / q -
                          (C17547 * p) / q;
    const double C16255 =
        C18070 - (C12115 * be + C16224 * C17831) / q - (C16021 * p) / q;
    const double C16385 = (3 * C16136) / C9297 -
                          (C14851 * be + C16370 * C17831) / q -
                          (C17603 * p) / q;
    const double C16516 = (2 * C16225) / q -
                          (C17655 * be + C16501 * C17831) / q -
                          (C17661 * p) / q;
    const double C2470 = -(C9300 * C17828 + C17726) / q;
    const double C2471 = -(C9317 * C17828 + C17727) / q;
    const double C2560 = C17723 - (C9441 * C17828) / q - C17834;
    const double C2641 = -(C9529 * C17828 + C17746) / q;
    const double C2731 = C17739 - (C9847 * C17828) / q - C17760 / q;
    const double C2732 = C9981 / q - (C9863 * C17828) / q - (C9982 * p) / q;
    const double C2821 =
        (3 * C9863) / C9297 - (C9982 * C17828) / q - (C10177 * p) / q;
    const double C2902 = C17772 - (C10072 * C17828) / q - C17768 / q;
    const double C2992 = -(C10389 * C17828 + C17782) / q;
    const double C2993 = -(C10405 * C17828 + C17783) / q;
    const double C3082 = C17777 - (C10524 * C17828) / q - C17844;
    const double C3163 = -(C10613 * C17828 + C17790) / q;
    const double C3249 = C17796 - (C9590 * C17828) / q - C17756 / q;
    const double C3406 = C17802 - (C11027 * C17828) / q - C17763 / q;
    const double C3492 = -(C9727 * C17828 + C17798) / q;
    const double C3726 = C17803 - (C10314 * C17828) / q - C17764 / q;
    const double C9365 = -(C9333 * C17828 + C17808) / q;
    const double C9380 = -(C9349 * C17828 + C17809) / q;
    const double C9456 = C17722 - (C9426 * C17828) / q - C17846;
    const double C9650 = C9441 / q - (C9635 * C17828) / q - C17848;
    const double C9743 = -(C9514 * C17828 + C17813) / q;
    const double C9787 = C17748 - (C9680 * C17828) / q - C17850;
    const double C9997 =
        (3 * C9847) / C9297 - (C9966 * C17828) / q - (C11710 * p) / q;
    const double C10012 = C17807 - (C9981 * C17828) / q - (C9863 * p) / q;
    const double C10192 =
        (2 * C9982) / q - (C10177 * C17828) / q - (C11797 * p) / q;
    const double C10284 = C17824 - (C10057 * C17828) / q - C17819 / q;
    const double C10329 =
        (3 * C10072) / C9297 - (C10222 * C17828) / q - C17822 / q;
    const double C10451 = -(C9816 * C17828 + C17817) / q;
    const double C10539 = C17776 - (C10509 * C17828) / q - C17852;
    const double C10733 = C10524 / q - (C10358 * C17828) / q - C17853;
    const double C10824 = -(C10597 * C17828 + C17826) / q;
    const double C10868 = C17792 - (C10762 * C17828) / q - C17854;
    const double C11217 = -(C10612 * C17828 + C17820) / q;
    const double C5201 = -(C9329 * be + C12148 * C17828 + C17861) / q;
    const double C5202 = -(C9345 * be + C12165 * C17828 + C17862) / q;
    const double C5368 = -(C9723 * be + C12373 * C17828 + C17879) / q;
    const double C5453 =
        C17872 - (C9875 * be + C12682 * C17828) / q - C17893 / q;
    const double C5454 =
        C12812 / q - (C9890 * be + C12698 * C17828) / q - (C12813 * p) / q;
    const double C5539 = (3 * C12698) / C9297 -
                         (C10129 * be + C12813 * C17828) / q - (C13004 * p) / q;
    const double C5620 =
        C17905 - (C10265 * be + C12903 * C17828) / q - C17901 / q;
    const double C5705 = -(C10417 * be + C13211 * C17828 + C17915) / q;
    const double C5706 = -(C10432 * be + C13227 * C17828 + C17916) / q;
    const double C5872 = -(C10805 * be + C13431 * C17828 + C17923) / q;
    const double C5953 =
        C17929 - (C10939 * be + C12432 * C17828) / q - C17889 / q;
    const double C6106 =
        C17935 - (C11069 * be + C13836 * C17828) / q - C17896 / q;
    const double C6187 = -(C11199 * be + C12565 * C17828 + C17931) / q;
    const double C6412 =
        C17936 - (C11327 * be + C13137 * C17828) / q - C17897 / q;
    const double C12210 = -(C11440 * be + C12180 * C17828 + C17941) / q;
    const double C12225 = -(C11455 * be + C12195 * C17828 + C17942) / q;
    const double C12580 = -(C11634 * be + C12358 * C17828 + C17946) / q;
    const double C12828 = (3 * C12682) / C9297 -
                          (C11779 * be + C12797 * C17828) / q -
                          (C14508 * p) / q;
    const double C12843 =
        C17940 - (C12085 * be + C12812 * C17828) / q - (C12698 * p) / q;
    const double C13019 = (2 * C12813) / q -
                          (C14590 * be + C13004 * C17828) / q -
                          (C14595 * p) / q;
    const double C13108 =
        C17957 - (C11839 * be + C12888 * C17828) / q - C17952 / q;
    const double C13152 =
        (3 * C12903) / C9297 - (C14664 * be + C13049 * C17828) / q - C17955 / q;
    const double C13270 = -(C11897 * be + C12652 * C17828 + C17950) / q;
    const double C13635 = -(C12027 * be + C13415 * C17828 + C17959) / q;
    const double C14021 = -(C12115 * be + C13430 * C17828 + C17953) / q;
    const double C7883 = -(C14942 * C17828 + C17991) / q;
    const double C7884 = -(C14959 * C17828 + C17992) / q;
    const double C8050 = -(C15167 * C17828 + C18009) / q;
    const double C8135 = C18002 - (C15476 * C17828) / q - C18023 / q;
    const double C8136 = C15606 / q - (C15492 * C17828) / q - (C15607 * p) / q;
    const double C8221 =
        (3 * C15492) / C9297 - (C15607 * C17828) / q - (C15798 * p) / q;
    const double C8302 = C18035 - (C15697 * C17828) / q - C18031 / q;
    const double C8387 = -(C16005 * C17828 + C18045) / q;
    const double C8388 = -(C16021 * C17828 + C18046) / q;
    const double C8554 = -(C16225 * C17828 + C18053) / q;
    const double C8635 = C18059 - (C15226 * C17828) / q - C18019 / q;
    const double C8788 = C18065 - (C16630 * C17828) / q - C18026 / q;
    const double C8869 = -(C15359 * C17828 + C18061) / q;
    const double C9094 = C18066 - (C15931 * C17828) / q - C18027 / q;
    const double C15004 = -(C14974 * C17828 + C18071) / q;
    const double C15019 = -(C14989 * C17828 + C18072) / q;
    const double C15374 = -(C15152 * C17828 + C18076) / q;
    const double C15622 =
        (3 * C15476) / C9297 - (C15591 * C17828) / q - (C17302 * p) / q;
    const double C15637 = C18070 - (C15606 * C17828) / q - (C15492 * p) / q;
    const double C15813 =
        (2 * C15607) / q - (C15798 * C17828) / q - (C17388 * p) / q;
    const double C15902 = C18087 - (C15682 * C17828) / q - C18082 / q;
    const double C15946 =
        (3 * C15697) / C9297 - (C15843 * C17828) / q - C18085 / q;
    const double C16064 = -(C15446 * C17828 + C18080) / q;
    const double C16429 = -(C16209 * C17828 + C18089) / q;
    const double C16815 = -(C16224 * C17828 + C18083) / q;
    const double C2437 = (3 * C9317) / C9297 -
                         (C9329 * be + C9300 * C17827) / q - (C9333 * p) / q;
    const double C2438 =
        C9349 / q - (C9345 * be + C9317 * C17827) / q - (C9300 * p) / q;
    const double C2533 =
        C17739 - (C9586 * be + C9441 * C17827) / q - C17726 / q;
    const double C2614 =
        C17749 - (C9723 * be + C9529 * C17827) / q - C17734 / q;
    const double C2698 = C17755 - (C9875 * be + C9847 * C17827) / q - C17834;
    const double C2699 = -(C9890 * be + C9863 * C17827 + C17756) / q;
    const double C2794 = -(C10129 * be + C9982 * C17827 + C17760) / q;
    const double C2875 = -(C10265 * be + C10072 * C17827 + C17763) / q;
    const double C2959 = C17777 - (C10417 * be + C10389 * C17827) / q - C17839;
    const double C2960 = -(C10432 * be + C10405 * C17827 + C17778) / q;
    const double C3055 = -(C10671 * be + C10524 * C17827 + C17782) / q;
    const double C3136 = -(C10805 * be + C10613 * C17827 + C17787) / q;
    const double C3219 =
        C17794 - (C10939 * be + C9590 * C17827) / q - C17727 / q;
    const double C3379 =
        C17801 - (C11069 * be + C11027 * C17827) / q - C17746 / q;
    const double C3462 =
        C17803 - (C11199 * be + C9727 * C17827) / q - C17735 / q;
    const double C3696 = -(C11327 * be + C10314 * C17827 + C17798) / q;
    const double C9301 =
        (2 * C9300) / q - (C11440 * be + C9333 * C17827) / q - (C11444 * p) / q;
    const double C9316 =
        C17807 - (C11455 * be + C9349 * C17827) / q - (C9317 * p) / q;
    const double C9574 =
        (3 * C9441) / C9297 - (C11574 * be + C9426 * C17827) / q - C17808 / q;
    const double C9711 =
        (3 * C9529) / C9297 - (C11634 * be + C9514 * C17827) / q - C17810 / q;
    const double C9848 =
        C9847 / q - (C11692 * be + C9635 * C17827) / q - C17846;
    const double C10117 = C17767 - (C11779 * be + C9966 * C17827) / q - C17848;
    const double C10253 = C17770 - (C11839 * be + C10057 * C17827) / q - C17850;
    const double C10390 =
        C10389 / q - (C11897 * be + C9816 * C17827) / q - C17847;
    const double C10659 = C17789 - (C11983 * be + C10509 * C17827) / q - C17849;
    const double C10793 = C17792 - (C12027 * be + C10597 * C17827) / q - C17851;
    const double C10927 = -(C12085 * be + C9981 * C17827 + C17809) / q;
    const double C11057 =
        C17824 - (C12100 * be + C9680 * C17827) / q - C17813 / q;
    const double C11187 = -(C12115 * be + C10612 * C17827 + C17811) / q;
    const double C5171 =
        (3 * C12165) / C9297 - (C12148 * C17827) / q - (C12180 * p) / q;
    const double C5172 = C12195 / q - (C12165 * C17827) / q - (C12148 * p) / q;
    const double C5260 = C17872 - (C12285 * C17827) / q - C17861 / q;
    const double C5341 = C17882 - (C12373 * C17827) / q - C17867 / q;
    const double C5424 = -(C12698 * C17827 + C17889) / q;
    const double C5512 = -(C12813 * C17827 + C17893) / q;
    const double C5593 = -(C12903 * C17827 + C17896) / q;
    const double C5676 = -(C13227 * C17827 + C17911) / q;
    const double C5764 = -(C13342 * C17827 + C17915) / q;
    const double C5845 = -(C13431 * C17827 + C17920) / q;
    const double C5926 = C17927 - (C12432 * C17827) / q - C17862 / q;
    const double C6079 = C17934 - (C13836 * C17827) / q - C17879 / q;
    const double C6160 = C17936 - (C12565 * C17827) / q - C17868 / q;
    const double C6385 = -(C13137 * C17827 + C17931) / q;
    const double C12149 =
        (2 * C12148) / q - (C12180 * C17827) / q - (C14246 * p) / q;
    const double C12164 = C17940 - (C12195 * C17827) / q - (C12165 * p) / q;
    const double C12417 =
        (3 * C12285) / C9297 - (C12270 * C17827) / q - C17941 / q;
    const double C12550 =
        (3 * C12373) / C9297 - (C12358 * C17827) / q - C17943 / q;
    const double C13737 = -(C12812 * C17827 + C17942) / q;
    const double C13865 = C17957 - (C12520 * C17827) / q - C17946 / q;
    const double C13992 = -(C13430 * C17827 + C17944) / q;
    const double C7853 =
        (3 * C14959) / C9297 - (C14942 * C17827) / q - (C14974 * p) / q;
    const double C7854 = C14989 / q - (C14959 * C17827) / q - (C14942 * p) / q;
    const double C7942 = C18002 - (C15079 * C17827) / q - C17991 / q;
    const double C8023 = C18012 - (C15167 * C17827) / q - C17997 / q;
    const double C8106 = -(C15492 * C17827 + C18019) / q;
    const double C8194 = -(C15607 * C17827 + C18023) / q;
    const double C8275 = -(C15697 * C17827 + C18026) / q;
    const double C8358 = -(C16021 * C17827 + C18041) / q;
    const double C8446 = -(C16136 * C17827 + C18045) / q;
    const double C8527 = -(C16225 * C17827 + C18050) / q;
    const double C8608 = C18057 - (C15226 * C17827) / q - C17992 / q;
    const double C8761 = C18064 - (C16630 * C17827) / q - C18009 / q;
    const double C8842 = C18066 - (C15359 * C17827) / q - C17998 / q;
    const double C9067 = -(C15931 * C17827 + C18061) / q;
    const double C14943 =
        (2 * C14942) / q - (C14974 * C17827) / q - (C17040 * p) / q;
    const double C14958 = C18070 - (C14989 * C17827) / q - (C14959 * p) / q;
    const double C15211 =
        (3 * C15079) / C9297 - (C15064 * C17827) / q - C18071 / q;
    const double C15344 =
        (3 * C15167) / C9297 - (C15152 * C17827) / q - C18073 / q;
    const double C16531 = -(C15606 * C17827 + C18072) / q;
    const double C16659 = C18087 - (C15314 * C17827) / q - C18076 / q;
    const double C16786 = -(C16224 * C17827 + C18074) / q;
    const double C13196 = C12903 / q - (C13181 * C17831) / q - C17984;
    const double C13678 = C17925 - (C14851 * be + C13576 * C17828) / q - C17984;
    const double C13064 = C17900 - (C13049 * C17831) / q - C17983;
    const double C13547 =
        C13342 / q - (C14793 * be + C13181 * C17828) / q - C17983;
    const double C12918 = C17887 - (C12888 * C17831) / q - C17982;
    const double C13357 = C17909 - (C11983 * be + C13327 * C17828) / q - C17982;
    const double C12667 = C12373 / q - (C12652 * C17831) / q - C17981;
    const double C13606 = C17925 - (C13415 * C17827) / q - C17981;
    const double C12535 = C17871 - (C12520 * C17831) / q - C17979;
    const double C13476 = C17922 - (C13327 * C17827) / q - C17979;
    const double C12623 = C17881 - (C12100 * be + C12520 * C17828) / q - C17980;
    const double C13079 = C17903 - (C12888 * C17827) / q - C17980;
    const double C12490 =
        C12285 / q - (C11692 * be + C12475 * C17828) / q - C17978;
    const double C12947 = C17900 - (C12797 * C17827) / q - C17978;
    const double C12388 = C17859 - (C12358 * C17831) / q - C17977;
    const double C13212 = C13211 / q - (C12652 * C17827) / q - C17977;
    const double C12300 = C17859 - (C11574 * be + C12270 * C17828) / q - C17976;
    const double C12683 = C12682 / q - (C12475 * C17827) / q - C17976;
    const double C5647 = C17888 - (C12903 * C17831) / q - C17974;
    const double C5791 = C17910 - (C10671 * be + C13342 * C17828) / q - C17974;
    const double C5395 = C17860 - (C12373 * C17831) / q - C17969;
    const double C5675 = C17910 - (C13211 * C17827) / q - C17969;
    const double C5287 = C17860 - (C9586 * be + C12285 * C17828) / q - C17964;
    const double C5423 = C17888 - (C12682 * C17827) / q - C17964;
    const double C15990 =
        C15697 / q - (C14793 * be + C15975 * C17831) / q - C18114;
    const double C16472 = C18055 - (C16370 * C17828) / q - C18114;
    const double C15858 = C18030 - (C14664 * be + C15843 * C17831) / q - C18113;
    const double C16341 = C16136 / q - (C15975 * C17828) / q - C18113;
    const double C15712 = C18017 - (C11839 * be + C15682 * C17831) / q - C18112;
    const double C16151 = C18039 - (C16121 * C17828) / q - C18112;
    const double C15461 =
        C15167 / q - (C11897 * be + C15446 * C17831) / q - C18111;
    const double C16400 = C18055 - (C16209 * C17827) / q - C18111;
    const double C15329 = C18001 - (C12100 * be + C15314 * C17831) / q - C18109;
    const double C16270 = C18052 - (C16121 * C17827) / q - C18109;
    const double C15417 = C18011 - (C15314 * C17828) / q - C18110;
    const double C15873 = C18033 - (C15682 * C17827) / q - C18110;
    const double C15284 = C15079 / q - (C15269 * C17828) / q - C18108;
    const double C15741 = C18030 - (C15591 * C17827) / q - C18108;
    const double C15182 = C17989 - (C11634 * be + C15152 * C17831) / q - C18107;
    const double C16006 = C16005 / q - (C15446 * C17827) / q - C18107;
    const double C15094 = C17989 - (C15064 * C17828) / q - C18106;
    const double C15477 = C15476 / q - (C15269 * C17827) / q - C18106;
    const double C8329 = C18018 - (C10265 * be + C15697 * C17831) / q - C18104;
    const double C8473 = C18040 - (C16136 * C17828) / q - C18104;
    const double C8077 = C17990 - (C9723 * be + C15167 * C17831) / q - C18099;
    const double C8357 = C18040 - (C16005 * C17827) / q - C18099;
    const double C7969 = C17990 - (C15079 * C17828) / q - C18094;
    const double C8105 = C18018 - (C15476 * C17827) / q - C18094;
    const double C17744 = C2504 / C9297;
    const double C17731 = C2587 * p;
    const double C17737 = C2668 * p;
    const double C17759 = C2764 * p;
    const double C17758 = C2765 / C9297;
    const double C17766 = C2929 * p;
    const double C17781 = C3025 * p;
    const double C17780 = C3026 / C9297;
    const double C17786 = C3109 * p;
    const double C17741 = C3279 / q;
    const double C17799 = C3433 * p;
    const double C17750 = C3522 / q;
    const double C17773 = C3756 / q;
    const double C2459 = (3 * C2504) / C9297 -
                         (C9392 * be + C2503 * C17827) / q - (C9396 * p) / q;
    const double C17797 = C9411 / C9297;
    const double C2460 =
        C9411 / q - (C2500 * be + C2504 * C17827) / q - (C2503 * p) / q;
    const double C17730 = C9485 * p;
    const double C17736 = C9544 * p;
    const double C17745 = C9665 * p;
    const double C17747 = C9695 * p;
    const double C17753 = C9831 * p;
    const double C17762 = C10027 * p;
    const double C17795 = C10042 / C9297;
    const double C2754 = C10042 / q - (C2765 * C17828) / q - (C2848 * p) / q;
    const double C17765 = C10087 * p;
    const double C2839 =
        (3 * C2765) / C9297 - (C2848 * C17828) / q - (C10207 * p) / q;
    const double C17769 = C10237 * p;
    const double C17775 = C10373 * p;
    const double C17785 = C10568 * p;
    const double C17788 = C10628 * p;
    const double C17805 = C10643 / C9297;
    const double C3037 =
        C10643 / q - (C3026 * C17831) / q + C17777 - (C3190 * p) / q;
    const double C17791 = C10777 * p;
    const double C3199 =
        (3 * C3026) / C9297 - (C3190 * C17831) / q + C17792 - (C10912 * p) / q;
    const double C17877 = C5232 / C9297;
    const double C17866 = C5314 * p;
    const double C17892 = C5483 * p;
    const double C17891 = C5484 / C9297;
    const double C17914 = C5735 * p;
    const double C17913 = C5736 / C9297;
    const double C17919 = C5818 * p;
    const double C17874 = C5980 / q;
    const double C17932 = C6133 * p;
    const double C17883 = C6214 / q;
    const double C17906 = C6439 / q;
    const double C5191 =
        (3 * C5232) / C9297 - (C5231 * C17827) / q - (C12240 * p) / q;
    const double C17930 = C12255 / C9297;
    const double C5192 = C12255 / q - (C5232 * C17827) / q - (C5231 * p) / q;
    const double C17865 = C12329 * p;
    const double C17878 = C12505 * p;
    const double C17895 = C12858 * p;
    const double C17928 = C12873 / C9297;
    const double C5474 =
        C12873 / q - (C2761 * be + C5484 * C17828) / q - (C5566 * p) / q;
    const double C5557 = (3 * C5484) / C9297 -
                         (C10159 * be + C5566 * C17828) / q - (C13034 * p) / q;
    const double C17918 = C13386 * p;
    const double C17921 = C13446 * p;
    const double C17938 = C13461 / C9297;
    const double C5746 =
        C13461 / q - (C5736 * C17831) / q + C17910 - (C5899 * p) / q;
    const double C17924 = C13591 * p;
    const double C5908 =
        (3 * C5736) / C9297 - (C5899 * C17831) / q + C17925 - (C13722 * p) / q;
    const double C18007 = C7914 / C9297;
    const double C17996 = C7996 * p;
    const double C18022 = C8165 * p;
    const double C18021 = C8166 / C9297;
    const double C18044 = C8417 * p;
    const double C18043 = C8418 / C9297;
    const double C18049 = C8500 * p;
    const double C18004 = C8662 / q;
    const double C18062 = C8815 * p;
    const double C18013 = C8896 / q;
    const double C18036 = C9121 / q;
    const double C7873 =
        (3 * C7914) / C9297 - (C7913 * C17827) / q - (C15034 * p) / q;
    const double C18060 = C15049 / C9297;
    const double C7874 = C15049 / q - (C7914 * C17827) / q - (C7913 * p) / q;
    const double C17995 = C15123 * p;
    const double C18008 = C15299 * p;
    const double C18025 = C15652 * p;
    const double C18058 = C15667 / C9297;
    const double C8156 = C15667 / q - (C8166 * C17828) / q - (C8248 * p) / q;
    const double C8239 =
        (3 * C8166) / C9297 - (C8248 * C17828) / q - (C15828 * p) / q;
    const double C18048 = C16180 * p;
    const double C18051 = C16240 * p;
    const double C18068 = C16255 / C9297;
    const double C8428 = C16255 / q - (C3022 * be + C8418 * C17831) / q +
                         C18040 - (C8581 * p) / q;
    const double C18054 = C16385 * p;
    const double C8590 = (3 * C8418) / C9297 -
                         (C10836 * be + C8581 * C17831) / q + C18055 -
                         (C16516 * p) / q;
    const double C17729 = C2560 * p;
    const double C17757 = C2731 * p;
    const double C17779 = C2993 / C9297;
    const double C2971 = -(C2989 * be + C2993 * C17827 + C2992 * p) / q;
    const double C3004 = C17777 - (C2993 * C17828) / q - (C3082 * p) / q;
    const double C17740 = C3249 / q;
    const double C17806 = C3406 * p;
    const double C2448 = (3 * C2471) / C9297 -
                         (C9361 * be + C2470 * C17827) / q - (C9365 * p) / q;
    const double C2449 =
        C9380 / q - (C2467 * be + C2471 * C17827) / q - (C2470 * p) / q;
    const double C17728 = C9456 * p;
    const double C17743 = C9650 * p;
    const double C2623 =
        C3492 / q - (C9739 * be + C2641 * C17827) / q - (C9743 * p) / q;
    const double C17751 = C9787 * p;
    const double C17761 = C9997 * p;
    const double C2743 =
        C10012 / q - (C2732 * C17828) / q + C17755 - (C2821 * p) / q;
    const double C2830 =
        (3 * C2732) / C9297 - (C2821 * C17828) / q + C17767 - (C10192 * p) / q;
    const double C17771 = C10284 * p;
    const double C2911 =
        C3726 / q - (C2902 * C17828) / q + C17770 - (C10329 * p) / q;
    const double C17784 = C10539 * p;
    const double C3145 = -(C10820 * be + C3163 * C17827 + C10824 * p) / q;
    const double C3172 = C17792 - (C3163 * C17828) / q - (C10868 * p) / q;
    const double C17804 = C11217 / C9297;
    const double C17890 = C5453 * p;
    const double C17912 = C5706 / C9297;
    const double C5686 = -(C5706 * C17827 + C5705 * p) / q;
    const double C17873 = C5953 / q;
    const double C17939 = C6106 * p;
    const double C5181 =
        (3 * C5202) / C9297 - (C5201 * C17827) / q - (C12210 * p) / q;
    const double C5182 = C12225 / q - (C5202 * C17827) / q - (C5201 * p) / q;
    const double C5350 = C6187 / q - (C5368 * C17827) / q - (C12580 * p) / q;
    const double C17894 = C12828 * p;
    const double C5464 = C12843 / q - (C2728 * be + C5454 * C17828) / q +
                         C17888 - (C5539 * p) / q;
    const double C5548 = (3 * C5454) / C9297 -
                         (C10144 * be + C5539 * C17828) / q + C17900 -
                         (C13019 * p) / q;
    const double C17904 = C13108 * p;
    const double C5629 = C6412 / q - (C10280 * be + C5620 * C17828) / q +
                         C17903 - (C13152 * p) / q;
    const double C5854 = -(C5872 * C17827 + C13635 * p) / q;
    const double C17937 = C14021 / C9297;
    const double C18020 = C8135 * p;
    const double C18042 = C8388 / C9297;
    const double C8368 = -(C8388 * C17827 + C8387 * p) / q;
    const double C18003 = C8635 / q;
    const double C18069 = C8788 * p;
    const double C7863 =
        (3 * C7884) / C9297 - (C7883 * C17827) / q - (C15004 * p) / q;
    const double C7864 = C15019 / q - (C7884 * C17827) / q - (C7883 * p) / q;
    const double C8032 = C8869 / q - (C8050 * C17827) / q - (C15374 * p) / q;
    const double C18024 = C15622 * p;
    const double C8146 =
        C15637 / q - (C8136 * C17828) / q + C18018 - (C8221 * p) / q;
    const double C8230 =
        (3 * C8136) / C9297 - (C8221 * C17828) / q + C18030 - (C15813 * p) / q;
    const double C18034 = C15902 * p;
    const double C8311 =
        C9094 / q - (C8302 * C17828) / q + C18033 - (C15946 * p) / q;
    const double C8536 = -(C8554 * C17827 + C16429 * p) / q;
    const double C18067 = C16815 / C9297;
    const double C2688 =
        C17755 - (C2695 * be + C2699 * C17827) / q - (C2698 * p) / q;
    const double C2949 =
        C17777 - (C2956 * be + C2960 * C17827) / q - (C2959 * p) / q;
    const double C3686 =
        C17801 - (C3693 * be + C3696 * C17827) / q - (C3379 * p) / q;
    const double C2426 = (3 * C2438) / C9297 -
                         (C9295 * be + C2437 * C17827) / q + C17722 -
                         (C9301 * p) / q;
    const double C2427 = C9316 / q - (C2434 * be + C2438 * C17827) / q +
                         C17723 - (C2437 * p) / q;
    const double C2524 = C3219 / q - (C9570 * be + C2533 * C17827) / q +
                         C17738 - (C9574 * p) / q;
    const double C2605 = C3462 / q - (C9707 * be + C2614 * C17827) / q +
                         C17748 - (C9711 * p) / q;
    const double C2687 = C2699 / C9297 - (C9843 * be + C2698 * C17827) / q +
                         C17754 - (C9848 * p) / q;
    const double C2785 =
        C17767 - (C10113 * be + C2794 * C17827) / q - (C10117 * p) / q;
    const double C2866 =
        C17770 - (C10249 * be + C2875 * C17827) / q - (C10253 * p) / q;
    const double C2948 = C2960 / C9297 - (C10385 * be + C2959 * C17827) / q +
                         C17776 - (C10390 * p) / q;
    const double C3046 =
        C17789 - (C10655 * be + C3055 * C17827) / q - (C10659 * p) / q;
    const double C3127 =
        C17792 - (C10789 * be + C3136 * C17827) / q - (C10793 * p) / q;
    const double C3209 = C10927 / C9297 - (C3216 * be + C3219 * C17827) / q +
                         C17793 - (C2533 * p) / q;
    const double C3370 = C3696 / C9297 - (C11053 * be + C3379 * C17827) / q +
                         C17800 - (C11057 * p) / q;
    const double C3452 = C11187 / C9297 - (C3459 * be + C3462 * C17827) / q +
                         C17802 - (C2614 * p) / q;
    const double C6376 = C17934 - (C6385 * C17827) / q - (C6079 * p) / q;
    const double C5161 =
        (3 * C5172) / C9297 - (C5171 * C17827) / q + C17859 - (C12149 * p) / q;
    const double C5162 =
        C12164 / q - (C5172 * C17827) / q + C17860 - (C5171 * p) / q;
    const double C5251 =
        C5926 / q - (C5260 * C17827) / q + C17871 - (C12417 * p) / q;
    const double C5332 =
        C6160 / q - (C5341 * C17827) / q + C17881 - (C12550 * p) / q;
    const double C5917 =
        C13737 / C9297 - (C5926 * C17827) / q + C17926 - (C5260 * p) / q;
    const double C6070 =
        C6385 / C9297 - (C6079 * C17827) / q + C17933 - (C13865 * p) / q;
    const double C6151 =
        C13992 / C9297 - (C6160 * C17827) / q + C17935 - (C5341 * p) / q;
    const double C9058 = C18064 - (C9067 * C17827) / q - (C8761 * p) / q;
    const double C7843 =
        (3 * C7854) / C9297 - (C7853 * C17827) / q + C17989 - (C14943 * p) / q;
    const double C7844 =
        C14958 / q - (C7854 * C17827) / q + C17990 - (C7853 * p) / q;
    const double C7933 =
        C8608 / q - (C7942 * C17827) / q + C18001 - (C15211 * p) / q;
    const double C8014 =
        C8842 / q - (C8023 * C17827) / q + C18011 - (C15344 * p) / q;
    const double C8599 =
        C16531 / C9297 - (C8608 * C17827) / q + C18056 - (C7942 * p) / q;
    const double C8752 =
        C9067 / C9297 - (C8761 * C17827) / q + C18063 - (C16659 * p) / q;
    const double C8833 =
        C16786 / C9297 - (C8842 * C17827) / q + C18065 - (C8023 * p) / q;
    const double C17908 = C13196 * p;
    const double C5881 =
        C17925 - (C10820 * be + C5872 * C17828) / q - (C13678 * p) / q;
    const double C17902 = C13064 * p;
    const double C17898 = C12918 * p;
    const double C17917 = C13357 * p;
    const double C17886 = C12667 * p;
    const double C5836 = C17925 - (C5845 * C17827) / q - (C13606 * p) / q;
    const double C17880 = C12535 * p;
    const double C5755 = C17922 - (C5764 * C17827) / q - (C13476 * p) / q;
    const double C17884 = C12623 * p;
    const double C5584 = C17903 - (C5593 * C17827) / q - (C13079 * p) / q;
    const double C17876 = C12490 * p;
    const double C5503 = C17900 - (C5512 * C17827) / q - (C12947 * p) / q;
    const double C17869 = C12388 * p;
    const double C17863 = C12300 * p;
    const double C17899 = C5647 * p;
    const double C5716 =
        C17910 - (C2989 * be + C5706 * C17828) / q - (C5791 * p) / q;
    const double C17870 = C5395 * p;
    const double C5665 =
        C5676 / C9297 - (C5675 * C17827) / q + C17909 - (C13212 * p) / q;
    const double C5666 = C17910 - (C5676 * C17827) / q - (C5675 * p) / q;
    const double C17864 = C5287 * p;
    const double C5413 =
        C5424 / C9297 - (C5423 * C17827) / q + C17887 - (C12683 * p) / q;
    const double C5414 = C17888 - (C5424 * C17827) / q - (C5423 * p) / q;
    const double C18038 = C15990 * p;
    const double C8563 = C18055 - (C8554 * C17828) / q - (C16472 * p) / q;
    const double C18032 = C15858 * p;
    const double C18028 = C15712 * p;
    const double C18047 = C16151 * p;
    const double C18016 = C15461 * p;
    const double C8518 = C18055 - (C8527 * C17827) / q - (C16400 * p) / q;
    const double C18010 = C15329 * p;
    const double C8437 = C18052 - (C8446 * C17827) / q - (C16270 * p) / q;
    const double C18014 = C15417 * p;
    const double C8266 = C18033 - (C8275 * C17827) / q - (C15873 * p) / q;
    const double C18006 = C15284 * p;
    const double C8185 = C18030 - (C8194 * C17827) / q - (C15741 * p) / q;
    const double C17999 = C15182 * p;
    const double C17993 = C15094 * p;
    const double C18029 = C8329 * p;
    const double C8398 = C18040 - (C8388 * C17828) / q - (C8473 * p) / q;
    const double C18000 = C8077 * p;
    const double C8347 =
        C8358 / C9297 - (C8357 * C17827) / q + C18039 - (C16006 * p) / q;
    const double C8348 = C18040 - (C8358 * C17827) / q - (C8357 * p) / q;
    const double C17994 = C7969 * p;
    const double C8095 =
        C8106 / C9297 - (C8105 * C17827) / q + C18017 - (C15477 * p) / q;
    const double C8096 = C18018 - (C8106 * C17827) / q - (C8105 * p) / q;
    const double C2493 = -(C2504 * C17828 + C17731) / q;
    const double C17833 = C17737 / q;
    const double C2721 = -(C2761 * be + C2765 * C17827 + C17759) / q;
    const double C17842 = C17766 / q;
    const double C2982 = -(C3022 * be + C3026 * C17827 + C17781) / q;
    const double C3015 = -(C3026 * C17828 + C17786) / q;
    const double C3289 = C17793 - (C3279 * C17831) / q - C17799 / q;
    const double C3512 = -(C3522 * C17828 + C17799) / q;
    const double C3716 = -(C3753 * be + C3756 * C17827 + C17799) / q;
    const double C3269 = C17797 - (C3279 * C17828) / q - C17759 / q;
    const double C3532 = C17797 - (C3522 * C17831) / q + C17802 - C17781 / q;
    const double C2492 = -(C2503 * C17828 + C17730) / q;
    const double C2551 =
        C17741 - (C9617 * be + C2587 * C17827) / q - C17730 / q;
    const double C17832 = C17736 / q;
    const double C17836 = C17745 / q;
    const double C17837 = C17747 / q;
    const double C2659 = -(C2668 * C17828 + C17747) / q;
    const double C17840 = C17753 / q;
    const double C2753 = C17741 - (C2764 * C17828) / q - C17762 / q;
    const double C2812 = -(C10159 * be + C2848 * C17827 + C17762) / q;
    const double C3239 =
        C17795 - (C3276 * be + C3279 * C17827) / q - C17731 / q;
    const double C3766 = C17795 - (C3756 * C17831) / q + C17801 - C17786 / q;
    const double C17841 = C17765 / q;
    const double C2893 = -(C10296 * be + C2929 * C17827 + C17765) / q;
    const double C17843 = C17769 / q;
    const double C17845 = C17775 / q;
    const double C3014 = -(C3025 * C17828 + C17785) / q;
    const double C3073 = -(C10701 * be + C3109 * C17827 + C17785) / q;
    const double C3442 =
        C3279 / C9297 - (C3433 * C17831) / q + C17800 - C17785 / q;
    const double C3036 = C17750 - (C3025 * C17831) / q + C17776 - C17788 / q;
    const double C3154 = -(C10836 * be + C3190 * C17827 + C17788) / q;
    const double C3118 = C17773 - (C3109 * C17831) / q + C17789 - C17791 / q;
    const double C3181 = -(C3190 * C17828 + C17791) / q;
    const double C5222 = -(C2500 * be + C5232 * C17828 + C17866) / q;
    const double C5444 = -(C5484 * C17827 + C17892) / q;
    const double C5696 = -(C5736 * C17827 + C17914) / q;
    const double C5726 = -(C3022 * be + C5736 * C17828 + C17919) / q;
    const double C5989 = C17926 - (C5980 * C17831) / q - C17932 / q;
    const double C6205 = -(C3519 * be + C6214 * C17828 + C17932) / q;
    const double C6403 = -(C6439 * C17827 + C17932) / q;
    const double C5971 =
        C17930 - (C3276 * be + C5980 * C17828) / q - C17892 / q;
    const double C6223 = C17930 - (C6214 * C17831) / q + C17935 - C17914 / q;
    const double C5221 = -(C9392 * be + C5231 * C17828 + C17865) / q;
    const double C5278 = C17874 - (C5314 * C17827) / q - C17865 / q;
    const double C17966 = C17878 / q;
    const double C5473 =
        C17874 - (C9934 * be + C5483 * C17828) / q - C17895 / q;
    const double C5530 = -(C5566 * C17827 + C17895) / q;
    const double C5944 = C17928 - (C5980 * C17827) / q - C17866 / q;
    const double C6448 = C17928 - (C6439 * C17831) / q + C17934 - C17919 / q;
    const double C5725 = -(C10477 * be + C5735 * C17828 + C17918) / q;
    const double C5782 = -(C5818 * C17827 + C17918) / q;
    const double C6142 =
        C5980 / C9297 - (C6133 * C17831) / q + C17933 - C17918 / q;
    const double C5745 = C17883 - (C5735 * C17831) / q + C17909 - C17921 / q;
    const double C5863 = -(C5899 * C17827 + C17921) / q;
    const double C5827 = C17906 - (C5818 * C17831) / q + C17922 - C17924 / q;
    const double C5890 = -(C10836 * be + C5899 * C17828 + C17924) / q;
    const double C7904 = -(C7914 * C17828 + C17996) / q;
    const double C8126 = -(C8166 * C17827 + C18022) / q;
    const double C8378 = -(C8418 * C17827 + C18044) / q;
    const double C8408 = -(C8418 * C17828 + C18049) / q;
    const double C8671 =
        C18056 - (C3276 * be + C8662 * C17831) / q - C18062 / q;
    const double C8887 = -(C8896 * C17828 + C18062) / q;
    const double C9085 = -(C9121 * C17827 + C18062) / q;
    const double C8653 = C18060 - (C8662 * C17828) / q - C18022 / q;
    const double C8905 =
        C18060 - (C3519 * be + C8896 * C17831) / q + C18065 - C18044 / q;
    const double C7903 = -(C7913 * C17828 + C17995) / q;
    const double C7960 = C18004 - (C7996 * C17827) / q - C17995 / q;
    const double C18096 = C18008 / q;
    const double C8155 = C18004 - (C8165 * C17828) / q - C18025 / q;
    const double C8212 = -(C8248 * C17827 + C18025) / q;
    const double C8626 = C18058 - (C8662 * C17827) / q - C17996 / q;
    const double C9130 =
        C18058 - (C3753 * be + C9121 * C17831) / q + C18064 - C18049 / q;
    const double C8407 = -(C8417 * C17828 + C18048) / q;
    const double C8464 = -(C8500 * C17827 + C18048) / q;
    const double C8824 = C8662 / C9297 - (C11099 * be + C8815 * C17831) / q +
                         C18063 - C18048 / q;
    const double C8427 =
        C18013 - (C10477 * be + C8417 * C17831) / q + C18039 - C18051 / q;
    const double C8545 = -(C8581 * C17827 + C18051) / q;
    const double C8509 =
        C18036 - (C10701 * be + C8500 * C17831) / q + C18052 - C18054 / q;
    const double C8572 = -(C8581 * C17828 + C18054) / q;
    const double C17830 = C17729 / q;
    const double C2710 = -(C2728 * be + C2732 * C17827 + C17757) / q;
    const double C3259 =
        C9380 / C9297 - (C3249 * C17828) / q + C17793 - C17757 / q;
    const double C2970 =
        C17779 - (C10447 * be + C2992 * C17827) / q - (C10451 * p) / q;
    const double C3091 =
        C17779 - (C3082 * C17828) / q + C17789 - (C10733 * p) / q;
    const double C3502 = C17802 - (C3492 * C17828) / q - C17806 / q;
    const double C3706 = -(C3723 * be + C3726 * C17827 + C17806) / q;
    const double C17829 = C17728 / q;
    const double C17835 = C17743 / q;
    const double C17838 = C17751 / q;
    const double C2742 = C17740 - (C2731 * C17828) / q + C17754 - C17761 / q;
    const double C2803 = -(C10144 * be + C2821 * C17827 + C17761) / q;
    const double C2884 = -(C10280 * be + C2902 * C17827 + C17771) / q;
    const double C3415 =
        C3492 / C9297 - (C3406 * C17828) / q + C17800 - C17771 / q;
    const double C3003 = C17776 - (C2992 * C17828) / q - C17784 / q;
    const double C3064 = -(C10686 * be + C3082 * C17827 + C17784) / q;
    const double C3472 =
        C17804 - (C3489 * be + C3492 * C17827) / q - (C2641 * p) / q;
    const double C3736 =
        C17804 - (C3726 * C17828) / q + C17801 - (C2902 * p) / q;
    const double C5434 = -(C5454 * C17827 + C17890) / q;
    const double C5962 = C12225 / C9297 - (C3246 * be + C5953 * C17828) / q +
                         C17926 - C17890 / q;
    const double C5685 = C17912 - (C5705 * C17827) / q - (C13270 * p) / q;
    const double C5800 =
        C17912 - (C10686 * be + C5791 * C17828) / q + C17922 - (C13547 * p) / q;
    const double C6196 =
        C17935 - (C3489 * be + C6187 * C17828) / q - C17939 / q;
    const double C6394 = -(C6412 * C17827 + C17939) / q;
    const double C5463 =
        C17873 - (C9905 * be + C5453 * C17828) / q + C17887 - C17894 / q;
    const double C5521 = -(C5539 * C17827 + C17894) / q;
    const double C5602 = -(C5620 * C17827 + C17904) / q;
    const double C6115 = C6187 / C9297 - (C11084 * be + C6106 * C17828) / q +
                         C17933 - C17904 / q;
    const double C6169 = C17937 - (C6187 * C17827) / q - (C5368 * p) / q;
    const double C6421 =
        C17937 - (C3723 * be + C6412 * C17828) / q + C17934 - (C5620 * p) / q;
    const double C8116 = -(C8136 * C17827 + C18020) / q;
    const double C8644 =
        C15019 / C9297 - (C8635 * C17828) / q + C18056 - C18020 / q;
    const double C8367 = C18042 - (C8387 * C17827) / q - (C16064 * p) / q;
    const double C8482 =
        C18042 - (C8473 * C17828) / q + C18052 - (C16341 * p) / q;
    const double C8878 = C18065 - (C8869 * C17828) / q - C18069 / q;
    const double C9076 = -(C9094 * C17827 + C18069) / q;
    const double C8145 = C18003 - (C8135 * C17828) / q + C18017 - C18024 / q;
    const double C8203 = -(C8221 * C17827 + C18024) / q;
    const double C8284 = -(C8302 * C17827 + C18034) / q;
    const double C8797 =
        C8869 / C9297 - (C8788 * C17828) / q + C18063 - C18034 / q;
    const double C8851 = C18067 - (C8869 * C17827) / q - (C8050 * p) / q;
    const double C9103 =
        C18067 - (C9094 * C17828) / q + C18064 - (C8302 * p) / q;
    const double C17975 = C17908 / q;
    const double C17973 = C17902 / q;
    const double C17971 = C17898 / q;
    const double C5611 = -(C5647 * C17827 + C17898) / q;
    const double C5715 =
        C17909 - (C10447 * be + C5705 * C17828) / q - C17917 / q;
    const double C5773 = -(C5791 * C17827 + C17917) / q;
    const double C17970 = C17886 / q;
    const double C17967 = C17880 / q;
    const double C5386 = -(C9755 * be + C5395 * C17828 + C17880) / q;
    const double C17968 = C17884 / q;
    const double C17965 = C17876 / q;
    const double C17962 = C17869 / q;
    const double C17960 = C17863 / q;
    const double C17972 = C17899 / q;
    const double C17963 = C17870 / q;
    const double C17961 = C17864 / q;
    const double C18105 = C18038 / q;
    const double C18103 = C18032 / q;
    const double C18101 = C18028 / q;
    const double C8293 = -(C8329 * C17827 + C18028) / q;
    const double C8397 = C18039 - (C8387 * C17828) / q - C18047 / q;
    const double C8455 = -(C8473 * C17827 + C18047) / q;
    const double C18100 = C18016 / q;
    const double C18097 = C18010 / q;
    const double C8068 = -(C8077 * C17828 + C18010) / q;
    const double C18098 = C18014 / q;
    const double C18095 = C18006 / q;
    const double C18092 = C17999 / q;
    const double C18090 = C17993 / q;
    const double C18102 = C18029 / q;
    const double C18093 = C18000 / q;
    const double C18091 = C17994 / q;
    const double C2515 = C17723 - (C2504 * C17831) / q - C17833;
    const double C3482 = C17805 - (C3519 * be + C3522 * C17827) / q - C17833;
    const double C2776 = C17755 - (C2765 * C17831) / q - C17842;
    const double C3746 = C17805 - (C3756 * C17828) / q - C17842;
    const double C2514 = C17722 - (C2503 * C17831) / q - C17832;
    const double C2632 = C17750 - (C9755 * be + C2668 * C17827) / q - C17832;
    const double C2578 = C17744 - (C2587 * C17828) / q - C17836;
    const double C2720 = C17758 - (C9934 * be + C2764 * C17827) / q - C17836;
    const double C2596 = C17738 - (C2587 * C17831) / q - C17837;
    const double C3397 =
        C3756 / C9297 - (C11099 * be + C3433 * C17827) / q - C17837;
    const double C2677 = C17744 - (C2668 * C17831) / q + C17748 - C17840;
    const double C2981 = C17780 - (C10477 * be + C3025 * C17827) / q - C17840;
    const double C2775 = C17754 - (C2764 * C17831) / q - C17841;
    const double C3424 = C3522 / C9297 - (C3433 * C17828) / q - C17841;
    const double C2857 = C17767 - (C2848 * C17831) / q - C17843;
    const double C2920 = C17773 - (C2929 * C17828) / q - C17843;
    const double C2938 = C17758 - (C2929 * C17831) / q + C17770 - C17845;
    const double C3100 = C17780 - (C3109 * C17828) / q - C17845;
    const double C5305 = C17877 - (C9617 * be + C5314 * C17828) / q - C17966;
    const double C5443 = C17891 - (C5483 * C17827) / q - C17966;
    const double C7987 = C18007 - (C7996 * C17828) / q - C18096;
    const double C8125 = C18021 - (C8165 * C17827) / q - C18096;
    const double C2482 = C17723 - (C2471 * C17828) / q - C17830;
    const double C3229 =
        C10012 / C9297 - (C3246 * be + C3249 * C17827) / q - C17830;
    const double C2481 = C17722 - (C2470 * C17828) / q - C17829;
    const double C2542 = C17740 - (C9602 * be + C2560 * C17827) / q - C17829;
    const double C2569 = C2471 / C9297 - (C2560 * C17828) / q + C17738 - C17835;
    const double C2709 =
        C2732 / C9297 - (C9905 * be + C2731 * C17827) / q - C17835;
    const double C2650 = C17748 - (C2641 * C17828) / q - C17838;
    const double C3388 =
        C3726 / C9297 - (C11084 * be + C3406 * C17827) / q - C17838;
    const double C5656 = C17891 - (C5647 * C17831) / q + C17903 - C17975;
    const double C5809 = C17913 - (C10701 * be + C5818 * C17828) / q - C17975;
    const double C5575 = C17900 - (C5566 * C17831) / q - C17973;
    const double C5638 = C17906 - (C10296 * be + C5647 * C17828) / q - C17973;
    const double C5493 = C17887 - (C5483 * C17831) / q - C17971;
    const double C6124 =
        C6214 / C9297 - (C11099 * be + C6133 * C17828) / q - C17971;
    const double C5404 = C17877 - (C5395 * C17831) / q + C17881 - C17970;
    const double C5695 = C17913 - (C5735 * C17827) / q - C17970;
    const double C5323 = C17871 - (C5314 * C17831) / q - C17967;
    const double C6097 = C6439 / C9297 - (C6133 * C17827) / q - C17967;
    const double C5377 = C17881 - (C9739 * be + C5368 * C17828) / q - C17968;
    const double C6088 = C6412 / C9297 - (C6106 * C17827) / q - C17968;
    const double C5296 =
        C5202 / C9297 - (C9602 * be + C5287 * C17828) / q + C17871 - C17965;
    const double C5433 = C5454 / C9297 - (C5453 * C17827) / q - C17965;
    const double C5241 = C17859 - (C5231 * C17831) / q - C17962;
    const double C5359 = C17883 - (C5395 * C17827) / q - C17962;
    const double C5211 = C17859 - (C9361 * be + C5201 * C17828) / q - C17960;
    const double C5269 = C17873 - (C5287 * C17827) / q - C17960;
    const double C5494 = C17888 - (C5484 * C17831) / q - C17972;
    const double C6430 = C17938 - (C3753 * be + C6439 * C17828) / q - C17972;
    const double C5242 = C17860 - (C5232 * C17831) / q - C17963;
    const double C6178 = C17938 - (C6214 * C17827) / q - C17963;
    const double C5212 = C17860 - (C2467 * be + C5202 * C17828) / q - C17961;
    const double C5935 = C12843 / C9297 - (C5953 * C17827) / q - C17961;
    const double C8338 =
        C18021 - (C10296 * be + C8329 * C17831) / q + C18033 - C18105;
    const double C8491 = C18043 - (C8500 * C17828) / q - C18105;
    const double C8257 = C18030 - (C10159 * be + C8248 * C17831) / q - C18103;
    const double C8320 = C18036 - (C8329 * C17828) / q - C18103;
    const double C8175 = C18017 - (C9934 * be + C8165 * C17831) / q - C18101;
    const double C8806 = C8896 / C9297 - (C8815 * C17828) / q - C18101;
    const double C8086 =
        C18007 - (C9755 * be + C8077 * C17831) / q + C18011 - C18100;
    const double C8377 = C18043 - (C8417 * C17827) / q - C18100;
    const double C8005 = C18001 - (C9617 * be + C7996 * C17831) / q - C18097;
    const double C8779 = C9121 / C9297 - (C8815 * C17827) / q - C18097;
    const double C8059 = C18011 - (C8050 * C17828) / q - C18098;
    const double C8770 = C9094 / C9297 - (C8788 * C17827) / q - C18098;
    const double C7978 = C7884 / C9297 - (C7969 * C17828) / q + C18001 - C18095;
    const double C8115 = C8136 / C9297 - (C8135 * C17827) / q - C18095;
    const double C7923 = C17989 - (C9392 * be + C7913 * C17831) / q - C18092;
    const double C8041 = C18013 - (C8077 * C17827) / q - C18092;
    const double C7893 = C17989 - (C7883 * C17828) / q - C18090;
    const double C7951 = C18003 - (C7969 * C17827) / q - C18090;
    const double C8176 = C18018 - (C2761 * be + C8166 * C17831) / q - C18102;
    const double C9112 = C18068 - (C9121 * C17828) / q - C18102;
    const double C7924 = C17990 - (C2500 * be + C7914 * C17831) / q - C18093;
    const double C8860 = C18068 - (C8896 * C17827) / q - C18093;
    const double C7894 = C17990 - (C7884 * C17828) / q - C18091;
    const double C8617 = C15637 / C9297 - (C8635 * C17827) / q - C18091;
    etx[0] = C2426;
    etx[1] = C2427;
    etx[2] = C2437;
    etx[3] = C2438;
    etx[4] = C2448;
    etx[5] = C2449;
    etx[6] = C2459;
    etx[7] = C2460;
    etx[8] = C2470;
    etx[9] = C2471;
    etx[10] = C2481;
    etx[11] = C2482;
    etx[12] = C2492;
    etx[13] = C2493;
    etx[14] = C2503;
    etx[15] = C2504;
    etx[16] = C2514;
    etx[17] = C2515;
    etx[18] = C2524;
    etx[19] = C2533;
    etx[20] = C2542;
    etx[21] = C2551;
    etx[22] = C2560;
    etx[23] = C2569;
    etx[24] = C2578;
    etx[25] = C2587;
    etx[26] = C2596;
    etx[27] = C2605;
    etx[28] = C2614;
    etx[29] = C2623;
    etx[30] = C2632;
    etx[31] = C2641;
    etx[32] = C2650;
    etx[33] = C2659;
    etx[34] = C2668;
    etx[35] = C2677;
    etx[36] = C2687;
    etx[37] = C2688;
    etx[38] = C2698;
    etx[39] = C2699;
    etx[40] = C2709;
    etx[41] = C2710;
    etx[42] = C2720;
    etx[43] = C2721;
    etx[44] = C2731;
    etx[45] = C2732;
    etx[46] = C2742;
    etx[47] = C2743;
    etx[48] = C2753;
    etx[49] = C2754;
    etx[50] = C2764;
    etx[51] = C2765;
    etx[52] = C2775;
    etx[53] = C2776;
    etx[54] = C2785;
    etx[55] = C2794;
    etx[56] = C2803;
    etx[57] = C2812;
    etx[58] = C2821;
    etx[59] = C2830;
    etx[60] = C2839;
    etx[61] = C2848;
    etx[62] = C2857;
    etx[63] = C2866;
    etx[64] = C2875;
    etx[65] = C2884;
    etx[66] = C2893;
    etx[67] = C2902;
    etx[68] = C2911;
    etx[69] = C2920;
    etx[70] = C2929;
    etx[71] = C2938;
    etx[72] = C2948;
    etx[73] = C2949;
    etx[74] = C2959;
    etx[75] = C2960;
    etx[76] = C2970;
    etx[77] = C2971;
    etx[78] = C2981;
    etx[79] = C2982;
    etx[80] = C2992;
    etx[81] = C2993;
    etx[82] = C3003;
    etx[83] = C3004;
    etx[84] = C3014;
    etx[85] = C3015;
    etx[86] = C3025;
    etx[87] = C3026;
    etx[88] = C3036;
    etx[89] = C3037;
    etx[90] = C3046;
    etx[91] = C3055;
    etx[92] = C3064;
    etx[93] = C3073;
    etx[94] = C3082;
    etx[95] = C3091;
    etx[96] = C3100;
    etx[97] = C3109;
    etx[98] = C3118;
    etx[99] = C3127;
    etx[100] = C3136;
    etx[101] = C3145;
    etx[102] = C3154;
    etx[103] = C3163;
    etx[104] = C3172;
    etx[105] = C3181;
    etx[106] = C3190;
    etx[107] = C3199;
    etx[108] = C3209;
    etx[109] = C3219;
    etx[110] = C3229;
    etx[111] = C3239;
    etx[112] = C3249;
    etx[113] = C3259;
    etx[114] = C3269;
    etx[115] = C3279;
    etx[116] = C3289;
    etx[117] = C3370;
    etx[118] = C3379;
    etx[119] = C3388;
    etx[120] = C3397;
    etx[121] = C3406;
    etx[122] = C3415;
    etx[123] = C3424;
    etx[124] = C3433;
    etx[125] = C3442;
    etx[126] = C3452;
    etx[127] = C3462;
    etx[128] = C3472;
    etx[129] = C3482;
    etx[130] = C3492;
    etx[131] = C3502;
    etx[132] = C3512;
    etx[133] = C3522;
    etx[134] = C3532;
    etx[135] = C3686;
    etx[136] = C3696;
    etx[137] = C3706;
    etx[138] = C3716;
    etx[139] = C3726;
    etx[140] = C3736;
    etx[141] = C3746;
    etx[142] = C3756;
    etx[143] = C3766;
    ety[0] = C5161;
    ety[1] = C5162;
    ety[2] = C5171;
    ety[3] = C5172;
    ety[4] = C5181;
    ety[5] = C5182;
    ety[6] = C5191;
    ety[7] = C5192;
    ety[8] = C5201;
    ety[9] = C5202;
    ety[10] = C5211;
    ety[11] = C5212;
    ety[12] = C5221;
    ety[13] = C5222;
    ety[14] = C5231;
    ety[15] = C5232;
    ety[16] = C5241;
    ety[17] = C5242;
    ety[18] = C5251;
    ety[19] = C5260;
    ety[20] = C5269;
    ety[21] = C5278;
    ety[22] = C5287;
    ety[23] = C5296;
    ety[24] = C5305;
    ety[25] = C5314;
    ety[26] = C5323;
    ety[27] = C5332;
    ety[28] = C5341;
    ety[29] = C5350;
    ety[30] = C5359;
    ety[31] = C5368;
    ety[32] = C5377;
    ety[33] = C5386;
    ety[34] = C5395;
    ety[35] = C5404;
    ety[36] = C5413;
    ety[37] = C5414;
    ety[38] = C5423;
    ety[39] = C5424;
    ety[40] = C5433;
    ety[41] = C5434;
    ety[42] = C5443;
    ety[43] = C5444;
    ety[44] = C5453;
    ety[45] = C5454;
    ety[46] = C5463;
    ety[47] = C5464;
    ety[48] = C5473;
    ety[49] = C5474;
    ety[50] = C5483;
    ety[51] = C5484;
    ety[52] = C5493;
    ety[53] = C5494;
    ety[54] = C5503;
    ety[55] = C5512;
    ety[56] = C5521;
    ety[57] = C5530;
    ety[58] = C5539;
    ety[59] = C5548;
    ety[60] = C5557;
    ety[61] = C5566;
    ety[62] = C5575;
    ety[63] = C5584;
    ety[64] = C5593;
    ety[65] = C5602;
    ety[66] = C5611;
    ety[67] = C5620;
    ety[68] = C5629;
    ety[69] = C5638;
    ety[70] = C5647;
    ety[71] = C5656;
    ety[72] = C5665;
    ety[73] = C5666;
    ety[74] = C5675;
    ety[75] = C5676;
    ety[76] = C5685;
    ety[77] = C5686;
    ety[78] = C5695;
    ety[79] = C5696;
    ety[80] = C5705;
    ety[81] = C5706;
    ety[82] = C5715;
    ety[83] = C5716;
    ety[84] = C5725;
    ety[85] = C5726;
    ety[86] = C5735;
    ety[87] = C5736;
    ety[88] = C5745;
    ety[89] = C5746;
    ety[90] = C5755;
    ety[91] = C5764;
    ety[92] = C5773;
    ety[93] = C5782;
    ety[94] = C5791;
    ety[95] = C5800;
    ety[96] = C5809;
    ety[97] = C5818;
    ety[98] = C5827;
    ety[99] = C5836;
    ety[100] = C5845;
    ety[101] = C5854;
    ety[102] = C5863;
    ety[103] = C5872;
    ety[104] = C5881;
    ety[105] = C5890;
    ety[106] = C5899;
    ety[107] = C5908;
    ety[108] = C5917;
    ety[109] = C5926;
    ety[110] = C5935;
    ety[111] = C5944;
    ety[112] = C5953;
    ety[113] = C5962;
    ety[114] = C5971;
    ety[115] = C5980;
    ety[116] = C5989;
    ety[117] = C6070;
    ety[118] = C6079;
    ety[119] = C6088;
    ety[120] = C6097;
    ety[121] = C6106;
    ety[122] = C6115;
    ety[123] = C6124;
    ety[124] = C6133;
    ety[125] = C6142;
    ety[126] = C6151;
    ety[127] = C6160;
    ety[128] = C6169;
    ety[129] = C6178;
    ety[130] = C6187;
    ety[131] = C6196;
    ety[132] = C6205;
    ety[133] = C6214;
    ety[134] = C6223;
    ety[135] = C6376;
    ety[136] = C6385;
    ety[137] = C6394;
    ety[138] = C6403;
    ety[139] = C6412;
    ety[140] = C6421;
    ety[141] = C6430;
    ety[142] = C6439;
    ety[143] = C6448;
    etz[0] = C7843;
    etz[1] = C7844;
    etz[2] = C7853;
    etz[3] = C7854;
    etz[4] = C7863;
    etz[5] = C7864;
    etz[6] = C7873;
    etz[7] = C7874;
    etz[8] = C7883;
    etz[9] = C7884;
    etz[10] = C7893;
    etz[11] = C7894;
    etz[12] = C7903;
    etz[13] = C7904;
    etz[14] = C7913;
    etz[15] = C7914;
    etz[16] = C7923;
    etz[17] = C7924;
    etz[18] = C7933;
    etz[19] = C7942;
    etz[20] = C7951;
    etz[21] = C7960;
    etz[22] = C7969;
    etz[23] = C7978;
    etz[24] = C7987;
    etz[25] = C7996;
    etz[26] = C8005;
    etz[27] = C8014;
    etz[28] = C8023;
    etz[29] = C8032;
    etz[30] = C8041;
    etz[31] = C8050;
    etz[32] = C8059;
    etz[33] = C8068;
    etz[34] = C8077;
    etz[35] = C8086;
    etz[36] = C8095;
    etz[37] = C8096;
    etz[38] = C8105;
    etz[39] = C8106;
    etz[40] = C8115;
    etz[41] = C8116;
    etz[42] = C8125;
    etz[43] = C8126;
    etz[44] = C8135;
    etz[45] = C8136;
    etz[46] = C8145;
    etz[47] = C8146;
    etz[48] = C8155;
    etz[49] = C8156;
    etz[50] = C8165;
    etz[51] = C8166;
    etz[52] = C8175;
    etz[53] = C8176;
    etz[54] = C8185;
    etz[55] = C8194;
    etz[56] = C8203;
    etz[57] = C8212;
    etz[58] = C8221;
    etz[59] = C8230;
    etz[60] = C8239;
    etz[61] = C8248;
    etz[62] = C8257;
    etz[63] = C8266;
    etz[64] = C8275;
    etz[65] = C8284;
    etz[66] = C8293;
    etz[67] = C8302;
    etz[68] = C8311;
    etz[69] = C8320;
    etz[70] = C8329;
    etz[71] = C8338;
    etz[72] = C8347;
    etz[73] = C8348;
    etz[74] = C8357;
    etz[75] = C8358;
    etz[76] = C8367;
    etz[77] = C8368;
    etz[78] = C8377;
    etz[79] = C8378;
    etz[80] = C8387;
    etz[81] = C8388;
    etz[82] = C8397;
    etz[83] = C8398;
    etz[84] = C8407;
    etz[85] = C8408;
    etz[86] = C8417;
    etz[87] = C8418;
    etz[88] = C8427;
    etz[89] = C8428;
    etz[90] = C8437;
    etz[91] = C8446;
    etz[92] = C8455;
    etz[93] = C8464;
    etz[94] = C8473;
    etz[95] = C8482;
    etz[96] = C8491;
    etz[97] = C8500;
    etz[98] = C8509;
    etz[99] = C8518;
    etz[100] = C8527;
    etz[101] = C8536;
    etz[102] = C8545;
    etz[103] = C8554;
    etz[104] = C8563;
    etz[105] = C8572;
    etz[106] = C8581;
    etz[107] = C8590;
    etz[108] = C8599;
    etz[109] = C8608;
    etz[110] = C8617;
    etz[111] = C8626;
    etz[112] = C8635;
    etz[113] = C8644;
    etz[114] = C8653;
    etz[115] = C8662;
    etz[116] = C8671;
    etz[117] = C8752;
    etz[118] = C8761;
    etz[119] = C8770;
    etz[120] = C8779;
    etz[121] = C8788;
    etz[122] = C8797;
    etz[123] = C8806;
    etz[124] = C8815;
    etz[125] = C8824;
    etz[126] = C8833;
    etz[127] = C8842;
    etz[128] = C8851;
    etz[129] = C8860;
    etz[130] = C8869;
    etz[131] = C8878;
    etz[132] = C8887;
    etz[133] = C8896;
    etz[134] = C8905;
    etz[135] = C9058;
    etz[136] = C9067;
    etz[137] = C9076;
    etz[138] = C9085;
    etz[139] = C9094;
    etz[140] = C9103;
    etz[141] = C9112;
    etz[142] = C9121;
    etz[143] = C9130;
}
