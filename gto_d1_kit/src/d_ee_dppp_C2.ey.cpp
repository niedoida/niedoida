/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_3_et(const double ae,
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
    const double C9295 = g[54];
    const double C9313 = g[55];
    const double C9330 = g[56];
    const double C9346 = g[57];
    const double C9362 = g[58];
    const double C9378 = g[59];
    const double C9394 = g[60];
    const double C9410 = g[61];
    const double C9573 = g[62];
    const double C9589 = g[63];
    const double C9605 = g[64];
    const double C9620 = g[65];
    const double C9710 = g[66];
    const double C9726 = g[67];
    const double C9742 = g[68];
    const double C9758 = g[69];
    const double C9846 = g[70];
    const double C9863 = g[71];
    const double C9879 = g[72];
    const double C9894 = g[73];
    const double C9909 = g[74];
    const double C9924 = g[75];
    const double C9939 = g[76];
    const double C9954 = g[77];
    const double C10119 = g[78];
    const double C10135 = g[79];
    const double C10150 = g[80];
    const double C10165 = g[81];
    const double C10255 = g[82];
    const double C10271 = g[83];
    const double C10286 = g[84];
    const double C10302 = g[85];
    const double C10391 = g[86];
    const double C10408 = g[87];
    const double C10424 = g[88];
    const double C10439 = g[89];
    const double C10454 = g[90];
    const double C10470 = g[91];
    const double C10485 = g[92];
    const double C10500 = g[93];
    const double C10664 = g[94];
    const double C10680 = g[95];
    const double C10695 = g[96];
    const double C10710 = g[97];
    const double C10798 = g[98];
    const double C10814 = g[99];
    const double C10829 = g[100];
    const double C10845 = g[101];
    const double C10933 = g[102];
    const double C10949 = g[103];
    const double C10964 = g[104];
    const double C10979 = g[105];
    const double C11065 = g[106];
    const double C11081 = g[107];
    const double C11096 = g[108];
    const double C11111 = g[109];
    const double C11196 = g[110];
    const double C11212 = g[111];
    const double C11227 = g[112];
    const double C11243 = g[113];
    const double C11328 = g[114];
    const double C11343 = g[115];
    const double C11358 = g[116];
    const double C11373 = g[117];
    const double C11458 = g[118];
    const double C11473 = g[119];
    const double C11592 = g[120];
    const double C11652 = g[121];
    const double C11710 = g[122];
    const double C11797 = g[123];
    const double C11857 = g[124];
    const double C11915 = g[125];
    const double C12001 = g[126];
    const double C12045 = g[127];
    const double C12103 = g[128];
    const double C12118 = g[129];
    const double C12133 = g[130];
    const double C14608 = g[131];
    const double C14682 = g[132];
    const double C14811 = g[133];
    const double C14869 = g[134];
    const double C17673 = g[135];
    const double C9300 = vrx[0];
    const double C9318 = vrx[1];
    const double C9334 = vrx[2];
    const double C9350 = vrx[3];
    const double C9429 = vrx[4];
    const double C9444 = vrx[5];
    const double C9517 = vrx[6];
    const double C9532 = vrx[7];
    const double C9593 = vrx[8];
    const double C9638 = vrx[9];
    const double C9683 = vrx[10];
    const double C9730 = vrx[11];
    const double C9819 = vrx[12];
    const double C9850 = vrx[13];
    const double C9867 = vrx[14];
    const double C9972 = vrx[15];
    const double C9987 = vrx[16];
    const double C9988 = vrx[17];
    const double C10063 = vrx[18];
    const double C10078 = vrx[19];
    const double C10183 = vrx[20];
    const double C10228 = vrx[21];
    const double C10320 = vrx[22];
    const double C10364 = vrx[23];
    const double C10395 = vrx[24];
    const double C10412 = vrx[25];
    const double C10518 = vrx[26];
    const double C10533 = vrx[27];
    const double C10606 = vrx[28];
    const double C10621 = vrx[29];
    const double C10622 = vrx[30];
    const double C10771 = vrx[31];
    const double C10906 = vrx[32];
    const double C11039 = vrx[33];
    const double C11462 = vrx[34];
    const double C11477 = vrx[35];
    const double C11492 = vrx[36];
    const double C11521 = vrx[37];
    const double C11550 = vrx[38];
    const double C11565 = vrx[39];
    const double C11580 = vrx[40];
    const double C11610 = vrx[41];
    const double C11625 = vrx[42];
    const double C11640 = vrx[43];
    const double C11698 = vrx[44];
    const double C11728 = vrx[45];
    const double C11756 = vrx[46];
    const double C11785 = vrx[47];
    const double C11815 = vrx[48];
    const double C11830 = vrx[49];
    const double C11845 = vrx[50];
    const double C11903 = vrx[51];
    const double C11961 = vrx[52];
    const double C11976 = vrx[53];
    const double C12033 = vrx[54];
    const double C12091 = vrx[55];
    const double C12166 = vry[0];
    const double C12183 = vry[1];
    const double C12198 = vry[2];
    const double C12213 = vry[3];
    const double C12288 = vry[4];
    const double C12303 = vry[5];
    const double C12376 = vry[6];
    const double C12391 = vry[7];
    const double C12450 = vry[8];
    const double C12493 = vry[9];
    const double C12538 = vry[10];
    const double C12583 = vry[11];
    const double C12670 = vry[12];
    const double C12700 = vry[13];
    const double C12716 = vry[14];
    const double C12815 = vry[15];
    const double C12830 = vry[16];
    const double C12831 = vry[17];
    const double C12906 = vry[18];
    const double C12921 = vry[19];
    const double C13022 = vry[20];
    const double C13067 = vry[21];
    const double C13155 = vry[22];
    const double C13199 = vry[23];
    const double C13229 = vry[24];
    const double C13245 = vry[25];
    const double C13345 = vry[26];
    const double C13360 = vry[27];
    const double C13433 = vry[28];
    const double C13448 = vry[29];
    const double C13449 = vry[30];
    const double C13594 = vry[31];
    const double C13725 = vry[32];
    const double C13854 = vry[33];
    const double C14264 = vry[34];
    const double C14278 = vry[35];
    const double C14293 = vry[36];
    const double C14322 = vry[37];
    const double C14351 = vry[38];
    const double C14366 = vry[39];
    const double C14381 = vry[40];
    const double C14410 = vry[41];
    const double C14425 = vry[42];
    const double C14440 = vry[43];
    const double C14497 = vry[44];
    const double C14526 = vry[45];
    const double C14554 = vry[46];
    const double C14583 = vry[47];
    const double C14613 = vry[48];
    const double C14628 = vry[49];
    const double C14643 = vry[50];
    const double C14701 = vry[51];
    const double C14758 = vry[52];
    const double C14773 = vry[53];
    const double C14830 = vry[54];
    const double C14888 = vry[55];
    const double C14960 = vrz[0];
    const double C14977 = vrz[1];
    const double C14992 = vrz[2];
    const double C15007 = vrz[3];
    const double C15082 = vrz[4];
    const double C15097 = vrz[5];
    const double C15170 = vrz[6];
    const double C15185 = vrz[7];
    const double C15244 = vrz[8];
    const double C15287 = vrz[9];
    const double C15332 = vrz[10];
    const double C15377 = vrz[11];
    const double C15464 = vrz[12];
    const double C15494 = vrz[13];
    const double C15510 = vrz[14];
    const double C15609 = vrz[15];
    const double C15624 = vrz[16];
    const double C15625 = vrz[17];
    const double C15700 = vrz[18];
    const double C15715 = vrz[19];
    const double C15816 = vrz[20];
    const double C15861 = vrz[21];
    const double C15949 = vrz[22];
    const double C15993 = vrz[23];
    const double C16023 = vrz[24];
    const double C16039 = vrz[25];
    const double C16139 = vrz[26];
    const double C16154 = vrz[27];
    const double C16227 = vrz[28];
    const double C16242 = vrz[29];
    const double C16243 = vrz[30];
    const double C16388 = vrz[31];
    const double C16519 = vrz[32];
    const double C16648 = vrz[33];
    const double C17058 = vrz[34];
    const double C17072 = vrz[35];
    const double C17087 = vrz[36];
    const double C17116 = vrz[37];
    const double C17145 = vrz[38];
    const double C17160 = vrz[39];
    const double C17175 = vrz[40];
    const double C17204 = vrz[41];
    const double C17219 = vrz[42];
    const double C17234 = vrz[43];
    const double C17291 = vrz[44];
    const double C17320 = vrz[45];
    const double C17348 = vrz[46];
    const double C17377 = vrz[47];
    const double C17406 = vrz[48];
    const double C17421 = vrz[49];
    const double C17436 = vrz[50];
    const double C17493 = vrz[51];
    const double C17550 = vrz[52];
    const double C17565 = vrz[53];
    const double C17621 = vrz[54];
    const double C17679 = vrz[55];
    const double C9297 = 2 * q;
    const double C17844 = C11961 * p;
    const double C17843 = C11903 * p;
    const double C17842 = C11039 / q;
    const double C17841 = C11845 * p;
    const double C17840 = C11830 * p;
    const double C17839 = C11785 * p;
    const double C17838 = C10320 * p;
    const double C17837 = C11756 * p;
    const double C17836 = C11698 * p;
    const double C17835 = C11640 * p;
    const double C17834 = C11625 * p;
    const double C17833 = C11610 * p;
    const double C17832 = C11580 * p;
    const double C17831 = C11565 * p;
    const double C17830 = C11550 * p;
    const double C17829 = C9730 * p;
    const double C17828 = C11521 * p;
    const double C17827 = C9593 * p;
    const double C17826 = C11492 * p;
    const double C17816 = C11039 * p;
    const double C17808 = C10771 * p;
    const double C17805 = C10606 * p;
    const double C17801 = C10533 * p;
    const double C17800 = C10518 * p;
    const double C17796 = C10395 * p;
    const double C17792 = C10364 * p;
    const double C17790 = C10320 / q;
    const double C17786 = C10228 * p;
    const double C17782 = C10078 * p;
    const double C17781 = C10063 * p;
    const double C17778 = C9972 * p;
    const double C17774 = C9850 * p;
    const double C17770 = C9819 * p;
    const double C17767 = C9730 / q;
    const double C17764 = C9683 * p;
    const double C17760 = C9638 * p;
    const double C17757 = C9593 / q;
    const double C17753 = C9532 * p;
    const double C17752 = C9517 * p;
    const double C17751 = de * zCD;
    const double C17750 = be * zAB;
    const double C17745 = C9444 * p;
    const double C17744 = C9429 * p;
    const double C17743 = de * yCD;
    const double C17742 = be * yAB;
    const double C17739 = de * xCD;
    const double C17738 = be * xAB;
    const double C17977 = C14758 * p;
    const double C17976 = C14701 * p;
    const double C17975 = C13854 / q;
    const double C17974 = C14643 * p;
    const double C17973 = C14628 * p;
    const double C17972 = C14583 * p;
    const double C17971 = C13155 * p;
    const double C17970 = C14554 * p;
    const double C17969 = C14497 * p;
    const double C17968 = C14440 * p;
    const double C17967 = C14425 * p;
    const double C17966 = C14410 * p;
    const double C17965 = C14381 * p;
    const double C17964 = C14366 * p;
    const double C17963 = C14351 * p;
    const double C17962 = C12583 * p;
    const double C17961 = C14322 * p;
    const double C17960 = C12450 * p;
    const double C17959 = C14293 * p;
    const double C17949 = C13854 * p;
    const double C17941 = C13594 * p;
    const double C17938 = C13433 * p;
    const double C17934 = C13360 * p;
    const double C17933 = C13345 * p;
    const double C17929 = C13229 * p;
    const double C17925 = C13199 * p;
    const double C17923 = C13155 / q;
    const double C17919 = C13067 * p;
    const double C17915 = C12921 * p;
    const double C17914 = C12906 * p;
    const double C17911 = C12815 * p;
    const double C17907 = C12700 * p;
    const double C17903 = C12670 * p;
    const double C17900 = C12583 / q;
    const double C17897 = C12538 * p;
    const double C17893 = C12493 * p;
    const double C17890 = C12450 / q;
    const double C17886 = C12391 * p;
    const double C17885 = C12376 * p;
    const double C17880 = C12303 * p;
    const double C17879 = C12288 * p;
    const double C18107 = C17550 * p;
    const double C18106 = C17493 * p;
    const double C18105 = C16648 / q;
    const double C18104 = C17436 * p;
    const double C18103 = C17421 * p;
    const double C18102 = C17377 * p;
    const double C18101 = C15949 * p;
    const double C18100 = C17348 * p;
    const double C18099 = C17291 * p;
    const double C18098 = C17234 * p;
    const double C18097 = C17219 * p;
    const double C18096 = C17204 * p;
    const double C18095 = C17175 * p;
    const double C18094 = C17160 * p;
    const double C18093 = C17145 * p;
    const double C18092 = C15377 * p;
    const double C18091 = C17116 * p;
    const double C18090 = C15244 * p;
    const double C18089 = C17087 * p;
    const double C18079 = C16648 * p;
    const double C18071 = C16388 * p;
    const double C18068 = C16227 * p;
    const double C18064 = C16154 * p;
    const double C18063 = C16139 * p;
    const double C18059 = C16023 * p;
    const double C18055 = C15993 * p;
    const double C18053 = C15949 / q;
    const double C18049 = C15861 * p;
    const double C18045 = C15715 * p;
    const double C18044 = C15700 * p;
    const double C18041 = C15609 * p;
    const double C18037 = C15494 * p;
    const double C18033 = C15464 * p;
    const double C18030 = C15377 / q;
    const double C18027 = C15332 * p;
    const double C18023 = C15287 * p;
    const double C18020 = C15244 / q;
    const double C18016 = C15185 * p;
    const double C18015 = C15170 * p;
    const double C18010 = C15097 * p;
    const double C18009 = C15082 * p;
    const double C17825 = C11477 / C9297;
    const double C17821 = C10621 / C9297;
    const double C17820 = C9730 / C9297;
    const double C17819 = C10320 / C9297;
    const double C17818 = C11039 / C9297;
    const double C17814 = C9350 / C9297;
    const double C17812 = C9987 / C9297;
    const double C17811 = C9593 / C9297;
    const double C17810 = C10622 / C9297;
    const double C17807 = C10533 / C9297;
    const double C17795 = C10412 / C9297;
    const double C17794 = C10395 / C9297;
    const double C17788 = C10078 / C9297;
    const double C17785 = C9988 / C9297;
    const double C17773 = C9867 / C9297;
    const double C17772 = C9850 / C9297;
    const double C17766 = C9532 / C9297;
    const double C17756 = C9444 / C9297;
    const double C17741 = C9318 / C9297;
    const double C17740 = C9300 / C9297;
    const double C17958 = C14278 / C9297;
    const double C17954 = C13448 / C9297;
    const double C17953 = C12583 / C9297;
    const double C17952 = C13155 / C9297;
    const double C17951 = C13854 / C9297;
    const double C17947 = C12213 / C9297;
    const double C17945 = C12830 / C9297;
    const double C17944 = C12450 / C9297;
    const double C17943 = C13449 / C9297;
    const double C17940 = C13360 / C9297;
    const double C17928 = C13245 / C9297;
    const double C17927 = C13229 / C9297;
    const double C17921 = C12921 / C9297;
    const double C17918 = C12831 / C9297;
    const double C17906 = C12716 / C9297;
    const double C17905 = C12700 / C9297;
    const double C17899 = C12391 / C9297;
    const double C17889 = C12303 / C9297;
    const double C17878 = C12183 / C9297;
    const double C17877 = C12166 / C9297;
    const double C18088 = C17072 / C9297;
    const double C18084 = C16242 / C9297;
    const double C18083 = C15377 / C9297;
    const double C18082 = C15949 / C9297;
    const double C18081 = C16648 / C9297;
    const double C18077 = C15007 / C9297;
    const double C18075 = C15624 / C9297;
    const double C18074 = C15244 / C9297;
    const double C18073 = C16243 / C9297;
    const double C18070 = C16154 / C9297;
    const double C18058 = C16039 / C9297;
    const double C18057 = C16023 / C9297;
    const double C18051 = C15715 / C9297;
    const double C18048 = C15625 / C9297;
    const double C18036 = C15510 / C9297;
    const double C18035 = C15494 / C9297;
    const double C18029 = C15185 / C9297;
    const double C18019 = C15097 / C9297;
    const double C18008 = C14977 / C9297;
    const double C18007 = C14960 / C9297;
    const double C17872 = C17843 / q;
    const double C17871 = C17841 / q;
    const double C17870 = C17839 / q;
    const double C17869 = C17836 / q;
    const double C17867 = C17835 / q;
    const double C17868 = C17834 / q;
    const double C17866 = C17833 / q;
    const double C17865 = C17832 / q;
    const double C17864 = C17830 / q;
    const double C17862 = C17792 / q;
    const double C17857 = C17770 / q;
    const double C17852 = C17760 / q;
    const double C17849 = C17750 + C17751;
    const double C17846 = C17742 + C17743;
    const double C17845 = C17738 + C17739;
    const double C18002 = C17976 / q;
    const double C18001 = C17974 / q;
    const double C18000 = C17972 / q;
    const double C17999 = C17969 / q;
    const double C17997 = C17968 / q;
    const double C17998 = C17967 / q;
    const double C17996 = C17966 / q;
    const double C17995 = C17965 / q;
    const double C17994 = C17963 / q;
    const double C17992 = C17925 / q;
    const double C17987 = C17903 / q;
    const double C17982 = C17893 / q;
    const double C18132 = C18106 / q;
    const double C18131 = C18104 / q;
    const double C18130 = C18102 / q;
    const double C18129 = C18099 / q;
    const double C18127 = C18098 / q;
    const double C18128 = C18097 / q;
    const double C18126 = C18096 / q;
    const double C18125 = C18095 / q;
    const double C18124 = C18093 / q;
    const double C18122 = C18055 / q;
    const double C18117 = C18033 / q;
    const double C18112 = C18023 / q;
    const double C2703 = -(C9300 * C17849 + C17752) / q;
    const double C2704 = -(C9318 * C17849 + C17753) / q;
    const double C2777 = -(C9444 * C17849 + C17764) / q;
    const double C2849 = C17741 - (C9532 * C17849) / q - C17857;
    const double C2928 = -(C9850 * C17849 + C17781) / q;
    const double C2929 = -(C9867 * C17849 + C17782) / q;
    const double C3002 = -(C9988 * C17849 + C17786) / q;
    const double C3074 = C17773 - (C10078 * C17849) / q - C17862;
    const double C3153 = C17767 - (C10395 * C17849) / q - C17805 / q;
    const double C3154 = C10621 / q - (C10412 * C17849) / q - (C10622 * p) / q;
    const double C3227 = C17790 - (C10533 * C17849) / q - C17808 / q;
    const double C3299 =
        (3 * C10412) / C9297 - (C10622 * C17849) / q - (C10906 * p) / q;
    const double C3371 = -(C9593 * C17849 + C17816) / q;
    const double C3506 = C17811 - (C11039 * C17849) / q - C17800 / q;
    const double C3578 = C17814 - (C9730 * C17849) / q - C17796 / q;
    const double C3776 = C17812 - (C10320 * C17849) / q - C17801 / q;
    const double C9398 = -(C9334 * C17849 + C17828) / q;
    const double C9414 = -(C9350 * C17849 + C17829) / q;
    const double C9488 = -(C9429 * C17849 + C17831) / q;
    const double C9547 = C17740 - (C9517 * C17849) / q - C17865;
    const double C9668 = -(C9638 * C17849 + C17834) / q;
    const double C9698 = C17756 - (C9683 * C17849) / q - C17867;
    const double C9834 = C9532 / q - (C9819 * C17849) / q - C17869;
    const double C10033 = -(C9972 * C17849 + C17837) / q;
    const double C10048 = -(C9987 * C17849 + C17838) / q;
    const double C10093 = C17772 - (C10063 * C17849) / q - C17870;
    const double C10213 = -(C10183 * C17849 + C17840) / q;
    const double C10243 = C17785 - (C10228 * C17849) / q - C17871;
    const double C10379 = C10078 / q - (C10364 * C17849) / q - C17872;
    const double C10577 = C17842 - (C10518 * C17849) / q - C17844 / q;
    const double C10637 =
        (3 * C10395) / C9297 - (C10606 * C17849) / q - (C11976 * p) / q;
    const double C10652 = C17825 - (C10621 * C17849) / q - (C10412 * p) / q;
    const double C10786 =
        (3 * C10533) / C9297 - (C10771 * C17849) / q - (C12033 * p) / q;
    const double C10921 =
        (2 * C10622) / q - (C10906 * C17849) / q - (C12091 * p) / q;
    const double C5385 = -(C12166 * C17849 + C17885) / q;
    const double C5386 = -(C12183 * C17849 + C17886) / q;
    const double C5459 = -(C12303 * C17849 + C17897) / q;
    const double C5610 = -(C12700 * C17849 + C17914) / q;
    const double C5611 = -(C12716 * C17849 + C17915) / q;
    const double C5684 = -(C12831 * C17849 + C17919) / q;
    const double C5835 = C17900 - (C13229 * C17849) / q - C17938 / q;
    const double C5836 = C13448 / q - (C13245 * C17849) / q - (C13449 * p) / q;
    const double C5909 = C17923 - (C13360 * C17849) / q - C17941 / q;
    const double C5981 =
        (3 * C13245) / C9297 - (C13449 * C17849) / q - (C13725 * p) / q;
    const double C6053 = -(C12450 * C17849 + C17949) / q;
    const double C6188 = C17944 - (C13854 * C17849) / q - C17933 / q;
    const double C6260 = C17947 - (C12583 * C17849) / q - C17929 / q;
    const double C6458 = C17945 - (C13155 * C17849) / q - C17934 / q;
    const double C12258 = -(C12198 * C17849 + C17961) / q;
    const double C12273 = -(C12213 * C17849 + C17962) / q;
    const double C12347 = -(C12288 * C17849 + C17964) / q;
    const double C12523 = -(C12493 * C17849 + C17967) / q;
    const double C12876 = -(C12815 * C17849 + C17970) / q;
    const double C12891 = -(C12830 * C17849 + C17971) / q;
    const double C13052 = -(C13022 * C17849 + C17973) / q;
    const double C13404 = C17975 - (C13345 * C17849) / q - C17977 / q;
    const double C13464 =
        (3 * C13229) / C9297 - (C13433 * C17849) / q - (C14773 * p) / q;
    const double C13479 = C17958 - (C13448 * C17849) / q - (C13245 * p) / q;
    const double C13609 =
        (3 * C13360) / C9297 - (C13594 * C17849) / q - (C14830 * p) / q;
    const double C13740 =
        (2 * C13449) / q - (C13725 * C17849) / q - (C14888 * p) / q;
    const double C8067 = -(C9330 * de + C14960 * C17849 + C18015) / q;
    const double C8068 = -(C9346 * de + C14977 * C17849 + C18016) / q;
    const double C8141 = -(C9589 * de + C15097 * C17849 + C18027) / q;
    const double C8292 = -(C9879 * de + C15494 * C17849 + C18044) / q;
    const double C8293 = -(C9894 * de + C15510 * C17849 + C18045) / q;
    const double C8366 = -(C10135 * de + C15625 * C17849 + C18049) / q;
    const double C8517 =
        C18030 - (C10424 * de + C16023 * C17849) / q - C18068 / q;
    const double C8518 =
        C16242 / q - (C10439 * de + C16039 * C17849) / q - (C16243 * p) / q;
    const double C8591 =
        C18053 - (C10680 * de + C16154 * C17849) / q - C18071 / q;
    const double C8663 = (3 * C16039) / C9297 -
                         (C10814 * de + C16243 * C17849) / q - (C16519 * p) / q;
    const double C8735 = -(C10949 * de + C15244 * C17849 + C18079) / q;
    const double C8870 =
        C18074 - (C11081 * de + C16648 * C17849) / q - C18063 / q;
    const double C8942 =
        C18077 - (C11212 * de + C15377 * C17849) / q - C18059 / q;
    const double C9140 =
        C18075 - (C11343 * de + C15949 * C17849) / q - C18064 / q;
    const double C15052 = -(C11458 * de + C14992 * C17849 + C18091) / q;
    const double C15067 = -(C11473 * de + C15007 * C17849 + C18092) / q;
    const double C15141 = -(C11592 * de + C15082 * C17849 + C18094) / q;
    const double C15317 = -(C11710 * de + C15287 * C17849 + C18097) / q;
    const double C15670 = -(C11797 * de + C15609 * C17849 + C18100) / q;
    const double C15685 = -(C12103 * de + C15624 * C17849 + C18101) / q;
    const double C15846 = -(C14608 * de + C15816 * C17849 + C18103) / q;
    const double C16198 =
        C18105 - (C12001 * de + C16139 * C17849) / q - C18107 / q;
    const double C16258 = (3 * C16023) / C9297 -
                          (C12045 * de + C16227 * C17849) / q -
                          (C17565 * p) / q;
    const double C16273 =
        C18088 - (C12133 * de + C16242 * C17849) / q - (C16039 * p) / q;
    const double C16403 = (3 * C16154) / C9297 -
                          (C14869 * de + C16388 * C17849) / q -
                          (C17621 * p) / q;
    const double C16534 = (2 * C16243) / q -
                          (C17673 * de + C16519 * C17849) / q -
                          (C17679 * p) / q;
    const double C2676 = -(C9300 * C17846 + C17744) / q;
    const double C2677 = -(C9318 * C17846 + C17745) / q;
    const double C2753 = C17741 - (C9444 * C17846) / q - C17852;
    const double C2825 = -(C9532 * C17846 + C17764) / q;
    const double C2901 = C17757 - (C9850 * C17846) / q - C17778 / q;
    const double C2902 = C9987 / q - (C9867 * C17846) / q - (C9988 * p) / q;
    const double C2978 =
        (3 * C9867) / C9297 - (C9988 * C17846) / q - (C10183 * p) / q;
    const double C3050 = C17790 - (C10078 * C17846) / q - C17786 / q;
    const double C3126 = -(C10395 * C17846 + C17800) / q;
    const double C3127 = -(C10412 * C17846 + C17801) / q;
    const double C3203 = C17795 - (C10533 * C17846) / q - C17862;
    const double C3275 = -(C10622 * C17846 + C17808) / q;
    const double C3347 = C17814 - (C9593 * C17846) / q - C17774 / q;
    const double C3482 = C17820 - (C11039 * C17846) / q - C17781 / q;
    const double C3554 = -(C9730 * C17846 + C17816) / q;
    const double C3752 = C17821 - (C10320 * C17846) / q - C17782 / q;
    const double C9366 = -(C9334 * C17846 + C17826) / q;
    const double C9382 = -(C9350 * C17846 + C17827) / q;
    const double C9459 = C17740 - (C9429 * C17846) / q - C17864;
    const double C9653 = C9444 / q - (C9638 * C17846) / q - C17866;
    const double C9746 = -(C9517 * C17846 + C17831) / q;
    const double C9790 = C17766 - (C9683 * C17846) / q - C17868;
    const double C10003 =
        (3 * C9850) / C9297 - (C9972 * C17846) / q - (C11728 * p) / q;
    const double C10018 = C17825 - (C9987 * C17846) / q - (C9867 * p) / q;
    const double C10198 =
        (2 * C9988) / q - (C10183 * C17846) / q - (C11815 * p) / q;
    const double C10290 = C17842 - (C10063 * C17846) / q - C17837 / q;
    const double C10335 =
        (3 * C10078) / C9297 - (C10228 * C17846) / q - C17840 / q;
    const double C10458 = -(C9819 * C17846 + C17835) / q;
    const double C10548 = C17794 - (C10518 * C17846) / q - C17870;
    const double C10742 = C10533 / q - (C10364 * C17846) / q - C17871;
    const double C10833 = -(C10606 * C17846 + C17844) / q;
    const double C10877 = C17810 - (C10771 * C17846) / q - C17872;
    const double C11231 = -(C10621 * C17846 + C17838) / q;
    const double C5358 = -(C9330 * de + C12166 * C17846 + C17879) / q;
    const double C5359 = -(C9346 * de + C12183 * C17846 + C17880) / q;
    const double C5507 = -(C9726 * de + C12391 * C17846 + C17897) / q;
    const double C5583 =
        C17890 - (C9879 * de + C12700 * C17846) / q - C17911 / q;
    const double C5584 =
        C12830 / q - (C9894 * de + C12716 * C17846) / q - (C12831 * p) / q;
    const double C5660 = (3 * C12716) / C9297 -
                         (C10135 * de + C12831 * C17846) / q - (C13022 * p) / q;
    const double C5732 =
        C17923 - (C10271 * de + C12921 * C17846) / q - C17919 / q;
    const double C5808 = -(C10424 * de + C13229 * C17846 + C17933) / q;
    const double C5809 = -(C10439 * de + C13245 * C17846 + C17934) / q;
    const double C5957 = -(C10814 * de + C13449 * C17846 + C17941) / q;
    const double C6029 =
        C17947 - (C10949 * de + C12450 * C17846) / q - C17907 / q;
    const double C6164 =
        C17953 - (C11081 * de + C13854 * C17846) / q - C17914 / q;
    const double C6236 = -(C11212 * de + C12583 * C17846 + C17949) / q;
    const double C6434 =
        C17954 - (C11343 * de + C13155 * C17846) / q - C17915 / q;
    const double C12228 = -(C11458 * de + C12198 * C17846 + C17959) / q;
    const double C12243 = -(C11473 * de + C12213 * C17846 + C17960) / q;
    const double C12598 = -(C11652 * de + C12376 * C17846 + C17964) / q;
    const double C12846 = (3 * C12700) / C9297 -
                          (C11797 * de + C12815 * C17846) / q -
                          (C14526 * p) / q;
    const double C12861 =
        C17958 - (C12103 * de + C12830 * C17846) / q - (C12716 * p) / q;
    const double C13037 = (2 * C12831) / q -
                          (C14608 * de + C13022 * C17846) / q -
                          (C14613 * p) / q;
    const double C13126 =
        C17975 - (C11857 * de + C12906 * C17846) / q - C17970 / q;
    const double C13170 =
        (3 * C12921) / C9297 - (C14682 * de + C13067 * C17846) / q - C17973 / q;
    const double C13288 = -(C11915 * de + C12670 * C17846 + C17968) / q;
    const double C13653 = -(C12045 * de + C13433 * C17846 + C17977) / q;
    const double C14039 = -(C12133 * de + C13448 * C17846 + C17971) / q;
    const double C8040 = -(C14960 * C17846 + C18009) / q;
    const double C8041 = -(C14977 * C17846 + C18010) / q;
    const double C8189 = -(C15185 * C17846 + C18027) / q;
    const double C8265 = C18020 - (C15494 * C17846) / q - C18041 / q;
    const double C8266 = C15624 / q - (C15510 * C17846) / q - (C15625 * p) / q;
    const double C8342 =
        (3 * C15510) / C9297 - (C15625 * C17846) / q - (C15816 * p) / q;
    const double C8414 = C18053 - (C15715 * C17846) / q - C18049 / q;
    const double C8490 = -(C16023 * C17846 + C18063) / q;
    const double C8491 = -(C16039 * C17846 + C18064) / q;
    const double C8639 = -(C16243 * C17846 + C18071) / q;
    const double C8711 = C18077 - (C15244 * C17846) / q - C18037 / q;
    const double C8846 = C18083 - (C16648 * C17846) / q - C18044 / q;
    const double C8918 = -(C15377 * C17846 + C18079) / q;
    const double C9116 = C18084 - (C15949 * C17846) / q - C18045 / q;
    const double C15022 = -(C14992 * C17846 + C18089) / q;
    const double C15037 = -(C15007 * C17846 + C18090) / q;
    const double C15392 = -(C15170 * C17846 + C18094) / q;
    const double C15640 =
        (3 * C15494) / C9297 - (C15609 * C17846) / q - (C17320 * p) / q;
    const double C15655 = C18088 - (C15624 * C17846) / q - (C15510 * p) / q;
    const double C15831 =
        (2 * C15625) / q - (C15816 * C17846) / q - (C17406 * p) / q;
    const double C15920 = C18105 - (C15700 * C17846) / q - C18100 / q;
    const double C15964 =
        (3 * C15715) / C9297 - (C15861 * C17846) / q - C18103 / q;
    const double C16082 = -(C15464 * C17846 + C18098) / q;
    const double C16447 = -(C16227 * C17846 + C18107) / q;
    const double C16833 = -(C16242 * C17846 + C18101) / q;
    const double C2649 = (3 * C9318) / C9297 -
                         (C9330 * de + C9300 * C17845) / q - (C9334 * p) / q;
    const double C2650 =
        C9350 / q - (C9346 * de + C9318 * C17845) / q - (C9300 * p) / q;
    const double C2729 =
        C17757 - (C9589 * de + C9444 * C17845) / q - C17744 / q;
    const double C2801 =
        C17767 - (C9726 * de + C9532 * C17845) / q - C17752 / q;
    const double C2874 = C17773 - (C9879 * de + C9850 * C17845) / q - C17852;
    const double C2875 = -(C9894 * de + C9867 * C17845 + C17774) / q;
    const double C2954 = -(C10135 * de + C9988 * C17845 + C17778) / q;
    const double C3026 = -(C10271 * de + C10078 * C17845 + C17781) / q;
    const double C3099 = C17795 - (C10424 * de + C10395 * C17845) / q - C17857;
    const double C3100 = -(C10439 * de + C10412 * C17845 + C17796) / q;
    const double C3179 = -(C10680 * de + C10533 * C17845 + C17800) / q;
    const double C3251 = -(C10814 * de + C10622 * C17845 + C17805) / q;
    const double C3323 =
        C17812 - (C10949 * de + C9593 * C17845) / q - C17745 / q;
    const double C3458 =
        C17819 - (C11081 * de + C11039 * C17845) / q - C17764 / q;
    const double C3530 =
        C17821 - (C11212 * de + C9730 * C17845) / q - C17753 / q;
    const double C3728 = -(C11343 * de + C10320 * C17845 + C17816) / q;
    const double C9301 =
        (2 * C9300) / q - (C11458 * de + C9334 * C17845) / q - (C11462 * p) / q;
    const double C9317 =
        C17825 - (C11473 * de + C9350 * C17845) / q - (C9318 * p) / q;
    const double C9577 =
        (3 * C9444) / C9297 - (C11592 * de + C9429 * C17845) / q - C17826 / q;
    const double C9714 =
        (3 * C9532) / C9297 - (C11652 * de + C9517 * C17845) / q - C17828 / q;
    const double C9851 =
        C9850 / q - (C11710 * de + C9638 * C17845) / q - C17864;
    const double C10123 = C17785 - (C11797 * de + C9972 * C17845) / q - C17866;
    const double C10259 = C17788 - (C11857 * de + C10063 * C17845) / q - C17868;
    const double C10396 =
        C10395 / q - (C11915 * de + C9819 * C17845) / q - C17865;
    const double C10668 = C17807 - (C12001 * de + C10518 * C17845) / q - C17867;
    const double C10802 = C17810 - (C12045 * de + C10606 * C17845) / q - C17869;
    const double C10937 = -(C12103 * de + C9987 * C17845 + C17827) / q;
    const double C11069 =
        C17842 - (C12118 * de + C9683 * C17845) / q - C17831 / q;
    const double C11200 = -(C12133 * de + C10621 * C17845 + C17829) / q;
    const double C5331 =
        (3 * C12183) / C9297 - (C12166 * C17845) / q - (C12198 * p) / q;
    const double C5332 = C12213 / q - (C12183 * C17845) / q - (C12166 * p) / q;
    const double C5411 = C17890 - (C12303 * C17845) / q - C17879 / q;
    const double C5483 = C17900 - (C12391 * C17845) / q - C17885 / q;
    const double C5557 = -(C12716 * C17845 + C17907) / q;
    const double C5636 = -(C12831 * C17845 + C17911) / q;
    const double C5708 = -(C12921 * C17845 + C17914) / q;
    const double C5782 = -(C13245 * C17845 + C17929) / q;
    const double C5861 = -(C13360 * C17845 + C17933) / q;
    const double C5933 = -(C13449 * C17845 + C17938) / q;
    const double C6005 = C17945 - (C12450 * C17845) / q - C17880 / q;
    const double C6140 = C17952 - (C13854 * C17845) / q - C17897 / q;
    const double C6212 = C17954 - (C12583 * C17845) / q - C17886 / q;
    const double C6410 = -(C13155 * C17845 + C17949) / q;
    const double C12167 =
        (2 * C12166) / q - (C12198 * C17845) / q - (C14264 * p) / q;
    const double C12182 = C17958 - (C12213 * C17845) / q - (C12183 * p) / q;
    const double C12435 =
        (3 * C12303) / C9297 - (C12288 * C17845) / q - C17959 / q;
    const double C12568 =
        (3 * C12391) / C9297 - (C12376 * C17845) / q - C17961 / q;
    const double C13755 = -(C12830 * C17845 + C17960) / q;
    const double C13883 = C17975 - (C12538 * C17845) / q - C17964 / q;
    const double C14010 = -(C13448 * C17845 + C17962) / q;
    const double C8013 =
        (3 * C14977) / C9297 - (C14960 * C17845) / q - (C14992 * p) / q;
    const double C8014 = C15007 / q - (C14977 * C17845) / q - (C14960 * p) / q;
    const double C8093 = C18020 - (C15097 * C17845) / q - C18009 / q;
    const double C8165 = C18030 - (C15185 * C17845) / q - C18015 / q;
    const double C8239 = -(C15510 * C17845 + C18037) / q;
    const double C8318 = -(C15625 * C17845 + C18041) / q;
    const double C8390 = -(C15715 * C17845 + C18044) / q;
    const double C8464 = -(C16039 * C17845 + C18059) / q;
    const double C8543 = -(C16154 * C17845 + C18063) / q;
    const double C8615 = -(C16243 * C17845 + C18068) / q;
    const double C8687 = C18075 - (C15244 * C17845) / q - C18010 / q;
    const double C8822 = C18082 - (C16648 * C17845) / q - C18027 / q;
    const double C8894 = C18084 - (C15377 * C17845) / q - C18016 / q;
    const double C9092 = -(C15949 * C17845 + C18079) / q;
    const double C14961 =
        (2 * C14960) / q - (C14992 * C17845) / q - (C17058 * p) / q;
    const double C14976 = C18088 - (C15007 * C17845) / q - (C14977 * p) / q;
    const double C15229 =
        (3 * C15097) / C9297 - (C15082 * C17845) / q - C18089 / q;
    const double C15362 =
        (3 * C15185) / C9297 - (C15170 * C17845) / q - C18091 / q;
    const double C16549 = -(C15624 * C17845 + C18090) / q;
    const double C16677 = C18105 - (C15332 * C17845) / q - C18094 / q;
    const double C16804 = -(C16242 * C17845 + C18092) / q;
    const double C13214 = C12921 / q - (C13199 * C17849) / q - C18002;
    const double C13696 = C17943 - (C14869 * de + C13594 * C17846) / q - C18002;
    const double C13082 = C17918 - (C13067 * C17849) / q - C18001;
    const double C13565 =
        C13360 / q - (C14811 * de + C13199 * C17846) / q - C18001;
    const double C12936 = C17905 - (C12906 * C17849) / q - C18000;
    const double C13375 = C17927 - (C12001 * de + C13345 * C17846) / q - C18000;
    const double C12685 = C12391 / q - (C12670 * C17849) / q - C17999;
    const double C13624 = C17943 - (C13433 * C17845) / q - C17999;
    const double C12553 = C17889 - (C12538 * C17849) / q - C17997;
    const double C13494 = C17940 - (C13345 * C17845) / q - C17997;
    const double C12641 = C17899 - (C12118 * de + C12538 * C17846) / q - C17998;
    const double C13097 = C17921 - (C12906 * C17845) / q - C17998;
    const double C12508 =
        C12303 / q - (C11710 * de + C12493 * C17846) / q - C17996;
    const double C12965 = C17918 - (C12815 * C17845) / q - C17996;
    const double C12406 = C17877 - (C12376 * C17849) / q - C17995;
    const double C13230 = C13229 / q - (C12670 * C17845) / q - C17995;
    const double C12318 = C17877 - (C11592 * de + C12288 * C17846) / q - C17994;
    const double C12701 = C12700 / q - (C12493 * C17845) / q - C17994;
    const double C5756 = C17906 - (C12921 * C17849) / q - C17992;
    const double C5885 = C17928 - (C10680 * de + C13360 * C17846) / q - C17992;
    const double C5531 = C17878 - (C12391 * C17849) / q - C17987;
    const double C5781 = C17928 - (C13229 * C17845) / q - C17987;
    const double C5435 = C17878 - (C9589 * de + C12303 * C17846) / q - C17982;
    const double C5556 = C17906 - (C12700 * C17845) / q - C17982;
    const double C16008 =
        C15715 / q - (C14811 * de + C15993 * C17849) / q - C18132;
    const double C16490 = C18073 - (C16388 * C17846) / q - C18132;
    const double C15876 = C18048 - (C14682 * de + C15861 * C17849) / q - C18131;
    const double C16359 = C16154 / q - (C15993 * C17846) / q - C18131;
    const double C15730 = C18035 - (C11857 * de + C15700 * C17849) / q - C18130;
    const double C16169 = C18057 - (C16139 * C17846) / q - C18130;
    const double C15479 =
        C15185 / q - (C11915 * de + C15464 * C17849) / q - C18129;
    const double C16418 = C18073 - (C16227 * C17845) / q - C18129;
    const double C15347 = C18019 - (C12118 * de + C15332 * C17849) / q - C18127;
    const double C16288 = C18070 - (C16139 * C17845) / q - C18127;
    const double C15435 = C18029 - (C15332 * C17846) / q - C18128;
    const double C15891 = C18051 - (C15700 * C17845) / q - C18128;
    const double C15302 = C15097 / q - (C15287 * C17846) / q - C18126;
    const double C15759 = C18048 - (C15609 * C17845) / q - C18126;
    const double C15200 = C18007 - (C11652 * de + C15170 * C17849) / q - C18125;
    const double C16024 = C16023 / q - (C15464 * C17845) / q - C18125;
    const double C15112 = C18007 - (C15082 * C17846) / q - C18124;
    const double C15495 = C15494 / q - (C15287 * C17845) / q - C18124;
    const double C8438 = C18036 - (C10271 * de + C15715 * C17849) / q - C18122;
    const double C8567 = C18058 - (C16154 * C17846) / q - C18122;
    const double C8213 = C18008 - (C9726 * de + C15185 * C17849) / q - C18117;
    const double C8463 = C18058 - (C16023 * C17845) / q - C18117;
    const double C8117 = C18008 - (C15097 * C17846) / q - C18112;
    const double C8238 = C18036 - (C15494 * C17845) / q - C18112;
    const double C17762 = C2704 / C9297;
    const double C17749 = C2777 * p;
    const double C17755 = C2849 * p;
    const double C17777 = C2928 * p;
    const double C17776 = C2929 / C9297;
    const double C17784 = C3074 * p;
    const double C17799 = C3153 * p;
    const double C17798 = C3154 / C9297;
    const double C17804 = C3227 * p;
    const double C17759 = C3371 / q;
    const double C17817 = C3506 * p;
    const double C17768 = C3578 / q;
    const double C17791 = C3776 / q;
    const double C2667 = (3 * C2704) / C9297 -
                         (C9394 * de + C2703 * C17845) / q - (C9398 * p) / q;
    const double C17815 = C9414 / C9297;
    const double C2668 =
        C9414 / q - (C9410 * de + C2704 * C17845) / q - (C2703 * p) / q;
    const double C17748 = C9488 * p;
    const double C17754 = C9547 * p;
    const double C17763 = C9668 * p;
    const double C17765 = C9698 * p;
    const double C17771 = C9834 * p;
    const double C17780 = C10033 * p;
    const double C17813 = C10048 / C9297;
    const double C2920 = C10048 / q - (C2929 * C17846) / q - (C3002 * p) / q;
    const double C17783 = C10093 * p;
    const double C2994 =
        (3 * C2929) / C9297 - (C3002 * C17846) / q - (C10213 * p) / q;
    const double C17787 = C10243 * p;
    const double C17793 = C10379 * p;
    const double C17803 = C10577 * p;
    const double C17806 = C10637 * p;
    const double C17823 = C10652 / C9297;
    const double C3163 =
        C10652 / q - (C3154 * C17849) / q + C17795 - (C3299 * p) / q;
    const double C17809 = C10786 * p;
    const double C3307 =
        (3 * C3154) / C9297 - (C3299 * C17849) / q + C17810 - (C10921 * p) / q;
    const double C17895 = C5386 / C9297;
    const double C17884 = C5459 * p;
    const double C17910 = C5610 * p;
    const double C17909 = C5611 / C9297;
    const double C17932 = C5835 * p;
    const double C17931 = C5836 / C9297;
    const double C17937 = C5909 * p;
    const double C17892 = C6053 / q;
    const double C17950 = C6188 * p;
    const double C17901 = C6260 / q;
    const double C17924 = C6458 / q;
    const double C5349 =
        (3 * C5386) / C9297 - (C5385 * C17845) / q - (C12258 * p) / q;
    const double C17948 = C12273 / C9297;
    const double C5350 = C12273 / q - (C5386 * C17845) / q - (C5385 * p) / q;
    const double C17883 = C12347 * p;
    const double C17896 = C12523 * p;
    const double C17913 = C12876 * p;
    const double C17946 = C12891 / C9297;
    const double C5602 =
        C12891 / q - (C9954 * de + C5611 * C17846) / q - (C5684 * p) / q;
    const double C5676 = (3 * C5611) / C9297 -
                         (C10165 * de + C5684 * C17846) / q - (C13052 * p) / q;
    const double C17936 = C13404 * p;
    const double C17939 = C13464 * p;
    const double C17956 = C13479 / C9297;
    const double C5845 =
        C13479 / q - (C5836 * C17849) / q + C17928 - (C5981 * p) / q;
    const double C17942 = C13609 * p;
    const double C5989 =
        (3 * C5836) / C9297 - (C5981 * C17849) / q + C17943 - (C13740 * p) / q;
    const double C18025 = C8068 / C9297;
    const double C18014 = C8141 * p;
    const double C18040 = C8292 * p;
    const double C18039 = C8293 / C9297;
    const double C18062 = C8517 * p;
    const double C18061 = C8518 / C9297;
    const double C18067 = C8591 * p;
    const double C18022 = C8735 / q;
    const double C18080 = C8870 * p;
    const double C18031 = C8942 / q;
    const double C18054 = C9140 / q;
    const double C8031 =
        (3 * C8068) / C9297 - (C8067 * C17845) / q - (C15052 * p) / q;
    const double C18078 = C15067 / C9297;
    const double C8032 = C15067 / q - (C8068 * C17845) / q - (C8067 * p) / q;
    const double C18013 = C15141 * p;
    const double C18026 = C15317 * p;
    const double C18043 = C15670 * p;
    const double C18076 = C15685 / C9297;
    const double C8284 = C15685 / q - (C8293 * C17846) / q - (C8366 * p) / q;
    const double C8358 =
        (3 * C8293) / C9297 - (C8366 * C17846) / q - (C15846 * p) / q;
    const double C18066 = C16198 * p;
    const double C18069 = C16258 * p;
    const double C18086 = C16273 / C9297;
    const double C8527 = C16273 / q - (C10500 * de + C8518 * C17849) / q +
                         C18058 - (C8663 * p) / q;
    const double C18072 = C16403 * p;
    const double C8671 = (3 * C8518) / C9297 -
                         (C10845 * de + C8663 * C17849) / q + C18073 -
                         (C16534 * p) / q;
    const double C17747 = C2753 * p;
    const double C17775 = C2901 * p;
    const double C17797 = C3127 / C9297;
    const double C3109 = -(C10470 * de + C3127 * C17845 + C3126 * p) / q;
    const double C3136 = C17795 - (C3127 * C17846) / q - (C3203 * p) / q;
    const double C17758 = C3347 / q;
    const double C17824 = C3482 * p;
    const double C2658 = (3 * C2677) / C9297 -
                         (C9362 * de + C2676 * C17845) / q - (C9366 * p) / q;
    const double C2659 =
        C9382 / q - (C9378 * de + C2677 * C17845) / q - (C2676 * p) / q;
    const double C17746 = C9459 * p;
    const double C17761 = C9653 * p;
    const double C2809 =
        C3554 / q - (C9742 * de + C2825 * C17845) / q - (C9746 * p) / q;
    const double C17769 = C9790 * p;
    const double C17779 = C10003 * p;
    const double C2911 =
        C10018 / q - (C2902 * C17846) / q + C17773 - (C2978 * p) / q;
    const double C2986 =
        (3 * C2902) / C9297 - (C2978 * C17846) / q + C17785 - (C10198 * p) / q;
    const double C17789 = C10290 * p;
    const double C3058 =
        C3752 / q - (C3050 * C17846) / q + C17788 - (C10335 * p) / q;
    const double C17802 = C10548 * p;
    const double C3259 = -(C10829 * de + C3275 * C17845 + C10833 * p) / q;
    const double C3283 = C17810 - (C3275 * C17846) / q - (C10877 * p) / q;
    const double C17822 = C11231 / C9297;
    const double C17908 = C5583 * p;
    const double C17930 = C5809 / C9297;
    const double C5791 = -(C5809 * C17845 + C5808 * p) / q;
    const double C17891 = C6029 / q;
    const double C17957 = C6164 * p;
    const double C5340 =
        (3 * C5359) / C9297 - (C5358 * C17845) / q - (C12228 * p) / q;
    const double C5341 = C12243 / q - (C5359 * C17845) / q - (C5358 * p) / q;
    const double C5491 = C6236 / q - (C5507 * C17845) / q - (C12598 * p) / q;
    const double C17912 = C12846 * p;
    const double C5593 = C12861 / q - (C9924 * de + C5584 * C17846) / q +
                         C17906 - (C5660 * p) / q;
    const double C5668 = (3 * C5584) / C9297 -
                         (C10150 * de + C5660 * C17846) / q + C17918 -
                         (C13037 * p) / q;
    const double C17922 = C13126 * p;
    const double C5740 = C6434 / q - (C10286 * de + C5732 * C17846) / q +
                         C17921 - (C13170 * p) / q;
    const double C5941 = -(C5957 * C17845 + C13653 * p) / q;
    const double C17955 = C14039 / C9297;
    const double C18038 = C8265 * p;
    const double C18060 = C8491 / C9297;
    const double C8473 = -(C8491 * C17845 + C8490 * p) / q;
    const double C18021 = C8711 / q;
    const double C18087 = C8846 * p;
    const double C8022 =
        (3 * C8041) / C9297 - (C8040 * C17845) / q - (C15022 * p) / q;
    const double C8023 = C15037 / q - (C8041 * C17845) / q - (C8040 * p) / q;
    const double C8173 = C8918 / q - (C8189 * C17845) / q - (C15392 * p) / q;
    const double C18042 = C15640 * p;
    const double C8275 =
        C15655 / q - (C8266 * C17846) / q + C18036 - (C8342 * p) / q;
    const double C8350 =
        (3 * C8266) / C9297 - (C8342 * C17846) / q + C18048 - (C15831 * p) / q;
    const double C18052 = C15920 * p;
    const double C8422 =
        C9116 / q - (C8414 * C17846) / q + C18051 - (C15964 * p) / q;
    const double C8623 = -(C8639 * C17845 + C16447 * p) / q;
    const double C18085 = C16833 / C9297;
    const double C2866 =
        C17773 - (C9863 * de + C2875 * C17845) / q - (C2874 * p) / q;
    const double C3091 =
        C17795 - (C10408 * de + C3100 * C17845) / q - (C3099 * p) / q;
    const double C3720 =
        C17819 - (C11328 * de + C3728 * C17845) / q - (C3458 * p) / q;
    const double C2640 = (3 * C2650) / C9297 -
                         (C9295 * de + C2649 * C17845) / q + C17740 -
                         (C9301 * p) / q;
    const double C2641 = C9317 / q - (C9313 * de + C2650 * C17845) / q +
                         C17741 - (C2649 * p) / q;
    const double C2721 = C3323 / q - (C9573 * de + C2729 * C17845) / q +
                         C17756 - (C9577 * p) / q;
    const double C2793 = C3530 / q - (C9710 * de + C2801 * C17845) / q +
                         C17766 - (C9714 * p) / q;
    const double C2865 = C2875 / C9297 - (C9846 * de + C2874 * C17845) / q +
                         C17772 - (C9851 * p) / q;
    const double C2946 =
        C17785 - (C10119 * de + C2954 * C17845) / q - (C10123 * p) / q;
    const double C3018 =
        C17788 - (C10255 * de + C3026 * C17845) / q - (C10259 * p) / q;
    const double C3090 = C3100 / C9297 - (C10391 * de + C3099 * C17845) / q +
                         C17794 - (C10396 * p) / q;
    const double C3171 =
        C17807 - (C10664 * de + C3179 * C17845) / q - (C10668 * p) / q;
    const double C3243 =
        C17810 - (C10798 * de + C3251 * C17845) / q - (C10802 * p) / q;
    const double C3315 = C10937 / C9297 - (C10933 * de + C3323 * C17845) / q +
                         C17811 - (C2729 * p) / q;
    const double C3450 = C3728 / C9297 - (C11065 * de + C3458 * C17845) / q +
                         C17818 - (C11069 * p) / q;
    const double C3522 = C11200 / C9297 - (C11196 * de + C3530 * C17845) / q +
                         C17820 - (C2801 * p) / q;
    const double C6402 = C17952 - (C6410 * C17845) / q - (C6140 * p) / q;
    const double C5322 =
        (3 * C5332) / C9297 - (C5331 * C17845) / q + C17877 - (C12167 * p) / q;
    const double C5323 =
        C12182 / q - (C5332 * C17845) / q + C17878 - (C5331 * p) / q;
    const double C5403 =
        C6005 / q - (C5411 * C17845) / q + C17889 - (C12435 * p) / q;
    const double C5475 =
        C6212 / q - (C5483 * C17845) / q + C17899 - (C12568 * p) / q;
    const double C5997 =
        C13755 / C9297 - (C6005 * C17845) / q + C17944 - (C5411 * p) / q;
    const double C6132 =
        C6410 / C9297 - (C6140 * C17845) / q + C17951 - (C13883 * p) / q;
    const double C6204 =
        C14010 / C9297 - (C6212 * C17845) / q + C17953 - (C5483 * p) / q;
    const double C9084 = C18082 - (C9092 * C17845) / q - (C8822 * p) / q;
    const double C8004 =
        (3 * C8014) / C9297 - (C8013 * C17845) / q + C18007 - (C14961 * p) / q;
    const double C8005 =
        C14976 / q - (C8014 * C17845) / q + C18008 - (C8013 * p) / q;
    const double C8085 =
        C8687 / q - (C8093 * C17845) / q + C18019 - (C15229 * p) / q;
    const double C8157 =
        C8894 / q - (C8165 * C17845) / q + C18029 - (C15362 * p) / q;
    const double C8679 =
        C16549 / C9297 - (C8687 * C17845) / q + C18074 - (C8093 * p) / q;
    const double C8814 =
        C9092 / C9297 - (C8822 * C17845) / q + C18081 - (C16677 * p) / q;
    const double C8886 =
        C16804 / C9297 - (C8894 * C17845) / q + C18083 - (C8165 * p) / q;
    const double C17926 = C13214 * p;
    const double C5965 =
        C17943 - (C10829 * de + C5957 * C17846) / q - (C13696 * p) / q;
    const double C17920 = C13082 * p;
    const double C17916 = C12936 * p;
    const double C17935 = C13375 * p;
    const double C17904 = C12685 * p;
    const double C5925 = C17943 - (C5933 * C17845) / q - (C13624 * p) / q;
    const double C17898 = C12553 * p;
    const double C5853 = C17940 - (C5861 * C17845) / q - (C13494 * p) / q;
    const double C17902 = C12641 * p;
    const double C5700 = C17921 - (C5708 * C17845) / q - (C13097 * p) / q;
    const double C17894 = C12508 * p;
    const double C5628 = C17918 - (C5636 * C17845) / q - (C12965 * p) / q;
    const double C17887 = C12406 * p;
    const double C17881 = C12318 * p;
    const double C17917 = C5756 * p;
    const double C5818 =
        C17928 - (C10470 * de + C5809 * C17846) / q - (C5885 * p) / q;
    const double C17888 = C5531 * p;
    const double C5772 =
        C5782 / C9297 - (C5781 * C17845) / q + C17927 - (C13230 * p) / q;
    const double C5773 = C17928 - (C5782 * C17845) / q - (C5781 * p) / q;
    const double C17882 = C5435 * p;
    const double C5547 =
        C5557 / C9297 - (C5556 * C17845) / q + C17905 - (C12701 * p) / q;
    const double C5548 = C17906 - (C5557 * C17845) / q - (C5556 * p) / q;
    const double C18056 = C16008 * p;
    const double C8647 = C18073 - (C8639 * C17846) / q - (C16490 * p) / q;
    const double C18050 = C15876 * p;
    const double C18046 = C15730 * p;
    const double C18065 = C16169 * p;
    const double C18034 = C15479 * p;
    const double C8607 = C18073 - (C8615 * C17845) / q - (C16418 * p) / q;
    const double C18028 = C15347 * p;
    const double C8535 = C18070 - (C8543 * C17845) / q - (C16288 * p) / q;
    const double C18032 = C15435 * p;
    const double C8382 = C18051 - (C8390 * C17845) / q - (C15891 * p) / q;
    const double C18024 = C15302 * p;
    const double C8310 = C18048 - (C8318 * C17845) / q - (C15759 * p) / q;
    const double C18017 = C15200 * p;
    const double C18011 = C15112 * p;
    const double C18047 = C8438 * p;
    const double C8500 = C18058 - (C8491 * C17846) / q - (C8567 * p) / q;
    const double C18018 = C8213 * p;
    const double C8454 =
        C8464 / C9297 - (C8463 * C17845) / q + C18057 - (C16024 * p) / q;
    const double C8455 = C18058 - (C8464 * C17845) / q - (C8463 * p) / q;
    const double C18012 = C8117 * p;
    const double C8229 =
        C8239 / C9297 - (C8238 * C17845) / q + C18035 - (C15495 * p) / q;
    const double C8230 = C18036 - (C8239 * C17845) / q - (C8238 * p) / q;
    const double C2695 = -(C2704 * C17846 + C17749) / q;
    const double C17851 = C17755 / q;
    const double C2893 = -(C9954 * de + C2929 * C17845 + C17777) / q;
    const double C17860 = C17784 / q;
    const double C3118 = -(C10500 * de + C3154 * C17845 + C17799) / q;
    const double C3145 = -(C3154 * C17846 + C17804) / q;
    const double C3379 = C17811 - (C3371 * C17849) / q - C17817 / q;
    const double C3570 = -(C3578 * C17846 + C17817) / q;
    const double C3744 = -(C11373 * de + C3776 * C17845 + C17817) / q;
    const double C3363 = C17815 - (C3371 * C17846) / q - C17777 / q;
    const double C3586 = C17815 - (C3578 * C17849) / q + C17820 - C17799 / q;
    const double C2694 = -(C2703 * C17846 + C17748) / q;
    const double C2745 =
        C17759 - (C9620 * de + C2777 * C17845) / q - C17748 / q;
    const double C17850 = C17754 / q;
    const double C17854 = C17763 / q;
    const double C17855 = C17765 / q;
    const double C2841 = -(C2849 * C17846 + C17765) / q;
    const double C17858 = C17771 / q;
    const double C2919 = C17759 - (C2928 * C17846) / q - C17780 / q;
    const double C2970 = -(C10165 * de + C3002 * C17845 + C17780) / q;
    const double C3339 =
        C17813 - (C10979 * de + C3371 * C17845) / q - C17749 / q;
    const double C3784 = C17813 - (C3776 * C17849) / q + C17819 - C17804 / q;
    const double C17859 = C17783 / q;
    const double C3042 = -(C10302 * de + C3074 * C17845 + C17783) / q;
    const double C17861 = C17787 / q;
    const double C17863 = C17793 / q;
    const double C3144 = -(C3153 * C17846 + C17803) / q;
    const double C3195 = -(C10710 * de + C3227 * C17845 + C17803) / q;
    const double C3514 =
        C3371 / C9297 - (C3506 * C17849) / q + C17818 - C17803 / q;
    const double C3162 = C17768 - (C3153 * C17849) / q + C17794 - C17806 / q;
    const double C3267 = -(C10845 * de + C3299 * C17845 + C17806) / q;
    const double C3235 = C17791 - (C3227 * C17849) / q + C17807 - C17809 / q;
    const double C3291 = -(C3299 * C17846 + C17809) / q;
    const double C5377 = -(C9410 * de + C5386 * C17846 + C17884) / q;
    const double C5575 = -(C5611 * C17845 + C17910) / q;
    const double C5800 = -(C5836 * C17845 + C17932) / q;
    const double C5827 = -(C10500 * de + C5836 * C17846 + C17937) / q;
    const double C6061 = C17944 - (C6053 * C17849) / q - C17950 / q;
    const double C6252 = -(C11243 * de + C6260 * C17846 + C17950) / q;
    const double C6426 = -(C6458 * C17845 + C17950) / q;
    const double C6045 =
        C17948 - (C10979 * de + C6053 * C17846) / q - C17910 / q;
    const double C6268 = C17948 - (C6260 * C17849) / q + C17953 - C17932 / q;
    const double C5376 = -(C9394 * de + C5385 * C17846 + C17883) / q;
    const double C5427 = C17892 - (C5459 * C17845) / q - C17883 / q;
    const double C17984 = C17896 / q;
    const double C5601 =
        C17892 - (C9939 * de + C5610 * C17846) / q - C17913 / q;
    const double C5652 = -(C5684 * C17845 + C17913) / q;
    const double C6021 = C17946 - (C6053 * C17845) / q - C17884 / q;
    const double C6466 = C17946 - (C6458 * C17849) / q + C17952 - C17937 / q;
    const double C5826 = -(C10485 * de + C5835 * C17846 + C17936) / q;
    const double C5877 = -(C5909 * C17845 + C17936) / q;
    const double C6196 =
        C6053 / C9297 - (C6188 * C17849) / q + C17951 - C17936 / q;
    const double C5844 = C17901 - (C5835 * C17849) / q + C17927 - C17939 / q;
    const double C5949 = -(C5981 * C17845 + C17939) / q;
    const double C5917 = C17924 - (C5909 * C17849) / q + C17940 - C17942 / q;
    const double C5973 = -(C10845 * de + C5981 * C17846 + C17942) / q;
    const double C8059 = -(C8068 * C17846 + C18014) / q;
    const double C8257 = -(C8293 * C17845 + C18040) / q;
    const double C8482 = -(C8518 * C17845 + C18062) / q;
    const double C8509 = -(C8518 * C17846 + C18067) / q;
    const double C8743 =
        C18074 - (C10979 * de + C8735 * C17849) / q - C18080 / q;
    const double C8934 = -(C8942 * C17846 + C18080) / q;
    const double C9108 = -(C9140 * C17845 + C18080) / q;
    const double C8727 = C18078 - (C8735 * C17846) / q - C18040 / q;
    const double C8950 =
        C18078 - (C11243 * de + C8942 * C17849) / q + C18083 - C18062 / q;
    const double C8058 = -(C8067 * C17846 + C18013) / q;
    const double C8109 = C18022 - (C8141 * C17845) / q - C18013 / q;
    const double C18114 = C18026 / q;
    const double C8283 = C18022 - (C8292 * C17846) / q - C18043 / q;
    const double C8334 = -(C8366 * C17845 + C18043) / q;
    const double C8703 = C18076 - (C8735 * C17845) / q - C18014 / q;
    const double C9148 =
        C18076 - (C11373 * de + C9140 * C17849) / q + C18082 - C18067 / q;
    const double C8508 = -(C8517 * C17846 + C18066) / q;
    const double C8559 = -(C8591 * C17845 + C18066) / q;
    const double C8878 = C8735 / C9297 - (C11111 * de + C8870 * C17849) / q +
                         C18081 - C18066 / q;
    const double C8526 =
        C18031 - (C10485 * de + C8517 * C17849) / q + C18057 - C18069 / q;
    const double C8631 = -(C8663 * C17845 + C18069) / q;
    const double C8599 =
        C18054 - (C10710 * de + C8591 * C17849) / q + C18070 - C18072 / q;
    const double C8655 = -(C8663 * C17846 + C18072) / q;
    const double C17848 = C17747 / q;
    const double C2884 = -(C9924 * de + C2902 * C17845 + C17775) / q;
    const double C3355 =
        C9382 / C9297 - (C3347 * C17846) / q + C17811 - C17775 / q;
    const double C3108 =
        C17797 - (C10454 * de + C3126 * C17845) / q - (C10458 * p) / q;
    const double C3211 =
        C17797 - (C3203 * C17846) / q + C17807 - (C10742 * p) / q;
    const double C3562 = C17820 - (C3554 * C17846) / q - C17824 / q;
    const double C3736 = -(C11358 * de + C3752 * C17845 + C17824) / q;
    const double C17847 = C17746 / q;
    const double C17853 = C17761 / q;
    const double C17856 = C17769 / q;
    const double C2910 = C17758 - (C2901 * C17846) / q + C17772 - C17779 / q;
    const double C2962 = -(C10150 * de + C2978 * C17845 + C17779) / q;
    const double C3034 = -(C10286 * de + C3050 * C17845 + C17789) / q;
    const double C3490 =
        C3554 / C9297 - (C3482 * C17846) / q + C17818 - C17789 / q;
    const double C3135 = C17794 - (C3126 * C17846) / q - C17802 / q;
    const double C3187 = -(C10695 * de + C3203 * C17845 + C17802) / q;
    const double C3538 =
        C17822 - (C11227 * de + C3554 * C17845) / q - (C2825 * p) / q;
    const double C3760 =
        C17822 - (C3752 * C17846) / q + C17819 - (C3050 * p) / q;
    const double C5566 = -(C5584 * C17845 + C17908) / q;
    const double C6037 = C12243 / C9297 - (C10964 * de + C6029 * C17846) / q +
                         C17944 - C17908 / q;
    const double C5790 = C17930 - (C5808 * C17845) / q - (C13288 * p) / q;
    const double C5893 =
        C17930 - (C10695 * de + C5885 * C17846) / q + C17940 - (C13565 * p) / q;
    const double C6244 =
        C17953 - (C11227 * de + C6236 * C17846) / q - C17957 / q;
    const double C6418 = -(C6434 * C17845 + C17957) / q;
    const double C5592 =
        C17891 - (C9909 * de + C5583 * C17846) / q + C17905 - C17912 / q;
    const double C5644 = -(C5660 * C17845 + C17912) / q;
    const double C5716 = -(C5732 * C17845 + C17922) / q;
    const double C6172 = C6236 / C9297 - (C11096 * de + C6164 * C17846) / q +
                         C17951 - C17922 / q;
    const double C6220 = C17955 - (C6236 * C17845) / q - (C5507 * p) / q;
    const double C6442 =
        C17955 - (C11358 * de + C6434 * C17846) / q + C17952 - (C5732 * p) / q;
    const double C8248 = -(C8266 * C17845 + C18038) / q;
    const double C8719 =
        C15037 / C9297 - (C8711 * C17846) / q + C18074 - C18038 / q;
    const double C8472 = C18060 - (C8490 * C17845) / q - (C16082 * p) / q;
    const double C8575 =
        C18060 - (C8567 * C17846) / q + C18070 - (C16359 * p) / q;
    const double C8926 = C18083 - (C8918 * C17846) / q - C18087 / q;
    const double C9100 = -(C9116 * C17845 + C18087) / q;
    const double C8274 = C18021 - (C8265 * C17846) / q + C18035 - C18042 / q;
    const double C8326 = -(C8342 * C17845 + C18042) / q;
    const double C8398 = -(C8414 * C17845 + C18052) / q;
    const double C8854 =
        C8918 / C9297 - (C8846 * C17846) / q + C18081 - C18052 / q;
    const double C8902 = C18085 - (C8918 * C17845) / q - (C8189 * p) / q;
    const double C9124 =
        C18085 - (C9116 * C17846) / q + C18082 - (C8414 * p) / q;
    const double C17993 = C17926 / q;
    const double C17991 = C17920 / q;
    const double C17989 = C17916 / q;
    const double C5724 = -(C5756 * C17845 + C17916) / q;
    const double C5817 =
        C17927 - (C10454 * de + C5808 * C17846) / q - C17935 / q;
    const double C5869 = -(C5885 * C17845 + C17935) / q;
    const double C17988 = C17904 / q;
    const double C17985 = C17898 / q;
    const double C5523 = -(C9758 * de + C5531 * C17846 + C17898) / q;
    const double C17986 = C17902 / q;
    const double C17983 = C17894 / q;
    const double C17980 = C17887 / q;
    const double C17978 = C17881 / q;
    const double C17990 = C17917 / q;
    const double C17981 = C17888 / q;
    const double C17979 = C17882 / q;
    const double C18123 = C18056 / q;
    const double C18121 = C18050 / q;
    const double C18119 = C18046 / q;
    const double C8406 = -(C8438 * C17845 + C18046) / q;
    const double C8499 = C18057 - (C8490 * C17846) / q - C18065 / q;
    const double C8551 = -(C8567 * C17845 + C18065) / q;
    const double C18118 = C18034 / q;
    const double C18115 = C18028 / q;
    const double C8205 = -(C8213 * C17846 + C18028) / q;
    const double C18116 = C18032 / q;
    const double C18113 = C18024 / q;
    const double C18110 = C18017 / q;
    const double C18108 = C18011 / q;
    const double C18120 = C18047 / q;
    const double C18111 = C18018 / q;
    const double C18109 = C18012 / q;
    const double C2713 = C17741 - (C2704 * C17849) / q - C17851;
    const double C3546 = C17823 - (C11243 * de + C3578 * C17845) / q - C17851;
    const double C2938 = C17773 - (C2929 * C17849) / q - C17860;
    const double C3768 = C17823 - (C3776 * C17846) / q - C17860;
    const double C2712 = C17740 - (C2703 * C17849) / q - C17850;
    const double C2817 = C17768 - (C9758 * de + C2849 * C17845) / q - C17850;
    const double C2769 = C17762 - (C2777 * C17846) / q - C17854;
    const double C2892 = C17776 - (C9939 * de + C2928 * C17845) / q - C17854;
    const double C2785 = C17756 - (C2777 * C17849) / q - C17855;
    const double C3474 =
        C3776 / C9297 - (C11111 * de + C3506 * C17845) / q - C17855;
    const double C2857 = C17762 - (C2849 * C17849) / q + C17766 - C17858;
    const double C3117 = C17798 - (C10485 * de + C3153 * C17845) / q - C17858;
    const double C2937 = C17772 - (C2928 * C17849) / q - C17859;
    const double C3498 = C3578 / C9297 - (C3506 * C17846) / q - C17859;
    const double C3010 = C17785 - (C3002 * C17849) / q - C17861;
    const double C3066 = C17791 - (C3074 * C17846) / q - C17861;
    const double C3082 = C17776 - (C3074 * C17849) / q + C17788 - C17863;
    const double C3219 = C17798 - (C3227 * C17846) / q - C17863;
    const double C5451 = C17895 - (C9620 * de + C5459 * C17846) / q - C17984;
    const double C5574 = C17909 - (C5610 * C17845) / q - C17984;
    const double C8133 = C18025 - (C8141 * C17846) / q - C18114;
    const double C8256 = C18039 - (C8292 * C17845) / q - C18114;
    const double C2686 = C17741 - (C2677 * C17846) / q - C17848;
    const double C3331 =
        C10018 / C9297 - (C10964 * de + C3347 * C17845) / q - C17848;
    const double C2685 = C17740 - (C2676 * C17846) / q - C17847;
    const double C2737 = C17758 - (C9605 * de + C2753 * C17845) / q - C17847;
    const double C2761 = C2677 / C9297 - (C2753 * C17846) / q + C17756 - C17853;
    const double C2883 =
        C2902 / C9297 - (C9909 * de + C2901 * C17845) / q - C17853;
    const double C2833 = C17766 - (C2825 * C17846) / q - C17856;
    const double C3466 =
        C3752 / C9297 - (C11096 * de + C3482 * C17845) / q - C17856;
    const double C5764 = C17909 - (C5756 * C17849) / q + C17921 - C17993;
    const double C5901 = C17931 - (C10710 * de + C5909 * C17846) / q - C17993;
    const double C5692 = C17918 - (C5684 * C17849) / q - C17991;
    const double C5748 = C17924 - (C10302 * de + C5756 * C17846) / q - C17991;
    const double C5619 = C17905 - (C5610 * C17849) / q - C17989;
    const double C6180 =
        C6260 / C9297 - (C11111 * de + C6188 * C17846) / q - C17989;
    const double C5539 = C17895 - (C5531 * C17849) / q + C17899 - C17988;
    const double C5799 = C17931 - (C5835 * C17845) / q - C17988;
    const double C5467 = C17889 - (C5459 * C17849) / q - C17985;
    const double C6156 = C6458 / C9297 - (C6188 * C17845) / q - C17985;
    const double C5515 = C17899 - (C9742 * de + C5507 * C17846) / q - C17986;
    const double C6148 = C6434 / C9297 - (C6164 * C17845) / q - C17986;
    const double C5443 =
        C5359 / C9297 - (C9605 * de + C5435 * C17846) / q + C17889 - C17983;
    const double C5565 = C5584 / C9297 - (C5583 * C17845) / q - C17983;
    const double C5394 = C17877 - (C5385 * C17849) / q - C17980;
    const double C5499 = C17901 - (C5531 * C17845) / q - C17980;
    const double C5367 = C17877 - (C9362 * de + C5358 * C17846) / q - C17978;
    const double C5419 = C17891 - (C5435 * C17845) / q - C17978;
    const double C5620 = C17906 - (C5611 * C17849) / q - C17990;
    const double C6450 = C17956 - (C11373 * de + C6458 * C17846) / q - C17990;
    const double C5395 = C17878 - (C5386 * C17849) / q - C17981;
    const double C6228 = C17956 - (C6260 * C17845) / q - C17981;
    const double C5368 = C17878 - (C9378 * de + C5359 * C17846) / q - C17979;
    const double C6013 = C12861 / C9297 - (C6029 * C17845) / q - C17979;
    const double C8446 =
        C18039 - (C10302 * de + C8438 * C17849) / q + C18051 - C18123;
    const double C8583 = C18061 - (C8591 * C17846) / q - C18123;
    const double C8374 = C18048 - (C10165 * de + C8366 * C17849) / q - C18121;
    const double C8430 = C18054 - (C8438 * C17846) / q - C18121;
    const double C8301 = C18035 - (C9939 * de + C8292 * C17849) / q - C18119;
    const double C8862 = C8942 / C9297 - (C8870 * C17846) / q - C18119;
    const double C8221 =
        C18025 - (C9758 * de + C8213 * C17849) / q + C18029 - C18118;
    const double C8481 = C18061 - (C8517 * C17845) / q - C18118;
    const double C8149 = C18019 - (C9620 * de + C8141 * C17849) / q - C18115;
    const double C8838 = C9140 / C9297 - (C8870 * C17845) / q - C18115;
    const double C8197 = C18029 - (C8189 * C17846) / q - C18116;
    const double C8830 = C9116 / C9297 - (C8846 * C17845) / q - C18116;
    const double C8125 = C8041 / C9297 - (C8117 * C17846) / q + C18019 - C18113;
    const double C8247 = C8266 / C9297 - (C8265 * C17845) / q - C18113;
    const double C8076 = C18007 - (C9394 * de + C8067 * C17849) / q - C18110;
    const double C8181 = C18031 - (C8213 * C17845) / q - C18110;
    const double C8049 = C18007 - (C8040 * C17846) / q - C18108;
    const double C8101 = C18021 - (C8117 * C17845) / q - C18108;
    const double C8302 = C18036 - (C9954 * de + C8293 * C17849) / q - C18120;
    const double C9132 = C18086 - (C9140 * C17846) / q - C18120;
    const double C8077 = C18008 - (C9410 * de + C8068 * C17849) / q - C18111;
    const double C8910 = C18086 - (C8942 * C17845) / q - C18111;
    const double C8050 = C18008 - (C8041 * C17846) / q - C18109;
    const double C8695 = C15655 / C9297 - (C8711 * C17845) / q - C18109;
    etx[0] = C2640;
    etx[1] = C2641;
    etx[2] = C2649;
    etx[3] = C2650;
    etx[4] = C2658;
    etx[5] = C2659;
    etx[6] = C2667;
    etx[7] = C2668;
    etx[8] = C2676;
    etx[9] = C2677;
    etx[10] = C2685;
    etx[11] = C2686;
    etx[12] = C2694;
    etx[13] = C2695;
    etx[14] = C2703;
    etx[15] = C2704;
    etx[16] = C2712;
    etx[17] = C2713;
    etx[18] = C2721;
    etx[19] = C2729;
    etx[20] = C2737;
    etx[21] = C2745;
    etx[22] = C2753;
    etx[23] = C2761;
    etx[24] = C2769;
    etx[25] = C2777;
    etx[26] = C2785;
    etx[27] = C2793;
    etx[28] = C2801;
    etx[29] = C2809;
    etx[30] = C2817;
    etx[31] = C2825;
    etx[32] = C2833;
    etx[33] = C2841;
    etx[34] = C2849;
    etx[35] = C2857;
    etx[36] = C2865;
    etx[37] = C2866;
    etx[38] = C2874;
    etx[39] = C2875;
    etx[40] = C2883;
    etx[41] = C2884;
    etx[42] = C2892;
    etx[43] = C2893;
    etx[44] = C2901;
    etx[45] = C2902;
    etx[46] = C2910;
    etx[47] = C2911;
    etx[48] = C2919;
    etx[49] = C2920;
    etx[50] = C2928;
    etx[51] = C2929;
    etx[52] = C2937;
    etx[53] = C2938;
    etx[54] = C2946;
    etx[55] = C2954;
    etx[56] = C2962;
    etx[57] = C2970;
    etx[58] = C2978;
    etx[59] = C2986;
    etx[60] = C2994;
    etx[61] = C3002;
    etx[62] = C3010;
    etx[63] = C3018;
    etx[64] = C3026;
    etx[65] = C3034;
    etx[66] = C3042;
    etx[67] = C3050;
    etx[68] = C3058;
    etx[69] = C3066;
    etx[70] = C3074;
    etx[71] = C3082;
    etx[72] = C3090;
    etx[73] = C3091;
    etx[74] = C3099;
    etx[75] = C3100;
    etx[76] = C3108;
    etx[77] = C3109;
    etx[78] = C3117;
    etx[79] = C3118;
    etx[80] = C3126;
    etx[81] = C3127;
    etx[82] = C3135;
    etx[83] = C3136;
    etx[84] = C3144;
    etx[85] = C3145;
    etx[86] = C3153;
    etx[87] = C3154;
    etx[88] = C3162;
    etx[89] = C3163;
    etx[90] = C3171;
    etx[91] = C3179;
    etx[92] = C3187;
    etx[93] = C3195;
    etx[94] = C3203;
    etx[95] = C3211;
    etx[96] = C3219;
    etx[97] = C3227;
    etx[98] = C3235;
    etx[99] = C3243;
    etx[100] = C3251;
    etx[101] = C3259;
    etx[102] = C3267;
    etx[103] = C3275;
    etx[104] = C3283;
    etx[105] = C3291;
    etx[106] = C3299;
    etx[107] = C3307;
    etx[108] = C3315;
    etx[109] = C3323;
    etx[110] = C3331;
    etx[111] = C3339;
    etx[112] = C3347;
    etx[113] = C3355;
    etx[114] = C3363;
    etx[115] = C3371;
    etx[116] = C3379;
    etx[117] = C3450;
    etx[118] = C3458;
    etx[119] = C3466;
    etx[120] = C3474;
    etx[121] = C3482;
    etx[122] = C3490;
    etx[123] = C3498;
    etx[124] = C3506;
    etx[125] = C3514;
    etx[126] = C3522;
    etx[127] = C3530;
    etx[128] = C3538;
    etx[129] = C3546;
    etx[130] = C3554;
    etx[131] = C3562;
    etx[132] = C3570;
    etx[133] = C3578;
    etx[134] = C3586;
    etx[135] = C3720;
    etx[136] = C3728;
    etx[137] = C3736;
    etx[138] = C3744;
    etx[139] = C3752;
    etx[140] = C3760;
    etx[141] = C3768;
    etx[142] = C3776;
    etx[143] = C3784;
    ety[0] = C5322;
    ety[1] = C5323;
    ety[2] = C5331;
    ety[3] = C5332;
    ety[4] = C5340;
    ety[5] = C5341;
    ety[6] = C5349;
    ety[7] = C5350;
    ety[8] = C5358;
    ety[9] = C5359;
    ety[10] = C5367;
    ety[11] = C5368;
    ety[12] = C5376;
    ety[13] = C5377;
    ety[14] = C5385;
    ety[15] = C5386;
    ety[16] = C5394;
    ety[17] = C5395;
    ety[18] = C5403;
    ety[19] = C5411;
    ety[20] = C5419;
    ety[21] = C5427;
    ety[22] = C5435;
    ety[23] = C5443;
    ety[24] = C5451;
    ety[25] = C5459;
    ety[26] = C5467;
    ety[27] = C5475;
    ety[28] = C5483;
    ety[29] = C5491;
    ety[30] = C5499;
    ety[31] = C5507;
    ety[32] = C5515;
    ety[33] = C5523;
    ety[34] = C5531;
    ety[35] = C5539;
    ety[36] = C5547;
    ety[37] = C5548;
    ety[38] = C5556;
    ety[39] = C5557;
    ety[40] = C5565;
    ety[41] = C5566;
    ety[42] = C5574;
    ety[43] = C5575;
    ety[44] = C5583;
    ety[45] = C5584;
    ety[46] = C5592;
    ety[47] = C5593;
    ety[48] = C5601;
    ety[49] = C5602;
    ety[50] = C5610;
    ety[51] = C5611;
    ety[52] = C5619;
    ety[53] = C5620;
    ety[54] = C5628;
    ety[55] = C5636;
    ety[56] = C5644;
    ety[57] = C5652;
    ety[58] = C5660;
    ety[59] = C5668;
    ety[60] = C5676;
    ety[61] = C5684;
    ety[62] = C5692;
    ety[63] = C5700;
    ety[64] = C5708;
    ety[65] = C5716;
    ety[66] = C5724;
    ety[67] = C5732;
    ety[68] = C5740;
    ety[69] = C5748;
    ety[70] = C5756;
    ety[71] = C5764;
    ety[72] = C5772;
    ety[73] = C5773;
    ety[74] = C5781;
    ety[75] = C5782;
    ety[76] = C5790;
    ety[77] = C5791;
    ety[78] = C5799;
    ety[79] = C5800;
    ety[80] = C5808;
    ety[81] = C5809;
    ety[82] = C5817;
    ety[83] = C5818;
    ety[84] = C5826;
    ety[85] = C5827;
    ety[86] = C5835;
    ety[87] = C5836;
    ety[88] = C5844;
    ety[89] = C5845;
    ety[90] = C5853;
    ety[91] = C5861;
    ety[92] = C5869;
    ety[93] = C5877;
    ety[94] = C5885;
    ety[95] = C5893;
    ety[96] = C5901;
    ety[97] = C5909;
    ety[98] = C5917;
    ety[99] = C5925;
    ety[100] = C5933;
    ety[101] = C5941;
    ety[102] = C5949;
    ety[103] = C5957;
    ety[104] = C5965;
    ety[105] = C5973;
    ety[106] = C5981;
    ety[107] = C5989;
    ety[108] = C5997;
    ety[109] = C6005;
    ety[110] = C6013;
    ety[111] = C6021;
    ety[112] = C6029;
    ety[113] = C6037;
    ety[114] = C6045;
    ety[115] = C6053;
    ety[116] = C6061;
    ety[117] = C6132;
    ety[118] = C6140;
    ety[119] = C6148;
    ety[120] = C6156;
    ety[121] = C6164;
    ety[122] = C6172;
    ety[123] = C6180;
    ety[124] = C6188;
    ety[125] = C6196;
    ety[126] = C6204;
    ety[127] = C6212;
    ety[128] = C6220;
    ety[129] = C6228;
    ety[130] = C6236;
    ety[131] = C6244;
    ety[132] = C6252;
    ety[133] = C6260;
    ety[134] = C6268;
    ety[135] = C6402;
    ety[136] = C6410;
    ety[137] = C6418;
    ety[138] = C6426;
    ety[139] = C6434;
    ety[140] = C6442;
    ety[141] = C6450;
    ety[142] = C6458;
    ety[143] = C6466;
    etz[0] = C8004;
    etz[1] = C8005;
    etz[2] = C8013;
    etz[3] = C8014;
    etz[4] = C8022;
    etz[5] = C8023;
    etz[6] = C8031;
    etz[7] = C8032;
    etz[8] = C8040;
    etz[9] = C8041;
    etz[10] = C8049;
    etz[11] = C8050;
    etz[12] = C8058;
    etz[13] = C8059;
    etz[14] = C8067;
    etz[15] = C8068;
    etz[16] = C8076;
    etz[17] = C8077;
    etz[18] = C8085;
    etz[19] = C8093;
    etz[20] = C8101;
    etz[21] = C8109;
    etz[22] = C8117;
    etz[23] = C8125;
    etz[24] = C8133;
    etz[25] = C8141;
    etz[26] = C8149;
    etz[27] = C8157;
    etz[28] = C8165;
    etz[29] = C8173;
    etz[30] = C8181;
    etz[31] = C8189;
    etz[32] = C8197;
    etz[33] = C8205;
    etz[34] = C8213;
    etz[35] = C8221;
    etz[36] = C8229;
    etz[37] = C8230;
    etz[38] = C8238;
    etz[39] = C8239;
    etz[40] = C8247;
    etz[41] = C8248;
    etz[42] = C8256;
    etz[43] = C8257;
    etz[44] = C8265;
    etz[45] = C8266;
    etz[46] = C8274;
    etz[47] = C8275;
    etz[48] = C8283;
    etz[49] = C8284;
    etz[50] = C8292;
    etz[51] = C8293;
    etz[52] = C8301;
    etz[53] = C8302;
    etz[54] = C8310;
    etz[55] = C8318;
    etz[56] = C8326;
    etz[57] = C8334;
    etz[58] = C8342;
    etz[59] = C8350;
    etz[60] = C8358;
    etz[61] = C8366;
    etz[62] = C8374;
    etz[63] = C8382;
    etz[64] = C8390;
    etz[65] = C8398;
    etz[66] = C8406;
    etz[67] = C8414;
    etz[68] = C8422;
    etz[69] = C8430;
    etz[70] = C8438;
    etz[71] = C8446;
    etz[72] = C8454;
    etz[73] = C8455;
    etz[74] = C8463;
    etz[75] = C8464;
    etz[76] = C8472;
    etz[77] = C8473;
    etz[78] = C8481;
    etz[79] = C8482;
    etz[80] = C8490;
    etz[81] = C8491;
    etz[82] = C8499;
    etz[83] = C8500;
    etz[84] = C8508;
    etz[85] = C8509;
    etz[86] = C8517;
    etz[87] = C8518;
    etz[88] = C8526;
    etz[89] = C8527;
    etz[90] = C8535;
    etz[91] = C8543;
    etz[92] = C8551;
    etz[93] = C8559;
    etz[94] = C8567;
    etz[95] = C8575;
    etz[96] = C8583;
    etz[97] = C8591;
    etz[98] = C8599;
    etz[99] = C8607;
    etz[100] = C8615;
    etz[101] = C8623;
    etz[102] = C8631;
    etz[103] = C8639;
    etz[104] = C8647;
    etz[105] = C8655;
    etz[106] = C8663;
    etz[107] = C8671;
    etz[108] = C8679;
    etz[109] = C8687;
    etz[110] = C8695;
    etz[111] = C8703;
    etz[112] = C8711;
    etz[113] = C8719;
    etz[114] = C8727;
    etz[115] = C8735;
    etz[116] = C8743;
    etz[117] = C8814;
    etz[118] = C8822;
    etz[119] = C8830;
    etz[120] = C8838;
    etz[121] = C8846;
    etz[122] = C8854;
    etz[123] = C8862;
    etz[124] = C8870;
    etz[125] = C8878;
    etz[126] = C8886;
    etz[127] = C8894;
    etz[128] = C8902;
    etz[129] = C8910;
    etz[130] = C8918;
    etz[131] = C8926;
    etz[132] = C8934;
    etz[133] = C8942;
    etz[134] = C8950;
    etz[135] = C9084;
    etz[136] = C9092;
    etz[137] = C9100;
    etz[138] = C9108;
    etz[139] = C9116;
    etz[140] = C9124;
    etz[141] = C9132;
    etz[142] = C9140;
    etz[143] = C9148;
}
