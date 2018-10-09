/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2211_3_et(const double ae,
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
    const double C27790 = g[108];
    const double C27807 = g[109];
    const double C27824 = g[110];
    const double C27841 = g[111];
    const double C27857 = g[112];
    const double C27872 = g[113];
    const double C27888 = g[114];
    const double C27904 = g[115];
    const double C27919 = g[116];
    const double C27935 = g[117];
    const double C27951 = g[118];
    const double C27966 = g[119];
    const double C28201 = g[120];
    const double C28218 = g[121];
    const double C28233 = g[122];
    const double C28250 = g[123];
    const double C28266 = g[124];
    const double C28282 = g[125];
    const double C28297 = g[126];
    const double C28313 = g[127];
    const double C28474 = g[128];
    const double C28491 = g[129];
    const double C28506 = g[130];
    const double C28523 = g[131];
    const double C28539 = g[132];
    const double C28555 = g[133];
    const double C28570 = g[134];
    const double C28586 = g[135];
    const double C28746 = g[136];
    const double C28762 = g[137];
    const double C28777 = g[138];
    const double C28792 = g[139];
    const double C28879 = g[140];
    const double C28895 = g[141];
    const double C28910 = g[142];
    const double C28926 = g[143];
    const double C29012 = g[144];
    const double C29028 = g[145];
    const double C29044 = g[146];
    const double C29059 = g[147];
    const double C29145 = g[148];
    const double C29160 = g[149];
    const double C29176 = g[150];
    const double C29191 = g[151];
    const double C29206 = g[152];
    const double C29221 = g[153];
    const double C29236 = g[154];
    const double C29251 = g[155];
    const double C29413 = g[156];
    const double C29430 = g[157];
    const double C29445 = g[158];
    const double C29461 = g[159];
    const double C29476 = g[160];
    const double C29492 = g[161];
    const double C29507 = g[162];
    const double C29523 = g[163];
    const double C29684 = g[164];
    const double C29701 = g[165];
    const double C29716 = g[166];
    const double C29732 = g[167];
    const double C29747 = g[168];
    const double C29763 = g[169];
    const double C29778 = g[170];
    const double C29794 = g[171];
    const double C29956 = g[172];
    const double C29972 = g[173];
    const double C29987 = g[174];
    const double C30002 = g[175];
    const double C30089 = g[176];
    const double C30105 = g[177];
    const double C30120 = g[178];
    const double C30135 = g[179];
    const double C30221 = g[180];
    const double C30237 = g[181];
    const double C30252 = g[182];
    const double C30267 = g[183];
    const double C30353 = g[184];
    const double C30368 = g[185];
    const double C30384 = g[186];
    const double C30399 = g[187];
    const double C30414 = g[188];
    const double C30429 = g[189];
    const double C30444 = g[190];
    const double C30459 = g[191];
    const double C30619 = g[192];
    const double C30634 = g[193];
    const double C30649 = g[194];
    const double C30664 = g[195];
    const double C30750 = g[196];
    const double C30767 = g[197];
    const double C30782 = g[198];
    const double C30798 = g[199];
    const double C30813 = g[200];
    const double C30829 = g[201];
    const double C30844 = g[202];
    const double C30860 = g[203];
    const double C31020 = g[204];
    const double C31036 = g[205];
    const double C31051 = g[206];
    const double C31066 = g[207];
    const double C31153 = g[208];
    const double C31169 = g[209];
    const double C31184 = g[210];
    const double C31200 = g[211];
    const double C31286 = g[212];
    const double C31302 = g[213];
    const double C31317 = g[214];
    const double C31332 = g[215];
    const double C31418 = g[216];
    const double C31434 = g[217];
    const double C31449 = g[218];
    const double C31464 = g[219];
    const double C31549 = g[220];
    const double C31564 = g[221];
    const double C31579 = g[222];
    const double C31594 = g[223];
    const double C31679 = g[224];
    const double C31695 = g[225];
    const double C31710 = g[226];
    const double C31726 = g[227];
    const double C31811 = g[228];
    const double C31826 = g[229];
    const double C31841 = g[230];
    const double C31856 = g[231];
    const double C31941 = g[232];
    const double C31956 = g[233];
    const double C32075 = g[234];
    const double C32165 = g[235];
    const double C32254 = g[236];
    const double C32283 = g[237];
    const double C32326 = g[238];
    const double C32382 = g[239];
    const double C32472 = g[240];
    const double C32561 = g[241];
    const double C32590 = g[242];
    const double C32619 = g[243];
    const double C32661 = g[244];
    const double C32750 = g[245];
    const double C32779 = g[246];
    const double C32822 = g[247];
    const double C32851 = g[248];
    const double C32866 = g[249];
    const double C37399 = g[250];
    const double C37489 = g[251];
    const double C37604 = g[252];
    const double C37676 = g[253];
    const double C37805 = g[254];
    const double C42669 = g[255];
    const double C27794 = vrx[0];
    const double C27812 = vrx[1];
    const double C27829 = vrx[2];
    const double C27845 = vrx[3];
    const double C27876 = vrx[4];
    const double C27985 = vrx[5];
    const double C28000 = vrx[6];
    const double C28015 = vrx[7];
    const double C28116 = vrx[8];
    const double C28131 = vrx[9];
    const double C28146 = vrx[10];
    const double C28205 = vrx[11];
    const double C28237 = vrx[12];
    const double C28238 = vrx[13];
    const double C28254 = vrx[14];
    const double C28331 = vrx[15];
    const double C28418 = vrx[16];
    const double C28433 = vrx[17];
    const double C28478 = vrx[18];
    const double C28510 = vrx[19];
    const double C28511 = vrx[20];
    const double C28527 = vrx[21];
    const double C28604 = vrx[22];
    const double C28691 = vrx[23];
    const double C28852 = vrx[24];
    const double C29032 = vrx[25];
    const double C29164 = vrx[26];
    const double C29269 = vrx[27];
    const double C29284 = vrx[28];
    const double C29285 = vrx[29];
    const double C29358 = vrx[30];
    const double C29373 = vrx[31];
    const double C29417 = vrx[32];
    const double C29449 = vrx[33];
    const double C29541 = vrx[34];
    const double C29628 = vrx[35];
    const double C29643 = vrx[36];
    const double C29688 = vrx[37];
    const double C29720 = vrx[38];
    const double C29812 = vrx[39];
    const double C29813 = vrx[40];
    const double C29828 = vrx[41];
    const double C29901 = vrx[42];
    const double C30062 = vrx[43];
    const double C30372 = vrx[44];
    const double C30477 = vrx[45];
    const double C30562 = vrx[46];
    const double C30577 = vrx[47];
    const double C30578 = vrx[48];
    const double C30724 = vrx[49];
    const double C30754 = vrx[50];
    const double C30786 = vrx[51];
    const double C30878 = vrx[52];
    const double C30965 = vrx[53];
    const double C31126 = vrx[54];
    const double C31945 = vrx[55];
    const double C31960 = vrx[56];
    const double C31975 = vrx[57];
    const double C32004 = vrx[58];
    const double C32033 = vrx[59];
    const double C32048 = vrx[60];
    const double C32063 = vrx[61];
    const double C32093 = vrx[62];
    const double C32108 = vrx[63];
    const double C32123 = vrx[64];
    const double C32138 = vrx[65];
    const double C32153 = vrx[66];
    const double C32183 = vrx[67];
    const double C32198 = vrx[68];
    const double C32227 = vrx[69];
    const double C32242 = vrx[70];
    const double C32400 = vrx[71];
    const double C32415 = vrx[72];
    const double C32430 = vrx[73];
    const double C32445 = vrx[74];
    const double C32460 = vrx[75];
    const double C32490 = vrx[76];
    const double C32505 = vrx[77];
    const double C32534 = vrx[78];
    const double C32549 = vrx[79];
    const double C32679 = vrx[80];
    const double C32694 = vrx[81];
    const double C32723 = vrx[82];
    const double C32738 = vrx[83];
    const double C32899 = vry[0];
    const double C32915 = vry[1];
    const double C32931 = vry[2];
    const double C32946 = vry[3];
    const double C32975 = vry[4];
    const double C33078 = vry[5];
    const double C33093 = vry[6];
    const double C33108 = vry[7];
    const double C33209 = vry[8];
    const double C33224 = vry[9];
    const double C33239 = vry[10];
    const double C33297 = vry[11];
    const double C33327 = vry[12];
    const double C33328 = vry[13];
    const double C33343 = vry[14];
    const double C33416 = vry[15];
    const double C33503 = vry[16];
    const double C33518 = vry[17];
    const double C33562 = vry[18];
    const double C33592 = vry[19];
    const double C33593 = vry[20];
    const double C33608 = vry[21];
    const double C33681 = vry[22];
    const double C33768 = vry[23];
    const double C33925 = vry[24];
    const double C34099 = vry[25];
    const double C34227 = vry[26];
    const double C34326 = vry[27];
    const double C34341 = vry[28];
    const double C34342 = vry[29];
    const double C34415 = vry[30];
    const double C34430 = vry[31];
    const double C34473 = vry[32];
    const double C34503 = vry[33];
    const double C34590 = vry[34];
    const double C34677 = vry[35];
    const double C34692 = vry[36];
    const double C34736 = vry[37];
    const double C34766 = vry[38];
    const double C34853 = vry[39];
    const double C34854 = vry[40];
    const double C34869 = vry[41];
    const double C34942 = vry[42];
    const double C35099 = vry[43];
    const double C35399 = vry[44];
    const double C35498 = vry[45];
    const double C35583 = vry[46];
    const double C35598 = vry[47];
    const double C35599 = vry[48];
    const double C35741 = vry[49];
    const double C35770 = vry[50];
    const double C35800 = vry[51];
    const double C35887 = vry[52];
    const double C35974 = vry[53];
    const double C36131 = vry[54];
    const double C36925 = vry[55];
    const double C36939 = vry[56];
    const double C36954 = vry[57];
    const double C36983 = vry[58];
    const double C37012 = vry[59];
    const double C37027 = vry[60];
    const double C37042 = vry[61];
    const double C37071 = vry[62];
    const double C37086 = vry[63];
    const double C37101 = vry[64];
    const double C37116 = vry[65];
    const double C37131 = vry[66];
    const double C37160 = vry[67];
    const double C37175 = vry[68];
    const double C37204 = vry[69];
    const double C37219 = vry[70];
    const double C37373 = vry[71];
    const double C37388 = vry[72];
    const double C37404 = vry[73];
    const double C37419 = vry[74];
    const double C37434 = vry[75];
    const double C37463 = vry[76];
    const double C37478 = vry[77];
    const double C37508 = vry[78];
    const double C37523 = vry[79];
    const double C37650 = vry[80];
    const double C37665 = vry[81];
    const double C37695 = vry[82];
    const double C37710 = vry[83];
    const double C37867 = vrz[0];
    const double C37883 = vrz[1];
    const double C37899 = vrz[2];
    const double C37914 = vrz[3];
    const double C37943 = vrz[4];
    const double C38046 = vrz[5];
    const double C38061 = vrz[6];
    const double C38076 = vrz[7];
    const double C38177 = vrz[8];
    const double C38192 = vrz[9];
    const double C38207 = vrz[10];
    const double C38265 = vrz[11];
    const double C38295 = vrz[12];
    const double C38296 = vrz[13];
    const double C38311 = vrz[14];
    const double C38384 = vrz[15];
    const double C38471 = vrz[16];
    const double C38486 = vrz[17];
    const double C38530 = vrz[18];
    const double C38560 = vrz[19];
    const double C38561 = vrz[20];
    const double C38576 = vrz[21];
    const double C38649 = vrz[22];
    const double C38736 = vrz[23];
    const double C38893 = vrz[24];
    const double C39067 = vrz[25];
    const double C39195 = vrz[26];
    const double C39294 = vrz[27];
    const double C39309 = vrz[28];
    const double C39310 = vrz[29];
    const double C39383 = vrz[30];
    const double C39398 = vrz[31];
    const double C39441 = vrz[32];
    const double C39471 = vrz[33];
    const double C39558 = vrz[34];
    const double C39645 = vrz[35];
    const double C39660 = vrz[36];
    const double C39704 = vrz[37];
    const double C39734 = vrz[38];
    const double C39821 = vrz[39];
    const double C39822 = vrz[40];
    const double C39837 = vrz[41];
    const double C39910 = vrz[42];
    const double C40067 = vrz[43];
    const double C40367 = vrz[44];
    const double C40466 = vrz[45];
    const double C40551 = vrz[46];
    const double C40566 = vrz[47];
    const double C40567 = vrz[48];
    const double C40709 = vrz[49];
    const double C40738 = vrz[50];
    const double C40768 = vrz[51];
    const double C40855 = vrz[52];
    const double C40942 = vrz[53];
    const double C41099 = vrz[54];
    const double C41893 = vrz[55];
    const double C41907 = vrz[56];
    const double C41922 = vrz[57];
    const double C41951 = vrz[58];
    const double C41980 = vrz[59];
    const double C41995 = vrz[60];
    const double C42010 = vrz[61];
    const double C42039 = vrz[62];
    const double C42054 = vrz[63];
    const double C42069 = vrz[64];
    const double C42084 = vrz[65];
    const double C42099 = vrz[66];
    const double C42128 = vrz[67];
    const double C42143 = vrz[68];
    const double C42172 = vrz[69];
    const double C42187 = vrz[70];
    const double C42341 = vrz[71];
    const double C42356 = vrz[72];
    const double C42371 = vrz[73];
    const double C42386 = vrz[74];
    const double C42401 = vrz[75];
    const double C42430 = vrz[76];
    const double C42445 = vrz[77];
    const double C42474 = vrz[78];
    const double C42489 = vrz[79];
    const double C42615 = vrz[80];
    const double C42630 = vrz[81];
    const double C42659 = vrz[82];
    const double C42675 = vrz[83];
    const double C27809 = 2 * q;
    const double C43004 = C32679 * p;
    const double C43003 = C32549 * p;
    const double C43002 = C32534 * p;
    const double C43001 = 3 * C29688;
    const double C43000 = C32505 * p;
    const double C42999 = C29358 / q;
    const double C42998 = C32490 * p;
    const double C42997 = C30477 / q;
    const double C42996 = C32460 * p;
    const double C42995 = C32445 * p;
    const double C42994 = C32415 * p;
    const double C42993 = C29828 * p;
    const double C42992 = C32242 * p;
    const double C42991 = C32227 * p;
    const double C42990 = C28433 / q;
    const double C42989 = C32198 * p;
    const double C42988 = C32183 * p;
    const double C42987 = 3 * C28478;
    const double C42986 = C32153 * p;
    const double C42985 = C32138 * p;
    const double C42984 = C32123 * p;
    const double C42983 = C32108 * p;
    const double C42982 = C32093 * p;
    const double C42981 = 3 * C28205;
    const double C42980 = C32063 * p;
    const double C42979 = C32048 * p;
    const double C42978 = C32033 * p;
    const double C42977 = C28527 * p;
    const double C42976 = C32004 * p;
    const double C42975 = C28254 * p;
    const double C42974 = C31975 * p;
    const double C42964 = C29032 * p;
    const double C42952 = C31126 * p;
    const double C42949 = C30878 * p;
    const double C42947 = C30786 * p;
    const double C42943 = C30724 * p;
    const double C42940 = C30562 * p;
    const double C42936 = C29812 * p;
    const double C42935 = C30477 * p;
    const double C42931 = C28510 * p;
    const double C42924 = C30062 * p;
    const double C42919 = C29688 * p;
    const double C42918 = C29901 * p;
    const double C42915 = C29828 / q;
    const double C42914 = C29813 * p;
    const double C42910 = C29720 * p;
    const double C42905 = C29643 * p;
    const double C42904 = C29628 * p;
    const double C42901 = C29449 * p;
    const double C42896 = C29373 * p;
    const double C42895 = C29358 * p;
    const double C42892 = C29269 * p;
    const double C42888 = C28237 * p;
    const double C42882 = C29032 / q;
    const double C42877 = C28852 * p;
    const double C42872 = C28478 * p;
    const double C42871 = C28691 * p;
    const double C42867 = C28604 * p;
    const double C42864 = C28527 / q;
    const double C42863 = C28511 * p;
    const double C42858 = C28433 * p;
    const double C42857 = C28418 * p;
    const double C42851 = C28205 * p;
    const double C42850 = C28331 * p;
    const double C42845 = C28254 / q;
    const double C42844 = C28238 * p;
    const double C42838 = C28146 * p;
    const double C42837 = C28131 * p;
    const double C42836 = C28116 * p;
    const double C42835 = de * zCD;
    const double C42834 = be * zAB;
    const double C42827 = C28015 * p;
    const double C42826 = C28000 * p;
    const double C42825 = C27985 * p;
    const double C42824 = de * yCD;
    const double C42823 = be * yAB;
    const double C42819 = de * xCD;
    const double C42818 = be * xAB;
    const double C43255 = C37650 * p;
    const double C43254 = C37523 * p;
    const double C43253 = C37508 * p;
    const double C43252 = 3 * C34736;
    const double C43251 = C37478 * p;
    const double C43250 = C34415 / q;
    const double C43249 = C37463 * p;
    const double C43248 = C35498 / q;
    const double C43247 = C37434 * p;
    const double C43246 = C37419 * p;
    const double C43245 = C37388 * p;
    const double C43244 = C34869 * p;
    const double C43243 = C37219 * p;
    const double C43242 = C37204 * p;
    const double C43241 = C33518 / q;
    const double C43240 = C37175 * p;
    const double C43239 = C37160 * p;
    const double C43238 = 3 * C33562;
    const double C43237 = C37131 * p;
    const double C43236 = C37116 * p;
    const double C43235 = C37101 * p;
    const double C43234 = C37086 * p;
    const double C43233 = C37071 * p;
    const double C43232 = 3 * C33297;
    const double C43231 = C37042 * p;
    const double C43230 = C37027 * p;
    const double C43229 = C37012 * p;
    const double C43228 = C33608 * p;
    const double C43227 = C36983 * p;
    const double C43226 = C33343 * p;
    const double C43225 = C36954 * p;
    const double C43215 = C34099 * p;
    const double C43203 = C36131 * p;
    const double C43200 = C35887 * p;
    const double C43198 = C35800 * p;
    const double C43194 = C35741 * p;
    const double C43191 = C35583 * p;
    const double C43187 = C34853 * p;
    const double C43186 = C35498 * p;
    const double C43182 = C33592 * p;
    const double C43175 = C35099 * p;
    const double C43170 = C34736 * p;
    const double C43169 = C34942 * p;
    const double C43166 = C34869 / q;
    const double C43165 = C34854 * p;
    const double C43161 = C34766 * p;
    const double C43156 = C34692 * p;
    const double C43155 = C34677 * p;
    const double C43152 = C34503 * p;
    const double C43147 = C34430 * p;
    const double C43146 = C34415 * p;
    const double C43143 = C34326 * p;
    const double C43139 = C33327 * p;
    const double C43133 = C34099 / q;
    const double C43128 = C33925 * p;
    const double C43123 = C33562 * p;
    const double C43122 = C33768 * p;
    const double C43118 = C33681 * p;
    const double C43115 = C33608 / q;
    const double C43114 = C33593 * p;
    const double C43109 = C33518 * p;
    const double C43108 = C33503 * p;
    const double C43102 = C33297 * p;
    const double C43101 = C33416 * p;
    const double C43096 = C33343 / q;
    const double C43095 = C33328 * p;
    const double C43089 = C33239 * p;
    const double C43088 = C33224 * p;
    const double C43087 = C33209 * p;
    const double C43080 = C33108 * p;
    const double C43079 = C33093 * p;
    const double C43078 = C33078 * p;
    const double C43503 = C42615 * p;
    const double C43502 = C42489 * p;
    const double C43501 = C42474 * p;
    const double C43500 = 3 * C39704;
    const double C43499 = C42445 * p;
    const double C43498 = C39383 / q;
    const double C43497 = C42430 * p;
    const double C43496 = C40466 / q;
    const double C43495 = C42401 * p;
    const double C43494 = C42386 * p;
    const double C43493 = C42356 * p;
    const double C43492 = C39837 * p;
    const double C43491 = C42187 * p;
    const double C43490 = C42172 * p;
    const double C43489 = C38486 / q;
    const double C43488 = C42143 * p;
    const double C43487 = C42128 * p;
    const double C43486 = 3 * C38530;
    const double C43485 = C42099 * p;
    const double C43484 = C42084 * p;
    const double C43483 = C42069 * p;
    const double C43482 = C42054 * p;
    const double C43481 = C42039 * p;
    const double C43480 = 3 * C38265;
    const double C43479 = C42010 * p;
    const double C43478 = C41995 * p;
    const double C43477 = C41980 * p;
    const double C43476 = C38576 * p;
    const double C43475 = C41951 * p;
    const double C43474 = C38311 * p;
    const double C43473 = C41922 * p;
    const double C43463 = C39067 * p;
    const double C43451 = C41099 * p;
    const double C43448 = C40855 * p;
    const double C43446 = C40768 * p;
    const double C43442 = C40709 * p;
    const double C43439 = C40551 * p;
    const double C43435 = C39821 * p;
    const double C43434 = C40466 * p;
    const double C43430 = C38560 * p;
    const double C43423 = C40067 * p;
    const double C43418 = C39704 * p;
    const double C43417 = C39910 * p;
    const double C43414 = C39837 / q;
    const double C43413 = C39822 * p;
    const double C43409 = C39734 * p;
    const double C43404 = C39660 * p;
    const double C43403 = C39645 * p;
    const double C43400 = C39471 * p;
    const double C43395 = C39398 * p;
    const double C43394 = C39383 * p;
    const double C43391 = C39294 * p;
    const double C43387 = C38295 * p;
    const double C43381 = C39067 / q;
    const double C43376 = C38893 * p;
    const double C43371 = C38530 * p;
    const double C43370 = C38736 * p;
    const double C43366 = C38649 * p;
    const double C43363 = C38576 / q;
    const double C43362 = C38561 * p;
    const double C43357 = C38486 * p;
    const double C43356 = C38471 * p;
    const double C43350 = C38265 * p;
    const double C43349 = C38384 * p;
    const double C43344 = C38311 / q;
    const double C43343 = C38296 * p;
    const double C43337 = C38207 * p;
    const double C43336 = C38192 * p;
    const double C43335 = C38177 * p;
    const double C43328 = C38076 * p;
    const double C43327 = C38061 * p;
    const double C43326 = C38046 * p;
    const double C42973 = C31960 / C27809;
    const double C42969 = C30577 / C27809;
    const double C42968 = C28527 / C27809;
    const double C42967 = C29828 / C27809;
    const double C42966 = C29032 / C27809;
    const double C42962 = C27876 / C27809;
    const double C42960 = C29284 / C27809;
    const double C42959 = C28254 / C27809;
    const double C42958 = C30724 / C27809;
    const double C42954 = C30562 / C27809;
    const double C42951 = C30477 / C27809;
    const double C42946 = C30578 / C27809;
    const double C42945 = C30754 / C27809;
    const double C42942 = C29812 / C27809;
    const double C42930 = C30372 / C27809;
    const double C42929 = C28510 / C27809;
    const double C42928 = C29643 / C27809;
    const double C42926 = C29358 / C27809;
    const double C42922 = C29269 / C27809;
    const double C42909 = C29373 / C27809;
    const double C42908 = C29688 / C27809;
    const double C42900 = C29285 / C27809;
    const double C42899 = C29417 / C27809;
    const double C42887 = C29164 / C27809;
    const double C42886 = C28237 / C27809;
    const double C42881 = C28433 / C27809;
    const double C42879 = C28131 / C27809;
    const double C42875 = C28000 / C27809;
    const double C42862 = C28146 / C27809;
    const double C42861 = C28478 / C27809;
    const double C42843 = C28015 / C27809;
    const double C42842 = C28205 / C27809;
    const double C42822 = C27829 / C27809;
    const double C42821 = C27812 / C27809;
    const double C42820 = C27794 / C27809;
    const double C43224 = C36939 / C27809;
    const double C43220 = C35598 / C27809;
    const double C43219 = C33608 / C27809;
    const double C43218 = C34869 / C27809;
    const double C43217 = C34099 / C27809;
    const double C43213 = C32975 / C27809;
    const double C43211 = C34341 / C27809;
    const double C43210 = C33343 / C27809;
    const double C43209 = C35741 / C27809;
    const double C43205 = C35583 / C27809;
    const double C43202 = C35498 / C27809;
    const double C43197 = C35599 / C27809;
    const double C43196 = C35770 / C27809;
    const double C43193 = C34853 / C27809;
    const double C43181 = C35399 / C27809;
    const double C43180 = C33592 / C27809;
    const double C43179 = C34692 / C27809;
    const double C43177 = C34415 / C27809;
    const double C43173 = C34326 / C27809;
    const double C43160 = C34430 / C27809;
    const double C43159 = C34736 / C27809;
    const double C43151 = C34342 / C27809;
    const double C43150 = C34473 / C27809;
    const double C43138 = C34227 / C27809;
    const double C43137 = C33327 / C27809;
    const double C43132 = C33518 / C27809;
    const double C43130 = C33224 / C27809;
    const double C43126 = C33093 / C27809;
    const double C43113 = C33239 / C27809;
    const double C43112 = C33562 / C27809;
    const double C43094 = C33108 / C27809;
    const double C43093 = C33297 / C27809;
    const double C43077 = C32931 / C27809;
    const double C43076 = C32915 / C27809;
    const double C43075 = C32899 / C27809;
    const double C43472 = C41907 / C27809;
    const double C43468 = C40566 / C27809;
    const double C43467 = C38576 / C27809;
    const double C43466 = C39837 / C27809;
    const double C43465 = C39067 / C27809;
    const double C43461 = C37943 / C27809;
    const double C43459 = C39309 / C27809;
    const double C43458 = C38311 / C27809;
    const double C43457 = C40709 / C27809;
    const double C43453 = C40551 / C27809;
    const double C43450 = C40466 / C27809;
    const double C43445 = C40567 / C27809;
    const double C43444 = C40738 / C27809;
    const double C43441 = C39821 / C27809;
    const double C43429 = C40367 / C27809;
    const double C43428 = C38560 / C27809;
    const double C43427 = C39660 / C27809;
    const double C43425 = C39383 / C27809;
    const double C43421 = C39294 / C27809;
    const double C43408 = C39398 / C27809;
    const double C43407 = C39704 / C27809;
    const double C43399 = C39310 / C27809;
    const double C43398 = C39441 / C27809;
    const double C43386 = C39195 / C27809;
    const double C43385 = C38295 / C27809;
    const double C43380 = C38486 / C27809;
    const double C43378 = C38192 / C27809;
    const double C43374 = C38061 / C27809;
    const double C43361 = C38207 / C27809;
    const double C43360 = C38530 / C27809;
    const double C43342 = C38076 / C27809;
    const double C43341 = C38265 / C27809;
    const double C43325 = C37899 / C27809;
    const double C43324 = C37883 / C27809;
    const double C43323 = C37867 / C27809;
    const double C43070 = C43003 / q;
    const double C43069 = C43002 / q;
    const double C43068 = C43001 / C27809;
    const double C43067 = C43000 / q;
    const double C43066 = C42998 / q;
    const double C43065 = C42996 / q;
    const double C43061 = C42992 / q;
    const double C43060 = C42991 / q;
    const double C43059 = C42989 / q;
    const double C43062 = C42988 / q;
    const double C43058 = C42987 / C27809;
    const double C43057 = C42986 / q;
    const double C43064 = C42985 / q;
    const double C43056 = C42984 / q;
    const double C43063 = C42983 / q;
    const double C43055 = C42982 / q;
    const double C43054 = C42981 / C27809;
    const double C43053 = C42980 / q;
    const double C43052 = C42978 / q;
    const double C43046 = C42919 / q;
    const double C43045 = C42918 / q;
    const double C43043 = C42914 / q;
    const double C43050 = C42910 / q;
    const double C43030 = C42872 / q;
    const double C43029 = C42871 / q;
    const double C43037 = C42867 / q;
    const double C43025 = C42863 / q;
    const double C43035 = C42857 / q;
    const double C43018 = C42851 / q;
    const double C43017 = C42850 / q;
    const double C43014 = C42844 / q;
    const double C43010 = C42834 + C42835;
    const double C43006 = C42823 + C42824;
    const double C43005 = C42818 + C42819;
    const double C43318 = C43254 / q;
    const double C43317 = C43253 / q;
    const double C43316 = C43252 / C27809;
    const double C43315 = C43251 / q;
    const double C43314 = C43249 / q;
    const double C43313 = C43247 / q;
    const double C43309 = C43243 / q;
    const double C43308 = C43242 / q;
    const double C43307 = C43240 / q;
    const double C43310 = C43239 / q;
    const double C43306 = C43238 / C27809;
    const double C43305 = C43237 / q;
    const double C43312 = C43236 / q;
    const double C43304 = C43235 / q;
    const double C43311 = C43234 / q;
    const double C43303 = C43233 / q;
    const double C43302 = C43232 / C27809;
    const double C43301 = C43231 / q;
    const double C43300 = C43229 / q;
    const double C43294 = C43170 / q;
    const double C43293 = C43169 / q;
    const double C43291 = C43165 / q;
    const double C43298 = C43161 / q;
    const double C43278 = C43123 / q;
    const double C43277 = C43122 / q;
    const double C43285 = C43118 / q;
    const double C43273 = C43114 / q;
    const double C43283 = C43108 / q;
    const double C43266 = C43102 / q;
    const double C43265 = C43101 / q;
    const double C43262 = C43095 / q;
    const double C43566 = C43502 / q;
    const double C43565 = C43501 / q;
    const double C43564 = C43500 / C27809;
    const double C43563 = C43499 / q;
    const double C43562 = C43497 / q;
    const double C43561 = C43495 / q;
    const double C43557 = C43491 / q;
    const double C43556 = C43490 / q;
    const double C43555 = C43488 / q;
    const double C43558 = C43487 / q;
    const double C43554 = C43486 / C27809;
    const double C43553 = C43485 / q;
    const double C43560 = C43484 / q;
    const double C43552 = C43483 / q;
    const double C43559 = C43482 / q;
    const double C43551 = C43481 / q;
    const double C43550 = C43480 / C27809;
    const double C43549 = C43479 / q;
    const double C43548 = C43477 / q;
    const double C43542 = C43418 / q;
    const double C43541 = C43417 / q;
    const double C43539 = C43413 / q;
    const double C43546 = C43409 / q;
    const double C43526 = C43371 / q;
    const double C43525 = C43370 / q;
    const double C43533 = C43366 / q;
    const double C43521 = C43362 / q;
    const double C43531 = C43356 / q;
    const double C43514 = C43350 / q;
    const double C43513 = C43349 / q;
    const double C43510 = C43343 / q;
    const double C8006 = -(C27794 * C43010 + C42836) / q;
    const double C8007 = -(C27812 * C43010 + C42837) / q;
    const double C8015 = -(C27829 * C43010 + C42838) / q;
    const double C8152 = -(C28205 * C43010 + C42857) / q;
    const double C8153 = -(C28015 * C43010 + C42858) / q;
    const double C8296 = C28146 / q - (C28478 * C43010) / q - C43029;
    const double C8297 = C42822 - (C28146 * C43010) / q - C43030;
    const double C8384 = -(C28000 * C43010 + C42877) / q;
    const double C8456 = C42821 - (C28131 * C43010) / q - C43025;
    const double C8528 = C42843 - (C28433 * C43010) / q - C43037;
    const double C8656 = -(C28237 * C43010 + C42895) / q;
    const double C8664 = -(C29164 * C43010 + C42896) / q;
    const double C8800 = -(C29417 * C43010 + C42904) / q;
    const double C8801 = -(C29285 * C43010 + C42905) / q;
    const double C8944 = C29373 / q - (C29688 * C43010) / q - C43045;
    const double C8945 = C42887 - (C29373 * C43010) / q - C43046;
    const double C9032 = -(C29269 * C43010 + C42924) / q;
    const double C9104 = C42886 - (C29358 * C43010) / q - C43050;
    const double C9176 = C42900 - (C29643 * C43010) / q - C43043;
    const double C9304 = C42864 - (C28510 * C43010) / q - C42940 / q;
    const double C9312 = C30577 / q - (C30372 * C43010) / q - (C30578 * p) / q;
    const double C9441 = C42915 - (C29812 * C43010) / q - C42943 / q;
    const double C9583 =
        (2 * C30578) / q - (C30754 * C43010) / q - (C30965 * p) / q;
    const double C9584 =
        (3 * C30372) / C27809 - (C30578 * C43010) / q - (C30754 * p) / q;
    const double C9671 = C42882 - (C30477 * C43010) / q - C42952 / q;
    const double C9743 =
        (3 * C28510) / C27809 - (C30562 * C43010) / q - C42947 / q;
    const double C9815 =
        (3 * C29812) / C27809 - (C30724 * C43010) / q - C42949 / q;
    const double C9943 = -(C28254 * C43010 + C42964) / q;
    const double C10134 = C42959 - (C29032 * C43010) / q - C42935 / q;
    const double C10276 = C42962 - (C28527 * C43010) / q - C42931 / q;
    const double C10663 = C42960 - (C29828 * C43010) / q - C42936 / q;
    const double C27939 = -(C27845 * C43010 + C42976) / q;
    const double C27970 = -(C27876 * C43010 + C42977) / q;
    const double C28073 = -(C27985 * C43010 + C42979) / q;
    const double C28161 = C42820 - (C28116 * C43010) / q - C43053;
    const double C28301 = -(C28238 * C43010 + C42983) / q;
    const double C28389 = -(C28331 * C43010 + C42985) / q;
    const double C28448 = C42842 - (C28418 * C43010) / q - C43057;
    const double C28574 = C28131 / q - (C28511 * C43010) / q - C43059;
    const double C28662 = C42990 - (C28604 * C43010) / q - C43060;
    const double C28720 = C43058 - (C28691 * C43010) / q - C43061;
    const double C28867 = C42875 - (C28852 * C43010) / q - C43062;
    const double C29343 = -(C29284 * C43010 + C42993) / q;
    const double C29511 = -(C29449 * C43010 + C42994) / q;
    const double C29599 = -(C29541 * C43010 + C42995) / q;
    const double C29658 = C42899 - (C29628 * C43010) / q - C43065;
    const double C29782 = C42999 - (C29720 * C43010) / q - C43067;
    const double C29872 = C29643 / q - (C29813 * C43010) / q - C43069;
    const double C29930 = C43068 - (C29901 * C43010) / q - C43070;
    const double C30077 = C42922 - (C30062 * C43010) / q - C43066;
    const double C30607 = C42973 - (C30577 * C43010) / q - (C30372 * p) / q;
    const double C30848 =
        (2 * C30562) / q - (C30786 * C43010) / q - (C32694 * p) / q;
    const double C30936 =
        (2 * C30724) / q - (C30878 * C43010) / q - (C32723 * p) / q;
    const double C30994 =
        (5 * C30754) / C27809 - (C30965 * C43010) / q - (C32738 * p) / q;
    const double C31141 =
        (3 * C30477) / C27809 - (C31126 * C43010) / q - C43004 / q;
    const double C16457 = -(C32899 * C43010 + C43087) / q;
    const double C16458 = -(C32915 * C43010 + C43088) / q;
    const double C16466 = -(C32931 * C43010 + C43089) / q;
    const double C16603 = -(C33297 * C43010 + C43108) / q;
    const double C16604 = -(C33108 * C43010 + C43109) / q;
    const double C16835 = -(C33093 * C43010 + C43128) / q;
    const double C17107 = -(C33327 * C43010 + C43146) / q;
    const double C17115 = -(C34227 * C43010 + C43147) / q;
    const double C17251 = -(C34473 * C43010 + C43155) / q;
    const double C17252 = -(C34342 * C43010 + C43156) / q;
    const double C17483 = -(C34326 * C43010 + C43175) / q;
    const double C17755 = C43115 - (C33592 * C43010) / q - C43191 / q;
    const double C17763 = C35598 / q - (C35399 * C43010) / q - (C35599 * p) / q;
    const double C17892 = C43166 - (C34853 * C43010) / q - C43194 / q;
    const double C18034 =
        (2 * C35599) / q - (C35770 * C43010) / q - (C35974 * p) / q;
    const double C18035 =
        (3 * C35399) / C27809 - (C35599 * C43010) / q - (C35770 * p) / q;
    const double C18122 = C43133 - (C35498 * C43010) / q - C43203 / q;
    const double C18194 =
        (3 * C33592) / C27809 - (C35583 * C43010) / q - C43198 / q;
    const double C18266 =
        (3 * C34853) / C27809 - (C35741 * C43010) / q - C43200 / q;
    const double C18394 = -(C33343 * C43010 + C43215) / q;
    const double C18585 = C43210 - (C34099 * C43010) / q - C43186 / q;
    const double C18727 = C43213 - (C33608 * C43010) / q - C43182 / q;
    const double C19114 = C43211 - (C34869 * C43010) / q - C43187 / q;
    const double C33034 = -(C32946 * C43010 + C43227) / q;
    const double C33063 = -(C32975 * C43010 + C43228) / q;
    const double C33166 = -(C33078 * C43010 + C43230) / q;
    const double C33387 = -(C33328 * C43010 + C43234) / q;
    const double C33474 = -(C33416 * C43010 + C43236) / q;
    const double C34400 = -(C34341 * C43010 + C43244) / q;
    const double C34561 = -(C34503 * C43010 + C43245) / q;
    const double C34648 = -(C34590 * C43010 + C43246) / q;
    const double C35628 = C43224 - (C35598 * C43010) / q - (C35399 * p) / q;
    const double C35858 =
        (2 * C35583) / q - (C35800 * C43010) / q - (C37665 * p) / q;
    const double C35945 =
        (2 * C35741) / q - (C35887 * C43010) / q - (C37695 * p) / q;
    const double C36003 =
        (5 * C35770) / C27809 - (C35974 * C43010) / q - (C37710 * p) / q;
    const double C36146 =
        (3 * C35498) / C27809 - (C36131 * C43010) / q - C43255 / q;
    const double C24908 = -(C27841 * de + C37867 * C43010 + C43335) / q;
    const double C24909 = -(C27857 * de + C37883 * C43010 + C43336) / q;
    const double C24917 = -(C27872 * de + C37899 * C43010 + C43337) / q;
    const double C25054 = -(C28233 * de + C38265 * C43010 + C43356) / q;
    const double C25055 = -(C28250 * de + C38076 * C43010 + C43357) / q;
    const double C25286 = -(C28762 * de + C38061 * C43010 + C43376) / q;
    const double C25558 = -(C29176 * de + C38295 * C43010 + C43394) / q;
    const double C25566 = -(C29191 * de + C39195 * C43010 + C43395) / q;
    const double C25702 = -(C29445 * de + C39441 * C43010 + C43403) / q;
    const double C25703 = -(C29461 * de + C39310 * C43010 + C43404) / q;
    const double C25934 = -(C29972 * de + C39294 * C43010 + C43423) / q;
    const double C26206 =
        C43363 - (C30384 * de + C38560 * C43010) / q - C43439 / q;
    const double C26214 =
        C40566 / q - (C30399 * de + C40367 * C43010) / q - (C40567 * p) / q;
    const double C26343 =
        C43414 - (C30634 * de + C39821 * C43010) / q - C43442 / q;
    const double C26485 = (2 * C40567) / q -
                          (C30782 * de + C40738 * C43010) / q -
                          (C40942 * p) / q;
    const double C26486 = (3 * C40367) / C27809 -
                          (C30798 * de + C40567 * C43010) / q -
                          (C40738 * p) / q;
    const double C26573 =
        C43381 - (C31036 * de + C40466 * C43010) / q - C43451 / q;
    const double C26645 = (3 * C38560) / C27809 -
                          (C31169 * de + C40551 * C43010) / q - C43446 / q;
    const double C26717 = (3 * C39821) / C27809 -
                          (C31302 * de + C40709 * C43010) / q - C43448 / q;
    const double C26845 = -(C31434 * de + C38311 * C43010 + C43463) / q;
    const double C27036 =
        C43458 - (C31564 * de + C39067 * C43010) / q - C43434 / q;
    const double C27178 =
        C43461 - (C31695 * de + C38576 * C43010) / q - C43430 / q;
    const double C27565 =
        C43459 - (C31826 * de + C39837 * C43010) / q - C43435 / q;
    const double C38002 = -(C31941 * de + C37914 * C43010 + C43475) / q;
    const double C38031 = -(C31956 * de + C37943 * C43010 + C43476) / q;
    const double C38134 = -(C32254 * de + C38046 * C43010 + C43478) / q;
    const double C38355 = -(C32075 * de + C38296 * C43010 + C43482) / q;
    const double C38442 = -(C32561 * de + C38384 * C43010 + C43484) / q;
    const double C39368 = -(C32851 * de + C39309 * C43010 + C43492) / q;
    const double C39529 = -(C32382 * de + C39471 * C43010 + C43493) / q;
    const double C39616 = -(C37399 * de + C39558 * C43010 + C43494) / q;
    const double C40596 =
        C43472 - (C32866 * de + C40566 * C43010) / q - (C40367 * p) / q;
    const double C40826 = (2 * C40551) / q -
                          (C32661 * de + C40768 * C43010) / q -
                          (C42630 * p) / q;
    const double C40913 = (2 * C40709) / q -
                          (C37676 * de + C40855 * C43010) / q -
                          (C42659 * p) / q;
    const double C40971 = (5 * C40738) / C27809 -
                          (C42669 * de + C40942 * C43010) / q -
                          (C42675 * p) / q;
    const double C41114 = (3 * C40466) / C27809 -
                          (C32822 * de + C41099 * C43010) / q - C43503 / q;
    const double C7955 = -(C27794 * C43006 + C42825) / q;
    const double C7956 = -(C27812 * C43006 + C42826) / q;
    const double C7964 = -(C27829 * C43006 + C42827) / q;
    const double C8104 = C28015 / q - (C28205 * C43006) / q - C43017;
    const double C8105 = C42822 - (C28015 * C43006) / q - C43018;
    const double C8248 = -(C28478 * C43006 + C42867) / q;
    const double C8249 = -(C28146 * C43006 + C42858) / q;
    const double C8360 = C42821 - (C28000 * C43006) / q - C43014;
    const double C8432 = -(C28131 * C43006 + C42877) / q;
    const double C8504 = C42862 - (C28433 * C43006) / q - C43035;
    const double C8608 = C42845 - (C28237 * C43006) / q - C42892 / q;
    const double C8616 = C29284 / q - (C29164 * C43006) / q - (C29285 * p) / q;
    const double C8752 =
        (2 * C29285) / q - (C29417 * C43006) / q - (C29541 * p) / q;
    const double C8753 =
        (3 * C29164) / C27809 - (C29285 * C43006) / q - (C29417 * p) / q;
    const double C8896 = C29812 / q - (C29688 * C43006) / q - C43043;
    const double C8897 = C42915 - (C29373 * C43006) / q - C42905 / q;
    const double C9008 =
        (3 * C28237) / C27809 - (C29269 * C43006) / q - C42901 / q;
    const double C9080 = C42882 - (C29358 * C43006) / q - C42924 / q;
    const double C9152 =
        (3 * C29373) / C27809 - (C29643 * C43006) / q - C42904 / q;
    const double C9256 = -(C28510 * C43006 + C42935) / q;
    const double C9264 = -(C30372 * C43006 + C42936) / q;
    const double C9396 = C42930 - (C29812 * C43006) / q - C43046;
    const double C9535 = -(C30754 * C43006 + C42949) / q;
    const double C9536 = -(C30578 * C43006 + C42943) / q;
    const double C9647 = C42929 - (C30477 * C43006) / q - C43050;
    const double C9719 = -(C30562 * C43006 + C42952) / q;
    const double C9791 = C42946 - (C30724 * C43006) / q - C43045;
    const double C9898 = C42962 - (C28254 * C43006) / q - C42888 / q;
    const double C10089 = C42968 - (C29032 * C43006) / q - C42895 / q;
    const double C10231 = -(C28527 * C43006 + C42964) / q;
    const double C10618 = C42969 - (C29828 * C43006) / q - C42896 / q;
    const double C27892 = -(C27845 * C43006 + C42974) / q;
    const double C27923 = -(C27876 * C43006 + C42975) / q;
    const double C28030 = C42820 - (C27985 * C43006) / q - C43052;
    const double C28270 = C28000 / q - (C28238 * C43006) / q - C43055;
    const double C28360 = C43054 - (C28331 * C43006) / q - C43056;
    const double C28543 = -(C28511 * C43006 + C42988) / q;
    const double C28633 = C42861 - (C28604 * C43006) / q - C43057;
    const double C28914 = -(C28116 * C43006 + C42979) / q;
    const double C28958 = C42879 - (C28852 * C43006) / q - C43063;
    const double C29091 = C42990 - (C28418 * C43006) / q - C43064;
    const double C29314 = C42973 - (C29284 * C43006) / q - (C29164 * p) / q;
    const double C29480 =
        (2 * C29269) / q - (C29449 * C43006) / q - (C32400 * p) / q;
    const double C29570 =
        (5 * C29417) / C27809 - (C29541 * C43006) / q - (C32430 * p) / q;
    const double C29751 = C42997 - (C29720 * C43006) / q - C43066;
    const double C29843 = C43068 - (C29813 * C43006) / q - C43065;
    const double C30167 =
        (3 * C29358) / C27809 - (C30062 * C43006) / q - C42994 / q;
    const double C30299 = (2 * C29643) / q - (C29628 * C43006) / q - C42995 / q;
    const double C30817 = -(C30786 * C43006 + C43004) / q;
    const double C30907 = C42945 - (C30878 * C43006) / q - C43070;
    const double C31188 = -(C28691 * C43006 + C42991) / q;
    const double C31232 = C42954 - (C31126 * C43006) / q - C43067;
    const double C31364 = C30724 / q - (C29901 * C43006) / q - C43069;
    const double C31714 = -(C30577 * C43006 + C42993) / q;
    const double C16406 = -(C27841 * de + C32899 * C43006 + C43078) / q;
    const double C16407 = -(C27857 * de + C32915 * C43006 + C43079) / q;
    const double C16415 = -(C27872 * de + C32931 * C43006 + C43080) / q;
    const double C16699 = -(C28506 * de + C33562 * C43006 + C43118) / q;
    const double C16700 = -(C28523 * de + C33239 * C43006 + C43109) / q;
    const double C16883 = -(C28895 * de + C33224 * C43006 + C43128) / q;
    const double C17059 =
        C43096 - (C29176 * de + C33327 * C43006) / q - C43143 / q;
    const double C17067 =
        C34341 / q - (C29191 * de + C34227 * C43006) / q - (C34342 * p) / q;
    const double C17203 = (2 * C34342) / q -
                          (C29445 * de + C34473 * C43006) / q -
                          (C34590 * p) / q;
    const double C17204 = (3 * C34227) / C27809 -
                          (C29461 * de + C34342 * C43006) / q -
                          (C34473 * p) / q;
    const double C17348 =
        C43166 - (C29732 * de + C34430 * C43006) / q - C43156 / q;
    const double C17459 = (3 * C33327) / C27809 -
                          (C29972 * de + C34326 * C43006) / q - C43152 / q;
    const double C17531 =
        C43133 - (C30105 * de + C34415 * C43006) / q - C43175 / q;
    const double C17603 = (3 * C34430) / C27809 -
                          (C30237 * de + C34692 * C43006) / q - C43155 / q;
    const double C17707 = -(C30384 * de + C33592 * C43006 + C43186) / q;
    const double C17715 = -(C30399 * de + C35399 * C43006 + C43187) / q;
    const double C17986 = -(C30782 * de + C35770 * C43006 + C43200) / q;
    const double C17987 = -(C30798 * de + C35599 * C43006 + C43194) / q;
    const double C18170 = -(C31169 * de + C35583 * C43006 + C43203) / q;
    const double C18349 =
        C43213 - (C31434 * de + C33343 * C43006) / q - C43139 / q;
    const double C18540 =
        C43219 - (C31564 * de + C34099 * C43006) / q - C43146 / q;
    const double C18682 = -(C31695 * de + C33608 * C43006 + C43215) / q;
    const double C19069 =
        C43220 - (C31826 * de + C34869 * C43006) / q - C43147 / q;
    const double C32990 = -(C31941 * de + C32946 * C43006 + C43225) / q;
    const double C33019 = -(C31956 * de + C32975 * C43006 + C43226) / q;
    const double C33623 = -(C32165 * de + C33593 * C43006 + C43239) / q;
    const double C33984 = -(C32283 * de + C33209 * C43006 + C43230) / q;
    const double C34371 =
        C43224 - (C32851 * de + C34341 * C43006) / q - (C34227 * p) / q;
    const double C34532 = (2 * C34326) / q -
                          (C32382 * de + C34503 * C43006) / q -
                          (C37373 * p) / q;
    const double C34619 = (5 * C34473) / C27809 -
                          (C37399 * de + C34590 * C43006) / q -
                          (C37404 * p) / q;
    const double C35200 = (3 * C34415) / C27809 -
                          (C32619 * de + C35099 * C43006) / q - C43245 / q;
    const double C35328 =
        (2 * C34692) / q - (C37604 * de + C34677 * C43006) / q - C43246 / q;
    const double C35829 = -(C32661 * de + C35800 * C43006 + C43255) / q;
    const double C36190 = -(C32779 * de + C33768 * C43006 + C43242) / q;
    const double C36700 = -(C32866 * de + C35598 * C43006 + C43244) / q;
    const double C24857 = -(C37867 * C43006 + C43326) / q;
    const double C24858 = -(C37883 * C43006 + C43327) / q;
    const double C24866 = -(C37899 * C43006 + C43328) / q;
    const double C25150 = -(C38530 * C43006 + C43366) / q;
    const double C25151 = -(C38207 * C43006 + C43357) / q;
    const double C25334 = -(C38192 * C43006 + C43376) / q;
    const double C25510 = C43344 - (C38295 * C43006) / q - C43391 / q;
    const double C25518 = C39309 / q - (C39195 * C43006) / q - (C39310 * p) / q;
    const double C25654 =
        (2 * C39310) / q - (C39441 * C43006) / q - (C39558 * p) / q;
    const double C25655 =
        (3 * C39195) / C27809 - (C39310 * C43006) / q - (C39441 * p) / q;
    const double C25799 = C43414 - (C39398 * C43006) / q - C43404 / q;
    const double C25910 =
        (3 * C38295) / C27809 - (C39294 * C43006) / q - C43400 / q;
    const double C25982 = C43381 - (C39383 * C43006) / q - C43423 / q;
    const double C26054 =
        (3 * C39398) / C27809 - (C39660 * C43006) / q - C43403 / q;
    const double C26158 = -(C38560 * C43006 + C43434) / q;
    const double C26166 = -(C40367 * C43006 + C43435) / q;
    const double C26437 = -(C40738 * C43006 + C43448) / q;
    const double C26438 = -(C40567 * C43006 + C43442) / q;
    const double C26621 = -(C40551 * C43006 + C43451) / q;
    const double C26800 = C43461 - (C38311 * C43006) / q - C43387 / q;
    const double C26991 = C43467 - (C39067 * C43006) / q - C43394 / q;
    const double C27133 = -(C38576 * C43006 + C43463) / q;
    const double C27520 = C43468 - (C39837 * C43006) / q - C43395 / q;
    const double C37958 = -(C37914 * C43006 + C43473) / q;
    const double C37987 = -(C37943 * C43006 + C43474) / q;
    const double C38591 = -(C38561 * C43006 + C43487) / q;
    const double C38952 = -(C38177 * C43006 + C43478) / q;
    const double C39339 = C43472 - (C39309 * C43006) / q - (C39195 * p) / q;
    const double C39500 =
        (2 * C39294) / q - (C39471 * C43006) / q - (C42341 * p) / q;
    const double C39587 =
        (5 * C39441) / C27809 - (C39558 * C43006) / q - (C42371 * p) / q;
    const double C40168 =
        (3 * C39383) / C27809 - (C40067 * C43006) / q - C43493 / q;
    const double C40296 = (2 * C39660) / q - (C39645 * C43006) / q - C43494 / q;
    const double C40797 = -(C40768 * C43006 + C43503) / q;
    const double C41158 = -(C38736 * C43006 + C43490) / q;
    const double C41668 = -(C40566 * C43006 + C43492) / q;
    const double C7904 = (2 * C27812) / q -
                         (C27841 * de + C27794 * C43005) / q - (C27845 * p) / q;
    const double C7905 = (3 * C27829) / C27809 -
                         (C27857 * de + C27812 * C43005) / q - (C27794 * p) / q;
    const double C7913 =
        C27876 / q - (C27872 * de + C27829 * C43005) / q - (C27812 * p) / q;
    const double C8056 =
        C28237 / q - (C28233 * de + C28205 * C43005) / q - C43014;
    const double C8057 =
        C42845 - (C28250 * de + C28015 * C43005) / q - C42826 / q;
    const double C8200 =
        C28510 / q - (C28506 * de + C28478 * C43005) / q - C43025;
    const double C8201 =
        C42864 - (C28523 * de + C28146 * C43005) / q - C42837 / q;
    const double C8336 = (3 * C28015) / C27809 -
                         (C28762 * de + C28000 * C43005) / q - C42825 / q;
    const double C8408 = (3 * C28146) / C27809 -
                         (C28895 * de + C28131 * C43005) / q - C42836 / q;
    const double C8480 =
        C42882 - (C29028 * de + C28433 * C43005) / q - C42877 / q;
    const double C8560 = C42887 - (C29176 * de + C28237 * C43005) / q - C43018;
    const double C8568 = -(C29191 * de + C29164 * C43005 + C42888) / q;
    const double C8704 = -(C29445 * de + C29417 * C43005 + C42901) / q;
    const double C8705 = -(C29461 * de + C29285 * C43005 + C42892) / q;
    const double C8848 = -(C29716 * de + C29688 * C43005 + C42910) / q;
    const double C8849 = -(C29732 * de + C29373 * C43005 + C42895) / q;
    const double C8984 = C42900 - (C29972 * de + C29269 * C43005) / q - C43017;
    const double C9056 = C42909 - (C30105 * de + C29358 * C43005) / q - C43035;
    const double C9128 = -(C30237 * de + C29643 * C43005 + C42924) / q;
    const double C9208 = C42930 - (C30384 * de + C28510 * C43005) / q - C43030;
    const double C9216 = -(C30399 * de + C30372 * C43005 + C42931) / q;
    const double C9351 = -(C30634 * de + C29812 * C43005 + C42935) / q;
    const double C9487 = -(C30782 * de + C30754 * C43005 + C42947) / q;
    const double C9488 = -(C30798 * de + C30578 * C43005 + C42940) / q;
    const double C9623 = C42942 - (C31036 * de + C30477 * C43005) / q - C43037;
    const double C9695 = C42946 - (C31169 * de + C30562 * C43005) / q - C43029;
    const double C9767 = -(C31302 * de + C30724 * C43005 + C42952) / q;
    const double C9853 =
        C42960 - (C31434 * de + C28254 * C43005) / q - C42827 / q;
    const double C10044 =
        C42967 - (C31564 * de + C29032 * C43005) / q - C42858 / q;
    const double C10186 =
        C42969 - (C31695 * de + C28527 * C43005) / q - C42838 / q;
    const double C10573 = -(C31826 * de + C29828 * C43005 + C42964) / q;
    const double C27795 = (5 * C27794) / C27809 -
                          (C31941 * de + C27845 * C43005) / q -
                          (C31945 * p) / q;
    const double C27828 =
        C42973 - (C31956 * de + C27876 * C43005) / q - (C27829 * p) / q;
    const double C28206 = C43054 - (C32075 * de + C28238 * C43005) / q - C43052;
    const double C28479 = C43058 - (C32165 * de + C28511 * C43005) / q - C43053;
    const double C28750 =
        (2 * C28000) / q - (C32254 * de + C27985 * C43005) / q - C42974 / q;
    const double C28883 =
        (2 * C28131) / q - (C32283 * de + C28116 * C43005) / q - C42976 / q;
    const double C29016 = (3 * C28433) / C27809 -
                          (C32326 * de + C28852 * C43005) / q - C42979 / q;
    const double C29418 = C42899 - (C32382 * de + C29449 * C43005) / q - C43056;
    const double C29689 = C42908 - (C32472 * de + C29720 * C43005) / q - C43057;
    const double C29960 =
        C29269 / q - (C32561 * de + C28331 * C43005) / q - C43055;
    const double C30093 = C42999 - (C32590 * de + C28418 * C43005) / q - C43063;
    const double C30225 = C42928 - (C32619 * de + C30062 * C43005) / q - C43064;
    const double C30755 = C42945 - (C32661 * de + C30786 * C43005) / q - C43061;
    const double C31024 = C42997 - (C32750 * de + C28604 * C43005) / q - C43062;
    const double C31157 =
        C30562 / q - (C32779 * de + C28691 * C43005) / q - C43059;
    const double C31290 = C42958 - (C32822 * de + C31126 * C43005) / q - C43060;
    const double C31422 = -(C32851 * de + C29284 * C43005 + C42975) / q;
    const double C31683 = -(C32866 * de + C30577 * C43005 + C42977) / q;
    const double C16355 =
        (2 * C32915) / q - (C32899 * C43005) / q - (C32946 * p) / q;
    const double C16356 =
        (3 * C32931) / C27809 - (C32915 * C43005) / q - (C32899 * p) / q;
    const double C16364 = C32975 / q - (C32931 * C43005) / q - (C32915 * p) / q;
    const double C16508 = C43096 - (C33108 * C43005) / q - C43079 / q;
    const double C16652 = C43115 - (C33239 * C43005) / q - C43088 / q;
    const double C16787 =
        (3 * C33108) / C27809 - (C33093 * C43005) / q - C43078 / q;
    const double C16859 =
        (3 * C33239) / C27809 - (C33224 * C43005) / q - C43087 / q;
    const double C16931 = C43133 - (C33518 * C43005) / q - C43128 / q;
    const double C17019 = -(C34227 * C43005 + C43139) / q;
    const double C17155 = -(C34473 * C43005 + C43152) / q;
    const double C17156 = -(C34342 * C43005 + C43143) / q;
    const double C17299 = -(C34736 * C43005 + C43161) / q;
    const double C17300 = -(C34430 * C43005 + C43146) / q;
    const double C17579 = -(C34692 * C43005 + C43175) / q;
    const double C17667 = -(C35399 * C43005 + C43182) / q;
    const double C17802 = -(C34853 * C43005 + C43186) / q;
    const double C17938 = -(C35770 * C43005 + C43198) / q;
    const double C17939 = -(C35599 * C43005 + C43191) / q;
    const double C18218 = -(C35741 * C43005 + C43203) / q;
    const double C18304 = C43211 - (C33343 * C43005) / q - C43080 / q;
    const double C18495 = C43218 - (C34099 * C43005) / q - C43109 / q;
    const double C18637 = C43220 - (C33608 * C43005) / q - C43089 / q;
    const double C19024 = -(C34869 * C43005 + C43215) / q;
    const double C32900 =
        (5 * C32899) / C27809 - (C32946 * C43005) / q - (C36925 * p) / q;
    const double C32930 = C43224 - (C32975 * C43005) / q - (C32931 * p) / q;
    const double C33826 = (2 * C33093) / q - (C33078 * C43005) / q - C43225 / q;
    const double C33955 = (2 * C33224) / q - (C33209 * C43005) / q - C43227 / q;
    const double C34084 =
        (3 * C33518) / C27809 - (C33925 * C43005) / q - C43230 / q;
    const double C36418 = -(C34341 * C43005 + C43226) / q;
    const double C36671 = -(C35598 * C43005 + C43228) / q;
    const double C24806 =
        (2 * C37883) / q - (C37867 * C43005) / q - (C37914 * p) / q;
    const double C24807 =
        (3 * C37899) / C27809 - (C37883 * C43005) / q - (C37867 * p) / q;
    const double C24815 = C37943 / q - (C37899 * C43005) / q - (C37883 * p) / q;
    const double C24959 = C43344 - (C38076 * C43005) / q - C43327 / q;
    const double C25103 = C43363 - (C38207 * C43005) / q - C43336 / q;
    const double C25238 =
        (3 * C38076) / C27809 - (C38061 * C43005) / q - C43326 / q;
    const double C25310 =
        (3 * C38207) / C27809 - (C38192 * C43005) / q - C43335 / q;
    const double C25382 = C43381 - (C38486 * C43005) / q - C43376 / q;
    const double C25470 = -(C39195 * C43005 + C43387) / q;
    const double C25606 = -(C39441 * C43005 + C43400) / q;
    const double C25607 = -(C39310 * C43005 + C43391) / q;
    const double C25750 = -(C39704 * C43005 + C43409) / q;
    const double C25751 = -(C39398 * C43005 + C43394) / q;
    const double C26030 = -(C39660 * C43005 + C43423) / q;
    const double C26118 = -(C40367 * C43005 + C43430) / q;
    const double C26253 = -(C39821 * C43005 + C43434) / q;
    const double C26389 = -(C40738 * C43005 + C43446) / q;
    const double C26390 = -(C40567 * C43005 + C43439) / q;
    const double C26669 = -(C40709 * C43005 + C43451) / q;
    const double C26755 = C43459 - (C38311 * C43005) / q - C43328 / q;
    const double C26946 = C43466 - (C39067 * C43005) / q - C43357 / q;
    const double C27088 = C43468 - (C38576 * C43005) / q - C43337 / q;
    const double C27475 = -(C39837 * C43005 + C43463) / q;
    const double C37868 =
        (5 * C37867) / C27809 - (C37914 * C43005) / q - (C41893 * p) / q;
    const double C37898 = C43472 - (C37943 * C43005) / q - (C37899 * p) / q;
    const double C38794 = (2 * C38061) / q - (C38046 * C43005) / q - C43473 / q;
    const double C38923 = (2 * C38192) / q - (C38177 * C43005) / q - C43475 / q;
    const double C39052 =
        (3 * C38486) / C27809 - (C38893 * C43005) / q - C43478 / q;
    const double C41386 = -(C39309 * C43005 + C43474) / q;
    const double C41639 = -(C40566 * C43005 + C43476) / q;
    const double C35916 = C43196 - (C37676 * de + C35887 * C43006) / q - C43318;
    const double C34913 = C34692 / q - (C34854 * C43010) / q - C43317;
    const double C36361 =
        C35741 / q - (C37805 * de + C34942 * C43006) / q - C43317;
    const double C34971 = C43316 - (C34942 * C43010) / q - C43318;
    const double C34824 = C43250 - (C34766 * C43010) / q - C43315;
    const double C36233 = C43205 - (C32822 * de + C36131 * C43006) / q - C43315;
    const double C34795 = C43248 - (C32472 * de + C34766 * C43006) / q - C43314;
    const double C35114 = C43173 - (C35099 * C43010) / q - C43314;
    const double C34707 = C43150 - (C34677 * C43010) / q - C43313;
    const double C34884 = C43316 - (C37489 * de + C34854 * C43006) / q - C43313;
    const double C35771 = C43196 - (C35800 * C43005) / q - C43309;
    const double C33739 = C43241 - (C33681 * C43010) / q - C43308;
    const double C36290 = C43209 - (C36131 * C43005) / q - C43308;
    const double C33652 = C33224 / q - (C33593 * C43010) / q - C43307;
    const double C36161 = C35583 / q - (C33768 * C43005) / q - C43307;
    const double C33940 = C43126 - (C33925 * C43010) / q - C43310;
    const double C36032 = C43248 - (C33681 * C43005) / q - C43310;
    const double C33797 = C43306 - (C33768 * C43010) / q - C43309;
    const double C33533 = C43093 - (C33503 * C43010) / q - C43305;
    const double C33710 = C43112 - (C32750 * de + C33681 * C43006) / q - C43305;
    const double C34737 = C43159 - (C34766 * C43005) / q - C43305;
    const double C34156 = C43241 - (C32590 * de + C33503 * C43006) / q - C43312;
    const double C35257 = C43179 - (C35099 * C43005) / q - C43312;
    const double C34474 = C43150 - (C34503 * C43005) / q - C43304;
    const double C34027 = C43130 - (C32326 * de + C33925 * C43006) / q - C43311;
    const double C35129 = C43250 - (C33503 * C43005) / q - C43311;
    const double C33358 =
        C33093 / q - (C32075 * de + C33328 * C43006) / q - C43303;
    const double C35000 = C34326 / q - (C33416 * C43005) / q - C43303;
    const double C33445 = C43302 - (C32561 * de + C33416 * C43006) / q - C43304;
    const double C33254 = C43075 - (C33209 * C43010) / q - C43301;
    const double C33563 = C43306 - (C33593 * C43005) / q - C43301;
    const double C33123 = C43075 - (C32254 * de + C33078 * C43006) / q - C43300;
    const double C33298 = C43302 - (C33328 * C43005) / q - C43300;
    const double C17396 = C43138 - (C34430 * C43010) / q - C43294;
    const double C17847 = C43181 - (C30634 * de + C34853 * C43006) / q - C43294;
    const double C17395 = C34430 / q - (C34736 * C43010) / q - C43293;
    const double C18242 = C43197 - (C31302 * de + C35741 * C43006) / q - C43293;
    const double C17347 =
        C34853 / q - (C29716 * de + C34736 * C43006) / q - C43291;
    const double C17627 = C43151 - (C34692 * C43010) / q - C43291;
    const double C17555 = C43137 - (C34415 * C43010) / q - C43298;
    const double C18098 = C43180 - (C31036 * de + C35498 * C43006) / q - C43298;
    const double C16748 = C43077 - (C33239 * C43010) / q - C43278;
    const double C17659 = C43181 - (C33592 * C43005) / q - C43278;
    const double C16747 = C33239 / q - (C33562 * C43010) / q - C43277;
    const double C18146 = C43197 - (C35583 * C43005) / q - C43277;
    const double C16979 = C43094 - (C33518 * C43010) / q - C43285;
    const double C18074 = C43193 - (C35498 * C43005) / q - C43285;
    const double C16651 = C33592 / q - (C33562 * C43005) / q - C43273;
    const double C16907 = C43076 - (C33224 * C43010) / q - C43273;
    const double C16955 = C43113 - (C29028 * de + C33518 * C43006) / q - C43283;
    const double C17507 = C43160 - (C34415 * C43005) / q - C43283;
    const double C16556 = C43077 - (C28250 * de + C33108 * C43006) / q - C43266;
    const double C17011 = C43138 - (C33327 * C43005) / q - C43266;
    const double C16555 =
        C33108 / q - (C28233 * de + C33297 * C43006) / q - C43265;
    const double C17435 = C43151 - (C34326 * C43005) / q - C43265;
    const double C16507 = C33327 / q - (C33297 * C43005) / q - C43262;
    const double C16811 = C43076 - (C28762 * de + C33093 * C43006) / q - C43262;
    const double C40884 = C43444 - (C40855 * C43006) / q - C43566;
    const double C39881 =
        C39660 / q - (C37489 * de + C39822 * C43010) / q - C43565;
    const double C41329 = C40709 / q - (C39910 * C43006) / q - C43565;
    const double C39939 = C43564 - (C37805 * de + C39910 * C43010) / q - C43566;
    const double C39792 = C43498 - (C32472 * de + C39734 * C43010) / q - C43563;
    const double C41201 = C43453 - (C41099 * C43006) / q - C43563;
    const double C39763 = C43496 - (C39734 * C43006) / q - C43562;
    const double C40082 = C43421 - (C32619 * de + C40067 * C43010) / q - C43562;
    const double C39675 = C43398 - (C37604 * de + C39645 * C43010) / q - C43561;
    const double C39852 = C43564 - (C39822 * C43006) / q - C43561;
    const double C40739 = C43444 - (C40768 * C43005) / q - C43557;
    const double C38707 = C43489 - (C32750 * de + C38649 * C43010) / q - C43556;
    const double C41258 = C43457 - (C41099 * C43005) / q - C43556;
    const double C38620 =
        C38192 / q - (C32165 * de + C38561 * C43010) / q - C43555;
    const double C41129 = C40551 / q - (C38736 * C43005) / q - C43555;
    const double C38908 = C43374 - (C32326 * de + C38893 * C43010) / q - C43558;
    const double C41000 = C43496 - (C38649 * C43005) / q - C43558;
    const double C38765 = C43554 - (C32779 * de + C38736 * C43010) / q - C43557;
    const double C38501 = C43341 - (C32590 * de + C38471 * C43010) / q - C43553;
    const double C38678 = C43360 - (C38649 * C43006) / q - C43553;
    const double C39705 = C43407 - (C39734 * C43005) / q - C43553;
    const double C39124 = C43489 - (C38471 * C43006) / q - C43560;
    const double C40225 = C43427 - (C40067 * C43005) / q - C43560;
    const double C39442 = C43398 - (C39471 * C43005) / q - C43552;
    const double C38995 = C43378 - (C38893 * C43006) / q - C43559;
    const double C40097 = C43498 - (C38471 * C43005) / q - C43559;
    const double C38326 = C38061 / q - (C38296 * C43006) / q - C43551;
    const double C39968 = C39294 / q - (C38384 * C43005) / q - C43551;
    const double C38413 = C43550 - (C38384 * C43006) / q - C43552;
    const double C38222 = C43323 - (C32283 * de + C38177 * C43010) / q - C43549;
    const double C38531 = C43554 - (C38561 * C43005) / q - C43549;
    const double C38091 = C43323 - (C38046 * C43006) / q - C43548;
    const double C38266 = C43550 - (C38296 * C43005) / q - C43548;
    const double C25847 = C43386 - (C29732 * de + C39398 * C43010) / q - C43542;
    const double C26298 = C43429 - (C39821 * C43006) / q - C43542;
    const double C25846 =
        C39398 / q - (C29716 * de + C39704 * C43010) / q - C43541;
    const double C26693 = C43445 - (C40709 * C43006) / q - C43541;
    const double C25798 = C39821 / q - (C39704 * C43006) / q - C43539;
    const double C26078 = C43399 - (C30237 * de + C39660 * C43010) / q - C43539;
    const double C26006 = C43385 - (C30105 * de + C39383 * C43010) / q - C43546;
    const double C26549 = C43428 - (C40466 * C43006) / q - C43546;
    const double C25199 = C43325 - (C28523 * de + C38207 * C43010) / q - C43526;
    const double C26110 = C43429 - (C38560 * C43005) / q - C43526;
    const double C25198 =
        C38207 / q - (C28506 * de + C38530 * C43010) / q - C43525;
    const double C26597 = C43445 - (C40551 * C43005) / q - C43525;
    const double C25430 = C43342 - (C29028 * de + C38486 * C43010) / q - C43533;
    const double C26525 = C43441 - (C40466 * C43005) / q - C43533;
    const double C25102 = C38560 / q - (C38530 * C43005) / q - C43521;
    const double C25358 = C43324 - (C28895 * de + C38192 * C43010) / q - C43521;
    const double C25406 = C43361 - (C38486 * C43006) / q - C43531;
    const double C25958 = C43408 - (C39383 * C43005) / q - C43531;
    const double C25007 = C43325 - (C38076 * C43006) / q - C43514;
    const double C25462 = C43386 - (C38295 * C43005) / q - C43514;
    const double C25006 = C38076 / q - (C38265 * C43006) / q - C43513;
    const double C25886 = C43399 - (C39294 * C43005) / q - C43513;
    const double C24958 = C38295 / q - (C38265 * C43005) / q - C43510;
    const double C25262 = C43324 - (C38061 * C43006) / q - C43510;
    const double C42876 = C8007 / C27809;
    const double C42855 = C8015 / C27809;
    const double C7939 = (3 * C8015) / C27809 -
                         (C27951 * de + C8007 * C43005) / q - (C8006 * p) / q;
    const double C42856 = C8152 * p;
    const double C42833 = C8153 * p;
    const double C42874 = C8296 * p;
    const double C42841 = C8297 * p;
    const double C42832 = C8384 * p;
    const double C42840 = C8456 * p;
    const double C42860 = C8528 * p;
    const double C42891 = C8656 * p;
    const double C42890 = C8664 / C27809;
    const double C42923 = C8801 / C27809;
    const double C8785 =
        (3 * C8664) / C27809 - (C8801 * C43006) / q - (C8800 * p) / q;
    const double C42921 = C8944 * p;
    const double C42898 = C8945 * p;
    const double C42894 = C9032 * p;
    const double C42897 = C9104 * p;
    const double C42907 = C9176 * p;
    const double C42934 = C9304 * p;
    const double C42933 = C9312 / C27809;
    const double C42939 = C9441 * p;
    const double C42956 = C9584 / C27809;
    const double C9600 =
        (3 * C9312) / C27809 - (C9584 * C43010) / q + C42946 - (C9583 * p) / q;
    const double C42938 = C9671 * p;
    const double C42941 = C9743 * p;
    const double C42944 = C9815 * p;
    const double C42849 = C9943 / q;
    const double C42965 = C10134 * p;
    const double C42884 = C10134 / q;
    const double C42866 = C10276 / q;
    const double C42917 = C10663 / q;
    const double C7938 =
        (2 * C8007) / q - (C27935 * de + C8006 * C43005) / q - (C27939 * p) / q;
    const double C42963 = C27970 / C27809;
    const double C7947 =
        C27970 / q - (C27966 * de + C8015 * C43005) / q - (C8007 * p) / q;
    const double C42831 = C28073 * p;
    const double C42839 = C28161 * p;
    const double C42848 = C28301 * p;
    const double C42854 = C28389 * p;
    const double C42859 = C28448 * p;
    const double C42865 = C28574 * p;
    const double C42870 = C28662 * p;
    const double C42873 = C28720 * p;
    const double C42878 = C28867 * p;
    const double C42961 = C29343 / C27809;
    const double C8648 = C29343 / q - (C8664 * C43006) / q - (C8801 * p) / q;
    const double C42903 = C29511 * p;
    const double C8784 =
        (2 * C8801) / q - (C8800 * C43006) / q - (C29599 * p) / q;
    const double C42906 = C29658 * p;
    const double C42913 = C29782 * p;
    const double C42916 = C29872 * p;
    const double C42920 = C29930 * p;
    const double C42925 = C30077 * p;
    const double C42971 = C30607 / C27809;
    const double C9328 =
        C30607 / q - (C9312 * C43010) / q + C42930 - (C9584 * p) / q;
    const double C42948 = C30848 * p;
    const double C42950 = C30936 * p;
    const double C9599 =
        (2 * C9584) / q - (C9583 * C43010) / q + C42945 - (C30994 * p) / q;
    const double C42953 = C31141 * p;
    const double C43127 = C16458 / C27809;
    const double C43106 = C16466 / C27809;
    const double C16390 =
        (3 * C16466) / C27809 - (C16458 * C43005) / q - (C16457 * p) / q;
    const double C43107 = C16603 * p;
    const double C43086 = C16604 * p;
    const double C43085 = C16835 * p;
    const double C43142 = C17107 * p;
    const double C43141 = C17115 / C27809;
    const double C43174 = C17252 / C27809;
    const double C17236 = (3 * C17115) / C27809 -
                          (C29523 * de + C17252 * C43006) / q -
                          (C17251 * p) / q;
    const double C43145 = C17483 * p;
    const double C43185 = C17755 * p;
    const double C43184 = C17763 / C27809;
    const double C43190 = C17892 * p;
    const double C43207 = C18035 / C27809;
    const double C18051 = (3 * C17763) / C27809 - (C18035 * C43010) / q +
                          C43197 - (C18034 * p) / q;
    const double C43189 = C18122 * p;
    const double C43192 = C18194 * p;
    const double C43195 = C18266 * p;
    const double C43100 = C18394 / q;
    const double C43216 = C18585 * p;
    const double C43135 = C18585 / q;
    const double C43117 = C18727 / q;
    const double C43168 = C19114 / q;
    const double C16389 =
        (2 * C16458) / q - (C16457 * C43005) / q - (C33034 * p) / q;
    const double C43214 = C33063 / C27809;
    const double C16398 = C33063 / q - (C16466 * C43005) / q - (C16458 * p) / q;
    const double C43084 = C33166 * p;
    const double C43099 = C33387 * p;
    const double C43105 = C33474 * p;
    const double C43212 = C34400 / C27809;
    const double C17099 =
        C34400 / q - (C29251 * de + C17115 * C43006) / q - (C17252 * p) / q;
    const double C43154 = C34561 * p;
    const double C17235 = (2 * C17252) / q -
                          (C29507 * de + C17251 * C43006) / q -
                          (C34648 * p) / q;
    const double C43222 = C35628 / C27809;
    const double C17779 =
        C35628 / q - (C17763 * C43010) / q + C43181 - (C18035 * p) / q;
    const double C43199 = C35858 * p;
    const double C43201 = C35945 * p;
    const double C18050 =
        (2 * C18035) / q - (C18034 * C43010) / q + C43196 - (C36003 * p) / q;
    const double C43204 = C36146 * p;
    const double C43375 = C24909 / C27809;
    const double C43354 = C24917 / C27809;
    const double C24841 =
        (3 * C24917) / C27809 - (C24909 * C43005) / q - (C24908 * p) / q;
    const double C43355 = C25054 * p;
    const double C43334 = C25055 * p;
    const double C43333 = C25286 * p;
    const double C43390 = C25558 * p;
    const double C43389 = C25566 / C27809;
    const double C43422 = C25703 / C27809;
    const double C25687 =
        (3 * C25566) / C27809 - (C25703 * C43006) / q - (C25702 * p) / q;
    const double C43393 = C25934 * p;
    const double C43433 = C26206 * p;
    const double C43432 = C26214 / C27809;
    const double C43438 = C26343 * p;
    const double C43455 = C26486 / C27809;
    const double C26502 = (3 * C26214) / C27809 -
                          (C30860 * de + C26486 * C43010) / q + C43445 -
                          (C26485 * p) / q;
    const double C43437 = C26573 * p;
    const double C43440 = C26645 * p;
    const double C43443 = C26717 * p;
    const double C43348 = C26845 / q;
    const double C43464 = C27036 * p;
    const double C43383 = C27036 / q;
    const double C43365 = C27178 / q;
    const double C43416 = C27565 / q;
    const double C24840 =
        (2 * C24909) / q - (C24908 * C43005) / q - (C38002 * p) / q;
    const double C43462 = C38031 / C27809;
    const double C24849 = C38031 / q - (C24917 * C43005) / q - (C24909 * p) / q;
    const double C43332 = C38134 * p;
    const double C43347 = C38355 * p;
    const double C43353 = C38442 * p;
    const double C43460 = C39368 / C27809;
    const double C25550 = C39368 / q - (C25566 * C43006) / q - (C25703 * p) / q;
    const double C43402 = C39529 * p;
    const double C25686 =
        (2 * C25703) / q - (C25702 * C43006) / q - (C39616 * p) / q;
    const double C43470 = C40596 / C27809;
    const double C26230 = C40596 / q - (C30459 * de + C26214 * C43010) / q +
                          C43429 - (C26486 * p) / q;
    const double C43447 = C40826 * p;
    const double C43449 = C40913 * p;
    const double C26501 = (2 * C26486) / q -
                          (C30844 * de + C26485 * C43010) / q + C43444 -
                          (C40971 * p) / q;
    const double C43452 = C41114 * p;
    const double C7922 = (3 * C7964) / C27809 -
                         (C27904 * de + C7956 * C43005) / q - (C7955 * p) / q;
    const double C42853 = C8104 * p;
    const double C42830 = C8105 * p;
    const double C42829 = C8360 * p;
    const double C42869 = C8504 * p;
    const double C42889 = C8608 * p;
    const double C8769 =
        (3 * C8616) / C27809 - (C8753 * C43006) / q + C42900 - (C8752 * p) / q;
    const double C42893 = C9008 * p;
    const double C42912 = C9080 * p;
    const double C42932 = C9264 / C27809;
    const double C9232 = -(C30429 * de + C9264 * C43005 + C9256 * p) / q;
    const double C9280 = C42930 - (C9264 * C43006) / q - (C9396 * p) / q;
    const double C42955 = C9536 / C27809;
    const double C42937 = C9647 * p;
    const double C9504 = -(C30829 * de + C9536 * C43005 + C9719 * p) / q;
    const double C9552 = C42946 - (C9536 * C43006) / q - (C9791 * p) / q;
    const double C42847 = C9898 / q;
    const double C42972 = C10089 * p;
    const double C42883 = C10089 / q;
    const double C8217 =
        C10231 / q - (C28555 * de + C8249 * C43005) / q - (C8432 * p) / q;
    const double C8913 =
        C10618 / q - (C8897 * C43006) / q + C42909 - (C9152 * p) / q;
    const double C7921 =
        (2 * C7956) / q - (C27888 * de + C7955 * C43005) / q - (C27892 * p) / q;
    const double C7930 =
        C27923 / q - (C27919 * de + C7964 * C43005) / q - (C7956 * p) / q;
    const double C42828 = C28030 * p;
    const double C42846 = C28270 * p;
    const double C42852 = C28360 * p;
    const double C8216 =
        C9256 / q - (C28539 * de + C8248 * C43005) / q - (C28543 * p) / q;
    const double C42868 = C28633 * p;
    const double C8416 = (3 * C8249) / C27809 -
                         (C28910 * de + C8432 * C43005) / q - (C28914 * p) / q;
    const double C42880 = C28958 * p;
    const double C42885 = C29091 * p;
    const double C8632 =
        C29314 / q - (C8616 * C43006) / q + C42887 - (C8753 * p) / q;
    const double C42902 = C29480 * p;
    const double C8768 =
        (2 * C8753) / q - (C8752 * C43006) / q + C42899 - (C29570 * p) / q;
    const double C42911 = C29751 * p;
    const double C8912 =
        C9396 / q - (C8896 * C43006) / q + C42908 - (C29843 * p) / q;
    const double C42927 = C30167 * p;
    const double C9160 =
        (3 * C8897) / C27809 - (C9152 * C43006) / q + C42928 - (C30299 * p) / q;
    const double C9503 = -(C30813 * de + C9535 * C43005 + C30817 * p) / q;
    const double C9551 = C42945 - (C9535 * C43006) / q - (C30907 * p) / q;
    const double C42957 = C31232 * p;
    const double C42970 = C31714 / C27809;
    const double C16373 =
        (3 * C16415) / C27809 - (C16407 * C43005) / q - (C16406 * p) / q;
    const double C43140 = C17059 * p;
    const double C17220 = (3 * C17067) / C27809 -
                          (C29492 * de + C17204 * C43006) / q + C43151 -
                          (C17203 * p) / q;
    const double C43144 = C17459 * p;
    const double C43163 = C17531 * p;
    const double C43183 = C17715 / C27809;
    const double C17683 = -(C17715 * C43005 + C17707 * p) / q;
    const double C43206 = C17987 / C27809;
    const double C17955 = -(C17987 * C43005 + C18170 * p) / q;
    const double C43098 = C18349 / q;
    const double C43223 = C18540 * p;
    const double C43134 = C18540 / q;
    const double C16668 = C18682 / q - (C16700 * C43005) / q - (C16883 * p) / q;
    const double C17364 = C19069 / q - (C29763 * de + C17348 * C43006) / q +
                          C43160 - (C17603 * p) / q;
    const double C16372 =
        (2 * C16407) / q - (C16406 * C43005) / q - (C32990 * p) / q;
    const double C16381 = C33019 / q - (C16415 * C43005) / q - (C16407 * p) / q;
    const double C16667 = C17707 / q - (C16699 * C43005) / q - (C33623 * p) / q;
    const double C16867 =
        (3 * C16700) / C27809 - (C16883 * C43005) / q - (C33984 * p) / q;
    const double C17083 = C34371 / q - (C29221 * de + C17067 * C43006) / q +
                          C43138 - (C17204 * p) / q;
    const double C43153 = C34532 * p;
    const double C17219 = (2 * C17204) / q -
                          (C29476 * de + C17203 * C43006) / q + C43150 -
                          (C34619 * p) / q;
    const double C43178 = C35200 * p;
    const double C17611 = (3 * C17348) / C27809 -
                          (C30252 * de + C17603 * C43006) / q + C43179 -
                          (C35328 * p) / q;
    const double C17954 = -(C17986 * C43005 + C35829 * p) / q;
    const double C43221 = C36700 / C27809;
    const double C24824 =
        (3 * C24866) / C27809 - (C24858 * C43005) / q - (C24857 * p) / q;
    const double C43388 = C25510 * p;
    const double C25671 = (3 * C25518) / C27809 - (C25655 * C43006) / q +
                          C43399 - (C25654 * p) / q;
    const double C43392 = C25910 * p;
    const double C43411 = C25982 * p;
    const double C43431 = C26166 / C27809;
    const double C26134 = -(C26166 * C43005 + C26158 * p) / q;
    const double C43454 = C26438 / C27809;
    const double C26406 = -(C26438 * C43005 + C26621 * p) / q;
    const double C43346 = C26800 / q;
    const double C43471 = C26991 * p;
    const double C43382 = C26991 / q;
    const double C25119 = C27133 / q - (C25151 * C43005) / q - (C25334 * p) / q;
    const double C25815 =
        C27520 / q - (C25799 * C43006) / q + C43408 - (C26054 * p) / q;
    const double C24823 =
        (2 * C24858) / q - (C24857 * C43005) / q - (C37958 * p) / q;
    const double C24832 = C37987 / q - (C24866 * C43005) / q - (C24858 * p) / q;
    const double C25118 = C26158 / q - (C25150 * C43005) / q - (C38591 * p) / q;
    const double C25318 =
        (3 * C25151) / C27809 - (C25334 * C43005) / q - (C38952 * p) / q;
    const double C25534 =
        C39339 / q - (C25518 * C43006) / q + C43386 - (C25655 * p) / q;
    const double C43401 = C39500 * p;
    const double C25670 =
        (2 * C25655) / q - (C25654 * C43006) / q + C43398 - (C39587 * p) / q;
    const double C43426 = C40168 * p;
    const double C26062 = (3 * C25799) / C27809 - (C26054 * C43006) / q +
                          C43427 - (C40296 * p) / q;
    const double C26405 = -(C26437 * C43005 + C40797 * p) / q;
    const double C43469 = C41668 / C27809;
    const double C7888 = (3 * C7913) / C27809 -
                         (C27807 * de + C7905 * C43005) / q + C42821 -
                         (C7904 * p) / q;
    const double C8544 = C8568 / C27809 - (C29145 * de + C8560 * C43005) / q +
                         C42886 - (C8056 * p) / q;
    const double C8552 =
        C42887 - (C29160 * de + C8568 * C43005) / q - (C8560 * p) / q;
    const double C8689 =
        C42900 - (C29430 * de + C8705 * C43005) / q - (C8984 * p) / q;
    const double C8833 =
        C42909 - (C29701 * de + C8849 * C43005) / q - (C9056 * p) / q;
    const double C9192 = C9216 / C27809 - (C30353 * de + C9208 * C43005) / q +
                         C42929 - (C8200 * p) / q;
    const double C9200 =
        C42930 - (C30368 * de + C9216 * C43005) / q - (C9208 * p) / q;
    const double C9336 =
        C42942 - (C30619 * de + C9351 * C43005) / q - (C9623 * p) / q;
    const double C9472 =
        C42946 - (C30767 * de + C9488 * C43005) / q - (C9695 * p) / q;
    const double C8041 = C9853 / q - (C28218 * de + C8057 * C43005) / q +
                         C42843 - (C8336 * p) / q;
    const double C8185 = C10186 / q - (C28491 * de + C8201 * C43005) / q +
                         C42862 - (C8408 * p) / q;
    const double C10029 = C10573 / C27809 -
                          (C31549 * de + C10044 * C43005) / q + C42966 -
                          (C8480 * p) / q;
    const double C10558 =
        C42967 - (C31811 * de + C10573 * C43005) / q - (C10044 * p) / q;
    const double C7887 = (2 * C7905) / q - (C27790 * de + C7904 * C43005) / q +
                         C42820 - (C27795 * p) / q;
    const double C7896 = C27828 / q - (C27824 * de + C7913 * C43005) / q +
                         C42822 - (C7905 * p) / q;
    const double C8040 = C8560 / q - (C28201 * de + C8056 * C43005) / q +
                         C42842 - (C28206 * p) / q;
    const double C8184 = C9208 / q - (C28474 * de + C8200 * C43005) / q +
                         C42861 - (C28479 * p) / q;
    const double C8328 = (3 * C8057) / C27809 -
                         (C28746 * de + C8336 * C43005) / q + C42875 -
                         (C28750 * p) / q;
    const double C8400 = (3 * C8201) / C27809 -
                         (C28879 * de + C8408 * C43005) / q + C42879 -
                         (C28883 * p) / q;
    const double C8472 = C10044 / q - (C29012 * de + C8480 * C43005) / q +
                         C42881 - (C29016 * p) / q;
    const double C8688 =
        C42899 - (C29413 * de + C8704 * C43005) / q - (C29418 * p) / q;
    const double C8832 =
        C42908 - (C29684 * de + C8848 * C43005) / q - (C29689 * p) / q;
    const double C8976 = C8705 / C27809 - (C29956 * de + C8984 * C43005) / q +
                         C42922 - (C29960 * p) / q;
    const double C9048 = C8849 / C27809 - (C30089 * de + C9056 * C43005) / q +
                         C42926 - (C30093 * p) / q;
    const double C9120 =
        C42928 - (C30221 * de + C9128 * C43005) / q - (C30225 * p) / q;
    const double C9471 =
        C42945 - (C30750 * de + C9487 * C43005) / q - (C30755 * p) / q;
    const double C9615 = C9351 / C27809 - (C31020 * de + C9623 * C43005) / q +
                         C42951 - (C31024 * p) / q;
    const double C9687 = C9488 / C27809 - (C31153 * de + C9695 * C43005) / q +
                         C42954 - (C31157 * p) / q;
    const double C9759 =
        C42958 - (C31286 * de + C9767 * C43005) / q - (C31290 * p) / q;
    const double C9838 = C31422 / C27809 - (C31418 * de + C9853 * C43005) / q +
                         C42959 - (C8057 * p) / q;
    const double C10171 = C31683 / C27809 -
                          (C31679 * de + C10186 * C43005) / q + C42968 -
                          (C8201 * p) / q;
    const double C16339 = (3 * C16364) / C27809 - (C16356 * C43005) / q +
                          C43076 - (C16355 * p) / q;
    const double C16492 =
        C18304 / q - (C16508 * C43005) / q + C43094 - (C16787 * p) / q;
    const double C16636 =
        C18637 / q - (C16652 * C43005) / q + C43113 - (C16859 * p) / q;
    const double C18480 =
        C19024 / C27809 - (C18495 * C43005) / q + C43217 - (C16931 * p) / q;
    const double C19009 = C43218 - (C19024 * C43005) / q - (C18495 * p) / q;
    const double C16338 =
        (2 * C16356) / q - (C16355 * C43005) / q + C43075 - (C32900 * p) / q;
    const double C16347 =
        C32930 / q - (C16364 * C43005) / q + C43077 - (C16356 * p) / q;
    const double C16779 = (3 * C16508) / C27809 - (C16787 * C43005) / q +
                          C43126 - (C33826 * p) / q;
    const double C16851 = (3 * C16652) / C27809 - (C16859 * C43005) / q +
                          C43130 - (C33955 * p) / q;
    const double C16923 =
        C18495 / q - (C16931 * C43005) / q + C43132 - (C34084 * p) / q;
    const double C18289 =
        C36418 / C27809 - (C18304 * C43005) / q + C43210 - (C16508 * p) / q;
    const double C18622 =
        C36671 / C27809 - (C18637 * C43005) / q + C43219 - (C16652 * p) / q;
    const double C24790 = (3 * C24815) / C27809 - (C24807 * C43005) / q +
                          C43324 - (C24806 * p) / q;
    const double C24943 =
        C26755 / q - (C24959 * C43005) / q + C43342 - (C25238 * p) / q;
    const double C25087 =
        C27088 / q - (C25103 * C43005) / q + C43361 - (C25310 * p) / q;
    const double C26931 =
        C27475 / C27809 - (C26946 * C43005) / q + C43465 - (C25382 * p) / q;
    const double C27460 = C43466 - (C27475 * C43005) / q - (C26946 * p) / q;
    const double C24789 =
        (2 * C24807) / q - (C24806 * C43005) / q + C43323 - (C37868 * p) / q;
    const double C24798 =
        C37898 / q - (C24815 * C43005) / q + C43325 - (C24807 * p) / q;
    const double C25230 = (3 * C24959) / C27809 - (C25238 * C43005) / q +
                          C43374 - (C38794 * p) / q;
    const double C25302 = (3 * C25103) / C27809 - (C25310 * C43005) / q +
                          C43378 - (C38923 * p) / q;
    const double C25374 =
        C26946 / q - (C25382 * C43005) / q + C43380 - (C39052 * p) / q;
    const double C26740 =
        C41386 / C27809 - (C26755 * C43005) / q + C43458 - (C24959 * p) / q;
    const double C27073 =
        C41639 / C27809 - (C27088 * C43005) / q + C43467 - (C25103 * p) / q;
    const double C18002 =
        C43196 - (C30813 * de + C17986 * C43006) / q - (C35916 * p) / q;
    const double C43167 = C34913 * p;
    const double C43171 = C34971 * p;
    const double C43164 = C34824 * p;
    const double C43208 = C36233 * p;
    const double C43162 = C34795 * p;
    const double C43176 = C35114 * p;
    const double C43157 = C34707 * p;
    const double C17922 = C43196 - (C17938 * C43005) / q - (C35771 * p) / q;
    const double C43121 = C33739 * p;
    const double C18210 = C43209 - (C18218 * C43005) / q - (C36290 * p) / q;
    const double C43116 = C33652 * p;
    const double C43129 = C33940 * p;
    const double C43124 = C33797 * p;
    const double C43110 = C33533 * p;
    const double C43119 = C33710 * p;
    const double C17283 = C43159 - (C17299 * C43005) / q - (C34737 * p) / q;
    const double C43136 = C34156 * p;
    const double C17571 = C43179 - (C17579 * C43005) / q - (C35257 * p) / q;
    const double C17139 = C43150 - (C17155 * C43005) / q - (C34474 * p) / q;
    const double C43131 = C34027 * p;
    const double C43097 = C33358 * p;
    const double C43103 = C33445 * p;
    const double C43090 = C33254 * p;
    const double C43081 = C33123 * p;
    const double C43149 = C17396 * p;
    const double C17731 =
        C43181 - (C30429 * de + C17715 * C43006) / q - (C17847 * p) / q;
    const double C43172 = C17395 * p;
    const double C18003 =
        C43197 - (C30829 * de + C17987 * C43006) / q - (C18242 * p) / q;
    const double C17363 = C17847 / q - (C29747 * de + C17347 * C43006) / q +
                          C43159 - (C34884 * p) / q;
    const double C43158 = C17627 * p;
    const double C43148 = C17555 * p;
    const double C43188 = C18098 * p;
    const double C43092 = C16748 * p;
    const double C17651 = C43181 - (C17667 * C43005) / q - (C17659 * p) / q;
    const double C43125 = C16747 * p;
    const double C17923 = C43197 - (C17939 * C43005) / q - (C18146 * p) / q;
    const double C18138 =
        C17939 / C27809 - (C18146 * C43005) / q + C43205 - (C36161 * p) / q;
    const double C43111 = C16979 * p;
    const double C17787 = C43193 - (C17802 * C43005) / q - (C18074 * p) / q;
    const double C18066 =
        C17802 / C27809 - (C18074 * C43005) / q + C43202 - (C36032 * p) / q;
    const double C16635 =
        C17659 / q - (C16651 * C43005) / q + C43112 - (C33563 * p) / q;
    const double C17643 =
        C17667 / C27809 - (C17659 * C43005) / q + C43180 - (C16651 * p) / q;
    const double C43091 = C16907 * p;
    const double C43120 = C16955 * p;
    const double C17284 = C43160 - (C17300 * C43005) / q - (C17507 * p) / q;
    const double C17499 =
        C17300 / C27809 - (C17507 * C43005) / q + C43177 - (C35129 * p) / q;
    const double C43083 = C16556 * p;
    const double C17003 = C43138 - (C17019 * C43005) / q - (C17011 * p) / q;
    const double C43104 = C16555 * p;
    const double C17140 = C43151 - (C17156 * C43005) / q - (C17435 * p) / q;
    const double C17427 =
        C17156 / C27809 - (C17435 * C43005) / q + C43173 - (C35000 * p) / q;
    const double C16491 =
        C17011 / q - (C16507 * C43005) / q + C43093 - (C33298 * p) / q;
    const double C16995 =
        C17019 / C27809 - (C17011 * C43005) / q + C43137 - (C16507 * p) / q;
    const double C43082 = C16811 * p;
    const double C26453 = C43444 - (C26437 * C43006) / q - (C40884 * p) / q;
    const double C43415 = C39881 * p;
    const double C43419 = C39939 * p;
    const double C43412 = C39792 * p;
    const double C43456 = C41201 * p;
    const double C43410 = C39763 * p;
    const double C43424 = C40082 * p;
    const double C43405 = C39675 * p;
    const double C26373 = C43444 - (C26389 * C43005) / q - (C40739 * p) / q;
    const double C43369 = C38707 * p;
    const double C26661 = C43457 - (C26669 * C43005) / q - (C41258 * p) / q;
    const double C43364 = C38620 * p;
    const double C43377 = C38908 * p;
    const double C43372 = C38765 * p;
    const double C43358 = C38501 * p;
    const double C43367 = C38678 * p;
    const double C25734 = C43407 - (C25750 * C43005) / q - (C39705 * p) / q;
    const double C43384 = C39124 * p;
    const double C26022 = C43427 - (C26030 * C43005) / q - (C40225 * p) / q;
    const double C25590 = C43398 - (C25606 * C43005) / q - (C39442 * p) / q;
    const double C43379 = C38995 * p;
    const double C43345 = C38326 * p;
    const double C43351 = C38413 * p;
    const double C43338 = C38222 * p;
    const double C43329 = C38091 * p;
    const double C43397 = C25847 * p;
    const double C26182 = C43429 - (C26166 * C43006) / q - (C26298 * p) / q;
    const double C43420 = C25846 * p;
    const double C26454 = C43445 - (C26438 * C43006) / q - (C26693 * p) / q;
    const double C25814 =
        C26298 / q - (C25798 * C43006) / q + C43407 - (C39852 * p) / q;
    const double C43406 = C26078 * p;
    const double C43396 = C26006 * p;
    const double C43436 = C26549 * p;
    const double C43340 = C25199 * p;
    const double C26102 = C43429 - (C26118 * C43005) / q - (C26110 * p) / q;
    const double C43373 = C25198 * p;
    const double C26374 = C43445 - (C26390 * C43005) / q - (C26597 * p) / q;
    const double C26589 =
        C26390 / C27809 - (C26597 * C43005) / q + C43453 - (C41129 * p) / q;
    const double C43359 = C25430 * p;
    const double C26238 = C43441 - (C26253 * C43005) / q - (C26525 * p) / q;
    const double C26517 =
        C26253 / C27809 - (C26525 * C43005) / q + C43450 - (C41000 * p) / q;
    const double C25086 =
        C26110 / q - (C25102 * C43005) / q + C43360 - (C38531 * p) / q;
    const double C26094 =
        C26118 / C27809 - (C26110 * C43005) / q + C43428 - (C25102 * p) / q;
    const double C43339 = C25358 * p;
    const double C43368 = C25406 * p;
    const double C25735 = C43408 - (C25751 * C43005) / q - (C25958 * p) / q;
    const double C25950 =
        C25751 / C27809 - (C25958 * C43005) / q + C43425 - (C40097 * p) / q;
    const double C43331 = C25007 * p;
    const double C25454 = C43386 - (C25470 * C43005) / q - (C25462 * p) / q;
    const double C43352 = C25006 * p;
    const double C25591 = C43399 - (C25607 * C43005) / q - (C25886 * p) / q;
    const double C25878 =
        C25607 / C27809 - (C25886 * C43005) / q + C43421 - (C39968 * p) / q;
    const double C24942 =
        C25462 / q - (C24958 * C43005) / q + C43341 - (C38266 * p) / q;
    const double C25446 =
        C25470 / C27809 - (C25462 * C43005) / q + C43385 - (C24958 * p) / q;
    const double C43330 = C25262 * p;
    const double C43022 = C42856 / q;
    const double C7998 = -(C8015 * C43006 + C42833) / q;
    const double C43032 = C42874 / q;
    const double C43013 = C42841 / q;
    const double C7990 = -(C8007 * C43006 + C42832) / q;
    const double C43012 = C42840 / q;
    const double C43024 = C42860 / q;
    const double C8281 = -(C8297 * C43006 + C42860) / q;
    const double C8600 = -(C29251 * de + C8664 * C43005 + C42891) / q;
    const double C43048 = C42921 / q;
    const double C43040 = C42898 / q;
    const double C8737 = -(C29523 * de + C8801 * C43005 + C42894) / q;
    const double C43039 = C42897 / q;
    const double C8881 = -(C29794 * de + C8945 * C43005 + C42897) / q;
    const double C43042 = C42907 / q;
    const double C9248 = -(C30459 * de + C9312 * C43005 + C42934) / q;
    const double C9296 = -(C9312 * C43006 + C42939) / q;
    const double C9288 = -(C9304 * C43006 + C42938) / q;
    const double C9381 = -(C30664 * de + C9441 * C43005 + C42938) / q;
    const double C10149 =
        C9943 / C27809 - (C10134 * C43010) / q + C42966 - C42938 / q;
    const double C9520 = -(C30860 * de + C9584 * C43005 + C42941) / q;
    const double C9568 = -(C9584 * C43006 + C42944) / q;
    const double C8089 =
        C42849 - (C28313 * de + C8153 * C43005) / q - C42832 / q;
    const double C8640 = C42849 - (C8656 * C43006) / q - C42894 / q;
    const double C9958 = C42959 - (C9943 * C43010) / q - C42965 / q;
    const double C10261 = -(C10276 * C43006 + C42965) / q;
    const double C10603 = -(C31856 * de + C10663 * C43005 + C42965) / q;
    const double C9320 = C42866 - (C9304 * C43010) / q + C42929 - C42941 / q;
    const double C9456 = C42917 - (C9441 * C43010) / q + C42942 - C42944 / q;
    const double C9928 = C42963 - (C9943 * C43006) / q - C42891 / q;
    const double C10291 = C42963 - (C10276 * C43010) / q + C42968 - C42934 / q;
    const double C7989 = -(C8006 * C43006 + C42831) / q;
    const double C8352 =
        (3 * C8153) / C27809 - (C28792 * de + C8384 * C43005) / q - C42831 / q;
    const double C43011 = C42839 / q;
    const double C43016 = C42848 / q;
    const double C43021 = C42854 / q;
    const double C43023 = C42859 / q;
    const double C43026 = C42865 / q;
    const double C43038 = C42870 / q;
    const double C8280 = -(C8296 * C43006 + C42870) / q;
    const double C43031 = C42873 / q;
    const double C43033 = C42878 / q;
    const double C8448 = -(C8456 * C43006 + C42878) / q;
    const double C9883 =
        C42961 - (C31464 * de + C9943 * C43005) / q - C42833 / q;
    const double C10678 = C42961 - (C10663 * C43010) / q + C42967 - C42939 / q;
    const double C8736 = -(C29507 * de + C8800 * C43005 + C42903) / q;
    const double C9024 =
        (3 * C8656) / C27809 - (C9032 * C43006) / q - C42903 / q;
    const double C43041 = C42906 / q;
    const double C43051 = C42913 / q;
    const double C8880 = -(C29778 * de + C8944 * C43005 + C42913) / q;
    const double C43044 = C42916 / q;
    const double C43047 = C42920 / q;
    const double C43049 = C42925 / q;
    const double C9144 = -(C30267 * de + C9176 * C43005 + C42925) / q;
    const double C9519 = -(C30844 * de + C9583 * C43005 + C42948) / q;
    const double C9751 =
        (3 * C9304) / C27809 - (C9743 * C43010) / q + C42954 - C42948 / q;
    const double C9567 = -(C9583 * C43006 + C42950) / q;
    const double C9823 =
        (3 * C9441) / C27809 - (C9815 * C43010) / q + C42958 - C42950 / q;
    const double C9679 = C42884 - (C9671 * C43010) / q + C42951 - C42953 / q;
    const double C9735 = -(C9743 * C43006 + C42953) / q;
    const double C9783 = -(C31332 * de + C9815 * C43005 + C42953) / q;
    const double C43270 = C43107 / q;
    const double C16449 = -(C27966 * de + C16466 * C43006 + C43086) / q;
    const double C16441 = -(C27951 * de + C16458 * C43006 + C43085) / q;
    const double C17051 = -(C17115 * C43005 + C43142) / q;
    const double C17188 = -(C17252 * C43005 + C43145) / q;
    const double C17699 = -(C17763 * C43005 + C43185) / q;
    const double C17747 = -(C30459 * de + C17763 * C43006 + C43190) / q;
    const double C17739 = -(C30444 * de + C17755 * C43006 + C43189) / q;
    const double C17832 = -(C17892 * C43005 + C43189) / q;
    const double C18600 =
        C18394 / C27809 - (C18585 * C43010) / q + C43217 - C43189 / q;
    const double C17971 = -(C18035 * C43005 + C43192) / q;
    const double C18019 = -(C30860 * de + C18035 * C43006 + C43195) / q;
    const double C16540 = C43100 - (C16604 * C43005) / q - C43085 / q;
    const double C17091 =
        C43100 - (C29236 * de + C17107 * C43006) / q - C43145 / q;
    const double C18409 = C43210 - (C18394 * C43010) / q - C43216 / q;
    const double C18712 = -(C31726 * de + C18727 * C43006 + C43216) / q;
    const double C19054 = -(C19114 * C43005 + C43216) / q;
    const double C17771 = C43117 - (C17755 * C43010) / q + C43180 - C43192 / q;
    const double C17907 = C43168 - (C17892 * C43010) / q + C43193 - C43195 / q;
    const double C18379 =
        C43214 - (C31464 * de + C18394 * C43006) / q - C43142 / q;
    const double C18742 = C43214 - (C18727 * C43010) / q + C43219 - C43185 / q;
    const double C16440 = -(C27935 * de + C16457 * C43006 + C43084) / q;
    const double C16803 =
        (3 * C16604) / C27809 - (C16835 * C43005) / q - C43084 / q;
    const double C43264 = C43099 / q;
    const double C43269 = C43105 / q;
    const double C18334 = C43212 - (C18394 * C43005) / q - C43086 / q;
    const double C19129 = C43212 - (C19114 * C43010) / q + C43218 - C43190 / q;
    const double C17187 = -(C17251 * C43005 + C43154) / q;
    const double C17475 = (3 * C17107) / C27809 -
                          (C30002 * de + C17483 * C43006) / q - C43154 / q;
    const double C17970 = -(C18034 * C43005 + C43199) / q;
    const double C18202 =
        (3 * C17755) / C27809 - (C18194 * C43010) / q + C43205 - C43199 / q;
    const double C18018 = -(C30844 * de + C18034 * C43006 + C43201) / q;
    const double C18274 =
        (3 * C17892) / C27809 - (C18266 * C43010) / q + C43209 - C43201 / q;
    const double C18130 = C43135 - (C18122 * C43010) / q + C43202 - C43204 / q;
    const double C18186 = -(C31200 * de + C18194 * C43006 + C43204) / q;
    const double C18234 = -(C18266 * C43005 + C43204) / q;
    const double C43518 = C43355 / q;
    const double C24900 = -(C24917 * C43006 + C43334) / q;
    const double C24892 = -(C24909 * C43006 + C43333) / q;
    const double C25502 = -(C25566 * C43005 + C43390) / q;
    const double C25639 = -(C25703 * C43005 + C43393) / q;
    const double C26150 = -(C26214 * C43005 + C43433) / q;
    const double C26198 = -(C26214 * C43006 + C43438) / q;
    const double C26190 = -(C26206 * C43006 + C43437) / q;
    const double C26283 = -(C26343 * C43005 + C43437) / q;
    const double C27051 = C26845 / C27809 -
                          (C31594 * de + C27036 * C43010) / q + C43465 -
                          C43437 / q;
    const double C26422 = -(C26486 * C43005 + C43440) / q;
    const double C26470 = -(C26486 * C43006 + C43443) / q;
    const double C24991 = C43348 - (C25055 * C43005) / q - C43333 / q;
    const double C25542 = C43348 - (C25558 * C43006) / q - C43393 / q;
    const double C26860 =
        C43458 - (C31464 * de + C26845 * C43010) / q - C43464 / q;
    const double C27163 = -(C27178 * C43006 + C43464) / q;
    const double C27505 = -(C27565 * C43005 + C43464) / q;
    const double C26222 =
        C43365 - (C30444 * de + C26206 * C43010) / q + C43428 - C43440 / q;
    const double C26358 =
        C43416 - (C30664 * de + C26343 * C43010) / q + C43441 - C43443 / q;
    const double C26830 = C43462 - (C26845 * C43006) / q - C43390 / q;
    const double C27193 =
        C43462 - (C31726 * de + C27178 * C43010) / q + C43467 - C43433 / q;
    const double C24891 = -(C24908 * C43006 + C43332) / q;
    const double C25254 =
        (3 * C25055) / C27809 - (C25286 * C43005) / q - C43332 / q;
    const double C43512 = C43347 / q;
    const double C43517 = C43353 / q;
    const double C26785 = C43460 - (C26845 * C43005) / q - C43334 / q;
    const double C27580 =
        C43460 - (C31856 * de + C27565 * C43010) / q + C43466 - C43438 / q;
    const double C25638 = -(C25702 * C43005 + C43402) / q;
    const double C25926 =
        (3 * C25558) / C27809 - (C25934 * C43006) / q - C43402 / q;
    const double C26421 = -(C26485 * C43005 + C43447) / q;
    const double C26653 = (3 * C26206) / C27809 -
                          (C31200 * de + C26645 * C43010) / q + C43453 -
                          C43447 / q;
    const double C26469 = -(C26485 * C43006 + C43449) / q;
    const double C26725 = (3 * C26343) / C27809 -
                          (C31332 * de + C26717 * C43010) / q + C43457 -
                          C43449 / q;
    const double C26581 =
        C43383 - (C31066 * de + C26573 * C43010) / q + C43450 - C43452 / q;
    const double C26637 = -(C26645 * C43006 + C43452) / q;
    const double C26685 = -(C26717 * C43005 + C43452) / q;
    const double C43020 = C42853 / q;
    const double C43009 = C42830 / q;
    const double C43008 = C42829 / q;
    const double C43028 = C42869 / q;
    const double C8584 = -(C29221 * de + C8616 * C43005 + C42889) / q;
    const double C9913 =
        C27923 / C27809 - (C9898 * C43006) / q + C42959 - C42889 / q;
    const double C8721 = -(C29492 * de + C8753 * C43005 + C42893) / q;
    const double C8865 = -(C29763 * de + C8897 * C43005 + C42912) / q;
    const double C10104 =
        C10231 / C27809 - (C10089 * C43006) / q + C42966 - C42912 / q;
    const double C9224 =
        C42932 - (C30414 * de + C9256 * C43005) / q - (C8248 * p) / q;
    const double C9411 =
        C42932 - (C9396 * C43006) / q + C42942 - (C8896 * p) / q;
    const double C9703 =
        C42955 - (C31184 * de + C9719 * C43005) / q - (C31188 * p) / q;
    const double C9799 =
        C42955 - (C9791 * C43006) / q + C42958 - (C31364 * p) / q;
    const double C9272 = C42929 - (C9256 * C43006) / q - C42937 / q;
    const double C9366 = -(C30649 * de + C9396 * C43005 + C42937) / q;
    const double C8624 = C42847 - (C8608 * C43006) / q + C42886 - C42893 / q;
    const double C10246 = C42968 - (C10231 * C43006) / q - C42972 / q;
    const double C10588 = -(C31841 * de + C10618 * C43005 + C42972) / q;
    const double C43007 = C42828 / q;
    const double C43015 = C42846 / q;
    const double C43019 = C42852 / q;
    const double C43027 = C42868 / q;
    const double C43034 = C42880 / q;
    const double C43036 = C42885 / q;
    const double C8720 = -(C29476 * de + C8752 * C43005 + C42902) / q;
    const double C9016 =
        (3 * C8608) / C27809 - (C9008 * C43006) / q + C42922 - C42902 / q;
    const double C8864 = -(C29747 * de + C8896 * C43005 + C42911) / q;
    const double C9655 =
        C9256 / C27809 - (C9647 * C43006) / q + C42951 - C42911 / q;
    const double C9088 = C42883 - (C9080 * C43006) / q + C42926 - C42927 / q;
    const double C9136 = -(C30252 * de + C9152 * C43005 + C42927) / q;
    const double C9727 = C42954 - (C9719 * C43006) / q - C42957 / q;
    const double C9775 = -(C31317 * de + C9791 * C43005 + C42957) / q;
    const double C10201 =
        C42970 - (C31710 * de + C10231 * C43005) / q - (C8249 * p) / q;
    const double C10633 =
        C42970 - (C10618 * C43006) / q + C42967 - (C8897 * p) / q;
    const double C17035 = -(C17067 * C43005 + C43140) / q;
    const double C18364 = C33019 / C27809 -
                          (C31449 * de + C18349 * C43006) / q + C43210 -
                          C43140 / q;
    const double C17172 = -(C17204 * C43005 + C43144) / q;
    const double C17316 = -(C17348 * C43005 + C43163) / q;
    const double C18555 = C18682 / C27809 -
                          (C31579 * de + C18540 * C43006) / q + C43217 -
                          C43163 / q;
    const double C17675 = C43183 - (C17707 * C43005) / q - (C16699 * p) / q;
    const double C17862 = C43183 - (C30649 * de + C17847 * C43006) / q +
                          C43193 - (C17347 * p) / q;
    const double C18154 = C43206 - (C18170 * C43005) / q - (C36190 * p) / q;
    const double C18250 = C43206 - (C31317 * de + C18242 * C43006) / q +
                          C43209 - (C36361 * p) / q;
    const double C17075 =
        C43098 - (C29206 * de + C17059 * C43006) / q + C43137 - C43144 / q;
    const double C18697 =
        C43219 - (C31710 * de + C18682 * C43006) / q - C43223 / q;
    const double C19039 = -(C19069 * C43005 + C43223) / q;
    const double C17171 = -(C17203 * C43005 + C43153) / q;
    const double C17467 = (3 * C17059) / C27809 -
                          (C29987 * de + C17459 * C43006) / q + C43173 -
                          C43153 / q;
    const double C17539 =
        C43134 - (C30120 * de + C17531 * C43006) / q + C43177 - C43178 / q;
    const double C17587 = -(C17603 * C43005 + C43178) / q;
    const double C18652 = C43221 - (C18682 * C43005) / q - (C16700 * p) / q;
    const double C19084 = C43221 - (C31841 * de + C19069 * C43006) / q +
                          C43218 - (C17348 * p) / q;
    const double C25486 = -(C25518 * C43005 + C43388) / q;
    const double C26815 =
        C37987 / C27809 - (C26800 * C43006) / q + C43458 - C43388 / q;
    const double C25623 = -(C25655 * C43005 + C43392) / q;
    const double C25767 = -(C25799 * C43005 + C43411) / q;
    const double C27006 =
        C27133 / C27809 - (C26991 * C43006) / q + C43465 - C43411 / q;
    const double C26126 = C43431 - (C26158 * C43005) / q - (C25150 * p) / q;
    const double C26313 =
        C43431 - (C26298 * C43006) / q + C43441 - (C25798 * p) / q;
    const double C26605 = C43454 - (C26621 * C43005) / q - (C41158 * p) / q;
    const double C26701 =
        C43454 - (C26693 * C43006) / q + C43457 - (C41329 * p) / q;
    const double C25526 = C43346 - (C25510 * C43006) / q + C43385 - C43392 / q;
    const double C27148 = C43467 - (C27133 * C43006) / q - C43471 / q;
    const double C27490 = -(C27520 * C43005 + C43471) / q;
    const double C25622 = -(C25654 * C43005 + C43401) / q;
    const double C25918 =
        (3 * C25510) / C27809 - (C25910 * C43006) / q + C43421 - C43401 / q;
    const double C25990 = C43382 - (C25982 * C43006) / q + C43425 - C43426 / q;
    const double C26038 = -(C26054 * C43005 + C43426) / q;
    const double C27103 = C43469 - (C27133 * C43005) / q - (C25151 * p) / q;
    const double C27535 =
        C43469 - (C27520 * C43006) / q + C43466 - (C25799 * p) / q;
    const double C43292 = C43167 / q;
    const double C43295 = C43171 / q;
    const double C43299 = C43164 / q;
    const double C17331 = -(C17395 * C43005 + C43164) / q;
    const double C18178 =
        C43205 - (C31184 * de + C18170 * C43006) / q - C43208 / q;
    const double C18226 = -(C18242 * C43005 + C43208) / q;
    const double C17315 = -(C17347 * C43005 + C43162) / q;
    const double C18106 = C17707 / C27809 -
                          (C31051 * de + C18098 * C43006) / q + C43202 -
                          C43162 / q;
    const double C43297 = C43176 / q;
    const double C17595 = -(C17627 * C43005 + C43176) / q;
    const double C43289 = C43157 / q;
    const double C43286 = C43121 / q;
    const double C16731 = -(C28570 * de + C16747 * C43006 + C43121) / q;
    const double C43274 = C43116 / q;
    const double C43281 = C43129 / q;
    const double C16899 = -(C28926 * de + C16907 * C43006 + C43129) / q;
    const double C43279 = C43124 / q;
    const double C43271 = C43110 / q;
    const double C43275 = C43119 / q;
    const double C43284 = C43136 / q;
    const double C43282 = C43131 / q;
    const double C43263 = C43097 / q;
    const double C43267 = C43103 / q;
    const double C43259 = C43090 / q;
    const double C43256 = C43081 / q;
    const double C43288 = C43149 / q;
    const double C43296 = C43172 / q;
    const double C43290 = C43158 / q;
    const double C43287 = C43148 / q;
    const double C17332 = -(C17396 * C43005 + C43148) / q;
    const double C17723 =
        C43180 - (C30414 * de + C17707 * C43006) / q - C43188 / q;
    const double C17817 = -(C17847 * C43005 + C43188) / q;
    const double C43261 = C43092 / q;
    const double C43280 = C43125 / q;
    const double C43272 = C43111 / q;
    const double C16732 = -(C28586 * de + C16748 * C43006 + C43111) / q;
    const double C43260 = C43091 / q;
    const double C43276 = C43120 / q;
    const double C43258 = C43083 / q;
    const double C43268 = C43104 / q;
    const double C43257 = C43082 / q;
    const double C43540 = C43415 / q;
    const double C43543 = C43419 / q;
    const double C43547 = C43412 / q;
    const double C25782 = -(C25846 * C43005 + C43412) / q;
    const double C26629 = C43453 - (C26621 * C43006) / q - C43456 / q;
    const double C26677 = -(C26693 * C43005 + C43456) / q;
    const double C25766 = -(C25798 * C43005 + C43410) / q;
    const double C26557 =
        C26158 / C27809 - (C26549 * C43006) / q + C43450 - C43410 / q;
    const double C43545 = C43424 / q;
    const double C26046 = -(C26078 * C43005 + C43424) / q;
    const double C43537 = C43405 / q;
    const double C43534 = C43369 / q;
    const double C25182 = -(C25198 * C43006 + C43369) / q;
    const double C43522 = C43364 / q;
    const double C43529 = C43377 / q;
    const double C25350 = -(C25358 * C43006 + C43377) / q;
    const double C43527 = C43372 / q;
    const double C43519 = C43358 / q;
    const double C43523 = C43367 / q;
    const double C43532 = C43384 / q;
    const double C43530 = C43379 / q;
    const double C43511 = C43345 / q;
    const double C43515 = C43351 / q;
    const double C43507 = C43338 / q;
    const double C43504 = C43329 / q;
    const double C43536 = C43397 / q;
    const double C43544 = C43420 / q;
    const double C43538 = C43406 / q;
    const double C43535 = C43396 / q;
    const double C25783 = -(C25847 * C43005 + C43396) / q;
    const double C26174 = C43428 - (C26158 * C43006) / q - C43436 / q;
    const double C26268 = -(C26298 * C43005 + C43436) / q;
    const double C43509 = C43340 / q;
    const double C43528 = C43373 / q;
    const double C43520 = C43359 / q;
    const double C25183 = -(C25199 * C43006 + C43359) / q;
    const double C43508 = C43339 / q;
    const double C43524 = C43368 / q;
    const double C43506 = C43331 / q;
    const double C43516 = C43352 / q;
    const double C43505 = C43330 / q;
    const double C8137 = C42855 - (C8153 * C43006) / q - C43022;
    const double C8592 = C42890 - (C29236 * de + C8656 * C43005) / q - C43022;
    const double C8313 = C42855 - (C8297 * C43010) / q + C42862 - C43032;
    const double C9240 = C42933 - (C30444 * de + C9304 * C43005) / q - C43032;
    const double C8032 = C42822 - (C8015 * C43010) / q - C43013;
    const double C10216 = C42971 - (C31726 * de + C10276 * C43005) / q - C43013;
    const double C8024 = C42821 - (C8007 * C43010) / q - C43012;
    const double C8233 = C42866 - (C28586 * de + C8297 * C43005) / q - C43012;
    const double C8169 = C42843 - (C8153 * C43010) / q - C43024;
    const double C10074 =
        C10663 / C27809 - (C31594 * de + C10134 * C43005) / q - C43024;
    const double C8961 = C42890 - (C8945 * C43010) / q + C42909 - C43048;
    const double C9426 = C42933 - (C9441 * C43006) / q - C43048;
    const double C8680 = C42887 - (C8664 * C43010) / q - C43040;
    const double C10648 = C42971 - (C10663 * C43006) / q - C43040;
    const double C8672 = C42886 - (C8656 * C43010) / q - C43039;
    const double C10119 = C10276 / C27809 - (C10134 * C43006) / q - C43039;
    const double C8817 = C42900 - (C8801 * C43010) / q - C43042;
    const double C8929 = C42917 - (C8945 * C43006) / q - C43042;
    const double C8023 = C42820 - (C8006 * C43010) / q - C43011;
    const double C8424 =
        (3 * C8297) / C27809 - (C28926 * de + C8456 * C43005) / q - C43011;
    const double C8088 =
        C8656 / q - (C28297 * de + C8152 * C43005) / q - C43016;
    const double C8376 = C42876 - (C8384 * C43006) / q - C43016;
    const double C8136 = C8153 / q - (C8152 * C43006) / q - C43021;
    const double C9000 = C42923 - (C30002 * de + C9032 * C43005) / q - C43021;
    const double C8168 = C42842 - (C8152 * C43010) / q - C43023;
    const double C8520 = C8297 / C27809 - (C8528 * C43006) / q - C43023;
    const double C9072 =
        C8945 / C27809 - (C30135 * de + C9104 * C43005) / q - C43023;
    const double C8232 =
        C9304 / q - (C28570 * de + C8296 * C43005) / q - C43026;
    const double C8464 = C42876 - (C8456 * C43010) / q + C42879 - C43026;
    const double C8536 =
        C8153 / C27809 - (C8528 * C43010) / q + C42881 - C43038;
    const double C9639 =
        C9441 / C27809 - (C31066 * de + C9671 * C43005) / q - C43038;
    const double C8312 = C8297 / q - (C8296 * C43010) / q + C42861 - C43031;
    const double C9711 = C42956 - (C31200 * de + C9743 * C43005) / q - C43031;
    const double C8392 = C42875 - (C8384 * C43010) / q - C43033;
    const double C8496 = C42884 - (C29059 * de + C8528 * C43005) / q - C43033;
    const double C8816 = C42899 - (C8800 * C43010) / q - C43041;
    const double C9168 = (3 * C8945) / C27809 - (C9176 * C43006) / q - C43041;
    const double C9112 =
        C8656 / C27809 - (C9104 * C43010) / q + C42926 - C43051;
    const double C9663 = C9304 / C27809 - (C9671 * C43006) / q - C43051;
    const double C8928 = C9441 / q - (C8944 * C43006) / q - C43044;
    const double C9184 = C42923 - (C9176 * C43010) / q + C42928 - C43044;
    const double C8960 = C8945 / q - (C8944 * C43010) / q + C42908 - C43047;
    const double C9807 = C42956 - (C9815 * C43006) / q - C43047;
    const double C9040 = C42922 - (C9032 * C43010) / q - C43049;
    const double C9096 = C42884 - (C9104 * C43006) / q - C43049;
    const double C16588 = C43106 - (C28313 * de + C16604 * C43006) / q - C43270;
    const double C17043 = C43141 - (C17107 * C43005) / q - C43270;
    const double C16539 = C17107 / q - (C16603 * C43005) / q - C43264;
    const double C16827 = C43127 - (C28792 * de + C16835 * C43006) / q - C43264;
    const double C16587 =
        C16604 / q - (C28297 * de + C16603 * C43006) / q - C43269;
    const double C17451 = C43174 - (C17483 * C43005) / q - C43269;
    const double C25039 = C43354 - (C25055 * C43006) / q - C43518;
    const double C25494 = C43389 - (C25558 * C43005) / q - C43518;
    const double C24990 = C25558 / q - (C25054 * C43005) / q - C43512;
    const double C25278 = C43375 - (C25286 * C43006) / q - C43512;
    const double C25038 = C25055 / q - (C25054 * C43006) / q - C43517;
    const double C25902 = C43422 - (C25934 * C43005) / q - C43517;
    const double C8121 =
        C7964 / C27809 - (C8105 * C43006) / q + C42843 - C43020;
    const double C8576 =
        C8616 / C27809 - (C29206 * de + C8608 * C43005) / q - C43020;
    const double C7981 = C42822 - (C7964 * C43006) / q - C43009;
    const double C9868 =
        C29314 / C27809 - (C31449 * de + C9898 * C43005) / q - C43009;
    const double C7973 = C42821 - (C7956 * C43006) / q - C43008;
    const double C8073 = C42847 - (C28282 * de + C8105 * C43005) / q - C43008;
    const double C8265 = C42862 - (C8249 * C43006) / q - C43028;
    const double C10059 =
        C10618 / C27809 - (C31579 * de + C10089 * C43005) / q - C43028;
    const double C7972 = C42820 - (C7955 * C43006) / q - C43007;
    const double C8344 =
        (3 * C8105) / C27809 - (C28777 * de + C8360 * C43005) / q - C43007;
    const double C8072 =
        C8608 / q - (C28266 * de + C8104 * C43005) / q - C43015;
    const double C8368 =
        C7956 / C27809 - (C8360 * C43006) / q + C42875 - C43015;
    const double C8120 = C8105 / q - (C8104 * C43006) / q + C42842 - C43019;
    const double C8992 =
        C8753 / C27809 - (C29987 * de + C9008 * C43005) / q - C43019;
    const double C8264 = C42861 - (C8248 * C43006) / q - C43027;
    const double C9631 =
        C9396 / C27809 - (C31051 * de + C9647 * C43005) / q - C43027;
    const double C8440 = C42879 - (C8432 * C43006) / q - C43034;
    const double C8488 = C42883 - (C29044 * de + C8504 * C43005) / q - C43034;
    const double C8512 =
        C8249 / C27809 - (C8504 * C43006) / q + C42881 - C43036;
    const double C9064 =
        C8897 / C27809 - (C30120 * de + C9080 * C43005) / q - C43036;
    const double C17379 =
        C17892 / q - (C29778 * de + C17395 * C43006) / q - C43292;
    const double C17635 = C43174 - (C17627 * C43010) / q + C43179 - C43292;
    const double C17411 = C17396 / q - (C17395 * C43010) / q + C43159 - C43295;
    const double C18258 = C43207 - (C31332 * de + C18266 * C43006) / q - C43295;
    const double C17563 =
        C17107 / C27809 - (C17555 * C43010) / q + C43177 - C43299;
    const double C18114 =
        C17755 / C27809 - (C31066 * de + C18122 * C43006) / q - C43299;
    const double C17491 = C43173 - (C17483 * C43010) / q - C43297;
    const double C17547 = C43135 - (C30135 * de + C17555 * C43006) / q - C43297;
    const double C17267 = C43150 - (C17251 * C43010) / q - C43289;
    const double C17619 =
        (3 * C17396) / C27809 - (C30267 * de + C17627 * C43006) / q - C43289;
    const double C16987 =
        C16604 / C27809 - (C16979 * C43010) / q + C43132 - C43286;
    const double C18090 = C17892 / C27809 - (C18122 * C43005) / q - C43286;
    const double C16683 = C17755 / q - (C16747 * C43005) / q - C43274;
    const double C16915 = C43127 - (C16907 * C43010) / q + C43130 - C43274;
    const double C16843 = C43126 - (C16835 * C43010) / q - C43281;
    const double C16947 = C43135 - (C16979 * C43005) / q - C43281;
    const double C16763 = C16748 / q - (C16747 * C43010) / q + C43112 - C43279;
    const double C18162 = C43207 - (C18194 * C43005) / q - C43279;
    const double C16619 = C43093 - (C16603 * C43010) / q - C43271;
    const double C16971 =
        C16748 / C27809 - (C29059 * de + C16979 * C43006) / q - C43271;
    const double C17523 = C17396 / C27809 - (C17555 * C43005) / q - C43271;
    const double C16715 = C43112 - (C28539 * de + C16699 * C43006) / q - C43275;
    const double C18082 = C17847 / C27809 - (C18098 * C43005) / q - C43275;
    const double C16963 =
        C16700 / C27809 - (C29044 * de + C16955 * C43006) / q + C43132 - C43284;
    const double C17515 = C17348 / C27809 - (C17531 * C43005) / q - C43284;
    const double C16891 = C43130 - (C28910 * de + C16883 * C43006) / q - C43282;
    const double C16939 = C43134 - (C16955 * C43005) / q - C43282;
    const double C16523 = C17059 / q - (C16555 * C43005) / q - C43263;
    const double C16819 =
        C16407 / C27809 - (C28777 * de + C16811 * C43006) / q + C43126 - C43263;
    const double C16571 =
        C16556 / q - (C28266 * de + C16555 * C43006) / q + C43093 - C43267;
    const double C17443 = C17204 / C27809 - (C17459 * C43005) / q - C43267;
    const double C16474 = C43075 - (C16457 * C43010) / q - C43259;
    const double C16875 =
        (3 * C16748) / C27809 - (C16907 * C43005) / q - C43259;
    const double C16423 = C43075 - (C27888 * de + C16406 * C43006) / q - C43256;
    const double C16795 =
        (3 * C16556) / C27809 - (C16811 * C43005) / q - C43256;
    const double C17131 = C43138 - (C17115 * C43010) / q - C43288;
    const double C19099 = C43222 - (C31856 * de + C19114 * C43006) / q - C43288;
    const double C17412 = C43141 - (C17396 * C43010) / q + C43160 - C43296;
    const double C17877 = C43184 - (C30664 * de + C17892 * C43006) / q - C43296;
    const double C17268 = C43151 - (C17252 * C43010) / q - C43290;
    const double C17380 = C43168 - (C29794 * de + C17396 * C43006) / q - C43290;
    const double C17123 = C43137 - (C17107 * C43010) / q - C43287;
    const double C18570 =
        C18727 / C27809 - (C31594 * de + C18585 * C43006) / q - C43287;
    const double C16483 = C43077 - (C16466 * C43010) / q - C43261;
    const double C18667 = C43222 - (C18727 * C43005) / q - C43261;
    const double C16764 = C43106 - (C16748 * C43010) / q + C43113 - C43280;
    const double C17691 = C43184 - (C17755 * C43005) / q - C43280;
    const double C16620 = C43094 - (C16604 * C43010) / q - C43272;
    const double C18525 = C19114 / C27809 - (C18585 * C43005) / q - C43272;
    const double C16475 = C43076 - (C16458 * C43010) / q - C43260;
    const double C16684 = C43117 - (C16748 * C43005) / q - C43260;
    const double C16716 = C43113 - (C28555 * de + C16700 * C43006) / q - C43276;
    const double C18510 = C19069 / C27809 - (C18540 * C43005) / q - C43276;
    const double C16432 = C43077 - (C27919 * de + C16415 * C43006) / q - C43258;
    const double C18319 = C34371 / C27809 - (C18349 * C43005) / q - C43258;
    const double C16572 =
        C16415 / C27809 - (C28282 * de + C16556 * C43006) / q + C43094 - C43268;
    const double C17027 = C17067 / C27809 - (C17059 * C43005) / q - C43268;
    const double C16424 = C43076 - (C27904 * de + C16407 * C43006) / q - C43257;
    const double C16524 = C43098 - (C16556 * C43005) / q - C43257;
    const double C25830 = C26343 / q - (C25846 * C43006) / q - C43540;
    const double C26086 =
        C43422 - (C30267 * de + C26078 * C43010) / q + C43427 - C43540;
    const double C25862 =
        C25847 / q - (C29778 * de + C25846 * C43010) / q + C43407 - C43543;
    const double C26709 = C43455 - (C26717 * C43006) / q - C43543;
    const double C26014 =
        C25558 / C27809 - (C30135 * de + C26006 * C43010) / q + C43425 - C43547;
    const double C26565 = C26206 / C27809 - (C26573 * C43006) / q - C43547;
    const double C25942 = C43421 - (C30002 * de + C25934 * C43010) / q - C43545;
    const double C25998 = C43383 - (C26006 * C43006) / q - C43545;
    const double C25718 = C43398 - (C29507 * de + C25702 * C43010) / q - C43537;
    const double C26070 =
        (3 * C25847) / C27809 - (C26078 * C43006) / q - C43537;
    const double C25438 =
        C25055 / C27809 - (C29059 * de + C25430 * C43010) / q + C43380 - C43534;
    const double C26541 = C26343 / C27809 - (C26573 * C43005) / q - C43534;
    const double C25134 = C26206 / q - (C25198 * C43005) / q - C43522;
    const double C25366 =
        C43375 - (C28926 * de + C25358 * C43010) / q + C43378 - C43522;
    const double C25294 = C43374 - (C28792 * de + C25286 * C43010) / q - C43529;
    const double C25398 = C43383 - (C25430 * C43005) / q - C43529;
    const double C25214 =
        C25199 / q - (C28570 * de + C25198 * C43010) / q + C43360 - C43527;
    const double C26613 = C43455 - (C26645 * C43005) / q - C43527;
    const double C25070 = C43341 - (C28297 * de + C25054 * C43010) / q - C43519;
    const double C25422 = C25199 / C27809 - (C25430 * C43006) / q - C43519;
    const double C25974 = C25847 / C27809 - (C26006 * C43005) / q - C43519;
    const double C25166 = C43360 - (C25150 * C43006) / q - C43523;
    const double C26533 = C26298 / C27809 - (C26549 * C43005) / q - C43523;
    const double C25414 =
        C25151 / C27809 - (C25406 * C43006) / q + C43380 - C43532;
    const double C25966 = C25799 / C27809 - (C25982 * C43005) / q - C43532;
    const double C25342 = C43378 - (C25334 * C43006) / q - C43530;
    const double C25390 = C43382 - (C25406 * C43005) / q - C43530;
    const double C24974 = C25510 / q - (C25006 * C43005) / q - C43511;
    const double C25270 =
        C24858 / C27809 - (C25262 * C43006) / q + C43374 - C43511;
    const double C25022 = C25007 / q - (C25006 * C43006) / q + C43341 - C43515;
    const double C25894 = C25655 / C27809 - (C25910 * C43005) / q - C43515;
    const double C24925 = C43323 - (C27935 * de + C24908 * C43010) / q - C43507;
    const double C25326 =
        (3 * C25199) / C27809 - (C25358 * C43005) / q - C43507;
    const double C24874 = C43323 - (C24857 * C43006) / q - C43504;
    const double C25246 =
        (3 * C25007) / C27809 - (C25262 * C43005) / q - C43504;
    const double C25582 = C43386 - (C29251 * de + C25566 * C43010) / q - C43536;
    const double C27550 = C43470 - (C27565 * C43006) / q - C43536;
    const double C25863 =
        C43389 - (C29794 * de + C25847 * C43010) / q + C43408 - C43544;
    const double C26328 = C43432 - (C26343 * C43006) / q - C43544;
    const double C25719 = C43399 - (C29523 * de + C25703 * C43010) / q - C43538;
    const double C25831 = C43416 - (C25847 * C43006) / q - C43538;
    const double C25574 = C43385 - (C29236 * de + C25558 * C43010) / q - C43535;
    const double C27021 = C27178 / C27809 - (C27036 * C43006) / q - C43535;
    const double C24934 = C43325 - (C27966 * de + C24917 * C43010) / q - C43509;
    const double C27118 = C43470 - (C27178 * C43005) / q - C43509;
    const double C25215 =
        C43354 - (C28586 * de + C25199 * C43010) / q + C43361 - C43528;
    const double C26142 = C43432 - (C26206 * C43005) / q - C43528;
    const double C25071 = C43342 - (C28313 * de + C25055 * C43010) / q - C43520;
    const double C26976 = C27565 / C27809 - (C27036 * C43005) / q - C43520;
    const double C24926 = C43324 - (C27951 * de + C24909 * C43010) / q - C43508;
    const double C25135 = C43365 - (C25199 * C43005) / q - C43508;
    const double C25167 = C43361 - (C25151 * C43006) / q - C43524;
    const double C26961 = C27520 / C27809 - (C26991 * C43005) / q - C43524;
    const double C24883 = C43325 - (C24866 * C43006) / q - C43506;
    const double C26770 = C39339 / C27809 - (C26800 * C43005) / q - C43506;
    const double C25023 =
        C24866 / C27809 - (C25007 * C43006) / q + C43342 - C43516;
    const double C25478 = C25518 / C27809 - (C25510 * C43005) / q - C43516;
    const double C24875 = C43324 - (C24858 * C43006) / q - C43505;
    const double C24975 = C43346 - (C25007 * C43005) / q - C43505;
    etx[0] = C7887;
    etx[1] = C7888;
    etx[2] = C7896;
    etx[3] = C7904;
    etx[4] = C7905;
    etx[5] = C7913;
    etx[6] = C7921;
    etx[7] = C7922;
    etx[8] = C7930;
    etx[9] = C7938;
    etx[10] = C7939;
    etx[11] = C7947;
    etx[12] = C7955;
    etx[13] = C7956;
    etx[14] = C7964;
    etx[15] = C7972;
    etx[16] = C7973;
    etx[17] = C7981;
    etx[18] = C7989;
    etx[19] = C7990;
    etx[20] = C7998;
    etx[21] = C8006;
    etx[22] = C8007;
    etx[23] = C8015;
    etx[24] = C8023;
    etx[25] = C8024;
    etx[26] = C8032;
    etx[27] = C8040;
    etx[28] = C8041;
    etx[29] = C8056;
    etx[30] = C8057;
    etx[31] = C8072;
    etx[32] = C8073;
    etx[33] = C8088;
    etx[34] = C8089;
    etx[35] = C8104;
    etx[36] = C8105;
    etx[37] = C8120;
    etx[38] = C8121;
    etx[39] = C8136;
    etx[40] = C8137;
    etx[41] = C8152;
    etx[42] = C8153;
    etx[43] = C8168;
    etx[44] = C8169;
    etx[45] = C8184;
    etx[46] = C8185;
    etx[47] = C8200;
    etx[48] = C8201;
    etx[49] = C8216;
    etx[50] = C8217;
    etx[51] = C8232;
    etx[52] = C8233;
    etx[53] = C8248;
    etx[54] = C8249;
    etx[55] = C8264;
    etx[56] = C8265;
    etx[57] = C8280;
    etx[58] = C8281;
    etx[59] = C8296;
    etx[60] = C8297;
    etx[61] = C8312;
    etx[62] = C8313;
    etx[63] = C8328;
    etx[64] = C8336;
    etx[65] = C8344;
    etx[66] = C8352;
    etx[67] = C8360;
    etx[68] = C8368;
    etx[69] = C8376;
    etx[70] = C8384;
    etx[71] = C8392;
    etx[72] = C8400;
    etx[73] = C8408;
    etx[74] = C8416;
    etx[75] = C8424;
    etx[76] = C8432;
    etx[77] = C8440;
    etx[78] = C8448;
    etx[79] = C8456;
    etx[80] = C8464;
    etx[81] = C8472;
    etx[82] = C8480;
    etx[83] = C8488;
    etx[84] = C8496;
    etx[85] = C8504;
    etx[86] = C8512;
    etx[87] = C8520;
    etx[88] = C8528;
    etx[89] = C8536;
    etx[90] = C8544;
    etx[91] = C8552;
    etx[92] = C8560;
    etx[93] = C8568;
    etx[94] = C8576;
    etx[95] = C8584;
    etx[96] = C8592;
    etx[97] = C8600;
    etx[98] = C8608;
    etx[99] = C8616;
    etx[100] = C8624;
    etx[101] = C8632;
    etx[102] = C8640;
    etx[103] = C8648;
    etx[104] = C8656;
    etx[105] = C8664;
    etx[106] = C8672;
    etx[107] = C8680;
    etx[108] = C8688;
    etx[109] = C8689;
    etx[110] = C8704;
    etx[111] = C8705;
    etx[112] = C8720;
    etx[113] = C8721;
    etx[114] = C8736;
    etx[115] = C8737;
    etx[116] = C8752;
    etx[117] = C8753;
    etx[118] = C8768;
    etx[119] = C8769;
    etx[120] = C8784;
    etx[121] = C8785;
    etx[122] = C8800;
    etx[123] = C8801;
    etx[124] = C8816;
    etx[125] = C8817;
    etx[126] = C8832;
    etx[127] = C8833;
    etx[128] = C8848;
    etx[129] = C8849;
    etx[130] = C8864;
    etx[131] = C8865;
    etx[132] = C8880;
    etx[133] = C8881;
    etx[134] = C8896;
    etx[135] = C8897;
    etx[136] = C8912;
    etx[137] = C8913;
    etx[138] = C8928;
    etx[139] = C8929;
    etx[140] = C8944;
    etx[141] = C8945;
    etx[142] = C8960;
    etx[143] = C8961;
    etx[144] = C8976;
    etx[145] = C8984;
    etx[146] = C8992;
    etx[147] = C9000;
    etx[148] = C9008;
    etx[149] = C9016;
    etx[150] = C9024;
    etx[151] = C9032;
    etx[152] = C9040;
    etx[153] = C9048;
    etx[154] = C9056;
    etx[155] = C9064;
    etx[156] = C9072;
    etx[157] = C9080;
    etx[158] = C9088;
    etx[159] = C9096;
    etx[160] = C9104;
    etx[161] = C9112;
    etx[162] = C9120;
    etx[163] = C9128;
    etx[164] = C9136;
    etx[165] = C9144;
    etx[166] = C9152;
    etx[167] = C9160;
    etx[168] = C9168;
    etx[169] = C9176;
    etx[170] = C9184;
    etx[171] = C9192;
    etx[172] = C9200;
    etx[173] = C9208;
    etx[174] = C9216;
    etx[175] = C9224;
    etx[176] = C9232;
    etx[177] = C9240;
    etx[178] = C9248;
    etx[179] = C9256;
    etx[180] = C9264;
    etx[181] = C9272;
    etx[182] = C9280;
    etx[183] = C9288;
    etx[184] = C9296;
    etx[185] = C9304;
    etx[186] = C9312;
    etx[187] = C9320;
    etx[188] = C9328;
    etx[189] = C9336;
    etx[190] = C9351;
    etx[191] = C9366;
    etx[192] = C9381;
    etx[193] = C9396;
    etx[194] = C9411;
    etx[195] = C9426;
    etx[196] = C9441;
    etx[197] = C9456;
    etx[198] = C9471;
    etx[199] = C9472;
    etx[200] = C9487;
    etx[201] = C9488;
    etx[202] = C9503;
    etx[203] = C9504;
    etx[204] = C9519;
    etx[205] = C9520;
    etx[206] = C9535;
    etx[207] = C9536;
    etx[208] = C9551;
    etx[209] = C9552;
    etx[210] = C9567;
    etx[211] = C9568;
    etx[212] = C9583;
    etx[213] = C9584;
    etx[214] = C9599;
    etx[215] = C9600;
    etx[216] = C9615;
    etx[217] = C9623;
    etx[218] = C9631;
    etx[219] = C9639;
    etx[220] = C9647;
    etx[221] = C9655;
    etx[222] = C9663;
    etx[223] = C9671;
    etx[224] = C9679;
    etx[225] = C9687;
    etx[226] = C9695;
    etx[227] = C9703;
    etx[228] = C9711;
    etx[229] = C9719;
    etx[230] = C9727;
    etx[231] = C9735;
    etx[232] = C9743;
    etx[233] = C9751;
    etx[234] = C9759;
    etx[235] = C9767;
    etx[236] = C9775;
    etx[237] = C9783;
    etx[238] = C9791;
    etx[239] = C9799;
    etx[240] = C9807;
    etx[241] = C9815;
    etx[242] = C9823;
    etx[243] = C9838;
    etx[244] = C9853;
    etx[245] = C9868;
    etx[246] = C9883;
    etx[247] = C9898;
    etx[248] = C9913;
    etx[249] = C9928;
    etx[250] = C9943;
    etx[251] = C9958;
    etx[252] = C10029;
    etx[253] = C10044;
    etx[254] = C10059;
    etx[255] = C10074;
    etx[256] = C10089;
    etx[257] = C10104;
    etx[258] = C10119;
    etx[259] = C10134;
    etx[260] = C10149;
    etx[261] = C10171;
    etx[262] = C10186;
    etx[263] = C10201;
    etx[264] = C10216;
    etx[265] = C10231;
    etx[266] = C10246;
    etx[267] = C10261;
    etx[268] = C10276;
    etx[269] = C10291;
    etx[270] = C10558;
    etx[271] = C10573;
    etx[272] = C10588;
    etx[273] = C10603;
    etx[274] = C10618;
    etx[275] = C10633;
    etx[276] = C10648;
    etx[277] = C10663;
    etx[278] = C10678;
    ety[0] = C16338;
    ety[1] = C16339;
    ety[2] = C16347;
    ety[3] = C16355;
    ety[4] = C16356;
    ety[5] = C16364;
    ety[6] = C16372;
    ety[7] = C16373;
    ety[8] = C16381;
    ety[9] = C16389;
    ety[10] = C16390;
    ety[11] = C16398;
    ety[12] = C16406;
    ety[13] = C16407;
    ety[14] = C16415;
    ety[15] = C16423;
    ety[16] = C16424;
    ety[17] = C16432;
    ety[18] = C16440;
    ety[19] = C16441;
    ety[20] = C16449;
    ety[21] = C16457;
    ety[22] = C16458;
    ety[23] = C16466;
    ety[24] = C16474;
    ety[25] = C16475;
    ety[26] = C16483;
    ety[27] = C16491;
    ety[28] = C16492;
    ety[29] = C16507;
    ety[30] = C16508;
    ety[31] = C16523;
    ety[32] = C16524;
    ety[33] = C16539;
    ety[34] = C16540;
    ety[35] = C16555;
    ety[36] = C16556;
    ety[37] = C16571;
    ety[38] = C16572;
    ety[39] = C16587;
    ety[40] = C16588;
    ety[41] = C16603;
    ety[42] = C16604;
    ety[43] = C16619;
    ety[44] = C16620;
    ety[45] = C16635;
    ety[46] = C16636;
    ety[47] = C16651;
    ety[48] = C16652;
    ety[49] = C16667;
    ety[50] = C16668;
    ety[51] = C16683;
    ety[52] = C16684;
    ety[53] = C16699;
    ety[54] = C16700;
    ety[55] = C16715;
    ety[56] = C16716;
    ety[57] = C16731;
    ety[58] = C16732;
    ety[59] = C16747;
    ety[60] = C16748;
    ety[61] = C16763;
    ety[62] = C16764;
    ety[63] = C16779;
    ety[64] = C16787;
    ety[65] = C16795;
    ety[66] = C16803;
    ety[67] = C16811;
    ety[68] = C16819;
    ety[69] = C16827;
    ety[70] = C16835;
    ety[71] = C16843;
    ety[72] = C16851;
    ety[73] = C16859;
    ety[74] = C16867;
    ety[75] = C16875;
    ety[76] = C16883;
    ety[77] = C16891;
    ety[78] = C16899;
    ety[79] = C16907;
    ety[80] = C16915;
    ety[81] = C16923;
    ety[82] = C16931;
    ety[83] = C16939;
    ety[84] = C16947;
    ety[85] = C16955;
    ety[86] = C16963;
    ety[87] = C16971;
    ety[88] = C16979;
    ety[89] = C16987;
    ety[90] = C16995;
    ety[91] = C17003;
    ety[92] = C17011;
    ety[93] = C17019;
    ety[94] = C17027;
    ety[95] = C17035;
    ety[96] = C17043;
    ety[97] = C17051;
    ety[98] = C17059;
    ety[99] = C17067;
    ety[100] = C17075;
    ety[101] = C17083;
    ety[102] = C17091;
    ety[103] = C17099;
    ety[104] = C17107;
    ety[105] = C17115;
    ety[106] = C17123;
    ety[107] = C17131;
    ety[108] = C17139;
    ety[109] = C17140;
    ety[110] = C17155;
    ety[111] = C17156;
    ety[112] = C17171;
    ety[113] = C17172;
    ety[114] = C17187;
    ety[115] = C17188;
    ety[116] = C17203;
    ety[117] = C17204;
    ety[118] = C17219;
    ety[119] = C17220;
    ety[120] = C17235;
    ety[121] = C17236;
    ety[122] = C17251;
    ety[123] = C17252;
    ety[124] = C17267;
    ety[125] = C17268;
    ety[126] = C17283;
    ety[127] = C17284;
    ety[128] = C17299;
    ety[129] = C17300;
    ety[130] = C17315;
    ety[131] = C17316;
    ety[132] = C17331;
    ety[133] = C17332;
    ety[134] = C17347;
    ety[135] = C17348;
    ety[136] = C17363;
    ety[137] = C17364;
    ety[138] = C17379;
    ety[139] = C17380;
    ety[140] = C17395;
    ety[141] = C17396;
    ety[142] = C17411;
    ety[143] = C17412;
    ety[144] = C17427;
    ety[145] = C17435;
    ety[146] = C17443;
    ety[147] = C17451;
    ety[148] = C17459;
    ety[149] = C17467;
    ety[150] = C17475;
    ety[151] = C17483;
    ety[152] = C17491;
    ety[153] = C17499;
    ety[154] = C17507;
    ety[155] = C17515;
    ety[156] = C17523;
    ety[157] = C17531;
    ety[158] = C17539;
    ety[159] = C17547;
    ety[160] = C17555;
    ety[161] = C17563;
    ety[162] = C17571;
    ety[163] = C17579;
    ety[164] = C17587;
    ety[165] = C17595;
    ety[166] = C17603;
    ety[167] = C17611;
    ety[168] = C17619;
    ety[169] = C17627;
    ety[170] = C17635;
    ety[171] = C17643;
    ety[172] = C17651;
    ety[173] = C17659;
    ety[174] = C17667;
    ety[175] = C17675;
    ety[176] = C17683;
    ety[177] = C17691;
    ety[178] = C17699;
    ety[179] = C17707;
    ety[180] = C17715;
    ety[181] = C17723;
    ety[182] = C17731;
    ety[183] = C17739;
    ety[184] = C17747;
    ety[185] = C17755;
    ety[186] = C17763;
    ety[187] = C17771;
    ety[188] = C17779;
    ety[189] = C17787;
    ety[190] = C17802;
    ety[191] = C17817;
    ety[192] = C17832;
    ety[193] = C17847;
    ety[194] = C17862;
    ety[195] = C17877;
    ety[196] = C17892;
    ety[197] = C17907;
    ety[198] = C17922;
    ety[199] = C17923;
    ety[200] = C17938;
    ety[201] = C17939;
    ety[202] = C17954;
    ety[203] = C17955;
    ety[204] = C17970;
    ety[205] = C17971;
    ety[206] = C17986;
    ety[207] = C17987;
    ety[208] = C18002;
    ety[209] = C18003;
    ety[210] = C18018;
    ety[211] = C18019;
    ety[212] = C18034;
    ety[213] = C18035;
    ety[214] = C18050;
    ety[215] = C18051;
    ety[216] = C18066;
    ety[217] = C18074;
    ety[218] = C18082;
    ety[219] = C18090;
    ety[220] = C18098;
    ety[221] = C18106;
    ety[222] = C18114;
    ety[223] = C18122;
    ety[224] = C18130;
    ety[225] = C18138;
    ety[226] = C18146;
    ety[227] = C18154;
    ety[228] = C18162;
    ety[229] = C18170;
    ety[230] = C18178;
    ety[231] = C18186;
    ety[232] = C18194;
    ety[233] = C18202;
    ety[234] = C18210;
    ety[235] = C18218;
    ety[236] = C18226;
    ety[237] = C18234;
    ety[238] = C18242;
    ety[239] = C18250;
    ety[240] = C18258;
    ety[241] = C18266;
    ety[242] = C18274;
    ety[243] = C18289;
    ety[244] = C18304;
    ety[245] = C18319;
    ety[246] = C18334;
    ety[247] = C18349;
    ety[248] = C18364;
    ety[249] = C18379;
    ety[250] = C18394;
    ety[251] = C18409;
    ety[252] = C18480;
    ety[253] = C18495;
    ety[254] = C18510;
    ety[255] = C18525;
    ety[256] = C18540;
    ety[257] = C18555;
    ety[258] = C18570;
    ety[259] = C18585;
    ety[260] = C18600;
    ety[261] = C18622;
    ety[262] = C18637;
    ety[263] = C18652;
    ety[264] = C18667;
    ety[265] = C18682;
    ety[266] = C18697;
    ety[267] = C18712;
    ety[268] = C18727;
    ety[269] = C18742;
    ety[270] = C19009;
    ety[271] = C19024;
    ety[272] = C19039;
    ety[273] = C19054;
    ety[274] = C19069;
    ety[275] = C19084;
    ety[276] = C19099;
    ety[277] = C19114;
    ety[278] = C19129;
    etz[0] = C24789;
    etz[1] = C24790;
    etz[2] = C24798;
    etz[3] = C24806;
    etz[4] = C24807;
    etz[5] = C24815;
    etz[6] = C24823;
    etz[7] = C24824;
    etz[8] = C24832;
    etz[9] = C24840;
    etz[10] = C24841;
    etz[11] = C24849;
    etz[12] = C24857;
    etz[13] = C24858;
    etz[14] = C24866;
    etz[15] = C24874;
    etz[16] = C24875;
    etz[17] = C24883;
    etz[18] = C24891;
    etz[19] = C24892;
    etz[20] = C24900;
    etz[21] = C24908;
    etz[22] = C24909;
    etz[23] = C24917;
    etz[24] = C24925;
    etz[25] = C24926;
    etz[26] = C24934;
    etz[27] = C24942;
    etz[28] = C24943;
    etz[29] = C24958;
    etz[30] = C24959;
    etz[31] = C24974;
    etz[32] = C24975;
    etz[33] = C24990;
    etz[34] = C24991;
    etz[35] = C25006;
    etz[36] = C25007;
    etz[37] = C25022;
    etz[38] = C25023;
    etz[39] = C25038;
    etz[40] = C25039;
    etz[41] = C25054;
    etz[42] = C25055;
    etz[43] = C25070;
    etz[44] = C25071;
    etz[45] = C25086;
    etz[46] = C25087;
    etz[47] = C25102;
    etz[48] = C25103;
    etz[49] = C25118;
    etz[50] = C25119;
    etz[51] = C25134;
    etz[52] = C25135;
    etz[53] = C25150;
    etz[54] = C25151;
    etz[55] = C25166;
    etz[56] = C25167;
    etz[57] = C25182;
    etz[58] = C25183;
    etz[59] = C25198;
    etz[60] = C25199;
    etz[61] = C25214;
    etz[62] = C25215;
    etz[63] = C25230;
    etz[64] = C25238;
    etz[65] = C25246;
    etz[66] = C25254;
    etz[67] = C25262;
    etz[68] = C25270;
    etz[69] = C25278;
    etz[70] = C25286;
    etz[71] = C25294;
    etz[72] = C25302;
    etz[73] = C25310;
    etz[74] = C25318;
    etz[75] = C25326;
    etz[76] = C25334;
    etz[77] = C25342;
    etz[78] = C25350;
    etz[79] = C25358;
    etz[80] = C25366;
    etz[81] = C25374;
    etz[82] = C25382;
    etz[83] = C25390;
    etz[84] = C25398;
    etz[85] = C25406;
    etz[86] = C25414;
    etz[87] = C25422;
    etz[88] = C25430;
    etz[89] = C25438;
    etz[90] = C25446;
    etz[91] = C25454;
    etz[92] = C25462;
    etz[93] = C25470;
    etz[94] = C25478;
    etz[95] = C25486;
    etz[96] = C25494;
    etz[97] = C25502;
    etz[98] = C25510;
    etz[99] = C25518;
    etz[100] = C25526;
    etz[101] = C25534;
    etz[102] = C25542;
    etz[103] = C25550;
    etz[104] = C25558;
    etz[105] = C25566;
    etz[106] = C25574;
    etz[107] = C25582;
    etz[108] = C25590;
    etz[109] = C25591;
    etz[110] = C25606;
    etz[111] = C25607;
    etz[112] = C25622;
    etz[113] = C25623;
    etz[114] = C25638;
    etz[115] = C25639;
    etz[116] = C25654;
    etz[117] = C25655;
    etz[118] = C25670;
    etz[119] = C25671;
    etz[120] = C25686;
    etz[121] = C25687;
    etz[122] = C25702;
    etz[123] = C25703;
    etz[124] = C25718;
    etz[125] = C25719;
    etz[126] = C25734;
    etz[127] = C25735;
    etz[128] = C25750;
    etz[129] = C25751;
    etz[130] = C25766;
    etz[131] = C25767;
    etz[132] = C25782;
    etz[133] = C25783;
    etz[134] = C25798;
    etz[135] = C25799;
    etz[136] = C25814;
    etz[137] = C25815;
    etz[138] = C25830;
    etz[139] = C25831;
    etz[140] = C25846;
    etz[141] = C25847;
    etz[142] = C25862;
    etz[143] = C25863;
    etz[144] = C25878;
    etz[145] = C25886;
    etz[146] = C25894;
    etz[147] = C25902;
    etz[148] = C25910;
    etz[149] = C25918;
    etz[150] = C25926;
    etz[151] = C25934;
    etz[152] = C25942;
    etz[153] = C25950;
    etz[154] = C25958;
    etz[155] = C25966;
    etz[156] = C25974;
    etz[157] = C25982;
    etz[158] = C25990;
    etz[159] = C25998;
    etz[160] = C26006;
    etz[161] = C26014;
    etz[162] = C26022;
    etz[163] = C26030;
    etz[164] = C26038;
    etz[165] = C26046;
    etz[166] = C26054;
    etz[167] = C26062;
    etz[168] = C26070;
    etz[169] = C26078;
    etz[170] = C26086;
    etz[171] = C26094;
    etz[172] = C26102;
    etz[173] = C26110;
    etz[174] = C26118;
    etz[175] = C26126;
    etz[176] = C26134;
    etz[177] = C26142;
    etz[178] = C26150;
    etz[179] = C26158;
    etz[180] = C26166;
    etz[181] = C26174;
    etz[182] = C26182;
    etz[183] = C26190;
    etz[184] = C26198;
    etz[185] = C26206;
    etz[186] = C26214;
    etz[187] = C26222;
    etz[188] = C26230;
    etz[189] = C26238;
    etz[190] = C26253;
    etz[191] = C26268;
    etz[192] = C26283;
    etz[193] = C26298;
    etz[194] = C26313;
    etz[195] = C26328;
    etz[196] = C26343;
    etz[197] = C26358;
    etz[198] = C26373;
    etz[199] = C26374;
    etz[200] = C26389;
    etz[201] = C26390;
    etz[202] = C26405;
    etz[203] = C26406;
    etz[204] = C26421;
    etz[205] = C26422;
    etz[206] = C26437;
    etz[207] = C26438;
    etz[208] = C26453;
    etz[209] = C26454;
    etz[210] = C26469;
    etz[211] = C26470;
    etz[212] = C26485;
    etz[213] = C26486;
    etz[214] = C26501;
    etz[215] = C26502;
    etz[216] = C26517;
    etz[217] = C26525;
    etz[218] = C26533;
    etz[219] = C26541;
    etz[220] = C26549;
    etz[221] = C26557;
    etz[222] = C26565;
    etz[223] = C26573;
    etz[224] = C26581;
    etz[225] = C26589;
    etz[226] = C26597;
    etz[227] = C26605;
    etz[228] = C26613;
    etz[229] = C26621;
    etz[230] = C26629;
    etz[231] = C26637;
    etz[232] = C26645;
    etz[233] = C26653;
    etz[234] = C26661;
    etz[235] = C26669;
    etz[236] = C26677;
    etz[237] = C26685;
    etz[238] = C26693;
    etz[239] = C26701;
    etz[240] = C26709;
    etz[241] = C26717;
    etz[242] = C26725;
    etz[243] = C26740;
    etz[244] = C26755;
    etz[245] = C26770;
    etz[246] = C26785;
    etz[247] = C26800;
    etz[248] = C26815;
    etz[249] = C26830;
    etz[250] = C26845;
    etz[251] = C26860;
    etz[252] = C26931;
    etz[253] = C26946;
    etz[254] = C26961;
    etz[255] = C26976;
    etz[256] = C26991;
    etz[257] = C27006;
    etz[258] = C27021;
    etz[259] = C27036;
    etz[260] = C27051;
    etz[261] = C27073;
    etz[262] = C27088;
    etz[263] = C27103;
    etz[264] = C27118;
    etz[265] = C27133;
    etz[266] = C27148;
    etz[267] = C27163;
    etz[268] = C27178;
    etz[269] = C27193;
    etz[270] = C27460;
    etz[271] = C27475;
    etz[272] = C27490;
    etz[273] = C27505;
    etz[274] = C27520;
    etz[275] = C27535;
    etz[276] = C27550;
    etz[277] = C27565;
    etz[278] = C27580;
}
