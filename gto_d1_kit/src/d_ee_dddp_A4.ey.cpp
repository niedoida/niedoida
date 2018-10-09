/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2221_1(const double ae,
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
    double g[996];
    eri_gradient_2221_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[120];
    double vry[120];
    double vrz[120];
    eri_gradient_2221_1_vr(ae,
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
    double etx[496];
    double ety[496];
    double etz[496];
    eri_gradient_2221_1_et(ae,
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
    double hrx[648];
    double hry[648];
    double hrz[648];
    eri_gradient_2221_1_hr(ae,
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
    gx[0] += std::sqrt(27.) * C2751;
    gy[0] += std::sqrt(27.) * C2753;
    gz[0] += std::sqrt(27.) * C2755;
    gx[1] += std::sqrt(27.) * C2758;
    gy[1] += std::sqrt(27.) * C2760;
    gz[1] += std::sqrt(27.) * C2762;
    gx[2] += std::sqrt(27.) * C2765;
    gy[2] += std::sqrt(27.) * C2767;
    gz[2] += std::sqrt(27.) * C2769;
    gx[3] += std::sqrt(27.) * C2793;
    gy[3] += std::sqrt(27.) * C2795;
    gz[3] += std::sqrt(27.) * C2797;
    gx[4] += std::sqrt(27.) * C2800;
    gy[4] += std::sqrt(27.) * C2802;
    gz[4] += std::sqrt(27.) * C2804;
    gx[5] += std::sqrt(27.) * C2807;
    gy[5] += std::sqrt(27.) * C2809;
    gz[5] += std::sqrt(27.) * C2811;
    gx[6] += std::sqrt(9.) * C2730 -
             (std::sqrt(2.25) * C2709 + std::sqrt(2.25) * C2688);
    gy[6] += std::sqrt(9.) * C2732 -
             (std::sqrt(2.25) * C2711 + std::sqrt(2.25) * C2690);
    gz[6] += std::sqrt(9.) * C2734 -
             (std::sqrt(2.25) * C2713 + std::sqrt(2.25) * C2692);
    gx[7] += std::sqrt(9.) * C2737 -
             (std::sqrt(2.25) * C2716 + std::sqrt(2.25) * C2695);
    gy[7] += std::sqrt(9.) * C2739 -
             (std::sqrt(2.25) * C2718 + std::sqrt(2.25) * C2697);
    gz[7] += std::sqrt(9.) * C2741 -
             (std::sqrt(2.25) * C2720 + std::sqrt(2.25) * C2699);
    gx[8] += std::sqrt(9.) * C2744 -
             (std::sqrt(2.25) * C2723 + std::sqrt(2.25) * C2702);
    gy[8] += std::sqrt(9.) * C2746 -
             (std::sqrt(2.25) * C2725 + std::sqrt(2.25) * C2704);
    gz[8] += std::sqrt(9.) * C2748 -
             (std::sqrt(2.25) * C2727 + std::sqrt(2.25) * C2706);
    gx[9] += std::sqrt(27.) * C2772;
    gy[9] += std::sqrt(27.) * C2774;
    gz[9] += std::sqrt(27.) * C2776;
    gx[10] += std::sqrt(27.) * C2779;
    gy[10] += std::sqrt(27.) * C2781;
    gz[10] += std::sqrt(27.) * C2783;
    gx[11] += std::sqrt(27.) * C2786;
    gy[11] += std::sqrt(27.) * C2788;
    gz[11] += std::sqrt(27.) * C2790;
    gx[12] += std::sqrt(6.75) * C2688 - std::sqrt(6.75) * C2709;
    gy[12] += std::sqrt(6.75) * C2690 - std::sqrt(6.75) * C2711;
    gz[12] += std::sqrt(6.75) * C2692 - std::sqrt(6.75) * C2713;
    gx[13] += std::sqrt(6.75) * C2695 - std::sqrt(6.75) * C2716;
    gy[13] += std::sqrt(6.75) * C2697 - std::sqrt(6.75) * C2718;
    gz[13] += std::sqrt(6.75) * C2699 - std::sqrt(6.75) * C2720;
    gx[14] += std::sqrt(6.75) * C2702 - std::sqrt(6.75) * C2723;
    gy[14] += std::sqrt(6.75) * C2704 - std::sqrt(6.75) * C2725;
    gz[14] += std::sqrt(6.75) * C2706 - std::sqrt(6.75) * C2727;
    gx[15] += std::sqrt(27.) * C3003;
    gy[15] += std::sqrt(27.) * C3005;
    gz[15] += std::sqrt(27.) * C3007;
    gx[16] += std::sqrt(27.) * C3010;
    gy[16] += std::sqrt(27.) * C3012;
    gz[16] += std::sqrt(27.) * C3014;
    gx[17] += std::sqrt(27.) * C3017;
    gy[17] += std::sqrt(27.) * C3019;
    gz[17] += std::sqrt(27.) * C3021;
    gx[18] += std::sqrt(27.) * C3045;
    gy[18] += std::sqrt(27.) * C3047;
    gz[18] += std::sqrt(27.) * C3049;
    gx[19] += std::sqrt(27.) * C3052;
    gy[19] += std::sqrt(27.) * C3054;
    gz[19] += std::sqrt(27.) * C3056;
    gx[20] += std::sqrt(27.) * C3059;
    gy[20] += std::sqrt(27.) * C3061;
    gz[20] += std::sqrt(27.) * C3063;
    gx[21] += std::sqrt(9.) * C2982 -
              (std::sqrt(2.25) * C2961 + std::sqrt(2.25) * C2940);
    gy[21] += std::sqrt(9.) * C2984 -
              (std::sqrt(2.25) * C2963 + std::sqrt(2.25) * C2942);
    gz[21] += std::sqrt(9.) * C2986 -
              (std::sqrt(2.25) * C2965 + std::sqrt(2.25) * C2944);
    gx[22] += std::sqrt(9.) * C2989 -
              (std::sqrt(2.25) * C2968 + std::sqrt(2.25) * C2947);
    gy[22] += std::sqrt(9.) * C2991 -
              (std::sqrt(2.25) * C2970 + std::sqrt(2.25) * C2949);
    gz[22] += std::sqrt(9.) * C2993 -
              (std::sqrt(2.25) * C2972 + std::sqrt(2.25) * C2951);
    gx[23] += std::sqrt(9.) * C2996 -
              (std::sqrt(2.25) * C2975 + std::sqrt(2.25) * C2954);
    gy[23] += std::sqrt(9.) * C2998 -
              (std::sqrt(2.25) * C2977 + std::sqrt(2.25) * C2956);
    gz[23] += std::sqrt(9.) * C3000 -
              (std::sqrt(2.25) * C2979 + std::sqrt(2.25) * C2958);
    gx[24] += std::sqrt(27.) * C3024;
    gy[24] += std::sqrt(27.) * C3026;
    gz[24] += std::sqrt(27.) * C3028;
    gx[25] += std::sqrt(27.) * C3031;
    gy[25] += std::sqrt(27.) * C3033;
    gz[25] += std::sqrt(27.) * C3035;
    gx[26] += std::sqrt(27.) * C3038;
    gy[26] += std::sqrt(27.) * C3040;
    gz[26] += std::sqrt(27.) * C3042;
    gx[27] += std::sqrt(6.75) * C2940 - std::sqrt(6.75) * C2961;
    gy[27] += std::sqrt(6.75) * C2942 - std::sqrt(6.75) * C2963;
    gz[27] += std::sqrt(6.75) * C2944 - std::sqrt(6.75) * C2965;
    gx[28] += std::sqrt(6.75) * C2947 - std::sqrt(6.75) * C2968;
    gy[28] += std::sqrt(6.75) * C2949 - std::sqrt(6.75) * C2970;
    gz[28] += std::sqrt(6.75) * C2951 - std::sqrt(6.75) * C2972;
    gx[29] += std::sqrt(6.75) * C2954 - std::sqrt(6.75) * C2975;
    gy[29] += std::sqrt(6.75) * C2956 - std::sqrt(6.75) * C2977;
    gz[29] += std::sqrt(6.75) * C2958 - std::sqrt(6.75) * C2979;
    gx[30] += std::sqrt(9.) * C2625 -
              (std::sqrt(2.25) * C2499 + std::sqrt(2.25) * C2373);
    gy[30] += std::sqrt(9.) * C2627 -
              (std::sqrt(2.25) * C2501 + std::sqrt(2.25) * C2375);
    gz[30] += std::sqrt(9.) * C2629 -
              (std::sqrt(2.25) * C2503 + std::sqrt(2.25) * C2377);
    gx[31] += std::sqrt(9.) * C2632 -
              (std::sqrt(2.25) * C2506 + std::sqrt(2.25) * C2380);
    gy[31] += std::sqrt(9.) * C2634 -
              (std::sqrt(2.25) * C2508 + std::sqrt(2.25) * C2382);
    gz[31] += std::sqrt(9.) * C2636 -
              (std::sqrt(2.25) * C2510 + std::sqrt(2.25) * C2384);
    gx[32] += std::sqrt(9.) * C2639 -
              (std::sqrt(2.25) * C2513 + std::sqrt(2.25) * C2387);
    gy[32] += std::sqrt(9.) * C2641 -
              (std::sqrt(2.25) * C2515 + std::sqrt(2.25) * C2389);
    gz[32] += std::sqrt(9.) * C2643 -
              (std::sqrt(2.25) * C2517 + std::sqrt(2.25) * C2391);
    gx[33] += std::sqrt(9.) * C2667 -
              (std::sqrt(2.25) * C2541 + std::sqrt(2.25) * C2415);
    gy[33] += std::sqrt(9.) * C2669 -
              (std::sqrt(2.25) * C2543 + std::sqrt(2.25) * C2417);
    gz[33] += std::sqrt(9.) * C2671 -
              (std::sqrt(2.25) * C2545 + std::sqrt(2.25) * C2419);
    gx[34] += std::sqrt(9.) * C2674 -
              (std::sqrt(2.25) * C2548 + std::sqrt(2.25) * C2422);
    gy[34] += std::sqrt(9.) * C2676 -
              (std::sqrt(2.25) * C2550 + std::sqrt(2.25) * C2424);
    gz[34] += std::sqrt(9.) * C2678 -
              (std::sqrt(2.25) * C2552 + std::sqrt(2.25) * C2426);
    gx[35] += std::sqrt(9.) * C2681 -
              (std::sqrt(2.25) * C2555 + std::sqrt(2.25) * C2429);
    gy[35] += std::sqrt(9.) * C2683 -
              (std::sqrt(2.25) * C2557 + std::sqrt(2.25) * C2431);
    gz[35] += std::sqrt(9.) * C2685 -
              (std::sqrt(2.25) * C2559 + std::sqrt(2.25) * C2433);
    gx[36] += std::sqrt(0.1875) * C2310 + std::sqrt(0.1875) * C2331 -
              std::sqrt(0.75) * C2352 + std::sqrt(0.1875) * C2436 +
              std::sqrt(0.1875) * C2457 - std::sqrt(0.75) * C2478 -
              std::sqrt(0.75) * C2562 - std::sqrt(0.75) * C2583 +
              std::sqrt(3.0) * C2604;
    gy[36] += std::sqrt(0.1875) * C2312 + std::sqrt(0.1875) * C2333 -
              std::sqrt(0.75) * C2354 + std::sqrt(0.1875) * C2438 +
              std::sqrt(0.1875) * C2459 - std::sqrt(0.75) * C2480 -
              std::sqrt(0.75) * C2564 - std::sqrt(0.75) * C2585 +
              std::sqrt(3.0) * C2606;
    gz[36] += std::sqrt(0.1875) * C2314 + std::sqrt(0.1875) * C2335 -
              std::sqrt(0.75) * C2356 + std::sqrt(0.1875) * C2440 +
              std::sqrt(0.1875) * C2461 - std::sqrt(0.75) * C2482 -
              std::sqrt(0.75) * C2566 - std::sqrt(0.75) * C2587 +
              std::sqrt(3.0) * C2608;
    gx[37] += std::sqrt(0.1875) * C2317 + std::sqrt(0.1875) * C2338 -
              std::sqrt(0.75) * C2359 + std::sqrt(0.1875) * C2443 +
              std::sqrt(0.1875) * C2464 - std::sqrt(0.75) * C2485 -
              std::sqrt(0.75) * C2569 - std::sqrt(0.75) * C2590 +
              std::sqrt(3.0) * C2611;
    gy[37] += std::sqrt(0.1875) * C2319 + std::sqrt(0.1875) * C2340 -
              std::sqrt(0.75) * C2361 + std::sqrt(0.1875) * C2445 +
              std::sqrt(0.1875) * C2466 - std::sqrt(0.75) * C2487 -
              std::sqrt(0.75) * C2571 - std::sqrt(0.75) * C2592 +
              std::sqrt(3.0) * C2613;
    gz[37] += std::sqrt(0.1875) * C2321 + std::sqrt(0.1875) * C2342 -
              std::sqrt(0.75) * C2363 + std::sqrt(0.1875) * C2447 +
              std::sqrt(0.1875) * C2468 - std::sqrt(0.75) * C2489 -
              std::sqrt(0.75) * C2573 - std::sqrt(0.75) * C2594 +
              std::sqrt(3.0) * C2615;
    gx[38] += std::sqrt(0.1875) * C2324 + std::sqrt(0.1875) * C2345 -
              std::sqrt(0.75) * C2366 + std::sqrt(0.1875) * C2450 +
              std::sqrt(0.1875) * C2471 - std::sqrt(0.75) * C2492 -
              std::sqrt(0.75) * C2576 - std::sqrt(0.75) * C2597 +
              std::sqrt(3.0) * C2618;
    gy[38] += std::sqrt(0.1875) * C2326 + std::sqrt(0.1875) * C2347 -
              std::sqrt(0.75) * C2368 + std::sqrt(0.1875) * C2452 +
              std::sqrt(0.1875) * C2473 - std::sqrt(0.75) * C2494 -
              std::sqrt(0.75) * C2578 - std::sqrt(0.75) * C2599 +
              std::sqrt(3.0) * C2620;
    gz[38] += std::sqrt(0.1875) * C2328 + std::sqrt(0.1875) * C2349 -
              std::sqrt(0.75) * C2370 + std::sqrt(0.1875) * C2454 +
              std::sqrt(0.1875) * C2475 - std::sqrt(0.75) * C2496 -
              std::sqrt(0.75) * C2580 - std::sqrt(0.75) * C2601 +
              std::sqrt(3.0) * C2622;
    gx[39] += std::sqrt(9.) * C2646 -
              (std::sqrt(2.25) * C2520 + std::sqrt(2.25) * C2394);
    gy[39] += std::sqrt(9.) * C2648 -
              (std::sqrt(2.25) * C2522 + std::sqrt(2.25) * C2396);
    gz[39] += std::sqrt(9.) * C2650 -
              (std::sqrt(2.25) * C2524 + std::sqrt(2.25) * C2398);
    gx[40] += std::sqrt(9.) * C2653 -
              (std::sqrt(2.25) * C2527 + std::sqrt(2.25) * C2401);
    gy[40] += std::sqrt(9.) * C2655 -
              (std::sqrt(2.25) * C2529 + std::sqrt(2.25) * C2403);
    gz[40] += std::sqrt(9.) * C2657 -
              (std::sqrt(2.25) * C2531 + std::sqrt(2.25) * C2405);
    gx[41] += std::sqrt(9.) * C2660 -
              (std::sqrt(2.25) * C2534 + std::sqrt(2.25) * C2408);
    gy[41] += std::sqrt(9.) * C2662 -
              (std::sqrt(2.25) * C2536 + std::sqrt(2.25) * C2410);
    gz[41] += std::sqrt(9.) * C2664 -
              (std::sqrt(2.25) * C2538 + std::sqrt(2.25) * C2412);
    gx[42] += std::sqrt(0.5625) * C2331 - std::sqrt(0.5625) * C2310 -
              std::sqrt(0.5625) * C2436 + std::sqrt(0.5625) * C2457 +
              std::sqrt(2.25) * C2562 - std::sqrt(2.25) * C2583;
    gy[42] += std::sqrt(0.5625) * C2333 - std::sqrt(0.5625) * C2312 -
              std::sqrt(0.5625) * C2438 + std::sqrt(0.5625) * C2459 +
              std::sqrt(2.25) * C2564 - std::sqrt(2.25) * C2585;
    gz[42] += std::sqrt(0.5625) * C2335 - std::sqrt(0.5625) * C2314 -
              std::sqrt(0.5625) * C2440 + std::sqrt(0.5625) * C2461 +
              std::sqrt(2.25) * C2566 - std::sqrt(2.25) * C2587;
    gx[43] += std::sqrt(0.5625) * C2338 - std::sqrt(0.5625) * C2317 -
              std::sqrt(0.5625) * C2443 + std::sqrt(0.5625) * C2464 +
              std::sqrt(2.25) * C2569 - std::sqrt(2.25) * C2590;
    gy[43] += std::sqrt(0.5625) * C2340 - std::sqrt(0.5625) * C2319 -
              std::sqrt(0.5625) * C2445 + std::sqrt(0.5625) * C2466 +
              std::sqrt(2.25) * C2571 - std::sqrt(2.25) * C2592;
    gz[43] += std::sqrt(0.5625) * C2342 - std::sqrt(0.5625) * C2321 -
              std::sqrt(0.5625) * C2447 + std::sqrt(0.5625) * C2468 +
              std::sqrt(2.25) * C2573 - std::sqrt(2.25) * C2594;
    gx[44] += std::sqrt(0.5625) * C2345 - std::sqrt(0.5625) * C2324 -
              std::sqrt(0.5625) * C2450 + std::sqrt(0.5625) * C2471 +
              std::sqrt(2.25) * C2576 - std::sqrt(2.25) * C2597;
    gy[44] += std::sqrt(0.5625) * C2347 - std::sqrt(0.5625) * C2326 -
              std::sqrt(0.5625) * C2452 + std::sqrt(0.5625) * C2473 +
              std::sqrt(2.25) * C2578 - std::sqrt(2.25) * C2599;
    gz[44] += std::sqrt(0.5625) * C2349 - std::sqrt(0.5625) * C2328 -
              std::sqrt(0.5625) * C2454 + std::sqrt(0.5625) * C2475 +
              std::sqrt(2.25) * C2580 - std::sqrt(2.25) * C2601;
    gx[45] += std::sqrt(27.) * C2877;
    gy[45] += std::sqrt(27.) * C2879;
    gz[45] += std::sqrt(27.) * C2881;
    gx[46] += std::sqrt(27.) * C2884;
    gy[46] += std::sqrt(27.) * C2886;
    gz[46] += std::sqrt(27.) * C2888;
    gx[47] += std::sqrt(27.) * C2891;
    gy[47] += std::sqrt(27.) * C2893;
    gz[47] += std::sqrt(27.) * C2895;
    gx[48] += std::sqrt(27.) * C2919;
    gy[48] += std::sqrt(27.) * C2921;
    gz[48] += std::sqrt(27.) * C2923;
    gx[49] += std::sqrt(27.) * C2926;
    gy[49] += std::sqrt(27.) * C2928;
    gz[49] += std::sqrt(27.) * C2930;
    gx[50] += std::sqrt(27.) * C2933;
    gy[50] += std::sqrt(27.) * C2935;
    gz[50] += std::sqrt(27.) * C2937;
    gx[51] += std::sqrt(9.) * C2856 -
              (std::sqrt(2.25) * C2835 + std::sqrt(2.25) * C2814);
    gy[51] += std::sqrt(9.) * C2858 -
              (std::sqrt(2.25) * C2837 + std::sqrt(2.25) * C2816);
    gz[51] += std::sqrt(9.) * C2860 -
              (std::sqrt(2.25) * C2839 + std::sqrt(2.25) * C2818);
    gx[52] += std::sqrt(9.) * C2863 -
              (std::sqrt(2.25) * C2842 + std::sqrt(2.25) * C2821);
    gy[52] += std::sqrt(9.) * C2865 -
              (std::sqrt(2.25) * C2844 + std::sqrt(2.25) * C2823);
    gz[52] += std::sqrt(9.) * C2867 -
              (std::sqrt(2.25) * C2846 + std::sqrt(2.25) * C2825);
    gx[53] += std::sqrt(9.) * C2870 -
              (std::sqrt(2.25) * C2849 + std::sqrt(2.25) * C2828);
    gy[53] += std::sqrt(9.) * C2872 -
              (std::sqrt(2.25) * C2851 + std::sqrt(2.25) * C2830);
    gz[53] += std::sqrt(9.) * C2874 -
              (std::sqrt(2.25) * C2853 + std::sqrt(2.25) * C2832);
    gx[54] += std::sqrt(27.) * C2898;
    gy[54] += std::sqrt(27.) * C2900;
    gz[54] += std::sqrt(27.) * C2902;
    gx[55] += std::sqrt(27.) * C2905;
    gy[55] += std::sqrt(27.) * C2907;
    gz[55] += std::sqrt(27.) * C2909;
    gx[56] += std::sqrt(27.) * C2912;
    gy[56] += std::sqrt(27.) * C2914;
    gz[56] += std::sqrt(27.) * C2916;
    gx[57] += std::sqrt(6.75) * C2814 - std::sqrt(6.75) * C2835;
    gy[57] += std::sqrt(6.75) * C2816 - std::sqrt(6.75) * C2837;
    gz[57] += std::sqrt(6.75) * C2818 - std::sqrt(6.75) * C2839;
    gx[58] += std::sqrt(6.75) * C2821 - std::sqrt(6.75) * C2842;
    gy[58] += std::sqrt(6.75) * C2823 - std::sqrt(6.75) * C2844;
    gz[58] += std::sqrt(6.75) * C2825 - std::sqrt(6.75) * C2846;
    gx[59] += std::sqrt(6.75) * C2828 - std::sqrt(6.75) * C2849;
    gy[59] += std::sqrt(6.75) * C2830 - std::sqrt(6.75) * C2851;
    gz[59] += std::sqrt(6.75) * C2832 - std::sqrt(6.75) * C2853;
    gx[60] += std::sqrt(6.75) * C2373 - std::sqrt(6.75) * C2499;
    gy[60] += std::sqrt(6.75) * C2375 - std::sqrt(6.75) * C2501;
    gz[60] += std::sqrt(6.75) * C2377 - std::sqrt(6.75) * C2503;
    gx[61] += std::sqrt(6.75) * C2380 - std::sqrt(6.75) * C2506;
    gy[61] += std::sqrt(6.75) * C2382 - std::sqrt(6.75) * C2508;
    gz[61] += std::sqrt(6.75) * C2384 - std::sqrt(6.75) * C2510;
    gx[62] += std::sqrt(6.75) * C2387 - std::sqrt(6.75) * C2513;
    gy[62] += std::sqrt(6.75) * C2389 - std::sqrt(6.75) * C2515;
    gz[62] += std::sqrt(6.75) * C2391 - std::sqrt(6.75) * C2517;
    gx[63] += std::sqrt(6.75) * C2415 - std::sqrt(6.75) * C2541;
    gy[63] += std::sqrt(6.75) * C2417 - std::sqrt(6.75) * C2543;
    gz[63] += std::sqrt(6.75) * C2419 - std::sqrt(6.75) * C2545;
    gx[64] += std::sqrt(6.75) * C2422 - std::sqrt(6.75) * C2548;
    gy[64] += std::sqrt(6.75) * C2424 - std::sqrt(6.75) * C2550;
    gz[64] += std::sqrt(6.75) * C2426 - std::sqrt(6.75) * C2552;
    gx[65] += std::sqrt(6.75) * C2429 - std::sqrt(6.75) * C2555;
    gy[65] += std::sqrt(6.75) * C2431 - std::sqrt(6.75) * C2557;
    gz[65] += std::sqrt(6.75) * C2433 - std::sqrt(6.75) * C2559;
    gx[66] += std::sqrt(2.25) * C2352 -
              (std::sqrt(0.5625) * C2331 + std::sqrt(0.5625) * C2310) +
              std::sqrt(0.5625) * C2436 + std::sqrt(0.5625) * C2457 -
              std::sqrt(2.25) * C2478;
    gy[66] += std::sqrt(2.25) * C2354 -
              (std::sqrt(0.5625) * C2333 + std::sqrt(0.5625) * C2312) +
              std::sqrt(0.5625) * C2438 + std::sqrt(0.5625) * C2459 -
              std::sqrt(2.25) * C2480;
    gz[66] += std::sqrt(2.25) * C2356 -
              (std::sqrt(0.5625) * C2335 + std::sqrt(0.5625) * C2314) +
              std::sqrt(0.5625) * C2440 + std::sqrt(0.5625) * C2461 -
              std::sqrt(2.25) * C2482;
    gx[67] += std::sqrt(2.25) * C2359 -
              (std::sqrt(0.5625) * C2338 + std::sqrt(0.5625) * C2317) +
              std::sqrt(0.5625) * C2443 + std::sqrt(0.5625) * C2464 -
              std::sqrt(2.25) * C2485;
    gy[67] += std::sqrt(2.25) * C2361 -
              (std::sqrt(0.5625) * C2340 + std::sqrt(0.5625) * C2319) +
              std::sqrt(0.5625) * C2445 + std::sqrt(0.5625) * C2466 -
              std::sqrt(2.25) * C2487;
    gz[67] += std::sqrt(2.25) * C2363 -
              (std::sqrt(0.5625) * C2342 + std::sqrt(0.5625) * C2321) +
              std::sqrt(0.5625) * C2447 + std::sqrt(0.5625) * C2468 -
              std::sqrt(2.25) * C2489;
    gx[68] += std::sqrt(2.25) * C2366 -
              (std::sqrt(0.5625) * C2345 + std::sqrt(0.5625) * C2324) +
              std::sqrt(0.5625) * C2450 + std::sqrt(0.5625) * C2471 -
              std::sqrt(2.25) * C2492;
    gy[68] += std::sqrt(2.25) * C2368 -
              (std::sqrt(0.5625) * C2347 + std::sqrt(0.5625) * C2326) +
              std::sqrt(0.5625) * C2452 + std::sqrt(0.5625) * C2473 -
              std::sqrt(2.25) * C2494;
    gz[68] += std::sqrt(2.25) * C2370 -
              (std::sqrt(0.5625) * C2349 + std::sqrt(0.5625) * C2328) +
              std::sqrt(0.5625) * C2454 + std::sqrt(0.5625) * C2475 -
              std::sqrt(2.25) * C2496;
    gx[69] += std::sqrt(6.75) * C2394 - std::sqrt(6.75) * C2520;
    gy[69] += std::sqrt(6.75) * C2396 - std::sqrt(6.75) * C2522;
    gz[69] += std::sqrt(6.75) * C2398 - std::sqrt(6.75) * C2524;
    gx[70] += std::sqrt(6.75) * C2401 - std::sqrt(6.75) * C2527;
    gy[70] += std::sqrt(6.75) * C2403 - std::sqrt(6.75) * C2529;
    gz[70] += std::sqrt(6.75) * C2405 - std::sqrt(6.75) * C2531;
    gx[71] += std::sqrt(6.75) * C2408 - std::sqrt(6.75) * C2534;
    gy[71] += std::sqrt(6.75) * C2410 - std::sqrt(6.75) * C2536;
    gz[71] += std::sqrt(6.75) * C2412 - std::sqrt(6.75) * C2538;
    gx[72] += std::sqrt(1.6875) * C2310 - std::sqrt(1.6875) * C2331 -
              std::sqrt(1.6875) * C2436 + std::sqrt(1.6875) * C2457;
    gy[72] += std::sqrt(1.6875) * C2312 - std::sqrt(1.6875) * C2333 -
              std::sqrt(1.6875) * C2438 + std::sqrt(1.6875) * C2459;
    gz[72] += std::sqrt(1.6875) * C2314 - std::sqrt(1.6875) * C2335 -
              std::sqrt(1.6875) * C2440 + std::sqrt(1.6875) * C2461;
    gx[73] += std::sqrt(1.6875) * C2317 - std::sqrt(1.6875) * C2338 -
              std::sqrt(1.6875) * C2443 + std::sqrt(1.6875) * C2464;
    gy[73] += std::sqrt(1.6875) * C2319 - std::sqrt(1.6875) * C2340 -
              std::sqrt(1.6875) * C2445 + std::sqrt(1.6875) * C2466;
    gz[73] += std::sqrt(1.6875) * C2321 - std::sqrt(1.6875) * C2342 -
              std::sqrt(1.6875) * C2447 + std::sqrt(1.6875) * C2468;
    gx[74] += std::sqrt(1.6875) * C2324 - std::sqrt(1.6875) * C2345 -
              std::sqrt(1.6875) * C2450 + std::sqrt(1.6875) * C2471;
    gy[74] += std::sqrt(1.6875) * C2326 - std::sqrt(1.6875) * C2347 -
              std::sqrt(1.6875) * C2452 + std::sqrt(1.6875) * C2473;
    gz[74] += std::sqrt(1.6875) * C2328 - std::sqrt(1.6875) * C2349 -
              std::sqrt(1.6875) * C2454 + std::sqrt(1.6875) * C2475;
    gx[75] += std::sqrt(27.) * C4263;
    gy[75] += std::sqrt(27.) * C4265;
    gz[75] += std::sqrt(27.) * C4267;
    gx[76] += std::sqrt(27.) * C4270;
    gy[76] += std::sqrt(27.) * C4272;
    gz[76] += std::sqrt(27.) * C4274;
    gx[77] += std::sqrt(27.) * C4277;
    gy[77] += std::sqrt(27.) * C4279;
    gz[77] += std::sqrt(27.) * C4281;
    gx[78] += std::sqrt(27.) * C4305;
    gy[78] += std::sqrt(27.) * C4307;
    gz[78] += std::sqrt(27.) * C4309;
    gx[79] += std::sqrt(27.) * C4312;
    gy[79] += std::sqrt(27.) * C4314;
    gz[79] += std::sqrt(27.) * C4316;
    gx[80] += std::sqrt(27.) * C4319;
    gy[80] += std::sqrt(27.) * C4321;
    gz[80] += std::sqrt(27.) * C4323;
    gx[81] += std::sqrt(9.) * C4242 -
              (std::sqrt(2.25) * C4221 + std::sqrt(2.25) * C4200);
    gy[81] += std::sqrt(9.) * C4244 -
              (std::sqrt(2.25) * C4223 + std::sqrt(2.25) * C4202);
    gz[81] += std::sqrt(9.) * C4246 -
              (std::sqrt(2.25) * C4225 + std::sqrt(2.25) * C4204);
    gx[82] += std::sqrt(9.) * C4249 -
              (std::sqrt(2.25) * C4228 + std::sqrt(2.25) * C4207);
    gy[82] += std::sqrt(9.) * C4251 -
              (std::sqrt(2.25) * C4230 + std::sqrt(2.25) * C4209);
    gz[82] += std::sqrt(9.) * C4253 -
              (std::sqrt(2.25) * C4232 + std::sqrt(2.25) * C4211);
    gx[83] += std::sqrt(9.) * C4256 -
              (std::sqrt(2.25) * C4235 + std::sqrt(2.25) * C4214);
    gy[83] += std::sqrt(9.) * C4258 -
              (std::sqrt(2.25) * C4237 + std::sqrt(2.25) * C4216);
    gz[83] += std::sqrt(9.) * C4260 -
              (std::sqrt(2.25) * C4239 + std::sqrt(2.25) * C4218);
    gx[84] += std::sqrt(27.) * C4284;
    gy[84] += std::sqrt(27.) * C4286;
    gz[84] += std::sqrt(27.) * C4288;
    gx[85] += std::sqrt(27.) * C4291;
    gy[85] += std::sqrt(27.) * C4293;
    gz[85] += std::sqrt(27.) * C4295;
    gx[86] += std::sqrt(27.) * C4298;
    gy[86] += std::sqrt(27.) * C4300;
    gz[86] += std::sqrt(27.) * C4302;
    gx[87] += std::sqrt(6.75) * C4200 - std::sqrt(6.75) * C4221;
    gy[87] += std::sqrt(6.75) * C4202 - std::sqrt(6.75) * C4223;
    gz[87] += std::sqrt(6.75) * C4204 - std::sqrt(6.75) * C4225;
    gx[88] += std::sqrt(6.75) * C4207 - std::sqrt(6.75) * C4228;
    gy[88] += std::sqrt(6.75) * C4209 - std::sqrt(6.75) * C4230;
    gz[88] += std::sqrt(6.75) * C4211 - std::sqrt(6.75) * C4232;
    gx[89] += std::sqrt(6.75) * C4214 - std::sqrt(6.75) * C4235;
    gy[89] += std::sqrt(6.75) * C4216 - std::sqrt(6.75) * C4237;
    gz[89] += std::sqrt(6.75) * C4218 - std::sqrt(6.75) * C4239;
    gx[90] += std::sqrt(27.) * C4515;
    gy[90] += std::sqrt(27.) * C4517;
    gz[90] += std::sqrt(27.) * C4519;
    gx[91] += std::sqrt(27.) * C4522;
    gy[91] += std::sqrt(27.) * C4524;
    gz[91] += std::sqrt(27.) * C4526;
    gx[92] += std::sqrt(27.) * C4529;
    gy[92] += std::sqrt(27.) * C4531;
    gz[92] += std::sqrt(27.) * C4533;
    gx[93] += std::sqrt(27.) * C4557;
    gy[93] += std::sqrt(27.) * C4559;
    gz[93] += std::sqrt(27.) * C4561;
    gx[94] += std::sqrt(27.) * C4564;
    gy[94] += std::sqrt(27.) * C4566;
    gz[94] += std::sqrt(27.) * C4568;
    gx[95] += std::sqrt(27.) * C4571;
    gy[95] += std::sqrt(27.) * C4573;
    gz[95] += std::sqrt(27.) * C4575;
    gx[96] += std::sqrt(9.) * C4494 -
              (std::sqrt(2.25) * C4473 + std::sqrt(2.25) * C4452);
    gy[96] += std::sqrt(9.) * C4496 -
              (std::sqrt(2.25) * C4475 + std::sqrt(2.25) * C4454);
    gz[96] += std::sqrt(9.) * C4498 -
              (std::sqrt(2.25) * C4477 + std::sqrt(2.25) * C4456);
    gx[97] += std::sqrt(9.) * C4501 -
              (std::sqrt(2.25) * C4480 + std::sqrt(2.25) * C4459);
    gy[97] += std::sqrt(9.) * C4503 -
              (std::sqrt(2.25) * C4482 + std::sqrt(2.25) * C4461);
    gz[97] += std::sqrt(9.) * C4505 -
              (std::sqrt(2.25) * C4484 + std::sqrt(2.25) * C4463);
    gx[98] += std::sqrt(9.) * C4508 -
              (std::sqrt(2.25) * C4487 + std::sqrt(2.25) * C4466);
    gy[98] += std::sqrt(9.) * C4510 -
              (std::sqrt(2.25) * C4489 + std::sqrt(2.25) * C4468);
    gz[98] += std::sqrt(9.) * C4512 -
              (std::sqrt(2.25) * C4491 + std::sqrt(2.25) * C4470);
    gx[99] += std::sqrt(27.) * C4536;
    gy[99] += std::sqrt(27.) * C4538;
    gz[99] += std::sqrt(27.) * C4540;
    gx[100] += std::sqrt(27.) * C4543;
    gy[100] += std::sqrt(27.) * C4545;
    gz[100] += std::sqrt(27.) * C4547;
    gx[101] += std::sqrt(27.) * C4550;
    gy[101] += std::sqrt(27.) * C4552;
    gz[101] += std::sqrt(27.) * C4554;
    gx[102] += std::sqrt(6.75) * C4452 - std::sqrt(6.75) * C4473;
    gy[102] += std::sqrt(6.75) * C4454 - std::sqrt(6.75) * C4475;
    gz[102] += std::sqrt(6.75) * C4456 - std::sqrt(6.75) * C4477;
    gx[103] += std::sqrt(6.75) * C4459 - std::sqrt(6.75) * C4480;
    gy[103] += std::sqrt(6.75) * C4461 - std::sqrt(6.75) * C4482;
    gz[103] += std::sqrt(6.75) * C4463 - std::sqrt(6.75) * C4484;
    gx[104] += std::sqrt(6.75) * C4466 - std::sqrt(6.75) * C4487;
    gy[104] += std::sqrt(6.75) * C4468 - std::sqrt(6.75) * C4489;
    gz[104] += std::sqrt(6.75) * C4470 - std::sqrt(6.75) * C4491;
    gx[105] += std::sqrt(9.) * C4137 -
               (std::sqrt(2.25) * C4011 + std::sqrt(2.25) * C3885);
    gy[105] += std::sqrt(9.) * C4139 -
               (std::sqrt(2.25) * C4013 + std::sqrt(2.25) * C3887);
    gz[105] += std::sqrt(9.) * C4141 -
               (std::sqrt(2.25) * C4015 + std::sqrt(2.25) * C3889);
    gx[106] += std::sqrt(9.) * C4144 -
               (std::sqrt(2.25) * C4018 + std::sqrt(2.25) * C3892);
    gy[106] += std::sqrt(9.) * C4146 -
               (std::sqrt(2.25) * C4020 + std::sqrt(2.25) * C3894);
    gz[106] += std::sqrt(9.) * C4148 -
               (std::sqrt(2.25) * C4022 + std::sqrt(2.25) * C3896);
    gx[107] += std::sqrt(9.) * C4151 -
               (std::sqrt(2.25) * C4025 + std::sqrt(2.25) * C3899);
    gy[107] += std::sqrt(9.) * C4153 -
               (std::sqrt(2.25) * C4027 + std::sqrt(2.25) * C3901);
    gz[107] += std::sqrt(9.) * C4155 -
               (std::sqrt(2.25) * C4029 + std::sqrt(2.25) * C3903);
    gx[108] += std::sqrt(9.) * C4179 -
               (std::sqrt(2.25) * C4053 + std::sqrt(2.25) * C3927);
    gy[108] += std::sqrt(9.) * C4181 -
               (std::sqrt(2.25) * C4055 + std::sqrt(2.25) * C3929);
    gz[108] += std::sqrt(9.) * C4183 -
               (std::sqrt(2.25) * C4057 + std::sqrt(2.25) * C3931);
    gx[109] += std::sqrt(9.) * C4186 -
               (std::sqrt(2.25) * C4060 + std::sqrt(2.25) * C3934);
    gy[109] += std::sqrt(9.) * C4188 -
               (std::sqrt(2.25) * C4062 + std::sqrt(2.25) * C3936);
    gz[109] += std::sqrt(9.) * C4190 -
               (std::sqrt(2.25) * C4064 + std::sqrt(2.25) * C3938);
    gx[110] += std::sqrt(9.) * C4193 -
               (std::sqrt(2.25) * C4067 + std::sqrt(2.25) * C3941);
    gy[110] += std::sqrt(9.) * C4195 -
               (std::sqrt(2.25) * C4069 + std::sqrt(2.25) * C3943);
    gz[110] += std::sqrt(9.) * C4197 -
               (std::sqrt(2.25) * C4071 + std::sqrt(2.25) * C3945);
    gx[111] += std::sqrt(0.1875) * C3822 + std::sqrt(0.1875) * C3843 -
               std::sqrt(0.75) * C3864 + std::sqrt(0.1875) * C3948 +
               std::sqrt(0.1875) * C3969 - std::sqrt(0.75) * C3990 -
               std::sqrt(0.75) * C4074 - std::sqrt(0.75) * C4095 +
               std::sqrt(3.0) * C4116;
    gy[111] += std::sqrt(0.1875) * C3824 + std::sqrt(0.1875) * C3845 -
               std::sqrt(0.75) * C3866 + std::sqrt(0.1875) * C3950 +
               std::sqrt(0.1875) * C3971 - std::sqrt(0.75) * C3992 -
               std::sqrt(0.75) * C4076 - std::sqrt(0.75) * C4097 +
               std::sqrt(3.0) * C4118;
    gz[111] += std::sqrt(0.1875) * C3826 + std::sqrt(0.1875) * C3847 -
               std::sqrt(0.75) * C3868 + std::sqrt(0.1875) * C3952 +
               std::sqrt(0.1875) * C3973 - std::sqrt(0.75) * C3994 -
               std::sqrt(0.75) * C4078 - std::sqrt(0.75) * C4099 +
               std::sqrt(3.0) * C4120;
    gx[112] += std::sqrt(0.1875) * C3829 + std::sqrt(0.1875) * C3850 -
               std::sqrt(0.75) * C3871 + std::sqrt(0.1875) * C3955 +
               std::sqrt(0.1875) * C3976 - std::sqrt(0.75) * C3997 -
               std::sqrt(0.75) * C4081 - std::sqrt(0.75) * C4102 +
               std::sqrt(3.0) * C4123;
    gy[112] += std::sqrt(0.1875) * C3831 + std::sqrt(0.1875) * C3852 -
               std::sqrt(0.75) * C3873 + std::sqrt(0.1875) * C3957 +
               std::sqrt(0.1875) * C3978 - std::sqrt(0.75) * C3999 -
               std::sqrt(0.75) * C4083 - std::sqrt(0.75) * C4104 +
               std::sqrt(3.0) * C4125;
    gz[112] += std::sqrt(0.1875) * C3833 + std::sqrt(0.1875) * C3854 -
               std::sqrt(0.75) * C3875 + std::sqrt(0.1875) * C3959 +
               std::sqrt(0.1875) * C3980 - std::sqrt(0.75) * C4001 -
               std::sqrt(0.75) * C4085 - std::sqrt(0.75) * C4106 +
               std::sqrt(3.0) * C4127;
    gx[113] += std::sqrt(0.1875) * C3836 + std::sqrt(0.1875) * C3857 -
               std::sqrt(0.75) * C3878 + std::sqrt(0.1875) * C3962 +
               std::sqrt(0.1875) * C3983 - std::sqrt(0.75) * C4004 -
               std::sqrt(0.75) * C4088 - std::sqrt(0.75) * C4109 +
               std::sqrt(3.0) * C4130;
    gy[113] += std::sqrt(0.1875) * C3838 + std::sqrt(0.1875) * C3859 -
               std::sqrt(0.75) * C3880 + std::sqrt(0.1875) * C3964 +
               std::sqrt(0.1875) * C3985 - std::sqrt(0.75) * C4006 -
               std::sqrt(0.75) * C4090 - std::sqrt(0.75) * C4111 +
               std::sqrt(3.0) * C4132;
    gz[113] += std::sqrt(0.1875) * C3840 + std::sqrt(0.1875) * C3861 -
               std::sqrt(0.75) * C3882 + std::sqrt(0.1875) * C3966 +
               std::sqrt(0.1875) * C3987 - std::sqrt(0.75) * C4008 -
               std::sqrt(0.75) * C4092 - std::sqrt(0.75) * C4113 +
               std::sqrt(3.0) * C4134;
    gx[114] += std::sqrt(9.) * C4158 -
               (std::sqrt(2.25) * C4032 + std::sqrt(2.25) * C3906);
    gy[114] += std::sqrt(9.) * C4160 -
               (std::sqrt(2.25) * C4034 + std::sqrt(2.25) * C3908);
    gz[114] += std::sqrt(9.) * C4162 -
               (std::sqrt(2.25) * C4036 + std::sqrt(2.25) * C3910);
    gx[115] += std::sqrt(9.) * C4165 -
               (std::sqrt(2.25) * C4039 + std::sqrt(2.25) * C3913);
    gy[115] += std::sqrt(9.) * C4167 -
               (std::sqrt(2.25) * C4041 + std::sqrt(2.25) * C3915);
    gz[115] += std::sqrt(9.) * C4169 -
               (std::sqrt(2.25) * C4043 + std::sqrt(2.25) * C3917);
    gx[116] += std::sqrt(9.) * C4172 -
               (std::sqrt(2.25) * C4046 + std::sqrt(2.25) * C3920);
    gy[116] += std::sqrt(9.) * C4174 -
               (std::sqrt(2.25) * C4048 + std::sqrt(2.25) * C3922);
    gz[116] += std::sqrt(9.) * C4176 -
               (std::sqrt(2.25) * C4050 + std::sqrt(2.25) * C3924);
    gx[117] += std::sqrt(0.5625) * C3843 - std::sqrt(0.5625) * C3822 -
               std::sqrt(0.5625) * C3948 + std::sqrt(0.5625) * C3969 +
               std::sqrt(2.25) * C4074 - std::sqrt(2.25) * C4095;
    gy[117] += std::sqrt(0.5625) * C3845 - std::sqrt(0.5625) * C3824 -
               std::sqrt(0.5625) * C3950 + std::sqrt(0.5625) * C3971 +
               std::sqrt(2.25) * C4076 - std::sqrt(2.25) * C4097;
    gz[117] += std::sqrt(0.5625) * C3847 - std::sqrt(0.5625) * C3826 -
               std::sqrt(0.5625) * C3952 + std::sqrt(0.5625) * C3973 +
               std::sqrt(2.25) * C4078 - std::sqrt(2.25) * C4099;
    gx[118] += std::sqrt(0.5625) * C3850 - std::sqrt(0.5625) * C3829 -
               std::sqrt(0.5625) * C3955 + std::sqrt(0.5625) * C3976 +
               std::sqrt(2.25) * C4081 - std::sqrt(2.25) * C4102;
    gy[118] += std::sqrt(0.5625) * C3852 - std::sqrt(0.5625) * C3831 -
               std::sqrt(0.5625) * C3957 + std::sqrt(0.5625) * C3978 +
               std::sqrt(2.25) * C4083 - std::sqrt(2.25) * C4104;
    gz[118] += std::sqrt(0.5625) * C3854 - std::sqrt(0.5625) * C3833 -
               std::sqrt(0.5625) * C3959 + std::sqrt(0.5625) * C3980 +
               std::sqrt(2.25) * C4085 - std::sqrt(2.25) * C4106;
    gx[119] += std::sqrt(0.5625) * C3857 - std::sqrt(0.5625) * C3836 -
               std::sqrt(0.5625) * C3962 + std::sqrt(0.5625) * C3983 +
               std::sqrt(2.25) * C4088 - std::sqrt(2.25) * C4109;
    gy[119] += std::sqrt(0.5625) * C3859 - std::sqrt(0.5625) * C3838 -
               std::sqrt(0.5625) * C3964 + std::sqrt(0.5625) * C3985 +
               std::sqrt(2.25) * C4090 - std::sqrt(2.25) * C4111;
    gz[119] += std::sqrt(0.5625) * C3861 - std::sqrt(0.5625) * C3840 -
               std::sqrt(0.5625) * C3966 + std::sqrt(0.5625) * C3987 +
               std::sqrt(2.25) * C4092 - std::sqrt(2.25) * C4113;
    gx[120] += std::sqrt(27.) * C4389;
    gy[120] += std::sqrt(27.) * C4391;
    gz[120] += std::sqrt(27.) * C4393;
    gx[121] += std::sqrt(27.) * C4396;
    gy[121] += std::sqrt(27.) * C4398;
    gz[121] += std::sqrt(27.) * C4400;
    gx[122] += std::sqrt(27.) * C4403;
    gy[122] += std::sqrt(27.) * C4405;
    gz[122] += std::sqrt(27.) * C4407;
    gx[123] += std::sqrt(27.) * C4431;
    gy[123] += std::sqrt(27.) * C4433;
    gz[123] += std::sqrt(27.) * C4435;
    gx[124] += std::sqrt(27.) * C4438;
    gy[124] += std::sqrt(27.) * C4440;
    gz[124] += std::sqrt(27.) * C4442;
    gx[125] += std::sqrt(27.) * C4445;
    gy[125] += std::sqrt(27.) * C4447;
    gz[125] += std::sqrt(27.) * C4449;
    gx[126] += std::sqrt(9.) * C4368 -
               (std::sqrt(2.25) * C4347 + std::sqrt(2.25) * C4326);
    gy[126] += std::sqrt(9.) * C4370 -
               (std::sqrt(2.25) * C4349 + std::sqrt(2.25) * C4328);
    gz[126] += std::sqrt(9.) * C4372 -
               (std::sqrt(2.25) * C4351 + std::sqrt(2.25) * C4330);
    gx[127] += std::sqrt(9.) * C4375 -
               (std::sqrt(2.25) * C4354 + std::sqrt(2.25) * C4333);
    gy[127] += std::sqrt(9.) * C4377 -
               (std::sqrt(2.25) * C4356 + std::sqrt(2.25) * C4335);
    gz[127] += std::sqrt(9.) * C4379 -
               (std::sqrt(2.25) * C4358 + std::sqrt(2.25) * C4337);
    gx[128] += std::sqrt(9.) * C4382 -
               (std::sqrt(2.25) * C4361 + std::sqrt(2.25) * C4340);
    gy[128] += std::sqrt(9.) * C4384 -
               (std::sqrt(2.25) * C4363 + std::sqrt(2.25) * C4342);
    gz[128] += std::sqrt(9.) * C4386 -
               (std::sqrt(2.25) * C4365 + std::sqrt(2.25) * C4344);
    gx[129] += std::sqrt(27.) * C4410;
    gy[129] += std::sqrt(27.) * C4412;
    gz[129] += std::sqrt(27.) * C4414;
    gx[130] += std::sqrt(27.) * C4417;
    gy[130] += std::sqrt(27.) * C4419;
    gz[130] += std::sqrt(27.) * C4421;
    gx[131] += std::sqrt(27.) * C4424;
    gy[131] += std::sqrt(27.) * C4426;
    gz[131] += std::sqrt(27.) * C4428;
    gx[132] += std::sqrt(6.75) * C4326 - std::sqrt(6.75) * C4347;
    gy[132] += std::sqrt(6.75) * C4328 - std::sqrt(6.75) * C4349;
    gz[132] += std::sqrt(6.75) * C4330 - std::sqrt(6.75) * C4351;
    gx[133] += std::sqrt(6.75) * C4333 - std::sqrt(6.75) * C4354;
    gy[133] += std::sqrt(6.75) * C4335 - std::sqrt(6.75) * C4356;
    gz[133] += std::sqrt(6.75) * C4337 - std::sqrt(6.75) * C4358;
    gx[134] += std::sqrt(6.75) * C4340 - std::sqrt(6.75) * C4361;
    gy[134] += std::sqrt(6.75) * C4342 - std::sqrt(6.75) * C4363;
    gz[134] += std::sqrt(6.75) * C4344 - std::sqrt(6.75) * C4365;
    gx[135] += std::sqrt(6.75) * C3885 - std::sqrt(6.75) * C4011;
    gy[135] += std::sqrt(6.75) * C3887 - std::sqrt(6.75) * C4013;
    gz[135] += std::sqrt(6.75) * C3889 - std::sqrt(6.75) * C4015;
    gx[136] += std::sqrt(6.75) * C3892 - std::sqrt(6.75) * C4018;
    gy[136] += std::sqrt(6.75) * C3894 - std::sqrt(6.75) * C4020;
    gz[136] += std::sqrt(6.75) * C3896 - std::sqrt(6.75) * C4022;
    gx[137] += std::sqrt(6.75) * C3899 - std::sqrt(6.75) * C4025;
    gy[137] += std::sqrt(6.75) * C3901 - std::sqrt(6.75) * C4027;
    gz[137] += std::sqrt(6.75) * C3903 - std::sqrt(6.75) * C4029;
    gx[138] += std::sqrt(6.75) * C3927 - std::sqrt(6.75) * C4053;
    gy[138] += std::sqrt(6.75) * C3929 - std::sqrt(6.75) * C4055;
    gz[138] += std::sqrt(6.75) * C3931 - std::sqrt(6.75) * C4057;
    gx[139] += std::sqrt(6.75) * C3934 - std::sqrt(6.75) * C4060;
    gy[139] += std::sqrt(6.75) * C3936 - std::sqrt(6.75) * C4062;
    gz[139] += std::sqrt(6.75) * C3938 - std::sqrt(6.75) * C4064;
    gx[140] += std::sqrt(6.75) * C3941 - std::sqrt(6.75) * C4067;
    gy[140] += std::sqrt(6.75) * C3943 - std::sqrt(6.75) * C4069;
    gz[140] += std::sqrt(6.75) * C3945 - std::sqrt(6.75) * C4071;
    gx[141] += std::sqrt(2.25) * C3864 -
               (std::sqrt(0.5625) * C3843 + std::sqrt(0.5625) * C3822) +
               std::sqrt(0.5625) * C3948 + std::sqrt(0.5625) * C3969 -
               std::sqrt(2.25) * C3990;
    gy[141] += std::sqrt(2.25) * C3866 -
               (std::sqrt(0.5625) * C3845 + std::sqrt(0.5625) * C3824) +
               std::sqrt(0.5625) * C3950 + std::sqrt(0.5625) * C3971 -
               std::sqrt(2.25) * C3992;
    gz[141] += std::sqrt(2.25) * C3868 -
               (std::sqrt(0.5625) * C3847 + std::sqrt(0.5625) * C3826) +
               std::sqrt(0.5625) * C3952 + std::sqrt(0.5625) * C3973 -
               std::sqrt(2.25) * C3994;
    gx[142] += std::sqrt(2.25) * C3871 -
               (std::sqrt(0.5625) * C3850 + std::sqrt(0.5625) * C3829) +
               std::sqrt(0.5625) * C3955 + std::sqrt(0.5625) * C3976 -
               std::sqrt(2.25) * C3997;
    gy[142] += std::sqrt(2.25) * C3873 -
               (std::sqrt(0.5625) * C3852 + std::sqrt(0.5625) * C3831) +
               std::sqrt(0.5625) * C3957 + std::sqrt(0.5625) * C3978 -
               std::sqrt(2.25) * C3999;
    gz[142] += std::sqrt(2.25) * C3875 -
               (std::sqrt(0.5625) * C3854 + std::sqrt(0.5625) * C3833) +
               std::sqrt(0.5625) * C3959 + std::sqrt(0.5625) * C3980 -
               std::sqrt(2.25) * C4001;
    gx[143] += std::sqrt(2.25) * C3878 -
               (std::sqrt(0.5625) * C3857 + std::sqrt(0.5625) * C3836) +
               std::sqrt(0.5625) * C3962 + std::sqrt(0.5625) * C3983 -
               std::sqrt(2.25) * C4004;
    gy[143] += std::sqrt(2.25) * C3880 -
               (std::sqrt(0.5625) * C3859 + std::sqrt(0.5625) * C3838) +
               std::sqrt(0.5625) * C3964 + std::sqrt(0.5625) * C3985 -
               std::sqrt(2.25) * C4006;
    gz[143] += std::sqrt(2.25) * C3882 -
               (std::sqrt(0.5625) * C3861 + std::sqrt(0.5625) * C3840) +
               std::sqrt(0.5625) * C3966 + std::sqrt(0.5625) * C3987 -
               std::sqrt(2.25) * C4008;
    gx[144] += std::sqrt(6.75) * C3906 - std::sqrt(6.75) * C4032;
    gy[144] += std::sqrt(6.75) * C3908 - std::sqrt(6.75) * C4034;
    gz[144] += std::sqrt(6.75) * C3910 - std::sqrt(6.75) * C4036;
    gx[145] += std::sqrt(6.75) * C3913 - std::sqrt(6.75) * C4039;
    gy[145] += std::sqrt(6.75) * C3915 - std::sqrt(6.75) * C4041;
    gz[145] += std::sqrt(6.75) * C3917 - std::sqrt(6.75) * C4043;
    gx[146] += std::sqrt(6.75) * C3920 - std::sqrt(6.75) * C4046;
    gy[146] += std::sqrt(6.75) * C3922 - std::sqrt(6.75) * C4048;
    gz[146] += std::sqrt(6.75) * C3924 - std::sqrt(6.75) * C4050;
    gx[147] += std::sqrt(1.6875) * C3822 - std::sqrt(1.6875) * C3843 -
               std::sqrt(1.6875) * C3948 + std::sqrt(1.6875) * C3969;
    gy[147] += std::sqrt(1.6875) * C3824 - std::sqrt(1.6875) * C3845 -
               std::sqrt(1.6875) * C3950 + std::sqrt(1.6875) * C3971;
    gz[147] += std::sqrt(1.6875) * C3826 - std::sqrt(1.6875) * C3847 -
               std::sqrt(1.6875) * C3952 + std::sqrt(1.6875) * C3973;
    gx[148] += std::sqrt(1.6875) * C3829 - std::sqrt(1.6875) * C3850 -
               std::sqrt(1.6875) * C3955 + std::sqrt(1.6875) * C3976;
    gy[148] += std::sqrt(1.6875) * C3831 - std::sqrt(1.6875) * C3852 -
               std::sqrt(1.6875) * C3957 + std::sqrt(1.6875) * C3978;
    gz[148] += std::sqrt(1.6875) * C3833 - std::sqrt(1.6875) * C3854 -
               std::sqrt(1.6875) * C3959 + std::sqrt(1.6875) * C3980;
    gx[149] += std::sqrt(1.6875) * C3836 - std::sqrt(1.6875) * C3857 -
               std::sqrt(1.6875) * C3962 + std::sqrt(1.6875) * C3983;
    gy[149] += std::sqrt(1.6875) * C3838 - std::sqrt(1.6875) * C3859 -
               std::sqrt(1.6875) * C3964 + std::sqrt(1.6875) * C3985;
    gz[149] += std::sqrt(1.6875) * C3840 - std::sqrt(1.6875) * C3861 -
               std::sqrt(1.6875) * C3966 + std::sqrt(1.6875) * C3987;
    gx[150] += std::sqrt(9.) * C1995 -
               (std::sqrt(2.25) * C1239 + std::sqrt(2.25) * C483);
    gy[150] += std::sqrt(9.) * C1997 -
               (std::sqrt(2.25) * C1241 + std::sqrt(2.25) * C485);
    gz[150] += std::sqrt(9.) * C1999 -
               (std::sqrt(2.25) * C1243 + std::sqrt(2.25) * C487);
    gx[151] += std::sqrt(9.) * C2002 -
               (std::sqrt(2.25) * C1246 + std::sqrt(2.25) * C490);
    gy[151] += std::sqrt(9.) * C2004 -
               (std::sqrt(2.25) * C1248 + std::sqrt(2.25) * C492);
    gz[151] += std::sqrt(9.) * C2006 -
               (std::sqrt(2.25) * C1250 + std::sqrt(2.25) * C494);
    gx[152] += std::sqrt(9.) * C2009 -
               (std::sqrt(2.25) * C1253 + std::sqrt(2.25) * C497);
    gy[152] += std::sqrt(9.) * C2011 -
               (std::sqrt(2.25) * C1255 + std::sqrt(2.25) * C499);
    gz[152] += std::sqrt(9.) * C2013 -
               (std::sqrt(2.25) * C1257 + std::sqrt(2.25) * C501);
    gx[153] += std::sqrt(9.) * C2037 -
               (std::sqrt(2.25) * C1281 + std::sqrt(2.25) * C525);
    gy[153] += std::sqrt(9.) * C2039 -
               (std::sqrt(2.25) * C1283 + std::sqrt(2.25) * C527);
    gz[153] += std::sqrt(9.) * C2041 -
               (std::sqrt(2.25) * C1285 + std::sqrt(2.25) * C529);
    gx[154] += std::sqrt(9.) * C2044 -
               (std::sqrt(2.25) * C1288 + std::sqrt(2.25) * C532);
    gy[154] += std::sqrt(9.) * C2046 -
               (std::sqrt(2.25) * C1290 + std::sqrt(2.25) * C534);
    gz[154] += std::sqrt(9.) * C2048 -
               (std::sqrt(2.25) * C1292 + std::sqrt(2.25) * C536);
    gx[155] += std::sqrt(9.) * C2051 -
               (std::sqrt(2.25) * C1295 + std::sqrt(2.25) * C539);
    gy[155] += std::sqrt(9.) * C2053 -
               (std::sqrt(2.25) * C1297 + std::sqrt(2.25) * C541);
    gz[155] += std::sqrt(9.) * C2055 -
               (std::sqrt(2.25) * C1299 + std::sqrt(2.25) * C543);
    gx[156] += std::sqrt(0.1875) * C420 + std::sqrt(0.1875) * C441 -
               std::sqrt(0.75) * C462 + std::sqrt(0.1875) * C1176 +
               std::sqrt(0.1875) * C1197 - std::sqrt(0.75) * C1218 -
               std::sqrt(0.75) * C1932 - std::sqrt(0.75) * C1953 +
               std::sqrt(3.0) * C1974;
    gy[156] += std::sqrt(0.1875) * C422 + std::sqrt(0.1875) * C443 -
               std::sqrt(0.75) * C464 + std::sqrt(0.1875) * C1178 +
               std::sqrt(0.1875) * C1199 - std::sqrt(0.75) * C1220 -
               std::sqrt(0.75) * C1934 - std::sqrt(0.75) * C1955 +
               std::sqrt(3.0) * C1976;
    gz[156] += std::sqrt(0.1875) * C424 + std::sqrt(0.1875) * C445 -
               std::sqrt(0.75) * C466 + std::sqrt(0.1875) * C1180 +
               std::sqrt(0.1875) * C1201 - std::sqrt(0.75) * C1222 -
               std::sqrt(0.75) * C1936 - std::sqrt(0.75) * C1957 +
               std::sqrt(3.0) * C1978;
    gx[157] += std::sqrt(0.1875) * C427 + std::sqrt(0.1875) * C448 -
               std::sqrt(0.75) * C469 + std::sqrt(0.1875) * C1183 +
               std::sqrt(0.1875) * C1204 - std::sqrt(0.75) * C1225 -
               std::sqrt(0.75) * C1939 - std::sqrt(0.75) * C1960 +
               std::sqrt(3.0) * C1981;
    gy[157] += std::sqrt(0.1875) * C429 + std::sqrt(0.1875) * C450 -
               std::sqrt(0.75) * C471 + std::sqrt(0.1875) * C1185 +
               std::sqrt(0.1875) * C1206 - std::sqrt(0.75) * C1227 -
               std::sqrt(0.75) * C1941 - std::sqrt(0.75) * C1962 +
               std::sqrt(3.0) * C1983;
    gz[157] += std::sqrt(0.1875) * C431 + std::sqrt(0.1875) * C452 -
               std::sqrt(0.75) * C473 + std::sqrt(0.1875) * C1187 +
               std::sqrt(0.1875) * C1208 - std::sqrt(0.75) * C1229 -
               std::sqrt(0.75) * C1943 - std::sqrt(0.75) * C1964 +
               std::sqrt(3.0) * C1985;
    gx[158] += std::sqrt(0.1875) * C434 + std::sqrt(0.1875) * C455 -
               std::sqrt(0.75) * C476 + std::sqrt(0.1875) * C1190 +
               std::sqrt(0.1875) * C1211 - std::sqrt(0.75) * C1232 -
               std::sqrt(0.75) * C1946 - std::sqrt(0.75) * C1967 +
               std::sqrt(3.0) * C1988;
    gy[158] += std::sqrt(0.1875) * C436 + std::sqrt(0.1875) * C457 -
               std::sqrt(0.75) * C478 + std::sqrt(0.1875) * C1192 +
               std::sqrt(0.1875) * C1213 - std::sqrt(0.75) * C1234 -
               std::sqrt(0.75) * C1948 - std::sqrt(0.75) * C1969 +
               std::sqrt(3.0) * C1990;
    gz[158] += std::sqrt(0.1875) * C438 + std::sqrt(0.1875) * C459 -
               std::sqrt(0.75) * C480 + std::sqrt(0.1875) * C1194 +
               std::sqrt(0.1875) * C1215 - std::sqrt(0.75) * C1236 -
               std::sqrt(0.75) * C1950 - std::sqrt(0.75) * C1971 +
               std::sqrt(3.0) * C1992;
    gx[159] += std::sqrt(9.) * C2016 -
               (std::sqrt(2.25) * C1260 + std::sqrt(2.25) * C504);
    gy[159] += std::sqrt(9.) * C2018 -
               (std::sqrt(2.25) * C1262 + std::sqrt(2.25) * C506);
    gz[159] += std::sqrt(9.) * C2020 -
               (std::sqrt(2.25) * C1264 + std::sqrt(2.25) * C508);
    gx[160] += std::sqrt(9.) * C2023 -
               (std::sqrt(2.25) * C1267 + std::sqrt(2.25) * C511);
    gy[160] += std::sqrt(9.) * C2025 -
               (std::sqrt(2.25) * C1269 + std::sqrt(2.25) * C513);
    gz[160] += std::sqrt(9.) * C2027 -
               (std::sqrt(2.25) * C1271 + std::sqrt(2.25) * C515);
    gx[161] += std::sqrt(9.) * C2030 -
               (std::sqrt(2.25) * C1274 + std::sqrt(2.25) * C518);
    gy[161] += std::sqrt(9.) * C2032 -
               (std::sqrt(2.25) * C1276 + std::sqrt(2.25) * C520);
    gz[161] += std::sqrt(9.) * C2034 -
               (std::sqrt(2.25) * C1278 + std::sqrt(2.25) * C522);
    gx[162] += std::sqrt(0.5625) * C441 - std::sqrt(0.5625) * C420 -
               std::sqrt(0.5625) * C1176 + std::sqrt(0.5625) * C1197 +
               std::sqrt(2.25) * C1932 - std::sqrt(2.25) * C1953;
    gy[162] += std::sqrt(0.5625) * C443 - std::sqrt(0.5625) * C422 -
               std::sqrt(0.5625) * C1178 + std::sqrt(0.5625) * C1199 +
               std::sqrt(2.25) * C1934 - std::sqrt(2.25) * C1955;
    gz[162] += std::sqrt(0.5625) * C445 - std::sqrt(0.5625) * C424 -
               std::sqrt(0.5625) * C1180 + std::sqrt(0.5625) * C1201 +
               std::sqrt(2.25) * C1936 - std::sqrt(2.25) * C1957;
    gx[163] += std::sqrt(0.5625) * C448 - std::sqrt(0.5625) * C427 -
               std::sqrt(0.5625) * C1183 + std::sqrt(0.5625) * C1204 +
               std::sqrt(2.25) * C1939 - std::sqrt(2.25) * C1960;
    gy[163] += std::sqrt(0.5625) * C450 - std::sqrt(0.5625) * C429 -
               std::sqrt(0.5625) * C1185 + std::sqrt(0.5625) * C1206 +
               std::sqrt(2.25) * C1941 - std::sqrt(2.25) * C1962;
    gz[163] += std::sqrt(0.5625) * C452 - std::sqrt(0.5625) * C431 -
               std::sqrt(0.5625) * C1187 + std::sqrt(0.5625) * C1208 +
               std::sqrt(2.25) * C1943 - std::sqrt(2.25) * C1964;
    gx[164] += std::sqrt(0.5625) * C455 - std::sqrt(0.5625) * C434 -
               std::sqrt(0.5625) * C1190 + std::sqrt(0.5625) * C1211 +
               std::sqrt(2.25) * C1946 - std::sqrt(2.25) * C1967;
    gy[164] += std::sqrt(0.5625) * C457 - std::sqrt(0.5625) * C436 -
               std::sqrt(0.5625) * C1192 + std::sqrt(0.5625) * C1213 +
               std::sqrt(2.25) * C1948 - std::sqrt(2.25) * C1969;
    gz[164] += std::sqrt(0.5625) * C459 - std::sqrt(0.5625) * C438 -
               std::sqrt(0.5625) * C1194 + std::sqrt(0.5625) * C1215 +
               std::sqrt(2.25) * C1950 - std::sqrt(2.25) * C1971;
    gx[165] += std::sqrt(9.) * C2247 -
               (std::sqrt(2.25) * C1491 + std::sqrt(2.25) * C735);
    gy[165] += std::sqrt(9.) * C2249 -
               (std::sqrt(2.25) * C1493 + std::sqrt(2.25) * C737);
    gz[165] += std::sqrt(9.) * C2251 -
               (std::sqrt(2.25) * C1495 + std::sqrt(2.25) * C739);
    gx[166] += std::sqrt(9.) * C2254 -
               (std::sqrt(2.25) * C1498 + std::sqrt(2.25) * C742);
    gy[166] += std::sqrt(9.) * C2256 -
               (std::sqrt(2.25) * C1500 + std::sqrt(2.25) * C744);
    gz[166] += std::sqrt(9.) * C2258 -
               (std::sqrt(2.25) * C1502 + std::sqrt(2.25) * C746);
    gx[167] += std::sqrt(9.) * C2261 -
               (std::sqrt(2.25) * C1505 + std::sqrt(2.25) * C749);
    gy[167] += std::sqrt(9.) * C2263 -
               (std::sqrt(2.25) * C1507 + std::sqrt(2.25) * C751);
    gz[167] += std::sqrt(9.) * C2265 -
               (std::sqrt(2.25) * C1509 + std::sqrt(2.25) * C753);
    gx[168] += std::sqrt(9.) * C2289 -
               (std::sqrt(2.25) * C1533 + std::sqrt(2.25) * C777);
    gy[168] += std::sqrt(9.) * C2291 -
               (std::sqrt(2.25) * C1535 + std::sqrt(2.25) * C779);
    gz[168] += std::sqrt(9.) * C2293 -
               (std::sqrt(2.25) * C1537 + std::sqrt(2.25) * C781);
    gx[169] += std::sqrt(9.) * C2296 -
               (std::sqrt(2.25) * C1540 + std::sqrt(2.25) * C784);
    gy[169] += std::sqrt(9.) * C2298 -
               (std::sqrt(2.25) * C1542 + std::sqrt(2.25) * C786);
    gz[169] += std::sqrt(9.) * C2300 -
               (std::sqrt(2.25) * C1544 + std::sqrt(2.25) * C788);
    gx[170] += std::sqrt(9.) * C2303 -
               (std::sqrt(2.25) * C1547 + std::sqrt(2.25) * C791);
    gy[170] += std::sqrt(9.) * C2305 -
               (std::sqrt(2.25) * C1549 + std::sqrt(2.25) * C793);
    gz[170] += std::sqrt(9.) * C2307 -
               (std::sqrt(2.25) * C1551 + std::sqrt(2.25) * C795);
    gx[171] += std::sqrt(0.1875) * C672 + std::sqrt(0.1875) * C693 -
               std::sqrt(0.75) * C714 + std::sqrt(0.1875) * C1428 +
               std::sqrt(0.1875) * C1449 - std::sqrt(0.75) * C1470 -
               std::sqrt(0.75) * C2184 - std::sqrt(0.75) * C2205 +
               std::sqrt(3.0) * C2226;
    gy[171] += std::sqrt(0.1875) * C674 + std::sqrt(0.1875) * C695 -
               std::sqrt(0.75) * C716 + std::sqrt(0.1875) * C1430 +
               std::sqrt(0.1875) * C1451 - std::sqrt(0.75) * C1472 -
               std::sqrt(0.75) * C2186 - std::sqrt(0.75) * C2207 +
               std::sqrt(3.0) * C2228;
    gz[171] += std::sqrt(0.1875) * C676 + std::sqrt(0.1875) * C697 -
               std::sqrt(0.75) * C718 + std::sqrt(0.1875) * C1432 +
               std::sqrt(0.1875) * C1453 - std::sqrt(0.75) * C1474 -
               std::sqrt(0.75) * C2188 - std::sqrt(0.75) * C2209 +
               std::sqrt(3.0) * C2230;
    gx[172] += std::sqrt(0.1875) * C679 + std::sqrt(0.1875) * C700 -
               std::sqrt(0.75) * C721 + std::sqrt(0.1875) * C1435 +
               std::sqrt(0.1875) * C1456 - std::sqrt(0.75) * C1477 -
               std::sqrt(0.75) * C2191 - std::sqrt(0.75) * C2212 +
               std::sqrt(3.0) * C2233;
    gy[172] += std::sqrt(0.1875) * C681 + std::sqrt(0.1875) * C702 -
               std::sqrt(0.75) * C723 + std::sqrt(0.1875) * C1437 +
               std::sqrt(0.1875) * C1458 - std::sqrt(0.75) * C1479 -
               std::sqrt(0.75) * C2193 - std::sqrt(0.75) * C2214 +
               std::sqrt(3.0) * C2235;
    gz[172] += std::sqrt(0.1875) * C683 + std::sqrt(0.1875) * C704 -
               std::sqrt(0.75) * C725 + std::sqrt(0.1875) * C1439 +
               std::sqrt(0.1875) * C1460 - std::sqrt(0.75) * C1481 -
               std::sqrt(0.75) * C2195 - std::sqrt(0.75) * C2216 +
               std::sqrt(3.0) * C2237;
    gx[173] += std::sqrt(0.1875) * C686 + std::sqrt(0.1875) * C707 -
               std::sqrt(0.75) * C728 + std::sqrt(0.1875) * C1442 +
               std::sqrt(0.1875) * C1463 - std::sqrt(0.75) * C1484 -
               std::sqrt(0.75) * C2198 - std::sqrt(0.75) * C2219 +
               std::sqrt(3.0) * C2240;
    gy[173] += std::sqrt(0.1875) * C688 + std::sqrt(0.1875) * C709 -
               std::sqrt(0.75) * C730 + std::sqrt(0.1875) * C1444 +
               std::sqrt(0.1875) * C1465 - std::sqrt(0.75) * C1486 -
               std::sqrt(0.75) * C2200 - std::sqrt(0.75) * C2221 +
               std::sqrt(3.0) * C2242;
    gz[173] += std::sqrt(0.1875) * C690 + std::sqrt(0.1875) * C711 -
               std::sqrt(0.75) * C732 + std::sqrt(0.1875) * C1446 +
               std::sqrt(0.1875) * C1467 - std::sqrt(0.75) * C1488 -
               std::sqrt(0.75) * C2202 - std::sqrt(0.75) * C2223 +
               std::sqrt(3.0) * C2244;
    gx[174] += std::sqrt(9.) * C2268 -
               (std::sqrt(2.25) * C1512 + std::sqrt(2.25) * C756);
    gy[174] += std::sqrt(9.) * C2270 -
               (std::sqrt(2.25) * C1514 + std::sqrt(2.25) * C758);
    gz[174] += std::sqrt(9.) * C2272 -
               (std::sqrt(2.25) * C1516 + std::sqrt(2.25) * C760);
    gx[175] += std::sqrt(9.) * C2275 -
               (std::sqrt(2.25) * C1519 + std::sqrt(2.25) * C763);
    gy[175] += std::sqrt(9.) * C2277 -
               (std::sqrt(2.25) * C1521 + std::sqrt(2.25) * C765);
    gz[175] += std::sqrt(9.) * C2279 -
               (std::sqrt(2.25) * C1523 + std::sqrt(2.25) * C767);
    gx[176] += std::sqrt(9.) * C2282 -
               (std::sqrt(2.25) * C1526 + std::sqrt(2.25) * C770);
    gy[176] += std::sqrt(9.) * C2284 -
               (std::sqrt(2.25) * C1528 + std::sqrt(2.25) * C772);
    gz[176] += std::sqrt(9.) * C2286 -
               (std::sqrt(2.25) * C1530 + std::sqrt(2.25) * C774);
    gx[177] += std::sqrt(0.5625) * C693 - std::sqrt(0.5625) * C672 -
               std::sqrt(0.5625) * C1428 + std::sqrt(0.5625) * C1449 +
               std::sqrt(2.25) * C2184 - std::sqrt(2.25) * C2205;
    gy[177] += std::sqrt(0.5625) * C695 - std::sqrt(0.5625) * C674 -
               std::sqrt(0.5625) * C1430 + std::sqrt(0.5625) * C1451 +
               std::sqrt(2.25) * C2186 - std::sqrt(2.25) * C2207;
    gz[177] += std::sqrt(0.5625) * C697 - std::sqrt(0.5625) * C676 -
               std::sqrt(0.5625) * C1432 + std::sqrt(0.5625) * C1453 +
               std::sqrt(2.25) * C2188 - std::sqrt(2.25) * C2209;
    gx[178] += std::sqrt(0.5625) * C700 - std::sqrt(0.5625) * C679 -
               std::sqrt(0.5625) * C1435 + std::sqrt(0.5625) * C1456 +
               std::sqrt(2.25) * C2191 - std::sqrt(2.25) * C2212;
    gy[178] += std::sqrt(0.5625) * C702 - std::sqrt(0.5625) * C681 -
               std::sqrt(0.5625) * C1437 + std::sqrt(0.5625) * C1458 +
               std::sqrt(2.25) * C2193 - std::sqrt(2.25) * C2214;
    gz[178] += std::sqrt(0.5625) * C704 - std::sqrt(0.5625) * C683 -
               std::sqrt(0.5625) * C1439 + std::sqrt(0.5625) * C1460 +
               std::sqrt(2.25) * C2195 - std::sqrt(2.25) * C2216;
    gx[179] += std::sqrt(0.5625) * C707 - std::sqrt(0.5625) * C686 -
               std::sqrt(0.5625) * C1442 + std::sqrt(0.5625) * C1463 +
               std::sqrt(2.25) * C2198 - std::sqrt(2.25) * C2219;
    gy[179] += std::sqrt(0.5625) * C709 - std::sqrt(0.5625) * C688 -
               std::sqrt(0.5625) * C1444 + std::sqrt(0.5625) * C1465 +
               std::sqrt(2.25) * C2200 - std::sqrt(2.25) * C2221;
    gz[179] += std::sqrt(0.5625) * C711 - std::sqrt(0.5625) * C690 -
               std::sqrt(0.5625) * C1446 + std::sqrt(0.5625) * C1467 +
               std::sqrt(2.25) * C2202 - std::sqrt(2.25) * C2223;
    gx[180] += std::sqrt(0.1875) * C105 + std::sqrt(0.1875) * C231 -
               std::sqrt(0.75) * C357 + std::sqrt(0.1875) * C861 +
               std::sqrt(0.1875) * C987 - std::sqrt(0.75) * C1113 -
               std::sqrt(0.75) * C1617 - std::sqrt(0.75) * C1743 +
               std::sqrt(3.0) * C1869;
    gy[180] += std::sqrt(0.1875) * C107 + std::sqrt(0.1875) * C233 -
               std::sqrt(0.75) * C359 + std::sqrt(0.1875) * C863 +
               std::sqrt(0.1875) * C989 - std::sqrt(0.75) * C1115 -
               std::sqrt(0.75) * C1619 - std::sqrt(0.75) * C1745 +
               std::sqrt(3.0) * C1871;
    gz[180] += std::sqrt(0.1875) * C109 + std::sqrt(0.1875) * C235 -
               std::sqrt(0.75) * C361 + std::sqrt(0.1875) * C865 +
               std::sqrt(0.1875) * C991 - std::sqrt(0.75) * C1117 -
               std::sqrt(0.75) * C1621 - std::sqrt(0.75) * C1747 +
               std::sqrt(3.0) * C1873;
    gx[181] += std::sqrt(0.1875) * C112 + std::sqrt(0.1875) * C238 -
               std::sqrt(0.75) * C364 + std::sqrt(0.1875) * C868 +
               std::sqrt(0.1875) * C994 - std::sqrt(0.75) * C1120 -
               std::sqrt(0.75) * C1624 - std::sqrt(0.75) * C1750 +
               std::sqrt(3.0) * C1876;
    gy[181] += std::sqrt(0.1875) * C114 + std::sqrt(0.1875) * C240 -
               std::sqrt(0.75) * C366 + std::sqrt(0.1875) * C870 +
               std::sqrt(0.1875) * C996 - std::sqrt(0.75) * C1122 -
               std::sqrt(0.75) * C1626 - std::sqrt(0.75) * C1752 +
               std::sqrt(3.0) * C1878;
    gz[181] += std::sqrt(0.1875) * C116 + std::sqrt(0.1875) * C242 -
               std::sqrt(0.75) * C368 + std::sqrt(0.1875) * C872 +
               std::sqrt(0.1875) * C998 - std::sqrt(0.75) * C1124 -
               std::sqrt(0.75) * C1628 - std::sqrt(0.75) * C1754 +
               std::sqrt(3.0) * C1880;
    gx[182] += std::sqrt(0.1875) * C119 + std::sqrt(0.1875) * C245 -
               std::sqrt(0.75) * C371 + std::sqrt(0.1875) * C875 +
               std::sqrt(0.1875) * C1001 - std::sqrt(0.75) * C1127 -
               std::sqrt(0.75) * C1631 - std::sqrt(0.75) * C1757 +
               std::sqrt(3.0) * C1883;
    gy[182] += std::sqrt(0.1875) * C121 + std::sqrt(0.1875) * C247 -
               std::sqrt(0.75) * C373 + std::sqrt(0.1875) * C877 +
               std::sqrt(0.1875) * C1003 - std::sqrt(0.75) * C1129 -
               std::sqrt(0.75) * C1633 - std::sqrt(0.75) * C1759 +
               std::sqrt(3.0) * C1885;
    gz[182] += std::sqrt(0.1875) * C123 + std::sqrt(0.1875) * C249 -
               std::sqrt(0.75) * C375 + std::sqrt(0.1875) * C879 +
               std::sqrt(0.1875) * C1005 - std::sqrt(0.75) * C1131 -
               std::sqrt(0.75) * C1635 - std::sqrt(0.75) * C1761 +
               std::sqrt(3.0) * C1887;
    gx[183] += std::sqrt(0.1875) * C147 + std::sqrt(0.1875) * C273 -
               std::sqrt(0.75) * C399 + std::sqrt(0.1875) * C903 +
               std::sqrt(0.1875) * C1029 - std::sqrt(0.75) * C1155 -
               std::sqrt(0.75) * C1659 - std::sqrt(0.75) * C1785 +
               std::sqrt(3.0) * C1911;
    gy[183] += std::sqrt(0.1875) * C149 + std::sqrt(0.1875) * C275 -
               std::sqrt(0.75) * C401 + std::sqrt(0.1875) * C905 +
               std::sqrt(0.1875) * C1031 - std::sqrt(0.75) * C1157 -
               std::sqrt(0.75) * C1661 - std::sqrt(0.75) * C1787 +
               std::sqrt(3.0) * C1913;
    gz[183] += std::sqrt(0.1875) * C151 + std::sqrt(0.1875) * C277 -
               std::sqrt(0.75) * C403 + std::sqrt(0.1875) * C907 +
               std::sqrt(0.1875) * C1033 - std::sqrt(0.75) * C1159 -
               std::sqrt(0.75) * C1663 - std::sqrt(0.75) * C1789 +
               std::sqrt(3.0) * C1915;
    gx[184] += std::sqrt(0.1875) * C154 + std::sqrt(0.1875) * C280 -
               std::sqrt(0.75) * C406 + std::sqrt(0.1875) * C910 +
               std::sqrt(0.1875) * C1036 - std::sqrt(0.75) * C1162 -
               std::sqrt(0.75) * C1666 - std::sqrt(0.75) * C1792 +
               std::sqrt(3.0) * C1918;
    gy[184] += std::sqrt(0.1875) * C156 + std::sqrt(0.1875) * C282 -
               std::sqrt(0.75) * C408 + std::sqrt(0.1875) * C912 +
               std::sqrt(0.1875) * C1038 - std::sqrt(0.75) * C1164 -
               std::sqrt(0.75) * C1668 - std::sqrt(0.75) * C1794 +
               std::sqrt(3.0) * C1920;
    gz[184] += std::sqrt(0.1875) * C158 + std::sqrt(0.1875) * C284 -
               std::sqrt(0.75) * C410 + std::sqrt(0.1875) * C914 +
               std::sqrt(0.1875) * C1040 - std::sqrt(0.75) * C1166 -
               std::sqrt(0.75) * C1670 - std::sqrt(0.75) * C1796 +
               std::sqrt(3.0) * C1922;
    gx[185] += std::sqrt(0.1875) * C161 + std::sqrt(0.1875) * C287 -
               std::sqrt(0.75) * C413 + std::sqrt(0.1875) * C917 +
               std::sqrt(0.1875) * C1043 - std::sqrt(0.75) * C1169 -
               std::sqrt(0.75) * C1673 - std::sqrt(0.75) * C1799 +
               std::sqrt(3.0) * C1925;
    gy[185] += std::sqrt(0.1875) * C163 + std::sqrt(0.1875) * C289 -
               std::sqrt(0.75) * C415 + std::sqrt(0.1875) * C919 +
               std::sqrt(0.1875) * C1045 - std::sqrt(0.75) * C1171 -
               std::sqrt(0.75) * C1675 - std::sqrt(0.75) * C1801 +
               std::sqrt(3.0) * C1927;
    gz[185] += std::sqrt(0.1875) * C165 + std::sqrt(0.1875) * C291 -
               std::sqrt(0.75) * C417 + std::sqrt(0.1875) * C921 +
               std::sqrt(0.1875) * C1047 - std::sqrt(0.75) * C1173 -
               std::sqrt(0.75) * C1677 - std::sqrt(0.75) * C1803 +
               std::sqrt(3.0) * C1929;
    gx[186] += -0.125 * C40 - 0.125 * C63 + 0.25 * C84 - 0.125 * C168 -
               0.125 * C189 + 0.25 * C210 + 0.25 * C294 + 0.25 * C315 -
               0.5 * C336 - 0.125 * C798 - 0.125 * C819 + 0.25 * C840 -
               0.125 * C924 - 0.125 * C945 + 0.25 * C966 + 0.25 * C1050 +
               0.25 * C1071 - 0.5 * C1092 + 0.25 * C1554 + 0.25 * C1575 -
               0.5 * C1596 + 0.25 * C1680 + 0.25 * C1701 - 0.5 * C1722 -
               0.5 * C1806 - 0.5 * C1827 + C1848;
    gy[186] += -0.125 * C44 - 0.125 * C65 + 0.25 * C86 - 0.125 * C170 -
               0.125 * C191 + 0.25 * C212 + 0.25 * C296 + 0.25 * C317 -
               0.5 * C338 - 0.125 * C800 - 0.125 * C821 + 0.25 * C842 -
               0.125 * C926 - 0.125 * C947 + 0.25 * C968 + 0.25 * C1052 +
               0.25 * C1073 - 0.5 * C1094 + 0.25 * C1556 + 0.25 * C1577 -
               0.5 * C1598 + 0.25 * C1682 + 0.25 * C1703 - 0.5 * C1724 -
               0.5 * C1808 - 0.5 * C1829 + C1850;
    gz[186] += -0.125 * C46 - 0.125 * C67 + 0.25 * C88 - 0.125 * C172 -
               0.125 * C193 + 0.25 * C214 + 0.25 * C298 + 0.25 * C319 -
               0.5 * C340 - 0.125 * C802 - 0.125 * C823 + 0.25 * C844 -
               0.125 * C928 - 0.125 * C949 + 0.25 * C970 + 0.25 * C1054 +
               0.25 * C1075 - 0.5 * C1096 + 0.25 * C1558 + 0.25 * C1579 -
               0.5 * C1600 + 0.25 * C1684 + 0.25 * C1705 - 0.5 * C1726 -
               0.5 * C1810 - 0.5 * C1831 + C1852;
    gx[187] += -0.125 * C49 - 0.125 * C70 + 0.25 * C91 - 0.125 * C175 -
               0.125 * C196 + 0.25 * C217 + 0.25 * C301 + 0.25 * C322 -
               0.5 * C343 - 0.125 * C805 - 0.125 * C826 + 0.25 * C847 -
               0.125 * C931 - 0.125 * C952 + 0.25 * C973 + 0.25 * C1057 +
               0.25 * C1078 - 0.5 * C1099 + 0.25 * C1561 + 0.25 * C1582 -
               0.5 * C1603 + 0.25 * C1687 + 0.25 * C1708 - 0.5 * C1729 -
               0.5 * C1813 - 0.5 * C1834 + C1855;
    gy[187] += -0.125 * C51 - 0.125 * C72 + 0.25 * C93 - 0.125 * C177 -
               0.125 * C198 + 0.25 * C219 + 0.25 * C303 + 0.25 * C324 -
               0.5 * C345 - 0.125 * C807 - 0.125 * C828 + 0.25 * C849 -
               0.125 * C933 - 0.125 * C954 + 0.25 * C975 + 0.25 * C1059 +
               0.25 * C1080 - 0.5 * C1101 + 0.25 * C1563 + 0.25 * C1584 -
               0.5 * C1605 + 0.25 * C1689 + 0.25 * C1710 - 0.5 * C1731 -
               0.5 * C1815 - 0.5 * C1836 + C1857;
    gz[187] += -0.125 * C53 - 0.125 * C74 + 0.25 * C95 - 0.125 * C179 -
               0.125 * C200 + 0.25 * C221 + 0.25 * C305 + 0.25 * C326 -
               0.5 * C347 - 0.125 * C809 - 0.125 * C830 + 0.25 * C851 -
               0.125 * C935 - 0.125 * C956 + 0.25 * C977 + 0.25 * C1061 +
               0.25 * C1082 - 0.5 * C1103 + 0.25 * C1565 + 0.25 * C1586 -
               0.5 * C1607 + 0.25 * C1691 + 0.25 * C1712 - 0.5 * C1733 -
               0.5 * C1817 - 0.5 * C1838 + C1859;
    gx[188] += -0.125 * C56 - 0.125 * C77 + 0.25 * C98 - 0.125 * C182 -
               0.125 * C203 + 0.25 * C224 + 0.25 * C308 + 0.25 * C329 -
               0.5 * C350 - 0.125 * C812 - 0.125 * C833 + 0.25 * C854 -
               0.125 * C938 - 0.125 * C959 + 0.25 * C980 + 0.25 * C1064 +
               0.25 * C1085 - 0.5 * C1106 + 0.25 * C1568 + 0.25 * C1589 -
               0.5 * C1610 + 0.25 * C1694 + 0.25 * C1715 - 0.5 * C1736 -
               0.5 * C1820 - 0.5 * C1841 + C1862;
    gy[188] += -0.125 * C58 - 0.125 * C79 + 0.25 * C100 - 0.125 * C184 -
               0.125 * C205 + 0.25 * C226 + 0.25 * C310 + 0.25 * C331 -
               0.5 * C352 - 0.125 * C814 - 0.125 * C835 + 0.25 * C856 -
               0.125 * C940 - 0.125 * C961 + 0.25 * C982 + 0.25 * C1066 +
               0.25 * C1087 - 0.5 * C1108 + 0.25 * C1570 + 0.25 * C1591 -
               0.5 * C1612 + 0.25 * C1696 + 0.25 * C1717 - 0.5 * C1738 -
               0.5 * C1822 - 0.5 * C1843 + C1864;
    gz[188] += -0.125 * C60 - 0.125 * C81 + 0.25 * C102 - 0.125 * C186 -
               0.125 * C207 + 0.25 * C228 + 0.25 * C312 + 0.25 * C333 -
               0.5 * C354 - 0.125 * C816 - 0.125 * C837 + 0.25 * C858 -
               0.125 * C942 - 0.125 * C963 + 0.25 * C984 + 0.25 * C1068 +
               0.25 * C1089 - 0.5 * C1110 + 0.25 * C1572 + 0.25 * C1593 -
               0.5 * C1614 + 0.25 * C1698 + 0.25 * C1719 - 0.5 * C1740 -
               0.5 * C1824 - 0.5 * C1845 + C1866;
    gx[189] += std::sqrt(0.1875) * C126 + std::sqrt(0.1875) * C252 -
               std::sqrt(0.75) * C378 + std::sqrt(0.1875) * C882 +
               std::sqrt(0.1875) * C1008 - std::sqrt(0.75) * C1134 -
               std::sqrt(0.75) * C1638 - std::sqrt(0.75) * C1764 +
               std::sqrt(3.0) * C1890;
    gy[189] += std::sqrt(0.1875) * C128 + std::sqrt(0.1875) * C254 -
               std::sqrt(0.75) * C380 + std::sqrt(0.1875) * C884 +
               std::sqrt(0.1875) * C1010 - std::sqrt(0.75) * C1136 -
               std::sqrt(0.75) * C1640 - std::sqrt(0.75) * C1766 +
               std::sqrt(3.0) * C1892;
    gz[189] += std::sqrt(0.1875) * C130 + std::sqrt(0.1875) * C256 -
               std::sqrt(0.75) * C382 + std::sqrt(0.1875) * C886 +
               std::sqrt(0.1875) * C1012 - std::sqrt(0.75) * C1138 -
               std::sqrt(0.75) * C1642 - std::sqrt(0.75) * C1768 +
               std::sqrt(3.0) * C1894;
    gx[190] += std::sqrt(0.1875) * C133 + std::sqrt(0.1875) * C259 -
               std::sqrt(0.75) * C385 + std::sqrt(0.1875) * C889 +
               std::sqrt(0.1875) * C1015 - std::sqrt(0.75) * C1141 -
               std::sqrt(0.75) * C1645 - std::sqrt(0.75) * C1771 +
               std::sqrt(3.0) * C1897;
    gy[190] += std::sqrt(0.1875) * C135 + std::sqrt(0.1875) * C261 -
               std::sqrt(0.75) * C387 + std::sqrt(0.1875) * C891 +
               std::sqrt(0.1875) * C1017 - std::sqrt(0.75) * C1143 -
               std::sqrt(0.75) * C1647 - std::sqrt(0.75) * C1773 +
               std::sqrt(3.0) * C1899;
    gz[190] += std::sqrt(0.1875) * C137 + std::sqrt(0.1875) * C263 -
               std::sqrt(0.75) * C389 + std::sqrt(0.1875) * C893 +
               std::sqrt(0.1875) * C1019 - std::sqrt(0.75) * C1145 -
               std::sqrt(0.75) * C1649 - std::sqrt(0.75) * C1775 +
               std::sqrt(3.0) * C1901;
    gx[191] += std::sqrt(0.1875) * C140 + std::sqrt(0.1875) * C266 -
               std::sqrt(0.75) * C392 + std::sqrt(0.1875) * C896 +
               std::sqrt(0.1875) * C1022 - std::sqrt(0.75) * C1148 -
               std::sqrt(0.75) * C1652 - std::sqrt(0.75) * C1778 +
               std::sqrt(3.0) * C1904;
    gy[191] += std::sqrt(0.1875) * C142 + std::sqrt(0.1875) * C268 -
               std::sqrt(0.75) * C394 + std::sqrt(0.1875) * C898 +
               std::sqrt(0.1875) * C1024 - std::sqrt(0.75) * C1150 -
               std::sqrt(0.75) * C1654 - std::sqrt(0.75) * C1780 +
               std::sqrt(3.0) * C1906;
    gz[191] += std::sqrt(0.1875) * C144 + std::sqrt(0.1875) * C270 -
               std::sqrt(0.75) * C396 + std::sqrt(0.1875) * C900 +
               std::sqrt(0.1875) * C1026 - std::sqrt(0.75) * C1152 -
               std::sqrt(0.75) * C1656 - std::sqrt(0.75) * C1782 +
               std::sqrt(3.0) * C1908;
    gx[192] += std::sqrt(0.046875) * C40 - std::sqrt(0.046875) * C63 +
               std::sqrt(0.046875) * C168 - std::sqrt(0.046875) * C189 -
               std::sqrt(0.1875) * C294 + std::sqrt(0.1875) * C315 +
               std::sqrt(0.046875) * C798 - std::sqrt(0.046875) * C819 +
               std::sqrt(0.046875) * C924 - std::sqrt(0.046875) * C945 -
               std::sqrt(0.1875) * C1050 + std::sqrt(0.1875) * C1071 -
               std::sqrt(0.1875) * C1554 + std::sqrt(0.1875) * C1575 -
               std::sqrt(0.1875) * C1680 + std::sqrt(0.1875) * C1701 +
               std::sqrt(0.75) * C1806 - std::sqrt(0.75) * C1827;
    gy[192] += std::sqrt(0.046875) * C44 - std::sqrt(0.046875) * C65 +
               std::sqrt(0.046875) * C170 - std::sqrt(0.046875) * C191 -
               std::sqrt(0.1875) * C296 + std::sqrt(0.1875) * C317 +
               std::sqrt(0.046875) * C800 - std::sqrt(0.046875) * C821 +
               std::sqrt(0.046875) * C926 - std::sqrt(0.046875) * C947 -
               std::sqrt(0.1875) * C1052 + std::sqrt(0.1875) * C1073 -
               std::sqrt(0.1875) * C1556 + std::sqrt(0.1875) * C1577 -
               std::sqrt(0.1875) * C1682 + std::sqrt(0.1875) * C1703 +
               std::sqrt(0.75) * C1808 - std::sqrt(0.75) * C1829;
    gz[192] += std::sqrt(0.046875) * C46 - std::sqrt(0.046875) * C67 +
               std::sqrt(0.046875) * C172 - std::sqrt(0.046875) * C193 -
               std::sqrt(0.1875) * C298 + std::sqrt(0.1875) * C319 +
               std::sqrt(0.046875) * C802 - std::sqrt(0.046875) * C823 +
               std::sqrt(0.046875) * C928 - std::sqrt(0.046875) * C949 -
               std::sqrt(0.1875) * C1054 + std::sqrt(0.1875) * C1075 -
               std::sqrt(0.1875) * C1558 + std::sqrt(0.1875) * C1579 -
               std::sqrt(0.1875) * C1684 + std::sqrt(0.1875) * C1705 +
               std::sqrt(0.75) * C1810 - std::sqrt(0.75) * C1831;
    gx[193] += std::sqrt(0.046875) * C49 - std::sqrt(0.046875) * C70 +
               std::sqrt(0.046875) * C175 - std::sqrt(0.046875) * C196 -
               std::sqrt(0.1875) * C301 + std::sqrt(0.1875) * C322 +
               std::sqrt(0.046875) * C805 - std::sqrt(0.046875) * C826 +
               std::sqrt(0.046875) * C931 - std::sqrt(0.046875) * C952 -
               std::sqrt(0.1875) * C1057 + std::sqrt(0.1875) * C1078 -
               std::sqrt(0.1875) * C1561 + std::sqrt(0.1875) * C1582 -
               std::sqrt(0.1875) * C1687 + std::sqrt(0.1875) * C1708 +
               std::sqrt(0.75) * C1813 - std::sqrt(0.75) * C1834;
    gy[193] += std::sqrt(0.046875) * C51 - std::sqrt(0.046875) * C72 +
               std::sqrt(0.046875) * C177 - std::sqrt(0.046875) * C198 -
               std::sqrt(0.1875) * C303 + std::sqrt(0.1875) * C324 +
               std::sqrt(0.046875) * C807 - std::sqrt(0.046875) * C828 +
               std::sqrt(0.046875) * C933 - std::sqrt(0.046875) * C954 -
               std::sqrt(0.1875) * C1059 + std::sqrt(0.1875) * C1080 -
               std::sqrt(0.1875) * C1563 + std::sqrt(0.1875) * C1584 -
               std::sqrt(0.1875) * C1689 + std::sqrt(0.1875) * C1710 +
               std::sqrt(0.75) * C1815 - std::sqrt(0.75) * C1836;
    gz[193] += std::sqrt(0.046875) * C53 - std::sqrt(0.046875) * C74 +
               std::sqrt(0.046875) * C179 - std::sqrt(0.046875) * C200 -
               std::sqrt(0.1875) * C305 + std::sqrt(0.1875) * C326 +
               std::sqrt(0.046875) * C809 - std::sqrt(0.046875) * C830 +
               std::sqrt(0.046875) * C935 - std::sqrt(0.046875) * C956 -
               std::sqrt(0.1875) * C1061 + std::sqrt(0.1875) * C1082 -
               std::sqrt(0.1875) * C1565 + std::sqrt(0.1875) * C1586 -
               std::sqrt(0.1875) * C1691 + std::sqrt(0.1875) * C1712 +
               std::sqrt(0.75) * C1817 - std::sqrt(0.75) * C1838;
    gx[194] += std::sqrt(0.046875) * C56 - std::sqrt(0.046875) * C77 +
               std::sqrt(0.046875) * C182 - std::sqrt(0.046875) * C203 -
               std::sqrt(0.1875) * C308 + std::sqrt(0.1875) * C329 +
               std::sqrt(0.046875) * C812 - std::sqrt(0.046875) * C833 +
               std::sqrt(0.046875) * C938 - std::sqrt(0.046875) * C959 -
               std::sqrt(0.1875) * C1064 + std::sqrt(0.1875) * C1085 -
               std::sqrt(0.1875) * C1568 + std::sqrt(0.1875) * C1589 -
               std::sqrt(0.1875) * C1694 + std::sqrt(0.1875) * C1715 +
               std::sqrt(0.75) * C1820 - std::sqrt(0.75) * C1841;
    gy[194] += std::sqrt(0.046875) * C58 - std::sqrt(0.046875) * C79 +
               std::sqrt(0.046875) * C184 - std::sqrt(0.046875) * C205 -
               std::sqrt(0.1875) * C310 + std::sqrt(0.1875) * C331 +
               std::sqrt(0.046875) * C814 - std::sqrt(0.046875) * C835 +
               std::sqrt(0.046875) * C940 - std::sqrt(0.046875) * C961 -
               std::sqrt(0.1875) * C1066 + std::sqrt(0.1875) * C1087 -
               std::sqrt(0.1875) * C1570 + std::sqrt(0.1875) * C1591 -
               std::sqrt(0.1875) * C1696 + std::sqrt(0.1875) * C1717 +
               std::sqrt(0.75) * C1822 - std::sqrt(0.75) * C1843;
    gz[194] += std::sqrt(0.046875) * C60 - std::sqrt(0.046875) * C81 +
               std::sqrt(0.046875) * C186 - std::sqrt(0.046875) * C207 -
               std::sqrt(0.1875) * C312 + std::sqrt(0.1875) * C333 +
               std::sqrt(0.046875) * C816 - std::sqrt(0.046875) * C837 +
               std::sqrt(0.046875) * C942 - std::sqrt(0.046875) * C963 -
               std::sqrt(0.1875) * C1068 + std::sqrt(0.1875) * C1089 -
               std::sqrt(0.1875) * C1572 + std::sqrt(0.1875) * C1593 -
               std::sqrt(0.1875) * C1698 + std::sqrt(0.1875) * C1719 +
               std::sqrt(0.75) * C1824 - std::sqrt(0.75) * C1845;
    gx[195] += std::sqrt(9.) * C2121 -
               (std::sqrt(2.25) * C1365 + std::sqrt(2.25) * C609);
    gy[195] += std::sqrt(9.) * C2123 -
               (std::sqrt(2.25) * C1367 + std::sqrt(2.25) * C611);
    gz[195] += std::sqrt(9.) * C2125 -
               (std::sqrt(2.25) * C1369 + std::sqrt(2.25) * C613);
    gx[196] += std::sqrt(9.) * C2128 -
               (std::sqrt(2.25) * C1372 + std::sqrt(2.25) * C616);
    gy[196] += std::sqrt(9.) * C2130 -
               (std::sqrt(2.25) * C1374 + std::sqrt(2.25) * C618);
    gz[196] += std::sqrt(9.) * C2132 -
               (std::sqrt(2.25) * C1376 + std::sqrt(2.25) * C620);
    gx[197] += std::sqrt(9.) * C2135 -
               (std::sqrt(2.25) * C1379 + std::sqrt(2.25) * C623);
    gy[197] += std::sqrt(9.) * C2137 -
               (std::sqrt(2.25) * C1381 + std::sqrt(2.25) * C625);
    gz[197] += std::sqrt(9.) * C2139 -
               (std::sqrt(2.25) * C1383 + std::sqrt(2.25) * C627);
    gx[198] += std::sqrt(9.) * C2163 -
               (std::sqrt(2.25) * C1407 + std::sqrt(2.25) * C651);
    gy[198] += std::sqrt(9.) * C2165 -
               (std::sqrt(2.25) * C1409 + std::sqrt(2.25) * C653);
    gz[198] += std::sqrt(9.) * C2167 -
               (std::sqrt(2.25) * C1411 + std::sqrt(2.25) * C655);
    gx[199] += std::sqrt(9.) * C2170 -
               (std::sqrt(2.25) * C1414 + std::sqrt(2.25) * C658);
    gy[199] += std::sqrt(9.) * C2172 -
               (std::sqrt(2.25) * C1416 + std::sqrt(2.25) * C660);
    gz[199] += std::sqrt(9.) * C2174 -
               (std::sqrt(2.25) * C1418 + std::sqrt(2.25) * C662);
    gx[200] += std::sqrt(9.) * C2177 -
               (std::sqrt(2.25) * C1421 + std::sqrt(2.25) * C665);
    gy[200] += std::sqrt(9.) * C2179 -
               (std::sqrt(2.25) * C1423 + std::sqrt(2.25) * C667);
    gz[200] += std::sqrt(9.) * C2181 -
               (std::sqrt(2.25) * C1425 + std::sqrt(2.25) * C669);
    gx[201] += std::sqrt(0.1875) * C546 + std::sqrt(0.1875) * C567 -
               std::sqrt(0.75) * C588 + std::sqrt(0.1875) * C1302 +
               std::sqrt(0.1875) * C1323 - std::sqrt(0.75) * C1344 -
               std::sqrt(0.75) * C2058 - std::sqrt(0.75) * C2079 +
               std::sqrt(3.0) * C2100;
    gy[201] += std::sqrt(0.1875) * C548 + std::sqrt(0.1875) * C569 -
               std::sqrt(0.75) * C590 + std::sqrt(0.1875) * C1304 +
               std::sqrt(0.1875) * C1325 - std::sqrt(0.75) * C1346 -
               std::sqrt(0.75) * C2060 - std::sqrt(0.75) * C2081 +
               std::sqrt(3.0) * C2102;
    gz[201] += std::sqrt(0.1875) * C550 + std::sqrt(0.1875) * C571 -
               std::sqrt(0.75) * C592 + std::sqrt(0.1875) * C1306 +
               std::sqrt(0.1875) * C1327 - std::sqrt(0.75) * C1348 -
               std::sqrt(0.75) * C2062 - std::sqrt(0.75) * C2083 +
               std::sqrt(3.0) * C2104;
    gx[202] += std::sqrt(0.1875) * C553 + std::sqrt(0.1875) * C574 -
               std::sqrt(0.75) * C595 + std::sqrt(0.1875) * C1309 +
               std::sqrt(0.1875) * C1330 - std::sqrt(0.75) * C1351 -
               std::sqrt(0.75) * C2065 - std::sqrt(0.75) * C2086 +
               std::sqrt(3.0) * C2107;
    gy[202] += std::sqrt(0.1875) * C555 + std::sqrt(0.1875) * C576 -
               std::sqrt(0.75) * C597 + std::sqrt(0.1875) * C1311 +
               std::sqrt(0.1875) * C1332 - std::sqrt(0.75) * C1353 -
               std::sqrt(0.75) * C2067 - std::sqrt(0.75) * C2088 +
               std::sqrt(3.0) * C2109;
    gz[202] += std::sqrt(0.1875) * C557 + std::sqrt(0.1875) * C578 -
               std::sqrt(0.75) * C599 + std::sqrt(0.1875) * C1313 +
               std::sqrt(0.1875) * C1334 - std::sqrt(0.75) * C1355 -
               std::sqrt(0.75) * C2069 - std::sqrt(0.75) * C2090 +
               std::sqrt(3.0) * C2111;
    gx[203] += std::sqrt(0.1875) * C560 + std::sqrt(0.1875) * C581 -
               std::sqrt(0.75) * C602 + std::sqrt(0.1875) * C1316 +
               std::sqrt(0.1875) * C1337 - std::sqrt(0.75) * C1358 -
               std::sqrt(0.75) * C2072 - std::sqrt(0.75) * C2093 +
               std::sqrt(3.0) * C2114;
    gy[203] += std::sqrt(0.1875) * C562 + std::sqrt(0.1875) * C583 -
               std::sqrt(0.75) * C604 + std::sqrt(0.1875) * C1318 +
               std::sqrt(0.1875) * C1339 - std::sqrt(0.75) * C1360 -
               std::sqrt(0.75) * C2074 - std::sqrt(0.75) * C2095 +
               std::sqrt(3.0) * C2116;
    gz[203] += std::sqrt(0.1875) * C564 + std::sqrt(0.1875) * C585 -
               std::sqrt(0.75) * C606 + std::sqrt(0.1875) * C1320 +
               std::sqrt(0.1875) * C1341 - std::sqrt(0.75) * C1362 -
               std::sqrt(0.75) * C2076 - std::sqrt(0.75) * C2097 +
               std::sqrt(3.0) * C2118;
    gx[204] += std::sqrt(9.) * C2142 -
               (std::sqrt(2.25) * C1386 + std::sqrt(2.25) * C630);
    gy[204] += std::sqrt(9.) * C2144 -
               (std::sqrt(2.25) * C1388 + std::sqrt(2.25) * C632);
    gz[204] += std::sqrt(9.) * C2146 -
               (std::sqrt(2.25) * C1390 + std::sqrt(2.25) * C634);
    gx[205] += std::sqrt(9.) * C2149 -
               (std::sqrt(2.25) * C1393 + std::sqrt(2.25) * C637);
    gy[205] += std::sqrt(9.) * C2151 -
               (std::sqrt(2.25) * C1395 + std::sqrt(2.25) * C639);
    gz[205] += std::sqrt(9.) * C2153 -
               (std::sqrt(2.25) * C1397 + std::sqrt(2.25) * C641);
    gx[206] += std::sqrt(9.) * C2156 -
               (std::sqrt(2.25) * C1400 + std::sqrt(2.25) * C644);
    gy[206] += std::sqrt(9.) * C2158 -
               (std::sqrt(2.25) * C1402 + std::sqrt(2.25) * C646);
    gz[206] += std::sqrt(9.) * C2160 -
               (std::sqrt(2.25) * C1404 + std::sqrt(2.25) * C648);
    gx[207] += std::sqrt(0.5625) * C567 - std::sqrt(0.5625) * C546 -
               std::sqrt(0.5625) * C1302 + std::sqrt(0.5625) * C1323 +
               std::sqrt(2.25) * C2058 - std::sqrt(2.25) * C2079;
    gy[207] += std::sqrt(0.5625) * C569 - std::sqrt(0.5625) * C548 -
               std::sqrt(0.5625) * C1304 + std::sqrt(0.5625) * C1325 +
               std::sqrt(2.25) * C2060 - std::sqrt(2.25) * C2081;
    gz[207] += std::sqrt(0.5625) * C571 - std::sqrt(0.5625) * C550 -
               std::sqrt(0.5625) * C1306 + std::sqrt(0.5625) * C1327 +
               std::sqrt(2.25) * C2062 - std::sqrt(2.25) * C2083;
    gx[208] += std::sqrt(0.5625) * C574 - std::sqrt(0.5625) * C553 -
               std::sqrt(0.5625) * C1309 + std::sqrt(0.5625) * C1330 +
               std::sqrt(2.25) * C2065 - std::sqrt(2.25) * C2086;
    gy[208] += std::sqrt(0.5625) * C576 - std::sqrt(0.5625) * C555 -
               std::sqrt(0.5625) * C1311 + std::sqrt(0.5625) * C1332 +
               std::sqrt(2.25) * C2067 - std::sqrt(2.25) * C2088;
    gz[208] += std::sqrt(0.5625) * C578 - std::sqrt(0.5625) * C557 -
               std::sqrt(0.5625) * C1313 + std::sqrt(0.5625) * C1334 +
               std::sqrt(2.25) * C2069 - std::sqrt(2.25) * C2090;
    gx[209] += std::sqrt(0.5625) * C581 - std::sqrt(0.5625) * C560 -
               std::sqrt(0.5625) * C1316 + std::sqrt(0.5625) * C1337 +
               std::sqrt(2.25) * C2072 - std::sqrt(2.25) * C2093;
    gy[209] += std::sqrt(0.5625) * C583 - std::sqrt(0.5625) * C562 -
               std::sqrt(0.5625) * C1318 + std::sqrt(0.5625) * C1339 +
               std::sqrt(2.25) * C2074 - std::sqrt(2.25) * C2095;
    gz[209] += std::sqrt(0.5625) * C585 - std::sqrt(0.5625) * C564 -
               std::sqrt(0.5625) * C1320 + std::sqrt(0.5625) * C1341 +
               std::sqrt(2.25) * C2076 - std::sqrt(2.25) * C2097;
    gx[210] += std::sqrt(0.5625) * C231 - std::sqrt(0.5625) * C105 -
               std::sqrt(0.5625) * C861 + std::sqrt(0.5625) * C987 +
               std::sqrt(2.25) * C1617 - std::sqrt(2.25) * C1743;
    gy[210] += std::sqrt(0.5625) * C233 - std::sqrt(0.5625) * C107 -
               std::sqrt(0.5625) * C863 + std::sqrt(0.5625) * C989 +
               std::sqrt(2.25) * C1619 - std::sqrt(2.25) * C1745;
    gz[210] += std::sqrt(0.5625) * C235 - std::sqrt(0.5625) * C109 -
               std::sqrt(0.5625) * C865 + std::sqrt(0.5625) * C991 +
               std::sqrt(2.25) * C1621 - std::sqrt(2.25) * C1747;
    gx[211] += std::sqrt(0.5625) * C238 - std::sqrt(0.5625) * C112 -
               std::sqrt(0.5625) * C868 + std::sqrt(0.5625) * C994 +
               std::sqrt(2.25) * C1624 - std::sqrt(2.25) * C1750;
    gy[211] += std::sqrt(0.5625) * C240 - std::sqrt(0.5625) * C114 -
               std::sqrt(0.5625) * C870 + std::sqrt(0.5625) * C996 +
               std::sqrt(2.25) * C1626 - std::sqrt(2.25) * C1752;
    gz[211] += std::sqrt(0.5625) * C242 - std::sqrt(0.5625) * C116 -
               std::sqrt(0.5625) * C872 + std::sqrt(0.5625) * C998 +
               std::sqrt(2.25) * C1628 - std::sqrt(2.25) * C1754;
    gx[212] += std::sqrt(0.5625) * C245 - std::sqrt(0.5625) * C119 -
               std::sqrt(0.5625) * C875 + std::sqrt(0.5625) * C1001 +
               std::sqrt(2.25) * C1631 - std::sqrt(2.25) * C1757;
    gy[212] += std::sqrt(0.5625) * C247 - std::sqrt(0.5625) * C121 -
               std::sqrt(0.5625) * C877 + std::sqrt(0.5625) * C1003 +
               std::sqrt(2.25) * C1633 - std::sqrt(2.25) * C1759;
    gz[212] += std::sqrt(0.5625) * C249 - std::sqrt(0.5625) * C123 -
               std::sqrt(0.5625) * C879 + std::sqrt(0.5625) * C1005 +
               std::sqrt(2.25) * C1635 - std::sqrt(2.25) * C1761;
    gx[213] += std::sqrt(0.5625) * C273 - std::sqrt(0.5625) * C147 -
               std::sqrt(0.5625) * C903 + std::sqrt(0.5625) * C1029 +
               std::sqrt(2.25) * C1659 - std::sqrt(2.25) * C1785;
    gy[213] += std::sqrt(0.5625) * C275 - std::sqrt(0.5625) * C149 -
               std::sqrt(0.5625) * C905 + std::sqrt(0.5625) * C1031 +
               std::sqrt(2.25) * C1661 - std::sqrt(2.25) * C1787;
    gz[213] += std::sqrt(0.5625) * C277 - std::sqrt(0.5625) * C151 -
               std::sqrt(0.5625) * C907 + std::sqrt(0.5625) * C1033 +
               std::sqrt(2.25) * C1663 - std::sqrt(2.25) * C1789;
    gx[214] += std::sqrt(0.5625) * C280 - std::sqrt(0.5625) * C154 -
               std::sqrt(0.5625) * C910 + std::sqrt(0.5625) * C1036 +
               std::sqrt(2.25) * C1666 - std::sqrt(2.25) * C1792;
    gy[214] += std::sqrt(0.5625) * C282 - std::sqrt(0.5625) * C156 -
               std::sqrt(0.5625) * C912 + std::sqrt(0.5625) * C1038 +
               std::sqrt(2.25) * C1668 - std::sqrt(2.25) * C1794;
    gz[214] += std::sqrt(0.5625) * C284 - std::sqrt(0.5625) * C158 -
               std::sqrt(0.5625) * C914 + std::sqrt(0.5625) * C1040 +
               std::sqrt(2.25) * C1670 - std::sqrt(2.25) * C1796;
    gx[215] += std::sqrt(0.5625) * C287 - std::sqrt(0.5625) * C161 -
               std::sqrt(0.5625) * C917 + std::sqrt(0.5625) * C1043 +
               std::sqrt(2.25) * C1673 - std::sqrt(2.25) * C1799;
    gy[215] += std::sqrt(0.5625) * C289 - std::sqrt(0.5625) * C163 -
               std::sqrt(0.5625) * C919 + std::sqrt(0.5625) * C1045 +
               std::sqrt(2.25) * C1675 - std::sqrt(2.25) * C1801;
    gz[215] += std::sqrt(0.5625) * C291 - std::sqrt(0.5625) * C165 -
               std::sqrt(0.5625) * C921 + std::sqrt(0.5625) * C1047 +
               std::sqrt(2.25) * C1677 - std::sqrt(2.25) * C1803;
    gx[216] += std::sqrt(0.046875) * C40 + std::sqrt(0.046875) * C63 -
               std::sqrt(0.1875) * C84 - std::sqrt(0.046875) * C168 -
               std::sqrt(0.046875) * C189 + std::sqrt(0.1875) * C210 +
               std::sqrt(0.046875) * C798 + std::sqrt(0.046875) * C819 -
               std::sqrt(0.1875) * C840 - std::sqrt(0.046875) * C924 -
               std::sqrt(0.046875) * C945 + std::sqrt(0.1875) * C966 -
               std::sqrt(0.1875) * C1554 - std::sqrt(0.1875) * C1575 +
               std::sqrt(0.75) * C1596 + std::sqrt(0.1875) * C1680 +
               std::sqrt(0.1875) * C1701 - std::sqrt(0.75) * C1722;
    gy[216] += std::sqrt(0.046875) * C44 + std::sqrt(0.046875) * C65 -
               std::sqrt(0.1875) * C86 - std::sqrt(0.046875) * C170 -
               std::sqrt(0.046875) * C191 + std::sqrt(0.1875) * C212 +
               std::sqrt(0.046875) * C800 + std::sqrt(0.046875) * C821 -
               std::sqrt(0.1875) * C842 - std::sqrt(0.046875) * C926 -
               std::sqrt(0.046875) * C947 + std::sqrt(0.1875) * C968 -
               std::sqrt(0.1875) * C1556 - std::sqrt(0.1875) * C1577 +
               std::sqrt(0.75) * C1598 + std::sqrt(0.1875) * C1682 +
               std::sqrt(0.1875) * C1703 - std::sqrt(0.75) * C1724;
    gz[216] += std::sqrt(0.046875) * C46 + std::sqrt(0.046875) * C67 -
               std::sqrt(0.1875) * C88 - std::sqrt(0.046875) * C172 -
               std::sqrt(0.046875) * C193 + std::sqrt(0.1875) * C214 +
               std::sqrt(0.046875) * C802 + std::sqrt(0.046875) * C823 -
               std::sqrt(0.1875) * C844 - std::sqrt(0.046875) * C928 -
               std::sqrt(0.046875) * C949 + std::sqrt(0.1875) * C970 -
               std::sqrt(0.1875) * C1558 - std::sqrt(0.1875) * C1579 +
               std::sqrt(0.75) * C1600 + std::sqrt(0.1875) * C1684 +
               std::sqrt(0.1875) * C1705 - std::sqrt(0.75) * C1726;
    gx[217] += std::sqrt(0.046875) * C49 + std::sqrt(0.046875) * C70 -
               std::sqrt(0.1875) * C91 - std::sqrt(0.046875) * C175 -
               std::sqrt(0.046875) * C196 + std::sqrt(0.1875) * C217 +
               std::sqrt(0.046875) * C805 + std::sqrt(0.046875) * C826 -
               std::sqrt(0.1875) * C847 - std::sqrt(0.046875) * C931 -
               std::sqrt(0.046875) * C952 + std::sqrt(0.1875) * C973 -
               std::sqrt(0.1875) * C1561 - std::sqrt(0.1875) * C1582 +
               std::sqrt(0.75) * C1603 + std::sqrt(0.1875) * C1687 +
               std::sqrt(0.1875) * C1708 - std::sqrt(0.75) * C1729;
    gy[217] += std::sqrt(0.046875) * C51 + std::sqrt(0.046875) * C72 -
               std::sqrt(0.1875) * C93 - std::sqrt(0.046875) * C177 -
               std::sqrt(0.046875) * C198 + std::sqrt(0.1875) * C219 +
               std::sqrt(0.046875) * C807 + std::sqrt(0.046875) * C828 -
               std::sqrt(0.1875) * C849 - std::sqrt(0.046875) * C933 -
               std::sqrt(0.046875) * C954 + std::sqrt(0.1875) * C975 -
               std::sqrt(0.1875) * C1563 - std::sqrt(0.1875) * C1584 +
               std::sqrt(0.75) * C1605 + std::sqrt(0.1875) * C1689 +
               std::sqrt(0.1875) * C1710 - std::sqrt(0.75) * C1731;
    gz[217] += std::sqrt(0.046875) * C53 + std::sqrt(0.046875) * C74 -
               std::sqrt(0.1875) * C95 - std::sqrt(0.046875) * C179 -
               std::sqrt(0.046875) * C200 + std::sqrt(0.1875) * C221 +
               std::sqrt(0.046875) * C809 + std::sqrt(0.046875) * C830 -
               std::sqrt(0.1875) * C851 - std::sqrt(0.046875) * C935 -
               std::sqrt(0.046875) * C956 + std::sqrt(0.1875) * C977 -
               std::sqrt(0.1875) * C1565 - std::sqrt(0.1875) * C1586 +
               std::sqrt(0.75) * C1607 + std::sqrt(0.1875) * C1691 +
               std::sqrt(0.1875) * C1712 - std::sqrt(0.75) * C1733;
    gx[218] += std::sqrt(0.046875) * C56 + std::sqrt(0.046875) * C77 -
               std::sqrt(0.1875) * C98 - std::sqrt(0.046875) * C182 -
               std::sqrt(0.046875) * C203 + std::sqrt(0.1875) * C224 +
               std::sqrt(0.046875) * C812 + std::sqrt(0.046875) * C833 -
               std::sqrt(0.1875) * C854 - std::sqrt(0.046875) * C938 -
               std::sqrt(0.046875) * C959 + std::sqrt(0.1875) * C980 -
               std::sqrt(0.1875) * C1568 - std::sqrt(0.1875) * C1589 +
               std::sqrt(0.75) * C1610 + std::sqrt(0.1875) * C1694 +
               std::sqrt(0.1875) * C1715 - std::sqrt(0.75) * C1736;
    gy[218] += std::sqrt(0.046875) * C58 + std::sqrt(0.046875) * C79 -
               std::sqrt(0.1875) * C100 - std::sqrt(0.046875) * C184 -
               std::sqrt(0.046875) * C205 + std::sqrt(0.1875) * C226 +
               std::sqrt(0.046875) * C814 + std::sqrt(0.046875) * C835 -
               std::sqrt(0.1875) * C856 - std::sqrt(0.046875) * C940 -
               std::sqrt(0.046875) * C961 + std::sqrt(0.1875) * C982 -
               std::sqrt(0.1875) * C1570 - std::sqrt(0.1875) * C1591 +
               std::sqrt(0.75) * C1612 + std::sqrt(0.1875) * C1696 +
               std::sqrt(0.1875) * C1717 - std::sqrt(0.75) * C1738;
    gz[218] += std::sqrt(0.046875) * C60 + std::sqrt(0.046875) * C81 -
               std::sqrt(0.1875) * C102 - std::sqrt(0.046875) * C186 -
               std::sqrt(0.046875) * C207 + std::sqrt(0.1875) * C228 +
               std::sqrt(0.046875) * C816 + std::sqrt(0.046875) * C837 -
               std::sqrt(0.1875) * C858 - std::sqrt(0.046875) * C942 -
               std::sqrt(0.046875) * C963 + std::sqrt(0.1875) * C984 -
               std::sqrt(0.1875) * C1572 - std::sqrt(0.1875) * C1593 +
               std::sqrt(0.75) * C1614 + std::sqrt(0.1875) * C1698 +
               std::sqrt(0.1875) * C1719 - std::sqrt(0.75) * C1740;
    gx[219] += std::sqrt(0.5625) * C252 - std::sqrt(0.5625) * C126 -
               std::sqrt(0.5625) * C882 + std::sqrt(0.5625) * C1008 +
               std::sqrt(2.25) * C1638 - std::sqrt(2.25) * C1764;
    gy[219] += std::sqrt(0.5625) * C254 - std::sqrt(0.5625) * C128 -
               std::sqrt(0.5625) * C884 + std::sqrt(0.5625) * C1010 +
               std::sqrt(2.25) * C1640 - std::sqrt(2.25) * C1766;
    gz[219] += std::sqrt(0.5625) * C256 - std::sqrt(0.5625) * C130 -
               std::sqrt(0.5625) * C886 + std::sqrt(0.5625) * C1012 +
               std::sqrt(2.25) * C1642 - std::sqrt(2.25) * C1768;
    gx[220] += std::sqrt(0.5625) * C259 - std::sqrt(0.5625) * C133 -
               std::sqrt(0.5625) * C889 + std::sqrt(0.5625) * C1015 +
               std::sqrt(2.25) * C1645 - std::sqrt(2.25) * C1771;
    gy[220] += std::sqrt(0.5625) * C261 - std::sqrt(0.5625) * C135 -
               std::sqrt(0.5625) * C891 + std::sqrt(0.5625) * C1017 +
               std::sqrt(2.25) * C1647 - std::sqrt(2.25) * C1773;
    gz[220] += std::sqrt(0.5625) * C263 - std::sqrt(0.5625) * C137 -
               std::sqrt(0.5625) * C893 + std::sqrt(0.5625) * C1019 +
               std::sqrt(2.25) * C1649 - std::sqrt(2.25) * C1775;
    gx[221] += std::sqrt(0.5625) * C266 - std::sqrt(0.5625) * C140 -
               std::sqrt(0.5625) * C896 + std::sqrt(0.5625) * C1022 +
               std::sqrt(2.25) * C1652 - std::sqrt(2.25) * C1778;
    gy[221] += std::sqrt(0.5625) * C268 - std::sqrt(0.5625) * C142 -
               std::sqrt(0.5625) * C898 + std::sqrt(0.5625) * C1024 +
               std::sqrt(2.25) * C1654 - std::sqrt(2.25) * C1780;
    gz[221] += std::sqrt(0.5625) * C270 - std::sqrt(0.5625) * C144 -
               std::sqrt(0.5625) * C900 + std::sqrt(0.5625) * C1026 +
               std::sqrt(2.25) * C1656 - std::sqrt(2.25) * C1782;
    gx[222] += std::sqrt(0.140625) * C63 - std::sqrt(0.140625) * C40 +
               std::sqrt(0.140625) * C168 - std::sqrt(0.140625) * C189 -
               std::sqrt(0.140625) * C798 + std::sqrt(0.140625) * C819 +
               std::sqrt(0.140625) * C924 - std::sqrt(0.140625) * C945 +
               std::sqrt(0.5625) * C1554 - std::sqrt(0.5625) * C1575 -
               std::sqrt(0.5625) * C1680 + std::sqrt(0.5625) * C1701;
    gy[222] += std::sqrt(0.140625) * C65 - std::sqrt(0.140625) * C44 +
               std::sqrt(0.140625) * C170 - std::sqrt(0.140625) * C191 -
               std::sqrt(0.140625) * C800 + std::sqrt(0.140625) * C821 +
               std::sqrt(0.140625) * C926 - std::sqrt(0.140625) * C947 +
               std::sqrt(0.5625) * C1556 - std::sqrt(0.5625) * C1577 -
               std::sqrt(0.5625) * C1682 + std::sqrt(0.5625) * C1703;
    gz[222] += std::sqrt(0.140625) * C67 - std::sqrt(0.140625) * C46 +
               std::sqrt(0.140625) * C172 - std::sqrt(0.140625) * C193 -
               std::sqrt(0.140625) * C802 + std::sqrt(0.140625) * C823 +
               std::sqrt(0.140625) * C928 - std::sqrt(0.140625) * C949 +
               std::sqrt(0.5625) * C1558 - std::sqrt(0.5625) * C1579 -
               std::sqrt(0.5625) * C1684 + std::sqrt(0.5625) * C1705;
    gx[223] += std::sqrt(0.140625) * C70 - std::sqrt(0.140625) * C49 +
               std::sqrt(0.140625) * C175 - std::sqrt(0.140625) * C196 -
               std::sqrt(0.140625) * C805 + std::sqrt(0.140625) * C826 +
               std::sqrt(0.140625) * C931 - std::sqrt(0.140625) * C952 +
               std::sqrt(0.5625) * C1561 - std::sqrt(0.5625) * C1582 -
               std::sqrt(0.5625) * C1687 + std::sqrt(0.5625) * C1708;
    gy[223] += std::sqrt(0.140625) * C72 - std::sqrt(0.140625) * C51 +
               std::sqrt(0.140625) * C177 - std::sqrt(0.140625) * C198 -
               std::sqrt(0.140625) * C807 + std::sqrt(0.140625) * C828 +
               std::sqrt(0.140625) * C933 - std::sqrt(0.140625) * C954 +
               std::sqrt(0.5625) * C1563 - std::sqrt(0.5625) * C1584 -
               std::sqrt(0.5625) * C1689 + std::sqrt(0.5625) * C1710;
    gz[223] += std::sqrt(0.140625) * C74 - std::sqrt(0.140625) * C53 +
               std::sqrt(0.140625) * C179 - std::sqrt(0.140625) * C200 -
               std::sqrt(0.140625) * C809 + std::sqrt(0.140625) * C830 +
               std::sqrt(0.140625) * C935 - std::sqrt(0.140625) * C956 +
               std::sqrt(0.5625) * C1565 - std::sqrt(0.5625) * C1586 -
               std::sqrt(0.5625) * C1691 + std::sqrt(0.5625) * C1712;
    gx[224] += std::sqrt(0.140625) * C77 - std::sqrt(0.140625) * C56 +
               std::sqrt(0.140625) * C182 - std::sqrt(0.140625) * C203 -
               std::sqrt(0.140625) * C812 + std::sqrt(0.140625) * C833 +
               std::sqrt(0.140625) * C938 - std::sqrt(0.140625) * C959 +
               std::sqrt(0.5625) * C1568 - std::sqrt(0.5625) * C1589 -
               std::sqrt(0.5625) * C1694 + std::sqrt(0.5625) * C1715;
    gy[224] += std::sqrt(0.140625) * C79 - std::sqrt(0.140625) * C58 +
               std::sqrt(0.140625) * C184 - std::sqrt(0.140625) * C205 -
               std::sqrt(0.140625) * C814 + std::sqrt(0.140625) * C835 +
               std::sqrt(0.140625) * C940 - std::sqrt(0.140625) * C961 +
               std::sqrt(0.5625) * C1570 - std::sqrt(0.5625) * C1591 -
               std::sqrt(0.5625) * C1696 + std::sqrt(0.5625) * C1717;
    gz[224] += std::sqrt(0.140625) * C81 - std::sqrt(0.140625) * C60 +
               std::sqrt(0.140625) * C186 - std::sqrt(0.140625) * C207 -
               std::sqrt(0.140625) * C816 + std::sqrt(0.140625) * C837 +
               std::sqrt(0.140625) * C942 - std::sqrt(0.140625) * C963 +
               std::sqrt(0.5625) * C1572 - std::sqrt(0.5625) * C1593 -
               std::sqrt(0.5625) * C1698 + std::sqrt(0.5625) * C1719;
    gx[225] += std::sqrt(27.) * C3507;
    gy[225] += std::sqrt(27.) * C3509;
    gz[225] += std::sqrt(27.) * C3511;
    gx[226] += std::sqrt(27.) * C3514;
    gy[226] += std::sqrt(27.) * C3516;
    gz[226] += std::sqrt(27.) * C3518;
    gx[227] += std::sqrt(27.) * C3521;
    gy[227] += std::sqrt(27.) * C3523;
    gz[227] += std::sqrt(27.) * C3525;
    gx[228] += std::sqrt(27.) * C3549;
    gy[228] += std::sqrt(27.) * C3551;
    gz[228] += std::sqrt(27.) * C3553;
    gx[229] += std::sqrt(27.) * C3556;
    gy[229] += std::sqrt(27.) * C3558;
    gz[229] += std::sqrt(27.) * C3560;
    gx[230] += std::sqrt(27.) * C3563;
    gy[230] += std::sqrt(27.) * C3565;
    gz[230] += std::sqrt(27.) * C3567;
    gx[231] += std::sqrt(9.) * C3486 -
               (std::sqrt(2.25) * C3465 + std::sqrt(2.25) * C3444);
    gy[231] += std::sqrt(9.) * C3488 -
               (std::sqrt(2.25) * C3467 + std::sqrt(2.25) * C3446);
    gz[231] += std::sqrt(9.) * C3490 -
               (std::sqrt(2.25) * C3469 + std::sqrt(2.25) * C3448);
    gx[232] += std::sqrt(9.) * C3493 -
               (std::sqrt(2.25) * C3472 + std::sqrt(2.25) * C3451);
    gy[232] += std::sqrt(9.) * C3495 -
               (std::sqrt(2.25) * C3474 + std::sqrt(2.25) * C3453);
    gz[232] += std::sqrt(9.) * C3497 -
               (std::sqrt(2.25) * C3476 + std::sqrt(2.25) * C3455);
    gx[233] += std::sqrt(9.) * C3500 -
               (std::sqrt(2.25) * C3479 + std::sqrt(2.25) * C3458);
    gy[233] += std::sqrt(9.) * C3502 -
               (std::sqrt(2.25) * C3481 + std::sqrt(2.25) * C3460);
    gz[233] += std::sqrt(9.) * C3504 -
               (std::sqrt(2.25) * C3483 + std::sqrt(2.25) * C3462);
    gx[234] += std::sqrt(27.) * C3528;
    gy[234] += std::sqrt(27.) * C3530;
    gz[234] += std::sqrt(27.) * C3532;
    gx[235] += std::sqrt(27.) * C3535;
    gy[235] += std::sqrt(27.) * C3537;
    gz[235] += std::sqrt(27.) * C3539;
    gx[236] += std::sqrt(27.) * C3542;
    gy[236] += std::sqrt(27.) * C3544;
    gz[236] += std::sqrt(27.) * C3546;
    gx[237] += std::sqrt(6.75) * C3444 - std::sqrt(6.75) * C3465;
    gy[237] += std::sqrt(6.75) * C3446 - std::sqrt(6.75) * C3467;
    gz[237] += std::sqrt(6.75) * C3448 - std::sqrt(6.75) * C3469;
    gx[238] += std::sqrt(6.75) * C3451 - std::sqrt(6.75) * C3472;
    gy[238] += std::sqrt(6.75) * C3453 - std::sqrt(6.75) * C3474;
    gz[238] += std::sqrt(6.75) * C3455 - std::sqrt(6.75) * C3476;
    gx[239] += std::sqrt(6.75) * C3458 - std::sqrt(6.75) * C3479;
    gy[239] += std::sqrt(6.75) * C3460 - std::sqrt(6.75) * C3481;
    gz[239] += std::sqrt(6.75) * C3462 - std::sqrt(6.75) * C3483;
    gx[240] += std::sqrt(27.) * C3759;
    gy[240] += std::sqrt(27.) * C3761;
    gz[240] += std::sqrt(27.) * C3763;
    gx[241] += std::sqrt(27.) * C3766;
    gy[241] += std::sqrt(27.) * C3768;
    gz[241] += std::sqrt(27.) * C3770;
    gx[242] += std::sqrt(27.) * C3773;
    gy[242] += std::sqrt(27.) * C3775;
    gz[242] += std::sqrt(27.) * C3777;
    gx[243] += std::sqrt(27.) * C3801;
    gy[243] += std::sqrt(27.) * C3803;
    gz[243] += std::sqrt(27.) * C3805;
    gx[244] += std::sqrt(27.) * C3808;
    gy[244] += std::sqrt(27.) * C3810;
    gz[244] += std::sqrt(27.) * C3812;
    gx[245] += std::sqrt(27.) * C3815;
    gy[245] += std::sqrt(27.) * C3817;
    gz[245] += std::sqrt(27.) * C3819;
    gx[246] += std::sqrt(9.) * C3738 -
               (std::sqrt(2.25) * C3717 + std::sqrt(2.25) * C3696);
    gy[246] += std::sqrt(9.) * C3740 -
               (std::sqrt(2.25) * C3719 + std::sqrt(2.25) * C3698);
    gz[246] += std::sqrt(9.) * C3742 -
               (std::sqrt(2.25) * C3721 + std::sqrt(2.25) * C3700);
    gx[247] += std::sqrt(9.) * C3745 -
               (std::sqrt(2.25) * C3724 + std::sqrt(2.25) * C3703);
    gy[247] += std::sqrt(9.) * C3747 -
               (std::sqrt(2.25) * C3726 + std::sqrt(2.25) * C3705);
    gz[247] += std::sqrt(9.) * C3749 -
               (std::sqrt(2.25) * C3728 + std::sqrt(2.25) * C3707);
    gx[248] += std::sqrt(9.) * C3752 -
               (std::sqrt(2.25) * C3731 + std::sqrt(2.25) * C3710);
    gy[248] += std::sqrt(9.) * C3754 -
               (std::sqrt(2.25) * C3733 + std::sqrt(2.25) * C3712);
    gz[248] += std::sqrt(9.) * C3756 -
               (std::sqrt(2.25) * C3735 + std::sqrt(2.25) * C3714);
    gx[249] += std::sqrt(27.) * C3780;
    gy[249] += std::sqrt(27.) * C3782;
    gz[249] += std::sqrt(27.) * C3784;
    gx[250] += std::sqrt(27.) * C3787;
    gy[250] += std::sqrt(27.) * C3789;
    gz[250] += std::sqrt(27.) * C3791;
    gx[251] += std::sqrt(27.) * C3794;
    gy[251] += std::sqrt(27.) * C3796;
    gz[251] += std::sqrt(27.) * C3798;
    gx[252] += std::sqrt(6.75) * C3696 - std::sqrt(6.75) * C3717;
    gy[252] += std::sqrt(6.75) * C3698 - std::sqrt(6.75) * C3719;
    gz[252] += std::sqrt(6.75) * C3700 - std::sqrt(6.75) * C3721;
    gx[253] += std::sqrt(6.75) * C3703 - std::sqrt(6.75) * C3724;
    gy[253] += std::sqrt(6.75) * C3705 - std::sqrt(6.75) * C3726;
    gz[253] += std::sqrt(6.75) * C3707 - std::sqrt(6.75) * C3728;
    gx[254] += std::sqrt(6.75) * C3710 - std::sqrt(6.75) * C3731;
    gy[254] += std::sqrt(6.75) * C3712 - std::sqrt(6.75) * C3733;
    gz[254] += std::sqrt(6.75) * C3714 - std::sqrt(6.75) * C3735;
    gx[255] += std::sqrt(9.) * C3381 -
               (std::sqrt(2.25) * C3255 + std::sqrt(2.25) * C3129);
    gy[255] += std::sqrt(9.) * C3383 -
               (std::sqrt(2.25) * C3257 + std::sqrt(2.25) * C3131);
    gz[255] += std::sqrt(9.) * C3385 -
               (std::sqrt(2.25) * C3259 + std::sqrt(2.25) * C3133);
    gx[256] += std::sqrt(9.) * C3388 -
               (std::sqrt(2.25) * C3262 + std::sqrt(2.25) * C3136);
    gy[256] += std::sqrt(9.) * C3390 -
               (std::sqrt(2.25) * C3264 + std::sqrt(2.25) * C3138);
    gz[256] += std::sqrt(9.) * C3392 -
               (std::sqrt(2.25) * C3266 + std::sqrt(2.25) * C3140);
    gx[257] += std::sqrt(9.) * C3395 -
               (std::sqrt(2.25) * C3269 + std::sqrt(2.25) * C3143);
    gy[257] += std::sqrt(9.) * C3397 -
               (std::sqrt(2.25) * C3271 + std::sqrt(2.25) * C3145);
    gz[257] += std::sqrt(9.) * C3399 -
               (std::sqrt(2.25) * C3273 + std::sqrt(2.25) * C3147);
    gx[258] += std::sqrt(9.) * C3423 -
               (std::sqrt(2.25) * C3297 + std::sqrt(2.25) * C3171);
    gy[258] += std::sqrt(9.) * C3425 -
               (std::sqrt(2.25) * C3299 + std::sqrt(2.25) * C3173);
    gz[258] += std::sqrt(9.) * C3427 -
               (std::sqrt(2.25) * C3301 + std::sqrt(2.25) * C3175);
    gx[259] += std::sqrt(9.) * C3430 -
               (std::sqrt(2.25) * C3304 + std::sqrt(2.25) * C3178);
    gy[259] += std::sqrt(9.) * C3432 -
               (std::sqrt(2.25) * C3306 + std::sqrt(2.25) * C3180);
    gz[259] += std::sqrt(9.) * C3434 -
               (std::sqrt(2.25) * C3308 + std::sqrt(2.25) * C3182);
    gx[260] += std::sqrt(9.) * C3437 -
               (std::sqrt(2.25) * C3311 + std::sqrt(2.25) * C3185);
    gy[260] += std::sqrt(9.) * C3439 -
               (std::sqrt(2.25) * C3313 + std::sqrt(2.25) * C3187);
    gz[260] += std::sqrt(9.) * C3441 -
               (std::sqrt(2.25) * C3315 + std::sqrt(2.25) * C3189);
    gx[261] += std::sqrt(0.1875) * C3066 + std::sqrt(0.1875) * C3087 -
               std::sqrt(0.75) * C3108 + std::sqrt(0.1875) * C3192 +
               std::sqrt(0.1875) * C3213 - std::sqrt(0.75) * C3234 -
               std::sqrt(0.75) * C3318 - std::sqrt(0.75) * C3339 +
               std::sqrt(3.0) * C3360;
    gy[261] += std::sqrt(0.1875) * C3068 + std::sqrt(0.1875) * C3089 -
               std::sqrt(0.75) * C3110 + std::sqrt(0.1875) * C3194 +
               std::sqrt(0.1875) * C3215 - std::sqrt(0.75) * C3236 -
               std::sqrt(0.75) * C3320 - std::sqrt(0.75) * C3341 +
               std::sqrt(3.0) * C3362;
    gz[261] += std::sqrt(0.1875) * C3070 + std::sqrt(0.1875) * C3091 -
               std::sqrt(0.75) * C3112 + std::sqrt(0.1875) * C3196 +
               std::sqrt(0.1875) * C3217 - std::sqrt(0.75) * C3238 -
               std::sqrt(0.75) * C3322 - std::sqrt(0.75) * C3343 +
               std::sqrt(3.0) * C3364;
    gx[262] += std::sqrt(0.1875) * C3073 + std::sqrt(0.1875) * C3094 -
               std::sqrt(0.75) * C3115 + std::sqrt(0.1875) * C3199 +
               std::sqrt(0.1875) * C3220 - std::sqrt(0.75) * C3241 -
               std::sqrt(0.75) * C3325 - std::sqrt(0.75) * C3346 +
               std::sqrt(3.0) * C3367;
    gy[262] += std::sqrt(0.1875) * C3075 + std::sqrt(0.1875) * C3096 -
               std::sqrt(0.75) * C3117 + std::sqrt(0.1875) * C3201 +
               std::sqrt(0.1875) * C3222 - std::sqrt(0.75) * C3243 -
               std::sqrt(0.75) * C3327 - std::sqrt(0.75) * C3348 +
               std::sqrt(3.0) * C3369;
    gz[262] += std::sqrt(0.1875) * C3077 + std::sqrt(0.1875) * C3098 -
               std::sqrt(0.75) * C3119 + std::sqrt(0.1875) * C3203 +
               std::sqrt(0.1875) * C3224 - std::sqrt(0.75) * C3245 -
               std::sqrt(0.75) * C3329 - std::sqrt(0.75) * C3350 +
               std::sqrt(3.0) * C3371;
    gx[263] += std::sqrt(0.1875) * C3080 + std::sqrt(0.1875) * C3101 -
               std::sqrt(0.75) * C3122 + std::sqrt(0.1875) * C3206 +
               std::sqrt(0.1875) * C3227 - std::sqrt(0.75) * C3248 -
               std::sqrt(0.75) * C3332 - std::sqrt(0.75) * C3353 +
               std::sqrt(3.0) * C3374;
    gy[263] += std::sqrt(0.1875) * C3082 + std::sqrt(0.1875) * C3103 -
               std::sqrt(0.75) * C3124 + std::sqrt(0.1875) * C3208 +
               std::sqrt(0.1875) * C3229 - std::sqrt(0.75) * C3250 -
               std::sqrt(0.75) * C3334 - std::sqrt(0.75) * C3355 +
               std::sqrt(3.0) * C3376;
    gz[263] += std::sqrt(0.1875) * C3084 + std::sqrt(0.1875) * C3105 -
               std::sqrt(0.75) * C3126 + std::sqrt(0.1875) * C3210 +
               std::sqrt(0.1875) * C3231 - std::sqrt(0.75) * C3252 -
               std::sqrt(0.75) * C3336 - std::sqrt(0.75) * C3357 +
               std::sqrt(3.0) * C3378;
    gx[264] += std::sqrt(9.) * C3402 -
               (std::sqrt(2.25) * C3276 + std::sqrt(2.25) * C3150);
    gy[264] += std::sqrt(9.) * C3404 -
               (std::sqrt(2.25) * C3278 + std::sqrt(2.25) * C3152);
    gz[264] += std::sqrt(9.) * C3406 -
               (std::sqrt(2.25) * C3280 + std::sqrt(2.25) * C3154);
    gx[265] += std::sqrt(9.) * C3409 -
               (std::sqrt(2.25) * C3283 + std::sqrt(2.25) * C3157);
    gy[265] += std::sqrt(9.) * C3411 -
               (std::sqrt(2.25) * C3285 + std::sqrt(2.25) * C3159);
    gz[265] += std::sqrt(9.) * C3413 -
               (std::sqrt(2.25) * C3287 + std::sqrt(2.25) * C3161);
    gx[266] += std::sqrt(9.) * C3416 -
               (std::sqrt(2.25) * C3290 + std::sqrt(2.25) * C3164);
    gy[266] += std::sqrt(9.) * C3418 -
               (std::sqrt(2.25) * C3292 + std::sqrt(2.25) * C3166);
    gz[266] += std::sqrt(9.) * C3420 -
               (std::sqrt(2.25) * C3294 + std::sqrt(2.25) * C3168);
    gx[267] += std::sqrt(0.5625) * C3087 - std::sqrt(0.5625) * C3066 -
               std::sqrt(0.5625) * C3192 + std::sqrt(0.5625) * C3213 +
               std::sqrt(2.25) * C3318 - std::sqrt(2.25) * C3339;
    gy[267] += std::sqrt(0.5625) * C3089 - std::sqrt(0.5625) * C3068 -
               std::sqrt(0.5625) * C3194 + std::sqrt(0.5625) * C3215 +
               std::sqrt(2.25) * C3320 - std::sqrt(2.25) * C3341;
    gz[267] += std::sqrt(0.5625) * C3091 - std::sqrt(0.5625) * C3070 -
               std::sqrt(0.5625) * C3196 + std::sqrt(0.5625) * C3217 +
               std::sqrt(2.25) * C3322 - std::sqrt(2.25) * C3343;
    gx[268] += std::sqrt(0.5625) * C3094 - std::sqrt(0.5625) * C3073 -
               std::sqrt(0.5625) * C3199 + std::sqrt(0.5625) * C3220 +
               std::sqrt(2.25) * C3325 - std::sqrt(2.25) * C3346;
    gy[268] += std::sqrt(0.5625) * C3096 - std::sqrt(0.5625) * C3075 -
               std::sqrt(0.5625) * C3201 + std::sqrt(0.5625) * C3222 +
               std::sqrt(2.25) * C3327 - std::sqrt(2.25) * C3348;
    gz[268] += std::sqrt(0.5625) * C3098 - std::sqrt(0.5625) * C3077 -
               std::sqrt(0.5625) * C3203 + std::sqrt(0.5625) * C3224 +
               std::sqrt(2.25) * C3329 - std::sqrt(2.25) * C3350;
    gx[269] += std::sqrt(0.5625) * C3101 - std::sqrt(0.5625) * C3080 -
               std::sqrt(0.5625) * C3206 + std::sqrt(0.5625) * C3227 +
               std::sqrt(2.25) * C3332 - std::sqrt(2.25) * C3353;
    gy[269] += std::sqrt(0.5625) * C3103 - std::sqrt(0.5625) * C3082 -
               std::sqrt(0.5625) * C3208 + std::sqrt(0.5625) * C3229 +
               std::sqrt(2.25) * C3334 - std::sqrt(2.25) * C3355;
    gz[269] += std::sqrt(0.5625) * C3105 - std::sqrt(0.5625) * C3084 -
               std::sqrt(0.5625) * C3210 + std::sqrt(0.5625) * C3231 +
               std::sqrt(2.25) * C3336 - std::sqrt(2.25) * C3357;
    gx[270] += std::sqrt(27.) * C3633;
    gy[270] += std::sqrt(27.) * C3635;
    gz[270] += std::sqrt(27.) * C3637;
    gx[271] += std::sqrt(27.) * C3640;
    gy[271] += std::sqrt(27.) * C3642;
    gz[271] += std::sqrt(27.) * C3644;
    gx[272] += std::sqrt(27.) * C3647;
    gy[272] += std::sqrt(27.) * C3649;
    gz[272] += std::sqrt(27.) * C3651;
    gx[273] += std::sqrt(27.) * C3675;
    gy[273] += std::sqrt(27.) * C3677;
    gz[273] += std::sqrt(27.) * C3679;
    gx[274] += std::sqrt(27.) * C3682;
    gy[274] += std::sqrt(27.) * C3684;
    gz[274] += std::sqrt(27.) * C3686;
    gx[275] += std::sqrt(27.) * C3689;
    gy[275] += std::sqrt(27.) * C3691;
    gz[275] += std::sqrt(27.) * C3693;
    gx[276] += std::sqrt(9.) * C3612 -
               (std::sqrt(2.25) * C3591 + std::sqrt(2.25) * C3570);
    gy[276] += std::sqrt(9.) * C3614 -
               (std::sqrt(2.25) * C3593 + std::sqrt(2.25) * C3572);
    gz[276] += std::sqrt(9.) * C3616 -
               (std::sqrt(2.25) * C3595 + std::sqrt(2.25) * C3574);
    gx[277] += std::sqrt(9.) * C3619 -
               (std::sqrt(2.25) * C3598 + std::sqrt(2.25) * C3577);
    gy[277] += std::sqrt(9.) * C3621 -
               (std::sqrt(2.25) * C3600 + std::sqrt(2.25) * C3579);
    gz[277] += std::sqrt(9.) * C3623 -
               (std::sqrt(2.25) * C3602 + std::sqrt(2.25) * C3581);
    gx[278] += std::sqrt(9.) * C3626 -
               (std::sqrt(2.25) * C3605 + std::sqrt(2.25) * C3584);
    gy[278] += std::sqrt(9.) * C3628 -
               (std::sqrt(2.25) * C3607 + std::sqrt(2.25) * C3586);
    gz[278] += std::sqrt(9.) * C3630 -
               (std::sqrt(2.25) * C3609 + std::sqrt(2.25) * C3588);
    gx[279] += std::sqrt(27.) * C3654;
    gy[279] += std::sqrt(27.) * C3656;
    gz[279] += std::sqrt(27.) * C3658;
    gx[280] += std::sqrt(27.) * C3661;
    gy[280] += std::sqrt(27.) * C3663;
    gz[280] += std::sqrt(27.) * C3665;
    gx[281] += std::sqrt(27.) * C3668;
    gy[281] += std::sqrt(27.) * C3670;
    gz[281] += std::sqrt(27.) * C3672;
    gx[282] += std::sqrt(6.75) * C3570 - std::sqrt(6.75) * C3591;
    gy[282] += std::sqrt(6.75) * C3572 - std::sqrt(6.75) * C3593;
    gz[282] += std::sqrt(6.75) * C3574 - std::sqrt(6.75) * C3595;
    gx[283] += std::sqrt(6.75) * C3577 - std::sqrt(6.75) * C3598;
    gy[283] += std::sqrt(6.75) * C3579 - std::sqrt(6.75) * C3600;
    gz[283] += std::sqrt(6.75) * C3581 - std::sqrt(6.75) * C3602;
    gx[284] += std::sqrt(6.75) * C3584 - std::sqrt(6.75) * C3605;
    gy[284] += std::sqrt(6.75) * C3586 - std::sqrt(6.75) * C3607;
    gz[284] += std::sqrt(6.75) * C3588 - std::sqrt(6.75) * C3609;
    gx[285] += std::sqrt(6.75) * C3129 - std::sqrt(6.75) * C3255;
    gy[285] += std::sqrt(6.75) * C3131 - std::sqrt(6.75) * C3257;
    gz[285] += std::sqrt(6.75) * C3133 - std::sqrt(6.75) * C3259;
    gx[286] += std::sqrt(6.75) * C3136 - std::sqrt(6.75) * C3262;
    gy[286] += std::sqrt(6.75) * C3138 - std::sqrt(6.75) * C3264;
    gz[286] += std::sqrt(6.75) * C3140 - std::sqrt(6.75) * C3266;
    gx[287] += std::sqrt(6.75) * C3143 - std::sqrt(6.75) * C3269;
    gy[287] += std::sqrt(6.75) * C3145 - std::sqrt(6.75) * C3271;
    gz[287] += std::sqrt(6.75) * C3147 - std::sqrt(6.75) * C3273;
    gx[288] += std::sqrt(6.75) * C3171 - std::sqrt(6.75) * C3297;
    gy[288] += std::sqrt(6.75) * C3173 - std::sqrt(6.75) * C3299;
    gz[288] += std::sqrt(6.75) * C3175 - std::sqrt(6.75) * C3301;
    gx[289] += std::sqrt(6.75) * C3178 - std::sqrt(6.75) * C3304;
    gy[289] += std::sqrt(6.75) * C3180 - std::sqrt(6.75) * C3306;
    gz[289] += std::sqrt(6.75) * C3182 - std::sqrt(6.75) * C3308;
    gx[290] += std::sqrt(6.75) * C3185 - std::sqrt(6.75) * C3311;
    gy[290] += std::sqrt(6.75) * C3187 - std::sqrt(6.75) * C3313;
    gz[290] += std::sqrt(6.75) * C3189 - std::sqrt(6.75) * C3315;
    gx[291] += std::sqrt(2.25) * C3108 -
               (std::sqrt(0.5625) * C3087 + std::sqrt(0.5625) * C3066) +
               std::sqrt(0.5625) * C3192 + std::sqrt(0.5625) * C3213 -
               std::sqrt(2.25) * C3234;
    gy[291] += std::sqrt(2.25) * C3110 -
               (std::sqrt(0.5625) * C3089 + std::sqrt(0.5625) * C3068) +
               std::sqrt(0.5625) * C3194 + std::sqrt(0.5625) * C3215 -
               std::sqrt(2.25) * C3236;
    gz[291] += std::sqrt(2.25) * C3112 -
               (std::sqrt(0.5625) * C3091 + std::sqrt(0.5625) * C3070) +
               std::sqrt(0.5625) * C3196 + std::sqrt(0.5625) * C3217 -
               std::sqrt(2.25) * C3238;
    gx[292] += std::sqrt(2.25) * C3115 -
               (std::sqrt(0.5625) * C3094 + std::sqrt(0.5625) * C3073) +
               std::sqrt(0.5625) * C3199 + std::sqrt(0.5625) * C3220 -
               std::sqrt(2.25) * C3241;
    gy[292] += std::sqrt(2.25) * C3117 -
               (std::sqrt(0.5625) * C3096 + std::sqrt(0.5625) * C3075) +
               std::sqrt(0.5625) * C3201 + std::sqrt(0.5625) * C3222 -
               std::sqrt(2.25) * C3243;
    gz[292] += std::sqrt(2.25) * C3119 -
               (std::sqrt(0.5625) * C3098 + std::sqrt(0.5625) * C3077) +
               std::sqrt(0.5625) * C3203 + std::sqrt(0.5625) * C3224 -
               std::sqrt(2.25) * C3245;
    gx[293] += std::sqrt(2.25) * C3122 -
               (std::sqrt(0.5625) * C3101 + std::sqrt(0.5625) * C3080) +
               std::sqrt(0.5625) * C3206 + std::sqrt(0.5625) * C3227 -
               std::sqrt(2.25) * C3248;
    gy[293] += std::sqrt(2.25) * C3124 -
               (std::sqrt(0.5625) * C3103 + std::sqrt(0.5625) * C3082) +
               std::sqrt(0.5625) * C3208 + std::sqrt(0.5625) * C3229 -
               std::sqrt(2.25) * C3250;
    gz[293] += std::sqrt(2.25) * C3126 -
               (std::sqrt(0.5625) * C3105 + std::sqrt(0.5625) * C3084) +
               std::sqrt(0.5625) * C3210 + std::sqrt(0.5625) * C3231 -
               std::sqrt(2.25) * C3252;
    gx[294] += std::sqrt(6.75) * C3150 - std::sqrt(6.75) * C3276;
    gy[294] += std::sqrt(6.75) * C3152 - std::sqrt(6.75) * C3278;
    gz[294] += std::sqrt(6.75) * C3154 - std::sqrt(6.75) * C3280;
    gx[295] += std::sqrt(6.75) * C3157 - std::sqrt(6.75) * C3283;
    gy[295] += std::sqrt(6.75) * C3159 - std::sqrt(6.75) * C3285;
    gz[295] += std::sqrt(6.75) * C3161 - std::sqrt(6.75) * C3287;
    gx[296] += std::sqrt(6.75) * C3164 - std::sqrt(6.75) * C3290;
    gy[296] += std::sqrt(6.75) * C3166 - std::sqrt(6.75) * C3292;
    gz[296] += std::sqrt(6.75) * C3168 - std::sqrt(6.75) * C3294;
    gx[297] += std::sqrt(1.6875) * C3066 - std::sqrt(1.6875) * C3087 -
               std::sqrt(1.6875) * C3192 + std::sqrt(1.6875) * C3213;
    gy[297] += std::sqrt(1.6875) * C3068 - std::sqrt(1.6875) * C3089 -
               std::sqrt(1.6875) * C3194 + std::sqrt(1.6875) * C3215;
    gz[297] += std::sqrt(1.6875) * C3070 - std::sqrt(1.6875) * C3091 -
               std::sqrt(1.6875) * C3196 + std::sqrt(1.6875) * C3217;
    gx[298] += std::sqrt(1.6875) * C3073 - std::sqrt(1.6875) * C3094 -
               std::sqrt(1.6875) * C3199 + std::sqrt(1.6875) * C3220;
    gy[298] += std::sqrt(1.6875) * C3075 - std::sqrt(1.6875) * C3096 -
               std::sqrt(1.6875) * C3201 + std::sqrt(1.6875) * C3222;
    gz[298] += std::sqrt(1.6875) * C3077 - std::sqrt(1.6875) * C3098 -
               std::sqrt(1.6875) * C3203 + std::sqrt(1.6875) * C3224;
    gx[299] += std::sqrt(1.6875) * C3080 - std::sqrt(1.6875) * C3101 -
               std::sqrt(1.6875) * C3206 + std::sqrt(1.6875) * C3227;
    gy[299] += std::sqrt(1.6875) * C3082 - std::sqrt(1.6875) * C3103 -
               std::sqrt(1.6875) * C3208 + std::sqrt(1.6875) * C3229;
    gz[299] += std::sqrt(1.6875) * C3084 - std::sqrt(1.6875) * C3105 -
               std::sqrt(1.6875) * C3210 + std::sqrt(1.6875) * C3231;
    gx[300] += std::sqrt(6.75) * C483 - std::sqrt(6.75) * C1239;
    gy[300] += std::sqrt(6.75) * C485 - std::sqrt(6.75) * C1241;
    gz[300] += std::sqrt(6.75) * C487 - std::sqrt(6.75) * C1243;
    gx[301] += std::sqrt(6.75) * C490 - std::sqrt(6.75) * C1246;
    gy[301] += std::sqrt(6.75) * C492 - std::sqrt(6.75) * C1248;
    gz[301] += std::sqrt(6.75) * C494 - std::sqrt(6.75) * C1250;
    gx[302] += std::sqrt(6.75) * C497 - std::sqrt(6.75) * C1253;
    gy[302] += std::sqrt(6.75) * C499 - std::sqrt(6.75) * C1255;
    gz[302] += std::sqrt(6.75) * C501 - std::sqrt(6.75) * C1257;
    gx[303] += std::sqrt(6.75) * C525 - std::sqrt(6.75) * C1281;
    gy[303] += std::sqrt(6.75) * C527 - std::sqrt(6.75) * C1283;
    gz[303] += std::sqrt(6.75) * C529 - std::sqrt(6.75) * C1285;
    gx[304] += std::sqrt(6.75) * C532 - std::sqrt(6.75) * C1288;
    gy[304] += std::sqrt(6.75) * C534 - std::sqrt(6.75) * C1290;
    gz[304] += std::sqrt(6.75) * C536 - std::sqrt(6.75) * C1292;
    gx[305] += std::sqrt(6.75) * C539 - std::sqrt(6.75) * C1295;
    gy[305] += std::sqrt(6.75) * C541 - std::sqrt(6.75) * C1297;
    gz[305] += std::sqrt(6.75) * C543 - std::sqrt(6.75) * C1299;
    gx[306] += std::sqrt(2.25) * C462 -
               (std::sqrt(0.5625) * C441 + std::sqrt(0.5625) * C420) +
               std::sqrt(0.5625) * C1176 + std::sqrt(0.5625) * C1197 -
               std::sqrt(2.25) * C1218;
    gy[306] += std::sqrt(2.25) * C464 -
               (std::sqrt(0.5625) * C443 + std::sqrt(0.5625) * C422) +
               std::sqrt(0.5625) * C1178 + std::sqrt(0.5625) * C1199 -
               std::sqrt(2.25) * C1220;
    gz[306] += std::sqrt(2.25) * C466 -
               (std::sqrt(0.5625) * C445 + std::sqrt(0.5625) * C424) +
               std::sqrt(0.5625) * C1180 + std::sqrt(0.5625) * C1201 -
               std::sqrt(2.25) * C1222;
    gx[307] += std::sqrt(2.25) * C469 -
               (std::sqrt(0.5625) * C448 + std::sqrt(0.5625) * C427) +
               std::sqrt(0.5625) * C1183 + std::sqrt(0.5625) * C1204 -
               std::sqrt(2.25) * C1225;
    gy[307] += std::sqrt(2.25) * C471 -
               (std::sqrt(0.5625) * C450 + std::sqrt(0.5625) * C429) +
               std::sqrt(0.5625) * C1185 + std::sqrt(0.5625) * C1206 -
               std::sqrt(2.25) * C1227;
    gz[307] += std::sqrt(2.25) * C473 -
               (std::sqrt(0.5625) * C452 + std::sqrt(0.5625) * C431) +
               std::sqrt(0.5625) * C1187 + std::sqrt(0.5625) * C1208 -
               std::sqrt(2.25) * C1229;
    gx[308] += std::sqrt(2.25) * C476 -
               (std::sqrt(0.5625) * C455 + std::sqrt(0.5625) * C434) +
               std::sqrt(0.5625) * C1190 + std::sqrt(0.5625) * C1211 -
               std::sqrt(2.25) * C1232;
    gy[308] += std::sqrt(2.25) * C478 -
               (std::sqrt(0.5625) * C457 + std::sqrt(0.5625) * C436) +
               std::sqrt(0.5625) * C1192 + std::sqrt(0.5625) * C1213 -
               std::sqrt(2.25) * C1234;
    gz[308] += std::sqrt(2.25) * C480 -
               (std::sqrt(0.5625) * C459 + std::sqrt(0.5625) * C438) +
               std::sqrt(0.5625) * C1194 + std::sqrt(0.5625) * C1215 -
               std::sqrt(2.25) * C1236;
    gx[309] += std::sqrt(6.75) * C504 - std::sqrt(6.75) * C1260;
    gy[309] += std::sqrt(6.75) * C506 - std::sqrt(6.75) * C1262;
    gz[309] += std::sqrt(6.75) * C508 - std::sqrt(6.75) * C1264;
    gx[310] += std::sqrt(6.75) * C511 - std::sqrt(6.75) * C1267;
    gy[310] += std::sqrt(6.75) * C513 - std::sqrt(6.75) * C1269;
    gz[310] += std::sqrt(6.75) * C515 - std::sqrt(6.75) * C1271;
    gx[311] += std::sqrt(6.75) * C518 - std::sqrt(6.75) * C1274;
    gy[311] += std::sqrt(6.75) * C520 - std::sqrt(6.75) * C1276;
    gz[311] += std::sqrt(6.75) * C522 - std::sqrt(6.75) * C1278;
    gx[312] += std::sqrt(1.6875) * C420 - std::sqrt(1.6875) * C441 -
               std::sqrt(1.6875) * C1176 + std::sqrt(1.6875) * C1197;
    gy[312] += std::sqrt(1.6875) * C422 - std::sqrt(1.6875) * C443 -
               std::sqrt(1.6875) * C1178 + std::sqrt(1.6875) * C1199;
    gz[312] += std::sqrt(1.6875) * C424 - std::sqrt(1.6875) * C445 -
               std::sqrt(1.6875) * C1180 + std::sqrt(1.6875) * C1201;
    gx[313] += std::sqrt(1.6875) * C427 - std::sqrt(1.6875) * C448 -
               std::sqrt(1.6875) * C1183 + std::sqrt(1.6875) * C1204;
    gy[313] += std::sqrt(1.6875) * C429 - std::sqrt(1.6875) * C450 -
               std::sqrt(1.6875) * C1185 + std::sqrt(1.6875) * C1206;
    gz[313] += std::sqrt(1.6875) * C431 - std::sqrt(1.6875) * C452 -
               std::sqrt(1.6875) * C1187 + std::sqrt(1.6875) * C1208;
    gx[314] += std::sqrt(1.6875) * C434 - std::sqrt(1.6875) * C455 -
               std::sqrt(1.6875) * C1190 + std::sqrt(1.6875) * C1211;
    gy[314] += std::sqrt(1.6875) * C436 - std::sqrt(1.6875) * C457 -
               std::sqrt(1.6875) * C1192 + std::sqrt(1.6875) * C1213;
    gz[314] += std::sqrt(1.6875) * C438 - std::sqrt(1.6875) * C459 -
               std::sqrt(1.6875) * C1194 + std::sqrt(1.6875) * C1215;
    gx[315] += std::sqrt(6.75) * C735 - std::sqrt(6.75) * C1491;
    gy[315] += std::sqrt(6.75) * C737 - std::sqrt(6.75) * C1493;
    gz[315] += std::sqrt(6.75) * C739 - std::sqrt(6.75) * C1495;
    gx[316] += std::sqrt(6.75) * C742 - std::sqrt(6.75) * C1498;
    gy[316] += std::sqrt(6.75) * C744 - std::sqrt(6.75) * C1500;
    gz[316] += std::sqrt(6.75) * C746 - std::sqrt(6.75) * C1502;
    gx[317] += std::sqrt(6.75) * C749 - std::sqrt(6.75) * C1505;
    gy[317] += std::sqrt(6.75) * C751 - std::sqrt(6.75) * C1507;
    gz[317] += std::sqrt(6.75) * C753 - std::sqrt(6.75) * C1509;
    gx[318] += std::sqrt(6.75) * C777 - std::sqrt(6.75) * C1533;
    gy[318] += std::sqrt(6.75) * C779 - std::sqrt(6.75) * C1535;
    gz[318] += std::sqrt(6.75) * C781 - std::sqrt(6.75) * C1537;
    gx[319] += std::sqrt(6.75) * C784 - std::sqrt(6.75) * C1540;
    gy[319] += std::sqrt(6.75) * C786 - std::sqrt(6.75) * C1542;
    gz[319] += std::sqrt(6.75) * C788 - std::sqrt(6.75) * C1544;
    gx[320] += std::sqrt(6.75) * C791 - std::sqrt(6.75) * C1547;
    gy[320] += std::sqrt(6.75) * C793 - std::sqrt(6.75) * C1549;
    gz[320] += std::sqrt(6.75) * C795 - std::sqrt(6.75) * C1551;
    gx[321] += std::sqrt(2.25) * C714 -
               (std::sqrt(0.5625) * C693 + std::sqrt(0.5625) * C672) +
               std::sqrt(0.5625) * C1428 + std::sqrt(0.5625) * C1449 -
               std::sqrt(2.25) * C1470;
    gy[321] += std::sqrt(2.25) * C716 -
               (std::sqrt(0.5625) * C695 + std::sqrt(0.5625) * C674) +
               std::sqrt(0.5625) * C1430 + std::sqrt(0.5625) * C1451 -
               std::sqrt(2.25) * C1472;
    gz[321] += std::sqrt(2.25) * C718 -
               (std::sqrt(0.5625) * C697 + std::sqrt(0.5625) * C676) +
               std::sqrt(0.5625) * C1432 + std::sqrt(0.5625) * C1453 -
               std::sqrt(2.25) * C1474;
    gx[322] += std::sqrt(2.25) * C721 -
               (std::sqrt(0.5625) * C700 + std::sqrt(0.5625) * C679) +
               std::sqrt(0.5625) * C1435 + std::sqrt(0.5625) * C1456 -
               std::sqrt(2.25) * C1477;
    gy[322] += std::sqrt(2.25) * C723 -
               (std::sqrt(0.5625) * C702 + std::sqrt(0.5625) * C681) +
               std::sqrt(0.5625) * C1437 + std::sqrt(0.5625) * C1458 -
               std::sqrt(2.25) * C1479;
    gz[322] += std::sqrt(2.25) * C725 -
               (std::sqrt(0.5625) * C704 + std::sqrt(0.5625) * C683) +
               std::sqrt(0.5625) * C1439 + std::sqrt(0.5625) * C1460 -
               std::sqrt(2.25) * C1481;
    gx[323] += std::sqrt(2.25) * C728 -
               (std::sqrt(0.5625) * C707 + std::sqrt(0.5625) * C686) +
               std::sqrt(0.5625) * C1442 + std::sqrt(0.5625) * C1463 -
               std::sqrt(2.25) * C1484;
    gy[323] += std::sqrt(2.25) * C730 -
               (std::sqrt(0.5625) * C709 + std::sqrt(0.5625) * C688) +
               std::sqrt(0.5625) * C1444 + std::sqrt(0.5625) * C1465 -
               std::sqrt(2.25) * C1486;
    gz[323] += std::sqrt(2.25) * C732 -
               (std::sqrt(0.5625) * C711 + std::sqrt(0.5625) * C690) +
               std::sqrt(0.5625) * C1446 + std::sqrt(0.5625) * C1467 -
               std::sqrt(2.25) * C1488;
    gx[324] += std::sqrt(6.75) * C756 - std::sqrt(6.75) * C1512;
    gy[324] += std::sqrt(6.75) * C758 - std::sqrt(6.75) * C1514;
    gz[324] += std::sqrt(6.75) * C760 - std::sqrt(6.75) * C1516;
    gx[325] += std::sqrt(6.75) * C763 - std::sqrt(6.75) * C1519;
    gy[325] += std::sqrt(6.75) * C765 - std::sqrt(6.75) * C1521;
    gz[325] += std::sqrt(6.75) * C767 - std::sqrt(6.75) * C1523;
    gx[326] += std::sqrt(6.75) * C770 - std::sqrt(6.75) * C1526;
    gy[326] += std::sqrt(6.75) * C772 - std::sqrt(6.75) * C1528;
    gz[326] += std::sqrt(6.75) * C774 - std::sqrt(6.75) * C1530;
    gx[327] += std::sqrt(1.6875) * C672 - std::sqrt(1.6875) * C693 -
               std::sqrt(1.6875) * C1428 + std::sqrt(1.6875) * C1449;
    gy[327] += std::sqrt(1.6875) * C674 - std::sqrt(1.6875) * C695 -
               std::sqrt(1.6875) * C1430 + std::sqrt(1.6875) * C1451;
    gz[327] += std::sqrt(1.6875) * C676 - std::sqrt(1.6875) * C697 -
               std::sqrt(1.6875) * C1432 + std::sqrt(1.6875) * C1453;
    gx[328] += std::sqrt(1.6875) * C679 - std::sqrt(1.6875) * C700 -
               std::sqrt(1.6875) * C1435 + std::sqrt(1.6875) * C1456;
    gy[328] += std::sqrt(1.6875) * C681 - std::sqrt(1.6875) * C702 -
               std::sqrt(1.6875) * C1437 + std::sqrt(1.6875) * C1458;
    gz[328] += std::sqrt(1.6875) * C683 - std::sqrt(1.6875) * C704 -
               std::sqrt(1.6875) * C1439 + std::sqrt(1.6875) * C1460;
    gx[329] += std::sqrt(1.6875) * C686 - std::sqrt(1.6875) * C707 -
               std::sqrt(1.6875) * C1442 + std::sqrt(1.6875) * C1463;
    gy[329] += std::sqrt(1.6875) * C688 - std::sqrt(1.6875) * C709 -
               std::sqrt(1.6875) * C1444 + std::sqrt(1.6875) * C1465;
    gz[329] += std::sqrt(1.6875) * C690 - std::sqrt(1.6875) * C711 -
               std::sqrt(1.6875) * C1446 + std::sqrt(1.6875) * C1467;
    gx[330] += std::sqrt(2.25) * C357 -
               (std::sqrt(0.5625) * C231 + std::sqrt(0.5625) * C105) +
               std::sqrt(0.5625) * C861 + std::sqrt(0.5625) * C987 -
               std::sqrt(2.25) * C1113;
    gy[330] += std::sqrt(2.25) * C359 -
               (std::sqrt(0.5625) * C233 + std::sqrt(0.5625) * C107) +
               std::sqrt(0.5625) * C863 + std::sqrt(0.5625) * C989 -
               std::sqrt(2.25) * C1115;
    gz[330] += std::sqrt(2.25) * C361 -
               (std::sqrt(0.5625) * C235 + std::sqrt(0.5625) * C109) +
               std::sqrt(0.5625) * C865 + std::sqrt(0.5625) * C991 -
               std::sqrt(2.25) * C1117;
    gx[331] += std::sqrt(2.25) * C364 -
               (std::sqrt(0.5625) * C238 + std::sqrt(0.5625) * C112) +
               std::sqrt(0.5625) * C868 + std::sqrt(0.5625) * C994 -
               std::sqrt(2.25) * C1120;
    gy[331] += std::sqrt(2.25) * C366 -
               (std::sqrt(0.5625) * C240 + std::sqrt(0.5625) * C114) +
               std::sqrt(0.5625) * C870 + std::sqrt(0.5625) * C996 -
               std::sqrt(2.25) * C1122;
    gz[331] += std::sqrt(2.25) * C368 -
               (std::sqrt(0.5625) * C242 + std::sqrt(0.5625) * C116) +
               std::sqrt(0.5625) * C872 + std::sqrt(0.5625) * C998 -
               std::sqrt(2.25) * C1124;
    gx[332] += std::sqrt(2.25) * C371 -
               (std::sqrt(0.5625) * C245 + std::sqrt(0.5625) * C119) +
               std::sqrt(0.5625) * C875 + std::sqrt(0.5625) * C1001 -
               std::sqrt(2.25) * C1127;
    gy[332] += std::sqrt(2.25) * C373 -
               (std::sqrt(0.5625) * C247 + std::sqrt(0.5625) * C121) +
               std::sqrt(0.5625) * C877 + std::sqrt(0.5625) * C1003 -
               std::sqrt(2.25) * C1129;
    gz[332] += std::sqrt(2.25) * C375 -
               (std::sqrt(0.5625) * C249 + std::sqrt(0.5625) * C123) +
               std::sqrt(0.5625) * C879 + std::sqrt(0.5625) * C1005 -
               std::sqrt(2.25) * C1131;
    gx[333] += std::sqrt(2.25) * C399 -
               (std::sqrt(0.5625) * C273 + std::sqrt(0.5625) * C147) +
               std::sqrt(0.5625) * C903 + std::sqrt(0.5625) * C1029 -
               std::sqrt(2.25) * C1155;
    gy[333] += std::sqrt(2.25) * C401 -
               (std::sqrt(0.5625) * C275 + std::sqrt(0.5625) * C149) +
               std::sqrt(0.5625) * C905 + std::sqrt(0.5625) * C1031 -
               std::sqrt(2.25) * C1157;
    gz[333] += std::sqrt(2.25) * C403 -
               (std::sqrt(0.5625) * C277 + std::sqrt(0.5625) * C151) +
               std::sqrt(0.5625) * C907 + std::sqrt(0.5625) * C1033 -
               std::sqrt(2.25) * C1159;
    gx[334] += std::sqrt(2.25) * C406 -
               (std::sqrt(0.5625) * C280 + std::sqrt(0.5625) * C154) +
               std::sqrt(0.5625) * C910 + std::sqrt(0.5625) * C1036 -
               std::sqrt(2.25) * C1162;
    gy[334] += std::sqrt(2.25) * C408 -
               (std::sqrt(0.5625) * C282 + std::sqrt(0.5625) * C156) +
               std::sqrt(0.5625) * C912 + std::sqrt(0.5625) * C1038 -
               std::sqrt(2.25) * C1164;
    gz[334] += std::sqrt(2.25) * C410 -
               (std::sqrt(0.5625) * C284 + std::sqrt(0.5625) * C158) +
               std::sqrt(0.5625) * C914 + std::sqrt(0.5625) * C1040 -
               std::sqrt(2.25) * C1166;
    gx[335] += std::sqrt(2.25) * C413 -
               (std::sqrt(0.5625) * C287 + std::sqrt(0.5625) * C161) +
               std::sqrt(0.5625) * C917 + std::sqrt(0.5625) * C1043 -
               std::sqrt(2.25) * C1169;
    gy[335] += std::sqrt(2.25) * C415 -
               (std::sqrt(0.5625) * C289 + std::sqrt(0.5625) * C163) +
               std::sqrt(0.5625) * C919 + std::sqrt(0.5625) * C1045 -
               std::sqrt(2.25) * C1171;
    gz[335] += std::sqrt(2.25) * C417 -
               (std::sqrt(0.5625) * C291 + std::sqrt(0.5625) * C165) +
               std::sqrt(0.5625) * C921 + std::sqrt(0.5625) * C1047 -
               std::sqrt(2.25) * C1173;
    gx[336] += std::sqrt(0.046875) * C40 + std::sqrt(0.046875) * C63 -
               std::sqrt(0.1875) * C84 + std::sqrt(0.046875) * C168 +
               std::sqrt(0.046875) * C189 - std::sqrt(0.1875) * C210 -
               std::sqrt(0.1875) * C294 - std::sqrt(0.1875) * C315 +
               std::sqrt(0.75) * C336 - std::sqrt(0.046875) * C798 -
               std::sqrt(0.046875) * C819 + std::sqrt(0.1875) * C840 -
               std::sqrt(0.046875) * C924 - std::sqrt(0.046875) * C945 +
               std::sqrt(0.1875) * C966 + std::sqrt(0.1875) * C1050 +
               std::sqrt(0.1875) * C1071 - std::sqrt(0.75) * C1092;
    gy[336] += std::sqrt(0.046875) * C44 + std::sqrt(0.046875) * C65 -
               std::sqrt(0.1875) * C86 + std::sqrt(0.046875) * C170 +
               std::sqrt(0.046875) * C191 - std::sqrt(0.1875) * C212 -
               std::sqrt(0.1875) * C296 - std::sqrt(0.1875) * C317 +
               std::sqrt(0.75) * C338 - std::sqrt(0.046875) * C800 -
               std::sqrt(0.046875) * C821 + std::sqrt(0.1875) * C842 -
               std::sqrt(0.046875) * C926 - std::sqrt(0.046875) * C947 +
               std::sqrt(0.1875) * C968 + std::sqrt(0.1875) * C1052 +
               std::sqrt(0.1875) * C1073 - std::sqrt(0.75) * C1094;
    gz[336] += std::sqrt(0.046875) * C46 + std::sqrt(0.046875) * C67 -
               std::sqrt(0.1875) * C88 + std::sqrt(0.046875) * C172 +
               std::sqrt(0.046875) * C193 - std::sqrt(0.1875) * C214 -
               std::sqrt(0.1875) * C298 - std::sqrt(0.1875) * C319 +
               std::sqrt(0.75) * C340 - std::sqrt(0.046875) * C802 -
               std::sqrt(0.046875) * C823 + std::sqrt(0.1875) * C844 -
               std::sqrt(0.046875) * C928 - std::sqrt(0.046875) * C949 +
               std::sqrt(0.1875) * C970 + std::sqrt(0.1875) * C1054 +
               std::sqrt(0.1875) * C1075 - std::sqrt(0.75) * C1096;
    gx[337] += std::sqrt(0.046875) * C49 + std::sqrt(0.046875) * C70 -
               std::sqrt(0.1875) * C91 + std::sqrt(0.046875) * C175 +
               std::sqrt(0.046875) * C196 - std::sqrt(0.1875) * C217 -
               std::sqrt(0.1875) * C301 - std::sqrt(0.1875) * C322 +
               std::sqrt(0.75) * C343 - std::sqrt(0.046875) * C805 -
               std::sqrt(0.046875) * C826 + std::sqrt(0.1875) * C847 -
               std::sqrt(0.046875) * C931 - std::sqrt(0.046875) * C952 +
               std::sqrt(0.1875) * C973 + std::sqrt(0.1875) * C1057 +
               std::sqrt(0.1875) * C1078 - std::sqrt(0.75) * C1099;
    gy[337] += std::sqrt(0.046875) * C51 + std::sqrt(0.046875) * C72 -
               std::sqrt(0.1875) * C93 + std::sqrt(0.046875) * C177 +
               std::sqrt(0.046875) * C198 - std::sqrt(0.1875) * C219 -
               std::sqrt(0.1875) * C303 - std::sqrt(0.1875) * C324 +
               std::sqrt(0.75) * C345 - std::sqrt(0.046875) * C807 -
               std::sqrt(0.046875) * C828 + std::sqrt(0.1875) * C849 -
               std::sqrt(0.046875) * C933 - std::sqrt(0.046875) * C954 +
               std::sqrt(0.1875) * C975 + std::sqrt(0.1875) * C1059 +
               std::sqrt(0.1875) * C1080 - std::sqrt(0.75) * C1101;
    gz[337] += std::sqrt(0.046875) * C53 + std::sqrt(0.046875) * C74 -
               std::sqrt(0.1875) * C95 + std::sqrt(0.046875) * C179 +
               std::sqrt(0.046875) * C200 - std::sqrt(0.1875) * C221 -
               std::sqrt(0.1875) * C305 - std::sqrt(0.1875) * C326 +
               std::sqrt(0.75) * C347 - std::sqrt(0.046875) * C809 -
               std::sqrt(0.046875) * C830 + std::sqrt(0.1875) * C851 -
               std::sqrt(0.046875) * C935 - std::sqrt(0.046875) * C956 +
               std::sqrt(0.1875) * C977 + std::sqrt(0.1875) * C1061 +
               std::sqrt(0.1875) * C1082 - std::sqrt(0.75) * C1103;
    gx[338] += std::sqrt(0.046875) * C56 + std::sqrt(0.046875) * C77 -
               std::sqrt(0.1875) * C98 + std::sqrt(0.046875) * C182 +
               std::sqrt(0.046875) * C203 - std::sqrt(0.1875) * C224 -
               std::sqrt(0.1875) * C308 - std::sqrt(0.1875) * C329 +
               std::sqrt(0.75) * C350 - std::sqrt(0.046875) * C812 -
               std::sqrt(0.046875) * C833 + std::sqrt(0.1875) * C854 -
               std::sqrt(0.046875) * C938 - std::sqrt(0.046875) * C959 +
               std::sqrt(0.1875) * C980 + std::sqrt(0.1875) * C1064 +
               std::sqrt(0.1875) * C1085 - std::sqrt(0.75) * C1106;
    gy[338] += std::sqrt(0.046875) * C58 + std::sqrt(0.046875) * C79 -
               std::sqrt(0.1875) * C100 + std::sqrt(0.046875) * C184 +
               std::sqrt(0.046875) * C205 - std::sqrt(0.1875) * C226 -
               std::sqrt(0.1875) * C310 - std::sqrt(0.1875) * C331 +
               std::sqrt(0.75) * C352 - std::sqrt(0.046875) * C814 -
               std::sqrt(0.046875) * C835 + std::sqrt(0.1875) * C856 -
               std::sqrt(0.046875) * C940 - std::sqrt(0.046875) * C961 +
               std::sqrt(0.1875) * C982 + std::sqrt(0.1875) * C1066 +
               std::sqrt(0.1875) * C1087 - std::sqrt(0.75) * C1108;
    gz[338] += std::sqrt(0.046875) * C60 + std::sqrt(0.046875) * C81 -
               std::sqrt(0.1875) * C102 + std::sqrt(0.046875) * C186 +
               std::sqrt(0.046875) * C207 - std::sqrt(0.1875) * C228 -
               std::sqrt(0.1875) * C312 - std::sqrt(0.1875) * C333 +
               std::sqrt(0.75) * C354 - std::sqrt(0.046875) * C816 -
               std::sqrt(0.046875) * C837 + std::sqrt(0.1875) * C858 -
               std::sqrt(0.046875) * C942 - std::sqrt(0.046875) * C963 +
               std::sqrt(0.1875) * C984 + std::sqrt(0.1875) * C1068 +
               std::sqrt(0.1875) * C1089 - std::sqrt(0.75) * C1110;
    gx[339] += std::sqrt(2.25) * C378 -
               (std::sqrt(0.5625) * C252 + std::sqrt(0.5625) * C126) +
               std::sqrt(0.5625) * C882 + std::sqrt(0.5625) * C1008 -
               std::sqrt(2.25) * C1134;
    gy[339] += std::sqrt(2.25) * C380 -
               (std::sqrt(0.5625) * C254 + std::sqrt(0.5625) * C128) +
               std::sqrt(0.5625) * C884 + std::sqrt(0.5625) * C1010 -
               std::sqrt(2.25) * C1136;
    gz[339] += std::sqrt(2.25) * C382 -
               (std::sqrt(0.5625) * C256 + std::sqrt(0.5625) * C130) +
               std::sqrt(0.5625) * C886 + std::sqrt(0.5625) * C1012 -
               std::sqrt(2.25) * C1138;
    gx[340] += std::sqrt(2.25) * C385 -
               (std::sqrt(0.5625) * C259 + std::sqrt(0.5625) * C133) +
               std::sqrt(0.5625) * C889 + std::sqrt(0.5625) * C1015 -
               std::sqrt(2.25) * C1141;
    gy[340] += std::sqrt(2.25) * C387 -
               (std::sqrt(0.5625) * C261 + std::sqrt(0.5625) * C135) +
               std::sqrt(0.5625) * C891 + std::sqrt(0.5625) * C1017 -
               std::sqrt(2.25) * C1143;
    gz[340] += std::sqrt(2.25) * C389 -
               (std::sqrt(0.5625) * C263 + std::sqrt(0.5625) * C137) +
               std::sqrt(0.5625) * C893 + std::sqrt(0.5625) * C1019 -
               std::sqrt(2.25) * C1145;
    gx[341] += std::sqrt(2.25) * C392 -
               (std::sqrt(0.5625) * C266 + std::sqrt(0.5625) * C140) +
               std::sqrt(0.5625) * C896 + std::sqrt(0.5625) * C1022 -
               std::sqrt(2.25) * C1148;
    gy[341] += std::sqrt(2.25) * C394 -
               (std::sqrt(0.5625) * C268 + std::sqrt(0.5625) * C142) +
               std::sqrt(0.5625) * C898 + std::sqrt(0.5625) * C1024 -
               std::sqrt(2.25) * C1150;
    gz[341] += std::sqrt(2.25) * C396 -
               (std::sqrt(0.5625) * C270 + std::sqrt(0.5625) * C144) +
               std::sqrt(0.5625) * C900 + std::sqrt(0.5625) * C1026 -
               std::sqrt(2.25) * C1152;
    gx[342] += std::sqrt(0.140625) * C63 - std::sqrt(0.140625) * C40 -
               std::sqrt(0.140625) * C168 + std::sqrt(0.140625) * C189 +
               std::sqrt(0.5625) * C294 - std::sqrt(0.5625) * C315 +
               std::sqrt(0.140625) * C798 - std::sqrt(0.140625) * C819 +
               std::sqrt(0.140625) * C924 - std::sqrt(0.140625) * C945 -
               std::sqrt(0.5625) * C1050 + std::sqrt(0.5625) * C1071;
    gy[342] += std::sqrt(0.140625) * C65 - std::sqrt(0.140625) * C44 -
               std::sqrt(0.140625) * C170 + std::sqrt(0.140625) * C191 +
               std::sqrt(0.5625) * C296 - std::sqrt(0.5625) * C317 +
               std::sqrt(0.140625) * C800 - std::sqrt(0.140625) * C821 +
               std::sqrt(0.140625) * C926 - std::sqrt(0.140625) * C947 -
               std::sqrt(0.5625) * C1052 + std::sqrt(0.5625) * C1073;
    gz[342] += std::sqrt(0.140625) * C67 - std::sqrt(0.140625) * C46 -
               std::sqrt(0.140625) * C172 + std::sqrt(0.140625) * C193 +
               std::sqrt(0.5625) * C298 - std::sqrt(0.5625) * C319 +
               std::sqrt(0.140625) * C802 - std::sqrt(0.140625) * C823 +
               std::sqrt(0.140625) * C928 - std::sqrt(0.140625) * C949 -
               std::sqrt(0.5625) * C1054 + std::sqrt(0.5625) * C1075;
    gx[343] += std::sqrt(0.140625) * C70 - std::sqrt(0.140625) * C49 -
               std::sqrt(0.140625) * C175 + std::sqrt(0.140625) * C196 +
               std::sqrt(0.5625) * C301 - std::sqrt(0.5625) * C322 +
               std::sqrt(0.140625) * C805 - std::sqrt(0.140625) * C826 +
               std::sqrt(0.140625) * C931 - std::sqrt(0.140625) * C952 -
               std::sqrt(0.5625) * C1057 + std::sqrt(0.5625) * C1078;
    gy[343] += std::sqrt(0.140625) * C72 - std::sqrt(0.140625) * C51 -
               std::sqrt(0.140625) * C177 + std::sqrt(0.140625) * C198 +
               std::sqrt(0.5625) * C303 - std::sqrt(0.5625) * C324 +
               std::sqrt(0.140625) * C807 - std::sqrt(0.140625) * C828 +
               std::sqrt(0.140625) * C933 - std::sqrt(0.140625) * C954 -
               std::sqrt(0.5625) * C1059 + std::sqrt(0.5625) * C1080;
    gz[343] += std::sqrt(0.140625) * C74 - std::sqrt(0.140625) * C53 -
               std::sqrt(0.140625) * C179 + std::sqrt(0.140625) * C200 +
               std::sqrt(0.5625) * C305 - std::sqrt(0.5625) * C326 +
               std::sqrt(0.140625) * C809 - std::sqrt(0.140625) * C830 +
               std::sqrt(0.140625) * C935 - std::sqrt(0.140625) * C956 -
               std::sqrt(0.5625) * C1061 + std::sqrt(0.5625) * C1082;
    gx[344] += std::sqrt(0.140625) * C77 - std::sqrt(0.140625) * C56 -
               std::sqrt(0.140625) * C182 + std::sqrt(0.140625) * C203 +
               std::sqrt(0.5625) * C308 - std::sqrt(0.5625) * C329 +
               std::sqrt(0.140625) * C812 - std::sqrt(0.140625) * C833 +
               std::sqrt(0.140625) * C938 - std::sqrt(0.140625) * C959 -
               std::sqrt(0.5625) * C1064 + std::sqrt(0.5625) * C1085;
    gy[344] += std::sqrt(0.140625) * C79 - std::sqrt(0.140625) * C58 -
               std::sqrt(0.140625) * C184 + std::sqrt(0.140625) * C205 +
               std::sqrt(0.5625) * C310 - std::sqrt(0.5625) * C331 +
               std::sqrt(0.140625) * C814 - std::sqrt(0.140625) * C835 +
               std::sqrt(0.140625) * C940 - std::sqrt(0.140625) * C961 -
               std::sqrt(0.5625) * C1066 + std::sqrt(0.5625) * C1087;
    gz[344] += std::sqrt(0.140625) * C81 - std::sqrt(0.140625) * C60 -
               std::sqrt(0.140625) * C186 + std::sqrt(0.140625) * C207 +
               std::sqrt(0.5625) * C312 - std::sqrt(0.5625) * C333 +
               std::sqrt(0.140625) * C816 - std::sqrt(0.140625) * C837 +
               std::sqrt(0.140625) * C942 - std::sqrt(0.140625) * C963 -
               std::sqrt(0.5625) * C1068 + std::sqrt(0.5625) * C1089;
    gx[345] += std::sqrt(6.75) * C609 - std::sqrt(6.75) * C1365;
    gy[345] += std::sqrt(6.75) * C611 - std::sqrt(6.75) * C1367;
    gz[345] += std::sqrt(6.75) * C613 - std::sqrt(6.75) * C1369;
    gx[346] += std::sqrt(6.75) * C616 - std::sqrt(6.75) * C1372;
    gy[346] += std::sqrt(6.75) * C618 - std::sqrt(6.75) * C1374;
    gz[346] += std::sqrt(6.75) * C620 - std::sqrt(6.75) * C1376;
    gx[347] += std::sqrt(6.75) * C623 - std::sqrt(6.75) * C1379;
    gy[347] += std::sqrt(6.75) * C625 - std::sqrt(6.75) * C1381;
    gz[347] += std::sqrt(6.75) * C627 - std::sqrt(6.75) * C1383;
    gx[348] += std::sqrt(6.75) * C651 - std::sqrt(6.75) * C1407;
    gy[348] += std::sqrt(6.75) * C653 - std::sqrt(6.75) * C1409;
    gz[348] += std::sqrt(6.75) * C655 - std::sqrt(6.75) * C1411;
    gx[349] += std::sqrt(6.75) * C658 - std::sqrt(6.75) * C1414;
    gy[349] += std::sqrt(6.75) * C660 - std::sqrt(6.75) * C1416;
    gz[349] += std::sqrt(6.75) * C662 - std::sqrt(6.75) * C1418;
    gx[350] += std::sqrt(6.75) * C665 - std::sqrt(6.75) * C1421;
    gy[350] += std::sqrt(6.75) * C667 - std::sqrt(6.75) * C1423;
    gz[350] += std::sqrt(6.75) * C669 - std::sqrt(6.75) * C1425;
    gx[351] += std::sqrt(2.25) * C588 -
               (std::sqrt(0.5625) * C567 + std::sqrt(0.5625) * C546) +
               std::sqrt(0.5625) * C1302 + std::sqrt(0.5625) * C1323 -
               std::sqrt(2.25) * C1344;
    gy[351] += std::sqrt(2.25) * C590 -
               (std::sqrt(0.5625) * C569 + std::sqrt(0.5625) * C548) +
               std::sqrt(0.5625) * C1304 + std::sqrt(0.5625) * C1325 -
               std::sqrt(2.25) * C1346;
    gz[351] += std::sqrt(2.25) * C592 -
               (std::sqrt(0.5625) * C571 + std::sqrt(0.5625) * C550) +
               std::sqrt(0.5625) * C1306 + std::sqrt(0.5625) * C1327 -
               std::sqrt(2.25) * C1348;
    gx[352] += std::sqrt(2.25) * C595 -
               (std::sqrt(0.5625) * C574 + std::sqrt(0.5625) * C553) +
               std::sqrt(0.5625) * C1309 + std::sqrt(0.5625) * C1330 -
               std::sqrt(2.25) * C1351;
    gy[352] += std::sqrt(2.25) * C597 -
               (std::sqrt(0.5625) * C576 + std::sqrt(0.5625) * C555) +
               std::sqrt(0.5625) * C1311 + std::sqrt(0.5625) * C1332 -
               std::sqrt(2.25) * C1353;
    gz[352] += std::sqrt(2.25) * C599 -
               (std::sqrt(0.5625) * C578 + std::sqrt(0.5625) * C557) +
               std::sqrt(0.5625) * C1313 + std::sqrt(0.5625) * C1334 -
               std::sqrt(2.25) * C1355;
    gx[353] += std::sqrt(2.25) * C602 -
               (std::sqrt(0.5625) * C581 + std::sqrt(0.5625) * C560) +
               std::sqrt(0.5625) * C1316 + std::sqrt(0.5625) * C1337 -
               std::sqrt(2.25) * C1358;
    gy[353] += std::sqrt(2.25) * C604 -
               (std::sqrt(0.5625) * C583 + std::sqrt(0.5625) * C562) +
               std::sqrt(0.5625) * C1318 + std::sqrt(0.5625) * C1339 -
               std::sqrt(2.25) * C1360;
    gz[353] += std::sqrt(2.25) * C606 -
               (std::sqrt(0.5625) * C585 + std::sqrt(0.5625) * C564) +
               std::sqrt(0.5625) * C1320 + std::sqrt(0.5625) * C1341 -
               std::sqrt(2.25) * C1362;
    gx[354] += std::sqrt(6.75) * C630 - std::sqrt(6.75) * C1386;
    gy[354] += std::sqrt(6.75) * C632 - std::sqrt(6.75) * C1388;
    gz[354] += std::sqrt(6.75) * C634 - std::sqrt(6.75) * C1390;
    gx[355] += std::sqrt(6.75) * C637 - std::sqrt(6.75) * C1393;
    gy[355] += std::sqrt(6.75) * C639 - std::sqrt(6.75) * C1395;
    gz[355] += std::sqrt(6.75) * C641 - std::sqrt(6.75) * C1397;
    gx[356] += std::sqrt(6.75) * C644 - std::sqrt(6.75) * C1400;
    gy[356] += std::sqrt(6.75) * C646 - std::sqrt(6.75) * C1402;
    gz[356] += std::sqrt(6.75) * C648 - std::sqrt(6.75) * C1404;
    gx[357] += std::sqrt(1.6875) * C546 - std::sqrt(1.6875) * C567 -
               std::sqrt(1.6875) * C1302 + std::sqrt(1.6875) * C1323;
    gy[357] += std::sqrt(1.6875) * C548 - std::sqrt(1.6875) * C569 -
               std::sqrt(1.6875) * C1304 + std::sqrt(1.6875) * C1325;
    gz[357] += std::sqrt(1.6875) * C550 - std::sqrt(1.6875) * C571 -
               std::sqrt(1.6875) * C1306 + std::sqrt(1.6875) * C1327;
    gx[358] += std::sqrt(1.6875) * C553 - std::sqrt(1.6875) * C574 -
               std::sqrt(1.6875) * C1309 + std::sqrt(1.6875) * C1330;
    gy[358] += std::sqrt(1.6875) * C555 - std::sqrt(1.6875) * C576 -
               std::sqrt(1.6875) * C1311 + std::sqrt(1.6875) * C1332;
    gz[358] += std::sqrt(1.6875) * C557 - std::sqrt(1.6875) * C578 -
               std::sqrt(1.6875) * C1313 + std::sqrt(1.6875) * C1334;
    gx[359] += std::sqrt(1.6875) * C560 - std::sqrt(1.6875) * C581 -
               std::sqrt(1.6875) * C1316 + std::sqrt(1.6875) * C1337;
    gy[359] += std::sqrt(1.6875) * C562 - std::sqrt(1.6875) * C583 -
               std::sqrt(1.6875) * C1318 + std::sqrt(1.6875) * C1339;
    gz[359] += std::sqrt(1.6875) * C564 - std::sqrt(1.6875) * C585 -
               std::sqrt(1.6875) * C1320 + std::sqrt(1.6875) * C1341;
    gx[360] += std::sqrt(1.6875) * C105 - std::sqrt(1.6875) * C231 -
               std::sqrt(1.6875) * C861 + std::sqrt(1.6875) * C987;
    gy[360] += std::sqrt(1.6875) * C107 - std::sqrt(1.6875) * C233 -
               std::sqrt(1.6875) * C863 + std::sqrt(1.6875) * C989;
    gz[360] += std::sqrt(1.6875) * C109 - std::sqrt(1.6875) * C235 -
               std::sqrt(1.6875) * C865 + std::sqrt(1.6875) * C991;
    gx[361] += std::sqrt(1.6875) * C112 - std::sqrt(1.6875) * C238 -
               std::sqrt(1.6875) * C868 + std::sqrt(1.6875) * C994;
    gy[361] += std::sqrt(1.6875) * C114 - std::sqrt(1.6875) * C240 -
               std::sqrt(1.6875) * C870 + std::sqrt(1.6875) * C996;
    gz[361] += std::sqrt(1.6875) * C116 - std::sqrt(1.6875) * C242 -
               std::sqrt(1.6875) * C872 + std::sqrt(1.6875) * C998;
    gx[362] += std::sqrt(1.6875) * C119 - std::sqrt(1.6875) * C245 -
               std::sqrt(1.6875) * C875 + std::sqrt(1.6875) * C1001;
    gy[362] += std::sqrt(1.6875) * C121 - std::sqrt(1.6875) * C247 -
               std::sqrt(1.6875) * C877 + std::sqrt(1.6875) * C1003;
    gz[362] += std::sqrt(1.6875) * C123 - std::sqrt(1.6875) * C249 -
               std::sqrt(1.6875) * C879 + std::sqrt(1.6875) * C1005;
    gx[363] += std::sqrt(1.6875) * C147 - std::sqrt(1.6875) * C273 -
               std::sqrt(1.6875) * C903 + std::sqrt(1.6875) * C1029;
    gy[363] += std::sqrt(1.6875) * C149 - std::sqrt(1.6875) * C275 -
               std::sqrt(1.6875) * C905 + std::sqrt(1.6875) * C1031;
    gz[363] += std::sqrt(1.6875) * C151 - std::sqrt(1.6875) * C277 -
               std::sqrt(1.6875) * C907 + std::sqrt(1.6875) * C1033;
    gx[364] += std::sqrt(1.6875) * C154 - std::sqrt(1.6875) * C280 -
               std::sqrt(1.6875) * C910 + std::sqrt(1.6875) * C1036;
    gy[364] += std::sqrt(1.6875) * C156 - std::sqrt(1.6875) * C282 -
               std::sqrt(1.6875) * C912 + std::sqrt(1.6875) * C1038;
    gz[364] += std::sqrt(1.6875) * C158 - std::sqrt(1.6875) * C284 -
               std::sqrt(1.6875) * C914 + std::sqrt(1.6875) * C1040;
    gx[365] += std::sqrt(1.6875) * C161 - std::sqrt(1.6875) * C287 -
               std::sqrt(1.6875) * C917 + std::sqrt(1.6875) * C1043;
    gy[365] += std::sqrt(1.6875) * C163 - std::sqrt(1.6875) * C289 -
               std::sqrt(1.6875) * C919 + std::sqrt(1.6875) * C1045;
    gz[365] += std::sqrt(1.6875) * C165 - std::sqrt(1.6875) * C291 -
               std::sqrt(1.6875) * C921 + std::sqrt(1.6875) * C1047;
    gx[366] += std::sqrt(0.5625) * C84 -
               (std::sqrt(0.140625) * C63 + std::sqrt(0.140625) * C40) +
               std::sqrt(0.140625) * C168 + std::sqrt(0.140625) * C189 -
               std::sqrt(0.5625) * C210 + std::sqrt(0.140625) * C798 +
               std::sqrt(0.140625) * C819 - std::sqrt(0.5625) * C840 -
               std::sqrt(0.140625) * C924 - std::sqrt(0.140625) * C945 +
               std::sqrt(0.5625) * C966;
    gy[366] += std::sqrt(0.5625) * C86 -
               (std::sqrt(0.140625) * C65 + std::sqrt(0.140625) * C44) +
               std::sqrt(0.140625) * C170 + std::sqrt(0.140625) * C191 -
               std::sqrt(0.5625) * C212 + std::sqrt(0.140625) * C800 +
               std::sqrt(0.140625) * C821 - std::sqrt(0.5625) * C842 -
               std::sqrt(0.140625) * C926 - std::sqrt(0.140625) * C947 +
               std::sqrt(0.5625) * C968;
    gz[366] += std::sqrt(0.5625) * C88 -
               (std::sqrt(0.140625) * C67 + std::sqrt(0.140625) * C46) +
               std::sqrt(0.140625) * C172 + std::sqrt(0.140625) * C193 -
               std::sqrt(0.5625) * C214 + std::sqrt(0.140625) * C802 +
               std::sqrt(0.140625) * C823 - std::sqrt(0.5625) * C844 -
               std::sqrt(0.140625) * C928 - std::sqrt(0.140625) * C949 +
               std::sqrt(0.5625) * C970;
    gx[367] += std::sqrt(0.5625) * C91 -
               (std::sqrt(0.140625) * C70 + std::sqrt(0.140625) * C49) +
               std::sqrt(0.140625) * C175 + std::sqrt(0.140625) * C196 -
               std::sqrt(0.5625) * C217 + std::sqrt(0.140625) * C805 +
               std::sqrt(0.140625) * C826 - std::sqrt(0.5625) * C847 -
               std::sqrt(0.140625) * C931 - std::sqrt(0.140625) * C952 +
               std::sqrt(0.5625) * C973;
    gy[367] += std::sqrt(0.5625) * C93 -
               (std::sqrt(0.140625) * C72 + std::sqrt(0.140625) * C51) +
               std::sqrt(0.140625) * C177 + std::sqrt(0.140625) * C198 -
               std::sqrt(0.5625) * C219 + std::sqrt(0.140625) * C807 +
               std::sqrt(0.140625) * C828 - std::sqrt(0.5625) * C849 -
               std::sqrt(0.140625) * C933 - std::sqrt(0.140625) * C954 +
               std::sqrt(0.5625) * C975;
    gz[367] += std::sqrt(0.5625) * C95 -
               (std::sqrt(0.140625) * C74 + std::sqrt(0.140625) * C53) +
               std::sqrt(0.140625) * C179 + std::sqrt(0.140625) * C200 -
               std::sqrt(0.5625) * C221 + std::sqrt(0.140625) * C809 +
               std::sqrt(0.140625) * C830 - std::sqrt(0.5625) * C851 -
               std::sqrt(0.140625) * C935 - std::sqrt(0.140625) * C956 +
               std::sqrt(0.5625) * C977;
    gx[368] += std::sqrt(0.5625) * C98 -
               (std::sqrt(0.140625) * C77 + std::sqrt(0.140625) * C56) +
               std::sqrt(0.140625) * C182 + std::sqrt(0.140625) * C203 -
               std::sqrt(0.5625) * C224 + std::sqrt(0.140625) * C812 +
               std::sqrt(0.140625) * C833 - std::sqrt(0.5625) * C854 -
               std::sqrt(0.140625) * C938 - std::sqrt(0.140625) * C959 +
               std::sqrt(0.5625) * C980;
    gy[368] += std::sqrt(0.5625) * C100 -
               (std::sqrt(0.140625) * C79 + std::sqrt(0.140625) * C58) +
               std::sqrt(0.140625) * C184 + std::sqrt(0.140625) * C205 -
               std::sqrt(0.5625) * C226 + std::sqrt(0.140625) * C814 +
               std::sqrt(0.140625) * C835 - std::sqrt(0.5625) * C856 -
               std::sqrt(0.140625) * C940 - std::sqrt(0.140625) * C961 +
               std::sqrt(0.5625) * C982;
    gz[368] += std::sqrt(0.5625) * C102 -
               (std::sqrt(0.140625) * C81 + std::sqrt(0.140625) * C60) +
               std::sqrt(0.140625) * C186 + std::sqrt(0.140625) * C207 -
               std::sqrt(0.5625) * C228 + std::sqrt(0.140625) * C816 +
               std::sqrt(0.140625) * C837 - std::sqrt(0.5625) * C858 -
               std::sqrt(0.140625) * C942 - std::sqrt(0.140625) * C963 +
               std::sqrt(0.5625) * C984;
    gx[369] += std::sqrt(1.6875) * C126 - std::sqrt(1.6875) * C252 -
               std::sqrt(1.6875) * C882 + std::sqrt(1.6875) * C1008;
    gy[369] += std::sqrt(1.6875) * C128 - std::sqrt(1.6875) * C254 -
               std::sqrt(1.6875) * C884 + std::sqrt(1.6875) * C1010;
    gz[369] += std::sqrt(1.6875) * C130 - std::sqrt(1.6875) * C256 -
               std::sqrt(1.6875) * C886 + std::sqrt(1.6875) * C1012;
    gx[370] += std::sqrt(1.6875) * C133 - std::sqrt(1.6875) * C259 -
               std::sqrt(1.6875) * C889 + std::sqrt(1.6875) * C1015;
    gy[370] += std::sqrt(1.6875) * C135 - std::sqrt(1.6875) * C261 -
               std::sqrt(1.6875) * C891 + std::sqrt(1.6875) * C1017;
    gz[370] += std::sqrt(1.6875) * C137 - std::sqrt(1.6875) * C263 -
               std::sqrt(1.6875) * C893 + std::sqrt(1.6875) * C1019;
    gx[371] += std::sqrt(1.6875) * C140 - std::sqrt(1.6875) * C266 -
               std::sqrt(1.6875) * C896 + std::sqrt(1.6875) * C1022;
    gy[371] += std::sqrt(1.6875) * C142 - std::sqrt(1.6875) * C268 -
               std::sqrt(1.6875) * C898 + std::sqrt(1.6875) * C1024;
    gz[371] += std::sqrt(1.6875) * C144 - std::sqrt(1.6875) * C270 -
               std::sqrt(1.6875) * C900 + std::sqrt(1.6875) * C1026;
    gx[372] += std::sqrt(0.421875) * C40 - std::sqrt(0.421875) * C63 -
               std::sqrt(0.421875) * C168 + std::sqrt(0.421875) * C189 -
               std::sqrt(0.421875) * C798 + std::sqrt(0.421875) * C819 +
               std::sqrt(0.421875) * C924 - std::sqrt(0.421875) * C945;
    gy[372] += std::sqrt(0.421875) * C44 - std::sqrt(0.421875) * C65 -
               std::sqrt(0.421875) * C170 + std::sqrt(0.421875) * C191 -
               std::sqrt(0.421875) * C800 + std::sqrt(0.421875) * C821 +
               std::sqrt(0.421875) * C926 - std::sqrt(0.421875) * C947;
    gz[372] += std::sqrt(0.421875) * C46 - std::sqrt(0.421875) * C67 -
               std::sqrt(0.421875) * C172 + std::sqrt(0.421875) * C193 -
               std::sqrt(0.421875) * C802 + std::sqrt(0.421875) * C823 +
               std::sqrt(0.421875) * C928 - std::sqrt(0.421875) * C949;
    gx[373] += std::sqrt(0.421875) * C49 - std::sqrt(0.421875) * C70 -
               std::sqrt(0.421875) * C175 + std::sqrt(0.421875) * C196 -
               std::sqrt(0.421875) * C805 + std::sqrt(0.421875) * C826 +
               std::sqrt(0.421875) * C931 - std::sqrt(0.421875) * C952;
    gy[373] += std::sqrt(0.421875) * C51 - std::sqrt(0.421875) * C72 -
               std::sqrt(0.421875) * C177 + std::sqrt(0.421875) * C198 -
               std::sqrt(0.421875) * C807 + std::sqrt(0.421875) * C828 +
               std::sqrt(0.421875) * C933 - std::sqrt(0.421875) * C954;
    gz[373] += std::sqrt(0.421875) * C53 - std::sqrt(0.421875) * C74 -
               std::sqrt(0.421875) * C179 + std::sqrt(0.421875) * C200 -
               std::sqrt(0.421875) * C809 + std::sqrt(0.421875) * C830 +
               std::sqrt(0.421875) * C935 - std::sqrt(0.421875) * C956;
    gx[374] += std::sqrt(0.421875) * C56 - std::sqrt(0.421875) * C77 -
               std::sqrt(0.421875) * C182 + std::sqrt(0.421875) * C203 -
               std::sqrt(0.421875) * C812 + std::sqrt(0.421875) * C833 +
               std::sqrt(0.421875) * C938 - std::sqrt(0.421875) * C959;
    gy[374] += std::sqrt(0.421875) * C58 - std::sqrt(0.421875) * C79 -
               std::sqrt(0.421875) * C184 + std::sqrt(0.421875) * C205 -
               std::sqrt(0.421875) * C814 + std::sqrt(0.421875) * C835 +
               std::sqrt(0.421875) * C940 - std::sqrt(0.421875) * C961;
    gz[374] += std::sqrt(0.421875) * C60 - std::sqrt(0.421875) * C81 -
               std::sqrt(0.421875) * C186 + std::sqrt(0.421875) * C207 -
               std::sqrt(0.421875) * C816 + std::sqrt(0.421875) * C837 +
               std::sqrt(0.421875) * C942 - std::sqrt(0.421875) * C963;
}
