/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2211_3(const double ae,
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
    double g[346];
    eri_gradient_2211_3_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[84];
    double vry[84];
    double vrz[84];
    eri_gradient_2211_3_vr(ae,
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
    double etx[279];
    double ety[279];
    double etz[279];
    eri_gradient_2211_3_et(ae,
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
    double hrx[324];
    double hry[324];
    double hrz[324];
    eri_gradient_2211_3_hr(ae,
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
    gx[0] += std::sqrt(9.) * C1365;
    gy[0] += std::sqrt(9.) * C1367;
    gz[0] += std::sqrt(9.) * C1369;
    gx[1] += std::sqrt(9.) * C1372;
    gy[1] += std::sqrt(9.) * C1374;
    gz[1] += std::sqrt(9.) * C1376;
    gx[2] += std::sqrt(9.) * C1379;
    gy[2] += std::sqrt(9.) * C1381;
    gz[2] += std::sqrt(9.) * C1383;
    gx[3] += std::sqrt(9.) * C1386;
    gy[3] += std::sqrt(9.) * C1388;
    gz[3] += std::sqrt(9.) * C1390;
    gx[4] += std::sqrt(9.) * C1393;
    gy[4] += std::sqrt(9.) * C1395;
    gz[4] += std::sqrt(9.) * C1397;
    gx[5] += std::sqrt(9.) * C1400;
    gy[5] += std::sqrt(9.) * C1402;
    gz[5] += std::sqrt(9.) * C1404;
    gx[6] += std::sqrt(9.) * C1407;
    gy[6] += std::sqrt(9.) * C1409;
    gz[6] += std::sqrt(9.) * C1411;
    gx[7] += std::sqrt(9.) * C1414;
    gy[7] += std::sqrt(9.) * C1416;
    gz[7] += std::sqrt(9.) * C1418;
    gx[8] += std::sqrt(9.) * C1421;
    gy[8] += std::sqrt(9.) * C1423;
    gz[8] += std::sqrt(9.) * C1425;
    gx[9] += std::sqrt(9.) * C1491;
    gy[9] += std::sqrt(9.) * C1493;
    gz[9] += std::sqrt(9.) * C1495;
    gx[10] += std::sqrt(9.) * C1498;
    gy[10] += std::sqrt(9.) * C1500;
    gz[10] += std::sqrt(9.) * C1502;
    gx[11] += std::sqrt(9.) * C1505;
    gy[11] += std::sqrt(9.) * C1507;
    gz[11] += std::sqrt(9.) * C1509;
    gx[12] += std::sqrt(9.) * C1512;
    gy[12] += std::sqrt(9.) * C1514;
    gz[12] += std::sqrt(9.) * C1516;
    gx[13] += std::sqrt(9.) * C1519;
    gy[13] += std::sqrt(9.) * C1521;
    gz[13] += std::sqrt(9.) * C1523;
    gx[14] += std::sqrt(9.) * C1526;
    gy[14] += std::sqrt(9.) * C1528;
    gz[14] += std::sqrt(9.) * C1530;
    gx[15] += std::sqrt(9.) * C1533;
    gy[15] += std::sqrt(9.) * C1535;
    gz[15] += std::sqrt(9.) * C1537;
    gx[16] += std::sqrt(9.) * C1540;
    gy[16] += std::sqrt(9.) * C1542;
    gz[16] += std::sqrt(9.) * C1544;
    gx[17] += std::sqrt(9.) * C1547;
    gy[17] += std::sqrt(9.) * C1549;
    gz[17] += std::sqrt(9.) * C1551;
    gx[18] += std::sqrt(3.0) * C1302 -
              (std::sqrt(0.75) * C1239 + std::sqrt(0.75) * C1176);
    gy[18] += std::sqrt(3.0) * C1304 -
              (std::sqrt(0.75) * C1241 + std::sqrt(0.75) * C1178);
    gz[18] += std::sqrt(3.0) * C1306 -
              (std::sqrt(0.75) * C1243 + std::sqrt(0.75) * C1180);
    gx[19] += std::sqrt(3.0) * C1309 -
              (std::sqrt(0.75) * C1246 + std::sqrt(0.75) * C1183);
    gy[19] += std::sqrt(3.0) * C1311 -
              (std::sqrt(0.75) * C1248 + std::sqrt(0.75) * C1185);
    gz[19] += std::sqrt(3.0) * C1313 -
              (std::sqrt(0.75) * C1250 + std::sqrt(0.75) * C1187);
    gx[20] += std::sqrt(3.0) * C1316 -
              (std::sqrt(0.75) * C1253 + std::sqrt(0.75) * C1190);
    gy[20] += std::sqrt(3.0) * C1318 -
              (std::sqrt(0.75) * C1255 + std::sqrt(0.75) * C1192);
    gz[20] += std::sqrt(3.0) * C1320 -
              (std::sqrt(0.75) * C1257 + std::sqrt(0.75) * C1194);
    gx[21] += std::sqrt(3.0) * C1323 -
              (std::sqrt(0.75) * C1260 + std::sqrt(0.75) * C1197);
    gy[21] += std::sqrt(3.0) * C1325 -
              (std::sqrt(0.75) * C1262 + std::sqrt(0.75) * C1199);
    gz[21] += std::sqrt(3.0) * C1327 -
              (std::sqrt(0.75) * C1264 + std::sqrt(0.75) * C1201);
    gx[22] += std::sqrt(3.0) * C1330 -
              (std::sqrt(0.75) * C1267 + std::sqrt(0.75) * C1204);
    gy[22] += std::sqrt(3.0) * C1332 -
              (std::sqrt(0.75) * C1269 + std::sqrt(0.75) * C1206);
    gz[22] += std::sqrt(3.0) * C1334 -
              (std::sqrt(0.75) * C1271 + std::sqrt(0.75) * C1208);
    gx[23] += std::sqrt(3.0) * C1337 -
              (std::sqrt(0.75) * C1274 + std::sqrt(0.75) * C1211);
    gy[23] += std::sqrt(3.0) * C1339 -
              (std::sqrt(0.75) * C1276 + std::sqrt(0.75) * C1213);
    gz[23] += std::sqrt(3.0) * C1341 -
              (std::sqrt(0.75) * C1278 + std::sqrt(0.75) * C1215);
    gx[24] += std::sqrt(3.0) * C1344 -
              (std::sqrt(0.75) * C1281 + std::sqrt(0.75) * C1218);
    gy[24] += std::sqrt(3.0) * C1346 -
              (std::sqrt(0.75) * C1283 + std::sqrt(0.75) * C1220);
    gz[24] += std::sqrt(3.0) * C1348 -
              (std::sqrt(0.75) * C1285 + std::sqrt(0.75) * C1222);
    gx[25] += std::sqrt(3.0) * C1351 -
              (std::sqrt(0.75) * C1288 + std::sqrt(0.75) * C1225);
    gy[25] += std::sqrt(3.0) * C1353 -
              (std::sqrt(0.75) * C1290 + std::sqrt(0.75) * C1227);
    gz[25] += std::sqrt(3.0) * C1355 -
              (std::sqrt(0.75) * C1292 + std::sqrt(0.75) * C1229);
    gx[26] += std::sqrt(3.0) * C1358 -
              (std::sqrt(0.75) * C1295 + std::sqrt(0.75) * C1232);
    gy[26] += std::sqrt(3.0) * C1360 -
              (std::sqrt(0.75) * C1297 + std::sqrt(0.75) * C1234);
    gz[26] += std::sqrt(3.0) * C1362 -
              (std::sqrt(0.75) * C1299 + std::sqrt(0.75) * C1236);
    gx[27] += std::sqrt(9.) * C1428;
    gy[27] += std::sqrt(9.) * C1430;
    gz[27] += std::sqrt(9.) * C1432;
    gx[28] += std::sqrt(9.) * C1435;
    gy[28] += std::sqrt(9.) * C1437;
    gz[28] += std::sqrt(9.) * C1439;
    gx[29] += std::sqrt(9.) * C1442;
    gy[29] += std::sqrt(9.) * C1444;
    gz[29] += std::sqrt(9.) * C1446;
    gx[30] += std::sqrt(9.) * C1449;
    gy[30] += std::sqrt(9.) * C1451;
    gz[30] += std::sqrt(9.) * C1453;
    gx[31] += std::sqrt(9.) * C1456;
    gy[31] += std::sqrt(9.) * C1458;
    gz[31] += std::sqrt(9.) * C1460;
    gx[32] += std::sqrt(9.) * C1463;
    gy[32] += std::sqrt(9.) * C1465;
    gz[32] += std::sqrt(9.) * C1467;
    gx[33] += std::sqrt(9.) * C1470;
    gy[33] += std::sqrt(9.) * C1472;
    gz[33] += std::sqrt(9.) * C1474;
    gx[34] += std::sqrt(9.) * C1477;
    gy[34] += std::sqrt(9.) * C1479;
    gz[34] += std::sqrt(9.) * C1481;
    gx[35] += std::sqrt(9.) * C1484;
    gy[35] += std::sqrt(9.) * C1486;
    gz[35] += std::sqrt(9.) * C1488;
    gx[36] += std::sqrt(2.25) * C1176 - std::sqrt(2.25) * C1239;
    gy[36] += std::sqrt(2.25) * C1178 - std::sqrt(2.25) * C1241;
    gz[36] += std::sqrt(2.25) * C1180 - std::sqrt(2.25) * C1243;
    gx[37] += std::sqrt(2.25) * C1183 - std::sqrt(2.25) * C1246;
    gy[37] += std::sqrt(2.25) * C1185 - std::sqrt(2.25) * C1248;
    gz[37] += std::sqrt(2.25) * C1187 - std::sqrt(2.25) * C1250;
    gx[38] += std::sqrt(2.25) * C1190 - std::sqrt(2.25) * C1253;
    gy[38] += std::sqrt(2.25) * C1192 - std::sqrt(2.25) * C1255;
    gz[38] += std::sqrt(2.25) * C1194 - std::sqrt(2.25) * C1257;
    gx[39] += std::sqrt(2.25) * C1197 - std::sqrt(2.25) * C1260;
    gy[39] += std::sqrt(2.25) * C1199 - std::sqrt(2.25) * C1262;
    gz[39] += std::sqrt(2.25) * C1201 - std::sqrt(2.25) * C1264;
    gx[40] += std::sqrt(2.25) * C1204 - std::sqrt(2.25) * C1267;
    gy[40] += std::sqrt(2.25) * C1206 - std::sqrt(2.25) * C1269;
    gz[40] += std::sqrt(2.25) * C1208 - std::sqrt(2.25) * C1271;
    gx[41] += std::sqrt(2.25) * C1211 - std::sqrt(2.25) * C1274;
    gy[41] += std::sqrt(2.25) * C1213 - std::sqrt(2.25) * C1276;
    gz[41] += std::sqrt(2.25) * C1215 - std::sqrt(2.25) * C1278;
    gx[42] += std::sqrt(2.25) * C1218 - std::sqrt(2.25) * C1281;
    gy[42] += std::sqrt(2.25) * C1220 - std::sqrt(2.25) * C1283;
    gz[42] += std::sqrt(2.25) * C1222 - std::sqrt(2.25) * C1285;
    gx[43] += std::sqrt(2.25) * C1225 - std::sqrt(2.25) * C1288;
    gy[43] += std::sqrt(2.25) * C1227 - std::sqrt(2.25) * C1290;
    gz[43] += std::sqrt(2.25) * C1229 - std::sqrt(2.25) * C1292;
    gx[44] += std::sqrt(2.25) * C1232 - std::sqrt(2.25) * C1295;
    gy[44] += std::sqrt(2.25) * C1234 - std::sqrt(2.25) * C1297;
    gz[44] += std::sqrt(2.25) * C1236 - std::sqrt(2.25) * C1299;
    gx[45] += std::sqrt(9.) * C2121;
    gy[45] += std::sqrt(9.) * C2123;
    gz[45] += std::sqrt(9.) * C2125;
    gx[46] += std::sqrt(9.) * C2128;
    gy[46] += std::sqrt(9.) * C2130;
    gz[46] += std::sqrt(9.) * C2132;
    gx[47] += std::sqrt(9.) * C2135;
    gy[47] += std::sqrt(9.) * C2137;
    gz[47] += std::sqrt(9.) * C2139;
    gx[48] += std::sqrt(9.) * C2142;
    gy[48] += std::sqrt(9.) * C2144;
    gz[48] += std::sqrt(9.) * C2146;
    gx[49] += std::sqrt(9.) * C2149;
    gy[49] += std::sqrt(9.) * C2151;
    gz[49] += std::sqrt(9.) * C2153;
    gx[50] += std::sqrt(9.) * C2156;
    gy[50] += std::sqrt(9.) * C2158;
    gz[50] += std::sqrt(9.) * C2160;
    gx[51] += std::sqrt(9.) * C2163;
    gy[51] += std::sqrt(9.) * C2165;
    gz[51] += std::sqrt(9.) * C2167;
    gx[52] += std::sqrt(9.) * C2170;
    gy[52] += std::sqrt(9.) * C2172;
    gz[52] += std::sqrt(9.) * C2174;
    gx[53] += std::sqrt(9.) * C2177;
    gy[53] += std::sqrt(9.) * C2179;
    gz[53] += std::sqrt(9.) * C2181;
    gx[54] += std::sqrt(9.) * C2247;
    gy[54] += std::sqrt(9.) * C2249;
    gz[54] += std::sqrt(9.) * C2251;
    gx[55] += std::sqrt(9.) * C2254;
    gy[55] += std::sqrt(9.) * C2256;
    gz[55] += std::sqrt(9.) * C2258;
    gx[56] += std::sqrt(9.) * C2261;
    gy[56] += std::sqrt(9.) * C2263;
    gz[56] += std::sqrt(9.) * C2265;
    gx[57] += std::sqrt(9.) * C2268;
    gy[57] += std::sqrt(9.) * C2270;
    gz[57] += std::sqrt(9.) * C2272;
    gx[58] += std::sqrt(9.) * C2275;
    gy[58] += std::sqrt(9.) * C2277;
    gz[58] += std::sqrt(9.) * C2279;
    gx[59] += std::sqrt(9.) * C2282;
    gy[59] += std::sqrt(9.) * C2284;
    gz[59] += std::sqrt(9.) * C2286;
    gx[60] += std::sqrt(9.) * C2289;
    gy[60] += std::sqrt(9.) * C2291;
    gz[60] += std::sqrt(9.) * C2293;
    gx[61] += std::sqrt(9.) * C2296;
    gy[61] += std::sqrt(9.) * C2298;
    gz[61] += std::sqrt(9.) * C2300;
    gx[62] += std::sqrt(9.) * C2303;
    gy[62] += std::sqrt(9.) * C2305;
    gz[62] += std::sqrt(9.) * C2307;
    gx[63] += std::sqrt(3.0) * C2058 -
              (std::sqrt(0.75) * C1995 + std::sqrt(0.75) * C1932);
    gy[63] += std::sqrt(3.0) * C2060 -
              (std::sqrt(0.75) * C1997 + std::sqrt(0.75) * C1934);
    gz[63] += std::sqrt(3.0) * C2062 -
              (std::sqrt(0.75) * C1999 + std::sqrt(0.75) * C1936);
    gx[64] += std::sqrt(3.0) * C2065 -
              (std::sqrt(0.75) * C2002 + std::sqrt(0.75) * C1939);
    gy[64] += std::sqrt(3.0) * C2067 -
              (std::sqrt(0.75) * C2004 + std::sqrt(0.75) * C1941);
    gz[64] += std::sqrt(3.0) * C2069 -
              (std::sqrt(0.75) * C2006 + std::sqrt(0.75) * C1943);
    gx[65] += std::sqrt(3.0) * C2072 -
              (std::sqrt(0.75) * C2009 + std::sqrt(0.75) * C1946);
    gy[65] += std::sqrt(3.0) * C2074 -
              (std::sqrt(0.75) * C2011 + std::sqrt(0.75) * C1948);
    gz[65] += std::sqrt(3.0) * C2076 -
              (std::sqrt(0.75) * C2013 + std::sqrt(0.75) * C1950);
    gx[66] += std::sqrt(3.0) * C2079 -
              (std::sqrt(0.75) * C2016 + std::sqrt(0.75) * C1953);
    gy[66] += std::sqrt(3.0) * C2081 -
              (std::sqrt(0.75) * C2018 + std::sqrt(0.75) * C1955);
    gz[66] += std::sqrt(3.0) * C2083 -
              (std::sqrt(0.75) * C2020 + std::sqrt(0.75) * C1957);
    gx[67] += std::sqrt(3.0) * C2086 -
              (std::sqrt(0.75) * C2023 + std::sqrt(0.75) * C1960);
    gy[67] += std::sqrt(3.0) * C2088 -
              (std::sqrt(0.75) * C2025 + std::sqrt(0.75) * C1962);
    gz[67] += std::sqrt(3.0) * C2090 -
              (std::sqrt(0.75) * C2027 + std::sqrt(0.75) * C1964);
    gx[68] += std::sqrt(3.0) * C2093 -
              (std::sqrt(0.75) * C2030 + std::sqrt(0.75) * C1967);
    gy[68] += std::sqrt(3.0) * C2095 -
              (std::sqrt(0.75) * C2032 + std::sqrt(0.75) * C1969);
    gz[68] += std::sqrt(3.0) * C2097 -
              (std::sqrt(0.75) * C2034 + std::sqrt(0.75) * C1971);
    gx[69] += std::sqrt(3.0) * C2100 -
              (std::sqrt(0.75) * C2037 + std::sqrt(0.75) * C1974);
    gy[69] += std::sqrt(3.0) * C2102 -
              (std::sqrt(0.75) * C2039 + std::sqrt(0.75) * C1976);
    gz[69] += std::sqrt(3.0) * C2104 -
              (std::sqrt(0.75) * C2041 + std::sqrt(0.75) * C1978);
    gx[70] += std::sqrt(3.0) * C2107 -
              (std::sqrt(0.75) * C2044 + std::sqrt(0.75) * C1981);
    gy[70] += std::sqrt(3.0) * C2109 -
              (std::sqrt(0.75) * C2046 + std::sqrt(0.75) * C1983);
    gz[70] += std::sqrt(3.0) * C2111 -
              (std::sqrt(0.75) * C2048 + std::sqrt(0.75) * C1985);
    gx[71] += std::sqrt(3.0) * C2114 -
              (std::sqrt(0.75) * C2051 + std::sqrt(0.75) * C1988);
    gy[71] += std::sqrt(3.0) * C2116 -
              (std::sqrt(0.75) * C2053 + std::sqrt(0.75) * C1990);
    gz[71] += std::sqrt(3.0) * C2118 -
              (std::sqrt(0.75) * C2055 + std::sqrt(0.75) * C1992);
    gx[72] += std::sqrt(9.) * C2184;
    gy[72] += std::sqrt(9.) * C2186;
    gz[72] += std::sqrt(9.) * C2188;
    gx[73] += std::sqrt(9.) * C2191;
    gy[73] += std::sqrt(9.) * C2193;
    gz[73] += std::sqrt(9.) * C2195;
    gx[74] += std::sqrt(9.) * C2198;
    gy[74] += std::sqrt(9.) * C2200;
    gz[74] += std::sqrt(9.) * C2202;
    gx[75] += std::sqrt(9.) * C2205;
    gy[75] += std::sqrt(9.) * C2207;
    gz[75] += std::sqrt(9.) * C2209;
    gx[76] += std::sqrt(9.) * C2212;
    gy[76] += std::sqrt(9.) * C2214;
    gz[76] += std::sqrt(9.) * C2216;
    gx[77] += std::sqrt(9.) * C2219;
    gy[77] += std::sqrt(9.) * C2221;
    gz[77] += std::sqrt(9.) * C2223;
    gx[78] += std::sqrt(9.) * C2226;
    gy[78] += std::sqrt(9.) * C2228;
    gz[78] += std::sqrt(9.) * C2230;
    gx[79] += std::sqrt(9.) * C2233;
    gy[79] += std::sqrt(9.) * C2235;
    gz[79] += std::sqrt(9.) * C2237;
    gx[80] += std::sqrt(9.) * C2240;
    gy[80] += std::sqrt(9.) * C2242;
    gz[80] += std::sqrt(9.) * C2244;
    gx[81] += std::sqrt(2.25) * C1932 - std::sqrt(2.25) * C1995;
    gy[81] += std::sqrt(2.25) * C1934 - std::sqrt(2.25) * C1997;
    gz[81] += std::sqrt(2.25) * C1936 - std::sqrt(2.25) * C1999;
    gx[82] += std::sqrt(2.25) * C1939 - std::sqrt(2.25) * C2002;
    gy[82] += std::sqrt(2.25) * C1941 - std::sqrt(2.25) * C2004;
    gz[82] += std::sqrt(2.25) * C1943 - std::sqrt(2.25) * C2006;
    gx[83] += std::sqrt(2.25) * C1946 - std::sqrt(2.25) * C2009;
    gy[83] += std::sqrt(2.25) * C1948 - std::sqrt(2.25) * C2011;
    gz[83] += std::sqrt(2.25) * C1950 - std::sqrt(2.25) * C2013;
    gx[84] += std::sqrt(2.25) * C1953 - std::sqrt(2.25) * C2016;
    gy[84] += std::sqrt(2.25) * C1955 - std::sqrt(2.25) * C2018;
    gz[84] += std::sqrt(2.25) * C1957 - std::sqrt(2.25) * C2020;
    gx[85] += std::sqrt(2.25) * C1960 - std::sqrt(2.25) * C2023;
    gy[85] += std::sqrt(2.25) * C1962 - std::sqrt(2.25) * C2025;
    gz[85] += std::sqrt(2.25) * C1964 - std::sqrt(2.25) * C2027;
    gx[86] += std::sqrt(2.25) * C1967 - std::sqrt(2.25) * C2030;
    gy[86] += std::sqrt(2.25) * C1969 - std::sqrt(2.25) * C2032;
    gz[86] += std::sqrt(2.25) * C1971 - std::sqrt(2.25) * C2034;
    gx[87] += std::sqrt(2.25) * C1974 - std::sqrt(2.25) * C2037;
    gy[87] += std::sqrt(2.25) * C1976 - std::sqrt(2.25) * C2039;
    gz[87] += std::sqrt(2.25) * C1978 - std::sqrt(2.25) * C2041;
    gx[88] += std::sqrt(2.25) * C1981 - std::sqrt(2.25) * C2044;
    gy[88] += std::sqrt(2.25) * C1983 - std::sqrt(2.25) * C2046;
    gz[88] += std::sqrt(2.25) * C1985 - std::sqrt(2.25) * C2048;
    gx[89] += std::sqrt(2.25) * C1988 - std::sqrt(2.25) * C2051;
    gy[89] += std::sqrt(2.25) * C1990 - std::sqrt(2.25) * C2053;
    gz[89] += std::sqrt(2.25) * C1992 - std::sqrt(2.25) * C2055;
    gx[90] += std::sqrt(3.0) * C987 -
              (std::sqrt(0.75) * C609 + std::sqrt(0.75) * C231);
    gy[90] += std::sqrt(3.0) * C989 -
              (std::sqrt(0.75) * C611 + std::sqrt(0.75) * C233);
    gz[90] += std::sqrt(3.0) * C991 -
              (std::sqrt(0.75) * C613 + std::sqrt(0.75) * C235);
    gx[91] += std::sqrt(3.0) * C994 -
              (std::sqrt(0.75) * C616 + std::sqrt(0.75) * C238);
    gy[91] += std::sqrt(3.0) * C996 -
              (std::sqrt(0.75) * C618 + std::sqrt(0.75) * C240);
    gz[91] += std::sqrt(3.0) * C998 -
              (std::sqrt(0.75) * C620 + std::sqrt(0.75) * C242);
    gx[92] += std::sqrt(3.0) * C1001 -
              (std::sqrt(0.75) * C623 + std::sqrt(0.75) * C245);
    gy[92] += std::sqrt(3.0) * C1003 -
              (std::sqrt(0.75) * C625 + std::sqrt(0.75) * C247);
    gz[92] += std::sqrt(3.0) * C1005 -
              (std::sqrt(0.75) * C627 + std::sqrt(0.75) * C249);
    gx[93] += std::sqrt(3.0) * C1008 -
              (std::sqrt(0.75) * C630 + std::sqrt(0.75) * C252);
    gy[93] += std::sqrt(3.0) * C1010 -
              (std::sqrt(0.75) * C632 + std::sqrt(0.75) * C254);
    gz[93] += std::sqrt(3.0) * C1012 -
              (std::sqrt(0.75) * C634 + std::sqrt(0.75) * C256);
    gx[94] += std::sqrt(3.0) * C1015 -
              (std::sqrt(0.75) * C637 + std::sqrt(0.75) * C259);
    gy[94] += std::sqrt(3.0) * C1017 -
              (std::sqrt(0.75) * C639 + std::sqrt(0.75) * C261);
    gz[94] += std::sqrt(3.0) * C1019 -
              (std::sqrt(0.75) * C641 + std::sqrt(0.75) * C263);
    gx[95] += std::sqrt(3.0) * C1022 -
              (std::sqrt(0.75) * C644 + std::sqrt(0.75) * C266);
    gy[95] += std::sqrt(3.0) * C1024 -
              (std::sqrt(0.75) * C646 + std::sqrt(0.75) * C268);
    gz[95] += std::sqrt(3.0) * C1026 -
              (std::sqrt(0.75) * C648 + std::sqrt(0.75) * C270);
    gx[96] += std::sqrt(3.0) * C1029 -
              (std::sqrt(0.75) * C651 + std::sqrt(0.75) * C273);
    gy[96] += std::sqrt(3.0) * C1031 -
              (std::sqrt(0.75) * C653 + std::sqrt(0.75) * C275);
    gz[96] += std::sqrt(3.0) * C1033 -
              (std::sqrt(0.75) * C655 + std::sqrt(0.75) * C277);
    gx[97] += std::sqrt(3.0) * C1036 -
              (std::sqrt(0.75) * C658 + std::sqrt(0.75) * C280);
    gy[97] += std::sqrt(3.0) * C1038 -
              (std::sqrt(0.75) * C660 + std::sqrt(0.75) * C282);
    gz[97] += std::sqrt(3.0) * C1040 -
              (std::sqrt(0.75) * C662 + std::sqrt(0.75) * C284);
    gx[98] += std::sqrt(3.0) * C1043 -
              (std::sqrt(0.75) * C665 + std::sqrt(0.75) * C287);
    gy[98] += std::sqrt(3.0) * C1045 -
              (std::sqrt(0.75) * C667 + std::sqrt(0.75) * C289);
    gz[98] += std::sqrt(3.0) * C1047 -
              (std::sqrt(0.75) * C669 + std::sqrt(0.75) * C291);
    gx[99] += std::sqrt(3.0) * C1113 -
              (std::sqrt(0.75) * C735 + std::sqrt(0.75) * C357);
    gy[99] += std::sqrt(3.0) * C1115 -
              (std::sqrt(0.75) * C737 + std::sqrt(0.75) * C359);
    gz[99] += std::sqrt(3.0) * C1117 -
              (std::sqrt(0.75) * C739 + std::sqrt(0.75) * C361);
    gx[100] += std::sqrt(3.0) * C1120 -
               (std::sqrt(0.75) * C742 + std::sqrt(0.75) * C364);
    gy[100] += std::sqrt(3.0) * C1122 -
               (std::sqrt(0.75) * C744 + std::sqrt(0.75) * C366);
    gz[100] += std::sqrt(3.0) * C1124 -
               (std::sqrt(0.75) * C746 + std::sqrt(0.75) * C368);
    gx[101] += std::sqrt(3.0) * C1127 -
               (std::sqrt(0.75) * C749 + std::sqrt(0.75) * C371);
    gy[101] += std::sqrt(3.0) * C1129 -
               (std::sqrt(0.75) * C751 + std::sqrt(0.75) * C373);
    gz[101] += std::sqrt(3.0) * C1131 -
               (std::sqrt(0.75) * C753 + std::sqrt(0.75) * C375);
    gx[102] += std::sqrt(3.0) * C1134 -
               (std::sqrt(0.75) * C756 + std::sqrt(0.75) * C378);
    gy[102] += std::sqrt(3.0) * C1136 -
               (std::sqrt(0.75) * C758 + std::sqrt(0.75) * C380);
    gz[102] += std::sqrt(3.0) * C1138 -
               (std::sqrt(0.75) * C760 + std::sqrt(0.75) * C382);
    gx[103] += std::sqrt(3.0) * C1141 -
               (std::sqrt(0.75) * C763 + std::sqrt(0.75) * C385);
    gy[103] += std::sqrt(3.0) * C1143 -
               (std::sqrt(0.75) * C765 + std::sqrt(0.75) * C387);
    gz[103] += std::sqrt(3.0) * C1145 -
               (std::sqrt(0.75) * C767 + std::sqrt(0.75) * C389);
    gx[104] += std::sqrt(3.0) * C1148 -
               (std::sqrt(0.75) * C770 + std::sqrt(0.75) * C392);
    gy[104] += std::sqrt(3.0) * C1150 -
               (std::sqrt(0.75) * C772 + std::sqrt(0.75) * C394);
    gz[104] += std::sqrt(3.0) * C1152 -
               (std::sqrt(0.75) * C774 + std::sqrt(0.75) * C396);
    gx[105] += std::sqrt(3.0) * C1155 -
               (std::sqrt(0.75) * C777 + std::sqrt(0.75) * C399);
    gy[105] += std::sqrt(3.0) * C1157 -
               (std::sqrt(0.75) * C779 + std::sqrt(0.75) * C401);
    gz[105] += std::sqrt(3.0) * C1159 -
               (std::sqrt(0.75) * C781 + std::sqrt(0.75) * C403);
    gx[106] += std::sqrt(3.0) * C1162 -
               (std::sqrt(0.75) * C784 + std::sqrt(0.75) * C406);
    gy[106] += std::sqrt(3.0) * C1164 -
               (std::sqrt(0.75) * C786 + std::sqrt(0.75) * C408);
    gz[106] += std::sqrt(3.0) * C1166 -
               (std::sqrt(0.75) * C788 + std::sqrt(0.75) * C410);
    gx[107] += std::sqrt(3.0) * C1169 -
               (std::sqrt(0.75) * C791 + std::sqrt(0.75) * C413);
    gy[107] += std::sqrt(3.0) * C1171 -
               (std::sqrt(0.75) * C793 + std::sqrt(0.75) * C415);
    gz[107] += std::sqrt(3.0) * C1173 -
               (std::sqrt(0.75) * C795 + std::sqrt(0.75) * C417);
    gx[108] += 0.25 * C40 + 0.25 * C105 - 0.5 * C168 + 0.25 * C420 +
               0.25 * C483 - 0.5 * C546 - 0.5 * C798 - 0.5 * C861 + C924;
    gy[108] += 0.25 * C44 + 0.25 * C107 - 0.5 * C170 + 0.25 * C422 +
               0.25 * C485 - 0.5 * C548 - 0.5 * C800 - 0.5 * C863 + C926;
    gz[108] += 0.25 * C46 + 0.25 * C109 - 0.5 * C172 + 0.25 * C424 +
               0.25 * C487 - 0.5 * C550 - 0.5 * C802 - 0.5 * C865 + C928;
    gx[109] += 0.25 * C49 + 0.25 * C112 - 0.5 * C175 + 0.25 * C427 +
               0.25 * C490 - 0.5 * C553 - 0.5 * C805 - 0.5 * C868 + C931;
    gy[109] += 0.25 * C51 + 0.25 * C114 - 0.5 * C177 + 0.25 * C429 +
               0.25 * C492 - 0.5 * C555 - 0.5 * C807 - 0.5 * C870 + C933;
    gz[109] += 0.25 * C53 + 0.25 * C116 - 0.5 * C179 + 0.25 * C431 +
               0.25 * C494 - 0.5 * C557 - 0.5 * C809 - 0.5 * C872 + C935;
    gx[110] += 0.25 * C56 + 0.25 * C119 - 0.5 * C182 + 0.25 * C434 +
               0.25 * C497 - 0.5 * C560 - 0.5 * C812 - 0.5 * C875 + C938;
    gy[110] += 0.25 * C58 + 0.25 * C121 - 0.5 * C184 + 0.25 * C436 +
               0.25 * C499 - 0.5 * C562 - 0.5 * C814 - 0.5 * C877 + C940;
    gz[110] += 0.25 * C60 + 0.25 * C123 - 0.5 * C186 + 0.25 * C438 +
               0.25 * C501 - 0.5 * C564 - 0.5 * C816 - 0.5 * C879 + C942;
    gx[111] += 0.25 * C63 + 0.25 * C126 - 0.5 * C189 + 0.25 * C441 +
               0.25 * C504 - 0.5 * C567 - 0.5 * C819 - 0.5 * C882 + C945;
    gy[111] += 0.25 * C65 + 0.25 * C128 - 0.5 * C191 + 0.25 * C443 +
               0.25 * C506 - 0.5 * C569 - 0.5 * C821 - 0.5 * C884 + C947;
    gz[111] += 0.25 * C67 + 0.25 * C130 - 0.5 * C193 + 0.25 * C445 +
               0.25 * C508 - 0.5 * C571 - 0.5 * C823 - 0.5 * C886 + C949;
    gx[112] += 0.25 * C70 + 0.25 * C133 - 0.5 * C196 + 0.25 * C448 +
               0.25 * C511 - 0.5 * C574 - 0.5 * C826 - 0.5 * C889 + C952;
    gy[112] += 0.25 * C72 + 0.25 * C135 - 0.5 * C198 + 0.25 * C450 +
               0.25 * C513 - 0.5 * C576 - 0.5 * C828 - 0.5 * C891 + C954;
    gz[112] += 0.25 * C74 + 0.25 * C137 - 0.5 * C200 + 0.25 * C452 +
               0.25 * C515 - 0.5 * C578 - 0.5 * C830 - 0.5 * C893 + C956;
    gx[113] += 0.25 * C77 + 0.25 * C140 - 0.5 * C203 + 0.25 * C455 +
               0.25 * C518 - 0.5 * C581 - 0.5 * C833 - 0.5 * C896 + C959;
    gy[113] += 0.25 * C79 + 0.25 * C142 - 0.5 * C205 + 0.25 * C457 +
               0.25 * C520 - 0.5 * C583 - 0.5 * C835 - 0.5 * C898 + C961;
    gz[113] += 0.25 * C81 + 0.25 * C144 - 0.5 * C207 + 0.25 * C459 +
               0.25 * C522 - 0.5 * C585 - 0.5 * C837 - 0.5 * C900 + C963;
    gx[114] += 0.25 * C84 + 0.25 * C147 - 0.5 * C210 + 0.25 * C462 +
               0.25 * C525 - 0.5 * C588 - 0.5 * C840 - 0.5 * C903 + C966;
    gy[114] += 0.25 * C86 + 0.25 * C149 - 0.5 * C212 + 0.25 * C464 +
               0.25 * C527 - 0.5 * C590 - 0.5 * C842 - 0.5 * C905 + C968;
    gz[114] += 0.25 * C88 + 0.25 * C151 - 0.5 * C214 + 0.25 * C466 +
               0.25 * C529 - 0.5 * C592 - 0.5 * C844 - 0.5 * C907 + C970;
    gx[115] += 0.25 * C91 + 0.25 * C154 - 0.5 * C217 + 0.25 * C469 +
               0.25 * C532 - 0.5 * C595 - 0.5 * C847 - 0.5 * C910 + C973;
    gy[115] += 0.25 * C93 + 0.25 * C156 - 0.5 * C219 + 0.25 * C471 +
               0.25 * C534 - 0.5 * C597 - 0.5 * C849 - 0.5 * C912 + C975;
    gz[115] += 0.25 * C95 + 0.25 * C158 - 0.5 * C221 + 0.25 * C473 +
               0.25 * C536 - 0.5 * C599 - 0.5 * C851 - 0.5 * C914 + C977;
    gx[116] += 0.25 * C98 + 0.25 * C161 - 0.5 * C224 + 0.25 * C476 +
               0.25 * C539 - 0.5 * C602 - 0.5 * C854 - 0.5 * C917 + C980;
    gy[116] += 0.25 * C100 + 0.25 * C163 - 0.5 * C226 + 0.25 * C478 +
               0.25 * C541 - 0.5 * C604 - 0.5 * C856 - 0.5 * C919 + C982;
    gz[116] += 0.25 * C102 + 0.25 * C165 - 0.5 * C228 + 0.25 * C480 +
               0.25 * C543 - 0.5 * C606 - 0.5 * C858 - 0.5 * C921 + C984;
    gx[117] += std::sqrt(3.0) * C1050 -
               (std::sqrt(0.75) * C672 + std::sqrt(0.75) * C294);
    gy[117] += std::sqrt(3.0) * C1052 -
               (std::sqrt(0.75) * C674 + std::sqrt(0.75) * C296);
    gz[117] += std::sqrt(3.0) * C1054 -
               (std::sqrt(0.75) * C676 + std::sqrt(0.75) * C298);
    gx[118] += std::sqrt(3.0) * C1057 -
               (std::sqrt(0.75) * C679 + std::sqrt(0.75) * C301);
    gy[118] += std::sqrt(3.0) * C1059 -
               (std::sqrt(0.75) * C681 + std::sqrt(0.75) * C303);
    gz[118] += std::sqrt(3.0) * C1061 -
               (std::sqrt(0.75) * C683 + std::sqrt(0.75) * C305);
    gx[119] += std::sqrt(3.0) * C1064 -
               (std::sqrt(0.75) * C686 + std::sqrt(0.75) * C308);
    gy[119] += std::sqrt(3.0) * C1066 -
               (std::sqrt(0.75) * C688 + std::sqrt(0.75) * C310);
    gz[119] += std::sqrt(3.0) * C1068 -
               (std::sqrt(0.75) * C690 + std::sqrt(0.75) * C312);
    gx[120] += std::sqrt(3.0) * C1071 -
               (std::sqrt(0.75) * C693 + std::sqrt(0.75) * C315);
    gy[120] += std::sqrt(3.0) * C1073 -
               (std::sqrt(0.75) * C695 + std::sqrt(0.75) * C317);
    gz[120] += std::sqrt(3.0) * C1075 -
               (std::sqrt(0.75) * C697 + std::sqrt(0.75) * C319);
    gx[121] += std::sqrt(3.0) * C1078 -
               (std::sqrt(0.75) * C700 + std::sqrt(0.75) * C322);
    gy[121] += std::sqrt(3.0) * C1080 -
               (std::sqrt(0.75) * C702 + std::sqrt(0.75) * C324);
    gz[121] += std::sqrt(3.0) * C1082 -
               (std::sqrt(0.75) * C704 + std::sqrt(0.75) * C326);
    gx[122] += std::sqrt(3.0) * C1085 -
               (std::sqrt(0.75) * C707 + std::sqrt(0.75) * C329);
    gy[122] += std::sqrt(3.0) * C1087 -
               (std::sqrt(0.75) * C709 + std::sqrt(0.75) * C331);
    gz[122] += std::sqrt(3.0) * C1089 -
               (std::sqrt(0.75) * C711 + std::sqrt(0.75) * C333);
    gx[123] += std::sqrt(3.0) * C1092 -
               (std::sqrt(0.75) * C714 + std::sqrt(0.75) * C336);
    gy[123] += std::sqrt(3.0) * C1094 -
               (std::sqrt(0.75) * C716 + std::sqrt(0.75) * C338);
    gz[123] += std::sqrt(3.0) * C1096 -
               (std::sqrt(0.75) * C718 + std::sqrt(0.75) * C340);
    gx[124] += std::sqrt(3.0) * C1099 -
               (std::sqrt(0.75) * C721 + std::sqrt(0.75) * C343);
    gy[124] += std::sqrt(3.0) * C1101 -
               (std::sqrt(0.75) * C723 + std::sqrt(0.75) * C345);
    gz[124] += std::sqrt(3.0) * C1103 -
               (std::sqrt(0.75) * C725 + std::sqrt(0.75) * C347);
    gx[125] += std::sqrt(3.0) * C1106 -
               (std::sqrt(0.75) * C728 + std::sqrt(0.75) * C350);
    gy[125] += std::sqrt(3.0) * C1108 -
               (std::sqrt(0.75) * C730 + std::sqrt(0.75) * C352);
    gz[125] += std::sqrt(3.0) * C1110 -
               (std::sqrt(0.75) * C732 + std::sqrt(0.75) * C354);
    gx[126] += std::sqrt(0.1875) * C105 - std::sqrt(0.1875) * C40 -
               std::sqrt(0.1875) * C420 + std::sqrt(0.1875) * C483 +
               std::sqrt(0.75) * C798 - std::sqrt(0.75) * C861;
    gy[126] += std::sqrt(0.1875) * C107 - std::sqrt(0.1875) * C44 -
               std::sqrt(0.1875) * C422 + std::sqrt(0.1875) * C485 +
               std::sqrt(0.75) * C800 - std::sqrt(0.75) * C863;
    gz[126] += std::sqrt(0.1875) * C109 - std::sqrt(0.1875) * C46 -
               std::sqrt(0.1875) * C424 + std::sqrt(0.1875) * C487 +
               std::sqrt(0.75) * C802 - std::sqrt(0.75) * C865;
    gx[127] += std::sqrt(0.1875) * C112 - std::sqrt(0.1875) * C49 -
               std::sqrt(0.1875) * C427 + std::sqrt(0.1875) * C490 +
               std::sqrt(0.75) * C805 - std::sqrt(0.75) * C868;
    gy[127] += std::sqrt(0.1875) * C114 - std::sqrt(0.1875) * C51 -
               std::sqrt(0.1875) * C429 + std::sqrt(0.1875) * C492 +
               std::sqrt(0.75) * C807 - std::sqrt(0.75) * C870;
    gz[127] += std::sqrt(0.1875) * C116 - std::sqrt(0.1875) * C53 -
               std::sqrt(0.1875) * C431 + std::sqrt(0.1875) * C494 +
               std::sqrt(0.75) * C809 - std::sqrt(0.75) * C872;
    gx[128] += std::sqrt(0.1875) * C119 - std::sqrt(0.1875) * C56 -
               std::sqrt(0.1875) * C434 + std::sqrt(0.1875) * C497 +
               std::sqrt(0.75) * C812 - std::sqrt(0.75) * C875;
    gy[128] += std::sqrt(0.1875) * C121 - std::sqrt(0.1875) * C58 -
               std::sqrt(0.1875) * C436 + std::sqrt(0.1875) * C499 +
               std::sqrt(0.75) * C814 - std::sqrt(0.75) * C877;
    gz[128] += std::sqrt(0.1875) * C123 - std::sqrt(0.1875) * C60 -
               std::sqrt(0.1875) * C438 + std::sqrt(0.1875) * C501 +
               std::sqrt(0.75) * C816 - std::sqrt(0.75) * C879;
    gx[129] += std::sqrt(0.1875) * C126 - std::sqrt(0.1875) * C63 -
               std::sqrt(0.1875) * C441 + std::sqrt(0.1875) * C504 +
               std::sqrt(0.75) * C819 - std::sqrt(0.75) * C882;
    gy[129] += std::sqrt(0.1875) * C128 - std::sqrt(0.1875) * C65 -
               std::sqrt(0.1875) * C443 + std::sqrt(0.1875) * C506 +
               std::sqrt(0.75) * C821 - std::sqrt(0.75) * C884;
    gz[129] += std::sqrt(0.1875) * C130 - std::sqrt(0.1875) * C67 -
               std::sqrt(0.1875) * C445 + std::sqrt(0.1875) * C508 +
               std::sqrt(0.75) * C823 - std::sqrt(0.75) * C886;
    gx[130] += std::sqrt(0.1875) * C133 - std::sqrt(0.1875) * C70 -
               std::sqrt(0.1875) * C448 + std::sqrt(0.1875) * C511 +
               std::sqrt(0.75) * C826 - std::sqrt(0.75) * C889;
    gy[130] += std::sqrt(0.1875) * C135 - std::sqrt(0.1875) * C72 -
               std::sqrt(0.1875) * C450 + std::sqrt(0.1875) * C513 +
               std::sqrt(0.75) * C828 - std::sqrt(0.75) * C891;
    gz[130] += std::sqrt(0.1875) * C137 - std::sqrt(0.1875) * C74 -
               std::sqrt(0.1875) * C452 + std::sqrt(0.1875) * C515 +
               std::sqrt(0.75) * C830 - std::sqrt(0.75) * C893;
    gx[131] += std::sqrt(0.1875) * C140 - std::sqrt(0.1875) * C77 -
               std::sqrt(0.1875) * C455 + std::sqrt(0.1875) * C518 +
               std::sqrt(0.75) * C833 - std::sqrt(0.75) * C896;
    gy[131] += std::sqrt(0.1875) * C142 - std::sqrt(0.1875) * C79 -
               std::sqrt(0.1875) * C457 + std::sqrt(0.1875) * C520 +
               std::sqrt(0.75) * C835 - std::sqrt(0.75) * C898;
    gz[131] += std::sqrt(0.1875) * C144 - std::sqrt(0.1875) * C81 -
               std::sqrt(0.1875) * C459 + std::sqrt(0.1875) * C522 +
               std::sqrt(0.75) * C837 - std::sqrt(0.75) * C900;
    gx[132] += std::sqrt(0.1875) * C147 - std::sqrt(0.1875) * C84 -
               std::sqrt(0.1875) * C462 + std::sqrt(0.1875) * C525 +
               std::sqrt(0.75) * C840 - std::sqrt(0.75) * C903;
    gy[132] += std::sqrt(0.1875) * C149 - std::sqrt(0.1875) * C86 -
               std::sqrt(0.1875) * C464 + std::sqrt(0.1875) * C527 +
               std::sqrt(0.75) * C842 - std::sqrt(0.75) * C905;
    gz[132] += std::sqrt(0.1875) * C151 - std::sqrt(0.1875) * C88 -
               std::sqrt(0.1875) * C466 + std::sqrt(0.1875) * C529 +
               std::sqrt(0.75) * C844 - std::sqrt(0.75) * C907;
    gx[133] += std::sqrt(0.1875) * C154 - std::sqrt(0.1875) * C91 -
               std::sqrt(0.1875) * C469 + std::sqrt(0.1875) * C532 +
               std::sqrt(0.75) * C847 - std::sqrt(0.75) * C910;
    gy[133] += std::sqrt(0.1875) * C156 - std::sqrt(0.1875) * C93 -
               std::sqrt(0.1875) * C471 + std::sqrt(0.1875) * C534 +
               std::sqrt(0.75) * C849 - std::sqrt(0.75) * C912;
    gz[133] += std::sqrt(0.1875) * C158 - std::sqrt(0.1875) * C95 -
               std::sqrt(0.1875) * C473 + std::sqrt(0.1875) * C536 +
               std::sqrt(0.75) * C851 - std::sqrt(0.75) * C914;
    gx[134] += std::sqrt(0.1875) * C161 - std::sqrt(0.1875) * C98 -
               std::sqrt(0.1875) * C476 + std::sqrt(0.1875) * C539 +
               std::sqrt(0.75) * C854 - std::sqrt(0.75) * C917;
    gy[134] += std::sqrt(0.1875) * C163 - std::sqrt(0.1875) * C100 -
               std::sqrt(0.1875) * C478 + std::sqrt(0.1875) * C541 +
               std::sqrt(0.75) * C856 - std::sqrt(0.75) * C919;
    gz[134] += std::sqrt(0.1875) * C165 - std::sqrt(0.1875) * C102 -
               std::sqrt(0.1875) * C480 + std::sqrt(0.1875) * C543 +
               std::sqrt(0.75) * C858 - std::sqrt(0.75) * C921;
    gx[135] += std::sqrt(9.) * C1743;
    gy[135] += std::sqrt(9.) * C1745;
    gz[135] += std::sqrt(9.) * C1747;
    gx[136] += std::sqrt(9.) * C1750;
    gy[136] += std::sqrt(9.) * C1752;
    gz[136] += std::sqrt(9.) * C1754;
    gx[137] += std::sqrt(9.) * C1757;
    gy[137] += std::sqrt(9.) * C1759;
    gz[137] += std::sqrt(9.) * C1761;
    gx[138] += std::sqrt(9.) * C1764;
    gy[138] += std::sqrt(9.) * C1766;
    gz[138] += std::sqrt(9.) * C1768;
    gx[139] += std::sqrt(9.) * C1771;
    gy[139] += std::sqrt(9.) * C1773;
    gz[139] += std::sqrt(9.) * C1775;
    gx[140] += std::sqrt(9.) * C1778;
    gy[140] += std::sqrt(9.) * C1780;
    gz[140] += std::sqrt(9.) * C1782;
    gx[141] += std::sqrt(9.) * C1785;
    gy[141] += std::sqrt(9.) * C1787;
    gz[141] += std::sqrt(9.) * C1789;
    gx[142] += std::sqrt(9.) * C1792;
    gy[142] += std::sqrt(9.) * C1794;
    gz[142] += std::sqrt(9.) * C1796;
    gx[143] += std::sqrt(9.) * C1799;
    gy[143] += std::sqrt(9.) * C1801;
    gz[143] += std::sqrt(9.) * C1803;
    gx[144] += std::sqrt(9.) * C1869;
    gy[144] += std::sqrt(9.) * C1871;
    gz[144] += std::sqrt(9.) * C1873;
    gx[145] += std::sqrt(9.) * C1876;
    gy[145] += std::sqrt(9.) * C1878;
    gz[145] += std::sqrt(9.) * C1880;
    gx[146] += std::sqrt(9.) * C1883;
    gy[146] += std::sqrt(9.) * C1885;
    gz[146] += std::sqrt(9.) * C1887;
    gx[147] += std::sqrt(9.) * C1890;
    gy[147] += std::sqrt(9.) * C1892;
    gz[147] += std::sqrt(9.) * C1894;
    gx[148] += std::sqrt(9.) * C1897;
    gy[148] += std::sqrt(9.) * C1899;
    gz[148] += std::sqrt(9.) * C1901;
    gx[149] += std::sqrt(9.) * C1904;
    gy[149] += std::sqrt(9.) * C1906;
    gz[149] += std::sqrt(9.) * C1908;
    gx[150] += std::sqrt(9.) * C1911;
    gy[150] += std::sqrt(9.) * C1913;
    gz[150] += std::sqrt(9.) * C1915;
    gx[151] += std::sqrt(9.) * C1918;
    gy[151] += std::sqrt(9.) * C1920;
    gz[151] += std::sqrt(9.) * C1922;
    gx[152] += std::sqrt(9.) * C1925;
    gy[152] += std::sqrt(9.) * C1927;
    gz[152] += std::sqrt(9.) * C1929;
    gx[153] += std::sqrt(3.0) * C1680 -
               (std::sqrt(0.75) * C1617 + std::sqrt(0.75) * C1554);
    gy[153] += std::sqrt(3.0) * C1682 -
               (std::sqrt(0.75) * C1619 + std::sqrt(0.75) * C1556);
    gz[153] += std::sqrt(3.0) * C1684 -
               (std::sqrt(0.75) * C1621 + std::sqrt(0.75) * C1558);
    gx[154] += std::sqrt(3.0) * C1687 -
               (std::sqrt(0.75) * C1624 + std::sqrt(0.75) * C1561);
    gy[154] += std::sqrt(3.0) * C1689 -
               (std::sqrt(0.75) * C1626 + std::sqrt(0.75) * C1563);
    gz[154] += std::sqrt(3.0) * C1691 -
               (std::sqrt(0.75) * C1628 + std::sqrt(0.75) * C1565);
    gx[155] += std::sqrt(3.0) * C1694 -
               (std::sqrt(0.75) * C1631 + std::sqrt(0.75) * C1568);
    gy[155] += std::sqrt(3.0) * C1696 -
               (std::sqrt(0.75) * C1633 + std::sqrt(0.75) * C1570);
    gz[155] += std::sqrt(3.0) * C1698 -
               (std::sqrt(0.75) * C1635 + std::sqrt(0.75) * C1572);
    gx[156] += std::sqrt(3.0) * C1701 -
               (std::sqrt(0.75) * C1638 + std::sqrt(0.75) * C1575);
    gy[156] += std::sqrt(3.0) * C1703 -
               (std::sqrt(0.75) * C1640 + std::sqrt(0.75) * C1577);
    gz[156] += std::sqrt(3.0) * C1705 -
               (std::sqrt(0.75) * C1642 + std::sqrt(0.75) * C1579);
    gx[157] += std::sqrt(3.0) * C1708 -
               (std::sqrt(0.75) * C1645 + std::sqrt(0.75) * C1582);
    gy[157] += std::sqrt(3.0) * C1710 -
               (std::sqrt(0.75) * C1647 + std::sqrt(0.75) * C1584);
    gz[157] += std::sqrt(3.0) * C1712 -
               (std::sqrt(0.75) * C1649 + std::sqrt(0.75) * C1586);
    gx[158] += std::sqrt(3.0) * C1715 -
               (std::sqrt(0.75) * C1652 + std::sqrt(0.75) * C1589);
    gy[158] += std::sqrt(3.0) * C1717 -
               (std::sqrt(0.75) * C1654 + std::sqrt(0.75) * C1591);
    gz[158] += std::sqrt(3.0) * C1719 -
               (std::sqrt(0.75) * C1656 + std::sqrt(0.75) * C1593);
    gx[159] += std::sqrt(3.0) * C1722 -
               (std::sqrt(0.75) * C1659 + std::sqrt(0.75) * C1596);
    gy[159] += std::sqrt(3.0) * C1724 -
               (std::sqrt(0.75) * C1661 + std::sqrt(0.75) * C1598);
    gz[159] += std::sqrt(3.0) * C1726 -
               (std::sqrt(0.75) * C1663 + std::sqrt(0.75) * C1600);
    gx[160] += std::sqrt(3.0) * C1729 -
               (std::sqrt(0.75) * C1666 + std::sqrt(0.75) * C1603);
    gy[160] += std::sqrt(3.0) * C1731 -
               (std::sqrt(0.75) * C1668 + std::sqrt(0.75) * C1605);
    gz[160] += std::sqrt(3.0) * C1733 -
               (std::sqrt(0.75) * C1670 + std::sqrt(0.75) * C1607);
    gx[161] += std::sqrt(3.0) * C1736 -
               (std::sqrt(0.75) * C1673 + std::sqrt(0.75) * C1610);
    gy[161] += std::sqrt(3.0) * C1738 -
               (std::sqrt(0.75) * C1675 + std::sqrt(0.75) * C1612);
    gz[161] += std::sqrt(3.0) * C1740 -
               (std::sqrt(0.75) * C1677 + std::sqrt(0.75) * C1614);
    gx[162] += std::sqrt(9.) * C1806;
    gy[162] += std::sqrt(9.) * C1808;
    gz[162] += std::sqrt(9.) * C1810;
    gx[163] += std::sqrt(9.) * C1813;
    gy[163] += std::sqrt(9.) * C1815;
    gz[163] += std::sqrt(9.) * C1817;
    gx[164] += std::sqrt(9.) * C1820;
    gy[164] += std::sqrt(9.) * C1822;
    gz[164] += std::sqrt(9.) * C1824;
    gx[165] += std::sqrt(9.) * C1827;
    gy[165] += std::sqrt(9.) * C1829;
    gz[165] += std::sqrt(9.) * C1831;
    gx[166] += std::sqrt(9.) * C1834;
    gy[166] += std::sqrt(9.) * C1836;
    gz[166] += std::sqrt(9.) * C1838;
    gx[167] += std::sqrt(9.) * C1841;
    gy[167] += std::sqrt(9.) * C1843;
    gz[167] += std::sqrt(9.) * C1845;
    gx[168] += std::sqrt(9.) * C1848;
    gy[168] += std::sqrt(9.) * C1850;
    gz[168] += std::sqrt(9.) * C1852;
    gx[169] += std::sqrt(9.) * C1855;
    gy[169] += std::sqrt(9.) * C1857;
    gz[169] += std::sqrt(9.) * C1859;
    gx[170] += std::sqrt(9.) * C1862;
    gy[170] += std::sqrt(9.) * C1864;
    gz[170] += std::sqrt(9.) * C1866;
    gx[171] += std::sqrt(2.25) * C1554 - std::sqrt(2.25) * C1617;
    gy[171] += std::sqrt(2.25) * C1556 - std::sqrt(2.25) * C1619;
    gz[171] += std::sqrt(2.25) * C1558 - std::sqrt(2.25) * C1621;
    gx[172] += std::sqrt(2.25) * C1561 - std::sqrt(2.25) * C1624;
    gy[172] += std::sqrt(2.25) * C1563 - std::sqrt(2.25) * C1626;
    gz[172] += std::sqrt(2.25) * C1565 - std::sqrt(2.25) * C1628;
    gx[173] += std::sqrt(2.25) * C1568 - std::sqrt(2.25) * C1631;
    gy[173] += std::sqrt(2.25) * C1570 - std::sqrt(2.25) * C1633;
    gz[173] += std::sqrt(2.25) * C1572 - std::sqrt(2.25) * C1635;
    gx[174] += std::sqrt(2.25) * C1575 - std::sqrt(2.25) * C1638;
    gy[174] += std::sqrt(2.25) * C1577 - std::sqrt(2.25) * C1640;
    gz[174] += std::sqrt(2.25) * C1579 - std::sqrt(2.25) * C1642;
    gx[175] += std::sqrt(2.25) * C1582 - std::sqrt(2.25) * C1645;
    gy[175] += std::sqrt(2.25) * C1584 - std::sqrt(2.25) * C1647;
    gz[175] += std::sqrt(2.25) * C1586 - std::sqrt(2.25) * C1649;
    gx[176] += std::sqrt(2.25) * C1589 - std::sqrt(2.25) * C1652;
    gy[176] += std::sqrt(2.25) * C1591 - std::sqrt(2.25) * C1654;
    gz[176] += std::sqrt(2.25) * C1593 - std::sqrt(2.25) * C1656;
    gx[177] += std::sqrt(2.25) * C1596 - std::sqrt(2.25) * C1659;
    gy[177] += std::sqrt(2.25) * C1598 - std::sqrt(2.25) * C1661;
    gz[177] += std::sqrt(2.25) * C1600 - std::sqrt(2.25) * C1663;
    gx[178] += std::sqrt(2.25) * C1603 - std::sqrt(2.25) * C1666;
    gy[178] += std::sqrt(2.25) * C1605 - std::sqrt(2.25) * C1668;
    gz[178] += std::sqrt(2.25) * C1607 - std::sqrt(2.25) * C1670;
    gx[179] += std::sqrt(2.25) * C1610 - std::sqrt(2.25) * C1673;
    gy[179] += std::sqrt(2.25) * C1612 - std::sqrt(2.25) * C1675;
    gz[179] += std::sqrt(2.25) * C1614 - std::sqrt(2.25) * C1677;
    gx[180] += std::sqrt(2.25) * C231 - std::sqrt(2.25) * C609;
    gy[180] += std::sqrt(2.25) * C233 - std::sqrt(2.25) * C611;
    gz[180] += std::sqrt(2.25) * C235 - std::sqrt(2.25) * C613;
    gx[181] += std::sqrt(2.25) * C238 - std::sqrt(2.25) * C616;
    gy[181] += std::sqrt(2.25) * C240 - std::sqrt(2.25) * C618;
    gz[181] += std::sqrt(2.25) * C242 - std::sqrt(2.25) * C620;
    gx[182] += std::sqrt(2.25) * C245 - std::sqrt(2.25) * C623;
    gy[182] += std::sqrt(2.25) * C247 - std::sqrt(2.25) * C625;
    gz[182] += std::sqrt(2.25) * C249 - std::sqrt(2.25) * C627;
    gx[183] += std::sqrt(2.25) * C252 - std::sqrt(2.25) * C630;
    gy[183] += std::sqrt(2.25) * C254 - std::sqrt(2.25) * C632;
    gz[183] += std::sqrt(2.25) * C256 - std::sqrt(2.25) * C634;
    gx[184] += std::sqrt(2.25) * C259 - std::sqrt(2.25) * C637;
    gy[184] += std::sqrt(2.25) * C261 - std::sqrt(2.25) * C639;
    gz[184] += std::sqrt(2.25) * C263 - std::sqrt(2.25) * C641;
    gx[185] += std::sqrt(2.25) * C266 - std::sqrt(2.25) * C644;
    gy[185] += std::sqrt(2.25) * C268 - std::sqrt(2.25) * C646;
    gz[185] += std::sqrt(2.25) * C270 - std::sqrt(2.25) * C648;
    gx[186] += std::sqrt(2.25) * C273 - std::sqrt(2.25) * C651;
    gy[186] += std::sqrt(2.25) * C275 - std::sqrt(2.25) * C653;
    gz[186] += std::sqrt(2.25) * C277 - std::sqrt(2.25) * C655;
    gx[187] += std::sqrt(2.25) * C280 - std::sqrt(2.25) * C658;
    gy[187] += std::sqrt(2.25) * C282 - std::sqrt(2.25) * C660;
    gz[187] += std::sqrt(2.25) * C284 - std::sqrt(2.25) * C662;
    gx[188] += std::sqrt(2.25) * C287 - std::sqrt(2.25) * C665;
    gy[188] += std::sqrt(2.25) * C289 - std::sqrt(2.25) * C667;
    gz[188] += std::sqrt(2.25) * C291 - std::sqrt(2.25) * C669;
    gx[189] += std::sqrt(2.25) * C357 - std::sqrt(2.25) * C735;
    gy[189] += std::sqrt(2.25) * C359 - std::sqrt(2.25) * C737;
    gz[189] += std::sqrt(2.25) * C361 - std::sqrt(2.25) * C739;
    gx[190] += std::sqrt(2.25) * C364 - std::sqrt(2.25) * C742;
    gy[190] += std::sqrt(2.25) * C366 - std::sqrt(2.25) * C744;
    gz[190] += std::sqrt(2.25) * C368 - std::sqrt(2.25) * C746;
    gx[191] += std::sqrt(2.25) * C371 - std::sqrt(2.25) * C749;
    gy[191] += std::sqrt(2.25) * C373 - std::sqrt(2.25) * C751;
    gz[191] += std::sqrt(2.25) * C375 - std::sqrt(2.25) * C753;
    gx[192] += std::sqrt(2.25) * C378 - std::sqrt(2.25) * C756;
    gy[192] += std::sqrt(2.25) * C380 - std::sqrt(2.25) * C758;
    gz[192] += std::sqrt(2.25) * C382 - std::sqrt(2.25) * C760;
    gx[193] += std::sqrt(2.25) * C385 - std::sqrt(2.25) * C763;
    gy[193] += std::sqrt(2.25) * C387 - std::sqrt(2.25) * C765;
    gz[193] += std::sqrt(2.25) * C389 - std::sqrt(2.25) * C767;
    gx[194] += std::sqrt(2.25) * C392 - std::sqrt(2.25) * C770;
    gy[194] += std::sqrt(2.25) * C394 - std::sqrt(2.25) * C772;
    gz[194] += std::sqrt(2.25) * C396 - std::sqrt(2.25) * C774;
    gx[195] += std::sqrt(2.25) * C399 - std::sqrt(2.25) * C777;
    gy[195] += std::sqrt(2.25) * C401 - std::sqrt(2.25) * C779;
    gz[195] += std::sqrt(2.25) * C403 - std::sqrt(2.25) * C781;
    gx[196] += std::sqrt(2.25) * C406 - std::sqrt(2.25) * C784;
    gy[196] += std::sqrt(2.25) * C408 - std::sqrt(2.25) * C786;
    gz[196] += std::sqrt(2.25) * C410 - std::sqrt(2.25) * C788;
    gx[197] += std::sqrt(2.25) * C413 - std::sqrt(2.25) * C791;
    gy[197] += std::sqrt(2.25) * C415 - std::sqrt(2.25) * C793;
    gz[197] += std::sqrt(2.25) * C417 - std::sqrt(2.25) * C795;
    gx[198] += std::sqrt(0.75) * C168 -
               (std::sqrt(0.1875) * C105 + std::sqrt(0.1875) * C40) +
               std::sqrt(0.1875) * C420 + std::sqrt(0.1875) * C483 -
               std::sqrt(0.75) * C546;
    gy[198] += std::sqrt(0.75) * C170 -
               (std::sqrt(0.1875) * C107 + std::sqrt(0.1875) * C44) +
               std::sqrt(0.1875) * C422 + std::sqrt(0.1875) * C485 -
               std::sqrt(0.75) * C548;
    gz[198] += std::sqrt(0.75) * C172 -
               (std::sqrt(0.1875) * C109 + std::sqrt(0.1875) * C46) +
               std::sqrt(0.1875) * C424 + std::sqrt(0.1875) * C487 -
               std::sqrt(0.75) * C550;
    gx[199] += std::sqrt(0.75) * C175 -
               (std::sqrt(0.1875) * C112 + std::sqrt(0.1875) * C49) +
               std::sqrt(0.1875) * C427 + std::sqrt(0.1875) * C490 -
               std::sqrt(0.75) * C553;
    gy[199] += std::sqrt(0.75) * C177 -
               (std::sqrt(0.1875) * C114 + std::sqrt(0.1875) * C51) +
               std::sqrt(0.1875) * C429 + std::sqrt(0.1875) * C492 -
               std::sqrt(0.75) * C555;
    gz[199] += std::sqrt(0.75) * C179 -
               (std::sqrt(0.1875) * C116 + std::sqrt(0.1875) * C53) +
               std::sqrt(0.1875) * C431 + std::sqrt(0.1875) * C494 -
               std::sqrt(0.75) * C557;
    gx[200] += std::sqrt(0.75) * C182 -
               (std::sqrt(0.1875) * C119 + std::sqrt(0.1875) * C56) +
               std::sqrt(0.1875) * C434 + std::sqrt(0.1875) * C497 -
               std::sqrt(0.75) * C560;
    gy[200] += std::sqrt(0.75) * C184 -
               (std::sqrt(0.1875) * C121 + std::sqrt(0.1875) * C58) +
               std::sqrt(0.1875) * C436 + std::sqrt(0.1875) * C499 -
               std::sqrt(0.75) * C562;
    gz[200] += std::sqrt(0.75) * C186 -
               (std::sqrt(0.1875) * C123 + std::sqrt(0.1875) * C60) +
               std::sqrt(0.1875) * C438 + std::sqrt(0.1875) * C501 -
               std::sqrt(0.75) * C564;
    gx[201] += std::sqrt(0.75) * C189 -
               (std::sqrt(0.1875) * C126 + std::sqrt(0.1875) * C63) +
               std::sqrt(0.1875) * C441 + std::sqrt(0.1875) * C504 -
               std::sqrt(0.75) * C567;
    gy[201] += std::sqrt(0.75) * C191 -
               (std::sqrt(0.1875) * C128 + std::sqrt(0.1875) * C65) +
               std::sqrt(0.1875) * C443 + std::sqrt(0.1875) * C506 -
               std::sqrt(0.75) * C569;
    gz[201] += std::sqrt(0.75) * C193 -
               (std::sqrt(0.1875) * C130 + std::sqrt(0.1875) * C67) +
               std::sqrt(0.1875) * C445 + std::sqrt(0.1875) * C508 -
               std::sqrt(0.75) * C571;
    gx[202] += std::sqrt(0.75) * C196 -
               (std::sqrt(0.1875) * C133 + std::sqrt(0.1875) * C70) +
               std::sqrt(0.1875) * C448 + std::sqrt(0.1875) * C511 -
               std::sqrt(0.75) * C574;
    gy[202] += std::sqrt(0.75) * C198 -
               (std::sqrt(0.1875) * C135 + std::sqrt(0.1875) * C72) +
               std::sqrt(0.1875) * C450 + std::sqrt(0.1875) * C513 -
               std::sqrt(0.75) * C576;
    gz[202] += std::sqrt(0.75) * C200 -
               (std::sqrt(0.1875) * C137 + std::sqrt(0.1875) * C74) +
               std::sqrt(0.1875) * C452 + std::sqrt(0.1875) * C515 -
               std::sqrt(0.75) * C578;
    gx[203] += std::sqrt(0.75) * C203 -
               (std::sqrt(0.1875) * C140 + std::sqrt(0.1875) * C77) +
               std::sqrt(0.1875) * C455 + std::sqrt(0.1875) * C518 -
               std::sqrt(0.75) * C581;
    gy[203] += std::sqrt(0.75) * C205 -
               (std::sqrt(0.1875) * C142 + std::sqrt(0.1875) * C79) +
               std::sqrt(0.1875) * C457 + std::sqrt(0.1875) * C520 -
               std::sqrt(0.75) * C583;
    gz[203] += std::sqrt(0.75) * C207 -
               (std::sqrt(0.1875) * C144 + std::sqrt(0.1875) * C81) +
               std::sqrt(0.1875) * C459 + std::sqrt(0.1875) * C522 -
               std::sqrt(0.75) * C585;
    gx[204] += std::sqrt(0.75) * C210 -
               (std::sqrt(0.1875) * C147 + std::sqrt(0.1875) * C84) +
               std::sqrt(0.1875) * C462 + std::sqrt(0.1875) * C525 -
               std::sqrt(0.75) * C588;
    gy[204] += std::sqrt(0.75) * C212 -
               (std::sqrt(0.1875) * C149 + std::sqrt(0.1875) * C86) +
               std::sqrt(0.1875) * C464 + std::sqrt(0.1875) * C527 -
               std::sqrt(0.75) * C590;
    gz[204] += std::sqrt(0.75) * C214 -
               (std::sqrt(0.1875) * C151 + std::sqrt(0.1875) * C88) +
               std::sqrt(0.1875) * C466 + std::sqrt(0.1875) * C529 -
               std::sqrt(0.75) * C592;
    gx[205] += std::sqrt(0.75) * C217 -
               (std::sqrt(0.1875) * C154 + std::sqrt(0.1875) * C91) +
               std::sqrt(0.1875) * C469 + std::sqrt(0.1875) * C532 -
               std::sqrt(0.75) * C595;
    gy[205] += std::sqrt(0.75) * C219 -
               (std::sqrt(0.1875) * C156 + std::sqrt(0.1875) * C93) +
               std::sqrt(0.1875) * C471 + std::sqrt(0.1875) * C534 -
               std::sqrt(0.75) * C597;
    gz[205] += std::sqrt(0.75) * C221 -
               (std::sqrt(0.1875) * C158 + std::sqrt(0.1875) * C95) +
               std::sqrt(0.1875) * C473 + std::sqrt(0.1875) * C536 -
               std::sqrt(0.75) * C599;
    gx[206] += std::sqrt(0.75) * C224 -
               (std::sqrt(0.1875) * C161 + std::sqrt(0.1875) * C98) +
               std::sqrt(0.1875) * C476 + std::sqrt(0.1875) * C539 -
               std::sqrt(0.75) * C602;
    gy[206] += std::sqrt(0.75) * C226 -
               (std::sqrt(0.1875) * C163 + std::sqrt(0.1875) * C100) +
               std::sqrt(0.1875) * C478 + std::sqrt(0.1875) * C541 -
               std::sqrt(0.75) * C604;
    gz[206] += std::sqrt(0.75) * C228 -
               (std::sqrt(0.1875) * C165 + std::sqrt(0.1875) * C102) +
               std::sqrt(0.1875) * C480 + std::sqrt(0.1875) * C543 -
               std::sqrt(0.75) * C606;
    gx[207] += std::sqrt(2.25) * C294 - std::sqrt(2.25) * C672;
    gy[207] += std::sqrt(2.25) * C296 - std::sqrt(2.25) * C674;
    gz[207] += std::sqrt(2.25) * C298 - std::sqrt(2.25) * C676;
    gx[208] += std::sqrt(2.25) * C301 - std::sqrt(2.25) * C679;
    gy[208] += std::sqrt(2.25) * C303 - std::sqrt(2.25) * C681;
    gz[208] += std::sqrt(2.25) * C305 - std::sqrt(2.25) * C683;
    gx[209] += std::sqrt(2.25) * C308 - std::sqrt(2.25) * C686;
    gy[209] += std::sqrt(2.25) * C310 - std::sqrt(2.25) * C688;
    gz[209] += std::sqrt(2.25) * C312 - std::sqrt(2.25) * C690;
    gx[210] += std::sqrt(2.25) * C315 - std::sqrt(2.25) * C693;
    gy[210] += std::sqrt(2.25) * C317 - std::sqrt(2.25) * C695;
    gz[210] += std::sqrt(2.25) * C319 - std::sqrt(2.25) * C697;
    gx[211] += std::sqrt(2.25) * C322 - std::sqrt(2.25) * C700;
    gy[211] += std::sqrt(2.25) * C324 - std::sqrt(2.25) * C702;
    gz[211] += std::sqrt(2.25) * C326 - std::sqrt(2.25) * C704;
    gx[212] += std::sqrt(2.25) * C329 - std::sqrt(2.25) * C707;
    gy[212] += std::sqrt(2.25) * C331 - std::sqrt(2.25) * C709;
    gz[212] += std::sqrt(2.25) * C333 - std::sqrt(2.25) * C711;
    gx[213] += std::sqrt(2.25) * C336 - std::sqrt(2.25) * C714;
    gy[213] += std::sqrt(2.25) * C338 - std::sqrt(2.25) * C716;
    gz[213] += std::sqrt(2.25) * C340 - std::sqrt(2.25) * C718;
    gx[214] += std::sqrt(2.25) * C343 - std::sqrt(2.25) * C721;
    gy[214] += std::sqrt(2.25) * C345 - std::sqrt(2.25) * C723;
    gz[214] += std::sqrt(2.25) * C347 - std::sqrt(2.25) * C725;
    gx[215] += std::sqrt(2.25) * C350 - std::sqrt(2.25) * C728;
    gy[215] += std::sqrt(2.25) * C352 - std::sqrt(2.25) * C730;
    gz[215] += std::sqrt(2.25) * C354 - std::sqrt(2.25) * C732;
    gx[216] += std::sqrt(0.5625) * C40 - std::sqrt(0.5625) * C105 -
               std::sqrt(0.5625) * C420 + std::sqrt(0.5625) * C483;
    gy[216] += std::sqrt(0.5625) * C44 - std::sqrt(0.5625) * C107 -
               std::sqrt(0.5625) * C422 + std::sqrt(0.5625) * C485;
    gz[216] += std::sqrt(0.5625) * C46 - std::sqrt(0.5625) * C109 -
               std::sqrt(0.5625) * C424 + std::sqrt(0.5625) * C487;
    gx[217] += std::sqrt(0.5625) * C49 - std::sqrt(0.5625) * C112 -
               std::sqrt(0.5625) * C427 + std::sqrt(0.5625) * C490;
    gy[217] += std::sqrt(0.5625) * C51 - std::sqrt(0.5625) * C114 -
               std::sqrt(0.5625) * C429 + std::sqrt(0.5625) * C492;
    gz[217] += std::sqrt(0.5625) * C53 - std::sqrt(0.5625) * C116 -
               std::sqrt(0.5625) * C431 + std::sqrt(0.5625) * C494;
    gx[218] += std::sqrt(0.5625) * C56 - std::sqrt(0.5625) * C119 -
               std::sqrt(0.5625) * C434 + std::sqrt(0.5625) * C497;
    gy[218] += std::sqrt(0.5625) * C58 - std::sqrt(0.5625) * C121 -
               std::sqrt(0.5625) * C436 + std::sqrt(0.5625) * C499;
    gz[218] += std::sqrt(0.5625) * C60 - std::sqrt(0.5625) * C123 -
               std::sqrt(0.5625) * C438 + std::sqrt(0.5625) * C501;
    gx[219] += std::sqrt(0.5625) * C63 - std::sqrt(0.5625) * C126 -
               std::sqrt(0.5625) * C441 + std::sqrt(0.5625) * C504;
    gy[219] += std::sqrt(0.5625) * C65 - std::sqrt(0.5625) * C128 -
               std::sqrt(0.5625) * C443 + std::sqrt(0.5625) * C506;
    gz[219] += std::sqrt(0.5625) * C67 - std::sqrt(0.5625) * C130 -
               std::sqrt(0.5625) * C445 + std::sqrt(0.5625) * C508;
    gx[220] += std::sqrt(0.5625) * C70 - std::sqrt(0.5625) * C133 -
               std::sqrt(0.5625) * C448 + std::sqrt(0.5625) * C511;
    gy[220] += std::sqrt(0.5625) * C72 - std::sqrt(0.5625) * C135 -
               std::sqrt(0.5625) * C450 + std::sqrt(0.5625) * C513;
    gz[220] += std::sqrt(0.5625) * C74 - std::sqrt(0.5625) * C137 -
               std::sqrt(0.5625) * C452 + std::sqrt(0.5625) * C515;
    gx[221] += std::sqrt(0.5625) * C77 - std::sqrt(0.5625) * C140 -
               std::sqrt(0.5625) * C455 + std::sqrt(0.5625) * C518;
    gy[221] += std::sqrt(0.5625) * C79 - std::sqrt(0.5625) * C142 -
               std::sqrt(0.5625) * C457 + std::sqrt(0.5625) * C520;
    gz[221] += std::sqrt(0.5625) * C81 - std::sqrt(0.5625) * C144 -
               std::sqrt(0.5625) * C459 + std::sqrt(0.5625) * C522;
    gx[222] += std::sqrt(0.5625) * C84 - std::sqrt(0.5625) * C147 -
               std::sqrt(0.5625) * C462 + std::sqrt(0.5625) * C525;
    gy[222] += std::sqrt(0.5625) * C86 - std::sqrt(0.5625) * C149 -
               std::sqrt(0.5625) * C464 + std::sqrt(0.5625) * C527;
    gz[222] += std::sqrt(0.5625) * C88 - std::sqrt(0.5625) * C151 -
               std::sqrt(0.5625) * C466 + std::sqrt(0.5625) * C529;
    gx[223] += std::sqrt(0.5625) * C91 - std::sqrt(0.5625) * C154 -
               std::sqrt(0.5625) * C469 + std::sqrt(0.5625) * C532;
    gy[223] += std::sqrt(0.5625) * C93 - std::sqrt(0.5625) * C156 -
               std::sqrt(0.5625) * C471 + std::sqrt(0.5625) * C534;
    gz[223] += std::sqrt(0.5625) * C95 - std::sqrt(0.5625) * C158 -
               std::sqrt(0.5625) * C473 + std::sqrt(0.5625) * C536;
    gx[224] += std::sqrt(0.5625) * C98 - std::sqrt(0.5625) * C161 -
               std::sqrt(0.5625) * C476 + std::sqrt(0.5625) * C539;
    gy[224] += std::sqrt(0.5625) * C100 - std::sqrt(0.5625) * C163 -
               std::sqrt(0.5625) * C478 + std::sqrt(0.5625) * C541;
    gz[224] += std::sqrt(0.5625) * C102 - std::sqrt(0.5625) * C165 -
               std::sqrt(0.5625) * C480 + std::sqrt(0.5625) * C543;
}
