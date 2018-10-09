/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_3(const double ae,
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
    double g[238];
    eri_gradient_2220_3_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[84];
    double vry[84];
    double vrz[84];
    eri_gradient_2220_3_vr(ae,
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
    double etx[186];
    double ety[186];
    double etz[186];
    eri_gradient_2220_3_et(ae,
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
    double hrx[216];
    double hry[216];
    double hrz[216];
    eri_gradient_2220_3_hr(ae,
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
    gx[0] += std::sqrt(27.) * C945;
    gy[0] += std::sqrt(27.) * C947;
    gz[0] += std::sqrt(27.) * C949;
    gx[1] += std::sqrt(27.) * C959;
    gy[1] += std::sqrt(27.) * C961;
    gz[1] += std::sqrt(27.) * C963;
    gx[2] += std::sqrt(9.) * C938 -
             (std::sqrt(2.25) * C931 + std::sqrt(2.25) * C924);
    gy[2] += std::sqrt(9.) * C940 -
             (std::sqrt(2.25) * C933 + std::sqrt(2.25) * C926);
    gz[2] += std::sqrt(9.) * C942 -
             (std::sqrt(2.25) * C935 + std::sqrt(2.25) * C928);
    gx[3] += std::sqrt(27.) * C952;
    gy[3] += std::sqrt(27.) * C954;
    gz[3] += std::sqrt(27.) * C956;
    gx[4] += std::sqrt(6.75) * C924 - std::sqrt(6.75) * C931;
    gy[4] += std::sqrt(6.75) * C926 - std::sqrt(6.75) * C933;
    gz[4] += std::sqrt(6.75) * C928 - std::sqrt(6.75) * C935;
    gx[5] += std::sqrt(27.) * C1029;
    gy[5] += std::sqrt(27.) * C1031;
    gz[5] += std::sqrt(27.) * C1033;
    gx[6] += std::sqrt(27.) * C1043;
    gy[6] += std::sqrt(27.) * C1045;
    gz[6] += std::sqrt(27.) * C1047;
    gx[7] += std::sqrt(9.) * C1022 -
             (std::sqrt(2.25) * C1015 + std::sqrt(2.25) * C1008);
    gy[7] += std::sqrt(9.) * C1024 -
             (std::sqrt(2.25) * C1017 + std::sqrt(2.25) * C1010);
    gz[7] += std::sqrt(9.) * C1026 -
             (std::sqrt(2.25) * C1019 + std::sqrt(2.25) * C1012);
    gx[8] += std::sqrt(27.) * C1036;
    gy[8] += std::sqrt(27.) * C1038;
    gz[8] += std::sqrt(27.) * C1040;
    gx[9] += std::sqrt(6.75) * C1008 - std::sqrt(6.75) * C1015;
    gy[9] += std::sqrt(6.75) * C1010 - std::sqrt(6.75) * C1017;
    gz[9] += std::sqrt(6.75) * C1012 - std::sqrt(6.75) * C1019;
    gx[10] += std::sqrt(9.) * C903 -
              (std::sqrt(2.25) * C861 + std::sqrt(2.25) * C819);
    gy[10] += std::sqrt(9.) * C905 -
              (std::sqrt(2.25) * C863 + std::sqrt(2.25) * C821);
    gz[10] += std::sqrt(9.) * C907 -
              (std::sqrt(2.25) * C865 + std::sqrt(2.25) * C823);
    gx[11] += std::sqrt(9.) * C917 -
              (std::sqrt(2.25) * C875 + std::sqrt(2.25) * C833);
    gy[11] += std::sqrt(9.) * C919 -
              (std::sqrt(2.25) * C877 + std::sqrt(2.25) * C835);
    gz[11] += std::sqrt(9.) * C921 -
              (std::sqrt(2.25) * C879 + std::sqrt(2.25) * C837);
    gx[12] += std::sqrt(0.1875) * C798 + std::sqrt(0.1875) * C805 -
              std::sqrt(0.75) * C812 + std::sqrt(0.1875) * C840 +
              std::sqrt(0.1875) * C847 - std::sqrt(0.75) * C854 -
              std::sqrt(0.75) * C882 - std::sqrt(0.75) * C889 +
              std::sqrt(3.0) * C896;
    gy[12] += std::sqrt(0.1875) * C800 + std::sqrt(0.1875) * C807 -
              std::sqrt(0.75) * C814 + std::sqrt(0.1875) * C842 +
              std::sqrt(0.1875) * C849 - std::sqrt(0.75) * C856 -
              std::sqrt(0.75) * C884 - std::sqrt(0.75) * C891 +
              std::sqrt(3.0) * C898;
    gz[12] += std::sqrt(0.1875) * C802 + std::sqrt(0.1875) * C809 -
              std::sqrt(0.75) * C816 + std::sqrt(0.1875) * C844 +
              std::sqrt(0.1875) * C851 - std::sqrt(0.75) * C858 -
              std::sqrt(0.75) * C886 - std::sqrt(0.75) * C893 +
              std::sqrt(3.0) * C900;
    gx[13] += std::sqrt(9.) * C910 -
              (std::sqrt(2.25) * C868 + std::sqrt(2.25) * C826);
    gy[13] += std::sqrt(9.) * C912 -
              (std::sqrt(2.25) * C870 + std::sqrt(2.25) * C828);
    gz[13] += std::sqrt(9.) * C914 -
              (std::sqrt(2.25) * C872 + std::sqrt(2.25) * C830);
    gx[14] += std::sqrt(0.5625) * C805 - std::sqrt(0.5625) * C798 -
              std::sqrt(0.5625) * C840 + std::sqrt(0.5625) * C847 +
              std::sqrt(2.25) * C882 - std::sqrt(2.25) * C889;
    gy[14] += std::sqrt(0.5625) * C807 - std::sqrt(0.5625) * C800 -
              std::sqrt(0.5625) * C842 + std::sqrt(0.5625) * C849 +
              std::sqrt(2.25) * C884 - std::sqrt(2.25) * C891;
    gz[14] += std::sqrt(0.5625) * C809 - std::sqrt(0.5625) * C802 -
              std::sqrt(0.5625) * C844 + std::sqrt(0.5625) * C851 +
              std::sqrt(2.25) * C886 - std::sqrt(2.25) * C893;
    gx[15] += std::sqrt(27.) * C987;
    gy[15] += std::sqrt(27.) * C989;
    gz[15] += std::sqrt(27.) * C991;
    gx[16] += std::sqrt(27.) * C1001;
    gy[16] += std::sqrt(27.) * C1003;
    gz[16] += std::sqrt(27.) * C1005;
    gx[17] += std::sqrt(9.) * C980 -
              (std::sqrt(2.25) * C973 + std::sqrt(2.25) * C966);
    gy[17] += std::sqrt(9.) * C982 -
              (std::sqrt(2.25) * C975 + std::sqrt(2.25) * C968);
    gz[17] += std::sqrt(9.) * C984 -
              (std::sqrt(2.25) * C977 + std::sqrt(2.25) * C970);
    gx[18] += std::sqrt(27.) * C994;
    gy[18] += std::sqrt(27.) * C996;
    gz[18] += std::sqrt(27.) * C998;
    gx[19] += std::sqrt(6.75) * C966 - std::sqrt(6.75) * C973;
    gy[19] += std::sqrt(6.75) * C968 - std::sqrt(6.75) * C975;
    gz[19] += std::sqrt(6.75) * C970 - std::sqrt(6.75) * C977;
    gx[20] += std::sqrt(6.75) * C819 - std::sqrt(6.75) * C861;
    gy[20] += std::sqrt(6.75) * C821 - std::sqrt(6.75) * C863;
    gz[20] += std::sqrt(6.75) * C823 - std::sqrt(6.75) * C865;
    gx[21] += std::sqrt(6.75) * C833 - std::sqrt(6.75) * C875;
    gy[21] += std::sqrt(6.75) * C835 - std::sqrt(6.75) * C877;
    gz[21] += std::sqrt(6.75) * C837 - std::sqrt(6.75) * C879;
    gx[22] += std::sqrt(2.25) * C812 -
              (std::sqrt(0.5625) * C805 + std::sqrt(0.5625) * C798) +
              std::sqrt(0.5625) * C840 + std::sqrt(0.5625) * C847 -
              std::sqrt(2.25) * C854;
    gy[22] += std::sqrt(2.25) * C814 -
              (std::sqrt(0.5625) * C807 + std::sqrt(0.5625) * C800) +
              std::sqrt(0.5625) * C842 + std::sqrt(0.5625) * C849 -
              std::sqrt(2.25) * C856;
    gz[22] += std::sqrt(2.25) * C816 -
              (std::sqrt(0.5625) * C809 + std::sqrt(0.5625) * C802) +
              std::sqrt(0.5625) * C844 + std::sqrt(0.5625) * C851 -
              std::sqrt(2.25) * C858;
    gx[23] += std::sqrt(6.75) * C826 - std::sqrt(6.75) * C868;
    gy[23] += std::sqrt(6.75) * C828 - std::sqrt(6.75) * C870;
    gz[23] += std::sqrt(6.75) * C830 - std::sqrt(6.75) * C872;
    gx[24] += std::sqrt(1.6875) * C798 - std::sqrt(1.6875) * C805 -
              std::sqrt(1.6875) * C840 + std::sqrt(1.6875) * C847;
    gy[24] += std::sqrt(1.6875) * C800 - std::sqrt(1.6875) * C807 -
              std::sqrt(1.6875) * C842 + std::sqrt(1.6875) * C849;
    gz[24] += std::sqrt(1.6875) * C802 - std::sqrt(1.6875) * C809 -
              std::sqrt(1.6875) * C844 + std::sqrt(1.6875) * C851;
    gx[25] += std::sqrt(27.) * C1449;
    gy[25] += std::sqrt(27.) * C1451;
    gz[25] += std::sqrt(27.) * C1453;
    gx[26] += std::sqrt(27.) * C1463;
    gy[26] += std::sqrt(27.) * C1465;
    gz[26] += std::sqrt(27.) * C1467;
    gx[27] += std::sqrt(9.) * C1442 -
              (std::sqrt(2.25) * C1435 + std::sqrt(2.25) * C1428);
    gy[27] += std::sqrt(9.) * C1444 -
              (std::sqrt(2.25) * C1437 + std::sqrt(2.25) * C1430);
    gz[27] += std::sqrt(9.) * C1446 -
              (std::sqrt(2.25) * C1439 + std::sqrt(2.25) * C1432);
    gx[28] += std::sqrt(27.) * C1456;
    gy[28] += std::sqrt(27.) * C1458;
    gz[28] += std::sqrt(27.) * C1460;
    gx[29] += std::sqrt(6.75) * C1428 - std::sqrt(6.75) * C1435;
    gy[29] += std::sqrt(6.75) * C1430 - std::sqrt(6.75) * C1437;
    gz[29] += std::sqrt(6.75) * C1432 - std::sqrt(6.75) * C1439;
    gx[30] += std::sqrt(27.) * C1533;
    gy[30] += std::sqrt(27.) * C1535;
    gz[30] += std::sqrt(27.) * C1537;
    gx[31] += std::sqrt(27.) * C1547;
    gy[31] += std::sqrt(27.) * C1549;
    gz[31] += std::sqrt(27.) * C1551;
    gx[32] += std::sqrt(9.) * C1526 -
              (std::sqrt(2.25) * C1519 + std::sqrt(2.25) * C1512);
    gy[32] += std::sqrt(9.) * C1528 -
              (std::sqrt(2.25) * C1521 + std::sqrt(2.25) * C1514);
    gz[32] += std::sqrt(9.) * C1530 -
              (std::sqrt(2.25) * C1523 + std::sqrt(2.25) * C1516);
    gx[33] += std::sqrt(27.) * C1540;
    gy[33] += std::sqrt(27.) * C1542;
    gz[33] += std::sqrt(27.) * C1544;
    gx[34] += std::sqrt(6.75) * C1512 - std::sqrt(6.75) * C1519;
    gy[34] += std::sqrt(6.75) * C1514 - std::sqrt(6.75) * C1521;
    gz[34] += std::sqrt(6.75) * C1516 - std::sqrt(6.75) * C1523;
    gx[35] += std::sqrt(9.) * C1407 -
              (std::sqrt(2.25) * C1365 + std::sqrt(2.25) * C1323);
    gy[35] += std::sqrt(9.) * C1409 -
              (std::sqrt(2.25) * C1367 + std::sqrt(2.25) * C1325);
    gz[35] += std::sqrt(9.) * C1411 -
              (std::sqrt(2.25) * C1369 + std::sqrt(2.25) * C1327);
    gx[36] += std::sqrt(9.) * C1421 -
              (std::sqrt(2.25) * C1379 + std::sqrt(2.25) * C1337);
    gy[36] += std::sqrt(9.) * C1423 -
              (std::sqrt(2.25) * C1381 + std::sqrt(2.25) * C1339);
    gz[36] += std::sqrt(9.) * C1425 -
              (std::sqrt(2.25) * C1383 + std::sqrt(2.25) * C1341);
    gx[37] += std::sqrt(0.1875) * C1302 + std::sqrt(0.1875) * C1309 -
              std::sqrt(0.75) * C1316 + std::sqrt(0.1875) * C1344 +
              std::sqrt(0.1875) * C1351 - std::sqrt(0.75) * C1358 -
              std::sqrt(0.75) * C1386 - std::sqrt(0.75) * C1393 +
              std::sqrt(3.0) * C1400;
    gy[37] += std::sqrt(0.1875) * C1304 + std::sqrt(0.1875) * C1311 -
              std::sqrt(0.75) * C1318 + std::sqrt(0.1875) * C1346 +
              std::sqrt(0.1875) * C1353 - std::sqrt(0.75) * C1360 -
              std::sqrt(0.75) * C1388 - std::sqrt(0.75) * C1395 +
              std::sqrt(3.0) * C1402;
    gz[37] += std::sqrt(0.1875) * C1306 + std::sqrt(0.1875) * C1313 -
              std::sqrt(0.75) * C1320 + std::sqrt(0.1875) * C1348 +
              std::sqrt(0.1875) * C1355 - std::sqrt(0.75) * C1362 -
              std::sqrt(0.75) * C1390 - std::sqrt(0.75) * C1397 +
              std::sqrt(3.0) * C1404;
    gx[38] += std::sqrt(9.) * C1414 -
              (std::sqrt(2.25) * C1372 + std::sqrt(2.25) * C1330);
    gy[38] += std::sqrt(9.) * C1416 -
              (std::sqrt(2.25) * C1374 + std::sqrt(2.25) * C1332);
    gz[38] += std::sqrt(9.) * C1418 -
              (std::sqrt(2.25) * C1376 + std::sqrt(2.25) * C1334);
    gx[39] += std::sqrt(0.5625) * C1309 - std::sqrt(0.5625) * C1302 -
              std::sqrt(0.5625) * C1344 + std::sqrt(0.5625) * C1351 +
              std::sqrt(2.25) * C1386 - std::sqrt(2.25) * C1393;
    gy[39] += std::sqrt(0.5625) * C1311 - std::sqrt(0.5625) * C1304 -
              std::sqrt(0.5625) * C1346 + std::sqrt(0.5625) * C1353 +
              std::sqrt(2.25) * C1388 - std::sqrt(2.25) * C1395;
    gz[39] += std::sqrt(0.5625) * C1313 - std::sqrt(0.5625) * C1306 -
              std::sqrt(0.5625) * C1348 + std::sqrt(0.5625) * C1355 +
              std::sqrt(2.25) * C1390 - std::sqrt(2.25) * C1397;
    gx[40] += std::sqrt(27.) * C1491;
    gy[40] += std::sqrt(27.) * C1493;
    gz[40] += std::sqrt(27.) * C1495;
    gx[41] += std::sqrt(27.) * C1505;
    gy[41] += std::sqrt(27.) * C1507;
    gz[41] += std::sqrt(27.) * C1509;
    gx[42] += std::sqrt(9.) * C1484 -
              (std::sqrt(2.25) * C1477 + std::sqrt(2.25) * C1470);
    gy[42] += std::sqrt(9.) * C1486 -
              (std::sqrt(2.25) * C1479 + std::sqrt(2.25) * C1472);
    gz[42] += std::sqrt(9.) * C1488 -
              (std::sqrt(2.25) * C1481 + std::sqrt(2.25) * C1474);
    gx[43] += std::sqrt(27.) * C1498;
    gy[43] += std::sqrt(27.) * C1500;
    gz[43] += std::sqrt(27.) * C1502;
    gx[44] += std::sqrt(6.75) * C1470 - std::sqrt(6.75) * C1477;
    gy[44] += std::sqrt(6.75) * C1472 - std::sqrt(6.75) * C1479;
    gz[44] += std::sqrt(6.75) * C1474 - std::sqrt(6.75) * C1481;
    gx[45] += std::sqrt(6.75) * C1323 - std::sqrt(6.75) * C1365;
    gy[45] += std::sqrt(6.75) * C1325 - std::sqrt(6.75) * C1367;
    gz[45] += std::sqrt(6.75) * C1327 - std::sqrt(6.75) * C1369;
    gx[46] += std::sqrt(6.75) * C1337 - std::sqrt(6.75) * C1379;
    gy[46] += std::sqrt(6.75) * C1339 - std::sqrt(6.75) * C1381;
    gz[46] += std::sqrt(6.75) * C1341 - std::sqrt(6.75) * C1383;
    gx[47] += std::sqrt(2.25) * C1316 -
              (std::sqrt(0.5625) * C1309 + std::sqrt(0.5625) * C1302) +
              std::sqrt(0.5625) * C1344 + std::sqrt(0.5625) * C1351 -
              std::sqrt(2.25) * C1358;
    gy[47] += std::sqrt(2.25) * C1318 -
              (std::sqrt(0.5625) * C1311 + std::sqrt(0.5625) * C1304) +
              std::sqrt(0.5625) * C1346 + std::sqrt(0.5625) * C1353 -
              std::sqrt(2.25) * C1360;
    gz[47] += std::sqrt(2.25) * C1320 -
              (std::sqrt(0.5625) * C1313 + std::sqrt(0.5625) * C1306) +
              std::sqrt(0.5625) * C1348 + std::sqrt(0.5625) * C1355 -
              std::sqrt(2.25) * C1362;
    gx[48] += std::sqrt(6.75) * C1330 - std::sqrt(6.75) * C1372;
    gy[48] += std::sqrt(6.75) * C1332 - std::sqrt(6.75) * C1374;
    gz[48] += std::sqrt(6.75) * C1334 - std::sqrt(6.75) * C1376;
    gx[49] += std::sqrt(1.6875) * C1302 - std::sqrt(1.6875) * C1309 -
              std::sqrt(1.6875) * C1344 + std::sqrt(1.6875) * C1351;
    gy[49] += std::sqrt(1.6875) * C1304 - std::sqrt(1.6875) * C1311 -
              std::sqrt(1.6875) * C1346 + std::sqrt(1.6875) * C1353;
    gz[49] += std::sqrt(1.6875) * C1306 - std::sqrt(1.6875) * C1313 -
              std::sqrt(1.6875) * C1348 + std::sqrt(1.6875) * C1355;
    gx[50] += std::sqrt(9.) * C693 -
              (std::sqrt(2.25) * C441 + std::sqrt(2.25) * C189);
    gy[50] += std::sqrt(9.) * C695 -
              (std::sqrt(2.25) * C443 + std::sqrt(2.25) * C191);
    gz[50] += std::sqrt(9.) * C697 -
              (std::sqrt(2.25) * C445 + std::sqrt(2.25) * C193);
    gx[51] += std::sqrt(9.) * C707 -
              (std::sqrt(2.25) * C455 + std::sqrt(2.25) * C203);
    gy[51] += std::sqrt(9.) * C709 -
              (std::sqrt(2.25) * C457 + std::sqrt(2.25) * C205);
    gz[51] += std::sqrt(9.) * C711 -
              (std::sqrt(2.25) * C459 + std::sqrt(2.25) * C207);
    gx[52] += std::sqrt(0.1875) * C168 + std::sqrt(0.1875) * C175 -
              std::sqrt(0.75) * C182 + std::sqrt(0.1875) * C420 +
              std::sqrt(0.1875) * C427 - std::sqrt(0.75) * C434 -
              std::sqrt(0.75) * C672 - std::sqrt(0.75) * C679 +
              std::sqrt(3.0) * C686;
    gy[52] += std::sqrt(0.1875) * C170 + std::sqrt(0.1875) * C177 -
              std::sqrt(0.75) * C184 + std::sqrt(0.1875) * C422 +
              std::sqrt(0.1875) * C429 - std::sqrt(0.75) * C436 -
              std::sqrt(0.75) * C674 - std::sqrt(0.75) * C681 +
              std::sqrt(3.0) * C688;
    gz[52] += std::sqrt(0.1875) * C172 + std::sqrt(0.1875) * C179 -
              std::sqrt(0.75) * C186 + std::sqrt(0.1875) * C424 +
              std::sqrt(0.1875) * C431 - std::sqrt(0.75) * C438 -
              std::sqrt(0.75) * C676 - std::sqrt(0.75) * C683 +
              std::sqrt(3.0) * C690;
    gx[53] += std::sqrt(9.) * C700 -
              (std::sqrt(2.25) * C448 + std::sqrt(2.25) * C196);
    gy[53] += std::sqrt(9.) * C702 -
              (std::sqrt(2.25) * C450 + std::sqrt(2.25) * C198);
    gz[53] += std::sqrt(9.) * C704 -
              (std::sqrt(2.25) * C452 + std::sqrt(2.25) * C200);
    gx[54] += std::sqrt(0.5625) * C175 - std::sqrt(0.5625) * C168 -
              std::sqrt(0.5625) * C420 + std::sqrt(0.5625) * C427 +
              std::sqrt(2.25) * C672 - std::sqrt(2.25) * C679;
    gy[54] += std::sqrt(0.5625) * C177 - std::sqrt(0.5625) * C170 -
              std::sqrt(0.5625) * C422 + std::sqrt(0.5625) * C429 +
              std::sqrt(2.25) * C674 - std::sqrt(2.25) * C681;
    gz[54] += std::sqrt(0.5625) * C179 - std::sqrt(0.5625) * C172 -
              std::sqrt(0.5625) * C424 + std::sqrt(0.5625) * C431 +
              std::sqrt(2.25) * C676 - std::sqrt(2.25) * C683;
    gx[55] += std::sqrt(9.) * C777 -
              (std::sqrt(2.25) * C525 + std::sqrt(2.25) * C273);
    gy[55] += std::sqrt(9.) * C779 -
              (std::sqrt(2.25) * C527 + std::sqrt(2.25) * C275);
    gz[55] += std::sqrt(9.) * C781 -
              (std::sqrt(2.25) * C529 + std::sqrt(2.25) * C277);
    gx[56] += std::sqrt(9.) * C791 -
              (std::sqrt(2.25) * C539 + std::sqrt(2.25) * C287);
    gy[56] += std::sqrt(9.) * C793 -
              (std::sqrt(2.25) * C541 + std::sqrt(2.25) * C289);
    gz[56] += std::sqrt(9.) * C795 -
              (std::sqrt(2.25) * C543 + std::sqrt(2.25) * C291);
    gx[57] += std::sqrt(0.1875) * C252 + std::sqrt(0.1875) * C259 -
              std::sqrt(0.75) * C266 + std::sqrt(0.1875) * C504 +
              std::sqrt(0.1875) * C511 - std::sqrt(0.75) * C518 -
              std::sqrt(0.75) * C756 - std::sqrt(0.75) * C763 +
              std::sqrt(3.0) * C770;
    gy[57] += std::sqrt(0.1875) * C254 + std::sqrt(0.1875) * C261 -
              std::sqrt(0.75) * C268 + std::sqrt(0.1875) * C506 +
              std::sqrt(0.1875) * C513 - std::sqrt(0.75) * C520 -
              std::sqrt(0.75) * C758 - std::sqrt(0.75) * C765 +
              std::sqrt(3.0) * C772;
    gz[57] += std::sqrt(0.1875) * C256 + std::sqrt(0.1875) * C263 -
              std::sqrt(0.75) * C270 + std::sqrt(0.1875) * C508 +
              std::sqrt(0.1875) * C515 - std::sqrt(0.75) * C522 -
              std::sqrt(0.75) * C760 - std::sqrt(0.75) * C767 +
              std::sqrt(3.0) * C774;
    gx[58] += std::sqrt(9.) * C784 -
              (std::sqrt(2.25) * C532 + std::sqrt(2.25) * C280);
    gy[58] += std::sqrt(9.) * C786 -
              (std::sqrt(2.25) * C534 + std::sqrt(2.25) * C282);
    gz[58] += std::sqrt(9.) * C788 -
              (std::sqrt(2.25) * C536 + std::sqrt(2.25) * C284);
    gx[59] += std::sqrt(0.5625) * C259 - std::sqrt(0.5625) * C252 -
              std::sqrt(0.5625) * C504 + std::sqrt(0.5625) * C511 +
              std::sqrt(2.25) * C756 - std::sqrt(2.25) * C763;
    gy[59] += std::sqrt(0.5625) * C261 - std::sqrt(0.5625) * C254 -
              std::sqrt(0.5625) * C506 + std::sqrt(0.5625) * C513 +
              std::sqrt(2.25) * C758 - std::sqrt(2.25) * C765;
    gz[59] += std::sqrt(0.5625) * C263 - std::sqrt(0.5625) * C256 -
              std::sqrt(0.5625) * C508 + std::sqrt(0.5625) * C515 +
              std::sqrt(2.25) * C760 - std::sqrt(2.25) * C767;
    gx[60] += std::sqrt(0.1875) * C63 + std::sqrt(0.1875) * C105 -
              std::sqrt(0.75) * C147 + std::sqrt(0.1875) * C315 +
              std::sqrt(0.1875) * C357 - std::sqrt(0.75) * C399 -
              std::sqrt(0.75) * C567 - std::sqrt(0.75) * C609 +
              std::sqrt(3.0) * C651;
    gy[60] += std::sqrt(0.1875) * C65 + std::sqrt(0.1875) * C107 -
              std::sqrt(0.75) * C149 + std::sqrt(0.1875) * C317 +
              std::sqrt(0.1875) * C359 - std::sqrt(0.75) * C401 -
              std::sqrt(0.75) * C569 - std::sqrt(0.75) * C611 +
              std::sqrt(3.0) * C653;
    gz[60] += std::sqrt(0.1875) * C67 + std::sqrt(0.1875) * C109 -
              std::sqrt(0.75) * C151 + std::sqrt(0.1875) * C319 +
              std::sqrt(0.1875) * C361 - std::sqrt(0.75) * C403 -
              std::sqrt(0.75) * C571 - std::sqrt(0.75) * C613 +
              std::sqrt(3.0) * C655;
    gx[61] += std::sqrt(0.1875) * C77 + std::sqrt(0.1875) * C119 -
              std::sqrt(0.75) * C161 + std::sqrt(0.1875) * C329 +
              std::sqrt(0.1875) * C371 - std::sqrt(0.75) * C413 -
              std::sqrt(0.75) * C581 - std::sqrt(0.75) * C623 +
              std::sqrt(3.0) * C665;
    gy[61] += std::sqrt(0.1875) * C79 + std::sqrt(0.1875) * C121 -
              std::sqrt(0.75) * C163 + std::sqrt(0.1875) * C331 +
              std::sqrt(0.1875) * C373 - std::sqrt(0.75) * C415 -
              std::sqrt(0.75) * C583 - std::sqrt(0.75) * C625 +
              std::sqrt(3.0) * C667;
    gz[61] += std::sqrt(0.1875) * C81 + std::sqrt(0.1875) * C123 -
              std::sqrt(0.75) * C165 + std::sqrt(0.1875) * C333 +
              std::sqrt(0.1875) * C375 - std::sqrt(0.75) * C417 -
              std::sqrt(0.75) * C585 - std::sqrt(0.75) * C627 +
              std::sqrt(3.0) * C669;
    gx[62] += -0.125 * C40 - 0.125 * C49 + 0.25 * C56 - 0.125 * C84 -
              0.125 * C91 + 0.25 * C98 + 0.25 * C126 + 0.25 * C133 -
              0.5 * C140 - 0.125 * C294 - 0.125 * C301 + 0.25 * C308 -
              0.125 * C336 - 0.125 * C343 + 0.25 * C350 + 0.25 * C378 +
              0.25 * C385 - 0.5 * C392 + 0.25 * C546 + 0.25 * C553 -
              0.5 * C560 + 0.25 * C588 + 0.25 * C595 - 0.5 * C602 - 0.5 * C630 -
              0.5 * C637 + C644;
    gy[62] += -0.125 * C44 - 0.125 * C51 + 0.25 * C58 - 0.125 * C86 -
              0.125 * C93 + 0.25 * C100 + 0.25 * C128 + 0.25 * C135 -
              0.5 * C142 - 0.125 * C296 - 0.125 * C303 + 0.25 * C310 -
              0.125 * C338 - 0.125 * C345 + 0.25 * C352 + 0.25 * C380 +
              0.25 * C387 - 0.5 * C394 + 0.25 * C548 + 0.25 * C555 -
              0.5 * C562 + 0.25 * C590 + 0.25 * C597 - 0.5 * C604 - 0.5 * C632 -
              0.5 * C639 + C646;
    gz[62] += -0.125 * C46 - 0.125 * C53 + 0.25 * C60 - 0.125 * C88 -
              0.125 * C95 + 0.25 * C102 + 0.25 * C130 + 0.25 * C137 -
              0.5 * C144 - 0.125 * C298 - 0.125 * C305 + 0.25 * C312 -
              0.125 * C340 - 0.125 * C347 + 0.25 * C354 + 0.25 * C382 +
              0.25 * C389 - 0.5 * C396 + 0.25 * C550 + 0.25 * C557 -
              0.5 * C564 + 0.25 * C592 + 0.25 * C599 - 0.5 * C606 - 0.5 * C634 -
              0.5 * C641 + C648;
    gx[63] += std::sqrt(0.1875) * C70 + std::sqrt(0.1875) * C112 -
              std::sqrt(0.75) * C154 + std::sqrt(0.1875) * C322 +
              std::sqrt(0.1875) * C364 - std::sqrt(0.75) * C406 -
              std::sqrt(0.75) * C574 - std::sqrt(0.75) * C616 +
              std::sqrt(3.0) * C658;
    gy[63] += std::sqrt(0.1875) * C72 + std::sqrt(0.1875) * C114 -
              std::sqrt(0.75) * C156 + std::sqrt(0.1875) * C324 +
              std::sqrt(0.1875) * C366 - std::sqrt(0.75) * C408 -
              std::sqrt(0.75) * C576 - std::sqrt(0.75) * C618 +
              std::sqrt(3.0) * C660;
    gz[63] += std::sqrt(0.1875) * C74 + std::sqrt(0.1875) * C116 -
              std::sqrt(0.75) * C158 + std::sqrt(0.1875) * C326 +
              std::sqrt(0.1875) * C368 - std::sqrt(0.75) * C410 -
              std::sqrt(0.75) * C578 - std::sqrt(0.75) * C620 +
              std::sqrt(3.0) * C662;
    gx[64] += std::sqrt(0.046875) * C40 - std::sqrt(0.046875) * C49 +
              std::sqrt(0.046875) * C84 - std::sqrt(0.046875) * C91 -
              std::sqrt(0.1875) * C126 + std::sqrt(0.1875) * C133 +
              std::sqrt(0.046875) * C294 - std::sqrt(0.046875) * C301 +
              std::sqrt(0.046875) * C336 - std::sqrt(0.046875) * C343 -
              std::sqrt(0.1875) * C378 + std::sqrt(0.1875) * C385 -
              std::sqrt(0.1875) * C546 + std::sqrt(0.1875) * C553 -
              std::sqrt(0.1875) * C588 + std::sqrt(0.1875) * C595 +
              std::sqrt(0.75) * C630 - std::sqrt(0.75) * C637;
    gy[64] += std::sqrt(0.046875) * C44 - std::sqrt(0.046875) * C51 +
              std::sqrt(0.046875) * C86 - std::sqrt(0.046875) * C93 -
              std::sqrt(0.1875) * C128 + std::sqrt(0.1875) * C135 +
              std::sqrt(0.046875) * C296 - std::sqrt(0.046875) * C303 +
              std::sqrt(0.046875) * C338 - std::sqrt(0.046875) * C345 -
              std::sqrt(0.1875) * C380 + std::sqrt(0.1875) * C387 -
              std::sqrt(0.1875) * C548 + std::sqrt(0.1875) * C555 -
              std::sqrt(0.1875) * C590 + std::sqrt(0.1875) * C597 +
              std::sqrt(0.75) * C632 - std::sqrt(0.75) * C639;
    gz[64] += std::sqrt(0.046875) * C46 - std::sqrt(0.046875) * C53 +
              std::sqrt(0.046875) * C88 - std::sqrt(0.046875) * C95 -
              std::sqrt(0.1875) * C130 + std::sqrt(0.1875) * C137 +
              std::sqrt(0.046875) * C298 - std::sqrt(0.046875) * C305 +
              std::sqrt(0.046875) * C340 - std::sqrt(0.046875) * C347 -
              std::sqrt(0.1875) * C382 + std::sqrt(0.1875) * C389 -
              std::sqrt(0.1875) * C550 + std::sqrt(0.1875) * C557 -
              std::sqrt(0.1875) * C592 + std::sqrt(0.1875) * C599 +
              std::sqrt(0.75) * C634 - std::sqrt(0.75) * C641;
    gx[65] += std::sqrt(9.) * C735 -
              (std::sqrt(2.25) * C483 + std::sqrt(2.25) * C231);
    gy[65] += std::sqrt(9.) * C737 -
              (std::sqrt(2.25) * C485 + std::sqrt(2.25) * C233);
    gz[65] += std::sqrt(9.) * C739 -
              (std::sqrt(2.25) * C487 + std::sqrt(2.25) * C235);
    gx[66] += std::sqrt(9.) * C749 -
              (std::sqrt(2.25) * C497 + std::sqrt(2.25) * C245);
    gy[66] += std::sqrt(9.) * C751 -
              (std::sqrt(2.25) * C499 + std::sqrt(2.25) * C247);
    gz[66] += std::sqrt(9.) * C753 -
              (std::sqrt(2.25) * C501 + std::sqrt(2.25) * C249);
    gx[67] += std::sqrt(0.1875) * C210 + std::sqrt(0.1875) * C217 -
              std::sqrt(0.75) * C224 + std::sqrt(0.1875) * C462 +
              std::sqrt(0.1875) * C469 - std::sqrt(0.75) * C476 -
              std::sqrt(0.75) * C714 - std::sqrt(0.75) * C721 +
              std::sqrt(3.0) * C728;
    gy[67] += std::sqrt(0.1875) * C212 + std::sqrt(0.1875) * C219 -
              std::sqrt(0.75) * C226 + std::sqrt(0.1875) * C464 +
              std::sqrt(0.1875) * C471 - std::sqrt(0.75) * C478 -
              std::sqrt(0.75) * C716 - std::sqrt(0.75) * C723 +
              std::sqrt(3.0) * C730;
    gz[67] += std::sqrt(0.1875) * C214 + std::sqrt(0.1875) * C221 -
              std::sqrt(0.75) * C228 + std::sqrt(0.1875) * C466 +
              std::sqrt(0.1875) * C473 - std::sqrt(0.75) * C480 -
              std::sqrt(0.75) * C718 - std::sqrt(0.75) * C725 +
              std::sqrt(3.0) * C732;
    gx[68] += std::sqrt(9.) * C742 -
              (std::sqrt(2.25) * C490 + std::sqrt(2.25) * C238);
    gy[68] += std::sqrt(9.) * C744 -
              (std::sqrt(2.25) * C492 + std::sqrt(2.25) * C240);
    gz[68] += std::sqrt(9.) * C746 -
              (std::sqrt(2.25) * C494 + std::sqrt(2.25) * C242);
    gx[69] += std::sqrt(0.5625) * C217 - std::sqrt(0.5625) * C210 -
              std::sqrt(0.5625) * C462 + std::sqrt(0.5625) * C469 +
              std::sqrt(2.25) * C714 - std::sqrt(2.25) * C721;
    gy[69] += std::sqrt(0.5625) * C219 - std::sqrt(0.5625) * C212 -
              std::sqrt(0.5625) * C464 + std::sqrt(0.5625) * C471 +
              std::sqrt(2.25) * C716 - std::sqrt(2.25) * C723;
    gz[69] += std::sqrt(0.5625) * C221 - std::sqrt(0.5625) * C214 -
              std::sqrt(0.5625) * C466 + std::sqrt(0.5625) * C473 +
              std::sqrt(2.25) * C718 - std::sqrt(2.25) * C725;
    gx[70] += std::sqrt(0.5625) * C105 - std::sqrt(0.5625) * C63 -
              std::sqrt(0.5625) * C315 + std::sqrt(0.5625) * C357 +
              std::sqrt(2.25) * C567 - std::sqrt(2.25) * C609;
    gy[70] += std::sqrt(0.5625) * C107 - std::sqrt(0.5625) * C65 -
              std::sqrt(0.5625) * C317 + std::sqrt(0.5625) * C359 +
              std::sqrt(2.25) * C569 - std::sqrt(2.25) * C611;
    gz[70] += std::sqrt(0.5625) * C109 - std::sqrt(0.5625) * C67 -
              std::sqrt(0.5625) * C319 + std::sqrt(0.5625) * C361 +
              std::sqrt(2.25) * C571 - std::sqrt(2.25) * C613;
    gx[71] += std::sqrt(0.5625) * C119 - std::sqrt(0.5625) * C77 -
              std::sqrt(0.5625) * C329 + std::sqrt(0.5625) * C371 +
              std::sqrt(2.25) * C581 - std::sqrt(2.25) * C623;
    gy[71] += std::sqrt(0.5625) * C121 - std::sqrt(0.5625) * C79 -
              std::sqrt(0.5625) * C331 + std::sqrt(0.5625) * C373 +
              std::sqrt(2.25) * C583 - std::sqrt(2.25) * C625;
    gz[71] += std::sqrt(0.5625) * C123 - std::sqrt(0.5625) * C81 -
              std::sqrt(0.5625) * C333 + std::sqrt(0.5625) * C375 +
              std::sqrt(2.25) * C585 - std::sqrt(2.25) * C627;
    gx[72] += std::sqrt(0.046875) * C40 + std::sqrt(0.046875) * C49 -
              std::sqrt(0.1875) * C56 - std::sqrt(0.046875) * C84 -
              std::sqrt(0.046875) * C91 + std::sqrt(0.1875) * C98 +
              std::sqrt(0.046875) * C294 + std::sqrt(0.046875) * C301 -
              std::sqrt(0.1875) * C308 - std::sqrt(0.046875) * C336 -
              std::sqrt(0.046875) * C343 + std::sqrt(0.1875) * C350 -
              std::sqrt(0.1875) * C546 - std::sqrt(0.1875) * C553 +
              std::sqrt(0.75) * C560 + std::sqrt(0.1875) * C588 +
              std::sqrt(0.1875) * C595 - std::sqrt(0.75) * C602;
    gy[72] += std::sqrt(0.046875) * C44 + std::sqrt(0.046875) * C51 -
              std::sqrt(0.1875) * C58 - std::sqrt(0.046875) * C86 -
              std::sqrt(0.046875) * C93 + std::sqrt(0.1875) * C100 +
              std::sqrt(0.046875) * C296 + std::sqrt(0.046875) * C303 -
              std::sqrt(0.1875) * C310 - std::sqrt(0.046875) * C338 -
              std::sqrt(0.046875) * C345 + std::sqrt(0.1875) * C352 -
              std::sqrt(0.1875) * C548 - std::sqrt(0.1875) * C555 +
              std::sqrt(0.75) * C562 + std::sqrt(0.1875) * C590 +
              std::sqrt(0.1875) * C597 - std::sqrt(0.75) * C604;
    gz[72] += std::sqrt(0.046875) * C46 + std::sqrt(0.046875) * C53 -
              std::sqrt(0.1875) * C60 - std::sqrt(0.046875) * C88 -
              std::sqrt(0.046875) * C95 + std::sqrt(0.1875) * C102 +
              std::sqrt(0.046875) * C298 + std::sqrt(0.046875) * C305 -
              std::sqrt(0.1875) * C312 - std::sqrt(0.046875) * C340 -
              std::sqrt(0.046875) * C347 + std::sqrt(0.1875) * C354 -
              std::sqrt(0.1875) * C550 - std::sqrt(0.1875) * C557 +
              std::sqrt(0.75) * C564 + std::sqrt(0.1875) * C592 +
              std::sqrt(0.1875) * C599 - std::sqrt(0.75) * C606;
    gx[73] += std::sqrt(0.5625) * C112 - std::sqrt(0.5625) * C70 -
              std::sqrt(0.5625) * C322 + std::sqrt(0.5625) * C364 +
              std::sqrt(2.25) * C574 - std::sqrt(2.25) * C616;
    gy[73] += std::sqrt(0.5625) * C114 - std::sqrt(0.5625) * C72 -
              std::sqrt(0.5625) * C324 + std::sqrt(0.5625) * C366 +
              std::sqrt(2.25) * C576 - std::sqrt(2.25) * C618;
    gz[73] += std::sqrt(0.5625) * C116 - std::sqrt(0.5625) * C74 -
              std::sqrt(0.5625) * C326 + std::sqrt(0.5625) * C368 +
              std::sqrt(2.25) * C578 - std::sqrt(2.25) * C620;
    gx[74] += std::sqrt(0.140625) * C49 - std::sqrt(0.140625) * C40 +
              std::sqrt(0.140625) * C84 - std::sqrt(0.140625) * C91 -
              std::sqrt(0.140625) * C294 + std::sqrt(0.140625) * C301 +
              std::sqrt(0.140625) * C336 - std::sqrt(0.140625) * C343 +
              std::sqrt(0.5625) * C546 - std::sqrt(0.5625) * C553 -
              std::sqrt(0.5625) * C588 + std::sqrt(0.5625) * C595;
    gy[74] += std::sqrt(0.140625) * C51 - std::sqrt(0.140625) * C44 +
              std::sqrt(0.140625) * C86 - std::sqrt(0.140625) * C93 -
              std::sqrt(0.140625) * C296 + std::sqrt(0.140625) * C303 +
              std::sqrt(0.140625) * C338 - std::sqrt(0.140625) * C345 +
              std::sqrt(0.5625) * C548 - std::sqrt(0.5625) * C555 -
              std::sqrt(0.5625) * C590 + std::sqrt(0.5625) * C597;
    gz[74] += std::sqrt(0.140625) * C53 - std::sqrt(0.140625) * C46 +
              std::sqrt(0.140625) * C88 - std::sqrt(0.140625) * C95 -
              std::sqrt(0.140625) * C298 + std::sqrt(0.140625) * C305 +
              std::sqrt(0.140625) * C340 - std::sqrt(0.140625) * C347 +
              std::sqrt(0.5625) * C550 - std::sqrt(0.5625) * C557 -
              std::sqrt(0.5625) * C592 + std::sqrt(0.5625) * C599;
    gx[75] += std::sqrt(27.) * C1197;
    gy[75] += std::sqrt(27.) * C1199;
    gz[75] += std::sqrt(27.) * C1201;
    gx[76] += std::sqrt(27.) * C1211;
    gy[76] += std::sqrt(27.) * C1213;
    gz[76] += std::sqrt(27.) * C1215;
    gx[77] += std::sqrt(9.) * C1190 -
              (std::sqrt(2.25) * C1183 + std::sqrt(2.25) * C1176);
    gy[77] += std::sqrt(9.) * C1192 -
              (std::sqrt(2.25) * C1185 + std::sqrt(2.25) * C1178);
    gz[77] += std::sqrt(9.) * C1194 -
              (std::sqrt(2.25) * C1187 + std::sqrt(2.25) * C1180);
    gx[78] += std::sqrt(27.) * C1204;
    gy[78] += std::sqrt(27.) * C1206;
    gz[78] += std::sqrt(27.) * C1208;
    gx[79] += std::sqrt(6.75) * C1176 - std::sqrt(6.75) * C1183;
    gy[79] += std::sqrt(6.75) * C1178 - std::sqrt(6.75) * C1185;
    gz[79] += std::sqrt(6.75) * C1180 - std::sqrt(6.75) * C1187;
    gx[80] += std::sqrt(27.) * C1281;
    gy[80] += std::sqrt(27.) * C1283;
    gz[80] += std::sqrt(27.) * C1285;
    gx[81] += std::sqrt(27.) * C1295;
    gy[81] += std::sqrt(27.) * C1297;
    gz[81] += std::sqrt(27.) * C1299;
    gx[82] += std::sqrt(9.) * C1274 -
              (std::sqrt(2.25) * C1267 + std::sqrt(2.25) * C1260);
    gy[82] += std::sqrt(9.) * C1276 -
              (std::sqrt(2.25) * C1269 + std::sqrt(2.25) * C1262);
    gz[82] += std::sqrt(9.) * C1278 -
              (std::sqrt(2.25) * C1271 + std::sqrt(2.25) * C1264);
    gx[83] += std::sqrt(27.) * C1288;
    gy[83] += std::sqrt(27.) * C1290;
    gz[83] += std::sqrt(27.) * C1292;
    gx[84] += std::sqrt(6.75) * C1260 - std::sqrt(6.75) * C1267;
    gy[84] += std::sqrt(6.75) * C1262 - std::sqrt(6.75) * C1269;
    gz[84] += std::sqrt(6.75) * C1264 - std::sqrt(6.75) * C1271;
    gx[85] += std::sqrt(9.) * C1155 -
              (std::sqrt(2.25) * C1113 + std::sqrt(2.25) * C1071);
    gy[85] += std::sqrt(9.) * C1157 -
              (std::sqrt(2.25) * C1115 + std::sqrt(2.25) * C1073);
    gz[85] += std::sqrt(9.) * C1159 -
              (std::sqrt(2.25) * C1117 + std::sqrt(2.25) * C1075);
    gx[86] += std::sqrt(9.) * C1169 -
              (std::sqrt(2.25) * C1127 + std::sqrt(2.25) * C1085);
    gy[86] += std::sqrt(9.) * C1171 -
              (std::sqrt(2.25) * C1129 + std::sqrt(2.25) * C1087);
    gz[86] += std::sqrt(9.) * C1173 -
              (std::sqrt(2.25) * C1131 + std::sqrt(2.25) * C1089);
    gx[87] += std::sqrt(0.1875) * C1050 + std::sqrt(0.1875) * C1057 -
              std::sqrt(0.75) * C1064 + std::sqrt(0.1875) * C1092 +
              std::sqrt(0.1875) * C1099 - std::sqrt(0.75) * C1106 -
              std::sqrt(0.75) * C1134 - std::sqrt(0.75) * C1141 +
              std::sqrt(3.0) * C1148;
    gy[87] += std::sqrt(0.1875) * C1052 + std::sqrt(0.1875) * C1059 -
              std::sqrt(0.75) * C1066 + std::sqrt(0.1875) * C1094 +
              std::sqrt(0.1875) * C1101 - std::sqrt(0.75) * C1108 -
              std::sqrt(0.75) * C1136 - std::sqrt(0.75) * C1143 +
              std::sqrt(3.0) * C1150;
    gz[87] += std::sqrt(0.1875) * C1054 + std::sqrt(0.1875) * C1061 -
              std::sqrt(0.75) * C1068 + std::sqrt(0.1875) * C1096 +
              std::sqrt(0.1875) * C1103 - std::sqrt(0.75) * C1110 -
              std::sqrt(0.75) * C1138 - std::sqrt(0.75) * C1145 +
              std::sqrt(3.0) * C1152;
    gx[88] += std::sqrt(9.) * C1162 -
              (std::sqrt(2.25) * C1120 + std::sqrt(2.25) * C1078);
    gy[88] += std::sqrt(9.) * C1164 -
              (std::sqrt(2.25) * C1122 + std::sqrt(2.25) * C1080);
    gz[88] += std::sqrt(9.) * C1166 -
              (std::sqrt(2.25) * C1124 + std::sqrt(2.25) * C1082);
    gx[89] += std::sqrt(0.5625) * C1057 - std::sqrt(0.5625) * C1050 -
              std::sqrt(0.5625) * C1092 + std::sqrt(0.5625) * C1099 +
              std::sqrt(2.25) * C1134 - std::sqrt(2.25) * C1141;
    gy[89] += std::sqrt(0.5625) * C1059 - std::sqrt(0.5625) * C1052 -
              std::sqrt(0.5625) * C1094 + std::sqrt(0.5625) * C1101 +
              std::sqrt(2.25) * C1136 - std::sqrt(2.25) * C1143;
    gz[89] += std::sqrt(0.5625) * C1061 - std::sqrt(0.5625) * C1054 -
              std::sqrt(0.5625) * C1096 + std::sqrt(0.5625) * C1103 +
              std::sqrt(2.25) * C1138 - std::sqrt(2.25) * C1145;
    gx[90] += std::sqrt(27.) * C1239;
    gy[90] += std::sqrt(27.) * C1241;
    gz[90] += std::sqrt(27.) * C1243;
    gx[91] += std::sqrt(27.) * C1253;
    gy[91] += std::sqrt(27.) * C1255;
    gz[91] += std::sqrt(27.) * C1257;
    gx[92] += std::sqrt(9.) * C1232 -
              (std::sqrt(2.25) * C1225 + std::sqrt(2.25) * C1218);
    gy[92] += std::sqrt(9.) * C1234 -
              (std::sqrt(2.25) * C1227 + std::sqrt(2.25) * C1220);
    gz[92] += std::sqrt(9.) * C1236 -
              (std::sqrt(2.25) * C1229 + std::sqrt(2.25) * C1222);
    gx[93] += std::sqrt(27.) * C1246;
    gy[93] += std::sqrt(27.) * C1248;
    gz[93] += std::sqrt(27.) * C1250;
    gx[94] += std::sqrt(6.75) * C1218 - std::sqrt(6.75) * C1225;
    gy[94] += std::sqrt(6.75) * C1220 - std::sqrt(6.75) * C1227;
    gz[94] += std::sqrt(6.75) * C1222 - std::sqrt(6.75) * C1229;
    gx[95] += std::sqrt(6.75) * C1071 - std::sqrt(6.75) * C1113;
    gy[95] += std::sqrt(6.75) * C1073 - std::sqrt(6.75) * C1115;
    gz[95] += std::sqrt(6.75) * C1075 - std::sqrt(6.75) * C1117;
    gx[96] += std::sqrt(6.75) * C1085 - std::sqrt(6.75) * C1127;
    gy[96] += std::sqrt(6.75) * C1087 - std::sqrt(6.75) * C1129;
    gz[96] += std::sqrt(6.75) * C1089 - std::sqrt(6.75) * C1131;
    gx[97] += std::sqrt(2.25) * C1064 -
              (std::sqrt(0.5625) * C1057 + std::sqrt(0.5625) * C1050) +
              std::sqrt(0.5625) * C1092 + std::sqrt(0.5625) * C1099 -
              std::sqrt(2.25) * C1106;
    gy[97] += std::sqrt(2.25) * C1066 -
              (std::sqrt(0.5625) * C1059 + std::sqrt(0.5625) * C1052) +
              std::sqrt(0.5625) * C1094 + std::sqrt(0.5625) * C1101 -
              std::sqrt(2.25) * C1108;
    gz[97] += std::sqrt(2.25) * C1068 -
              (std::sqrt(0.5625) * C1061 + std::sqrt(0.5625) * C1054) +
              std::sqrt(0.5625) * C1096 + std::sqrt(0.5625) * C1103 -
              std::sqrt(2.25) * C1110;
    gx[98] += std::sqrt(6.75) * C1078 - std::sqrt(6.75) * C1120;
    gy[98] += std::sqrt(6.75) * C1080 - std::sqrt(6.75) * C1122;
    gz[98] += std::sqrt(6.75) * C1082 - std::sqrt(6.75) * C1124;
    gx[99] += std::sqrt(1.6875) * C1050 - std::sqrt(1.6875) * C1057 -
              std::sqrt(1.6875) * C1092 + std::sqrt(1.6875) * C1099;
    gy[99] += std::sqrt(1.6875) * C1052 - std::sqrt(1.6875) * C1059 -
              std::sqrt(1.6875) * C1094 + std::sqrt(1.6875) * C1101;
    gz[99] += std::sqrt(1.6875) * C1054 - std::sqrt(1.6875) * C1061 -
              std::sqrt(1.6875) * C1096 + std::sqrt(1.6875) * C1103;
    gx[100] += std::sqrt(6.75) * C189 - std::sqrt(6.75) * C441;
    gy[100] += std::sqrt(6.75) * C191 - std::sqrt(6.75) * C443;
    gz[100] += std::sqrt(6.75) * C193 - std::sqrt(6.75) * C445;
    gx[101] += std::sqrt(6.75) * C203 - std::sqrt(6.75) * C455;
    gy[101] += std::sqrt(6.75) * C205 - std::sqrt(6.75) * C457;
    gz[101] += std::sqrt(6.75) * C207 - std::sqrt(6.75) * C459;
    gx[102] += std::sqrt(2.25) * C182 -
               (std::sqrt(0.5625) * C175 + std::sqrt(0.5625) * C168) +
               std::sqrt(0.5625) * C420 + std::sqrt(0.5625) * C427 -
               std::sqrt(2.25) * C434;
    gy[102] += std::sqrt(2.25) * C184 -
               (std::sqrt(0.5625) * C177 + std::sqrt(0.5625) * C170) +
               std::sqrt(0.5625) * C422 + std::sqrt(0.5625) * C429 -
               std::sqrt(2.25) * C436;
    gz[102] += std::sqrt(2.25) * C186 -
               (std::sqrt(0.5625) * C179 + std::sqrt(0.5625) * C172) +
               std::sqrt(0.5625) * C424 + std::sqrt(0.5625) * C431 -
               std::sqrt(2.25) * C438;
    gx[103] += std::sqrt(6.75) * C196 - std::sqrt(6.75) * C448;
    gy[103] += std::sqrt(6.75) * C198 - std::sqrt(6.75) * C450;
    gz[103] += std::sqrt(6.75) * C200 - std::sqrt(6.75) * C452;
    gx[104] += std::sqrt(1.6875) * C168 - std::sqrt(1.6875) * C175 -
               std::sqrt(1.6875) * C420 + std::sqrt(1.6875) * C427;
    gy[104] += std::sqrt(1.6875) * C170 - std::sqrt(1.6875) * C177 -
               std::sqrt(1.6875) * C422 + std::sqrt(1.6875) * C429;
    gz[104] += std::sqrt(1.6875) * C172 - std::sqrt(1.6875) * C179 -
               std::sqrt(1.6875) * C424 + std::sqrt(1.6875) * C431;
    gx[105] += std::sqrt(6.75) * C273 - std::sqrt(6.75) * C525;
    gy[105] += std::sqrt(6.75) * C275 - std::sqrt(6.75) * C527;
    gz[105] += std::sqrt(6.75) * C277 - std::sqrt(6.75) * C529;
    gx[106] += std::sqrt(6.75) * C287 - std::sqrt(6.75) * C539;
    gy[106] += std::sqrt(6.75) * C289 - std::sqrt(6.75) * C541;
    gz[106] += std::sqrt(6.75) * C291 - std::sqrt(6.75) * C543;
    gx[107] += std::sqrt(2.25) * C266 -
               (std::sqrt(0.5625) * C259 + std::sqrt(0.5625) * C252) +
               std::sqrt(0.5625) * C504 + std::sqrt(0.5625) * C511 -
               std::sqrt(2.25) * C518;
    gy[107] += std::sqrt(2.25) * C268 -
               (std::sqrt(0.5625) * C261 + std::sqrt(0.5625) * C254) +
               std::sqrt(0.5625) * C506 + std::sqrt(0.5625) * C513 -
               std::sqrt(2.25) * C520;
    gz[107] += std::sqrt(2.25) * C270 -
               (std::sqrt(0.5625) * C263 + std::sqrt(0.5625) * C256) +
               std::sqrt(0.5625) * C508 + std::sqrt(0.5625) * C515 -
               std::sqrt(2.25) * C522;
    gx[108] += std::sqrt(6.75) * C280 - std::sqrt(6.75) * C532;
    gy[108] += std::sqrt(6.75) * C282 - std::sqrt(6.75) * C534;
    gz[108] += std::sqrt(6.75) * C284 - std::sqrt(6.75) * C536;
    gx[109] += std::sqrt(1.6875) * C252 - std::sqrt(1.6875) * C259 -
               std::sqrt(1.6875) * C504 + std::sqrt(1.6875) * C511;
    gy[109] += std::sqrt(1.6875) * C254 - std::sqrt(1.6875) * C261 -
               std::sqrt(1.6875) * C506 + std::sqrt(1.6875) * C513;
    gz[109] += std::sqrt(1.6875) * C256 - std::sqrt(1.6875) * C263 -
               std::sqrt(1.6875) * C508 + std::sqrt(1.6875) * C515;
    gx[110] += std::sqrt(2.25) * C147 -
               (std::sqrt(0.5625) * C105 + std::sqrt(0.5625) * C63) +
               std::sqrt(0.5625) * C315 + std::sqrt(0.5625) * C357 -
               std::sqrt(2.25) * C399;
    gy[110] += std::sqrt(2.25) * C149 -
               (std::sqrt(0.5625) * C107 + std::sqrt(0.5625) * C65) +
               std::sqrt(0.5625) * C317 + std::sqrt(0.5625) * C359 -
               std::sqrt(2.25) * C401;
    gz[110] += std::sqrt(2.25) * C151 -
               (std::sqrt(0.5625) * C109 + std::sqrt(0.5625) * C67) +
               std::sqrt(0.5625) * C319 + std::sqrt(0.5625) * C361 -
               std::sqrt(2.25) * C403;
    gx[111] += std::sqrt(2.25) * C161 -
               (std::sqrt(0.5625) * C119 + std::sqrt(0.5625) * C77) +
               std::sqrt(0.5625) * C329 + std::sqrt(0.5625) * C371 -
               std::sqrt(2.25) * C413;
    gy[111] += std::sqrt(2.25) * C163 -
               (std::sqrt(0.5625) * C121 + std::sqrt(0.5625) * C79) +
               std::sqrt(0.5625) * C331 + std::sqrt(0.5625) * C373 -
               std::sqrt(2.25) * C415;
    gz[111] += std::sqrt(2.25) * C165 -
               (std::sqrt(0.5625) * C123 + std::sqrt(0.5625) * C81) +
               std::sqrt(0.5625) * C333 + std::sqrt(0.5625) * C375 -
               std::sqrt(2.25) * C417;
    gx[112] += std::sqrt(0.046875) * C40 + std::sqrt(0.046875) * C49 -
               std::sqrt(0.1875) * C56 + std::sqrt(0.046875) * C84 +
               std::sqrt(0.046875) * C91 - std::sqrt(0.1875) * C98 -
               std::sqrt(0.1875) * C126 - std::sqrt(0.1875) * C133 +
               std::sqrt(0.75) * C140 - std::sqrt(0.046875) * C294 -
               std::sqrt(0.046875) * C301 + std::sqrt(0.1875) * C308 -
               std::sqrt(0.046875) * C336 - std::sqrt(0.046875) * C343 +
               std::sqrt(0.1875) * C350 + std::sqrt(0.1875) * C378 +
               std::sqrt(0.1875) * C385 - std::sqrt(0.75) * C392;
    gy[112] += std::sqrt(0.046875) * C44 + std::sqrt(0.046875) * C51 -
               std::sqrt(0.1875) * C58 + std::sqrt(0.046875) * C86 +
               std::sqrt(0.046875) * C93 - std::sqrt(0.1875) * C100 -
               std::sqrt(0.1875) * C128 - std::sqrt(0.1875) * C135 +
               std::sqrt(0.75) * C142 - std::sqrt(0.046875) * C296 -
               std::sqrt(0.046875) * C303 + std::sqrt(0.1875) * C310 -
               std::sqrt(0.046875) * C338 - std::sqrt(0.046875) * C345 +
               std::sqrt(0.1875) * C352 + std::sqrt(0.1875) * C380 +
               std::sqrt(0.1875) * C387 - std::sqrt(0.75) * C394;
    gz[112] += std::sqrt(0.046875) * C46 + std::sqrt(0.046875) * C53 -
               std::sqrt(0.1875) * C60 + std::sqrt(0.046875) * C88 +
               std::sqrt(0.046875) * C95 - std::sqrt(0.1875) * C102 -
               std::sqrt(0.1875) * C130 - std::sqrt(0.1875) * C137 +
               std::sqrt(0.75) * C144 - std::sqrt(0.046875) * C298 -
               std::sqrt(0.046875) * C305 + std::sqrt(0.1875) * C312 -
               std::sqrt(0.046875) * C340 - std::sqrt(0.046875) * C347 +
               std::sqrt(0.1875) * C354 + std::sqrt(0.1875) * C382 +
               std::sqrt(0.1875) * C389 - std::sqrt(0.75) * C396;
    gx[113] += std::sqrt(2.25) * C154 -
               (std::sqrt(0.5625) * C112 + std::sqrt(0.5625) * C70) +
               std::sqrt(0.5625) * C322 + std::sqrt(0.5625) * C364 -
               std::sqrt(2.25) * C406;
    gy[113] += std::sqrt(2.25) * C156 -
               (std::sqrt(0.5625) * C114 + std::sqrt(0.5625) * C72) +
               std::sqrt(0.5625) * C324 + std::sqrt(0.5625) * C366 -
               std::sqrt(2.25) * C408;
    gz[113] += std::sqrt(2.25) * C158 -
               (std::sqrt(0.5625) * C116 + std::sqrt(0.5625) * C74) +
               std::sqrt(0.5625) * C326 + std::sqrt(0.5625) * C368 -
               std::sqrt(2.25) * C410;
    gx[114] += std::sqrt(0.140625) * C49 - std::sqrt(0.140625) * C40 -
               std::sqrt(0.140625) * C84 + std::sqrt(0.140625) * C91 +
               std::sqrt(0.5625) * C126 - std::sqrt(0.5625) * C133 +
               std::sqrt(0.140625) * C294 - std::sqrt(0.140625) * C301 +
               std::sqrt(0.140625) * C336 - std::sqrt(0.140625) * C343 -
               std::sqrt(0.5625) * C378 + std::sqrt(0.5625) * C385;
    gy[114] += std::sqrt(0.140625) * C51 - std::sqrt(0.140625) * C44 -
               std::sqrt(0.140625) * C86 + std::sqrt(0.140625) * C93 +
               std::sqrt(0.5625) * C128 - std::sqrt(0.5625) * C135 +
               std::sqrt(0.140625) * C296 - std::sqrt(0.140625) * C303 +
               std::sqrt(0.140625) * C338 - std::sqrt(0.140625) * C345 -
               std::sqrt(0.5625) * C380 + std::sqrt(0.5625) * C387;
    gz[114] += std::sqrt(0.140625) * C53 - std::sqrt(0.140625) * C46 -
               std::sqrt(0.140625) * C88 + std::sqrt(0.140625) * C95 +
               std::sqrt(0.5625) * C130 - std::sqrt(0.5625) * C137 +
               std::sqrt(0.140625) * C298 - std::sqrt(0.140625) * C305 +
               std::sqrt(0.140625) * C340 - std::sqrt(0.140625) * C347 -
               std::sqrt(0.5625) * C382 + std::sqrt(0.5625) * C389;
    gx[115] += std::sqrt(6.75) * C231 - std::sqrt(6.75) * C483;
    gy[115] += std::sqrt(6.75) * C233 - std::sqrt(6.75) * C485;
    gz[115] += std::sqrt(6.75) * C235 - std::sqrt(6.75) * C487;
    gx[116] += std::sqrt(6.75) * C245 - std::sqrt(6.75) * C497;
    gy[116] += std::sqrt(6.75) * C247 - std::sqrt(6.75) * C499;
    gz[116] += std::sqrt(6.75) * C249 - std::sqrt(6.75) * C501;
    gx[117] += std::sqrt(2.25) * C224 -
               (std::sqrt(0.5625) * C217 + std::sqrt(0.5625) * C210) +
               std::sqrt(0.5625) * C462 + std::sqrt(0.5625) * C469 -
               std::sqrt(2.25) * C476;
    gy[117] += std::sqrt(2.25) * C226 -
               (std::sqrt(0.5625) * C219 + std::sqrt(0.5625) * C212) +
               std::sqrt(0.5625) * C464 + std::sqrt(0.5625) * C471 -
               std::sqrt(2.25) * C478;
    gz[117] += std::sqrt(2.25) * C228 -
               (std::sqrt(0.5625) * C221 + std::sqrt(0.5625) * C214) +
               std::sqrt(0.5625) * C466 + std::sqrt(0.5625) * C473 -
               std::sqrt(2.25) * C480;
    gx[118] += std::sqrt(6.75) * C238 - std::sqrt(6.75) * C490;
    gy[118] += std::sqrt(6.75) * C240 - std::sqrt(6.75) * C492;
    gz[118] += std::sqrt(6.75) * C242 - std::sqrt(6.75) * C494;
    gx[119] += std::sqrt(1.6875) * C210 - std::sqrt(1.6875) * C217 -
               std::sqrt(1.6875) * C462 + std::sqrt(1.6875) * C469;
    gy[119] += std::sqrt(1.6875) * C212 - std::sqrt(1.6875) * C219 -
               std::sqrt(1.6875) * C464 + std::sqrt(1.6875) * C471;
    gz[119] += std::sqrt(1.6875) * C214 - std::sqrt(1.6875) * C221 -
               std::sqrt(1.6875) * C466 + std::sqrt(1.6875) * C473;
    gx[120] += std::sqrt(1.6875) * C63 - std::sqrt(1.6875) * C105 -
               std::sqrt(1.6875) * C315 + std::sqrt(1.6875) * C357;
    gy[120] += std::sqrt(1.6875) * C65 - std::sqrt(1.6875) * C107 -
               std::sqrt(1.6875) * C317 + std::sqrt(1.6875) * C359;
    gz[120] += std::sqrt(1.6875) * C67 - std::sqrt(1.6875) * C109 -
               std::sqrt(1.6875) * C319 + std::sqrt(1.6875) * C361;
    gx[121] += std::sqrt(1.6875) * C77 - std::sqrt(1.6875) * C119 -
               std::sqrt(1.6875) * C329 + std::sqrt(1.6875) * C371;
    gy[121] += std::sqrt(1.6875) * C79 - std::sqrt(1.6875) * C121 -
               std::sqrt(1.6875) * C331 + std::sqrt(1.6875) * C373;
    gz[121] += std::sqrt(1.6875) * C81 - std::sqrt(1.6875) * C123 -
               std::sqrt(1.6875) * C333 + std::sqrt(1.6875) * C375;
    gx[122] += std::sqrt(0.5625) * C56 -
               (std::sqrt(0.140625) * C49 + std::sqrt(0.140625) * C40) +
               std::sqrt(0.140625) * C84 + std::sqrt(0.140625) * C91 -
               std::sqrt(0.5625) * C98 + std::sqrt(0.140625) * C294 +
               std::sqrt(0.140625) * C301 - std::sqrt(0.5625) * C308 -
               std::sqrt(0.140625) * C336 - std::sqrt(0.140625) * C343 +
               std::sqrt(0.5625) * C350;
    gy[122] += std::sqrt(0.5625) * C58 -
               (std::sqrt(0.140625) * C51 + std::sqrt(0.140625) * C44) +
               std::sqrt(0.140625) * C86 + std::sqrt(0.140625) * C93 -
               std::sqrt(0.5625) * C100 + std::sqrt(0.140625) * C296 +
               std::sqrt(0.140625) * C303 - std::sqrt(0.5625) * C310 -
               std::sqrt(0.140625) * C338 - std::sqrt(0.140625) * C345 +
               std::sqrt(0.5625) * C352;
    gz[122] += std::sqrt(0.5625) * C60 -
               (std::sqrt(0.140625) * C53 + std::sqrt(0.140625) * C46) +
               std::sqrt(0.140625) * C88 + std::sqrt(0.140625) * C95 -
               std::sqrt(0.5625) * C102 + std::sqrt(0.140625) * C298 +
               std::sqrt(0.140625) * C305 - std::sqrt(0.5625) * C312 -
               std::sqrt(0.140625) * C340 - std::sqrt(0.140625) * C347 +
               std::sqrt(0.5625) * C354;
    gx[123] += std::sqrt(1.6875) * C70 - std::sqrt(1.6875) * C112 -
               std::sqrt(1.6875) * C322 + std::sqrt(1.6875) * C364;
    gy[123] += std::sqrt(1.6875) * C72 - std::sqrt(1.6875) * C114 -
               std::sqrt(1.6875) * C324 + std::sqrt(1.6875) * C366;
    gz[123] += std::sqrt(1.6875) * C74 - std::sqrt(1.6875) * C116 -
               std::sqrt(1.6875) * C326 + std::sqrt(1.6875) * C368;
    gx[124] += std::sqrt(0.421875) * C40 - std::sqrt(0.421875) * C49 -
               std::sqrt(0.421875) * C84 + std::sqrt(0.421875) * C91 -
               std::sqrt(0.421875) * C294 + std::sqrt(0.421875) * C301 +
               std::sqrt(0.421875) * C336 - std::sqrt(0.421875) * C343;
    gy[124] += std::sqrt(0.421875) * C44 - std::sqrt(0.421875) * C51 -
               std::sqrt(0.421875) * C86 + std::sqrt(0.421875) * C93 -
               std::sqrt(0.421875) * C296 + std::sqrt(0.421875) * C303 +
               std::sqrt(0.421875) * C338 - std::sqrt(0.421875) * C345;
    gz[124] += std::sqrt(0.421875) * C46 - std::sqrt(0.421875) * C53 -
               std::sqrt(0.421875) * C88 + std::sqrt(0.421875) * C95 -
               std::sqrt(0.421875) * C298 + std::sqrt(0.421875) * C305 +
               std::sqrt(0.421875) * C340 - std::sqrt(0.421875) * C347;
}
