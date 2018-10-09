/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_1_et(const double ae,
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
    const double C14485 = g[204];
    const double C14504 = g[205];
    const double C14522 = g[206];
    const double C14635 = g[207];
    const double C14651 = g[208];
    const double C14666 = g[209];
    const double C14682 = g[210];
    const double C14698 = g[211];
    const double C14713 = g[212];
    const double C14774 = g[213];
    const double C14793 = g[214];
    const double C14873 = g[215];
    const double C14890 = g[216];
    const double C14906 = g[217];
    const double C14923 = g[218];
    const double C14968 = g[219];
    const double C14987 = g[220];
    const double C15068 = g[221];
    const double C15085 = g[222];
    const double C15102 = g[223];
    const double C15119 = g[224];
    const double C15164 = g[225];
    const double C15210 = g[226];
    const double C15225 = g[227];
    const double C15254 = g[228];
    const double C15300 = g[229];
    const double C15316 = g[230];
    const double C15345 = g[231];
    const double C15393 = g[232];
    const double C15409 = g[233];
    const double C15439 = g[234];
    const double C15456 = g[235];
    const double C15535 = g[236];
    const double C15550 = g[237];
    const double C15565 = g[238];
    const double C15580 = g[239];
    const double C15626 = g[240];
    const double C15644 = g[241];
    const double C15723 = g[242];
    const double C15739 = g[243];
    const double C15754 = g[244];
    const double C15770 = g[245];
    const double C15814 = g[246];
    const double C15832 = g[247];
    const double C15914 = g[248];
    const double C15930 = g[249];
    const double C15946 = g[250];
    const double C15962 = g[251];
    const double C16008 = g[252];
    const double C16054 = g[253];
    const double C16069 = g[254];
    const double C16098 = g[255];
    const double C16144 = g[256];
    const double C16159 = g[257];
    const double C16188 = g[258];
    const double C16235 = g[259];
    const double C16250 = g[260];
    const double C16279 = g[261];
    const double C16296 = g[262];
    const double C16374 = g[263];
    const double C16389 = g[264];
    const double C16404 = g[265];
    const double C16419 = g[266];
    const double C16463 = g[267];
    const double C16510 = g[268];
    const double C16525 = g[269];
    const double C16554 = g[270];
    const double C16572 = g[271];
    const double C16652 = g[272];
    const double C16668 = g[273];
    const double C16684 = g[274];
    const double C16700 = g[275];
    const double C16744 = g[276];
    const double C16790 = g[277];
    const double C16805 = g[278];
    const double C16834 = g[279];
    const double C16880 = g[280];
    const double C16896 = g[281];
    const double C16925 = g[282];
    const double C16972 = g[283];
    const double C16987 = g[284];
    const double C17016 = g[285];
    const double C17061 = g[286];
    const double C17076 = g[287];
    const double C17105 = g[288];
    const double C17150 = g[289];
    const double C17165 = g[290];
    const double C17194 = g[291];
    const double C17239 = g[292];
    const double C17255 = g[293];
    const double C17284 = g[294];
    const double C17328 = g[295];
    const double C17343 = g[296];
    const double C17372 = g[297];
    const double C17387 = g[298];
    const double C17403 = g[299];
    const double C17419 = g[300];
    const double C17434 = g[301];
    const double C17726 = g[302];
    const double C17741 = g[303];
    const double C17756 = g[304];
    const double C17771 = g[305];
    const double C17787 = g[306];
    const double C17802 = g[307];
    const double C17993 = g[308];
    const double C18008 = g[309];
    const double C18023 = g[310];
    const double C18038 = g[311];
    const double C18054 = g[312];
    const double C18069 = g[313];
    const double C18285 = g[314];
    const double C18314 = g[315];
    const double C18357 = g[316];
    const double C18372 = g[317];
    const double C18387 = g[318];
    const double C18444 = g[319];
    const double C18601 = g[320];
    const double C18616 = g[321];
    const double C18631 = g[322];
    const double C18646 = g[323];
    const double C18781 = g[324];
    const double C18796 = g[325];
    const double C18811 = g[326];
    const double C18826 = g[327];
    const double C19042 = g[328];
    const double C19071 = g[329];
    const double C19100 = g[330];
    const double C19115 = g[331];
    const double C19144 = g[332];
    const double C19258 = g[333];
    const double C19273 = g[334];
    const double C19303 = g[335];
    const double C19318 = g[336];
    const double C19333 = g[337];
    const double C19348 = g[338];
    const double C19508 = g[339];
    const double C19537 = g[340];
    const double C19580 = g[341];
    const double C19595 = g[342];
    const double C19624 = g[343];
    const double C19639 = g[344];
    const double C19654 = g[345];
    const double C23753 = g[346];
    const double C23943 = g[347];
    const double C24201 = g[348];
    const double C24442 = g[349];
    const double C24672 = g[350];
    const double C29556 = g[351];
    const double C14491 = vrx[0];
    const double C14510 = vrx[1];
    const double C14527 = vrx[2];
    const double C14780 = vrx[3];
    const double C14799 = vrx[4];
    const double C14974 = vrx[5];
    const double C14993 = vrx[6];
    const double C15168 = vrx[7];
    const double C15258 = vrx[8];
    const double C15351 = vrx[9];
    const double C15444 = vrx[10];
    const double C15460 = vrx[11];
    const double C15630 = vrx[12];
    const double C15648 = vrx[13];
    const double C15818 = vrx[14];
    const double C15836 = vrx[15];
    const double C16012 = vrx[16];
    const double C16102 = vrx[17];
    const double C16192 = vrx[18];
    const double C16284 = vrx[19];
    const double C16300 = vrx[20];
    const double C16467 = vrx[21];
    const double C16558 = vrx[22];
    const double C16576 = vrx[23];
    const double C16748 = vrx[24];
    const double C16838 = vrx[25];
    const double C16929 = vrx[26];
    const double C17021 = vrx[27];
    const double C17110 = vrx[28];
    const double C17199 = vrx[29];
    const double C17288 = vrx[30];
    const double C17391 = vrx[31];
    const double C17407 = vrx[32];
    const double C17423 = vrx[33];
    const double C17438 = vrx[34];
    const double C17453 = vrx[35];
    const double C17468 = vrx[36];
    const double C17497 = vrx[37];
    const double C17540 = vrx[38];
    const double C17555 = vrx[39];
    const double C17584 = vrx[40];
    const double C17627 = vrx[41];
    const double C17656 = vrx[42];
    const double C17685 = vrx[43];
    const double C17700 = vrx[44];
    const double C17775 = vrx[45];
    const double C17820 = vrx[46];
    const double C17835 = vrx[47];
    const double C17850 = vrx[48];
    const double C17865 = vrx[49];
    const double C17880 = vrx[50];
    const double C17909 = vrx[51];
    const double C17952 = vrx[52];
    const double C17981 = vrx[53];
    const double C18042 = vrx[54];
    const double C18143 = vrx[55];
    const double C18158 = vrx[56];
    const double C18187 = vrx[57];
    const double C18244 = vrx[58];
    const double C18273 = vrx[59];
    const double C18462 = vrx[60];
    const double C18518 = vrx[61];
    const double C18561 = vrx[62];
    const double C18664 = vrx[63];
    const double C18679 = vrx[64];
    const double C18694 = vrx[65];
    const double C18709 = vrx[66];
    const double C18724 = vrx[67];
    const double C18739 = vrx[68];
    const double C18754 = vrx[69];
    const double C18769 = vrx[70];
    const double C18928 = vrx[71];
    const double C18943 = vrx[72];
    const double C18958 = vrx[73];
    const double C18987 = vrx[74];
    const double C19016 = vrx[75];
    const double C19190 = vrx[76];
    const double C19246 = vrx[77];
    const double C19291 = vrx[78];
    const double C19422 = vrx[79];
    const double C19437 = vrx[80];
    const double C19452 = vrx[81];
    const double C19481 = vrx[82];
    const double C19496 = vrx[83];
    const double C19689 = vry[0];
    const double C19706 = vry[1];
    const double C19722 = vry[2];
    const double C19968 = vry[3];
    const double C19986 = vry[4];
    const double C20156 = vry[5];
    const double C20174 = vry[6];
    const double C20344 = vry[7];
    const double C20431 = vry[8];
    const double C20521 = vry[9];
    const double C20611 = vry[10];
    const double C20626 = vry[11];
    const double C20791 = vry[12];
    const double C20808 = vry[13];
    const double C20973 = vry[14];
    const double C20990 = vry[15];
    const double C21161 = vry[16];
    const double C21248 = vry[17];
    const double C21335 = vry[18];
    const double C21424 = vry[19];
    const double C21439 = vry[20];
    const double C21601 = vry[21];
    const double C21689 = vry[22];
    const double C21706 = vry[23];
    const double C21873 = vry[24];
    const double C21960 = vry[25];
    const double C22048 = vry[26];
    const double C22137 = vry[27];
    const double C22223 = vry[28];
    const double C22309 = vry[29];
    const double C22395 = vry[30];
    const double C22494 = vry[31];
    const double C22509 = vry[32];
    const double C22524 = vry[33];
    const double C22538 = vry[34];
    const double C22553 = vry[35];
    const double C22568 = vry[36];
    const double C22597 = vry[37];
    const double C22640 = vry[38];
    const double C22655 = vry[39];
    const double C22684 = vry[40];
    const double C22727 = vry[41];
    const double C22756 = vry[42];
    const double C22785 = vry[43];
    const double C22800 = vry[44];
    const double C22871 = vry[45];
    const double C22914 = vry[46];
    const double C22929 = vry[47];
    const double C22944 = vry[48];
    const double C22959 = vry[49];
    const double C22974 = vry[50];
    const double C23003 = vry[51];
    const double C23046 = vry[52];
    const double C23075 = vry[53];
    const double C23132 = vry[54];
    const double C23231 = vry[55];
    const double C23246 = vry[56];
    const double C23275 = vry[57];
    const double C23332 = vry[58];
    const double C23361 = vry[59];
    const double C23544 = vry[60];
    const double C23600 = vry[61];
    const double C23643 = vry[62];
    const double C23742 = vry[63];
    const double C23758 = vry[64];
    const double C23773 = vry[65];
    const double C23788 = vry[66];
    const double C23803 = vry[67];
    const double C23818 = vry[68];
    const double C23833 = vry[69];
    const double C23848 = vry[70];
    const double C24004 = vry[71];
    const double C24019 = vry[72];
    const double C24034 = vry[73];
    const double C24063 = vry[74];
    const double C24092 = vry[75];
    const double C24262 = vry[76];
    const double C24318 = vry[77];
    const double C24361 = vry[78];
    const double C24489 = vry[79];
    const double C24504 = vry[80];
    const double C24519 = vry[81];
    const double C24548 = vry[82];
    const double C24563 = vry[83];
    const double C24750 = vrz[0];
    const double C24767 = vrz[1];
    const double C24783 = vrz[2];
    const double C25029 = vrz[3];
    const double C25047 = vrz[4];
    const double C25217 = vrz[5];
    const double C25235 = vrz[6];
    const double C25405 = vrz[7];
    const double C25492 = vrz[8];
    const double C25582 = vrz[9];
    const double C25672 = vrz[10];
    const double C25687 = vrz[11];
    const double C25852 = vrz[12];
    const double C25869 = vrz[13];
    const double C26034 = vrz[14];
    const double C26051 = vrz[15];
    const double C26222 = vrz[16];
    const double C26309 = vrz[17];
    const double C26396 = vrz[18];
    const double C26485 = vrz[19];
    const double C26500 = vrz[20];
    const double C26662 = vrz[21];
    const double C26750 = vrz[22];
    const double C26767 = vrz[23];
    const double C26934 = vrz[24];
    const double C27021 = vrz[25];
    const double C27109 = vrz[26];
    const double C27198 = vrz[27];
    const double C27284 = vrz[28];
    const double C27370 = vrz[29];
    const double C27456 = vrz[30];
    const double C27555 = vrz[31];
    const double C27570 = vrz[32];
    const double C27585 = vrz[33];
    const double C27599 = vrz[34];
    const double C27614 = vrz[35];
    const double C27629 = vrz[36];
    const double C27658 = vrz[37];
    const double C27701 = vrz[38];
    const double C27716 = vrz[39];
    const double C27745 = vrz[40];
    const double C27788 = vrz[41];
    const double C27817 = vrz[42];
    const double C27846 = vrz[43];
    const double C27861 = vrz[44];
    const double C27932 = vrz[45];
    const double C27975 = vrz[46];
    const double C27990 = vrz[47];
    const double C28005 = vrz[48];
    const double C28020 = vrz[49];
    const double C28035 = vrz[50];
    const double C28064 = vrz[51];
    const double C28107 = vrz[52];
    const double C28136 = vrz[53];
    const double C28193 = vrz[54];
    const double C28292 = vrz[55];
    const double C28307 = vrz[56];
    const double C28336 = vrz[57];
    const double C28393 = vrz[58];
    const double C28422 = vrz[59];
    const double C28605 = vrz[60];
    const double C28661 = vrz[61];
    const double C28704 = vrz[62];
    const double C28803 = vrz[63];
    const double C28818 = vrz[64];
    const double C28833 = vrz[65];
    const double C28848 = vrz[66];
    const double C28863 = vrz[67];
    const double C28878 = vrz[68];
    const double C28893 = vrz[69];
    const double C28908 = vrz[70];
    const double C29063 = vrz[71];
    const double C29078 = vrz[72];
    const double C29093 = vrz[73];
    const double C29122 = vrz[74];
    const double C29151 = vrz[75];
    const double C29320 = vrz[76];
    const double C29376 = vrz[77];
    const double C29419 = vrz[78];
    const double C29546 = vrz[79];
    const double C29562 = vrz[80];
    const double C29577 = vrz[81];
    const double C29606 = vrz[82];
    const double C29621 = vrz[83];
    const double C14506 = 2 * q;
    const double C29978 = C19452 * p;
    const double C29977 = C19291 * p;
    const double C29976 = C19246 * p;
    const double C29975 = C19190 * p;
    const double C29974 = C16467 * p;
    const double C29973 = C19016 * p;
    const double C29972 = C16929 * p;
    const double C29971 = C18987 * p;
    const double C29970 = C16102 / q;
    const double C29969 = C18958 * p;
    const double C29968 = C16748 / q;
    const double C29967 = C18943 * p;
    const double C29966 = C18928 * p;
    const double C29965 = C17288 / q;
    const double C29964 = 3 * C15818;
    const double C29963 = C18769 * p;
    const double C29962 = C18754 * p;
    const double C29961 = C18724 * p;
    const double C29960 = C18709 * p;
    const double C29959 = C18694 * p;
    const double C29958 = C16192 * p;
    const double C29957 = C17288 * p;
    const double C29956 = C18561 * p;
    const double C29955 = C15818 * p;
    const double C29954 = C15836 * p;
    const double C29953 = C18518 * p;
    const double C29952 = C18462 * p;
    const double C29951 = C17110 / q;
    const double C29950 = C18273 * p;
    const double C29949 = C15351 / q;
    const double C29948 = C16284 * p;
    const double C29947 = C18244 * p;
    const double C29946 = C16838 * p;
    const double C29945 = C18187 * p;
    const double C29944 = C16748 * p;
    const double C29943 = C18158 * p;
    const double C29942 = C18143 * p;
    const double C29941 = C17199 / q;
    const double C29939 = 3 * C14974;
    const double C29938 = C17981 * p;
    const double C29937 = C17110 * p;
    const double C29936 = C17952 * p;
    const double C29935 = C16102 * p;
    const double C29934 = C15444 * p;
    const double C29932 = C17909 * p;
    const double C29931 = C16012 * p;
    const double C29930 = C17880 * p;
    const double C29929 = C17865 * p;
    const double C29928 = C17850 * p;
    const double C29927 = C17835 * p;
    const double C29926 = C17820 * p;
    const double C29925 = C17021 / q;
    const double C29923 = 3 * C14780;
    const double C29922 = C15351 * p;
    const double C29921 = C17700 * p;
    const double C29920 = C17685 * p;
    const double C29919 = C17199 * p;
    const double C29918 = C17656 * p;
    const double C29917 = C17021 * p;
    const double C29916 = C17627 * p;
    const double C29915 = C14974 * p;
    const double C29914 = C14993 * p;
    const double C29913 = C17584 * p;
    const double C29912 = C15258 * p;
    const double C29911 = C17555 * p;
    const double C29910 = C17540 * p;
    const double C29909 = C14780 * p;
    const double C29908 = C14799 * p;
    const double C29907 = C17497 * p;
    const double C29906 = C15168 * p;
    const double C29905 = C17468 * p;
    const double C29904 = C17453 * p;
    const double C29803 = de * zCD;
    const double C29802 = be * zAB;
    const double C29798 = de * yCD;
    const double C29797 = be * yAB;
    const double C29793 = de * xCD;
    const double C29792 = be * xAB;
    const double C30229 = C24519 * p;
    const double C30228 = C24361 * p;
    const double C30227 = C24318 * p;
    const double C30226 = C24262 * p;
    const double C30225 = C21601 * p;
    const double C30224 = C24092 * p;
    const double C30223 = C22048 * p;
    const double C30222 = C24063 * p;
    const double C30221 = C21248 / q;
    const double C30220 = C24034 * p;
    const double C30219 = C21873 / q;
    const double C30218 = C24019 * p;
    const double C30217 = C24004 * p;
    const double C30216 = C22395 / q;
    const double C30215 = 3 * C20973;
    const double C30214 = C23848 * p;
    const double C30213 = C23833 * p;
    const double C30212 = C23803 * p;
    const double C30211 = C23788 * p;
    const double C30210 = C23773 * p;
    const double C30209 = C21335 * p;
    const double C30208 = C22395 * p;
    const double C30207 = C23643 * p;
    const double C30206 = C20973 * p;
    const double C30205 = C20990 * p;
    const double C30204 = C23600 * p;
    const double C30203 = C23544 * p;
    const double C30202 = C22223 / q;
    const double C30201 = C23361 * p;
    const double C30200 = C20521 / q;
    const double C30199 = C21424 * p;
    const double C30198 = C23332 * p;
    const double C30197 = C21960 * p;
    const double C30196 = C23275 * p;
    const double C30195 = C21873 * p;
    const double C30194 = C23246 * p;
    const double C30193 = C23231 * p;
    const double C30192 = C22309 / q;
    const double C30190 = 3 * C20156;
    const double C30189 = C23075 * p;
    const double C30188 = C22223 * p;
    const double C30187 = C23046 * p;
    const double C30186 = C21248 * p;
    const double C30185 = C20611 * p;
    const double C30183 = C23003 * p;
    const double C30182 = C21161 * p;
    const double C30181 = C22974 * p;
    const double C30180 = C22959 * p;
    const double C30179 = C22944 * p;
    const double C30178 = C22929 * p;
    const double C30177 = C22914 * p;
    const double C30176 = C22137 / q;
    const double C30174 = 3 * C19968;
    const double C30173 = C20521 * p;
    const double C30172 = C22800 * p;
    const double C30171 = C22785 * p;
    const double C30170 = C22309 * p;
    const double C30169 = C22756 * p;
    const double C30168 = C22137 * p;
    const double C30167 = C22727 * p;
    const double C30166 = C20156 * p;
    const double C30165 = C20174 * p;
    const double C30164 = C22684 * p;
    const double C30163 = C20431 * p;
    const double C30162 = C22655 * p;
    const double C30161 = C22640 * p;
    const double C30160 = C19968 * p;
    const double C30159 = C19986 * p;
    const double C30158 = C22597 * p;
    const double C30157 = C20344 * p;
    const double C30156 = C22568 * p;
    const double C30155 = C22553 * p;
    const double C30477 = C29577 * p;
    const double C30476 = C29419 * p;
    const double C30475 = C29376 * p;
    const double C30474 = C29320 * p;
    const double C30473 = C26662 * p;
    const double C30472 = C29151 * p;
    const double C30471 = C27109 * p;
    const double C30470 = C29122 * p;
    const double C30469 = C26309 / q;
    const double C30468 = C29093 * p;
    const double C30467 = C26934 / q;
    const double C30466 = C29078 * p;
    const double C30465 = C29063 * p;
    const double C30464 = C27456 / q;
    const double C30463 = 3 * C26034;
    const double C30462 = C28908 * p;
    const double C30461 = C28893 * p;
    const double C30460 = C28863 * p;
    const double C30459 = C28848 * p;
    const double C30458 = C28833 * p;
    const double C30457 = C26396 * p;
    const double C30456 = C27456 * p;
    const double C30455 = C28704 * p;
    const double C30454 = C26034 * p;
    const double C30453 = C26051 * p;
    const double C30452 = C28661 * p;
    const double C30451 = C28605 * p;
    const double C30450 = C27284 / q;
    const double C30449 = C28422 * p;
    const double C30448 = C25582 / q;
    const double C30447 = C26485 * p;
    const double C30446 = C28393 * p;
    const double C30445 = C27021 * p;
    const double C30444 = C28336 * p;
    const double C30443 = C26934 * p;
    const double C30442 = C28307 * p;
    const double C30441 = C28292 * p;
    const double C30440 = C27370 / q;
    const double C30438 = 3 * C25217;
    const double C30437 = C28136 * p;
    const double C30436 = C27284 * p;
    const double C30435 = C28107 * p;
    const double C30434 = C26309 * p;
    const double C30433 = C25672 * p;
    const double C30431 = C28064 * p;
    const double C30430 = C26222 * p;
    const double C30429 = C28035 * p;
    const double C30428 = C28020 * p;
    const double C30427 = C28005 * p;
    const double C30426 = C27990 * p;
    const double C30425 = C27975 * p;
    const double C30424 = C27198 / q;
    const double C30422 = 3 * C25029;
    const double C30421 = C25582 * p;
    const double C30420 = C27861 * p;
    const double C30419 = C27846 * p;
    const double C30418 = C27370 * p;
    const double C30417 = C27817 * p;
    const double C30416 = C27198 * p;
    const double C30415 = C27788 * p;
    const double C30414 = C25217 * p;
    const double C30413 = C25235 * p;
    const double C30412 = C27745 * p;
    const double C30411 = C25492 * p;
    const double C30410 = C27716 * p;
    const double C30409 = C27701 * p;
    const double C30408 = C25029 * p;
    const double C30407 = C25047 * p;
    const double C30406 = C27658 * p;
    const double C30405 = C25405 * p;
    const double C30404 = C27629 * p;
    const double C30403 = C27614 * p;
    const double C29940 = C18042 / C14506;
    const double C29933 = C17423 / C14506;
    const double C29924 = C17775 / C14506;
    const double C29903 = C17438 / C14506;
    const double C29902 = C17288 / C14506;
    const double C29898 = C17199 / C14506;
    const double C29897 = C17110 / C14506;
    const double C29893 = C17021 / C14506;
    const double C29892 = C16929 / C14506;
    const double C29888 = C16838 / C14506;
    const double C29886 = C16748 / C14506;
    const double C29883 = C16576 / C14506;
    const double C29882 = C16558 / C14506;
    const double C29880 = C16467 / C14506;
    const double C29872 = C16300 / C14506;
    const double C29871 = C16284 / C14506;
    const double C29870 = C16192 / C14506;
    const double C29868 = C16102 / C14506;
    const double C29865 = C16012 / C14506;
    const double C29857 = C15836 / C14506;
    const double C29856 = C15818 / C14506;
    const double C29851 = C15648 / C14506;
    const double C29850 = C15630 / C14506;
    const double C29842 = C15460 / C14506;
    const double C29841 = C15444 / C14506;
    const double C29837 = C15351 / C14506;
    const double C29835 = C15258 / C14506;
    const double C29832 = C15168 / C14506;
    const double C29824 = C14993 / C14506;
    const double C29823 = C14974 / C14506;
    const double C29811 = C14799 / C14506;
    const double C29810 = C14780 / C14506;
    const double C29796 = C14527 / C14506;
    const double C29795 = C14510 / C14506;
    const double C29794 = C14491 / C14506;
    const double C30191 = C23132 / C14506;
    const double C30184 = C22524 / C14506;
    const double C30175 = C22871 / C14506;
    const double C30154 = C22538 / C14506;
    const double C30153 = C22395 / C14506;
    const double C30149 = C22309 / C14506;
    const double C30148 = C22223 / C14506;
    const double C30144 = C22137 / C14506;
    const double C30143 = C22048 / C14506;
    const double C30139 = C21960 / C14506;
    const double C30137 = C21873 / C14506;
    const double C30134 = C21706 / C14506;
    const double C30133 = C21689 / C14506;
    const double C30131 = C21601 / C14506;
    const double C30123 = C21439 / C14506;
    const double C30122 = C21424 / C14506;
    const double C30121 = C21335 / C14506;
    const double C30119 = C21248 / C14506;
    const double C30116 = C21161 / C14506;
    const double C30108 = C20990 / C14506;
    const double C30107 = C20973 / C14506;
    const double C30102 = C20808 / C14506;
    const double C30101 = C20791 / C14506;
    const double C30093 = C20626 / C14506;
    const double C30092 = C20611 / C14506;
    const double C30088 = C20521 / C14506;
    const double C30086 = C20431 / C14506;
    const double C30083 = C20344 / C14506;
    const double C30075 = C20174 / C14506;
    const double C30074 = C20156 / C14506;
    const double C30062 = C19986 / C14506;
    const double C30061 = C19968 / C14506;
    const double C30051 = C19722 / C14506;
    const double C30050 = C19706 / C14506;
    const double C30049 = C19689 / C14506;
    const double C30439 = C28193 / C14506;
    const double C30432 = C27585 / C14506;
    const double C30423 = C27932 / C14506;
    const double C30402 = C27599 / C14506;
    const double C30401 = C27456 / C14506;
    const double C30397 = C27370 / C14506;
    const double C30396 = C27284 / C14506;
    const double C30392 = C27198 / C14506;
    const double C30391 = C27109 / C14506;
    const double C30387 = C27021 / C14506;
    const double C30385 = C26934 / C14506;
    const double C30382 = C26767 / C14506;
    const double C30381 = C26750 / C14506;
    const double C30379 = C26662 / C14506;
    const double C30371 = C26500 / C14506;
    const double C30370 = C26485 / C14506;
    const double C30369 = C26396 / C14506;
    const double C30367 = C26309 / C14506;
    const double C30364 = C26222 / C14506;
    const double C30356 = C26051 / C14506;
    const double C30355 = C26034 / C14506;
    const double C30350 = C25869 / C14506;
    const double C30349 = C25852 / C14506;
    const double C30341 = C25687 / C14506;
    const double C30340 = C25672 / C14506;
    const double C30336 = C25582 / C14506;
    const double C30334 = C25492 / C14506;
    const double C30331 = C25405 / C14506;
    const double C30323 = C25235 / C14506;
    const double C30322 = C25217 / C14506;
    const double C30310 = C25047 / C14506;
    const double C30309 = C25029 / C14506;
    const double C30299 = C24783 / C14506;
    const double C30298 = C24767 / C14506;
    const double C30297 = C24750 / C14506;
    const double C30044 = C29973 / q;
    const double C30043 = C29971 / q;
    const double C30042 = C29969 / q;
    const double C30041 = C29967 / q;
    const double C30040 = C29966 / q;
    const double C30039 = C29964 / C14506;
    const double C30038 = C29961 / q;
    const double C30037 = C29960 / q;
    const double C30036 = C29955 / q;
    const double C30035 = C29953 / q;
    const double C30031 = C29950 / q;
    const double C30030 = C29947 / q;
    const double C30032 = C29945 / q;
    const double C30029 = C29943 / q;
    const double C30028 = C29942 / q;
    const double C30026 = C29939 / C14506;
    const double C30034 = C29938 / q;
    const double C30033 = C29936 / q;
    const double C30025 = C29932 / q;
    const double C30024 = C29930 / q;
    const double C30023 = C29929 / q;
    const double C30027 = C29928 / q;
    const double C30022 = C29927 / q;
    const double C30021 = C29926 / q;
    const double C30020 = C29923 / C14506;
    const double C30019 = C29915 / q;
    const double C30018 = C29913 / q;
    const double C30017 = C29911 / q;
    const double C30016 = C29909 / q;
    const double C30015 = C29907 / q;
    const double C30014 = C29905 / q;
    const double C29984 = C29802 + C29803;
    const double C29980 = C29797 + C29798;
    const double C29979 = C29792 + C29793;
    const double C30292 = C30224 / q;
    const double C30291 = C30222 / q;
    const double C30290 = C30220 / q;
    const double C30289 = C30218 / q;
    const double C30288 = C30217 / q;
    const double C30287 = C30215 / C14506;
    const double C30286 = C30212 / q;
    const double C30285 = C30211 / q;
    const double C30284 = C30206 / q;
    const double C30283 = C30204 / q;
    const double C30279 = C30201 / q;
    const double C30278 = C30198 / q;
    const double C30280 = C30196 / q;
    const double C30277 = C30194 / q;
    const double C30276 = C30193 / q;
    const double C30274 = C30190 / C14506;
    const double C30282 = C30189 / q;
    const double C30281 = C30187 / q;
    const double C30273 = C30183 / q;
    const double C30272 = C30181 / q;
    const double C30271 = C30180 / q;
    const double C30275 = C30179 / q;
    const double C30270 = C30178 / q;
    const double C30269 = C30177 / q;
    const double C30268 = C30174 / C14506;
    const double C30267 = C30166 / q;
    const double C30266 = C30164 / q;
    const double C30265 = C30162 / q;
    const double C30264 = C30160 / q;
    const double C30263 = C30158 / q;
    const double C30262 = C30156 / q;
    const double C30540 = C30472 / q;
    const double C30539 = C30470 / q;
    const double C30538 = C30468 / q;
    const double C30537 = C30466 / q;
    const double C30536 = C30465 / q;
    const double C30535 = C30463 / C14506;
    const double C30534 = C30460 / q;
    const double C30533 = C30459 / q;
    const double C30532 = C30454 / q;
    const double C30531 = C30452 / q;
    const double C30527 = C30449 / q;
    const double C30526 = C30446 / q;
    const double C30528 = C30444 / q;
    const double C30525 = C30442 / q;
    const double C30524 = C30441 / q;
    const double C30522 = C30438 / C14506;
    const double C30530 = C30437 / q;
    const double C30529 = C30435 / q;
    const double C30521 = C30431 / q;
    const double C30520 = C30429 / q;
    const double C30519 = C30428 / q;
    const double C30523 = C30427 / q;
    const double C30518 = C30426 / q;
    const double C30517 = C30425 / q;
    const double C30516 = C30422 / C14506;
    const double C30515 = C30414 / q;
    const double C30514 = C30412 / q;
    const double C30513 = C30410 / q;
    const double C30512 = C30408 / q;
    const double C30511 = C30406 / q;
    const double C30510 = C30404 / q;
    const double C14590 = -(C14491 * C29984 + C29910) / q;
    const double C14591 = C29794 - (C17540 * C29984) / q - C30017;
    const double C14606 = -(C14510 * C29984 + C29912) / q;
    const double C14607 = C29795 - (C15258 * C29984) / q - C30018;
    const double C14622 = -(C14527 * C29984 + C29914) / q;
    const double C14623 = C29796 - (C14993 * C29984) / q - C30019;
    const double C14686 = -(C17391 * C29984 + C29918) / q;
    const double C14717 = -(C17423 * C29984 + C29919) / q;
    const double C14732 = -(C17453 * C29984 + C29920) / q;
    const double C14747 = -(C15168 * C29984 + C29921) / q;
    const double C14762 = -(C14799 * C29984 + C29922) / q;
    const double C14845 = -(C14780 * C29984 + C29928) / q;
    const double C14846 = C29810 - (C17850 * C29984) / q - C30023;
    const double C14861 = C29811 - (C15351 * C29984) / q - C30024;
    const double C14910 = -(C15444 * C29984 + C29935) / q;
    const double C14911 = -(C17497 * C29984 + C29936) / q;
    const double C14927 = -(C17021 * C29984 + C29937) / q;
    const double C14942 = -(C17820 * C29984 + C29938) / q;
    const double C15041 = C14993 / q - (C14974 * C29984) / q - C30028;
    const double C15042 = C30026 - (C18143 * C29984) / q - C30029;
    const double C15106 = C29941 - (C16284 * C29984) / q - C29946 / q;
    const double C15107 = C15258 / q - (C17584 * C29984) / q - C30030;
    const double C15123 = C29933 - (C17199 * C29984) / q - C29948 / q;
    const double C15138 = C29949 - (C17880 * C29984) / q - C30031;
    const double C15198 = C29832 - (C17700 * C29984) / q - C30032;
    const double C15413 = C29893 - (C17110 * C29984) / q - C29944 / q;
    const double C15507 = C29841 - (C16102 * C29984) / q - C30035;
    const double C15522 = -(C15460 * C29984 + C29954) / q;
    const double C15523 = C29842 - (C15836 * C29984) / q - C30036;
    const double C15598 = -(C16012 * C29984 + C29956) / q;
    const double C15613 = -(C17775 * C29984 + C29957) / q;
    const double C15614 = -(C15648 * C29984 + C29958) / q;
    const double C15695 = -(C15630 * C29984 + C29959) / q;
    const double C15696 = C29850 - (C18694 * C29984) / q - C30037;
    const double C15711 = C29851 - (C16192 * C29984) / q - C30038;
    const double C15758 = -(C18462 * C29984 + C29962) / q;
    const double C15788 = -(C18664 * C29984 + C29963) / q;
    const double C15887 = C15836 / q - (C15818 * C29984) / q - C30040;
    const double C15888 = C30039 - (C18928 * C29984) / q - C30041;
    const double C15950 = C29970 - (C18518 * C29984) / q - C30043;
    const double C15980 = C29965 - (C16467 * C29984) / q - C29972 / q;
    const double C15981 = C16192 / q - (C18724 * C29984) / q - C30044;
    const double C15996 = C29924 - (C17288 * C29984) / q - C29974 / q;
    const double C16042 = C29865 - (C18561 * C29984) / q - C30042;
    const double C16345 =
        (3 * C16284) / C14506 - (C16838 * C29984) / q - C29975 / q;
    const double C16360 = C29903 - (C18042 * C29984) / q - (C16300 * p) / q;
    const double C16361 = C18042 / q - (C16300 * C29984) / q - (C16576 * p) / q;
    const double C16362 =
        (3 * C16300) / C14506 - (C16576 * C29984) / q - (C16558 * p) / q;
    const double C16437 = C29951 - (C16748 * C29984) / q - C29976 / q;
    const double C16498 =
        (3 * C16467) / C14506 - (C16929 * C29984) / q - C29977 / q;
    const double C16625 =
        (2 * C16576) / q - (C16558 * C29984) / q - (C19422 * p) / q;
    const double C16626 =
        (5 * C16558) / C14506 - (C19422 * C29984) / q - (C19437 * p) / q;
    const double C16688 =
        (2 * C16838) / q - (C19190 * C29984) / q - (C19481 * p) / q;
    const double C16718 =
        (2 * C16929) / q - (C19291 * C29984) / q - (C19496 * p) / q;
    const double C16778 =
        (3 * C16748) / C14506 - (C19246 * C29984) / q - C29978 / q;
    const double C19785 = -(C19689 * C29984 + C30161) / q;
    const double C19801 = -(C19706 * C29984 + C30163) / q;
    const double C19817 = -(C19722 * C29984 + C30165) / q;
    const double C19877 = -(C22494 * C29984 + C30169) / q;
    const double C19906 = -(C22524 * C29984 + C30170) / q;
    const double C19921 = -(C22553 * C29984 + C30171) / q;
    const double C19936 = -(C20344 * C29984 + C30172) / q;
    const double C19951 = -(C19986 * C29984 + C30173) / q;
    const double C20032 = -(C19968 * C29984 + C30179) / q;
    const double C20094 = -(C20611 * C29984 + C30186) / q;
    const double C20095 = -(C22597 * C29984 + C30187) / q;
    const double C20110 = -(C22137 * C29984 + C30188) / q;
    const double C20125 = -(C22914 * C29984 + C30189) / q;
    const double C20284 = C30192 - (C21424 * C29984) / q - C30197 / q;
    const double C20300 = C30184 - (C22309 * C29984) / q - C30199 / q;
    const double C20581 = C30144 - (C22223 * C29984) / q - C30195 / q;
    const double C20688 = -(C20626 * C29984 + C30205) / q;
    const double C20760 = -(C21161 * C29984 + C30207) / q;
    const double C20775 = -(C22871 * C29984 + C30208) / q;
    const double C20776 = -(C20808 * C29984 + C30209) / q;
    const double C20855 = -(C20791 * C29984 + C30210) / q;
    const double C20915 = -(C23544 * C29984 + C30213) / q;
    const double C20944 = -(C23742 * C29984 + C30214) / q;
    const double C21130 = C30216 - (C21601 * C29984) / q - C30223 / q;
    const double C21146 = C30175 - (C22395 * C29984) / q - C30225 / q;
    const double C21484 =
        (3 * C21424) / C14506 - (C21960 * C29984) / q - C30226 / q;
    const double C21499 = C30154 - (C23132 * C29984) / q - (C21439 * p) / q;
    const double C21500 = C23132 / q - (C21439 * C29984) / q - (C21706 * p) / q;
    const double C21501 =
        (3 * C21439) / C14506 - (C21706 * C29984) / q - (C21689 * p) / q;
    const double C21572 = C30202 - (C21873 * C29984) / q - C30227 / q;
    const double C21632 =
        (3 * C21601) / C14506 - (C22048 * C29984) / q - C30228 / q;
    const double C21755 =
        (2 * C21706) / q - (C21689 * C29984) / q - (C24489 * p) / q;
    const double C21756 =
        (5 * C21689) / C14506 - (C24489 * C29984) / q - (C24504 * p) / q;
    const double C21815 =
        (2 * C21960) / q - (C24262 * C29984) / q - (C24548 * p) / q;
    const double C21844 =
        (2 * C22048) / q - (C24361 * C29984) / q - (C24563 * p) / q;
    const double C21903 =
        (3 * C21873) / C14506 - (C24318 * C29984) / q - C30229 / q;
    const double C24846 = -(C17387 * be + C24750 * C29984 + C30409) / q;
    const double C24862 = -(C17372 * be + C24767 * C29984 + C30411) / q;
    const double C24878 = -(C17419 * be + C24783 * C29984 + C30413) / q;
    const double C24938 = -(C17403 * be + C27555 * C29984 + C30417) / q;
    const double C24967 = -(C17434 * be + C27585 * C29984 + C30418) / q;
    const double C24982 = -(C18285 * be + C27614 * C29984 + C30419) / q;
    const double C24997 = -(C17802 * be + C25405 * C29984 + C30420) / q;
    const double C25012 = -(C17787 * be + C25047 * C29984 + C30421) / q;
    const double C25093 = -(C17741 * be + C25029 * C29984 + C30427) / q;
    const double C25155 = -(C17726 * be + C25672 * C29984 + C30434) / q;
    const double C25156 = -(C17756 * be + C27658 * C29984 + C30435) / q;
    const double C25171 = -(C17771 * be + C27198 * C29984 + C30436) / q;
    const double C25186 = -(C19042 * be + C27975 * C29984 + C30437) / q;
    const double C25345 =
        C30440 - (C17993 * be + C26485 * C29984) / q - C30445 / q;
    const double C25361 =
        C30432 - (C18038 * be + C27370 * C29984) / q - C30447 / q;
    const double C25642 =
        C30392 - (C18357 * be + C27284 * C29984) / q - C30443 / q;
    const double C25749 = -(C18444 * be + C25687 * C29984 + C30453) / q;
    const double C25821 = -(C18646 * be + C26222 * C29984 + C30455) / q;
    const double C25836 = -(C19624 * be + C27932 * C29984 + C30456) / q;
    const double C25837 = -(C18631 * be + C25869 * C29984 + C30457) / q;
    const double C25916 = -(C18601 * be + C25852 * C29984 + C30458) / q;
    const double C25976 = -(C18616 * be + C28605 * C29984 + C30461) / q;
    const double C26005 = -(C23753 * be + C28803 * C29984 + C30462) / q;
    const double C26191 =
        C30464 - (C19258 * be + C26662 * C29984) / q - C30471 / q;
    const double C26207 =
        C30423 - (C19639 * be + C27456 * C29984) / q - C30473 / q;
    const double C26545 = (3 * C26485) / C14506 -
                          (C19348 * be + C27021 * C29984) / q - C30474 / q;
    const double C26560 =
        C30402 - (C19654 * be + C28193 * C29984) / q - (C26500 * p) / q;
    const double C26561 =
        C28193 / q - (C19144 * be + C26500 * C29984) / q - (C26767 * p) / q;
    const double C26562 = (3 * C26500) / C14506 -
                          (C19333 * be + C26767 * C29984) / q -
                          (C26750 * p) / q;
    const double C26633 =
        C30450 - (C19273 * be + C26934 * C29984) / q - C30475 / q;
    const double C26693 = (3 * C26662) / C14506 -
                          (C19580 * be + C27109 * C29984) / q - C30476 / q;
    const double C26816 = (2 * C26767) / q -
                          (C19303 * be + C26750 * C29984) / q -
                          (C29546 * p) / q;
    const double C26817 = (5 * C26750) / C14506 -
                          (C29556 * be + C29546 * C29984) / q -
                          (C29562 * p) / q;
    const double C26876 = (2 * C27021) / q -
                          (C19318 * be + C29320 * C29984) / q -
                          (C29606 * p) / q;
    const double C26905 = (2 * C27109) / q -
                          (C24442 * be + C29419 * C29984) / q -
                          (C29621 * p) / q;
    const double C26964 = (3 * C26934) / C14506 -
                          (C19595 * be + C29376 * C29984) / q - C30477 / q;
    const double C14542 = -(C14491 * C29980 + C29904) / q;
    const double C14543 = C29794 - (C17453 * C29980) / q - C30014;
    const double C14558 = -(C14510 * C29980 + C29906) / q;
    const double C14559 = C29795 - (C15168 * C29980) / q - C30015;
    const double C14574 = -(C14527 * C29980 + C29908) / q;
    const double C14575 = C29796 - (C14799 * C29980) / q - C30016;
    const double C14639 = -(C17391 * C29980 + C29916) / q;
    const double C14670 = -(C17423 * C29980 + C29917) / q;
    const double C14815 = C14799 / q - (C14780 * C29980) / q - C30021;
    const double C14816 = C30020 - (C17820 * C29980) / q - C30022;
    const double C14877 = C29925 - (C15444 * C29980) / q - C29931 / q;
    const double C14878 = C15168 / q - (C17497 * C29980) / q - C30025;
    const double C14894 = C29933 - (C17021 * C29980) / q - C29934 / q;
    const double C15009 = -(C14974 * C29980 + C29930) / q;
    const double C15010 = C29823 - (C17880 * C29980) / q - C30023;
    const double C15025 = -(C14993 * C29980 + C29922) / q;
    const double C15026 = C29824 - (C15351 * C29980) / q - C30027;
    const double C15072 = -(C16284 * C29980 + C29944) / q;
    const double C15073 = -(C17584 * C29980 + C29945) / q;
    const double C15089 = -(C17199 * C29980 + C29937) / q;
    const double C15090 = -(C15258 * C29980 + C29921) / q;
    const double C15274 = C29835 - (C17700 * C29980) / q - C30033;
    const double C15304 = -(C17540 * C29980 + C29920) / q;
    const double C15367 = C29949 - (C17850 * C29980) / q - C30034;
    const double C15397 = C29898 - (C17110 * C29980) / q - C29935 / q;
    const double C15475 =
        (3 * C15444) / C14506 - (C16012 * C29980) / q - C29952 / q;
    const double C15490 = C29903 - (C17775 * C29980) / q - (C15460 * p) / q;
    const double C15491 = C17775 / q - (C15460 * C29980) / q - (C15648 * p) / q;
    const double C15492 =
        (3 * C15460) / C14506 - (C15648 * C29980) / q - (C15630 * p) / q;
    const double C15665 =
        (2 * C15648) / q - (C15630 * C29980) / q - (C18664 * p) / q;
    const double C15666 =
        (5 * C15630) / C14506 - (C18664 * C29980) / q - (C18679 * p) / q;
    const double C15727 =
        (2 * C16012) / q - (C18462 * C29980) / q - (C18739 * p) / q;
    const double C15853 = C29872 - (C16467 * C29980) / q - C30036;
    const double C15854 = C16467 / q - (C15818 * C29980) / q - C30038;
    const double C15855 = C30039 - (C18724 * C29980) / q - C30037;
    const double C15870 = C29940 - (C17288 * C29980) / q - C29954 / q;
    const double C15871 = C29965 - (C15836 * C29980) / q - C29958 / q;
    const double C15872 =
        (3 * C15836) / C14506 - (C16192 * C29980) / q - C29959 / q;
    const double C15918 = C29968 - (C18518 * C29980) / q - C30042;
    const double C15934 = C29951 - (C16102 * C29980) / q - C29956 / q;
    const double C16118 =
        (3 * C16102) / C14506 - (C18561 * C29980) / q - C29962 / q;
    const double C16209 = (2 * C16192) / q - (C18694 * C29980) / q - C29963 / q;
    const double C16315 = C29871 - (C16748 * C29980) / q - C30035;
    const double C16330 = -(C16300 * C29980 + C29974) / q;
    const double C16593 = -(C16558 * C29980 + C29977) / q;
    const double C16594 = C29882 - (C19291 * C29980) / q - C30041;
    const double C16609 = -(C16576 * C29980 + C29972) / q;
    const double C16610 = C29883 - (C16929 * C29980) / q - C30040;
    const double C16656 = -(C19190 * C29980 + C29978) / q;
    const double C16672 = -(C16838 * C29980 + C29976) / q;
    const double C16854 = C29888 - (C19246 * C29980) / q - C30043;
    const double C16884 = -(C18143 * C29980 + C29950) / q;
    const double C16946 = C16929 / q - (C18928 * C29980) / q - C30044;
    const double C17243 = -(C18042 * C29980 + C29957) / q;
    const double C19737 = -(C17387 * be + C19689 * C29980 + C30155) / q;
    const double C19753 = -(C17372 * be + C19706 * C29980 + C30157) / q;
    const double C19769 = -(C17419 * be + C19722 * C29980 + C30159) / q;
    const double C19833 = -(C17403 * be + C22494 * C29980 + C30167) / q;
    const double C19862 = -(C17434 * be + C22524 * C29980 + C30168) / q;
    const double C20063 =
        C30176 - (C17726 * be + C20611 * C29980) / q - C30182 / q;
    const double C20079 =
        C30184 - (C17771 * be + C22137 * C29980) / q - C30185 / q;
    const double C20190 = -(C18008 * be + C20156 * C29980 + C30181) / q;
    const double C20206 = -(C18054 * be + C20174 * C29980 + C30173) / q;
    const double C20252 = -(C17993 * be + C21424 * C29980 + C30195) / q;
    const double C20253 = -(C18023 * be + C22684 * C29980 + C30196) / q;
    const double C20268 = -(C18038 * be + C22309 * C29980 + C30188) / q;
    const double C20269 = -(C18069 * be + C20431 * C29980 + C30172) / q;
    const double C20476 = -(C18314 * be + C22640 * C29980 + C30171) / q;
    const double C20566 =
        C30149 - (C18357 * be + C22223 * C29980) / q - C30186 / q;
    const double C20641 = (3 * C20611) / C14506 -
                          (C18646 * be + C21161 * C29980) / q - C30203 / q;
    const double C20656 =
        C30154 - (C19624 * be + C22871 * C29980) / q - (C20626 * p) / q;
    const double C20657 =
        C22871 / q - (C18444 * be + C20626 * C29980) / q - (C20808 * p) / q;
    const double C20658 = (3 * C20626) / C14506 -
                          (C18631 * be + C20808 * C29980) / q -
                          (C20791 * p) / q;
    const double C20825 = (2 * C20808) / q -
                          (C18601 * be + C20791 * C29980) / q -
                          (C23742 * p) / q;
    const double C20826 = (5 * C20791) / C14506 -
                          (C23753 * be + C23742 * C29980) / q -
                          (C23758 * p) / q;
    const double C20886 = (2 * C21161) / q -
                          (C18616 * be + C23544 * C29980) / q -
                          (C23818 * p) / q;
    const double C21024 =
        C30191 - (C19639 * be + C22395 * C29980) / q - C30205 / q;
    const double C21025 =
        C30216 - (C18811 * be + C20990 * C29980) / q - C30209 / q;
    const double C21026 = (3 * C20990) / C14506 -
                          (C19100 * be + C21335 * C29980) / q - C30210 / q;
    const double C21086 =
        C30202 - (C18826 * be + C21248 * C29980) / q - C30207 / q;
    const double C21264 = (3 * C21248) / C14506 -
                          (C19115 * be + C23643 * C29980) / q - C30213 / q;
    const double C21352 =
        (2 * C21335) / q - (C24201 * be + C23773 * C29980) / q - C30214 / q;
    const double C21469 = -(C19144 * be + C21439 * C29980 + C30225) / q;
    const double C21723 = -(C19303 * be + C21689 * C29980 + C30228) / q;
    const double C21739 = -(C19333 * be + C21706 * C29980 + C30223) / q;
    const double C21785 = -(C19318 * be + C24262 * C29980 + C30229) / q;
    const double C21800 = -(C19348 * be + C21960 * C29980 + C30227) / q;
    const double C22005 = -(C19537 * be + C23231 * C29980 + C30201) / q;
    const double C22352 = -(C19654 * be + C23132 * C29980 + C30208) / q;
    const double C24798 = -(C24750 * C29980 + C30403) / q;
    const double C24814 = -(C24767 * C29980 + C30405) / q;
    const double C24830 = -(C24783 * C29980 + C30407) / q;
    const double C24894 = -(C27555 * C29980 + C30415) / q;
    const double C24923 = -(C27585 * C29980 + C30416) / q;
    const double C25124 = C30424 - (C25672 * C29980) / q - C30430 / q;
    const double C25140 = C30432 - (C27198 * C29980) / q - C30433 / q;
    const double C25251 = -(C25217 * C29980 + C30429) / q;
    const double C25267 = -(C25235 * C29980 + C30421) / q;
    const double C25313 = -(C26485 * C29980 + C30443) / q;
    const double C25314 = -(C27745 * C29980 + C30444) / q;
    const double C25329 = -(C27370 * C29980 + C30436) / q;
    const double C25330 = -(C25492 * C29980 + C30420) / q;
    const double C25537 = -(C27701 * C29980 + C30419) / q;
    const double C25627 = C30397 - (C27284 * C29980) / q - C30434 / q;
    const double C25702 =
        (3 * C25672) / C14506 - (C26222 * C29980) / q - C30451 / q;
    const double C25717 = C30402 - (C27932 * C29980) / q - (C25687 * p) / q;
    const double C25718 = C27932 / q - (C25687 * C29980) / q - (C25869 * p) / q;
    const double C25719 =
        (3 * C25687) / C14506 - (C25869 * C29980) / q - (C25852 * p) / q;
    const double C25886 =
        (2 * C25869) / q - (C25852 * C29980) / q - (C28803 * p) / q;
    const double C25887 =
        (5 * C25852) / C14506 - (C28803 * C29980) / q - (C28818 * p) / q;
    const double C25947 =
        (2 * C26222) / q - (C28605 * C29980) / q - (C28878 * p) / q;
    const double C26085 = C30439 - (C27456 * C29980) / q - C30453 / q;
    const double C26086 = C30464 - (C26051 * C29980) / q - C30457 / q;
    const double C26087 =
        (3 * C26051) / C14506 - (C26396 * C29980) / q - C30458 / q;
    const double C26147 = C30450 - (C26309 * C29980) / q - C30455 / q;
    const double C26325 =
        (3 * C26309) / C14506 - (C28704 * C29980) / q - C30461 / q;
    const double C26413 = (2 * C26396) / q - (C28833 * C29980) / q - C30462 / q;
    const double C26530 = -(C26500 * C29980 + C30473) / q;
    const double C26784 = -(C26750 * C29980 + C30476) / q;
    const double C26800 = -(C26767 * C29980 + C30471) / q;
    const double C26846 = -(C29320 * C29980 + C30477) / q;
    const double C26861 = -(C27021 * C29980 + C30475) / q;
    const double C27066 = -(C28292 * C29980 + C30449) / q;
    const double C27413 = -(C28193 * C29980 + C30456) / q;
    const double C14489 = (3 * C14527) / C14506 -
                          (C17372 * be + C14510 * C29979) / q -
                          (C14491 * p) / q;
    const double C14490 = (2 * C14510) / q -
                          (C17387 * be + C14491 * C29979) / q -
                          (C17391 * p) / q;
    const double C14492 = (5 * C14491) / C14506 -
                          (C17403 * be + C17391 * C29979) / q -
                          (C17407 * p) / q;
    const double C14509 =
        C17423 / q - (C17419 * be + C14527 * C29979) / q - (C14510 * p) / q;
    const double C14526 =
        C29903 - (C17434 * be + C17423 * C29979) / q - (C14527 * p) / q;
    const double C14778 = C29842 - (C17726 * be + C15444 * C29979) / q - C30016;
    const double C14779 =
        C15444 / q - (C17741 * be + C14780 * C29979) / q - C30015;
    const double C14781 = C30020 - (C17756 * be + C17497 * C29979) / q - C30014;
    const double C14797 =
        C29924 - (C17771 * be + C17021 * C29979) / q - C29908 / q;
    const double C14798 =
        C29925 - (C17787 * be + C14799 * C29979) / q - C29906 / q;
    const double C14800 = (3 * C14799) / C14506 -
                          (C17802 * be + C15168 * C29979) / q - C29904 / q;
    const double C14972 = C29872 - (C17993 * be + C16284 * C29979) / q - C30019;
    const double C14973 =
        C16284 / q - (C18008 * be + C14974 * C29979) / q - C30018;
    const double C14975 = C30026 - (C18023 * be + C17584 * C29979) / q - C30017;
    const double C14991 =
        C29940 - (C18038 * be + C17199 * C29979) / q - C29914 / q;
    const double C14992 =
        C29941 - (C18054 * be + C14993 * C29979) / q - C29912 / q;
    const double C14994 = (3 * C14993) / C14506 -
                          (C18069 * be + C15258 * C29979) / q - C29910 / q;
    const double C15169 =
        (2 * C15168) / q - (C18285 * be + C17453 * C29979) / q - C29916 / q;
    const double C15259 =
        (2 * C15258) / q - (C18314 * be + C17540 * C29979) / q - C29918 / q;
    const double C15349 =
        C29902 - (C18357 * be + C17110 * C29979) / q - C29922 / q;
    const double C15350 =
        C29951 - (C18372 * be + C15351 * C29979) / q - C29921 / q;
    const double C15352 = (3 * C15351) / C14506 -
                          (C18387 * be + C17700 * C29979) / q - C29920 / q;
    const double C15443 = -(C18444 * be + C15460 * C29979 + C29934) / q;
    const double C15631 = -(C18601 * be + C15630 * C29979 + C29952) / q;
    const double C15632 = C29850 - (C18616 * be + C18462 * C29979) / q - C30022;
    const double C15649 = -(C18631 * be + C15648 * C29979 + C29931) / q;
    const double C15650 = C29851 - (C18646 * be + C16012 * C29979) / q - C30021;
    const double C15819 = -(C18781 * be + C15818 * C29979 + C29953) / q;
    const double C15820 = C29856 - (C18796 * be + C18518 * C29979) / q - C30023;
    const double C15837 = -(C18811 * be + C15836 * C29979 + C29935) / q;
    const double C15838 = C29857 - (C18826 * be + C16102 * C29979) / q - C30027;
    const double C16013 =
        C16012 / q - (C19042 * be + C17820 * C29979) / q - C30025;
    const double C16103 = C29970 - (C19071 * be + C17850 * C29979) / q - C30033;
    const double C16193 = -(C19100 * be + C16192 * C29979 + C29956) / q;
    const double C16194 = C29870 - (C19115 * be + C18561 * C29979) / q - C30034;
    const double C16283 = -(C19144 * be + C16300 * C29979 + C29948) / q;
    const double C16468 = -(C19258 * be + C16467 * C29979 + C29944) / q;
    const double C16469 = C29880 - (C19273 * be + C16748 * C29979) / q - C30024;
    const double C16559 = -(C19303 * be + C16558 * C29979 + C29975) / q;
    const double C16560 = C29882 - (C19318 * be + C19190 * C29979) / q - C30029;
    const double C16577 = -(C19333 * be + C16576 * C29979 + C29946) / q;
    const double C16578 = C29883 - (C19348 * be + C16838 * C29979) / q - C30028;
    const double C16749 = C29968 - (C19508 * be + C17880 * C29979) / q - C30032;
    const double C16839 =
        C16838 / q - (C19537 * be + C18143 * C29979) / q - C30030;
    const double C16930 = -(C19580 * be + C16929 * C29979 + C29976) / q;
    const double C16931 = C29892 - (C19595 * be + C19246 * C29979) / q - C30031;
    const double C17020 = -(C19624 * be + C17775 * C29979 + C29917) / q;
    const double C17109 = -(C19639 * be + C17288 * C29979 + C29937) / q;
    const double C17198 = -(C19654 * be + C18042 * C29979 + C29919) / q;
    const double C19687 =
        (3 * C19722) / C14506 - (C19706 * C29979) / q - (C19689 * p) / q;
    const double C19688 =
        (2 * C19706) / q - (C19689 * C29979) / q - (C22494 * p) / q;
    const double C19690 =
        (5 * C19689) / C14506 - (C22494 * C29979) / q - (C22509 * p) / q;
    const double C19705 = C22524 / q - (C19722 * C29979) / q - (C19706 * p) / q;
    const double C19721 = C30154 - (C22524 * C29979) / q - (C19722 * p) / q;
    const double C19984 = C30175 - (C22137 * C29979) / q - C30159 / q;
    const double C19985 = C30176 - (C19986 * C29979) / q - C30157 / q;
    const double C19987 =
        (3 * C19986) / C14506 - (C20344 * C29979) / q - C30155 / q;
    const double C20172 = C30191 - (C22309 * C29979) / q - C30165 / q;
    const double C20173 = C30192 - (C20174 * C29979) / q - C30163 / q;
    const double C20175 =
        (3 * C20174) / C14506 - (C20431 * C29979) / q - C30161 / q;
    const double C20345 = (2 * C20344) / q - (C22553 * C29979) / q - C30167 / q;
    const double C20432 = (2 * C20431) / q - (C22640 * C29979) / q - C30169 / q;
    const double C20519 = C30153 - (C22223 * C29979) / q - C30173 / q;
    const double C20520 = C30202 - (C20521 * C29979) / q - C30172 / q;
    const double C20522 =
        (3 * C20521) / C14506 - (C22800 * C29979) / q - C30171 / q;
    const double C20610 = -(C20626 * C29979 + C30185) / q;
    const double C20792 = -(C20791 * C29979 + C30203) / q;
    const double C20809 = -(C20808 * C29979 + C30182) / q;
    const double C20974 = -(C20973 * C29979 + C30204) / q;
    const double C20991 = -(C20990 * C29979 + C30186) / q;
    const double C21336 = -(C21335 * C29979 + C30207) / q;
    const double C21423 = -(C21439 * C29979 + C30199) / q;
    const double C21602 = -(C21601 * C29979 + C30195) / q;
    const double C21690 = -(C21689 * C29979 + C30226) / q;
    const double C21707 = -(C21706 * C29979 + C30197) / q;
    const double C22049 = -(C22048 * C29979 + C30227) / q;
    const double C22136 = -(C22871 * C29979 + C30168) / q;
    const double C22222 = -(C22395 * C29979 + C30188) / q;
    const double C22308 = -(C23132 * C29979 + C30170) / q;
    const double C24748 =
        (3 * C24783) / C14506 - (C24767 * C29979) / q - (C24750 * p) / q;
    const double C24749 =
        (2 * C24767) / q - (C24750 * C29979) / q - (C27555 * p) / q;
    const double C24751 =
        (5 * C24750) / C14506 - (C27555 * C29979) / q - (C27570 * p) / q;
    const double C24766 = C27585 / q - (C24783 * C29979) / q - (C24767 * p) / q;
    const double C24782 = C30402 - (C27585 * C29979) / q - (C24783 * p) / q;
    const double C25045 = C30423 - (C27198 * C29979) / q - C30407 / q;
    const double C25046 = C30424 - (C25047 * C29979) / q - C30405 / q;
    const double C25048 =
        (3 * C25047) / C14506 - (C25405 * C29979) / q - C30403 / q;
    const double C25233 = C30439 - (C27370 * C29979) / q - C30413 / q;
    const double C25234 = C30440 - (C25235 * C29979) / q - C30411 / q;
    const double C25236 =
        (3 * C25235) / C14506 - (C25492 * C29979) / q - C30409 / q;
    const double C25406 = (2 * C25405) / q - (C27614 * C29979) / q - C30415 / q;
    const double C25493 = (2 * C25492) / q - (C27701 * C29979) / q - C30417 / q;
    const double C25580 = C30401 - (C27284 * C29979) / q - C30421 / q;
    const double C25581 = C30450 - (C25582 * C29979) / q - C30420 / q;
    const double C25583 =
        (3 * C25582) / C14506 - (C27861 * C29979) / q - C30419 / q;
    const double C25671 = -(C25687 * C29979 + C30433) / q;
    const double C25853 = -(C25852 * C29979 + C30451) / q;
    const double C25870 = -(C25869 * C29979 + C30430) / q;
    const double C26035 = -(C26034 * C29979 + C30452) / q;
    const double C26052 = -(C26051 * C29979 + C30434) / q;
    const double C26397 = -(C26396 * C29979 + C30455) / q;
    const double C26484 = -(C26500 * C29979 + C30447) / q;
    const double C26663 = -(C26662 * C29979 + C30443) / q;
    const double C26751 = -(C26750 * C29979 + C30474) / q;
    const double C26768 = -(C26767 * C29979 + C30445) / q;
    const double C27110 = -(C27109 * C29979 + C30475) / q;
    const double C27197 = -(C27932 * C29979 + C30416) / q;
    const double C27283 = -(C27456 * C29979 + C30436) / q;
    const double C27369 = -(C28193 * C29979 + C30418) / q;
    const double C21131 = C21335 / q - (C23803 * C29984) / q - C30292;
    const double C22065 =
        C22048 / q - (C24672 * be + C24004 * C29980) / q - C30292;
    const double C21101 = C30221 - (C23600 * C29984) / q - C30291;
    const double C21976 = C30139 - (C19595 * be + C24318 * C29980) / q - C30291;
    const double C21071 = C30219 - (C18796 * be + C23600 * C29980) / q - C30290;
    const double C21191 = C30116 - (C23643 * C29984) / q - C30290;
    const double C21724 = C30133 - (C24442 * be + C24361 * C29980) / q - C30289;
    const double C21041 = C20990 / q - (C20973 * C29984) / q - C30288;
    const double C21740 = C30134 - (C19580 * be + C22048 * C29980) / q - C30288;
    const double C21042 = C30287 - (C24004 * C29984) / q - C30289;
    const double C20871 = C30102 - (C21335 * C29984) / q - C30286;
    const double C21008 =
        C21601 / q - (C18781 * be + C20973 * C29980) / q - C30286;
    const double C20856 = C30101 - (C23773 * C29984) / q - C30285;
    const double C21009 = C30287 - (C23943 * be + C23803 * C29980) / q - C30285;
    const double C20689 = C30093 - (C20990 * C29984) / q - C30284;
    const double C21007 = C30123 - (C19258 * be + C21601 * C29980) / q - C30284;
    const double C20673 = C30092 - (C21248 * C29984) / q - C30283;
    const double C21454 = C30122 - (C19273 * be + C21873 * C29980) / q - C30283;
    const double C20315 = C30200 - (C22974 * C29984) / q - C30279;
    const double C22050 = C30143 - (C24318 * C29979) / q - C30279;
    const double C20285 = C20431 / q - (C22684 * C29984) / q - C30278;
    const double C21961 = C21960 / q - (C23231 * C29979) / q - C30278;
    const double C20374 = C30083 - (C22800 * C29984) / q - C30280;
    const double C21874 = C30219 - (C22974 * C29979) / q - C30280;
    const double C21691 = C30133 - (C24262 * C29979) / q - C30277;
    const double C20222 = C20174 / q - (C20156 * C29984) / q - C30276;
    const double C21708 = C30134 - (C21960 * C29979) / q - C30276;
    const double C20223 = C30274 - (C23231 * C29984) / q - C30277;
    const double C20537 = C30200 - (C19071 * be + C22944 * C29980) / q - C30282;
    const double C21337 = C30121 - (C23643 * C29979) / q - C30282;
    const double C20447 = C30086 - (C18387 * be + C22800 * C29980) / q - C30281;
    const double C21249 = C30221 - (C22944 * C29979) / q - C30281;
    const double C20064 =
        C20344 / q - (C17756 * be + C22597 * C29980) / q - C30273;
    const double C21162 = C21161 / q - (C22914 * C29979) / q - C30273;
    const double C20048 = C30062 - (C20521 * C29984) / q - C30272;
    const double C21603 = C30131 - (C21873 * C29979) / q - C30272;
    const double C20033 = C30061 - (C22944 * C29984) / q - C30271;
    const double C20191 = C30074 - (C19508 * be + C22974 * C29980) / q - C30271;
    const double C20975 = C30107 - (C23600 * C29979) / q - C30271;
    const double C20207 = C30075 - (C18372 * be + C20521 * C29980) / q - C30275;
    const double C20992 = C30108 - (C21248 * C29979) / q - C30275;
    const double C20793 = C30101 - (C23544 * C29979) / q - C30270;
    const double C20002 =
        C19986 / q - (C17741 * be + C19968 * C29980) / q - C30269;
    const double C20810 = C30102 - (C21161 * C29979) / q - C30269;
    const double C20003 = C30268 - (C19042 * be + C22914 * C29980) / q - C30270;
    const double C19818 = C30051 - (C20174 * C29984) / q - C30267;
    const double C20154 = C30123 - (C21424 * C29979) / q - C30267;
    const double C19802 = C30050 - (C20431 * C29984) / q - C30266;
    const double C20155 = C21424 / q - (C20156 * C29979) / q - C30266;
    const double C19786 = C30049 - (C22640 * C29984) / q - C30265;
    const double C20157 = C30274 - (C22684 * C29979) / q - C30265;
    const double C19770 = C30051 - (C17787 * be + C19986 * C29980) / q - C30264;
    const double C19966 = C30093 - (C20611 * C29979) / q - C30264;
    const double C19754 = C30050 - (C17802 * be + C20344 * C29980) / q - C30263;
    const double C19967 = C20611 / q - (C19968 * C29979) / q - C30263;
    const double C19738 = C30049 - (C18285 * be + C22553 * C29980) / q - C30262;
    const double C19969 = C30268 - (C22597 * C29979) / q - C30262;
    const double C26192 =
        C26396 / q - (C23943 * be + C28863 * C29984) / q - C30540;
    const double C27126 = C27109 / q - (C29063 * C29980) / q - C30540;
    const double C26162 = C30469 - (C18796 * be + C28661 * C29984) / q - C30539;
    const double C27037 = C30387 - (C29376 * C29980) / q - C30539;
    const double C26132 = C30467 - (C28661 * C29980) / q - C30538;
    const double C26252 = C30364 - (C19115 * be + C28704 * C29984) / q - C30538;
    const double C26785 = C30381 - (C29419 * C29980) / q - C30537;
    const double C26102 =
        C26051 / q - (C18781 * be + C26034 * C29984) / q - C30536;
    const double C26801 = C30382 - (C27109 * C29980) / q - C30536;
    const double C26103 = C30535 - (C24672 * be + C29063 * C29984) / q - C30537;
    const double C25932 = C30350 - (C19100 * be + C26396 * C29984) / q - C30534;
    const double C26069 = C26662 / q - (C26034 * C29980) / q - C30534;
    const double C25917 = C30349 - (C24201 * be + C28833 * C29984) / q - C30533;
    const double C26070 = C30535 - (C28863 * C29980) / q - C30533;
    const double C25750 = C30341 - (C18811 * be + C26051 * C29984) / q - C30532;
    const double C26068 = C30371 - (C26662 * C29980) / q - C30532;
    const double C25734 = C30340 - (C18826 * be + C26309 * C29984) / q - C30531;
    const double C26515 = C30370 - (C26934 * C29980) / q - C30531;
    const double C25376 = C30448 - (C19508 * be + C28035 * C29984) / q - C30527;
    const double C27111 = C30391 - (C29376 * C29979) / q - C30527;
    const double C25346 =
        C25492 / q - (C18023 * be + C27745 * C29984) / q - C30526;
    const double C27022 = C27021 / q - (C28292 * C29979) / q - C30526;
    const double C25435 = C30331 - (C18387 * be + C27861 * C29984) / q - C30528;
    const double C26935 = C30467 - (C28035 * C29979) / q - C30528;
    const double C26752 = C30381 - (C29320 * C29979) / q - C30525;
    const double C25283 =
        C25235 / q - (C18008 * be + C25217 * C29984) / q - C30524;
    const double C26769 = C30382 - (C27021 * C29979) / q - C30524;
    const double C25284 = C30522 - (C19537 * be + C28292 * C29984) / q - C30525;
    const double C25598 = C30448 - (C28005 * C29980) / q - C30530;
    const double C26398 = C30369 - (C28704 * C29979) / q - C30530;
    const double C25508 = C30334 - (C27861 * C29980) / q - C30529;
    const double C26310 = C30469 - (C28005 * C29979) / q - C30529;
    const double C25125 = C25405 / q - (C27658 * C29980) / q - C30521;
    const double C26223 = C26222 / q - (C27975 * C29979) / q - C30521;
    const double C25109 = C30310 - (C18372 * be + C25582 * C29984) / q - C30520;
    const double C26664 = C30379 - (C26934 * C29979) / q - C30520;
    const double C25094 = C30309 - (C19071 * be + C28005 * C29984) / q - C30519;
    const double C25252 = C30322 - (C28035 * C29980) / q - C30519;
    const double C26036 = C30355 - (C28661 * C29979) / q - C30519;
    const double C25268 = C30323 - (C25582 * C29980) / q - C30523;
    const double C26053 = C30356 - (C26309 * C29979) / q - C30523;
    const double C25854 = C30349 - (C28605 * C29979) / q - C30518;
    const double C25063 = C25047 / q - (C25029 * C29980) / q - C30517;
    const double C25871 = C30350 - (C26222 * C29979) / q - C30517;
    const double C25064 = C30516 - (C27975 * C29980) / q - C30518;
    const double C24879 = C30299 - (C18054 * be + C25235 * C29984) / q - C30515;
    const double C25215 = C30371 - (C26485 * C29979) / q - C30515;
    const double C24863 = C30298 - (C18069 * be + C25492 * C29984) / q - C30514;
    const double C25216 = C26485 / q - (C25217 * C29979) / q - C30514;
    const double C24847 = C30297 - (C18314 * be + C27701 * C29984) / q - C30513;
    const double C25218 = C30522 - (C27745 * C29979) / q - C30513;
    const double C24831 = C30299 - (C25047 * C29980) / q - C30512;
    const double C25027 = C30341 - (C25672 * C29979) / q - C30512;
    const double C24815 = C30298 - (C25405 * C29980) / q - C30511;
    const double C25028 = C25672 / q - (C25029 * C29979) / q - C30511;
    const double C24799 = C30297 - (C27614 * C29980) / q - C30510;
    const double C25030 = C30516 - (C27658 * C29979) / q - C30510;
    const double C29804 = C14591 * p;
    const double C29834 = C14606 / C14506;
    const double C29805 = C14607 * p;
    const double C29821 = C14622 / C14506;
    const double C3741 = (3 * C14622) / C14506 -
                         (C14698 * be + C14606 * C29979) / q - (C14590 * p) / q;
    const double C29806 = C14623 * p;
    const double C3740 = (2 * C14606) / q -
                         (C14682 * be + C14590 * C29979) / q - (C14686 * p) / q;
    const double C29896 = C14717 / C14506;
    const double C3751 =
        C14717 / q - (C14713 * be + C14622 * C29979) / q - (C14606 * p) / q;
    const double C29807 = C14732 * p;
    const double C29808 = C14747 * p;
    const double C29809 = C14762 * p;
    const double C29822 = C14845 * p;
    const double C29814 = C14846 * p;
    const double C29815 = C14861 * p;
    const double C29848 = C14910 * p;
    const double C29818 = C14911 * p;
    const double C29819 = C14927 / q;
    const double C29820 = C14942 * p;
    const double C29828 = C15041 * p;
    const double C29827 = C15042 * p;
    const double C29877 = C15106 * p;
    const double C29829 = C15107 * p;
    const double C29830 = C15123 / q;
    const double C29831 = C15138 * p;
    const double C29833 = C15198 * p;
    const double C29894 = C15413 * p;
    const double C29840 = C15413 / q;
    const double C29844 = C15507 * p;
    const double C29847 = C15522 / C14506;
    const double C29845 = C15523 * p;
    const double C29849 = C15598 * p;
    const double C29895 = C15613 / C14506;
    const double C29867 = C15614 / C14506;
    const double C4270 = C15613 / q - (C15522 * C29980) / q - (C15614 * p) / q;
    const double C4370 =
        (3 * C15522) / C14506 - (C15614 * C29980) / q - (C15695 * p) / q;
    const double C29852 = C15696 * p;
    const double C29853 = C15711 * p;
    const double C29855 = C15758 * p;
    const double C4369 =
        (2 * C15614) / q - (C15695 * C29980) / q - (C15788 * p) / q;
    const double C29859 = C15887 * p;
    const double C29858 = C15888 * p;
    const double C29862 = C15950 * p;
    const double C29879 = C15980 * p;
    const double C29863 = C15981 * p;
    const double C29864 = C15996 / q;
    const double C29866 = C16042 * p;
    const double C29874 = C16345 * p;
    const double C29901 = C16360 / C14506;
    const double C29876 = C16361 / C14506;
    const double C29891 = C16362 / C14506;
    const double C4708 =
        C16360 / q - (C16361 * C29984) / q + C29872 - (C16362 * p) / q;
    const double C29878 = C16437 * p;
    const double C29881 = C16498 * p;
    const double C4916 = (3 * C16361) / C14506 - (C16362 * C29984) / q +
                         C29883 - (C16625 * p) / q;
    const double C4915 =
        (2 * C16362) / q - (C16625 * C29984) / q + C29882 - (C16626 * p) / q;
    const double C29884 = C16688 * p;
    const double C29885 = C16718 * p;
    const double C29887 = C16778 * p;
    const double C30085 = C19801 / C14506;
    const double C30072 = C19817 / C14506;
    const double C8040 =
        (3 * C19817) / C14506 - (C19801 * C29979) / q - (C19785 * p) / q;
    const double C8039 =
        (2 * C19801) / q - (C19785 * C29979) / q - (C19877 * p) / q;
    const double C30147 = C19906 / C14506;
    const double C8049 = C19906 / q - (C19817 * C29979) / q - (C19801 * p) / q;
    const double C30058 = C19921 * p;
    const double C30059 = C19936 * p;
    const double C30060 = C19951 * p;
    const double C30073 = C20032 * p;
    const double C30099 = C20094 * p;
    const double C30069 = C20095 * p;
    const double C30070 = C20110 / q;
    const double C30071 = C20125 * p;
    const double C30128 = C20284 * p;
    const double C30081 = C20300 / q;
    const double C30145 = C20581 * p;
    const double C30091 = C20581 / q;
    const double C30098 = C20688 / C14506;
    const double C30100 = C20760 * p;
    const double C30146 = C20775 / C14506;
    const double C30118 = C20776 / C14506;
    const double C8554 =
        C20775 / q - (C15580 * be + C20688 * C29980) / q - (C20776 * p) / q;
    const double C8660 = (3 * C20688) / C14506 -
                         (C15770 * be + C20776 * C29980) / q - (C20855 * p) / q;
    const double C30106 = C20915 * p;
    const double C8659 = (2 * C20776) / q -
                         (C15754 * be + C20855 * C29980) / q - (C20944 * p) / q;
    const double C30130 = C21130 * p;
    const double C30115 = C21146 / q;
    const double C30125 = C21484 * p;
    const double C30152 = C21499 / C14506;
    const double C30127 = C21500 / C14506;
    const double C30142 = C21501 / C14506;
    const double C8992 =
        C21499 / q - (C21500 * C29984) / q + C30123 - (C21501 * p) / q;
    const double C30129 = C21572 * p;
    const double C30132 = C21632 * p;
    const double C9200 = (3 * C21500) / C14506 - (C21501 * C29984) / q +
                         C30134 - (C21755 * p) / q;
    const double C9199 =
        (2 * C21501) / q - (C21755 * C29984) / q + C30133 - (C21756 * p) / q;
    const double C30135 = C21815 * p;
    const double C30136 = C21844 * p;
    const double C30138 = C21903 * p;
    const double C30333 = C24862 / C14506;
    const double C30320 = C24878 / C14506;
    const double C12294 =
        (3 * C24878) / C14506 - (C24862 * C29979) / q - (C24846 * p) / q;
    const double C12293 =
        (2 * C24862) / q - (C24846 * C29979) / q - (C24938 * p) / q;
    const double C30395 = C24967 / C14506;
    const double C12303 = C24967 / q - (C24878 * C29979) / q - (C24862 * p) / q;
    const double C30306 = C24982 * p;
    const double C30307 = C24997 * p;
    const double C30308 = C25012 * p;
    const double C30321 = C25093 * p;
    const double C30347 = C25155 * p;
    const double C30317 = C25156 * p;
    const double C30318 = C25171 / q;
    const double C30319 = C25186 * p;
    const double C30376 = C25345 * p;
    const double C30329 = C25361 / q;
    const double C30393 = C25642 * p;
    const double C30339 = C25642 / q;
    const double C30346 = C25749 / C14506;
    const double C30348 = C25821 * p;
    const double C30394 = C25836 / C14506;
    const double C30366 = C25837 / C14506;
    const double C12808 = C25836 / q - (C25749 * C29980) / q - (C25837 * p) / q;
    const double C12908 =
        (3 * C25749) / C14506 - (C25837 * C29980) / q - (C25916 * p) / q;
    const double C30354 = C25976 * p;
    const double C12907 =
        (2 * C25837) / q - (C25916 * C29980) / q - (C26005 * p) / q;
    const double C30378 = C26191 * p;
    const double C30363 = C26207 / q;
    const double C30373 = C26545 * p;
    const double C30400 = C26560 / C14506;
    const double C30375 = C26561 / C14506;
    const double C30390 = C26562 / C14506;
    const double C13240 = C26560 / q - (C16419 * be + C26561 * C29984) / q +
                          C30371 - (C26562 * p) / q;
    const double C30377 = C26633 * p;
    const double C30380 = C26693 * p;
    const double C13445 = (3 * C26561) / C14506 -
                          (C16700 * be + C26562 * C29984) / q + C30382 -
                          (C26816 * p) / q;
    const double C13444 = (2 * C26562) / q -
                          (C16684 * be + C26816 * C29984) / q + C30381 -
                          (C26817 * p) / q;
    const double C30383 = C26876 * p;
    const double C30384 = C26905 * p;
    const double C30386 = C26964 * p;
    const double C29799 = C14543 * p;
    const double C29800 = C14559 * p;
    const double C3720 = (3 * C14574) / C14506 -
                         (C14651 * be + C14558 * C29979) / q - (C14542 * p) / q;
    const double C29801 = C14575 * p;
    const double C3719 = (2 * C14558) / q -
                         (C14635 * be + C14542 * C29979) / q - (C14639 * p) / q;
    const double C3730 =
        C14670 / q - (C14666 * be + C14574 * C29979) / q - (C14558 * p) / q;
    const double C29813 = C14815 * p;
    const double C29812 = C14816 * p;
    const double C29846 = C14877 * p;
    const double C29816 = C14878 * p;
    const double C29817 = C14894 / q;
    const double C29825 = C15010 * p;
    const double C29826 = C15026 * p;
    const double C3943 =
        C15072 / q - (C15068 * be + C15009 * C29979) / q - (C15073 * p) / q;
    const double C3944 =
        C15089 / q - (C15085 * be + C15025 * C29979) / q - (C15090 * p) / q;
    const double C29836 = C15274 * p;
    const double C4078 = (3 * C15025) / C14506 -
                         (C15300 * be + C15090 * C29979) / q - (C15304 * p) / q;
    const double C29838 = C15367 * p;
    const double C29899 = C15397 * p;
    const double C29839 = C15397 / q;
    const double C29843 = C15475 * p;
    const double C4190 =
        C15490 / q - (C15491 * C29980) / q + C29842 - (C15492 * p) / q;
    const double C4298 = (3 * C15491) / C14506 - (C15492 * C29980) / q +
                         C29851 - (C15665 * p) / q;
    const double C4297 =
        (2 * C15492) / q - (C15665 * C29980) / q + C29850 - (C15666 * p) / q;
    const double C29854 = C15727 * p;
    const double C4405 =
        C15853 / q - (C15854 * C29980) / q + C29856 - (C15855 * p) / q;
    const double C4406 =
        C15870 / q - (C15871 * C29980) / q + C29857 - (C15872 * p) / q;
    const double C29860 = C15918 * p;
    const double C29861 = C15934 * p;
    const double C29869 = C16118 * p;
    const double C4612 = (3 * C15871) / C14506 - (C15872 * C29980) / q +
                         C29870 - (C16209 * p) / q;
    const double C29873 = C16315 * p;
    const double C29875 = C16330 / C14506;
    const double C4688 = C29872 - (C16330 * C29980) / q - (C15853 * p) / q;
    const double C4728 = -(C16389 * be + C16330 * C29979 + C15072 * p) / q;
    const double C4897 = C29882 - (C16593 * C29980) / q - (C16594 * p) / q;
    const double C29890 = C16609 / C14506;
    const double C4898 = C29883 - (C16609 * C29980) / q - (C16610 * p) / q;
    const double C4933 = -(C16652 * be + C16593 * C29979 + C16656 * p) / q;
    const double C4934 = -(C16668 * be + C16609 * C29979 + C16672 * p) / q;
    const double C29889 = C16854 * p;
    const double C29900 = C17243 / C14506;
    const double C8021 =
        (3 * C19769) / C14506 - (C19753 * C29979) / q - (C19737 * p) / q;
    const double C8020 =
        (2 * C19753) / q - (C19737 * C29979) / q - (C19833 * p) / q;
    const double C8030 = C19862 / q - (C19769 * C29979) / q - (C19753 * p) / q;
    const double C30097 = C20063 * p;
    const double C30068 = C20079 / q;
    const double C8239 = C20252 / q - (C20190 * C29979) / q - (C20253 * p) / q;
    const double C8240 = C20268 / q - (C20206 * C29979) / q - (C20269 * p) / q;
    const double C8374 =
        (3 * C20206) / C14506 - (C20269 * C29979) / q - (C20476 * p) / q;
    const double C30150 = C20566 * p;
    const double C30090 = C20566 / q;
    const double C30094 = C20641 * p;
    const double C8482 = C20656 / q - (C15550 * be + C20657 * C29980) / q +
                         C30093 - (C20658 * p) / q;
    const double C8584 = (3 * C20657) / C14506 -
                         (C15739 * be + C20658 * C29980) / q + C30102 -
                         (C20825 * p) / q;
    const double C8583 = (2 * C20658) / q -
                         (C15723 * be + C20825 * C29980) / q + C30101 -
                         (C20826 * p) / q;
    const double C30105 = C20886 * p;
    const double C8696 = C21024 / q - (C15930 * be + C21025 * C29980) / q +
                         C30108 - (C21026 * p) / q;
    const double C30112 = C21086 * p;
    const double C30120 = C21264 * p;
    const double C8902 = (3 * C21025) / C14506 -
                         (C16235 * be + C21026 * C29980) / q + C30121 -
                         (C21352 * p) / q;
    const double C30126 = C21469 / C14506;
    const double C9010 = -(C21469 * C29979 + C20252 * p) / q;
    const double C30141 = C21739 / C14506;
    const double C9217 = -(C21723 * C29979 + C21785 * p) / q;
    const double C9218 = -(C21739 * C29979 + C21800 * p) / q;
    const double C30151 = C22352 / C14506;
    const double C12275 =
        (3 * C24830) / C14506 - (C24814 * C29979) / q - (C24798 * p) / q;
    const double C12274 =
        (2 * C24814) / q - (C24798 * C29979) / q - (C24894 * p) / q;
    const double C12284 = C24923 / q - (C24830 * C29979) / q - (C24814 * p) / q;
    const double C30345 = C25124 * p;
    const double C30316 = C25140 / q;
    const double C12493 = C25313 / q - (C25251 * C29979) / q - (C25314 * p) / q;
    const double C12494 = C25329 / q - (C25267 * C29979) / q - (C25330 * p) / q;
    const double C12628 =
        (3 * C25267) / C14506 - (C25330 * C29979) / q - (C25537 * p) / q;
    const double C30398 = C25627 * p;
    const double C30338 = C25627 / q;
    const double C30342 = C25702 * p;
    const double C12736 =
        C25717 / q - (C25718 * C29980) / q + C30341 - (C25719 * p) / q;
    const double C12836 = (3 * C25718) / C14506 - (C25719 * C29980) / q +
                          C30350 - (C25886 * p) / q;
    const double C12835 =
        (2 * C25719) / q - (C25886 * C29980) / q + C30349 - (C25887 * p) / q;
    const double C30353 = C25947 * p;
    const double C12944 =
        C26085 / q - (C26086 * C29980) / q + C30356 - (C26087 * p) / q;
    const double C30360 = C26147 * p;
    const double C30368 = C26325 * p;
    const double C13150 = (3 * C26086) / C14506 - (C26087 * C29980) / q +
                          C30369 - (C26413 * p) / q;
    const double C30374 = C26530 / C14506;
    const double C13258 = -(C26530 * C29979 + C25313 * p) / q;
    const double C30389 = C26800 / C14506;
    const double C13463 = -(C26784 * C29979 + C26846 * p) / q;
    const double C13464 = -(C26800 * C29979 + C26861 * p) / q;
    const double C30399 = C27413 / C14506;
    const double C3656 = (2 * C14489) / q -
                         (C14485 * be + C14490 * C29979) / q + C29794 -
                         (C14492 * p) / q;
    const double C3657 = (3 * C14509) / C14506 -
                         (C14504 * be + C14489 * C29979) / q + C29795 -
                         (C14490 * p) / q;
    const double C3667 = C14526 / q - (C14522 * be + C14509 * C29979) / q +
                         C29796 - (C14489 * p) / q;
    const double C3781 = C14778 / q - (C14774 * be + C14779 * C29979) / q +
                         C29810 - (C14781 * p) / q;
    const double C3782 = C14797 / q - (C14793 * be + C14798 * C29979) / q +
                         C29811 - (C14800 * p) / q;
    const double C3889 = C14972 / q - (C14968 * be + C14973 * C29979) / q +
                         C29823 - (C14975 * p) / q;
    const double C3890 = C14991 / q - (C14987 * be + C14992 * C29979) / q +
                         C29824 - (C14994 * p) / q;
    const double C3997 = (3 * C14798) / C14506 -
                         (C15164 * be + C14800 * C29979) / q + C29832 -
                         (C15169 * p) / q;
    const double C4051 = (3 * C14992) / C14506 -
                         (C15254 * be + C14994 * C29979) / q + C29835 -
                         (C15259 * p) / q;
    const double C4105 = C15349 / q - (C15345 * be + C15350 * C29979) / q +
                         C29837 - (C15352 * p) / q;
    const double C4160 = C15443 / C14506 - (C15439 * be + C14778 * C29979) / q +
                         C29841 - (C14779 * p) / q;
    const double C4170 =
        C29842 - (C15456 * be + C15443 * C29979) / q - (C14778 * p) / q;
    const double C4279 =
        C29850 - (C15626 * be + C15631 * C29979) / q - (C15632 * p) / q;
    const double C4280 =
        C29851 - (C15644 * be + C15649 * C29979) / q - (C15650 * p) / q;
    const double C4387 =
        C29856 - (C15814 * be + C15819 * C29979) / q - (C15820 * p) / q;
    const double C4388 =
        C29857 - (C15832 * be + C15837 * C29979) / q - (C15838 * p) / q;
    const double C4495 = C15649 / C14506 - (C16008 * be + C15650 * C29979) / q +
                         C29865 - (C16013 * p) / q;
    const double C4549 = C15837 / C14506 - (C16098 * be + C15838 * C29979) / q +
                         C29868 - (C16103 * p) / q;
    const double C4603 =
        C29870 - (C16188 * be + C16193 * C29979) / q - (C16194 * p) / q;
    const double C4658 = C16283 / C14506 - (C16279 * be + C14972 * C29979) / q +
                         C29871 - (C14973 * p) / q;
    const double C4668 =
        C29872 - (C16296 * be + C16283 * C29979) / q - (C14972 * p) / q;
    const double C4777 =
        C29880 - (C16463 * be + C16468 * C29979) / q - (C16469 * p) / q;
    const double C4879 =
        C29882 - (C16554 * be + C16559 * C29979) / q - (C16560 * p) / q;
    const double C4880 =
        C29883 - (C16572 * be + C16577 * C29979) / q - (C16578 * p) / q;
    const double C4987 = C16468 / C14506 - (C16744 * be + C16469 * C29979) / q +
                         C29886 - (C16749 * p) / q;
    const double C5041 = C16577 / C14506 - (C16834 * be + C16578 * C29979) / q +
                         C29888 - (C16839 * p) / q;
    const double C5095 =
        C29892 - (C16925 * be + C16930 * C29979) / q - (C16931 * p) / q;
    const double C5159 = C17020 / C14506 - (C17016 * be + C14797 * C29979) / q +
                         C29893 - (C14798 * p) / q;
    const double C5311 = C17109 / C14506 - (C17105 * be + C15349 * C29979) / q +
                         C29897 - (C15350 * p) / q;
    const double C5729 =
        C29902 - (C17284 * be + C17109 * C29979) / q - (C15349 * p) / q;
    const double C5423 = C17198 / C14506 - (C17194 * be + C14991 * C29979) / q +
                         C29898 - (C14992 * p) / q;
    const double C7963 =
        (2 * C19687) / q - (C19688 * C29979) / q + C30049 - (C19690 * p) / q;
    const double C7964 = (3 * C19705) / C14506 - (C19687 * C29979) / q +
                         C30050 - (C19688 * p) / q;
    const double C7973 =
        C19721 / q - (C19705 * C29979) / q + C30051 - (C19687 * p) / q;
    const double C8078 =
        C19984 / q - (C19985 * C29979) / q + C30062 - (C19987 * p) / q;
    const double C8186 =
        C20172 / q - (C20173 * C29979) / q + C30075 - (C20175 * p) / q;
    const double C8293 = (3 * C19985) / C14506 - (C19987 * C29979) / q +
                         C30083 - (C20345 * p) / q;
    const double C8347 = (3 * C20173) / C14506 - (C20175 * C29979) / q +
                         C30086 - (C20432 * p) / q;
    const double C8401 =
        C20519 / q - (C20520 * C29979) / q + C30088 - (C20522 * p) / q;
    const double C9441 =
        C22136 / C14506 - (C19984 * C29979) / q + C30144 - (C19985 * p) / q;
    const double C9583 =
        C22222 / C14506 - (C20519 * C29979) / q + C30148 - (C20520 * p) / q;
    const double C9987 = C30153 - (C22222 * C29979) / q - (C20519 * p) / q;
    const double C9693 =
        C22308 / C14506 - (C20172 * C29979) / q + C30149 - (C20173 * p) / q;
    const double C12217 =
        (2 * C24748) / q - (C24749 * C29979) / q + C30297 - (C24751 * p) / q;
    const double C12218 = (3 * C24766) / C14506 - (C24748 * C29979) / q +
                          C30298 - (C24749 * p) / q;
    const double C12227 =
        C24782 / q - (C24766 * C29979) / q + C30299 - (C24748 * p) / q;
    const double C12332 =
        C25045 / q - (C25046 * C29979) / q + C30310 - (C25048 * p) / q;
    const double C12440 =
        C25233 / q - (C25234 * C29979) / q + C30323 - (C25236 * p) / q;
    const double C12547 = (3 * C25046) / C14506 - (C25048 * C29979) / q +
                          C30331 - (C25406 * p) / q;
    const double C12601 = (3 * C25234) / C14506 - (C25236 * C29979) / q +
                          C30334 - (C25493 * p) / q;
    const double C12655 =
        C25580 / q - (C25581 * C29979) / q + C30336 - (C25583 * p) / q;
    const double C13689 =
        C27197 / C14506 - (C25045 * C29979) / q + C30392 - (C25046 * p) / q;
    const double C13831 =
        C27283 / C14506 - (C25580 * C29979) / q + C30396 - (C25581 * p) / q;
    const double C14235 = C30401 - (C27283 * C29979) / q - (C25580 * p) / q;
    const double C13941 =
        C27369 / C14506 - (C25233 * C29979) / q + C30397 - (C25234 * p) / q;
    const double C30114 = C21131 * p;
    const double C30113 = C21101 * p;
    const double C30140 = C21976 * p;
    const double C30111 = C21071 * p;
    const double C30117 = C21191 * p;
    const double C9181 =
        C30133 - (C16652 * be + C21723 * C29980) / q - (C21724 * p) / q;
    const double C30110 = C21041 * p;
    const double C9182 =
        C30134 - (C16668 * be + C21739 * C29980) / q - (C21740 * p) / q;
    const double C30109 = C21042 * p;
    const double C30104 = C20871 * p;
    const double C30103 = C20856 * p;
    const double C30096 = C20689 * p;
    const double C8695 = C21007 / q - (C15914 * be + C21008 * C29980) / q +
                         C30107 - (C21009 * p) / q;
    const double C8974 =
        C30123 - (C16389 * be + C21469 * C29980) / q - (C21007 * p) / q;
    const double C30095 = C20673 * p;
    const double C30124 = C21454 * p;
    const double C30082 = C20315 * p;
    const double C9379 = C30143 - (C22049 * C29979) / q - (C22050 * p) / q;
    const double C30080 = C20285 * p;
    const double C30084 = C20374 * p;
    const double C9163 = C30133 - (C21690 * C29979) / q - (C21691 * p) / q;
    const double C30079 = C20222 * p;
    const double C9164 = C30134 - (C21707 * C29979) / q - (C21708 * p) / q;
    const double C9325 =
        C21707 / C14506 - (C21708 * C29979) / q + C30139 - (C21961 * p) / q;
    const double C30078 = C20223 * p;
    const double C30089 = C20537 * p;
    const double C8893 = C30121 - (C21336 * C29979) / q - (C21337 * p) / q;
    const double C30087 = C20447 * p;
    const double C30067 = C20064 * p;
    const double C30066 = C20048 * p;
    const double C9056 = C30131 - (C21602 * C29979) / q - (C21603 * p) / q;
    const double C9271 =
        C21602 / C14506 - (C21603 * C29979) / q + C30137 - (C21874 * p) / q;
    const double C30065 = C20033 * p;
    const double C30076 = C20191 * p;
    const double C8677 = C30107 - (C20974 * C29979) / q - (C20975 * p) / q;
    const double C30077 = C20207 * p;
    const double C8678 = C30108 - (C20991 * C29979) / q - (C20992 * p) / q;
    const double C8839 =
        C20991 / C14506 - (C20992 * C29979) / q + C30119 - (C21249 * p) / q;
    const double C8564 = C30101 - (C20792 * C29979) / q - (C20793 * p) / q;
    const double C30064 = C20002 * p;
    const double C8565 = C30102 - (C20809 * C29979) / q - (C20810 * p) / q;
    const double C8785 =
        C20809 / C14506 - (C20810 * C29979) / q + C30116 - (C21162 * p) / q;
    const double C30063 = C20003 * p;
    const double C30057 = C19818 * p;
    const double C8956 = C30123 - (C21423 * C29979) / q - (C20154 * p) / q;
    const double C30056 = C19802 * p;
    const double C8947 =
        C21423 / C14506 - (C20154 * C29979) / q + C30122 - (C20155 * p) / q;
    const double C30055 = C19786 * p;
    const double C8185 =
        C20154 / q - (C20155 * C29979) / q + C30074 - (C20157 * p) / q;
    const double C30054 = C19770 * p;
    const double C8464 = C30093 - (C20610 * C29979) / q - (C19966 * p) / q;
    const double C30053 = C19754 * p;
    const double C8455 =
        C20610 / C14506 - (C19966 * C29979) / q + C30092 - (C19967 * p) / q;
    const double C30052 = C19738 * p;
    const double C8077 =
        C19966 / q - (C19967 * C29979) / q + C30061 - (C19969 * p) / q;
    const double C30362 = C26192 * p;
    const double C30361 = C26162 * p;
    const double C30388 = C27037 * p;
    const double C30359 = C26132 * p;
    const double C30365 = C26252 * p;
    const double C13425 = C30381 - (C26784 * C29980) / q - (C26785 * p) / q;
    const double C30358 = C26102 * p;
    const double C13426 = C30382 - (C26800 * C29980) / q - (C26801 * p) / q;
    const double C30357 = C26103 * p;
    const double C30352 = C25932 * p;
    const double C30351 = C25917 * p;
    const double C30344 = C25750 * p;
    const double C12943 =
        C26068 / q - (C26069 * C29980) / q + C30355 - (C26070 * p) / q;
    const double C13222 = C30371 - (C26530 * C29980) / q - (C26068 * p) / q;
    const double C30343 = C25734 * p;
    const double C30372 = C26515 * p;
    const double C30330 = C25376 * p;
    const double C13627 = C30391 - (C27110 * C29979) / q - (C27111 * p) / q;
    const double C30328 = C25346 * p;
    const double C30332 = C25435 * p;
    const double C13406 = C30381 - (C26751 * C29979) / q - (C26752 * p) / q;
    const double C30327 = C25283 * p;
    const double C13407 = C30382 - (C26768 * C29979) / q - (C26769 * p) / q;
    const double C13573 =
        C26768 / C14506 - (C26769 * C29979) / q + C30387 - (C27022 * p) / q;
    const double C30326 = C25284 * p;
    const double C30337 = C25598 * p;
    const double C13141 = C30369 - (C26397 * C29979) / q - (C26398 * p) / q;
    const double C30335 = C25508 * p;
    const double C30315 = C25125 * p;
    const double C30314 = C25109 * p;
    const double C13303 = C30379 - (C26663 * C29979) / q - (C26664 * p) / q;
    const double C13519 =
        C26663 / C14506 - (C26664 * C29979) / q + C30385 - (C26935 * p) / q;
    const double C30313 = C25094 * p;
    const double C30324 = C25252 * p;
    const double C12925 = C30355 - (C26035 * C29979) / q - (C26036 * p) / q;
    const double C30325 = C25268 * p;
    const double C12926 = C30356 - (C26052 * C29979) / q - (C26053 * p) / q;
    const double C13087 =
        C26052 / C14506 - (C26053 * C29979) / q + C30367 - (C26310 * p) / q;
    const double C12817 = C30349 - (C25853 * C29979) / q - (C25854 * p) / q;
    const double C30312 = C25063 * p;
    const double C12818 = C30350 - (C25870 * C29979) / q - (C25871 * p) / q;
    const double C13033 =
        C25870 / C14506 - (C25871 * C29979) / q + C30364 - (C26223 * p) / q;
    const double C30311 = C25064 * p;
    const double C30305 = C24879 * p;
    const double C13204 = C30371 - (C26484 * C29979) / q - (C25215 * p) / q;
    const double C30304 = C24863 * p;
    const double C13195 =
        C26484 / C14506 - (C25215 * C29979) / q + C30370 - (C25216 * p) / q;
    const double C30303 = C24847 * p;
    const double C12439 =
        C25215 / q - (C25216 * C29979) / q + C30322 - (C25218 * p) / q;
    const double C30302 = C24831 * p;
    const double C12718 = C30341 - (C25671 * C29979) / q - (C25027 * p) / q;
    const double C30301 = C24815 * p;
    const double C12709 =
        C25671 / C14506 - (C25027 * C29979) / q + C30340 - (C25028 * p) / q;
    const double C30300 = C24799 * p;
    const double C12331 =
        C25027 / q - (C25028 * C29979) / q + C30309 - (C25030 * p) / q;
    const double C29985 = C29804 / q;
    const double C29986 = C29805 / q;
    const double C29987 = C29806 / q;
    const double C3761 = -(C14590 * C29980 + C29807) / q;
    const double C4033 = (3 * C14762) / C14506 -
                         (C15225 * be + C14747 * C29979) / q - C29807 / q;
    const double C3762 = -(C14606 * C29980 + C29808) / q;
    const double C3772 = -(C14622 * C29980 + C29809) / q;
    const double C29995 = C29822 / q;
    const double C29990 = C29814 / q;
    const double C29991 = C29815 / q;
    const double C3980 = -(C14623 * C29980 + C29815) / q;
    const double C4250 = -(C15580 * be + C15522 * C29979 + C29848) / q;
    const double C5254 = C29896 - (C14927 * C29980) / q - C29848 / q;
    const double C29993 = C29818 / q;
    const double C3854 =
        C29819 - (C14923 * be + C14762 * C29979) / q - C29808 / q;
    const double C29994 = C29820 / q;
    const double C29999 = C29828 / q;
    const double C29998 = C29827 / q;
    const double C4748 = -(C16419 * be + C16361 * C29979 + C29877) / q;
    const double C5461 = C29896 - (C15123 * C29984) / q + C29898 - C29877 / q;
    const double C30000 = C29829 / q;
    const double C30004 = C29831 / q;
    const double C3979 = -(C15041 * C29980 + C29831) / q;
    const double C30001 = C29833 / q;
    const double C4096 = -(C14607 * C29980 + C29833) / q;
    const double C5197 = C29893 - (C14927 * C29984) / q - C29894 / q;
    const double C5518 = -(C15123 * C29980 + C29894) / q;
    const double C5805 = -(C17343 * be + C15996 * C29979 + C29894) / q;
    const double C30005 = C29844 / q;
    const double C4460 = -(C15962 * be + C15523 * C29979 + C29844) / q;
    const double C30006 = C29845 / q;
    const double C4260 = C29819 - (C14910 * C29980) / q - C29849 / q;
    const double C4352 = -(C15770 * be + C15614 * C29979 + C29849) / q;
    const double C5235 =
        C29895 - (C17076 * be + C14927 * C29979) / q - C29809 / q;
    const double C30007 = C29852 / q;
    const double C30008 = C29853 / q;
    const double C4351 = -(C15754 * be + C15695 * C29979 + C29855) / q;
    const double C4540 =
        (3 * C14910) / C14506 - (C15598 * C29980) / q - C29855 / q;
    const double C30010 = C29859 / q;
    const double C30009 = C29858 / q;
    const double C30013 = C29862 / q;
    const double C4459 = -(C15946 * be + C15887 * C29979 + C29862) / q;
    const double C4768 = -(C16361 * C29980 + C29879) / q;
    const double C5767 = C29895 - (C15996 * C29984) / q + C29902 - C29879 / q;
    const double C30011 = C29863 / q;
    const double C30012 = C29866 / q;
    const double C4639 = -(C16250 * be + C15711 * C29979 + C29866) / q;
    const double C4698 = C29830 - (C15106 * C29984) / q + C29871 - C29874 / q;
    const double C4952 = -(C16700 * be + C16362 * C29979 + C29874) / q;
    const double C4758 = -(C15106 * C29980 + C29878) / q;
    const double C4845 = -(C16525 * be + C15980 * C29979 + C29878) / q;
    const double C5345 =
        C14927 / C14506 - (C15413 * C29984) / q + C29897 - C29878 / q;
    const double C4811 = C29864 - (C15980 * C29984) / q + C29880 - C29881 / q;
    const double C4970 = -(C16362 * C29980 + C29881) / q;
    const double C4951 = -(C16684 * be + C16625 * C29979 + C29884) / q;
    const double C5059 =
        (3 * C15106) / C14506 - (C16345 * C29984) / q + C29888 - C29884 / q;
    const double C4969 = -(C16625 * C29980 + C29885) / q;
    const double C5113 =
        (3 * C15980) / C14506 - (C16498 * C29984) / q + C29892 - C29885 / q;
    const double C5005 = C29840 - (C16437 * C29984) / q + C29886 - C29887 / q;
    const double C5086 = -(C16345 * C29980 + C29887) / q;
    const double C5131 = -(C16987 * be + C16498 * C29979 + C29887) / q;
    const double C8058 = -(C14682 * be + C19785 * C29980 + C30058) / q;
    const double C8329 =
        (3 * C19951) / C14506 - (C19936 * C29979) / q - C30058 / q;
    const double C8059 = -(C14698 * be + C19801 * C29980 + C30059) / q;
    const double C8068 = -(C14713 * be + C19817 * C29980 + C30060) / q;
    const double C30243 = C30073 / q;
    const double C8536 = -(C20688 * C29979 + C30099) / q;
    const double C9526 =
        C30147 - (C17076 * be + C20110 * C29980) / q - C30099 / q;
    const double C30241 = C30069 / q;
    const double C8150 = C30070 - (C19951 * C29979) / q - C30059 / q;
    const double C30242 = C30071 / q;
    const double C9028 = -(C21500 * C29979 + C30128) / q;
    const double C9727 = C30147 - (C20300 * C29984) / q + C30149 - C30128 / q;
    const double C9475 = C30144 - (C20110 * C29984) / q - C30145 / q;
    const double C9778 = -(C17255 * be + C20300 * C29980 + C30145) / q;
    const double C10055 = -(C21146 * C29979 + C30145) / q;
    const double C8545 =
        C30070 - (C15565 * be + C20094 * C29980) / q - C30100 / q;
    const double C8641 = -(C20776 * C29979 + C30100) / q;
    const double C9509 = C30146 - (C20110 * C29979) / q - C30060 / q;
    const double C8640 = -(C20855 * C29979 + C30106) / q;
    const double C8830 = (3 * C20094) / C14506 -
                         (C16069 * be + C20760 * C29980) / q - C30106 / q;
    const double C9046 = -(C16419 * be + C21500 * C29980 + C30130) / q;
    const double C10021 = C30146 - (C21146 * C29984) / q + C30153 - C30130 / q;
    const double C8983 = C30081 - (C20284 * C29984) / q + C30122 - C30125 / q;
    const double C9236 = -(C21501 * C29979 + C30125) / q;
    const double C9037 = -(C16404 * be + C20284 * C29980 + C30129) / q;
    const double C9128 = -(C21130 * C29979 + C30129) / q;
    const double C9617 =
        C20110 / C14506 - (C20581 * C29984) / q + C30148 - C30129 / q;
    const double C9092 = C30115 - (C21130 * C29984) / q + C30131 - C30132 / q;
    const double C9254 = -(C16700 * be + C21501 * C29980 + C30132) / q;
    const double C9235 = -(C21755 * C29979 + C30135) / q;
    const double C9343 =
        (3 * C20284) / C14506 - (C21484 * C29984) / q + C30139 - C30135 / q;
    const double C9253 = -(C16684 * be + C21755 * C29980 + C30136) / q;
    const double C9397 =
        (3 * C21130) / C14506 - (C21632 * C29984) / q + C30143 - C30136 / q;
    const double C9289 = C30091 - (C21572 * C29984) / q + C30137 - C30138 / q;
    const double C9370 = -(C16896 * be + C21484 * C29980 + C30138) / q;
    const double C9415 = -(C21632 * C29979 + C30138) / q;
    const double C12312 = -(C24846 * C29980 + C30306) / q;
    const double C12583 =
        (3 * C25012) / C14506 - (C24997 * C29979) / q - C30306 / q;
    const double C12313 = -(C24862 * C29980 + C30307) / q;
    const double C12322 = -(C24878 * C29980 + C30308) / q;
    const double C30491 = C30321 / q;
    const double C12790 = -(C25749 * C29979 + C30347) / q;
    const double C13774 = C30395 - (C25171 * C29980) / q - C30347 / q;
    const double C30489 = C30317 / q;
    const double C12404 = C30318 - (C25012 * C29979) / q - C30307 / q;
    const double C30490 = C30319 / q;
    const double C13276 = -(C26561 * C29979 + C30376) / q;
    const double C13975 =
        C30395 - (C17255 * be + C25361 * C29984) / q + C30397 - C30376 / q;
    const double C13723 =
        C30392 - (C17076 * be + C25171 * C29984) / q - C30393 / q;
    const double C14026 = -(C25361 * C29980 + C30393) / q;
    const double C14303 = -(C26207 * C29979 + C30393) / q;
    const double C12799 = C30318 - (C25155 * C29980) / q - C30348 / q;
    const double C12890 = -(C25837 * C29979 + C30348) / q;
    const double C13757 = C30394 - (C25171 * C29979) / q - C30308 / q;
    const double C12889 = -(C25916 * C29979 + C30354) / q;
    const double C13078 =
        (3 * C25155) / C14506 - (C25821 * C29980) / q - C30354 / q;
    const double C13294 = -(C26561 * C29980 + C30378) / q;
    const double C14269 =
        C30394 - (C17343 * be + C26207 * C29984) / q + C30401 - C30378 / q;
    const double C13231 =
        C30329 - (C16404 * be + C25345 * C29984) / q + C30370 - C30373 / q;
    const double C13483 = -(C26562 * C29979 + C30373) / q;
    const double C13285 = -(C25345 * C29980 + C30377) / q;
    const double C13371 = -(C26191 * C29979 + C30377) / q;
    const double C13865 = C25171 / C14506 -
                          (C17165 * be + C25642 * C29984) / q + C30396 -
                          C30377 / q;
    const double C13337 =
        C30363 - (C16525 * be + C26191 * C29984) / q + C30379 - C30380 / q;
    const double C13502 = -(C26562 * C29980 + C30380) / q;
    const double C13482 = -(C26816 * C29979 + C30383) / q;
    const double C13591 = (3 * C25345) / C14506 -
                          (C16896 * be + C26545 * C29984) / q + C30387 -
                          C30383 / q;
    const double C13501 = -(C26816 * C29980 + C30384) / q;
    const double C13645 = (3 * C26191) / C14506 -
                          (C16987 * be + C26693 * C29984) / q + C30391 -
                          C30384 / q;
    const double C13537 =
        C30339 - (C16805 * be + C26633 * C29984) / q + C30385 - C30386 / q;
    const double C13618 = -(C26545 * C29980 + C30386) / q;
    const double C13663 = -(C26693 * C29979 + C30386) / q;
    const double C29981 = C29799 / q;
    const double C29982 = C29800 / q;
    const double C29983 = C29801 / q;
    const double C29989 = C29813 / q;
    const double C29988 = C29812 / q;
    const double C4230 = -(C15550 * be + C15491 * C29979 + C29846) / q;
    const double C5178 =
        C14670 / C14506 - (C14894 * C29980) / q + C29893 - C29846 / q;
    const double C29992 = C29816 / q;
    const double C29996 = C29825 / q;
    const double C29997 = C29826 / q;
    const double C30002 = C29836 / q;
    const double C30003 = C29838 / q;
    const double C5442 = C29898 - (C15089 * C29980) / q - C29899 / q;
    const double C5786 = -(C17328 * be + C15870 * C29979 + C29899) / q;
    const double C4180 = C29817 - (C14877 * C29980) / q + C29841 - C29843 / q;
    const double C4334 = -(C15739 * be + C15492 * C29979 + C29843) / q;
    const double C4333 = -(C15723 * be + C15665 * C29979 + C29854) / q;
    const double C4504 =
        (3 * C14877) / C14506 - (C15475 * C29980) / q + C29865 - C29854 / q;
    const double C4441 = -(C15914 * be + C15854 * C29979 + C29860) / q;
    const double C4996 =
        C15072 / C14506 - (C16315 * C29980) / q + C29886 - C29860 / q;
    const double C4442 = -(C15930 * be + C15871 * C29979 + C29861) / q;
    const double C5328 =
        C15089 / C14506 - (C15397 * C29980) / q + C29897 - C29861 / q;
    const double C4558 = C29839 - (C15934 * C29980) / q + C29868 - C29869 / q;
    const double C4630 = -(C16235 * be + C15872 * C29979 + C29869) / q;
    const double C4678 = C29871 - (C15072 * C29980) / q - C29873 / q;
    const double C4828 = -(C16510 * be + C15853 * C29979 + C29873) / q;
    const double C4718 =
        C29875 - (C16374 * be + C15072 * C29979) / q - (C15009 * p) / q;
    const double C4794 =
        C29875 - (C15853 * C29980) / q + C29880 - (C15854 * p) / q;
    const double C5068 =
        C29890 - (C16880 * be + C16672 * C29979) / q - (C16884 * p) / q;
    const double C5104 =
        C29890 - (C16610 * C29980) / q + C29892 - (C16946 * p) / q;
    const double C5050 = C29888 - (C16672 * C29980) / q - C29889 / q;
    const double C5122 = -(C16972 * be + C16610 * C29979 + C29889) / q;
    const double C5480 =
        C29900 - (C17239 * be + C15089 * C29979) / q - (C15025 * p) / q;
    const double C5748 =
        C29900 - (C15870 * C29980) / q + C29902 - (C15871 * p) / q;
    const double C8518 = -(C20657 * C29979 + C30097) / q;
    const double C9458 = C19862 / C14506 - (C17061 * be + C20079 * C29980) / q +
                         C30144 - C30097 / q;
    const double C9710 =
        C30149 - (C17239 * be + C20268 * C29980) / q - C30150 / q;
    const double C10038 = -(C21024 * C29979 + C30150) / q;
    const double C8473 =
        C30068 - (C15535 * be + C20063 * C29980) / q + C30092 - C30094 / q;
    const double C8622 = -(C20658 * C29979 + C30094) / q;
    const double C8621 = -(C20825 * C29979 + C30105) / q;
    const double C8794 = (3 * C20063) / C14506 -
                         (C16054 * be + C20641 * C29980) / q + C30116 -
                         C30105 / q;
    const double C8732 = -(C21025 * C29979 + C30112) / q;
    const double C9600 = C20268 / C14506 - (C17150 * be + C20566 * C29980) / q +
                         C30148 - C30112 / q;
    const double C8848 =
        C30090 - (C16144 * be + C21086 * C29980) / q + C30119 - C30120 / q;
    const double C8920 = -(C21026 * C29979 + C30120) / q;
    const double C9001 = C30126 - (C20252 * C29979) / q - (C20190 * p) / q;
    const double C9074 = C30126 - (C16510 * be + C21007 * C29980) / q + C30131 -
                         (C21008 * p) / q;
    const double C9352 = C30141 - (C21800 * C29979) / q - (C22005 * p) / q;
    const double C9388 = C30141 - (C16972 * be + C21740 * C29980) / q + C30143 -
                         (C22065 * p) / q;
    const double C9744 = C30151 - (C20268 * C29979) / q - (C20206 * p) / q;
    const double C10004 = C30151 - (C17328 * be + C21024 * C29980) / q +
                          C30153 - (C21025 * p) / q;
    const double C12772 = -(C25718 * C29979 + C30345) / q;
    const double C13706 =
        C24923 / C14506 - (C25140 * C29980) / q + C30392 - C30345 / q;
    const double C13958 = C30397 - (C25329 * C29980) / q - C30398 / q;
    const double C14286 = -(C26085 * C29979 + C30398) / q;
    const double C12727 = C30316 - (C25124 * C29980) / q + C30340 - C30342 / q;
    const double C12872 = -(C25719 * C29979 + C30342) / q;
    const double C12871 = -(C25886 * C29979 + C30353) / q;
    const double C13042 =
        (3 * C25124) / C14506 - (C25702 * C29980) / q + C30364 - C30353 / q;
    const double C12980 = -(C26086 * C29979 + C30360) / q;
    const double C13848 =
        C25329 / C14506 - (C25627 * C29980) / q + C30396 - C30360 / q;
    const double C13096 = C30338 - (C26147 * C29980) / q + C30367 - C30368 / q;
    const double C13168 = -(C26087 * C29979 + C30368) / q;
    const double C13249 = C30374 - (C25313 * C29979) / q - (C25251 * p) / q;
    const double C13320 =
        C30374 - (C26068 * C29980) / q + C30379 - (C26069 * p) / q;
    const double C13600 = C30389 - (C26861 * C29979) / q - (C27066 * p) / q;
    const double C13636 =
        C30389 - (C26801 * C29980) / q + C30391 - (C27126 * p) / q;
    const double C13992 = C30399 - (C25329 * C29979) / q - (C25267 * p) / q;
    const double C14252 =
        C30399 - (C26085 * C29980) / q + C30401 - (C26086 * p) / q;
    const double C30259 = C30114 / q;
    const double C30261 = C30113 / q;
    const double C8749 = -(C21041 * C29979 + C30113) / q;
    const double C9334 =
        C30139 - (C16880 * be + C21800 * C29980) / q - C30140 / q;
    const double C9406 = -(C21740 * C29979 + C30140) / q;
    const double C8731 = -(C21008 * C29979 + C30111) / q;
    const double C9280 = C20252 / C14506 - (C16790 * be + C21454 * C29980) / q +
                         C30137 - C30111 / q;
    const double C30260 = C30117 / q;
    const double C8929 = -(C20871 * C29979 + C30117) / q;
    const double C30258 = C30110 / q;
    const double C30257 = C30109 / q;
    const double C30256 = C30104 / q;
    const double C30255 = C30103 / q;
    const double C30254 = C30096 / q;
    const double C30253 = C30095 / q;
    const double C8750 = -(C20689 * C29979 + C30095) / q;
    const double C8965 =
        C30122 - (C16374 * be + C20252 * C29980) / q - C30124 / q;
    const double C9110 = -(C21007 * C29979 + C30124) / q;
    const double C30252 = C30082 / q;
    const double C8275 = -(C15102 * be + C20222 * C29980 + C30082) / q;
    const double C30248 = C30080 / q;
    const double C30249 = C30084 / q;
    const double C8392 = -(C15316 * be + C19802 * C29980 + C30084) / q;
    const double C30247 = C30079 / q;
    const double C30246 = C30078 / q;
    const double C30251 = C30089 / q;
    const double C30250 = C30087 / q;
    const double C30240 = C30067 / q;
    const double C30239 = C30066 / q;
    const double C8276 = -(C15119 * be + C19818 * C29980 + C30066) / q;
    const double C30238 = C30065 / q;
    const double C30244 = C30076 / q;
    const double C30245 = C30077 / q;
    const double C30237 = C30064 / q;
    const double C30236 = C30063 / q;
    const double C30235 = C30057 / q;
    const double C30234 = C30056 / q;
    const double C30233 = C30055 / q;
    const double C30232 = C30054 / q;
    const double C30231 = C30053 / q;
    const double C30230 = C30052 / q;
    const double C30507 = C30362 / q;
    const double C30509 = C30361 / q;
    const double C12997 = -(C26102 * C29979 + C30361) / q;
    const double C13582 = C30387 - (C26861 * C29980) / q - C30388 / q;
    const double C13654 = -(C26801 * C29979 + C30388) / q;
    const double C12979 = -(C26069 * C29979 + C30359) / q;
    const double C13528 =
        C25313 / C14506 - (C26515 * C29980) / q + C30385 - C30359 / q;
    const double C30508 = C30365 / q;
    const double C13177 = -(C25932 * C29979 + C30365) / q;
    const double C30506 = C30358 / q;
    const double C30505 = C30357 / q;
    const double C30504 = C30352 / q;
    const double C30503 = C30351 / q;
    const double C30502 = C30344 / q;
    const double C30501 = C30343 / q;
    const double C12998 = -(C25750 * C29979 + C30343) / q;
    const double C13213 = C30370 - (C25313 * C29980) / q - C30372 / q;
    const double C13354 = -(C26068 * C29979 + C30372) / q;
    const double C30500 = C30330 / q;
    const double C12529 = -(C25283 * C29980 + C30330) / q;
    const double C30496 = C30328 / q;
    const double C30497 = C30332 / q;
    const double C12646 = -(C24863 * C29980 + C30332) / q;
    const double C30495 = C30327 / q;
    const double C30494 = C30326 / q;
    const double C30499 = C30337 / q;
    const double C30498 = C30335 / q;
    const double C30488 = C30315 / q;
    const double C30487 = C30314 / q;
    const double C12530 = -(C24879 * C29980 + C30314) / q;
    const double C30486 = C30313 / q;
    const double C30492 = C30324 / q;
    const double C30493 = C30325 / q;
    const double C30485 = C30312 / q;
    const double C30484 = C30311 / q;
    const double C30483 = C30305 / q;
    const double C30482 = C30304 / q;
    const double C30481 = C30303 / q;
    const double C30480 = C30302 / q;
    const double C30479 = C30301 / q;
    const double C30478 = C30300 / q;
    const double C3698 = C29794 - (C14590 * C29984) / q - C29985;
    const double C4087 =
        (3 * C14623) / C14506 - (C15316 * be + C14607 * C29979) / q - C29985;
    const double C3699 = C29795 - (C14606 * C29984) / q - C29986;
    const double C3962 = C29830 - (C15119 * be + C14623 * C29979) / q - C29986;
    const double C3709 = C29796 - (C14622 * C29984) / q - C29987;
    const double C5499 = C29901 - (C17255 * be + C15123 * C29979) / q - C29987;
    const double C3872 = C29821 - (C14762 * C29980) / q - C29995;
    const double C4240 = C29847 - (C15565 * be + C14910 * C29979) / q - C29995;
    const double C3817 = C29810 - (C14845 * C29984) / q - C29990;
    const double C4150 = C14623 / C14506 - (C14861 * C29980) / q - C29990;
    const double C4585 =
        C15523 / C14506 - (C16159 * be + C15507 * C29979) / q - C29990;
    const double C3818 = C29811 - (C14762 * C29984) / q - C29991;
    const double C5379 =
        C15996 / C14506 - (C17165 * be + C15413 * C29979) / q - C29991;
    const double C3853 =
        C14910 / q - (C14906 * be + C14845 * C29979) / q - C29993;
    const double C4042 = C29834 - (C14747 * C29980) / q - C29993;
    const double C3871 = C14762 / q - (C14845 * C29980) / q - C29994;
    const double C4531 = C29867 - (C16069 * be + C15598 * C29979) / q - C29994;
    const double C3926 = C29821 - (C14623 * C29984) / q + C29824 - C29999;
    const double C4738 = C29876 - (C16404 * be + C15106 * C29979) / q - C29999;
    const double C3925 = C14623 / q - (C15041 * C29984) / q + C29823 - C29998;
    const double C5077 = C29891 - (C16896 * be + C16345 * C29979) / q - C29998;
    const double C3961 =
        C15106 / q - (C15102 * be + C15041 * C29979) / q - C30000;
    const double C4069 = C29834 - (C14607 * C29984) / q + C29835 - C30000;
    const double C4123 =
        C14762 / C14506 - (C14861 * C29984) / q + C29837 - C30004;
    const double C5023 =
        C15980 / C14506 - (C16805 * be + C16437 * C29979) / q - C30004;
    const double C4015 = C29832 - (C14747 * C29984) / q - C30001;
    const double C4141 = C29840 - (C15409 * be + C14861 * C29979) / q - C30001;
    const double C4200 = C29841 - (C14910 * C29984) / q - C30005;
    const double C5396 = C15123 / C14506 - (C15413 * C29980) / q - C30005;
    const double C4210 = C29842 - (C15522 * C29984) / q - C30006;
    const double C5824 = C29901 - (C15996 * C29980) / q - C30006;
    const double C4315 = C29850 - (C15695 * C29984) / q - C30007;
    const double C4648 = (3 * C15523) / C14506 - (C15711 * C29980) / q - C30007;
    const double C4316 = C29851 - (C15614 * C29984) / q - C30008;
    const double C4478 = C29864 - (C15523 * C29980) / q - C30008;
    const double C4424 = C29847 - (C15523 * C29984) / q + C29857 - C30010;
    const double C4862 = C29876 - (C15980 * C29980) / q - C30010;
    const double C4423 = C15523 / q - (C15887 * C29984) / q + C29856 - C30009;
    const double C5140 = C29891 - (C16498 * C29980) / q - C30009;
    const double C4567 =
        C14910 / C14506 - (C15507 * C29984) / q + C29868 - C30013;
    const double C5032 = C15106 / C14506 - (C16437 * C29980) / q - C30013;
    const double C4477 = C15980 / q - (C15887 * C29980) / q - C30011;
    const double C4621 = C29867 - (C15711 * C29984) / q + C29870 - C30011;
    const double C4513 = C29865 - (C15598 * C29984) / q - C30012;
    const double C4594 = C29840 - (C15507 * C29980) / q - C30012;
    const double C8168 = C30072 - (C14923 * be + C19951 * C29980) / q - C30243;
    const double C8527 = C30098 - (C20094 * C29979) / q - C30243;
    const double C8149 = C20094 / q - (C20032 * C29979) / q - C30241;
    const double C8338 = C30085 - (C15225 * be + C19936 * C29980) / q - C30241;
    const double C8167 =
        C19951 / q - (C14906 * be + C20032 * C29980) / q - C30242;
    const double C8821 = C30118 - (C20760 * C29979) / q - C30242;
    const double C12422 = C30320 - (C25012 * C29980) / q - C30491;
    const double C12781 = C30346 - (C25155 * C29979) / q - C30491;
    const double C12403 = C25155 / q - (C25093 * C29979) / q - C30489;
    const double C12592 = C30333 - (C24997 * C29980) / q - C30489;
    const double C12421 = C25012 / q - (C25093 * C29980) / q - C30490;
    const double C13069 = C30366 - (C25821 * C29979) / q - C30490;
    const double C3677 = C29794 - (C14542 * C29980) / q - C29981;
    const double C4024 =
        (3 * C14575) / C14506 - (C15210 * be + C14559 * C29979) / q - C29981;
    const double C3678 = C29795 - (C14558 * C29980) / q - C29982;
    const double C3836 = C29817 - (C14890 * be + C14575 * C29979) / q - C29982;
    const double C3688 = C29796 - (C14574 * C29980) / q - C29983;
    const double C5216 =
        C15490 / C14506 - (C17061 * be + C14894 * C29979) / q - C29983;
    const double C3800 =
        C14574 / C14506 - (C14575 * C29980) / q + C29811 - C29989;
    const double C4220 =
        C15491 / C14506 - (C15535 * be + C14877 * C29979) / q - C29989;
    const double C3799 = C14575 / q - (C14815 * C29980) / q + C29810 - C29988;
    const double C4522 =
        C15492 / C14506 - (C16054 * be + C15475 * C29979) / q - C29988;
    const double C3835 =
        C14877 / q - (C14873 * be + C14815 * C29979) / q - C29992;
    const double C4006 =
        C14558 / C14506 - (C14559 * C29980) / q + C29832 - C29992;
    const double C3907 = C29823 - (C15009 * C29980) / q - C29996;
    const double C5014 =
        C15853 / C14506 - (C16790 * be + C16315 * C29979) / q - C29996;
    const double C3908 = C29824 - (C15025 * C29980) / q - C29997;
    const double C5362 =
        C15870 / C14506 - (C17150 * be + C15397 * C29979) / q - C29997;
    const double C4060 = C29835 - (C15090 * C29980) / q - C30002;
    const double C4132 = C29839 - (C15393 * be + C15026 * C29979) / q - C30002;
    const double C4114 =
        C15025 / C14506 - (C15026 * C29980) / q + C29837 - C30003;
    const double C4576 =
        C15871 / C14506 - (C16144 * be + C15934 * C29979) / q - C30003;
    const double C8767 =
        C21130 / q - (C15946 * be + C21041 * C29980) / q - C30259;
    const double C8911 = C30118 - (C20871 * C29984) / q + C30121 - C30259;
    const double C8857 =
        C20094 / C14506 - (C20673 * C29984) / q + C30119 - C30261;
    const double C9316 =
        C20284 / C14506 - (C16805 * be + C21572 * C29980) / q - C30261;
    const double C8803 = C30116 - (C20760 * C29984) / q - C30260;
    const double C8884 = C30091 - (C16159 * be + C20673 * C29980) / q - C30260;
    const double C8714 = C30098 - (C20689 * C29984) / q + C30108 - C30258;
    const double C9146 = C30127 - (C16525 * be + C21130 * C29980) / q - C30258;
    const double C8713 = C20689 / q - (C21041 * C29984) / q + C30107 - C30257;
    const double C9424 = C30142 - (C16987 * be + C21632 * C29980) / q - C30257;
    const double C8603 = C30102 - (C20776 * C29984) / q - C30256;
    const double C8768 = C30115 - (C15962 * be + C20689 * C29980) / q - C30256;
    const double C8602 = C30101 - (C20855 * C29984) / q - C30255;
    const double C8938 =
        (3 * C20689) / C14506 - (C16250 * be + C20871 * C29980) / q - C30255;
    const double C8500 = C30093 - (C20688 * C29984) / q - C30254;
    const double C10072 = C30152 - (C17343 * be + C21146 * C29980) / q - C30254;
    const double C8491 = C30092 - (C20094 * C29984) / q - C30253;
    const double C9668 =
        C20300 / C14506 - (C17165 * be + C20581 * C29980) / q - C30253;
    const double C8419 =
        C19951 / C14506 - (C20048 * C29984) / q + C30088 - C30252;
    const double C9307 = C21130 / C14506 - (C21572 * C29979) / q - C30252;
    const double C8257 = C20284 / q - (C20222 * C29979) / q - C30248;
    const double C8365 = C30085 - (C19802 * C29984) / q + C30086 - C30248;
    const double C8311 = C30083 - (C19936 * C29984) / q - C30249;
    const double C8437 = C30091 - (C20048 * C29979) / q - C30249;
    const double C8222 = C30072 - (C19818 * C29984) / q + C30075 - C30247;
    const double C9019 = C30127 - (C20284 * C29979) / q - C30247;
    const double C8221 = C19818 / q - (C20222 * C29984) / q + C30074 - C30246;
    const double C9361 = C30142 - (C21484 * C29979) / q - C30246;
    const double C8410 =
        C20206 / C14506 - (C15393 * be + C20207 * C29980) / q + C30088 - C30251;
    const double C8866 = C21025 / C14506 - (C21086 * C29979) / q - C30251;
    const double C8356 = C30086 - (C15300 * be + C20269 * C29980) / q - C30250;
    const double C8428 = C30090 - (C20207 * C29979) / q - C30250;
    const double C8131 = C20063 / q - (C20002 * C29979) / q - C30240;
    const double C8302 =
        C19753 / C14506 - (C15210 * be + C19754 * C29980) / q + C30083 - C30240;
    const double C8114 = C30062 - (C19951 * C29984) / q - C30239;
    const double C9651 = C21146 / C14506 - (C20581 * C29979) / q - C30239;
    const double C8113 = C30061 - (C20032 * C29984) / q - C30238;
    const double C8446 =
        C19818 / C14506 - (C15409 * be + C20048 * C29980) / q - C30238;
    const double C8875 = C20689 / C14506 - (C20673 * C29979) / q - C30238;
    const double C8203 = C30074 - (C15068 * be + C20190 * C29980) / q - C30244;
    const double C9298 = C21007 / C14506 - (C21454 * C29979) / q - C30244;
    const double C8204 = C30075 - (C15085 * be + C20206 * C29980) / q - C30245;
    const double C9634 = C21024 / C14506 - (C20566 * C29979) / q - C30245;
    const double C8096 =
        C19769 / C14506 - (C14890 * be + C19770 * C29980) / q + C30062 - C30237;
    const double C8509 = C20657 / C14506 - (C20063 * C29979) / q - C30237;
    const double C8095 =
        C19770 / q - (C14873 * be + C20002 * C29980) / q + C30061 - C30236;
    const double C8812 = C20658 / C14506 - (C20641 * C29979) / q - C30236;
    const double C8011 = C30051 - (C19817 * C29984) / q - C30235;
    const double C9761 = C30152 - (C20300 * C29979) / q - C30235;
    const double C8002 = C30050 - (C19801 * C29984) / q - C30234;
    const double C8258 = C30081 - (C19818 * C29979) / q - C30234;
    const double C8001 = C30049 - (C19785 * C29984) / q - C30233;
    const double C8383 = (3 * C19818) / C14506 - (C19802 * C29979) / q - C30233;
    const double C7992 = C30051 - (C14666 * be + C19769 * C29980) / q - C30232;
    const double C9492 = C20656 / C14506 - (C20079 * C29979) / q - C30232;
    const double C7983 = C30050 - (C14651 * be + C19753 * C29980) / q - C30231;
    const double C8132 = C30068 - (C19770 * C29979) / q - C30231;
    const double C7982 = C30049 - (C14635 * be + C19737 * C29980) / q - C30230;
    const double C8320 = (3 * C19770) / C14506 - (C19754 * C29979) / q - C30230;
    const double C13015 = C26191 / q - (C26102 * C29980) / q - C30507;
    const double C13159 =
        C30366 - (C16250 * be + C25932 * C29984) / q + C30369 - C30507;
    const double C13105 =
        C25155 / C14506 - (C16159 * be + C25734 * C29984) / q + C30367 - C30509;
    const double C13564 = C25345 / C14506 - (C26633 * C29980) / q - C30509;
    const double C13051 = C30364 - (C16069 * be + C25821 * C29984) / q - C30508;
    const double C13132 = C30339 - (C25734 * C29980) / q - C30508;
    const double C12962 =
        C30346 - (C15962 * be + C25750 * C29984) / q + C30356 - C30506;
    const double C13388 = C30375 - (C26191 * C29980) / q - C30506;
    const double C12961 =
        C25750 / q - (C15946 * be + C26102 * C29984) / q + C30355 - C30505;
    const double C13672 = C30390 - (C26693 * C29980) / q - C30505;
    const double C12854 = C30350 - (C15770 * be + C25837 * C29984) / q - C30504;
    const double C13016 = C30363 - (C25750 * C29980) / q - C30504;
    const double C12853 = C30349 - (C15754 * be + C25916 * C29984) / q - C30503;
    const double C13186 =
        (3 * C25750) / C14506 - (C25932 * C29980) / q - C30503;
    const double C12754 = C30341 - (C15580 * be + C25749 * C29984) / q - C30502;
    const double C14320 = C30400 - (C26207 * C29980) / q - C30502;
    const double C12745 = C30340 - (C15565 * be + C25155 * C29984) / q - C30501;
    const double C13916 = C25361 / C14506 - (C25642 * C29980) / q - C30501;
    const double C12673 =
        C25012 / C14506 - (C15409 * be + C25109 * C29984) / q + C30336 - C30500;
    const double C13555 = C26191 / C14506 - (C26633 * C29979) / q - C30500;
    const double C12511 = C25345 / q - (C25283 * C29979) / q - C30496;
    const double C12619 =
        C30333 - (C15316 * be + C24863 * C29984) / q + C30334 - C30496;
    const double C12565 = C30331 - (C15225 * be + C24997 * C29984) / q - C30497;
    const double C12691 = C30339 - (C25109 * C29979) / q - C30497;
    const double C12476 =
        C30320 - (C15119 * be + C24879 * C29984) / q + C30323 - C30495;
    const double C13267 = C30375 - (C25345 * C29979) / q - C30495;
    const double C12475 =
        C24879 / q - (C15102 * be + C25283 * C29984) / q + C30322 - C30494;
    const double C13609 = C30390 - (C26545 * C29979) / q - C30494;
    const double C12664 =
        C25267 / C14506 - (C25268 * C29980) / q + C30336 - C30499;
    const double C13114 = C26086 / C14506 - (C26147 * C29979) / q - C30499;
    const double C12610 = C30334 - (C25330 * C29980) / q - C30498;
    const double C12682 = C30338 - (C25268 * C29979) / q - C30498;
    const double C12385 = C25124 / q - (C25063 * C29979) / q - C30488;
    const double C12556 =
        C24814 / C14506 - (C24815 * C29980) / q + C30331 - C30488;
    const double C12368 = C30310 - (C14923 * be + C25012 * C29984) / q - C30487;
    const double C13899 = C26207 / C14506 - (C25642 * C29979) / q - C30487;
    const double C12367 = C30309 - (C14906 * be + C25093 * C29984) / q - C30486;
    const double C12700 = C24879 / C14506 - (C25109 * C29980) / q - C30486;
    const double C13123 = C25750 / C14506 - (C25734 * C29979) / q - C30486;
    const double C12457 = C30322 - (C25251 * C29980) / q - C30492;
    const double C13546 = C26068 / C14506 - (C26515 * C29979) / q - C30492;
    const double C12458 = C30323 - (C25267 * C29980) / q - C30493;
    const double C13882 = C26085 / C14506 - (C25627 * C29979) / q - C30493;
    const double C12350 =
        C24830 / C14506 - (C24831 * C29980) / q + C30310 - C30485;
    const double C12763 = C25718 / C14506 - (C25124 * C29979) / q - C30485;
    const double C12349 = C24831 / q - (C25063 * C29980) / q + C30309 - C30484;
    const double C13060 = C25719 / C14506 - (C25702 * C29979) / q - C30484;
    const double C12265 = C30299 - (C14713 * be + C24878 * C29984) / q - C30483;
    const double C14009 = C30400 - (C25361 * C29979) / q - C30483;
    const double C12256 = C30298 - (C14698 * be + C24862 * C29984) / q - C30482;
    const double C12512 = C30329 - (C24879 * C29979) / q - C30482;
    const double C12255 = C30297 - (C14682 * be + C24846 * C29984) / q - C30481;
    const double C12637 =
        (3 * C24879) / C14506 - (C24863 * C29979) / q - C30481;
    const double C12246 = C30299 - (C24830 * C29980) / q - C30480;
    const double C13740 = C25717 / C14506 - (C25140 * C29979) / q - C30480;
    const double C12237 = C30298 - (C24814 * C29980) / q - C30479;
    const double C12386 = C30316 - (C24831 * C29979) / q - C30479;
    const double C12236 = C30297 - (C24798 * C29980) / q - C30478;
    const double C12574 =
        (3 * C24831) / C14506 - (C24815 * C29979) / q - C30478;
    etx[0] = C3656;
    etx[1] = C3657;
    etx[2] = C3667;
    etx[3] = C3677;
    etx[4] = C3678;
    etx[5] = C3688;
    etx[6] = C3698;
    etx[7] = C3699;
    etx[8] = C3709;
    etx[9] = C3719;
    etx[10] = C3720;
    etx[11] = C3730;
    etx[12] = C3740;
    etx[13] = C3741;
    etx[14] = C3751;
    etx[15] = C3761;
    etx[16] = C3762;
    etx[17] = C3772;
    etx[18] = C3781;
    etx[19] = C3782;
    etx[20] = C3799;
    etx[21] = C3800;
    etx[22] = C3817;
    etx[23] = C3818;
    etx[24] = C3835;
    etx[25] = C3836;
    etx[26] = C3853;
    etx[27] = C3854;
    etx[28] = C3871;
    etx[29] = C3872;
    etx[30] = C3889;
    etx[31] = C3890;
    etx[32] = C3907;
    etx[33] = C3908;
    etx[34] = C3925;
    etx[35] = C3926;
    etx[36] = C3943;
    etx[37] = C3944;
    etx[38] = C3961;
    etx[39] = C3962;
    etx[40] = C3979;
    etx[41] = C3980;
    etx[42] = C3997;
    etx[43] = C4006;
    etx[44] = C4015;
    etx[45] = C4024;
    etx[46] = C4033;
    etx[47] = C4042;
    etx[48] = C4051;
    etx[49] = C4060;
    etx[50] = C4069;
    etx[51] = C4078;
    etx[52] = C4087;
    etx[53] = C4096;
    etx[54] = C4105;
    etx[55] = C4114;
    etx[56] = C4123;
    etx[57] = C4132;
    etx[58] = C4141;
    etx[59] = C4150;
    etx[60] = C4160;
    etx[61] = C4170;
    etx[62] = C4180;
    etx[63] = C4190;
    etx[64] = C4200;
    etx[65] = C4210;
    etx[66] = C4220;
    etx[67] = C4230;
    etx[68] = C4240;
    etx[69] = C4250;
    etx[70] = C4260;
    etx[71] = C4270;
    etx[72] = C4279;
    etx[73] = C4280;
    etx[74] = C4297;
    etx[75] = C4298;
    etx[76] = C4315;
    etx[77] = C4316;
    etx[78] = C4333;
    etx[79] = C4334;
    etx[80] = C4351;
    etx[81] = C4352;
    etx[82] = C4369;
    etx[83] = C4370;
    etx[84] = C4387;
    etx[85] = C4388;
    etx[86] = C4405;
    etx[87] = C4406;
    etx[88] = C4423;
    etx[89] = C4424;
    etx[90] = C4441;
    etx[91] = C4442;
    etx[92] = C4459;
    etx[93] = C4460;
    etx[94] = C4477;
    etx[95] = C4478;
    etx[96] = C4495;
    etx[97] = C4504;
    etx[98] = C4513;
    etx[99] = C4522;
    etx[100] = C4531;
    etx[101] = C4540;
    etx[102] = C4549;
    etx[103] = C4558;
    etx[104] = C4567;
    etx[105] = C4576;
    etx[106] = C4585;
    etx[107] = C4594;
    etx[108] = C4603;
    etx[109] = C4612;
    etx[110] = C4621;
    etx[111] = C4630;
    etx[112] = C4639;
    etx[113] = C4648;
    etx[114] = C4658;
    etx[115] = C4668;
    etx[116] = C4678;
    etx[117] = C4688;
    etx[118] = C4698;
    etx[119] = C4708;
    etx[120] = C4718;
    etx[121] = C4728;
    etx[122] = C4738;
    etx[123] = C4748;
    etx[124] = C4758;
    etx[125] = C4768;
    etx[126] = C4777;
    etx[127] = C4794;
    etx[128] = C4811;
    etx[129] = C4828;
    etx[130] = C4845;
    etx[131] = C4862;
    etx[132] = C4879;
    etx[133] = C4880;
    etx[134] = C4897;
    etx[135] = C4898;
    etx[136] = C4915;
    etx[137] = C4916;
    etx[138] = C4933;
    etx[139] = C4934;
    etx[140] = C4951;
    etx[141] = C4952;
    etx[142] = C4969;
    etx[143] = C4970;
    etx[144] = C4987;
    etx[145] = C4996;
    etx[146] = C5005;
    etx[147] = C5014;
    etx[148] = C5023;
    etx[149] = C5032;
    etx[150] = C5041;
    etx[151] = C5050;
    etx[152] = C5059;
    etx[153] = C5068;
    etx[154] = C5077;
    etx[155] = C5086;
    etx[156] = C5095;
    etx[157] = C5104;
    etx[158] = C5113;
    etx[159] = C5122;
    etx[160] = C5131;
    etx[161] = C5140;
    etx[162] = C5159;
    etx[163] = C5178;
    etx[164] = C5197;
    etx[165] = C5216;
    etx[166] = C5235;
    etx[167] = C5254;
    etx[168] = C5311;
    etx[169] = C5328;
    etx[170] = C5345;
    etx[171] = C5362;
    etx[172] = C5379;
    etx[173] = C5396;
    etx[174] = C5423;
    etx[175] = C5442;
    etx[176] = C5461;
    etx[177] = C5480;
    etx[178] = C5499;
    etx[179] = C5518;
    etx[180] = C5729;
    etx[181] = C5748;
    etx[182] = C5767;
    etx[183] = C5786;
    etx[184] = C5805;
    etx[185] = C5824;
    ety[0] = C7963;
    ety[1] = C7964;
    ety[2] = C7973;
    ety[3] = C7982;
    ety[4] = C7983;
    ety[5] = C7992;
    ety[6] = C8001;
    ety[7] = C8002;
    ety[8] = C8011;
    ety[9] = C8020;
    ety[10] = C8021;
    ety[11] = C8030;
    ety[12] = C8039;
    ety[13] = C8040;
    ety[14] = C8049;
    ety[15] = C8058;
    ety[16] = C8059;
    ety[17] = C8068;
    ety[18] = C8077;
    ety[19] = C8078;
    ety[20] = C8095;
    ety[21] = C8096;
    ety[22] = C8113;
    ety[23] = C8114;
    ety[24] = C8131;
    ety[25] = C8132;
    ety[26] = C8149;
    ety[27] = C8150;
    ety[28] = C8167;
    ety[29] = C8168;
    ety[30] = C8185;
    ety[31] = C8186;
    ety[32] = C8203;
    ety[33] = C8204;
    ety[34] = C8221;
    ety[35] = C8222;
    ety[36] = C8239;
    ety[37] = C8240;
    ety[38] = C8257;
    ety[39] = C8258;
    ety[40] = C8275;
    ety[41] = C8276;
    ety[42] = C8293;
    ety[43] = C8302;
    ety[44] = C8311;
    ety[45] = C8320;
    ety[46] = C8329;
    ety[47] = C8338;
    ety[48] = C8347;
    ety[49] = C8356;
    ety[50] = C8365;
    ety[51] = C8374;
    ety[52] = C8383;
    ety[53] = C8392;
    ety[54] = C8401;
    ety[55] = C8410;
    ety[56] = C8419;
    ety[57] = C8428;
    ety[58] = C8437;
    ety[59] = C8446;
    ety[60] = C8455;
    ety[61] = C8464;
    ety[62] = C8473;
    ety[63] = C8482;
    ety[64] = C8491;
    ety[65] = C8500;
    ety[66] = C8509;
    ety[67] = C8518;
    ety[68] = C8527;
    ety[69] = C8536;
    ety[70] = C8545;
    ety[71] = C8554;
    ety[72] = C8564;
    ety[73] = C8565;
    ety[74] = C8583;
    ety[75] = C8584;
    ety[76] = C8602;
    ety[77] = C8603;
    ety[78] = C8621;
    ety[79] = C8622;
    ety[80] = C8640;
    ety[81] = C8641;
    ety[82] = C8659;
    ety[83] = C8660;
    ety[84] = C8677;
    ety[85] = C8678;
    ety[86] = C8695;
    ety[87] = C8696;
    ety[88] = C8713;
    ety[89] = C8714;
    ety[90] = C8731;
    ety[91] = C8732;
    ety[92] = C8749;
    ety[93] = C8750;
    ety[94] = C8767;
    ety[95] = C8768;
    ety[96] = C8785;
    ety[97] = C8794;
    ety[98] = C8803;
    ety[99] = C8812;
    ety[100] = C8821;
    ety[101] = C8830;
    ety[102] = C8839;
    ety[103] = C8848;
    ety[104] = C8857;
    ety[105] = C8866;
    ety[106] = C8875;
    ety[107] = C8884;
    ety[108] = C8893;
    ety[109] = C8902;
    ety[110] = C8911;
    ety[111] = C8920;
    ety[112] = C8929;
    ety[113] = C8938;
    ety[114] = C8947;
    ety[115] = C8956;
    ety[116] = C8965;
    ety[117] = C8974;
    ety[118] = C8983;
    ety[119] = C8992;
    ety[120] = C9001;
    ety[121] = C9010;
    ety[122] = C9019;
    ety[123] = C9028;
    ety[124] = C9037;
    ety[125] = C9046;
    ety[126] = C9056;
    ety[127] = C9074;
    ety[128] = C9092;
    ety[129] = C9110;
    ety[130] = C9128;
    ety[131] = C9146;
    ety[132] = C9163;
    ety[133] = C9164;
    ety[134] = C9181;
    ety[135] = C9182;
    ety[136] = C9199;
    ety[137] = C9200;
    ety[138] = C9217;
    ety[139] = C9218;
    ety[140] = C9235;
    ety[141] = C9236;
    ety[142] = C9253;
    ety[143] = C9254;
    ety[144] = C9271;
    ety[145] = C9280;
    ety[146] = C9289;
    ety[147] = C9298;
    ety[148] = C9307;
    ety[149] = C9316;
    ety[150] = C9325;
    ety[151] = C9334;
    ety[152] = C9343;
    ety[153] = C9352;
    ety[154] = C9361;
    ety[155] = C9370;
    ety[156] = C9379;
    ety[157] = C9388;
    ety[158] = C9397;
    ety[159] = C9406;
    ety[160] = C9415;
    ety[161] = C9424;
    ety[162] = C9441;
    ety[163] = C9458;
    ety[164] = C9475;
    ety[165] = C9492;
    ety[166] = C9509;
    ety[167] = C9526;
    ety[168] = C9583;
    ety[169] = C9600;
    ety[170] = C9617;
    ety[171] = C9634;
    ety[172] = C9651;
    ety[173] = C9668;
    ety[174] = C9693;
    ety[175] = C9710;
    ety[176] = C9727;
    ety[177] = C9744;
    ety[178] = C9761;
    ety[179] = C9778;
    ety[180] = C9987;
    ety[181] = C10004;
    ety[182] = C10021;
    ety[183] = C10038;
    ety[184] = C10055;
    ety[185] = C10072;
    etz[0] = C12217;
    etz[1] = C12218;
    etz[2] = C12227;
    etz[3] = C12236;
    etz[4] = C12237;
    etz[5] = C12246;
    etz[6] = C12255;
    etz[7] = C12256;
    etz[8] = C12265;
    etz[9] = C12274;
    etz[10] = C12275;
    etz[11] = C12284;
    etz[12] = C12293;
    etz[13] = C12294;
    etz[14] = C12303;
    etz[15] = C12312;
    etz[16] = C12313;
    etz[17] = C12322;
    etz[18] = C12331;
    etz[19] = C12332;
    etz[20] = C12349;
    etz[21] = C12350;
    etz[22] = C12367;
    etz[23] = C12368;
    etz[24] = C12385;
    etz[25] = C12386;
    etz[26] = C12403;
    etz[27] = C12404;
    etz[28] = C12421;
    etz[29] = C12422;
    etz[30] = C12439;
    etz[31] = C12440;
    etz[32] = C12457;
    etz[33] = C12458;
    etz[34] = C12475;
    etz[35] = C12476;
    etz[36] = C12493;
    etz[37] = C12494;
    etz[38] = C12511;
    etz[39] = C12512;
    etz[40] = C12529;
    etz[41] = C12530;
    etz[42] = C12547;
    etz[43] = C12556;
    etz[44] = C12565;
    etz[45] = C12574;
    etz[46] = C12583;
    etz[47] = C12592;
    etz[48] = C12601;
    etz[49] = C12610;
    etz[50] = C12619;
    etz[51] = C12628;
    etz[52] = C12637;
    etz[53] = C12646;
    etz[54] = C12655;
    etz[55] = C12664;
    etz[56] = C12673;
    etz[57] = C12682;
    etz[58] = C12691;
    etz[59] = C12700;
    etz[60] = C12709;
    etz[61] = C12718;
    etz[62] = C12727;
    etz[63] = C12736;
    etz[64] = C12745;
    etz[65] = C12754;
    etz[66] = C12763;
    etz[67] = C12772;
    etz[68] = C12781;
    etz[69] = C12790;
    etz[70] = C12799;
    etz[71] = C12808;
    etz[72] = C12817;
    etz[73] = C12818;
    etz[74] = C12835;
    etz[75] = C12836;
    etz[76] = C12853;
    etz[77] = C12854;
    etz[78] = C12871;
    etz[79] = C12872;
    etz[80] = C12889;
    etz[81] = C12890;
    etz[82] = C12907;
    etz[83] = C12908;
    etz[84] = C12925;
    etz[85] = C12926;
    etz[86] = C12943;
    etz[87] = C12944;
    etz[88] = C12961;
    etz[89] = C12962;
    etz[90] = C12979;
    etz[91] = C12980;
    etz[92] = C12997;
    etz[93] = C12998;
    etz[94] = C13015;
    etz[95] = C13016;
    etz[96] = C13033;
    etz[97] = C13042;
    etz[98] = C13051;
    etz[99] = C13060;
    etz[100] = C13069;
    etz[101] = C13078;
    etz[102] = C13087;
    etz[103] = C13096;
    etz[104] = C13105;
    etz[105] = C13114;
    etz[106] = C13123;
    etz[107] = C13132;
    etz[108] = C13141;
    etz[109] = C13150;
    etz[110] = C13159;
    etz[111] = C13168;
    etz[112] = C13177;
    etz[113] = C13186;
    etz[114] = C13195;
    etz[115] = C13204;
    etz[116] = C13213;
    etz[117] = C13222;
    etz[118] = C13231;
    etz[119] = C13240;
    etz[120] = C13249;
    etz[121] = C13258;
    etz[122] = C13267;
    etz[123] = C13276;
    etz[124] = C13285;
    etz[125] = C13294;
    etz[126] = C13303;
    etz[127] = C13320;
    etz[128] = C13337;
    etz[129] = C13354;
    etz[130] = C13371;
    etz[131] = C13388;
    etz[132] = C13406;
    etz[133] = C13407;
    etz[134] = C13425;
    etz[135] = C13426;
    etz[136] = C13444;
    etz[137] = C13445;
    etz[138] = C13463;
    etz[139] = C13464;
    etz[140] = C13482;
    etz[141] = C13483;
    etz[142] = C13501;
    etz[143] = C13502;
    etz[144] = C13519;
    etz[145] = C13528;
    etz[146] = C13537;
    etz[147] = C13546;
    etz[148] = C13555;
    etz[149] = C13564;
    etz[150] = C13573;
    etz[151] = C13582;
    etz[152] = C13591;
    etz[153] = C13600;
    etz[154] = C13609;
    etz[155] = C13618;
    etz[156] = C13627;
    etz[157] = C13636;
    etz[158] = C13645;
    etz[159] = C13654;
    etz[160] = C13663;
    etz[161] = C13672;
    etz[162] = C13689;
    etz[163] = C13706;
    etz[164] = C13723;
    etz[165] = C13740;
    etz[166] = C13757;
    etz[167] = C13774;
    etz[168] = C13831;
    etz[169] = C13848;
    etz[170] = C13865;
    etz[171] = C13882;
    etz[172] = C13899;
    etz[173] = C13916;
    etz[174] = C13941;
    etz[175] = C13958;
    etz[176] = C13975;
    etz[177] = C13992;
    etz[178] = C14009;
    etz[179] = C14026;
    etz[180] = C14235;
    etz[181] = C14252;
    etz[182] = C14269;
    etz[183] = C14286;
    etz[184] = C14303;
    etz[185] = C14320;
}
