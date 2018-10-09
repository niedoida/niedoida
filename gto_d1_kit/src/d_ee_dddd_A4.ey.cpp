/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2222_1(const double ae,
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
                         double* const gx,
                         double* const gy,
                         double* const gz)
{
    double g[1891];
    eri_gradient_2222_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[165];
    double vry[165];
    double vrz[165];
    eri_gradient_2222_1_vr(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           vrx,
                           vry,
                           vrz);
    double etx[961];
    double ety[961];
    double etz[961];
    eri_gradient_2222_1_et(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           vrx,
                           vry,
                           vrz,
                           etx,
                           ety,
                           etz);
    double hrx[1296];
    double hry[1296];
    double hrz[1296];
    eri_gradient_2222_1_hr(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           etx,
                           ety,
                           etz,
                           hrx,
                           hry,
                           hrz);
    const double C40 = hrx[0];
    const double C49 = hrx[1];
    const double C56 = hrx[2];
    const double C63 = hrx[3];
    const double C70 = hrx[4];
    const double C77 = hrx[5];
    const double C84 = hrx[6];
    const double C91 = hrx[7];
    const double C98 = hrx[8];
    const double C105 = hrx[9];
    const double C112 = hrx[10];
    const double C119 = hrx[11];
    const double C126 = hrx[12];
    const double C133 = hrx[13];
    const double C140 = hrx[14];
    const double C147 = hrx[15];
    const double C154 = hrx[16];
    const double C161 = hrx[17];
    const double C168 = hrx[18];
    const double C175 = hrx[19];
    const double C182 = hrx[20];
    const double C189 = hrx[21];
    const double C196 = hrx[22];
    const double C203 = hrx[23];
    const double C210 = hrx[24];
    const double C217 = hrx[25];
    const double C224 = hrx[26];
    const double C231 = hrx[27];
    const double C238 = hrx[28];
    const double C245 = hrx[29];
    const double C252 = hrx[30];
    const double C259 = hrx[31];
    const double C266 = hrx[32];
    const double C273 = hrx[33];
    const double C280 = hrx[34];
    const double C287 = hrx[35];
    const double C294 = hrx[36];
    const double C301 = hrx[37];
    const double C308 = hrx[38];
    const double C315 = hrx[39];
    const double C322 = hrx[40];
    const double C329 = hrx[41];
    const double C336 = hrx[42];
    const double C343 = hrx[43];
    const double C350 = hrx[44];
    const double C357 = hrx[45];
    const double C364 = hrx[46];
    const double C371 = hrx[47];
    const double C378 = hrx[48];
    const double C385 = hrx[49];
    const double C392 = hrx[50];
    const double C399 = hrx[51];
    const double C406 = hrx[52];
    const double C413 = hrx[53];
    const double C420 = hrx[54];
    const double C427 = hrx[55];
    const double C434 = hrx[56];
    const double C441 = hrx[57];
    const double C448 = hrx[58];
    const double C455 = hrx[59];
    const double C462 = hrx[60];
    const double C469 = hrx[61];
    const double C476 = hrx[62];
    const double C483 = hrx[63];
    const double C490 = hrx[64];
    const double C497 = hrx[65];
    const double C504 = hrx[66];
    const double C511 = hrx[67];
    const double C518 = hrx[68];
    const double C525 = hrx[69];
    const double C532 = hrx[70];
    const double C539 = hrx[71];
    const double C546 = hrx[72];
    const double C553 = hrx[73];
    const double C560 = hrx[74];
    const double C567 = hrx[75];
    const double C574 = hrx[76];
    const double C581 = hrx[77];
    const double C588 = hrx[78];
    const double C595 = hrx[79];
    const double C602 = hrx[80];
    const double C609 = hrx[81];
    const double C616 = hrx[82];
    const double C623 = hrx[83];
    const double C630 = hrx[84];
    const double C637 = hrx[85];
    const double C644 = hrx[86];
    const double C651 = hrx[87];
    const double C658 = hrx[88];
    const double C665 = hrx[89];
    const double C672 = hrx[90];
    const double C679 = hrx[91];
    const double C686 = hrx[92];
    const double C693 = hrx[93];
    const double C700 = hrx[94];
    const double C707 = hrx[95];
    const double C714 = hrx[96];
    const double C721 = hrx[97];
    const double C728 = hrx[98];
    const double C735 = hrx[99];
    const double C742 = hrx[100];
    const double C749 = hrx[101];
    const double C756 = hrx[102];
    const double C763 = hrx[103];
    const double C770 = hrx[104];
    const double C777 = hrx[105];
    const double C784 = hrx[106];
    const double C791 = hrx[107];
    const double C798 = hrx[108];
    const double C805 = hrx[109];
    const double C812 = hrx[110];
    const double C819 = hrx[111];
    const double C826 = hrx[112];
    const double C833 = hrx[113];
    const double C840 = hrx[114];
    const double C847 = hrx[115];
    const double C854 = hrx[116];
    const double C861 = hrx[117];
    const double C868 = hrx[118];
    const double C875 = hrx[119];
    const double C882 = hrx[120];
    const double C889 = hrx[121];
    const double C896 = hrx[122];
    const double C903 = hrx[123];
    const double C910 = hrx[124];
    const double C917 = hrx[125];
    const double C924 = hrx[126];
    const double C931 = hrx[127];
    const double C938 = hrx[128];
    const double C945 = hrx[129];
    const double C952 = hrx[130];
    const double C959 = hrx[131];
    const double C966 = hrx[132];
    const double C973 = hrx[133];
    const double C980 = hrx[134];
    const double C987 = hrx[135];
    const double C994 = hrx[136];
    const double C1001 = hrx[137];
    const double C1008 = hrx[138];
    const double C1015 = hrx[139];
    const double C1022 = hrx[140];
    const double C1029 = hrx[141];
    const double C1036 = hrx[142];
    const double C1043 = hrx[143];
    const double C1050 = hrx[144];
    const double C1057 = hrx[145];
    const double C1064 = hrx[146];
    const double C1071 = hrx[147];
    const double C1078 = hrx[148];
    const double C1085 = hrx[149];
    const double C1092 = hrx[150];
    const double C1099 = hrx[151];
    const double C1106 = hrx[152];
    const double C1113 = hrx[153];
    const double C1120 = hrx[154];
    const double C1127 = hrx[155];
    const double C1134 = hrx[156];
    const double C1141 = hrx[157];
    const double C1148 = hrx[158];
    const double C1155 = hrx[159];
    const double C1162 = hrx[160];
    const double C1169 = hrx[161];
    const double C1176 = hrx[162];
    const double C1183 = hrx[163];
    const double C1190 = hrx[164];
    const double C1197 = hrx[165];
    const double C1204 = hrx[166];
    const double C1211 = hrx[167];
    const double C1218 = hrx[168];
    const double C1225 = hrx[169];
    const double C1232 = hrx[170];
    const double C1239 = hrx[171];
    const double C1246 = hrx[172];
    const double C1253 = hrx[173];
    const double C1260 = hrx[174];
    const double C1267 = hrx[175];
    const double C1274 = hrx[176];
    const double C1281 = hrx[177];
    const double C1288 = hrx[178];
    const double C1295 = hrx[179];
    const double C1302 = hrx[180];
    const double C1309 = hrx[181];
    const double C1316 = hrx[182];
    const double C1323 = hrx[183];
    const double C1330 = hrx[184];
    const double C1337 = hrx[185];
    const double C1344 = hrx[186];
    const double C1351 = hrx[187];
    const double C1358 = hrx[188];
    const double C1365 = hrx[189];
    const double C1372 = hrx[190];
    const double C1379 = hrx[191];
    const double C1386 = hrx[192];
    const double C1393 = hrx[193];
    const double C1400 = hrx[194];
    const double C1407 = hrx[195];
    const double C1414 = hrx[196];
    const double C1421 = hrx[197];
    const double C1428 = hrx[198];
    const double C1435 = hrx[199];
    const double C1442 = hrx[200];
    const double C1449 = hrx[201];
    const double C1456 = hrx[202];
    const double C1463 = hrx[203];
    const double C1470 = hrx[204];
    const double C1477 = hrx[205];
    const double C1484 = hrx[206];
    const double C1491 = hrx[207];
    const double C1498 = hrx[208];
    const double C1505 = hrx[209];
    const double C1512 = hrx[210];
    const double C1519 = hrx[211];
    const double C1526 = hrx[212];
    const double C1533 = hrx[213];
    const double C1540 = hrx[214];
    const double C1547 = hrx[215];
    const double C1554 = hrx[216];
    const double C1561 = hrx[217];
    const double C1568 = hrx[218];
    const double C1575 = hrx[219];
    const double C1582 = hrx[220];
    const double C1589 = hrx[221];
    const double C1596 = hrx[222];
    const double C1603 = hrx[223];
    const double C1610 = hrx[224];
    const double C1617 = hrx[225];
    const double C1624 = hrx[226];
    const double C1631 = hrx[227];
    const double C1638 = hrx[228];
    const double C1645 = hrx[229];
    const double C1652 = hrx[230];
    const double C1659 = hrx[231];
    const double C1666 = hrx[232];
    const double C1673 = hrx[233];
    const double C1680 = hrx[234];
    const double C1687 = hrx[235];
    const double C1694 = hrx[236];
    const double C1701 = hrx[237];
    const double C1708 = hrx[238];
    const double C1715 = hrx[239];
    const double C1722 = hrx[240];
    const double C1729 = hrx[241];
    const double C1736 = hrx[242];
    const double C1743 = hrx[243];
    const double C1750 = hrx[244];
    const double C1757 = hrx[245];
    const double C1764 = hrx[246];
    const double C1771 = hrx[247];
    const double C1778 = hrx[248];
    const double C1785 = hrx[249];
    const double C1792 = hrx[250];
    const double C1799 = hrx[251];
    const double C1806 = hrx[252];
    const double C1813 = hrx[253];
    const double C1820 = hrx[254];
    const double C1827 = hrx[255];
    const double C1834 = hrx[256];
    const double C1841 = hrx[257];
    const double C1848 = hrx[258];
    const double C1855 = hrx[259];
    const double C1862 = hrx[260];
    const double C1869 = hrx[261];
    const double C1876 = hrx[262];
    const double C1883 = hrx[263];
    const double C1890 = hrx[264];
    const double C1897 = hrx[265];
    const double C1904 = hrx[266];
    const double C1911 = hrx[267];
    const double C1918 = hrx[268];
    const double C1925 = hrx[269];
    const double C1932 = hrx[270];
    const double C1939 = hrx[271];
    const double C1946 = hrx[272];
    const double C1953 = hrx[273];
    const double C1960 = hrx[274];
    const double C1967 = hrx[275];
    const double C1974 = hrx[276];
    const double C1981 = hrx[277];
    const double C1988 = hrx[278];
    const double C1995 = hrx[279];
    const double C2002 = hrx[280];
    const double C2009 = hrx[281];
    const double C2016 = hrx[282];
    const double C2023 = hrx[283];
    const double C2030 = hrx[284];
    const double C2037 = hrx[285];
    const double C2044 = hrx[286];
    const double C2051 = hrx[287];
    const double C2058 = hrx[288];
    const double C2065 = hrx[289];
    const double C2072 = hrx[290];
    const double C2079 = hrx[291];
    const double C2086 = hrx[292];
    const double C2093 = hrx[293];
    const double C2100 = hrx[294];
    const double C2107 = hrx[295];
    const double C2114 = hrx[296];
    const double C2121 = hrx[297];
    const double C2128 = hrx[298];
    const double C2135 = hrx[299];
    const double C2142 = hrx[300];
    const double C2149 = hrx[301];
    const double C2156 = hrx[302];
    const double C2163 = hrx[303];
    const double C2170 = hrx[304];
    const double C2177 = hrx[305];
    const double C2184 = hrx[306];
    const double C2191 = hrx[307];
    const double C2198 = hrx[308];
    const double C2205 = hrx[309];
    const double C2212 = hrx[310];
    const double C2219 = hrx[311];
    const double C2226 = hrx[312];
    const double C2233 = hrx[313];
    const double C2240 = hrx[314];
    const double C2247 = hrx[315];
    const double C2254 = hrx[316];
    const double C2261 = hrx[317];
    const double C2268 = hrx[318];
    const double C2275 = hrx[319];
    const double C2282 = hrx[320];
    const double C2289 = hrx[321];
    const double C2296 = hrx[322];
    const double C2303 = hrx[323];
    const double C2310 = hrx[324];
    const double C2317 = hrx[325];
    const double C2324 = hrx[326];
    const double C2331 = hrx[327];
    const double C2338 = hrx[328];
    const double C2345 = hrx[329];
    const double C2352 = hrx[330];
    const double C2359 = hrx[331];
    const double C2366 = hrx[332];
    const double C2373 = hrx[333];
    const double C2380 = hrx[334];
    const double C2387 = hrx[335];
    const double C2394 = hrx[336];
    const double C2401 = hrx[337];
    const double C2408 = hrx[338];
    const double C2415 = hrx[339];
    const double C2422 = hrx[340];
    const double C2429 = hrx[341];
    const double C2436 = hrx[342];
    const double C2443 = hrx[343];
    const double C2450 = hrx[344];
    const double C2457 = hrx[345];
    const double C2464 = hrx[346];
    const double C2471 = hrx[347];
    const double C2478 = hrx[348];
    const double C2485 = hrx[349];
    const double C2492 = hrx[350];
    const double C2499 = hrx[351];
    const double C2506 = hrx[352];
    const double C2513 = hrx[353];
    const double C2520 = hrx[354];
    const double C2527 = hrx[355];
    const double C2534 = hrx[356];
    const double C2541 = hrx[357];
    const double C2548 = hrx[358];
    const double C2555 = hrx[359];
    const double C2562 = hrx[360];
    const double C2569 = hrx[361];
    const double C2576 = hrx[362];
    const double C2583 = hrx[363];
    const double C2590 = hrx[364];
    const double C2597 = hrx[365];
    const double C2604 = hrx[366];
    const double C2611 = hrx[367];
    const double C2618 = hrx[368];
    const double C2625 = hrx[369];
    const double C2632 = hrx[370];
    const double C2639 = hrx[371];
    const double C2646 = hrx[372];
    const double C2653 = hrx[373];
    const double C2660 = hrx[374];
    const double C2667 = hrx[375];
    const double C2674 = hrx[376];
    const double C2681 = hrx[377];
    const double C2688 = hrx[378];
    const double C2695 = hrx[379];
    const double C2702 = hrx[380];
    const double C2709 = hrx[381];
    const double C2716 = hrx[382];
    const double C2723 = hrx[383];
    const double C2730 = hrx[384];
    const double C2737 = hrx[385];
    const double C2744 = hrx[386];
    const double C2751 = hrx[387];
    const double C2758 = hrx[388];
    const double C2765 = hrx[389];
    const double C2772 = hrx[390];
    const double C2779 = hrx[391];
    const double C2786 = hrx[392];
    const double C2793 = hrx[393];
    const double C2800 = hrx[394];
    const double C2807 = hrx[395];
    const double C2814 = hrx[396];
    const double C2821 = hrx[397];
    const double C2828 = hrx[398];
    const double C2835 = hrx[399];
    const double C2842 = hrx[400];
    const double C2849 = hrx[401];
    const double C2856 = hrx[402];
    const double C2863 = hrx[403];
    const double C2870 = hrx[404];
    const double C2877 = hrx[405];
    const double C2884 = hrx[406];
    const double C2891 = hrx[407];
    const double C2898 = hrx[408];
    const double C2905 = hrx[409];
    const double C2912 = hrx[410];
    const double C2919 = hrx[411];
    const double C2926 = hrx[412];
    const double C2933 = hrx[413];
    const double C2940 = hrx[414];
    const double C2947 = hrx[415];
    const double C2954 = hrx[416];
    const double C2961 = hrx[417];
    const double C2968 = hrx[418];
    const double C2975 = hrx[419];
    const double C2982 = hrx[420];
    const double C2989 = hrx[421];
    const double C2996 = hrx[422];
    const double C3003 = hrx[423];
    const double C3010 = hrx[424];
    const double C3017 = hrx[425];
    const double C3024 = hrx[426];
    const double C3031 = hrx[427];
    const double C3038 = hrx[428];
    const double C3045 = hrx[429];
    const double C3052 = hrx[430];
    const double C3059 = hrx[431];
    const double C3066 = hrx[432];
    const double C3073 = hrx[433];
    const double C3080 = hrx[434];
    const double C3087 = hrx[435];
    const double C3094 = hrx[436];
    const double C3101 = hrx[437];
    const double C3108 = hrx[438];
    const double C3115 = hrx[439];
    const double C3122 = hrx[440];
    const double C3129 = hrx[441];
    const double C3136 = hrx[442];
    const double C3143 = hrx[443];
    const double C3150 = hrx[444];
    const double C3157 = hrx[445];
    const double C3164 = hrx[446];
    const double C3171 = hrx[447];
    const double C3178 = hrx[448];
    const double C3185 = hrx[449];
    const double C3192 = hrx[450];
    const double C3199 = hrx[451];
    const double C3206 = hrx[452];
    const double C3213 = hrx[453];
    const double C3220 = hrx[454];
    const double C3227 = hrx[455];
    const double C3234 = hrx[456];
    const double C3241 = hrx[457];
    const double C3248 = hrx[458];
    const double C3255 = hrx[459];
    const double C3262 = hrx[460];
    const double C3269 = hrx[461];
    const double C3276 = hrx[462];
    const double C3283 = hrx[463];
    const double C3290 = hrx[464];
    const double C3297 = hrx[465];
    const double C3304 = hrx[466];
    const double C3311 = hrx[467];
    const double C3318 = hrx[468];
    const double C3325 = hrx[469];
    const double C3332 = hrx[470];
    const double C3339 = hrx[471];
    const double C3346 = hrx[472];
    const double C3353 = hrx[473];
    const double C3360 = hrx[474];
    const double C3367 = hrx[475];
    const double C3374 = hrx[476];
    const double C3381 = hrx[477];
    const double C3388 = hrx[478];
    const double C3395 = hrx[479];
    const double C3402 = hrx[480];
    const double C3409 = hrx[481];
    const double C3416 = hrx[482];
    const double C3423 = hrx[483];
    const double C3430 = hrx[484];
    const double C3437 = hrx[485];
    const double C3444 = hrx[486];
    const double C3451 = hrx[487];
    const double C3458 = hrx[488];
    const double C3465 = hrx[489];
    const double C3472 = hrx[490];
    const double C3479 = hrx[491];
    const double C3486 = hrx[492];
    const double C3493 = hrx[493];
    const double C3500 = hrx[494];
    const double C3507 = hrx[495];
    const double C3514 = hrx[496];
    const double C3521 = hrx[497];
    const double C3528 = hrx[498];
    const double C3535 = hrx[499];
    const double C3542 = hrx[500];
    const double C3549 = hrx[501];
    const double C3556 = hrx[502];
    const double C3563 = hrx[503];
    const double C3570 = hrx[504];
    const double C3577 = hrx[505];
    const double C3584 = hrx[506];
    const double C3591 = hrx[507];
    const double C3598 = hrx[508];
    const double C3605 = hrx[509];
    const double C3612 = hrx[510];
    const double C3619 = hrx[511];
    const double C3626 = hrx[512];
    const double C3633 = hrx[513];
    const double C3640 = hrx[514];
    const double C3647 = hrx[515];
    const double C3654 = hrx[516];
    const double C3661 = hrx[517];
    const double C3668 = hrx[518];
    const double C3675 = hrx[519];
    const double C3682 = hrx[520];
    const double C3689 = hrx[521];
    const double C3696 = hrx[522];
    const double C3703 = hrx[523];
    const double C3710 = hrx[524];
    const double C3717 = hrx[525];
    const double C3724 = hrx[526];
    const double C3731 = hrx[527];
    const double C3738 = hrx[528];
    const double C3745 = hrx[529];
    const double C3752 = hrx[530];
    const double C3759 = hrx[531];
    const double C3766 = hrx[532];
    const double C3773 = hrx[533];
    const double C3780 = hrx[534];
    const double C3787 = hrx[535];
    const double C3794 = hrx[536];
    const double C3801 = hrx[537];
    const double C3808 = hrx[538];
    const double C3815 = hrx[539];
    const double C3822 = hrx[540];
    const double C3829 = hrx[541];
    const double C3836 = hrx[542];
    const double C3843 = hrx[543];
    const double C3850 = hrx[544];
    const double C3857 = hrx[545];
    const double C3864 = hrx[546];
    const double C3871 = hrx[547];
    const double C3878 = hrx[548];
    const double C3885 = hrx[549];
    const double C3892 = hrx[550];
    const double C3899 = hrx[551];
    const double C3906 = hrx[552];
    const double C3913 = hrx[553];
    const double C3920 = hrx[554];
    const double C3927 = hrx[555];
    const double C3934 = hrx[556];
    const double C3941 = hrx[557];
    const double C3948 = hrx[558];
    const double C3955 = hrx[559];
    const double C3962 = hrx[560];
    const double C3969 = hrx[561];
    const double C3976 = hrx[562];
    const double C3983 = hrx[563];
    const double C3990 = hrx[564];
    const double C3997 = hrx[565];
    const double C4004 = hrx[566];
    const double C4011 = hrx[567];
    const double C4018 = hrx[568];
    const double C4025 = hrx[569];
    const double C4032 = hrx[570];
    const double C4039 = hrx[571];
    const double C4046 = hrx[572];
    const double C4053 = hrx[573];
    const double C4060 = hrx[574];
    const double C4067 = hrx[575];
    const double C4074 = hrx[576];
    const double C4081 = hrx[577];
    const double C4088 = hrx[578];
    const double C4095 = hrx[579];
    const double C4102 = hrx[580];
    const double C4109 = hrx[581];
    const double C4116 = hrx[582];
    const double C4123 = hrx[583];
    const double C4130 = hrx[584];
    const double C4137 = hrx[585];
    const double C4144 = hrx[586];
    const double C4151 = hrx[587];
    const double C4158 = hrx[588];
    const double C4165 = hrx[589];
    const double C4172 = hrx[590];
    const double C4179 = hrx[591];
    const double C4186 = hrx[592];
    const double C4193 = hrx[593];
    const double C4200 = hrx[594];
    const double C4207 = hrx[595];
    const double C4214 = hrx[596];
    const double C4221 = hrx[597];
    const double C4228 = hrx[598];
    const double C4235 = hrx[599];
    const double C4242 = hrx[600];
    const double C4249 = hrx[601];
    const double C4256 = hrx[602];
    const double C4263 = hrx[603];
    const double C4270 = hrx[604];
    const double C4277 = hrx[605];
    const double C4284 = hrx[606];
    const double C4291 = hrx[607];
    const double C4298 = hrx[608];
    const double C4305 = hrx[609];
    const double C4312 = hrx[610];
    const double C4319 = hrx[611];
    const double C4326 = hrx[612];
    const double C4333 = hrx[613];
    const double C4340 = hrx[614];
    const double C4347 = hrx[615];
    const double C4354 = hrx[616];
    const double C4361 = hrx[617];
    const double C4368 = hrx[618];
    const double C4375 = hrx[619];
    const double C4382 = hrx[620];
    const double C4389 = hrx[621];
    const double C4396 = hrx[622];
    const double C4403 = hrx[623];
    const double C4410 = hrx[624];
    const double C4417 = hrx[625];
    const double C4424 = hrx[626];
    const double C4431 = hrx[627];
    const double C4438 = hrx[628];
    const double C4445 = hrx[629];
    const double C4452 = hrx[630];
    const double C4459 = hrx[631];
    const double C4466 = hrx[632];
    const double C4473 = hrx[633];
    const double C4480 = hrx[634];
    const double C4487 = hrx[635];
    const double C4494 = hrx[636];
    const double C4501 = hrx[637];
    const double C4508 = hrx[638];
    const double C4515 = hrx[639];
    const double C4522 = hrx[640];
    const double C4529 = hrx[641];
    const double C4536 = hrx[642];
    const double C4543 = hrx[643];
    const double C4550 = hrx[644];
    const double C4557 = hrx[645];
    const double C4564 = hrx[646];
    const double C4571 = hrx[647];
    const double C4578 = hrx[648];
    const double C4585 = hrx[649];
    const double C4592 = hrx[650];
    const double C4599 = hrx[651];
    const double C4606 = hrx[652];
    const double C4613 = hrx[653];
    const double C4620 = hrx[654];
    const double C4627 = hrx[655];
    const double C4634 = hrx[656];
    const double C4641 = hrx[657];
    const double C4648 = hrx[658];
    const double C4655 = hrx[659];
    const double C4662 = hrx[660];
    const double C4669 = hrx[661];
    const double C4676 = hrx[662];
    const double C4683 = hrx[663];
    const double C4690 = hrx[664];
    const double C4697 = hrx[665];
    const double C4704 = hrx[666];
    const double C4711 = hrx[667];
    const double C4718 = hrx[668];
    const double C4725 = hrx[669];
    const double C4732 = hrx[670];
    const double C4739 = hrx[671];
    const double C4746 = hrx[672];
    const double C4753 = hrx[673];
    const double C4760 = hrx[674];
    const double C4767 = hrx[675];
    const double C4774 = hrx[676];
    const double C4781 = hrx[677];
    const double C4788 = hrx[678];
    const double C4795 = hrx[679];
    const double C4802 = hrx[680];
    const double C4809 = hrx[681];
    const double C4816 = hrx[682];
    const double C4823 = hrx[683];
    const double C4830 = hrx[684];
    const double C4837 = hrx[685];
    const double C4844 = hrx[686];
    const double C4851 = hrx[687];
    const double C4858 = hrx[688];
    const double C4865 = hrx[689];
    const double C4872 = hrx[690];
    const double C4879 = hrx[691];
    const double C4886 = hrx[692];
    const double C4893 = hrx[693];
    const double C4900 = hrx[694];
    const double C4907 = hrx[695];
    const double C4914 = hrx[696];
    const double C4921 = hrx[697];
    const double C4928 = hrx[698];
    const double C4935 = hrx[699];
    const double C4942 = hrx[700];
    const double C4949 = hrx[701];
    const double C4956 = hrx[702];
    const double C4963 = hrx[703];
    const double C4970 = hrx[704];
    const double C4977 = hrx[705];
    const double C4984 = hrx[706];
    const double C4991 = hrx[707];
    const double C4998 = hrx[708];
    const double C5005 = hrx[709];
    const double C5012 = hrx[710];
    const double C5019 = hrx[711];
    const double C5026 = hrx[712];
    const double C5033 = hrx[713];
    const double C5040 = hrx[714];
    const double C5047 = hrx[715];
    const double C5054 = hrx[716];
    const double C5061 = hrx[717];
    const double C5068 = hrx[718];
    const double C5075 = hrx[719];
    const double C5082 = hrx[720];
    const double C5089 = hrx[721];
    const double C5096 = hrx[722];
    const double C5103 = hrx[723];
    const double C5110 = hrx[724];
    const double C5117 = hrx[725];
    const double C5124 = hrx[726];
    const double C5131 = hrx[727];
    const double C5138 = hrx[728];
    const double C5145 = hrx[729];
    const double C5152 = hrx[730];
    const double C5159 = hrx[731];
    const double C5166 = hrx[732];
    const double C5173 = hrx[733];
    const double C5180 = hrx[734];
    const double C5187 = hrx[735];
    const double C5194 = hrx[736];
    const double C5201 = hrx[737];
    const double C5208 = hrx[738];
    const double C5215 = hrx[739];
    const double C5222 = hrx[740];
    const double C5229 = hrx[741];
    const double C5236 = hrx[742];
    const double C5243 = hrx[743];
    const double C5250 = hrx[744];
    const double C5257 = hrx[745];
    const double C5264 = hrx[746];
    const double C5271 = hrx[747];
    const double C5278 = hrx[748];
    const double C5285 = hrx[749];
    const double C5292 = hrx[750];
    const double C5299 = hrx[751];
    const double C5306 = hrx[752];
    const double C5313 = hrx[753];
    const double C5320 = hrx[754];
    const double C5327 = hrx[755];
    const double C5334 = hrx[756];
    const double C5341 = hrx[757];
    const double C5348 = hrx[758];
    const double C5355 = hrx[759];
    const double C5362 = hrx[760];
    const double C5369 = hrx[761];
    const double C5376 = hrx[762];
    const double C5383 = hrx[763];
    const double C5390 = hrx[764];
    const double C5397 = hrx[765];
    const double C5404 = hrx[766];
    const double C5411 = hrx[767];
    const double C5418 = hrx[768];
    const double C5425 = hrx[769];
    const double C5432 = hrx[770];
    const double C5439 = hrx[771];
    const double C5446 = hrx[772];
    const double C5453 = hrx[773];
    const double C5460 = hrx[774];
    const double C5467 = hrx[775];
    const double C5474 = hrx[776];
    const double C5481 = hrx[777];
    const double C5488 = hrx[778];
    const double C5495 = hrx[779];
    const double C5502 = hrx[780];
    const double C5509 = hrx[781];
    const double C5516 = hrx[782];
    const double C5523 = hrx[783];
    const double C5530 = hrx[784];
    const double C5537 = hrx[785];
    const double C5544 = hrx[786];
    const double C5551 = hrx[787];
    const double C5558 = hrx[788];
    const double C5565 = hrx[789];
    const double C5572 = hrx[790];
    const double C5579 = hrx[791];
    const double C5586 = hrx[792];
    const double C5593 = hrx[793];
    const double C5600 = hrx[794];
    const double C5607 = hrx[795];
    const double C5614 = hrx[796];
    const double C5621 = hrx[797];
    const double C5628 = hrx[798];
    const double C5635 = hrx[799];
    const double C5642 = hrx[800];
    const double C5649 = hrx[801];
    const double C5656 = hrx[802];
    const double C5663 = hrx[803];
    const double C5670 = hrx[804];
    const double C5677 = hrx[805];
    const double C5684 = hrx[806];
    const double C5691 = hrx[807];
    const double C5698 = hrx[808];
    const double C5705 = hrx[809];
    const double C5712 = hrx[810];
    const double C5719 = hrx[811];
    const double C5726 = hrx[812];
    const double C5733 = hrx[813];
    const double C5740 = hrx[814];
    const double C5747 = hrx[815];
    const double C5754 = hrx[816];
    const double C5761 = hrx[817];
    const double C5768 = hrx[818];
    const double C5775 = hrx[819];
    const double C5782 = hrx[820];
    const double C5789 = hrx[821];
    const double C5796 = hrx[822];
    const double C5803 = hrx[823];
    const double C5810 = hrx[824];
    const double C5817 = hrx[825];
    const double C5824 = hrx[826];
    const double C5831 = hrx[827];
    const double C5838 = hrx[828];
    const double C5845 = hrx[829];
    const double C5852 = hrx[830];
    const double C5859 = hrx[831];
    const double C5866 = hrx[832];
    const double C5873 = hrx[833];
    const double C5880 = hrx[834];
    const double C5887 = hrx[835];
    const double C5894 = hrx[836];
    const double C5901 = hrx[837];
    const double C5908 = hrx[838];
    const double C5915 = hrx[839];
    const double C5922 = hrx[840];
    const double C5929 = hrx[841];
    const double C5936 = hrx[842];
    const double C5943 = hrx[843];
    const double C5950 = hrx[844];
    const double C5957 = hrx[845];
    const double C5964 = hrx[846];
    const double C5971 = hrx[847];
    const double C5978 = hrx[848];
    const double C5985 = hrx[849];
    const double C5992 = hrx[850];
    const double C5999 = hrx[851];
    const double C6006 = hrx[852];
    const double C6013 = hrx[853];
    const double C6020 = hrx[854];
    const double C6027 = hrx[855];
    const double C6034 = hrx[856];
    const double C6041 = hrx[857];
    const double C6048 = hrx[858];
    const double C6055 = hrx[859];
    const double C6062 = hrx[860];
    const double C6069 = hrx[861];
    const double C6076 = hrx[862];
    const double C6083 = hrx[863];
    const double C6090 = hrx[864];
    const double C6097 = hrx[865];
    const double C6104 = hrx[866];
    const double C6111 = hrx[867];
    const double C6118 = hrx[868];
    const double C6125 = hrx[869];
    const double C6132 = hrx[870];
    const double C6139 = hrx[871];
    const double C6146 = hrx[872];
    const double C6153 = hrx[873];
    const double C6160 = hrx[874];
    const double C6167 = hrx[875];
    const double C6174 = hrx[876];
    const double C6181 = hrx[877];
    const double C6188 = hrx[878];
    const double C6195 = hrx[879];
    const double C6202 = hrx[880];
    const double C6209 = hrx[881];
    const double C6216 = hrx[882];
    const double C6223 = hrx[883];
    const double C6230 = hrx[884];
    const double C6237 = hrx[885];
    const double C6244 = hrx[886];
    const double C6251 = hrx[887];
    const double C6258 = hrx[888];
    const double C6265 = hrx[889];
    const double C6272 = hrx[890];
    const double C6279 = hrx[891];
    const double C6286 = hrx[892];
    const double C6293 = hrx[893];
    const double C6300 = hrx[894];
    const double C6307 = hrx[895];
    const double C6314 = hrx[896];
    const double C6321 = hrx[897];
    const double C6328 = hrx[898];
    const double C6335 = hrx[899];
    const double C6342 = hrx[900];
    const double C6349 = hrx[901];
    const double C6356 = hrx[902];
    const double C6363 = hrx[903];
    const double C6370 = hrx[904];
    const double C6377 = hrx[905];
    const double C6384 = hrx[906];
    const double C6391 = hrx[907];
    const double C6398 = hrx[908];
    const double C6405 = hrx[909];
    const double C6412 = hrx[910];
    const double C6419 = hrx[911];
    const double C6426 = hrx[912];
    const double C6433 = hrx[913];
    const double C6440 = hrx[914];
    const double C6447 = hrx[915];
    const double C6454 = hrx[916];
    const double C6461 = hrx[917];
    const double C6468 = hrx[918];
    const double C6475 = hrx[919];
    const double C6482 = hrx[920];
    const double C6489 = hrx[921];
    const double C6496 = hrx[922];
    const double C6503 = hrx[923];
    const double C6510 = hrx[924];
    const double C6517 = hrx[925];
    const double C6524 = hrx[926];
    const double C6531 = hrx[927];
    const double C6538 = hrx[928];
    const double C6545 = hrx[929];
    const double C6552 = hrx[930];
    const double C6559 = hrx[931];
    const double C6566 = hrx[932];
    const double C6573 = hrx[933];
    const double C6580 = hrx[934];
    const double C6587 = hrx[935];
    const double C6594 = hrx[936];
    const double C6601 = hrx[937];
    const double C6608 = hrx[938];
    const double C6615 = hrx[939];
    const double C6622 = hrx[940];
    const double C6629 = hrx[941];
    const double C6636 = hrx[942];
    const double C6643 = hrx[943];
    const double C6650 = hrx[944];
    const double C6657 = hrx[945];
    const double C6664 = hrx[946];
    const double C6671 = hrx[947];
    const double C6678 = hrx[948];
    const double C6685 = hrx[949];
    const double C6692 = hrx[950];
    const double C6699 = hrx[951];
    const double C6706 = hrx[952];
    const double C6713 = hrx[953];
    const double C6720 = hrx[954];
    const double C6727 = hrx[955];
    const double C6734 = hrx[956];
    const double C6741 = hrx[957];
    const double C6748 = hrx[958];
    const double C6755 = hrx[959];
    const double C6762 = hrx[960];
    const double C6769 = hrx[961];
    const double C6776 = hrx[962];
    const double C6783 = hrx[963];
    const double C6790 = hrx[964];
    const double C6797 = hrx[965];
    const double C6804 = hrx[966];
    const double C6811 = hrx[967];
    const double C6818 = hrx[968];
    const double C6825 = hrx[969];
    const double C6832 = hrx[970];
    const double C6839 = hrx[971];
    const double C6846 = hrx[972];
    const double C6853 = hrx[973];
    const double C6860 = hrx[974];
    const double C6867 = hrx[975];
    const double C6874 = hrx[976];
    const double C6881 = hrx[977];
    const double C6888 = hrx[978];
    const double C6895 = hrx[979];
    const double C6902 = hrx[980];
    const double C6909 = hrx[981];
    const double C6916 = hrx[982];
    const double C6923 = hrx[983];
    const double C6930 = hrx[984];
    const double C6937 = hrx[985];
    const double C6944 = hrx[986];
    const double C6951 = hrx[987];
    const double C6958 = hrx[988];
    const double C6965 = hrx[989];
    const double C6972 = hrx[990];
    const double C6979 = hrx[991];
    const double C6986 = hrx[992];
    const double C6993 = hrx[993];
    const double C7000 = hrx[994];
    const double C7007 = hrx[995];
    const double C7014 = hrx[996];
    const double C7021 = hrx[997];
    const double C7028 = hrx[998];
    const double C7035 = hrx[999];
    const double C7042 = hrx[1000];
    const double C7049 = hrx[1001];
    const double C7056 = hrx[1002];
    const double C7063 = hrx[1003];
    const double C7070 = hrx[1004];
    const double C7077 = hrx[1005];
    const double C7084 = hrx[1006];
    const double C7091 = hrx[1007];
    const double C7098 = hrx[1008];
    const double C7105 = hrx[1009];
    const double C7112 = hrx[1010];
    const double C7119 = hrx[1011];
    const double C7126 = hrx[1012];
    const double C7133 = hrx[1013];
    const double C7140 = hrx[1014];
    const double C7147 = hrx[1015];
    const double C7154 = hrx[1016];
    const double C7161 = hrx[1017];
    const double C7168 = hrx[1018];
    const double C7175 = hrx[1019];
    const double C7182 = hrx[1020];
    const double C7189 = hrx[1021];
    const double C7196 = hrx[1022];
    const double C7203 = hrx[1023];
    const double C7210 = hrx[1024];
    const double C7217 = hrx[1025];
    const double C7224 = hrx[1026];
    const double C7231 = hrx[1027];
    const double C7238 = hrx[1028];
    const double C7245 = hrx[1029];
    const double C7252 = hrx[1030];
    const double C7259 = hrx[1031];
    const double C7266 = hrx[1032];
    const double C7273 = hrx[1033];
    const double C7280 = hrx[1034];
    const double C7287 = hrx[1035];
    const double C7294 = hrx[1036];
    const double C7301 = hrx[1037];
    const double C7308 = hrx[1038];
    const double C7315 = hrx[1039];
    const double C7322 = hrx[1040];
    const double C7329 = hrx[1041];
    const double C7336 = hrx[1042];
    const double C7343 = hrx[1043];
    const double C7350 = hrx[1044];
    const double C7357 = hrx[1045];
    const double C7364 = hrx[1046];
    const double C7371 = hrx[1047];
    const double C7378 = hrx[1048];
    const double C7385 = hrx[1049];
    const double C7392 = hrx[1050];
    const double C7399 = hrx[1051];
    const double C7406 = hrx[1052];
    const double C7413 = hrx[1053];
    const double C7420 = hrx[1054];
    const double C7427 = hrx[1055];
    const double C7434 = hrx[1056];
    const double C7441 = hrx[1057];
    const double C7448 = hrx[1058];
    const double C7455 = hrx[1059];
    const double C7462 = hrx[1060];
    const double C7469 = hrx[1061];
    const double C7476 = hrx[1062];
    const double C7483 = hrx[1063];
    const double C7490 = hrx[1064];
    const double C7497 = hrx[1065];
    const double C7504 = hrx[1066];
    const double C7511 = hrx[1067];
    const double C7518 = hrx[1068];
    const double C7525 = hrx[1069];
    const double C7532 = hrx[1070];
    const double C7539 = hrx[1071];
    const double C7546 = hrx[1072];
    const double C7553 = hrx[1073];
    const double C7560 = hrx[1074];
    const double C7567 = hrx[1075];
    const double C7574 = hrx[1076];
    const double C7581 = hrx[1077];
    const double C7588 = hrx[1078];
    const double C7595 = hrx[1079];
    const double C7602 = hrx[1080];
    const double C7609 = hrx[1081];
    const double C7616 = hrx[1082];
    const double C7623 = hrx[1083];
    const double C7630 = hrx[1084];
    const double C7637 = hrx[1085];
    const double C7644 = hrx[1086];
    const double C7651 = hrx[1087];
    const double C7658 = hrx[1088];
    const double C7665 = hrx[1089];
    const double C7672 = hrx[1090];
    const double C7679 = hrx[1091];
    const double C7686 = hrx[1092];
    const double C7693 = hrx[1093];
    const double C7700 = hrx[1094];
    const double C7707 = hrx[1095];
    const double C7714 = hrx[1096];
    const double C7721 = hrx[1097];
    const double C7728 = hrx[1098];
    const double C7735 = hrx[1099];
    const double C7742 = hrx[1100];
    const double C7749 = hrx[1101];
    const double C7756 = hrx[1102];
    const double C7763 = hrx[1103];
    const double C7770 = hrx[1104];
    const double C7777 = hrx[1105];
    const double C7784 = hrx[1106];
    const double C7791 = hrx[1107];
    const double C7798 = hrx[1108];
    const double C7805 = hrx[1109];
    const double C7812 = hrx[1110];
    const double C7819 = hrx[1111];
    const double C7826 = hrx[1112];
    const double C7833 = hrx[1113];
    const double C7840 = hrx[1114];
    const double C7847 = hrx[1115];
    const double C7854 = hrx[1116];
    const double C7861 = hrx[1117];
    const double C7868 = hrx[1118];
    const double C7875 = hrx[1119];
    const double C7882 = hrx[1120];
    const double C7889 = hrx[1121];
    const double C7896 = hrx[1122];
    const double C7903 = hrx[1123];
    const double C7910 = hrx[1124];
    const double C7917 = hrx[1125];
    const double C7924 = hrx[1126];
    const double C7931 = hrx[1127];
    const double C7938 = hrx[1128];
    const double C7945 = hrx[1129];
    const double C7952 = hrx[1130];
    const double C7959 = hrx[1131];
    const double C7966 = hrx[1132];
    const double C7973 = hrx[1133];
    const double C7980 = hrx[1134];
    const double C7987 = hrx[1135];
    const double C7994 = hrx[1136];
    const double C8001 = hrx[1137];
    const double C8008 = hrx[1138];
    const double C8015 = hrx[1139];
    const double C8022 = hrx[1140];
    const double C8029 = hrx[1141];
    const double C8036 = hrx[1142];
    const double C8043 = hrx[1143];
    const double C8050 = hrx[1144];
    const double C8057 = hrx[1145];
    const double C8064 = hrx[1146];
    const double C8071 = hrx[1147];
    const double C8078 = hrx[1148];
    const double C8085 = hrx[1149];
    const double C8092 = hrx[1150];
    const double C8099 = hrx[1151];
    const double C8106 = hrx[1152];
    const double C8113 = hrx[1153];
    const double C8120 = hrx[1154];
    const double C8127 = hrx[1155];
    const double C8134 = hrx[1156];
    const double C8141 = hrx[1157];
    const double C8148 = hrx[1158];
    const double C8155 = hrx[1159];
    const double C8162 = hrx[1160];
    const double C8169 = hrx[1161];
    const double C8176 = hrx[1162];
    const double C8183 = hrx[1163];
    const double C8190 = hrx[1164];
    const double C8197 = hrx[1165];
    const double C8204 = hrx[1166];
    const double C8211 = hrx[1167];
    const double C8218 = hrx[1168];
    const double C8225 = hrx[1169];
    const double C8232 = hrx[1170];
    const double C8239 = hrx[1171];
    const double C8246 = hrx[1172];
    const double C8253 = hrx[1173];
    const double C8260 = hrx[1174];
    const double C8267 = hrx[1175];
    const double C8274 = hrx[1176];
    const double C8281 = hrx[1177];
    const double C8288 = hrx[1178];
    const double C8295 = hrx[1179];
    const double C8302 = hrx[1180];
    const double C8309 = hrx[1181];
    const double C8316 = hrx[1182];
    const double C8323 = hrx[1183];
    const double C8330 = hrx[1184];
    const double C8337 = hrx[1185];
    const double C8344 = hrx[1186];
    const double C8351 = hrx[1187];
    const double C8358 = hrx[1188];
    const double C8365 = hrx[1189];
    const double C8372 = hrx[1190];
    const double C8379 = hrx[1191];
    const double C8386 = hrx[1192];
    const double C8393 = hrx[1193];
    const double C8400 = hrx[1194];
    const double C8407 = hrx[1195];
    const double C8414 = hrx[1196];
    const double C8421 = hrx[1197];
    const double C8428 = hrx[1198];
    const double C8435 = hrx[1199];
    const double C8442 = hrx[1200];
    const double C8449 = hrx[1201];
    const double C8456 = hrx[1202];
    const double C8463 = hrx[1203];
    const double C8470 = hrx[1204];
    const double C8477 = hrx[1205];
    const double C8484 = hrx[1206];
    const double C8491 = hrx[1207];
    const double C8498 = hrx[1208];
    const double C8505 = hrx[1209];
    const double C8512 = hrx[1210];
    const double C8519 = hrx[1211];
    const double C8526 = hrx[1212];
    const double C8533 = hrx[1213];
    const double C8540 = hrx[1214];
    const double C8547 = hrx[1215];
    const double C8554 = hrx[1216];
    const double C8561 = hrx[1217];
    const double C8568 = hrx[1218];
    const double C8575 = hrx[1219];
    const double C8582 = hrx[1220];
    const double C8589 = hrx[1221];
    const double C8596 = hrx[1222];
    const double C8603 = hrx[1223];
    const double C8610 = hrx[1224];
    const double C8617 = hrx[1225];
    const double C8624 = hrx[1226];
    const double C8631 = hrx[1227];
    const double C8638 = hrx[1228];
    const double C8645 = hrx[1229];
    const double C8652 = hrx[1230];
    const double C8659 = hrx[1231];
    const double C8666 = hrx[1232];
    const double C8673 = hrx[1233];
    const double C8680 = hrx[1234];
    const double C8687 = hrx[1235];
    const double C8694 = hrx[1236];
    const double C8701 = hrx[1237];
    const double C8708 = hrx[1238];
    const double C8715 = hrx[1239];
    const double C8722 = hrx[1240];
    const double C8729 = hrx[1241];
    const double C8736 = hrx[1242];
    const double C8743 = hrx[1243];
    const double C8750 = hrx[1244];
    const double C8757 = hrx[1245];
    const double C8764 = hrx[1246];
    const double C8771 = hrx[1247];
    const double C8778 = hrx[1248];
    const double C8785 = hrx[1249];
    const double C8792 = hrx[1250];
    const double C8799 = hrx[1251];
    const double C8806 = hrx[1252];
    const double C8813 = hrx[1253];
    const double C8820 = hrx[1254];
    const double C8827 = hrx[1255];
    const double C8834 = hrx[1256];
    const double C8841 = hrx[1257];
    const double C8848 = hrx[1258];
    const double C8855 = hrx[1259];
    const double C8862 = hrx[1260];
    const double C8869 = hrx[1261];
    const double C8876 = hrx[1262];
    const double C8883 = hrx[1263];
    const double C8890 = hrx[1264];
    const double C8897 = hrx[1265];
    const double C8904 = hrx[1266];
    const double C8911 = hrx[1267];
    const double C8918 = hrx[1268];
    const double C8925 = hrx[1269];
    const double C8932 = hrx[1270];
    const double C8939 = hrx[1271];
    const double C8946 = hrx[1272];
    const double C8953 = hrx[1273];
    const double C8960 = hrx[1274];
    const double C8967 = hrx[1275];
    const double C8974 = hrx[1276];
    const double C8981 = hrx[1277];
    const double C8988 = hrx[1278];
    const double C8995 = hrx[1279];
    const double C9002 = hrx[1280];
    const double C9009 = hrx[1281];
    const double C9016 = hrx[1282];
    const double C9023 = hrx[1283];
    const double C9030 = hrx[1284];
    const double C9037 = hrx[1285];
    const double C9044 = hrx[1286];
    const double C9051 = hrx[1287];
    const double C9058 = hrx[1288];
    const double C9065 = hrx[1289];
    const double C9072 = hrx[1290];
    const double C9079 = hrx[1291];
    const double C9086 = hrx[1292];
    const double C9093 = hrx[1293];
    const double C9100 = hrx[1294];
    const double C9107 = hrx[1295];
    const double C44 = hry[0];
    const double C51 = hry[1];
    const double C58 = hry[2];
    const double C65 = hry[3];
    const double C72 = hry[4];
    const double C79 = hry[5];
    const double C86 = hry[6];
    const double C93 = hry[7];
    const double C100 = hry[8];
    const double C107 = hry[9];
    const double C114 = hry[10];
    const double C121 = hry[11];
    const double C128 = hry[12];
    const double C135 = hry[13];
    const double C142 = hry[14];
    const double C149 = hry[15];
    const double C156 = hry[16];
    const double C163 = hry[17];
    const double C170 = hry[18];
    const double C177 = hry[19];
    const double C184 = hry[20];
    const double C191 = hry[21];
    const double C198 = hry[22];
    const double C205 = hry[23];
    const double C212 = hry[24];
    const double C219 = hry[25];
    const double C226 = hry[26];
    const double C233 = hry[27];
    const double C240 = hry[28];
    const double C247 = hry[29];
    const double C254 = hry[30];
    const double C261 = hry[31];
    const double C268 = hry[32];
    const double C275 = hry[33];
    const double C282 = hry[34];
    const double C289 = hry[35];
    const double C296 = hry[36];
    const double C303 = hry[37];
    const double C310 = hry[38];
    const double C317 = hry[39];
    const double C324 = hry[40];
    const double C331 = hry[41];
    const double C338 = hry[42];
    const double C345 = hry[43];
    const double C352 = hry[44];
    const double C359 = hry[45];
    const double C366 = hry[46];
    const double C373 = hry[47];
    const double C380 = hry[48];
    const double C387 = hry[49];
    const double C394 = hry[50];
    const double C401 = hry[51];
    const double C408 = hry[52];
    const double C415 = hry[53];
    const double C422 = hry[54];
    const double C429 = hry[55];
    const double C436 = hry[56];
    const double C443 = hry[57];
    const double C450 = hry[58];
    const double C457 = hry[59];
    const double C464 = hry[60];
    const double C471 = hry[61];
    const double C478 = hry[62];
    const double C485 = hry[63];
    const double C492 = hry[64];
    const double C499 = hry[65];
    const double C506 = hry[66];
    const double C513 = hry[67];
    const double C520 = hry[68];
    const double C527 = hry[69];
    const double C534 = hry[70];
    const double C541 = hry[71];
    const double C548 = hry[72];
    const double C555 = hry[73];
    const double C562 = hry[74];
    const double C569 = hry[75];
    const double C576 = hry[76];
    const double C583 = hry[77];
    const double C590 = hry[78];
    const double C597 = hry[79];
    const double C604 = hry[80];
    const double C611 = hry[81];
    const double C618 = hry[82];
    const double C625 = hry[83];
    const double C632 = hry[84];
    const double C639 = hry[85];
    const double C646 = hry[86];
    const double C653 = hry[87];
    const double C660 = hry[88];
    const double C667 = hry[89];
    const double C674 = hry[90];
    const double C681 = hry[91];
    const double C688 = hry[92];
    const double C695 = hry[93];
    const double C702 = hry[94];
    const double C709 = hry[95];
    const double C716 = hry[96];
    const double C723 = hry[97];
    const double C730 = hry[98];
    const double C737 = hry[99];
    const double C744 = hry[100];
    const double C751 = hry[101];
    const double C758 = hry[102];
    const double C765 = hry[103];
    const double C772 = hry[104];
    const double C779 = hry[105];
    const double C786 = hry[106];
    const double C793 = hry[107];
    const double C800 = hry[108];
    const double C807 = hry[109];
    const double C814 = hry[110];
    const double C821 = hry[111];
    const double C828 = hry[112];
    const double C835 = hry[113];
    const double C842 = hry[114];
    const double C849 = hry[115];
    const double C856 = hry[116];
    const double C863 = hry[117];
    const double C870 = hry[118];
    const double C877 = hry[119];
    const double C884 = hry[120];
    const double C891 = hry[121];
    const double C898 = hry[122];
    const double C905 = hry[123];
    const double C912 = hry[124];
    const double C919 = hry[125];
    const double C926 = hry[126];
    const double C933 = hry[127];
    const double C940 = hry[128];
    const double C947 = hry[129];
    const double C954 = hry[130];
    const double C961 = hry[131];
    const double C968 = hry[132];
    const double C975 = hry[133];
    const double C982 = hry[134];
    const double C989 = hry[135];
    const double C996 = hry[136];
    const double C1003 = hry[137];
    const double C1010 = hry[138];
    const double C1017 = hry[139];
    const double C1024 = hry[140];
    const double C1031 = hry[141];
    const double C1038 = hry[142];
    const double C1045 = hry[143];
    const double C1052 = hry[144];
    const double C1059 = hry[145];
    const double C1066 = hry[146];
    const double C1073 = hry[147];
    const double C1080 = hry[148];
    const double C1087 = hry[149];
    const double C1094 = hry[150];
    const double C1101 = hry[151];
    const double C1108 = hry[152];
    const double C1115 = hry[153];
    const double C1122 = hry[154];
    const double C1129 = hry[155];
    const double C1136 = hry[156];
    const double C1143 = hry[157];
    const double C1150 = hry[158];
    const double C1157 = hry[159];
    const double C1164 = hry[160];
    const double C1171 = hry[161];
    const double C1178 = hry[162];
    const double C1185 = hry[163];
    const double C1192 = hry[164];
    const double C1199 = hry[165];
    const double C1206 = hry[166];
    const double C1213 = hry[167];
    const double C1220 = hry[168];
    const double C1227 = hry[169];
    const double C1234 = hry[170];
    const double C1241 = hry[171];
    const double C1248 = hry[172];
    const double C1255 = hry[173];
    const double C1262 = hry[174];
    const double C1269 = hry[175];
    const double C1276 = hry[176];
    const double C1283 = hry[177];
    const double C1290 = hry[178];
    const double C1297 = hry[179];
    const double C1304 = hry[180];
    const double C1311 = hry[181];
    const double C1318 = hry[182];
    const double C1325 = hry[183];
    const double C1332 = hry[184];
    const double C1339 = hry[185];
    const double C1346 = hry[186];
    const double C1353 = hry[187];
    const double C1360 = hry[188];
    const double C1367 = hry[189];
    const double C1374 = hry[190];
    const double C1381 = hry[191];
    const double C1388 = hry[192];
    const double C1395 = hry[193];
    const double C1402 = hry[194];
    const double C1409 = hry[195];
    const double C1416 = hry[196];
    const double C1423 = hry[197];
    const double C1430 = hry[198];
    const double C1437 = hry[199];
    const double C1444 = hry[200];
    const double C1451 = hry[201];
    const double C1458 = hry[202];
    const double C1465 = hry[203];
    const double C1472 = hry[204];
    const double C1479 = hry[205];
    const double C1486 = hry[206];
    const double C1493 = hry[207];
    const double C1500 = hry[208];
    const double C1507 = hry[209];
    const double C1514 = hry[210];
    const double C1521 = hry[211];
    const double C1528 = hry[212];
    const double C1535 = hry[213];
    const double C1542 = hry[214];
    const double C1549 = hry[215];
    const double C1556 = hry[216];
    const double C1563 = hry[217];
    const double C1570 = hry[218];
    const double C1577 = hry[219];
    const double C1584 = hry[220];
    const double C1591 = hry[221];
    const double C1598 = hry[222];
    const double C1605 = hry[223];
    const double C1612 = hry[224];
    const double C1619 = hry[225];
    const double C1626 = hry[226];
    const double C1633 = hry[227];
    const double C1640 = hry[228];
    const double C1647 = hry[229];
    const double C1654 = hry[230];
    const double C1661 = hry[231];
    const double C1668 = hry[232];
    const double C1675 = hry[233];
    const double C1682 = hry[234];
    const double C1689 = hry[235];
    const double C1696 = hry[236];
    const double C1703 = hry[237];
    const double C1710 = hry[238];
    const double C1717 = hry[239];
    const double C1724 = hry[240];
    const double C1731 = hry[241];
    const double C1738 = hry[242];
    const double C1745 = hry[243];
    const double C1752 = hry[244];
    const double C1759 = hry[245];
    const double C1766 = hry[246];
    const double C1773 = hry[247];
    const double C1780 = hry[248];
    const double C1787 = hry[249];
    const double C1794 = hry[250];
    const double C1801 = hry[251];
    const double C1808 = hry[252];
    const double C1815 = hry[253];
    const double C1822 = hry[254];
    const double C1829 = hry[255];
    const double C1836 = hry[256];
    const double C1843 = hry[257];
    const double C1850 = hry[258];
    const double C1857 = hry[259];
    const double C1864 = hry[260];
    const double C1871 = hry[261];
    const double C1878 = hry[262];
    const double C1885 = hry[263];
    const double C1892 = hry[264];
    const double C1899 = hry[265];
    const double C1906 = hry[266];
    const double C1913 = hry[267];
    const double C1920 = hry[268];
    const double C1927 = hry[269];
    const double C1934 = hry[270];
    const double C1941 = hry[271];
    const double C1948 = hry[272];
    const double C1955 = hry[273];
    const double C1962 = hry[274];
    const double C1969 = hry[275];
    const double C1976 = hry[276];
    const double C1983 = hry[277];
    const double C1990 = hry[278];
    const double C1997 = hry[279];
    const double C2004 = hry[280];
    const double C2011 = hry[281];
    const double C2018 = hry[282];
    const double C2025 = hry[283];
    const double C2032 = hry[284];
    const double C2039 = hry[285];
    const double C2046 = hry[286];
    const double C2053 = hry[287];
    const double C2060 = hry[288];
    const double C2067 = hry[289];
    const double C2074 = hry[290];
    const double C2081 = hry[291];
    const double C2088 = hry[292];
    const double C2095 = hry[293];
    const double C2102 = hry[294];
    const double C2109 = hry[295];
    const double C2116 = hry[296];
    const double C2123 = hry[297];
    const double C2130 = hry[298];
    const double C2137 = hry[299];
    const double C2144 = hry[300];
    const double C2151 = hry[301];
    const double C2158 = hry[302];
    const double C2165 = hry[303];
    const double C2172 = hry[304];
    const double C2179 = hry[305];
    const double C2186 = hry[306];
    const double C2193 = hry[307];
    const double C2200 = hry[308];
    const double C2207 = hry[309];
    const double C2214 = hry[310];
    const double C2221 = hry[311];
    const double C2228 = hry[312];
    const double C2235 = hry[313];
    const double C2242 = hry[314];
    const double C2249 = hry[315];
    const double C2256 = hry[316];
    const double C2263 = hry[317];
    const double C2270 = hry[318];
    const double C2277 = hry[319];
    const double C2284 = hry[320];
    const double C2291 = hry[321];
    const double C2298 = hry[322];
    const double C2305 = hry[323];
    const double C2312 = hry[324];
    const double C2319 = hry[325];
    const double C2326 = hry[326];
    const double C2333 = hry[327];
    const double C2340 = hry[328];
    const double C2347 = hry[329];
    const double C2354 = hry[330];
    const double C2361 = hry[331];
    const double C2368 = hry[332];
    const double C2375 = hry[333];
    const double C2382 = hry[334];
    const double C2389 = hry[335];
    const double C2396 = hry[336];
    const double C2403 = hry[337];
    const double C2410 = hry[338];
    const double C2417 = hry[339];
    const double C2424 = hry[340];
    const double C2431 = hry[341];
    const double C2438 = hry[342];
    const double C2445 = hry[343];
    const double C2452 = hry[344];
    const double C2459 = hry[345];
    const double C2466 = hry[346];
    const double C2473 = hry[347];
    const double C2480 = hry[348];
    const double C2487 = hry[349];
    const double C2494 = hry[350];
    const double C2501 = hry[351];
    const double C2508 = hry[352];
    const double C2515 = hry[353];
    const double C2522 = hry[354];
    const double C2529 = hry[355];
    const double C2536 = hry[356];
    const double C2543 = hry[357];
    const double C2550 = hry[358];
    const double C2557 = hry[359];
    const double C2564 = hry[360];
    const double C2571 = hry[361];
    const double C2578 = hry[362];
    const double C2585 = hry[363];
    const double C2592 = hry[364];
    const double C2599 = hry[365];
    const double C2606 = hry[366];
    const double C2613 = hry[367];
    const double C2620 = hry[368];
    const double C2627 = hry[369];
    const double C2634 = hry[370];
    const double C2641 = hry[371];
    const double C2648 = hry[372];
    const double C2655 = hry[373];
    const double C2662 = hry[374];
    const double C2669 = hry[375];
    const double C2676 = hry[376];
    const double C2683 = hry[377];
    const double C2690 = hry[378];
    const double C2697 = hry[379];
    const double C2704 = hry[380];
    const double C2711 = hry[381];
    const double C2718 = hry[382];
    const double C2725 = hry[383];
    const double C2732 = hry[384];
    const double C2739 = hry[385];
    const double C2746 = hry[386];
    const double C2753 = hry[387];
    const double C2760 = hry[388];
    const double C2767 = hry[389];
    const double C2774 = hry[390];
    const double C2781 = hry[391];
    const double C2788 = hry[392];
    const double C2795 = hry[393];
    const double C2802 = hry[394];
    const double C2809 = hry[395];
    const double C2816 = hry[396];
    const double C2823 = hry[397];
    const double C2830 = hry[398];
    const double C2837 = hry[399];
    const double C2844 = hry[400];
    const double C2851 = hry[401];
    const double C2858 = hry[402];
    const double C2865 = hry[403];
    const double C2872 = hry[404];
    const double C2879 = hry[405];
    const double C2886 = hry[406];
    const double C2893 = hry[407];
    const double C2900 = hry[408];
    const double C2907 = hry[409];
    const double C2914 = hry[410];
    const double C2921 = hry[411];
    const double C2928 = hry[412];
    const double C2935 = hry[413];
    const double C2942 = hry[414];
    const double C2949 = hry[415];
    const double C2956 = hry[416];
    const double C2963 = hry[417];
    const double C2970 = hry[418];
    const double C2977 = hry[419];
    const double C2984 = hry[420];
    const double C2991 = hry[421];
    const double C2998 = hry[422];
    const double C3005 = hry[423];
    const double C3012 = hry[424];
    const double C3019 = hry[425];
    const double C3026 = hry[426];
    const double C3033 = hry[427];
    const double C3040 = hry[428];
    const double C3047 = hry[429];
    const double C3054 = hry[430];
    const double C3061 = hry[431];
    const double C3068 = hry[432];
    const double C3075 = hry[433];
    const double C3082 = hry[434];
    const double C3089 = hry[435];
    const double C3096 = hry[436];
    const double C3103 = hry[437];
    const double C3110 = hry[438];
    const double C3117 = hry[439];
    const double C3124 = hry[440];
    const double C3131 = hry[441];
    const double C3138 = hry[442];
    const double C3145 = hry[443];
    const double C3152 = hry[444];
    const double C3159 = hry[445];
    const double C3166 = hry[446];
    const double C3173 = hry[447];
    const double C3180 = hry[448];
    const double C3187 = hry[449];
    const double C3194 = hry[450];
    const double C3201 = hry[451];
    const double C3208 = hry[452];
    const double C3215 = hry[453];
    const double C3222 = hry[454];
    const double C3229 = hry[455];
    const double C3236 = hry[456];
    const double C3243 = hry[457];
    const double C3250 = hry[458];
    const double C3257 = hry[459];
    const double C3264 = hry[460];
    const double C3271 = hry[461];
    const double C3278 = hry[462];
    const double C3285 = hry[463];
    const double C3292 = hry[464];
    const double C3299 = hry[465];
    const double C3306 = hry[466];
    const double C3313 = hry[467];
    const double C3320 = hry[468];
    const double C3327 = hry[469];
    const double C3334 = hry[470];
    const double C3341 = hry[471];
    const double C3348 = hry[472];
    const double C3355 = hry[473];
    const double C3362 = hry[474];
    const double C3369 = hry[475];
    const double C3376 = hry[476];
    const double C3383 = hry[477];
    const double C3390 = hry[478];
    const double C3397 = hry[479];
    const double C3404 = hry[480];
    const double C3411 = hry[481];
    const double C3418 = hry[482];
    const double C3425 = hry[483];
    const double C3432 = hry[484];
    const double C3439 = hry[485];
    const double C3446 = hry[486];
    const double C3453 = hry[487];
    const double C3460 = hry[488];
    const double C3467 = hry[489];
    const double C3474 = hry[490];
    const double C3481 = hry[491];
    const double C3488 = hry[492];
    const double C3495 = hry[493];
    const double C3502 = hry[494];
    const double C3509 = hry[495];
    const double C3516 = hry[496];
    const double C3523 = hry[497];
    const double C3530 = hry[498];
    const double C3537 = hry[499];
    const double C3544 = hry[500];
    const double C3551 = hry[501];
    const double C3558 = hry[502];
    const double C3565 = hry[503];
    const double C3572 = hry[504];
    const double C3579 = hry[505];
    const double C3586 = hry[506];
    const double C3593 = hry[507];
    const double C3600 = hry[508];
    const double C3607 = hry[509];
    const double C3614 = hry[510];
    const double C3621 = hry[511];
    const double C3628 = hry[512];
    const double C3635 = hry[513];
    const double C3642 = hry[514];
    const double C3649 = hry[515];
    const double C3656 = hry[516];
    const double C3663 = hry[517];
    const double C3670 = hry[518];
    const double C3677 = hry[519];
    const double C3684 = hry[520];
    const double C3691 = hry[521];
    const double C3698 = hry[522];
    const double C3705 = hry[523];
    const double C3712 = hry[524];
    const double C3719 = hry[525];
    const double C3726 = hry[526];
    const double C3733 = hry[527];
    const double C3740 = hry[528];
    const double C3747 = hry[529];
    const double C3754 = hry[530];
    const double C3761 = hry[531];
    const double C3768 = hry[532];
    const double C3775 = hry[533];
    const double C3782 = hry[534];
    const double C3789 = hry[535];
    const double C3796 = hry[536];
    const double C3803 = hry[537];
    const double C3810 = hry[538];
    const double C3817 = hry[539];
    const double C3824 = hry[540];
    const double C3831 = hry[541];
    const double C3838 = hry[542];
    const double C3845 = hry[543];
    const double C3852 = hry[544];
    const double C3859 = hry[545];
    const double C3866 = hry[546];
    const double C3873 = hry[547];
    const double C3880 = hry[548];
    const double C3887 = hry[549];
    const double C3894 = hry[550];
    const double C3901 = hry[551];
    const double C3908 = hry[552];
    const double C3915 = hry[553];
    const double C3922 = hry[554];
    const double C3929 = hry[555];
    const double C3936 = hry[556];
    const double C3943 = hry[557];
    const double C3950 = hry[558];
    const double C3957 = hry[559];
    const double C3964 = hry[560];
    const double C3971 = hry[561];
    const double C3978 = hry[562];
    const double C3985 = hry[563];
    const double C3992 = hry[564];
    const double C3999 = hry[565];
    const double C4006 = hry[566];
    const double C4013 = hry[567];
    const double C4020 = hry[568];
    const double C4027 = hry[569];
    const double C4034 = hry[570];
    const double C4041 = hry[571];
    const double C4048 = hry[572];
    const double C4055 = hry[573];
    const double C4062 = hry[574];
    const double C4069 = hry[575];
    const double C4076 = hry[576];
    const double C4083 = hry[577];
    const double C4090 = hry[578];
    const double C4097 = hry[579];
    const double C4104 = hry[580];
    const double C4111 = hry[581];
    const double C4118 = hry[582];
    const double C4125 = hry[583];
    const double C4132 = hry[584];
    const double C4139 = hry[585];
    const double C4146 = hry[586];
    const double C4153 = hry[587];
    const double C4160 = hry[588];
    const double C4167 = hry[589];
    const double C4174 = hry[590];
    const double C4181 = hry[591];
    const double C4188 = hry[592];
    const double C4195 = hry[593];
    const double C4202 = hry[594];
    const double C4209 = hry[595];
    const double C4216 = hry[596];
    const double C4223 = hry[597];
    const double C4230 = hry[598];
    const double C4237 = hry[599];
    const double C4244 = hry[600];
    const double C4251 = hry[601];
    const double C4258 = hry[602];
    const double C4265 = hry[603];
    const double C4272 = hry[604];
    const double C4279 = hry[605];
    const double C4286 = hry[606];
    const double C4293 = hry[607];
    const double C4300 = hry[608];
    const double C4307 = hry[609];
    const double C4314 = hry[610];
    const double C4321 = hry[611];
    const double C4328 = hry[612];
    const double C4335 = hry[613];
    const double C4342 = hry[614];
    const double C4349 = hry[615];
    const double C4356 = hry[616];
    const double C4363 = hry[617];
    const double C4370 = hry[618];
    const double C4377 = hry[619];
    const double C4384 = hry[620];
    const double C4391 = hry[621];
    const double C4398 = hry[622];
    const double C4405 = hry[623];
    const double C4412 = hry[624];
    const double C4419 = hry[625];
    const double C4426 = hry[626];
    const double C4433 = hry[627];
    const double C4440 = hry[628];
    const double C4447 = hry[629];
    const double C4454 = hry[630];
    const double C4461 = hry[631];
    const double C4468 = hry[632];
    const double C4475 = hry[633];
    const double C4482 = hry[634];
    const double C4489 = hry[635];
    const double C4496 = hry[636];
    const double C4503 = hry[637];
    const double C4510 = hry[638];
    const double C4517 = hry[639];
    const double C4524 = hry[640];
    const double C4531 = hry[641];
    const double C4538 = hry[642];
    const double C4545 = hry[643];
    const double C4552 = hry[644];
    const double C4559 = hry[645];
    const double C4566 = hry[646];
    const double C4573 = hry[647];
    const double C4580 = hry[648];
    const double C4587 = hry[649];
    const double C4594 = hry[650];
    const double C4601 = hry[651];
    const double C4608 = hry[652];
    const double C4615 = hry[653];
    const double C4622 = hry[654];
    const double C4629 = hry[655];
    const double C4636 = hry[656];
    const double C4643 = hry[657];
    const double C4650 = hry[658];
    const double C4657 = hry[659];
    const double C4664 = hry[660];
    const double C4671 = hry[661];
    const double C4678 = hry[662];
    const double C4685 = hry[663];
    const double C4692 = hry[664];
    const double C4699 = hry[665];
    const double C4706 = hry[666];
    const double C4713 = hry[667];
    const double C4720 = hry[668];
    const double C4727 = hry[669];
    const double C4734 = hry[670];
    const double C4741 = hry[671];
    const double C4748 = hry[672];
    const double C4755 = hry[673];
    const double C4762 = hry[674];
    const double C4769 = hry[675];
    const double C4776 = hry[676];
    const double C4783 = hry[677];
    const double C4790 = hry[678];
    const double C4797 = hry[679];
    const double C4804 = hry[680];
    const double C4811 = hry[681];
    const double C4818 = hry[682];
    const double C4825 = hry[683];
    const double C4832 = hry[684];
    const double C4839 = hry[685];
    const double C4846 = hry[686];
    const double C4853 = hry[687];
    const double C4860 = hry[688];
    const double C4867 = hry[689];
    const double C4874 = hry[690];
    const double C4881 = hry[691];
    const double C4888 = hry[692];
    const double C4895 = hry[693];
    const double C4902 = hry[694];
    const double C4909 = hry[695];
    const double C4916 = hry[696];
    const double C4923 = hry[697];
    const double C4930 = hry[698];
    const double C4937 = hry[699];
    const double C4944 = hry[700];
    const double C4951 = hry[701];
    const double C4958 = hry[702];
    const double C4965 = hry[703];
    const double C4972 = hry[704];
    const double C4979 = hry[705];
    const double C4986 = hry[706];
    const double C4993 = hry[707];
    const double C5000 = hry[708];
    const double C5007 = hry[709];
    const double C5014 = hry[710];
    const double C5021 = hry[711];
    const double C5028 = hry[712];
    const double C5035 = hry[713];
    const double C5042 = hry[714];
    const double C5049 = hry[715];
    const double C5056 = hry[716];
    const double C5063 = hry[717];
    const double C5070 = hry[718];
    const double C5077 = hry[719];
    const double C5084 = hry[720];
    const double C5091 = hry[721];
    const double C5098 = hry[722];
    const double C5105 = hry[723];
    const double C5112 = hry[724];
    const double C5119 = hry[725];
    const double C5126 = hry[726];
    const double C5133 = hry[727];
    const double C5140 = hry[728];
    const double C5147 = hry[729];
    const double C5154 = hry[730];
    const double C5161 = hry[731];
    const double C5168 = hry[732];
    const double C5175 = hry[733];
    const double C5182 = hry[734];
    const double C5189 = hry[735];
    const double C5196 = hry[736];
    const double C5203 = hry[737];
    const double C5210 = hry[738];
    const double C5217 = hry[739];
    const double C5224 = hry[740];
    const double C5231 = hry[741];
    const double C5238 = hry[742];
    const double C5245 = hry[743];
    const double C5252 = hry[744];
    const double C5259 = hry[745];
    const double C5266 = hry[746];
    const double C5273 = hry[747];
    const double C5280 = hry[748];
    const double C5287 = hry[749];
    const double C5294 = hry[750];
    const double C5301 = hry[751];
    const double C5308 = hry[752];
    const double C5315 = hry[753];
    const double C5322 = hry[754];
    const double C5329 = hry[755];
    const double C5336 = hry[756];
    const double C5343 = hry[757];
    const double C5350 = hry[758];
    const double C5357 = hry[759];
    const double C5364 = hry[760];
    const double C5371 = hry[761];
    const double C5378 = hry[762];
    const double C5385 = hry[763];
    const double C5392 = hry[764];
    const double C5399 = hry[765];
    const double C5406 = hry[766];
    const double C5413 = hry[767];
    const double C5420 = hry[768];
    const double C5427 = hry[769];
    const double C5434 = hry[770];
    const double C5441 = hry[771];
    const double C5448 = hry[772];
    const double C5455 = hry[773];
    const double C5462 = hry[774];
    const double C5469 = hry[775];
    const double C5476 = hry[776];
    const double C5483 = hry[777];
    const double C5490 = hry[778];
    const double C5497 = hry[779];
    const double C5504 = hry[780];
    const double C5511 = hry[781];
    const double C5518 = hry[782];
    const double C5525 = hry[783];
    const double C5532 = hry[784];
    const double C5539 = hry[785];
    const double C5546 = hry[786];
    const double C5553 = hry[787];
    const double C5560 = hry[788];
    const double C5567 = hry[789];
    const double C5574 = hry[790];
    const double C5581 = hry[791];
    const double C5588 = hry[792];
    const double C5595 = hry[793];
    const double C5602 = hry[794];
    const double C5609 = hry[795];
    const double C5616 = hry[796];
    const double C5623 = hry[797];
    const double C5630 = hry[798];
    const double C5637 = hry[799];
    const double C5644 = hry[800];
    const double C5651 = hry[801];
    const double C5658 = hry[802];
    const double C5665 = hry[803];
    const double C5672 = hry[804];
    const double C5679 = hry[805];
    const double C5686 = hry[806];
    const double C5693 = hry[807];
    const double C5700 = hry[808];
    const double C5707 = hry[809];
    const double C5714 = hry[810];
    const double C5721 = hry[811];
    const double C5728 = hry[812];
    const double C5735 = hry[813];
    const double C5742 = hry[814];
    const double C5749 = hry[815];
    const double C5756 = hry[816];
    const double C5763 = hry[817];
    const double C5770 = hry[818];
    const double C5777 = hry[819];
    const double C5784 = hry[820];
    const double C5791 = hry[821];
    const double C5798 = hry[822];
    const double C5805 = hry[823];
    const double C5812 = hry[824];
    const double C5819 = hry[825];
    const double C5826 = hry[826];
    const double C5833 = hry[827];
    const double C5840 = hry[828];
    const double C5847 = hry[829];
    const double C5854 = hry[830];
    const double C5861 = hry[831];
    const double C5868 = hry[832];
    const double C5875 = hry[833];
    const double C5882 = hry[834];
    const double C5889 = hry[835];
    const double C5896 = hry[836];
    const double C5903 = hry[837];
    const double C5910 = hry[838];
    const double C5917 = hry[839];
    const double C5924 = hry[840];
    const double C5931 = hry[841];
    const double C5938 = hry[842];
    const double C5945 = hry[843];
    const double C5952 = hry[844];
    const double C5959 = hry[845];
    const double C5966 = hry[846];
    const double C5973 = hry[847];
    const double C5980 = hry[848];
    const double C5987 = hry[849];
    const double C5994 = hry[850];
    const double C6001 = hry[851];
    const double C6008 = hry[852];
    const double C6015 = hry[853];
    const double C6022 = hry[854];
    const double C6029 = hry[855];
    const double C6036 = hry[856];
    const double C6043 = hry[857];
    const double C6050 = hry[858];
    const double C6057 = hry[859];
    const double C6064 = hry[860];
    const double C6071 = hry[861];
    const double C6078 = hry[862];
    const double C6085 = hry[863];
    const double C6092 = hry[864];
    const double C6099 = hry[865];
    const double C6106 = hry[866];
    const double C6113 = hry[867];
    const double C6120 = hry[868];
    const double C6127 = hry[869];
    const double C6134 = hry[870];
    const double C6141 = hry[871];
    const double C6148 = hry[872];
    const double C6155 = hry[873];
    const double C6162 = hry[874];
    const double C6169 = hry[875];
    const double C6176 = hry[876];
    const double C6183 = hry[877];
    const double C6190 = hry[878];
    const double C6197 = hry[879];
    const double C6204 = hry[880];
    const double C6211 = hry[881];
    const double C6218 = hry[882];
    const double C6225 = hry[883];
    const double C6232 = hry[884];
    const double C6239 = hry[885];
    const double C6246 = hry[886];
    const double C6253 = hry[887];
    const double C6260 = hry[888];
    const double C6267 = hry[889];
    const double C6274 = hry[890];
    const double C6281 = hry[891];
    const double C6288 = hry[892];
    const double C6295 = hry[893];
    const double C6302 = hry[894];
    const double C6309 = hry[895];
    const double C6316 = hry[896];
    const double C6323 = hry[897];
    const double C6330 = hry[898];
    const double C6337 = hry[899];
    const double C6344 = hry[900];
    const double C6351 = hry[901];
    const double C6358 = hry[902];
    const double C6365 = hry[903];
    const double C6372 = hry[904];
    const double C6379 = hry[905];
    const double C6386 = hry[906];
    const double C6393 = hry[907];
    const double C6400 = hry[908];
    const double C6407 = hry[909];
    const double C6414 = hry[910];
    const double C6421 = hry[911];
    const double C6428 = hry[912];
    const double C6435 = hry[913];
    const double C6442 = hry[914];
    const double C6449 = hry[915];
    const double C6456 = hry[916];
    const double C6463 = hry[917];
    const double C6470 = hry[918];
    const double C6477 = hry[919];
    const double C6484 = hry[920];
    const double C6491 = hry[921];
    const double C6498 = hry[922];
    const double C6505 = hry[923];
    const double C6512 = hry[924];
    const double C6519 = hry[925];
    const double C6526 = hry[926];
    const double C6533 = hry[927];
    const double C6540 = hry[928];
    const double C6547 = hry[929];
    const double C6554 = hry[930];
    const double C6561 = hry[931];
    const double C6568 = hry[932];
    const double C6575 = hry[933];
    const double C6582 = hry[934];
    const double C6589 = hry[935];
    const double C6596 = hry[936];
    const double C6603 = hry[937];
    const double C6610 = hry[938];
    const double C6617 = hry[939];
    const double C6624 = hry[940];
    const double C6631 = hry[941];
    const double C6638 = hry[942];
    const double C6645 = hry[943];
    const double C6652 = hry[944];
    const double C6659 = hry[945];
    const double C6666 = hry[946];
    const double C6673 = hry[947];
    const double C6680 = hry[948];
    const double C6687 = hry[949];
    const double C6694 = hry[950];
    const double C6701 = hry[951];
    const double C6708 = hry[952];
    const double C6715 = hry[953];
    const double C6722 = hry[954];
    const double C6729 = hry[955];
    const double C6736 = hry[956];
    const double C6743 = hry[957];
    const double C6750 = hry[958];
    const double C6757 = hry[959];
    const double C6764 = hry[960];
    const double C6771 = hry[961];
    const double C6778 = hry[962];
    const double C6785 = hry[963];
    const double C6792 = hry[964];
    const double C6799 = hry[965];
    const double C6806 = hry[966];
    const double C6813 = hry[967];
    const double C6820 = hry[968];
    const double C6827 = hry[969];
    const double C6834 = hry[970];
    const double C6841 = hry[971];
    const double C6848 = hry[972];
    const double C6855 = hry[973];
    const double C6862 = hry[974];
    const double C6869 = hry[975];
    const double C6876 = hry[976];
    const double C6883 = hry[977];
    const double C6890 = hry[978];
    const double C6897 = hry[979];
    const double C6904 = hry[980];
    const double C6911 = hry[981];
    const double C6918 = hry[982];
    const double C6925 = hry[983];
    const double C6932 = hry[984];
    const double C6939 = hry[985];
    const double C6946 = hry[986];
    const double C6953 = hry[987];
    const double C6960 = hry[988];
    const double C6967 = hry[989];
    const double C6974 = hry[990];
    const double C6981 = hry[991];
    const double C6988 = hry[992];
    const double C6995 = hry[993];
    const double C7002 = hry[994];
    const double C7009 = hry[995];
    const double C7016 = hry[996];
    const double C7023 = hry[997];
    const double C7030 = hry[998];
    const double C7037 = hry[999];
    const double C7044 = hry[1000];
    const double C7051 = hry[1001];
    const double C7058 = hry[1002];
    const double C7065 = hry[1003];
    const double C7072 = hry[1004];
    const double C7079 = hry[1005];
    const double C7086 = hry[1006];
    const double C7093 = hry[1007];
    const double C7100 = hry[1008];
    const double C7107 = hry[1009];
    const double C7114 = hry[1010];
    const double C7121 = hry[1011];
    const double C7128 = hry[1012];
    const double C7135 = hry[1013];
    const double C7142 = hry[1014];
    const double C7149 = hry[1015];
    const double C7156 = hry[1016];
    const double C7163 = hry[1017];
    const double C7170 = hry[1018];
    const double C7177 = hry[1019];
    const double C7184 = hry[1020];
    const double C7191 = hry[1021];
    const double C7198 = hry[1022];
    const double C7205 = hry[1023];
    const double C7212 = hry[1024];
    const double C7219 = hry[1025];
    const double C7226 = hry[1026];
    const double C7233 = hry[1027];
    const double C7240 = hry[1028];
    const double C7247 = hry[1029];
    const double C7254 = hry[1030];
    const double C7261 = hry[1031];
    const double C7268 = hry[1032];
    const double C7275 = hry[1033];
    const double C7282 = hry[1034];
    const double C7289 = hry[1035];
    const double C7296 = hry[1036];
    const double C7303 = hry[1037];
    const double C7310 = hry[1038];
    const double C7317 = hry[1039];
    const double C7324 = hry[1040];
    const double C7331 = hry[1041];
    const double C7338 = hry[1042];
    const double C7345 = hry[1043];
    const double C7352 = hry[1044];
    const double C7359 = hry[1045];
    const double C7366 = hry[1046];
    const double C7373 = hry[1047];
    const double C7380 = hry[1048];
    const double C7387 = hry[1049];
    const double C7394 = hry[1050];
    const double C7401 = hry[1051];
    const double C7408 = hry[1052];
    const double C7415 = hry[1053];
    const double C7422 = hry[1054];
    const double C7429 = hry[1055];
    const double C7436 = hry[1056];
    const double C7443 = hry[1057];
    const double C7450 = hry[1058];
    const double C7457 = hry[1059];
    const double C7464 = hry[1060];
    const double C7471 = hry[1061];
    const double C7478 = hry[1062];
    const double C7485 = hry[1063];
    const double C7492 = hry[1064];
    const double C7499 = hry[1065];
    const double C7506 = hry[1066];
    const double C7513 = hry[1067];
    const double C7520 = hry[1068];
    const double C7527 = hry[1069];
    const double C7534 = hry[1070];
    const double C7541 = hry[1071];
    const double C7548 = hry[1072];
    const double C7555 = hry[1073];
    const double C7562 = hry[1074];
    const double C7569 = hry[1075];
    const double C7576 = hry[1076];
    const double C7583 = hry[1077];
    const double C7590 = hry[1078];
    const double C7597 = hry[1079];
    const double C7604 = hry[1080];
    const double C7611 = hry[1081];
    const double C7618 = hry[1082];
    const double C7625 = hry[1083];
    const double C7632 = hry[1084];
    const double C7639 = hry[1085];
    const double C7646 = hry[1086];
    const double C7653 = hry[1087];
    const double C7660 = hry[1088];
    const double C7667 = hry[1089];
    const double C7674 = hry[1090];
    const double C7681 = hry[1091];
    const double C7688 = hry[1092];
    const double C7695 = hry[1093];
    const double C7702 = hry[1094];
    const double C7709 = hry[1095];
    const double C7716 = hry[1096];
    const double C7723 = hry[1097];
    const double C7730 = hry[1098];
    const double C7737 = hry[1099];
    const double C7744 = hry[1100];
    const double C7751 = hry[1101];
    const double C7758 = hry[1102];
    const double C7765 = hry[1103];
    const double C7772 = hry[1104];
    const double C7779 = hry[1105];
    const double C7786 = hry[1106];
    const double C7793 = hry[1107];
    const double C7800 = hry[1108];
    const double C7807 = hry[1109];
    const double C7814 = hry[1110];
    const double C7821 = hry[1111];
    const double C7828 = hry[1112];
    const double C7835 = hry[1113];
    const double C7842 = hry[1114];
    const double C7849 = hry[1115];
    const double C7856 = hry[1116];
    const double C7863 = hry[1117];
    const double C7870 = hry[1118];
    const double C7877 = hry[1119];
    const double C7884 = hry[1120];
    const double C7891 = hry[1121];
    const double C7898 = hry[1122];
    const double C7905 = hry[1123];
    const double C7912 = hry[1124];
    const double C7919 = hry[1125];
    const double C7926 = hry[1126];
    const double C7933 = hry[1127];
    const double C7940 = hry[1128];
    const double C7947 = hry[1129];
    const double C7954 = hry[1130];
    const double C7961 = hry[1131];
    const double C7968 = hry[1132];
    const double C7975 = hry[1133];
    const double C7982 = hry[1134];
    const double C7989 = hry[1135];
    const double C7996 = hry[1136];
    const double C8003 = hry[1137];
    const double C8010 = hry[1138];
    const double C8017 = hry[1139];
    const double C8024 = hry[1140];
    const double C8031 = hry[1141];
    const double C8038 = hry[1142];
    const double C8045 = hry[1143];
    const double C8052 = hry[1144];
    const double C8059 = hry[1145];
    const double C8066 = hry[1146];
    const double C8073 = hry[1147];
    const double C8080 = hry[1148];
    const double C8087 = hry[1149];
    const double C8094 = hry[1150];
    const double C8101 = hry[1151];
    const double C8108 = hry[1152];
    const double C8115 = hry[1153];
    const double C8122 = hry[1154];
    const double C8129 = hry[1155];
    const double C8136 = hry[1156];
    const double C8143 = hry[1157];
    const double C8150 = hry[1158];
    const double C8157 = hry[1159];
    const double C8164 = hry[1160];
    const double C8171 = hry[1161];
    const double C8178 = hry[1162];
    const double C8185 = hry[1163];
    const double C8192 = hry[1164];
    const double C8199 = hry[1165];
    const double C8206 = hry[1166];
    const double C8213 = hry[1167];
    const double C8220 = hry[1168];
    const double C8227 = hry[1169];
    const double C8234 = hry[1170];
    const double C8241 = hry[1171];
    const double C8248 = hry[1172];
    const double C8255 = hry[1173];
    const double C8262 = hry[1174];
    const double C8269 = hry[1175];
    const double C8276 = hry[1176];
    const double C8283 = hry[1177];
    const double C8290 = hry[1178];
    const double C8297 = hry[1179];
    const double C8304 = hry[1180];
    const double C8311 = hry[1181];
    const double C8318 = hry[1182];
    const double C8325 = hry[1183];
    const double C8332 = hry[1184];
    const double C8339 = hry[1185];
    const double C8346 = hry[1186];
    const double C8353 = hry[1187];
    const double C8360 = hry[1188];
    const double C8367 = hry[1189];
    const double C8374 = hry[1190];
    const double C8381 = hry[1191];
    const double C8388 = hry[1192];
    const double C8395 = hry[1193];
    const double C8402 = hry[1194];
    const double C8409 = hry[1195];
    const double C8416 = hry[1196];
    const double C8423 = hry[1197];
    const double C8430 = hry[1198];
    const double C8437 = hry[1199];
    const double C8444 = hry[1200];
    const double C8451 = hry[1201];
    const double C8458 = hry[1202];
    const double C8465 = hry[1203];
    const double C8472 = hry[1204];
    const double C8479 = hry[1205];
    const double C8486 = hry[1206];
    const double C8493 = hry[1207];
    const double C8500 = hry[1208];
    const double C8507 = hry[1209];
    const double C8514 = hry[1210];
    const double C8521 = hry[1211];
    const double C8528 = hry[1212];
    const double C8535 = hry[1213];
    const double C8542 = hry[1214];
    const double C8549 = hry[1215];
    const double C8556 = hry[1216];
    const double C8563 = hry[1217];
    const double C8570 = hry[1218];
    const double C8577 = hry[1219];
    const double C8584 = hry[1220];
    const double C8591 = hry[1221];
    const double C8598 = hry[1222];
    const double C8605 = hry[1223];
    const double C8612 = hry[1224];
    const double C8619 = hry[1225];
    const double C8626 = hry[1226];
    const double C8633 = hry[1227];
    const double C8640 = hry[1228];
    const double C8647 = hry[1229];
    const double C8654 = hry[1230];
    const double C8661 = hry[1231];
    const double C8668 = hry[1232];
    const double C8675 = hry[1233];
    const double C8682 = hry[1234];
    const double C8689 = hry[1235];
    const double C8696 = hry[1236];
    const double C8703 = hry[1237];
    const double C8710 = hry[1238];
    const double C8717 = hry[1239];
    const double C8724 = hry[1240];
    const double C8731 = hry[1241];
    const double C8738 = hry[1242];
    const double C8745 = hry[1243];
    const double C8752 = hry[1244];
    const double C8759 = hry[1245];
    const double C8766 = hry[1246];
    const double C8773 = hry[1247];
    const double C8780 = hry[1248];
    const double C8787 = hry[1249];
    const double C8794 = hry[1250];
    const double C8801 = hry[1251];
    const double C8808 = hry[1252];
    const double C8815 = hry[1253];
    const double C8822 = hry[1254];
    const double C8829 = hry[1255];
    const double C8836 = hry[1256];
    const double C8843 = hry[1257];
    const double C8850 = hry[1258];
    const double C8857 = hry[1259];
    const double C8864 = hry[1260];
    const double C8871 = hry[1261];
    const double C8878 = hry[1262];
    const double C8885 = hry[1263];
    const double C8892 = hry[1264];
    const double C8899 = hry[1265];
    const double C8906 = hry[1266];
    const double C8913 = hry[1267];
    const double C8920 = hry[1268];
    const double C8927 = hry[1269];
    const double C8934 = hry[1270];
    const double C8941 = hry[1271];
    const double C8948 = hry[1272];
    const double C8955 = hry[1273];
    const double C8962 = hry[1274];
    const double C8969 = hry[1275];
    const double C8976 = hry[1276];
    const double C8983 = hry[1277];
    const double C8990 = hry[1278];
    const double C8997 = hry[1279];
    const double C9004 = hry[1280];
    const double C9011 = hry[1281];
    const double C9018 = hry[1282];
    const double C9025 = hry[1283];
    const double C9032 = hry[1284];
    const double C9039 = hry[1285];
    const double C9046 = hry[1286];
    const double C9053 = hry[1287];
    const double C9060 = hry[1288];
    const double C9067 = hry[1289];
    const double C9074 = hry[1290];
    const double C9081 = hry[1291];
    const double C9088 = hry[1292];
    const double C9095 = hry[1293];
    const double C9102 = hry[1294];
    const double C9109 = hry[1295];
    const double C46 = hrz[0];
    const double C53 = hrz[1];
    const double C60 = hrz[2];
    const double C67 = hrz[3];
    const double C74 = hrz[4];
    const double C81 = hrz[5];
    const double C88 = hrz[6];
    const double C95 = hrz[7];
    const double C102 = hrz[8];
    const double C109 = hrz[9];
    const double C116 = hrz[10];
    const double C123 = hrz[11];
    const double C130 = hrz[12];
    const double C137 = hrz[13];
    const double C144 = hrz[14];
    const double C151 = hrz[15];
    const double C158 = hrz[16];
    const double C165 = hrz[17];
    const double C172 = hrz[18];
    const double C179 = hrz[19];
    const double C186 = hrz[20];
    const double C193 = hrz[21];
    const double C200 = hrz[22];
    const double C207 = hrz[23];
    const double C214 = hrz[24];
    const double C221 = hrz[25];
    const double C228 = hrz[26];
    const double C235 = hrz[27];
    const double C242 = hrz[28];
    const double C249 = hrz[29];
    const double C256 = hrz[30];
    const double C263 = hrz[31];
    const double C270 = hrz[32];
    const double C277 = hrz[33];
    const double C284 = hrz[34];
    const double C291 = hrz[35];
    const double C298 = hrz[36];
    const double C305 = hrz[37];
    const double C312 = hrz[38];
    const double C319 = hrz[39];
    const double C326 = hrz[40];
    const double C333 = hrz[41];
    const double C340 = hrz[42];
    const double C347 = hrz[43];
    const double C354 = hrz[44];
    const double C361 = hrz[45];
    const double C368 = hrz[46];
    const double C375 = hrz[47];
    const double C382 = hrz[48];
    const double C389 = hrz[49];
    const double C396 = hrz[50];
    const double C403 = hrz[51];
    const double C410 = hrz[52];
    const double C417 = hrz[53];
    const double C424 = hrz[54];
    const double C431 = hrz[55];
    const double C438 = hrz[56];
    const double C445 = hrz[57];
    const double C452 = hrz[58];
    const double C459 = hrz[59];
    const double C466 = hrz[60];
    const double C473 = hrz[61];
    const double C480 = hrz[62];
    const double C487 = hrz[63];
    const double C494 = hrz[64];
    const double C501 = hrz[65];
    const double C508 = hrz[66];
    const double C515 = hrz[67];
    const double C522 = hrz[68];
    const double C529 = hrz[69];
    const double C536 = hrz[70];
    const double C543 = hrz[71];
    const double C550 = hrz[72];
    const double C557 = hrz[73];
    const double C564 = hrz[74];
    const double C571 = hrz[75];
    const double C578 = hrz[76];
    const double C585 = hrz[77];
    const double C592 = hrz[78];
    const double C599 = hrz[79];
    const double C606 = hrz[80];
    const double C613 = hrz[81];
    const double C620 = hrz[82];
    const double C627 = hrz[83];
    const double C634 = hrz[84];
    const double C641 = hrz[85];
    const double C648 = hrz[86];
    const double C655 = hrz[87];
    const double C662 = hrz[88];
    const double C669 = hrz[89];
    const double C676 = hrz[90];
    const double C683 = hrz[91];
    const double C690 = hrz[92];
    const double C697 = hrz[93];
    const double C704 = hrz[94];
    const double C711 = hrz[95];
    const double C718 = hrz[96];
    const double C725 = hrz[97];
    const double C732 = hrz[98];
    const double C739 = hrz[99];
    const double C746 = hrz[100];
    const double C753 = hrz[101];
    const double C760 = hrz[102];
    const double C767 = hrz[103];
    const double C774 = hrz[104];
    const double C781 = hrz[105];
    const double C788 = hrz[106];
    const double C795 = hrz[107];
    const double C802 = hrz[108];
    const double C809 = hrz[109];
    const double C816 = hrz[110];
    const double C823 = hrz[111];
    const double C830 = hrz[112];
    const double C837 = hrz[113];
    const double C844 = hrz[114];
    const double C851 = hrz[115];
    const double C858 = hrz[116];
    const double C865 = hrz[117];
    const double C872 = hrz[118];
    const double C879 = hrz[119];
    const double C886 = hrz[120];
    const double C893 = hrz[121];
    const double C900 = hrz[122];
    const double C907 = hrz[123];
    const double C914 = hrz[124];
    const double C921 = hrz[125];
    const double C928 = hrz[126];
    const double C935 = hrz[127];
    const double C942 = hrz[128];
    const double C949 = hrz[129];
    const double C956 = hrz[130];
    const double C963 = hrz[131];
    const double C970 = hrz[132];
    const double C977 = hrz[133];
    const double C984 = hrz[134];
    const double C991 = hrz[135];
    const double C998 = hrz[136];
    const double C1005 = hrz[137];
    const double C1012 = hrz[138];
    const double C1019 = hrz[139];
    const double C1026 = hrz[140];
    const double C1033 = hrz[141];
    const double C1040 = hrz[142];
    const double C1047 = hrz[143];
    const double C1054 = hrz[144];
    const double C1061 = hrz[145];
    const double C1068 = hrz[146];
    const double C1075 = hrz[147];
    const double C1082 = hrz[148];
    const double C1089 = hrz[149];
    const double C1096 = hrz[150];
    const double C1103 = hrz[151];
    const double C1110 = hrz[152];
    const double C1117 = hrz[153];
    const double C1124 = hrz[154];
    const double C1131 = hrz[155];
    const double C1138 = hrz[156];
    const double C1145 = hrz[157];
    const double C1152 = hrz[158];
    const double C1159 = hrz[159];
    const double C1166 = hrz[160];
    const double C1173 = hrz[161];
    const double C1180 = hrz[162];
    const double C1187 = hrz[163];
    const double C1194 = hrz[164];
    const double C1201 = hrz[165];
    const double C1208 = hrz[166];
    const double C1215 = hrz[167];
    const double C1222 = hrz[168];
    const double C1229 = hrz[169];
    const double C1236 = hrz[170];
    const double C1243 = hrz[171];
    const double C1250 = hrz[172];
    const double C1257 = hrz[173];
    const double C1264 = hrz[174];
    const double C1271 = hrz[175];
    const double C1278 = hrz[176];
    const double C1285 = hrz[177];
    const double C1292 = hrz[178];
    const double C1299 = hrz[179];
    const double C1306 = hrz[180];
    const double C1313 = hrz[181];
    const double C1320 = hrz[182];
    const double C1327 = hrz[183];
    const double C1334 = hrz[184];
    const double C1341 = hrz[185];
    const double C1348 = hrz[186];
    const double C1355 = hrz[187];
    const double C1362 = hrz[188];
    const double C1369 = hrz[189];
    const double C1376 = hrz[190];
    const double C1383 = hrz[191];
    const double C1390 = hrz[192];
    const double C1397 = hrz[193];
    const double C1404 = hrz[194];
    const double C1411 = hrz[195];
    const double C1418 = hrz[196];
    const double C1425 = hrz[197];
    const double C1432 = hrz[198];
    const double C1439 = hrz[199];
    const double C1446 = hrz[200];
    const double C1453 = hrz[201];
    const double C1460 = hrz[202];
    const double C1467 = hrz[203];
    const double C1474 = hrz[204];
    const double C1481 = hrz[205];
    const double C1488 = hrz[206];
    const double C1495 = hrz[207];
    const double C1502 = hrz[208];
    const double C1509 = hrz[209];
    const double C1516 = hrz[210];
    const double C1523 = hrz[211];
    const double C1530 = hrz[212];
    const double C1537 = hrz[213];
    const double C1544 = hrz[214];
    const double C1551 = hrz[215];
    const double C1558 = hrz[216];
    const double C1565 = hrz[217];
    const double C1572 = hrz[218];
    const double C1579 = hrz[219];
    const double C1586 = hrz[220];
    const double C1593 = hrz[221];
    const double C1600 = hrz[222];
    const double C1607 = hrz[223];
    const double C1614 = hrz[224];
    const double C1621 = hrz[225];
    const double C1628 = hrz[226];
    const double C1635 = hrz[227];
    const double C1642 = hrz[228];
    const double C1649 = hrz[229];
    const double C1656 = hrz[230];
    const double C1663 = hrz[231];
    const double C1670 = hrz[232];
    const double C1677 = hrz[233];
    const double C1684 = hrz[234];
    const double C1691 = hrz[235];
    const double C1698 = hrz[236];
    const double C1705 = hrz[237];
    const double C1712 = hrz[238];
    const double C1719 = hrz[239];
    const double C1726 = hrz[240];
    const double C1733 = hrz[241];
    const double C1740 = hrz[242];
    const double C1747 = hrz[243];
    const double C1754 = hrz[244];
    const double C1761 = hrz[245];
    const double C1768 = hrz[246];
    const double C1775 = hrz[247];
    const double C1782 = hrz[248];
    const double C1789 = hrz[249];
    const double C1796 = hrz[250];
    const double C1803 = hrz[251];
    const double C1810 = hrz[252];
    const double C1817 = hrz[253];
    const double C1824 = hrz[254];
    const double C1831 = hrz[255];
    const double C1838 = hrz[256];
    const double C1845 = hrz[257];
    const double C1852 = hrz[258];
    const double C1859 = hrz[259];
    const double C1866 = hrz[260];
    const double C1873 = hrz[261];
    const double C1880 = hrz[262];
    const double C1887 = hrz[263];
    const double C1894 = hrz[264];
    const double C1901 = hrz[265];
    const double C1908 = hrz[266];
    const double C1915 = hrz[267];
    const double C1922 = hrz[268];
    const double C1929 = hrz[269];
    const double C1936 = hrz[270];
    const double C1943 = hrz[271];
    const double C1950 = hrz[272];
    const double C1957 = hrz[273];
    const double C1964 = hrz[274];
    const double C1971 = hrz[275];
    const double C1978 = hrz[276];
    const double C1985 = hrz[277];
    const double C1992 = hrz[278];
    const double C1999 = hrz[279];
    const double C2006 = hrz[280];
    const double C2013 = hrz[281];
    const double C2020 = hrz[282];
    const double C2027 = hrz[283];
    const double C2034 = hrz[284];
    const double C2041 = hrz[285];
    const double C2048 = hrz[286];
    const double C2055 = hrz[287];
    const double C2062 = hrz[288];
    const double C2069 = hrz[289];
    const double C2076 = hrz[290];
    const double C2083 = hrz[291];
    const double C2090 = hrz[292];
    const double C2097 = hrz[293];
    const double C2104 = hrz[294];
    const double C2111 = hrz[295];
    const double C2118 = hrz[296];
    const double C2125 = hrz[297];
    const double C2132 = hrz[298];
    const double C2139 = hrz[299];
    const double C2146 = hrz[300];
    const double C2153 = hrz[301];
    const double C2160 = hrz[302];
    const double C2167 = hrz[303];
    const double C2174 = hrz[304];
    const double C2181 = hrz[305];
    const double C2188 = hrz[306];
    const double C2195 = hrz[307];
    const double C2202 = hrz[308];
    const double C2209 = hrz[309];
    const double C2216 = hrz[310];
    const double C2223 = hrz[311];
    const double C2230 = hrz[312];
    const double C2237 = hrz[313];
    const double C2244 = hrz[314];
    const double C2251 = hrz[315];
    const double C2258 = hrz[316];
    const double C2265 = hrz[317];
    const double C2272 = hrz[318];
    const double C2279 = hrz[319];
    const double C2286 = hrz[320];
    const double C2293 = hrz[321];
    const double C2300 = hrz[322];
    const double C2307 = hrz[323];
    const double C2314 = hrz[324];
    const double C2321 = hrz[325];
    const double C2328 = hrz[326];
    const double C2335 = hrz[327];
    const double C2342 = hrz[328];
    const double C2349 = hrz[329];
    const double C2356 = hrz[330];
    const double C2363 = hrz[331];
    const double C2370 = hrz[332];
    const double C2377 = hrz[333];
    const double C2384 = hrz[334];
    const double C2391 = hrz[335];
    const double C2398 = hrz[336];
    const double C2405 = hrz[337];
    const double C2412 = hrz[338];
    const double C2419 = hrz[339];
    const double C2426 = hrz[340];
    const double C2433 = hrz[341];
    const double C2440 = hrz[342];
    const double C2447 = hrz[343];
    const double C2454 = hrz[344];
    const double C2461 = hrz[345];
    const double C2468 = hrz[346];
    const double C2475 = hrz[347];
    const double C2482 = hrz[348];
    const double C2489 = hrz[349];
    const double C2496 = hrz[350];
    const double C2503 = hrz[351];
    const double C2510 = hrz[352];
    const double C2517 = hrz[353];
    const double C2524 = hrz[354];
    const double C2531 = hrz[355];
    const double C2538 = hrz[356];
    const double C2545 = hrz[357];
    const double C2552 = hrz[358];
    const double C2559 = hrz[359];
    const double C2566 = hrz[360];
    const double C2573 = hrz[361];
    const double C2580 = hrz[362];
    const double C2587 = hrz[363];
    const double C2594 = hrz[364];
    const double C2601 = hrz[365];
    const double C2608 = hrz[366];
    const double C2615 = hrz[367];
    const double C2622 = hrz[368];
    const double C2629 = hrz[369];
    const double C2636 = hrz[370];
    const double C2643 = hrz[371];
    const double C2650 = hrz[372];
    const double C2657 = hrz[373];
    const double C2664 = hrz[374];
    const double C2671 = hrz[375];
    const double C2678 = hrz[376];
    const double C2685 = hrz[377];
    const double C2692 = hrz[378];
    const double C2699 = hrz[379];
    const double C2706 = hrz[380];
    const double C2713 = hrz[381];
    const double C2720 = hrz[382];
    const double C2727 = hrz[383];
    const double C2734 = hrz[384];
    const double C2741 = hrz[385];
    const double C2748 = hrz[386];
    const double C2755 = hrz[387];
    const double C2762 = hrz[388];
    const double C2769 = hrz[389];
    const double C2776 = hrz[390];
    const double C2783 = hrz[391];
    const double C2790 = hrz[392];
    const double C2797 = hrz[393];
    const double C2804 = hrz[394];
    const double C2811 = hrz[395];
    const double C2818 = hrz[396];
    const double C2825 = hrz[397];
    const double C2832 = hrz[398];
    const double C2839 = hrz[399];
    const double C2846 = hrz[400];
    const double C2853 = hrz[401];
    const double C2860 = hrz[402];
    const double C2867 = hrz[403];
    const double C2874 = hrz[404];
    const double C2881 = hrz[405];
    const double C2888 = hrz[406];
    const double C2895 = hrz[407];
    const double C2902 = hrz[408];
    const double C2909 = hrz[409];
    const double C2916 = hrz[410];
    const double C2923 = hrz[411];
    const double C2930 = hrz[412];
    const double C2937 = hrz[413];
    const double C2944 = hrz[414];
    const double C2951 = hrz[415];
    const double C2958 = hrz[416];
    const double C2965 = hrz[417];
    const double C2972 = hrz[418];
    const double C2979 = hrz[419];
    const double C2986 = hrz[420];
    const double C2993 = hrz[421];
    const double C3000 = hrz[422];
    const double C3007 = hrz[423];
    const double C3014 = hrz[424];
    const double C3021 = hrz[425];
    const double C3028 = hrz[426];
    const double C3035 = hrz[427];
    const double C3042 = hrz[428];
    const double C3049 = hrz[429];
    const double C3056 = hrz[430];
    const double C3063 = hrz[431];
    const double C3070 = hrz[432];
    const double C3077 = hrz[433];
    const double C3084 = hrz[434];
    const double C3091 = hrz[435];
    const double C3098 = hrz[436];
    const double C3105 = hrz[437];
    const double C3112 = hrz[438];
    const double C3119 = hrz[439];
    const double C3126 = hrz[440];
    const double C3133 = hrz[441];
    const double C3140 = hrz[442];
    const double C3147 = hrz[443];
    const double C3154 = hrz[444];
    const double C3161 = hrz[445];
    const double C3168 = hrz[446];
    const double C3175 = hrz[447];
    const double C3182 = hrz[448];
    const double C3189 = hrz[449];
    const double C3196 = hrz[450];
    const double C3203 = hrz[451];
    const double C3210 = hrz[452];
    const double C3217 = hrz[453];
    const double C3224 = hrz[454];
    const double C3231 = hrz[455];
    const double C3238 = hrz[456];
    const double C3245 = hrz[457];
    const double C3252 = hrz[458];
    const double C3259 = hrz[459];
    const double C3266 = hrz[460];
    const double C3273 = hrz[461];
    const double C3280 = hrz[462];
    const double C3287 = hrz[463];
    const double C3294 = hrz[464];
    const double C3301 = hrz[465];
    const double C3308 = hrz[466];
    const double C3315 = hrz[467];
    const double C3322 = hrz[468];
    const double C3329 = hrz[469];
    const double C3336 = hrz[470];
    const double C3343 = hrz[471];
    const double C3350 = hrz[472];
    const double C3357 = hrz[473];
    const double C3364 = hrz[474];
    const double C3371 = hrz[475];
    const double C3378 = hrz[476];
    const double C3385 = hrz[477];
    const double C3392 = hrz[478];
    const double C3399 = hrz[479];
    const double C3406 = hrz[480];
    const double C3413 = hrz[481];
    const double C3420 = hrz[482];
    const double C3427 = hrz[483];
    const double C3434 = hrz[484];
    const double C3441 = hrz[485];
    const double C3448 = hrz[486];
    const double C3455 = hrz[487];
    const double C3462 = hrz[488];
    const double C3469 = hrz[489];
    const double C3476 = hrz[490];
    const double C3483 = hrz[491];
    const double C3490 = hrz[492];
    const double C3497 = hrz[493];
    const double C3504 = hrz[494];
    const double C3511 = hrz[495];
    const double C3518 = hrz[496];
    const double C3525 = hrz[497];
    const double C3532 = hrz[498];
    const double C3539 = hrz[499];
    const double C3546 = hrz[500];
    const double C3553 = hrz[501];
    const double C3560 = hrz[502];
    const double C3567 = hrz[503];
    const double C3574 = hrz[504];
    const double C3581 = hrz[505];
    const double C3588 = hrz[506];
    const double C3595 = hrz[507];
    const double C3602 = hrz[508];
    const double C3609 = hrz[509];
    const double C3616 = hrz[510];
    const double C3623 = hrz[511];
    const double C3630 = hrz[512];
    const double C3637 = hrz[513];
    const double C3644 = hrz[514];
    const double C3651 = hrz[515];
    const double C3658 = hrz[516];
    const double C3665 = hrz[517];
    const double C3672 = hrz[518];
    const double C3679 = hrz[519];
    const double C3686 = hrz[520];
    const double C3693 = hrz[521];
    const double C3700 = hrz[522];
    const double C3707 = hrz[523];
    const double C3714 = hrz[524];
    const double C3721 = hrz[525];
    const double C3728 = hrz[526];
    const double C3735 = hrz[527];
    const double C3742 = hrz[528];
    const double C3749 = hrz[529];
    const double C3756 = hrz[530];
    const double C3763 = hrz[531];
    const double C3770 = hrz[532];
    const double C3777 = hrz[533];
    const double C3784 = hrz[534];
    const double C3791 = hrz[535];
    const double C3798 = hrz[536];
    const double C3805 = hrz[537];
    const double C3812 = hrz[538];
    const double C3819 = hrz[539];
    const double C3826 = hrz[540];
    const double C3833 = hrz[541];
    const double C3840 = hrz[542];
    const double C3847 = hrz[543];
    const double C3854 = hrz[544];
    const double C3861 = hrz[545];
    const double C3868 = hrz[546];
    const double C3875 = hrz[547];
    const double C3882 = hrz[548];
    const double C3889 = hrz[549];
    const double C3896 = hrz[550];
    const double C3903 = hrz[551];
    const double C3910 = hrz[552];
    const double C3917 = hrz[553];
    const double C3924 = hrz[554];
    const double C3931 = hrz[555];
    const double C3938 = hrz[556];
    const double C3945 = hrz[557];
    const double C3952 = hrz[558];
    const double C3959 = hrz[559];
    const double C3966 = hrz[560];
    const double C3973 = hrz[561];
    const double C3980 = hrz[562];
    const double C3987 = hrz[563];
    const double C3994 = hrz[564];
    const double C4001 = hrz[565];
    const double C4008 = hrz[566];
    const double C4015 = hrz[567];
    const double C4022 = hrz[568];
    const double C4029 = hrz[569];
    const double C4036 = hrz[570];
    const double C4043 = hrz[571];
    const double C4050 = hrz[572];
    const double C4057 = hrz[573];
    const double C4064 = hrz[574];
    const double C4071 = hrz[575];
    const double C4078 = hrz[576];
    const double C4085 = hrz[577];
    const double C4092 = hrz[578];
    const double C4099 = hrz[579];
    const double C4106 = hrz[580];
    const double C4113 = hrz[581];
    const double C4120 = hrz[582];
    const double C4127 = hrz[583];
    const double C4134 = hrz[584];
    const double C4141 = hrz[585];
    const double C4148 = hrz[586];
    const double C4155 = hrz[587];
    const double C4162 = hrz[588];
    const double C4169 = hrz[589];
    const double C4176 = hrz[590];
    const double C4183 = hrz[591];
    const double C4190 = hrz[592];
    const double C4197 = hrz[593];
    const double C4204 = hrz[594];
    const double C4211 = hrz[595];
    const double C4218 = hrz[596];
    const double C4225 = hrz[597];
    const double C4232 = hrz[598];
    const double C4239 = hrz[599];
    const double C4246 = hrz[600];
    const double C4253 = hrz[601];
    const double C4260 = hrz[602];
    const double C4267 = hrz[603];
    const double C4274 = hrz[604];
    const double C4281 = hrz[605];
    const double C4288 = hrz[606];
    const double C4295 = hrz[607];
    const double C4302 = hrz[608];
    const double C4309 = hrz[609];
    const double C4316 = hrz[610];
    const double C4323 = hrz[611];
    const double C4330 = hrz[612];
    const double C4337 = hrz[613];
    const double C4344 = hrz[614];
    const double C4351 = hrz[615];
    const double C4358 = hrz[616];
    const double C4365 = hrz[617];
    const double C4372 = hrz[618];
    const double C4379 = hrz[619];
    const double C4386 = hrz[620];
    const double C4393 = hrz[621];
    const double C4400 = hrz[622];
    const double C4407 = hrz[623];
    const double C4414 = hrz[624];
    const double C4421 = hrz[625];
    const double C4428 = hrz[626];
    const double C4435 = hrz[627];
    const double C4442 = hrz[628];
    const double C4449 = hrz[629];
    const double C4456 = hrz[630];
    const double C4463 = hrz[631];
    const double C4470 = hrz[632];
    const double C4477 = hrz[633];
    const double C4484 = hrz[634];
    const double C4491 = hrz[635];
    const double C4498 = hrz[636];
    const double C4505 = hrz[637];
    const double C4512 = hrz[638];
    const double C4519 = hrz[639];
    const double C4526 = hrz[640];
    const double C4533 = hrz[641];
    const double C4540 = hrz[642];
    const double C4547 = hrz[643];
    const double C4554 = hrz[644];
    const double C4561 = hrz[645];
    const double C4568 = hrz[646];
    const double C4575 = hrz[647];
    const double C4582 = hrz[648];
    const double C4589 = hrz[649];
    const double C4596 = hrz[650];
    const double C4603 = hrz[651];
    const double C4610 = hrz[652];
    const double C4617 = hrz[653];
    const double C4624 = hrz[654];
    const double C4631 = hrz[655];
    const double C4638 = hrz[656];
    const double C4645 = hrz[657];
    const double C4652 = hrz[658];
    const double C4659 = hrz[659];
    const double C4666 = hrz[660];
    const double C4673 = hrz[661];
    const double C4680 = hrz[662];
    const double C4687 = hrz[663];
    const double C4694 = hrz[664];
    const double C4701 = hrz[665];
    const double C4708 = hrz[666];
    const double C4715 = hrz[667];
    const double C4722 = hrz[668];
    const double C4729 = hrz[669];
    const double C4736 = hrz[670];
    const double C4743 = hrz[671];
    const double C4750 = hrz[672];
    const double C4757 = hrz[673];
    const double C4764 = hrz[674];
    const double C4771 = hrz[675];
    const double C4778 = hrz[676];
    const double C4785 = hrz[677];
    const double C4792 = hrz[678];
    const double C4799 = hrz[679];
    const double C4806 = hrz[680];
    const double C4813 = hrz[681];
    const double C4820 = hrz[682];
    const double C4827 = hrz[683];
    const double C4834 = hrz[684];
    const double C4841 = hrz[685];
    const double C4848 = hrz[686];
    const double C4855 = hrz[687];
    const double C4862 = hrz[688];
    const double C4869 = hrz[689];
    const double C4876 = hrz[690];
    const double C4883 = hrz[691];
    const double C4890 = hrz[692];
    const double C4897 = hrz[693];
    const double C4904 = hrz[694];
    const double C4911 = hrz[695];
    const double C4918 = hrz[696];
    const double C4925 = hrz[697];
    const double C4932 = hrz[698];
    const double C4939 = hrz[699];
    const double C4946 = hrz[700];
    const double C4953 = hrz[701];
    const double C4960 = hrz[702];
    const double C4967 = hrz[703];
    const double C4974 = hrz[704];
    const double C4981 = hrz[705];
    const double C4988 = hrz[706];
    const double C4995 = hrz[707];
    const double C5002 = hrz[708];
    const double C5009 = hrz[709];
    const double C5016 = hrz[710];
    const double C5023 = hrz[711];
    const double C5030 = hrz[712];
    const double C5037 = hrz[713];
    const double C5044 = hrz[714];
    const double C5051 = hrz[715];
    const double C5058 = hrz[716];
    const double C5065 = hrz[717];
    const double C5072 = hrz[718];
    const double C5079 = hrz[719];
    const double C5086 = hrz[720];
    const double C5093 = hrz[721];
    const double C5100 = hrz[722];
    const double C5107 = hrz[723];
    const double C5114 = hrz[724];
    const double C5121 = hrz[725];
    const double C5128 = hrz[726];
    const double C5135 = hrz[727];
    const double C5142 = hrz[728];
    const double C5149 = hrz[729];
    const double C5156 = hrz[730];
    const double C5163 = hrz[731];
    const double C5170 = hrz[732];
    const double C5177 = hrz[733];
    const double C5184 = hrz[734];
    const double C5191 = hrz[735];
    const double C5198 = hrz[736];
    const double C5205 = hrz[737];
    const double C5212 = hrz[738];
    const double C5219 = hrz[739];
    const double C5226 = hrz[740];
    const double C5233 = hrz[741];
    const double C5240 = hrz[742];
    const double C5247 = hrz[743];
    const double C5254 = hrz[744];
    const double C5261 = hrz[745];
    const double C5268 = hrz[746];
    const double C5275 = hrz[747];
    const double C5282 = hrz[748];
    const double C5289 = hrz[749];
    const double C5296 = hrz[750];
    const double C5303 = hrz[751];
    const double C5310 = hrz[752];
    const double C5317 = hrz[753];
    const double C5324 = hrz[754];
    const double C5331 = hrz[755];
    const double C5338 = hrz[756];
    const double C5345 = hrz[757];
    const double C5352 = hrz[758];
    const double C5359 = hrz[759];
    const double C5366 = hrz[760];
    const double C5373 = hrz[761];
    const double C5380 = hrz[762];
    const double C5387 = hrz[763];
    const double C5394 = hrz[764];
    const double C5401 = hrz[765];
    const double C5408 = hrz[766];
    const double C5415 = hrz[767];
    const double C5422 = hrz[768];
    const double C5429 = hrz[769];
    const double C5436 = hrz[770];
    const double C5443 = hrz[771];
    const double C5450 = hrz[772];
    const double C5457 = hrz[773];
    const double C5464 = hrz[774];
    const double C5471 = hrz[775];
    const double C5478 = hrz[776];
    const double C5485 = hrz[777];
    const double C5492 = hrz[778];
    const double C5499 = hrz[779];
    const double C5506 = hrz[780];
    const double C5513 = hrz[781];
    const double C5520 = hrz[782];
    const double C5527 = hrz[783];
    const double C5534 = hrz[784];
    const double C5541 = hrz[785];
    const double C5548 = hrz[786];
    const double C5555 = hrz[787];
    const double C5562 = hrz[788];
    const double C5569 = hrz[789];
    const double C5576 = hrz[790];
    const double C5583 = hrz[791];
    const double C5590 = hrz[792];
    const double C5597 = hrz[793];
    const double C5604 = hrz[794];
    const double C5611 = hrz[795];
    const double C5618 = hrz[796];
    const double C5625 = hrz[797];
    const double C5632 = hrz[798];
    const double C5639 = hrz[799];
    const double C5646 = hrz[800];
    const double C5653 = hrz[801];
    const double C5660 = hrz[802];
    const double C5667 = hrz[803];
    const double C5674 = hrz[804];
    const double C5681 = hrz[805];
    const double C5688 = hrz[806];
    const double C5695 = hrz[807];
    const double C5702 = hrz[808];
    const double C5709 = hrz[809];
    const double C5716 = hrz[810];
    const double C5723 = hrz[811];
    const double C5730 = hrz[812];
    const double C5737 = hrz[813];
    const double C5744 = hrz[814];
    const double C5751 = hrz[815];
    const double C5758 = hrz[816];
    const double C5765 = hrz[817];
    const double C5772 = hrz[818];
    const double C5779 = hrz[819];
    const double C5786 = hrz[820];
    const double C5793 = hrz[821];
    const double C5800 = hrz[822];
    const double C5807 = hrz[823];
    const double C5814 = hrz[824];
    const double C5821 = hrz[825];
    const double C5828 = hrz[826];
    const double C5835 = hrz[827];
    const double C5842 = hrz[828];
    const double C5849 = hrz[829];
    const double C5856 = hrz[830];
    const double C5863 = hrz[831];
    const double C5870 = hrz[832];
    const double C5877 = hrz[833];
    const double C5884 = hrz[834];
    const double C5891 = hrz[835];
    const double C5898 = hrz[836];
    const double C5905 = hrz[837];
    const double C5912 = hrz[838];
    const double C5919 = hrz[839];
    const double C5926 = hrz[840];
    const double C5933 = hrz[841];
    const double C5940 = hrz[842];
    const double C5947 = hrz[843];
    const double C5954 = hrz[844];
    const double C5961 = hrz[845];
    const double C5968 = hrz[846];
    const double C5975 = hrz[847];
    const double C5982 = hrz[848];
    const double C5989 = hrz[849];
    const double C5996 = hrz[850];
    const double C6003 = hrz[851];
    const double C6010 = hrz[852];
    const double C6017 = hrz[853];
    const double C6024 = hrz[854];
    const double C6031 = hrz[855];
    const double C6038 = hrz[856];
    const double C6045 = hrz[857];
    const double C6052 = hrz[858];
    const double C6059 = hrz[859];
    const double C6066 = hrz[860];
    const double C6073 = hrz[861];
    const double C6080 = hrz[862];
    const double C6087 = hrz[863];
    const double C6094 = hrz[864];
    const double C6101 = hrz[865];
    const double C6108 = hrz[866];
    const double C6115 = hrz[867];
    const double C6122 = hrz[868];
    const double C6129 = hrz[869];
    const double C6136 = hrz[870];
    const double C6143 = hrz[871];
    const double C6150 = hrz[872];
    const double C6157 = hrz[873];
    const double C6164 = hrz[874];
    const double C6171 = hrz[875];
    const double C6178 = hrz[876];
    const double C6185 = hrz[877];
    const double C6192 = hrz[878];
    const double C6199 = hrz[879];
    const double C6206 = hrz[880];
    const double C6213 = hrz[881];
    const double C6220 = hrz[882];
    const double C6227 = hrz[883];
    const double C6234 = hrz[884];
    const double C6241 = hrz[885];
    const double C6248 = hrz[886];
    const double C6255 = hrz[887];
    const double C6262 = hrz[888];
    const double C6269 = hrz[889];
    const double C6276 = hrz[890];
    const double C6283 = hrz[891];
    const double C6290 = hrz[892];
    const double C6297 = hrz[893];
    const double C6304 = hrz[894];
    const double C6311 = hrz[895];
    const double C6318 = hrz[896];
    const double C6325 = hrz[897];
    const double C6332 = hrz[898];
    const double C6339 = hrz[899];
    const double C6346 = hrz[900];
    const double C6353 = hrz[901];
    const double C6360 = hrz[902];
    const double C6367 = hrz[903];
    const double C6374 = hrz[904];
    const double C6381 = hrz[905];
    const double C6388 = hrz[906];
    const double C6395 = hrz[907];
    const double C6402 = hrz[908];
    const double C6409 = hrz[909];
    const double C6416 = hrz[910];
    const double C6423 = hrz[911];
    const double C6430 = hrz[912];
    const double C6437 = hrz[913];
    const double C6444 = hrz[914];
    const double C6451 = hrz[915];
    const double C6458 = hrz[916];
    const double C6465 = hrz[917];
    const double C6472 = hrz[918];
    const double C6479 = hrz[919];
    const double C6486 = hrz[920];
    const double C6493 = hrz[921];
    const double C6500 = hrz[922];
    const double C6507 = hrz[923];
    const double C6514 = hrz[924];
    const double C6521 = hrz[925];
    const double C6528 = hrz[926];
    const double C6535 = hrz[927];
    const double C6542 = hrz[928];
    const double C6549 = hrz[929];
    const double C6556 = hrz[930];
    const double C6563 = hrz[931];
    const double C6570 = hrz[932];
    const double C6577 = hrz[933];
    const double C6584 = hrz[934];
    const double C6591 = hrz[935];
    const double C6598 = hrz[936];
    const double C6605 = hrz[937];
    const double C6612 = hrz[938];
    const double C6619 = hrz[939];
    const double C6626 = hrz[940];
    const double C6633 = hrz[941];
    const double C6640 = hrz[942];
    const double C6647 = hrz[943];
    const double C6654 = hrz[944];
    const double C6661 = hrz[945];
    const double C6668 = hrz[946];
    const double C6675 = hrz[947];
    const double C6682 = hrz[948];
    const double C6689 = hrz[949];
    const double C6696 = hrz[950];
    const double C6703 = hrz[951];
    const double C6710 = hrz[952];
    const double C6717 = hrz[953];
    const double C6724 = hrz[954];
    const double C6731 = hrz[955];
    const double C6738 = hrz[956];
    const double C6745 = hrz[957];
    const double C6752 = hrz[958];
    const double C6759 = hrz[959];
    const double C6766 = hrz[960];
    const double C6773 = hrz[961];
    const double C6780 = hrz[962];
    const double C6787 = hrz[963];
    const double C6794 = hrz[964];
    const double C6801 = hrz[965];
    const double C6808 = hrz[966];
    const double C6815 = hrz[967];
    const double C6822 = hrz[968];
    const double C6829 = hrz[969];
    const double C6836 = hrz[970];
    const double C6843 = hrz[971];
    const double C6850 = hrz[972];
    const double C6857 = hrz[973];
    const double C6864 = hrz[974];
    const double C6871 = hrz[975];
    const double C6878 = hrz[976];
    const double C6885 = hrz[977];
    const double C6892 = hrz[978];
    const double C6899 = hrz[979];
    const double C6906 = hrz[980];
    const double C6913 = hrz[981];
    const double C6920 = hrz[982];
    const double C6927 = hrz[983];
    const double C6934 = hrz[984];
    const double C6941 = hrz[985];
    const double C6948 = hrz[986];
    const double C6955 = hrz[987];
    const double C6962 = hrz[988];
    const double C6969 = hrz[989];
    const double C6976 = hrz[990];
    const double C6983 = hrz[991];
    const double C6990 = hrz[992];
    const double C6997 = hrz[993];
    const double C7004 = hrz[994];
    const double C7011 = hrz[995];
    const double C7018 = hrz[996];
    const double C7025 = hrz[997];
    const double C7032 = hrz[998];
    const double C7039 = hrz[999];
    const double C7046 = hrz[1000];
    const double C7053 = hrz[1001];
    const double C7060 = hrz[1002];
    const double C7067 = hrz[1003];
    const double C7074 = hrz[1004];
    const double C7081 = hrz[1005];
    const double C7088 = hrz[1006];
    const double C7095 = hrz[1007];
    const double C7102 = hrz[1008];
    const double C7109 = hrz[1009];
    const double C7116 = hrz[1010];
    const double C7123 = hrz[1011];
    const double C7130 = hrz[1012];
    const double C7137 = hrz[1013];
    const double C7144 = hrz[1014];
    const double C7151 = hrz[1015];
    const double C7158 = hrz[1016];
    const double C7165 = hrz[1017];
    const double C7172 = hrz[1018];
    const double C7179 = hrz[1019];
    const double C7186 = hrz[1020];
    const double C7193 = hrz[1021];
    const double C7200 = hrz[1022];
    const double C7207 = hrz[1023];
    const double C7214 = hrz[1024];
    const double C7221 = hrz[1025];
    const double C7228 = hrz[1026];
    const double C7235 = hrz[1027];
    const double C7242 = hrz[1028];
    const double C7249 = hrz[1029];
    const double C7256 = hrz[1030];
    const double C7263 = hrz[1031];
    const double C7270 = hrz[1032];
    const double C7277 = hrz[1033];
    const double C7284 = hrz[1034];
    const double C7291 = hrz[1035];
    const double C7298 = hrz[1036];
    const double C7305 = hrz[1037];
    const double C7312 = hrz[1038];
    const double C7319 = hrz[1039];
    const double C7326 = hrz[1040];
    const double C7333 = hrz[1041];
    const double C7340 = hrz[1042];
    const double C7347 = hrz[1043];
    const double C7354 = hrz[1044];
    const double C7361 = hrz[1045];
    const double C7368 = hrz[1046];
    const double C7375 = hrz[1047];
    const double C7382 = hrz[1048];
    const double C7389 = hrz[1049];
    const double C7396 = hrz[1050];
    const double C7403 = hrz[1051];
    const double C7410 = hrz[1052];
    const double C7417 = hrz[1053];
    const double C7424 = hrz[1054];
    const double C7431 = hrz[1055];
    const double C7438 = hrz[1056];
    const double C7445 = hrz[1057];
    const double C7452 = hrz[1058];
    const double C7459 = hrz[1059];
    const double C7466 = hrz[1060];
    const double C7473 = hrz[1061];
    const double C7480 = hrz[1062];
    const double C7487 = hrz[1063];
    const double C7494 = hrz[1064];
    const double C7501 = hrz[1065];
    const double C7508 = hrz[1066];
    const double C7515 = hrz[1067];
    const double C7522 = hrz[1068];
    const double C7529 = hrz[1069];
    const double C7536 = hrz[1070];
    const double C7543 = hrz[1071];
    const double C7550 = hrz[1072];
    const double C7557 = hrz[1073];
    const double C7564 = hrz[1074];
    const double C7571 = hrz[1075];
    const double C7578 = hrz[1076];
    const double C7585 = hrz[1077];
    const double C7592 = hrz[1078];
    const double C7599 = hrz[1079];
    const double C7606 = hrz[1080];
    const double C7613 = hrz[1081];
    const double C7620 = hrz[1082];
    const double C7627 = hrz[1083];
    const double C7634 = hrz[1084];
    const double C7641 = hrz[1085];
    const double C7648 = hrz[1086];
    const double C7655 = hrz[1087];
    const double C7662 = hrz[1088];
    const double C7669 = hrz[1089];
    const double C7676 = hrz[1090];
    const double C7683 = hrz[1091];
    const double C7690 = hrz[1092];
    const double C7697 = hrz[1093];
    const double C7704 = hrz[1094];
    const double C7711 = hrz[1095];
    const double C7718 = hrz[1096];
    const double C7725 = hrz[1097];
    const double C7732 = hrz[1098];
    const double C7739 = hrz[1099];
    const double C7746 = hrz[1100];
    const double C7753 = hrz[1101];
    const double C7760 = hrz[1102];
    const double C7767 = hrz[1103];
    const double C7774 = hrz[1104];
    const double C7781 = hrz[1105];
    const double C7788 = hrz[1106];
    const double C7795 = hrz[1107];
    const double C7802 = hrz[1108];
    const double C7809 = hrz[1109];
    const double C7816 = hrz[1110];
    const double C7823 = hrz[1111];
    const double C7830 = hrz[1112];
    const double C7837 = hrz[1113];
    const double C7844 = hrz[1114];
    const double C7851 = hrz[1115];
    const double C7858 = hrz[1116];
    const double C7865 = hrz[1117];
    const double C7872 = hrz[1118];
    const double C7879 = hrz[1119];
    const double C7886 = hrz[1120];
    const double C7893 = hrz[1121];
    const double C7900 = hrz[1122];
    const double C7907 = hrz[1123];
    const double C7914 = hrz[1124];
    const double C7921 = hrz[1125];
    const double C7928 = hrz[1126];
    const double C7935 = hrz[1127];
    const double C7942 = hrz[1128];
    const double C7949 = hrz[1129];
    const double C7956 = hrz[1130];
    const double C7963 = hrz[1131];
    const double C7970 = hrz[1132];
    const double C7977 = hrz[1133];
    const double C7984 = hrz[1134];
    const double C7991 = hrz[1135];
    const double C7998 = hrz[1136];
    const double C8005 = hrz[1137];
    const double C8012 = hrz[1138];
    const double C8019 = hrz[1139];
    const double C8026 = hrz[1140];
    const double C8033 = hrz[1141];
    const double C8040 = hrz[1142];
    const double C8047 = hrz[1143];
    const double C8054 = hrz[1144];
    const double C8061 = hrz[1145];
    const double C8068 = hrz[1146];
    const double C8075 = hrz[1147];
    const double C8082 = hrz[1148];
    const double C8089 = hrz[1149];
    const double C8096 = hrz[1150];
    const double C8103 = hrz[1151];
    const double C8110 = hrz[1152];
    const double C8117 = hrz[1153];
    const double C8124 = hrz[1154];
    const double C8131 = hrz[1155];
    const double C8138 = hrz[1156];
    const double C8145 = hrz[1157];
    const double C8152 = hrz[1158];
    const double C8159 = hrz[1159];
    const double C8166 = hrz[1160];
    const double C8173 = hrz[1161];
    const double C8180 = hrz[1162];
    const double C8187 = hrz[1163];
    const double C8194 = hrz[1164];
    const double C8201 = hrz[1165];
    const double C8208 = hrz[1166];
    const double C8215 = hrz[1167];
    const double C8222 = hrz[1168];
    const double C8229 = hrz[1169];
    const double C8236 = hrz[1170];
    const double C8243 = hrz[1171];
    const double C8250 = hrz[1172];
    const double C8257 = hrz[1173];
    const double C8264 = hrz[1174];
    const double C8271 = hrz[1175];
    const double C8278 = hrz[1176];
    const double C8285 = hrz[1177];
    const double C8292 = hrz[1178];
    const double C8299 = hrz[1179];
    const double C8306 = hrz[1180];
    const double C8313 = hrz[1181];
    const double C8320 = hrz[1182];
    const double C8327 = hrz[1183];
    const double C8334 = hrz[1184];
    const double C8341 = hrz[1185];
    const double C8348 = hrz[1186];
    const double C8355 = hrz[1187];
    const double C8362 = hrz[1188];
    const double C8369 = hrz[1189];
    const double C8376 = hrz[1190];
    const double C8383 = hrz[1191];
    const double C8390 = hrz[1192];
    const double C8397 = hrz[1193];
    const double C8404 = hrz[1194];
    const double C8411 = hrz[1195];
    const double C8418 = hrz[1196];
    const double C8425 = hrz[1197];
    const double C8432 = hrz[1198];
    const double C8439 = hrz[1199];
    const double C8446 = hrz[1200];
    const double C8453 = hrz[1201];
    const double C8460 = hrz[1202];
    const double C8467 = hrz[1203];
    const double C8474 = hrz[1204];
    const double C8481 = hrz[1205];
    const double C8488 = hrz[1206];
    const double C8495 = hrz[1207];
    const double C8502 = hrz[1208];
    const double C8509 = hrz[1209];
    const double C8516 = hrz[1210];
    const double C8523 = hrz[1211];
    const double C8530 = hrz[1212];
    const double C8537 = hrz[1213];
    const double C8544 = hrz[1214];
    const double C8551 = hrz[1215];
    const double C8558 = hrz[1216];
    const double C8565 = hrz[1217];
    const double C8572 = hrz[1218];
    const double C8579 = hrz[1219];
    const double C8586 = hrz[1220];
    const double C8593 = hrz[1221];
    const double C8600 = hrz[1222];
    const double C8607 = hrz[1223];
    const double C8614 = hrz[1224];
    const double C8621 = hrz[1225];
    const double C8628 = hrz[1226];
    const double C8635 = hrz[1227];
    const double C8642 = hrz[1228];
    const double C8649 = hrz[1229];
    const double C8656 = hrz[1230];
    const double C8663 = hrz[1231];
    const double C8670 = hrz[1232];
    const double C8677 = hrz[1233];
    const double C8684 = hrz[1234];
    const double C8691 = hrz[1235];
    const double C8698 = hrz[1236];
    const double C8705 = hrz[1237];
    const double C8712 = hrz[1238];
    const double C8719 = hrz[1239];
    const double C8726 = hrz[1240];
    const double C8733 = hrz[1241];
    const double C8740 = hrz[1242];
    const double C8747 = hrz[1243];
    const double C8754 = hrz[1244];
    const double C8761 = hrz[1245];
    const double C8768 = hrz[1246];
    const double C8775 = hrz[1247];
    const double C8782 = hrz[1248];
    const double C8789 = hrz[1249];
    const double C8796 = hrz[1250];
    const double C8803 = hrz[1251];
    const double C8810 = hrz[1252];
    const double C8817 = hrz[1253];
    const double C8824 = hrz[1254];
    const double C8831 = hrz[1255];
    const double C8838 = hrz[1256];
    const double C8845 = hrz[1257];
    const double C8852 = hrz[1258];
    const double C8859 = hrz[1259];
    const double C8866 = hrz[1260];
    const double C8873 = hrz[1261];
    const double C8880 = hrz[1262];
    const double C8887 = hrz[1263];
    const double C8894 = hrz[1264];
    const double C8901 = hrz[1265];
    const double C8908 = hrz[1266];
    const double C8915 = hrz[1267];
    const double C8922 = hrz[1268];
    const double C8929 = hrz[1269];
    const double C8936 = hrz[1270];
    const double C8943 = hrz[1271];
    const double C8950 = hrz[1272];
    const double C8957 = hrz[1273];
    const double C8964 = hrz[1274];
    const double C8971 = hrz[1275];
    const double C8978 = hrz[1276];
    const double C8985 = hrz[1277];
    const double C8992 = hrz[1278];
    const double C8999 = hrz[1279];
    const double C9006 = hrz[1280];
    const double C9013 = hrz[1281];
    const double C9020 = hrz[1282];
    const double C9027 = hrz[1283];
    const double C9034 = hrz[1284];
    const double C9041 = hrz[1285];
    const double C9048 = hrz[1286];
    const double C9055 = hrz[1287];
    const double C9062 = hrz[1288];
    const double C9069 = hrz[1289];
    const double C9076 = hrz[1290];
    const double C9083 = hrz[1291];
    const double C9090 = hrz[1292];
    const double C9097 = hrz[1293];
    const double C9104 = hrz[1294];
    const double C9111 = hrz[1295];
    gx[0] += std::sqrt(81.) * C5481;
    gy[0] += std::sqrt(81.) * C5483;
    gz[0] += std::sqrt(81.) * C5485;
    gx[1] += std::sqrt(81.) * C5495;
    gy[1] += std::sqrt(81.) * C5497;
    gz[1] += std::sqrt(81.) * C5499;
    gx[2] += std::sqrt(27.) * C5474 -
             (std::sqrt(6.75) * C5467 + std::sqrt(6.75) * C5460);
    gy[2] += std::sqrt(27.) * C5476 -
             (std::sqrt(6.75) * C5469 + std::sqrt(6.75) * C5462);
    gz[2] += std::sqrt(27.) * C5478 -
             (std::sqrt(6.75) * C5471 + std::sqrt(6.75) * C5464);
    gx[3] += std::sqrt(81.) * C5488;
    gy[3] += std::sqrt(81.) * C5490;
    gz[3] += std::sqrt(81.) * C5492;
    gx[4] += std::sqrt(20.25) * C5460 - std::sqrt(20.25) * C5467;
    gy[4] += std::sqrt(20.25) * C5462 - std::sqrt(20.25) * C5469;
    gz[4] += std::sqrt(20.25) * C5464 - std::sqrt(20.25) * C5471;
    gx[5] += std::sqrt(81.) * C5565;
    gy[5] += std::sqrt(81.) * C5567;
    gz[5] += std::sqrt(81.) * C5569;
    gx[6] += std::sqrt(81.) * C5579;
    gy[6] += std::sqrt(81.) * C5581;
    gz[6] += std::sqrt(81.) * C5583;
    gx[7] += std::sqrt(27.) * C5558 -
             (std::sqrt(6.75) * C5551 + std::sqrt(6.75) * C5544);
    gy[7] += std::sqrt(27.) * C5560 -
             (std::sqrt(6.75) * C5553 + std::sqrt(6.75) * C5546);
    gz[7] += std::sqrt(27.) * C5562 -
             (std::sqrt(6.75) * C5555 + std::sqrt(6.75) * C5548);
    gx[8] += std::sqrt(81.) * C5572;
    gy[8] += std::sqrt(81.) * C5574;
    gz[8] += std::sqrt(81.) * C5576;
    gx[9] += std::sqrt(20.25) * C5544 - std::sqrt(20.25) * C5551;
    gy[9] += std::sqrt(20.25) * C5546 - std::sqrt(20.25) * C5553;
    gz[9] += std::sqrt(20.25) * C5548 - std::sqrt(20.25) * C5555;
    gx[10] += std::sqrt(27.) * C5439 -
              (std::sqrt(6.75) * C5397 + std::sqrt(6.75) * C5355);
    gy[10] += std::sqrt(27.) * C5441 -
              (std::sqrt(6.75) * C5399 + std::sqrt(6.75) * C5357);
    gz[10] += std::sqrt(27.) * C5443 -
              (std::sqrt(6.75) * C5401 + std::sqrt(6.75) * C5359);
    gx[11] += std::sqrt(27.) * C5453 -
              (std::sqrt(6.75) * C5411 + std::sqrt(6.75) * C5369);
    gy[11] += std::sqrt(27.) * C5455 -
              (std::sqrt(6.75) * C5413 + std::sqrt(6.75) * C5371);
    gz[11] += std::sqrt(27.) * C5457 -
              (std::sqrt(6.75) * C5415 + std::sqrt(6.75) * C5373);
    gx[12] += std::sqrt(0.5625) * C5334 + std::sqrt(0.5625) * C5341 -
              std::sqrt(2.25) * C5348 + std::sqrt(0.5625) * C5376 +
              std::sqrt(0.5625) * C5383 - std::sqrt(2.25) * C5390 -
              std::sqrt(2.25) * C5418 - std::sqrt(2.25) * C5425 +
              std::sqrt(9.) * C5432;
    gy[12] += std::sqrt(0.5625) * C5336 + std::sqrt(0.5625) * C5343 -
              std::sqrt(2.25) * C5350 + std::sqrt(0.5625) * C5378 +
              std::sqrt(0.5625) * C5385 - std::sqrt(2.25) * C5392 -
              std::sqrt(2.25) * C5420 - std::sqrt(2.25) * C5427 +
              std::sqrt(9.) * C5434;
    gz[12] += std::sqrt(0.5625) * C5338 + std::sqrt(0.5625) * C5345 -
              std::sqrt(2.25) * C5352 + std::sqrt(0.5625) * C5380 +
              std::sqrt(0.5625) * C5387 - std::sqrt(2.25) * C5394 -
              std::sqrt(2.25) * C5422 - std::sqrt(2.25) * C5429 +
              std::sqrt(9.) * C5436;
    gx[13] += std::sqrt(27.) * C5446 -
              (std::sqrt(6.75) * C5404 + std::sqrt(6.75) * C5362);
    gy[13] += std::sqrt(27.) * C5448 -
              (std::sqrt(6.75) * C5406 + std::sqrt(6.75) * C5364);
    gz[13] += std::sqrt(27.) * C5450 -
              (std::sqrt(6.75) * C5408 + std::sqrt(6.75) * C5366);
    gx[14] += std::sqrt(1.6875) * C5341 - std::sqrt(1.6875) * C5334 -
              std::sqrt(1.6875) * C5376 + std::sqrt(1.6875) * C5383 +
              std::sqrt(6.75) * C5418 - std::sqrt(6.75) * C5425;
    gy[14] += std::sqrt(1.6875) * C5343 - std::sqrt(1.6875) * C5336 -
              std::sqrt(1.6875) * C5378 + std::sqrt(1.6875) * C5385 +
              std::sqrt(6.75) * C5420 - std::sqrt(6.75) * C5427;
    gz[14] += std::sqrt(1.6875) * C5345 - std::sqrt(1.6875) * C5338 -
              std::sqrt(1.6875) * C5380 + std::sqrt(1.6875) * C5387 +
              std::sqrt(6.75) * C5422 - std::sqrt(6.75) * C5429;
    gx[15] += std::sqrt(81.) * C5523;
    gy[15] += std::sqrt(81.) * C5525;
    gz[15] += std::sqrt(81.) * C5527;
    gx[16] += std::sqrt(81.) * C5537;
    gy[16] += std::sqrt(81.) * C5539;
    gz[16] += std::sqrt(81.) * C5541;
    gx[17] += std::sqrt(27.) * C5516 -
              (std::sqrt(6.75) * C5509 + std::sqrt(6.75) * C5502);
    gy[17] += std::sqrt(27.) * C5518 -
              (std::sqrt(6.75) * C5511 + std::sqrt(6.75) * C5504);
    gz[17] += std::sqrt(27.) * C5520 -
              (std::sqrt(6.75) * C5513 + std::sqrt(6.75) * C5506);
    gx[18] += std::sqrt(81.) * C5530;
    gy[18] += std::sqrt(81.) * C5532;
    gz[18] += std::sqrt(81.) * C5534;
    gx[19] += std::sqrt(20.25) * C5502 - std::sqrt(20.25) * C5509;
    gy[19] += std::sqrt(20.25) * C5504 - std::sqrt(20.25) * C5511;
    gz[19] += std::sqrt(20.25) * C5506 - std::sqrt(20.25) * C5513;
    gx[20] += std::sqrt(20.25) * C5355 - std::sqrt(20.25) * C5397;
    gy[20] += std::sqrt(20.25) * C5357 - std::sqrt(20.25) * C5399;
    gz[20] += std::sqrt(20.25) * C5359 - std::sqrt(20.25) * C5401;
    gx[21] += std::sqrt(20.25) * C5369 - std::sqrt(20.25) * C5411;
    gy[21] += std::sqrt(20.25) * C5371 - std::sqrt(20.25) * C5413;
    gz[21] += std::sqrt(20.25) * C5373 - std::sqrt(20.25) * C5415;
    gx[22] += std::sqrt(6.75) * C5348 -
              (std::sqrt(1.6875) * C5341 + std::sqrt(1.6875) * C5334) +
              std::sqrt(1.6875) * C5376 + std::sqrt(1.6875) * C5383 -
              std::sqrt(6.75) * C5390;
    gy[22] += std::sqrt(6.75) * C5350 -
              (std::sqrt(1.6875) * C5343 + std::sqrt(1.6875) * C5336) +
              std::sqrt(1.6875) * C5378 + std::sqrt(1.6875) * C5385 -
              std::sqrt(6.75) * C5392;
    gz[22] += std::sqrt(6.75) * C5352 -
              (std::sqrt(1.6875) * C5345 + std::sqrt(1.6875) * C5338) +
              std::sqrt(1.6875) * C5380 + std::sqrt(1.6875) * C5387 -
              std::sqrt(6.75) * C5394;
    gx[23] += std::sqrt(20.25) * C5362 - std::sqrt(20.25) * C5404;
    gy[23] += std::sqrt(20.25) * C5364 - std::sqrt(20.25) * C5406;
    gz[23] += std::sqrt(20.25) * C5366 - std::sqrt(20.25) * C5408;
    gx[24] += std::sqrt(5.0625) * C5334 - std::sqrt(5.0625) * C5341 -
              std::sqrt(5.0625) * C5376 + std::sqrt(5.0625) * C5383;
    gy[24] += std::sqrt(5.0625) * C5336 - std::sqrt(5.0625) * C5343 -
              std::sqrt(5.0625) * C5378 + std::sqrt(5.0625) * C5385;
    gz[24] += std::sqrt(5.0625) * C5338 - std::sqrt(5.0625) * C5345 -
              std::sqrt(5.0625) * C5380 + std::sqrt(5.0625) * C5387;
    gx[25] += std::sqrt(81.) * C5985;
    gy[25] += std::sqrt(81.) * C5987;
    gz[25] += std::sqrt(81.) * C5989;
    gx[26] += std::sqrt(81.) * C5999;
    gy[26] += std::sqrt(81.) * C6001;
    gz[26] += std::sqrt(81.) * C6003;
    gx[27] += std::sqrt(27.) * C5978 -
              (std::sqrt(6.75) * C5971 + std::sqrt(6.75) * C5964);
    gy[27] += std::sqrt(27.) * C5980 -
              (std::sqrt(6.75) * C5973 + std::sqrt(6.75) * C5966);
    gz[27] += std::sqrt(27.) * C5982 -
              (std::sqrt(6.75) * C5975 + std::sqrt(6.75) * C5968);
    gx[28] += std::sqrt(81.) * C5992;
    gy[28] += std::sqrt(81.) * C5994;
    gz[28] += std::sqrt(81.) * C5996;
    gx[29] += std::sqrt(20.25) * C5964 - std::sqrt(20.25) * C5971;
    gy[29] += std::sqrt(20.25) * C5966 - std::sqrt(20.25) * C5973;
    gz[29] += std::sqrt(20.25) * C5968 - std::sqrt(20.25) * C5975;
    gx[30] += std::sqrt(81.) * C6069;
    gy[30] += std::sqrt(81.) * C6071;
    gz[30] += std::sqrt(81.) * C6073;
    gx[31] += std::sqrt(81.) * C6083;
    gy[31] += std::sqrt(81.) * C6085;
    gz[31] += std::sqrt(81.) * C6087;
    gx[32] += std::sqrt(27.) * C6062 -
              (std::sqrt(6.75) * C6055 + std::sqrt(6.75) * C6048);
    gy[32] += std::sqrt(27.) * C6064 -
              (std::sqrt(6.75) * C6057 + std::sqrt(6.75) * C6050);
    gz[32] += std::sqrt(27.) * C6066 -
              (std::sqrt(6.75) * C6059 + std::sqrt(6.75) * C6052);
    gx[33] += std::sqrt(81.) * C6076;
    gy[33] += std::sqrt(81.) * C6078;
    gz[33] += std::sqrt(81.) * C6080;
    gx[34] += std::sqrt(20.25) * C6048 - std::sqrt(20.25) * C6055;
    gy[34] += std::sqrt(20.25) * C6050 - std::sqrt(20.25) * C6057;
    gz[34] += std::sqrt(20.25) * C6052 - std::sqrt(20.25) * C6059;
    gx[35] += std::sqrt(27.) * C5943 -
              (std::sqrt(6.75) * C5901 + std::sqrt(6.75) * C5859);
    gy[35] += std::sqrt(27.) * C5945 -
              (std::sqrt(6.75) * C5903 + std::sqrt(6.75) * C5861);
    gz[35] += std::sqrt(27.) * C5947 -
              (std::sqrt(6.75) * C5905 + std::sqrt(6.75) * C5863);
    gx[36] += std::sqrt(27.) * C5957 -
              (std::sqrt(6.75) * C5915 + std::sqrt(6.75) * C5873);
    gy[36] += std::sqrt(27.) * C5959 -
              (std::sqrt(6.75) * C5917 + std::sqrt(6.75) * C5875);
    gz[36] += std::sqrt(27.) * C5961 -
              (std::sqrt(6.75) * C5919 + std::sqrt(6.75) * C5877);
    gx[37] += std::sqrt(0.5625) * C5838 + std::sqrt(0.5625) * C5845 -
              std::sqrt(2.25) * C5852 + std::sqrt(0.5625) * C5880 +
              std::sqrt(0.5625) * C5887 - std::sqrt(2.25) * C5894 -
              std::sqrt(2.25) * C5922 - std::sqrt(2.25) * C5929 +
              std::sqrt(9.) * C5936;
    gy[37] += std::sqrt(0.5625) * C5840 + std::sqrt(0.5625) * C5847 -
              std::sqrt(2.25) * C5854 + std::sqrt(0.5625) * C5882 +
              std::sqrt(0.5625) * C5889 - std::sqrt(2.25) * C5896 -
              std::sqrt(2.25) * C5924 - std::sqrt(2.25) * C5931 +
              std::sqrt(9.) * C5938;
    gz[37] += std::sqrt(0.5625) * C5842 + std::sqrt(0.5625) * C5849 -
              std::sqrt(2.25) * C5856 + std::sqrt(0.5625) * C5884 +
              std::sqrt(0.5625) * C5891 - std::sqrt(2.25) * C5898 -
              std::sqrt(2.25) * C5926 - std::sqrt(2.25) * C5933 +
              std::sqrt(9.) * C5940;
    gx[38] += std::sqrt(27.) * C5950 -
              (std::sqrt(6.75) * C5908 + std::sqrt(6.75) * C5866);
    gy[38] += std::sqrt(27.) * C5952 -
              (std::sqrt(6.75) * C5910 + std::sqrt(6.75) * C5868);
    gz[38] += std::sqrt(27.) * C5954 -
              (std::sqrt(6.75) * C5912 + std::sqrt(6.75) * C5870);
    gx[39] += std::sqrt(1.6875) * C5845 - std::sqrt(1.6875) * C5838 -
              std::sqrt(1.6875) * C5880 + std::sqrt(1.6875) * C5887 +
              std::sqrt(6.75) * C5922 - std::sqrt(6.75) * C5929;
    gy[39] += std::sqrt(1.6875) * C5847 - std::sqrt(1.6875) * C5840 -
              std::sqrt(1.6875) * C5882 + std::sqrt(1.6875) * C5889 +
              std::sqrt(6.75) * C5924 - std::sqrt(6.75) * C5931;
    gz[39] += std::sqrt(1.6875) * C5849 - std::sqrt(1.6875) * C5842 -
              std::sqrt(1.6875) * C5884 + std::sqrt(1.6875) * C5891 +
              std::sqrt(6.75) * C5926 - std::sqrt(6.75) * C5933;
    gx[40] += std::sqrt(81.) * C6027;
    gy[40] += std::sqrt(81.) * C6029;
    gz[40] += std::sqrt(81.) * C6031;
    gx[41] += std::sqrt(81.) * C6041;
    gy[41] += std::sqrt(81.) * C6043;
    gz[41] += std::sqrt(81.) * C6045;
    gx[42] += std::sqrt(27.) * C6020 -
              (std::sqrt(6.75) * C6013 + std::sqrt(6.75) * C6006);
    gy[42] += std::sqrt(27.) * C6022 -
              (std::sqrt(6.75) * C6015 + std::sqrt(6.75) * C6008);
    gz[42] += std::sqrt(27.) * C6024 -
              (std::sqrt(6.75) * C6017 + std::sqrt(6.75) * C6010);
    gx[43] += std::sqrt(81.) * C6034;
    gy[43] += std::sqrt(81.) * C6036;
    gz[43] += std::sqrt(81.) * C6038;
    gx[44] += std::sqrt(20.25) * C6006 - std::sqrt(20.25) * C6013;
    gy[44] += std::sqrt(20.25) * C6008 - std::sqrt(20.25) * C6015;
    gz[44] += std::sqrt(20.25) * C6010 - std::sqrt(20.25) * C6017;
    gx[45] += std::sqrt(20.25) * C5859 - std::sqrt(20.25) * C5901;
    gy[45] += std::sqrt(20.25) * C5861 - std::sqrt(20.25) * C5903;
    gz[45] += std::sqrt(20.25) * C5863 - std::sqrt(20.25) * C5905;
    gx[46] += std::sqrt(20.25) * C5873 - std::sqrt(20.25) * C5915;
    gy[46] += std::sqrt(20.25) * C5875 - std::sqrt(20.25) * C5917;
    gz[46] += std::sqrt(20.25) * C5877 - std::sqrt(20.25) * C5919;
    gx[47] += std::sqrt(6.75) * C5852 -
              (std::sqrt(1.6875) * C5845 + std::sqrt(1.6875) * C5838) +
              std::sqrt(1.6875) * C5880 + std::sqrt(1.6875) * C5887 -
              std::sqrt(6.75) * C5894;
    gy[47] += std::sqrt(6.75) * C5854 -
              (std::sqrt(1.6875) * C5847 + std::sqrt(1.6875) * C5840) +
              std::sqrt(1.6875) * C5882 + std::sqrt(1.6875) * C5889 -
              std::sqrt(6.75) * C5896;
    gz[47] += std::sqrt(6.75) * C5856 -
              (std::sqrt(1.6875) * C5849 + std::sqrt(1.6875) * C5842) +
              std::sqrt(1.6875) * C5884 + std::sqrt(1.6875) * C5891 -
              std::sqrt(6.75) * C5898;
    gx[48] += std::sqrt(20.25) * C5866 - std::sqrt(20.25) * C5908;
    gy[48] += std::sqrt(20.25) * C5868 - std::sqrt(20.25) * C5910;
    gz[48] += std::sqrt(20.25) * C5870 - std::sqrt(20.25) * C5912;
    gx[49] += std::sqrt(5.0625) * C5838 - std::sqrt(5.0625) * C5845 -
              std::sqrt(5.0625) * C5880 + std::sqrt(5.0625) * C5887;
    gy[49] += std::sqrt(5.0625) * C5840 - std::sqrt(5.0625) * C5847 -
              std::sqrt(5.0625) * C5882 + std::sqrt(5.0625) * C5889;
    gz[49] += std::sqrt(5.0625) * C5842 - std::sqrt(5.0625) * C5849 -
              std::sqrt(5.0625) * C5884 + std::sqrt(5.0625) * C5891;
    gx[50] += std::sqrt(27.) * C5229 -
              (std::sqrt(6.75) * C4977 + std::sqrt(6.75) * C4725);
    gy[50] += std::sqrt(27.) * C5231 -
              (std::sqrt(6.75) * C4979 + std::sqrt(6.75) * C4727);
    gz[50] += std::sqrt(27.) * C5233 -
              (std::sqrt(6.75) * C4981 + std::sqrt(6.75) * C4729);
    gx[51] += std::sqrt(27.) * C5243 -
              (std::sqrt(6.75) * C4991 + std::sqrt(6.75) * C4739);
    gy[51] += std::sqrt(27.) * C5245 -
              (std::sqrt(6.75) * C4993 + std::sqrt(6.75) * C4741);
    gz[51] += std::sqrt(27.) * C5247 -
              (std::sqrt(6.75) * C4995 + std::sqrt(6.75) * C4743);
    gx[52] += std::sqrt(0.5625) * C4704 + std::sqrt(0.5625) * C4711 -
              std::sqrt(2.25) * C4718 + std::sqrt(0.5625) * C4956 +
              std::sqrt(0.5625) * C4963 - std::sqrt(2.25) * C4970 -
              std::sqrt(2.25) * C5208 - std::sqrt(2.25) * C5215 +
              std::sqrt(9.) * C5222;
    gy[52] += std::sqrt(0.5625) * C4706 + std::sqrt(0.5625) * C4713 -
              std::sqrt(2.25) * C4720 + std::sqrt(0.5625) * C4958 +
              std::sqrt(0.5625) * C4965 - std::sqrt(2.25) * C4972 -
              std::sqrt(2.25) * C5210 - std::sqrt(2.25) * C5217 +
              std::sqrt(9.) * C5224;
    gz[52] += std::sqrt(0.5625) * C4708 + std::sqrt(0.5625) * C4715 -
              std::sqrt(2.25) * C4722 + std::sqrt(0.5625) * C4960 +
              std::sqrt(0.5625) * C4967 - std::sqrt(2.25) * C4974 -
              std::sqrt(2.25) * C5212 - std::sqrt(2.25) * C5219 +
              std::sqrt(9.) * C5226;
    gx[53] += std::sqrt(27.) * C5236 -
              (std::sqrt(6.75) * C4984 + std::sqrt(6.75) * C4732);
    gy[53] += std::sqrt(27.) * C5238 -
              (std::sqrt(6.75) * C4986 + std::sqrt(6.75) * C4734);
    gz[53] += std::sqrt(27.) * C5240 -
              (std::sqrt(6.75) * C4988 + std::sqrt(6.75) * C4736);
    gx[54] += std::sqrt(1.6875) * C4711 - std::sqrt(1.6875) * C4704 -
              std::sqrt(1.6875) * C4956 + std::sqrt(1.6875) * C4963 +
              std::sqrt(6.75) * C5208 - std::sqrt(6.75) * C5215;
    gy[54] += std::sqrt(1.6875) * C4713 - std::sqrt(1.6875) * C4706 -
              std::sqrt(1.6875) * C4958 + std::sqrt(1.6875) * C4965 +
              std::sqrt(6.75) * C5210 - std::sqrt(6.75) * C5217;
    gz[54] += std::sqrt(1.6875) * C4715 - std::sqrt(1.6875) * C4708 -
              std::sqrt(1.6875) * C4960 + std::sqrt(1.6875) * C4967 +
              std::sqrt(6.75) * C5212 - std::sqrt(6.75) * C5219;
    gx[55] += std::sqrt(27.) * C5313 -
              (std::sqrt(6.75) * C5061 + std::sqrt(6.75) * C4809);
    gy[55] += std::sqrt(27.) * C5315 -
              (std::sqrt(6.75) * C5063 + std::sqrt(6.75) * C4811);
    gz[55] += std::sqrt(27.) * C5317 -
              (std::sqrt(6.75) * C5065 + std::sqrt(6.75) * C4813);
    gx[56] += std::sqrt(27.) * C5327 -
              (std::sqrt(6.75) * C5075 + std::sqrt(6.75) * C4823);
    gy[56] += std::sqrt(27.) * C5329 -
              (std::sqrt(6.75) * C5077 + std::sqrt(6.75) * C4825);
    gz[56] += std::sqrt(27.) * C5331 -
              (std::sqrt(6.75) * C5079 + std::sqrt(6.75) * C4827);
    gx[57] += std::sqrt(0.5625) * C4788 + std::sqrt(0.5625) * C4795 -
              std::sqrt(2.25) * C4802 + std::sqrt(0.5625) * C5040 +
              std::sqrt(0.5625) * C5047 - std::sqrt(2.25) * C5054 -
              std::sqrt(2.25) * C5292 - std::sqrt(2.25) * C5299 +
              std::sqrt(9.) * C5306;
    gy[57] += std::sqrt(0.5625) * C4790 + std::sqrt(0.5625) * C4797 -
              std::sqrt(2.25) * C4804 + std::sqrt(0.5625) * C5042 +
              std::sqrt(0.5625) * C5049 - std::sqrt(2.25) * C5056 -
              std::sqrt(2.25) * C5294 - std::sqrt(2.25) * C5301 +
              std::sqrt(9.) * C5308;
    gz[57] += std::sqrt(0.5625) * C4792 + std::sqrt(0.5625) * C4799 -
              std::sqrt(2.25) * C4806 + std::sqrt(0.5625) * C5044 +
              std::sqrt(0.5625) * C5051 - std::sqrt(2.25) * C5058 -
              std::sqrt(2.25) * C5296 - std::sqrt(2.25) * C5303 +
              std::sqrt(9.) * C5310;
    gx[58] += std::sqrt(27.) * C5320 -
              (std::sqrt(6.75) * C5068 + std::sqrt(6.75) * C4816);
    gy[58] += std::sqrt(27.) * C5322 -
              (std::sqrt(6.75) * C5070 + std::sqrt(6.75) * C4818);
    gz[58] += std::sqrt(27.) * C5324 -
              (std::sqrt(6.75) * C5072 + std::sqrt(6.75) * C4820);
    gx[59] += std::sqrt(1.6875) * C4795 - std::sqrt(1.6875) * C4788 -
              std::sqrt(1.6875) * C5040 + std::sqrt(1.6875) * C5047 +
              std::sqrt(6.75) * C5292 - std::sqrt(6.75) * C5299;
    gy[59] += std::sqrt(1.6875) * C4797 - std::sqrt(1.6875) * C4790 -
              std::sqrt(1.6875) * C5042 + std::sqrt(1.6875) * C5049 +
              std::sqrt(6.75) * C5294 - std::sqrt(6.75) * C5301;
    gz[59] += std::sqrt(1.6875) * C4799 - std::sqrt(1.6875) * C4792 -
              std::sqrt(1.6875) * C5044 + std::sqrt(1.6875) * C5051 +
              std::sqrt(6.75) * C5296 - std::sqrt(6.75) * C5303;
    gx[60] += std::sqrt(0.5625) * C4599 + std::sqrt(0.5625) * C4641 -
              std::sqrt(2.25) * C4683 + std::sqrt(0.5625) * C4851 +
              std::sqrt(0.5625) * C4893 - std::sqrt(2.25) * C4935 -
              std::sqrt(2.25) * C5103 - std::sqrt(2.25) * C5145 +
              std::sqrt(9.) * C5187;
    gy[60] += std::sqrt(0.5625) * C4601 + std::sqrt(0.5625) * C4643 -
              std::sqrt(2.25) * C4685 + std::sqrt(0.5625) * C4853 +
              std::sqrt(0.5625) * C4895 - std::sqrt(2.25) * C4937 -
              std::sqrt(2.25) * C5105 - std::sqrt(2.25) * C5147 +
              std::sqrt(9.) * C5189;
    gz[60] += std::sqrt(0.5625) * C4603 + std::sqrt(0.5625) * C4645 -
              std::sqrt(2.25) * C4687 + std::sqrt(0.5625) * C4855 +
              std::sqrt(0.5625) * C4897 - std::sqrt(2.25) * C4939 -
              std::sqrt(2.25) * C5107 - std::sqrt(2.25) * C5149 +
              std::sqrt(9.) * C5191;
    gx[61] += std::sqrt(0.5625) * C4613 + std::sqrt(0.5625) * C4655 -
              std::sqrt(2.25) * C4697 + std::sqrt(0.5625) * C4865 +
              std::sqrt(0.5625) * C4907 - std::sqrt(2.25) * C4949 -
              std::sqrt(2.25) * C5117 - std::sqrt(2.25) * C5159 +
              std::sqrt(9.) * C5201;
    gy[61] += std::sqrt(0.5625) * C4615 + std::sqrt(0.5625) * C4657 -
              std::sqrt(2.25) * C4699 + std::sqrt(0.5625) * C4867 +
              std::sqrt(0.5625) * C4909 - std::sqrt(2.25) * C4951 -
              std::sqrt(2.25) * C5119 - std::sqrt(2.25) * C5161 +
              std::sqrt(9.) * C5203;
    gz[61] += std::sqrt(0.5625) * C4617 + std::sqrt(0.5625) * C4659 -
              std::sqrt(2.25) * C4701 + std::sqrt(0.5625) * C4869 +
              std::sqrt(0.5625) * C4911 - std::sqrt(2.25) * C4953 -
              std::sqrt(2.25) * C5121 - std::sqrt(2.25) * C5163 +
              std::sqrt(9.) * C5205;
    gx[62] += std::sqrt(0.1875) * C4592 -
              (std::sqrt(0.046875) * C4585 + std::sqrt(0.046875) * C4578) -
              std::sqrt(0.046875) * C4620 - std::sqrt(0.046875) * C4627 +
              std::sqrt(0.1875) * C4634 + std::sqrt(0.1875) * C4662 +
              std::sqrt(0.1875) * C4669 - std::sqrt(0.75) * C4676 -
              std::sqrt(0.046875) * C4830 - std::sqrt(0.046875) * C4837 +
              std::sqrt(0.1875) * C4844 - std::sqrt(0.046875) * C4872 -
              std::sqrt(0.046875) * C4879 + std::sqrt(0.1875) * C4886 +
              std::sqrt(0.1875) * C4914 + std::sqrt(0.1875) * C4921 -
              std::sqrt(0.75) * C4928 + std::sqrt(0.1875) * C5082 +
              std::sqrt(0.1875) * C5089 - std::sqrt(0.75) * C5096 +
              std::sqrt(0.1875) * C5124 + std::sqrt(0.1875) * C5131 -
              std::sqrt(0.75) * C5138 - std::sqrt(0.75) * C5166 -
              std::sqrt(0.75) * C5173 + std::sqrt(3.0) * C5180;
    gy[62] += std::sqrt(0.1875) * C4594 -
              (std::sqrt(0.046875) * C4587 + std::sqrt(0.046875) * C4580) -
              std::sqrt(0.046875) * C4622 - std::sqrt(0.046875) * C4629 +
              std::sqrt(0.1875) * C4636 + std::sqrt(0.1875) * C4664 +
              std::sqrt(0.1875) * C4671 - std::sqrt(0.75) * C4678 -
              std::sqrt(0.046875) * C4832 - std::sqrt(0.046875) * C4839 +
              std::sqrt(0.1875) * C4846 - std::sqrt(0.046875) * C4874 -
              std::sqrt(0.046875) * C4881 + std::sqrt(0.1875) * C4888 +
              std::sqrt(0.1875) * C4916 + std::sqrt(0.1875) * C4923 -
              std::sqrt(0.75) * C4930 + std::sqrt(0.1875) * C5084 +
              std::sqrt(0.1875) * C5091 - std::sqrt(0.75) * C5098 +
              std::sqrt(0.1875) * C5126 + std::sqrt(0.1875) * C5133 -
              std::sqrt(0.75) * C5140 - std::sqrt(0.75) * C5168 -
              std::sqrt(0.75) * C5175 + std::sqrt(3.0) * C5182;
    gz[62] += std::sqrt(0.1875) * C4596 -
              (std::sqrt(0.046875) * C4589 + std::sqrt(0.046875) * C4582) -
              std::sqrt(0.046875) * C4624 - std::sqrt(0.046875) * C4631 +
              std::sqrt(0.1875) * C4638 + std::sqrt(0.1875) * C4666 +
              std::sqrt(0.1875) * C4673 - std::sqrt(0.75) * C4680 -
              std::sqrt(0.046875) * C4834 - std::sqrt(0.046875) * C4841 +
              std::sqrt(0.1875) * C4848 - std::sqrt(0.046875) * C4876 -
              std::sqrt(0.046875) * C4883 + std::sqrt(0.1875) * C4890 +
              std::sqrt(0.1875) * C4918 + std::sqrt(0.1875) * C4925 -
              std::sqrt(0.75) * C4932 + std::sqrt(0.1875) * C5086 +
              std::sqrt(0.1875) * C5093 - std::sqrt(0.75) * C5100 +
              std::sqrt(0.1875) * C5128 + std::sqrt(0.1875) * C5135 -
              std::sqrt(0.75) * C5142 - std::sqrt(0.75) * C5170 -
              std::sqrt(0.75) * C5177 + std::sqrt(3.0) * C5184;
    gx[63] += std::sqrt(0.5625) * C4606 + std::sqrt(0.5625) * C4648 -
              std::sqrt(2.25) * C4690 + std::sqrt(0.5625) * C4858 +
              std::sqrt(0.5625) * C4900 - std::sqrt(2.25) * C4942 -
              std::sqrt(2.25) * C5110 - std::sqrt(2.25) * C5152 +
              std::sqrt(9.) * C5194;
    gy[63] += std::sqrt(0.5625) * C4608 + std::sqrt(0.5625) * C4650 -
              std::sqrt(2.25) * C4692 + std::sqrt(0.5625) * C4860 +
              std::sqrt(0.5625) * C4902 - std::sqrt(2.25) * C4944 -
              std::sqrt(2.25) * C5112 - std::sqrt(2.25) * C5154 +
              std::sqrt(9.) * C5196;
    gz[63] += std::sqrt(0.5625) * C4610 + std::sqrt(0.5625) * C4652 -
              std::sqrt(2.25) * C4694 + std::sqrt(0.5625) * C4862 +
              std::sqrt(0.5625) * C4904 - std::sqrt(2.25) * C4946 -
              std::sqrt(2.25) * C5114 - std::sqrt(2.25) * C5156 +
              std::sqrt(9.) * C5198;
    gx[64] += std::sqrt(0.140625) * C4578 - std::sqrt(0.140625) * C4585 +
              std::sqrt(0.140625) * C4620 - std::sqrt(0.140625) * C4627 -
              std::sqrt(0.5625) * C4662 + std::sqrt(0.5625) * C4669 +
              std::sqrt(0.140625) * C4830 - std::sqrt(0.140625) * C4837 +
              std::sqrt(0.140625) * C4872 - std::sqrt(0.140625) * C4879 -
              std::sqrt(0.5625) * C4914 + std::sqrt(0.5625) * C4921 -
              std::sqrt(0.5625) * C5082 + std::sqrt(0.5625) * C5089 -
              std::sqrt(0.5625) * C5124 + std::sqrt(0.5625) * C5131 +
              std::sqrt(2.25) * C5166 - std::sqrt(2.25) * C5173;
    gy[64] += std::sqrt(0.140625) * C4580 - std::sqrt(0.140625) * C4587 +
              std::sqrt(0.140625) * C4622 - std::sqrt(0.140625) * C4629 -
              std::sqrt(0.5625) * C4664 + std::sqrt(0.5625) * C4671 +
              std::sqrt(0.140625) * C4832 - std::sqrt(0.140625) * C4839 +
              std::sqrt(0.140625) * C4874 - std::sqrt(0.140625) * C4881 -
              std::sqrt(0.5625) * C4916 + std::sqrt(0.5625) * C4923 -
              std::sqrt(0.5625) * C5084 + std::sqrt(0.5625) * C5091 -
              std::sqrt(0.5625) * C5126 + std::sqrt(0.5625) * C5133 +
              std::sqrt(2.25) * C5168 - std::sqrt(2.25) * C5175;
    gz[64] += std::sqrt(0.140625) * C4582 - std::sqrt(0.140625) * C4589 +
              std::sqrt(0.140625) * C4624 - std::sqrt(0.140625) * C4631 -
              std::sqrt(0.5625) * C4666 + std::sqrt(0.5625) * C4673 +
              std::sqrt(0.140625) * C4834 - std::sqrt(0.140625) * C4841 +
              std::sqrt(0.140625) * C4876 - std::sqrt(0.140625) * C4883 -
              std::sqrt(0.5625) * C4918 + std::sqrt(0.5625) * C4925 -
              std::sqrt(0.5625) * C5086 + std::sqrt(0.5625) * C5093 -
              std::sqrt(0.5625) * C5128 + std::sqrt(0.5625) * C5135 +
              std::sqrt(2.25) * C5170 - std::sqrt(2.25) * C5177;
    gx[65] += std::sqrt(27.) * C5271 -
              (std::sqrt(6.75) * C5019 + std::sqrt(6.75) * C4767);
    gy[65] += std::sqrt(27.) * C5273 -
              (std::sqrt(6.75) * C5021 + std::sqrt(6.75) * C4769);
    gz[65] += std::sqrt(27.) * C5275 -
              (std::sqrt(6.75) * C5023 + std::sqrt(6.75) * C4771);
    gx[66] += std::sqrt(27.) * C5285 -
              (std::sqrt(6.75) * C5033 + std::sqrt(6.75) * C4781);
    gy[66] += std::sqrt(27.) * C5287 -
              (std::sqrt(6.75) * C5035 + std::sqrt(6.75) * C4783);
    gz[66] += std::sqrt(27.) * C5289 -
              (std::sqrt(6.75) * C5037 + std::sqrt(6.75) * C4785);
    gx[67] += std::sqrt(0.5625) * C4746 + std::sqrt(0.5625) * C4753 -
              std::sqrt(2.25) * C4760 + std::sqrt(0.5625) * C4998 +
              std::sqrt(0.5625) * C5005 - std::sqrt(2.25) * C5012 -
              std::sqrt(2.25) * C5250 - std::sqrt(2.25) * C5257 +
              std::sqrt(9.) * C5264;
    gy[67] += std::sqrt(0.5625) * C4748 + std::sqrt(0.5625) * C4755 -
              std::sqrt(2.25) * C4762 + std::sqrt(0.5625) * C5000 +
              std::sqrt(0.5625) * C5007 - std::sqrt(2.25) * C5014 -
              std::sqrt(2.25) * C5252 - std::sqrt(2.25) * C5259 +
              std::sqrt(9.) * C5266;
    gz[67] += std::sqrt(0.5625) * C4750 + std::sqrt(0.5625) * C4757 -
              std::sqrt(2.25) * C4764 + std::sqrt(0.5625) * C5002 +
              std::sqrt(0.5625) * C5009 - std::sqrt(2.25) * C5016 -
              std::sqrt(2.25) * C5254 - std::sqrt(2.25) * C5261 +
              std::sqrt(9.) * C5268;
    gx[68] += std::sqrt(27.) * C5278 -
              (std::sqrt(6.75) * C5026 + std::sqrt(6.75) * C4774);
    gy[68] += std::sqrt(27.) * C5280 -
              (std::sqrt(6.75) * C5028 + std::sqrt(6.75) * C4776);
    gz[68] += std::sqrt(27.) * C5282 -
              (std::sqrt(6.75) * C5030 + std::sqrt(6.75) * C4778);
    gx[69] += std::sqrt(1.6875) * C4753 - std::sqrt(1.6875) * C4746 -
              std::sqrt(1.6875) * C4998 + std::sqrt(1.6875) * C5005 +
              std::sqrt(6.75) * C5250 - std::sqrt(6.75) * C5257;
    gy[69] += std::sqrt(1.6875) * C4755 - std::sqrt(1.6875) * C4748 -
              std::sqrt(1.6875) * C5000 + std::sqrt(1.6875) * C5007 +
              std::sqrt(6.75) * C5252 - std::sqrt(6.75) * C5259;
    gz[69] += std::sqrt(1.6875) * C4757 - std::sqrt(1.6875) * C4750 -
              std::sqrt(1.6875) * C5002 + std::sqrt(1.6875) * C5009 +
              std::sqrt(6.75) * C5254 - std::sqrt(6.75) * C5261;
    gx[70] += std::sqrt(1.6875) * C4641 - std::sqrt(1.6875) * C4599 -
              std::sqrt(1.6875) * C4851 + std::sqrt(1.6875) * C4893 +
              std::sqrt(6.75) * C5103 - std::sqrt(6.75) * C5145;
    gy[70] += std::sqrt(1.6875) * C4643 - std::sqrt(1.6875) * C4601 -
              std::sqrt(1.6875) * C4853 + std::sqrt(1.6875) * C4895 +
              std::sqrt(6.75) * C5105 - std::sqrt(6.75) * C5147;
    gz[70] += std::sqrt(1.6875) * C4645 - std::sqrt(1.6875) * C4603 -
              std::sqrt(1.6875) * C4855 + std::sqrt(1.6875) * C4897 +
              std::sqrt(6.75) * C5107 - std::sqrt(6.75) * C5149;
    gx[71] += std::sqrt(1.6875) * C4655 - std::sqrt(1.6875) * C4613 -
              std::sqrt(1.6875) * C4865 + std::sqrt(1.6875) * C4907 +
              std::sqrt(6.75) * C5117 - std::sqrt(6.75) * C5159;
    gy[71] += std::sqrt(1.6875) * C4657 - std::sqrt(1.6875) * C4615 -
              std::sqrt(1.6875) * C4867 + std::sqrt(1.6875) * C4909 +
              std::sqrt(6.75) * C5119 - std::sqrt(6.75) * C5161;
    gz[71] += std::sqrt(1.6875) * C4659 - std::sqrt(1.6875) * C4617 -
              std::sqrt(1.6875) * C4869 + std::sqrt(1.6875) * C4911 +
              std::sqrt(6.75) * C5121 - std::sqrt(6.75) * C5163;
    gx[72] += std::sqrt(0.140625) * C4578 + std::sqrt(0.140625) * C4585 -
              std::sqrt(0.5625) * C4592 - std::sqrt(0.140625) * C4620 -
              std::sqrt(0.140625) * C4627 + std::sqrt(0.5625) * C4634 +
              std::sqrt(0.140625) * C4830 + std::sqrt(0.140625) * C4837 -
              std::sqrt(0.5625) * C4844 - std::sqrt(0.140625) * C4872 -
              std::sqrt(0.140625) * C4879 + std::sqrt(0.5625) * C4886 -
              std::sqrt(0.5625) * C5082 - std::sqrt(0.5625) * C5089 +
              std::sqrt(2.25) * C5096 + std::sqrt(0.5625) * C5124 +
              std::sqrt(0.5625) * C5131 - std::sqrt(2.25) * C5138;
    gy[72] += std::sqrt(0.140625) * C4580 + std::sqrt(0.140625) * C4587 -
              std::sqrt(0.5625) * C4594 - std::sqrt(0.140625) * C4622 -
              std::sqrt(0.140625) * C4629 + std::sqrt(0.5625) * C4636 +
              std::sqrt(0.140625) * C4832 + std::sqrt(0.140625) * C4839 -
              std::sqrt(0.5625) * C4846 - std::sqrt(0.140625) * C4874 -
              std::sqrt(0.140625) * C4881 + std::sqrt(0.5625) * C4888 -
              std::sqrt(0.5625) * C5084 - std::sqrt(0.5625) * C5091 +
              std::sqrt(2.25) * C5098 + std::sqrt(0.5625) * C5126 +
              std::sqrt(0.5625) * C5133 - std::sqrt(2.25) * C5140;
    gz[72] += std::sqrt(0.140625) * C4582 + std::sqrt(0.140625) * C4589 -
              std::sqrt(0.5625) * C4596 - std::sqrt(0.140625) * C4624 -
              std::sqrt(0.140625) * C4631 + std::sqrt(0.5625) * C4638 +
              std::sqrt(0.140625) * C4834 + std::sqrt(0.140625) * C4841 -
              std::sqrt(0.5625) * C4848 - std::sqrt(0.140625) * C4876 -
              std::sqrt(0.140625) * C4883 + std::sqrt(0.5625) * C4890 -
              std::sqrt(0.5625) * C5086 - std::sqrt(0.5625) * C5093 +
              std::sqrt(2.25) * C5100 + std::sqrt(0.5625) * C5128 +
              std::sqrt(0.5625) * C5135 - std::sqrt(2.25) * C5142;
    gx[73] += std::sqrt(1.6875) * C4648 - std::sqrt(1.6875) * C4606 -
              std::sqrt(1.6875) * C4858 + std::sqrt(1.6875) * C4900 +
              std::sqrt(6.75) * C5110 - std::sqrt(6.75) * C5152;
    gy[73] += std::sqrt(1.6875) * C4650 - std::sqrt(1.6875) * C4608 -
              std::sqrt(1.6875) * C4860 + std::sqrt(1.6875) * C4902 +
              std::sqrt(6.75) * C5112 - std::sqrt(6.75) * C5154;
    gz[73] += std::sqrt(1.6875) * C4652 - std::sqrt(1.6875) * C4610 -
              std::sqrt(1.6875) * C4862 + std::sqrt(1.6875) * C4904 +
              std::sqrt(6.75) * C5114 - std::sqrt(6.75) * C5156;
    gx[74] += std::sqrt(0.421875) * C4585 - std::sqrt(0.421875) * C4578 +
              std::sqrt(0.421875) * C4620 - std::sqrt(0.421875) * C4627 -
              std::sqrt(0.421875) * C4830 + std::sqrt(0.421875) * C4837 +
              std::sqrt(0.421875) * C4872 - std::sqrt(0.421875) * C4879 +
              std::sqrt(1.6875) * C5082 - std::sqrt(1.6875) * C5089 -
              std::sqrt(1.6875) * C5124 + std::sqrt(1.6875) * C5131;
    gy[74] += std::sqrt(0.421875) * C4587 - std::sqrt(0.421875) * C4580 +
              std::sqrt(0.421875) * C4622 - std::sqrt(0.421875) * C4629 -
              std::sqrt(0.421875) * C4832 + std::sqrt(0.421875) * C4839 +
              std::sqrt(0.421875) * C4874 - std::sqrt(0.421875) * C4881 +
              std::sqrt(1.6875) * C5084 - std::sqrt(1.6875) * C5091 -
              std::sqrt(1.6875) * C5126 + std::sqrt(1.6875) * C5133;
    gz[74] += std::sqrt(0.421875) * C4589 - std::sqrt(0.421875) * C4582 +
              std::sqrt(0.421875) * C4624 - std::sqrt(0.421875) * C4631 -
              std::sqrt(0.421875) * C4834 + std::sqrt(0.421875) * C4841 +
              std::sqrt(0.421875) * C4876 - std::sqrt(0.421875) * C4883 +
              std::sqrt(1.6875) * C5086 - std::sqrt(1.6875) * C5093 -
              std::sqrt(1.6875) * C5128 + std::sqrt(1.6875) * C5135;
    gx[75] += std::sqrt(81.) * C5733;
    gy[75] += std::sqrt(81.) * C5735;
    gz[75] += std::sqrt(81.) * C5737;
    gx[76] += std::sqrt(81.) * C5747;
    gy[76] += std::sqrt(81.) * C5749;
    gz[76] += std::sqrt(81.) * C5751;
    gx[77] += std::sqrt(27.) * C5726 -
              (std::sqrt(6.75) * C5719 + std::sqrt(6.75) * C5712);
    gy[77] += std::sqrt(27.) * C5728 -
              (std::sqrt(6.75) * C5721 + std::sqrt(6.75) * C5714);
    gz[77] += std::sqrt(27.) * C5730 -
              (std::sqrt(6.75) * C5723 + std::sqrt(6.75) * C5716);
    gx[78] += std::sqrt(81.) * C5740;
    gy[78] += std::sqrt(81.) * C5742;
    gz[78] += std::sqrt(81.) * C5744;
    gx[79] += std::sqrt(20.25) * C5712 - std::sqrt(20.25) * C5719;
    gy[79] += std::sqrt(20.25) * C5714 - std::sqrt(20.25) * C5721;
    gz[79] += std::sqrt(20.25) * C5716 - std::sqrt(20.25) * C5723;
    gx[80] += std::sqrt(81.) * C5817;
    gy[80] += std::sqrt(81.) * C5819;
    gz[80] += std::sqrt(81.) * C5821;
    gx[81] += std::sqrt(81.) * C5831;
    gy[81] += std::sqrt(81.) * C5833;
    gz[81] += std::sqrt(81.) * C5835;
    gx[82] += std::sqrt(27.) * C5810 -
              (std::sqrt(6.75) * C5803 + std::sqrt(6.75) * C5796);
    gy[82] += std::sqrt(27.) * C5812 -
              (std::sqrt(6.75) * C5805 + std::sqrt(6.75) * C5798);
    gz[82] += std::sqrt(27.) * C5814 -
              (std::sqrt(6.75) * C5807 + std::sqrt(6.75) * C5800);
    gx[83] += std::sqrt(81.) * C5824;
    gy[83] += std::sqrt(81.) * C5826;
    gz[83] += std::sqrt(81.) * C5828;
    gx[84] += std::sqrt(20.25) * C5796 - std::sqrt(20.25) * C5803;
    gy[84] += std::sqrt(20.25) * C5798 - std::sqrt(20.25) * C5805;
    gz[84] += std::sqrt(20.25) * C5800 - std::sqrt(20.25) * C5807;
    gx[85] += std::sqrt(27.) * C5691 -
              (std::sqrt(6.75) * C5649 + std::sqrt(6.75) * C5607);
    gy[85] += std::sqrt(27.) * C5693 -
              (std::sqrt(6.75) * C5651 + std::sqrt(6.75) * C5609);
    gz[85] += std::sqrt(27.) * C5695 -
              (std::sqrt(6.75) * C5653 + std::sqrt(6.75) * C5611);
    gx[86] += std::sqrt(27.) * C5705 -
              (std::sqrt(6.75) * C5663 + std::sqrt(6.75) * C5621);
    gy[86] += std::sqrt(27.) * C5707 -
              (std::sqrt(6.75) * C5665 + std::sqrt(6.75) * C5623);
    gz[86] += std::sqrt(27.) * C5709 -
              (std::sqrt(6.75) * C5667 + std::sqrt(6.75) * C5625);
    gx[87] += std::sqrt(0.5625) * C5586 + std::sqrt(0.5625) * C5593 -
              std::sqrt(2.25) * C5600 + std::sqrt(0.5625) * C5628 +
              std::sqrt(0.5625) * C5635 - std::sqrt(2.25) * C5642 -
              std::sqrt(2.25) * C5670 - std::sqrt(2.25) * C5677 +
              std::sqrt(9.) * C5684;
    gy[87] += std::sqrt(0.5625) * C5588 + std::sqrt(0.5625) * C5595 -
              std::sqrt(2.25) * C5602 + std::sqrt(0.5625) * C5630 +
              std::sqrt(0.5625) * C5637 - std::sqrt(2.25) * C5644 -
              std::sqrt(2.25) * C5672 - std::sqrt(2.25) * C5679 +
              std::sqrt(9.) * C5686;
    gz[87] += std::sqrt(0.5625) * C5590 + std::sqrt(0.5625) * C5597 -
              std::sqrt(2.25) * C5604 + std::sqrt(0.5625) * C5632 +
              std::sqrt(0.5625) * C5639 - std::sqrt(2.25) * C5646 -
              std::sqrt(2.25) * C5674 - std::sqrt(2.25) * C5681 +
              std::sqrt(9.) * C5688;
    gx[88] += std::sqrt(27.) * C5698 -
              (std::sqrt(6.75) * C5656 + std::sqrt(6.75) * C5614);
    gy[88] += std::sqrt(27.) * C5700 -
              (std::sqrt(6.75) * C5658 + std::sqrt(6.75) * C5616);
    gz[88] += std::sqrt(27.) * C5702 -
              (std::sqrt(6.75) * C5660 + std::sqrt(6.75) * C5618);
    gx[89] += std::sqrt(1.6875) * C5593 - std::sqrt(1.6875) * C5586 -
              std::sqrt(1.6875) * C5628 + std::sqrt(1.6875) * C5635 +
              std::sqrt(6.75) * C5670 - std::sqrt(6.75) * C5677;
    gy[89] += std::sqrt(1.6875) * C5595 - std::sqrt(1.6875) * C5588 -
              std::sqrt(1.6875) * C5630 + std::sqrt(1.6875) * C5637 +
              std::sqrt(6.75) * C5672 - std::sqrt(6.75) * C5679;
    gz[89] += std::sqrt(1.6875) * C5597 - std::sqrt(1.6875) * C5590 -
              std::sqrt(1.6875) * C5632 + std::sqrt(1.6875) * C5639 +
              std::sqrt(6.75) * C5674 - std::sqrt(6.75) * C5681;
    gx[90] += std::sqrt(81.) * C5775;
    gy[90] += std::sqrt(81.) * C5777;
    gz[90] += std::sqrt(81.) * C5779;
    gx[91] += std::sqrt(81.) * C5789;
    gy[91] += std::sqrt(81.) * C5791;
    gz[91] += std::sqrt(81.) * C5793;
    gx[92] += std::sqrt(27.) * C5768 -
              (std::sqrt(6.75) * C5761 + std::sqrt(6.75) * C5754);
    gy[92] += std::sqrt(27.) * C5770 -
              (std::sqrt(6.75) * C5763 + std::sqrt(6.75) * C5756);
    gz[92] += std::sqrt(27.) * C5772 -
              (std::sqrt(6.75) * C5765 + std::sqrt(6.75) * C5758);
    gx[93] += std::sqrt(81.) * C5782;
    gy[93] += std::sqrt(81.) * C5784;
    gz[93] += std::sqrt(81.) * C5786;
    gx[94] += std::sqrt(20.25) * C5754 - std::sqrt(20.25) * C5761;
    gy[94] += std::sqrt(20.25) * C5756 - std::sqrt(20.25) * C5763;
    gz[94] += std::sqrt(20.25) * C5758 - std::sqrt(20.25) * C5765;
    gx[95] += std::sqrt(20.25) * C5607 - std::sqrt(20.25) * C5649;
    gy[95] += std::sqrt(20.25) * C5609 - std::sqrt(20.25) * C5651;
    gz[95] += std::sqrt(20.25) * C5611 - std::sqrt(20.25) * C5653;
    gx[96] += std::sqrt(20.25) * C5621 - std::sqrt(20.25) * C5663;
    gy[96] += std::sqrt(20.25) * C5623 - std::sqrt(20.25) * C5665;
    gz[96] += std::sqrt(20.25) * C5625 - std::sqrt(20.25) * C5667;
    gx[97] += std::sqrt(6.75) * C5600 -
              (std::sqrt(1.6875) * C5593 + std::sqrt(1.6875) * C5586) +
              std::sqrt(1.6875) * C5628 + std::sqrt(1.6875) * C5635 -
              std::sqrt(6.75) * C5642;
    gy[97] += std::sqrt(6.75) * C5602 -
              (std::sqrt(1.6875) * C5595 + std::sqrt(1.6875) * C5588) +
              std::sqrt(1.6875) * C5630 + std::sqrt(1.6875) * C5637 -
              std::sqrt(6.75) * C5644;
    gz[97] += std::sqrt(6.75) * C5604 -
              (std::sqrt(1.6875) * C5597 + std::sqrt(1.6875) * C5590) +
              std::sqrt(1.6875) * C5632 + std::sqrt(1.6875) * C5639 -
              std::sqrt(6.75) * C5646;
    gx[98] += std::sqrt(20.25) * C5614 - std::sqrt(20.25) * C5656;
    gy[98] += std::sqrt(20.25) * C5616 - std::sqrt(20.25) * C5658;
    gz[98] += std::sqrt(20.25) * C5618 - std::sqrt(20.25) * C5660;
    gx[99] += std::sqrt(5.0625) * C5586 - std::sqrt(5.0625) * C5593 -
              std::sqrt(5.0625) * C5628 + std::sqrt(5.0625) * C5635;
    gy[99] += std::sqrt(5.0625) * C5588 - std::sqrt(5.0625) * C5595 -
              std::sqrt(5.0625) * C5630 + std::sqrt(5.0625) * C5637;
    gz[99] += std::sqrt(5.0625) * C5590 - std::sqrt(5.0625) * C5597 -
              std::sqrt(5.0625) * C5632 + std::sqrt(5.0625) * C5639;
    gx[100] += std::sqrt(20.25) * C4725 - std::sqrt(20.25) * C4977;
    gy[100] += std::sqrt(20.25) * C4727 - std::sqrt(20.25) * C4979;
    gz[100] += std::sqrt(20.25) * C4729 - std::sqrt(20.25) * C4981;
    gx[101] += std::sqrt(20.25) * C4739 - std::sqrt(20.25) * C4991;
    gy[101] += std::sqrt(20.25) * C4741 - std::sqrt(20.25) * C4993;
    gz[101] += std::sqrt(20.25) * C4743 - std::sqrt(20.25) * C4995;
    gx[102] += std::sqrt(6.75) * C4718 -
               (std::sqrt(1.6875) * C4711 + std::sqrt(1.6875) * C4704) +
               std::sqrt(1.6875) * C4956 + std::sqrt(1.6875) * C4963 -
               std::sqrt(6.75) * C4970;
    gy[102] += std::sqrt(6.75) * C4720 -
               (std::sqrt(1.6875) * C4713 + std::sqrt(1.6875) * C4706) +
               std::sqrt(1.6875) * C4958 + std::sqrt(1.6875) * C4965 -
               std::sqrt(6.75) * C4972;
    gz[102] += std::sqrt(6.75) * C4722 -
               (std::sqrt(1.6875) * C4715 + std::sqrt(1.6875) * C4708) +
               std::sqrt(1.6875) * C4960 + std::sqrt(1.6875) * C4967 -
               std::sqrt(6.75) * C4974;
    gx[103] += std::sqrt(20.25) * C4732 - std::sqrt(20.25) * C4984;
    gy[103] += std::sqrt(20.25) * C4734 - std::sqrt(20.25) * C4986;
    gz[103] += std::sqrt(20.25) * C4736 - std::sqrt(20.25) * C4988;
    gx[104] += std::sqrt(5.0625) * C4704 - std::sqrt(5.0625) * C4711 -
               std::sqrt(5.0625) * C4956 + std::sqrt(5.0625) * C4963;
    gy[104] += std::sqrt(5.0625) * C4706 - std::sqrt(5.0625) * C4713 -
               std::sqrt(5.0625) * C4958 + std::sqrt(5.0625) * C4965;
    gz[104] += std::sqrt(5.0625) * C4708 - std::sqrt(5.0625) * C4715 -
               std::sqrt(5.0625) * C4960 + std::sqrt(5.0625) * C4967;
    gx[105] += std::sqrt(20.25) * C4809 - std::sqrt(20.25) * C5061;
    gy[105] += std::sqrt(20.25) * C4811 - std::sqrt(20.25) * C5063;
    gz[105] += std::sqrt(20.25) * C4813 - std::sqrt(20.25) * C5065;
    gx[106] += std::sqrt(20.25) * C4823 - std::sqrt(20.25) * C5075;
    gy[106] += std::sqrt(20.25) * C4825 - std::sqrt(20.25) * C5077;
    gz[106] += std::sqrt(20.25) * C4827 - std::sqrt(20.25) * C5079;
    gx[107] += std::sqrt(6.75) * C4802 -
               (std::sqrt(1.6875) * C4795 + std::sqrt(1.6875) * C4788) +
               std::sqrt(1.6875) * C5040 + std::sqrt(1.6875) * C5047 -
               std::sqrt(6.75) * C5054;
    gy[107] += std::sqrt(6.75) * C4804 -
               (std::sqrt(1.6875) * C4797 + std::sqrt(1.6875) * C4790) +
               std::sqrt(1.6875) * C5042 + std::sqrt(1.6875) * C5049 -
               std::sqrt(6.75) * C5056;
    gz[107] += std::sqrt(6.75) * C4806 -
               (std::sqrt(1.6875) * C4799 + std::sqrt(1.6875) * C4792) +
               std::sqrt(1.6875) * C5044 + std::sqrt(1.6875) * C5051 -
               std::sqrt(6.75) * C5058;
    gx[108] += std::sqrt(20.25) * C4816 - std::sqrt(20.25) * C5068;
    gy[108] += std::sqrt(20.25) * C4818 - std::sqrt(20.25) * C5070;
    gz[108] += std::sqrt(20.25) * C4820 - std::sqrt(20.25) * C5072;
    gx[109] += std::sqrt(5.0625) * C4788 - std::sqrt(5.0625) * C4795 -
               std::sqrt(5.0625) * C5040 + std::sqrt(5.0625) * C5047;
    gy[109] += std::sqrt(5.0625) * C4790 - std::sqrt(5.0625) * C4797 -
               std::sqrt(5.0625) * C5042 + std::sqrt(5.0625) * C5049;
    gz[109] += std::sqrt(5.0625) * C4792 - std::sqrt(5.0625) * C4799 -
               std::sqrt(5.0625) * C5044 + std::sqrt(5.0625) * C5051;
    gx[110] += std::sqrt(6.75) * C4683 -
               (std::sqrt(1.6875) * C4641 + std::sqrt(1.6875) * C4599) +
               std::sqrt(1.6875) * C4851 + std::sqrt(1.6875) * C4893 -
               std::sqrt(6.75) * C4935;
    gy[110] += std::sqrt(6.75) * C4685 -
               (std::sqrt(1.6875) * C4643 + std::sqrt(1.6875) * C4601) +
               std::sqrt(1.6875) * C4853 + std::sqrt(1.6875) * C4895 -
               std::sqrt(6.75) * C4937;
    gz[110] += std::sqrt(6.75) * C4687 -
               (std::sqrt(1.6875) * C4645 + std::sqrt(1.6875) * C4603) +
               std::sqrt(1.6875) * C4855 + std::sqrt(1.6875) * C4897 -
               std::sqrt(6.75) * C4939;
    gx[111] += std::sqrt(6.75) * C4697 -
               (std::sqrt(1.6875) * C4655 + std::sqrt(1.6875) * C4613) +
               std::sqrt(1.6875) * C4865 + std::sqrt(1.6875) * C4907 -
               std::sqrt(6.75) * C4949;
    gy[111] += std::sqrt(6.75) * C4699 -
               (std::sqrt(1.6875) * C4657 + std::sqrt(1.6875) * C4615) +
               std::sqrt(1.6875) * C4867 + std::sqrt(1.6875) * C4909 -
               std::sqrt(6.75) * C4951;
    gz[111] += std::sqrt(6.75) * C4701 -
               (std::sqrt(1.6875) * C4659 + std::sqrt(1.6875) * C4617) +
               std::sqrt(1.6875) * C4869 + std::sqrt(1.6875) * C4911 -
               std::sqrt(6.75) * C4953;
    gx[112] += std::sqrt(0.140625) * C4578 + std::sqrt(0.140625) * C4585 -
               std::sqrt(0.5625) * C4592 + std::sqrt(0.140625) * C4620 +
               std::sqrt(0.140625) * C4627 - std::sqrt(0.5625) * C4634 -
               std::sqrt(0.5625) * C4662 - std::sqrt(0.5625) * C4669 +
               std::sqrt(2.25) * C4676 - std::sqrt(0.140625) * C4830 -
               std::sqrt(0.140625) * C4837 + std::sqrt(0.5625) * C4844 -
               std::sqrt(0.140625) * C4872 - std::sqrt(0.140625) * C4879 +
               std::sqrt(0.5625) * C4886 + std::sqrt(0.5625) * C4914 +
               std::sqrt(0.5625) * C4921 - std::sqrt(2.25) * C4928;
    gy[112] += std::sqrt(0.140625) * C4580 + std::sqrt(0.140625) * C4587 -
               std::sqrt(0.5625) * C4594 + std::sqrt(0.140625) * C4622 +
               std::sqrt(0.140625) * C4629 - std::sqrt(0.5625) * C4636 -
               std::sqrt(0.5625) * C4664 - std::sqrt(0.5625) * C4671 +
               std::sqrt(2.25) * C4678 - std::sqrt(0.140625) * C4832 -
               std::sqrt(0.140625) * C4839 + std::sqrt(0.5625) * C4846 -
               std::sqrt(0.140625) * C4874 - std::sqrt(0.140625) * C4881 +
               std::sqrt(0.5625) * C4888 + std::sqrt(0.5625) * C4916 +
               std::sqrt(0.5625) * C4923 - std::sqrt(2.25) * C4930;
    gz[112] += std::sqrt(0.140625) * C4582 + std::sqrt(0.140625) * C4589 -
               std::sqrt(0.5625) * C4596 + std::sqrt(0.140625) * C4624 +
               std::sqrt(0.140625) * C4631 - std::sqrt(0.5625) * C4638 -
               std::sqrt(0.5625) * C4666 - std::sqrt(0.5625) * C4673 +
               std::sqrt(2.25) * C4680 - std::sqrt(0.140625) * C4834 -
               std::sqrt(0.140625) * C4841 + std::sqrt(0.5625) * C4848 -
               std::sqrt(0.140625) * C4876 - std::sqrt(0.140625) * C4883 +
               std::sqrt(0.5625) * C4890 + std::sqrt(0.5625) * C4918 +
               std::sqrt(0.5625) * C4925 - std::sqrt(2.25) * C4932;
    gx[113] += std::sqrt(6.75) * C4690 -
               (std::sqrt(1.6875) * C4648 + std::sqrt(1.6875) * C4606) +
               std::sqrt(1.6875) * C4858 + std::sqrt(1.6875) * C4900 -
               std::sqrt(6.75) * C4942;
    gy[113] += std::sqrt(6.75) * C4692 -
               (std::sqrt(1.6875) * C4650 + std::sqrt(1.6875) * C4608) +
               std::sqrt(1.6875) * C4860 + std::sqrt(1.6875) * C4902 -
               std::sqrt(6.75) * C4944;
    gz[113] += std::sqrt(6.75) * C4694 -
               (std::sqrt(1.6875) * C4652 + std::sqrt(1.6875) * C4610) +
               std::sqrt(1.6875) * C4862 + std::sqrt(1.6875) * C4904 -
               std::sqrt(6.75) * C4946;
    gx[114] += std::sqrt(0.421875) * C4585 - std::sqrt(0.421875) * C4578 -
               std::sqrt(0.421875) * C4620 + std::sqrt(0.421875) * C4627 +
               std::sqrt(1.6875) * C4662 - std::sqrt(1.6875) * C4669 +
               std::sqrt(0.421875) * C4830 - std::sqrt(0.421875) * C4837 +
               std::sqrt(0.421875) * C4872 - std::sqrt(0.421875) * C4879 -
               std::sqrt(1.6875) * C4914 + std::sqrt(1.6875) * C4921;
    gy[114] += std::sqrt(0.421875) * C4587 - std::sqrt(0.421875) * C4580 -
               std::sqrt(0.421875) * C4622 + std::sqrt(0.421875) * C4629 +
               std::sqrt(1.6875) * C4664 - std::sqrt(1.6875) * C4671 +
               std::sqrt(0.421875) * C4832 - std::sqrt(0.421875) * C4839 +
               std::sqrt(0.421875) * C4874 - std::sqrt(0.421875) * C4881 -
               std::sqrt(1.6875) * C4916 + std::sqrt(1.6875) * C4923;
    gz[114] += std::sqrt(0.421875) * C4589 - std::sqrt(0.421875) * C4582 -
               std::sqrt(0.421875) * C4624 + std::sqrt(0.421875) * C4631 +
               std::sqrt(1.6875) * C4666 - std::sqrt(1.6875) * C4673 +
               std::sqrt(0.421875) * C4834 - std::sqrt(0.421875) * C4841 +
               std::sqrt(0.421875) * C4876 - std::sqrt(0.421875) * C4883 -
               std::sqrt(1.6875) * C4918 + std::sqrt(1.6875) * C4925;
    gx[115] += std::sqrt(20.25) * C4767 - std::sqrt(20.25) * C5019;
    gy[115] += std::sqrt(20.25) * C4769 - std::sqrt(20.25) * C5021;
    gz[115] += std::sqrt(20.25) * C4771 - std::sqrt(20.25) * C5023;
    gx[116] += std::sqrt(20.25) * C4781 - std::sqrt(20.25) * C5033;
    gy[116] += std::sqrt(20.25) * C4783 - std::sqrt(20.25) * C5035;
    gz[116] += std::sqrt(20.25) * C4785 - std::sqrt(20.25) * C5037;
    gx[117] += std::sqrt(6.75) * C4760 -
               (std::sqrt(1.6875) * C4753 + std::sqrt(1.6875) * C4746) +
               std::sqrt(1.6875) * C4998 + std::sqrt(1.6875) * C5005 -
               std::sqrt(6.75) * C5012;
    gy[117] += std::sqrt(6.75) * C4762 -
               (std::sqrt(1.6875) * C4755 + std::sqrt(1.6875) * C4748) +
               std::sqrt(1.6875) * C5000 + std::sqrt(1.6875) * C5007 -
               std::sqrt(6.75) * C5014;
    gz[117] += std::sqrt(6.75) * C4764 -
               (std::sqrt(1.6875) * C4757 + std::sqrt(1.6875) * C4750) +
               std::sqrt(1.6875) * C5002 + std::sqrt(1.6875) * C5009 -
               std::sqrt(6.75) * C5016;
    gx[118] += std::sqrt(20.25) * C4774 - std::sqrt(20.25) * C5026;
    gy[118] += std::sqrt(20.25) * C4776 - std::sqrt(20.25) * C5028;
    gz[118] += std::sqrt(20.25) * C4778 - std::sqrt(20.25) * C5030;
    gx[119] += std::sqrt(5.0625) * C4746 - std::sqrt(5.0625) * C4753 -
               std::sqrt(5.0625) * C4998 + std::sqrt(5.0625) * C5005;
    gy[119] += std::sqrt(5.0625) * C4748 - std::sqrt(5.0625) * C4755 -
               std::sqrt(5.0625) * C5000 + std::sqrt(5.0625) * C5007;
    gz[119] += std::sqrt(5.0625) * C4750 - std::sqrt(5.0625) * C4757 -
               std::sqrt(5.0625) * C5002 + std::sqrt(5.0625) * C5009;
    gx[120] += std::sqrt(5.0625) * C4599 - std::sqrt(5.0625) * C4641 -
               std::sqrt(5.0625) * C4851 + std::sqrt(5.0625) * C4893;
    gy[120] += std::sqrt(5.0625) * C4601 - std::sqrt(5.0625) * C4643 -
               std::sqrt(5.0625) * C4853 + std::sqrt(5.0625) * C4895;
    gz[120] += std::sqrt(5.0625) * C4603 - std::sqrt(5.0625) * C4645 -
               std::sqrt(5.0625) * C4855 + std::sqrt(5.0625) * C4897;
    gx[121] += std::sqrt(5.0625) * C4613 - std::sqrt(5.0625) * C4655 -
               std::sqrt(5.0625) * C4865 + std::sqrt(5.0625) * C4907;
    gy[121] += std::sqrt(5.0625) * C4615 - std::sqrt(5.0625) * C4657 -
               std::sqrt(5.0625) * C4867 + std::sqrt(5.0625) * C4909;
    gz[121] += std::sqrt(5.0625) * C4617 - std::sqrt(5.0625) * C4659 -
               std::sqrt(5.0625) * C4869 + std::sqrt(5.0625) * C4911;
    gx[122] += std::sqrt(1.6875) * C4592 -
               (std::sqrt(0.421875) * C4585 + std::sqrt(0.421875) * C4578) +
               std::sqrt(0.421875) * C4620 + std::sqrt(0.421875) * C4627 -
               std::sqrt(1.6875) * C4634 + std::sqrt(0.421875) * C4830 +
               std::sqrt(0.421875) * C4837 - std::sqrt(1.6875) * C4844 -
               std::sqrt(0.421875) * C4872 - std::sqrt(0.421875) * C4879 +
               std::sqrt(1.6875) * C4886;
    gy[122] += std::sqrt(1.6875) * C4594 -
               (std::sqrt(0.421875) * C4587 + std::sqrt(0.421875) * C4580) +
               std::sqrt(0.421875) * C4622 + std::sqrt(0.421875) * C4629 -
               std::sqrt(1.6875) * C4636 + std::sqrt(0.421875) * C4832 +
               std::sqrt(0.421875) * C4839 - std::sqrt(1.6875) * C4846 -
               std::sqrt(0.421875) * C4874 - std::sqrt(0.421875) * C4881 +
               std::sqrt(1.6875) * C4888;
    gz[122] += std::sqrt(1.6875) * C4596 -
               (std::sqrt(0.421875) * C4589 + std::sqrt(0.421875) * C4582) +
               std::sqrt(0.421875) * C4624 + std::sqrt(0.421875) * C4631 -
               std::sqrt(1.6875) * C4638 + std::sqrt(0.421875) * C4834 +
               std::sqrt(0.421875) * C4841 - std::sqrt(1.6875) * C4848 -
               std::sqrt(0.421875) * C4876 - std::sqrt(0.421875) * C4883 +
               std::sqrt(1.6875) * C4890;
    gx[123] += std::sqrt(5.0625) * C4606 - std::sqrt(5.0625) * C4648 -
               std::sqrt(5.0625) * C4858 + std::sqrt(5.0625) * C4900;
    gy[123] += std::sqrt(5.0625) * C4608 - std::sqrt(5.0625) * C4650 -
               std::sqrt(5.0625) * C4860 + std::sqrt(5.0625) * C4902;
    gz[123] += std::sqrt(5.0625) * C4610 - std::sqrt(5.0625) * C4652 -
               std::sqrt(5.0625) * C4862 + std::sqrt(5.0625) * C4904;
    gx[124] += std::sqrt(1.265625) * C4578 - std::sqrt(1.265625) * C4585 -
               std::sqrt(1.265625) * C4620 + std::sqrt(1.265625) * C4627 -
               std::sqrt(1.265625) * C4830 + std::sqrt(1.265625) * C4837 +
               std::sqrt(1.265625) * C4872 - std::sqrt(1.265625) * C4879;
    gy[124] += std::sqrt(1.265625) * C4580 - std::sqrt(1.265625) * C4587 -
               std::sqrt(1.265625) * C4622 + std::sqrt(1.265625) * C4629 -
               std::sqrt(1.265625) * C4832 + std::sqrt(1.265625) * C4839 +
               std::sqrt(1.265625) * C4874 - std::sqrt(1.265625) * C4881;
    gz[124] += std::sqrt(1.265625) * C4582 - std::sqrt(1.265625) * C4589 -
               std::sqrt(1.265625) * C4624 + std::sqrt(1.265625) * C4631 -
               std::sqrt(1.265625) * C4834 + std::sqrt(1.265625) * C4841 +
               std::sqrt(1.265625) * C4876 - std::sqrt(1.265625) * C4883;
    gx[125] += std::sqrt(81.) * C8505;
    gy[125] += std::sqrt(81.) * C8507;
    gz[125] += std::sqrt(81.) * C8509;
    gx[126] += std::sqrt(81.) * C8519;
    gy[126] += std::sqrt(81.) * C8521;
    gz[126] += std::sqrt(81.) * C8523;
    gx[127] += std::sqrt(27.) * C8498 -
               (std::sqrt(6.75) * C8491 + std::sqrt(6.75) * C8484);
    gy[127] += std::sqrt(27.) * C8500 -
               (std::sqrt(6.75) * C8493 + std::sqrt(6.75) * C8486);
    gz[127] += std::sqrt(27.) * C8502 -
               (std::sqrt(6.75) * C8495 + std::sqrt(6.75) * C8488);
    gx[128] += std::sqrt(81.) * C8512;
    gy[128] += std::sqrt(81.) * C8514;
    gz[128] += std::sqrt(81.) * C8516;
    gx[129] += std::sqrt(20.25) * C8484 - std::sqrt(20.25) * C8491;
    gy[129] += std::sqrt(20.25) * C8486 - std::sqrt(20.25) * C8493;
    gz[129] += std::sqrt(20.25) * C8488 - std::sqrt(20.25) * C8495;
    gx[130] += std::sqrt(81.) * C8589;
    gy[130] += std::sqrt(81.) * C8591;
    gz[130] += std::sqrt(81.) * C8593;
    gx[131] += std::sqrt(81.) * C8603;
    gy[131] += std::sqrt(81.) * C8605;
    gz[131] += std::sqrt(81.) * C8607;
    gx[132] += std::sqrt(27.) * C8582 -
               (std::sqrt(6.75) * C8575 + std::sqrt(6.75) * C8568);
    gy[132] += std::sqrt(27.) * C8584 -
               (std::sqrt(6.75) * C8577 + std::sqrt(6.75) * C8570);
    gz[132] += std::sqrt(27.) * C8586 -
               (std::sqrt(6.75) * C8579 + std::sqrt(6.75) * C8572);
    gx[133] += std::sqrt(81.) * C8596;
    gy[133] += std::sqrt(81.) * C8598;
    gz[133] += std::sqrt(81.) * C8600;
    gx[134] += std::sqrt(20.25) * C8568 - std::sqrt(20.25) * C8575;
    gy[134] += std::sqrt(20.25) * C8570 - std::sqrt(20.25) * C8577;
    gz[134] += std::sqrt(20.25) * C8572 - std::sqrt(20.25) * C8579;
    gx[135] += std::sqrt(27.) * C8463 -
               (std::sqrt(6.75) * C8421 + std::sqrt(6.75) * C8379);
    gy[135] += std::sqrt(27.) * C8465 -
               (std::sqrt(6.75) * C8423 + std::sqrt(6.75) * C8381);
    gz[135] += std::sqrt(27.) * C8467 -
               (std::sqrt(6.75) * C8425 + std::sqrt(6.75) * C8383);
    gx[136] += std::sqrt(27.) * C8477 -
               (std::sqrt(6.75) * C8435 + std::sqrt(6.75) * C8393);
    gy[136] += std::sqrt(27.) * C8479 -
               (std::sqrt(6.75) * C8437 + std::sqrt(6.75) * C8395);
    gz[136] += std::sqrt(27.) * C8481 -
               (std::sqrt(6.75) * C8439 + std::sqrt(6.75) * C8397);
    gx[137] += std::sqrt(0.5625) * C8358 + std::sqrt(0.5625) * C8365 -
               std::sqrt(2.25) * C8372 + std::sqrt(0.5625) * C8400 +
               std::sqrt(0.5625) * C8407 - std::sqrt(2.25) * C8414 -
               std::sqrt(2.25) * C8442 - std::sqrt(2.25) * C8449 +
               std::sqrt(9.) * C8456;
    gy[137] += std::sqrt(0.5625) * C8360 + std::sqrt(0.5625) * C8367 -
               std::sqrt(2.25) * C8374 + std::sqrt(0.5625) * C8402 +
               std::sqrt(0.5625) * C8409 - std::sqrt(2.25) * C8416 -
               std::sqrt(2.25) * C8444 - std::sqrt(2.25) * C8451 +
               std::sqrt(9.) * C8458;
    gz[137] += std::sqrt(0.5625) * C8362 + std::sqrt(0.5625) * C8369 -
               std::sqrt(2.25) * C8376 + std::sqrt(0.5625) * C8404 +
               std::sqrt(0.5625) * C8411 - std::sqrt(2.25) * C8418 -
               std::sqrt(2.25) * C8446 - std::sqrt(2.25) * C8453 +
               std::sqrt(9.) * C8460;
    gx[138] += std::sqrt(27.) * C8470 -
               (std::sqrt(6.75) * C8428 + std::sqrt(6.75) * C8386);
    gy[138] += std::sqrt(27.) * C8472 -
               (std::sqrt(6.75) * C8430 + std::sqrt(6.75) * C8388);
    gz[138] += std::sqrt(27.) * C8474 -
               (std::sqrt(6.75) * C8432 + std::sqrt(6.75) * C8390);
    gx[139] += std::sqrt(1.6875) * C8365 - std::sqrt(1.6875) * C8358 -
               std::sqrt(1.6875) * C8400 + std::sqrt(1.6875) * C8407 +
               std::sqrt(6.75) * C8442 - std::sqrt(6.75) * C8449;
    gy[139] += std::sqrt(1.6875) * C8367 - std::sqrt(1.6875) * C8360 -
               std::sqrt(1.6875) * C8402 + std::sqrt(1.6875) * C8409 +
               std::sqrt(6.75) * C8444 - std::sqrt(6.75) * C8451;
    gz[139] += std::sqrt(1.6875) * C8369 - std::sqrt(1.6875) * C8362 -
               std::sqrt(1.6875) * C8404 + std::sqrt(1.6875) * C8411 +
               std::sqrt(6.75) * C8446 - std::sqrt(6.75) * C8453;
    gx[140] += std::sqrt(81.) * C8547;
    gy[140] += std::sqrt(81.) * C8549;
    gz[140] += std::sqrt(81.) * C8551;
    gx[141] += std::sqrt(81.) * C8561;
    gy[141] += std::sqrt(81.) * C8563;
    gz[141] += std::sqrt(81.) * C8565;
    gx[142] += std::sqrt(27.) * C8540 -
               (std::sqrt(6.75) * C8533 + std::sqrt(6.75) * C8526);
    gy[142] += std::sqrt(27.) * C8542 -
               (std::sqrt(6.75) * C8535 + std::sqrt(6.75) * C8528);
    gz[142] += std::sqrt(27.) * C8544 -
               (std::sqrt(6.75) * C8537 + std::sqrt(6.75) * C8530);
    gx[143] += std::sqrt(81.) * C8554;
    gy[143] += std::sqrt(81.) * C8556;
    gz[143] += std::sqrt(81.) * C8558;
    gx[144] += std::sqrt(20.25) * C8526 - std::sqrt(20.25) * C8533;
    gy[144] += std::sqrt(20.25) * C8528 - std::sqrt(20.25) * C8535;
    gz[144] += std::sqrt(20.25) * C8530 - std::sqrt(20.25) * C8537;
    gx[145] += std::sqrt(20.25) * C8379 - std::sqrt(20.25) * C8421;
    gy[145] += std::sqrt(20.25) * C8381 - std::sqrt(20.25) * C8423;
    gz[145] += std::sqrt(20.25) * C8383 - std::sqrt(20.25) * C8425;
    gx[146] += std::sqrt(20.25) * C8393 - std::sqrt(20.25) * C8435;
    gy[146] += std::sqrt(20.25) * C8395 - std::sqrt(20.25) * C8437;
    gz[146] += std::sqrt(20.25) * C8397 - std::sqrt(20.25) * C8439;
    gx[147] += std::sqrt(6.75) * C8372 -
               (std::sqrt(1.6875) * C8365 + std::sqrt(1.6875) * C8358) +
               std::sqrt(1.6875) * C8400 + std::sqrt(1.6875) * C8407 -
               std::sqrt(6.75) * C8414;
    gy[147] += std::sqrt(6.75) * C8374 -
               (std::sqrt(1.6875) * C8367 + std::sqrt(1.6875) * C8360) +
               std::sqrt(1.6875) * C8402 + std::sqrt(1.6875) * C8409 -
               std::sqrt(6.75) * C8416;
    gz[147] += std::sqrt(6.75) * C8376 -
               (std::sqrt(1.6875) * C8369 + std::sqrt(1.6875) * C8362) +
               std::sqrt(1.6875) * C8404 + std::sqrt(1.6875) * C8411 -
               std::sqrt(6.75) * C8418;
    gx[148] += std::sqrt(20.25) * C8386 - std::sqrt(20.25) * C8428;
    gy[148] += std::sqrt(20.25) * C8388 - std::sqrt(20.25) * C8430;
    gz[148] += std::sqrt(20.25) * C8390 - std::sqrt(20.25) * C8432;
    gx[149] += std::sqrt(5.0625) * C8358 - std::sqrt(5.0625) * C8365 -
               std::sqrt(5.0625) * C8400 + std::sqrt(5.0625) * C8407;
    gy[149] += std::sqrt(5.0625) * C8360 - std::sqrt(5.0625) * C8367 -
               std::sqrt(5.0625) * C8402 + std::sqrt(5.0625) * C8409;
    gz[149] += std::sqrt(5.0625) * C8362 - std::sqrt(5.0625) * C8369 -
               std::sqrt(5.0625) * C8404 + std::sqrt(5.0625) * C8411;
    gx[150] += std::sqrt(81.) * C9009;
    gy[150] += std::sqrt(81.) * C9011;
    gz[150] += std::sqrt(81.) * C9013;
    gx[151] += std::sqrt(81.) * C9023;
    gy[151] += std::sqrt(81.) * C9025;
    gz[151] += std::sqrt(81.) * C9027;
    gx[152] += std::sqrt(27.) * C9002 -
               (std::sqrt(6.75) * C8995 + std::sqrt(6.75) * C8988);
    gy[152] += std::sqrt(27.) * C9004 -
               (std::sqrt(6.75) * C8997 + std::sqrt(6.75) * C8990);
    gz[152] += std::sqrt(27.) * C9006 -
               (std::sqrt(6.75) * C8999 + std::sqrt(6.75) * C8992);
    gx[153] += std::sqrt(81.) * C9016;
    gy[153] += std::sqrt(81.) * C9018;
    gz[153] += std::sqrt(81.) * C9020;
    gx[154] += std::sqrt(20.25) * C8988 - std::sqrt(20.25) * C8995;
    gy[154] += std::sqrt(20.25) * C8990 - std::sqrt(20.25) * C8997;
    gz[154] += std::sqrt(20.25) * C8992 - std::sqrt(20.25) * C8999;
    gx[155] += std::sqrt(81.) * C9093;
    gy[155] += std::sqrt(81.) * C9095;
    gz[155] += std::sqrt(81.) * C9097;
    gx[156] += std::sqrt(81.) * C9107;
    gy[156] += std::sqrt(81.) * C9109;
    gz[156] += std::sqrt(81.) * C9111;
    gx[157] += std::sqrt(27.) * C9086 -
               (std::sqrt(6.75) * C9079 + std::sqrt(6.75) * C9072);
    gy[157] += std::sqrt(27.) * C9088 -
               (std::sqrt(6.75) * C9081 + std::sqrt(6.75) * C9074);
    gz[157] += std::sqrt(27.) * C9090 -
               (std::sqrt(6.75) * C9083 + std::sqrt(6.75) * C9076);
    gx[158] += std::sqrt(81.) * C9100;
    gy[158] += std::sqrt(81.) * C9102;
    gz[158] += std::sqrt(81.) * C9104;
    gx[159] += std::sqrt(20.25) * C9072 - std::sqrt(20.25) * C9079;
    gy[159] += std::sqrt(20.25) * C9074 - std::sqrt(20.25) * C9081;
    gz[159] += std::sqrt(20.25) * C9076 - std::sqrt(20.25) * C9083;
    gx[160] += std::sqrt(27.) * C8967 -
               (std::sqrt(6.75) * C8925 + std::sqrt(6.75) * C8883);
    gy[160] += std::sqrt(27.) * C8969 -
               (std::sqrt(6.75) * C8927 + std::sqrt(6.75) * C8885);
    gz[160] += std::sqrt(27.) * C8971 -
               (std::sqrt(6.75) * C8929 + std::sqrt(6.75) * C8887);
    gx[161] += std::sqrt(27.) * C8981 -
               (std::sqrt(6.75) * C8939 + std::sqrt(6.75) * C8897);
    gy[161] += std::sqrt(27.) * C8983 -
               (std::sqrt(6.75) * C8941 + std::sqrt(6.75) * C8899);
    gz[161] += std::sqrt(27.) * C8985 -
               (std::sqrt(6.75) * C8943 + std::sqrt(6.75) * C8901);
    gx[162] += std::sqrt(0.5625) * C8862 + std::sqrt(0.5625) * C8869 -
               std::sqrt(2.25) * C8876 + std::sqrt(0.5625) * C8904 +
               std::sqrt(0.5625) * C8911 - std::sqrt(2.25) * C8918 -
               std::sqrt(2.25) * C8946 - std::sqrt(2.25) * C8953 +
               std::sqrt(9.) * C8960;
    gy[162] += std::sqrt(0.5625) * C8864 + std::sqrt(0.5625) * C8871 -
               std::sqrt(2.25) * C8878 + std::sqrt(0.5625) * C8906 +
               std::sqrt(0.5625) * C8913 - std::sqrt(2.25) * C8920 -
               std::sqrt(2.25) * C8948 - std::sqrt(2.25) * C8955 +
               std::sqrt(9.) * C8962;
    gz[162] += std::sqrt(0.5625) * C8866 + std::sqrt(0.5625) * C8873 -
               std::sqrt(2.25) * C8880 + std::sqrt(0.5625) * C8908 +
               std::sqrt(0.5625) * C8915 - std::sqrt(2.25) * C8922 -
               std::sqrt(2.25) * C8950 - std::sqrt(2.25) * C8957 +
               std::sqrt(9.) * C8964;
    gx[163] += std::sqrt(27.) * C8974 -
               (std::sqrt(6.75) * C8932 + std::sqrt(6.75) * C8890);
    gy[163] += std::sqrt(27.) * C8976 -
               (std::sqrt(6.75) * C8934 + std::sqrt(6.75) * C8892);
    gz[163] += std::sqrt(27.) * C8978 -
               (std::sqrt(6.75) * C8936 + std::sqrt(6.75) * C8894);
    gx[164] += std::sqrt(1.6875) * C8869 - std::sqrt(1.6875) * C8862 -
               std::sqrt(1.6875) * C8904 + std::sqrt(1.6875) * C8911 +
               std::sqrt(6.75) * C8946 - std::sqrt(6.75) * C8953;
    gy[164] += std::sqrt(1.6875) * C8871 - std::sqrt(1.6875) * C8864 -
               std::sqrt(1.6875) * C8906 + std::sqrt(1.6875) * C8913 +
               std::sqrt(6.75) * C8948 - std::sqrt(6.75) * C8955;
    gz[164] += std::sqrt(1.6875) * C8873 - std::sqrt(1.6875) * C8866 -
               std::sqrt(1.6875) * C8908 + std::sqrt(1.6875) * C8915 +
               std::sqrt(6.75) * C8950 - std::sqrt(6.75) * C8957;
    gx[165] += std::sqrt(81.) * C9051;
    gy[165] += std::sqrt(81.) * C9053;
    gz[165] += std::sqrt(81.) * C9055;
    gx[166] += std::sqrt(81.) * C9065;
    gy[166] += std::sqrt(81.) * C9067;
    gz[166] += std::sqrt(81.) * C9069;
    gx[167] += std::sqrt(27.) * C9044 -
               (std::sqrt(6.75) * C9037 + std::sqrt(6.75) * C9030);
    gy[167] += std::sqrt(27.) * C9046 -
               (std::sqrt(6.75) * C9039 + std::sqrt(6.75) * C9032);
    gz[167] += std::sqrt(27.) * C9048 -
               (std::sqrt(6.75) * C9041 + std::sqrt(6.75) * C9034);
    gx[168] += std::sqrt(81.) * C9058;
    gy[168] += std::sqrt(81.) * C9060;
    gz[168] += std::sqrt(81.) * C9062;
    gx[169] += std::sqrt(20.25) * C9030 - std::sqrt(20.25) * C9037;
    gy[169] += std::sqrt(20.25) * C9032 - std::sqrt(20.25) * C9039;
    gz[169] += std::sqrt(20.25) * C9034 - std::sqrt(20.25) * C9041;
    gx[170] += std::sqrt(20.25) * C8883 - std::sqrt(20.25) * C8925;
    gy[170] += std::sqrt(20.25) * C8885 - std::sqrt(20.25) * C8927;
    gz[170] += std::sqrt(20.25) * C8887 - std::sqrt(20.25) * C8929;
    gx[171] += std::sqrt(20.25) * C8897 - std::sqrt(20.25) * C8939;
    gy[171] += std::sqrt(20.25) * C8899 - std::sqrt(20.25) * C8941;
    gz[171] += std::sqrt(20.25) * C8901 - std::sqrt(20.25) * C8943;
    gx[172] += std::sqrt(6.75) * C8876 -
               (std::sqrt(1.6875) * C8869 + std::sqrt(1.6875) * C8862) +
               std::sqrt(1.6875) * C8904 + std::sqrt(1.6875) * C8911 -
               std::sqrt(6.75) * C8918;
    gy[172] += std::sqrt(6.75) * C8878 -
               (std::sqrt(1.6875) * C8871 + std::sqrt(1.6875) * C8864) +
               std::sqrt(1.6875) * C8906 + std::sqrt(1.6875) * C8913 -
               std::sqrt(6.75) * C8920;
    gz[172] += std::sqrt(6.75) * C8880 -
               (std::sqrt(1.6875) * C8873 + std::sqrt(1.6875) * C8866) +
               std::sqrt(1.6875) * C8908 + std::sqrt(1.6875) * C8915 -
               std::sqrt(6.75) * C8922;
    gx[173] += std::sqrt(20.25) * C8890 - std::sqrt(20.25) * C8932;
    gy[173] += std::sqrt(20.25) * C8892 - std::sqrt(20.25) * C8934;
    gz[173] += std::sqrt(20.25) * C8894 - std::sqrt(20.25) * C8936;
    gx[174] += std::sqrt(5.0625) * C8862 - std::sqrt(5.0625) * C8869 -
               std::sqrt(5.0625) * C8904 + std::sqrt(5.0625) * C8911;
    gy[174] += std::sqrt(5.0625) * C8864 - std::sqrt(5.0625) * C8871 -
               std::sqrt(5.0625) * C8906 + std::sqrt(5.0625) * C8913;
    gz[174] += std::sqrt(5.0625) * C8866 - std::sqrt(5.0625) * C8873 -
               std::sqrt(5.0625) * C8908 + std::sqrt(5.0625) * C8915;
    gx[175] += std::sqrt(27.) * C8253 -
               (std::sqrt(6.75) * C8001 + std::sqrt(6.75) * C7749);
    gy[175] += std::sqrt(27.) * C8255 -
               (std::sqrt(6.75) * C8003 + std::sqrt(6.75) * C7751);
    gz[175] += std::sqrt(27.) * C8257 -
               (std::sqrt(6.75) * C8005 + std::sqrt(6.75) * C7753);
    gx[176] += std::sqrt(27.) * C8267 -
               (std::sqrt(6.75) * C8015 + std::sqrt(6.75) * C7763);
    gy[176] += std::sqrt(27.) * C8269 -
               (std::sqrt(6.75) * C8017 + std::sqrt(6.75) * C7765);
    gz[176] += std::sqrt(27.) * C8271 -
               (std::sqrt(6.75) * C8019 + std::sqrt(6.75) * C7767);
    gx[177] += std::sqrt(0.5625) * C7728 + std::sqrt(0.5625) * C7735 -
               std::sqrt(2.25) * C7742 + std::sqrt(0.5625) * C7980 +
               std::sqrt(0.5625) * C7987 - std::sqrt(2.25) * C7994 -
               std::sqrt(2.25) * C8232 - std::sqrt(2.25) * C8239 +
               std::sqrt(9.) * C8246;
    gy[177] += std::sqrt(0.5625) * C7730 + std::sqrt(0.5625) * C7737 -
               std::sqrt(2.25) * C7744 + std::sqrt(0.5625) * C7982 +
               std::sqrt(0.5625) * C7989 - std::sqrt(2.25) * C7996 -
               std::sqrt(2.25) * C8234 - std::sqrt(2.25) * C8241 +
               std::sqrt(9.) * C8248;
    gz[177] += std::sqrt(0.5625) * C7732 + std::sqrt(0.5625) * C7739 -
               std::sqrt(2.25) * C7746 + std::sqrt(0.5625) * C7984 +
               std::sqrt(0.5625) * C7991 - std::sqrt(2.25) * C7998 -
               std::sqrt(2.25) * C8236 - std::sqrt(2.25) * C8243 +
               std::sqrt(9.) * C8250;
    gx[178] += std::sqrt(27.) * C8260 -
               (std::sqrt(6.75) * C8008 + std::sqrt(6.75) * C7756);
    gy[178] += std::sqrt(27.) * C8262 -
               (std::sqrt(6.75) * C8010 + std::sqrt(6.75) * C7758);
    gz[178] += std::sqrt(27.) * C8264 -
               (std::sqrt(6.75) * C8012 + std::sqrt(6.75) * C7760);
    gx[179] += std::sqrt(1.6875) * C7735 - std::sqrt(1.6875) * C7728 -
               std::sqrt(1.6875) * C7980 + std::sqrt(1.6875) * C7987 +
               std::sqrt(6.75) * C8232 - std::sqrt(6.75) * C8239;
    gy[179] += std::sqrt(1.6875) * C7737 - std::sqrt(1.6875) * C7730 -
               std::sqrt(1.6875) * C7982 + std::sqrt(1.6875) * C7989 +
               std::sqrt(6.75) * C8234 - std::sqrt(6.75) * C8241;
    gz[179] += std::sqrt(1.6875) * C7739 - std::sqrt(1.6875) * C7732 -
               std::sqrt(1.6875) * C7984 + std::sqrt(1.6875) * C7991 +
               std::sqrt(6.75) * C8236 - std::sqrt(6.75) * C8243;
    gx[180] += std::sqrt(27.) * C8337 -
               (std::sqrt(6.75) * C8085 + std::sqrt(6.75) * C7833);
    gy[180] += std::sqrt(27.) * C8339 -
               (std::sqrt(6.75) * C8087 + std::sqrt(6.75) * C7835);
    gz[180] += std::sqrt(27.) * C8341 -
               (std::sqrt(6.75) * C8089 + std::sqrt(6.75) * C7837);
    gx[181] += std::sqrt(27.) * C8351 -
               (std::sqrt(6.75) * C8099 + std::sqrt(6.75) * C7847);
    gy[181] += std::sqrt(27.) * C8353 -
               (std::sqrt(6.75) * C8101 + std::sqrt(6.75) * C7849);
    gz[181] += std::sqrt(27.) * C8355 -
               (std::sqrt(6.75) * C8103 + std::sqrt(6.75) * C7851);
    gx[182] += std::sqrt(0.5625) * C7812 + std::sqrt(0.5625) * C7819 -
               std::sqrt(2.25) * C7826 + std::sqrt(0.5625) * C8064 +
               std::sqrt(0.5625) * C8071 - std::sqrt(2.25) * C8078 -
               std::sqrt(2.25) * C8316 - std::sqrt(2.25) * C8323 +
               std::sqrt(9.) * C8330;
    gy[182] += std::sqrt(0.5625) * C7814 + std::sqrt(0.5625) * C7821 -
               std::sqrt(2.25) * C7828 + std::sqrt(0.5625) * C8066 +
               std::sqrt(0.5625) * C8073 - std::sqrt(2.25) * C8080 -
               std::sqrt(2.25) * C8318 - std::sqrt(2.25) * C8325 +
               std::sqrt(9.) * C8332;
    gz[182] += std::sqrt(0.5625) * C7816 + std::sqrt(0.5625) * C7823 -
               std::sqrt(2.25) * C7830 + std::sqrt(0.5625) * C8068 +
               std::sqrt(0.5625) * C8075 - std::sqrt(2.25) * C8082 -
               std::sqrt(2.25) * C8320 - std::sqrt(2.25) * C8327 +
               std::sqrt(9.) * C8334;
    gx[183] += std::sqrt(27.) * C8344 -
               (std::sqrt(6.75) * C8092 + std::sqrt(6.75) * C7840);
    gy[183] += std::sqrt(27.) * C8346 -
               (std::sqrt(6.75) * C8094 + std::sqrt(6.75) * C7842);
    gz[183] += std::sqrt(27.) * C8348 -
               (std::sqrt(6.75) * C8096 + std::sqrt(6.75) * C7844);
    gx[184] += std::sqrt(1.6875) * C7819 - std::sqrt(1.6875) * C7812 -
               std::sqrt(1.6875) * C8064 + std::sqrt(1.6875) * C8071 +
               std::sqrt(6.75) * C8316 - std::sqrt(6.75) * C8323;
    gy[184] += std::sqrt(1.6875) * C7821 - std::sqrt(1.6875) * C7814 -
               std::sqrt(1.6875) * C8066 + std::sqrt(1.6875) * C8073 +
               std::sqrt(6.75) * C8318 - std::sqrt(6.75) * C8325;
    gz[184] += std::sqrt(1.6875) * C7823 - std::sqrt(1.6875) * C7816 -
               std::sqrt(1.6875) * C8068 + std::sqrt(1.6875) * C8075 +
               std::sqrt(6.75) * C8320 - std::sqrt(6.75) * C8327;
    gx[185] += std::sqrt(0.5625) * C7623 + std::sqrt(0.5625) * C7665 -
               std::sqrt(2.25) * C7707 + std::sqrt(0.5625) * C7875 +
               std::sqrt(0.5625) * C7917 - std::sqrt(2.25) * C7959 -
               std::sqrt(2.25) * C8127 - std::sqrt(2.25) * C8169 +
               std::sqrt(9.) * C8211;
    gy[185] += std::sqrt(0.5625) * C7625 + std::sqrt(0.5625) * C7667 -
               std::sqrt(2.25) * C7709 + std::sqrt(0.5625) * C7877 +
               std::sqrt(0.5625) * C7919 - std::sqrt(2.25) * C7961 -
               std::sqrt(2.25) * C8129 - std::sqrt(2.25) * C8171 +
               std::sqrt(9.) * C8213;
    gz[185] += std::sqrt(0.5625) * C7627 + std::sqrt(0.5625) * C7669 -
               std::sqrt(2.25) * C7711 + std::sqrt(0.5625) * C7879 +
               std::sqrt(0.5625) * C7921 - std::sqrt(2.25) * C7963 -
               std::sqrt(2.25) * C8131 - std::sqrt(2.25) * C8173 +
               std::sqrt(9.) * C8215;
    gx[186] += std::sqrt(0.5625) * C7637 + std::sqrt(0.5625) * C7679 -
               std::sqrt(2.25) * C7721 + std::sqrt(0.5625) * C7889 +
               std::sqrt(0.5625) * C7931 - std::sqrt(2.25) * C7973 -
               std::sqrt(2.25) * C8141 - std::sqrt(2.25) * C8183 +
               std::sqrt(9.) * C8225;
    gy[186] += std::sqrt(0.5625) * C7639 + std::sqrt(0.5625) * C7681 -
               std::sqrt(2.25) * C7723 + std::sqrt(0.5625) * C7891 +
               std::sqrt(0.5625) * C7933 - std::sqrt(2.25) * C7975 -
               std::sqrt(2.25) * C8143 - std::sqrt(2.25) * C8185 +
               std::sqrt(9.) * C8227;
    gz[186] += std::sqrt(0.5625) * C7641 + std::sqrt(0.5625) * C7683 -
               std::sqrt(2.25) * C7725 + std::sqrt(0.5625) * C7893 +
               std::sqrt(0.5625) * C7935 - std::sqrt(2.25) * C7977 -
               std::sqrt(2.25) * C8145 - std::sqrt(2.25) * C8187 +
               std::sqrt(9.) * C8229;
    gx[187] += std::sqrt(0.1875) * C7616 -
               (std::sqrt(0.046875) * C7609 + std::sqrt(0.046875) * C7602) -
               std::sqrt(0.046875) * C7644 - std::sqrt(0.046875) * C7651 +
               std::sqrt(0.1875) * C7658 + std::sqrt(0.1875) * C7686 +
               std::sqrt(0.1875) * C7693 - std::sqrt(0.75) * C7700 -
               std::sqrt(0.046875) * C7854 - std::sqrt(0.046875) * C7861 +
               std::sqrt(0.1875) * C7868 - std::sqrt(0.046875) * C7896 -
               std::sqrt(0.046875) * C7903 + std::sqrt(0.1875) * C7910 +
               std::sqrt(0.1875) * C7938 + std::sqrt(0.1875) * C7945 -
               std::sqrt(0.75) * C7952 + std::sqrt(0.1875) * C8106 +
               std::sqrt(0.1875) * C8113 - std::sqrt(0.75) * C8120 +
               std::sqrt(0.1875) * C8148 + std::sqrt(0.1875) * C8155 -
               std::sqrt(0.75) * C8162 - std::sqrt(0.75) * C8190 -
               std::sqrt(0.75) * C8197 + std::sqrt(3.0) * C8204;
    gy[187] += std::sqrt(0.1875) * C7618 -
               (std::sqrt(0.046875) * C7611 + std::sqrt(0.046875) * C7604) -
               std::sqrt(0.046875) * C7646 - std::sqrt(0.046875) * C7653 +
               std::sqrt(0.1875) * C7660 + std::sqrt(0.1875) * C7688 +
               std::sqrt(0.1875) * C7695 - std::sqrt(0.75) * C7702 -
               std::sqrt(0.046875) * C7856 - std::sqrt(0.046875) * C7863 +
               std::sqrt(0.1875) * C7870 - std::sqrt(0.046875) * C7898 -
               std::sqrt(0.046875) * C7905 + std::sqrt(0.1875) * C7912 +
               std::sqrt(0.1875) * C7940 + std::sqrt(0.1875) * C7947 -
               std::sqrt(0.75) * C7954 + std::sqrt(0.1875) * C8108 +
               std::sqrt(0.1875) * C8115 - std::sqrt(0.75) * C8122 +
               std::sqrt(0.1875) * C8150 + std::sqrt(0.1875) * C8157 -
               std::sqrt(0.75) * C8164 - std::sqrt(0.75) * C8192 -
               std::sqrt(0.75) * C8199 + std::sqrt(3.0) * C8206;
    gz[187] += std::sqrt(0.1875) * C7620 -
               (std::sqrt(0.046875) * C7613 + std::sqrt(0.046875) * C7606) -
               std::sqrt(0.046875) * C7648 - std::sqrt(0.046875) * C7655 +
               std::sqrt(0.1875) * C7662 + std::sqrt(0.1875) * C7690 +
               std::sqrt(0.1875) * C7697 - std::sqrt(0.75) * C7704 -
               std::sqrt(0.046875) * C7858 - std::sqrt(0.046875) * C7865 +
               std::sqrt(0.1875) * C7872 - std::sqrt(0.046875) * C7900 -
               std::sqrt(0.046875) * C7907 + std::sqrt(0.1875) * C7914 +
               std::sqrt(0.1875) * C7942 + std::sqrt(0.1875) * C7949 -
               std::sqrt(0.75) * C7956 + std::sqrt(0.1875) * C8110 +
               std::sqrt(0.1875) * C8117 - std::sqrt(0.75) * C8124 +
               std::sqrt(0.1875) * C8152 + std::sqrt(0.1875) * C8159 -
               std::sqrt(0.75) * C8166 - std::sqrt(0.75) * C8194 -
               std::sqrt(0.75) * C8201 + std::sqrt(3.0) * C8208;
    gx[188] += std::sqrt(0.5625) * C7630 + std::sqrt(0.5625) * C7672 -
               std::sqrt(2.25) * C7714 + std::sqrt(0.5625) * C7882 +
               std::sqrt(0.5625) * C7924 - std::sqrt(2.25) * C7966 -
               std::sqrt(2.25) * C8134 - std::sqrt(2.25) * C8176 +
               std::sqrt(9.) * C8218;
    gy[188] += std::sqrt(0.5625) * C7632 + std::sqrt(0.5625) * C7674 -
               std::sqrt(2.25) * C7716 + std::sqrt(0.5625) * C7884 +
               std::sqrt(0.5625) * C7926 - std::sqrt(2.25) * C7968 -
               std::sqrt(2.25) * C8136 - std::sqrt(2.25) * C8178 +
               std::sqrt(9.) * C8220;
    gz[188] += std::sqrt(0.5625) * C7634 + std::sqrt(0.5625) * C7676 -
               std::sqrt(2.25) * C7718 + std::sqrt(0.5625) * C7886 +
               std::sqrt(0.5625) * C7928 - std::sqrt(2.25) * C7970 -
               std::sqrt(2.25) * C8138 - std::sqrt(2.25) * C8180 +
               std::sqrt(9.) * C8222;
    gx[189] += std::sqrt(0.140625) * C7602 - std::sqrt(0.140625) * C7609 +
               std::sqrt(0.140625) * C7644 - std::sqrt(0.140625) * C7651 -
               std::sqrt(0.5625) * C7686 + std::sqrt(0.5625) * C7693 +
               std::sqrt(0.140625) * C7854 - std::sqrt(0.140625) * C7861 +
               std::sqrt(0.140625) * C7896 - std::sqrt(0.140625) * C7903 -
               std::sqrt(0.5625) * C7938 + std::sqrt(0.5625) * C7945 -
               std::sqrt(0.5625) * C8106 + std::sqrt(0.5625) * C8113 -
               std::sqrt(0.5625) * C8148 + std::sqrt(0.5625) * C8155 +
               std::sqrt(2.25) * C8190 - std::sqrt(2.25) * C8197;
    gy[189] += std::sqrt(0.140625) * C7604 - std::sqrt(0.140625) * C7611 +
               std::sqrt(0.140625) * C7646 - std::sqrt(0.140625) * C7653 -
               std::sqrt(0.5625) * C7688 + std::sqrt(0.5625) * C7695 +
               std::sqrt(0.140625) * C7856 - std::sqrt(0.140625) * C7863 +
               std::sqrt(0.140625) * C7898 - std::sqrt(0.140625) * C7905 -
               std::sqrt(0.5625) * C7940 + std::sqrt(0.5625) * C7947 -
               std::sqrt(0.5625) * C8108 + std::sqrt(0.5625) * C8115 -
               std::sqrt(0.5625) * C8150 + std::sqrt(0.5625) * C8157 +
               std::sqrt(2.25) * C8192 - std::sqrt(2.25) * C8199;
    gz[189] += std::sqrt(0.140625) * C7606 - std::sqrt(0.140625) * C7613 +
               std::sqrt(0.140625) * C7648 - std::sqrt(0.140625) * C7655 -
               std::sqrt(0.5625) * C7690 + std::sqrt(0.5625) * C7697 +
               std::sqrt(0.140625) * C7858 - std::sqrt(0.140625) * C7865 +
               std::sqrt(0.140625) * C7900 - std::sqrt(0.140625) * C7907 -
               std::sqrt(0.5625) * C7942 + std::sqrt(0.5625) * C7949 -
               std::sqrt(0.5625) * C8110 + std::sqrt(0.5625) * C8117 -
               std::sqrt(0.5625) * C8152 + std::sqrt(0.5625) * C8159 +
               std::sqrt(2.25) * C8194 - std::sqrt(2.25) * C8201;
    gx[190] += std::sqrt(27.) * C8295 -
               (std::sqrt(6.75) * C8043 + std::sqrt(6.75) * C7791);
    gy[190] += std::sqrt(27.) * C8297 -
               (std::sqrt(6.75) * C8045 + std::sqrt(6.75) * C7793);
    gz[190] += std::sqrt(27.) * C8299 -
               (std::sqrt(6.75) * C8047 + std::sqrt(6.75) * C7795);
    gx[191] += std::sqrt(27.) * C8309 -
               (std::sqrt(6.75) * C8057 + std::sqrt(6.75) * C7805);
    gy[191] += std::sqrt(27.) * C8311 -
               (std::sqrt(6.75) * C8059 + std::sqrt(6.75) * C7807);
    gz[191] += std::sqrt(27.) * C8313 -
               (std::sqrt(6.75) * C8061 + std::sqrt(6.75) * C7809);
    gx[192] += std::sqrt(0.5625) * C7770 + std::sqrt(0.5625) * C7777 -
               std::sqrt(2.25) * C7784 + std::sqrt(0.5625) * C8022 +
               std::sqrt(0.5625) * C8029 - std::sqrt(2.25) * C8036 -
               std::sqrt(2.25) * C8274 - std::sqrt(2.25) * C8281 +
               std::sqrt(9.) * C8288;
    gy[192] += std::sqrt(0.5625) * C7772 + std::sqrt(0.5625) * C7779 -
               std::sqrt(2.25) * C7786 + std::sqrt(0.5625) * C8024 +
               std::sqrt(0.5625) * C8031 - std::sqrt(2.25) * C8038 -
               std::sqrt(2.25) * C8276 - std::sqrt(2.25) * C8283 +
               std::sqrt(9.) * C8290;
    gz[192] += std::sqrt(0.5625) * C7774 + std::sqrt(0.5625) * C7781 -
               std::sqrt(2.25) * C7788 + std::sqrt(0.5625) * C8026 +
               std::sqrt(0.5625) * C8033 - std::sqrt(2.25) * C8040 -
               std::sqrt(2.25) * C8278 - std::sqrt(2.25) * C8285 +
               std::sqrt(9.) * C8292;
    gx[193] += std::sqrt(27.) * C8302 -
               (std::sqrt(6.75) * C8050 + std::sqrt(6.75) * C7798);
    gy[193] += std::sqrt(27.) * C8304 -
               (std::sqrt(6.75) * C8052 + std::sqrt(6.75) * C7800);
    gz[193] += std::sqrt(27.) * C8306 -
               (std::sqrt(6.75) * C8054 + std::sqrt(6.75) * C7802);
    gx[194] += std::sqrt(1.6875) * C7777 - std::sqrt(1.6875) * C7770 -
               std::sqrt(1.6875) * C8022 + std::sqrt(1.6875) * C8029 +
               std::sqrt(6.75) * C8274 - std::sqrt(6.75) * C8281;
    gy[194] += std::sqrt(1.6875) * C7779 - std::sqrt(1.6875) * C7772 -
               std::sqrt(1.6875) * C8024 + std::sqrt(1.6875) * C8031 +
               std::sqrt(6.75) * C8276 - std::sqrt(6.75) * C8283;
    gz[194] += std::sqrt(1.6875) * C7781 - std::sqrt(1.6875) * C7774 -
               std::sqrt(1.6875) * C8026 + std::sqrt(1.6875) * C8033 +
               std::sqrt(6.75) * C8278 - std::sqrt(6.75) * C8285;
    gx[195] += std::sqrt(1.6875) * C7665 - std::sqrt(1.6875) * C7623 -
               std::sqrt(1.6875) * C7875 + std::sqrt(1.6875) * C7917 +
               std::sqrt(6.75) * C8127 - std::sqrt(6.75) * C8169;
    gy[195] += std::sqrt(1.6875) * C7667 - std::sqrt(1.6875) * C7625 -
               std::sqrt(1.6875) * C7877 + std::sqrt(1.6875) * C7919 +
               std::sqrt(6.75) * C8129 - std::sqrt(6.75) * C8171;
    gz[195] += std::sqrt(1.6875) * C7669 - std::sqrt(1.6875) * C7627 -
               std::sqrt(1.6875) * C7879 + std::sqrt(1.6875) * C7921 +
               std::sqrt(6.75) * C8131 - std::sqrt(6.75) * C8173;
    gx[196] += std::sqrt(1.6875) * C7679 - std::sqrt(1.6875) * C7637 -
               std::sqrt(1.6875) * C7889 + std::sqrt(1.6875) * C7931 +
               std::sqrt(6.75) * C8141 - std::sqrt(6.75) * C8183;
    gy[196] += std::sqrt(1.6875) * C7681 - std::sqrt(1.6875) * C7639 -
               std::sqrt(1.6875) * C7891 + std::sqrt(1.6875) * C7933 +
               std::sqrt(6.75) * C8143 - std::sqrt(6.75) * C8185;
    gz[196] += std::sqrt(1.6875) * C7683 - std::sqrt(1.6875) * C7641 -
               std::sqrt(1.6875) * C7893 + std::sqrt(1.6875) * C7935 +
               std::sqrt(6.75) * C8145 - std::sqrt(6.75) * C8187;
    gx[197] += std::sqrt(0.140625) * C7602 + std::sqrt(0.140625) * C7609 -
               std::sqrt(0.5625) * C7616 - std::sqrt(0.140625) * C7644 -
               std::sqrt(0.140625) * C7651 + std::sqrt(0.5625) * C7658 +
               std::sqrt(0.140625) * C7854 + std::sqrt(0.140625) * C7861 -
               std::sqrt(0.5625) * C7868 - std::sqrt(0.140625) * C7896 -
               std::sqrt(0.140625) * C7903 + std::sqrt(0.5625) * C7910 -
               std::sqrt(0.5625) * C8106 - std::sqrt(0.5625) * C8113 +
               std::sqrt(2.25) * C8120 + std::sqrt(0.5625) * C8148 +
               std::sqrt(0.5625) * C8155 - std::sqrt(2.25) * C8162;
    gy[197] += std::sqrt(0.140625) * C7604 + std::sqrt(0.140625) * C7611 -
               std::sqrt(0.5625) * C7618 - std::sqrt(0.140625) * C7646 -
               std::sqrt(0.140625) * C7653 + std::sqrt(0.5625) * C7660 +
               std::sqrt(0.140625) * C7856 + std::sqrt(0.140625) * C7863 -
               std::sqrt(0.5625) * C7870 - std::sqrt(0.140625) * C7898 -
               std::sqrt(0.140625) * C7905 + std::sqrt(0.5625) * C7912 -
               std::sqrt(0.5625) * C8108 - std::sqrt(0.5625) * C8115 +
               std::sqrt(2.25) * C8122 + std::sqrt(0.5625) * C8150 +
               std::sqrt(0.5625) * C8157 - std::sqrt(2.25) * C8164;
    gz[197] += std::sqrt(0.140625) * C7606 + std::sqrt(0.140625) * C7613 -
               std::sqrt(0.5625) * C7620 - std::sqrt(0.140625) * C7648 -
               std::sqrt(0.140625) * C7655 + std::sqrt(0.5625) * C7662 +
               std::sqrt(0.140625) * C7858 + std::sqrt(0.140625) * C7865 -
               std::sqrt(0.5625) * C7872 - std::sqrt(0.140625) * C7900 -
               std::sqrt(0.140625) * C7907 + std::sqrt(0.5625) * C7914 -
               std::sqrt(0.5625) * C8110 - std::sqrt(0.5625) * C8117 +
               std::sqrt(2.25) * C8124 + std::sqrt(0.5625) * C8152 +
               std::sqrt(0.5625) * C8159 - std::sqrt(2.25) * C8166;
    gx[198] += std::sqrt(1.6875) * C7672 - std::sqrt(1.6875) * C7630 -
               std::sqrt(1.6875) * C7882 + std::sqrt(1.6875) * C7924 +
               std::sqrt(6.75) * C8134 - std::sqrt(6.75) * C8176;
    gy[198] += std::sqrt(1.6875) * C7674 - std::sqrt(1.6875) * C7632 -
               std::sqrt(1.6875) * C7884 + std::sqrt(1.6875) * C7926 +
               std::sqrt(6.75) * C8136 - std::sqrt(6.75) * C8178;
    gz[198] += std::sqrt(1.6875) * C7676 - std::sqrt(1.6875) * C7634 -
               std::sqrt(1.6875) * C7886 + std::sqrt(1.6875) * C7928 +
               std::sqrt(6.75) * C8138 - std::sqrt(6.75) * C8180;
    gx[199] += std::sqrt(0.421875) * C7609 - std::sqrt(0.421875) * C7602 +
               std::sqrt(0.421875) * C7644 - std::sqrt(0.421875) * C7651 -
               std::sqrt(0.421875) * C7854 + std::sqrt(0.421875) * C7861 +
               std::sqrt(0.421875) * C7896 - std::sqrt(0.421875) * C7903 +
               std::sqrt(1.6875) * C8106 - std::sqrt(1.6875) * C8113 -
               std::sqrt(1.6875) * C8148 + std::sqrt(1.6875) * C8155;
    gy[199] += std::sqrt(0.421875) * C7611 - std::sqrt(0.421875) * C7604 +
               std::sqrt(0.421875) * C7646 - std::sqrt(0.421875) * C7653 -
               std::sqrt(0.421875) * C7856 + std::sqrt(0.421875) * C7863 +
               std::sqrt(0.421875) * C7898 - std::sqrt(0.421875) * C7905 +
               std::sqrt(1.6875) * C8108 - std::sqrt(1.6875) * C8115 -
               std::sqrt(1.6875) * C8150 + std::sqrt(1.6875) * C8157;
    gz[199] += std::sqrt(0.421875) * C7613 - std::sqrt(0.421875) * C7606 +
               std::sqrt(0.421875) * C7648 - std::sqrt(0.421875) * C7655 -
               std::sqrt(0.421875) * C7858 + std::sqrt(0.421875) * C7865 +
               std::sqrt(0.421875) * C7900 - std::sqrt(0.421875) * C7907 +
               std::sqrt(1.6875) * C8110 - std::sqrt(1.6875) * C8117 -
               std::sqrt(1.6875) * C8152 + std::sqrt(1.6875) * C8159;
    gx[200] += std::sqrt(81.) * C8757;
    gy[200] += std::sqrt(81.) * C8759;
    gz[200] += std::sqrt(81.) * C8761;
    gx[201] += std::sqrt(81.) * C8771;
    gy[201] += std::sqrt(81.) * C8773;
    gz[201] += std::sqrt(81.) * C8775;
    gx[202] += std::sqrt(27.) * C8750 -
               (std::sqrt(6.75) * C8743 + std::sqrt(6.75) * C8736);
    gy[202] += std::sqrt(27.) * C8752 -
               (std::sqrt(6.75) * C8745 + std::sqrt(6.75) * C8738);
    gz[202] += std::sqrt(27.) * C8754 -
               (std::sqrt(6.75) * C8747 + std::sqrt(6.75) * C8740);
    gx[203] += std::sqrt(81.) * C8764;
    gy[203] += std::sqrt(81.) * C8766;
    gz[203] += std::sqrt(81.) * C8768;
    gx[204] += std::sqrt(20.25) * C8736 - std::sqrt(20.25) * C8743;
    gy[204] += std::sqrt(20.25) * C8738 - std::sqrt(20.25) * C8745;
    gz[204] += std::sqrt(20.25) * C8740 - std::sqrt(20.25) * C8747;
    gx[205] += std::sqrt(81.) * C8841;
    gy[205] += std::sqrt(81.) * C8843;
    gz[205] += std::sqrt(81.) * C8845;
    gx[206] += std::sqrt(81.) * C8855;
    gy[206] += std::sqrt(81.) * C8857;
    gz[206] += std::sqrt(81.) * C8859;
    gx[207] += std::sqrt(27.) * C8834 -
               (std::sqrt(6.75) * C8827 + std::sqrt(6.75) * C8820);
    gy[207] += std::sqrt(27.) * C8836 -
               (std::sqrt(6.75) * C8829 + std::sqrt(6.75) * C8822);
    gz[207] += std::sqrt(27.) * C8838 -
               (std::sqrt(6.75) * C8831 + std::sqrt(6.75) * C8824);
    gx[208] += std::sqrt(81.) * C8848;
    gy[208] += std::sqrt(81.) * C8850;
    gz[208] += std::sqrt(81.) * C8852;
    gx[209] += std::sqrt(20.25) * C8820 - std::sqrt(20.25) * C8827;
    gy[209] += std::sqrt(20.25) * C8822 - std::sqrt(20.25) * C8829;
    gz[209] += std::sqrt(20.25) * C8824 - std::sqrt(20.25) * C8831;
    gx[210] += std::sqrt(27.) * C8715 -
               (std::sqrt(6.75) * C8673 + std::sqrt(6.75) * C8631);
    gy[210] += std::sqrt(27.) * C8717 -
               (std::sqrt(6.75) * C8675 + std::sqrt(6.75) * C8633);
    gz[210] += std::sqrt(27.) * C8719 -
               (std::sqrt(6.75) * C8677 + std::sqrt(6.75) * C8635);
    gx[211] += std::sqrt(27.) * C8729 -
               (std::sqrt(6.75) * C8687 + std::sqrt(6.75) * C8645);
    gy[211] += std::sqrt(27.) * C8731 -
               (std::sqrt(6.75) * C8689 + std::sqrt(6.75) * C8647);
    gz[211] += std::sqrt(27.) * C8733 -
               (std::sqrt(6.75) * C8691 + std::sqrt(6.75) * C8649);
    gx[212] += std::sqrt(0.5625) * C8610 + std::sqrt(0.5625) * C8617 -
               std::sqrt(2.25) * C8624 + std::sqrt(0.5625) * C8652 +
               std::sqrt(0.5625) * C8659 - std::sqrt(2.25) * C8666 -
               std::sqrt(2.25) * C8694 - std::sqrt(2.25) * C8701 +
               std::sqrt(9.) * C8708;
    gy[212] += std::sqrt(0.5625) * C8612 + std::sqrt(0.5625) * C8619 -
               std::sqrt(2.25) * C8626 + std::sqrt(0.5625) * C8654 +
               std::sqrt(0.5625) * C8661 - std::sqrt(2.25) * C8668 -
               std::sqrt(2.25) * C8696 - std::sqrt(2.25) * C8703 +
               std::sqrt(9.) * C8710;
    gz[212] += std::sqrt(0.5625) * C8614 + std::sqrt(0.5625) * C8621 -
               std::sqrt(2.25) * C8628 + std::sqrt(0.5625) * C8656 +
               std::sqrt(0.5625) * C8663 - std::sqrt(2.25) * C8670 -
               std::sqrt(2.25) * C8698 - std::sqrt(2.25) * C8705 +
               std::sqrt(9.) * C8712;
    gx[213] += std::sqrt(27.) * C8722 -
               (std::sqrt(6.75) * C8680 + std::sqrt(6.75) * C8638);
    gy[213] += std::sqrt(27.) * C8724 -
               (std::sqrt(6.75) * C8682 + std::sqrt(6.75) * C8640);
    gz[213] += std::sqrt(27.) * C8726 -
               (std::sqrt(6.75) * C8684 + std::sqrt(6.75) * C8642);
    gx[214] += std::sqrt(1.6875) * C8617 - std::sqrt(1.6875) * C8610 -
               std::sqrt(1.6875) * C8652 + std::sqrt(1.6875) * C8659 +
               std::sqrt(6.75) * C8694 - std::sqrt(6.75) * C8701;
    gy[214] += std::sqrt(1.6875) * C8619 - std::sqrt(1.6875) * C8612 -
               std::sqrt(1.6875) * C8654 + std::sqrt(1.6875) * C8661 +
               std::sqrt(6.75) * C8696 - std::sqrt(6.75) * C8703;
    gz[214] += std::sqrt(1.6875) * C8621 - std::sqrt(1.6875) * C8614 -
               std::sqrt(1.6875) * C8656 + std::sqrt(1.6875) * C8663 +
               std::sqrt(6.75) * C8698 - std::sqrt(6.75) * C8705;
    gx[215] += std::sqrt(81.) * C8799;
    gy[215] += std::sqrt(81.) * C8801;
    gz[215] += std::sqrt(81.) * C8803;
    gx[216] += std::sqrt(81.) * C8813;
    gy[216] += std::sqrt(81.) * C8815;
    gz[216] += std::sqrt(81.) * C8817;
    gx[217] += std::sqrt(27.) * C8792 -
               (std::sqrt(6.75) * C8785 + std::sqrt(6.75) * C8778);
    gy[217] += std::sqrt(27.) * C8794 -
               (std::sqrt(6.75) * C8787 + std::sqrt(6.75) * C8780);
    gz[217] += std::sqrt(27.) * C8796 -
               (std::sqrt(6.75) * C8789 + std::sqrt(6.75) * C8782);
    gx[218] += std::sqrt(81.) * C8806;
    gy[218] += std::sqrt(81.) * C8808;
    gz[218] += std::sqrt(81.) * C8810;
    gx[219] += std::sqrt(20.25) * C8778 - std::sqrt(20.25) * C8785;
    gy[219] += std::sqrt(20.25) * C8780 - std::sqrt(20.25) * C8787;
    gz[219] += std::sqrt(20.25) * C8782 - std::sqrt(20.25) * C8789;
    gx[220] += std::sqrt(20.25) * C8631 - std::sqrt(20.25) * C8673;
    gy[220] += std::sqrt(20.25) * C8633 - std::sqrt(20.25) * C8675;
    gz[220] += std::sqrt(20.25) * C8635 - std::sqrt(20.25) * C8677;
    gx[221] += std::sqrt(20.25) * C8645 - std::sqrt(20.25) * C8687;
    gy[221] += std::sqrt(20.25) * C8647 - std::sqrt(20.25) * C8689;
    gz[221] += std::sqrt(20.25) * C8649 - std::sqrt(20.25) * C8691;
    gx[222] += std::sqrt(6.75) * C8624 -
               (std::sqrt(1.6875) * C8617 + std::sqrt(1.6875) * C8610) +
               std::sqrt(1.6875) * C8652 + std::sqrt(1.6875) * C8659 -
               std::sqrt(6.75) * C8666;
    gy[222] += std::sqrt(6.75) * C8626 -
               (std::sqrt(1.6875) * C8619 + std::sqrt(1.6875) * C8612) +
               std::sqrt(1.6875) * C8654 + std::sqrt(1.6875) * C8661 -
               std::sqrt(6.75) * C8668;
    gz[222] += std::sqrt(6.75) * C8628 -
               (std::sqrt(1.6875) * C8621 + std::sqrt(1.6875) * C8614) +
               std::sqrt(1.6875) * C8656 + std::sqrt(1.6875) * C8663 -
               std::sqrt(6.75) * C8670;
    gx[223] += std::sqrt(20.25) * C8638 - std::sqrt(20.25) * C8680;
    gy[223] += std::sqrt(20.25) * C8640 - std::sqrt(20.25) * C8682;
    gz[223] += std::sqrt(20.25) * C8642 - std::sqrt(20.25) * C8684;
    gx[224] += std::sqrt(5.0625) * C8610 - std::sqrt(5.0625) * C8617 -
               std::sqrt(5.0625) * C8652 + std::sqrt(5.0625) * C8659;
    gy[224] += std::sqrt(5.0625) * C8612 - std::sqrt(5.0625) * C8619 -
               std::sqrt(5.0625) * C8654 + std::sqrt(5.0625) * C8661;
    gz[224] += std::sqrt(5.0625) * C8614 - std::sqrt(5.0625) * C8621 -
               std::sqrt(5.0625) * C8656 + std::sqrt(5.0625) * C8663;
    gx[225] += std::sqrt(20.25) * C7749 - std::sqrt(20.25) * C8001;
    gy[225] += std::sqrt(20.25) * C7751 - std::sqrt(20.25) * C8003;
    gz[225] += std::sqrt(20.25) * C7753 - std::sqrt(20.25) * C8005;
    gx[226] += std::sqrt(20.25) * C7763 - std::sqrt(20.25) * C8015;
    gy[226] += std::sqrt(20.25) * C7765 - std::sqrt(20.25) * C8017;
    gz[226] += std::sqrt(20.25) * C7767 - std::sqrt(20.25) * C8019;
    gx[227] += std::sqrt(6.75) * C7742 -
               (std::sqrt(1.6875) * C7735 + std::sqrt(1.6875) * C7728) +
               std::sqrt(1.6875) * C7980 + std::sqrt(1.6875) * C7987 -
               std::sqrt(6.75) * C7994;
    gy[227] += std::sqrt(6.75) * C7744 -
               (std::sqrt(1.6875) * C7737 + std::sqrt(1.6875) * C7730) +
               std::sqrt(1.6875) * C7982 + std::sqrt(1.6875) * C7989 -
               std::sqrt(6.75) * C7996;
    gz[227] += std::sqrt(6.75) * C7746 -
               (std::sqrt(1.6875) * C7739 + std::sqrt(1.6875) * C7732) +
               std::sqrt(1.6875) * C7984 + std::sqrt(1.6875) * C7991 -
               std::sqrt(6.75) * C7998;
    gx[228] += std::sqrt(20.25) * C7756 - std::sqrt(20.25) * C8008;
    gy[228] += std::sqrt(20.25) * C7758 - std::sqrt(20.25) * C8010;
    gz[228] += std::sqrt(20.25) * C7760 - std::sqrt(20.25) * C8012;
    gx[229] += std::sqrt(5.0625) * C7728 - std::sqrt(5.0625) * C7735 -
               std::sqrt(5.0625) * C7980 + std::sqrt(5.0625) * C7987;
    gy[229] += std::sqrt(5.0625) * C7730 - std::sqrt(5.0625) * C7737 -
               std::sqrt(5.0625) * C7982 + std::sqrt(5.0625) * C7989;
    gz[229] += std::sqrt(5.0625) * C7732 - std::sqrt(5.0625) * C7739 -
               std::sqrt(5.0625) * C7984 + std::sqrt(5.0625) * C7991;
    gx[230] += std::sqrt(20.25) * C7833 - std::sqrt(20.25) * C8085;
    gy[230] += std::sqrt(20.25) * C7835 - std::sqrt(20.25) * C8087;
    gz[230] += std::sqrt(20.25) * C7837 - std::sqrt(20.25) * C8089;
    gx[231] += std::sqrt(20.25) * C7847 - std::sqrt(20.25) * C8099;
    gy[231] += std::sqrt(20.25) * C7849 - std::sqrt(20.25) * C8101;
    gz[231] += std::sqrt(20.25) * C7851 - std::sqrt(20.25) * C8103;
    gx[232] += std::sqrt(6.75) * C7826 -
               (std::sqrt(1.6875) * C7819 + std::sqrt(1.6875) * C7812) +
               std::sqrt(1.6875) * C8064 + std::sqrt(1.6875) * C8071 -
               std::sqrt(6.75) * C8078;
    gy[232] += std::sqrt(6.75) * C7828 -
               (std::sqrt(1.6875) * C7821 + std::sqrt(1.6875) * C7814) +
               std::sqrt(1.6875) * C8066 + std::sqrt(1.6875) * C8073 -
               std::sqrt(6.75) * C8080;
    gz[232] += std::sqrt(6.75) * C7830 -
               (std::sqrt(1.6875) * C7823 + std::sqrt(1.6875) * C7816) +
               std::sqrt(1.6875) * C8068 + std::sqrt(1.6875) * C8075 -
               std::sqrt(6.75) * C8082;
    gx[233] += std::sqrt(20.25) * C7840 - std::sqrt(20.25) * C8092;
    gy[233] += std::sqrt(20.25) * C7842 - std::sqrt(20.25) * C8094;
    gz[233] += std::sqrt(20.25) * C7844 - std::sqrt(20.25) * C8096;
    gx[234] += std::sqrt(5.0625) * C7812 - std::sqrt(5.0625) * C7819 -
               std::sqrt(5.0625) * C8064 + std::sqrt(5.0625) * C8071;
    gy[234] += std::sqrt(5.0625) * C7814 - std::sqrt(5.0625) * C7821 -
               std::sqrt(5.0625) * C8066 + std::sqrt(5.0625) * C8073;
    gz[234] += std::sqrt(5.0625) * C7816 - std::sqrt(5.0625) * C7823 -
               std::sqrt(5.0625) * C8068 + std::sqrt(5.0625) * C8075;
    gx[235] += std::sqrt(6.75) * C7707 -
               (std::sqrt(1.6875) * C7665 + std::sqrt(1.6875) * C7623) +
               std::sqrt(1.6875) * C7875 + std::sqrt(1.6875) * C7917 -
               std::sqrt(6.75) * C7959;
    gy[235] += std::sqrt(6.75) * C7709 -
               (std::sqrt(1.6875) * C7667 + std::sqrt(1.6875) * C7625) +
               std::sqrt(1.6875) * C7877 + std::sqrt(1.6875) * C7919 -
               std::sqrt(6.75) * C7961;
    gz[235] += std::sqrt(6.75) * C7711 -
               (std::sqrt(1.6875) * C7669 + std::sqrt(1.6875) * C7627) +
               std::sqrt(1.6875) * C7879 + std::sqrt(1.6875) * C7921 -
               std::sqrt(6.75) * C7963;
    gx[236] += std::sqrt(6.75) * C7721 -
               (std::sqrt(1.6875) * C7679 + std::sqrt(1.6875) * C7637) +
               std::sqrt(1.6875) * C7889 + std::sqrt(1.6875) * C7931 -
               std::sqrt(6.75) * C7973;
    gy[236] += std::sqrt(6.75) * C7723 -
               (std::sqrt(1.6875) * C7681 + std::sqrt(1.6875) * C7639) +
               std::sqrt(1.6875) * C7891 + std::sqrt(1.6875) * C7933 -
               std::sqrt(6.75) * C7975;
    gz[236] += std::sqrt(6.75) * C7725 -
               (std::sqrt(1.6875) * C7683 + std::sqrt(1.6875) * C7641) +
               std::sqrt(1.6875) * C7893 + std::sqrt(1.6875) * C7935 -
               std::sqrt(6.75) * C7977;
    gx[237] += std::sqrt(0.140625) * C7602 + std::sqrt(0.140625) * C7609 -
               std::sqrt(0.5625) * C7616 + std::sqrt(0.140625) * C7644 +
               std::sqrt(0.140625) * C7651 - std::sqrt(0.5625) * C7658 -
               std::sqrt(0.5625) * C7686 - std::sqrt(0.5625) * C7693 +
               std::sqrt(2.25) * C7700 - std::sqrt(0.140625) * C7854 -
               std::sqrt(0.140625) * C7861 + std::sqrt(0.5625) * C7868 -
               std::sqrt(0.140625) * C7896 - std::sqrt(0.140625) * C7903 +
               std::sqrt(0.5625) * C7910 + std::sqrt(0.5625) * C7938 +
               std::sqrt(0.5625) * C7945 - std::sqrt(2.25) * C7952;
    gy[237] += std::sqrt(0.140625) * C7604 + std::sqrt(0.140625) * C7611 -
               std::sqrt(0.5625) * C7618 + std::sqrt(0.140625) * C7646 +
               std::sqrt(0.140625) * C7653 - std::sqrt(0.5625) * C7660 -
               std::sqrt(0.5625) * C7688 - std::sqrt(0.5625) * C7695 +
               std::sqrt(2.25) * C7702 - std::sqrt(0.140625) * C7856 -
               std::sqrt(0.140625) * C7863 + std::sqrt(0.5625) * C7870 -
               std::sqrt(0.140625) * C7898 - std::sqrt(0.140625) * C7905 +
               std::sqrt(0.5625) * C7912 + std::sqrt(0.5625) * C7940 +
               std::sqrt(0.5625) * C7947 - std::sqrt(2.25) * C7954;
    gz[237] += std::sqrt(0.140625) * C7606 + std::sqrt(0.140625) * C7613 -
               std::sqrt(0.5625) * C7620 + std::sqrt(0.140625) * C7648 +
               std::sqrt(0.140625) * C7655 - std::sqrt(0.5625) * C7662 -
               std::sqrt(0.5625) * C7690 - std::sqrt(0.5625) * C7697 +
               std::sqrt(2.25) * C7704 - std::sqrt(0.140625) * C7858 -
               std::sqrt(0.140625) * C7865 + std::sqrt(0.5625) * C7872 -
               std::sqrt(0.140625) * C7900 - std::sqrt(0.140625) * C7907 +
               std::sqrt(0.5625) * C7914 + std::sqrt(0.5625) * C7942 +
               std::sqrt(0.5625) * C7949 - std::sqrt(2.25) * C7956;
    gx[238] += std::sqrt(6.75) * C7714 -
               (std::sqrt(1.6875) * C7672 + std::sqrt(1.6875) * C7630) +
               std::sqrt(1.6875) * C7882 + std::sqrt(1.6875) * C7924 -
               std::sqrt(6.75) * C7966;
    gy[238] += std::sqrt(6.75) * C7716 -
               (std::sqrt(1.6875) * C7674 + std::sqrt(1.6875) * C7632) +
               std::sqrt(1.6875) * C7884 + std::sqrt(1.6875) * C7926 -
               std::sqrt(6.75) * C7968;
    gz[238] += std::sqrt(6.75) * C7718 -
               (std::sqrt(1.6875) * C7676 + std::sqrt(1.6875) * C7634) +
               std::sqrt(1.6875) * C7886 + std::sqrt(1.6875) * C7928 -
               std::sqrt(6.75) * C7970;
    gx[239] += std::sqrt(0.421875) * C7609 - std::sqrt(0.421875) * C7602 -
               std::sqrt(0.421875) * C7644 + std::sqrt(0.421875) * C7651 +
               std::sqrt(1.6875) * C7686 - std::sqrt(1.6875) * C7693 +
               std::sqrt(0.421875) * C7854 - std::sqrt(0.421875) * C7861 +
               std::sqrt(0.421875) * C7896 - std::sqrt(0.421875) * C7903 -
               std::sqrt(1.6875) * C7938 + std::sqrt(1.6875) * C7945;
    gy[239] += std::sqrt(0.421875) * C7611 - std::sqrt(0.421875) * C7604 -
               std::sqrt(0.421875) * C7646 + std::sqrt(0.421875) * C7653 +
               std::sqrt(1.6875) * C7688 - std::sqrt(1.6875) * C7695 +
               std::sqrt(0.421875) * C7856 - std::sqrt(0.421875) * C7863 +
               std::sqrt(0.421875) * C7898 - std::sqrt(0.421875) * C7905 -
               std::sqrt(1.6875) * C7940 + std::sqrt(1.6875) * C7947;
    gz[239] += std::sqrt(0.421875) * C7613 - std::sqrt(0.421875) * C7606 -
               std::sqrt(0.421875) * C7648 + std::sqrt(0.421875) * C7655 +
               std::sqrt(1.6875) * C7690 - std::sqrt(1.6875) * C7697 +
               std::sqrt(0.421875) * C7858 - std::sqrt(0.421875) * C7865 +
               std::sqrt(0.421875) * C7900 - std::sqrt(0.421875) * C7907 -
               std::sqrt(1.6875) * C7942 + std::sqrt(1.6875) * C7949;
    gx[240] += std::sqrt(20.25) * C7791 - std::sqrt(20.25) * C8043;
    gy[240] += std::sqrt(20.25) * C7793 - std::sqrt(20.25) * C8045;
    gz[240] += std::sqrt(20.25) * C7795 - std::sqrt(20.25) * C8047;
    gx[241] += std::sqrt(20.25) * C7805 - std::sqrt(20.25) * C8057;
    gy[241] += std::sqrt(20.25) * C7807 - std::sqrt(20.25) * C8059;
    gz[241] += std::sqrt(20.25) * C7809 - std::sqrt(20.25) * C8061;
    gx[242] += std::sqrt(6.75) * C7784 -
               (std::sqrt(1.6875) * C7777 + std::sqrt(1.6875) * C7770) +
               std::sqrt(1.6875) * C8022 + std::sqrt(1.6875) * C8029 -
               std::sqrt(6.75) * C8036;
    gy[242] += std::sqrt(6.75) * C7786 -
               (std::sqrt(1.6875) * C7779 + std::sqrt(1.6875) * C7772) +
               std::sqrt(1.6875) * C8024 + std::sqrt(1.6875) * C8031 -
               std::sqrt(6.75) * C8038;
    gz[242] += std::sqrt(6.75) * C7788 -
               (std::sqrt(1.6875) * C7781 + std::sqrt(1.6875) * C7774) +
               std::sqrt(1.6875) * C8026 + std::sqrt(1.6875) * C8033 -
               std::sqrt(6.75) * C8040;
    gx[243] += std::sqrt(20.25) * C7798 - std::sqrt(20.25) * C8050;
    gy[243] += std::sqrt(20.25) * C7800 - std::sqrt(20.25) * C8052;
    gz[243] += std::sqrt(20.25) * C7802 - std::sqrt(20.25) * C8054;
    gx[244] += std::sqrt(5.0625) * C7770 - std::sqrt(5.0625) * C7777 -
               std::sqrt(5.0625) * C8022 + std::sqrt(5.0625) * C8029;
    gy[244] += std::sqrt(5.0625) * C7772 - std::sqrt(5.0625) * C7779 -
               std::sqrt(5.0625) * C8024 + std::sqrt(5.0625) * C8031;
    gz[244] += std::sqrt(5.0625) * C7774 - std::sqrt(5.0625) * C7781 -
               std::sqrt(5.0625) * C8026 + std::sqrt(5.0625) * C8033;
    gx[245] += std::sqrt(5.0625) * C7623 - std::sqrt(5.0625) * C7665 -
               std::sqrt(5.0625) * C7875 + std::sqrt(5.0625) * C7917;
    gy[245] += std::sqrt(5.0625) * C7625 - std::sqrt(5.0625) * C7667 -
               std::sqrt(5.0625) * C7877 + std::sqrt(5.0625) * C7919;
    gz[245] += std::sqrt(5.0625) * C7627 - std::sqrt(5.0625) * C7669 -
               std::sqrt(5.0625) * C7879 + std::sqrt(5.0625) * C7921;
    gx[246] += std::sqrt(5.0625) * C7637 - std::sqrt(5.0625) * C7679 -
               std::sqrt(5.0625) * C7889 + std::sqrt(5.0625) * C7931;
    gy[246] += std::sqrt(5.0625) * C7639 - std::sqrt(5.0625) * C7681 -
               std::sqrt(5.0625) * C7891 + std::sqrt(5.0625) * C7933;
    gz[246] += std::sqrt(5.0625) * C7641 - std::sqrt(5.0625) * C7683 -
               std::sqrt(5.0625) * C7893 + std::sqrt(5.0625) * C7935;
    gx[247] += std::sqrt(1.6875) * C7616 -
               (std::sqrt(0.421875) * C7609 + std::sqrt(0.421875) * C7602) +
               std::sqrt(0.421875) * C7644 + std::sqrt(0.421875) * C7651 -
               std::sqrt(1.6875) * C7658 + std::sqrt(0.421875) * C7854 +
               std::sqrt(0.421875) * C7861 - std::sqrt(1.6875) * C7868 -
               std::sqrt(0.421875) * C7896 - std::sqrt(0.421875) * C7903 +
               std::sqrt(1.6875) * C7910;
    gy[247] += std::sqrt(1.6875) * C7618 -
               (std::sqrt(0.421875) * C7611 + std::sqrt(0.421875) * C7604) +
               std::sqrt(0.421875) * C7646 + std::sqrt(0.421875) * C7653 -
               std::sqrt(1.6875) * C7660 + std::sqrt(0.421875) * C7856 +
               std::sqrt(0.421875) * C7863 - std::sqrt(1.6875) * C7870 -
               std::sqrt(0.421875) * C7898 - std::sqrt(0.421875) * C7905 +
               std::sqrt(1.6875) * C7912;
    gz[247] += std::sqrt(1.6875) * C7620 -
               (std::sqrt(0.421875) * C7613 + std::sqrt(0.421875) * C7606) +
               std::sqrt(0.421875) * C7648 + std::sqrt(0.421875) * C7655 -
               std::sqrt(1.6875) * C7662 + std::sqrt(0.421875) * C7858 +
               std::sqrt(0.421875) * C7865 - std::sqrt(1.6875) * C7872 -
               std::sqrt(0.421875) * C7900 - std::sqrt(0.421875) * C7907 +
               std::sqrt(1.6875) * C7914;
    gx[248] += std::sqrt(5.0625) * C7630 - std::sqrt(5.0625) * C7672 -
               std::sqrt(5.0625) * C7882 + std::sqrt(5.0625) * C7924;
    gy[248] += std::sqrt(5.0625) * C7632 - std::sqrt(5.0625) * C7674 -
               std::sqrt(5.0625) * C7884 + std::sqrt(5.0625) * C7926;
    gz[248] += std::sqrt(5.0625) * C7634 - std::sqrt(5.0625) * C7676 -
               std::sqrt(5.0625) * C7886 + std::sqrt(5.0625) * C7928;
    gx[249] += std::sqrt(1.265625) * C7602 - std::sqrt(1.265625) * C7609 -
               std::sqrt(1.265625) * C7644 + std::sqrt(1.265625) * C7651 -
               std::sqrt(1.265625) * C7854 + std::sqrt(1.265625) * C7861 +
               std::sqrt(1.265625) * C7896 - std::sqrt(1.265625) * C7903;
    gy[249] += std::sqrt(1.265625) * C7604 - std::sqrt(1.265625) * C7611 -
               std::sqrt(1.265625) * C7646 + std::sqrt(1.265625) * C7653 -
               std::sqrt(1.265625) * C7856 + std::sqrt(1.265625) * C7863 +
               std::sqrt(1.265625) * C7898 - std::sqrt(1.265625) * C7905;
    gz[249] += std::sqrt(1.265625) * C7606 - std::sqrt(1.265625) * C7613 -
               std::sqrt(1.265625) * C7648 + std::sqrt(1.265625) * C7655 -
               std::sqrt(1.265625) * C7858 + std::sqrt(1.265625) * C7865 +
               std::sqrt(1.265625) * C7900 - std::sqrt(1.265625) * C7907;
    gx[250] += std::sqrt(27.) * C3969 -
               (std::sqrt(6.75) * C2457 + std::sqrt(6.75) * C945);
    gy[250] += std::sqrt(27.) * C3971 -
               (std::sqrt(6.75) * C2459 + std::sqrt(6.75) * C947);
    gz[250] += std::sqrt(27.) * C3973 -
               (std::sqrt(6.75) * C2461 + std::sqrt(6.75) * C949);
    gx[251] += std::sqrt(27.) * C3983 -
               (std::sqrt(6.75) * C2471 + std::sqrt(6.75) * C959);
    gy[251] += std::sqrt(27.) * C3985 -
               (std::sqrt(6.75) * C2473 + std::sqrt(6.75) * C961);
    gz[251] += std::sqrt(27.) * C3987 -
               (std::sqrt(6.75) * C2475 + std::sqrt(6.75) * C963);
    gx[252] += std::sqrt(0.5625) * C924 + std::sqrt(0.5625) * C931 -
               std::sqrt(2.25) * C938 + std::sqrt(0.5625) * C2436 +
               std::sqrt(0.5625) * C2443 - std::sqrt(2.25) * C2450 -
               std::sqrt(2.25) * C3948 - std::sqrt(2.25) * C3955 +
               std::sqrt(9.) * C3962;
    gy[252] += std::sqrt(0.5625) * C926 + std::sqrt(0.5625) * C933 -
               std::sqrt(2.25) * C940 + std::sqrt(0.5625) * C2438 +
               std::sqrt(0.5625) * C2445 - std::sqrt(2.25) * C2452 -
               std::sqrt(2.25) * C3950 - std::sqrt(2.25) * C3957 +
               std::sqrt(9.) * C3964;
    gz[252] += std::sqrt(0.5625) * C928 + std::sqrt(0.5625) * C935 -
               std::sqrt(2.25) * C942 + std::sqrt(0.5625) * C2440 +
               std::sqrt(0.5625) * C2447 - std::sqrt(2.25) * C2454 -
               std::sqrt(2.25) * C3952 - std::sqrt(2.25) * C3959 +
               std::sqrt(9.) * C3966;
    gx[253] += std::sqrt(27.) * C3976 -
               (std::sqrt(6.75) * C2464 + std::sqrt(6.75) * C952);
    gy[253] += std::sqrt(27.) * C3978 -
               (std::sqrt(6.75) * C2466 + std::sqrt(6.75) * C954);
    gz[253] += std::sqrt(27.) * C3980 -
               (std::sqrt(6.75) * C2468 + std::sqrt(6.75) * C956);
    gx[254] += std::sqrt(1.6875) * C931 - std::sqrt(1.6875) * C924 -
               std::sqrt(1.6875) * C2436 + std::sqrt(1.6875) * C2443 +
               std::sqrt(6.75) * C3948 - std::sqrt(6.75) * C3955;
    gy[254] += std::sqrt(1.6875) * C933 - std::sqrt(1.6875) * C926 -
               std::sqrt(1.6875) * C2438 + std::sqrt(1.6875) * C2445 +
               std::sqrt(6.75) * C3950 - std::sqrt(6.75) * C3957;
    gz[254] += std::sqrt(1.6875) * C935 - std::sqrt(1.6875) * C928 -
               std::sqrt(1.6875) * C2440 + std::sqrt(1.6875) * C2447 +
               std::sqrt(6.75) * C3952 - std::sqrt(6.75) * C3959;
    gx[255] += std::sqrt(27.) * C4053 -
               (std::sqrt(6.75) * C2541 + std::sqrt(6.75) * C1029);
    gy[255] += std::sqrt(27.) * C4055 -
               (std::sqrt(6.75) * C2543 + std::sqrt(6.75) * C1031);
    gz[255] += std::sqrt(27.) * C4057 -
               (std::sqrt(6.75) * C2545 + std::sqrt(6.75) * C1033);
    gx[256] += std::sqrt(27.) * C4067 -
               (std::sqrt(6.75) * C2555 + std::sqrt(6.75) * C1043);
    gy[256] += std::sqrt(27.) * C4069 -
               (std::sqrt(6.75) * C2557 + std::sqrt(6.75) * C1045);
    gz[256] += std::sqrt(27.) * C4071 -
               (std::sqrt(6.75) * C2559 + std::sqrt(6.75) * C1047);
    gx[257] += std::sqrt(0.5625) * C1008 + std::sqrt(0.5625) * C1015 -
               std::sqrt(2.25) * C1022 + std::sqrt(0.5625) * C2520 +
               std::sqrt(0.5625) * C2527 - std::sqrt(2.25) * C2534 -
               std::sqrt(2.25) * C4032 - std::sqrt(2.25) * C4039 +
               std::sqrt(9.) * C4046;
    gy[257] += std::sqrt(0.5625) * C1010 + std::sqrt(0.5625) * C1017 -
               std::sqrt(2.25) * C1024 + std::sqrt(0.5625) * C2522 +
               std::sqrt(0.5625) * C2529 - std::sqrt(2.25) * C2536 -
               std::sqrt(2.25) * C4034 - std::sqrt(2.25) * C4041 +
               std::sqrt(9.) * C4048;
    gz[257] += std::sqrt(0.5625) * C1012 + std::sqrt(0.5625) * C1019 -
               std::sqrt(2.25) * C1026 + std::sqrt(0.5625) * C2524 +
               std::sqrt(0.5625) * C2531 - std::sqrt(2.25) * C2538 -
               std::sqrt(2.25) * C4036 - std::sqrt(2.25) * C4043 +
               std::sqrt(9.) * C4050;
    gx[258] += std::sqrt(27.) * C4060 -
               (std::sqrt(6.75) * C2548 + std::sqrt(6.75) * C1036);
    gy[258] += std::sqrt(27.) * C4062 -
               (std::sqrt(6.75) * C2550 + std::sqrt(6.75) * C1038);
    gz[258] += std::sqrt(27.) * C4064 -
               (std::sqrt(6.75) * C2552 + std::sqrt(6.75) * C1040);
    gx[259] += std::sqrt(1.6875) * C1015 - std::sqrt(1.6875) * C1008 -
               std::sqrt(1.6875) * C2520 + std::sqrt(1.6875) * C2527 +
               std::sqrt(6.75) * C4032 - std::sqrt(6.75) * C4039;
    gy[259] += std::sqrt(1.6875) * C1017 - std::sqrt(1.6875) * C1010 -
               std::sqrt(1.6875) * C2522 + std::sqrt(1.6875) * C2529 +
               std::sqrt(6.75) * C4034 - std::sqrt(6.75) * C4041;
    gz[259] += std::sqrt(1.6875) * C1019 - std::sqrt(1.6875) * C1012 -
               std::sqrt(1.6875) * C2524 + std::sqrt(1.6875) * C2531 +
               std::sqrt(6.75) * C4036 - std::sqrt(6.75) * C4043;
    gx[260] += std::sqrt(0.5625) * C819 + std::sqrt(0.5625) * C861 -
               std::sqrt(2.25) * C903 + std::sqrt(0.5625) * C2331 +
               std::sqrt(0.5625) * C2373 - std::sqrt(2.25) * C2415 -
               std::sqrt(2.25) * C3843 - std::sqrt(2.25) * C3885 +
               std::sqrt(9.) * C3927;
    gy[260] += std::sqrt(0.5625) * C821 + std::sqrt(0.5625) * C863 -
               std::sqrt(2.25) * C905 + std::sqrt(0.5625) * C2333 +
               std::sqrt(0.5625) * C2375 - std::sqrt(2.25) * C2417 -
               std::sqrt(2.25) * C3845 - std::sqrt(2.25) * C3887 +
               std::sqrt(9.) * C3929;
    gz[260] += std::sqrt(0.5625) * C823 + std::sqrt(0.5625) * C865 -
               std::sqrt(2.25) * C907 + std::sqrt(0.5625) * C2335 +
               std::sqrt(0.5625) * C2377 - std::sqrt(2.25) * C2419 -
               std::sqrt(2.25) * C3847 - std::sqrt(2.25) * C3889 +
               std::sqrt(9.) * C3931;
    gx[261] += std::sqrt(0.5625) * C833 + std::sqrt(0.5625) * C875 -
               std::sqrt(2.25) * C917 + std::sqrt(0.5625) * C2345 +
               std::sqrt(0.5625) * C2387 - std::sqrt(2.25) * C2429 -
               std::sqrt(2.25) * C3857 - std::sqrt(2.25) * C3899 +
               std::sqrt(9.) * C3941;
    gy[261] += std::sqrt(0.5625) * C835 + std::sqrt(0.5625) * C877 -
               std::sqrt(2.25) * C919 + std::sqrt(0.5625) * C2347 +
               std::sqrt(0.5625) * C2389 - std::sqrt(2.25) * C2431 -
               std::sqrt(2.25) * C3859 - std::sqrt(2.25) * C3901 +
               std::sqrt(9.) * C3943;
    gz[261] += std::sqrt(0.5625) * C837 + std::sqrt(0.5625) * C879 -
               std::sqrt(2.25) * C921 + std::sqrt(0.5625) * C2349 +
               std::sqrt(0.5625) * C2391 - std::sqrt(2.25) * C2433 -
               std::sqrt(2.25) * C3861 - std::sqrt(2.25) * C3903 +
               std::sqrt(9.) * C3945;
    gx[262] += std::sqrt(0.1875) * C812 -
               (std::sqrt(0.046875) * C805 + std::sqrt(0.046875) * C798) -
               std::sqrt(0.046875) * C840 - std::sqrt(0.046875) * C847 +
               std::sqrt(0.1875) * C854 + std::sqrt(0.1875) * C882 +
               std::sqrt(0.1875) * C889 - std::sqrt(0.75) * C896 -
               std::sqrt(0.046875) * C2310 - std::sqrt(0.046875) * C2317 +
               std::sqrt(0.1875) * C2324 - std::sqrt(0.046875) * C2352 -
               std::sqrt(0.046875) * C2359 + std::sqrt(0.1875) * C2366 +
               std::sqrt(0.1875) * C2394 + std::sqrt(0.1875) * C2401 -
               std::sqrt(0.75) * C2408 + std::sqrt(0.1875) * C3822 +
               std::sqrt(0.1875) * C3829 - std::sqrt(0.75) * C3836 +
               std::sqrt(0.1875) * C3864 + std::sqrt(0.1875) * C3871 -
               std::sqrt(0.75) * C3878 - std::sqrt(0.75) * C3906 -
               std::sqrt(0.75) * C3913 + std::sqrt(3.0) * C3920;
    gy[262] += std::sqrt(0.1875) * C814 -
               (std::sqrt(0.046875) * C807 + std::sqrt(0.046875) * C800) -
               std::sqrt(0.046875) * C842 - std::sqrt(0.046875) * C849 +
               std::sqrt(0.1875) * C856 + std::sqrt(0.1875) * C884 +
               std::sqrt(0.1875) * C891 - std::sqrt(0.75) * C898 -
               std::sqrt(0.046875) * C2312 - std::sqrt(0.046875) * C2319 +
               std::sqrt(0.1875) * C2326 - std::sqrt(0.046875) * C2354 -
               std::sqrt(0.046875) * C2361 + std::sqrt(0.1875) * C2368 +
               std::sqrt(0.1875) * C2396 + std::sqrt(0.1875) * C2403 -
               std::sqrt(0.75) * C2410 + std::sqrt(0.1875) * C3824 +
               std::sqrt(0.1875) * C3831 - std::sqrt(0.75) * C3838 +
               std::sqrt(0.1875) * C3866 + std::sqrt(0.1875) * C3873 -
               std::sqrt(0.75) * C3880 - std::sqrt(0.75) * C3908 -
               std::sqrt(0.75) * C3915 + std::sqrt(3.0) * C3922;
    gz[262] += std::sqrt(0.1875) * C816 -
               (std::sqrt(0.046875) * C809 + std::sqrt(0.046875) * C802) -
               std::sqrt(0.046875) * C844 - std::sqrt(0.046875) * C851 +
               std::sqrt(0.1875) * C858 + std::sqrt(0.1875) * C886 +
               std::sqrt(0.1875) * C893 - std::sqrt(0.75) * C900 -
               std::sqrt(0.046875) * C2314 - std::sqrt(0.046875) * C2321 +
               std::sqrt(0.1875) * C2328 - std::sqrt(0.046875) * C2356 -
               std::sqrt(0.046875) * C2363 + std::sqrt(0.1875) * C2370 +
               std::sqrt(0.1875) * C2398 + std::sqrt(0.1875) * C2405 -
               std::sqrt(0.75) * C2412 + std::sqrt(0.1875) * C3826 +
               std::sqrt(0.1875) * C3833 - std::sqrt(0.75) * C3840 +
               std::sqrt(0.1875) * C3868 + std::sqrt(0.1875) * C3875 -
               std::sqrt(0.75) * C3882 - std::sqrt(0.75) * C3910 -
               std::sqrt(0.75) * C3917 + std::sqrt(3.0) * C3924;
    gx[263] += std::sqrt(0.5625) * C826 + std::sqrt(0.5625) * C868 -
               std::sqrt(2.25) * C910 + std::sqrt(0.5625) * C2338 +
               std::sqrt(0.5625) * C2380 - std::sqrt(2.25) * C2422 -
               std::sqrt(2.25) * C3850 - std::sqrt(2.25) * C3892 +
               std::sqrt(9.) * C3934;
    gy[263] += std::sqrt(0.5625) * C828 + std::sqrt(0.5625) * C870 -
               std::sqrt(2.25) * C912 + std::sqrt(0.5625) * C2340 +
               std::sqrt(0.5625) * C2382 - std::sqrt(2.25) * C2424 -
               std::sqrt(2.25) * C3852 - std::sqrt(2.25) * C3894 +
               std::sqrt(9.) * C3936;
    gz[263] += std::sqrt(0.5625) * C830 + std::sqrt(0.5625) * C872 -
               std::sqrt(2.25) * C914 + std::sqrt(0.5625) * C2342 +
               std::sqrt(0.5625) * C2384 - std::sqrt(2.25) * C2426 -
               std::sqrt(2.25) * C3854 - std::sqrt(2.25) * C3896 +
               std::sqrt(9.) * C3938;
    gx[264] += std::sqrt(0.140625) * C798 - std::sqrt(0.140625) * C805 +
               std::sqrt(0.140625) * C840 - std::sqrt(0.140625) * C847 -
               std::sqrt(0.5625) * C882 + std::sqrt(0.5625) * C889 +
               std::sqrt(0.140625) * C2310 - std::sqrt(0.140625) * C2317 +
               std::sqrt(0.140625) * C2352 - std::sqrt(0.140625) * C2359 -
               std::sqrt(0.5625) * C2394 + std::sqrt(0.5625) * C2401 -
               std::sqrt(0.5625) * C3822 + std::sqrt(0.5625) * C3829 -
               std::sqrt(0.5625) * C3864 + std::sqrt(0.5625) * C3871 +
               std::sqrt(2.25) * C3906 - std::sqrt(2.25) * C3913;
    gy[264] += std::sqrt(0.140625) * C800 - std::sqrt(0.140625) * C807 +
               std::sqrt(0.140625) * C842 - std::sqrt(0.140625) * C849 -
               std::sqrt(0.5625) * C884 + std::sqrt(0.5625) * C891 +
               std::sqrt(0.140625) * C2312 - std::sqrt(0.140625) * C2319 +
               std::sqrt(0.140625) * C2354 - std::sqrt(0.140625) * C2361 -
               std::sqrt(0.5625) * C2396 + std::sqrt(0.5625) * C2403 -
               std::sqrt(0.5625) * C3824 + std::sqrt(0.5625) * C3831 -
               std::sqrt(0.5625) * C3866 + std::sqrt(0.5625) * C3873 +
               std::sqrt(2.25) * C3908 - std::sqrt(2.25) * C3915;
    gz[264] += std::sqrt(0.140625) * C802 - std::sqrt(0.140625) * C809 +
               std::sqrt(0.140625) * C844 - std::sqrt(0.140625) * C851 -
               std::sqrt(0.5625) * C886 + std::sqrt(0.5625) * C893 +
               std::sqrt(0.140625) * C2314 - std::sqrt(0.140625) * C2321 +
               std::sqrt(0.140625) * C2356 - std::sqrt(0.140625) * C2363 -
               std::sqrt(0.5625) * C2398 + std::sqrt(0.5625) * C2405 -
               std::sqrt(0.5625) * C3826 + std::sqrt(0.5625) * C3833 -
               std::sqrt(0.5625) * C3868 + std::sqrt(0.5625) * C3875 +
               std::sqrt(2.25) * C3910 - std::sqrt(2.25) * C3917;
    gx[265] += std::sqrt(27.) * C4011 -
               (std::sqrt(6.75) * C2499 + std::sqrt(6.75) * C987);
    gy[265] += std::sqrt(27.) * C4013 -
               (std::sqrt(6.75) * C2501 + std::sqrt(6.75) * C989);
    gz[265] += std::sqrt(27.) * C4015 -
               (std::sqrt(6.75) * C2503 + std::sqrt(6.75) * C991);
    gx[266] += std::sqrt(27.) * C4025 -
               (std::sqrt(6.75) * C2513 + std::sqrt(6.75) * C1001);
    gy[266] += std::sqrt(27.) * C4027 -
               (std::sqrt(6.75) * C2515 + std::sqrt(6.75) * C1003);
    gz[266] += std::sqrt(27.) * C4029 -
               (std::sqrt(6.75) * C2517 + std::sqrt(6.75) * C1005);
    gx[267] += std::sqrt(0.5625) * C966 + std::sqrt(0.5625) * C973 -
               std::sqrt(2.25) * C980 + std::sqrt(0.5625) * C2478 +
               std::sqrt(0.5625) * C2485 - std::sqrt(2.25) * C2492 -
               std::sqrt(2.25) * C3990 - std::sqrt(2.25) * C3997 +
               std::sqrt(9.) * C4004;
    gy[267] += std::sqrt(0.5625) * C968 + std::sqrt(0.5625) * C975 -
               std::sqrt(2.25) * C982 + std::sqrt(0.5625) * C2480 +
               std::sqrt(0.5625) * C2487 - std::sqrt(2.25) * C2494 -
               std::sqrt(2.25) * C3992 - std::sqrt(2.25) * C3999 +
               std::sqrt(9.) * C4006;
    gz[267] += std::sqrt(0.5625) * C970 + std::sqrt(0.5625) * C977 -
               std::sqrt(2.25) * C984 + std::sqrt(0.5625) * C2482 +
               std::sqrt(0.5625) * C2489 - std::sqrt(2.25) * C2496 -
               std::sqrt(2.25) * C3994 - std::sqrt(2.25) * C4001 +
               std::sqrt(9.) * C4008;
    gx[268] += std::sqrt(27.) * C4018 -
               (std::sqrt(6.75) * C2506 + std::sqrt(6.75) * C994);
    gy[268] += std::sqrt(27.) * C4020 -
               (std::sqrt(6.75) * C2508 + std::sqrt(6.75) * C996);
    gz[268] += std::sqrt(27.) * C4022 -
               (std::sqrt(6.75) * C2510 + std::sqrt(6.75) * C998);
    gx[269] += std::sqrt(1.6875) * C973 - std::sqrt(1.6875) * C966 -
               std::sqrt(1.6875) * C2478 + std::sqrt(1.6875) * C2485 +
               std::sqrt(6.75) * C3990 - std::sqrt(6.75) * C3997;
    gy[269] += std::sqrt(1.6875) * C975 - std::sqrt(1.6875) * C968 -
               std::sqrt(1.6875) * C2480 + std::sqrt(1.6875) * C2487 +
               std::sqrt(6.75) * C3992 - std::sqrt(6.75) * C3999;
    gz[269] += std::sqrt(1.6875) * C977 - std::sqrt(1.6875) * C970 -
               std::sqrt(1.6875) * C2482 + std::sqrt(1.6875) * C2489 +
               std::sqrt(6.75) * C3994 - std::sqrt(6.75) * C4001;
    gx[270] += std::sqrt(1.6875) * C861 - std::sqrt(1.6875) * C819 -
               std::sqrt(1.6875) * C2331 + std::sqrt(1.6875) * C2373 +
               std::sqrt(6.75) * C3843 - std::sqrt(6.75) * C3885;
    gy[270] += std::sqrt(1.6875) * C863 - std::sqrt(1.6875) * C821 -
               std::sqrt(1.6875) * C2333 + std::sqrt(1.6875) * C2375 +
               std::sqrt(6.75) * C3845 - std::sqrt(6.75) * C3887;
    gz[270] += std::sqrt(1.6875) * C865 - std::sqrt(1.6875) * C823 -
               std::sqrt(1.6875) * C2335 + std::sqrt(1.6875) * C2377 +
               std::sqrt(6.75) * C3847 - std::sqrt(6.75) * C3889;
    gx[271] += std::sqrt(1.6875) * C875 - std::sqrt(1.6875) * C833 -
               std::sqrt(1.6875) * C2345 + std::sqrt(1.6875) * C2387 +
               std::sqrt(6.75) * C3857 - std::sqrt(6.75) * C3899;
    gy[271] += std::sqrt(1.6875) * C877 - std::sqrt(1.6875) * C835 -
               std::sqrt(1.6875) * C2347 + std::sqrt(1.6875) * C2389 +
               std::sqrt(6.75) * C3859 - std::sqrt(6.75) * C3901;
    gz[271] += std::sqrt(1.6875) * C879 - std::sqrt(1.6875) * C837 -
               std::sqrt(1.6875) * C2349 + std::sqrt(1.6875) * C2391 +
               std::sqrt(6.75) * C3861 - std::sqrt(6.75) * C3903;
    gx[272] += std::sqrt(0.140625) * C798 + std::sqrt(0.140625) * C805 -
               std::sqrt(0.5625) * C812 - std::sqrt(0.140625) * C840 -
               std::sqrt(0.140625) * C847 + std::sqrt(0.5625) * C854 +
               std::sqrt(0.140625) * C2310 + std::sqrt(0.140625) * C2317 -
               std::sqrt(0.5625) * C2324 - std::sqrt(0.140625) * C2352 -
               std::sqrt(0.140625) * C2359 + std::sqrt(0.5625) * C2366 -
               std::sqrt(0.5625) * C3822 - std::sqrt(0.5625) * C3829 +
               std::sqrt(2.25) * C3836 + std::sqrt(0.5625) * C3864 +
               std::sqrt(0.5625) * C3871 - std::sqrt(2.25) * C3878;
    gy[272] += std::sqrt(0.140625) * C800 + std::sqrt(0.140625) * C807 -
               std::sqrt(0.5625) * C814 - std::sqrt(0.140625) * C842 -
               std::sqrt(0.140625) * C849 + std::sqrt(0.5625) * C856 +
               std::sqrt(0.140625) * C2312 + std::sqrt(0.140625) * C2319 -
               std::sqrt(0.5625) * C2326 - std::sqrt(0.140625) * C2354 -
               std::sqrt(0.140625) * C2361 + std::sqrt(0.5625) * C2368 -
               std::sqrt(0.5625) * C3824 - std::sqrt(0.5625) * C3831 +
               std::sqrt(2.25) * C3838 + std::sqrt(0.5625) * C3866 +
               std::sqrt(0.5625) * C3873 - std::sqrt(2.25) * C3880;
    gz[272] += std::sqrt(0.140625) * C802 + std::sqrt(0.140625) * C809 -
               std::sqrt(0.5625) * C816 - std::sqrt(0.140625) * C844 -
               std::sqrt(0.140625) * C851 + std::sqrt(0.5625) * C858 +
               std::sqrt(0.140625) * C2314 + std::sqrt(0.140625) * C2321 -
               std::sqrt(0.5625) * C2328 - std::sqrt(0.140625) * C2356 -
               std::sqrt(0.140625) * C2363 + std::sqrt(0.5625) * C2370 -
               std::sqrt(0.5625) * C3826 - std::sqrt(0.5625) * C3833 +
               std::sqrt(2.25) * C3840 + std::sqrt(0.5625) * C3868 +
               std::sqrt(0.5625) * C3875 - std::sqrt(2.25) * C3882;
    gx[273] += std::sqrt(1.6875) * C868 - std::sqrt(1.6875) * C826 -
               std::sqrt(1.6875) * C2338 + std::sqrt(1.6875) * C2380 +
               std::sqrt(6.75) * C3850 - std::sqrt(6.75) * C3892;
    gy[273] += std::sqrt(1.6875) * C870 - std::sqrt(1.6875) * C828 -
               std::sqrt(1.6875) * C2340 + std::sqrt(1.6875) * C2382 +
               std::sqrt(6.75) * C3852 - std::sqrt(6.75) * C3894;
    gz[273] += std::sqrt(1.6875) * C872 - std::sqrt(1.6875) * C830 -
               std::sqrt(1.6875) * C2342 + std::sqrt(1.6875) * C2384 +
               std::sqrt(6.75) * C3854 - std::sqrt(6.75) * C3896;
    gx[274] += std::sqrt(0.421875) * C805 - std::sqrt(0.421875) * C798 +
               std::sqrt(0.421875) * C840 - std::sqrt(0.421875) * C847 -
               std::sqrt(0.421875) * C2310 + std::sqrt(0.421875) * C2317 +
               std::sqrt(0.421875) * C2352 - std::sqrt(0.421875) * C2359 +
               std::sqrt(1.6875) * C3822 - std::sqrt(1.6875) * C3829 -
               std::sqrt(1.6875) * C3864 + std::sqrt(1.6875) * C3871;
    gy[274] += std::sqrt(0.421875) * C807 - std::sqrt(0.421875) * C800 +
               std::sqrt(0.421875) * C842 - std::sqrt(0.421875) * C849 -
               std::sqrt(0.421875) * C2312 + std::sqrt(0.421875) * C2319 +
               std::sqrt(0.421875) * C2354 - std::sqrt(0.421875) * C2361 +
               std::sqrt(1.6875) * C3824 - std::sqrt(1.6875) * C3831 -
               std::sqrt(1.6875) * C3866 + std::sqrt(1.6875) * C3873;
    gz[274] += std::sqrt(0.421875) * C809 - std::sqrt(0.421875) * C802 +
               std::sqrt(0.421875) * C844 - std::sqrt(0.421875) * C851 -
               std::sqrt(0.421875) * C2314 + std::sqrt(0.421875) * C2321 +
               std::sqrt(0.421875) * C2356 - std::sqrt(0.421875) * C2363 +
               std::sqrt(1.6875) * C3826 - std::sqrt(1.6875) * C3833 -
               std::sqrt(1.6875) * C3868 + std::sqrt(1.6875) * C3875;
    gx[275] += std::sqrt(27.) * C4473 -
               (std::sqrt(6.75) * C2961 + std::sqrt(6.75) * C1449);
    gy[275] += std::sqrt(27.) * C4475 -
               (std::sqrt(6.75) * C2963 + std::sqrt(6.75) * C1451);
    gz[275] += std::sqrt(27.) * C4477 -
               (std::sqrt(6.75) * C2965 + std::sqrt(6.75) * C1453);
    gx[276] += std::sqrt(27.) * C4487 -
               (std::sqrt(6.75) * C2975 + std::sqrt(6.75) * C1463);
    gy[276] += std::sqrt(27.) * C4489 -
               (std::sqrt(6.75) * C2977 + std::sqrt(6.75) * C1465);
    gz[276] += std::sqrt(27.) * C4491 -
               (std::sqrt(6.75) * C2979 + std::sqrt(6.75) * C1467);
    gx[277] += std::sqrt(0.5625) * C1428 + std::sqrt(0.5625) * C1435 -
               std::sqrt(2.25) * C1442 + std::sqrt(0.5625) * C2940 +
               std::sqrt(0.5625) * C2947 - std::sqrt(2.25) * C2954 -
               std::sqrt(2.25) * C4452 - std::sqrt(2.25) * C4459 +
               std::sqrt(9.) * C4466;
    gy[277] += std::sqrt(0.5625) * C1430 + std::sqrt(0.5625) * C1437 -
               std::sqrt(2.25) * C1444 + std::sqrt(0.5625) * C2942 +
               std::sqrt(0.5625) * C2949 - std::sqrt(2.25) * C2956 -
               std::sqrt(2.25) * C4454 - std::sqrt(2.25) * C4461 +
               std::sqrt(9.) * C4468;
    gz[277] += std::sqrt(0.5625) * C1432 + std::sqrt(0.5625) * C1439 -
               std::sqrt(2.25) * C1446 + std::sqrt(0.5625) * C2944 +
               std::sqrt(0.5625) * C2951 - std::sqrt(2.25) * C2958 -
               std::sqrt(2.25) * C4456 - std::sqrt(2.25) * C4463 +
               std::sqrt(9.) * C4470;
    gx[278] += std::sqrt(27.) * C4480 -
               (std::sqrt(6.75) * C2968 + std::sqrt(6.75) * C1456);
    gy[278] += std::sqrt(27.) * C4482 -
               (std::sqrt(6.75) * C2970 + std::sqrt(6.75) * C1458);
    gz[278] += std::sqrt(27.) * C4484 -
               (std::sqrt(6.75) * C2972 + std::sqrt(6.75) * C1460);
    gx[279] += std::sqrt(1.6875) * C1435 - std::sqrt(1.6875) * C1428 -
               std::sqrt(1.6875) * C2940 + std::sqrt(1.6875) * C2947 +
               std::sqrt(6.75) * C4452 - std::sqrt(6.75) * C4459;
    gy[279] += std::sqrt(1.6875) * C1437 - std::sqrt(1.6875) * C1430 -
               std::sqrt(1.6875) * C2942 + std::sqrt(1.6875) * C2949 +
               std::sqrt(6.75) * C4454 - std::sqrt(6.75) * C4461;
    gz[279] += std::sqrt(1.6875) * C1439 - std::sqrt(1.6875) * C1432 -
               std::sqrt(1.6875) * C2944 + std::sqrt(1.6875) * C2951 +
               std::sqrt(6.75) * C4456 - std::sqrt(6.75) * C4463;
    gx[280] += std::sqrt(27.) * C4557 -
               (std::sqrt(6.75) * C3045 + std::sqrt(6.75) * C1533);
    gy[280] += std::sqrt(27.) * C4559 -
               (std::sqrt(6.75) * C3047 + std::sqrt(6.75) * C1535);
    gz[280] += std::sqrt(27.) * C4561 -
               (std::sqrt(6.75) * C3049 + std::sqrt(6.75) * C1537);
    gx[281] += std::sqrt(27.) * C4571 -
               (std::sqrt(6.75) * C3059 + std::sqrt(6.75) * C1547);
    gy[281] += std::sqrt(27.) * C4573 -
               (std::sqrt(6.75) * C3061 + std::sqrt(6.75) * C1549);
    gz[281] += std::sqrt(27.) * C4575 -
               (std::sqrt(6.75) * C3063 + std::sqrt(6.75) * C1551);
    gx[282] += std::sqrt(0.5625) * C1512 + std::sqrt(0.5625) * C1519 -
               std::sqrt(2.25) * C1526 + std::sqrt(0.5625) * C3024 +
               std::sqrt(0.5625) * C3031 - std::sqrt(2.25) * C3038 -
               std::sqrt(2.25) * C4536 - std::sqrt(2.25) * C4543 +
               std::sqrt(9.) * C4550;
    gy[282] += std::sqrt(0.5625) * C1514 + std::sqrt(0.5625) * C1521 -
               std::sqrt(2.25) * C1528 + std::sqrt(0.5625) * C3026 +
               std::sqrt(0.5625) * C3033 - std::sqrt(2.25) * C3040 -
               std::sqrt(2.25) * C4538 - std::sqrt(2.25) * C4545 +
               std::sqrt(9.) * C4552;
    gz[282] += std::sqrt(0.5625) * C1516 + std::sqrt(0.5625) * C1523 -
               std::sqrt(2.25) * C1530 + std::sqrt(0.5625) * C3028 +
               std::sqrt(0.5625) * C3035 - std::sqrt(2.25) * C3042 -
               std::sqrt(2.25) * C4540 - std::sqrt(2.25) * C4547 +
               std::sqrt(9.) * C4554;
    gx[283] += std::sqrt(27.) * C4564 -
               (std::sqrt(6.75) * C3052 + std::sqrt(6.75) * C1540);
    gy[283] += std::sqrt(27.) * C4566 -
               (std::sqrt(6.75) * C3054 + std::sqrt(6.75) * C1542);
    gz[283] += std::sqrt(27.) * C4568 -
               (std::sqrt(6.75) * C3056 + std::sqrt(6.75) * C1544);
    gx[284] += std::sqrt(1.6875) * C1519 - std::sqrt(1.6875) * C1512 -
               std::sqrt(1.6875) * C3024 + std::sqrt(1.6875) * C3031 +
               std::sqrt(6.75) * C4536 - std::sqrt(6.75) * C4543;
    gy[284] += std::sqrt(1.6875) * C1521 - std::sqrt(1.6875) * C1514 -
               std::sqrt(1.6875) * C3026 + std::sqrt(1.6875) * C3033 +
               std::sqrt(6.75) * C4538 - std::sqrt(6.75) * C4545;
    gz[284] += std::sqrt(1.6875) * C1523 - std::sqrt(1.6875) * C1516 -
               std::sqrt(1.6875) * C3028 + std::sqrt(1.6875) * C3035 +
               std::sqrt(6.75) * C4540 - std::sqrt(6.75) * C4547;
    gx[285] += std::sqrt(0.5625) * C1323 + std::sqrt(0.5625) * C1365 -
               std::sqrt(2.25) * C1407 + std::sqrt(0.5625) * C2835 +
               std::sqrt(0.5625) * C2877 - std::sqrt(2.25) * C2919 -
               std::sqrt(2.25) * C4347 - std::sqrt(2.25) * C4389 +
               std::sqrt(9.) * C4431;
    gy[285] += std::sqrt(0.5625) * C1325 + std::sqrt(0.5625) * C1367 -
               std::sqrt(2.25) * C1409 + std::sqrt(0.5625) * C2837 +
               std::sqrt(0.5625) * C2879 - std::sqrt(2.25) * C2921 -
               std::sqrt(2.25) * C4349 - std::sqrt(2.25) * C4391 +
               std::sqrt(9.) * C4433;
    gz[285] += std::sqrt(0.5625) * C1327 + std::sqrt(0.5625) * C1369 -
               std::sqrt(2.25) * C1411 + std::sqrt(0.5625) * C2839 +
               std::sqrt(0.5625) * C2881 - std::sqrt(2.25) * C2923 -
               std::sqrt(2.25) * C4351 - std::sqrt(2.25) * C4393 +
               std::sqrt(9.) * C4435;
    gx[286] += std::sqrt(0.5625) * C1337 + std::sqrt(0.5625) * C1379 -
               std::sqrt(2.25) * C1421 + std::sqrt(0.5625) * C2849 +
               std::sqrt(0.5625) * C2891 - std::sqrt(2.25) * C2933 -
               std::sqrt(2.25) * C4361 - std::sqrt(2.25) * C4403 +
               std::sqrt(9.) * C4445;
    gy[286] += std::sqrt(0.5625) * C1339 + std::sqrt(0.5625) * C1381 -
               std::sqrt(2.25) * C1423 + std::sqrt(0.5625) * C2851 +
               std::sqrt(0.5625) * C2893 - std::sqrt(2.25) * C2935 -
               std::sqrt(2.25) * C4363 - std::sqrt(2.25) * C4405 +
               std::sqrt(9.) * C4447;
    gz[286] += std::sqrt(0.5625) * C1341 + std::sqrt(0.5625) * C1383 -
               std::sqrt(2.25) * C1425 + std::sqrt(0.5625) * C2853 +
               std::sqrt(0.5625) * C2895 - std::sqrt(2.25) * C2937 -
               std::sqrt(2.25) * C4365 - std::sqrt(2.25) * C4407 +
               std::sqrt(9.) * C4449;
    gx[287] += std::sqrt(0.1875) * C1316 -
               (std::sqrt(0.046875) * C1309 + std::sqrt(0.046875) * C1302) -
               std::sqrt(0.046875) * C1344 - std::sqrt(0.046875) * C1351 +
               std::sqrt(0.1875) * C1358 + std::sqrt(0.1875) * C1386 +
               std::sqrt(0.1875) * C1393 - std::sqrt(0.75) * C1400 -
               std::sqrt(0.046875) * C2814 - std::sqrt(0.046875) * C2821 +
               std::sqrt(0.1875) * C2828 - std::sqrt(0.046875) * C2856 -
               std::sqrt(0.046875) * C2863 + std::sqrt(0.1875) * C2870 +
               std::sqrt(0.1875) * C2898 + std::sqrt(0.1875) * C2905 -
               std::sqrt(0.75) * C2912 + std::sqrt(0.1875) * C4326 +
               std::sqrt(0.1875) * C4333 - std::sqrt(0.75) * C4340 +
               std::sqrt(0.1875) * C4368 + std::sqrt(0.1875) * C4375 -
               std::sqrt(0.75) * C4382 - std::sqrt(0.75) * C4410 -
               std::sqrt(0.75) * C4417 + std::sqrt(3.0) * C4424;
    gy[287] += std::sqrt(0.1875) * C1318 -
               (std::sqrt(0.046875) * C1311 + std::sqrt(0.046875) * C1304) -
               std::sqrt(0.046875) * C1346 - std::sqrt(0.046875) * C1353 +
               std::sqrt(0.1875) * C1360 + std::sqrt(0.1875) * C1388 +
               std::sqrt(0.1875) * C1395 - std::sqrt(0.75) * C1402 -
               std::sqrt(0.046875) * C2816 - std::sqrt(0.046875) * C2823 +
               std::sqrt(0.1875) * C2830 - std::sqrt(0.046875) * C2858 -
               std::sqrt(0.046875) * C2865 + std::sqrt(0.1875) * C2872 +
               std::sqrt(0.1875) * C2900 + std::sqrt(0.1875) * C2907 -
               std::sqrt(0.75) * C2914 + std::sqrt(0.1875) * C4328 +
               std::sqrt(0.1875) * C4335 - std::sqrt(0.75) * C4342 +
               std::sqrt(0.1875) * C4370 + std::sqrt(0.1875) * C4377 -
               std::sqrt(0.75) * C4384 - std::sqrt(0.75) * C4412 -
               std::sqrt(0.75) * C4419 + std::sqrt(3.0) * C4426;
    gz[287] += std::sqrt(0.1875) * C1320 -
               (std::sqrt(0.046875) * C1313 + std::sqrt(0.046875) * C1306) -
               std::sqrt(0.046875) * C1348 - std::sqrt(0.046875) * C1355 +
               std::sqrt(0.1875) * C1362 + std::sqrt(0.1875) * C1390 +
               std::sqrt(0.1875) * C1397 - std::sqrt(0.75) * C1404 -
               std::sqrt(0.046875) * C2818 - std::sqrt(0.046875) * C2825 +
               std::sqrt(0.1875) * C2832 - std::sqrt(0.046875) * C2860 -
               std::sqrt(0.046875) * C2867 + std::sqrt(0.1875) * C2874 +
               std::sqrt(0.1875) * C2902 + std::sqrt(0.1875) * C2909 -
               std::sqrt(0.75) * C2916 + std::sqrt(0.1875) * C4330 +
               std::sqrt(0.1875) * C4337 - std::sqrt(0.75) * C4344 +
               std::sqrt(0.1875) * C4372 + std::sqrt(0.1875) * C4379 -
               std::sqrt(0.75) * C4386 - std::sqrt(0.75) * C4414 -
               std::sqrt(0.75) * C4421 + std::sqrt(3.0) * C4428;
    gx[288] += std::sqrt(0.5625) * C1330 + std::sqrt(0.5625) * C1372 -
               std::sqrt(2.25) * C1414 + std::sqrt(0.5625) * C2842 +
               std::sqrt(0.5625) * C2884 - std::sqrt(2.25) * C2926 -
               std::sqrt(2.25) * C4354 - std::sqrt(2.25) * C4396 +
               std::sqrt(9.) * C4438;
    gy[288] += std::sqrt(0.5625) * C1332 + std::sqrt(0.5625) * C1374 -
               std::sqrt(2.25) * C1416 + std::sqrt(0.5625) * C2844 +
               std::sqrt(0.5625) * C2886 - std::sqrt(2.25) * C2928 -
               std::sqrt(2.25) * C4356 - std::sqrt(2.25) * C4398 +
               std::sqrt(9.) * C4440;
    gz[288] += std::sqrt(0.5625) * C1334 + std::sqrt(0.5625) * C1376 -
               std::sqrt(2.25) * C1418 + std::sqrt(0.5625) * C2846 +
               std::sqrt(0.5625) * C2888 - std::sqrt(2.25) * C2930 -
               std::sqrt(2.25) * C4358 - std::sqrt(2.25) * C4400 +
               std::sqrt(9.) * C4442;
    gx[289] += std::sqrt(0.140625) * C1302 - std::sqrt(0.140625) * C1309 +
               std::sqrt(0.140625) * C1344 - std::sqrt(0.140625) * C1351 -
               std::sqrt(0.5625) * C1386 + std::sqrt(0.5625) * C1393 +
               std::sqrt(0.140625) * C2814 - std::sqrt(0.140625) * C2821 +
               std::sqrt(0.140625) * C2856 - std::sqrt(0.140625) * C2863 -
               std::sqrt(0.5625) * C2898 + std::sqrt(0.5625) * C2905 -
               std::sqrt(0.5625) * C4326 + std::sqrt(0.5625) * C4333 -
               std::sqrt(0.5625) * C4368 + std::sqrt(0.5625) * C4375 +
               std::sqrt(2.25) * C4410 - std::sqrt(2.25) * C4417;
    gy[289] += std::sqrt(0.140625) * C1304 - std::sqrt(0.140625) * C1311 +
               std::sqrt(0.140625) * C1346 - std::sqrt(0.140625) * C1353 -
               std::sqrt(0.5625) * C1388 + std::sqrt(0.5625) * C1395 +
               std::sqrt(0.140625) * C2816 - std::sqrt(0.140625) * C2823 +
               std::sqrt(0.140625) * C2858 - std::sqrt(0.140625) * C2865 -
               std::sqrt(0.5625) * C2900 + std::sqrt(0.5625) * C2907 -
               std::sqrt(0.5625) * C4328 + std::sqrt(0.5625) * C4335 -
               std::sqrt(0.5625) * C4370 + std::sqrt(0.5625) * C4377 +
               std::sqrt(2.25) * C4412 - std::sqrt(2.25) * C4419;
    gz[289] += std::sqrt(0.140625) * C1306 - std::sqrt(0.140625) * C1313 +
               std::sqrt(0.140625) * C1348 - std::sqrt(0.140625) * C1355 -
               std::sqrt(0.5625) * C1390 + std::sqrt(0.5625) * C1397 +
               std::sqrt(0.140625) * C2818 - std::sqrt(0.140625) * C2825 +
               std::sqrt(0.140625) * C2860 - std::sqrt(0.140625) * C2867 -
               std::sqrt(0.5625) * C2902 + std::sqrt(0.5625) * C2909 -
               std::sqrt(0.5625) * C4330 + std::sqrt(0.5625) * C4337 -
               std::sqrt(0.5625) * C4372 + std::sqrt(0.5625) * C4379 +
               std::sqrt(2.25) * C4414 - std::sqrt(2.25) * C4421;
    gx[290] += std::sqrt(27.) * C4515 -
               (std::sqrt(6.75) * C3003 + std::sqrt(6.75) * C1491);
    gy[290] += std::sqrt(27.) * C4517 -
               (std::sqrt(6.75) * C3005 + std::sqrt(6.75) * C1493);
    gz[290] += std::sqrt(27.) * C4519 -
               (std::sqrt(6.75) * C3007 + std::sqrt(6.75) * C1495);
    gx[291] += std::sqrt(27.) * C4529 -
               (std::sqrt(6.75) * C3017 + std::sqrt(6.75) * C1505);
    gy[291] += std::sqrt(27.) * C4531 -
               (std::sqrt(6.75) * C3019 + std::sqrt(6.75) * C1507);
    gz[291] += std::sqrt(27.) * C4533 -
               (std::sqrt(6.75) * C3021 + std::sqrt(6.75) * C1509);
    gx[292] += std::sqrt(0.5625) * C1470 + std::sqrt(0.5625) * C1477 -
               std::sqrt(2.25) * C1484 + std::sqrt(0.5625) * C2982 +
               std::sqrt(0.5625) * C2989 - std::sqrt(2.25) * C2996 -
               std::sqrt(2.25) * C4494 - std::sqrt(2.25) * C4501 +
               std::sqrt(9.) * C4508;
    gy[292] += std::sqrt(0.5625) * C1472 + std::sqrt(0.5625) * C1479 -
               std::sqrt(2.25) * C1486 + std::sqrt(0.5625) * C2984 +
               std::sqrt(0.5625) * C2991 - std::sqrt(2.25) * C2998 -
               std::sqrt(2.25) * C4496 - std::sqrt(2.25) * C4503 +
               std::sqrt(9.) * C4510;
    gz[292] += std::sqrt(0.5625) * C1474 + std::sqrt(0.5625) * C1481 -
               std::sqrt(2.25) * C1488 + std::sqrt(0.5625) * C2986 +
               std::sqrt(0.5625) * C2993 - std::sqrt(2.25) * C3000 -
               std::sqrt(2.25) * C4498 - std::sqrt(2.25) * C4505 +
               std::sqrt(9.) * C4512;
    gx[293] += std::sqrt(27.) * C4522 -
               (std::sqrt(6.75) * C3010 + std::sqrt(6.75) * C1498);
    gy[293] += std::sqrt(27.) * C4524 -
               (std::sqrt(6.75) * C3012 + std::sqrt(6.75) * C1500);
    gz[293] += std::sqrt(27.) * C4526 -
               (std::sqrt(6.75) * C3014 + std::sqrt(6.75) * C1502);
    gx[294] += std::sqrt(1.6875) * C1477 - std::sqrt(1.6875) * C1470 -
               std::sqrt(1.6875) * C2982 + std::sqrt(1.6875) * C2989 +
               std::sqrt(6.75) * C4494 - std::sqrt(6.75) * C4501;
    gy[294] += std::sqrt(1.6875) * C1479 - std::sqrt(1.6875) * C1472 -
               std::sqrt(1.6875) * C2984 + std::sqrt(1.6875) * C2991 +
               std::sqrt(6.75) * C4496 - std::sqrt(6.75) * C4503;
    gz[294] += std::sqrt(1.6875) * C1481 - std::sqrt(1.6875) * C1474 -
               std::sqrt(1.6875) * C2986 + std::sqrt(1.6875) * C2993 +
               std::sqrt(6.75) * C4498 - std::sqrt(6.75) * C4505;
    gx[295] += std::sqrt(1.6875) * C1365 - std::sqrt(1.6875) * C1323 -
               std::sqrt(1.6875) * C2835 + std::sqrt(1.6875) * C2877 +
               std::sqrt(6.75) * C4347 - std::sqrt(6.75) * C4389;
    gy[295] += std::sqrt(1.6875) * C1367 - std::sqrt(1.6875) * C1325 -
               std::sqrt(1.6875) * C2837 + std::sqrt(1.6875) * C2879 +
               std::sqrt(6.75) * C4349 - std::sqrt(6.75) * C4391;
    gz[295] += std::sqrt(1.6875) * C1369 - std::sqrt(1.6875) * C1327 -
               std::sqrt(1.6875) * C2839 + std::sqrt(1.6875) * C2881 +
               std::sqrt(6.75) * C4351 - std::sqrt(6.75) * C4393;
    gx[296] += std::sqrt(1.6875) * C1379 - std::sqrt(1.6875) * C1337 -
               std::sqrt(1.6875) * C2849 + std::sqrt(1.6875) * C2891 +
               std::sqrt(6.75) * C4361 - std::sqrt(6.75) * C4403;
    gy[296] += std::sqrt(1.6875) * C1381 - std::sqrt(1.6875) * C1339 -
               std::sqrt(1.6875) * C2851 + std::sqrt(1.6875) * C2893 +
               std::sqrt(6.75) * C4363 - std::sqrt(6.75) * C4405;
    gz[296] += std::sqrt(1.6875) * C1383 - std::sqrt(1.6875) * C1341 -
               std::sqrt(1.6875) * C2853 + std::sqrt(1.6875) * C2895 +
               std::sqrt(6.75) * C4365 - std::sqrt(6.75) * C4407;
    gx[297] += std::sqrt(0.140625) * C1302 + std::sqrt(0.140625) * C1309 -
               std::sqrt(0.5625) * C1316 - std::sqrt(0.140625) * C1344 -
               std::sqrt(0.140625) * C1351 + std::sqrt(0.5625) * C1358 +
               std::sqrt(0.140625) * C2814 + std::sqrt(0.140625) * C2821 -
               std::sqrt(0.5625) * C2828 - std::sqrt(0.140625) * C2856 -
               std::sqrt(0.140625) * C2863 + std::sqrt(0.5625) * C2870 -
               std::sqrt(0.5625) * C4326 - std::sqrt(0.5625) * C4333 +
               std::sqrt(2.25) * C4340 + std::sqrt(0.5625) * C4368 +
               std::sqrt(0.5625) * C4375 - std::sqrt(2.25) * C4382;
    gy[297] += std::sqrt(0.140625) * C1304 + std::sqrt(0.140625) * C1311 -
               std::sqrt(0.5625) * C1318 - std::sqrt(0.140625) * C1346 -
               std::sqrt(0.140625) * C1353 + std::sqrt(0.5625) * C1360 +
               std::sqrt(0.140625) * C2816 + std::sqrt(0.140625) * C2823 -
               std::sqrt(0.5625) * C2830 - std::sqrt(0.140625) * C2858 -
               std::sqrt(0.140625) * C2865 + std::sqrt(0.5625) * C2872 -
               std::sqrt(0.5625) * C4328 - std::sqrt(0.5625) * C4335 +
               std::sqrt(2.25) * C4342 + std::sqrt(0.5625) * C4370 +
               std::sqrt(0.5625) * C4377 - std::sqrt(2.25) * C4384;
    gz[297] += std::sqrt(0.140625) * C1306 + std::sqrt(0.140625) * C1313 -
               std::sqrt(0.5625) * C1320 - std::sqrt(0.140625) * C1348 -
               std::sqrt(0.140625) * C1355 + std::sqrt(0.5625) * C1362 +
               std::sqrt(0.140625) * C2818 + std::sqrt(0.140625) * C2825 -
               std::sqrt(0.5625) * C2832 - std::sqrt(0.140625) * C2860 -
               std::sqrt(0.140625) * C2867 + std::sqrt(0.5625) * C2874 -
               std::sqrt(0.5625) * C4330 - std::sqrt(0.5625) * C4337 +
               std::sqrt(2.25) * C4344 + std::sqrt(0.5625) * C4372 +
               std::sqrt(0.5625) * C4379 - std::sqrt(2.25) * C4386;
    gx[298] += std::sqrt(1.6875) * C1372 - std::sqrt(1.6875) * C1330 -
               std::sqrt(1.6875) * C2842 + std::sqrt(1.6875) * C2884 +
               std::sqrt(6.75) * C4354 - std::sqrt(6.75) * C4396;
    gy[298] += std::sqrt(1.6875) * C1374 - std::sqrt(1.6875) * C1332 -
               std::sqrt(1.6875) * C2844 + std::sqrt(1.6875) * C2886 +
               std::sqrt(6.75) * C4356 - std::sqrt(6.75) * C4398;
    gz[298] += std::sqrt(1.6875) * C1376 - std::sqrt(1.6875) * C1334 -
               std::sqrt(1.6875) * C2846 + std::sqrt(1.6875) * C2888 +
               std::sqrt(6.75) * C4358 - std::sqrt(6.75) * C4400;
    gx[299] += std::sqrt(0.421875) * C1309 - std::sqrt(0.421875) * C1302 +
               std::sqrt(0.421875) * C1344 - std::sqrt(0.421875) * C1351 -
               std::sqrt(0.421875) * C2814 + std::sqrt(0.421875) * C2821 +
               std::sqrt(0.421875) * C2856 - std::sqrt(0.421875) * C2863 +
               std::sqrt(1.6875) * C4326 - std::sqrt(1.6875) * C4333 -
               std::sqrt(1.6875) * C4368 + std::sqrt(1.6875) * C4375;
    gy[299] += std::sqrt(0.421875) * C1311 - std::sqrt(0.421875) * C1304 +
               std::sqrt(0.421875) * C1346 - std::sqrt(0.421875) * C1353 -
               std::sqrt(0.421875) * C2816 + std::sqrt(0.421875) * C2823 +
               std::sqrt(0.421875) * C2858 - std::sqrt(0.421875) * C2865 +
               std::sqrt(1.6875) * C4328 - std::sqrt(1.6875) * C4335 -
               std::sqrt(1.6875) * C4370 + std::sqrt(1.6875) * C4377;
    gz[299] += std::sqrt(0.421875) * C1313 - std::sqrt(0.421875) * C1306 +
               std::sqrt(0.421875) * C1348 - std::sqrt(0.421875) * C1355 -
               std::sqrt(0.421875) * C2818 + std::sqrt(0.421875) * C2825 +
               std::sqrt(0.421875) * C2860 - std::sqrt(0.421875) * C2867 +
               std::sqrt(1.6875) * C4330 - std::sqrt(1.6875) * C4337 -
               std::sqrt(1.6875) * C4372 + std::sqrt(1.6875) * C4379;
    gx[300] += std::sqrt(0.5625) * C189 + std::sqrt(0.5625) * C441 -
               std::sqrt(2.25) * C693 + std::sqrt(0.5625) * C1701 +
               std::sqrt(0.5625) * C1953 - std::sqrt(2.25) * C2205 -
               std::sqrt(2.25) * C3213 - std::sqrt(2.25) * C3465 +
               std::sqrt(9.) * C3717;
    gy[300] += std::sqrt(0.5625) * C191 + std::sqrt(0.5625) * C443 -
               std::sqrt(2.25) * C695 + std::sqrt(0.5625) * C1703 +
               std::sqrt(0.5625) * C1955 - std::sqrt(2.25) * C2207 -
               std::sqrt(2.25) * C3215 - std::sqrt(2.25) * C3467 +
               std::sqrt(9.) * C3719;
    gz[300] += std::sqrt(0.5625) * C193 + std::sqrt(0.5625) * C445 -
               std::sqrt(2.25) * C697 + std::sqrt(0.5625) * C1705 +
               std::sqrt(0.5625) * C1957 - std::sqrt(2.25) * C2209 -
               std::sqrt(2.25) * C3217 - std::sqrt(2.25) * C3469 +
               std::sqrt(9.) * C3721;
    gx[301] += std::sqrt(0.5625) * C203 + std::sqrt(0.5625) * C455 -
               std::sqrt(2.25) * C707 + std::sqrt(0.5625) * C1715 +
               std::sqrt(0.5625) * C1967 - std::sqrt(2.25) * C2219 -
               std::sqrt(2.25) * C3227 - std::sqrt(2.25) * C3479 +
               std::sqrt(9.) * C3731;
    gy[301] += std::sqrt(0.5625) * C205 + std::sqrt(0.5625) * C457 -
               std::sqrt(2.25) * C709 + std::sqrt(0.5625) * C1717 +
               std::sqrt(0.5625) * C1969 - std::sqrt(2.25) * C2221 -
               std::sqrt(2.25) * C3229 - std::sqrt(2.25) * C3481 +
               std::sqrt(9.) * C3733;
    gz[301] += std::sqrt(0.5625) * C207 + std::sqrt(0.5625) * C459 -
               std::sqrt(2.25) * C711 + std::sqrt(0.5625) * C1719 +
               std::sqrt(0.5625) * C1971 - std::sqrt(2.25) * C2223 -
               std::sqrt(2.25) * C3231 - std::sqrt(2.25) * C3483 +
               std::sqrt(9.) * C3735;
    gx[302] += std::sqrt(0.1875) * C182 -
               (std::sqrt(0.046875) * C175 + std::sqrt(0.046875) * C168) -
               std::sqrt(0.046875) * C420 - std::sqrt(0.046875) * C427 +
               std::sqrt(0.1875) * C434 + std::sqrt(0.1875) * C672 +
               std::sqrt(0.1875) * C679 - std::sqrt(0.75) * C686 -
               std::sqrt(0.046875) * C1680 - std::sqrt(0.046875) * C1687 +
               std::sqrt(0.1875) * C1694 - std::sqrt(0.046875) * C1932 -
               std::sqrt(0.046875) * C1939 + std::sqrt(0.1875) * C1946 +
               std::sqrt(0.1875) * C2184 + std::sqrt(0.1875) * C2191 -
               std::sqrt(0.75) * C2198 + std::sqrt(0.1875) * C3192 +
               std::sqrt(0.1875) * C3199 - std::sqrt(0.75) * C3206 +
               std::sqrt(0.1875) * C3444 + std::sqrt(0.1875) * C3451 -
               std::sqrt(0.75) * C3458 - std::sqrt(0.75) * C3696 -
               std::sqrt(0.75) * C3703 + std::sqrt(3.0) * C3710;
    gy[302] += std::sqrt(0.1875) * C184 -
               (std::sqrt(0.046875) * C177 + std::sqrt(0.046875) * C170) -
               std::sqrt(0.046875) * C422 - std::sqrt(0.046875) * C429 +
               std::sqrt(0.1875) * C436 + std::sqrt(0.1875) * C674 +
               std::sqrt(0.1875) * C681 - std::sqrt(0.75) * C688 -
               std::sqrt(0.046875) * C1682 - std::sqrt(0.046875) * C1689 +
               std::sqrt(0.1875) * C1696 - std::sqrt(0.046875) * C1934 -
               std::sqrt(0.046875) * C1941 + std::sqrt(0.1875) * C1948 +
               std::sqrt(0.1875) * C2186 + std::sqrt(0.1875) * C2193 -
               std::sqrt(0.75) * C2200 + std::sqrt(0.1875) * C3194 +
               std::sqrt(0.1875) * C3201 - std::sqrt(0.75) * C3208 +
               std::sqrt(0.1875) * C3446 + std::sqrt(0.1875) * C3453 -
               std::sqrt(0.75) * C3460 - std::sqrt(0.75) * C3698 -
               std::sqrt(0.75) * C3705 + std::sqrt(3.0) * C3712;
    gz[302] += std::sqrt(0.1875) * C186 -
               (std::sqrt(0.046875) * C179 + std::sqrt(0.046875) * C172) -
               std::sqrt(0.046875) * C424 - std::sqrt(0.046875) * C431 +
               std::sqrt(0.1875) * C438 + std::sqrt(0.1875) * C676 +
               std::sqrt(0.1875) * C683 - std::sqrt(0.75) * C690 -
               std::sqrt(0.046875) * C1684 - std::sqrt(0.046875) * C1691 +
               std::sqrt(0.1875) * C1698 - std::sqrt(0.046875) * C1936 -
               std::sqrt(0.046875) * C1943 + std::sqrt(0.1875) * C1950 +
               std::sqrt(0.1875) * C2188 + std::sqrt(0.1875) * C2195 -
               std::sqrt(0.75) * C2202 + std::sqrt(0.1875) * C3196 +
               std::sqrt(0.1875) * C3203 - std::sqrt(0.75) * C3210 +
               std::sqrt(0.1875) * C3448 + std::sqrt(0.1875) * C3455 -
               std::sqrt(0.75) * C3462 - std::sqrt(0.75) * C3700 -
               std::sqrt(0.75) * C3707 + std::sqrt(3.0) * C3714;
    gx[303] += std::sqrt(0.5625) * C196 + std::sqrt(0.5625) * C448 -
               std::sqrt(2.25) * C700 + std::sqrt(0.5625) * C1708 +
               std::sqrt(0.5625) * C1960 - std::sqrt(2.25) * C2212 -
               std::sqrt(2.25) * C3220 - std::sqrt(2.25) * C3472 +
               std::sqrt(9.) * C3724;
    gy[303] += std::sqrt(0.5625) * C198 + std::sqrt(0.5625) * C450 -
               std::sqrt(2.25) * C702 + std::sqrt(0.5625) * C1710 +
               std::sqrt(0.5625) * C1962 - std::sqrt(2.25) * C2214 -
               std::sqrt(2.25) * C3222 - std::sqrt(2.25) * C3474 +
               std::sqrt(9.) * C3726;
    gz[303] += std::sqrt(0.5625) * C200 + std::sqrt(0.5625) * C452 -
               std::sqrt(2.25) * C704 + std::sqrt(0.5625) * C1712 +
               std::sqrt(0.5625) * C1964 - std::sqrt(2.25) * C2216 -
               std::sqrt(2.25) * C3224 - std::sqrt(2.25) * C3476 +
               std::sqrt(9.) * C3728;
    gx[304] += std::sqrt(0.140625) * C168 - std::sqrt(0.140625) * C175 +
               std::sqrt(0.140625) * C420 - std::sqrt(0.140625) * C427 -
               std::sqrt(0.5625) * C672 + std::sqrt(0.5625) * C679 +
               std::sqrt(0.140625) * C1680 - std::sqrt(0.140625) * C1687 +
               std::sqrt(0.140625) * C1932 - std::sqrt(0.140625) * C1939 -
               std::sqrt(0.5625) * C2184 + std::sqrt(0.5625) * C2191 -
               std::sqrt(0.5625) * C3192 + std::sqrt(0.5625) * C3199 -
               std::sqrt(0.5625) * C3444 + std::sqrt(0.5625) * C3451 +
               std::sqrt(2.25) * C3696 - std::sqrt(2.25) * C3703;
    gy[304] += std::sqrt(0.140625) * C170 - std::sqrt(0.140625) * C177 +
               std::sqrt(0.140625) * C422 - std::sqrt(0.140625) * C429 -
               std::sqrt(0.5625) * C674 + std::sqrt(0.5625) * C681 +
               std::sqrt(0.140625) * C1682 - std::sqrt(0.140625) * C1689 +
               std::sqrt(0.140625) * C1934 - std::sqrt(0.140625) * C1941 -
               std::sqrt(0.5625) * C2186 + std::sqrt(0.5625) * C2193 -
               std::sqrt(0.5625) * C3194 + std::sqrt(0.5625) * C3201 -
               std::sqrt(0.5625) * C3446 + std::sqrt(0.5625) * C3453 +
               std::sqrt(2.25) * C3698 - std::sqrt(2.25) * C3705;
    gz[304] += std::sqrt(0.140625) * C172 - std::sqrt(0.140625) * C179 +
               std::sqrt(0.140625) * C424 - std::sqrt(0.140625) * C431 -
               std::sqrt(0.5625) * C676 + std::sqrt(0.5625) * C683 +
               std::sqrt(0.140625) * C1684 - std::sqrt(0.140625) * C1691 +
               std::sqrt(0.140625) * C1936 - std::sqrt(0.140625) * C1943 -
               std::sqrt(0.5625) * C2188 + std::sqrt(0.5625) * C2195 -
               std::sqrt(0.5625) * C3196 + std::sqrt(0.5625) * C3203 -
               std::sqrt(0.5625) * C3448 + std::sqrt(0.5625) * C3455 +
               std::sqrt(2.25) * C3700 - std::sqrt(2.25) * C3707;
    gx[305] += std::sqrt(0.5625) * C273 + std::sqrt(0.5625) * C525 -
               std::sqrt(2.25) * C777 + std::sqrt(0.5625) * C1785 +
               std::sqrt(0.5625) * C2037 - std::sqrt(2.25) * C2289 -
               std::sqrt(2.25) * C3297 - std::sqrt(2.25) * C3549 +
               std::sqrt(9.) * C3801;
    gy[305] += std::sqrt(0.5625) * C275 + std::sqrt(0.5625) * C527 -
               std::sqrt(2.25) * C779 + std::sqrt(0.5625) * C1787 +
               std::sqrt(0.5625) * C2039 - std::sqrt(2.25) * C2291 -
               std::sqrt(2.25) * C3299 - std::sqrt(2.25) * C3551 +
               std::sqrt(9.) * C3803;
    gz[305] += std::sqrt(0.5625) * C277 + std::sqrt(0.5625) * C529 -
               std::sqrt(2.25) * C781 + std::sqrt(0.5625) * C1789 +
               std::sqrt(0.5625) * C2041 - std::sqrt(2.25) * C2293 -
               std::sqrt(2.25) * C3301 - std::sqrt(2.25) * C3553 +
               std::sqrt(9.) * C3805;
    gx[306] += std::sqrt(0.5625) * C287 + std::sqrt(0.5625) * C539 -
               std::sqrt(2.25) * C791 + std::sqrt(0.5625) * C1799 +
               std::sqrt(0.5625) * C2051 - std::sqrt(2.25) * C2303 -
               std::sqrt(2.25) * C3311 - std::sqrt(2.25) * C3563 +
               std::sqrt(9.) * C3815;
    gy[306] += std::sqrt(0.5625) * C289 + std::sqrt(0.5625) * C541 -
               std::sqrt(2.25) * C793 + std::sqrt(0.5625) * C1801 +
               std::sqrt(0.5625) * C2053 - std::sqrt(2.25) * C2305 -
               std::sqrt(2.25) * C3313 - std::sqrt(2.25) * C3565 +
               std::sqrt(9.) * C3817;
    gz[306] += std::sqrt(0.5625) * C291 + std::sqrt(0.5625) * C543 -
               std::sqrt(2.25) * C795 + std::sqrt(0.5625) * C1803 +
               std::sqrt(0.5625) * C2055 - std::sqrt(2.25) * C2307 -
               std::sqrt(2.25) * C3315 - std::sqrt(2.25) * C3567 +
               std::sqrt(9.) * C3819;
    gx[307] += std::sqrt(0.1875) * C266 -
               (std::sqrt(0.046875) * C259 + std::sqrt(0.046875) * C252) -
               std::sqrt(0.046875) * C504 - std::sqrt(0.046875) * C511 +
               std::sqrt(0.1875) * C518 + std::sqrt(0.1875) * C756 +
               std::sqrt(0.1875) * C763 - std::sqrt(0.75) * C770 -
               std::sqrt(0.046875) * C1764 - std::sqrt(0.046875) * C1771 +
               std::sqrt(0.1875) * C1778 - std::sqrt(0.046875) * C2016 -
               std::sqrt(0.046875) * C2023 + std::sqrt(0.1875) * C2030 +
               std::sqrt(0.1875) * C2268 + std::sqrt(0.1875) * C2275 -
               std::sqrt(0.75) * C2282 + std::sqrt(0.1875) * C3276 +
               std::sqrt(0.1875) * C3283 - std::sqrt(0.75) * C3290 +
               std::sqrt(0.1875) * C3528 + std::sqrt(0.1875) * C3535 -
               std::sqrt(0.75) * C3542 - std::sqrt(0.75) * C3780 -
               std::sqrt(0.75) * C3787 + std::sqrt(3.0) * C3794;
    gy[307] += std::sqrt(0.1875) * C268 -
               (std::sqrt(0.046875) * C261 + std::sqrt(0.046875) * C254) -
               std::sqrt(0.046875) * C506 - std::sqrt(0.046875) * C513 +
               std::sqrt(0.1875) * C520 + std::sqrt(0.1875) * C758 +
               std::sqrt(0.1875) * C765 - std::sqrt(0.75) * C772 -
               std::sqrt(0.046875) * C1766 - std::sqrt(0.046875) * C1773 +
               std::sqrt(0.1875) * C1780 - std::sqrt(0.046875) * C2018 -
               std::sqrt(0.046875) * C2025 + std::sqrt(0.1875) * C2032 +
               std::sqrt(0.1875) * C2270 + std::sqrt(0.1875) * C2277 -
               std::sqrt(0.75) * C2284 + std::sqrt(0.1875) * C3278 +
               std::sqrt(0.1875) * C3285 - std::sqrt(0.75) * C3292 +
               std::sqrt(0.1875) * C3530 + std::sqrt(0.1875) * C3537 -
               std::sqrt(0.75) * C3544 - std::sqrt(0.75) * C3782 -
               std::sqrt(0.75) * C3789 + std::sqrt(3.0) * C3796;
    gz[307] += std::sqrt(0.1875) * C270 -
               (std::sqrt(0.046875) * C263 + std::sqrt(0.046875) * C256) -
               std::sqrt(0.046875) * C508 - std::sqrt(0.046875) * C515 +
               std::sqrt(0.1875) * C522 + std::sqrt(0.1875) * C760 +
               std::sqrt(0.1875) * C767 - std::sqrt(0.75) * C774 -
               std::sqrt(0.046875) * C1768 - std::sqrt(0.046875) * C1775 +
               std::sqrt(0.1875) * C1782 - std::sqrt(0.046875) * C2020 -
               std::sqrt(0.046875) * C2027 + std::sqrt(0.1875) * C2034 +
               std::sqrt(0.1875) * C2272 + std::sqrt(0.1875) * C2279 -
               std::sqrt(0.75) * C2286 + std::sqrt(0.1875) * C3280 +
               std::sqrt(0.1875) * C3287 - std::sqrt(0.75) * C3294 +
               std::sqrt(0.1875) * C3532 + std::sqrt(0.1875) * C3539 -
               std::sqrt(0.75) * C3546 - std::sqrt(0.75) * C3784 -
               std::sqrt(0.75) * C3791 + std::sqrt(3.0) * C3798;
    gx[308] += std::sqrt(0.5625) * C280 + std::sqrt(0.5625) * C532 -
               std::sqrt(2.25) * C784 + std::sqrt(0.5625) * C1792 +
               std::sqrt(0.5625) * C2044 - std::sqrt(2.25) * C2296 -
               std::sqrt(2.25) * C3304 - std::sqrt(2.25) * C3556 +
               std::sqrt(9.) * C3808;
    gy[308] += std::sqrt(0.5625) * C282 + std::sqrt(0.5625) * C534 -
               std::sqrt(2.25) * C786 + std::sqrt(0.5625) * C1794 +
               std::sqrt(0.5625) * C2046 - std::sqrt(2.25) * C2298 -
               std::sqrt(2.25) * C3306 - std::sqrt(2.25) * C3558 +
               std::sqrt(9.) * C3810;
    gz[308] += std::sqrt(0.5625) * C284 + std::sqrt(0.5625) * C536 -
               std::sqrt(2.25) * C788 + std::sqrt(0.5625) * C1796 +
               std::sqrt(0.5625) * C2048 - std::sqrt(2.25) * C2300 -
               std::sqrt(2.25) * C3308 - std::sqrt(2.25) * C3560 +
               std::sqrt(9.) * C3812;
    gx[309] += std::sqrt(0.140625) * C252 - std::sqrt(0.140625) * C259 +
               std::sqrt(0.140625) * C504 - std::sqrt(0.140625) * C511 -
               std::sqrt(0.5625) * C756 + std::sqrt(0.5625) * C763 +
               std::sqrt(0.140625) * C1764 - std::sqrt(0.140625) * C1771 +
               std::sqrt(0.140625) * C2016 - std::sqrt(0.140625) * C2023 -
               std::sqrt(0.5625) * C2268 + std::sqrt(0.5625) * C2275 -
               std::sqrt(0.5625) * C3276 + std::sqrt(0.5625) * C3283 -
               std::sqrt(0.5625) * C3528 + std::sqrt(0.5625) * C3535 +
               std::sqrt(2.25) * C3780 - std::sqrt(2.25) * C3787;
    gy[309] += std::sqrt(0.140625) * C254 - std::sqrt(0.140625) * C261 +
               std::sqrt(0.140625) * C506 - std::sqrt(0.140625) * C513 -
               std::sqrt(0.5625) * C758 + std::sqrt(0.5625) * C765 +
               std::sqrt(0.140625) * C1766 - std::sqrt(0.140625) * C1773 +
               std::sqrt(0.140625) * C2018 - std::sqrt(0.140625) * C2025 -
               std::sqrt(0.5625) * C2270 + std::sqrt(0.5625) * C2277 -
               std::sqrt(0.5625) * C3278 + std::sqrt(0.5625) * C3285 -
               std::sqrt(0.5625) * C3530 + std::sqrt(0.5625) * C3537 +
               std::sqrt(2.25) * C3782 - std::sqrt(2.25) * C3789;
    gz[309] += std::sqrt(0.140625) * C256 - std::sqrt(0.140625) * C263 +
               std::sqrt(0.140625) * C508 - std::sqrt(0.140625) * C515 -
               std::sqrt(0.5625) * C760 + std::sqrt(0.5625) * C767 +
               std::sqrt(0.140625) * C1768 - std::sqrt(0.140625) * C1775 +
               std::sqrt(0.140625) * C2020 - std::sqrt(0.140625) * C2027 -
               std::sqrt(0.5625) * C2272 + std::sqrt(0.5625) * C2279 -
               std::sqrt(0.5625) * C3280 + std::sqrt(0.5625) * C3287 -
               std::sqrt(0.5625) * C3532 + std::sqrt(0.5625) * C3539 +
               std::sqrt(2.25) * C3784 - std::sqrt(2.25) * C3791;
    gx[310] += std::sqrt(0.1875) * C147 -
               (std::sqrt(0.046875) * C105 + std::sqrt(0.046875) * C63) -
               std::sqrt(0.046875) * C315 - std::sqrt(0.046875) * C357 +
               std::sqrt(0.1875) * C399 + std::sqrt(0.1875) * C567 +
               std::sqrt(0.1875) * C609 - std::sqrt(0.75) * C651 -
               std::sqrt(0.046875) * C1575 - std::sqrt(0.046875) * C1617 +
               std::sqrt(0.1875) * C1659 - std::sqrt(0.046875) * C1827 -
               std::sqrt(0.046875) * C1869 + std::sqrt(0.1875) * C1911 +
               std::sqrt(0.1875) * C2079 + std::sqrt(0.1875) * C2121 -
               std::sqrt(0.75) * C2163 + std::sqrt(0.1875) * C3087 +
               std::sqrt(0.1875) * C3129 - std::sqrt(0.75) * C3171 +
               std::sqrt(0.1875) * C3339 + std::sqrt(0.1875) * C3381 -
               std::sqrt(0.75) * C3423 - std::sqrt(0.75) * C3591 -
               std::sqrt(0.75) * C3633 + std::sqrt(3.0) * C3675;
    gy[310] += std::sqrt(0.1875) * C149 -
               (std::sqrt(0.046875) * C107 + std::sqrt(0.046875) * C65) -
               std::sqrt(0.046875) * C317 - std::sqrt(0.046875) * C359 +
               std::sqrt(0.1875) * C401 + std::sqrt(0.1875) * C569 +
               std::sqrt(0.1875) * C611 - std::sqrt(0.75) * C653 -
               std::sqrt(0.046875) * C1577 - std::sqrt(0.046875) * C1619 +
               std::sqrt(0.1875) * C1661 - std::sqrt(0.046875) * C1829 -
               std::sqrt(0.046875) * C1871 + std::sqrt(0.1875) * C1913 +
               std::sqrt(0.1875) * C2081 + std::sqrt(0.1875) * C2123 -
               std::sqrt(0.75) * C2165 + std::sqrt(0.1875) * C3089 +
               std::sqrt(0.1875) * C3131 - std::sqrt(0.75) * C3173 +
               std::sqrt(0.1875) * C3341 + std::sqrt(0.1875) * C3383 -
               std::sqrt(0.75) * C3425 - std::sqrt(0.75) * C3593 -
               std::sqrt(0.75) * C3635 + std::sqrt(3.0) * C3677;
    gz[310] += std::sqrt(0.1875) * C151 -
               (std::sqrt(0.046875) * C109 + std::sqrt(0.046875) * C67) -
               std::sqrt(0.046875) * C319 - std::sqrt(0.046875) * C361 +
               std::sqrt(0.1875) * C403 + std::sqrt(0.1875) * C571 +
               std::sqrt(0.1875) * C613 - std::sqrt(0.75) * C655 -
               std::sqrt(0.046875) * C1579 - std::sqrt(0.046875) * C1621 +
               std::sqrt(0.1875) * C1663 - std::sqrt(0.046875) * C1831 -
               std::sqrt(0.046875) * C1873 + std::sqrt(0.1875) * C1915 +
               std::sqrt(0.1875) * C2083 + std::sqrt(0.1875) * C2125 -
               std::sqrt(0.75) * C2167 + std::sqrt(0.1875) * C3091 +
               std::sqrt(0.1875) * C3133 - std::sqrt(0.75) * C3175 +
               std::sqrt(0.1875) * C3343 + std::sqrt(0.1875) * C3385 -
               std::sqrt(0.75) * C3427 - std::sqrt(0.75) * C3595 -
               std::sqrt(0.75) * C3637 + std::sqrt(3.0) * C3679;
    gx[311] += std::sqrt(0.1875) * C161 -
               (std::sqrt(0.046875) * C119 + std::sqrt(0.046875) * C77) -
               std::sqrt(0.046875) * C329 - std::sqrt(0.046875) * C371 +
               std::sqrt(0.1875) * C413 + std::sqrt(0.1875) * C581 +
               std::sqrt(0.1875) * C623 - std::sqrt(0.75) * C665 -
               std::sqrt(0.046875) * C1589 - std::sqrt(0.046875) * C1631 +
               std::sqrt(0.1875) * C1673 - std::sqrt(0.046875) * C1841 -
               std::sqrt(0.046875) * C1883 + std::sqrt(0.1875) * C1925 +
               std::sqrt(0.1875) * C2093 + std::sqrt(0.1875) * C2135 -
               std::sqrt(0.75) * C2177 + std::sqrt(0.1875) * C3101 +
               std::sqrt(0.1875) * C3143 - std::sqrt(0.75) * C3185 +
               std::sqrt(0.1875) * C3353 + std::sqrt(0.1875) * C3395 -
               std::sqrt(0.75) * C3437 - std::sqrt(0.75) * C3605 -
               std::sqrt(0.75) * C3647 + std::sqrt(3.0) * C3689;
    gy[311] += std::sqrt(0.1875) * C163 -
               (std::sqrt(0.046875) * C121 + std::sqrt(0.046875) * C79) -
               std::sqrt(0.046875) * C331 - std::sqrt(0.046875) * C373 +
               std::sqrt(0.1875) * C415 + std::sqrt(0.1875) * C583 +
               std::sqrt(0.1875) * C625 - std::sqrt(0.75) * C667 -
               std::sqrt(0.046875) * C1591 - std::sqrt(0.046875) * C1633 +
               std::sqrt(0.1875) * C1675 - std::sqrt(0.046875) * C1843 -
               std::sqrt(0.046875) * C1885 + std::sqrt(0.1875) * C1927 +
               std::sqrt(0.1875) * C2095 + std::sqrt(0.1875) * C2137 -
               std::sqrt(0.75) * C2179 + std::sqrt(0.1875) * C3103 +
               std::sqrt(0.1875) * C3145 - std::sqrt(0.75) * C3187 +
               std::sqrt(0.1875) * C3355 + std::sqrt(0.1875) * C3397 -
               std::sqrt(0.75) * C3439 - std::sqrt(0.75) * C3607 -
               std::sqrt(0.75) * C3649 + std::sqrt(3.0) * C3691;
    gz[311] += std::sqrt(0.1875) * C165 -
               (std::sqrt(0.046875) * C123 + std::sqrt(0.046875) * C81) -
               std::sqrt(0.046875) * C333 - std::sqrt(0.046875) * C375 +
               std::sqrt(0.1875) * C417 + std::sqrt(0.1875) * C585 +
               std::sqrt(0.1875) * C627 - std::sqrt(0.75) * C669 -
               std::sqrt(0.046875) * C1593 - std::sqrt(0.046875) * C1635 +
               std::sqrt(0.1875) * C1677 - std::sqrt(0.046875) * C1845 -
               std::sqrt(0.046875) * C1887 + std::sqrt(0.1875) * C1929 +
               std::sqrt(0.1875) * C2097 + std::sqrt(0.1875) * C2139 -
               std::sqrt(0.75) * C2181 + std::sqrt(0.1875) * C3105 +
               std::sqrt(0.1875) * C3147 - std::sqrt(0.75) * C3189 +
               std::sqrt(0.1875) * C3357 + std::sqrt(0.1875) * C3399 -
               std::sqrt(0.75) * C3441 - std::sqrt(0.75) * C3609 -
               std::sqrt(0.75) * C3651 + std::sqrt(3.0) * C3693;
    gx[312] +=
        0.0625 * C40 + 0.0625 * C49 - 0.125 * C56 + 0.0625 * C84 +
        0.0625 * C91 - 0.125 * C98 - 0.125 * C126 - 0.125 * C133 + 0.25 * C140 +
        0.0625 * C294 + 0.0625 * C301 - 0.125 * C308 + 0.0625 * C336 +
        0.0625 * C343 - 0.125 * C350 - 0.125 * C378 - 0.125 * C385 +
        0.25 * C392 - 0.125 * C546 - 0.125 * C553 + 0.25 * C560 - 0.125 * C588 -
        0.125 * C595 + 0.25 * C602 + 0.25 * C630 + 0.25 * C637 - 0.5 * C644 +
        0.0625 * C1554 + 0.0625 * C1561 - 0.125 * C1568 + 0.0625 * C1596 +
        0.0625 * C1603 - 0.125 * C1610 - 0.125 * C1638 - 0.125 * C1645 +
        0.25 * C1652 + 0.0625 * C1806 + 0.0625 * C1813 - 0.125 * C1820 +
        0.0625 * C1848 + 0.0625 * C1855 - 0.125 * C1862 - 0.125 * C1890 -
        0.125 * C1897 + 0.25 * C1904 - 0.125 * C2058 - 0.125 * C2065 +
        0.25 * C2072 - 0.125 * C2100 - 0.125 * C2107 + 0.25 * C2114 +
        0.25 * C2142 + 0.25 * C2149 - 0.5 * C2156 - 0.125 * C3066 -
        0.125 * C3073 + 0.25 * C3080 - 0.125 * C3108 - 0.125 * C3115 +
        0.25 * C3122 + 0.25 * C3150 + 0.25 * C3157 - 0.5 * C3164 -
        0.125 * C3318 - 0.125 * C3325 + 0.25 * C3332 - 0.125 * C3360 -
        0.125 * C3367 + 0.25 * C3374 + 0.25 * C3402 + 0.25 * C3409 -
        0.5 * C3416 + 0.25 * C3570 + 0.25 * C3577 - 0.5 * C3584 + 0.25 * C3612 +
        0.25 * C3619 - 0.5 * C3626 - 0.5 * C3654 - 0.5 * C3661 + C3668;
    gy[312] += 0.0625 * C44 + 0.0625 * C51 - 0.125 * C58 + 0.0625 * C86 +
               0.0625 * C93 - 0.125 * C100 - 0.125 * C128 - 0.125 * C135 +
               0.25 * C142 + 0.0625 * C296 + 0.0625 * C303 - 0.125 * C310 +
               0.0625 * C338 + 0.0625 * C345 - 0.125 * C352 - 0.125 * C380 -
               0.125 * C387 + 0.25 * C394 - 0.125 * C548 - 0.125 * C555 +
               0.25 * C562 - 0.125 * C590 - 0.125 * C597 + 0.25 * C604 +
               0.25 * C632 + 0.25 * C639 - 0.5 * C646 + 0.0625 * C1556 +
               0.0625 * C1563 - 0.125 * C1570 + 0.0625 * C1598 +
               0.0625 * C1605 - 0.125 * C1612 - 0.125 * C1640 - 0.125 * C1647 +
               0.25 * C1654 + 0.0625 * C1808 + 0.0625 * C1815 - 0.125 * C1822 +
               0.0625 * C1850 + 0.0625 * C1857 - 0.125 * C1864 - 0.125 * C1892 -
               0.125 * C1899 + 0.25 * C1906 - 0.125 * C2060 - 0.125 * C2067 +
               0.25 * C2074 - 0.125 * C2102 - 0.125 * C2109 + 0.25 * C2116 +
               0.25 * C2144 + 0.25 * C2151 - 0.5 * C2158 - 0.125 * C3068 -
               0.125 * C3075 + 0.25 * C3082 - 0.125 * C3110 - 0.125 * C3117 +
               0.25 * C3124 + 0.25 * C3152 + 0.25 * C3159 - 0.5 * C3166 -
               0.125 * C3320 - 0.125 * C3327 + 0.25 * C3334 - 0.125 * C3362 -
               0.125 * C3369 + 0.25 * C3376 + 0.25 * C3404 + 0.25 * C3411 -
               0.5 * C3418 + 0.25 * C3572 + 0.25 * C3579 - 0.5 * C3586 +
               0.25 * C3614 + 0.25 * C3621 - 0.5 * C3628 - 0.5 * C3656 -
               0.5 * C3663 + C3670;
    gz[312] += 0.0625 * C46 + 0.0625 * C53 - 0.125 * C60 + 0.0625 * C88 +
               0.0625 * C95 - 0.125 * C102 - 0.125 * C130 - 0.125 * C137 +
               0.25 * C144 + 0.0625 * C298 + 0.0625 * C305 - 0.125 * C312 +
               0.0625 * C340 + 0.0625 * C347 - 0.125 * C354 - 0.125 * C382 -
               0.125 * C389 + 0.25 * C396 - 0.125 * C550 - 0.125 * C557 +
               0.25 * C564 - 0.125 * C592 - 0.125 * C599 + 0.25 * C606 +
               0.25 * C634 + 0.25 * C641 - 0.5 * C648 + 0.0625 * C1558 +
               0.0625 * C1565 - 0.125 * C1572 + 0.0625 * C1600 +
               0.0625 * C1607 - 0.125 * C1614 - 0.125 * C1642 - 0.125 * C1649 +
               0.25 * C1656 + 0.0625 * C1810 + 0.0625 * C1817 - 0.125 * C1824 +
               0.0625 * C1852 + 0.0625 * C1859 - 0.125 * C1866 - 0.125 * C1894 -
               0.125 * C1901 + 0.25 * C1908 - 0.125 * C2062 - 0.125 * C2069 +
               0.25 * C2076 - 0.125 * C2104 - 0.125 * C2111 + 0.25 * C2118 +
               0.25 * C2146 + 0.25 * C2153 - 0.5 * C2160 - 0.125 * C3070 -
               0.125 * C3077 + 0.25 * C3084 - 0.125 * C3112 - 0.125 * C3119 +
               0.25 * C3126 + 0.25 * C3154 + 0.25 * C3161 - 0.5 * C3168 -
               0.125 * C3322 - 0.125 * C3329 + 0.25 * C3336 - 0.125 * C3364 -
               0.125 * C3371 + 0.25 * C3378 + 0.25 * C3406 + 0.25 * C3413 -
               0.5 * C3420 + 0.25 * C3574 + 0.25 * C3581 - 0.5 * C3588 +
               0.25 * C3616 + 0.25 * C3623 - 0.5 * C3630 - 0.5 * C3658 -
               0.5 * C3665 + C3672;
    gx[313] += std::sqrt(0.1875) * C154 -
               (std::sqrt(0.046875) * C112 + std::sqrt(0.046875) * C70) -
               std::sqrt(0.046875) * C322 - std::sqrt(0.046875) * C364 +
               std::sqrt(0.1875) * C406 + std::sqrt(0.1875) * C574 +
               std::sqrt(0.1875) * C616 - std::sqrt(0.75) * C658 -
               std::sqrt(0.046875) * C1582 - std::sqrt(0.046875) * C1624 +
               std::sqrt(0.1875) * C1666 - std::sqrt(0.046875) * C1834 -
               std::sqrt(0.046875) * C1876 + std::sqrt(0.1875) * C1918 +
               std::sqrt(0.1875) * C2086 + std::sqrt(0.1875) * C2128 -
               std::sqrt(0.75) * C2170 + std::sqrt(0.1875) * C3094 +
               std::sqrt(0.1875) * C3136 - std::sqrt(0.75) * C3178 +
               std::sqrt(0.1875) * C3346 + std::sqrt(0.1875) * C3388 -
               std::sqrt(0.75) * C3430 - std::sqrt(0.75) * C3598 -
               std::sqrt(0.75) * C3640 + std::sqrt(3.0) * C3682;
    gy[313] += std::sqrt(0.1875) * C156 -
               (std::sqrt(0.046875) * C114 + std::sqrt(0.046875) * C72) -
               std::sqrt(0.046875) * C324 - std::sqrt(0.046875) * C366 +
               std::sqrt(0.1875) * C408 + std::sqrt(0.1875) * C576 +
               std::sqrt(0.1875) * C618 - std::sqrt(0.75) * C660 -
               std::sqrt(0.046875) * C1584 - std::sqrt(0.046875) * C1626 +
               std::sqrt(0.1875) * C1668 - std::sqrt(0.046875) * C1836 -
               std::sqrt(0.046875) * C1878 + std::sqrt(0.1875) * C1920 +
               std::sqrt(0.1875) * C2088 + std::sqrt(0.1875) * C2130 -
               std::sqrt(0.75) * C2172 + std::sqrt(0.1875) * C3096 +
               std::sqrt(0.1875) * C3138 - std::sqrt(0.75) * C3180 +
               std::sqrt(0.1875) * C3348 + std::sqrt(0.1875) * C3390 -
               std::sqrt(0.75) * C3432 - std::sqrt(0.75) * C3600 -
               std::sqrt(0.75) * C3642 + std::sqrt(3.0) * C3684;
    gz[313] += std::sqrt(0.1875) * C158 -
               (std::sqrt(0.046875) * C116 + std::sqrt(0.046875) * C74) -
               std::sqrt(0.046875) * C326 - std::sqrt(0.046875) * C368 +
               std::sqrt(0.1875) * C410 + std::sqrt(0.1875) * C578 +
               std::sqrt(0.1875) * C620 - std::sqrt(0.75) * C662 -
               std::sqrt(0.046875) * C1586 - std::sqrt(0.046875) * C1628 +
               std::sqrt(0.1875) * C1670 - std::sqrt(0.046875) * C1838 -
               std::sqrt(0.046875) * C1880 + std::sqrt(0.1875) * C1922 +
               std::sqrt(0.1875) * C2090 + std::sqrt(0.1875) * C2132 -
               std::sqrt(0.75) * C2174 + std::sqrt(0.1875) * C3098 +
               std::sqrt(0.1875) * C3140 - std::sqrt(0.75) * C3182 +
               std::sqrt(0.1875) * C3350 + std::sqrt(0.1875) * C3392 -
               std::sqrt(0.75) * C3434 - std::sqrt(0.75) * C3602 -
               std::sqrt(0.75) * C3644 + std::sqrt(3.0) * C3686;
    gx[314] += std::sqrt(0.01171875) * C49 - std::sqrt(0.01171875) * C40 -
               std::sqrt(0.01171875) * C84 + std::sqrt(0.01171875) * C91 +
               std::sqrt(0.046875) * C126 - std::sqrt(0.046875) * C133 -
               std::sqrt(0.01171875) * C294 + std::sqrt(0.01171875) * C301 -
               std::sqrt(0.01171875) * C336 + std::sqrt(0.01171875) * C343 +
               std::sqrt(0.046875) * C378 - std::sqrt(0.046875) * C385 +
               std::sqrt(0.046875) * C546 - std::sqrt(0.046875) * C553 +
               std::sqrt(0.046875) * C588 - std::sqrt(0.046875) * C595 -
               std::sqrt(0.1875) * C630 + std::sqrt(0.1875) * C637 -
               std::sqrt(0.01171875) * C1554 + std::sqrt(0.01171875) * C1561 -
               std::sqrt(0.01171875) * C1596 + std::sqrt(0.01171875) * C1603 +
               std::sqrt(0.046875) * C1638 - std::sqrt(0.046875) * C1645 -
               std::sqrt(0.01171875) * C1806 + std::sqrt(0.01171875) * C1813 -
               std::sqrt(0.01171875) * C1848 + std::sqrt(0.01171875) * C1855 +
               std::sqrt(0.046875) * C1890 - std::sqrt(0.046875) * C1897 +
               std::sqrt(0.046875) * C2058 - std::sqrt(0.046875) * C2065 +
               std::sqrt(0.046875) * C2100 - std::sqrt(0.046875) * C2107 -
               std::sqrt(0.1875) * C2142 + std::sqrt(0.1875) * C2149 +
               std::sqrt(0.046875) * C3066 - std::sqrt(0.046875) * C3073 +
               std::sqrt(0.046875) * C3108 - std::sqrt(0.046875) * C3115 -
               std::sqrt(0.1875) * C3150 + std::sqrt(0.1875) * C3157 +
               std::sqrt(0.046875) * C3318 - std::sqrt(0.046875) * C3325 +
               std::sqrt(0.046875) * C3360 - std::sqrt(0.046875) * C3367 -
               std::sqrt(0.1875) * C3402 + std::sqrt(0.1875) * C3409 -
               std::sqrt(0.1875) * C3570 + std::sqrt(0.1875) * C3577 -
               std::sqrt(0.1875) * C3612 + std::sqrt(0.1875) * C3619 +
               std::sqrt(0.75) * C3654 - std::sqrt(0.75) * C3661;
    gy[314] += std::sqrt(0.01171875) * C51 - std::sqrt(0.01171875) * C44 -
               std::sqrt(0.01171875) * C86 + std::sqrt(0.01171875) * C93 +
               std::sqrt(0.046875) * C128 - std::sqrt(0.046875) * C135 -
               std::sqrt(0.01171875) * C296 + std::sqrt(0.01171875) * C303 -
               std::sqrt(0.01171875) * C338 + std::sqrt(0.01171875) * C345 +
               std::sqrt(0.046875) * C380 - std::sqrt(0.046875) * C387 +
               std::sqrt(0.046875) * C548 - std::sqrt(0.046875) * C555 +
               std::sqrt(0.046875) * C590 - std::sqrt(0.046875) * C597 -
               std::sqrt(0.1875) * C632 + std::sqrt(0.1875) * C639 -
               std::sqrt(0.01171875) * C1556 + std::sqrt(0.01171875) * C1563 -
               std::sqrt(0.01171875) * C1598 + std::sqrt(0.01171875) * C1605 +
               std::sqrt(0.046875) * C1640 - std::sqrt(0.046875) * C1647 -
               std::sqrt(0.01171875) * C1808 + std::sqrt(0.01171875) * C1815 -
               std::sqrt(0.01171875) * C1850 + std::sqrt(0.01171875) * C1857 +
               std::sqrt(0.046875) * C1892 - std::sqrt(0.046875) * C1899 +
               std::sqrt(0.046875) * C2060 - std::sqrt(0.046875) * C2067 +
               std::sqrt(0.046875) * C2102 - std::sqrt(0.046875) * C2109 -
               std::sqrt(0.1875) * C2144 + std::sqrt(0.1875) * C2151 +
               std::sqrt(0.046875) * C3068 - std::sqrt(0.046875) * C3075 +
               std::sqrt(0.046875) * C3110 - std::sqrt(0.046875) * C3117 -
               std::sqrt(0.1875) * C3152 + std::sqrt(0.1875) * C3159 +
               std::sqrt(0.046875) * C3320 - std::sqrt(0.046875) * C3327 +
               std::sqrt(0.046875) * C3362 - std::sqrt(0.046875) * C3369 -
               std::sqrt(0.1875) * C3404 + std::sqrt(0.1875) * C3411 -
               std::sqrt(0.1875) * C3572 + std::sqrt(0.1875) * C3579 -
               std::sqrt(0.1875) * C3614 + std::sqrt(0.1875) * C3621 +
               std::sqrt(0.75) * C3656 - std::sqrt(0.75) * C3663;
    gz[314] += std::sqrt(0.01171875) * C53 - std::sqrt(0.01171875) * C46 -
               std::sqrt(0.01171875) * C88 + std::sqrt(0.01171875) * C95 +
               std::sqrt(0.046875) * C130 - std::sqrt(0.046875) * C137 -
               std::sqrt(0.01171875) * C298 + std::sqrt(0.01171875) * C305 -
               std::sqrt(0.01171875) * C340 + std::sqrt(0.01171875) * C347 +
               std::sqrt(0.046875) * C382 - std::sqrt(0.046875) * C389 +
               std::sqrt(0.046875) * C550 - std::sqrt(0.046875) * C557 +
               std::sqrt(0.046875) * C592 - std::sqrt(0.046875) * C599 -
               std::sqrt(0.1875) * C634 + std::sqrt(0.1875) * C641 -
               std::sqrt(0.01171875) * C1558 + std::sqrt(0.01171875) * C1565 -
               std::sqrt(0.01171875) * C1600 + std::sqrt(0.01171875) * C1607 +
               std::sqrt(0.046875) * C1642 - std::sqrt(0.046875) * C1649 -
               std::sqrt(0.01171875) * C1810 + std::sqrt(0.01171875) * C1817 -
               std::sqrt(0.01171875) * C1852 + std::sqrt(0.01171875) * C1859 +
               std::sqrt(0.046875) * C1894 - std::sqrt(0.046875) * C1901 +
               std::sqrt(0.046875) * C2062 - std::sqrt(0.046875) * C2069 +
               std::sqrt(0.046875) * C2104 - std::sqrt(0.046875) * C2111 -
               std::sqrt(0.1875) * C2146 + std::sqrt(0.1875) * C2153 +
               std::sqrt(0.046875) * C3070 - std::sqrt(0.046875) * C3077 +
               std::sqrt(0.046875) * C3112 - std::sqrt(0.046875) * C3119 -
               std::sqrt(0.1875) * C3154 + std::sqrt(0.1875) * C3161 +
               std::sqrt(0.046875) * C3322 - std::sqrt(0.046875) * C3329 +
               std::sqrt(0.046875) * C3364 - std::sqrt(0.046875) * C3371 -
               std::sqrt(0.1875) * C3406 + std::sqrt(0.1875) * C3413 -
               std::sqrt(0.1875) * C3574 + std::sqrt(0.1875) * C3581 -
               std::sqrt(0.1875) * C3616 + std::sqrt(0.1875) * C3623 +
               std::sqrt(0.75) * C3658 - std::sqrt(0.75) * C3665;
    gx[315] += std::sqrt(0.5625) * C231 + std::sqrt(0.5625) * C483 -
               std::sqrt(2.25) * C735 + std::sqrt(0.5625) * C1743 +
               std::sqrt(0.5625) * C1995 - std::sqrt(2.25) * C2247 -
               std::sqrt(2.25) * C3255 - std::sqrt(2.25) * C3507 +
               std::sqrt(9.) * C3759;
    gy[315] += std::sqrt(0.5625) * C233 + std::sqrt(0.5625) * C485 -
               std::sqrt(2.25) * C737 + std::sqrt(0.5625) * C1745 +
               std::sqrt(0.5625) * C1997 - std::sqrt(2.25) * C2249 -
               std::sqrt(2.25) * C3257 - std::sqrt(2.25) * C3509 +
               std::sqrt(9.) * C3761;
    gz[315] += std::sqrt(0.5625) * C235 + std::sqrt(0.5625) * C487 -
               std::sqrt(2.25) * C739 + std::sqrt(0.5625) * C1747 +
               std::sqrt(0.5625) * C1999 - std::sqrt(2.25) * C2251 -
               std::sqrt(2.25) * C3259 - std::sqrt(2.25) * C3511 +
               std::sqrt(9.) * C3763;
    gx[316] += std::sqrt(0.5625) * C245 + std::sqrt(0.5625) * C497 -
               std::sqrt(2.25) * C749 + std::sqrt(0.5625) * C1757 +
               std::sqrt(0.5625) * C2009 - std::sqrt(2.25) * C2261 -
               std::sqrt(2.25) * C3269 - std::sqrt(2.25) * C3521 +
               std::sqrt(9.) * C3773;
    gy[316] += std::sqrt(0.5625) * C247 + std::sqrt(0.5625) * C499 -
               std::sqrt(2.25) * C751 + std::sqrt(0.5625) * C1759 +
               std::sqrt(0.5625) * C2011 - std::sqrt(2.25) * C2263 -
               std::sqrt(2.25) * C3271 - std::sqrt(2.25) * C3523 +
               std::sqrt(9.) * C3775;
    gz[316] += std::sqrt(0.5625) * C249 + std::sqrt(0.5625) * C501 -
               std::sqrt(2.25) * C753 + std::sqrt(0.5625) * C1761 +
               std::sqrt(0.5625) * C2013 - std::sqrt(2.25) * C2265 -
               std::sqrt(2.25) * C3273 - std::sqrt(2.25) * C3525 +
               std::sqrt(9.) * C3777;
    gx[317] += std::sqrt(0.1875) * C224 -
               (std::sqrt(0.046875) * C217 + std::sqrt(0.046875) * C210) -
               std::sqrt(0.046875) * C462 - std::sqrt(0.046875) * C469 +
               std::sqrt(0.1875) * C476 + std::sqrt(0.1875) * C714 +
               std::sqrt(0.1875) * C721 - std::sqrt(0.75) * C728 -
               std::sqrt(0.046875) * C1722 - std::sqrt(0.046875) * C1729 +
               std::sqrt(0.1875) * C1736 - std::sqrt(0.046875) * C1974 -
               std::sqrt(0.046875) * C1981 + std::sqrt(0.1875) * C1988 +
               std::sqrt(0.1875) * C2226 + std::sqrt(0.1875) * C2233 -
               std::sqrt(0.75) * C2240 + std::sqrt(0.1875) * C3234 +
               std::sqrt(0.1875) * C3241 - std::sqrt(0.75) * C3248 +
               std::sqrt(0.1875) * C3486 + std::sqrt(0.1875) * C3493 -
               std::sqrt(0.75) * C3500 - std::sqrt(0.75) * C3738 -
               std::sqrt(0.75) * C3745 + std::sqrt(3.0) * C3752;
    gy[317] += std::sqrt(0.1875) * C226 -
               (std::sqrt(0.046875) * C219 + std::sqrt(0.046875) * C212) -
               std::sqrt(0.046875) * C464 - std::sqrt(0.046875) * C471 +
               std::sqrt(0.1875) * C478 + std::sqrt(0.1875) * C716 +
               std::sqrt(0.1875) * C723 - std::sqrt(0.75) * C730 -
               std::sqrt(0.046875) * C1724 - std::sqrt(0.046875) * C1731 +
               std::sqrt(0.1875) * C1738 - std::sqrt(0.046875) * C1976 -
               std::sqrt(0.046875) * C1983 + std::sqrt(0.1875) * C1990 +
               std::sqrt(0.1875) * C2228 + std::sqrt(0.1875) * C2235 -
               std::sqrt(0.75) * C2242 + std::sqrt(0.1875) * C3236 +
               std::sqrt(0.1875) * C3243 - std::sqrt(0.75) * C3250 +
               std::sqrt(0.1875) * C3488 + std::sqrt(0.1875) * C3495 -
               std::sqrt(0.75) * C3502 - std::sqrt(0.75) * C3740 -
               std::sqrt(0.75) * C3747 + std::sqrt(3.0) * C3754;
    gz[317] += std::sqrt(0.1875) * C228 -
               (std::sqrt(0.046875) * C221 + std::sqrt(0.046875) * C214) -
               std::sqrt(0.046875) * C466 - std::sqrt(0.046875) * C473 +
               std::sqrt(0.1875) * C480 + std::sqrt(0.1875) * C718 +
               std::sqrt(0.1875) * C725 - std::sqrt(0.75) * C732 -
               std::sqrt(0.046875) * C1726 - std::sqrt(0.046875) * C1733 +
               std::sqrt(0.1875) * C1740 - std::sqrt(0.046875) * C1978 -
               std::sqrt(0.046875) * C1985 + std::sqrt(0.1875) * C1992 +
               std::sqrt(0.1875) * C2230 + std::sqrt(0.1875) * C2237 -
               std::sqrt(0.75) * C2244 + std::sqrt(0.1875) * C3238 +
               std::sqrt(0.1875) * C3245 - std::sqrt(0.75) * C3252 +
               std::sqrt(0.1875) * C3490 + std::sqrt(0.1875) * C3497 -
               std::sqrt(0.75) * C3504 - std::sqrt(0.75) * C3742 -
               std::sqrt(0.75) * C3749 + std::sqrt(3.0) * C3756;
    gx[318] += std::sqrt(0.5625) * C238 + std::sqrt(0.5625) * C490 -
               std::sqrt(2.25) * C742 + std::sqrt(0.5625) * C1750 +
               std::sqrt(0.5625) * C2002 - std::sqrt(2.25) * C2254 -
               std::sqrt(2.25) * C3262 - std::sqrt(2.25) * C3514 +
               std::sqrt(9.) * C3766;
    gy[318] += std::sqrt(0.5625) * C240 + std::sqrt(0.5625) * C492 -
               std::sqrt(2.25) * C744 + std::sqrt(0.5625) * C1752 +
               std::sqrt(0.5625) * C2004 - std::sqrt(2.25) * C2256 -
               std::sqrt(2.25) * C3264 - std::sqrt(2.25) * C3516 +
               std::sqrt(9.) * C3768;
    gz[318] += std::sqrt(0.5625) * C242 + std::sqrt(0.5625) * C494 -
               std::sqrt(2.25) * C746 + std::sqrt(0.5625) * C1754 +
               std::sqrt(0.5625) * C2006 - std::sqrt(2.25) * C2258 -
               std::sqrt(2.25) * C3266 - std::sqrt(2.25) * C3518 +
               std::sqrt(9.) * C3770;
    gx[319] += std::sqrt(0.140625) * C210 - std::sqrt(0.140625) * C217 +
               std::sqrt(0.140625) * C462 - std::sqrt(0.140625) * C469 -
               std::sqrt(0.5625) * C714 + std::sqrt(0.5625) * C721 +
               std::sqrt(0.140625) * C1722 - std::sqrt(0.140625) * C1729 +
               std::sqrt(0.140625) * C1974 - std::sqrt(0.140625) * C1981 -
               std::sqrt(0.5625) * C2226 + std::sqrt(0.5625) * C2233 -
               std::sqrt(0.5625) * C3234 + std::sqrt(0.5625) * C3241 -
               std::sqrt(0.5625) * C3486 + std::sqrt(0.5625) * C3493 +
               std::sqrt(2.25) * C3738 - std::sqrt(2.25) * C3745;
    gy[319] += std::sqrt(0.140625) * C212 - std::sqrt(0.140625) * C219 +
               std::sqrt(0.140625) * C464 - std::sqrt(0.140625) * C471 -
               std::sqrt(0.5625) * C716 + std::sqrt(0.5625) * C723 +
               std::sqrt(0.140625) * C1724 - std::sqrt(0.140625) * C1731 +
               std::sqrt(0.140625) * C1976 - std::sqrt(0.140625) * C1983 -
               std::sqrt(0.5625) * C2228 + std::sqrt(0.5625) * C2235 -
               std::sqrt(0.5625) * C3236 + std::sqrt(0.5625) * C3243 -
               std::sqrt(0.5625) * C3488 + std::sqrt(0.5625) * C3495 +
               std::sqrt(2.25) * C3740 - std::sqrt(2.25) * C3747;
    gz[319] += std::sqrt(0.140625) * C214 - std::sqrt(0.140625) * C221 +
               std::sqrt(0.140625) * C466 - std::sqrt(0.140625) * C473 -
               std::sqrt(0.5625) * C718 + std::sqrt(0.5625) * C725 +
               std::sqrt(0.140625) * C1726 - std::sqrt(0.140625) * C1733 +
               std::sqrt(0.140625) * C1978 - std::sqrt(0.140625) * C1985 -
               std::sqrt(0.5625) * C2230 + std::sqrt(0.5625) * C2237 -
               std::sqrt(0.5625) * C3238 + std::sqrt(0.5625) * C3245 -
               std::sqrt(0.5625) * C3490 + std::sqrt(0.5625) * C3497 +
               std::sqrt(2.25) * C3742 - std::sqrt(2.25) * C3749;
    gx[320] += std::sqrt(0.140625) * C63 - std::sqrt(0.140625) * C105 +
               std::sqrt(0.140625) * C315 - std::sqrt(0.140625) * C357 -
               std::sqrt(0.5625) * C567 + std::sqrt(0.5625) * C609 +
               std::sqrt(0.140625) * C1575 - std::sqrt(0.140625) * C1617 +
               std::sqrt(0.140625) * C1827 - std::sqrt(0.140625) * C1869 -
               std::sqrt(0.5625) * C2079 + std::sqrt(0.5625) * C2121 -
               std::sqrt(0.5625) * C3087 + std::sqrt(0.5625) * C3129 -
               std::sqrt(0.5625) * C3339 + std::sqrt(0.5625) * C3381 +
               std::sqrt(2.25) * C3591 - std::sqrt(2.25) * C3633;
    gy[320] += std::sqrt(0.140625) * C65 - std::sqrt(0.140625) * C107 +
               std::sqrt(0.140625) * C317 - std::sqrt(0.140625) * C359 -
               std::sqrt(0.5625) * C569 + std::sqrt(0.5625) * C611 +
               std::sqrt(0.140625) * C1577 - std::sqrt(0.140625) * C1619 +
               std::sqrt(0.140625) * C1829 - std::sqrt(0.140625) * C1871 -
               std::sqrt(0.5625) * C2081 + std::sqrt(0.5625) * C2123 -
               std::sqrt(0.5625) * C3089 + std::sqrt(0.5625) * C3131 -
               std::sqrt(0.5625) * C3341 + std::sqrt(0.5625) * C3383 +
               std::sqrt(2.25) * C3593 - std::sqrt(2.25) * C3635;
    gz[320] += std::sqrt(0.140625) * C67 - std::sqrt(0.140625) * C109 +
               std::sqrt(0.140625) * C319 - std::sqrt(0.140625) * C361 -
               std::sqrt(0.5625) * C571 + std::sqrt(0.5625) * C613 +
               std::sqrt(0.140625) * C1579 - std::sqrt(0.140625) * C1621 +
               std::sqrt(0.140625) * C1831 - std::sqrt(0.140625) * C1873 -
               std::sqrt(0.5625) * C2083 + std::sqrt(0.5625) * C2125 -
               std::sqrt(0.5625) * C3091 + std::sqrt(0.5625) * C3133 -
               std::sqrt(0.5625) * C3343 + std::sqrt(0.5625) * C3385 +
               std::sqrt(2.25) * C3595 - std::sqrt(2.25) * C3637;
    gx[321] += std::sqrt(0.140625) * C77 - std::sqrt(0.140625) * C119 +
               std::sqrt(0.140625) * C329 - std::sqrt(0.140625) * C371 -
               std::sqrt(0.5625) * C581 + std::sqrt(0.5625) * C623 +
               std::sqrt(0.140625) * C1589 - std::sqrt(0.140625) * C1631 +
               std::sqrt(0.140625) * C1841 - std::sqrt(0.140625) * C1883 -
               std::sqrt(0.5625) * C2093 + std::sqrt(0.5625) * C2135 -
               std::sqrt(0.5625) * C3101 + std::sqrt(0.5625) * C3143 -
               std::sqrt(0.5625) * C3353 + std::sqrt(0.5625) * C3395 +
               std::sqrt(2.25) * C3605 - std::sqrt(2.25) * C3647;
    gy[321] += std::sqrt(0.140625) * C79 - std::sqrt(0.140625) * C121 +
               std::sqrt(0.140625) * C331 - std::sqrt(0.140625) * C373 -
               std::sqrt(0.5625) * C583 + std::sqrt(0.5625) * C625 +
               std::sqrt(0.140625) * C1591 - std::sqrt(0.140625) * C1633 +
               std::sqrt(0.140625) * C1843 - std::sqrt(0.140625) * C1885 -
               std::sqrt(0.5625) * C2095 + std::sqrt(0.5625) * C2137 -
               std::sqrt(0.5625) * C3103 + std::sqrt(0.5625) * C3145 -
               std::sqrt(0.5625) * C3355 + std::sqrt(0.5625) * C3397 +
               std::sqrt(2.25) * C3607 - std::sqrt(2.25) * C3649;
    gz[321] += std::sqrt(0.140625) * C81 - std::sqrt(0.140625) * C123 +
               std::sqrt(0.140625) * C333 - std::sqrt(0.140625) * C375 -
               std::sqrt(0.5625) * C585 + std::sqrt(0.5625) * C627 +
               std::sqrt(0.140625) * C1593 - std::sqrt(0.140625) * C1635 +
               std::sqrt(0.140625) * C1845 - std::sqrt(0.140625) * C1887 -
               std::sqrt(0.5625) * C2097 + std::sqrt(0.5625) * C2139 -
               std::sqrt(0.5625) * C3105 + std::sqrt(0.5625) * C3147 -
               std::sqrt(0.5625) * C3357 + std::sqrt(0.5625) * C3399 +
               std::sqrt(2.25) * C3609 - std::sqrt(2.25) * C3651;
    gx[322] += std::sqrt(0.046875) * C56 -
               (std::sqrt(0.01171875) * C49 + std::sqrt(0.01171875) * C40) +
               std::sqrt(0.01171875) * C84 + std::sqrt(0.01171875) * C91 -
               std::sqrt(0.046875) * C98 - std::sqrt(0.01171875) * C294 -
               std::sqrt(0.01171875) * C301 + std::sqrt(0.046875) * C308 +
               std::sqrt(0.01171875) * C336 + std::sqrt(0.01171875) * C343 -
               std::sqrt(0.046875) * C350 + std::sqrt(0.046875) * C546 +
               std::sqrt(0.046875) * C553 - std::sqrt(0.1875) * C560 -
               std::sqrt(0.046875) * C588 - std::sqrt(0.046875) * C595 +
               std::sqrt(0.1875) * C602 - std::sqrt(0.01171875) * C1554 -
               std::sqrt(0.01171875) * C1561 + std::sqrt(0.046875) * C1568 +
               std::sqrt(0.01171875) * C1596 + std::sqrt(0.01171875) * C1603 -
               std::sqrt(0.046875) * C1610 - std::sqrt(0.01171875) * C1806 -
               std::sqrt(0.01171875) * C1813 + std::sqrt(0.046875) * C1820 +
               std::sqrt(0.01171875) * C1848 + std::sqrt(0.01171875) * C1855 -
               std::sqrt(0.046875) * C1862 + std::sqrt(0.046875) * C2058 +
               std::sqrt(0.046875) * C2065 - std::sqrt(0.1875) * C2072 -
               std::sqrt(0.046875) * C2100 - std::sqrt(0.046875) * C2107 +
               std::sqrt(0.1875) * C2114 + std::sqrt(0.046875) * C3066 +
               std::sqrt(0.046875) * C3073 - std::sqrt(0.1875) * C3080 -
               std::sqrt(0.046875) * C3108 - std::sqrt(0.046875) * C3115 +
               std::sqrt(0.1875) * C3122 + std::sqrt(0.046875) * C3318 +
               std::sqrt(0.046875) * C3325 - std::sqrt(0.1875) * C3332 -
               std::sqrt(0.046875) * C3360 - std::sqrt(0.046875) * C3367 +
               std::sqrt(0.1875) * C3374 - std::sqrt(0.1875) * C3570 -
               std::sqrt(0.1875) * C3577 + std::sqrt(0.75) * C3584 +
               std::sqrt(0.1875) * C3612 + std::sqrt(0.1875) * C3619 -
               std::sqrt(0.75) * C3626;
    gy[322] += std::sqrt(0.046875) * C58 -
               (std::sqrt(0.01171875) * C51 + std::sqrt(0.01171875) * C44) +
               std::sqrt(0.01171875) * C86 + std::sqrt(0.01171875) * C93 -
               std::sqrt(0.046875) * C100 - std::sqrt(0.01171875) * C296 -
               std::sqrt(0.01171875) * C303 + std::sqrt(0.046875) * C310 +
               std::sqrt(0.01171875) * C338 + std::sqrt(0.01171875) * C345 -
               std::sqrt(0.046875) * C352 + std::sqrt(0.046875) * C548 +
               std::sqrt(0.046875) * C555 - std::sqrt(0.1875) * C562 -
               std::sqrt(0.046875) * C590 - std::sqrt(0.046875) * C597 +
               std::sqrt(0.1875) * C604 - std::sqrt(0.01171875) * C1556 -
               std::sqrt(0.01171875) * C1563 + std::sqrt(0.046875) * C1570 +
               std::sqrt(0.01171875) * C1598 + std::sqrt(0.01171875) * C1605 -
               std::sqrt(0.046875) * C1612 - std::sqrt(0.01171875) * C1808 -
               std::sqrt(0.01171875) * C1815 + std::sqrt(0.046875) * C1822 +
               std::sqrt(0.01171875) * C1850 + std::sqrt(0.01171875) * C1857 -
               std::sqrt(0.046875) * C1864 + std::sqrt(0.046875) * C2060 +
               std::sqrt(0.046875) * C2067 - std::sqrt(0.1875) * C2074 -
               std::sqrt(0.046875) * C2102 - std::sqrt(0.046875) * C2109 +
               std::sqrt(0.1875) * C2116 + std::sqrt(0.046875) * C3068 +
               std::sqrt(0.046875) * C3075 - std::sqrt(0.1875) * C3082 -
               std::sqrt(0.046875) * C3110 - std::sqrt(0.046875) * C3117 +
               std::sqrt(0.1875) * C3124 + std::sqrt(0.046875) * C3320 +
               std::sqrt(0.046875) * C3327 - std::sqrt(0.1875) * C3334 -
               std::sqrt(0.046875) * C3362 - std::sqrt(0.046875) * C3369 +
               std::sqrt(0.1875) * C3376 - std::sqrt(0.1875) * C3572 -
               std::sqrt(0.1875) * C3579 + std::sqrt(0.75) * C3586 +
               std::sqrt(0.1875) * C3614 + std::sqrt(0.1875) * C3621 -
               std::sqrt(0.75) * C3628;
    gz[322] += std::sqrt(0.046875) * C60 -
               (std::sqrt(0.01171875) * C53 + std::sqrt(0.01171875) * C46) +
               std::sqrt(0.01171875) * C88 + std::sqrt(0.01171875) * C95 -
               std::sqrt(0.046875) * C102 - std::sqrt(0.01171875) * C298 -
               std::sqrt(0.01171875) * C305 + std::sqrt(0.046875) * C312 +
               std::sqrt(0.01171875) * C340 + std::sqrt(0.01171875) * C347 -
               std::sqrt(0.046875) * C354 + std::sqrt(0.046875) * C550 +
               std::sqrt(0.046875) * C557 - std::sqrt(0.1875) * C564 -
               std::sqrt(0.046875) * C592 - std::sqrt(0.046875) * C599 +
               std::sqrt(0.1875) * C606 - std::sqrt(0.01171875) * C1558 -
               std::sqrt(0.01171875) * C1565 + std::sqrt(0.046875) * C1572 +
               std::sqrt(0.01171875) * C1600 + std::sqrt(0.01171875) * C1607 -
               std::sqrt(0.046875) * C1614 - std::sqrt(0.01171875) * C1810 -
               std::sqrt(0.01171875) * C1817 + std::sqrt(0.046875) * C1824 +
               std::sqrt(0.01171875) * C1852 + std::sqrt(0.01171875) * C1859 -
               std::sqrt(0.046875) * C1866 + std::sqrt(0.046875) * C2062 +
               std::sqrt(0.046875) * C2069 - std::sqrt(0.1875) * C2076 -
               std::sqrt(0.046875) * C2104 - std::sqrt(0.046875) * C2111 +
               std::sqrt(0.1875) * C2118 + std::sqrt(0.046875) * C3070 +
               std::sqrt(0.046875) * C3077 - std::sqrt(0.1875) * C3084 -
               std::sqrt(0.046875) * C3112 - std::sqrt(0.046875) * C3119 +
               std::sqrt(0.1875) * C3126 + std::sqrt(0.046875) * C3322 +
               std::sqrt(0.046875) * C3329 - std::sqrt(0.1875) * C3336 -
               std::sqrt(0.046875) * C3364 - std::sqrt(0.046875) * C3371 +
               std::sqrt(0.1875) * C3378 - std::sqrt(0.1875) * C3574 -
               std::sqrt(0.1875) * C3581 + std::sqrt(0.75) * C3588 +
               std::sqrt(0.1875) * C3616 + std::sqrt(0.1875) * C3623 -
               std::sqrt(0.75) * C3630;
    gx[323] += std::sqrt(0.140625) * C70 - std::sqrt(0.140625) * C112 +
               std::sqrt(0.140625) * C322 - std::sqrt(0.140625) * C364 -
               std::sqrt(0.5625) * C574 + std::sqrt(0.5625) * C616 +
               std::sqrt(0.140625) * C1582 - std::sqrt(0.140625) * C1624 +
               std::sqrt(0.140625) * C1834 - std::sqrt(0.140625) * C1876 -
               std::sqrt(0.5625) * C2086 + std::sqrt(0.5625) * C2128 -
               std::sqrt(0.5625) * C3094 + std::sqrt(0.5625) * C3136 -
               std::sqrt(0.5625) * C3346 + std::sqrt(0.5625) * C3388 +
               std::sqrt(2.25) * C3598 - std::sqrt(2.25) * C3640;
    gy[323] += std::sqrt(0.140625) * C72 - std::sqrt(0.140625) * C114 +
               std::sqrt(0.140625) * C324 - std::sqrt(0.140625) * C366 -
               std::sqrt(0.5625) * C576 + std::sqrt(0.5625) * C618 +
               std::sqrt(0.140625) * C1584 - std::sqrt(0.140625) * C1626 +
               std::sqrt(0.140625) * C1836 - std::sqrt(0.140625) * C1878 -
               std::sqrt(0.5625) * C2088 + std::sqrt(0.5625) * C2130 -
               std::sqrt(0.5625) * C3096 + std::sqrt(0.5625) * C3138 -
               std::sqrt(0.5625) * C3348 + std::sqrt(0.5625) * C3390 +
               std::sqrt(2.25) * C3600 - std::sqrt(2.25) * C3642;
    gz[323] += std::sqrt(0.140625) * C74 - std::sqrt(0.140625) * C116 +
               std::sqrt(0.140625) * C326 - std::sqrt(0.140625) * C368 -
               std::sqrt(0.5625) * C578 + std::sqrt(0.5625) * C620 +
               std::sqrt(0.140625) * C1586 - std::sqrt(0.140625) * C1628 +
               std::sqrt(0.140625) * C1838 - std::sqrt(0.140625) * C1880 -
               std::sqrt(0.5625) * C2090 + std::sqrt(0.5625) * C2132 -
               std::sqrt(0.5625) * C3098 + std::sqrt(0.5625) * C3140 -
               std::sqrt(0.5625) * C3350 + std::sqrt(0.5625) * C3392 +
               std::sqrt(2.25) * C3602 - std::sqrt(2.25) * C3644;
    gx[324] += std::sqrt(0.03515625) * C40 - std::sqrt(0.03515625) * C49 -
               std::sqrt(0.03515625) * C84 + std::sqrt(0.03515625) * C91 +
               std::sqrt(0.03515625) * C294 - std::sqrt(0.03515625) * C301 -
               std::sqrt(0.03515625) * C336 + std::sqrt(0.03515625) * C343 -
               std::sqrt(0.140625) * C546 + std::sqrt(0.140625) * C553 +
               std::sqrt(0.140625) * C588 - std::sqrt(0.140625) * C595 +
               std::sqrt(0.03515625) * C1554 - std::sqrt(0.03515625) * C1561 -
               std::sqrt(0.03515625) * C1596 + std::sqrt(0.03515625) * C1603 +
               std::sqrt(0.03515625) * C1806 - std::sqrt(0.03515625) * C1813 -
               std::sqrt(0.03515625) * C1848 + std::sqrt(0.03515625) * C1855 -
               std::sqrt(0.140625) * C2058 + std::sqrt(0.140625) * C2065 +
               std::sqrt(0.140625) * C2100 - std::sqrt(0.140625) * C2107 -
               std::sqrt(0.140625) * C3066 + std::sqrt(0.140625) * C3073 +
               std::sqrt(0.140625) * C3108 - std::sqrt(0.140625) * C3115 -
               std::sqrt(0.140625) * C3318 + std::sqrt(0.140625) * C3325 +
               std::sqrt(0.140625) * C3360 - std::sqrt(0.140625) * C3367 +
               std::sqrt(0.5625) * C3570 - std::sqrt(0.5625) * C3577 -
               std::sqrt(0.5625) * C3612 + std::sqrt(0.5625) * C3619;
    gy[324] += std::sqrt(0.03515625) * C44 - std::sqrt(0.03515625) * C51 -
               std::sqrt(0.03515625) * C86 + std::sqrt(0.03515625) * C93 +
               std::sqrt(0.03515625) * C296 - std::sqrt(0.03515625) * C303 -
               std::sqrt(0.03515625) * C338 + std::sqrt(0.03515625) * C345 -
               std::sqrt(0.140625) * C548 + std::sqrt(0.140625) * C555 +
               std::sqrt(0.140625) * C590 - std::sqrt(0.140625) * C597 +
               std::sqrt(0.03515625) * C1556 - std::sqrt(0.03515625) * C1563 -
               std::sqrt(0.03515625) * C1598 + std::sqrt(0.03515625) * C1605 +
               std::sqrt(0.03515625) * C1808 - std::sqrt(0.03515625) * C1815 -
               std::sqrt(0.03515625) * C1850 + std::sqrt(0.03515625) * C1857 -
               std::sqrt(0.140625) * C2060 + std::sqrt(0.140625) * C2067 +
               std::sqrt(0.140625) * C2102 - std::sqrt(0.140625) * C2109 -
               std::sqrt(0.140625) * C3068 + std::sqrt(0.140625) * C3075 +
               std::sqrt(0.140625) * C3110 - std::sqrt(0.140625) * C3117 -
               std::sqrt(0.140625) * C3320 + std::sqrt(0.140625) * C3327 +
               std::sqrt(0.140625) * C3362 - std::sqrt(0.140625) * C3369 +
               std::sqrt(0.5625) * C3572 - std::sqrt(0.5625) * C3579 -
               std::sqrt(0.5625) * C3614 + std::sqrt(0.5625) * C3621;
    gz[324] += std::sqrt(0.03515625) * C46 - std::sqrt(0.03515625) * C53 -
               std::sqrt(0.03515625) * C88 + std::sqrt(0.03515625) * C95 +
               std::sqrt(0.03515625) * C298 - std::sqrt(0.03515625) * C305 -
               std::sqrt(0.03515625) * C340 + std::sqrt(0.03515625) * C347 -
               std::sqrt(0.140625) * C550 + std::sqrt(0.140625) * C557 +
               std::sqrt(0.140625) * C592 - std::sqrt(0.140625) * C599 +
               std::sqrt(0.03515625) * C1558 - std::sqrt(0.03515625) * C1565 -
               std::sqrt(0.03515625) * C1600 + std::sqrt(0.03515625) * C1607 +
               std::sqrt(0.03515625) * C1810 - std::sqrt(0.03515625) * C1817 -
               std::sqrt(0.03515625) * C1852 + std::sqrt(0.03515625) * C1859 -
               std::sqrt(0.140625) * C2062 + std::sqrt(0.140625) * C2069 +
               std::sqrt(0.140625) * C2104 - std::sqrt(0.140625) * C2111 -
               std::sqrt(0.140625) * C3070 + std::sqrt(0.140625) * C3077 +
               std::sqrt(0.140625) * C3112 - std::sqrt(0.140625) * C3119 -
               std::sqrt(0.140625) * C3322 + std::sqrt(0.140625) * C3329 +
               std::sqrt(0.140625) * C3364 - std::sqrt(0.140625) * C3371 +
               std::sqrt(0.5625) * C3574 - std::sqrt(0.5625) * C3581 -
               std::sqrt(0.5625) * C3616 + std::sqrt(0.5625) * C3623;
    gx[325] += std::sqrt(27.) * C4221 -
               (std::sqrt(6.75) * C2709 + std::sqrt(6.75) * C1197);
    gy[325] += std::sqrt(27.) * C4223 -
               (std::sqrt(6.75) * C2711 + std::sqrt(6.75) * C1199);
    gz[325] += std::sqrt(27.) * C4225 -
               (std::sqrt(6.75) * C2713 + std::sqrt(6.75) * C1201);
    gx[326] += std::sqrt(27.) * C4235 -
               (std::sqrt(6.75) * C2723 + std::sqrt(6.75) * C1211);
    gy[326] += std::sqrt(27.) * C4237 -
               (std::sqrt(6.75) * C2725 + std::sqrt(6.75) * C1213);
    gz[326] += std::sqrt(27.) * C4239 -
               (std::sqrt(6.75) * C2727 + std::sqrt(6.75) * C1215);
    gx[327] += std::sqrt(0.5625) * C1176 + std::sqrt(0.5625) * C1183 -
               std::sqrt(2.25) * C1190 + std::sqrt(0.5625) * C2688 +
               std::sqrt(0.5625) * C2695 - std::sqrt(2.25) * C2702 -
               std::sqrt(2.25) * C4200 - std::sqrt(2.25) * C4207 +
               std::sqrt(9.) * C4214;
    gy[327] += std::sqrt(0.5625) * C1178 + std::sqrt(0.5625) * C1185 -
               std::sqrt(2.25) * C1192 + std::sqrt(0.5625) * C2690 +
               std::sqrt(0.5625) * C2697 - std::sqrt(2.25) * C2704 -
               std::sqrt(2.25) * C4202 - std::sqrt(2.25) * C4209 +
               std::sqrt(9.) * C4216;
    gz[327] += std::sqrt(0.5625) * C1180 + std::sqrt(0.5625) * C1187 -
               std::sqrt(2.25) * C1194 + std::sqrt(0.5625) * C2692 +
               std::sqrt(0.5625) * C2699 - std::sqrt(2.25) * C2706 -
               std::sqrt(2.25) * C4204 - std::sqrt(2.25) * C4211 +
               std::sqrt(9.) * C4218;
    gx[328] += std::sqrt(27.) * C4228 -
               (std::sqrt(6.75) * C2716 + std::sqrt(6.75) * C1204);
    gy[328] += std::sqrt(27.) * C4230 -
               (std::sqrt(6.75) * C2718 + std::sqrt(6.75) * C1206);
    gz[328] += std::sqrt(27.) * C4232 -
               (std::sqrt(6.75) * C2720 + std::sqrt(6.75) * C1208);
    gx[329] += std::sqrt(1.6875) * C1183 - std::sqrt(1.6875) * C1176 -
               std::sqrt(1.6875) * C2688 + std::sqrt(1.6875) * C2695 +
               std::sqrt(6.75) * C4200 - std::sqrt(6.75) * C4207;
    gy[329] += std::sqrt(1.6875) * C1185 - std::sqrt(1.6875) * C1178 -
               std::sqrt(1.6875) * C2690 + std::sqrt(1.6875) * C2697 +
               std::sqrt(6.75) * C4202 - std::sqrt(6.75) * C4209;
    gz[329] += std::sqrt(1.6875) * C1187 - std::sqrt(1.6875) * C1180 -
               std::sqrt(1.6875) * C2692 + std::sqrt(1.6875) * C2699 +
               std::sqrt(6.75) * C4204 - std::sqrt(6.75) * C4211;
    gx[330] += std::sqrt(27.) * C4305 -
               (std::sqrt(6.75) * C2793 + std::sqrt(6.75) * C1281);
    gy[330] += std::sqrt(27.) * C4307 -
               (std::sqrt(6.75) * C2795 + std::sqrt(6.75) * C1283);
    gz[330] += std::sqrt(27.) * C4309 -
               (std::sqrt(6.75) * C2797 + std::sqrt(6.75) * C1285);
    gx[331] += std::sqrt(27.) * C4319 -
               (std::sqrt(6.75) * C2807 + std::sqrt(6.75) * C1295);
    gy[331] += std::sqrt(27.) * C4321 -
               (std::sqrt(6.75) * C2809 + std::sqrt(6.75) * C1297);
    gz[331] += std::sqrt(27.) * C4323 -
               (std::sqrt(6.75) * C2811 + std::sqrt(6.75) * C1299);
    gx[332] += std::sqrt(0.5625) * C1260 + std::sqrt(0.5625) * C1267 -
               std::sqrt(2.25) * C1274 + std::sqrt(0.5625) * C2772 +
               std::sqrt(0.5625) * C2779 - std::sqrt(2.25) * C2786 -
               std::sqrt(2.25) * C4284 - std::sqrt(2.25) * C4291 +
               std::sqrt(9.) * C4298;
    gy[332] += std::sqrt(0.5625) * C1262 + std::sqrt(0.5625) * C1269 -
               std::sqrt(2.25) * C1276 + std::sqrt(0.5625) * C2774 +
               std::sqrt(0.5625) * C2781 - std::sqrt(2.25) * C2788 -
               std::sqrt(2.25) * C4286 - std::sqrt(2.25) * C4293 +
               std::sqrt(9.) * C4300;
    gz[332] += std::sqrt(0.5625) * C1264 + std::sqrt(0.5625) * C1271 -
               std::sqrt(2.25) * C1278 + std::sqrt(0.5625) * C2776 +
               std::sqrt(0.5625) * C2783 - std::sqrt(2.25) * C2790 -
               std::sqrt(2.25) * C4288 - std::sqrt(2.25) * C4295 +
               std::sqrt(9.) * C4302;
    gx[333] += std::sqrt(27.) * C4312 -
               (std::sqrt(6.75) * C2800 + std::sqrt(6.75) * C1288);
    gy[333] += std::sqrt(27.) * C4314 -
               (std::sqrt(6.75) * C2802 + std::sqrt(6.75) * C1290);
    gz[333] += std::sqrt(27.) * C4316 -
               (std::sqrt(6.75) * C2804 + std::sqrt(6.75) * C1292);
    gx[334] += std::sqrt(1.6875) * C1267 - std::sqrt(1.6875) * C1260 -
               std::sqrt(1.6875) * C2772 + std::sqrt(1.6875) * C2779 +
               std::sqrt(6.75) * C4284 - std::sqrt(6.75) * C4291;
    gy[334] += std::sqrt(1.6875) * C1269 - std::sqrt(1.6875) * C1262 -
               std::sqrt(1.6875) * C2774 + std::sqrt(1.6875) * C2781 +
               std::sqrt(6.75) * C4286 - std::sqrt(6.75) * C4293;
    gz[334] += std::sqrt(1.6875) * C1271 - std::sqrt(1.6875) * C1264 -
               std::sqrt(1.6875) * C2776 + std::sqrt(1.6875) * C2783 +
               std::sqrt(6.75) * C4288 - std::sqrt(6.75) * C4295;
    gx[335] += std::sqrt(0.5625) * C1071 + std::sqrt(0.5625) * C1113 -
               std::sqrt(2.25) * C1155 + std::sqrt(0.5625) * C2583 +
               std::sqrt(0.5625) * C2625 - std::sqrt(2.25) * C2667 -
               std::sqrt(2.25) * C4095 - std::sqrt(2.25) * C4137 +
               std::sqrt(9.) * C4179;
    gy[335] += std::sqrt(0.5625) * C1073 + std::sqrt(0.5625) * C1115 -
               std::sqrt(2.25) * C1157 + std::sqrt(0.5625) * C2585 +
               std::sqrt(0.5625) * C2627 - std::sqrt(2.25) * C2669 -
               std::sqrt(2.25) * C4097 - std::sqrt(2.25) * C4139 +
               std::sqrt(9.) * C4181;
    gz[335] += std::sqrt(0.5625) * C1075 + std::sqrt(0.5625) * C1117 -
               std::sqrt(2.25) * C1159 + std::sqrt(0.5625) * C2587 +
               std::sqrt(0.5625) * C2629 - std::sqrt(2.25) * C2671 -
               std::sqrt(2.25) * C4099 - std::sqrt(2.25) * C4141 +
               std::sqrt(9.) * C4183;
    gx[336] += std::sqrt(0.5625) * C1085 + std::sqrt(0.5625) * C1127 -
               std::sqrt(2.25) * C1169 + std::sqrt(0.5625) * C2597 +
               std::sqrt(0.5625) * C2639 - std::sqrt(2.25) * C2681 -
               std::sqrt(2.25) * C4109 - std::sqrt(2.25) * C4151 +
               std::sqrt(9.) * C4193;
    gy[336] += std::sqrt(0.5625) * C1087 + std::sqrt(0.5625) * C1129 -
               std::sqrt(2.25) * C1171 + std::sqrt(0.5625) * C2599 +
               std::sqrt(0.5625) * C2641 - std::sqrt(2.25) * C2683 -
               std::sqrt(2.25) * C4111 - std::sqrt(2.25) * C4153 +
               std::sqrt(9.) * C4195;
    gz[336] += std::sqrt(0.5625) * C1089 + std::sqrt(0.5625) * C1131 -
               std::sqrt(2.25) * C1173 + std::sqrt(0.5625) * C2601 +
               std::sqrt(0.5625) * C2643 - std::sqrt(2.25) * C2685 -
               std::sqrt(2.25) * C4113 - std::sqrt(2.25) * C4155 +
               std::sqrt(9.) * C4197;
    gx[337] += std::sqrt(0.1875) * C1064 -
               (std::sqrt(0.046875) * C1057 + std::sqrt(0.046875) * C1050) -
               std::sqrt(0.046875) * C1092 - std::sqrt(0.046875) * C1099 +
               std::sqrt(0.1875) * C1106 + std::sqrt(0.1875) * C1134 +
               std::sqrt(0.1875) * C1141 - std::sqrt(0.75) * C1148 -
               std::sqrt(0.046875) * C2562 - std::sqrt(0.046875) * C2569 +
               std::sqrt(0.1875) * C2576 - std::sqrt(0.046875) * C2604 -
               std::sqrt(0.046875) * C2611 + std::sqrt(0.1875) * C2618 +
               std::sqrt(0.1875) * C2646 + std::sqrt(0.1875) * C2653 -
               std::sqrt(0.75) * C2660 + std::sqrt(0.1875) * C4074 +
               std::sqrt(0.1875) * C4081 - std::sqrt(0.75) * C4088 +
               std::sqrt(0.1875) * C4116 + std::sqrt(0.1875) * C4123 -
               std::sqrt(0.75) * C4130 - std::sqrt(0.75) * C4158 -
               std::sqrt(0.75) * C4165 + std::sqrt(3.0) * C4172;
    gy[337] += std::sqrt(0.1875) * C1066 -
               (std::sqrt(0.046875) * C1059 + std::sqrt(0.046875) * C1052) -
               std::sqrt(0.046875) * C1094 - std::sqrt(0.046875) * C1101 +
               std::sqrt(0.1875) * C1108 + std::sqrt(0.1875) * C1136 +
               std::sqrt(0.1875) * C1143 - std::sqrt(0.75) * C1150 -
               std::sqrt(0.046875) * C2564 - std::sqrt(0.046875) * C2571 +
               std::sqrt(0.1875) * C2578 - std::sqrt(0.046875) * C2606 -
               std::sqrt(0.046875) * C2613 + std::sqrt(0.1875) * C2620 +
               std::sqrt(0.1875) * C2648 + std::sqrt(0.1875) * C2655 -
               std::sqrt(0.75) * C2662 + std::sqrt(0.1875) * C4076 +
               std::sqrt(0.1875) * C4083 - std::sqrt(0.75) * C4090 +
               std::sqrt(0.1875) * C4118 + std::sqrt(0.1875) * C4125 -
               std::sqrt(0.75) * C4132 - std::sqrt(0.75) * C4160 -
               std::sqrt(0.75) * C4167 + std::sqrt(3.0) * C4174;
    gz[337] += std::sqrt(0.1875) * C1068 -
               (std::sqrt(0.046875) * C1061 + std::sqrt(0.046875) * C1054) -
               std::sqrt(0.046875) * C1096 - std::sqrt(0.046875) * C1103 +
               std::sqrt(0.1875) * C1110 + std::sqrt(0.1875) * C1138 +
               std::sqrt(0.1875) * C1145 - std::sqrt(0.75) * C1152 -
               std::sqrt(0.046875) * C2566 - std::sqrt(0.046875) * C2573 +
               std::sqrt(0.1875) * C2580 - std::sqrt(0.046875) * C2608 -
               std::sqrt(0.046875) * C2615 + std::sqrt(0.1875) * C2622 +
               std::sqrt(0.1875) * C2650 + std::sqrt(0.1875) * C2657 -
               std::sqrt(0.75) * C2664 + std::sqrt(0.1875) * C4078 +
               std::sqrt(0.1875) * C4085 - std::sqrt(0.75) * C4092 +
               std::sqrt(0.1875) * C4120 + std::sqrt(0.1875) * C4127 -
               std::sqrt(0.75) * C4134 - std::sqrt(0.75) * C4162 -
               std::sqrt(0.75) * C4169 + std::sqrt(3.0) * C4176;
    gx[338] += std::sqrt(0.5625) * C1078 + std::sqrt(0.5625) * C1120 -
               std::sqrt(2.25) * C1162 + std::sqrt(0.5625) * C2590 +
               std::sqrt(0.5625) * C2632 - std::sqrt(2.25) * C2674 -
               std::sqrt(2.25) * C4102 - std::sqrt(2.25) * C4144 +
               std::sqrt(9.) * C4186;
    gy[338] += std::sqrt(0.5625) * C1080 + std::sqrt(0.5625) * C1122 -
               std::sqrt(2.25) * C1164 + std::sqrt(0.5625) * C2592 +
               std::sqrt(0.5625) * C2634 - std::sqrt(2.25) * C2676 -
               std::sqrt(2.25) * C4104 - std::sqrt(2.25) * C4146 +
               std::sqrt(9.) * C4188;
    gz[338] += std::sqrt(0.5625) * C1082 + std::sqrt(0.5625) * C1124 -
               std::sqrt(2.25) * C1166 + std::sqrt(0.5625) * C2594 +
               std::sqrt(0.5625) * C2636 - std::sqrt(2.25) * C2678 -
               std::sqrt(2.25) * C4106 - std::sqrt(2.25) * C4148 +
               std::sqrt(9.) * C4190;
    gx[339] += std::sqrt(0.140625) * C1050 - std::sqrt(0.140625) * C1057 +
               std::sqrt(0.140625) * C1092 - std::sqrt(0.140625) * C1099 -
               std::sqrt(0.5625) * C1134 + std::sqrt(0.5625) * C1141 +
               std::sqrt(0.140625) * C2562 - std::sqrt(0.140625) * C2569 +
               std::sqrt(0.140625) * C2604 - std::sqrt(0.140625) * C2611 -
               std::sqrt(0.5625) * C2646 + std::sqrt(0.5625) * C2653 -
               std::sqrt(0.5625) * C4074 + std::sqrt(0.5625) * C4081 -
               std::sqrt(0.5625) * C4116 + std::sqrt(0.5625) * C4123 +
               std::sqrt(2.25) * C4158 - std::sqrt(2.25) * C4165;
    gy[339] += std::sqrt(0.140625) * C1052 - std::sqrt(0.140625) * C1059 +
               std::sqrt(0.140625) * C1094 - std::sqrt(0.140625) * C1101 -
               std::sqrt(0.5625) * C1136 + std::sqrt(0.5625) * C1143 +
               std::sqrt(0.140625) * C2564 - std::sqrt(0.140625) * C2571 +
               std::sqrt(0.140625) * C2606 - std::sqrt(0.140625) * C2613 -
               std::sqrt(0.5625) * C2648 + std::sqrt(0.5625) * C2655 -
               std::sqrt(0.5625) * C4076 + std::sqrt(0.5625) * C4083 -
               std::sqrt(0.5625) * C4118 + std::sqrt(0.5625) * C4125 +
               std::sqrt(2.25) * C4160 - std::sqrt(2.25) * C4167;
    gz[339] += std::sqrt(0.140625) * C1054 - std::sqrt(0.140625) * C1061 +
               std::sqrt(0.140625) * C1096 - std::sqrt(0.140625) * C1103 -
               std::sqrt(0.5625) * C1138 + std::sqrt(0.5625) * C1145 +
               std::sqrt(0.140625) * C2566 - std::sqrt(0.140625) * C2573 +
               std::sqrt(0.140625) * C2608 - std::sqrt(0.140625) * C2615 -
               std::sqrt(0.5625) * C2650 + std::sqrt(0.5625) * C2657 -
               std::sqrt(0.5625) * C4078 + std::sqrt(0.5625) * C4085 -
               std::sqrt(0.5625) * C4120 + std::sqrt(0.5625) * C4127 +
               std::sqrt(2.25) * C4162 - std::sqrt(2.25) * C4169;
    gx[340] += std::sqrt(27.) * C4263 -
               (std::sqrt(6.75) * C2751 + std::sqrt(6.75) * C1239);
    gy[340] += std::sqrt(27.) * C4265 -
               (std::sqrt(6.75) * C2753 + std::sqrt(6.75) * C1241);
    gz[340] += std::sqrt(27.) * C4267 -
               (std::sqrt(6.75) * C2755 + std::sqrt(6.75) * C1243);
    gx[341] += std::sqrt(27.) * C4277 -
               (std::sqrt(6.75) * C2765 + std::sqrt(6.75) * C1253);
    gy[341] += std::sqrt(27.) * C4279 -
               (std::sqrt(6.75) * C2767 + std::sqrt(6.75) * C1255);
    gz[341] += std::sqrt(27.) * C4281 -
               (std::sqrt(6.75) * C2769 + std::sqrt(6.75) * C1257);
    gx[342] += std::sqrt(0.5625) * C1218 + std::sqrt(0.5625) * C1225 -
               std::sqrt(2.25) * C1232 + std::sqrt(0.5625) * C2730 +
               std::sqrt(0.5625) * C2737 - std::sqrt(2.25) * C2744 -
               std::sqrt(2.25) * C4242 - std::sqrt(2.25) * C4249 +
               std::sqrt(9.) * C4256;
    gy[342] += std::sqrt(0.5625) * C1220 + std::sqrt(0.5625) * C1227 -
               std::sqrt(2.25) * C1234 + std::sqrt(0.5625) * C2732 +
               std::sqrt(0.5625) * C2739 - std::sqrt(2.25) * C2746 -
               std::sqrt(2.25) * C4244 - std::sqrt(2.25) * C4251 +
               std::sqrt(9.) * C4258;
    gz[342] += std::sqrt(0.5625) * C1222 + std::sqrt(0.5625) * C1229 -
               std::sqrt(2.25) * C1236 + std::sqrt(0.5625) * C2734 +
               std::sqrt(0.5625) * C2741 - std::sqrt(2.25) * C2748 -
               std::sqrt(2.25) * C4246 - std::sqrt(2.25) * C4253 +
               std::sqrt(9.) * C4260;
    gx[343] += std::sqrt(27.) * C4270 -
               (std::sqrt(6.75) * C2758 + std::sqrt(6.75) * C1246);
    gy[343] += std::sqrt(27.) * C4272 -
               (std::sqrt(6.75) * C2760 + std::sqrt(6.75) * C1248);
    gz[343] += std::sqrt(27.) * C4274 -
               (std::sqrt(6.75) * C2762 + std::sqrt(6.75) * C1250);
    gx[344] += std::sqrt(1.6875) * C1225 - std::sqrt(1.6875) * C1218 -
               std::sqrt(1.6875) * C2730 + std::sqrt(1.6875) * C2737 +
               std::sqrt(6.75) * C4242 - std::sqrt(6.75) * C4249;
    gy[344] += std::sqrt(1.6875) * C1227 - std::sqrt(1.6875) * C1220 -
               std::sqrt(1.6875) * C2732 + std::sqrt(1.6875) * C2739 +
               std::sqrt(6.75) * C4244 - std::sqrt(6.75) * C4251;
    gz[344] += std::sqrt(1.6875) * C1229 - std::sqrt(1.6875) * C1222 -
               std::sqrt(1.6875) * C2734 + std::sqrt(1.6875) * C2741 +
               std::sqrt(6.75) * C4246 - std::sqrt(6.75) * C4253;
    gx[345] += std::sqrt(1.6875) * C1113 - std::sqrt(1.6875) * C1071 -
               std::sqrt(1.6875) * C2583 + std::sqrt(1.6875) * C2625 +
               std::sqrt(6.75) * C4095 - std::sqrt(6.75) * C4137;
    gy[345] += std::sqrt(1.6875) * C1115 - std::sqrt(1.6875) * C1073 -
               std::sqrt(1.6875) * C2585 + std::sqrt(1.6875) * C2627 +
               std::sqrt(6.75) * C4097 - std::sqrt(6.75) * C4139;
    gz[345] += std::sqrt(1.6875) * C1117 - std::sqrt(1.6875) * C1075 -
               std::sqrt(1.6875) * C2587 + std::sqrt(1.6875) * C2629 +
               std::sqrt(6.75) * C4099 - std::sqrt(6.75) * C4141;
    gx[346] += std::sqrt(1.6875) * C1127 - std::sqrt(1.6875) * C1085 -
               std::sqrt(1.6875) * C2597 + std::sqrt(1.6875) * C2639 +
               std::sqrt(6.75) * C4109 - std::sqrt(6.75) * C4151;
    gy[346] += std::sqrt(1.6875) * C1129 - std::sqrt(1.6875) * C1087 -
               std::sqrt(1.6875) * C2599 + std::sqrt(1.6875) * C2641 +
               std::sqrt(6.75) * C4111 - std::sqrt(6.75) * C4153;
    gz[346] += std::sqrt(1.6875) * C1131 - std::sqrt(1.6875) * C1089 -
               std::sqrt(1.6875) * C2601 + std::sqrt(1.6875) * C2643 +
               std::sqrt(6.75) * C4113 - std::sqrt(6.75) * C4155;
    gx[347] += std::sqrt(0.140625) * C1050 + std::sqrt(0.140625) * C1057 -
               std::sqrt(0.5625) * C1064 - std::sqrt(0.140625) * C1092 -
               std::sqrt(0.140625) * C1099 + std::sqrt(0.5625) * C1106 +
               std::sqrt(0.140625) * C2562 + std::sqrt(0.140625) * C2569 -
               std::sqrt(0.5625) * C2576 - std::sqrt(0.140625) * C2604 -
               std::sqrt(0.140625) * C2611 + std::sqrt(0.5625) * C2618 -
               std::sqrt(0.5625) * C4074 - std::sqrt(0.5625) * C4081 +
               std::sqrt(2.25) * C4088 + std::sqrt(0.5625) * C4116 +
               std::sqrt(0.5625) * C4123 - std::sqrt(2.25) * C4130;
    gy[347] += std::sqrt(0.140625) * C1052 + std::sqrt(0.140625) * C1059 -
               std::sqrt(0.5625) * C1066 - std::sqrt(0.140625) * C1094 -
               std::sqrt(0.140625) * C1101 + std::sqrt(0.5625) * C1108 +
               std::sqrt(0.140625) * C2564 + std::sqrt(0.140625) * C2571 -
               std::sqrt(0.5625) * C2578 - std::sqrt(0.140625) * C2606 -
               std::sqrt(0.140625) * C2613 + std::sqrt(0.5625) * C2620 -
               std::sqrt(0.5625) * C4076 - std::sqrt(0.5625) * C4083 +
               std::sqrt(2.25) * C4090 + std::sqrt(0.5625) * C4118 +
               std::sqrt(0.5625) * C4125 - std::sqrt(2.25) * C4132;
    gz[347] += std::sqrt(0.140625) * C1054 + std::sqrt(0.140625) * C1061 -
               std::sqrt(0.5625) * C1068 - std::sqrt(0.140625) * C1096 -
               std::sqrt(0.140625) * C1103 + std::sqrt(0.5625) * C1110 +
               std::sqrt(0.140625) * C2566 + std::sqrt(0.140625) * C2573 -
               std::sqrt(0.5625) * C2580 - std::sqrt(0.140625) * C2608 -
               std::sqrt(0.140625) * C2615 + std::sqrt(0.5625) * C2622 -
               std::sqrt(0.5625) * C4078 - std::sqrt(0.5625) * C4085 +
               std::sqrt(2.25) * C4092 + std::sqrt(0.5625) * C4120 +
               std::sqrt(0.5625) * C4127 - std::sqrt(2.25) * C4134;
    gx[348] += std::sqrt(1.6875) * C1120 - std::sqrt(1.6875) * C1078 -
               std::sqrt(1.6875) * C2590 + std::sqrt(1.6875) * C2632 +
               std::sqrt(6.75) * C4102 - std::sqrt(6.75) * C4144;
    gy[348] += std::sqrt(1.6875) * C1122 - std::sqrt(1.6875) * C1080 -
               std::sqrt(1.6875) * C2592 + std::sqrt(1.6875) * C2634 +
               std::sqrt(6.75) * C4104 - std::sqrt(6.75) * C4146;
    gz[348] += std::sqrt(1.6875) * C1124 - std::sqrt(1.6875) * C1082 -
               std::sqrt(1.6875) * C2594 + std::sqrt(1.6875) * C2636 +
               std::sqrt(6.75) * C4106 - std::sqrt(6.75) * C4148;
    gx[349] += std::sqrt(0.421875) * C1057 - std::sqrt(0.421875) * C1050 +
               std::sqrt(0.421875) * C1092 - std::sqrt(0.421875) * C1099 -
               std::sqrt(0.421875) * C2562 + std::sqrt(0.421875) * C2569 +
               std::sqrt(0.421875) * C2604 - std::sqrt(0.421875) * C2611 +
               std::sqrt(1.6875) * C4074 - std::sqrt(1.6875) * C4081 -
               std::sqrt(1.6875) * C4116 + std::sqrt(1.6875) * C4123;
    gy[349] += std::sqrt(0.421875) * C1059 - std::sqrt(0.421875) * C1052 +
               std::sqrt(0.421875) * C1094 - std::sqrt(0.421875) * C1101 -
               std::sqrt(0.421875) * C2564 + std::sqrt(0.421875) * C2571 +
               std::sqrt(0.421875) * C2606 - std::sqrt(0.421875) * C2613 +
               std::sqrt(1.6875) * C4076 - std::sqrt(1.6875) * C4083 -
               std::sqrt(1.6875) * C4118 + std::sqrt(1.6875) * C4125;
    gz[349] += std::sqrt(0.421875) * C1061 - std::sqrt(0.421875) * C1054 +
               std::sqrt(0.421875) * C1096 - std::sqrt(0.421875) * C1103 -
               std::sqrt(0.421875) * C2566 + std::sqrt(0.421875) * C2573 +
               std::sqrt(0.421875) * C2608 - std::sqrt(0.421875) * C2615 +
               std::sqrt(1.6875) * C4078 - std::sqrt(1.6875) * C4085 -
               std::sqrt(1.6875) * C4120 + std::sqrt(1.6875) * C4127;
    gx[350] += std::sqrt(1.6875) * C441 - std::sqrt(1.6875) * C189 -
               std::sqrt(1.6875) * C1701 + std::sqrt(1.6875) * C1953 +
               std::sqrt(6.75) * C3213 - std::sqrt(6.75) * C3465;
    gy[350] += std::sqrt(1.6875) * C443 - std::sqrt(1.6875) * C191 -
               std::sqrt(1.6875) * C1703 + std::sqrt(1.6875) * C1955 +
               std::sqrt(6.75) * C3215 - std::sqrt(6.75) * C3467;
    gz[350] += std::sqrt(1.6875) * C445 - std::sqrt(1.6875) * C193 -
               std::sqrt(1.6875) * C1705 + std::sqrt(1.6875) * C1957 +
               std::sqrt(6.75) * C3217 - std::sqrt(6.75) * C3469;
    gx[351] += std::sqrt(1.6875) * C455 - std::sqrt(1.6875) * C203 -
               std::sqrt(1.6875) * C1715 + std::sqrt(1.6875) * C1967 +
               std::sqrt(6.75) * C3227 - std::sqrt(6.75) * C3479;
    gy[351] += std::sqrt(1.6875) * C457 - std::sqrt(1.6875) * C205 -
               std::sqrt(1.6875) * C1717 + std::sqrt(1.6875) * C1969 +
               std::sqrt(6.75) * C3229 - std::sqrt(6.75) * C3481;
    gz[351] += std::sqrt(1.6875) * C459 - std::sqrt(1.6875) * C207 -
               std::sqrt(1.6875) * C1719 + std::sqrt(1.6875) * C1971 +
               std::sqrt(6.75) * C3231 - std::sqrt(6.75) * C3483;
    gx[352] += std::sqrt(0.140625) * C168 + std::sqrt(0.140625) * C175 -
               std::sqrt(0.5625) * C182 - std::sqrt(0.140625) * C420 -
               std::sqrt(0.140625) * C427 + std::sqrt(0.5625) * C434 +
               std::sqrt(0.140625) * C1680 + std::sqrt(0.140625) * C1687 -
               std::sqrt(0.5625) * C1694 - std::sqrt(0.140625) * C1932 -
               std::sqrt(0.140625) * C1939 + std::sqrt(0.5625) * C1946 -
               std::sqrt(0.5625) * C3192 - std::sqrt(0.5625) * C3199 +
               std::sqrt(2.25) * C3206 + std::sqrt(0.5625) * C3444 +
               std::sqrt(0.5625) * C3451 - std::sqrt(2.25) * C3458;
    gy[352] += std::sqrt(0.140625) * C170 + std::sqrt(0.140625) * C177 -
               std::sqrt(0.5625) * C184 - std::sqrt(0.140625) * C422 -
               std::sqrt(0.140625) * C429 + std::sqrt(0.5625) * C436 +
               std::sqrt(0.140625) * C1682 + std::sqrt(0.140625) * C1689 -
               std::sqrt(0.5625) * C1696 - std::sqrt(0.140625) * C1934 -
               std::sqrt(0.140625) * C1941 + std::sqrt(0.5625) * C1948 -
               std::sqrt(0.5625) * C3194 - std::sqrt(0.5625) * C3201 +
               std::sqrt(2.25) * C3208 + std::sqrt(0.5625) * C3446 +
               std::sqrt(0.5625) * C3453 - std::sqrt(2.25) * C3460;
    gz[352] += std::sqrt(0.140625) * C172 + std::sqrt(0.140625) * C179 -
               std::sqrt(0.5625) * C186 - std::sqrt(0.140625) * C424 -
               std::sqrt(0.140625) * C431 + std::sqrt(0.5625) * C438 +
               std::sqrt(0.140625) * C1684 + std::sqrt(0.140625) * C1691 -
               std::sqrt(0.5625) * C1698 - std::sqrt(0.140625) * C1936 -
               std::sqrt(0.140625) * C1943 + std::sqrt(0.5625) * C1950 -
               std::sqrt(0.5625) * C3196 - std::sqrt(0.5625) * C3203 +
               std::sqrt(2.25) * C3210 + std::sqrt(0.5625) * C3448 +
               std::sqrt(0.5625) * C3455 - std::sqrt(2.25) * C3462;
    gx[353] += std::sqrt(1.6875) * C448 - std::sqrt(1.6875) * C196 -
               std::sqrt(1.6875) * C1708 + std::sqrt(1.6875) * C1960 +
               std::sqrt(6.75) * C3220 - std::sqrt(6.75) * C3472;
    gy[353] += std::sqrt(1.6875) * C450 - std::sqrt(1.6875) * C198 -
               std::sqrt(1.6875) * C1710 + std::sqrt(1.6875) * C1962 +
               std::sqrt(6.75) * C3222 - std::sqrt(6.75) * C3474;
    gz[353] += std::sqrt(1.6875) * C452 - std::sqrt(1.6875) * C200 -
               std::sqrt(1.6875) * C1712 + std::sqrt(1.6875) * C1964 +
               std::sqrt(6.75) * C3224 - std::sqrt(6.75) * C3476;
    gx[354] += std::sqrt(0.421875) * C175 - std::sqrt(0.421875) * C168 +
               std::sqrt(0.421875) * C420 - std::sqrt(0.421875) * C427 -
               std::sqrt(0.421875) * C1680 + std::sqrt(0.421875) * C1687 +
               std::sqrt(0.421875) * C1932 - std::sqrt(0.421875) * C1939 +
               std::sqrt(1.6875) * C3192 - std::sqrt(1.6875) * C3199 -
               std::sqrt(1.6875) * C3444 + std::sqrt(1.6875) * C3451;
    gy[354] += std::sqrt(0.421875) * C177 - std::sqrt(0.421875) * C170 +
               std::sqrt(0.421875) * C422 - std::sqrt(0.421875) * C429 -
               std::sqrt(0.421875) * C1682 + std::sqrt(0.421875) * C1689 +
               std::sqrt(0.421875) * C1934 - std::sqrt(0.421875) * C1941 +
               std::sqrt(1.6875) * C3194 - std::sqrt(1.6875) * C3201 -
               std::sqrt(1.6875) * C3446 + std::sqrt(1.6875) * C3453;
    gz[354] += std::sqrt(0.421875) * C179 - std::sqrt(0.421875) * C172 +
               std::sqrt(0.421875) * C424 - std::sqrt(0.421875) * C431 -
               std::sqrt(0.421875) * C1684 + std::sqrt(0.421875) * C1691 +
               std::sqrt(0.421875) * C1936 - std::sqrt(0.421875) * C1943 +
               std::sqrt(1.6875) * C3196 - std::sqrt(1.6875) * C3203 -
               std::sqrt(1.6875) * C3448 + std::sqrt(1.6875) * C3455;
    gx[355] += std::sqrt(1.6875) * C525 - std::sqrt(1.6875) * C273 -
               std::sqrt(1.6875) * C1785 + std::sqrt(1.6875) * C2037 +
               std::sqrt(6.75) * C3297 - std::sqrt(6.75) * C3549;
    gy[355] += std::sqrt(1.6875) * C527 - std::sqrt(1.6875) * C275 -
               std::sqrt(1.6875) * C1787 + std::sqrt(1.6875) * C2039 +
               std::sqrt(6.75) * C3299 - std::sqrt(6.75) * C3551;
    gz[355] += std::sqrt(1.6875) * C529 - std::sqrt(1.6875) * C277 -
               std::sqrt(1.6875) * C1789 + std::sqrt(1.6875) * C2041 +
               std::sqrt(6.75) * C3301 - std::sqrt(6.75) * C3553;
    gx[356] += std::sqrt(1.6875) * C539 - std::sqrt(1.6875) * C287 -
               std::sqrt(1.6875) * C1799 + std::sqrt(1.6875) * C2051 +
               std::sqrt(6.75) * C3311 - std::sqrt(6.75) * C3563;
    gy[356] += std::sqrt(1.6875) * C541 - std::sqrt(1.6875) * C289 -
               std::sqrt(1.6875) * C1801 + std::sqrt(1.6875) * C2053 +
               std::sqrt(6.75) * C3313 - std::sqrt(6.75) * C3565;
    gz[356] += std::sqrt(1.6875) * C543 - std::sqrt(1.6875) * C291 -
               std::sqrt(1.6875) * C1803 + std::sqrt(1.6875) * C2055 +
               std::sqrt(6.75) * C3315 - std::sqrt(6.75) * C3567;
    gx[357] += std::sqrt(0.140625) * C252 + std::sqrt(0.140625) * C259 -
               std::sqrt(0.5625) * C266 - std::sqrt(0.140625) * C504 -
               std::sqrt(0.140625) * C511 + std::sqrt(0.5625) * C518 +
               std::sqrt(0.140625) * C1764 + std::sqrt(0.140625) * C1771 -
               std::sqrt(0.5625) * C1778 - std::sqrt(0.140625) * C2016 -
               std::sqrt(0.140625) * C2023 + std::sqrt(0.5625) * C2030 -
               std::sqrt(0.5625) * C3276 - std::sqrt(0.5625) * C3283 +
               std::sqrt(2.25) * C3290 + std::sqrt(0.5625) * C3528 +
               std::sqrt(0.5625) * C3535 - std::sqrt(2.25) * C3542;
    gy[357] += std::sqrt(0.140625) * C254 + std::sqrt(0.140625) * C261 -
               std::sqrt(0.5625) * C268 - std::sqrt(0.140625) * C506 -
               std::sqrt(0.140625) * C513 + std::sqrt(0.5625) * C520 +
               std::sqrt(0.140625) * C1766 + std::sqrt(0.140625) * C1773 -
               std::sqrt(0.5625) * C1780 - std::sqrt(0.140625) * C2018 -
               std::sqrt(0.140625) * C2025 + std::sqrt(0.5625) * C2032 -
               std::sqrt(0.5625) * C3278 - std::sqrt(0.5625) * C3285 +
               std::sqrt(2.25) * C3292 + std::sqrt(0.5625) * C3530 +
               std::sqrt(0.5625) * C3537 - std::sqrt(2.25) * C3544;
    gz[357] += std::sqrt(0.140625) * C256 + std::sqrt(0.140625) * C263 -
               std::sqrt(0.5625) * C270 - std::sqrt(0.140625) * C508 -
               std::sqrt(0.140625) * C515 + std::sqrt(0.5625) * C522 +
               std::sqrt(0.140625) * C1768 + std::sqrt(0.140625) * C1775 -
               std::sqrt(0.5625) * C1782 - std::sqrt(0.140625) * C2020 -
               std::sqrt(0.140625) * C2027 + std::sqrt(0.5625) * C2034 -
               std::sqrt(0.5625) * C3280 - std::sqrt(0.5625) * C3287 +
               std::sqrt(2.25) * C3294 + std::sqrt(0.5625) * C3532 +
               std::sqrt(0.5625) * C3539 - std::sqrt(2.25) * C3546;
    gx[358] += std::sqrt(1.6875) * C532 - std::sqrt(1.6875) * C280 -
               std::sqrt(1.6875) * C1792 + std::sqrt(1.6875) * C2044 +
               std::sqrt(6.75) * C3304 - std::sqrt(6.75) * C3556;
    gy[358] += std::sqrt(1.6875) * C534 - std::sqrt(1.6875) * C282 -
               std::sqrt(1.6875) * C1794 + std::sqrt(1.6875) * C2046 +
               std::sqrt(6.75) * C3306 - std::sqrt(6.75) * C3558;
    gz[358] += std::sqrt(1.6875) * C536 - std::sqrt(1.6875) * C284 -
               std::sqrt(1.6875) * C1796 + std::sqrt(1.6875) * C2048 +
               std::sqrt(6.75) * C3308 - std::sqrt(6.75) * C3560;
    gx[359] += std::sqrt(0.421875) * C259 - std::sqrt(0.421875) * C252 +
               std::sqrt(0.421875) * C504 - std::sqrt(0.421875) * C511 -
               std::sqrt(0.421875) * C1764 + std::sqrt(0.421875) * C1771 +
               std::sqrt(0.421875) * C2016 - std::sqrt(0.421875) * C2023 +
               std::sqrt(1.6875) * C3276 - std::sqrt(1.6875) * C3283 -
               std::sqrt(1.6875) * C3528 + std::sqrt(1.6875) * C3535;
    gy[359] += std::sqrt(0.421875) * C261 - std::sqrt(0.421875) * C254 +
               std::sqrt(0.421875) * C506 - std::sqrt(0.421875) * C513 -
               std::sqrt(0.421875) * C1766 + std::sqrt(0.421875) * C1773 +
               std::sqrt(0.421875) * C2018 - std::sqrt(0.421875) * C2025 +
               std::sqrt(1.6875) * C3278 - std::sqrt(1.6875) * C3285 -
               std::sqrt(1.6875) * C3530 + std::sqrt(1.6875) * C3537;
    gz[359] += std::sqrt(0.421875) * C263 - std::sqrt(0.421875) * C256 +
               std::sqrt(0.421875) * C508 - std::sqrt(0.421875) * C515 -
               std::sqrt(0.421875) * C1768 + std::sqrt(0.421875) * C1775 +
               std::sqrt(0.421875) * C2020 - std::sqrt(0.421875) * C2027 +
               std::sqrt(1.6875) * C3280 - std::sqrt(1.6875) * C3287 -
               std::sqrt(1.6875) * C3532 + std::sqrt(1.6875) * C3539;
    gx[360] += std::sqrt(0.140625) * C63 + std::sqrt(0.140625) * C105 -
               std::sqrt(0.5625) * C147 - std::sqrt(0.140625) * C315 -
               std::sqrt(0.140625) * C357 + std::sqrt(0.5625) * C399 +
               std::sqrt(0.140625) * C1575 + std::sqrt(0.140625) * C1617 -
               std::sqrt(0.5625) * C1659 - std::sqrt(0.140625) * C1827 -
               std::sqrt(0.140625) * C1869 + std::sqrt(0.5625) * C1911 -
               std::sqrt(0.5625) * C3087 - std::sqrt(0.5625) * C3129 +
               std::sqrt(2.25) * C3171 + std::sqrt(0.5625) * C3339 +
               std::sqrt(0.5625) * C3381 - std::sqrt(2.25) * C3423;
    gy[360] += std::sqrt(0.140625) * C65 + std::sqrt(0.140625) * C107 -
               std::sqrt(0.5625) * C149 - std::sqrt(0.140625) * C317 -
               std::sqrt(0.140625) * C359 + std::sqrt(0.5625) * C401 +
               std::sqrt(0.140625) * C1577 + std::sqrt(0.140625) * C1619 -
               std::sqrt(0.5625) * C1661 - std::sqrt(0.140625) * C1829 -
               std::sqrt(0.140625) * C1871 + std::sqrt(0.5625) * C1913 -
               std::sqrt(0.5625) * C3089 - std::sqrt(0.5625) * C3131 +
               std::sqrt(2.25) * C3173 + std::sqrt(0.5625) * C3341 +
               std::sqrt(0.5625) * C3383 - std::sqrt(2.25) * C3425;
    gz[360] += std::sqrt(0.140625) * C67 + std::sqrt(0.140625) * C109 -
               std::sqrt(0.5625) * C151 - std::sqrt(0.140625) * C319 -
               std::sqrt(0.140625) * C361 + std::sqrt(0.5625) * C403 +
               std::sqrt(0.140625) * C1579 + std::sqrt(0.140625) * C1621 -
               std::sqrt(0.5625) * C1663 - std::sqrt(0.140625) * C1831 -
               std::sqrt(0.140625) * C1873 + std::sqrt(0.5625) * C1915 -
               std::sqrt(0.5625) * C3091 - std::sqrt(0.5625) * C3133 +
               std::sqrt(2.25) * C3175 + std::sqrt(0.5625) * C3343 +
               std::sqrt(0.5625) * C3385 - std::sqrt(2.25) * C3427;
    gx[361] += std::sqrt(0.140625) * C77 + std::sqrt(0.140625) * C119 -
               std::sqrt(0.5625) * C161 - std::sqrt(0.140625) * C329 -
               std::sqrt(0.140625) * C371 + std::sqrt(0.5625) * C413 +
               std::sqrt(0.140625) * C1589 + std::sqrt(0.140625) * C1631 -
               std::sqrt(0.5625) * C1673 - std::sqrt(0.140625) * C1841 -
               std::sqrt(0.140625) * C1883 + std::sqrt(0.5625) * C1925 -
               std::sqrt(0.5625) * C3101 - std::sqrt(0.5625) * C3143 +
               std::sqrt(2.25) * C3185 + std::sqrt(0.5625) * C3353 +
               std::sqrt(0.5625) * C3395 - std::sqrt(2.25) * C3437;
    gy[361] += std::sqrt(0.140625) * C79 + std::sqrt(0.140625) * C121 -
               std::sqrt(0.5625) * C163 - std::sqrt(0.140625) * C331 -
               std::sqrt(0.140625) * C373 + std::sqrt(0.5625) * C415 +
               std::sqrt(0.140625) * C1591 + std::sqrt(0.140625) * C1633 -
               std::sqrt(0.5625) * C1675 - std::sqrt(0.140625) * C1843 -
               std::sqrt(0.140625) * C1885 + std::sqrt(0.5625) * C1927 -
               std::sqrt(0.5625) * C3103 - std::sqrt(0.5625) * C3145 +
               std::sqrt(2.25) * C3187 + std::sqrt(0.5625) * C3355 +
               std::sqrt(0.5625) * C3397 - std::sqrt(2.25) * C3439;
    gz[361] += std::sqrt(0.140625) * C81 + std::sqrt(0.140625) * C123 -
               std::sqrt(0.5625) * C165 - std::sqrt(0.140625) * C333 -
               std::sqrt(0.140625) * C375 + std::sqrt(0.5625) * C417 +
               std::sqrt(0.140625) * C1593 + std::sqrt(0.140625) * C1635 -
               std::sqrt(0.5625) * C1677 - std::sqrt(0.140625) * C1845 -
               std::sqrt(0.140625) * C1887 + std::sqrt(0.5625) * C1929 -
               std::sqrt(0.5625) * C3105 - std::sqrt(0.5625) * C3147 +
               std::sqrt(2.25) * C3189 + std::sqrt(0.5625) * C3357 +
               std::sqrt(0.5625) * C3399 - std::sqrt(2.25) * C3441;
    gx[362] += std::sqrt(0.046875) * C56 -
               (std::sqrt(0.01171875) * C49 + std::sqrt(0.01171875) * C40) -
               std::sqrt(0.01171875) * C84 - std::sqrt(0.01171875) * C91 +
               std::sqrt(0.046875) * C98 + std::sqrt(0.046875) * C126 +
               std::sqrt(0.046875) * C133 - std::sqrt(0.1875) * C140 +
               std::sqrt(0.01171875) * C294 + std::sqrt(0.01171875) * C301 -
               std::sqrt(0.046875) * C308 + std::sqrt(0.01171875) * C336 +
               std::sqrt(0.01171875) * C343 - std::sqrt(0.046875) * C350 -
               std::sqrt(0.046875) * C378 - std::sqrt(0.046875) * C385 +
               std::sqrt(0.1875) * C392 - std::sqrt(0.01171875) * C1554 -
               std::sqrt(0.01171875) * C1561 + std::sqrt(0.046875) * C1568 -
               std::sqrt(0.01171875) * C1596 - std::sqrt(0.01171875) * C1603 +
               std::sqrt(0.046875) * C1610 + std::sqrt(0.046875) * C1638 +
               std::sqrt(0.046875) * C1645 - std::sqrt(0.1875) * C1652 +
               std::sqrt(0.01171875) * C1806 + std::sqrt(0.01171875) * C1813 -
               std::sqrt(0.046875) * C1820 + std::sqrt(0.01171875) * C1848 +
               std::sqrt(0.01171875) * C1855 - std::sqrt(0.046875) * C1862 -
               std::sqrt(0.046875) * C1890 - std::sqrt(0.046875) * C1897 +
               std::sqrt(0.1875) * C1904 + std::sqrt(0.046875) * C3066 +
               std::sqrt(0.046875) * C3073 - std::sqrt(0.1875) * C3080 +
               std::sqrt(0.046875) * C3108 + std::sqrt(0.046875) * C3115 -
               std::sqrt(0.1875) * C3122 - std::sqrt(0.1875) * C3150 -
               std::sqrt(0.1875) * C3157 + std::sqrt(0.75) * C3164 -
               std::sqrt(0.046875) * C3318 - std::sqrt(0.046875) * C3325 +
               std::sqrt(0.1875) * C3332 - std::sqrt(0.046875) * C3360 -
               std::sqrt(0.046875) * C3367 + std::sqrt(0.1875) * C3374 +
               std::sqrt(0.1875) * C3402 + std::sqrt(0.1875) * C3409 -
               std::sqrt(0.75) * C3416;
    gy[362] += std::sqrt(0.046875) * C58 -
               (std::sqrt(0.01171875) * C51 + std::sqrt(0.01171875) * C44) -
               std::sqrt(0.01171875) * C86 - std::sqrt(0.01171875) * C93 +
               std::sqrt(0.046875) * C100 + std::sqrt(0.046875) * C128 +
               std::sqrt(0.046875) * C135 - std::sqrt(0.1875) * C142 +
               std::sqrt(0.01171875) * C296 + std::sqrt(0.01171875) * C303 -
               std::sqrt(0.046875) * C310 + std::sqrt(0.01171875) * C338 +
               std::sqrt(0.01171875) * C345 - std::sqrt(0.046875) * C352 -
               std::sqrt(0.046875) * C380 - std::sqrt(0.046875) * C387 +
               std::sqrt(0.1875) * C394 - std::sqrt(0.01171875) * C1556 -
               std::sqrt(0.01171875) * C1563 + std::sqrt(0.046875) * C1570 -
               std::sqrt(0.01171875) * C1598 - std::sqrt(0.01171875) * C1605 +
               std::sqrt(0.046875) * C1612 + std::sqrt(0.046875) * C1640 +
               std::sqrt(0.046875) * C1647 - std::sqrt(0.1875) * C1654 +
               std::sqrt(0.01171875) * C1808 + std::sqrt(0.01171875) * C1815 -
               std::sqrt(0.046875) * C1822 + std::sqrt(0.01171875) * C1850 +
               std::sqrt(0.01171875) * C1857 - std::sqrt(0.046875) * C1864 -
               std::sqrt(0.046875) * C1892 - std::sqrt(0.046875) * C1899 +
               std::sqrt(0.1875) * C1906 + std::sqrt(0.046875) * C3068 +
               std::sqrt(0.046875) * C3075 - std::sqrt(0.1875) * C3082 +
               std::sqrt(0.046875) * C3110 + std::sqrt(0.046875) * C3117 -
               std::sqrt(0.1875) * C3124 - std::sqrt(0.1875) * C3152 -
               std::sqrt(0.1875) * C3159 + std::sqrt(0.75) * C3166 -
               std::sqrt(0.046875) * C3320 - std::sqrt(0.046875) * C3327 +
               std::sqrt(0.1875) * C3334 - std::sqrt(0.046875) * C3362 -
               std::sqrt(0.046875) * C3369 + std::sqrt(0.1875) * C3376 +
               std::sqrt(0.1875) * C3404 + std::sqrt(0.1875) * C3411 -
               std::sqrt(0.75) * C3418;
    gz[362] += std::sqrt(0.046875) * C60 -
               (std::sqrt(0.01171875) * C53 + std::sqrt(0.01171875) * C46) -
               std::sqrt(0.01171875) * C88 - std::sqrt(0.01171875) * C95 +
               std::sqrt(0.046875) * C102 + std::sqrt(0.046875) * C130 +
               std::sqrt(0.046875) * C137 - std::sqrt(0.1875) * C144 +
               std::sqrt(0.01171875) * C298 + std::sqrt(0.01171875) * C305 -
               std::sqrt(0.046875) * C312 + std::sqrt(0.01171875) * C340 +
               std::sqrt(0.01171875) * C347 - std::sqrt(0.046875) * C354 -
               std::sqrt(0.046875) * C382 - std::sqrt(0.046875) * C389 +
               std::sqrt(0.1875) * C396 - std::sqrt(0.01171875) * C1558 -
               std::sqrt(0.01171875) * C1565 + std::sqrt(0.046875) * C1572 -
               std::sqrt(0.01171875) * C1600 - std::sqrt(0.01171875) * C1607 +
               std::sqrt(0.046875) * C1614 + std::sqrt(0.046875) * C1642 +
               std::sqrt(0.046875) * C1649 - std::sqrt(0.1875) * C1656 +
               std::sqrt(0.01171875) * C1810 + std::sqrt(0.01171875) * C1817 -
               std::sqrt(0.046875) * C1824 + std::sqrt(0.01171875) * C1852 +
               std::sqrt(0.01171875) * C1859 - std::sqrt(0.046875) * C1866 -
               std::sqrt(0.046875) * C1894 - std::sqrt(0.046875) * C1901 +
               std::sqrt(0.1875) * C1908 + std::sqrt(0.046875) * C3070 +
               std::sqrt(0.046875) * C3077 - std::sqrt(0.1875) * C3084 +
               std::sqrt(0.046875) * C3112 + std::sqrt(0.046875) * C3119 -
               std::sqrt(0.1875) * C3126 - std::sqrt(0.1875) * C3154 -
               std::sqrt(0.1875) * C3161 + std::sqrt(0.75) * C3168 -
               std::sqrt(0.046875) * C3322 - std::sqrt(0.046875) * C3329 +
               std::sqrt(0.1875) * C3336 - std::sqrt(0.046875) * C3364 -
               std::sqrt(0.046875) * C3371 + std::sqrt(0.1875) * C3378 +
               std::sqrt(0.1875) * C3406 + std::sqrt(0.1875) * C3413 -
               std::sqrt(0.75) * C3420;
    gx[363] += std::sqrt(0.140625) * C70 + std::sqrt(0.140625) * C112 -
               std::sqrt(0.5625) * C154 - std::sqrt(0.140625) * C322 -
               std::sqrt(0.140625) * C364 + std::sqrt(0.5625) * C406 +
               std::sqrt(0.140625) * C1582 + std::sqrt(0.140625) * C1624 -
               std::sqrt(0.5625) * C1666 - std::sqrt(0.140625) * C1834 -
               std::sqrt(0.140625) * C1876 + std::sqrt(0.5625) * C1918 -
               std::sqrt(0.5625) * C3094 - std::sqrt(0.5625) * C3136 +
               std::sqrt(2.25) * C3178 + std::sqrt(0.5625) * C3346 +
               std::sqrt(0.5625) * C3388 - std::sqrt(2.25) * C3430;
    gy[363] += std::sqrt(0.140625) * C72 + std::sqrt(0.140625) * C114 -
               std::sqrt(0.5625) * C156 - std::sqrt(0.140625) * C324 -
               std::sqrt(0.140625) * C366 + std::sqrt(0.5625) * C408 +
               std::sqrt(0.140625) * C1584 + std::sqrt(0.140625) * C1626 -
               std::sqrt(0.5625) * C1668 - std::sqrt(0.140625) * C1836 -
               std::sqrt(0.140625) * C1878 + std::sqrt(0.5625) * C1920 -
               std::sqrt(0.5625) * C3096 - std::sqrt(0.5625) * C3138 +
               std::sqrt(2.25) * C3180 + std::sqrt(0.5625) * C3348 +
               std::sqrt(0.5625) * C3390 - std::sqrt(2.25) * C3432;
    gz[363] += std::sqrt(0.140625) * C74 + std::sqrt(0.140625) * C116 -
               std::sqrt(0.5625) * C158 - std::sqrt(0.140625) * C326 -
               std::sqrt(0.140625) * C368 + std::sqrt(0.5625) * C410 +
               std::sqrt(0.140625) * C1586 + std::sqrt(0.140625) * C1628 -
               std::sqrt(0.5625) * C1670 - std::sqrt(0.140625) * C1838 -
               std::sqrt(0.140625) * C1880 + std::sqrt(0.5625) * C1922 -
               std::sqrt(0.5625) * C3098 - std::sqrt(0.5625) * C3140 +
               std::sqrt(2.25) * C3182 + std::sqrt(0.5625) * C3350 +
               std::sqrt(0.5625) * C3392 - std::sqrt(2.25) * C3434;
    gx[364] += std::sqrt(0.03515625) * C40 - std::sqrt(0.03515625) * C49 +
               std::sqrt(0.03515625) * C84 - std::sqrt(0.03515625) * C91 -
               std::sqrt(0.140625) * C126 + std::sqrt(0.140625) * C133 -
               std::sqrt(0.03515625) * C294 + std::sqrt(0.03515625) * C301 -
               std::sqrt(0.03515625) * C336 + std::sqrt(0.03515625) * C343 +
               std::sqrt(0.140625) * C378 - std::sqrt(0.140625) * C385 +
               std::sqrt(0.03515625) * C1554 - std::sqrt(0.03515625) * C1561 +
               std::sqrt(0.03515625) * C1596 - std::sqrt(0.03515625) * C1603 -
               std::sqrt(0.140625) * C1638 + std::sqrt(0.140625) * C1645 -
               std::sqrt(0.03515625) * C1806 + std::sqrt(0.03515625) * C1813 -
               std::sqrt(0.03515625) * C1848 + std::sqrt(0.03515625) * C1855 +
               std::sqrt(0.140625) * C1890 - std::sqrt(0.140625) * C1897 -
               std::sqrt(0.140625) * C3066 + std::sqrt(0.140625) * C3073 -
               std::sqrt(0.140625) * C3108 + std::sqrt(0.140625) * C3115 +
               std::sqrt(0.5625) * C3150 - std::sqrt(0.5625) * C3157 +
               std::sqrt(0.140625) * C3318 - std::sqrt(0.140625) * C3325 +
               std::sqrt(0.140625) * C3360 - std::sqrt(0.140625) * C3367 -
               std::sqrt(0.5625) * C3402 + std::sqrt(0.5625) * C3409;
    gy[364] += std::sqrt(0.03515625) * C44 - std::sqrt(0.03515625) * C51 +
               std::sqrt(0.03515625) * C86 - std::sqrt(0.03515625) * C93 -
               std::sqrt(0.140625) * C128 + std::sqrt(0.140625) * C135 -
               std::sqrt(0.03515625) * C296 + std::sqrt(0.03515625) * C303 -
               std::sqrt(0.03515625) * C338 + std::sqrt(0.03515625) * C345 +
               std::sqrt(0.140625) * C380 - std::sqrt(0.140625) * C387 +
               std::sqrt(0.03515625) * C1556 - std::sqrt(0.03515625) * C1563 +
               std::sqrt(0.03515625) * C1598 - std::sqrt(0.03515625) * C1605 -
               std::sqrt(0.140625) * C1640 + std::sqrt(0.140625) * C1647 -
               std::sqrt(0.03515625) * C1808 + std::sqrt(0.03515625) * C1815 -
               std::sqrt(0.03515625) * C1850 + std::sqrt(0.03515625) * C1857 +
               std::sqrt(0.140625) * C1892 - std::sqrt(0.140625) * C1899 -
               std::sqrt(0.140625) * C3068 + std::sqrt(0.140625) * C3075 -
               std::sqrt(0.140625) * C3110 + std::sqrt(0.140625) * C3117 +
               std::sqrt(0.5625) * C3152 - std::sqrt(0.5625) * C3159 +
               std::sqrt(0.140625) * C3320 - std::sqrt(0.140625) * C3327 +
               std::sqrt(0.140625) * C3362 - std::sqrt(0.140625) * C3369 -
               std::sqrt(0.5625) * C3404 + std::sqrt(0.5625) * C3411;
    gz[364] += std::sqrt(0.03515625) * C46 - std::sqrt(0.03515625) * C53 +
               std::sqrt(0.03515625) * C88 - std::sqrt(0.03515625) * C95 -
               std::sqrt(0.140625) * C130 + std::sqrt(0.140625) * C137 -
               std::sqrt(0.03515625) * C298 + std::sqrt(0.03515625) * C305 -
               std::sqrt(0.03515625) * C340 + std::sqrt(0.03515625) * C347 +
               std::sqrt(0.140625) * C382 - std::sqrt(0.140625) * C389 +
               std::sqrt(0.03515625) * C1558 - std::sqrt(0.03515625) * C1565 +
               std::sqrt(0.03515625) * C1600 - std::sqrt(0.03515625) * C1607 -
               std::sqrt(0.140625) * C1642 + std::sqrt(0.140625) * C1649 -
               std::sqrt(0.03515625) * C1810 + std::sqrt(0.03515625) * C1817 -
               std::sqrt(0.03515625) * C1852 + std::sqrt(0.03515625) * C1859 +
               std::sqrt(0.140625) * C1894 - std::sqrt(0.140625) * C1901 -
               std::sqrt(0.140625) * C3070 + std::sqrt(0.140625) * C3077 -
               std::sqrt(0.140625) * C3112 + std::sqrt(0.140625) * C3119 +
               std::sqrt(0.5625) * C3154 - std::sqrt(0.5625) * C3161 +
               std::sqrt(0.140625) * C3322 - std::sqrt(0.140625) * C3329 +
               std::sqrt(0.140625) * C3364 - std::sqrt(0.140625) * C3371 -
               std::sqrt(0.5625) * C3406 + std::sqrt(0.5625) * C3413;
    gx[365] += std::sqrt(1.6875) * C483 - std::sqrt(1.6875) * C231 -
               std::sqrt(1.6875) * C1743 + std::sqrt(1.6875) * C1995 +
               std::sqrt(6.75) * C3255 - std::sqrt(6.75) * C3507;
    gy[365] += std::sqrt(1.6875) * C485 - std::sqrt(1.6875) * C233 -
               std::sqrt(1.6875) * C1745 + std::sqrt(1.6875) * C1997 +
               std::sqrt(6.75) * C3257 - std::sqrt(6.75) * C3509;
    gz[365] += std::sqrt(1.6875) * C487 - std::sqrt(1.6875) * C235 -
               std::sqrt(1.6875) * C1747 + std::sqrt(1.6875) * C1999 +
               std::sqrt(6.75) * C3259 - std::sqrt(6.75) * C3511;
    gx[366] += std::sqrt(1.6875) * C497 - std::sqrt(1.6875) * C245 -
               std::sqrt(1.6875) * C1757 + std::sqrt(1.6875) * C2009 +
               std::sqrt(6.75) * C3269 - std::sqrt(6.75) * C3521;
    gy[366] += std::sqrt(1.6875) * C499 - std::sqrt(1.6875) * C247 -
               std::sqrt(1.6875) * C1759 + std::sqrt(1.6875) * C2011 +
               std::sqrt(6.75) * C3271 - std::sqrt(6.75) * C3523;
    gz[366] += std::sqrt(1.6875) * C501 - std::sqrt(1.6875) * C249 -
               std::sqrt(1.6875) * C1761 + std::sqrt(1.6875) * C2013 +
               std::sqrt(6.75) * C3273 - std::sqrt(6.75) * C3525;
    gx[367] += std::sqrt(0.140625) * C210 + std::sqrt(0.140625) * C217 -
               std::sqrt(0.5625) * C224 - std::sqrt(0.140625) * C462 -
               std::sqrt(0.140625) * C469 + std::sqrt(0.5625) * C476 +
               std::sqrt(0.140625) * C1722 + std::sqrt(0.140625) * C1729 -
               std::sqrt(0.5625) * C1736 - std::sqrt(0.140625) * C1974 -
               std::sqrt(0.140625) * C1981 + std::sqrt(0.5625) * C1988 -
               std::sqrt(0.5625) * C3234 - std::sqrt(0.5625) * C3241 +
               std::sqrt(2.25) * C3248 + std::sqrt(0.5625) * C3486 +
               std::sqrt(0.5625) * C3493 - std::sqrt(2.25) * C3500;
    gy[367] += std::sqrt(0.140625) * C212 + std::sqrt(0.140625) * C219 -
               std::sqrt(0.5625) * C226 - std::sqrt(0.140625) * C464 -
               std::sqrt(0.140625) * C471 + std::sqrt(0.5625) * C478 +
               std::sqrt(0.140625) * C1724 + std::sqrt(0.140625) * C1731 -
               std::sqrt(0.5625) * C1738 - std::sqrt(0.140625) * C1976 -
               std::sqrt(0.140625) * C1983 + std::sqrt(0.5625) * C1990 -
               std::sqrt(0.5625) * C3236 - std::sqrt(0.5625) * C3243 +
               std::sqrt(2.25) * C3250 + std::sqrt(0.5625) * C3488 +
               std::sqrt(0.5625) * C3495 - std::sqrt(2.25) * C3502;
    gz[367] += std::sqrt(0.140625) * C214 + std::sqrt(0.140625) * C221 -
               std::sqrt(0.5625) * C228 - std::sqrt(0.140625) * C466 -
               std::sqrt(0.140625) * C473 + std::sqrt(0.5625) * C480 +
               std::sqrt(0.140625) * C1726 + std::sqrt(0.140625) * C1733 -
               std::sqrt(0.5625) * C1740 - std::sqrt(0.140625) * C1978 -
               std::sqrt(0.140625) * C1985 + std::sqrt(0.5625) * C1992 -
               std::sqrt(0.5625) * C3238 - std::sqrt(0.5625) * C3245 +
               std::sqrt(2.25) * C3252 + std::sqrt(0.5625) * C3490 +
               std::sqrt(0.5625) * C3497 - std::sqrt(2.25) * C3504;
    gx[368] += std::sqrt(1.6875) * C490 - std::sqrt(1.6875) * C238 -
               std::sqrt(1.6875) * C1750 + std::sqrt(1.6875) * C2002 +
               std::sqrt(6.75) * C3262 - std::sqrt(6.75) * C3514;
    gy[368] += std::sqrt(1.6875) * C492 - std::sqrt(1.6875) * C240 -
               std::sqrt(1.6875) * C1752 + std::sqrt(1.6875) * C2004 +
               std::sqrt(6.75) * C3264 - std::sqrt(6.75) * C3516;
    gz[368] += std::sqrt(1.6875) * C494 - std::sqrt(1.6875) * C242 -
               std::sqrt(1.6875) * C1754 + std::sqrt(1.6875) * C2006 +
               std::sqrt(6.75) * C3266 - std::sqrt(6.75) * C3518;
    gx[369] += std::sqrt(0.421875) * C217 - std::sqrt(0.421875) * C210 +
               std::sqrt(0.421875) * C462 - std::sqrt(0.421875) * C469 -
               std::sqrt(0.421875) * C1722 + std::sqrt(0.421875) * C1729 +
               std::sqrt(0.421875) * C1974 - std::sqrt(0.421875) * C1981 +
               std::sqrt(1.6875) * C3234 - std::sqrt(1.6875) * C3241 -
               std::sqrt(1.6875) * C3486 + std::sqrt(1.6875) * C3493;
    gy[369] += std::sqrt(0.421875) * C219 - std::sqrt(0.421875) * C212 +
               std::sqrt(0.421875) * C464 - std::sqrt(0.421875) * C471 -
               std::sqrt(0.421875) * C1724 + std::sqrt(0.421875) * C1731 +
               std::sqrt(0.421875) * C1976 - std::sqrt(0.421875) * C1983 +
               std::sqrt(1.6875) * C3236 - std::sqrt(1.6875) * C3243 -
               std::sqrt(1.6875) * C3488 + std::sqrt(1.6875) * C3495;
    gz[369] += std::sqrt(0.421875) * C221 - std::sqrt(0.421875) * C214 +
               std::sqrt(0.421875) * C466 - std::sqrt(0.421875) * C473 -
               std::sqrt(0.421875) * C1726 + std::sqrt(0.421875) * C1733 +
               std::sqrt(0.421875) * C1978 - std::sqrt(0.421875) * C1985 +
               std::sqrt(1.6875) * C3238 - std::sqrt(1.6875) * C3245 -
               std::sqrt(1.6875) * C3490 + std::sqrt(1.6875) * C3497;
    gx[370] += std::sqrt(0.421875) * C105 - std::sqrt(0.421875) * C63 +
               std::sqrt(0.421875) * C315 - std::sqrt(0.421875) * C357 -
               std::sqrt(0.421875) * C1575 + std::sqrt(0.421875) * C1617 +
               std::sqrt(0.421875) * C1827 - std::sqrt(0.421875) * C1869 +
               std::sqrt(1.6875) * C3087 - std::sqrt(1.6875) * C3129 -
               std::sqrt(1.6875) * C3339 + std::sqrt(1.6875) * C3381;
    gy[370] += std::sqrt(0.421875) * C107 - std::sqrt(0.421875) * C65 +
               std::sqrt(0.421875) * C317 - std::sqrt(0.421875) * C359 -
               std::sqrt(0.421875) * C1577 + std::sqrt(0.421875) * C1619 +
               std::sqrt(0.421875) * C1829 - std::sqrt(0.421875) * C1871 +
               std::sqrt(1.6875) * C3089 - std::sqrt(1.6875) * C3131 -
               std::sqrt(1.6875) * C3341 + std::sqrt(1.6875) * C3383;
    gz[370] += std::sqrt(0.421875) * C109 - std::sqrt(0.421875) * C67 +
               std::sqrt(0.421875) * C319 - std::sqrt(0.421875) * C361 -
               std::sqrt(0.421875) * C1579 + std::sqrt(0.421875) * C1621 +
               std::sqrt(0.421875) * C1831 - std::sqrt(0.421875) * C1873 +
               std::sqrt(1.6875) * C3091 - std::sqrt(1.6875) * C3133 -
               std::sqrt(1.6875) * C3343 + std::sqrt(1.6875) * C3385;
    gx[371] += std::sqrt(0.421875) * C119 - std::sqrt(0.421875) * C77 +
               std::sqrt(0.421875) * C329 - std::sqrt(0.421875) * C371 -
               std::sqrt(0.421875) * C1589 + std::sqrt(0.421875) * C1631 +
               std::sqrt(0.421875) * C1841 - std::sqrt(0.421875) * C1883 +
               std::sqrt(1.6875) * C3101 - std::sqrt(1.6875) * C3143 -
               std::sqrt(1.6875) * C3353 + std::sqrt(1.6875) * C3395;
    gy[371] += std::sqrt(0.421875) * C121 - std::sqrt(0.421875) * C79 +
               std::sqrt(0.421875) * C331 - std::sqrt(0.421875) * C373 -
               std::sqrt(0.421875) * C1591 + std::sqrt(0.421875) * C1633 +
               std::sqrt(0.421875) * C1843 - std::sqrt(0.421875) * C1885 +
               std::sqrt(1.6875) * C3103 - std::sqrt(1.6875) * C3145 -
               std::sqrt(1.6875) * C3355 + std::sqrt(1.6875) * C3397;
    gz[371] += std::sqrt(0.421875) * C123 - std::sqrt(0.421875) * C81 +
               std::sqrt(0.421875) * C333 - std::sqrt(0.421875) * C375 -
               std::sqrt(0.421875) * C1593 + std::sqrt(0.421875) * C1635 +
               std::sqrt(0.421875) * C1845 - std::sqrt(0.421875) * C1887 +
               std::sqrt(1.6875) * C3105 - std::sqrt(1.6875) * C3147 -
               std::sqrt(1.6875) * C3357 + std::sqrt(1.6875) * C3399;
    gx[372] += std::sqrt(0.03515625) * C40 + std::sqrt(0.03515625) * C49 -
               std::sqrt(0.140625) * C56 - std::sqrt(0.03515625) * C84 -
               std::sqrt(0.03515625) * C91 + std::sqrt(0.140625) * C98 -
               std::sqrt(0.03515625) * C294 - std::sqrt(0.03515625) * C301 +
               std::sqrt(0.140625) * C308 + std::sqrt(0.03515625) * C336 +
               std::sqrt(0.03515625) * C343 - std::sqrt(0.140625) * C350 +
               std::sqrt(0.03515625) * C1554 + std::sqrt(0.03515625) * C1561 -
               std::sqrt(0.140625) * C1568 - std::sqrt(0.03515625) * C1596 -
               std::sqrt(0.03515625) * C1603 + std::sqrt(0.140625) * C1610 -
               std::sqrt(0.03515625) * C1806 - std::sqrt(0.03515625) * C1813 +
               std::sqrt(0.140625) * C1820 + std::sqrt(0.03515625) * C1848 +
               std::sqrt(0.03515625) * C1855 - std::sqrt(0.140625) * C1862 -
               std::sqrt(0.140625) * C3066 - std::sqrt(0.140625) * C3073 +
               std::sqrt(0.5625) * C3080 + std::sqrt(0.140625) * C3108 +
               std::sqrt(0.140625) * C3115 - std::sqrt(0.5625) * C3122 +
               std::sqrt(0.140625) * C3318 + std::sqrt(0.140625) * C3325 -
               std::sqrt(0.5625) * C3332 - std::sqrt(0.140625) * C3360 -
               std::sqrt(0.140625) * C3367 + std::sqrt(0.5625) * C3374;
    gy[372] += std::sqrt(0.03515625) * C44 + std::sqrt(0.03515625) * C51 -
               std::sqrt(0.140625) * C58 - std::sqrt(0.03515625) * C86 -
               std::sqrt(0.03515625) * C93 + std::sqrt(0.140625) * C100 -
               std::sqrt(0.03515625) * C296 - std::sqrt(0.03515625) * C303 +
               std::sqrt(0.140625) * C310 + std::sqrt(0.03515625) * C338 +
               std::sqrt(0.03515625) * C345 - std::sqrt(0.140625) * C352 +
               std::sqrt(0.03515625) * C1556 + std::sqrt(0.03515625) * C1563 -
               std::sqrt(0.140625) * C1570 - std::sqrt(0.03515625) * C1598 -
               std::sqrt(0.03515625) * C1605 + std::sqrt(0.140625) * C1612 -
               std::sqrt(0.03515625) * C1808 - std::sqrt(0.03515625) * C1815 +
               std::sqrt(0.140625) * C1822 + std::sqrt(0.03515625) * C1850 +
               std::sqrt(0.03515625) * C1857 - std::sqrt(0.140625) * C1864 -
               std::sqrt(0.140625) * C3068 - std::sqrt(0.140625) * C3075 +
               std::sqrt(0.5625) * C3082 + std::sqrt(0.140625) * C3110 +
               std::sqrt(0.140625) * C3117 - std::sqrt(0.5625) * C3124 +
               std::sqrt(0.140625) * C3320 + std::sqrt(0.140625) * C3327 -
               std::sqrt(0.5625) * C3334 - std::sqrt(0.140625) * C3362 -
               std::sqrt(0.140625) * C3369 + std::sqrt(0.5625) * C3376;
    gz[372] += std::sqrt(0.03515625) * C46 + std::sqrt(0.03515625) * C53 -
               std::sqrt(0.140625) * C60 - std::sqrt(0.03515625) * C88 -
               std::sqrt(0.03515625) * C95 + std::sqrt(0.140625) * C102 -
               std::sqrt(0.03515625) * C298 - std::sqrt(0.03515625) * C305 +
               std::sqrt(0.140625) * C312 + std::sqrt(0.03515625) * C340 +
               std::sqrt(0.03515625) * C347 - std::sqrt(0.140625) * C354 +
               std::sqrt(0.03515625) * C1558 + std::sqrt(0.03515625) * C1565 -
               std::sqrt(0.140625) * C1572 - std::sqrt(0.03515625) * C1600 -
               std::sqrt(0.03515625) * C1607 + std::sqrt(0.140625) * C1614 -
               std::sqrt(0.03515625) * C1810 - std::sqrt(0.03515625) * C1817 +
               std::sqrt(0.140625) * C1824 + std::sqrt(0.03515625) * C1852 +
               std::sqrt(0.03515625) * C1859 - std::sqrt(0.140625) * C1866 -
               std::sqrt(0.140625) * C3070 - std::sqrt(0.140625) * C3077 +
               std::sqrt(0.5625) * C3084 + std::sqrt(0.140625) * C3112 +
               std::sqrt(0.140625) * C3119 - std::sqrt(0.5625) * C3126 +
               std::sqrt(0.140625) * C3322 + std::sqrt(0.140625) * C3329 -
               std::sqrt(0.5625) * C3336 - std::sqrt(0.140625) * C3364 -
               std::sqrt(0.140625) * C3371 + std::sqrt(0.5625) * C3378;
    gx[373] += std::sqrt(0.421875) * C112 - std::sqrt(0.421875) * C70 +
               std::sqrt(0.421875) * C322 - std::sqrt(0.421875) * C364 -
               std::sqrt(0.421875) * C1582 + std::sqrt(0.421875) * C1624 +
               std::sqrt(0.421875) * C1834 - std::sqrt(0.421875) * C1876 +
               std::sqrt(1.6875) * C3094 - std::sqrt(1.6875) * C3136 -
               std::sqrt(1.6875) * C3346 + std::sqrt(1.6875) * C3388;
    gy[373] += std::sqrt(0.421875) * C114 - std::sqrt(0.421875) * C72 +
               std::sqrt(0.421875) * C324 - std::sqrt(0.421875) * C366 -
               std::sqrt(0.421875) * C1584 + std::sqrt(0.421875) * C1626 +
               std::sqrt(0.421875) * C1836 - std::sqrt(0.421875) * C1878 +
               std::sqrt(1.6875) * C3096 - std::sqrt(1.6875) * C3138 -
               std::sqrt(1.6875) * C3348 + std::sqrt(1.6875) * C3390;
    gz[373] += std::sqrt(0.421875) * C116 - std::sqrt(0.421875) * C74 +
               std::sqrt(0.421875) * C326 - std::sqrt(0.421875) * C368 -
               std::sqrt(0.421875) * C1586 + std::sqrt(0.421875) * C1628 +
               std::sqrt(0.421875) * C1838 - std::sqrt(0.421875) * C1880 +
               std::sqrt(1.6875) * C3098 - std::sqrt(1.6875) * C3140 -
               std::sqrt(1.6875) * C3350 + std::sqrt(1.6875) * C3392;
    gx[374] += std::sqrt(0.10546875) * C49 - std::sqrt(0.10546875) * C40 +
               std::sqrt(0.10546875) * C84 - std::sqrt(0.10546875) * C91 +
               std::sqrt(0.10546875) * C294 - std::sqrt(0.10546875) * C301 -
               std::sqrt(0.10546875) * C336 + std::sqrt(0.10546875) * C343 -
               std::sqrt(0.10546875) * C1554 + std::sqrt(0.10546875) * C1561 +
               std::sqrt(0.10546875) * C1596 - std::sqrt(0.10546875) * C1603 +
               std::sqrt(0.10546875) * C1806 - std::sqrt(0.10546875) * C1813 -
               std::sqrt(0.10546875) * C1848 + std::sqrt(0.10546875) * C1855 +
               std::sqrt(0.421875) * C3066 - std::sqrt(0.421875) * C3073 -
               std::sqrt(0.421875) * C3108 + std::sqrt(0.421875) * C3115 -
               std::sqrt(0.421875) * C3318 + std::sqrt(0.421875) * C3325 +
               std::sqrt(0.421875) * C3360 - std::sqrt(0.421875) * C3367;
    gy[374] += std::sqrt(0.10546875) * C51 - std::sqrt(0.10546875) * C44 +
               std::sqrt(0.10546875) * C86 - std::sqrt(0.10546875) * C93 +
               std::sqrt(0.10546875) * C296 - std::sqrt(0.10546875) * C303 -
               std::sqrt(0.10546875) * C338 + std::sqrt(0.10546875) * C345 -
               std::sqrt(0.10546875) * C1556 + std::sqrt(0.10546875) * C1563 +
               std::sqrt(0.10546875) * C1598 - std::sqrt(0.10546875) * C1605 +
               std::sqrt(0.10546875) * C1808 - std::sqrt(0.10546875) * C1815 -
               std::sqrt(0.10546875) * C1850 + std::sqrt(0.10546875) * C1857 +
               std::sqrt(0.421875) * C3068 - std::sqrt(0.421875) * C3075 -
               std::sqrt(0.421875) * C3110 + std::sqrt(0.421875) * C3117 -
               std::sqrt(0.421875) * C3320 + std::sqrt(0.421875) * C3327 +
               std::sqrt(0.421875) * C3362 - std::sqrt(0.421875) * C3369;
    gz[374] += std::sqrt(0.10546875) * C53 - std::sqrt(0.10546875) * C46 +
               std::sqrt(0.10546875) * C88 - std::sqrt(0.10546875) * C95 +
               std::sqrt(0.10546875) * C298 - std::sqrt(0.10546875) * C305 -
               std::sqrt(0.10546875) * C340 + std::sqrt(0.10546875) * C347 -
               std::sqrt(0.10546875) * C1558 + std::sqrt(0.10546875) * C1565 +
               std::sqrt(0.10546875) * C1600 - std::sqrt(0.10546875) * C1607 +
               std::sqrt(0.10546875) * C1810 - std::sqrt(0.10546875) * C1817 -
               std::sqrt(0.10546875) * C1852 + std::sqrt(0.10546875) * C1859 +
               std::sqrt(0.421875) * C3070 - std::sqrt(0.421875) * C3077 -
               std::sqrt(0.421875) * C3112 + std::sqrt(0.421875) * C3119 -
               std::sqrt(0.421875) * C3322 + std::sqrt(0.421875) * C3329 +
               std::sqrt(0.421875) * C3364 - std::sqrt(0.421875) * C3371;
    gx[375] += std::sqrt(81.) * C6993;
    gy[375] += std::sqrt(81.) * C6995;
    gz[375] += std::sqrt(81.) * C6997;
    gx[376] += std::sqrt(81.) * C7007;
    gy[376] += std::sqrt(81.) * C7009;
    gz[376] += std::sqrt(81.) * C7011;
    gx[377] += std::sqrt(27.) * C6986 -
               (std::sqrt(6.75) * C6979 + std::sqrt(6.75) * C6972);
    gy[377] += std::sqrt(27.) * C6988 -
               (std::sqrt(6.75) * C6981 + std::sqrt(6.75) * C6974);
    gz[377] += std::sqrt(27.) * C6990 -
               (std::sqrt(6.75) * C6983 + std::sqrt(6.75) * C6976);
    gx[378] += std::sqrt(81.) * C7000;
    gy[378] += std::sqrt(81.) * C7002;
    gz[378] += std::sqrt(81.) * C7004;
    gx[379] += std::sqrt(20.25) * C6972 - std::sqrt(20.25) * C6979;
    gy[379] += std::sqrt(20.25) * C6974 - std::sqrt(20.25) * C6981;
    gz[379] += std::sqrt(20.25) * C6976 - std::sqrt(20.25) * C6983;
    gx[380] += std::sqrt(81.) * C7077;
    gy[380] += std::sqrt(81.) * C7079;
    gz[380] += std::sqrt(81.) * C7081;
    gx[381] += std::sqrt(81.) * C7091;
    gy[381] += std::sqrt(81.) * C7093;
    gz[381] += std::sqrt(81.) * C7095;
    gx[382] += std::sqrt(27.) * C7070 -
               (std::sqrt(6.75) * C7063 + std::sqrt(6.75) * C7056);
    gy[382] += std::sqrt(27.) * C7072 -
               (std::sqrt(6.75) * C7065 + std::sqrt(6.75) * C7058);
    gz[382] += std::sqrt(27.) * C7074 -
               (std::sqrt(6.75) * C7067 + std::sqrt(6.75) * C7060);
    gx[383] += std::sqrt(81.) * C7084;
    gy[383] += std::sqrt(81.) * C7086;
    gz[383] += std::sqrt(81.) * C7088;
    gx[384] += std::sqrt(20.25) * C7056 - std::sqrt(20.25) * C7063;
    gy[384] += std::sqrt(20.25) * C7058 - std::sqrt(20.25) * C7065;
    gz[384] += std::sqrt(20.25) * C7060 - std::sqrt(20.25) * C7067;
    gx[385] += std::sqrt(27.) * C6951 -
               (std::sqrt(6.75) * C6909 + std::sqrt(6.75) * C6867);
    gy[385] += std::sqrt(27.) * C6953 -
               (std::sqrt(6.75) * C6911 + std::sqrt(6.75) * C6869);
    gz[385] += std::sqrt(27.) * C6955 -
               (std::sqrt(6.75) * C6913 + std::sqrt(6.75) * C6871);
    gx[386] += std::sqrt(27.) * C6965 -
               (std::sqrt(6.75) * C6923 + std::sqrt(6.75) * C6881);
    gy[386] += std::sqrt(27.) * C6967 -
               (std::sqrt(6.75) * C6925 + std::sqrt(6.75) * C6883);
    gz[386] += std::sqrt(27.) * C6969 -
               (std::sqrt(6.75) * C6927 + std::sqrt(6.75) * C6885);
    gx[387] += std::sqrt(0.5625) * C6846 + std::sqrt(0.5625) * C6853 -
               std::sqrt(2.25) * C6860 + std::sqrt(0.5625) * C6888 +
               std::sqrt(0.5625) * C6895 - std::sqrt(2.25) * C6902 -
               std::sqrt(2.25) * C6930 - std::sqrt(2.25) * C6937 +
               std::sqrt(9.) * C6944;
    gy[387] += std::sqrt(0.5625) * C6848 + std::sqrt(0.5625) * C6855 -
               std::sqrt(2.25) * C6862 + std::sqrt(0.5625) * C6890 +
               std::sqrt(0.5625) * C6897 - std::sqrt(2.25) * C6904 -
               std::sqrt(2.25) * C6932 - std::sqrt(2.25) * C6939 +
               std::sqrt(9.) * C6946;
    gz[387] += std::sqrt(0.5625) * C6850 + std::sqrt(0.5625) * C6857 -
               std::sqrt(2.25) * C6864 + std::sqrt(0.5625) * C6892 +
               std::sqrt(0.5625) * C6899 - std::sqrt(2.25) * C6906 -
               std::sqrt(2.25) * C6934 - std::sqrt(2.25) * C6941 +
               std::sqrt(9.) * C6948;
    gx[388] += std::sqrt(27.) * C6958 -
               (std::sqrt(6.75) * C6916 + std::sqrt(6.75) * C6874);
    gy[388] += std::sqrt(27.) * C6960 -
               (std::sqrt(6.75) * C6918 + std::sqrt(6.75) * C6876);
    gz[388] += std::sqrt(27.) * C6962 -
               (std::sqrt(6.75) * C6920 + std::sqrt(6.75) * C6878);
    gx[389] += std::sqrt(1.6875) * C6853 - std::sqrt(1.6875) * C6846 -
               std::sqrt(1.6875) * C6888 + std::sqrt(1.6875) * C6895 +
               std::sqrt(6.75) * C6930 - std::sqrt(6.75) * C6937;
    gy[389] += std::sqrt(1.6875) * C6855 - std::sqrt(1.6875) * C6848 -
               std::sqrt(1.6875) * C6890 + std::sqrt(1.6875) * C6897 +
               std::sqrt(6.75) * C6932 - std::sqrt(6.75) * C6939;
    gz[389] += std::sqrt(1.6875) * C6857 - std::sqrt(1.6875) * C6850 -
               std::sqrt(1.6875) * C6892 + std::sqrt(1.6875) * C6899 +
               std::sqrt(6.75) * C6934 - std::sqrt(6.75) * C6941;
    gx[390] += std::sqrt(81.) * C7035;
    gy[390] += std::sqrt(81.) * C7037;
    gz[390] += std::sqrt(81.) * C7039;
    gx[391] += std::sqrt(81.) * C7049;
    gy[391] += std::sqrt(81.) * C7051;
    gz[391] += std::sqrt(81.) * C7053;
    gx[392] += std::sqrt(27.) * C7028 -
               (std::sqrt(6.75) * C7021 + std::sqrt(6.75) * C7014);
    gy[392] += std::sqrt(27.) * C7030 -
               (std::sqrt(6.75) * C7023 + std::sqrt(6.75) * C7016);
    gz[392] += std::sqrt(27.) * C7032 -
               (std::sqrt(6.75) * C7025 + std::sqrt(6.75) * C7018);
    gx[393] += std::sqrt(81.) * C7042;
    gy[393] += std::sqrt(81.) * C7044;
    gz[393] += std::sqrt(81.) * C7046;
    gx[394] += std::sqrt(20.25) * C7014 - std::sqrt(20.25) * C7021;
    gy[394] += std::sqrt(20.25) * C7016 - std::sqrt(20.25) * C7023;
    gz[394] += std::sqrt(20.25) * C7018 - std::sqrt(20.25) * C7025;
    gx[395] += std::sqrt(20.25) * C6867 - std::sqrt(20.25) * C6909;
    gy[395] += std::sqrt(20.25) * C6869 - std::sqrt(20.25) * C6911;
    gz[395] += std::sqrt(20.25) * C6871 - std::sqrt(20.25) * C6913;
    gx[396] += std::sqrt(20.25) * C6881 - std::sqrt(20.25) * C6923;
    gy[396] += std::sqrt(20.25) * C6883 - std::sqrt(20.25) * C6925;
    gz[396] += std::sqrt(20.25) * C6885 - std::sqrt(20.25) * C6927;
    gx[397] += std::sqrt(6.75) * C6860 -
               (std::sqrt(1.6875) * C6853 + std::sqrt(1.6875) * C6846) +
               std::sqrt(1.6875) * C6888 + std::sqrt(1.6875) * C6895 -
               std::sqrt(6.75) * C6902;
    gy[397] += std::sqrt(6.75) * C6862 -
               (std::sqrt(1.6875) * C6855 + std::sqrt(1.6875) * C6848) +
               std::sqrt(1.6875) * C6890 + std::sqrt(1.6875) * C6897 -
               std::sqrt(6.75) * C6904;
    gz[397] += std::sqrt(6.75) * C6864 -
               (std::sqrt(1.6875) * C6857 + std::sqrt(1.6875) * C6850) +
               std::sqrt(1.6875) * C6892 + std::sqrt(1.6875) * C6899 -
               std::sqrt(6.75) * C6906;
    gx[398] += std::sqrt(20.25) * C6874 - std::sqrt(20.25) * C6916;
    gy[398] += std::sqrt(20.25) * C6876 - std::sqrt(20.25) * C6918;
    gz[398] += std::sqrt(20.25) * C6878 - std::sqrt(20.25) * C6920;
    gx[399] += std::sqrt(5.0625) * C6846 - std::sqrt(5.0625) * C6853 -
               std::sqrt(5.0625) * C6888 + std::sqrt(5.0625) * C6895;
    gy[399] += std::sqrt(5.0625) * C6848 - std::sqrt(5.0625) * C6855 -
               std::sqrt(5.0625) * C6890 + std::sqrt(5.0625) * C6897;
    gz[399] += std::sqrt(5.0625) * C6850 - std::sqrt(5.0625) * C6857 -
               std::sqrt(5.0625) * C6892 + std::sqrt(5.0625) * C6899;
    gx[400] += std::sqrt(81.) * C7497;
    gy[400] += std::sqrt(81.) * C7499;
    gz[400] += std::sqrt(81.) * C7501;
    gx[401] += std::sqrt(81.) * C7511;
    gy[401] += std::sqrt(81.) * C7513;
    gz[401] += std::sqrt(81.) * C7515;
    gx[402] += std::sqrt(27.) * C7490 -
               (std::sqrt(6.75) * C7483 + std::sqrt(6.75) * C7476);
    gy[402] += std::sqrt(27.) * C7492 -
               (std::sqrt(6.75) * C7485 + std::sqrt(6.75) * C7478);
    gz[402] += std::sqrt(27.) * C7494 -
               (std::sqrt(6.75) * C7487 + std::sqrt(6.75) * C7480);
    gx[403] += std::sqrt(81.) * C7504;
    gy[403] += std::sqrt(81.) * C7506;
    gz[403] += std::sqrt(81.) * C7508;
    gx[404] += std::sqrt(20.25) * C7476 - std::sqrt(20.25) * C7483;
    gy[404] += std::sqrt(20.25) * C7478 - std::sqrt(20.25) * C7485;
    gz[404] += std::sqrt(20.25) * C7480 - std::sqrt(20.25) * C7487;
    gx[405] += std::sqrt(81.) * C7581;
    gy[405] += std::sqrt(81.) * C7583;
    gz[405] += std::sqrt(81.) * C7585;
    gx[406] += std::sqrt(81.) * C7595;
    gy[406] += std::sqrt(81.) * C7597;
    gz[406] += std::sqrt(81.) * C7599;
    gx[407] += std::sqrt(27.) * C7574 -
               (std::sqrt(6.75) * C7567 + std::sqrt(6.75) * C7560);
    gy[407] += std::sqrt(27.) * C7576 -
               (std::sqrt(6.75) * C7569 + std::sqrt(6.75) * C7562);
    gz[407] += std::sqrt(27.) * C7578 -
               (std::sqrt(6.75) * C7571 + std::sqrt(6.75) * C7564);
    gx[408] += std::sqrt(81.) * C7588;
    gy[408] += std::sqrt(81.) * C7590;
    gz[408] += std::sqrt(81.) * C7592;
    gx[409] += std::sqrt(20.25) * C7560 - std::sqrt(20.25) * C7567;
    gy[409] += std::sqrt(20.25) * C7562 - std::sqrt(20.25) * C7569;
    gz[409] += std::sqrt(20.25) * C7564 - std::sqrt(20.25) * C7571;
    gx[410] += std::sqrt(27.) * C7455 -
               (std::sqrt(6.75) * C7413 + std::sqrt(6.75) * C7371);
    gy[410] += std::sqrt(27.) * C7457 -
               (std::sqrt(6.75) * C7415 + std::sqrt(6.75) * C7373);
    gz[410] += std::sqrt(27.) * C7459 -
               (std::sqrt(6.75) * C7417 + std::sqrt(6.75) * C7375);
    gx[411] += std::sqrt(27.) * C7469 -
               (std::sqrt(6.75) * C7427 + std::sqrt(6.75) * C7385);
    gy[411] += std::sqrt(27.) * C7471 -
               (std::sqrt(6.75) * C7429 + std::sqrt(6.75) * C7387);
    gz[411] += std::sqrt(27.) * C7473 -
               (std::sqrt(6.75) * C7431 + std::sqrt(6.75) * C7389);
    gx[412] += std::sqrt(0.5625) * C7350 + std::sqrt(0.5625) * C7357 -
               std::sqrt(2.25) * C7364 + std::sqrt(0.5625) * C7392 +
               std::sqrt(0.5625) * C7399 - std::sqrt(2.25) * C7406 -
               std::sqrt(2.25) * C7434 - std::sqrt(2.25) * C7441 +
               std::sqrt(9.) * C7448;
    gy[412] += std::sqrt(0.5625) * C7352 + std::sqrt(0.5625) * C7359 -
               std::sqrt(2.25) * C7366 + std::sqrt(0.5625) * C7394 +
               std::sqrt(0.5625) * C7401 - std::sqrt(2.25) * C7408 -
               std::sqrt(2.25) * C7436 - std::sqrt(2.25) * C7443 +
               std::sqrt(9.) * C7450;
    gz[412] += std::sqrt(0.5625) * C7354 + std::sqrt(0.5625) * C7361 -
               std::sqrt(2.25) * C7368 + std::sqrt(0.5625) * C7396 +
               std::sqrt(0.5625) * C7403 - std::sqrt(2.25) * C7410 -
               std::sqrt(2.25) * C7438 - std::sqrt(2.25) * C7445 +
               std::sqrt(9.) * C7452;
    gx[413] += std::sqrt(27.) * C7462 -
               (std::sqrt(6.75) * C7420 + std::sqrt(6.75) * C7378);
    gy[413] += std::sqrt(27.) * C7464 -
               (std::sqrt(6.75) * C7422 + std::sqrt(6.75) * C7380);
    gz[413] += std::sqrt(27.) * C7466 -
               (std::sqrt(6.75) * C7424 + std::sqrt(6.75) * C7382);
    gx[414] += std::sqrt(1.6875) * C7357 - std::sqrt(1.6875) * C7350 -
               std::sqrt(1.6875) * C7392 + std::sqrt(1.6875) * C7399 +
               std::sqrt(6.75) * C7434 - std::sqrt(6.75) * C7441;
    gy[414] += std::sqrt(1.6875) * C7359 - std::sqrt(1.6875) * C7352 -
               std::sqrt(1.6875) * C7394 + std::sqrt(1.6875) * C7401 +
               std::sqrt(6.75) * C7436 - std::sqrt(6.75) * C7443;
    gz[414] += std::sqrt(1.6875) * C7361 - std::sqrt(1.6875) * C7354 -
               std::sqrt(1.6875) * C7396 + std::sqrt(1.6875) * C7403 +
               std::sqrt(6.75) * C7438 - std::sqrt(6.75) * C7445;
    gx[415] += std::sqrt(81.) * C7539;
    gy[415] += std::sqrt(81.) * C7541;
    gz[415] += std::sqrt(81.) * C7543;
    gx[416] += std::sqrt(81.) * C7553;
    gy[416] += std::sqrt(81.) * C7555;
    gz[416] += std::sqrt(81.) * C7557;
    gx[417] += std::sqrt(27.) * C7532 -
               (std::sqrt(6.75) * C7525 + std::sqrt(6.75) * C7518);
    gy[417] += std::sqrt(27.) * C7534 -
               (std::sqrt(6.75) * C7527 + std::sqrt(6.75) * C7520);
    gz[417] += std::sqrt(27.) * C7536 -
               (std::sqrt(6.75) * C7529 + std::sqrt(6.75) * C7522);
    gx[418] += std::sqrt(81.) * C7546;
    gy[418] += std::sqrt(81.) * C7548;
    gz[418] += std::sqrt(81.) * C7550;
    gx[419] += std::sqrt(20.25) * C7518 - std::sqrt(20.25) * C7525;
    gy[419] += std::sqrt(20.25) * C7520 - std::sqrt(20.25) * C7527;
    gz[419] += std::sqrt(20.25) * C7522 - std::sqrt(20.25) * C7529;
    gx[420] += std::sqrt(20.25) * C7371 - std::sqrt(20.25) * C7413;
    gy[420] += std::sqrt(20.25) * C7373 - std::sqrt(20.25) * C7415;
    gz[420] += std::sqrt(20.25) * C7375 - std::sqrt(20.25) * C7417;
    gx[421] += std::sqrt(20.25) * C7385 - std::sqrt(20.25) * C7427;
    gy[421] += std::sqrt(20.25) * C7387 - std::sqrt(20.25) * C7429;
    gz[421] += std::sqrt(20.25) * C7389 - std::sqrt(20.25) * C7431;
    gx[422] += std::sqrt(6.75) * C7364 -
               (std::sqrt(1.6875) * C7357 + std::sqrt(1.6875) * C7350) +
               std::sqrt(1.6875) * C7392 + std::sqrt(1.6875) * C7399 -
               std::sqrt(6.75) * C7406;
    gy[422] += std::sqrt(6.75) * C7366 -
               (std::sqrt(1.6875) * C7359 + std::sqrt(1.6875) * C7352) +
               std::sqrt(1.6875) * C7394 + std::sqrt(1.6875) * C7401 -
               std::sqrt(6.75) * C7408;
    gz[422] += std::sqrt(6.75) * C7368 -
               (std::sqrt(1.6875) * C7361 + std::sqrt(1.6875) * C7354) +
               std::sqrt(1.6875) * C7396 + std::sqrt(1.6875) * C7403 -
               std::sqrt(6.75) * C7410;
    gx[423] += std::sqrt(20.25) * C7378 - std::sqrt(20.25) * C7420;
    gy[423] += std::sqrt(20.25) * C7380 - std::sqrt(20.25) * C7422;
    gz[423] += std::sqrt(20.25) * C7382 - std::sqrt(20.25) * C7424;
    gx[424] += std::sqrt(5.0625) * C7350 - std::sqrt(5.0625) * C7357 -
               std::sqrt(5.0625) * C7392 + std::sqrt(5.0625) * C7399;
    gy[424] += std::sqrt(5.0625) * C7352 - std::sqrt(5.0625) * C7359 -
               std::sqrt(5.0625) * C7394 + std::sqrt(5.0625) * C7401;
    gz[424] += std::sqrt(5.0625) * C7354 - std::sqrt(5.0625) * C7361 -
               std::sqrt(5.0625) * C7396 + std::sqrt(5.0625) * C7403;
    gx[425] += std::sqrt(27.) * C6741 -
               (std::sqrt(6.75) * C6489 + std::sqrt(6.75) * C6237);
    gy[425] += std::sqrt(27.) * C6743 -
               (std::sqrt(6.75) * C6491 + std::sqrt(6.75) * C6239);
    gz[425] += std::sqrt(27.) * C6745 -
               (std::sqrt(6.75) * C6493 + std::sqrt(6.75) * C6241);
    gx[426] += std::sqrt(27.) * C6755 -
               (std::sqrt(6.75) * C6503 + std::sqrt(6.75) * C6251);
    gy[426] += std::sqrt(27.) * C6757 -
               (std::sqrt(6.75) * C6505 + std::sqrt(6.75) * C6253);
    gz[426] += std::sqrt(27.) * C6759 -
               (std::sqrt(6.75) * C6507 + std::sqrt(6.75) * C6255);
    gx[427] += std::sqrt(0.5625) * C6216 + std::sqrt(0.5625) * C6223 -
               std::sqrt(2.25) * C6230 + std::sqrt(0.5625) * C6468 +
               std::sqrt(0.5625) * C6475 - std::sqrt(2.25) * C6482 -
               std::sqrt(2.25) * C6720 - std::sqrt(2.25) * C6727 +
               std::sqrt(9.) * C6734;
    gy[427] += std::sqrt(0.5625) * C6218 + std::sqrt(0.5625) * C6225 -
               std::sqrt(2.25) * C6232 + std::sqrt(0.5625) * C6470 +
               std::sqrt(0.5625) * C6477 - std::sqrt(2.25) * C6484 -
               std::sqrt(2.25) * C6722 - std::sqrt(2.25) * C6729 +
               std::sqrt(9.) * C6736;
    gz[427] += std::sqrt(0.5625) * C6220 + std::sqrt(0.5625) * C6227 -
               std::sqrt(2.25) * C6234 + std::sqrt(0.5625) * C6472 +
               std::sqrt(0.5625) * C6479 - std::sqrt(2.25) * C6486 -
               std::sqrt(2.25) * C6724 - std::sqrt(2.25) * C6731 +
               std::sqrt(9.) * C6738;
    gx[428] += std::sqrt(27.) * C6748 -
               (std::sqrt(6.75) * C6496 + std::sqrt(6.75) * C6244);
    gy[428] += std::sqrt(27.) * C6750 -
               (std::sqrt(6.75) * C6498 + std::sqrt(6.75) * C6246);
    gz[428] += std::sqrt(27.) * C6752 -
               (std::sqrt(6.75) * C6500 + std::sqrt(6.75) * C6248);
    gx[429] += std::sqrt(1.6875) * C6223 - std::sqrt(1.6875) * C6216 -
               std::sqrt(1.6875) * C6468 + std::sqrt(1.6875) * C6475 +
               std::sqrt(6.75) * C6720 - std::sqrt(6.75) * C6727;
    gy[429] += std::sqrt(1.6875) * C6225 - std::sqrt(1.6875) * C6218 -
               std::sqrt(1.6875) * C6470 + std::sqrt(1.6875) * C6477 +
               std::sqrt(6.75) * C6722 - std::sqrt(6.75) * C6729;
    gz[429] += std::sqrt(1.6875) * C6227 - std::sqrt(1.6875) * C6220 -
               std::sqrt(1.6875) * C6472 + std::sqrt(1.6875) * C6479 +
               std::sqrt(6.75) * C6724 - std::sqrt(6.75) * C6731;
    gx[430] += std::sqrt(27.) * C6825 -
               (std::sqrt(6.75) * C6573 + std::sqrt(6.75) * C6321);
    gy[430] += std::sqrt(27.) * C6827 -
               (std::sqrt(6.75) * C6575 + std::sqrt(6.75) * C6323);
    gz[430] += std::sqrt(27.) * C6829 -
               (std::sqrt(6.75) * C6577 + std::sqrt(6.75) * C6325);
    gx[431] += std::sqrt(27.) * C6839 -
               (std::sqrt(6.75) * C6587 + std::sqrt(6.75) * C6335);
    gy[431] += std::sqrt(27.) * C6841 -
               (std::sqrt(6.75) * C6589 + std::sqrt(6.75) * C6337);
    gz[431] += std::sqrt(27.) * C6843 -
               (std::sqrt(6.75) * C6591 + std::sqrt(6.75) * C6339);
    gx[432] += std::sqrt(0.5625) * C6300 + std::sqrt(0.5625) * C6307 -
               std::sqrt(2.25) * C6314 + std::sqrt(0.5625) * C6552 +
               std::sqrt(0.5625) * C6559 - std::sqrt(2.25) * C6566 -
               std::sqrt(2.25) * C6804 - std::sqrt(2.25) * C6811 +
               std::sqrt(9.) * C6818;
    gy[432] += std::sqrt(0.5625) * C6302 + std::sqrt(0.5625) * C6309 -
               std::sqrt(2.25) * C6316 + std::sqrt(0.5625) * C6554 +
               std::sqrt(0.5625) * C6561 - std::sqrt(2.25) * C6568 -
               std::sqrt(2.25) * C6806 - std::sqrt(2.25) * C6813 +
               std::sqrt(9.) * C6820;
    gz[432] += std::sqrt(0.5625) * C6304 + std::sqrt(0.5625) * C6311 -
               std::sqrt(2.25) * C6318 + std::sqrt(0.5625) * C6556 +
               std::sqrt(0.5625) * C6563 - std::sqrt(2.25) * C6570 -
               std::sqrt(2.25) * C6808 - std::sqrt(2.25) * C6815 +
               std::sqrt(9.) * C6822;
    gx[433] += std::sqrt(27.) * C6832 -
               (std::sqrt(6.75) * C6580 + std::sqrt(6.75) * C6328);
    gy[433] += std::sqrt(27.) * C6834 -
               (std::sqrt(6.75) * C6582 + std::sqrt(6.75) * C6330);
    gz[433] += std::sqrt(27.) * C6836 -
               (std::sqrt(6.75) * C6584 + std::sqrt(6.75) * C6332);
    gx[434] += std::sqrt(1.6875) * C6307 - std::sqrt(1.6875) * C6300 -
               std::sqrt(1.6875) * C6552 + std::sqrt(1.6875) * C6559 +
               std::sqrt(6.75) * C6804 - std::sqrt(6.75) * C6811;
    gy[434] += std::sqrt(1.6875) * C6309 - std::sqrt(1.6875) * C6302 -
               std::sqrt(1.6875) * C6554 + std::sqrt(1.6875) * C6561 +
               std::sqrt(6.75) * C6806 - std::sqrt(6.75) * C6813;
    gz[434] += std::sqrt(1.6875) * C6311 - std::sqrt(1.6875) * C6304 -
               std::sqrt(1.6875) * C6556 + std::sqrt(1.6875) * C6563 +
               std::sqrt(6.75) * C6808 - std::sqrt(6.75) * C6815;
    gx[435] += std::sqrt(0.5625) * C6111 + std::sqrt(0.5625) * C6153 -
               std::sqrt(2.25) * C6195 + std::sqrt(0.5625) * C6363 +
               std::sqrt(0.5625) * C6405 - std::sqrt(2.25) * C6447 -
               std::sqrt(2.25) * C6615 - std::sqrt(2.25) * C6657 +
               std::sqrt(9.) * C6699;
    gy[435] += std::sqrt(0.5625) * C6113 + std::sqrt(0.5625) * C6155 -
               std::sqrt(2.25) * C6197 + std::sqrt(0.5625) * C6365 +
               std::sqrt(0.5625) * C6407 - std::sqrt(2.25) * C6449 -
               std::sqrt(2.25) * C6617 - std::sqrt(2.25) * C6659 +
               std::sqrt(9.) * C6701;
    gz[435] += std::sqrt(0.5625) * C6115 + std::sqrt(0.5625) * C6157 -
               std::sqrt(2.25) * C6199 + std::sqrt(0.5625) * C6367 +
               std::sqrt(0.5625) * C6409 - std::sqrt(2.25) * C6451 -
               std::sqrt(2.25) * C6619 - std::sqrt(2.25) * C6661 +
               std::sqrt(9.) * C6703;
    gx[436] += std::sqrt(0.5625) * C6125 + std::sqrt(0.5625) * C6167 -
               std::sqrt(2.25) * C6209 + std::sqrt(0.5625) * C6377 +
               std::sqrt(0.5625) * C6419 - std::sqrt(2.25) * C6461 -
               std::sqrt(2.25) * C6629 - std::sqrt(2.25) * C6671 +
               std::sqrt(9.) * C6713;
    gy[436] += std::sqrt(0.5625) * C6127 + std::sqrt(0.5625) * C6169 -
               std::sqrt(2.25) * C6211 + std::sqrt(0.5625) * C6379 +
               std::sqrt(0.5625) * C6421 - std::sqrt(2.25) * C6463 -
               std::sqrt(2.25) * C6631 - std::sqrt(2.25) * C6673 +
               std::sqrt(9.) * C6715;
    gz[436] += std::sqrt(0.5625) * C6129 + std::sqrt(0.5625) * C6171 -
               std::sqrt(2.25) * C6213 + std::sqrt(0.5625) * C6381 +
               std::sqrt(0.5625) * C6423 - std::sqrt(2.25) * C6465 -
               std::sqrt(2.25) * C6633 - std::sqrt(2.25) * C6675 +
               std::sqrt(9.) * C6717;
    gx[437] += std::sqrt(0.1875) * C6104 -
               (std::sqrt(0.046875) * C6097 + std::sqrt(0.046875) * C6090) -
               std::sqrt(0.046875) * C6132 - std::sqrt(0.046875) * C6139 +
               std::sqrt(0.1875) * C6146 + std::sqrt(0.1875) * C6174 +
               std::sqrt(0.1875) * C6181 - std::sqrt(0.75) * C6188 -
               std::sqrt(0.046875) * C6342 - std::sqrt(0.046875) * C6349 +
               std::sqrt(0.1875) * C6356 - std::sqrt(0.046875) * C6384 -
               std::sqrt(0.046875) * C6391 + std::sqrt(0.1875) * C6398 +
               std::sqrt(0.1875) * C6426 + std::sqrt(0.1875) * C6433 -
               std::sqrt(0.75) * C6440 + std::sqrt(0.1875) * C6594 +
               std::sqrt(0.1875) * C6601 - std::sqrt(0.75) * C6608 +
               std::sqrt(0.1875) * C6636 + std::sqrt(0.1875) * C6643 -
               std::sqrt(0.75) * C6650 - std::sqrt(0.75) * C6678 -
               std::sqrt(0.75) * C6685 + std::sqrt(3.0) * C6692;
    gy[437] += std::sqrt(0.1875) * C6106 -
               (std::sqrt(0.046875) * C6099 + std::sqrt(0.046875) * C6092) -
               std::sqrt(0.046875) * C6134 - std::sqrt(0.046875) * C6141 +
               std::sqrt(0.1875) * C6148 + std::sqrt(0.1875) * C6176 +
               std::sqrt(0.1875) * C6183 - std::sqrt(0.75) * C6190 -
               std::sqrt(0.046875) * C6344 - std::sqrt(0.046875) * C6351 +
               std::sqrt(0.1875) * C6358 - std::sqrt(0.046875) * C6386 -
               std::sqrt(0.046875) * C6393 + std::sqrt(0.1875) * C6400 +
               std::sqrt(0.1875) * C6428 + std::sqrt(0.1875) * C6435 -
               std::sqrt(0.75) * C6442 + std::sqrt(0.1875) * C6596 +
               std::sqrt(0.1875) * C6603 - std::sqrt(0.75) * C6610 +
               std::sqrt(0.1875) * C6638 + std::sqrt(0.1875) * C6645 -
               std::sqrt(0.75) * C6652 - std::sqrt(0.75) * C6680 -
               std::sqrt(0.75) * C6687 + std::sqrt(3.0) * C6694;
    gz[437] += std::sqrt(0.1875) * C6108 -
               (std::sqrt(0.046875) * C6101 + std::sqrt(0.046875) * C6094) -
               std::sqrt(0.046875) * C6136 - std::sqrt(0.046875) * C6143 +
               std::sqrt(0.1875) * C6150 + std::sqrt(0.1875) * C6178 +
               std::sqrt(0.1875) * C6185 - std::sqrt(0.75) * C6192 -
               std::sqrt(0.046875) * C6346 - std::sqrt(0.046875) * C6353 +
               std::sqrt(0.1875) * C6360 - std::sqrt(0.046875) * C6388 -
               std::sqrt(0.046875) * C6395 + std::sqrt(0.1875) * C6402 +
               std::sqrt(0.1875) * C6430 + std::sqrt(0.1875) * C6437 -
               std::sqrt(0.75) * C6444 + std::sqrt(0.1875) * C6598 +
               std::sqrt(0.1875) * C6605 - std::sqrt(0.75) * C6612 +
               std::sqrt(0.1875) * C6640 + std::sqrt(0.1875) * C6647 -
               std::sqrt(0.75) * C6654 - std::sqrt(0.75) * C6682 -
               std::sqrt(0.75) * C6689 + std::sqrt(3.0) * C6696;
    gx[438] += std::sqrt(0.5625) * C6118 + std::sqrt(0.5625) * C6160 -
               std::sqrt(2.25) * C6202 + std::sqrt(0.5625) * C6370 +
               std::sqrt(0.5625) * C6412 - std::sqrt(2.25) * C6454 -
               std::sqrt(2.25) * C6622 - std::sqrt(2.25) * C6664 +
               std::sqrt(9.) * C6706;
    gy[438] += std::sqrt(0.5625) * C6120 + std::sqrt(0.5625) * C6162 -
               std::sqrt(2.25) * C6204 + std::sqrt(0.5625) * C6372 +
               std::sqrt(0.5625) * C6414 - std::sqrt(2.25) * C6456 -
               std::sqrt(2.25) * C6624 - std::sqrt(2.25) * C6666 +
               std::sqrt(9.) * C6708;
    gz[438] += std::sqrt(0.5625) * C6122 + std::sqrt(0.5625) * C6164 -
               std::sqrt(2.25) * C6206 + std::sqrt(0.5625) * C6374 +
               std::sqrt(0.5625) * C6416 - std::sqrt(2.25) * C6458 -
               std::sqrt(2.25) * C6626 - std::sqrt(2.25) * C6668 +
               std::sqrt(9.) * C6710;
    gx[439] += std::sqrt(0.140625) * C6090 - std::sqrt(0.140625) * C6097 +
               std::sqrt(0.140625) * C6132 - std::sqrt(0.140625) * C6139 -
               std::sqrt(0.5625) * C6174 + std::sqrt(0.5625) * C6181 +
               std::sqrt(0.140625) * C6342 - std::sqrt(0.140625) * C6349 +
               std::sqrt(0.140625) * C6384 - std::sqrt(0.140625) * C6391 -
               std::sqrt(0.5625) * C6426 + std::sqrt(0.5625) * C6433 -
               std::sqrt(0.5625) * C6594 + std::sqrt(0.5625) * C6601 -
               std::sqrt(0.5625) * C6636 + std::sqrt(0.5625) * C6643 +
               std::sqrt(2.25) * C6678 - std::sqrt(2.25) * C6685;
    gy[439] += std::sqrt(0.140625) * C6092 - std::sqrt(0.140625) * C6099 +
               std::sqrt(0.140625) * C6134 - std::sqrt(0.140625) * C6141 -
               std::sqrt(0.5625) * C6176 + std::sqrt(0.5625) * C6183 +
               std::sqrt(0.140625) * C6344 - std::sqrt(0.140625) * C6351 +
               std::sqrt(0.140625) * C6386 - std::sqrt(0.140625) * C6393 -
               std::sqrt(0.5625) * C6428 + std::sqrt(0.5625) * C6435 -
               std::sqrt(0.5625) * C6596 + std::sqrt(0.5625) * C6603 -
               std::sqrt(0.5625) * C6638 + std::sqrt(0.5625) * C6645 +
               std::sqrt(2.25) * C6680 - std::sqrt(2.25) * C6687;
    gz[439] += std::sqrt(0.140625) * C6094 - std::sqrt(0.140625) * C6101 +
               std::sqrt(0.140625) * C6136 - std::sqrt(0.140625) * C6143 -
               std::sqrt(0.5625) * C6178 + std::sqrt(0.5625) * C6185 +
               std::sqrt(0.140625) * C6346 - std::sqrt(0.140625) * C6353 +
               std::sqrt(0.140625) * C6388 - std::sqrt(0.140625) * C6395 -
               std::sqrt(0.5625) * C6430 + std::sqrt(0.5625) * C6437 -
               std::sqrt(0.5625) * C6598 + std::sqrt(0.5625) * C6605 -
               std::sqrt(0.5625) * C6640 + std::sqrt(0.5625) * C6647 +
               std::sqrt(2.25) * C6682 - std::sqrt(2.25) * C6689;
    gx[440] += std::sqrt(27.) * C6783 -
               (std::sqrt(6.75) * C6531 + std::sqrt(6.75) * C6279);
    gy[440] += std::sqrt(27.) * C6785 -
               (std::sqrt(6.75) * C6533 + std::sqrt(6.75) * C6281);
    gz[440] += std::sqrt(27.) * C6787 -
               (std::sqrt(6.75) * C6535 + std::sqrt(6.75) * C6283);
    gx[441] += std::sqrt(27.) * C6797 -
               (std::sqrt(6.75) * C6545 + std::sqrt(6.75) * C6293);
    gy[441] += std::sqrt(27.) * C6799 -
               (std::sqrt(6.75) * C6547 + std::sqrt(6.75) * C6295);
    gz[441] += std::sqrt(27.) * C6801 -
               (std::sqrt(6.75) * C6549 + std::sqrt(6.75) * C6297);
    gx[442] += std::sqrt(0.5625) * C6258 + std::sqrt(0.5625) * C6265 -
               std::sqrt(2.25) * C6272 + std::sqrt(0.5625) * C6510 +
               std::sqrt(0.5625) * C6517 - std::sqrt(2.25) * C6524 -
               std::sqrt(2.25) * C6762 - std::sqrt(2.25) * C6769 +
               std::sqrt(9.) * C6776;
    gy[442] += std::sqrt(0.5625) * C6260 + std::sqrt(0.5625) * C6267 -
               std::sqrt(2.25) * C6274 + std::sqrt(0.5625) * C6512 +
               std::sqrt(0.5625) * C6519 - std::sqrt(2.25) * C6526 -
               std::sqrt(2.25) * C6764 - std::sqrt(2.25) * C6771 +
               std::sqrt(9.) * C6778;
    gz[442] += std::sqrt(0.5625) * C6262 + std::sqrt(0.5625) * C6269 -
               std::sqrt(2.25) * C6276 + std::sqrt(0.5625) * C6514 +
               std::sqrt(0.5625) * C6521 - std::sqrt(2.25) * C6528 -
               std::sqrt(2.25) * C6766 - std::sqrt(2.25) * C6773 +
               std::sqrt(9.) * C6780;
    gx[443] += std::sqrt(27.) * C6790 -
               (std::sqrt(6.75) * C6538 + std::sqrt(6.75) * C6286);
    gy[443] += std::sqrt(27.) * C6792 -
               (std::sqrt(6.75) * C6540 + std::sqrt(6.75) * C6288);
    gz[443] += std::sqrt(27.) * C6794 -
               (std::sqrt(6.75) * C6542 + std::sqrt(6.75) * C6290);
    gx[444] += std::sqrt(1.6875) * C6265 - std::sqrt(1.6875) * C6258 -
               std::sqrt(1.6875) * C6510 + std::sqrt(1.6875) * C6517 +
               std::sqrt(6.75) * C6762 - std::sqrt(6.75) * C6769;
    gy[444] += std::sqrt(1.6875) * C6267 - std::sqrt(1.6875) * C6260 -
               std::sqrt(1.6875) * C6512 + std::sqrt(1.6875) * C6519 +
               std::sqrt(6.75) * C6764 - std::sqrt(6.75) * C6771;
    gz[444] += std::sqrt(1.6875) * C6269 - std::sqrt(1.6875) * C6262 -
               std::sqrt(1.6875) * C6514 + std::sqrt(1.6875) * C6521 +
               std::sqrt(6.75) * C6766 - std::sqrt(6.75) * C6773;
    gx[445] += std::sqrt(1.6875) * C6153 - std::sqrt(1.6875) * C6111 -
               std::sqrt(1.6875) * C6363 + std::sqrt(1.6875) * C6405 +
               std::sqrt(6.75) * C6615 - std::sqrt(6.75) * C6657;
    gy[445] += std::sqrt(1.6875) * C6155 - std::sqrt(1.6875) * C6113 -
               std::sqrt(1.6875) * C6365 + std::sqrt(1.6875) * C6407 +
               std::sqrt(6.75) * C6617 - std::sqrt(6.75) * C6659;
    gz[445] += std::sqrt(1.6875) * C6157 - std::sqrt(1.6875) * C6115 -
               std::sqrt(1.6875) * C6367 + std::sqrt(1.6875) * C6409 +
               std::sqrt(6.75) * C6619 - std::sqrt(6.75) * C6661;
    gx[446] += std::sqrt(1.6875) * C6167 - std::sqrt(1.6875) * C6125 -
               std::sqrt(1.6875) * C6377 + std::sqrt(1.6875) * C6419 +
               std::sqrt(6.75) * C6629 - std::sqrt(6.75) * C6671;
    gy[446] += std::sqrt(1.6875) * C6169 - std::sqrt(1.6875) * C6127 -
               std::sqrt(1.6875) * C6379 + std::sqrt(1.6875) * C6421 +
               std::sqrt(6.75) * C6631 - std::sqrt(6.75) * C6673;
    gz[446] += std::sqrt(1.6875) * C6171 - std::sqrt(1.6875) * C6129 -
               std::sqrt(1.6875) * C6381 + std::sqrt(1.6875) * C6423 +
               std::sqrt(6.75) * C6633 - std::sqrt(6.75) * C6675;
    gx[447] += std::sqrt(0.140625) * C6090 + std::sqrt(0.140625) * C6097 -
               std::sqrt(0.5625) * C6104 - std::sqrt(0.140625) * C6132 -
               std::sqrt(0.140625) * C6139 + std::sqrt(0.5625) * C6146 +
               std::sqrt(0.140625) * C6342 + std::sqrt(0.140625) * C6349 -
               std::sqrt(0.5625) * C6356 - std::sqrt(0.140625) * C6384 -
               std::sqrt(0.140625) * C6391 + std::sqrt(0.5625) * C6398 -
               std::sqrt(0.5625) * C6594 - std::sqrt(0.5625) * C6601 +
               std::sqrt(2.25) * C6608 + std::sqrt(0.5625) * C6636 +
               std::sqrt(0.5625) * C6643 - std::sqrt(2.25) * C6650;
    gy[447] += std::sqrt(0.140625) * C6092 + std::sqrt(0.140625) * C6099 -
               std::sqrt(0.5625) * C6106 - std::sqrt(0.140625) * C6134 -
               std::sqrt(0.140625) * C6141 + std::sqrt(0.5625) * C6148 +
               std::sqrt(0.140625) * C6344 + std::sqrt(0.140625) * C6351 -
               std::sqrt(0.5625) * C6358 - std::sqrt(0.140625) * C6386 -
               std::sqrt(0.140625) * C6393 + std::sqrt(0.5625) * C6400 -
               std::sqrt(0.5625) * C6596 - std::sqrt(0.5625) * C6603 +
               std::sqrt(2.25) * C6610 + std::sqrt(0.5625) * C6638 +
               std::sqrt(0.5625) * C6645 - std::sqrt(2.25) * C6652;
    gz[447] += std::sqrt(0.140625) * C6094 + std::sqrt(0.140625) * C6101 -
               std::sqrt(0.5625) * C6108 - std::sqrt(0.140625) * C6136 -
               std::sqrt(0.140625) * C6143 + std::sqrt(0.5625) * C6150 +
               std::sqrt(0.140625) * C6346 + std::sqrt(0.140625) * C6353 -
               std::sqrt(0.5625) * C6360 - std::sqrt(0.140625) * C6388 -
               std::sqrt(0.140625) * C6395 + std::sqrt(0.5625) * C6402 -
               std::sqrt(0.5625) * C6598 - std::sqrt(0.5625) * C6605 +
               std::sqrt(2.25) * C6612 + std::sqrt(0.5625) * C6640 +
               std::sqrt(0.5625) * C6647 - std::sqrt(2.25) * C6654;
    gx[448] += std::sqrt(1.6875) * C6160 - std::sqrt(1.6875) * C6118 -
               std::sqrt(1.6875) * C6370 + std::sqrt(1.6875) * C6412 +
               std::sqrt(6.75) * C6622 - std::sqrt(6.75) * C6664;
    gy[448] += std::sqrt(1.6875) * C6162 - std::sqrt(1.6875) * C6120 -
               std::sqrt(1.6875) * C6372 + std::sqrt(1.6875) * C6414 +
               std::sqrt(6.75) * C6624 - std::sqrt(6.75) * C6666;
    gz[448] += std::sqrt(1.6875) * C6164 - std::sqrt(1.6875) * C6122 -
               std::sqrt(1.6875) * C6374 + std::sqrt(1.6875) * C6416 +
               std::sqrt(6.75) * C6626 - std::sqrt(6.75) * C6668;
    gx[449] += std::sqrt(0.421875) * C6097 - std::sqrt(0.421875) * C6090 +
               std::sqrt(0.421875) * C6132 - std::sqrt(0.421875) * C6139 -
               std::sqrt(0.421875) * C6342 + std::sqrt(0.421875) * C6349 +
               std::sqrt(0.421875) * C6384 - std::sqrt(0.421875) * C6391 +
               std::sqrt(1.6875) * C6594 - std::sqrt(1.6875) * C6601 -
               std::sqrt(1.6875) * C6636 + std::sqrt(1.6875) * C6643;
    gy[449] += std::sqrt(0.421875) * C6099 - std::sqrt(0.421875) * C6092 +
               std::sqrt(0.421875) * C6134 - std::sqrt(0.421875) * C6141 -
               std::sqrt(0.421875) * C6344 + std::sqrt(0.421875) * C6351 +
               std::sqrt(0.421875) * C6386 - std::sqrt(0.421875) * C6393 +
               std::sqrt(1.6875) * C6596 - std::sqrt(1.6875) * C6603 -
               std::sqrt(1.6875) * C6638 + std::sqrt(1.6875) * C6645;
    gz[449] += std::sqrt(0.421875) * C6101 - std::sqrt(0.421875) * C6094 +
               std::sqrt(0.421875) * C6136 - std::sqrt(0.421875) * C6143 -
               std::sqrt(0.421875) * C6346 + std::sqrt(0.421875) * C6353 +
               std::sqrt(0.421875) * C6388 - std::sqrt(0.421875) * C6395 +
               std::sqrt(1.6875) * C6598 - std::sqrt(1.6875) * C6605 -
               std::sqrt(1.6875) * C6640 + std::sqrt(1.6875) * C6647;
    gx[450] += std::sqrt(81.) * C7245;
    gy[450] += std::sqrt(81.) * C7247;
    gz[450] += std::sqrt(81.) * C7249;
    gx[451] += std::sqrt(81.) * C7259;
    gy[451] += std::sqrt(81.) * C7261;
    gz[451] += std::sqrt(81.) * C7263;
    gx[452] += std::sqrt(27.) * C7238 -
               (std::sqrt(6.75) * C7231 + std::sqrt(6.75) * C7224);
    gy[452] += std::sqrt(27.) * C7240 -
               (std::sqrt(6.75) * C7233 + std::sqrt(6.75) * C7226);
    gz[452] += std::sqrt(27.) * C7242 -
               (std::sqrt(6.75) * C7235 + std::sqrt(6.75) * C7228);
    gx[453] += std::sqrt(81.) * C7252;
    gy[453] += std::sqrt(81.) * C7254;
    gz[453] += std::sqrt(81.) * C7256;
    gx[454] += std::sqrt(20.25) * C7224 - std::sqrt(20.25) * C7231;
    gy[454] += std::sqrt(20.25) * C7226 - std::sqrt(20.25) * C7233;
    gz[454] += std::sqrt(20.25) * C7228 - std::sqrt(20.25) * C7235;
    gx[455] += std::sqrt(81.) * C7329;
    gy[455] += std::sqrt(81.) * C7331;
    gz[455] += std::sqrt(81.) * C7333;
    gx[456] += std::sqrt(81.) * C7343;
    gy[456] += std::sqrt(81.) * C7345;
    gz[456] += std::sqrt(81.) * C7347;
    gx[457] += std::sqrt(27.) * C7322 -
               (std::sqrt(6.75) * C7315 + std::sqrt(6.75) * C7308);
    gy[457] += std::sqrt(27.) * C7324 -
               (std::sqrt(6.75) * C7317 + std::sqrt(6.75) * C7310);
    gz[457] += std::sqrt(27.) * C7326 -
               (std::sqrt(6.75) * C7319 + std::sqrt(6.75) * C7312);
    gx[458] += std::sqrt(81.) * C7336;
    gy[458] += std::sqrt(81.) * C7338;
    gz[458] += std::sqrt(81.) * C7340;
    gx[459] += std::sqrt(20.25) * C7308 - std::sqrt(20.25) * C7315;
    gy[459] += std::sqrt(20.25) * C7310 - std::sqrt(20.25) * C7317;
    gz[459] += std::sqrt(20.25) * C7312 - std::sqrt(20.25) * C7319;
    gx[460] += std::sqrt(27.) * C7203 -
               (std::sqrt(6.75) * C7161 + std::sqrt(6.75) * C7119);
    gy[460] += std::sqrt(27.) * C7205 -
               (std::sqrt(6.75) * C7163 + std::sqrt(6.75) * C7121);
    gz[460] += std::sqrt(27.) * C7207 -
               (std::sqrt(6.75) * C7165 + std::sqrt(6.75) * C7123);
    gx[461] += std::sqrt(27.) * C7217 -
               (std::sqrt(6.75) * C7175 + std::sqrt(6.75) * C7133);
    gy[461] += std::sqrt(27.) * C7219 -
               (std::sqrt(6.75) * C7177 + std::sqrt(6.75) * C7135);
    gz[461] += std::sqrt(27.) * C7221 -
               (std::sqrt(6.75) * C7179 + std::sqrt(6.75) * C7137);
    gx[462] += std::sqrt(0.5625) * C7098 + std::sqrt(0.5625) * C7105 -
               std::sqrt(2.25) * C7112 + std::sqrt(0.5625) * C7140 +
               std::sqrt(0.5625) * C7147 - std::sqrt(2.25) * C7154 -
               std::sqrt(2.25) * C7182 - std::sqrt(2.25) * C7189 +
               std::sqrt(9.) * C7196;
    gy[462] += std::sqrt(0.5625) * C7100 + std::sqrt(0.5625) * C7107 -
               std::sqrt(2.25) * C7114 + std::sqrt(0.5625) * C7142 +
               std::sqrt(0.5625) * C7149 - std::sqrt(2.25) * C7156 -
               std::sqrt(2.25) * C7184 - std::sqrt(2.25) * C7191 +
               std::sqrt(9.) * C7198;
    gz[462] += std::sqrt(0.5625) * C7102 + std::sqrt(0.5625) * C7109 -
               std::sqrt(2.25) * C7116 + std::sqrt(0.5625) * C7144 +
               std::sqrt(0.5625) * C7151 - std::sqrt(2.25) * C7158 -
               std::sqrt(2.25) * C7186 - std::sqrt(2.25) * C7193 +
               std::sqrt(9.) * C7200;
    gx[463] += std::sqrt(27.) * C7210 -
               (std::sqrt(6.75) * C7168 + std::sqrt(6.75) * C7126);
    gy[463] += std::sqrt(27.) * C7212 -
               (std::sqrt(6.75) * C7170 + std::sqrt(6.75) * C7128);
    gz[463] += std::sqrt(27.) * C7214 -
               (std::sqrt(6.75) * C7172 + std::sqrt(6.75) * C7130);
    gx[464] += std::sqrt(1.6875) * C7105 - std::sqrt(1.6875) * C7098 -
               std::sqrt(1.6875) * C7140 + std::sqrt(1.6875) * C7147 +
               std::sqrt(6.75) * C7182 - std::sqrt(6.75) * C7189;
    gy[464] += std::sqrt(1.6875) * C7107 - std::sqrt(1.6875) * C7100 -
               std::sqrt(1.6875) * C7142 + std::sqrt(1.6875) * C7149 +
               std::sqrt(6.75) * C7184 - std::sqrt(6.75) * C7191;
    gz[464] += std::sqrt(1.6875) * C7109 - std::sqrt(1.6875) * C7102 -
               std::sqrt(1.6875) * C7144 + std::sqrt(1.6875) * C7151 +
               std::sqrt(6.75) * C7186 - std::sqrt(6.75) * C7193;
    gx[465] += std::sqrt(81.) * C7287;
    gy[465] += std::sqrt(81.) * C7289;
    gz[465] += std::sqrt(81.) * C7291;
    gx[466] += std::sqrt(81.) * C7301;
    gy[466] += std::sqrt(81.) * C7303;
    gz[466] += std::sqrt(81.) * C7305;
    gx[467] += std::sqrt(27.) * C7280 -
               (std::sqrt(6.75) * C7273 + std::sqrt(6.75) * C7266);
    gy[467] += std::sqrt(27.) * C7282 -
               (std::sqrt(6.75) * C7275 + std::sqrt(6.75) * C7268);
    gz[467] += std::sqrt(27.) * C7284 -
               (std::sqrt(6.75) * C7277 + std::sqrt(6.75) * C7270);
    gx[468] += std::sqrt(81.) * C7294;
    gy[468] += std::sqrt(81.) * C7296;
    gz[468] += std::sqrt(81.) * C7298;
    gx[469] += std::sqrt(20.25) * C7266 - std::sqrt(20.25) * C7273;
    gy[469] += std::sqrt(20.25) * C7268 - std::sqrt(20.25) * C7275;
    gz[469] += std::sqrt(20.25) * C7270 - std::sqrt(20.25) * C7277;
    gx[470] += std::sqrt(20.25) * C7119 - std::sqrt(20.25) * C7161;
    gy[470] += std::sqrt(20.25) * C7121 - std::sqrt(20.25) * C7163;
    gz[470] += std::sqrt(20.25) * C7123 - std::sqrt(20.25) * C7165;
    gx[471] += std::sqrt(20.25) * C7133 - std::sqrt(20.25) * C7175;
    gy[471] += std::sqrt(20.25) * C7135 - std::sqrt(20.25) * C7177;
    gz[471] += std::sqrt(20.25) * C7137 - std::sqrt(20.25) * C7179;
    gx[472] += std::sqrt(6.75) * C7112 -
               (std::sqrt(1.6875) * C7105 + std::sqrt(1.6875) * C7098) +
               std::sqrt(1.6875) * C7140 + std::sqrt(1.6875) * C7147 -
               std::sqrt(6.75) * C7154;
    gy[472] += std::sqrt(6.75) * C7114 -
               (std::sqrt(1.6875) * C7107 + std::sqrt(1.6875) * C7100) +
               std::sqrt(1.6875) * C7142 + std::sqrt(1.6875) * C7149 -
               std::sqrt(6.75) * C7156;
    gz[472] += std::sqrt(6.75) * C7116 -
               (std::sqrt(1.6875) * C7109 + std::sqrt(1.6875) * C7102) +
               std::sqrt(1.6875) * C7144 + std::sqrt(1.6875) * C7151 -
               std::sqrt(6.75) * C7158;
    gx[473] += std::sqrt(20.25) * C7126 - std::sqrt(20.25) * C7168;
    gy[473] += std::sqrt(20.25) * C7128 - std::sqrt(20.25) * C7170;
    gz[473] += std::sqrt(20.25) * C7130 - std::sqrt(20.25) * C7172;
    gx[474] += std::sqrt(5.0625) * C7098 - std::sqrt(5.0625) * C7105 -
               std::sqrt(5.0625) * C7140 + std::sqrt(5.0625) * C7147;
    gy[474] += std::sqrt(5.0625) * C7100 - std::sqrt(5.0625) * C7107 -
               std::sqrt(5.0625) * C7142 + std::sqrt(5.0625) * C7149;
    gz[474] += std::sqrt(5.0625) * C7102 - std::sqrt(5.0625) * C7109 -
               std::sqrt(5.0625) * C7144 + std::sqrt(5.0625) * C7151;
    gx[475] += std::sqrt(20.25) * C6237 - std::sqrt(20.25) * C6489;
    gy[475] += std::sqrt(20.25) * C6239 - std::sqrt(20.25) * C6491;
    gz[475] += std::sqrt(20.25) * C6241 - std::sqrt(20.25) * C6493;
    gx[476] += std::sqrt(20.25) * C6251 - std::sqrt(20.25) * C6503;
    gy[476] += std::sqrt(20.25) * C6253 - std::sqrt(20.25) * C6505;
    gz[476] += std::sqrt(20.25) * C6255 - std::sqrt(20.25) * C6507;
    gx[477] += std::sqrt(6.75) * C6230 -
               (std::sqrt(1.6875) * C6223 + std::sqrt(1.6875) * C6216) +
               std::sqrt(1.6875) * C6468 + std::sqrt(1.6875) * C6475 -
               std::sqrt(6.75) * C6482;
    gy[477] += std::sqrt(6.75) * C6232 -
               (std::sqrt(1.6875) * C6225 + std::sqrt(1.6875) * C6218) +
               std::sqrt(1.6875) * C6470 + std::sqrt(1.6875) * C6477 -
               std::sqrt(6.75) * C6484;
    gz[477] += std::sqrt(6.75) * C6234 -
               (std::sqrt(1.6875) * C6227 + std::sqrt(1.6875) * C6220) +
               std::sqrt(1.6875) * C6472 + std::sqrt(1.6875) * C6479 -
               std::sqrt(6.75) * C6486;
    gx[478] += std::sqrt(20.25) * C6244 - std::sqrt(20.25) * C6496;
    gy[478] += std::sqrt(20.25) * C6246 - std::sqrt(20.25) * C6498;
    gz[478] += std::sqrt(20.25) * C6248 - std::sqrt(20.25) * C6500;
    gx[479] += std::sqrt(5.0625) * C6216 - std::sqrt(5.0625) * C6223 -
               std::sqrt(5.0625) * C6468 + std::sqrt(5.0625) * C6475;
    gy[479] += std::sqrt(5.0625) * C6218 - std::sqrt(5.0625) * C6225 -
               std::sqrt(5.0625) * C6470 + std::sqrt(5.0625) * C6477;
    gz[479] += std::sqrt(5.0625) * C6220 - std::sqrt(5.0625) * C6227 -
               std::sqrt(5.0625) * C6472 + std::sqrt(5.0625) * C6479;
    gx[480] += std::sqrt(20.25) * C6321 - std::sqrt(20.25) * C6573;
    gy[480] += std::sqrt(20.25) * C6323 - std::sqrt(20.25) * C6575;
    gz[480] += std::sqrt(20.25) * C6325 - std::sqrt(20.25) * C6577;
    gx[481] += std::sqrt(20.25) * C6335 - std::sqrt(20.25) * C6587;
    gy[481] += std::sqrt(20.25) * C6337 - std::sqrt(20.25) * C6589;
    gz[481] += std::sqrt(20.25) * C6339 - std::sqrt(20.25) * C6591;
    gx[482] += std::sqrt(6.75) * C6314 -
               (std::sqrt(1.6875) * C6307 + std::sqrt(1.6875) * C6300) +
               std::sqrt(1.6875) * C6552 + std::sqrt(1.6875) * C6559 -
               std::sqrt(6.75) * C6566;
    gy[482] += std::sqrt(6.75) * C6316 -
               (std::sqrt(1.6875) * C6309 + std::sqrt(1.6875) * C6302) +
               std::sqrt(1.6875) * C6554 + std::sqrt(1.6875) * C6561 -
               std::sqrt(6.75) * C6568;
    gz[482] += std::sqrt(6.75) * C6318 -
               (std::sqrt(1.6875) * C6311 + std::sqrt(1.6875) * C6304) +
               std::sqrt(1.6875) * C6556 + std::sqrt(1.6875) * C6563 -
               std::sqrt(6.75) * C6570;
    gx[483] += std::sqrt(20.25) * C6328 - std::sqrt(20.25) * C6580;
    gy[483] += std::sqrt(20.25) * C6330 - std::sqrt(20.25) * C6582;
    gz[483] += std::sqrt(20.25) * C6332 - std::sqrt(20.25) * C6584;
    gx[484] += std::sqrt(5.0625) * C6300 - std::sqrt(5.0625) * C6307 -
               std::sqrt(5.0625) * C6552 + std::sqrt(5.0625) * C6559;
    gy[484] += std::sqrt(5.0625) * C6302 - std::sqrt(5.0625) * C6309 -
               std::sqrt(5.0625) * C6554 + std::sqrt(5.0625) * C6561;
    gz[484] += std::sqrt(5.0625) * C6304 - std::sqrt(5.0625) * C6311 -
               std::sqrt(5.0625) * C6556 + std::sqrt(5.0625) * C6563;
    gx[485] += std::sqrt(6.75) * C6195 -
               (std::sqrt(1.6875) * C6153 + std::sqrt(1.6875) * C6111) +
               std::sqrt(1.6875) * C6363 + std::sqrt(1.6875) * C6405 -
               std::sqrt(6.75) * C6447;
    gy[485] += std::sqrt(6.75) * C6197 -
               (std::sqrt(1.6875) * C6155 + std::sqrt(1.6875) * C6113) +
               std::sqrt(1.6875) * C6365 + std::sqrt(1.6875) * C6407 -
               std::sqrt(6.75) * C6449;
    gz[485] += std::sqrt(6.75) * C6199 -
               (std::sqrt(1.6875) * C6157 + std::sqrt(1.6875) * C6115) +
               std::sqrt(1.6875) * C6367 + std::sqrt(1.6875) * C6409 -
               std::sqrt(6.75) * C6451;
    gx[486] += std::sqrt(6.75) * C6209 -
               (std::sqrt(1.6875) * C6167 + std::sqrt(1.6875) * C6125) +
               std::sqrt(1.6875) * C6377 + std::sqrt(1.6875) * C6419 -
               std::sqrt(6.75) * C6461;
    gy[486] += std::sqrt(6.75) * C6211 -
               (std::sqrt(1.6875) * C6169 + std::sqrt(1.6875) * C6127) +
               std::sqrt(1.6875) * C6379 + std::sqrt(1.6875) * C6421 -
               std::sqrt(6.75) * C6463;
    gz[486] += std::sqrt(6.75) * C6213 -
               (std::sqrt(1.6875) * C6171 + std::sqrt(1.6875) * C6129) +
               std::sqrt(1.6875) * C6381 + std::sqrt(1.6875) * C6423 -
               std::sqrt(6.75) * C6465;
    gx[487] += std::sqrt(0.140625) * C6090 + std::sqrt(0.140625) * C6097 -
               std::sqrt(0.5625) * C6104 + std::sqrt(0.140625) * C6132 +
               std::sqrt(0.140625) * C6139 - std::sqrt(0.5625) * C6146 -
               std::sqrt(0.5625) * C6174 - std::sqrt(0.5625) * C6181 +
               std::sqrt(2.25) * C6188 - std::sqrt(0.140625) * C6342 -
               std::sqrt(0.140625) * C6349 + std::sqrt(0.5625) * C6356 -
               std::sqrt(0.140625) * C6384 - std::sqrt(0.140625) * C6391 +
               std::sqrt(0.5625) * C6398 + std::sqrt(0.5625) * C6426 +
               std::sqrt(0.5625) * C6433 - std::sqrt(2.25) * C6440;
    gy[487] += std::sqrt(0.140625) * C6092 + std::sqrt(0.140625) * C6099 -
               std::sqrt(0.5625) * C6106 + std::sqrt(0.140625) * C6134 +
               std::sqrt(0.140625) * C6141 - std::sqrt(0.5625) * C6148 -
               std::sqrt(0.5625) * C6176 - std::sqrt(0.5625) * C6183 +
               std::sqrt(2.25) * C6190 - std::sqrt(0.140625) * C6344 -
               std::sqrt(0.140625) * C6351 + std::sqrt(0.5625) * C6358 -
               std::sqrt(0.140625) * C6386 - std::sqrt(0.140625) * C6393 +
               std::sqrt(0.5625) * C6400 + std::sqrt(0.5625) * C6428 +
               std::sqrt(0.5625) * C6435 - std::sqrt(2.25) * C6442;
    gz[487] += std::sqrt(0.140625) * C6094 + std::sqrt(0.140625) * C6101 -
               std::sqrt(0.5625) * C6108 + std::sqrt(0.140625) * C6136 +
               std::sqrt(0.140625) * C6143 - std::sqrt(0.5625) * C6150 -
               std::sqrt(0.5625) * C6178 - std::sqrt(0.5625) * C6185 +
               std::sqrt(2.25) * C6192 - std::sqrt(0.140625) * C6346 -
               std::sqrt(0.140625) * C6353 + std::sqrt(0.5625) * C6360 -
               std::sqrt(0.140625) * C6388 - std::sqrt(0.140625) * C6395 +
               std::sqrt(0.5625) * C6402 + std::sqrt(0.5625) * C6430 +
               std::sqrt(0.5625) * C6437 - std::sqrt(2.25) * C6444;
    gx[488] += std::sqrt(6.75) * C6202 -
               (std::sqrt(1.6875) * C6160 + std::sqrt(1.6875) * C6118) +
               std::sqrt(1.6875) * C6370 + std::sqrt(1.6875) * C6412 -
               std::sqrt(6.75) * C6454;
    gy[488] += std::sqrt(6.75) * C6204 -
               (std::sqrt(1.6875) * C6162 + std::sqrt(1.6875) * C6120) +
               std::sqrt(1.6875) * C6372 + std::sqrt(1.6875) * C6414 -
               std::sqrt(6.75) * C6456;
    gz[488] += std::sqrt(6.75) * C6206 -
               (std::sqrt(1.6875) * C6164 + std::sqrt(1.6875) * C6122) +
               std::sqrt(1.6875) * C6374 + std::sqrt(1.6875) * C6416 -
               std::sqrt(6.75) * C6458;
    gx[489] += std::sqrt(0.421875) * C6097 - std::sqrt(0.421875) * C6090 -
               std::sqrt(0.421875) * C6132 + std::sqrt(0.421875) * C6139 +
               std::sqrt(1.6875) * C6174 - std::sqrt(1.6875) * C6181 +
               std::sqrt(0.421875) * C6342 - std::sqrt(0.421875) * C6349 +
               std::sqrt(0.421875) * C6384 - std::sqrt(0.421875) * C6391 -
               std::sqrt(1.6875) * C6426 + std::sqrt(1.6875) * C6433;
    gy[489] += std::sqrt(0.421875) * C6099 - std::sqrt(0.421875) * C6092 -
               std::sqrt(0.421875) * C6134 + std::sqrt(0.421875) * C6141 +
               std::sqrt(1.6875) * C6176 - std::sqrt(1.6875) * C6183 +
               std::sqrt(0.421875) * C6344 - std::sqrt(0.421875) * C6351 +
               std::sqrt(0.421875) * C6386 - std::sqrt(0.421875) * C6393 -
               std::sqrt(1.6875) * C6428 + std::sqrt(1.6875) * C6435;
    gz[489] += std::sqrt(0.421875) * C6101 - std::sqrt(0.421875) * C6094 -
               std::sqrt(0.421875) * C6136 + std::sqrt(0.421875) * C6143 +
               std::sqrt(1.6875) * C6178 - std::sqrt(1.6875) * C6185 +
               std::sqrt(0.421875) * C6346 - std::sqrt(0.421875) * C6353 +
               std::sqrt(0.421875) * C6388 - std::sqrt(0.421875) * C6395 -
               std::sqrt(1.6875) * C6430 + std::sqrt(1.6875) * C6437;
    gx[490] += std::sqrt(20.25) * C6279 - std::sqrt(20.25) * C6531;
    gy[490] += std::sqrt(20.25) * C6281 - std::sqrt(20.25) * C6533;
    gz[490] += std::sqrt(20.25) * C6283 - std::sqrt(20.25) * C6535;
    gx[491] += std::sqrt(20.25) * C6293 - std::sqrt(20.25) * C6545;
    gy[491] += std::sqrt(20.25) * C6295 - std::sqrt(20.25) * C6547;
    gz[491] += std::sqrt(20.25) * C6297 - std::sqrt(20.25) * C6549;
    gx[492] += std::sqrt(6.75) * C6272 -
               (std::sqrt(1.6875) * C6265 + std::sqrt(1.6875) * C6258) +
               std::sqrt(1.6875) * C6510 + std::sqrt(1.6875) * C6517 -
               std::sqrt(6.75) * C6524;
    gy[492] += std::sqrt(6.75) * C6274 -
               (std::sqrt(1.6875) * C6267 + std::sqrt(1.6875) * C6260) +
               std::sqrt(1.6875) * C6512 + std::sqrt(1.6875) * C6519 -
               std::sqrt(6.75) * C6526;
    gz[492] += std::sqrt(6.75) * C6276 -
               (std::sqrt(1.6875) * C6269 + std::sqrt(1.6875) * C6262) +
               std::sqrt(1.6875) * C6514 + std::sqrt(1.6875) * C6521 -
               std::sqrt(6.75) * C6528;
    gx[493] += std::sqrt(20.25) * C6286 - std::sqrt(20.25) * C6538;
    gy[493] += std::sqrt(20.25) * C6288 - std::sqrt(20.25) * C6540;
    gz[493] += std::sqrt(20.25) * C6290 - std::sqrt(20.25) * C6542;
    gx[494] += std::sqrt(5.0625) * C6258 - std::sqrt(5.0625) * C6265 -
               std::sqrt(5.0625) * C6510 + std::sqrt(5.0625) * C6517;
    gy[494] += std::sqrt(5.0625) * C6260 - std::sqrt(5.0625) * C6267 -
               std::sqrt(5.0625) * C6512 + std::sqrt(5.0625) * C6519;
    gz[494] += std::sqrt(5.0625) * C6262 - std::sqrt(5.0625) * C6269 -
               std::sqrt(5.0625) * C6514 + std::sqrt(5.0625) * C6521;
    gx[495] += std::sqrt(5.0625) * C6111 - std::sqrt(5.0625) * C6153 -
               std::sqrt(5.0625) * C6363 + std::sqrt(5.0625) * C6405;
    gy[495] += std::sqrt(5.0625) * C6113 - std::sqrt(5.0625) * C6155 -
               std::sqrt(5.0625) * C6365 + std::sqrt(5.0625) * C6407;
    gz[495] += std::sqrt(5.0625) * C6115 - std::sqrt(5.0625) * C6157 -
               std::sqrt(5.0625) * C6367 + std::sqrt(5.0625) * C6409;
    gx[496] += std::sqrt(5.0625) * C6125 - std::sqrt(5.0625) * C6167 -
               std::sqrt(5.0625) * C6377 + std::sqrt(5.0625) * C6419;
    gy[496] += std::sqrt(5.0625) * C6127 - std::sqrt(5.0625) * C6169 -
               std::sqrt(5.0625) * C6379 + std::sqrt(5.0625) * C6421;
    gz[496] += std::sqrt(5.0625) * C6129 - std::sqrt(5.0625) * C6171 -
               std::sqrt(5.0625) * C6381 + std::sqrt(5.0625) * C6423;
    gx[497] += std::sqrt(1.6875) * C6104 -
               (std::sqrt(0.421875) * C6097 + std::sqrt(0.421875) * C6090) +
               std::sqrt(0.421875) * C6132 + std::sqrt(0.421875) * C6139 -
               std::sqrt(1.6875) * C6146 + std::sqrt(0.421875) * C6342 +
               std::sqrt(0.421875) * C6349 - std::sqrt(1.6875) * C6356 -
               std::sqrt(0.421875) * C6384 - std::sqrt(0.421875) * C6391 +
               std::sqrt(1.6875) * C6398;
    gy[497] += std::sqrt(1.6875) * C6106 -
               (std::sqrt(0.421875) * C6099 + std::sqrt(0.421875) * C6092) +
               std::sqrt(0.421875) * C6134 + std::sqrt(0.421875) * C6141 -
               std::sqrt(1.6875) * C6148 + std::sqrt(0.421875) * C6344 +
               std::sqrt(0.421875) * C6351 - std::sqrt(1.6875) * C6358 -
               std::sqrt(0.421875) * C6386 - std::sqrt(0.421875) * C6393 +
               std::sqrt(1.6875) * C6400;
    gz[497] += std::sqrt(1.6875) * C6108 -
               (std::sqrt(0.421875) * C6101 + std::sqrt(0.421875) * C6094) +
               std::sqrt(0.421875) * C6136 + std::sqrt(0.421875) * C6143 -
               std::sqrt(1.6875) * C6150 + std::sqrt(0.421875) * C6346 +
               std::sqrt(0.421875) * C6353 - std::sqrt(1.6875) * C6360 -
               std::sqrt(0.421875) * C6388 - std::sqrt(0.421875) * C6395 +
               std::sqrt(1.6875) * C6402;
    gx[498] += std::sqrt(5.0625) * C6118 - std::sqrt(5.0625) * C6160 -
               std::sqrt(5.0625) * C6370 + std::sqrt(5.0625) * C6412;
    gy[498] += std::sqrt(5.0625) * C6120 - std::sqrt(5.0625) * C6162 -
               std::sqrt(5.0625) * C6372 + std::sqrt(5.0625) * C6414;
    gz[498] += std::sqrt(5.0625) * C6122 - std::sqrt(5.0625) * C6164 -
               std::sqrt(5.0625) * C6374 + std::sqrt(5.0625) * C6416;
    gx[499] += std::sqrt(1.265625) * C6090 - std::sqrt(1.265625) * C6097 -
               std::sqrt(1.265625) * C6132 + std::sqrt(1.265625) * C6139 -
               std::sqrt(1.265625) * C6342 + std::sqrt(1.265625) * C6349 +
               std::sqrt(1.265625) * C6384 - std::sqrt(1.265625) * C6391;
    gy[499] += std::sqrt(1.265625) * C6092 - std::sqrt(1.265625) * C6099 -
               std::sqrt(1.265625) * C6134 + std::sqrt(1.265625) * C6141 -
               std::sqrt(1.265625) * C6344 + std::sqrt(1.265625) * C6351 +
               std::sqrt(1.265625) * C6386 - std::sqrt(1.265625) * C6393;
    gz[499] += std::sqrt(1.265625) * C6094 - std::sqrt(1.265625) * C6101 -
               std::sqrt(1.265625) * C6136 + std::sqrt(1.265625) * C6143 -
               std::sqrt(1.265625) * C6346 + std::sqrt(1.265625) * C6353 +
               std::sqrt(1.265625) * C6388 - std::sqrt(1.265625) * C6395;
    gx[500] += std::sqrt(20.25) * C945 - std::sqrt(20.25) * C2457;
    gy[500] += std::sqrt(20.25) * C947 - std::sqrt(20.25) * C2459;
    gz[500] += std::sqrt(20.25) * C949 - std::sqrt(20.25) * C2461;
    gx[501] += std::sqrt(20.25) * C959 - std::sqrt(20.25) * C2471;
    gy[501] += std::sqrt(20.25) * C961 - std::sqrt(20.25) * C2473;
    gz[501] += std::sqrt(20.25) * C963 - std::sqrt(20.25) * C2475;
    gx[502] += std::sqrt(6.75) * C938 -
               (std::sqrt(1.6875) * C931 + std::sqrt(1.6875) * C924) +
               std::sqrt(1.6875) * C2436 + std::sqrt(1.6875) * C2443 -
               std::sqrt(6.75) * C2450;
    gy[502] += std::sqrt(6.75) * C940 -
               (std::sqrt(1.6875) * C933 + std::sqrt(1.6875) * C926) +
               std::sqrt(1.6875) * C2438 + std::sqrt(1.6875) * C2445 -
               std::sqrt(6.75) * C2452;
    gz[502] += std::sqrt(6.75) * C942 -
               (std::sqrt(1.6875) * C935 + std::sqrt(1.6875) * C928) +
               std::sqrt(1.6875) * C2440 + std::sqrt(1.6875) * C2447 -
               std::sqrt(6.75) * C2454;
    gx[503] += std::sqrt(20.25) * C952 - std::sqrt(20.25) * C2464;
    gy[503] += std::sqrt(20.25) * C954 - std::sqrt(20.25) * C2466;
    gz[503] += std::sqrt(20.25) * C956 - std::sqrt(20.25) * C2468;
    gx[504] += std::sqrt(5.0625) * C924 - std::sqrt(5.0625) * C931 -
               std::sqrt(5.0625) * C2436 + std::sqrt(5.0625) * C2443;
    gy[504] += std::sqrt(5.0625) * C926 - std::sqrt(5.0625) * C933 -
               std::sqrt(5.0625) * C2438 + std::sqrt(5.0625) * C2445;
    gz[504] += std::sqrt(5.0625) * C928 - std::sqrt(5.0625) * C935 -
               std::sqrt(5.0625) * C2440 + std::sqrt(5.0625) * C2447;
    gx[505] += std::sqrt(20.25) * C1029 - std::sqrt(20.25) * C2541;
    gy[505] += std::sqrt(20.25) * C1031 - std::sqrt(20.25) * C2543;
    gz[505] += std::sqrt(20.25) * C1033 - std::sqrt(20.25) * C2545;
    gx[506] += std::sqrt(20.25) * C1043 - std::sqrt(20.25) * C2555;
    gy[506] += std::sqrt(20.25) * C1045 - std::sqrt(20.25) * C2557;
    gz[506] += std::sqrt(20.25) * C1047 - std::sqrt(20.25) * C2559;
    gx[507] += std::sqrt(6.75) * C1022 -
               (std::sqrt(1.6875) * C1015 + std::sqrt(1.6875) * C1008) +
               std::sqrt(1.6875) * C2520 + std::sqrt(1.6875) * C2527 -
               std::sqrt(6.75) * C2534;
    gy[507] += std::sqrt(6.75) * C1024 -
               (std::sqrt(1.6875) * C1017 + std::sqrt(1.6875) * C1010) +
               std::sqrt(1.6875) * C2522 + std::sqrt(1.6875) * C2529 -
               std::sqrt(6.75) * C2536;
    gz[507] += std::sqrt(6.75) * C1026 -
               (std::sqrt(1.6875) * C1019 + std::sqrt(1.6875) * C1012) +
               std::sqrt(1.6875) * C2524 + std::sqrt(1.6875) * C2531 -
               std::sqrt(6.75) * C2538;
    gx[508] += std::sqrt(20.25) * C1036 - std::sqrt(20.25) * C2548;
    gy[508] += std::sqrt(20.25) * C1038 - std::sqrt(20.25) * C2550;
    gz[508] += std::sqrt(20.25) * C1040 - std::sqrt(20.25) * C2552;
    gx[509] += std::sqrt(5.0625) * C1008 - std::sqrt(5.0625) * C1015 -
               std::sqrt(5.0625) * C2520 + std::sqrt(5.0625) * C2527;
    gy[509] += std::sqrt(5.0625) * C1010 - std::sqrt(5.0625) * C1017 -
               std::sqrt(5.0625) * C2522 + std::sqrt(5.0625) * C2529;
    gz[509] += std::sqrt(5.0625) * C1012 - std::sqrt(5.0625) * C1019 -
               std::sqrt(5.0625) * C2524 + std::sqrt(5.0625) * C2531;
    gx[510] += std::sqrt(6.75) * C903 -
               (std::sqrt(1.6875) * C861 + std::sqrt(1.6875) * C819) +
               std::sqrt(1.6875) * C2331 + std::sqrt(1.6875) * C2373 -
               std::sqrt(6.75) * C2415;
    gy[510] += std::sqrt(6.75) * C905 -
               (std::sqrt(1.6875) * C863 + std::sqrt(1.6875) * C821) +
               std::sqrt(1.6875) * C2333 + std::sqrt(1.6875) * C2375 -
               std::sqrt(6.75) * C2417;
    gz[510] += std::sqrt(6.75) * C907 -
               (std::sqrt(1.6875) * C865 + std::sqrt(1.6875) * C823) +
               std::sqrt(1.6875) * C2335 + std::sqrt(1.6875) * C2377 -
               std::sqrt(6.75) * C2419;
    gx[511] += std::sqrt(6.75) * C917 -
               (std::sqrt(1.6875) * C875 + std::sqrt(1.6875) * C833) +
               std::sqrt(1.6875) * C2345 + std::sqrt(1.6875) * C2387 -
               std::sqrt(6.75) * C2429;
    gy[511] += std::sqrt(6.75) * C919 -
               (std::sqrt(1.6875) * C877 + std::sqrt(1.6875) * C835) +
               std::sqrt(1.6875) * C2347 + std::sqrt(1.6875) * C2389 -
               std::sqrt(6.75) * C2431;
    gz[511] += std::sqrt(6.75) * C921 -
               (std::sqrt(1.6875) * C879 + std::sqrt(1.6875) * C837) +
               std::sqrt(1.6875) * C2349 + std::sqrt(1.6875) * C2391 -
               std::sqrt(6.75) * C2433;
    gx[512] += std::sqrt(0.140625) * C798 + std::sqrt(0.140625) * C805 -
               std::sqrt(0.5625) * C812 + std::sqrt(0.140625) * C840 +
               std::sqrt(0.140625) * C847 - std::sqrt(0.5625) * C854 -
               std::sqrt(0.5625) * C882 - std::sqrt(0.5625) * C889 +
               std::sqrt(2.25) * C896 - std::sqrt(0.140625) * C2310 -
               std::sqrt(0.140625) * C2317 + std::sqrt(0.5625) * C2324 -
               std::sqrt(0.140625) * C2352 - std::sqrt(0.140625) * C2359 +
               std::sqrt(0.5625) * C2366 + std::sqrt(0.5625) * C2394 +
               std::sqrt(0.5625) * C2401 - std::sqrt(2.25) * C2408;
    gy[512] += std::sqrt(0.140625) * C800 + std::sqrt(0.140625) * C807 -
               std::sqrt(0.5625) * C814 + std::sqrt(0.140625) * C842 +
               std::sqrt(0.140625) * C849 - std::sqrt(0.5625) * C856 -
               std::sqrt(0.5625) * C884 - std::sqrt(0.5625) * C891 +
               std::sqrt(2.25) * C898 - std::sqrt(0.140625) * C2312 -
               std::sqrt(0.140625) * C2319 + std::sqrt(0.5625) * C2326 -
               std::sqrt(0.140625) * C2354 - std::sqrt(0.140625) * C2361 +
               std::sqrt(0.5625) * C2368 + std::sqrt(0.5625) * C2396 +
               std::sqrt(0.5625) * C2403 - std::sqrt(2.25) * C2410;
    gz[512] += std::sqrt(0.140625) * C802 + std::sqrt(0.140625) * C809 -
               std::sqrt(0.5625) * C816 + std::sqrt(0.140625) * C844 +
               std::sqrt(0.140625) * C851 - std::sqrt(0.5625) * C858 -
               std::sqrt(0.5625) * C886 - std::sqrt(0.5625) * C893 +
               std::sqrt(2.25) * C900 - std::sqrt(0.140625) * C2314 -
               std::sqrt(0.140625) * C2321 + std::sqrt(0.5625) * C2328 -
               std::sqrt(0.140625) * C2356 - std::sqrt(0.140625) * C2363 +
               std::sqrt(0.5625) * C2370 + std::sqrt(0.5625) * C2398 +
               std::sqrt(0.5625) * C2405 - std::sqrt(2.25) * C2412;
    gx[513] += std::sqrt(6.75) * C910 -
               (std::sqrt(1.6875) * C868 + std::sqrt(1.6875) * C826) +
               std::sqrt(1.6875) * C2338 + std::sqrt(1.6875) * C2380 -
               std::sqrt(6.75) * C2422;
    gy[513] += std::sqrt(6.75) * C912 -
               (std::sqrt(1.6875) * C870 + std::sqrt(1.6875) * C828) +
               std::sqrt(1.6875) * C2340 + std::sqrt(1.6875) * C2382 -
               std::sqrt(6.75) * C2424;
    gz[513] += std::sqrt(6.75) * C914 -
               (std::sqrt(1.6875) * C872 + std::sqrt(1.6875) * C830) +
               std::sqrt(1.6875) * C2342 + std::sqrt(1.6875) * C2384 -
               std::sqrt(6.75) * C2426;
    gx[514] += std::sqrt(0.421875) * C805 - std::sqrt(0.421875) * C798 -
               std::sqrt(0.421875) * C840 + std::sqrt(0.421875) * C847 +
               std::sqrt(1.6875) * C882 - std::sqrt(1.6875) * C889 +
               std::sqrt(0.421875) * C2310 - std::sqrt(0.421875) * C2317 +
               std::sqrt(0.421875) * C2352 - std::sqrt(0.421875) * C2359 -
               std::sqrt(1.6875) * C2394 + std::sqrt(1.6875) * C2401;
    gy[514] += std::sqrt(0.421875) * C807 - std::sqrt(0.421875) * C800 -
               std::sqrt(0.421875) * C842 + std::sqrt(0.421875) * C849 +
               std::sqrt(1.6875) * C884 - std::sqrt(1.6875) * C891 +
               std::sqrt(0.421875) * C2312 - std::sqrt(0.421875) * C2319 +
               std::sqrt(0.421875) * C2354 - std::sqrt(0.421875) * C2361 -
               std::sqrt(1.6875) * C2396 + std::sqrt(1.6875) * C2403;
    gz[514] += std::sqrt(0.421875) * C809 - std::sqrt(0.421875) * C802 -
               std::sqrt(0.421875) * C844 + std::sqrt(0.421875) * C851 +
               std::sqrt(1.6875) * C886 - std::sqrt(1.6875) * C893 +
               std::sqrt(0.421875) * C2314 - std::sqrt(0.421875) * C2321 +
               std::sqrt(0.421875) * C2356 - std::sqrt(0.421875) * C2363 -
               std::sqrt(1.6875) * C2398 + std::sqrt(1.6875) * C2405;
    gx[515] += std::sqrt(20.25) * C987 - std::sqrt(20.25) * C2499;
    gy[515] += std::sqrt(20.25) * C989 - std::sqrt(20.25) * C2501;
    gz[515] += std::sqrt(20.25) * C991 - std::sqrt(20.25) * C2503;
    gx[516] += std::sqrt(20.25) * C1001 - std::sqrt(20.25) * C2513;
    gy[516] += std::sqrt(20.25) * C1003 - std::sqrt(20.25) * C2515;
    gz[516] += std::sqrt(20.25) * C1005 - std::sqrt(20.25) * C2517;
    gx[517] += std::sqrt(6.75) * C980 -
               (std::sqrt(1.6875) * C973 + std::sqrt(1.6875) * C966) +
               std::sqrt(1.6875) * C2478 + std::sqrt(1.6875) * C2485 -
               std::sqrt(6.75) * C2492;
    gy[517] += std::sqrt(6.75) * C982 -
               (std::sqrt(1.6875) * C975 + std::sqrt(1.6875) * C968) +
               std::sqrt(1.6875) * C2480 + std::sqrt(1.6875) * C2487 -
               std::sqrt(6.75) * C2494;
    gz[517] += std::sqrt(6.75) * C984 -
               (std::sqrt(1.6875) * C977 + std::sqrt(1.6875) * C970) +
               std::sqrt(1.6875) * C2482 + std::sqrt(1.6875) * C2489 -
               std::sqrt(6.75) * C2496;
    gx[518] += std::sqrt(20.25) * C994 - std::sqrt(20.25) * C2506;
    gy[518] += std::sqrt(20.25) * C996 - std::sqrt(20.25) * C2508;
    gz[518] += std::sqrt(20.25) * C998 - std::sqrt(20.25) * C2510;
    gx[519] += std::sqrt(5.0625) * C966 - std::sqrt(5.0625) * C973 -
               std::sqrt(5.0625) * C2478 + std::sqrt(5.0625) * C2485;
    gy[519] += std::sqrt(5.0625) * C968 - std::sqrt(5.0625) * C975 -
               std::sqrt(5.0625) * C2480 + std::sqrt(5.0625) * C2487;
    gz[519] += std::sqrt(5.0625) * C970 - std::sqrt(5.0625) * C977 -
               std::sqrt(5.0625) * C2482 + std::sqrt(5.0625) * C2489;
    gx[520] += std::sqrt(5.0625) * C819 - std::sqrt(5.0625) * C861 -
               std::sqrt(5.0625) * C2331 + std::sqrt(5.0625) * C2373;
    gy[520] += std::sqrt(5.0625) * C821 - std::sqrt(5.0625) * C863 -
               std::sqrt(5.0625) * C2333 + std::sqrt(5.0625) * C2375;
    gz[520] += std::sqrt(5.0625) * C823 - std::sqrt(5.0625) * C865 -
               std::sqrt(5.0625) * C2335 + std::sqrt(5.0625) * C2377;
    gx[521] += std::sqrt(5.0625) * C833 - std::sqrt(5.0625) * C875 -
               std::sqrt(5.0625) * C2345 + std::sqrt(5.0625) * C2387;
    gy[521] += std::sqrt(5.0625) * C835 - std::sqrt(5.0625) * C877 -
               std::sqrt(5.0625) * C2347 + std::sqrt(5.0625) * C2389;
    gz[521] += std::sqrt(5.0625) * C837 - std::sqrt(5.0625) * C879 -
               std::sqrt(5.0625) * C2349 + std::sqrt(5.0625) * C2391;
    gx[522] += std::sqrt(1.6875) * C812 -
               (std::sqrt(0.421875) * C805 + std::sqrt(0.421875) * C798) +
               std::sqrt(0.421875) * C840 + std::sqrt(0.421875) * C847 -
               std::sqrt(1.6875) * C854 + std::sqrt(0.421875) * C2310 +
               std::sqrt(0.421875) * C2317 - std::sqrt(1.6875) * C2324 -
               std::sqrt(0.421875) * C2352 - std::sqrt(0.421875) * C2359 +
               std::sqrt(1.6875) * C2366;
    gy[522] += std::sqrt(1.6875) * C814 -
               (std::sqrt(0.421875) * C807 + std::sqrt(0.421875) * C800) +
               std::sqrt(0.421875) * C842 + std::sqrt(0.421875) * C849 -
               std::sqrt(1.6875) * C856 + std::sqrt(0.421875) * C2312 +
               std::sqrt(0.421875) * C2319 - std::sqrt(1.6875) * C2326 -
               std::sqrt(0.421875) * C2354 - std::sqrt(0.421875) * C2361 +
               std::sqrt(1.6875) * C2368;
    gz[522] += std::sqrt(1.6875) * C816 -
               (std::sqrt(0.421875) * C809 + std::sqrt(0.421875) * C802) +
               std::sqrt(0.421875) * C844 + std::sqrt(0.421875) * C851 -
               std::sqrt(1.6875) * C858 + std::sqrt(0.421875) * C2314 +
               std::sqrt(0.421875) * C2321 - std::sqrt(1.6875) * C2328 -
               std::sqrt(0.421875) * C2356 - std::sqrt(0.421875) * C2363 +
               std::sqrt(1.6875) * C2370;
    gx[523] += std::sqrt(5.0625) * C826 - std::sqrt(5.0625) * C868 -
               std::sqrt(5.0625) * C2338 + std::sqrt(5.0625) * C2380;
    gy[523] += std::sqrt(5.0625) * C828 - std::sqrt(5.0625) * C870 -
               std::sqrt(5.0625) * C2340 + std::sqrt(5.0625) * C2382;
    gz[523] += std::sqrt(5.0625) * C830 - std::sqrt(5.0625) * C872 -
               std::sqrt(5.0625) * C2342 + std::sqrt(5.0625) * C2384;
    gx[524] += std::sqrt(1.265625) * C798 - std::sqrt(1.265625) * C805 -
               std::sqrt(1.265625) * C840 + std::sqrt(1.265625) * C847 -
               std::sqrt(1.265625) * C2310 + std::sqrt(1.265625) * C2317 +
               std::sqrt(1.265625) * C2352 - std::sqrt(1.265625) * C2359;
    gy[524] += std::sqrt(1.265625) * C800 - std::sqrt(1.265625) * C807 -
               std::sqrt(1.265625) * C842 + std::sqrt(1.265625) * C849 -
               std::sqrt(1.265625) * C2312 + std::sqrt(1.265625) * C2319 +
               std::sqrt(1.265625) * C2354 - std::sqrt(1.265625) * C2361;
    gz[524] += std::sqrt(1.265625) * C802 - std::sqrt(1.265625) * C809 -
               std::sqrt(1.265625) * C844 + std::sqrt(1.265625) * C851 -
               std::sqrt(1.265625) * C2314 + std::sqrt(1.265625) * C2321 +
               std::sqrt(1.265625) * C2356 - std::sqrt(1.265625) * C2363;
    gx[525] += std::sqrt(20.25) * C1449 - std::sqrt(20.25) * C2961;
    gy[525] += std::sqrt(20.25) * C1451 - std::sqrt(20.25) * C2963;
    gz[525] += std::sqrt(20.25) * C1453 - std::sqrt(20.25) * C2965;
    gx[526] += std::sqrt(20.25) * C1463 - std::sqrt(20.25) * C2975;
    gy[526] += std::sqrt(20.25) * C1465 - std::sqrt(20.25) * C2977;
    gz[526] += std::sqrt(20.25) * C1467 - std::sqrt(20.25) * C2979;
    gx[527] += std::sqrt(6.75) * C1442 -
               (std::sqrt(1.6875) * C1435 + std::sqrt(1.6875) * C1428) +
               std::sqrt(1.6875) * C2940 + std::sqrt(1.6875) * C2947 -
               std::sqrt(6.75) * C2954;
    gy[527] += std::sqrt(6.75) * C1444 -
               (std::sqrt(1.6875) * C1437 + std::sqrt(1.6875) * C1430) +
               std::sqrt(1.6875) * C2942 + std::sqrt(1.6875) * C2949 -
               std::sqrt(6.75) * C2956;
    gz[527] += std::sqrt(6.75) * C1446 -
               (std::sqrt(1.6875) * C1439 + std::sqrt(1.6875) * C1432) +
               std::sqrt(1.6875) * C2944 + std::sqrt(1.6875) * C2951 -
               std::sqrt(6.75) * C2958;
    gx[528] += std::sqrt(20.25) * C1456 - std::sqrt(20.25) * C2968;
    gy[528] += std::sqrt(20.25) * C1458 - std::sqrt(20.25) * C2970;
    gz[528] += std::sqrt(20.25) * C1460 - std::sqrt(20.25) * C2972;
    gx[529] += std::sqrt(5.0625) * C1428 - std::sqrt(5.0625) * C1435 -
               std::sqrt(5.0625) * C2940 + std::sqrt(5.0625) * C2947;
    gy[529] += std::sqrt(5.0625) * C1430 - std::sqrt(5.0625) * C1437 -
               std::sqrt(5.0625) * C2942 + std::sqrt(5.0625) * C2949;
    gz[529] += std::sqrt(5.0625) * C1432 - std::sqrt(5.0625) * C1439 -
               std::sqrt(5.0625) * C2944 + std::sqrt(5.0625) * C2951;
    gx[530] += std::sqrt(20.25) * C1533 - std::sqrt(20.25) * C3045;
    gy[530] += std::sqrt(20.25) * C1535 - std::sqrt(20.25) * C3047;
    gz[530] += std::sqrt(20.25) * C1537 - std::sqrt(20.25) * C3049;
    gx[531] += std::sqrt(20.25) * C1547 - std::sqrt(20.25) * C3059;
    gy[531] += std::sqrt(20.25) * C1549 - std::sqrt(20.25) * C3061;
    gz[531] += std::sqrt(20.25) * C1551 - std::sqrt(20.25) * C3063;
    gx[532] += std::sqrt(6.75) * C1526 -
               (std::sqrt(1.6875) * C1519 + std::sqrt(1.6875) * C1512) +
               std::sqrt(1.6875) * C3024 + std::sqrt(1.6875) * C3031 -
               std::sqrt(6.75) * C3038;
    gy[532] += std::sqrt(6.75) * C1528 -
               (std::sqrt(1.6875) * C1521 + std::sqrt(1.6875) * C1514) +
               std::sqrt(1.6875) * C3026 + std::sqrt(1.6875) * C3033 -
               std::sqrt(6.75) * C3040;
    gz[532] += std::sqrt(6.75) * C1530 -
               (std::sqrt(1.6875) * C1523 + std::sqrt(1.6875) * C1516) +
               std::sqrt(1.6875) * C3028 + std::sqrt(1.6875) * C3035 -
               std::sqrt(6.75) * C3042;
    gx[533] += std::sqrt(20.25) * C1540 - std::sqrt(20.25) * C3052;
    gy[533] += std::sqrt(20.25) * C1542 - std::sqrt(20.25) * C3054;
    gz[533] += std::sqrt(20.25) * C1544 - std::sqrt(20.25) * C3056;
    gx[534] += std::sqrt(5.0625) * C1512 - std::sqrt(5.0625) * C1519 -
               std::sqrt(5.0625) * C3024 + std::sqrt(5.0625) * C3031;
    gy[534] += std::sqrt(5.0625) * C1514 - std::sqrt(5.0625) * C1521 -
               std::sqrt(5.0625) * C3026 + std::sqrt(5.0625) * C3033;
    gz[534] += std::sqrt(5.0625) * C1516 - std::sqrt(5.0625) * C1523 -
               std::sqrt(5.0625) * C3028 + std::sqrt(5.0625) * C3035;
    gx[535] += std::sqrt(6.75) * C1407 -
               (std::sqrt(1.6875) * C1365 + std::sqrt(1.6875) * C1323) +
               std::sqrt(1.6875) * C2835 + std::sqrt(1.6875) * C2877 -
               std::sqrt(6.75) * C2919;
    gy[535] += std::sqrt(6.75) * C1409 -
               (std::sqrt(1.6875) * C1367 + std::sqrt(1.6875) * C1325) +
               std::sqrt(1.6875) * C2837 + std::sqrt(1.6875) * C2879 -
               std::sqrt(6.75) * C2921;
    gz[535] += std::sqrt(6.75) * C1411 -
               (std::sqrt(1.6875) * C1369 + std::sqrt(1.6875) * C1327) +
               std::sqrt(1.6875) * C2839 + std::sqrt(1.6875) * C2881 -
               std::sqrt(6.75) * C2923;
    gx[536] += std::sqrt(6.75) * C1421 -
               (std::sqrt(1.6875) * C1379 + std::sqrt(1.6875) * C1337) +
               std::sqrt(1.6875) * C2849 + std::sqrt(1.6875) * C2891 -
               std::sqrt(6.75) * C2933;
    gy[536] += std::sqrt(6.75) * C1423 -
               (std::sqrt(1.6875) * C1381 + std::sqrt(1.6875) * C1339) +
               std::sqrt(1.6875) * C2851 + std::sqrt(1.6875) * C2893 -
               std::sqrt(6.75) * C2935;
    gz[536] += std::sqrt(6.75) * C1425 -
               (std::sqrt(1.6875) * C1383 + std::sqrt(1.6875) * C1341) +
               std::sqrt(1.6875) * C2853 + std::sqrt(1.6875) * C2895 -
               std::sqrt(6.75) * C2937;
    gx[537] += std::sqrt(0.140625) * C1302 + std::sqrt(0.140625) * C1309 -
               std::sqrt(0.5625) * C1316 + std::sqrt(0.140625) * C1344 +
               std::sqrt(0.140625) * C1351 - std::sqrt(0.5625) * C1358 -
               std::sqrt(0.5625) * C1386 - std::sqrt(0.5625) * C1393 +
               std::sqrt(2.25) * C1400 - std::sqrt(0.140625) * C2814 -
               std::sqrt(0.140625) * C2821 + std::sqrt(0.5625) * C2828 -
               std::sqrt(0.140625) * C2856 - std::sqrt(0.140625) * C2863 +
               std::sqrt(0.5625) * C2870 + std::sqrt(0.5625) * C2898 +
               std::sqrt(0.5625) * C2905 - std::sqrt(2.25) * C2912;
    gy[537] += std::sqrt(0.140625) * C1304 + std::sqrt(0.140625) * C1311 -
               std::sqrt(0.5625) * C1318 + std::sqrt(0.140625) * C1346 +
               std::sqrt(0.140625) * C1353 - std::sqrt(0.5625) * C1360 -
               std::sqrt(0.5625) * C1388 - std::sqrt(0.5625) * C1395 +
               std::sqrt(2.25) * C1402 - std::sqrt(0.140625) * C2816 -
               std::sqrt(0.140625) * C2823 + std::sqrt(0.5625) * C2830 -
               std::sqrt(0.140625) * C2858 - std::sqrt(0.140625) * C2865 +
               std::sqrt(0.5625) * C2872 + std::sqrt(0.5625) * C2900 +
               std::sqrt(0.5625) * C2907 - std::sqrt(2.25) * C2914;
    gz[537] += std::sqrt(0.140625) * C1306 + std::sqrt(0.140625) * C1313 -
               std::sqrt(0.5625) * C1320 + std::sqrt(0.140625) * C1348 +
               std::sqrt(0.140625) * C1355 - std::sqrt(0.5625) * C1362 -
               std::sqrt(0.5625) * C1390 - std::sqrt(0.5625) * C1397 +
               std::sqrt(2.25) * C1404 - std::sqrt(0.140625) * C2818 -
               std::sqrt(0.140625) * C2825 + std::sqrt(0.5625) * C2832 -
               std::sqrt(0.140625) * C2860 - std::sqrt(0.140625) * C2867 +
               std::sqrt(0.5625) * C2874 + std::sqrt(0.5625) * C2902 +
               std::sqrt(0.5625) * C2909 - std::sqrt(2.25) * C2916;
    gx[538] += std::sqrt(6.75) * C1414 -
               (std::sqrt(1.6875) * C1372 + std::sqrt(1.6875) * C1330) +
               std::sqrt(1.6875) * C2842 + std::sqrt(1.6875) * C2884 -
               std::sqrt(6.75) * C2926;
    gy[538] += std::sqrt(6.75) * C1416 -
               (std::sqrt(1.6875) * C1374 + std::sqrt(1.6875) * C1332) +
               std::sqrt(1.6875) * C2844 + std::sqrt(1.6875) * C2886 -
               std::sqrt(6.75) * C2928;
    gz[538] += std::sqrt(6.75) * C1418 -
               (std::sqrt(1.6875) * C1376 + std::sqrt(1.6875) * C1334) +
               std::sqrt(1.6875) * C2846 + std::sqrt(1.6875) * C2888 -
               std::sqrt(6.75) * C2930;
    gx[539] += std::sqrt(0.421875) * C1309 - std::sqrt(0.421875) * C1302 -
               std::sqrt(0.421875) * C1344 + std::sqrt(0.421875) * C1351 +
               std::sqrt(1.6875) * C1386 - std::sqrt(1.6875) * C1393 +
               std::sqrt(0.421875) * C2814 - std::sqrt(0.421875) * C2821 +
               std::sqrt(0.421875) * C2856 - std::sqrt(0.421875) * C2863 -
               std::sqrt(1.6875) * C2898 + std::sqrt(1.6875) * C2905;
    gy[539] += std::sqrt(0.421875) * C1311 - std::sqrt(0.421875) * C1304 -
               std::sqrt(0.421875) * C1346 + std::sqrt(0.421875) * C1353 +
               std::sqrt(1.6875) * C1388 - std::sqrt(1.6875) * C1395 +
               std::sqrt(0.421875) * C2816 - std::sqrt(0.421875) * C2823 +
               std::sqrt(0.421875) * C2858 - std::sqrt(0.421875) * C2865 -
               std::sqrt(1.6875) * C2900 + std::sqrt(1.6875) * C2907;
    gz[539] += std::sqrt(0.421875) * C1313 - std::sqrt(0.421875) * C1306 -
               std::sqrt(0.421875) * C1348 + std::sqrt(0.421875) * C1355 +
               std::sqrt(1.6875) * C1390 - std::sqrt(1.6875) * C1397 +
               std::sqrt(0.421875) * C2818 - std::sqrt(0.421875) * C2825 +
               std::sqrt(0.421875) * C2860 - std::sqrt(0.421875) * C2867 -
               std::sqrt(1.6875) * C2902 + std::sqrt(1.6875) * C2909;
    gx[540] += std::sqrt(20.25) * C1491 - std::sqrt(20.25) * C3003;
    gy[540] += std::sqrt(20.25) * C1493 - std::sqrt(20.25) * C3005;
    gz[540] += std::sqrt(20.25) * C1495 - std::sqrt(20.25) * C3007;
    gx[541] += std::sqrt(20.25) * C1505 - std::sqrt(20.25) * C3017;
    gy[541] += std::sqrt(20.25) * C1507 - std::sqrt(20.25) * C3019;
    gz[541] += std::sqrt(20.25) * C1509 - std::sqrt(20.25) * C3021;
    gx[542] += std::sqrt(6.75) * C1484 -
               (std::sqrt(1.6875) * C1477 + std::sqrt(1.6875) * C1470) +
               std::sqrt(1.6875) * C2982 + std::sqrt(1.6875) * C2989 -
               std::sqrt(6.75) * C2996;
    gy[542] += std::sqrt(6.75) * C1486 -
               (std::sqrt(1.6875) * C1479 + std::sqrt(1.6875) * C1472) +
               std::sqrt(1.6875) * C2984 + std::sqrt(1.6875) * C2991 -
               std::sqrt(6.75) * C2998;
    gz[542] += std::sqrt(6.75) * C1488 -
               (std::sqrt(1.6875) * C1481 + std::sqrt(1.6875) * C1474) +
               std::sqrt(1.6875) * C2986 + std::sqrt(1.6875) * C2993 -
               std::sqrt(6.75) * C3000;
    gx[543] += std::sqrt(20.25) * C1498 - std::sqrt(20.25) * C3010;
    gy[543] += std::sqrt(20.25) * C1500 - std::sqrt(20.25) * C3012;
    gz[543] += std::sqrt(20.25) * C1502 - std::sqrt(20.25) * C3014;
    gx[544] += std::sqrt(5.0625) * C1470 - std::sqrt(5.0625) * C1477 -
               std::sqrt(5.0625) * C2982 + std::sqrt(5.0625) * C2989;
    gy[544] += std::sqrt(5.0625) * C1472 - std::sqrt(5.0625) * C1479 -
               std::sqrt(5.0625) * C2984 + std::sqrt(5.0625) * C2991;
    gz[544] += std::sqrt(5.0625) * C1474 - std::sqrt(5.0625) * C1481 -
               std::sqrt(5.0625) * C2986 + std::sqrt(5.0625) * C2993;
    gx[545] += std::sqrt(5.0625) * C1323 - std::sqrt(5.0625) * C1365 -
               std::sqrt(5.0625) * C2835 + std::sqrt(5.0625) * C2877;
    gy[545] += std::sqrt(5.0625) * C1325 - std::sqrt(5.0625) * C1367 -
               std::sqrt(5.0625) * C2837 + std::sqrt(5.0625) * C2879;
    gz[545] += std::sqrt(5.0625) * C1327 - std::sqrt(5.0625) * C1369 -
               std::sqrt(5.0625) * C2839 + std::sqrt(5.0625) * C2881;
    gx[546] += std::sqrt(5.0625) * C1337 - std::sqrt(5.0625) * C1379 -
               std::sqrt(5.0625) * C2849 + std::sqrt(5.0625) * C2891;
    gy[546] += std::sqrt(5.0625) * C1339 - std::sqrt(5.0625) * C1381 -
               std::sqrt(5.0625) * C2851 + std::sqrt(5.0625) * C2893;
    gz[546] += std::sqrt(5.0625) * C1341 - std::sqrt(5.0625) * C1383 -
               std::sqrt(5.0625) * C2853 + std::sqrt(5.0625) * C2895;
    gx[547] += std::sqrt(1.6875) * C1316 -
               (std::sqrt(0.421875) * C1309 + std::sqrt(0.421875) * C1302) +
               std::sqrt(0.421875) * C1344 + std::sqrt(0.421875) * C1351 -
               std::sqrt(1.6875) * C1358 + std::sqrt(0.421875) * C2814 +
               std::sqrt(0.421875) * C2821 - std::sqrt(1.6875) * C2828 -
               std::sqrt(0.421875) * C2856 - std::sqrt(0.421875) * C2863 +
               std::sqrt(1.6875) * C2870;
    gy[547] += std::sqrt(1.6875) * C1318 -
               (std::sqrt(0.421875) * C1311 + std::sqrt(0.421875) * C1304) +
               std::sqrt(0.421875) * C1346 + std::sqrt(0.421875) * C1353 -
               std::sqrt(1.6875) * C1360 + std::sqrt(0.421875) * C2816 +
               std::sqrt(0.421875) * C2823 - std::sqrt(1.6875) * C2830 -
               std::sqrt(0.421875) * C2858 - std::sqrt(0.421875) * C2865 +
               std::sqrt(1.6875) * C2872;
    gz[547] += std::sqrt(1.6875) * C1320 -
               (std::sqrt(0.421875) * C1313 + std::sqrt(0.421875) * C1306) +
               std::sqrt(0.421875) * C1348 + std::sqrt(0.421875) * C1355 -
               std::sqrt(1.6875) * C1362 + std::sqrt(0.421875) * C2818 +
               std::sqrt(0.421875) * C2825 - std::sqrt(1.6875) * C2832 -
               std::sqrt(0.421875) * C2860 - std::sqrt(0.421875) * C2867 +
               std::sqrt(1.6875) * C2874;
    gx[548] += std::sqrt(5.0625) * C1330 - std::sqrt(5.0625) * C1372 -
               std::sqrt(5.0625) * C2842 + std::sqrt(5.0625) * C2884;
    gy[548] += std::sqrt(5.0625) * C1332 - std::sqrt(5.0625) * C1374 -
               std::sqrt(5.0625) * C2844 + std::sqrt(5.0625) * C2886;
    gz[548] += std::sqrt(5.0625) * C1334 - std::sqrt(5.0625) * C1376 -
               std::sqrt(5.0625) * C2846 + std::sqrt(5.0625) * C2888;
    gx[549] += std::sqrt(1.265625) * C1302 - std::sqrt(1.265625) * C1309 -
               std::sqrt(1.265625) * C1344 + std::sqrt(1.265625) * C1351 -
               std::sqrt(1.265625) * C2814 + std::sqrt(1.265625) * C2821 +
               std::sqrt(1.265625) * C2856 - std::sqrt(1.265625) * C2863;
    gy[549] += std::sqrt(1.265625) * C1304 - std::sqrt(1.265625) * C1311 -
               std::sqrt(1.265625) * C1346 + std::sqrt(1.265625) * C1353 -
               std::sqrt(1.265625) * C2816 + std::sqrt(1.265625) * C2823 +
               std::sqrt(1.265625) * C2858 - std::sqrt(1.265625) * C2865;
    gz[549] += std::sqrt(1.265625) * C1306 - std::sqrt(1.265625) * C1313 -
               std::sqrt(1.265625) * C1348 + std::sqrt(1.265625) * C1355 -
               std::sqrt(1.265625) * C2818 + std::sqrt(1.265625) * C2825 +
               std::sqrt(1.265625) * C2860 - std::sqrt(1.265625) * C2867;
    gx[550] += std::sqrt(6.75) * C693 -
               (std::sqrt(1.6875) * C441 + std::sqrt(1.6875) * C189) +
               std::sqrt(1.6875) * C1701 + std::sqrt(1.6875) * C1953 -
               std::sqrt(6.75) * C2205;
    gy[550] += std::sqrt(6.75) * C695 -
               (std::sqrt(1.6875) * C443 + std::sqrt(1.6875) * C191) +
               std::sqrt(1.6875) * C1703 + std::sqrt(1.6875) * C1955 -
               std::sqrt(6.75) * C2207;
    gz[550] += std::sqrt(6.75) * C697 -
               (std::sqrt(1.6875) * C445 + std::sqrt(1.6875) * C193) +
               std::sqrt(1.6875) * C1705 + std::sqrt(1.6875) * C1957 -
               std::sqrt(6.75) * C2209;
    gx[551] += std::sqrt(6.75) * C707 -
               (std::sqrt(1.6875) * C455 + std::sqrt(1.6875) * C203) +
               std::sqrt(1.6875) * C1715 + std::sqrt(1.6875) * C1967 -
               std::sqrt(6.75) * C2219;
    gy[551] += std::sqrt(6.75) * C709 -
               (std::sqrt(1.6875) * C457 + std::sqrt(1.6875) * C205) +
               std::sqrt(1.6875) * C1717 + std::sqrt(1.6875) * C1969 -
               std::sqrt(6.75) * C2221;
    gz[551] += std::sqrt(6.75) * C711 -
               (std::sqrt(1.6875) * C459 + std::sqrt(1.6875) * C207) +
               std::sqrt(1.6875) * C1719 + std::sqrt(1.6875) * C1971 -
               std::sqrt(6.75) * C2223;
    gx[552] += std::sqrt(0.140625) * C168 + std::sqrt(0.140625) * C175 -
               std::sqrt(0.5625) * C182 + std::sqrt(0.140625) * C420 +
               std::sqrt(0.140625) * C427 - std::sqrt(0.5625) * C434 -
               std::sqrt(0.5625) * C672 - std::sqrt(0.5625) * C679 +
               std::sqrt(2.25) * C686 - std::sqrt(0.140625) * C1680 -
               std::sqrt(0.140625) * C1687 + std::sqrt(0.5625) * C1694 -
               std::sqrt(0.140625) * C1932 - std::sqrt(0.140625) * C1939 +
               std::sqrt(0.5625) * C1946 + std::sqrt(0.5625) * C2184 +
               std::sqrt(0.5625) * C2191 - std::sqrt(2.25) * C2198;
    gy[552] += std::sqrt(0.140625) * C170 + std::sqrt(0.140625) * C177 -
               std::sqrt(0.5625) * C184 + std::sqrt(0.140625) * C422 +
               std::sqrt(0.140625) * C429 - std::sqrt(0.5625) * C436 -
               std::sqrt(0.5625) * C674 - std::sqrt(0.5625) * C681 +
               std::sqrt(2.25) * C688 - std::sqrt(0.140625) * C1682 -
               std::sqrt(0.140625) * C1689 + std::sqrt(0.5625) * C1696 -
               std::sqrt(0.140625) * C1934 - std::sqrt(0.140625) * C1941 +
               std::sqrt(0.5625) * C1948 + std::sqrt(0.5625) * C2186 +
               std::sqrt(0.5625) * C2193 - std::sqrt(2.25) * C2200;
    gz[552] += std::sqrt(0.140625) * C172 + std::sqrt(0.140625) * C179 -
               std::sqrt(0.5625) * C186 + std::sqrt(0.140625) * C424 +
               std::sqrt(0.140625) * C431 - std::sqrt(0.5625) * C438 -
               std::sqrt(0.5625) * C676 - std::sqrt(0.5625) * C683 +
               std::sqrt(2.25) * C690 - std::sqrt(0.140625) * C1684 -
               std::sqrt(0.140625) * C1691 + std::sqrt(0.5625) * C1698 -
               std::sqrt(0.140625) * C1936 - std::sqrt(0.140625) * C1943 +
               std::sqrt(0.5625) * C1950 + std::sqrt(0.5625) * C2188 +
               std::sqrt(0.5625) * C2195 - std::sqrt(2.25) * C2202;
    gx[553] += std::sqrt(6.75) * C700 -
               (std::sqrt(1.6875) * C448 + std::sqrt(1.6875) * C196) +
               std::sqrt(1.6875) * C1708 + std::sqrt(1.6875) * C1960 -
               std::sqrt(6.75) * C2212;
    gy[553] += std::sqrt(6.75) * C702 -
               (std::sqrt(1.6875) * C450 + std::sqrt(1.6875) * C198) +
               std::sqrt(1.6875) * C1710 + std::sqrt(1.6875) * C1962 -
               std::sqrt(6.75) * C2214;
    gz[553] += std::sqrt(6.75) * C704 -
               (std::sqrt(1.6875) * C452 + std::sqrt(1.6875) * C200) +
               std::sqrt(1.6875) * C1712 + std::sqrt(1.6875) * C1964 -
               std::sqrt(6.75) * C2216;
    gx[554] += std::sqrt(0.421875) * C175 - std::sqrt(0.421875) * C168 -
               std::sqrt(0.421875) * C420 + std::sqrt(0.421875) * C427 +
               std::sqrt(1.6875) * C672 - std::sqrt(1.6875) * C679 +
               std::sqrt(0.421875) * C1680 - std::sqrt(0.421875) * C1687 +
               std::sqrt(0.421875) * C1932 - std::sqrt(0.421875) * C1939 -
               std::sqrt(1.6875) * C2184 + std::sqrt(1.6875) * C2191;
    gy[554] += std::sqrt(0.421875) * C177 - std::sqrt(0.421875) * C170 -
               std::sqrt(0.421875) * C422 + std::sqrt(0.421875) * C429 +
               std::sqrt(1.6875) * C674 - std::sqrt(1.6875) * C681 +
               std::sqrt(0.421875) * C1682 - std::sqrt(0.421875) * C1689 +
               std::sqrt(0.421875) * C1934 - std::sqrt(0.421875) * C1941 -
               std::sqrt(1.6875) * C2186 + std::sqrt(1.6875) * C2193;
    gz[554] += std::sqrt(0.421875) * C179 - std::sqrt(0.421875) * C172 -
               std::sqrt(0.421875) * C424 + std::sqrt(0.421875) * C431 +
               std::sqrt(1.6875) * C676 - std::sqrt(1.6875) * C683 +
               std::sqrt(0.421875) * C1684 - std::sqrt(0.421875) * C1691 +
               std::sqrt(0.421875) * C1936 - std::sqrt(0.421875) * C1943 -
               std::sqrt(1.6875) * C2188 + std::sqrt(1.6875) * C2195;
    gx[555] += std::sqrt(6.75) * C777 -
               (std::sqrt(1.6875) * C525 + std::sqrt(1.6875) * C273) +
               std::sqrt(1.6875) * C1785 + std::sqrt(1.6875) * C2037 -
               std::sqrt(6.75) * C2289;
    gy[555] += std::sqrt(6.75) * C779 -
               (std::sqrt(1.6875) * C527 + std::sqrt(1.6875) * C275) +
               std::sqrt(1.6875) * C1787 + std::sqrt(1.6875) * C2039 -
               std::sqrt(6.75) * C2291;
    gz[555] += std::sqrt(6.75) * C781 -
               (std::sqrt(1.6875) * C529 + std::sqrt(1.6875) * C277) +
               std::sqrt(1.6875) * C1789 + std::sqrt(1.6875) * C2041 -
               std::sqrt(6.75) * C2293;
    gx[556] += std::sqrt(6.75) * C791 -
               (std::sqrt(1.6875) * C539 + std::sqrt(1.6875) * C287) +
               std::sqrt(1.6875) * C1799 + std::sqrt(1.6875) * C2051 -
               std::sqrt(6.75) * C2303;
    gy[556] += std::sqrt(6.75) * C793 -
               (std::sqrt(1.6875) * C541 + std::sqrt(1.6875) * C289) +
               std::sqrt(1.6875) * C1801 + std::sqrt(1.6875) * C2053 -
               std::sqrt(6.75) * C2305;
    gz[556] += std::sqrt(6.75) * C795 -
               (std::sqrt(1.6875) * C543 + std::sqrt(1.6875) * C291) +
               std::sqrt(1.6875) * C1803 + std::sqrt(1.6875) * C2055 -
               std::sqrt(6.75) * C2307;
    gx[557] += std::sqrt(0.140625) * C252 + std::sqrt(0.140625) * C259 -
               std::sqrt(0.5625) * C266 + std::sqrt(0.140625) * C504 +
               std::sqrt(0.140625) * C511 - std::sqrt(0.5625) * C518 -
               std::sqrt(0.5625) * C756 - std::sqrt(0.5625) * C763 +
               std::sqrt(2.25) * C770 - std::sqrt(0.140625) * C1764 -
               std::sqrt(0.140625) * C1771 + std::sqrt(0.5625) * C1778 -
               std::sqrt(0.140625) * C2016 - std::sqrt(0.140625) * C2023 +
               std::sqrt(0.5625) * C2030 + std::sqrt(0.5625) * C2268 +
               std::sqrt(0.5625) * C2275 - std::sqrt(2.25) * C2282;
    gy[557] += std::sqrt(0.140625) * C254 + std::sqrt(0.140625) * C261 -
               std::sqrt(0.5625) * C268 + std::sqrt(0.140625) * C506 +
               std::sqrt(0.140625) * C513 - std::sqrt(0.5625) * C520 -
               std::sqrt(0.5625) * C758 - std::sqrt(0.5625) * C765 +
               std::sqrt(2.25) * C772 - std::sqrt(0.140625) * C1766 -
               std::sqrt(0.140625) * C1773 + std::sqrt(0.5625) * C1780 -
               std::sqrt(0.140625) * C2018 - std::sqrt(0.140625) * C2025 +
               std::sqrt(0.5625) * C2032 + std::sqrt(0.5625) * C2270 +
               std::sqrt(0.5625) * C2277 - std::sqrt(2.25) * C2284;
    gz[557] += std::sqrt(0.140625) * C256 + std::sqrt(0.140625) * C263 -
               std::sqrt(0.5625) * C270 + std::sqrt(0.140625) * C508 +
               std::sqrt(0.140625) * C515 - std::sqrt(0.5625) * C522 -
               std::sqrt(0.5625) * C760 - std::sqrt(0.5625) * C767 +
               std::sqrt(2.25) * C774 - std::sqrt(0.140625) * C1768 -
               std::sqrt(0.140625) * C1775 + std::sqrt(0.5625) * C1782 -
               std::sqrt(0.140625) * C2020 - std::sqrt(0.140625) * C2027 +
               std::sqrt(0.5625) * C2034 + std::sqrt(0.5625) * C2272 +
               std::sqrt(0.5625) * C2279 - std::sqrt(2.25) * C2286;
    gx[558] += std::sqrt(6.75) * C784 -
               (std::sqrt(1.6875) * C532 + std::sqrt(1.6875) * C280) +
               std::sqrt(1.6875) * C1792 + std::sqrt(1.6875) * C2044 -
               std::sqrt(6.75) * C2296;
    gy[558] += std::sqrt(6.75) * C786 -
               (std::sqrt(1.6875) * C534 + std::sqrt(1.6875) * C282) +
               std::sqrt(1.6875) * C1794 + std::sqrt(1.6875) * C2046 -
               std::sqrt(6.75) * C2298;
    gz[558] += std::sqrt(6.75) * C788 -
               (std::sqrt(1.6875) * C536 + std::sqrt(1.6875) * C284) +
               std::sqrt(1.6875) * C1796 + std::sqrt(1.6875) * C2048 -
               std::sqrt(6.75) * C2300;
    gx[559] += std::sqrt(0.421875) * C259 - std::sqrt(0.421875) * C252 -
               std::sqrt(0.421875) * C504 + std::sqrt(0.421875) * C511 +
               std::sqrt(1.6875) * C756 - std::sqrt(1.6875) * C763 +
               std::sqrt(0.421875) * C1764 - std::sqrt(0.421875) * C1771 +
               std::sqrt(0.421875) * C2016 - std::sqrt(0.421875) * C2023 -
               std::sqrt(1.6875) * C2268 + std::sqrt(1.6875) * C2275;
    gy[559] += std::sqrt(0.421875) * C261 - std::sqrt(0.421875) * C254 -
               std::sqrt(0.421875) * C506 + std::sqrt(0.421875) * C513 +
               std::sqrt(1.6875) * C758 - std::sqrt(1.6875) * C765 +
               std::sqrt(0.421875) * C1766 - std::sqrt(0.421875) * C1773 +
               std::sqrt(0.421875) * C2018 - std::sqrt(0.421875) * C2025 -
               std::sqrt(1.6875) * C2270 + std::sqrt(1.6875) * C2277;
    gz[559] += std::sqrt(0.421875) * C263 - std::sqrt(0.421875) * C256 -
               std::sqrt(0.421875) * C508 + std::sqrt(0.421875) * C515 +
               std::sqrt(1.6875) * C760 - std::sqrt(1.6875) * C767 +
               std::sqrt(0.421875) * C1768 - std::sqrt(0.421875) * C1775 +
               std::sqrt(0.421875) * C2020 - std::sqrt(0.421875) * C2027 -
               std::sqrt(1.6875) * C2272 + std::sqrt(1.6875) * C2279;
    gx[560] += std::sqrt(0.140625) * C63 + std::sqrt(0.140625) * C105 -
               std::sqrt(0.5625) * C147 + std::sqrt(0.140625) * C315 +
               std::sqrt(0.140625) * C357 - std::sqrt(0.5625) * C399 -
               std::sqrt(0.5625) * C567 - std::sqrt(0.5625) * C609 +
               std::sqrt(2.25) * C651 - std::sqrt(0.140625) * C1575 -
               std::sqrt(0.140625) * C1617 + std::sqrt(0.5625) * C1659 -
               std::sqrt(0.140625) * C1827 - std::sqrt(0.140625) * C1869 +
               std::sqrt(0.5625) * C1911 + std::sqrt(0.5625) * C2079 +
               std::sqrt(0.5625) * C2121 - std::sqrt(2.25) * C2163;
    gy[560] += std::sqrt(0.140625) * C65 + std::sqrt(0.140625) * C107 -
               std::sqrt(0.5625) * C149 + std::sqrt(0.140625) * C317 +
               std::sqrt(0.140625) * C359 - std::sqrt(0.5625) * C401 -
               std::sqrt(0.5625) * C569 - std::sqrt(0.5625) * C611 +
               std::sqrt(2.25) * C653 - std::sqrt(0.140625) * C1577 -
               std::sqrt(0.140625) * C1619 + std::sqrt(0.5625) * C1661 -
               std::sqrt(0.140625) * C1829 - std::sqrt(0.140625) * C1871 +
               std::sqrt(0.5625) * C1913 + std::sqrt(0.5625) * C2081 +
               std::sqrt(0.5625) * C2123 - std::sqrt(2.25) * C2165;
    gz[560] += std::sqrt(0.140625) * C67 + std::sqrt(0.140625) * C109 -
               std::sqrt(0.5625) * C151 + std::sqrt(0.140625) * C319 +
               std::sqrt(0.140625) * C361 - std::sqrt(0.5625) * C403 -
               std::sqrt(0.5625) * C571 - std::sqrt(0.5625) * C613 +
               std::sqrt(2.25) * C655 - std::sqrt(0.140625) * C1579 -
               std::sqrt(0.140625) * C1621 + std::sqrt(0.5625) * C1663 -
               std::sqrt(0.140625) * C1831 - std::sqrt(0.140625) * C1873 +
               std::sqrt(0.5625) * C1915 + std::sqrt(0.5625) * C2083 +
               std::sqrt(0.5625) * C2125 - std::sqrt(2.25) * C2167;
    gx[561] += std::sqrt(0.140625) * C77 + std::sqrt(0.140625) * C119 -
               std::sqrt(0.5625) * C161 + std::sqrt(0.140625) * C329 +
               std::sqrt(0.140625) * C371 - std::sqrt(0.5625) * C413 -
               std::sqrt(0.5625) * C581 - std::sqrt(0.5625) * C623 +
               std::sqrt(2.25) * C665 - std::sqrt(0.140625) * C1589 -
               std::sqrt(0.140625) * C1631 + std::sqrt(0.5625) * C1673 -
               std::sqrt(0.140625) * C1841 - std::sqrt(0.140625) * C1883 +
               std::sqrt(0.5625) * C1925 + std::sqrt(0.5625) * C2093 +
               std::sqrt(0.5625) * C2135 - std::sqrt(2.25) * C2177;
    gy[561] += std::sqrt(0.140625) * C79 + std::sqrt(0.140625) * C121 -
               std::sqrt(0.5625) * C163 + std::sqrt(0.140625) * C331 +
               std::sqrt(0.140625) * C373 - std::sqrt(0.5625) * C415 -
               std::sqrt(0.5625) * C583 - std::sqrt(0.5625) * C625 +
               std::sqrt(2.25) * C667 - std::sqrt(0.140625) * C1591 -
               std::sqrt(0.140625) * C1633 + std::sqrt(0.5625) * C1675 -
               std::sqrt(0.140625) * C1843 - std::sqrt(0.140625) * C1885 +
               std::sqrt(0.5625) * C1927 + std::sqrt(0.5625) * C2095 +
               std::sqrt(0.5625) * C2137 - std::sqrt(2.25) * C2179;
    gz[561] += std::sqrt(0.140625) * C81 + std::sqrt(0.140625) * C123 -
               std::sqrt(0.5625) * C165 + std::sqrt(0.140625) * C333 +
               std::sqrt(0.140625) * C375 - std::sqrt(0.5625) * C417 -
               std::sqrt(0.5625) * C585 - std::sqrt(0.5625) * C627 +
               std::sqrt(2.25) * C669 - std::sqrt(0.140625) * C1593 -
               std::sqrt(0.140625) * C1635 + std::sqrt(0.5625) * C1677 -
               std::sqrt(0.140625) * C1845 - std::sqrt(0.140625) * C1887 +
               std::sqrt(0.5625) * C1929 + std::sqrt(0.5625) * C2097 +
               std::sqrt(0.5625) * C2139 - std::sqrt(2.25) * C2181;
    gx[562] += std::sqrt(0.046875) * C56 -
               (std::sqrt(0.01171875) * C49 + std::sqrt(0.01171875) * C40) -
               std::sqrt(0.01171875) * C84 - std::sqrt(0.01171875) * C91 +
               std::sqrt(0.046875) * C98 + std::sqrt(0.046875) * C126 +
               std::sqrt(0.046875) * C133 - std::sqrt(0.1875) * C140 -
               std::sqrt(0.01171875) * C294 - std::sqrt(0.01171875) * C301 +
               std::sqrt(0.046875) * C308 - std::sqrt(0.01171875) * C336 -
               std::sqrt(0.01171875) * C343 + std::sqrt(0.046875) * C350 +
               std::sqrt(0.046875) * C378 + std::sqrt(0.046875) * C385 -
               std::sqrt(0.1875) * C392 + std::sqrt(0.046875) * C546 +
               std::sqrt(0.046875) * C553 - std::sqrt(0.1875) * C560 +
               std::sqrt(0.046875) * C588 + std::sqrt(0.046875) * C595 -
               std::sqrt(0.1875) * C602 - std::sqrt(0.1875) * C630 -
               std::sqrt(0.1875) * C637 + std::sqrt(0.75) * C644 +
               std::sqrt(0.01171875) * C1554 + std::sqrt(0.01171875) * C1561 -
               std::sqrt(0.046875) * C1568 + std::sqrt(0.01171875) * C1596 +
               std::sqrt(0.01171875) * C1603 - std::sqrt(0.046875) * C1610 -
               std::sqrt(0.046875) * C1638 - std::sqrt(0.046875) * C1645 +
               std::sqrt(0.1875) * C1652 + std::sqrt(0.01171875) * C1806 +
               std::sqrt(0.01171875) * C1813 - std::sqrt(0.046875) * C1820 +
               std::sqrt(0.01171875) * C1848 + std::sqrt(0.01171875) * C1855 -
               std::sqrt(0.046875) * C1862 - std::sqrt(0.046875) * C1890 -
               std::sqrt(0.046875) * C1897 + std::sqrt(0.1875) * C1904 -
               std::sqrt(0.046875) * C2058 - std::sqrt(0.046875) * C2065 +
               std::sqrt(0.1875) * C2072 - std::sqrt(0.046875) * C2100 -
               std::sqrt(0.046875) * C2107 + std::sqrt(0.1875) * C2114 +
               std::sqrt(0.1875) * C2142 + std::sqrt(0.1875) * C2149 -
               std::sqrt(0.75) * C2156;
    gy[562] += std::sqrt(0.046875) * C58 -
               (std::sqrt(0.01171875) * C51 + std::sqrt(0.01171875) * C44) -
               std::sqrt(0.01171875) * C86 - std::sqrt(0.01171875) * C93 +
               std::sqrt(0.046875) * C100 + std::sqrt(0.046875) * C128 +
               std::sqrt(0.046875) * C135 - std::sqrt(0.1875) * C142 -
               std::sqrt(0.01171875) * C296 - std::sqrt(0.01171875) * C303 +
               std::sqrt(0.046875) * C310 - std::sqrt(0.01171875) * C338 -
               std::sqrt(0.01171875) * C345 + std::sqrt(0.046875) * C352 +
               std::sqrt(0.046875) * C380 + std::sqrt(0.046875) * C387 -
               std::sqrt(0.1875) * C394 + std::sqrt(0.046875) * C548 +
               std::sqrt(0.046875) * C555 - std::sqrt(0.1875) * C562 +
               std::sqrt(0.046875) * C590 + std::sqrt(0.046875) * C597 -
               std::sqrt(0.1875) * C604 - std::sqrt(0.1875) * C632 -
               std::sqrt(0.1875) * C639 + std::sqrt(0.75) * C646 +
               std::sqrt(0.01171875) * C1556 + std::sqrt(0.01171875) * C1563 -
               std::sqrt(0.046875) * C1570 + std::sqrt(0.01171875) * C1598 +
               std::sqrt(0.01171875) * C1605 - std::sqrt(0.046875) * C1612 -
               std::sqrt(0.046875) * C1640 - std::sqrt(0.046875) * C1647 +
               std::sqrt(0.1875) * C1654 + std::sqrt(0.01171875) * C1808 +
               std::sqrt(0.01171875) * C1815 - std::sqrt(0.046875) * C1822 +
               std::sqrt(0.01171875) * C1850 + std::sqrt(0.01171875) * C1857 -
               std::sqrt(0.046875) * C1864 - std::sqrt(0.046875) * C1892 -
               std::sqrt(0.046875) * C1899 + std::sqrt(0.1875) * C1906 -
               std::sqrt(0.046875) * C2060 - std::sqrt(0.046875) * C2067 +
               std::sqrt(0.1875) * C2074 - std::sqrt(0.046875) * C2102 -
               std::sqrt(0.046875) * C2109 + std::sqrt(0.1875) * C2116 +
               std::sqrt(0.1875) * C2144 + std::sqrt(0.1875) * C2151 -
               std::sqrt(0.75) * C2158;
    gz[562] += std::sqrt(0.046875) * C60 -
               (std::sqrt(0.01171875) * C53 + std::sqrt(0.01171875) * C46) -
               std::sqrt(0.01171875) * C88 - std::sqrt(0.01171875) * C95 +
               std::sqrt(0.046875) * C102 + std::sqrt(0.046875) * C130 +
               std::sqrt(0.046875) * C137 - std::sqrt(0.1875) * C144 -
               std::sqrt(0.01171875) * C298 - std::sqrt(0.01171875) * C305 +
               std::sqrt(0.046875) * C312 - std::sqrt(0.01171875) * C340 -
               std::sqrt(0.01171875) * C347 + std::sqrt(0.046875) * C354 +
               std::sqrt(0.046875) * C382 + std::sqrt(0.046875) * C389 -
               std::sqrt(0.1875) * C396 + std::sqrt(0.046875) * C550 +
               std::sqrt(0.046875) * C557 - std::sqrt(0.1875) * C564 +
               std::sqrt(0.046875) * C592 + std::sqrt(0.046875) * C599 -
               std::sqrt(0.1875) * C606 - std::sqrt(0.1875) * C634 -
               std::sqrt(0.1875) * C641 + std::sqrt(0.75) * C648 +
               std::sqrt(0.01171875) * C1558 + std::sqrt(0.01171875) * C1565 -
               std::sqrt(0.046875) * C1572 + std::sqrt(0.01171875) * C1600 +
               std::sqrt(0.01171875) * C1607 - std::sqrt(0.046875) * C1614 -
               std::sqrt(0.046875) * C1642 - std::sqrt(0.046875) * C1649 +
               std::sqrt(0.1875) * C1656 + std::sqrt(0.01171875) * C1810 +
               std::sqrt(0.01171875) * C1817 - std::sqrt(0.046875) * C1824 +
               std::sqrt(0.01171875) * C1852 + std::sqrt(0.01171875) * C1859 -
               std::sqrt(0.046875) * C1866 - std::sqrt(0.046875) * C1894 -
               std::sqrt(0.046875) * C1901 + std::sqrt(0.1875) * C1908 -
               std::sqrt(0.046875) * C2062 - std::sqrt(0.046875) * C2069 +
               std::sqrt(0.1875) * C2076 - std::sqrt(0.046875) * C2104 -
               std::sqrt(0.046875) * C2111 + std::sqrt(0.1875) * C2118 +
               std::sqrt(0.1875) * C2146 + std::sqrt(0.1875) * C2153 -
               std::sqrt(0.75) * C2160;
    gx[563] += std::sqrt(0.140625) * C70 + std::sqrt(0.140625) * C112 -
               std::sqrt(0.5625) * C154 + std::sqrt(0.140625) * C322 +
               std::sqrt(0.140625) * C364 - std::sqrt(0.5625) * C406 -
               std::sqrt(0.5625) * C574 - std::sqrt(0.5625) * C616 +
               std::sqrt(2.25) * C658 - std::sqrt(0.140625) * C1582 -
               std::sqrt(0.140625) * C1624 + std::sqrt(0.5625) * C1666 -
               std::sqrt(0.140625) * C1834 - std::sqrt(0.140625) * C1876 +
               std::sqrt(0.5625) * C1918 + std::sqrt(0.5625) * C2086 +
               std::sqrt(0.5625) * C2128 - std::sqrt(2.25) * C2170;
    gy[563] += std::sqrt(0.140625) * C72 + std::sqrt(0.140625) * C114 -
               std::sqrt(0.5625) * C156 + std::sqrt(0.140625) * C324 +
               std::sqrt(0.140625) * C366 - std::sqrt(0.5625) * C408 -
               std::sqrt(0.5625) * C576 - std::sqrt(0.5625) * C618 +
               std::sqrt(2.25) * C660 - std::sqrt(0.140625) * C1584 -
               std::sqrt(0.140625) * C1626 + std::sqrt(0.5625) * C1668 -
               std::sqrt(0.140625) * C1836 - std::sqrt(0.140625) * C1878 +
               std::sqrt(0.5625) * C1920 + std::sqrt(0.5625) * C2088 +
               std::sqrt(0.5625) * C2130 - std::sqrt(2.25) * C2172;
    gz[563] += std::sqrt(0.140625) * C74 + std::sqrt(0.140625) * C116 -
               std::sqrt(0.5625) * C158 + std::sqrt(0.140625) * C326 +
               std::sqrt(0.140625) * C368 - std::sqrt(0.5625) * C410 -
               std::sqrt(0.5625) * C578 - std::sqrt(0.5625) * C620 +
               std::sqrt(2.25) * C662 - std::sqrt(0.140625) * C1586 -
               std::sqrt(0.140625) * C1628 + std::sqrt(0.5625) * C1670 -
               std::sqrt(0.140625) * C1838 - std::sqrt(0.140625) * C1880 +
               std::sqrt(0.5625) * C1922 + std::sqrt(0.5625) * C2090 +
               std::sqrt(0.5625) * C2132 - std::sqrt(2.25) * C2174;
    gx[564] += std::sqrt(0.03515625) * C40 - std::sqrt(0.03515625) * C49 +
               std::sqrt(0.03515625) * C84 - std::sqrt(0.03515625) * C91 -
               std::sqrt(0.140625) * C126 + std::sqrt(0.140625) * C133 +
               std::sqrt(0.03515625) * C294 - std::sqrt(0.03515625) * C301 +
               std::sqrt(0.03515625) * C336 - std::sqrt(0.03515625) * C343 -
               std::sqrt(0.140625) * C378 + std::sqrt(0.140625) * C385 -
               std::sqrt(0.140625) * C546 + std::sqrt(0.140625) * C553 -
               std::sqrt(0.140625) * C588 + std::sqrt(0.140625) * C595 +
               std::sqrt(0.5625) * C630 - std::sqrt(0.5625) * C637 -
               std::sqrt(0.03515625) * C1554 + std::sqrt(0.03515625) * C1561 -
               std::sqrt(0.03515625) * C1596 + std::sqrt(0.03515625) * C1603 +
               std::sqrt(0.140625) * C1638 - std::sqrt(0.140625) * C1645 -
               std::sqrt(0.03515625) * C1806 + std::sqrt(0.03515625) * C1813 -
               std::sqrt(0.03515625) * C1848 + std::sqrt(0.03515625) * C1855 +
               std::sqrt(0.140625) * C1890 - std::sqrt(0.140625) * C1897 +
               std::sqrt(0.140625) * C2058 - std::sqrt(0.140625) * C2065 +
               std::sqrt(0.140625) * C2100 - std::sqrt(0.140625) * C2107 -
               std::sqrt(0.5625) * C2142 + std::sqrt(0.5625) * C2149;
    gy[564] += std::sqrt(0.03515625) * C44 - std::sqrt(0.03515625) * C51 +
               std::sqrt(0.03515625) * C86 - std::sqrt(0.03515625) * C93 -
               std::sqrt(0.140625) * C128 + std::sqrt(0.140625) * C135 +
               std::sqrt(0.03515625) * C296 - std::sqrt(0.03515625) * C303 +
               std::sqrt(0.03515625) * C338 - std::sqrt(0.03515625) * C345 -
               std::sqrt(0.140625) * C380 + std::sqrt(0.140625) * C387 -
               std::sqrt(0.140625) * C548 + std::sqrt(0.140625) * C555 -
               std::sqrt(0.140625) * C590 + std::sqrt(0.140625) * C597 +
               std::sqrt(0.5625) * C632 - std::sqrt(0.5625) * C639 -
               std::sqrt(0.03515625) * C1556 + std::sqrt(0.03515625) * C1563 -
               std::sqrt(0.03515625) * C1598 + std::sqrt(0.03515625) * C1605 +
               std::sqrt(0.140625) * C1640 - std::sqrt(0.140625) * C1647 -
               std::sqrt(0.03515625) * C1808 + std::sqrt(0.03515625) * C1815 -
               std::sqrt(0.03515625) * C1850 + std::sqrt(0.03515625) * C1857 +
               std::sqrt(0.140625) * C1892 - std::sqrt(0.140625) * C1899 +
               std::sqrt(0.140625) * C2060 - std::sqrt(0.140625) * C2067 +
               std::sqrt(0.140625) * C2102 - std::sqrt(0.140625) * C2109 -
               std::sqrt(0.5625) * C2144 + std::sqrt(0.5625) * C2151;
    gz[564] += std::sqrt(0.03515625) * C46 - std::sqrt(0.03515625) * C53 +
               std::sqrt(0.03515625) * C88 - std::sqrt(0.03515625) * C95 -
               std::sqrt(0.140625) * C130 + std::sqrt(0.140625) * C137 +
               std::sqrt(0.03515625) * C298 - std::sqrt(0.03515625) * C305 +
               std::sqrt(0.03515625) * C340 - std::sqrt(0.03515625) * C347 -
               std::sqrt(0.140625) * C382 + std::sqrt(0.140625) * C389 -
               std::sqrt(0.140625) * C550 + std::sqrt(0.140625) * C557 -
               std::sqrt(0.140625) * C592 + std::sqrt(0.140625) * C599 +
               std::sqrt(0.5625) * C634 - std::sqrt(0.5625) * C641 -
               std::sqrt(0.03515625) * C1558 + std::sqrt(0.03515625) * C1565 -
               std::sqrt(0.03515625) * C1600 + std::sqrt(0.03515625) * C1607 +
               std::sqrt(0.140625) * C1642 - std::sqrt(0.140625) * C1649 -
               std::sqrt(0.03515625) * C1810 + std::sqrt(0.03515625) * C1817 -
               std::sqrt(0.03515625) * C1852 + std::sqrt(0.03515625) * C1859 +
               std::sqrt(0.140625) * C1894 - std::sqrt(0.140625) * C1901 +
               std::sqrt(0.140625) * C2062 - std::sqrt(0.140625) * C2069 +
               std::sqrt(0.140625) * C2104 - std::sqrt(0.140625) * C2111 -
               std::sqrt(0.5625) * C2146 + std::sqrt(0.5625) * C2153;
    gx[565] += std::sqrt(6.75) * C735 -
               (std::sqrt(1.6875) * C483 + std::sqrt(1.6875) * C231) +
               std::sqrt(1.6875) * C1743 + std::sqrt(1.6875) * C1995 -
               std::sqrt(6.75) * C2247;
    gy[565] += std::sqrt(6.75) * C737 -
               (std::sqrt(1.6875) * C485 + std::sqrt(1.6875) * C233) +
               std::sqrt(1.6875) * C1745 + std::sqrt(1.6875) * C1997 -
               std::sqrt(6.75) * C2249;
    gz[565] += std::sqrt(6.75) * C739 -
               (std::sqrt(1.6875) * C487 + std::sqrt(1.6875) * C235) +
               std::sqrt(1.6875) * C1747 + std::sqrt(1.6875) * C1999 -
               std::sqrt(6.75) * C2251;
    gx[566] += std::sqrt(6.75) * C749 -
               (std::sqrt(1.6875) * C497 + std::sqrt(1.6875) * C245) +
               std::sqrt(1.6875) * C1757 + std::sqrt(1.6875) * C2009 -
               std::sqrt(6.75) * C2261;
    gy[566] += std::sqrt(6.75) * C751 -
               (std::sqrt(1.6875) * C499 + std::sqrt(1.6875) * C247) +
               std::sqrt(1.6875) * C1759 + std::sqrt(1.6875) * C2011 -
               std::sqrt(6.75) * C2263;
    gz[566] += std::sqrt(6.75) * C753 -
               (std::sqrt(1.6875) * C501 + std::sqrt(1.6875) * C249) +
               std::sqrt(1.6875) * C1761 + std::sqrt(1.6875) * C2013 -
               std::sqrt(6.75) * C2265;
    gx[567] += std::sqrt(0.140625) * C210 + std::sqrt(0.140625) * C217 -
               std::sqrt(0.5625) * C224 + std::sqrt(0.140625) * C462 +
               std::sqrt(0.140625) * C469 - std::sqrt(0.5625) * C476 -
               std::sqrt(0.5625) * C714 - std::sqrt(0.5625) * C721 +
               std::sqrt(2.25) * C728 - std::sqrt(0.140625) * C1722 -
               std::sqrt(0.140625) * C1729 + std::sqrt(0.5625) * C1736 -
               std::sqrt(0.140625) * C1974 - std::sqrt(0.140625) * C1981 +
               std::sqrt(0.5625) * C1988 + std::sqrt(0.5625) * C2226 +
               std::sqrt(0.5625) * C2233 - std::sqrt(2.25) * C2240;
    gy[567] += std::sqrt(0.140625) * C212 + std::sqrt(0.140625) * C219 -
               std::sqrt(0.5625) * C226 + std::sqrt(0.140625) * C464 +
               std::sqrt(0.140625) * C471 - std::sqrt(0.5625) * C478 -
               std::sqrt(0.5625) * C716 - std::sqrt(0.5625) * C723 +
               std::sqrt(2.25) * C730 - std::sqrt(0.140625) * C1724 -
               std::sqrt(0.140625) * C1731 + std::sqrt(0.5625) * C1738 -
               std::sqrt(0.140625) * C1976 - std::sqrt(0.140625) * C1983 +
               std::sqrt(0.5625) * C1990 + std::sqrt(0.5625) * C2228 +
               std::sqrt(0.5625) * C2235 - std::sqrt(2.25) * C2242;
    gz[567] += std::sqrt(0.140625) * C214 + std::sqrt(0.140625) * C221 -
               std::sqrt(0.5625) * C228 + std::sqrt(0.140625) * C466 +
               std::sqrt(0.140625) * C473 - std::sqrt(0.5625) * C480 -
               std::sqrt(0.5625) * C718 - std::sqrt(0.5625) * C725 +
               std::sqrt(2.25) * C732 - std::sqrt(0.140625) * C1726 -
               std::sqrt(0.140625) * C1733 + std::sqrt(0.5625) * C1740 -
               std::sqrt(0.140625) * C1978 - std::sqrt(0.140625) * C1985 +
               std::sqrt(0.5625) * C1992 + std::sqrt(0.5625) * C2230 +
               std::sqrt(0.5625) * C2237 - std::sqrt(2.25) * C2244;
    gx[568] += std::sqrt(6.75) * C742 -
               (std::sqrt(1.6875) * C490 + std::sqrt(1.6875) * C238) +
               std::sqrt(1.6875) * C1750 + std::sqrt(1.6875) * C2002 -
               std::sqrt(6.75) * C2254;
    gy[568] += std::sqrt(6.75) * C744 -
               (std::sqrt(1.6875) * C492 + std::sqrt(1.6875) * C240) +
               std::sqrt(1.6875) * C1752 + std::sqrt(1.6875) * C2004 -
               std::sqrt(6.75) * C2256;
    gz[568] += std::sqrt(6.75) * C746 -
               (std::sqrt(1.6875) * C494 + std::sqrt(1.6875) * C242) +
               std::sqrt(1.6875) * C1754 + std::sqrt(1.6875) * C2006 -
               std::sqrt(6.75) * C2258;
    gx[569] += std::sqrt(0.421875) * C217 - std::sqrt(0.421875) * C210 -
               std::sqrt(0.421875) * C462 + std::sqrt(0.421875) * C469 +
               std::sqrt(1.6875) * C714 - std::sqrt(1.6875) * C721 +
               std::sqrt(0.421875) * C1722 - std::sqrt(0.421875) * C1729 +
               std::sqrt(0.421875) * C1974 - std::sqrt(0.421875) * C1981 -
               std::sqrt(1.6875) * C2226 + std::sqrt(1.6875) * C2233;
    gy[569] += std::sqrt(0.421875) * C219 - std::sqrt(0.421875) * C212 -
               std::sqrt(0.421875) * C464 + std::sqrt(0.421875) * C471 +
               std::sqrt(1.6875) * C716 - std::sqrt(1.6875) * C723 +
               std::sqrt(0.421875) * C1724 - std::sqrt(0.421875) * C1731 +
               std::sqrt(0.421875) * C1976 - std::sqrt(0.421875) * C1983 -
               std::sqrt(1.6875) * C2228 + std::sqrt(1.6875) * C2235;
    gz[569] += std::sqrt(0.421875) * C221 - std::sqrt(0.421875) * C214 -
               std::sqrt(0.421875) * C466 + std::sqrt(0.421875) * C473 +
               std::sqrt(1.6875) * C718 - std::sqrt(1.6875) * C725 +
               std::sqrt(0.421875) * C1726 - std::sqrt(0.421875) * C1733 +
               std::sqrt(0.421875) * C1978 - std::sqrt(0.421875) * C1985 -
               std::sqrt(1.6875) * C2230 + std::sqrt(1.6875) * C2237;
    gx[570] += std::sqrt(0.421875) * C105 - std::sqrt(0.421875) * C63 -
               std::sqrt(0.421875) * C315 + std::sqrt(0.421875) * C357 +
               std::sqrt(1.6875) * C567 - std::sqrt(1.6875) * C609 +
               std::sqrt(0.421875) * C1575 - std::sqrt(0.421875) * C1617 +
               std::sqrt(0.421875) * C1827 - std::sqrt(0.421875) * C1869 -
               std::sqrt(1.6875) * C2079 + std::sqrt(1.6875) * C2121;
    gy[570] += std::sqrt(0.421875) * C107 - std::sqrt(0.421875) * C65 -
               std::sqrt(0.421875) * C317 + std::sqrt(0.421875) * C359 +
               std::sqrt(1.6875) * C569 - std::sqrt(1.6875) * C611 +
               std::sqrt(0.421875) * C1577 - std::sqrt(0.421875) * C1619 +
               std::sqrt(0.421875) * C1829 - std::sqrt(0.421875) * C1871 -
               std::sqrt(1.6875) * C2081 + std::sqrt(1.6875) * C2123;
    gz[570] += std::sqrt(0.421875) * C109 - std::sqrt(0.421875) * C67 -
               std::sqrt(0.421875) * C319 + std::sqrt(0.421875) * C361 +
               std::sqrt(1.6875) * C571 - std::sqrt(1.6875) * C613 +
               std::sqrt(0.421875) * C1579 - std::sqrt(0.421875) * C1621 +
               std::sqrt(0.421875) * C1831 - std::sqrt(0.421875) * C1873 -
               std::sqrt(1.6875) * C2083 + std::sqrt(1.6875) * C2125;
    gx[571] += std::sqrt(0.421875) * C119 - std::sqrt(0.421875) * C77 -
               std::sqrt(0.421875) * C329 + std::sqrt(0.421875) * C371 +
               std::sqrt(1.6875) * C581 - std::sqrt(1.6875) * C623 +
               std::sqrt(0.421875) * C1589 - std::sqrt(0.421875) * C1631 +
               std::sqrt(0.421875) * C1841 - std::sqrt(0.421875) * C1883 -
               std::sqrt(1.6875) * C2093 + std::sqrt(1.6875) * C2135;
    gy[571] += std::sqrt(0.421875) * C121 - std::sqrt(0.421875) * C79 -
               std::sqrt(0.421875) * C331 + std::sqrt(0.421875) * C373 +
               std::sqrt(1.6875) * C583 - std::sqrt(1.6875) * C625 +
               std::sqrt(0.421875) * C1591 - std::sqrt(0.421875) * C1633 +
               std::sqrt(0.421875) * C1843 - std::sqrt(0.421875) * C1885 -
               std::sqrt(1.6875) * C2095 + std::sqrt(1.6875) * C2137;
    gz[571] += std::sqrt(0.421875) * C123 - std::sqrt(0.421875) * C81 -
               std::sqrt(0.421875) * C333 + std::sqrt(0.421875) * C375 +
               std::sqrt(1.6875) * C585 - std::sqrt(1.6875) * C627 +
               std::sqrt(0.421875) * C1593 - std::sqrt(0.421875) * C1635 +
               std::sqrt(0.421875) * C1845 - std::sqrt(0.421875) * C1887 -
               std::sqrt(1.6875) * C2097 + std::sqrt(1.6875) * C2139;
    gx[572] += std::sqrt(0.03515625) * C40 + std::sqrt(0.03515625) * C49 -
               std::sqrt(0.140625) * C56 - std::sqrt(0.03515625) * C84 -
               std::sqrt(0.03515625) * C91 + std::sqrt(0.140625) * C98 +
               std::sqrt(0.03515625) * C294 + std::sqrt(0.03515625) * C301 -
               std::sqrt(0.140625) * C308 - std::sqrt(0.03515625) * C336 -
               std::sqrt(0.03515625) * C343 + std::sqrt(0.140625) * C350 -
               std::sqrt(0.140625) * C546 - std::sqrt(0.140625) * C553 +
               std::sqrt(0.5625) * C560 + std::sqrt(0.140625) * C588 +
               std::sqrt(0.140625) * C595 - std::sqrt(0.5625) * C602 -
               std::sqrt(0.03515625) * C1554 - std::sqrt(0.03515625) * C1561 +
               std::sqrt(0.140625) * C1568 + std::sqrt(0.03515625) * C1596 +
               std::sqrt(0.03515625) * C1603 - std::sqrt(0.140625) * C1610 -
               std::sqrt(0.03515625) * C1806 - std::sqrt(0.03515625) * C1813 +
               std::sqrt(0.140625) * C1820 + std::sqrt(0.03515625) * C1848 +
               std::sqrt(0.03515625) * C1855 - std::sqrt(0.140625) * C1862 +
               std::sqrt(0.140625) * C2058 + std::sqrt(0.140625) * C2065 -
               std::sqrt(0.5625) * C2072 - std::sqrt(0.140625) * C2100 -
               std::sqrt(0.140625) * C2107 + std::sqrt(0.5625) * C2114;
    gy[572] += std::sqrt(0.03515625) * C44 + std::sqrt(0.03515625) * C51 -
               std::sqrt(0.140625) * C58 - std::sqrt(0.03515625) * C86 -
               std::sqrt(0.03515625) * C93 + std::sqrt(0.140625) * C100 +
               std::sqrt(0.03515625) * C296 + std::sqrt(0.03515625) * C303 -
               std::sqrt(0.140625) * C310 - std::sqrt(0.03515625) * C338 -
               std::sqrt(0.03515625) * C345 + std::sqrt(0.140625) * C352 -
               std::sqrt(0.140625) * C548 - std::sqrt(0.140625) * C555 +
               std::sqrt(0.5625) * C562 + std::sqrt(0.140625) * C590 +
               std::sqrt(0.140625) * C597 - std::sqrt(0.5625) * C604 -
               std::sqrt(0.03515625) * C1556 - std::sqrt(0.03515625) * C1563 +
               std::sqrt(0.140625) * C1570 + std::sqrt(0.03515625) * C1598 +
               std::sqrt(0.03515625) * C1605 - std::sqrt(0.140625) * C1612 -
               std::sqrt(0.03515625) * C1808 - std::sqrt(0.03515625) * C1815 +
               std::sqrt(0.140625) * C1822 + std::sqrt(0.03515625) * C1850 +
               std::sqrt(0.03515625) * C1857 - std::sqrt(0.140625) * C1864 +
               std::sqrt(0.140625) * C2060 + std::sqrt(0.140625) * C2067 -
               std::sqrt(0.5625) * C2074 - std::sqrt(0.140625) * C2102 -
               std::sqrt(0.140625) * C2109 + std::sqrt(0.5625) * C2116;
    gz[572] += std::sqrt(0.03515625) * C46 + std::sqrt(0.03515625) * C53 -
               std::sqrt(0.140625) * C60 - std::sqrt(0.03515625) * C88 -
               std::sqrt(0.03515625) * C95 + std::sqrt(0.140625) * C102 +
               std::sqrt(0.03515625) * C298 + std::sqrt(0.03515625) * C305 -
               std::sqrt(0.140625) * C312 - std::sqrt(0.03515625) * C340 -
               std::sqrt(0.03515625) * C347 + std::sqrt(0.140625) * C354 -
               std::sqrt(0.140625) * C550 - std::sqrt(0.140625) * C557 +
               std::sqrt(0.5625) * C564 + std::sqrt(0.140625) * C592 +
               std::sqrt(0.140625) * C599 - std::sqrt(0.5625) * C606 -
               std::sqrt(0.03515625) * C1558 - std::sqrt(0.03515625) * C1565 +
               std::sqrt(0.140625) * C1572 + std::sqrt(0.03515625) * C1600 +
               std::sqrt(0.03515625) * C1607 - std::sqrt(0.140625) * C1614 -
               std::sqrt(0.03515625) * C1810 - std::sqrt(0.03515625) * C1817 +
               std::sqrt(0.140625) * C1824 + std::sqrt(0.03515625) * C1852 +
               std::sqrt(0.03515625) * C1859 - std::sqrt(0.140625) * C1866 +
               std::sqrt(0.140625) * C2062 + std::sqrt(0.140625) * C2069 -
               std::sqrt(0.5625) * C2076 - std::sqrt(0.140625) * C2104 -
               std::sqrt(0.140625) * C2111 + std::sqrt(0.5625) * C2118;
    gx[573] += std::sqrt(0.421875) * C112 - std::sqrt(0.421875) * C70 -
               std::sqrt(0.421875) * C322 + std::sqrt(0.421875) * C364 +
               std::sqrt(1.6875) * C574 - std::sqrt(1.6875) * C616 +
               std::sqrt(0.421875) * C1582 - std::sqrt(0.421875) * C1624 +
               std::sqrt(0.421875) * C1834 - std::sqrt(0.421875) * C1876 -
               std::sqrt(1.6875) * C2086 + std::sqrt(1.6875) * C2128;
    gy[573] += std::sqrt(0.421875) * C114 - std::sqrt(0.421875) * C72 -
               std::sqrt(0.421875) * C324 + std::sqrt(0.421875) * C366 +
               std::sqrt(1.6875) * C576 - std::sqrt(1.6875) * C618 +
               std::sqrt(0.421875) * C1584 - std::sqrt(0.421875) * C1626 +
               std::sqrt(0.421875) * C1836 - std::sqrt(0.421875) * C1878 -
               std::sqrt(1.6875) * C2088 + std::sqrt(1.6875) * C2130;
    gz[573] += std::sqrt(0.421875) * C116 - std::sqrt(0.421875) * C74 -
               std::sqrt(0.421875) * C326 + std::sqrt(0.421875) * C368 +
               std::sqrt(1.6875) * C578 - std::sqrt(1.6875) * C620 +
               std::sqrt(0.421875) * C1586 - std::sqrt(0.421875) * C1628 +
               std::sqrt(0.421875) * C1838 - std::sqrt(0.421875) * C1880 -
               std::sqrt(1.6875) * C2090 + std::sqrt(1.6875) * C2132;
    gx[574] += std::sqrt(0.10546875) * C49 - std::sqrt(0.10546875) * C40 +
               std::sqrt(0.10546875) * C84 - std::sqrt(0.10546875) * C91 -
               std::sqrt(0.10546875) * C294 + std::sqrt(0.10546875) * C301 +
               std::sqrt(0.10546875) * C336 - std::sqrt(0.10546875) * C343 +
               std::sqrt(0.421875) * C546 - std::sqrt(0.421875) * C553 -
               std::sqrt(0.421875) * C588 + std::sqrt(0.421875) * C595 +
               std::sqrt(0.10546875) * C1554 - std::sqrt(0.10546875) * C1561 -
               std::sqrt(0.10546875) * C1596 + std::sqrt(0.10546875) * C1603 +
               std::sqrt(0.10546875) * C1806 - std::sqrt(0.10546875) * C1813 -
               std::sqrt(0.10546875) * C1848 + std::sqrt(0.10546875) * C1855 -
               std::sqrt(0.421875) * C2058 + std::sqrt(0.421875) * C2065 +
               std::sqrt(0.421875) * C2100 - std::sqrt(0.421875) * C2107;
    gy[574] += std::sqrt(0.10546875) * C51 - std::sqrt(0.10546875) * C44 +
               std::sqrt(0.10546875) * C86 - std::sqrt(0.10546875) * C93 -
               std::sqrt(0.10546875) * C296 + std::sqrt(0.10546875) * C303 +
               std::sqrt(0.10546875) * C338 - std::sqrt(0.10546875) * C345 +
               std::sqrt(0.421875) * C548 - std::sqrt(0.421875) * C555 -
               std::sqrt(0.421875) * C590 + std::sqrt(0.421875) * C597 +
               std::sqrt(0.10546875) * C1556 - std::sqrt(0.10546875) * C1563 -
               std::sqrt(0.10546875) * C1598 + std::sqrt(0.10546875) * C1605 +
               std::sqrt(0.10546875) * C1808 - std::sqrt(0.10546875) * C1815 -
               std::sqrt(0.10546875) * C1850 + std::sqrt(0.10546875) * C1857 -
               std::sqrt(0.421875) * C2060 + std::sqrt(0.421875) * C2067 +
               std::sqrt(0.421875) * C2102 - std::sqrt(0.421875) * C2109;
    gz[574] += std::sqrt(0.10546875) * C53 - std::sqrt(0.10546875) * C46 +
               std::sqrt(0.10546875) * C88 - std::sqrt(0.10546875) * C95 -
               std::sqrt(0.10546875) * C298 + std::sqrt(0.10546875) * C305 +
               std::sqrt(0.10546875) * C340 - std::sqrt(0.10546875) * C347 +
               std::sqrt(0.421875) * C550 - std::sqrt(0.421875) * C557 -
               std::sqrt(0.421875) * C592 + std::sqrt(0.421875) * C599 +
               std::sqrt(0.10546875) * C1558 - std::sqrt(0.10546875) * C1565 -
               std::sqrt(0.10546875) * C1600 + std::sqrt(0.10546875) * C1607 +
               std::sqrt(0.10546875) * C1810 - std::sqrt(0.10546875) * C1817 -
               std::sqrt(0.10546875) * C1852 + std::sqrt(0.10546875) * C1859 -
               std::sqrt(0.421875) * C2062 + std::sqrt(0.421875) * C2069 +
               std::sqrt(0.421875) * C2104 - std::sqrt(0.421875) * C2111;
    gx[575] += std::sqrt(20.25) * C1197 - std::sqrt(20.25) * C2709;
    gy[575] += std::sqrt(20.25) * C1199 - std::sqrt(20.25) * C2711;
    gz[575] += std::sqrt(20.25) * C1201 - std::sqrt(20.25) * C2713;
    gx[576] += std::sqrt(20.25) * C1211 - std::sqrt(20.25) * C2723;
    gy[576] += std::sqrt(20.25) * C1213 - std::sqrt(20.25) * C2725;
    gz[576] += std::sqrt(20.25) * C1215 - std::sqrt(20.25) * C2727;
    gx[577] += std::sqrt(6.75) * C1190 -
               (std::sqrt(1.6875) * C1183 + std::sqrt(1.6875) * C1176) +
               std::sqrt(1.6875) * C2688 + std::sqrt(1.6875) * C2695 -
               std::sqrt(6.75) * C2702;
    gy[577] += std::sqrt(6.75) * C1192 -
               (std::sqrt(1.6875) * C1185 + std::sqrt(1.6875) * C1178) +
               std::sqrt(1.6875) * C2690 + std::sqrt(1.6875) * C2697 -
               std::sqrt(6.75) * C2704;
    gz[577] += std::sqrt(6.75) * C1194 -
               (std::sqrt(1.6875) * C1187 + std::sqrt(1.6875) * C1180) +
               std::sqrt(1.6875) * C2692 + std::sqrt(1.6875) * C2699 -
               std::sqrt(6.75) * C2706;
    gx[578] += std::sqrt(20.25) * C1204 - std::sqrt(20.25) * C2716;
    gy[578] += std::sqrt(20.25) * C1206 - std::sqrt(20.25) * C2718;
    gz[578] += std::sqrt(20.25) * C1208 - std::sqrt(20.25) * C2720;
    gx[579] += std::sqrt(5.0625) * C1176 - std::sqrt(5.0625) * C1183 -
               std::sqrt(5.0625) * C2688 + std::sqrt(5.0625) * C2695;
    gy[579] += std::sqrt(5.0625) * C1178 - std::sqrt(5.0625) * C1185 -
               std::sqrt(5.0625) * C2690 + std::sqrt(5.0625) * C2697;
    gz[579] += std::sqrt(5.0625) * C1180 - std::sqrt(5.0625) * C1187 -
               std::sqrt(5.0625) * C2692 + std::sqrt(5.0625) * C2699;
    gx[580] += std::sqrt(20.25) * C1281 - std::sqrt(20.25) * C2793;
    gy[580] += std::sqrt(20.25) * C1283 - std::sqrt(20.25) * C2795;
    gz[580] += std::sqrt(20.25) * C1285 - std::sqrt(20.25) * C2797;
    gx[581] += std::sqrt(20.25) * C1295 - std::sqrt(20.25) * C2807;
    gy[581] += std::sqrt(20.25) * C1297 - std::sqrt(20.25) * C2809;
    gz[581] += std::sqrt(20.25) * C1299 - std::sqrt(20.25) * C2811;
    gx[582] += std::sqrt(6.75) * C1274 -
               (std::sqrt(1.6875) * C1267 + std::sqrt(1.6875) * C1260) +
               std::sqrt(1.6875) * C2772 + std::sqrt(1.6875) * C2779 -
               std::sqrt(6.75) * C2786;
    gy[582] += std::sqrt(6.75) * C1276 -
               (std::sqrt(1.6875) * C1269 + std::sqrt(1.6875) * C1262) +
               std::sqrt(1.6875) * C2774 + std::sqrt(1.6875) * C2781 -
               std::sqrt(6.75) * C2788;
    gz[582] += std::sqrt(6.75) * C1278 -
               (std::sqrt(1.6875) * C1271 + std::sqrt(1.6875) * C1264) +
               std::sqrt(1.6875) * C2776 + std::sqrt(1.6875) * C2783 -
               std::sqrt(6.75) * C2790;
    gx[583] += std::sqrt(20.25) * C1288 - std::sqrt(20.25) * C2800;
    gy[583] += std::sqrt(20.25) * C1290 - std::sqrt(20.25) * C2802;
    gz[583] += std::sqrt(20.25) * C1292 - std::sqrt(20.25) * C2804;
    gx[584] += std::sqrt(5.0625) * C1260 - std::sqrt(5.0625) * C1267 -
               std::sqrt(5.0625) * C2772 + std::sqrt(5.0625) * C2779;
    gy[584] += std::sqrt(5.0625) * C1262 - std::sqrt(5.0625) * C1269 -
               std::sqrt(5.0625) * C2774 + std::sqrt(5.0625) * C2781;
    gz[584] += std::sqrt(5.0625) * C1264 - std::sqrt(5.0625) * C1271 -
               std::sqrt(5.0625) * C2776 + std::sqrt(5.0625) * C2783;
    gx[585] += std::sqrt(6.75) * C1155 -
               (std::sqrt(1.6875) * C1113 + std::sqrt(1.6875) * C1071) +
               std::sqrt(1.6875) * C2583 + std::sqrt(1.6875) * C2625 -
               std::sqrt(6.75) * C2667;
    gy[585] += std::sqrt(6.75) * C1157 -
               (std::sqrt(1.6875) * C1115 + std::sqrt(1.6875) * C1073) +
               std::sqrt(1.6875) * C2585 + std::sqrt(1.6875) * C2627 -
               std::sqrt(6.75) * C2669;
    gz[585] += std::sqrt(6.75) * C1159 -
               (std::sqrt(1.6875) * C1117 + std::sqrt(1.6875) * C1075) +
               std::sqrt(1.6875) * C2587 + std::sqrt(1.6875) * C2629 -
               std::sqrt(6.75) * C2671;
    gx[586] += std::sqrt(6.75) * C1169 -
               (std::sqrt(1.6875) * C1127 + std::sqrt(1.6875) * C1085) +
               std::sqrt(1.6875) * C2597 + std::sqrt(1.6875) * C2639 -
               std::sqrt(6.75) * C2681;
    gy[586] += std::sqrt(6.75) * C1171 -
               (std::sqrt(1.6875) * C1129 + std::sqrt(1.6875) * C1087) +
               std::sqrt(1.6875) * C2599 + std::sqrt(1.6875) * C2641 -
               std::sqrt(6.75) * C2683;
    gz[586] += std::sqrt(6.75) * C1173 -
               (std::sqrt(1.6875) * C1131 + std::sqrt(1.6875) * C1089) +
               std::sqrt(1.6875) * C2601 + std::sqrt(1.6875) * C2643 -
               std::sqrt(6.75) * C2685;
    gx[587] += std::sqrt(0.140625) * C1050 + std::sqrt(0.140625) * C1057 -
               std::sqrt(0.5625) * C1064 + std::sqrt(0.140625) * C1092 +
               std::sqrt(0.140625) * C1099 - std::sqrt(0.5625) * C1106 -
               std::sqrt(0.5625) * C1134 - std::sqrt(0.5625) * C1141 +
               std::sqrt(2.25) * C1148 - std::sqrt(0.140625) * C2562 -
               std::sqrt(0.140625) * C2569 + std::sqrt(0.5625) * C2576 -
               std::sqrt(0.140625) * C2604 - std::sqrt(0.140625) * C2611 +
               std::sqrt(0.5625) * C2618 + std::sqrt(0.5625) * C2646 +
               std::sqrt(0.5625) * C2653 - std::sqrt(2.25) * C2660;
    gy[587] += std::sqrt(0.140625) * C1052 + std::sqrt(0.140625) * C1059 -
               std::sqrt(0.5625) * C1066 + std::sqrt(0.140625) * C1094 +
               std::sqrt(0.140625) * C1101 - std::sqrt(0.5625) * C1108 -
               std::sqrt(0.5625) * C1136 - std::sqrt(0.5625) * C1143 +
               std::sqrt(2.25) * C1150 - std::sqrt(0.140625) * C2564 -
               std::sqrt(0.140625) * C2571 + std::sqrt(0.5625) * C2578 -
               std::sqrt(0.140625) * C2606 - std::sqrt(0.140625) * C2613 +
               std::sqrt(0.5625) * C2620 + std::sqrt(0.5625) * C2648 +
               std::sqrt(0.5625) * C2655 - std::sqrt(2.25) * C2662;
    gz[587] += std::sqrt(0.140625) * C1054 + std::sqrt(0.140625) * C1061 -
               std::sqrt(0.5625) * C1068 + std::sqrt(0.140625) * C1096 +
               std::sqrt(0.140625) * C1103 - std::sqrt(0.5625) * C1110 -
               std::sqrt(0.5625) * C1138 - std::sqrt(0.5625) * C1145 +
               std::sqrt(2.25) * C1152 - std::sqrt(0.140625) * C2566 -
               std::sqrt(0.140625) * C2573 + std::sqrt(0.5625) * C2580 -
               std::sqrt(0.140625) * C2608 - std::sqrt(0.140625) * C2615 +
               std::sqrt(0.5625) * C2622 + std::sqrt(0.5625) * C2650 +
               std::sqrt(0.5625) * C2657 - std::sqrt(2.25) * C2664;
    gx[588] += std::sqrt(6.75) * C1162 -
               (std::sqrt(1.6875) * C1120 + std::sqrt(1.6875) * C1078) +
               std::sqrt(1.6875) * C2590 + std::sqrt(1.6875) * C2632 -
               std::sqrt(6.75) * C2674;
    gy[588] += std::sqrt(6.75) * C1164 -
               (std::sqrt(1.6875) * C1122 + std::sqrt(1.6875) * C1080) +
               std::sqrt(1.6875) * C2592 + std::sqrt(1.6875) * C2634 -
               std::sqrt(6.75) * C2676;
    gz[588] += std::sqrt(6.75) * C1166 -
               (std::sqrt(1.6875) * C1124 + std::sqrt(1.6875) * C1082) +
               std::sqrt(1.6875) * C2594 + std::sqrt(1.6875) * C2636 -
               std::sqrt(6.75) * C2678;
    gx[589] += std::sqrt(0.421875) * C1057 - std::sqrt(0.421875) * C1050 -
               std::sqrt(0.421875) * C1092 + std::sqrt(0.421875) * C1099 +
               std::sqrt(1.6875) * C1134 - std::sqrt(1.6875) * C1141 +
               std::sqrt(0.421875) * C2562 - std::sqrt(0.421875) * C2569 +
               std::sqrt(0.421875) * C2604 - std::sqrt(0.421875) * C2611 -
               std::sqrt(1.6875) * C2646 + std::sqrt(1.6875) * C2653;
    gy[589] += std::sqrt(0.421875) * C1059 - std::sqrt(0.421875) * C1052 -
               std::sqrt(0.421875) * C1094 + std::sqrt(0.421875) * C1101 +
               std::sqrt(1.6875) * C1136 - std::sqrt(1.6875) * C1143 +
               std::sqrt(0.421875) * C2564 - std::sqrt(0.421875) * C2571 +
               std::sqrt(0.421875) * C2606 - std::sqrt(0.421875) * C2613 -
               std::sqrt(1.6875) * C2648 + std::sqrt(1.6875) * C2655;
    gz[589] += std::sqrt(0.421875) * C1061 - std::sqrt(0.421875) * C1054 -
               std::sqrt(0.421875) * C1096 + std::sqrt(0.421875) * C1103 +
               std::sqrt(1.6875) * C1138 - std::sqrt(1.6875) * C1145 +
               std::sqrt(0.421875) * C2566 - std::sqrt(0.421875) * C2573 +
               std::sqrt(0.421875) * C2608 - std::sqrt(0.421875) * C2615 -
               std::sqrt(1.6875) * C2650 + std::sqrt(1.6875) * C2657;
    gx[590] += std::sqrt(20.25) * C1239 - std::sqrt(20.25) * C2751;
    gy[590] += std::sqrt(20.25) * C1241 - std::sqrt(20.25) * C2753;
    gz[590] += std::sqrt(20.25) * C1243 - std::sqrt(20.25) * C2755;
    gx[591] += std::sqrt(20.25) * C1253 - std::sqrt(20.25) * C2765;
    gy[591] += std::sqrt(20.25) * C1255 - std::sqrt(20.25) * C2767;
    gz[591] += std::sqrt(20.25) * C1257 - std::sqrt(20.25) * C2769;
    gx[592] += std::sqrt(6.75) * C1232 -
               (std::sqrt(1.6875) * C1225 + std::sqrt(1.6875) * C1218) +
               std::sqrt(1.6875) * C2730 + std::sqrt(1.6875) * C2737 -
               std::sqrt(6.75) * C2744;
    gy[592] += std::sqrt(6.75) * C1234 -
               (std::sqrt(1.6875) * C1227 + std::sqrt(1.6875) * C1220) +
               std::sqrt(1.6875) * C2732 + std::sqrt(1.6875) * C2739 -
               std::sqrt(6.75) * C2746;
    gz[592] += std::sqrt(6.75) * C1236 -
               (std::sqrt(1.6875) * C1229 + std::sqrt(1.6875) * C1222) +
               std::sqrt(1.6875) * C2734 + std::sqrt(1.6875) * C2741 -
               std::sqrt(6.75) * C2748;
    gx[593] += std::sqrt(20.25) * C1246 - std::sqrt(20.25) * C2758;
    gy[593] += std::sqrt(20.25) * C1248 - std::sqrt(20.25) * C2760;
    gz[593] += std::sqrt(20.25) * C1250 - std::sqrt(20.25) * C2762;
    gx[594] += std::sqrt(5.0625) * C1218 - std::sqrt(5.0625) * C1225 -
               std::sqrt(5.0625) * C2730 + std::sqrt(5.0625) * C2737;
    gy[594] += std::sqrt(5.0625) * C1220 - std::sqrt(5.0625) * C1227 -
               std::sqrt(5.0625) * C2732 + std::sqrt(5.0625) * C2739;
    gz[594] += std::sqrt(5.0625) * C1222 - std::sqrt(5.0625) * C1229 -
               std::sqrt(5.0625) * C2734 + std::sqrt(5.0625) * C2741;
    gx[595] += std::sqrt(5.0625) * C1071 - std::sqrt(5.0625) * C1113 -
               std::sqrt(5.0625) * C2583 + std::sqrt(5.0625) * C2625;
    gy[595] += std::sqrt(5.0625) * C1073 - std::sqrt(5.0625) * C1115 -
               std::sqrt(5.0625) * C2585 + std::sqrt(5.0625) * C2627;
    gz[595] += std::sqrt(5.0625) * C1075 - std::sqrt(5.0625) * C1117 -
               std::sqrt(5.0625) * C2587 + std::sqrt(5.0625) * C2629;
    gx[596] += std::sqrt(5.0625) * C1085 - std::sqrt(5.0625) * C1127 -
               std::sqrt(5.0625) * C2597 + std::sqrt(5.0625) * C2639;
    gy[596] += std::sqrt(5.0625) * C1087 - std::sqrt(5.0625) * C1129 -
               std::sqrt(5.0625) * C2599 + std::sqrt(5.0625) * C2641;
    gz[596] += std::sqrt(5.0625) * C1089 - std::sqrt(5.0625) * C1131 -
               std::sqrt(5.0625) * C2601 + std::sqrt(5.0625) * C2643;
    gx[597] += std::sqrt(1.6875) * C1064 -
               (std::sqrt(0.421875) * C1057 + std::sqrt(0.421875) * C1050) +
               std::sqrt(0.421875) * C1092 + std::sqrt(0.421875) * C1099 -
               std::sqrt(1.6875) * C1106 + std::sqrt(0.421875) * C2562 +
               std::sqrt(0.421875) * C2569 - std::sqrt(1.6875) * C2576 -
               std::sqrt(0.421875) * C2604 - std::sqrt(0.421875) * C2611 +
               std::sqrt(1.6875) * C2618;
    gy[597] += std::sqrt(1.6875) * C1066 -
               (std::sqrt(0.421875) * C1059 + std::sqrt(0.421875) * C1052) +
               std::sqrt(0.421875) * C1094 + std::sqrt(0.421875) * C1101 -
               std::sqrt(1.6875) * C1108 + std::sqrt(0.421875) * C2564 +
               std::sqrt(0.421875) * C2571 - std::sqrt(1.6875) * C2578 -
               std::sqrt(0.421875) * C2606 - std::sqrt(0.421875) * C2613 +
               std::sqrt(1.6875) * C2620;
    gz[597] += std::sqrt(1.6875) * C1068 -
               (std::sqrt(0.421875) * C1061 + std::sqrt(0.421875) * C1054) +
               std::sqrt(0.421875) * C1096 + std::sqrt(0.421875) * C1103 -
               std::sqrt(1.6875) * C1110 + std::sqrt(0.421875) * C2566 +
               std::sqrt(0.421875) * C2573 - std::sqrt(1.6875) * C2580 -
               std::sqrt(0.421875) * C2608 - std::sqrt(0.421875) * C2615 +
               std::sqrt(1.6875) * C2622;
    gx[598] += std::sqrt(5.0625) * C1078 - std::sqrt(5.0625) * C1120 -
               std::sqrt(5.0625) * C2590 + std::sqrt(5.0625) * C2632;
    gy[598] += std::sqrt(5.0625) * C1080 - std::sqrt(5.0625) * C1122 -
               std::sqrt(5.0625) * C2592 + std::sqrt(5.0625) * C2634;
    gz[598] += std::sqrt(5.0625) * C1082 - std::sqrt(5.0625) * C1124 -
               std::sqrt(5.0625) * C2594 + std::sqrt(5.0625) * C2636;
    gx[599] += std::sqrt(1.265625) * C1050 - std::sqrt(1.265625) * C1057 -
               std::sqrt(1.265625) * C1092 + std::sqrt(1.265625) * C1099 -
               std::sqrt(1.265625) * C2562 + std::sqrt(1.265625) * C2569 +
               std::sqrt(1.265625) * C2604 - std::sqrt(1.265625) * C2611;
    gy[599] += std::sqrt(1.265625) * C1052 - std::sqrt(1.265625) * C1059 -
               std::sqrt(1.265625) * C1094 + std::sqrt(1.265625) * C1101 -
               std::sqrt(1.265625) * C2564 + std::sqrt(1.265625) * C2571 +
               std::sqrt(1.265625) * C2606 - std::sqrt(1.265625) * C2613;
    gz[599] += std::sqrt(1.265625) * C1054 - std::sqrt(1.265625) * C1061 -
               std::sqrt(1.265625) * C1096 + std::sqrt(1.265625) * C1103 -
               std::sqrt(1.265625) * C2566 + std::sqrt(1.265625) * C2573 +
               std::sqrt(1.265625) * C2608 - std::sqrt(1.265625) * C2615;
    gx[600] += std::sqrt(5.0625) * C189 - std::sqrt(5.0625) * C441 -
               std::sqrt(5.0625) * C1701 + std::sqrt(5.0625) * C1953;
    gy[600] += std::sqrt(5.0625) * C191 - std::sqrt(5.0625) * C443 -
               std::sqrt(5.0625) * C1703 + std::sqrt(5.0625) * C1955;
    gz[600] += std::sqrt(5.0625) * C193 - std::sqrt(5.0625) * C445 -
               std::sqrt(5.0625) * C1705 + std::sqrt(5.0625) * C1957;
    gx[601] += std::sqrt(5.0625) * C203 - std::sqrt(5.0625) * C455 -
               std::sqrt(5.0625) * C1715 + std::sqrt(5.0625) * C1967;
    gy[601] += std::sqrt(5.0625) * C205 - std::sqrt(5.0625) * C457 -
               std::sqrt(5.0625) * C1717 + std::sqrt(5.0625) * C1969;
    gz[601] += std::sqrt(5.0625) * C207 - std::sqrt(5.0625) * C459 -
               std::sqrt(5.0625) * C1719 + std::sqrt(5.0625) * C1971;
    gx[602] += std::sqrt(1.6875) * C182 -
               (std::sqrt(0.421875) * C175 + std::sqrt(0.421875) * C168) +
               std::sqrt(0.421875) * C420 + std::sqrt(0.421875) * C427 -
               std::sqrt(1.6875) * C434 + std::sqrt(0.421875) * C1680 +
               std::sqrt(0.421875) * C1687 - std::sqrt(1.6875) * C1694 -
               std::sqrt(0.421875) * C1932 - std::sqrt(0.421875) * C1939 +
               std::sqrt(1.6875) * C1946;
    gy[602] += std::sqrt(1.6875) * C184 -
               (std::sqrt(0.421875) * C177 + std::sqrt(0.421875) * C170) +
               std::sqrt(0.421875) * C422 + std::sqrt(0.421875) * C429 -
               std::sqrt(1.6875) * C436 + std::sqrt(0.421875) * C1682 +
               std::sqrt(0.421875) * C1689 - std::sqrt(1.6875) * C1696 -
               std::sqrt(0.421875) * C1934 - std::sqrt(0.421875) * C1941 +
               std::sqrt(1.6875) * C1948;
    gz[602] += std::sqrt(1.6875) * C186 -
               (std::sqrt(0.421875) * C179 + std::sqrt(0.421875) * C172) +
               std::sqrt(0.421875) * C424 + std::sqrt(0.421875) * C431 -
               std::sqrt(1.6875) * C438 + std::sqrt(0.421875) * C1684 +
               std::sqrt(0.421875) * C1691 - std::sqrt(1.6875) * C1698 -
               std::sqrt(0.421875) * C1936 - std::sqrt(0.421875) * C1943 +
               std::sqrt(1.6875) * C1950;
    gx[603] += std::sqrt(5.0625) * C196 - std::sqrt(5.0625) * C448 -
               std::sqrt(5.0625) * C1708 + std::sqrt(5.0625) * C1960;
    gy[603] += std::sqrt(5.0625) * C198 - std::sqrt(5.0625) * C450 -
               std::sqrt(5.0625) * C1710 + std::sqrt(5.0625) * C1962;
    gz[603] += std::sqrt(5.0625) * C200 - std::sqrt(5.0625) * C452 -
               std::sqrt(5.0625) * C1712 + std::sqrt(5.0625) * C1964;
    gx[604] += std::sqrt(1.265625) * C168 - std::sqrt(1.265625) * C175 -
               std::sqrt(1.265625) * C420 + std::sqrt(1.265625) * C427 -
               std::sqrt(1.265625) * C1680 + std::sqrt(1.265625) * C1687 +
               std::sqrt(1.265625) * C1932 - std::sqrt(1.265625) * C1939;
    gy[604] += std::sqrt(1.265625) * C170 - std::sqrt(1.265625) * C177 -
               std::sqrt(1.265625) * C422 + std::sqrt(1.265625) * C429 -
               std::sqrt(1.265625) * C1682 + std::sqrt(1.265625) * C1689 +
               std::sqrt(1.265625) * C1934 - std::sqrt(1.265625) * C1941;
    gz[604] += std::sqrt(1.265625) * C172 - std::sqrt(1.265625) * C179 -
               std::sqrt(1.265625) * C424 + std::sqrt(1.265625) * C431 -
               std::sqrt(1.265625) * C1684 + std::sqrt(1.265625) * C1691 +
               std::sqrt(1.265625) * C1936 - std::sqrt(1.265625) * C1943;
    gx[605] += std::sqrt(5.0625) * C273 - std::sqrt(5.0625) * C525 -
               std::sqrt(5.0625) * C1785 + std::sqrt(5.0625) * C2037;
    gy[605] += std::sqrt(5.0625) * C275 - std::sqrt(5.0625) * C527 -
               std::sqrt(5.0625) * C1787 + std::sqrt(5.0625) * C2039;
    gz[605] += std::sqrt(5.0625) * C277 - std::sqrt(5.0625) * C529 -
               std::sqrt(5.0625) * C1789 + std::sqrt(5.0625) * C2041;
    gx[606] += std::sqrt(5.0625) * C287 - std::sqrt(5.0625) * C539 -
               std::sqrt(5.0625) * C1799 + std::sqrt(5.0625) * C2051;
    gy[606] += std::sqrt(5.0625) * C289 - std::sqrt(5.0625) * C541 -
               std::sqrt(5.0625) * C1801 + std::sqrt(5.0625) * C2053;
    gz[606] += std::sqrt(5.0625) * C291 - std::sqrt(5.0625) * C543 -
               std::sqrt(5.0625) * C1803 + std::sqrt(5.0625) * C2055;
    gx[607] += std::sqrt(1.6875) * C266 -
               (std::sqrt(0.421875) * C259 + std::sqrt(0.421875) * C252) +
               std::sqrt(0.421875) * C504 + std::sqrt(0.421875) * C511 -
               std::sqrt(1.6875) * C518 + std::sqrt(0.421875) * C1764 +
               std::sqrt(0.421875) * C1771 - std::sqrt(1.6875) * C1778 -
               std::sqrt(0.421875) * C2016 - std::sqrt(0.421875) * C2023 +
               std::sqrt(1.6875) * C2030;
    gy[607] += std::sqrt(1.6875) * C268 -
               (std::sqrt(0.421875) * C261 + std::sqrt(0.421875) * C254) +
               std::sqrt(0.421875) * C506 + std::sqrt(0.421875) * C513 -
               std::sqrt(1.6875) * C520 + std::sqrt(0.421875) * C1766 +
               std::sqrt(0.421875) * C1773 - std::sqrt(1.6875) * C1780 -
               std::sqrt(0.421875) * C2018 - std::sqrt(0.421875) * C2025 +
               std::sqrt(1.6875) * C2032;
    gz[607] += std::sqrt(1.6875) * C270 -
               (std::sqrt(0.421875) * C263 + std::sqrt(0.421875) * C256) +
               std::sqrt(0.421875) * C508 + std::sqrt(0.421875) * C515 -
               std::sqrt(1.6875) * C522 + std::sqrt(0.421875) * C1768 +
               std::sqrt(0.421875) * C1775 - std::sqrt(1.6875) * C1782 -
               std::sqrt(0.421875) * C2020 - std::sqrt(0.421875) * C2027 +
               std::sqrt(1.6875) * C2034;
    gx[608] += std::sqrt(5.0625) * C280 - std::sqrt(5.0625) * C532 -
               std::sqrt(5.0625) * C1792 + std::sqrt(5.0625) * C2044;
    gy[608] += std::sqrt(5.0625) * C282 - std::sqrt(5.0625) * C534 -
               std::sqrt(5.0625) * C1794 + std::sqrt(5.0625) * C2046;
    gz[608] += std::sqrt(5.0625) * C284 - std::sqrt(5.0625) * C536 -
               std::sqrt(5.0625) * C1796 + std::sqrt(5.0625) * C2048;
    gx[609] += std::sqrt(1.265625) * C252 - std::sqrt(1.265625) * C259 -
               std::sqrt(1.265625) * C504 + std::sqrt(1.265625) * C511 -
               std::sqrt(1.265625) * C1764 + std::sqrt(1.265625) * C1771 +
               std::sqrt(1.265625) * C2016 - std::sqrt(1.265625) * C2023;
    gy[609] += std::sqrt(1.265625) * C254 - std::sqrt(1.265625) * C261 -
               std::sqrt(1.265625) * C506 + std::sqrt(1.265625) * C513 -
               std::sqrt(1.265625) * C1766 + std::sqrt(1.265625) * C1773 +
               std::sqrt(1.265625) * C2018 - std::sqrt(1.265625) * C2025;
    gz[609] += std::sqrt(1.265625) * C256 - std::sqrt(1.265625) * C263 -
               std::sqrt(1.265625) * C508 + std::sqrt(1.265625) * C515 -
               std::sqrt(1.265625) * C1768 + std::sqrt(1.265625) * C1775 +
               std::sqrt(1.265625) * C2020 - std::sqrt(1.265625) * C2027;
    gx[610] += std::sqrt(1.6875) * C147 -
               (std::sqrt(0.421875) * C105 + std::sqrt(0.421875) * C63) +
               std::sqrt(0.421875) * C315 + std::sqrt(0.421875) * C357 -
               std::sqrt(1.6875) * C399 + std::sqrt(0.421875) * C1575 +
               std::sqrt(0.421875) * C1617 - std::sqrt(1.6875) * C1659 -
               std::sqrt(0.421875) * C1827 - std::sqrt(0.421875) * C1869 +
               std::sqrt(1.6875) * C1911;
    gy[610] += std::sqrt(1.6875) * C149 -
               (std::sqrt(0.421875) * C107 + std::sqrt(0.421875) * C65) +
               std::sqrt(0.421875) * C317 + std::sqrt(0.421875) * C359 -
               std::sqrt(1.6875) * C401 + std::sqrt(0.421875) * C1577 +
               std::sqrt(0.421875) * C1619 - std::sqrt(1.6875) * C1661 -
               std::sqrt(0.421875) * C1829 - std::sqrt(0.421875) * C1871 +
               std::sqrt(1.6875) * C1913;
    gz[610] += std::sqrt(1.6875) * C151 -
               (std::sqrt(0.421875) * C109 + std::sqrt(0.421875) * C67) +
               std::sqrt(0.421875) * C319 + std::sqrt(0.421875) * C361 -
               std::sqrt(1.6875) * C403 + std::sqrt(0.421875) * C1579 +
               std::sqrt(0.421875) * C1621 - std::sqrt(1.6875) * C1663 -
               std::sqrt(0.421875) * C1831 - std::sqrt(0.421875) * C1873 +
               std::sqrt(1.6875) * C1915;
    gx[611] += std::sqrt(1.6875) * C161 -
               (std::sqrt(0.421875) * C119 + std::sqrt(0.421875) * C77) +
               std::sqrt(0.421875) * C329 + std::sqrt(0.421875) * C371 -
               std::sqrt(1.6875) * C413 + std::sqrt(0.421875) * C1589 +
               std::sqrt(0.421875) * C1631 - std::sqrt(1.6875) * C1673 -
               std::sqrt(0.421875) * C1841 - std::sqrt(0.421875) * C1883 +
               std::sqrt(1.6875) * C1925;
    gy[611] += std::sqrt(1.6875) * C163 -
               (std::sqrt(0.421875) * C121 + std::sqrt(0.421875) * C79) +
               std::sqrt(0.421875) * C331 + std::sqrt(0.421875) * C373 -
               std::sqrt(1.6875) * C415 + std::sqrt(0.421875) * C1591 +
               std::sqrt(0.421875) * C1633 - std::sqrt(1.6875) * C1675 -
               std::sqrt(0.421875) * C1843 - std::sqrt(0.421875) * C1885 +
               std::sqrt(1.6875) * C1927;
    gz[611] += std::sqrt(1.6875) * C165 -
               (std::sqrt(0.421875) * C123 + std::sqrt(0.421875) * C81) +
               std::sqrt(0.421875) * C333 + std::sqrt(0.421875) * C375 -
               std::sqrt(1.6875) * C417 + std::sqrt(0.421875) * C1593 +
               std::sqrt(0.421875) * C1635 - std::sqrt(1.6875) * C1677 -
               std::sqrt(0.421875) * C1845 - std::sqrt(0.421875) * C1887 +
               std::sqrt(1.6875) * C1929;
    gx[612] += std::sqrt(0.03515625) * C40 + std::sqrt(0.03515625) * C49 -
               std::sqrt(0.140625) * C56 + std::sqrt(0.03515625) * C84 +
               std::sqrt(0.03515625) * C91 - std::sqrt(0.140625) * C98 -
               std::sqrt(0.140625) * C126 - std::sqrt(0.140625) * C133 +
               std::sqrt(0.5625) * C140 - std::sqrt(0.03515625) * C294 -
               std::sqrt(0.03515625) * C301 + std::sqrt(0.140625) * C308 -
               std::sqrt(0.03515625) * C336 - std::sqrt(0.03515625) * C343 +
               std::sqrt(0.140625) * C350 + std::sqrt(0.140625) * C378 +
               std::sqrt(0.140625) * C385 - std::sqrt(0.5625) * C392 -
               std::sqrt(0.03515625) * C1554 - std::sqrt(0.03515625) * C1561 +
               std::sqrt(0.140625) * C1568 - std::sqrt(0.03515625) * C1596 -
               std::sqrt(0.03515625) * C1603 + std::sqrt(0.140625) * C1610 +
               std::sqrt(0.140625) * C1638 + std::sqrt(0.140625) * C1645 -
               std::sqrt(0.5625) * C1652 + std::sqrt(0.03515625) * C1806 +
               std::sqrt(0.03515625) * C1813 - std::sqrt(0.140625) * C1820 +
               std::sqrt(0.03515625) * C1848 + std::sqrt(0.03515625) * C1855 -
               std::sqrt(0.140625) * C1862 - std::sqrt(0.140625) * C1890 -
               std::sqrt(0.140625) * C1897 + std::sqrt(0.5625) * C1904;
    gy[612] += std::sqrt(0.03515625) * C44 + std::sqrt(0.03515625) * C51 -
               std::sqrt(0.140625) * C58 + std::sqrt(0.03515625) * C86 +
               std::sqrt(0.03515625) * C93 - std::sqrt(0.140625) * C100 -
               std::sqrt(0.140625) * C128 - std::sqrt(0.140625) * C135 +
               std::sqrt(0.5625) * C142 - std::sqrt(0.03515625) * C296 -
               std::sqrt(0.03515625) * C303 + std::sqrt(0.140625) * C310 -
               std::sqrt(0.03515625) * C338 - std::sqrt(0.03515625) * C345 +
               std::sqrt(0.140625) * C352 + std::sqrt(0.140625) * C380 +
               std::sqrt(0.140625) * C387 - std::sqrt(0.5625) * C394 -
               std::sqrt(0.03515625) * C1556 - std::sqrt(0.03515625) * C1563 +
               std::sqrt(0.140625) * C1570 - std::sqrt(0.03515625) * C1598 -
               std::sqrt(0.03515625) * C1605 + std::sqrt(0.140625) * C1612 +
               std::sqrt(0.140625) * C1640 + std::sqrt(0.140625) * C1647 -
               std::sqrt(0.5625) * C1654 + std::sqrt(0.03515625) * C1808 +
               std::sqrt(0.03515625) * C1815 - std::sqrt(0.140625) * C1822 +
               std::sqrt(0.03515625) * C1850 + std::sqrt(0.03515625) * C1857 -
               std::sqrt(0.140625) * C1864 - std::sqrt(0.140625) * C1892 -
               std::sqrt(0.140625) * C1899 + std::sqrt(0.5625) * C1906;
    gz[612] += std::sqrt(0.03515625) * C46 + std::sqrt(0.03515625) * C53 -
               std::sqrt(0.140625) * C60 + std::sqrt(0.03515625) * C88 +
               std::sqrt(0.03515625) * C95 - std::sqrt(0.140625) * C102 -
               std::sqrt(0.140625) * C130 - std::sqrt(0.140625) * C137 +
               std::sqrt(0.5625) * C144 - std::sqrt(0.03515625) * C298 -
               std::sqrt(0.03515625) * C305 + std::sqrt(0.140625) * C312 -
               std::sqrt(0.03515625) * C340 - std::sqrt(0.03515625) * C347 +
               std::sqrt(0.140625) * C354 + std::sqrt(0.140625) * C382 +
               std::sqrt(0.140625) * C389 - std::sqrt(0.5625) * C396 -
               std::sqrt(0.03515625) * C1558 - std::sqrt(0.03515625) * C1565 +
               std::sqrt(0.140625) * C1572 - std::sqrt(0.03515625) * C1600 -
               std::sqrt(0.03515625) * C1607 + std::sqrt(0.140625) * C1614 +
               std::sqrt(0.140625) * C1642 + std::sqrt(0.140625) * C1649 -
               std::sqrt(0.5625) * C1656 + std::sqrt(0.03515625) * C1810 +
               std::sqrt(0.03515625) * C1817 - std::sqrt(0.140625) * C1824 +
               std::sqrt(0.03515625) * C1852 + std::sqrt(0.03515625) * C1859 -
               std::sqrt(0.140625) * C1866 - std::sqrt(0.140625) * C1894 -
               std::sqrt(0.140625) * C1901 + std::sqrt(0.5625) * C1908;
    gx[613] += std::sqrt(1.6875) * C154 -
               (std::sqrt(0.421875) * C112 + std::sqrt(0.421875) * C70) +
               std::sqrt(0.421875) * C322 + std::sqrt(0.421875) * C364 -
               std::sqrt(1.6875) * C406 + std::sqrt(0.421875) * C1582 +
               std::sqrt(0.421875) * C1624 - std::sqrt(1.6875) * C1666 -
               std::sqrt(0.421875) * C1834 - std::sqrt(0.421875) * C1876 +
               std::sqrt(1.6875) * C1918;
    gy[613] += std::sqrt(1.6875) * C156 -
               (std::sqrt(0.421875) * C114 + std::sqrt(0.421875) * C72) +
               std::sqrt(0.421875) * C324 + std::sqrt(0.421875) * C366 -
               std::sqrt(1.6875) * C408 + std::sqrt(0.421875) * C1584 +
               std::sqrt(0.421875) * C1626 - std::sqrt(1.6875) * C1668 -
               std::sqrt(0.421875) * C1836 - std::sqrt(0.421875) * C1878 +
               std::sqrt(1.6875) * C1920;
    gz[613] += std::sqrt(1.6875) * C158 -
               (std::sqrt(0.421875) * C116 + std::sqrt(0.421875) * C74) +
               std::sqrt(0.421875) * C326 + std::sqrt(0.421875) * C368 -
               std::sqrt(1.6875) * C410 + std::sqrt(0.421875) * C1586 +
               std::sqrt(0.421875) * C1628 - std::sqrt(1.6875) * C1670 -
               std::sqrt(0.421875) * C1838 - std::sqrt(0.421875) * C1880 +
               std::sqrt(1.6875) * C1922;
    gx[614] += std::sqrt(0.10546875) * C49 - std::sqrt(0.10546875) * C40 -
               std::sqrt(0.10546875) * C84 + std::sqrt(0.10546875) * C91 +
               std::sqrt(0.421875) * C126 - std::sqrt(0.421875) * C133 +
               std::sqrt(0.10546875) * C294 - std::sqrt(0.10546875) * C301 +
               std::sqrt(0.10546875) * C336 - std::sqrt(0.10546875) * C343 -
               std::sqrt(0.421875) * C378 + std::sqrt(0.421875) * C385 +
               std::sqrt(0.10546875) * C1554 - std::sqrt(0.10546875) * C1561 +
               std::sqrt(0.10546875) * C1596 - std::sqrt(0.10546875) * C1603 -
               std::sqrt(0.421875) * C1638 + std::sqrt(0.421875) * C1645 -
               std::sqrt(0.10546875) * C1806 + std::sqrt(0.10546875) * C1813 -
               std::sqrt(0.10546875) * C1848 + std::sqrt(0.10546875) * C1855 +
               std::sqrt(0.421875) * C1890 - std::sqrt(0.421875) * C1897;
    gy[614] += std::sqrt(0.10546875) * C51 - std::sqrt(0.10546875) * C44 -
               std::sqrt(0.10546875) * C86 + std::sqrt(0.10546875) * C93 +
               std::sqrt(0.421875) * C128 - std::sqrt(0.421875) * C135 +
               std::sqrt(0.10546875) * C296 - std::sqrt(0.10546875) * C303 +
               std::sqrt(0.10546875) * C338 - std::sqrt(0.10546875) * C345 -
               std::sqrt(0.421875) * C380 + std::sqrt(0.421875) * C387 +
               std::sqrt(0.10546875) * C1556 - std::sqrt(0.10546875) * C1563 +
               std::sqrt(0.10546875) * C1598 - std::sqrt(0.10546875) * C1605 -
               std::sqrt(0.421875) * C1640 + std::sqrt(0.421875) * C1647 -
               std::sqrt(0.10546875) * C1808 + std::sqrt(0.10546875) * C1815 -
               std::sqrt(0.10546875) * C1850 + std::sqrt(0.10546875) * C1857 +
               std::sqrt(0.421875) * C1892 - std::sqrt(0.421875) * C1899;
    gz[614] += std::sqrt(0.10546875) * C53 - std::sqrt(0.10546875) * C46 -
               std::sqrt(0.10546875) * C88 + std::sqrt(0.10546875) * C95 +
               std::sqrt(0.421875) * C130 - std::sqrt(0.421875) * C137 +
               std::sqrt(0.10546875) * C298 - std::sqrt(0.10546875) * C305 +
               std::sqrt(0.10546875) * C340 - std::sqrt(0.10546875) * C347 -
               std::sqrt(0.421875) * C382 + std::sqrt(0.421875) * C389 +
               std::sqrt(0.10546875) * C1558 - std::sqrt(0.10546875) * C1565 +
               std::sqrt(0.10546875) * C1600 - std::sqrt(0.10546875) * C1607 -
               std::sqrt(0.421875) * C1642 + std::sqrt(0.421875) * C1649 -
               std::sqrt(0.10546875) * C1810 + std::sqrt(0.10546875) * C1817 -
               std::sqrt(0.10546875) * C1852 + std::sqrt(0.10546875) * C1859 +
               std::sqrt(0.421875) * C1894 - std::sqrt(0.421875) * C1901;
    gx[615] += std::sqrt(5.0625) * C231 - std::sqrt(5.0625) * C483 -
               std::sqrt(5.0625) * C1743 + std::sqrt(5.0625) * C1995;
    gy[615] += std::sqrt(5.0625) * C233 - std::sqrt(5.0625) * C485 -
               std::sqrt(5.0625) * C1745 + std::sqrt(5.0625) * C1997;
    gz[615] += std::sqrt(5.0625) * C235 - std::sqrt(5.0625) * C487 -
               std::sqrt(5.0625) * C1747 + std::sqrt(5.0625) * C1999;
    gx[616] += std::sqrt(5.0625) * C245 - std::sqrt(5.0625) * C497 -
               std::sqrt(5.0625) * C1757 + std::sqrt(5.0625) * C2009;
    gy[616] += std::sqrt(5.0625) * C247 - std::sqrt(5.0625) * C499 -
               std::sqrt(5.0625) * C1759 + std::sqrt(5.0625) * C2011;
    gz[616] += std::sqrt(5.0625) * C249 - std::sqrt(5.0625) * C501 -
               std::sqrt(5.0625) * C1761 + std::sqrt(5.0625) * C2013;
    gx[617] += std::sqrt(1.6875) * C224 -
               (std::sqrt(0.421875) * C217 + std::sqrt(0.421875) * C210) +
               std::sqrt(0.421875) * C462 + std::sqrt(0.421875) * C469 -
               std::sqrt(1.6875) * C476 + std::sqrt(0.421875) * C1722 +
               std::sqrt(0.421875) * C1729 - std::sqrt(1.6875) * C1736 -
               std::sqrt(0.421875) * C1974 - std::sqrt(0.421875) * C1981 +
               std::sqrt(1.6875) * C1988;
    gy[617] += std::sqrt(1.6875) * C226 -
               (std::sqrt(0.421875) * C219 + std::sqrt(0.421875) * C212) +
               std::sqrt(0.421875) * C464 + std::sqrt(0.421875) * C471 -
               std::sqrt(1.6875) * C478 + std::sqrt(0.421875) * C1724 +
               std::sqrt(0.421875) * C1731 - std::sqrt(1.6875) * C1738 -
               std::sqrt(0.421875) * C1976 - std::sqrt(0.421875) * C1983 +
               std::sqrt(1.6875) * C1990;
    gz[617] += std::sqrt(1.6875) * C228 -
               (std::sqrt(0.421875) * C221 + std::sqrt(0.421875) * C214) +
               std::sqrt(0.421875) * C466 + std::sqrt(0.421875) * C473 -
               std::sqrt(1.6875) * C480 + std::sqrt(0.421875) * C1726 +
               std::sqrt(0.421875) * C1733 - std::sqrt(1.6875) * C1740 -
               std::sqrt(0.421875) * C1978 - std::sqrt(0.421875) * C1985 +
               std::sqrt(1.6875) * C1992;
    gx[618] += std::sqrt(5.0625) * C238 - std::sqrt(5.0625) * C490 -
               std::sqrt(5.0625) * C1750 + std::sqrt(5.0625) * C2002;
    gy[618] += std::sqrt(5.0625) * C240 - std::sqrt(5.0625) * C492 -
               std::sqrt(5.0625) * C1752 + std::sqrt(5.0625) * C2004;
    gz[618] += std::sqrt(5.0625) * C242 - std::sqrt(5.0625) * C494 -
               std::sqrt(5.0625) * C1754 + std::sqrt(5.0625) * C2006;
    gx[619] += std::sqrt(1.265625) * C210 - std::sqrt(1.265625) * C217 -
               std::sqrt(1.265625) * C462 + std::sqrt(1.265625) * C469 -
               std::sqrt(1.265625) * C1722 + std::sqrt(1.265625) * C1729 +
               std::sqrt(1.265625) * C1974 - std::sqrt(1.265625) * C1981;
    gy[619] += std::sqrt(1.265625) * C212 - std::sqrt(1.265625) * C219 -
               std::sqrt(1.265625) * C464 + std::sqrt(1.265625) * C471 -
               std::sqrt(1.265625) * C1724 + std::sqrt(1.265625) * C1731 +
               std::sqrt(1.265625) * C1976 - std::sqrt(1.265625) * C1983;
    gz[619] += std::sqrt(1.265625) * C214 - std::sqrt(1.265625) * C221 -
               std::sqrt(1.265625) * C466 + std::sqrt(1.265625) * C473 -
               std::sqrt(1.265625) * C1726 + std::sqrt(1.265625) * C1733 +
               std::sqrt(1.265625) * C1978 - std::sqrt(1.265625) * C1985;
    gx[620] += std::sqrt(1.265625) * C63 - std::sqrt(1.265625) * C105 -
               std::sqrt(1.265625) * C315 + std::sqrt(1.265625) * C357 -
               std::sqrt(1.265625) * C1575 + std::sqrt(1.265625) * C1617 +
               std::sqrt(1.265625) * C1827 - std::sqrt(1.265625) * C1869;
    gy[620] += std::sqrt(1.265625) * C65 - std::sqrt(1.265625) * C107 -
               std::sqrt(1.265625) * C317 + std::sqrt(1.265625) * C359 -
               std::sqrt(1.265625) * C1577 + std::sqrt(1.265625) * C1619 +
               std::sqrt(1.265625) * C1829 - std::sqrt(1.265625) * C1871;
    gz[620] += std::sqrt(1.265625) * C67 - std::sqrt(1.265625) * C109 -
               std::sqrt(1.265625) * C319 + std::sqrt(1.265625) * C361 -
               std::sqrt(1.265625) * C1579 + std::sqrt(1.265625) * C1621 +
               std::sqrt(1.265625) * C1831 - std::sqrt(1.265625) * C1873;
    gx[621] += std::sqrt(1.265625) * C77 - std::sqrt(1.265625) * C119 -
               std::sqrt(1.265625) * C329 + std::sqrt(1.265625) * C371 -
               std::sqrt(1.265625) * C1589 + std::sqrt(1.265625) * C1631 +
               std::sqrt(1.265625) * C1841 - std::sqrt(1.265625) * C1883;
    gy[621] += std::sqrt(1.265625) * C79 - std::sqrt(1.265625) * C121 -
               std::sqrt(1.265625) * C331 + std::sqrt(1.265625) * C373 -
               std::sqrt(1.265625) * C1591 + std::sqrt(1.265625) * C1633 +
               std::sqrt(1.265625) * C1843 - std::sqrt(1.265625) * C1885;
    gz[621] += std::sqrt(1.265625) * C81 - std::sqrt(1.265625) * C123 -
               std::sqrt(1.265625) * C333 + std::sqrt(1.265625) * C375 -
               std::sqrt(1.265625) * C1593 + std::sqrt(1.265625) * C1635 +
               std::sqrt(1.265625) * C1845 - std::sqrt(1.265625) * C1887;
    gx[622] += std::sqrt(0.421875) * C56 -
               (std::sqrt(0.10546875) * C49 + std::sqrt(0.10546875) * C40) +
               std::sqrt(0.10546875) * C84 + std::sqrt(0.10546875) * C91 -
               std::sqrt(0.421875) * C98 + std::sqrt(0.10546875) * C294 +
               std::sqrt(0.10546875) * C301 - std::sqrt(0.421875) * C308 -
               std::sqrt(0.10546875) * C336 - std::sqrt(0.10546875) * C343 +
               std::sqrt(0.421875) * C350 + std::sqrt(0.10546875) * C1554 +
               std::sqrt(0.10546875) * C1561 - std::sqrt(0.421875) * C1568 -
               std::sqrt(0.10546875) * C1596 - std::sqrt(0.10546875) * C1603 +
               std::sqrt(0.421875) * C1610 - std::sqrt(0.10546875) * C1806 -
               std::sqrt(0.10546875) * C1813 + std::sqrt(0.421875) * C1820 +
               std::sqrt(0.10546875) * C1848 + std::sqrt(0.10546875) * C1855 -
               std::sqrt(0.421875) * C1862;
    gy[622] += std::sqrt(0.421875) * C58 -
               (std::sqrt(0.10546875) * C51 + std::sqrt(0.10546875) * C44) +
               std::sqrt(0.10546875) * C86 + std::sqrt(0.10546875) * C93 -
               std::sqrt(0.421875) * C100 + std::sqrt(0.10546875) * C296 +
               std::sqrt(0.10546875) * C303 - std::sqrt(0.421875) * C310 -
               std::sqrt(0.10546875) * C338 - std::sqrt(0.10546875) * C345 +
               std::sqrt(0.421875) * C352 + std::sqrt(0.10546875) * C1556 +
               std::sqrt(0.10546875) * C1563 - std::sqrt(0.421875) * C1570 -
               std::sqrt(0.10546875) * C1598 - std::sqrt(0.10546875) * C1605 +
               std::sqrt(0.421875) * C1612 - std::sqrt(0.10546875) * C1808 -
               std::sqrt(0.10546875) * C1815 + std::sqrt(0.421875) * C1822 +
               std::sqrt(0.10546875) * C1850 + std::sqrt(0.10546875) * C1857 -
               std::sqrt(0.421875) * C1864;
    gz[622] += std::sqrt(0.421875) * C60 -
               (std::sqrt(0.10546875) * C53 + std::sqrt(0.10546875) * C46) +
               std::sqrt(0.10546875) * C88 + std::sqrt(0.10546875) * C95 -
               std::sqrt(0.421875) * C102 + std::sqrt(0.10546875) * C298 +
               std::sqrt(0.10546875) * C305 - std::sqrt(0.421875) * C312 -
               std::sqrt(0.10546875) * C340 - std::sqrt(0.10546875) * C347 +
               std::sqrt(0.421875) * C354 + std::sqrt(0.10546875) * C1558 +
               std::sqrt(0.10546875) * C1565 - std::sqrt(0.421875) * C1572 -
               std::sqrt(0.10546875) * C1600 - std::sqrt(0.10546875) * C1607 +
               std::sqrt(0.421875) * C1614 - std::sqrt(0.10546875) * C1810 -
               std::sqrt(0.10546875) * C1817 + std::sqrt(0.421875) * C1824 +
               std::sqrt(0.10546875) * C1852 + std::sqrt(0.10546875) * C1859 -
               std::sqrt(0.421875) * C1866;
    gx[623] += std::sqrt(1.265625) * C70 - std::sqrt(1.265625) * C112 -
               std::sqrt(1.265625) * C322 + std::sqrt(1.265625) * C364 -
               std::sqrt(1.265625) * C1582 + std::sqrt(1.265625) * C1624 +
               std::sqrt(1.265625) * C1834 - std::sqrt(1.265625) * C1876;
    gy[623] += std::sqrt(1.265625) * C72 - std::sqrt(1.265625) * C114 -
               std::sqrt(1.265625) * C324 + std::sqrt(1.265625) * C366 -
               std::sqrt(1.265625) * C1584 + std::sqrt(1.265625) * C1626 +
               std::sqrt(1.265625) * C1836 - std::sqrt(1.265625) * C1878;
    gz[623] += std::sqrt(1.265625) * C74 - std::sqrt(1.265625) * C116 -
               std::sqrt(1.265625) * C326 + std::sqrt(1.265625) * C368 -
               std::sqrt(1.265625) * C1586 + std::sqrt(1.265625) * C1628 +
               std::sqrt(1.265625) * C1838 - std::sqrt(1.265625) * C1880;
    gx[624] += std::sqrt(0.31640625) * C40 - std::sqrt(0.31640625) * C49 -
               std::sqrt(0.31640625) * C84 + std::sqrt(0.31640625) * C91 -
               std::sqrt(0.31640625) * C294 + std::sqrt(0.31640625) * C301 +
               std::sqrt(0.31640625) * C336 - std::sqrt(0.31640625) * C343 -
               std::sqrt(0.31640625) * C1554 + std::sqrt(0.31640625) * C1561 +
               std::sqrt(0.31640625) * C1596 - std::sqrt(0.31640625) * C1603 +
               std::sqrt(0.31640625) * C1806 - std::sqrt(0.31640625) * C1813 -
               std::sqrt(0.31640625) * C1848 + std::sqrt(0.31640625) * C1855;
    gy[624] += std::sqrt(0.31640625) * C44 - std::sqrt(0.31640625) * C51 -
               std::sqrt(0.31640625) * C86 + std::sqrt(0.31640625) * C93 -
               std::sqrt(0.31640625) * C296 + std::sqrt(0.31640625) * C303 +
               std::sqrt(0.31640625) * C338 - std::sqrt(0.31640625) * C345 -
               std::sqrt(0.31640625) * C1556 + std::sqrt(0.31640625) * C1563 +
               std::sqrt(0.31640625) * C1598 - std::sqrt(0.31640625) * C1605 +
               std::sqrt(0.31640625) * C1808 - std::sqrt(0.31640625) * C1815 -
               std::sqrt(0.31640625) * C1850 + std::sqrt(0.31640625) * C1857;
    gz[624] += std::sqrt(0.31640625) * C46 - std::sqrt(0.31640625) * C53 -
               std::sqrt(0.31640625) * C88 + std::sqrt(0.31640625) * C95 -
               std::sqrt(0.31640625) * C298 + std::sqrt(0.31640625) * C305 +
               std::sqrt(0.31640625) * C340 - std::sqrt(0.31640625) * C347 -
               std::sqrt(0.31640625) * C1558 + std::sqrt(0.31640625) * C1565 +
               std::sqrt(0.31640625) * C1600 - std::sqrt(0.31640625) * C1607 +
               std::sqrt(0.31640625) * C1810 - std::sqrt(0.31640625) * C1817 -
               std::sqrt(0.31640625) * C1852 + std::sqrt(0.31640625) * C1859;
}
