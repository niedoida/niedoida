/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2121_1_et(const double ae,
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
    const double C358211 = g[1];
    const double C358255 = g[5];
    const double C358299 = g[9];
    const double C358365 = g[15];
    const double C358675 = g[17];
    const double C358719 = g[21];
    const double C358763 = g[25];
    const double C358829 = g[31];
    const double C359139 = g[33];
    const double C359183 = g[37];
    const double C359227 = g[41];
    const double C359293 = g[47];
    const double C359602 = g[49];
    const double C359642 = g[53];
    const double C359682 = g[57];
    const double C359742 = g[63];
    const double C360034 = g[65];
    const double C360074 = g[69];
    const double C360114 = g[73];
    const double C360174 = g[79];
    const double C360450 = g[81];
    const double C360490 = g[85];
    const double C360530 = g[89];
    const double C360590 = g[95];
    const double C371102 = g[96];
    const double C371135 = g[97];
    const double C371153 = g[98];
    const double C371228 = g[99];
    const double C371349 = g[100];
    const double C371470 = g[101];
    const double C371486 = g[102];
    const double C371502 = g[103];
    const double C371533 = g[104];
    const double C371549 = g[105];
    const double C371595 = g[106];
    const double C371611 = g[107];
    const double C371659 = g[108];
    const double C371719 = g[109];
    const double C371779 = g[110];
    const double C371795 = g[111];
    const double C371811 = g[112];
    const double C371842 = g[113];
    const double C371858 = g[114];
    const double C371905 = g[115];
    const double C371965 = g[116];
    const double C372024 = g[117];
    const double C372041 = g[118];
    const double C372057 = g[119];
    const double C372087 = g[120];
    const double C372118 = g[121];
    const double C372135 = g[122];
    const double C372210 = g[123];
    const double C372331 = g[124];
    const double C372451 = g[125];
    const double C372466 = g[126];
    const double C372481 = g[127];
    const double C372511 = g[128];
    const double C372526 = g[129];
    const double C372572 = g[130];
    const double C372588 = g[131];
    const double C372635 = g[132];
    const double C372695 = g[133];
    const double C372755 = g[134];
    const double C372770 = g[135];
    const double C372786 = g[136];
    const double C372816 = g[137];
    const double C372832 = g[138];
    const double C372878 = g[139];
    const double C372939 = g[140];
    const double C372998 = g[141];
    const double C373014 = g[142];
    const double C373030 = g[143];
    const double C373060 = g[144];
    const double C373091 = g[145];
    const double C373108 = g[146];
    const double C373183 = g[147];
    const double C373303 = g[148];
    const double C373424 = g[149];
    const double C373440 = g[150];
    const double C373455 = g[151];
    const double C373485 = g[152];
    const double C373500 = g[153];
    const double C373545 = g[154];
    const double C373561 = g[155];
    const double C373607 = g[156];
    const double C373666 = g[157];
    const double C373725 = g[158];
    const double C373740 = g[159];
    const double C373756 = g[160];
    const double C373785 = g[161];
    const double C373801 = g[162];
    const double C373847 = g[163];
    const double C373907 = g[164];
    const double C373966 = g[165];
    const double C373982 = g[166];
    const double C373998 = g[167];
    const double C374041 = g[168];
    const double C374199 = g[169];
    const double C374229 = g[170];
    const double C374258 = g[171];
    const double C374274 = g[172];
    const double C374320 = g[173];
    const double C374378 = g[174];
    const double C374435 = g[175];
    const double C374450 = g[176];
    const double C374466 = g[177];
    const double C374509 = g[178];
    const double C374666 = g[179];
    const double C374697 = g[180];
    const double C374740 = g[181];
    const double C374896 = g[182];
    const double C374925 = g[183];
    const double C374954 = g[184];
    const double C374970 = g[185];
    const double C374985 = g[186];
    const double C375002 = g[187];
    const double C375017 = g[188];
    const double C375032 = g[189];
    const double C375048 = g[190];
    const double C375065 = g[191];
    const double C375433 = g[192];
    const double C375448 = g[193];
    const double C375464 = g[194];
    const double C375479 = g[195];
    const double C375495 = g[196];
    const double C375659 = g[197];
    const double C375674 = g[198];
    const double C375690 = g[199];
    const double C375705 = g[200];
    const double C375850 = g[201];
    const double C375865 = g[202];
    const double C375880 = g[203];
    const double C375895 = g[204];
    const double C375912 = g[205];
    const double C375927 = g[206];
    const double C376220 = g[207];
    const double C376235 = g[208];
    const double C376250 = g[209];
    const double C376267 = g[210];
    const double C376404 = g[211];
    const double C376419 = g[212];
    const double C376434 = g[213];
    const double C376580 = g[214];
    const double C376595 = g[215];
    const double C376610 = g[216];
    const double C376625 = g[217];
    const double C376642 = g[218];
    const double C376659 = g[219];
    const double C376947 = g[220];
    const double C376962 = g[221];
    const double C376977 = g[222];
    const double C377067 = g[223];
    const double C377082 = g[224];
    const double C377097 = g[225];
    const double C377216 = g[226];
    const double C377258 = g[227];
    const double C377273 = g[228];
    const double C377288 = g[229];
    const double C377331 = g[230];
    const double C377374 = g[231];
    const double C377390 = g[232];
    const double C377405 = g[233];
    const double C377421 = g[234];
    const double C377542 = g[235];
    const double C377557 = g[236];
    const double C377646 = g[237];
    const double C377690 = g[238];
    const double C377705 = g[239];
    const double C377808 = g[240];
    const double C377823 = g[241];
    const double C377838 = g[242];
    const double C377853 = g[243];
    const double C377942 = g[244];
    const double C377957 = g[245];
    const double C378001 = g[246];
    const double C378016 = g[247];
    const double C378103 = g[248];
    const double C378118 = g[249];
    const double C378162 = g[250];
    const double C378177 = g[251];
    const double C382118 = g[252];
    const double C382134 = g[253];
    const double C382207 = g[254];
    const double C382223 = g[255];
    const double C382385 = g[256];
    const double C382401 = g[257];
    const double C382563 = g[258];
    const double C382579 = g[259];
    const double C382654 = g[260];
    const double C382785 = g[261];
    const double C382859 = g[262];
    const double C383047 = g[263];
    const double C383062 = g[264];
    const double C383078 = g[265];
    const double C383196 = g[266];
    const double C383331 = g[267];
    const double C383347 = g[268];
    const double C383408 = g[269];
    const double C383525 = g[270];
    const double C383585 = g[271];
    const double C383758 = g[272];
    const double C383774 = g[273];
    const double C383790 = g[274];
    const double C383934 = g[275];
    const double C384037 = g[276];
    const double C384083 = g[277];
    const double C384170 = g[278];
    const double C384231 = g[279];
    const double C384273 = g[280];
    const double C384344 = g[281];
    const double C384387 = g[282];
    const double C384883 = g[283];
    const double C384899 = g[284];
    const double C384987 = g[285];
    const double C385145 = g[286];
    const double C385217 = g[287];
    const double C390373 = g[288];
    const double C390389 = g[289];
    const double C390551 = g[290];
    const double C391058 = g[291];
    const double C391191 = g[292];
    const double C392213 = g[293];
    const double C371140 = vrx[0];
    const double C371158 = vrx[1];
    const double C371616 = vrx[2];
    const double C371863 = vrx[3];
    const double C372122 = vrx[4];
    const double C372139 = vrx[5];
    const double C372592 = vrx[6];
    const double C372836 = vrx[7];
    const double C373095 = vrx[8];
    const double C373112 = vrx[9];
    const double C373565 = vrx[10];
    const double C373805 = vrx[11];
    const double C374046 = vrx[12];
    const double C374279 = vrx[13];
    const double C374514 = vrx[14];
    const double C374744 = vrx[15];
    const double C374958 = vrx[16];
    const double C374990 = vrx[17];
    const double C375021 = vrx[18];
    const double C375036 = vrx[19];
    const double C375052 = vrx[20];
    const double C375069 = vrx[21];
    const double C375128 = vrx[22];
    const double C375157 = vrx[23];
    const double C375245 = vrx[24];
    const double C375274 = vrx[25];
    const double C375319 = vrx[26];
    const double C375377 = vrx[27];
    const double C375406 = vrx[28];
    const double C375421 = vrx[29];
    const double C375452 = vrx[30];
    const double C375514 = vrx[31];
    const double C375559 = vrx[32];
    const double C375647 = vrx[33];
    const double C375678 = vrx[34];
    const double C375767 = vrx[35];
    const double C375899 = vrx[36];
    const double C375931 = vrx[37];
    const double C375961 = vrx[38];
    const double C376003 = vrx[39];
    const double C376076 = vrx[40];
    const double C376105 = vrx[41];
    const double C376179 = vrx[42];
    const double C376208 = vrx[43];
    const double C376287 = vrx[44];
    const double C376332 = vrx[45];
    const double C376392 = vrx[46];
    const double C376511 = vrx[47];
    const double C376629 = vrx[48];
    const double C376646 = vrx[49];
    const double C376791 = vrx[50];
    const double C376833 = vrx[51];
    const double C376920 = vrx[52];
    const double C376935 = vrx[53];
    const double C377026 = vrx[54];
    const double C377161 = vrx[55];
    const double C377378 = vrx[56];
    const double C377409 = vrx[57];
    const double C377425 = vrx[58];
    const double C377440 = vrx[59];
    const double C377455 = vrx[60];
    const double C377470 = vrx[61];
    const double C377485 = vrx[62];
    const double C377500 = vrx[63];
    const double C377515 = vrx[64];
    const double C377530 = vrx[65];
    const double C377575 = vrx[66];
    const double C377590 = vrx[67];
    const double C377605 = vrx[68];
    const double C377620 = vrx[69];
    const double C377678 = vrx[70];
    const double C377723 = vrx[71];
    const double C377752 = vrx[72];
    const double C377767 = vrx[73];
    const double C377782 = vrx[74];
    const double C377871 = vrx[75];
    const double C377886 = vrx[76];
    const double C377901 = vrx[77];
    const double C377916 = vrx[78];
    const double C377989 = vrx[79];
    const double C378062 = vrx[80];
    const double C378077 = vrx[81];
    const double C378150 = vrx[82];
    const double C378223 = vrx[83];
    const double C378271 = vry[0];
    const double C378288 = vry[1];
    const double C378737 = vry[2];
    const double C378977 = vry[3];
    const double C379229 = vry[4];
    const double C379245 = vry[5];
    const double C379689 = vry[6];
    const double C379926 = vry[7];
    const double C380178 = vry[8];
    const double C380194 = vry[9];
    const double C380638 = vry[10];
    const double C380871 = vry[11];
    const double C381106 = vry[12];
    const double C381335 = vry[13];
    const double C381564 = vry[14];
    const double C381791 = vry[15];
    const double C382002 = vry[16];
    const double C382032 = vry[17];
    const double C382061 = vry[18];
    const double C382075 = vry[19];
    const double C382090 = vry[20];
    const double C382106 = vry[21];
    const double C382167 = vry[22];
    const double C382196 = vry[23];
    const double C382286 = vry[24];
    const double C382315 = vry[25];
    const double C382360 = vry[26];
    const double C382420 = vry[27];
    const double C382449 = vry[28];
    const double C382464 = vry[29];
    const double C382493 = vry[30];
    const double C382552 = vry[31];
    const double C382599 = vry[32];
    const double C382688 = vry[33];
    const double C382717 = vry[34];
    const double C382805 = vry[35];
    const double C382934 = vry[36];
    const double C382964 = vry[37];
    const double C382994 = vry[38];
    const double C383036 = vry[39];
    const double C383112 = vry[40];
    const double C383141 = vry[41];
    const double C383216 = vry[42];
    const double C383245 = vry[43];
    const double C383320 = vry[44];
    const double C383367 = vry[45];
    const double C383428 = vry[46];
    const double C383545 = vry[47];
    const double C383660 = vry[48];
    const double C383676 = vry[49];
    const double C383823 = vry[50];
    const double C383865 = vry[51];
    const double C383953 = vry[52];
    const double C383968 = vry[53];
    const double C384057 = vry[54];
    const double C384191 = vry[55];
    const double C384406 = vry[56];
    const double C384435 = vry[57];
    const double C384450 = vry[58];
    const double C384465 = vry[59];
    const double C384480 = vry[60];
    const double C384495 = vry[61];
    const double C384510 = vry[62];
    const double C384525 = vry[63];
    const double C384540 = vry[64];
    const double C384555 = vry[65];
    const double C384598 = vry[66];
    const double C384613 = vry[67];
    const double C384628 = vry[68];
    const double C384643 = vry[69];
    const double C384700 = vry[70];
    const double C384743 = vry[71];
    const double C384772 = vry[72];
    const double C384787 = vry[73];
    const double C384802 = vry[74];
    const double C384888 = vry[75];
    const double C384904 = vry[76];
    const double C384919 = vry[77];
    const double C384934 = vry[78];
    const double C385006 = vry[79];
    const double C385077 = vry[80];
    const double C385092 = vry[81];
    const double C385164 = vry[82];
    const double C385236 = vry[83];
    const double C385284 = vrz[0];
    const double C385301 = vrz[1];
    const double C385750 = vrz[2];
    const double C385990 = vrz[3];
    const double C386242 = vrz[4];
    const double C386258 = vrz[5];
    const double C386702 = vrz[6];
    const double C386939 = vrz[7];
    const double C387191 = vrz[8];
    const double C387207 = vrz[9];
    const double C387651 = vrz[10];
    const double C387884 = vrz[11];
    const double C388119 = vrz[12];
    const double C388348 = vrz[13];
    const double C388577 = vrz[14];
    const double C388804 = vrz[15];
    const double C389015 = vrz[16];
    const double C389045 = vrz[17];
    const double C389074 = vrz[18];
    const double C389088 = vrz[19];
    const double C389103 = vrz[20];
    const double C389119 = vrz[21];
    const double C389178 = vrz[22];
    const double C389207 = vrz[23];
    const double C389295 = vrz[24];
    const double C389324 = vrz[25];
    const double C389369 = vrz[26];
    const double C389427 = vrz[27];
    const double C389456 = vrz[28];
    const double C389471 = vrz[29];
    const double C389500 = vrz[30];
    const double C389559 = vrz[31];
    const double C389604 = vrz[32];
    const double C389692 = vrz[33];
    const double C389721 = vrz[34];
    const double C389808 = vrz[35];
    const double C389936 = vrz[36];
    const double C389966 = vrz[37];
    const double C389996 = vrz[38];
    const double C390038 = vrz[39];
    const double C390111 = vrz[40];
    const double C390140 = vrz[41];
    const double C390214 = vrz[42];
    const double C390243 = vrz[43];
    const double C390318 = vrz[44];
    const double C390363 = vrz[45];
    const double C390425 = vrz[46];
    const double C390541 = vrz[47];
    const double C390656 = vrz[48];
    const double C390672 = vrz[49];
    const double C390816 = vrz[50];
    const double C390858 = vrz[51];
    const double C390945 = vrz[52];
    const double C390960 = vrz[53];
    const double C391048 = vrz[54];
    const double C391181 = vrz[55];
    const double C391393 = vrz[56];
    const double C391422 = vrz[57];
    const double C391437 = vrz[58];
    const double C391452 = vrz[59];
    const double C391467 = vrz[60];
    const double C391482 = vrz[61];
    const double C391497 = vrz[62];
    const double C391512 = vrz[63];
    const double C391527 = vrz[64];
    const double C391542 = vrz[65];
    const double C391585 = vrz[66];
    const double C391600 = vrz[67];
    const double C391615 = vrz[68];
    const double C391630 = vrz[69];
    const double C391687 = vrz[70];
    const double C391730 = vrz[71];
    const double C391759 = vrz[72];
    const double C391774 = vrz[73];
    const double C391789 = vrz[74];
    const double C391874 = vrz[75];
    const double C391889 = vrz[76];
    const double C391904 = vrz[77];
    const double C391919 = vrz[78];
    const double C391990 = vrz[79];
    const double C392061 = vrz[80];
    const double C392076 = vrz[81];
    const double C392147 = vrz[82];
    const double C392219 = vrz[83];
    const double C371137 = 2 * q;
    const double C392477 = C376629 / q;
    const double C392476 = C377989 * p;
    const double C392475 = 3 * C376105;
    const double C392474 = C377916 * p;
    const double C392473 = C377901 * p;
    const double C392472 = C377782 * p;
    const double C392471 = C377767 * p;
    const double C392470 = C377752 * p;
    const double C392469 = C375931 / q;
    const double C392468 = C377678 * p;
    const double C392467 = 3 * C375274;
    const double C392466 = C377620 * p;
    const double C392465 = C377605 * p;
    const double C392464 = C377590 * p;
    const double C392463 = C375421 / q;
    const double C392462 = C377575 * p;
    const double C392461 = 3 * C375157;
    const double C392460 = C377530 * p;
    const double C392459 = C377515 * p;
    const double C392458 = C377500 * p;
    const double C392457 = C377485 * p;
    const double C392456 = C377470 * p;
    const double C392455 = C377455 * p;
    const double C392454 = C377440 * p;
    const double C392452 = C377026 * p;
    const double C392450 = C376935 * p;
    const double C392449 = C376920 * p;
    const double C392446 = C376791 * p;
    const double C392445 = C376646 * p;
    const double C392444 = C376629 * p;
    const double C392441 = C373565 * p;
    const double C392440 = C374279 / q;
    const double C392439 = C376511 * p;
    const double C392438 = C374744 / q;
    const double C392436 = C376392 * p;
    const double C392435 = C376332 * p;
    const double C392432 = C376208 * p;
    const double C392431 = C374744 * p;
    const double C392430 = C376179 * p;
    const double C392426 = C376105 * p;
    const double C392425 = C372836 * p;
    const double C392424 = C376076 * p;
    const double C392423 = C375931 * p;
    const double C392422 = C375961 * p;
    const double C392421 = C375899 * p;
    const double C392418 = C373095 * p;
    const double C392417 = C375767 * p;
    const double C392414 = C374514 / q;
    const double C392413 = C375647 * p;
    const double C392412 = C374279 * p;
    const double C392411 = C372122 * p;
    const double C392408 = C375559 * p;
    const double C392407 = C375514 * p;
    const double C392403 = C374046 / q;
    const double C392402 = C375421 * p;
    const double C392401 = C375406 * p;
    const double C392400 = C374514 * p;
    const double C392399 = C375377 * p;
    const double C392398 = C374046 * p;
    const double C392397 = C375319 * p;
    const double C392394 = C375274 * p;
    const double C392393 = C371863 * p;
    const double C392392 = C375245 * p;
    const double C392391 = C375069 * p;
    const double C392390 = C375157 * p;
    const double C392389 = C371616 * p;
    const double C392388 = C375128 * p;
    const double C392387 = C375052 * p;
    const double C392231 = de * zCD;
    const double C392230 = be * zAB;
    const double C392227 = de * yCD;
    const double C392226 = be * yAB;
    const double C392223 = de * xCD;
    const double C392222 = be * xAB;
    const double C392808 = C383660 / q;
    const double C392807 = C385006 * p;
    const double C392806 = 3 * C383141;
    const double C392805 = C384934 * p;
    const double C392804 = C384919 * p;
    const double C392803 = C384802 * p;
    const double C392802 = C384787 * p;
    const double C392801 = C384772 * p;
    const double C392800 = C382964 / q;
    const double C392799 = C384700 * p;
    const double C392798 = 3 * C382315;
    const double C392797 = C384643 * p;
    const double C392796 = C384628 * p;
    const double C392795 = C384613 * p;
    const double C392794 = C382464 / q;
    const double C392793 = C384598 * p;
    const double C392792 = 3 * C382196;
    const double C392791 = C384555 * p;
    const double C392790 = C384540 * p;
    const double C392789 = C384525 * p;
    const double C392788 = C384510 * p;
    const double C392787 = C384495 * p;
    const double C392786 = C384480 * p;
    const double C392785 = C384465 * p;
    const double C392783 = C384057 * p;
    const double C392781 = C383968 * p;
    const double C392780 = C383953 * p;
    const double C392777 = C383823 * p;
    const double C392776 = C383676 * p;
    const double C392775 = C383660 * p;
    const double C392772 = C380638 * p;
    const double C392771 = C381335 / q;
    const double C392770 = C383545 * p;
    const double C392769 = C381791 / q;
    const double C392767 = C383428 * p;
    const double C392766 = C383367 * p;
    const double C392763 = C383245 * p;
    const double C392762 = C381791 * p;
    const double C392761 = C383216 * p;
    const double C392757 = C383141 * p;
    const double C392756 = C379926 * p;
    const double C392755 = C383112 * p;
    const double C392754 = C382964 * p;
    const double C392753 = C382994 * p;
    const double C392752 = C382934 * p;
    const double C392749 = C380178 * p;
    const double C392748 = C382805 * p;
    const double C392745 = C381564 / q;
    const double C392744 = C382688 * p;
    const double C392743 = C381335 * p;
    const double C392742 = C379229 * p;
    const double C392739 = C382599 * p;
    const double C392738 = C382552 * p;
    const double C392734 = C381106 / q;
    const double C392733 = C382464 * p;
    const double C392732 = C382449 * p;
    const double C392731 = C381564 * p;
    const double C392730 = C382420 * p;
    const double C392729 = C381106 * p;
    const double C392728 = C382360 * p;
    const double C392725 = C382315 * p;
    const double C392724 = C378977 * p;
    const double C392723 = C382286 * p;
    const double C392722 = C382106 * p;
    const double C392721 = C382196 * p;
    const double C392720 = C378737 * p;
    const double C392719 = C382167 * p;
    const double C392718 = C382090 * p;
    const double C393136 = C390656 / q;
    const double C393135 = C391990 * p;
    const double C393134 = 3 * C390140;
    const double C393133 = C391919 * p;
    const double C393132 = C391904 * p;
    const double C393131 = C391789 * p;
    const double C393130 = C391774 * p;
    const double C393129 = C391759 * p;
    const double C393128 = C389966 / q;
    const double C393127 = C391687 * p;
    const double C393126 = 3 * C389324;
    const double C393125 = C391630 * p;
    const double C393124 = C391615 * p;
    const double C393123 = C391600 * p;
    const double C393122 = C389471 / q;
    const double C393121 = C391585 * p;
    const double C393120 = 3 * C389207;
    const double C393119 = C391542 * p;
    const double C393118 = C391527 * p;
    const double C393117 = C391512 * p;
    const double C393116 = C391497 * p;
    const double C393115 = C391482 * p;
    const double C393114 = C391467 * p;
    const double C393113 = C391452 * p;
    const double C393111 = C391048 * p;
    const double C393109 = C390960 * p;
    const double C393108 = C390945 * p;
    const double C393105 = C390816 * p;
    const double C393104 = C390672 * p;
    const double C393103 = C390656 * p;
    const double C393100 = C387651 * p;
    const double C393099 = C388348 / q;
    const double C393098 = C390541 * p;
    const double C393097 = C388804 / q;
    const double C393095 = C390425 * p;
    const double C393094 = C390363 * p;
    const double C393091 = C390243 * p;
    const double C393090 = C388804 * p;
    const double C393089 = C390214 * p;
    const double C393085 = C390140 * p;
    const double C393084 = C386939 * p;
    const double C393083 = C390111 * p;
    const double C393082 = C389966 * p;
    const double C393081 = C389996 * p;
    const double C393080 = C389936 * p;
    const double C393077 = C387191 * p;
    const double C393076 = C389808 * p;
    const double C393073 = C388577 / q;
    const double C393072 = C389692 * p;
    const double C393071 = C388348 * p;
    const double C393070 = C386242 * p;
    const double C393067 = C389604 * p;
    const double C393066 = C389559 * p;
    const double C393062 = C388119 / q;
    const double C393061 = C389471 * p;
    const double C393060 = C389456 * p;
    const double C393059 = C388577 * p;
    const double C393058 = C389427 * p;
    const double C393057 = C388119 * p;
    const double C393056 = C389369 * p;
    const double C393053 = C389324 * p;
    const double C393052 = C385990 * p;
    const double C393051 = C389295 * p;
    const double C393050 = C389119 * p;
    const double C393049 = C389207 * p;
    const double C393048 = C385750 * p;
    const double C393047 = C389178 * p;
    const double C393046 = C389103 * p;
    const double C392453 = C376833 / C371137;
    const double C392451 = C376935 / C371137;
    const double C392443 = C376646 / C371137;
    const double C392442 = C376629 / C371137;
    const double C392437 = C376105 / C371137;
    const double C392434 = C376208 / C371137;
    const double C392433 = C376003 / C371137;
    const double C392420 = C375931 / C371137;
    const double C392419 = C375899 / C371137;
    const double C392416 = C375274 / C371137;
    const double C392415 = C375678 / C371137;
    const double C392406 = C375421 / C371137;
    const double C392405 = C375157 / C371137;
    const double C392404 = C375452 / C371137;
    const double C392386 = C375069 / C371137;
    const double C392385 = C375052 / C371137;
    const double C392384 = C375036 / C371137;
    const double C392383 = C374990 / C371137;
    const double C392382 = C374958 / C371137;
    const double C392381 = C374744 / C371137;
    const double C392375 = C374514 / C371137;
    const double C392371 = C374279 / C371137;
    const double C392358 = C374046 / C371137;
    const double C392356 = C373805 / C371137;
    const double C392350 = C373565 / C371137;
    const double C392329 = C373112 / C371137;
    const double C392328 = C373095 / C371137;
    const double C392313 = C372836 / C371137;
    const double C392308 = C372592 / C371137;
    const double C392287 = C372139 / C371137;
    const double C392286 = C372122 / C371137;
    const double C392272 = C371863 / C371137;
    const double C392250 = C371616 / C371137;
    const double C392225 = C371158 / C371137;
    const double C392224 = C371140 / C371137;
    const double C392784 = C383865 / C371137;
    const double C392782 = C383968 / C371137;
    const double C392774 = C383676 / C371137;
    const double C392773 = C383660 / C371137;
    const double C392768 = C383141 / C371137;
    const double C392765 = C383245 / C371137;
    const double C392764 = C383036 / C371137;
    const double C392751 = C382964 / C371137;
    const double C392750 = C382934 / C371137;
    const double C392747 = C382315 / C371137;
    const double C392746 = C382717 / C371137;
    const double C392737 = C382464 / C371137;
    const double C392736 = C382196 / C371137;
    const double C392735 = C382493 / C371137;
    const double C392717 = C382106 / C371137;
    const double C392716 = C382090 / C371137;
    const double C392715 = C382075 / C371137;
    const double C392714 = C382032 / C371137;
    const double C392713 = C382002 / C371137;
    const double C392712 = C381791 / C371137;
    const double C392706 = C381564 / C371137;
    const double C392702 = C381335 / C371137;
    const double C392689 = C381106 / C371137;
    const double C392687 = C380871 / C371137;
    const double C392681 = C380638 / C371137;
    const double C392660 = C380194 / C371137;
    const double C392659 = C380178 / C371137;
    const double C392644 = C379926 / C371137;
    const double C392639 = C379689 / C371137;
    const double C392618 = C379245 / C371137;
    const double C392617 = C379229 / C371137;
    const double C392603 = C378977 / C371137;
    const double C392581 = C378737 / C371137;
    const double C392560 = C378288 / C371137;
    const double C392559 = C378271 / C371137;
    const double C393112 = C390858 / C371137;
    const double C393110 = C390960 / C371137;
    const double C393102 = C390672 / C371137;
    const double C393101 = C390656 / C371137;
    const double C393096 = C390140 / C371137;
    const double C393093 = C390243 / C371137;
    const double C393092 = C390038 / C371137;
    const double C393079 = C389966 / C371137;
    const double C393078 = C389936 / C371137;
    const double C393075 = C389324 / C371137;
    const double C393074 = C389721 / C371137;
    const double C393065 = C389471 / C371137;
    const double C393064 = C389207 / C371137;
    const double C393063 = C389500 / C371137;
    const double C393045 = C389119 / C371137;
    const double C393044 = C389103 / C371137;
    const double C393043 = C389088 / C371137;
    const double C393042 = C389045 / C371137;
    const double C393041 = C389015 / C371137;
    const double C393040 = C388804 / C371137;
    const double C393034 = C388577 / C371137;
    const double C393030 = C388348 / C371137;
    const double C393017 = C388119 / C371137;
    const double C393015 = C387884 / C371137;
    const double C393009 = C387651 / C371137;
    const double C392988 = C387207 / C371137;
    const double C392987 = C387191 / C371137;
    const double C392972 = C386939 / C371137;
    const double C392967 = C386702 / C371137;
    const double C392946 = C386258 / C371137;
    const double C392945 = C386242 / C371137;
    const double C392931 = C385990 / C371137;
    const double C392909 = C385750 / C371137;
    const double C392888 = C385301 / C371137;
    const double C392887 = C385284 / C371137;
    const double C392554 = C392476 / q;
    const double C392553 = C392475 / C371137;
    const double C392552 = C392474 / q;
    const double C392551 = C392473 / q;
    const double C392550 = C392472 / q;
    const double C392549 = C392471 / q;
    const double C392548 = C392468 / q;
    const double C392547 = C392467 / C371137;
    const double C392546 = C392466 / q;
    const double C392545 = C392465 / q;
    const double C392544 = C392464 / q;
    const double C392543 = C392462 / q;
    const double C392542 = C392461 / C371137;
    const double C392541 = C392459 / q;
    const double C392540 = C392458 / q;
    const double C392539 = C392457 / q;
    const double C392538 = C392456 / q;
    const double C392537 = C392455 / q;
    const double C392536 = C392454 / q;
    const double C392535 = C392439 / q;
    const double C392534 = C392435 / q;
    const double C392531 = C392426 / q;
    const double C392530 = C392424 / q;
    const double C392529 = C392417 / q;
    const double C392528 = C392413 / q;
    const double C392526 = C392408 / q;
    const double C392525 = C392407 / q;
    const double C392524 = C392394 / q;
    const double C392523 = C392392 / q;
    const double C392522 = C392390 / q;
    const double C392521 = C392388 / q;
    const double C392480 = C392230 + C392231;
    const double C392479 = C392226 + C392227;
    const double C392478 = C392222 + C392223;
    const double C392882 = C392807 / q;
    const double C392881 = C392806 / C371137;
    const double C392880 = C392805 / q;
    const double C392879 = C392804 / q;
    const double C392878 = C392803 / q;
    const double C392877 = C392802 / q;
    const double C392876 = C392799 / q;
    const double C392875 = C392798 / C371137;
    const double C392874 = C392797 / q;
    const double C392873 = C392796 / q;
    const double C392872 = C392795 / q;
    const double C392871 = C392793 / q;
    const double C392870 = C392792 / C371137;
    const double C392869 = C392790 / q;
    const double C392868 = C392789 / q;
    const double C392867 = C392788 / q;
    const double C392866 = C392787 / q;
    const double C392865 = C392786 / q;
    const double C392864 = C392785 / q;
    const double C392863 = C392770 / q;
    const double C392862 = C392766 / q;
    const double C392859 = C392757 / q;
    const double C392858 = C392755 / q;
    const double C392857 = C392748 / q;
    const double C392856 = C392744 / q;
    const double C392854 = C392739 / q;
    const double C392853 = C392738 / q;
    const double C392852 = C392725 / q;
    const double C392851 = C392723 / q;
    const double C392850 = C392721 / q;
    const double C392849 = C392719 / q;
    const double C393210 = C393135 / q;
    const double C393209 = C393134 / C371137;
    const double C393208 = C393133 / q;
    const double C393207 = C393132 / q;
    const double C393206 = C393131 / q;
    const double C393205 = C393130 / q;
    const double C393204 = C393127 / q;
    const double C393203 = C393126 / C371137;
    const double C393202 = C393125 / q;
    const double C393201 = C393124 / q;
    const double C393200 = C393123 / q;
    const double C393199 = C393121 / q;
    const double C393198 = C393120 / C371137;
    const double C393197 = C393118 / q;
    const double C393196 = C393117 / q;
    const double C393195 = C393116 / q;
    const double C393194 = C393115 / q;
    const double C393193 = C393114 / q;
    const double C393192 = C393113 / q;
    const double C393191 = C393098 / q;
    const double C393190 = C393094 / q;
    const double C393187 = C393085 / q;
    const double C393186 = C393083 / q;
    const double C393185 = C393076 / q;
    const double C393184 = C393072 / q;
    const double C393182 = C393067 / q;
    const double C393181 = C393066 / q;
    const double C393180 = C393053 / q;
    const double C393179 = C393051 / q;
    const double C393178 = C393049 / q;
    const double C393177 = C393047 / q;
    const double C371383 = -(C371140 * C392480 + C392391) / q;
    const double C371384 = C392224 - (C375069 * C392480) / q - C392523;
    const double C371399 = -(C371158 * C392480 + C392393) / q;
    const double C371400 = C392225 - (C371863 * C392480) / q - C392524;
    const double C371537 = -(C374958 * C392480 + C392399) / q;
    const double C371553 = -(C374990 * C392480 + C392400) / q;
    const double C371568 = -(C375052 * C392480 + C392401) / q;
    const double C371583 = -(C371616 * C392480 + C392402) / q;
    const double C371737 = C392250 - (C375421 * C392480) / q - C392526;
    const double C371815 = -(C374046 * C392480 + C392412) / q;
    const double C371830 = -(C375157 * C392480 + C392413) / q;
    const double C371983 = C371863 / q - (C375274 * C392480) / q - C392529;
    const double C372061 = C392383 - (C374514 * C392480) / q - C392418 / q;
    const double C372363 = -(C372122 * C392480 + C392423) / q;
    const double C372364 = C392286 - (C375931 * C392480) / q - C392530;
    const double C372379 = -(C372139 * C392480 + C392425) / q;
    const double C372380 = C392287 - (C372836 * C392480) / q - C392531;
    const double C372544 = -(C375899 * C392480 + C392430) / q;
    const double C372559 = -(C375452 * C392480 + C392431) / q;
    const double C372560 = -(C372592 * C392480 + C392432) / q;
    const double C372713 = C392308 - (C376208 * C392480) / q - C392534;
    const double C372804 = -(C376003 * C392480 + C392436) / q;
    const double C372957 = C372836 / q - (C376105 * C392480) / q - C392535;
    const double C373048 = C392404 - (C374744 * C392480) / q - C392441 / q;
    const double C373335 = C392414 - (C373095 * C392480) / q - C392445 / q;
    const double C373336 =
        (3 * C373095) / C371137 - (C376646 * C392480) / q - C392446 / q;
    const double C373351 =
        C392384 - (C375678 * C392480) / q - (C373112 * p) / q;
    const double C373352 =
        C375678 / q - (C373112 * C392480) / q - (C373805 * p) / q;
    const double C373353 =
        (3 * C373112) / C371137 - (C373805 * C392480) / q - (C376833 * p) / q;
    const double C373518 = C392440 - (C376629 * C392480) / q - C392449 / q;
    const double C373533 = C392438 - (C373565 * C392480) / q - C392450 / q;
    const double C373684 =
        (3 * C373565) / C371137 - (C376935 * C392480) / q - C392452 / q;
    const double C373925 =
        (2 * C373805) / q - (C376833 * C392480) / q - (C377161 * p) / q;
    const double C374159 = C392358 - (C374279 * C392480) / q - C392444 / q;
    const double C375202 = C392382 - (C375377 * C392480) / q - C392539;
    const double C375289 = C392385 - (C375406 * C392480) / q - C392540;
    const double C375304 = C375069 / q - (C375245 * C392480) / q - C392541;
    const double C375348 = -(C375319 * C392480 + C392460) / q;
    const double C375574 = C392405 - (C375647 * C392480) / q - C392545;
    const double C375589 = C392463 - (C375559 * C392480) / q - C392546;
    const double C375618 = -(C375128 * C392480 + C392456) / q;
    const double C375782 = C392547 - (C375767 * C392480) / q - C392548;
    const double C376120 = C392419 - (C376179 * C392480) / q - C392549;
    const double C376149 = C392469 - (C376076 * C392480) / q - C392550;
    const double C376164 = -(C375514 * C392480 + C392464) / q;
    const double C376347 = C392433 - (C376392 * C392480) / q - C392551;
    const double C376362 = C376208 / q - (C376332 * C392480) / q - C392552;
    const double C376377 = -(C375961 * C392480 + C392470) / q;
    const double C376526 = C392553 - (C376511 * C392480) / q - C392554;
    const double C376848 =
        (3 * C376629) / C371137 - (C376920 * C392480) / q - (C378062 * p) / q;
    const double C376863 =
        (2 * C376646) / q - (C376791 * C392480) / q - (C378077 * p) / q;
    const double C376877 = -(C375036 * C392480 + C375678 * p) / q;
    const double C377041 =
        (2 * C376935) / q - (C377026 * C392480) / q - (C378150 * p) / q;
    const double C377176 =
        (5 * C376833) / C371137 - (C377161 * C392480) / q - (C378223 * p) / q;
    const double C378511 = -(C378271 * C392480 + C392722) / q;
    const double C378527 = -(C378288 * C392480 + C392724) / q;
    const double C378661 = -(C382002 * C392480 + C392730) / q;
    const double C378676 = -(C382032 * C392480 + C392731) / q;
    const double C378691 = -(C382090 * C392480 + C392732) / q;
    const double C378706 = -(C378737 * C392480 + C392733) / q;
    const double C378931 = -(C381106 * C392480 + C392743) / q;
    const double C378946 = -(C382196 * C392480 + C392744) / q;
    const double C379170 = C392714 - (C381564 * C392480) / q - C392749 / q;
    const double C379467 = -(C379229 * C392480 + C392754) / q;
    const double C379483 = -(C379245 * C392480 + C392756) / q;
    const double C379643 = -(C382934 * C392480 + C392761) / q;
    const double C379658 = -(C382493 * C392480 + C392762) / q;
    const double C379659 = -(C379689 * C392480 + C392763) / q;
    const double C379896 = -(C383036 * C392480 + C392767) / q;
    const double C380133 = C392735 - (C381791 * C392480) / q - C392772 / q;
    const double C380415 = C392745 - (C380178 * C392480) / q - C392776 / q;
    const double C380416 =
        (3 * C380178) / C371137 - (C383676 * C392480) / q - C392777 / q;
    const double C380431 =
        C392715 - (C382717 * C392480) / q - (C380194 * p) / q;
    const double C380432 =
        C382717 / q - (C380194 * C392480) / q - (C380871 * p) / q;
    const double C380433 =
        (3 * C380194) / C371137 - (C380871 * C392480) / q - (C383865 * p) / q;
    const double C380593 = C392771 - (C383660 * C392480) / q - C392780 / q;
    const double C380608 = C392769 - (C380638 * C392480) / q - C392781 / q;
    const double C380755 =
        (3 * C380638) / C371137 - (C383968 * C392480) / q - C392783 / q;
    const double C380989 =
        (2 * C380871) / q - (C383865 * C392480) / q - (C384191 * p) / q;
    const double C381219 = C392689 - (C381335 * C392480) / q - C392775 / q;
    const double C382390 = -(C382360 * C392480 + C392791) / q;
    const double C382659 = -(C382167 * C392480 + C392787) / q;
    const double C383201 = -(C382552 * C392480 + C392795) / q;
    const double C383413 = -(C382994 * C392480 + C392801) / q;
    const double C383880 =
        (3 * C383660) / C371137 - (C383953 * C392480) / q - (C385077 * p) / q;
    const double C383895 =
        (2 * C383676) / q - (C383823 * C392480) / q - (C385092 * p) / q;
    const double C383909 = -(C382075 * C392480 + C382717 * p) / q;
    const double C384072 =
        (2 * C383968) / q - (C384057 * C392480) / q - (C385164 * p) / q;
    const double C384206 =
        (5 * C383865) / C371137 - (C384191 * C392480) / q - (C385236 * p) / q;
    const double C385524 = -(C374954 * be + C385284 * C392480 + C393050) / q;
    const double C385540 = -(C375002 * be + C385301 * C392480 + C393052) / q;
    const double C385674 = -(C375017 * be + C389015 * C392480 + C393058) / q;
    const double C385689 = -(C375032 * be + C389045 * C392480 + C393059) / q;
    const double C385704 = -(C375464 * be + C389103 * C392480 + C393060) / q;
    const double C385719 = -(C375433 * be + C385750 * C392480 + C393061) / q;
    const double C385944 = -(C375448 * be + C388119 * C392480 + C393071) / q;
    const double C385959 = -(C375880 * be + C389207 * C392480 + C393072) / q;
    const double C386183 =
        C393042 - (C375674 * be + C388577 * C392480) / q - C393077 / q;
    const double C386480 = -(C375850 * be + C386242 * C392480 + C393082) / q;
    const double C386496 = -(C375865 * be + C386258 * C392480 + C393084) / q;
    const double C386656 = -(C376235 * be + C389936 * C392480 + C393089) / q;
    const double C386671 = -(C377216 * be + C389500 * C392480 + C393090) / q;
    const double C386672 = -(C376220 * be + C386702 * C392480 + C393091) / q;
    const double C386909 = -(C377808 * be + C390038 * C392480 + C393095) / q;
    const double C387146 =
        C393063 - (C377273 * be + C388804 * C392480) / q - C393100 / q;
    const double C387428 =
        C393073 - (C376580 * be + C387191 * C392480) / q - C393104 / q;
    const double C387429 = (3 * C387191) / C371137 -
                           (C377082 * be + C390672 * C392480) / q - C393105 / q;
    const double C387444 =
        C393043 - (C377331 * be + C389721 * C392480) / q - (C387207 * p) / q;
    const double C387445 = C389721 / q -
                           (C376595 * be + C387207 * C392480) / q -
                           (C387884 * p) / q;
    const double C387446 = (3 * C387207) / C371137 -
                           (C377067 * be + C387884 * C392480) / q -
                           (C390858 * p) / q;
    const double C387606 =
        C393099 - (C376962 * be + C390656 * C392480) / q - C393108 / q;
    const double C387621 =
        C393097 - (C376947 * be + C387651 * C392480) / q - C393109 / q;
    const double C387768 = (3 * C387651) / C371137 -
                           (C378103 * be + C390960 * C392480) / q - C393111 / q;
    const double C388002 = (2 * C387884) / q -
                           (C378162 * be + C390858 * C392480) / q -
                           (C391181 * p) / q;
    const double C388232 =
        C393017 - (C377258 * be + C388348 * C392480) / q - C393103 / q;
    const double C389398 = -(C377405 * be + C389369 * C392480 + C393119) / q;
    const double C389663 = -(C377542 * be + C389178 * C392480 + C393115) / q;
    const double C390199 = -(C377690 * be + C389559 * C392480 + C393123) / q;
    const double C390410 = -(C377823 * be + C389996 * C392480 + C393129) / q;
    const double C390873 = (3 * C390656) / C371137 -
                           (C378118 * be + C390945 * C392480) / q -
                           (C392061 * p) / q;
    const double C390888 = (2 * C390672) / q -
                           (C378177 * be + C390816 * C392480) / q -
                           (C392076 * p) / q;
    const double C390902 =
        -(C377390 * be + C389088 * C392480 + C389721 * p) / q;
    const double C391064 = (2 * C390960) / q -
                           (C385217 * be + C391048 * C392480) / q -
                           (C392147 * p) / q;
    const double C391197 = (5 * C390858) / C371137 -
                           (C392213 * be + C391181 * C392480) / q -
                           (C392219 * p) / q;
    const double C371262 = -(C371140 * C392479 + C392387) / q;
    const double C371263 = C392224 - (C375052 * C392479) / q - C392521;
    const double C371278 = -(C371158 * C392479 + C392389) / q;
    const double C371279 = C392225 - (C371616 * C392479) / q - C392522;
    const double C371474 = -(C374958 * C392479 + C392397) / q;
    const double C371490 = -(C374990 * C392479 + C392398) / q;
    const double C371677 = C371616 / q - (C375157 * C392479) / q - C392525;
    const double C371783 = C392383 - (C374046 * C392479) / q - C392411 / q;
    const double C371923 = -(C371863 * C392479 + C392402) / q;
    const double C371924 = C392272 - (C375421 * C392479) / q - C392528;
    const double C372028 = -(C374514 * C392479 + C392412) / q;
    const double C372029 = -(C375069 * C392479 + C392401) / q;
    const double C372242 = C392403 - (C372122 * C392479) / q - C392421 / q;
    const double C372243 =
        (3 * C372122) / C371137 - (C375899 * C392479) / q - C392422 / q;
    const double C372258 =
        C392384 - (C375452 * C392479) / q - (C372139 * p) / q;
    const double C372259 =
        C375452 / q - (C372139 * C392479) / q - (C372592 * p) / q;
    const double C372260 =
        (3 * C372139) / C371137 - (C372592 * C392479) / q - (C376003 * p) / q;
    const double C372653 =
        (2 * C372592) / q - (C376003 * C392479) / q - (C376287 * p) / q;
    const double C372896 = C392415 - (C374744 * C392479) / q - C392425 / q;
    const double C372897 = C392438 - (C372836 * C392479) / q - C392432 / q;
    const double C372898 =
        (3 * C372836) / C371137 - (C376208 * C392479) / q - C392436 / q;
    const double C373002 = C392440 - (C375931 * C392479) / q - C392430 / q;
    const double C373215 = -(C373095 * C392479 + C392444) / q;
    const double C373216 = C392328 - (C376629 * C392479) / q - C392530;
    const double C373231 = -(C373112 * C392479 + C392441) / q;
    const double C373232 = C392329 - (C373565 * C392479) / q - C392531;
    const double C373428 = -(C375274 * C392479 + C392408) / q;
    const double C373625 = C373565 / q - (C376105 * C392479) / q - C392534;
    const double C373865 = -(C373805 * C392479 + C392450) / q;
    const double C373866 = C392356 - (C376935 * C392479) / q - C392535;
    const double C373970 = -(C376646 * C392479 + C392449) / q;
    const double C374338 = C392375 - (C374279 * C392479) / q - C392423 / q;
    const double C374670 = -(C375678 * C392479 + C392431) / q;
    const double C375085 = C392382 - (C375319 * C392479) / q - C392536;
    const double C375172 = C375052 / q - (C375128 * C392479) / q - C392537;
    const double C375187 = C392386 - (C375406 * C392479) / q - C392538;
    const double C375529 = C392542 - (C375514 * C392479) / q - C392543;
    const double C375544 = C392463 - (C375647 * C392479) / q - C392544;
    const double C375752 = C392416 - (C375559 * C392479) / q - C392545;
    const double C376018 =
        (2 * C375899) / q - (C375961 * C392479) / q - (C377723 * p) / q;
    const double C376032 = -(C375036 * C392479 + C375452 * p) / q;
    const double C376047 =
        (3 * C375931) / C371137 - (C376179 * C392479) / q - C392470 / q;
    const double C376302 =
        (5 * C376003) / C371137 - (C376287 * C392479) / q - (C377871 * p) / q;
    const double C376317 =
        (2 * C376208) / q - (C376392 * C392479) / q - (C377886 * p) / q;
    const double C376496 = C392553 - (C376332 * C392479) / q - C392551;
    const double C376733 = C392477 - (C376076 * C392479) / q - C392549;
    const double C376748 = C392443 - (C376920 * C392479) / q - C392550;
    const double C377011 = C376935 / q - (C376511 * C392479) / q - C392552;
    const double C377145 = -(C376833 * C392479 + C392452) / q;
    const double C377146 = C392453 - (C377026 * C392479) / q - C392554;
    const double C378391 = -(C374954 * be + C378271 * C392479 + C392718) / q;
    const double C378407 = -(C375002 * be + C378288 * C392479 + C392720) / q;
    const double C378601 = -(C375017 * be + C382002 * C392479 + C392728) / q;
    const double C378616 = -(C375032 * be + C382032 * C392479 + C392729) / q;
    const double C378901 =
        C392714 - (C375448 * be + C381106 * C392479) / q - C392742 / q;
    const double C379036 = -(C375659 * be + C378977 * C392479 + C392733) / q;
    const double C379139 = -(C375674 * be + C381564 * C392479 + C392743) / q;
    const double C379140 = -(C375690 * be + C382106 * C392479 + C392732) / q;
    const double C379347 =
        C392734 - (C375850 * be + C379229 * C392479) / q - C392752 / q;
    const double C379348 = (3 * C379229) / C371137 -
                           (C376235 * be + C382934 * C392479) / q - C392753 / q;
    const double C379363 =
        C392715 - (C377216 * be + C382493 * C392479) / q - (C379245 * p) / q;
    const double C379364 = C382493 / q -
                           (C375865 * be + C379245 * C392479) / q -
                           (C379689 * p) / q;
    const double C379365 = (3 * C379245) / C371137 -
                           (C376220 * be + C379689 * C392479) / q -
                           (C383036 * p) / q;
    const double C379749 = (2 * C379689) / q -
                           (C377808 * be + C383036 * C392479) / q -
                           (C383320 * p) / q;
    const double C379985 =
        C392746 - (C377273 * be + C381791 * C392479) / q - C392756 / q;
    const double C379986 =
        C392769 - (C376404 * be + C379926 * C392479) / q - C392763 / q;
    const double C379987 = (3 * C379926) / C371137 -
                           (C377838 * be + C383245 * C392479) / q - C392767 / q;
    const double C380089 =
        C392771 - (C376419 * be + C382964 * C392479) / q - C392761 / q;
    const double C380296 = -(C376580 * be + C380178 * C392479 + C392775) / q;
    const double C380312 = -(C376595 * be + C380194 * C392479 + C392772) / q;
    const double C380507 = -(C376610 * be + C382315 * C392479 + C392739) / q;
    const double C380930 = -(C377067 * be + C380871 * C392479 + C392781) / q;
    const double C381033 = -(C377082 * be + C383676 * C392479 + C392780) / q;
    const double C381393 =
        C392706 - (C377258 * be + C381335 * C392479) / q - C392754 / q;
    const double C381719 = -(C377331 * be + C382717 * C392479 + C392762) / q;
    const double C383052 = (2 * C382934) / q -
                           (C377823 * be + C382994 * C392479) / q -
                           (C384743 * p) / q;
    const double C383067 =
        -(C377390 * be + C382075 * C392479 + C382493 * p) / q;
    const double C383083 = (3 * C382964) / C371137 -
                           (C377853 * be + C383216 * C392479) / q - C392801 / q;
    const double C383336 = (5 * C383036) / C371137 -
                           (C384883 * be + C383320 * C392479) / q -
                           (C384888 * p) / q;
    const double C383352 = (2 * C383245) / q -
                           (C384899 * be + C383428 * C392479) / q -
                           (C384904 * p) / q;
    const double C384175 = -(C378162 * be + C383865 * C392479 + C392783) / q;
    const double C385404 = -(C385284 * C392479 + C393046) / q;
    const double C385420 = -(C385301 * C392479 + C393048) / q;
    const double C385614 = -(C389015 * C392479 + C393056) / q;
    const double C385629 = -(C389045 * C392479 + C393057) / q;
    const double C385914 = C393042 - (C388119 * C392479) / q - C393070 / q;
    const double C386049 = -(C385990 * C392479 + C393061) / q;
    const double C386152 = -(C388577 * C392479 + C393071) / q;
    const double C386153 = -(C389119 * C392479 + C393060) / q;
    const double C386360 = C393062 - (C386242 * C392479) / q - C393080 / q;
    const double C386361 =
        (3 * C386242) / C371137 - (C389936 * C392479) / q - C393081 / q;
    const double C386376 =
        C393043 - (C389500 * C392479) / q - (C386258 * p) / q;
    const double C386377 =
        C389500 / q - (C386258 * C392479) / q - (C386702 * p) / q;
    const double C386378 =
        (3 * C386258) / C371137 - (C386702 * C392479) / q - (C390038 * p) / q;
    const double C386762 =
        (2 * C386702) / q - (C390038 * C392479) / q - (C390318 * p) / q;
    const double C386998 = C393074 - (C388804 * C392479) / q - C393084 / q;
    const double C386999 = C393097 - (C386939 * C392479) / q - C393091 / q;
    const double C387000 =
        (3 * C386939) / C371137 - (C390243 * C392479) / q - C393095 / q;
    const double C387102 = C393099 - (C389966 * C392479) / q - C393089 / q;
    const double C387309 = -(C387191 * C392479 + C393103) / q;
    const double C387325 = -(C387207 * C392479 + C393100) / q;
    const double C387520 = -(C389324 * C392479 + C393067) / q;
    const double C387943 = -(C387884 * C392479 + C393109) / q;
    const double C388046 = -(C390672 * C392479 + C393108) / q;
    const double C388406 = C393034 - (C388348 * C392479) / q - C393082 / q;
    const double C388732 = -(C389721 * C392479 + C393090) / q;
    const double C390053 =
        (2 * C389936) / q - (C389996 * C392479) / q - (C391730 * p) / q;
    const double C390067 = -(C389088 * C392479 + C389500 * p) / q;
    const double C390082 =
        (3 * C389966) / C371137 - (C390214 * C392479) / q - C393129 / q;
    const double C390333 =
        (5 * C390038) / C371137 - (C390318 * C392479) / q - (C391874 * p) / q;
    const double C390348 =
        (2 * C390243) / q - (C390425 * C392479) / q - (C391889 * p) / q;
    const double C391165 = -(C390858 * C392479 + C393111) / q;
    const double C371106 = (3 * C371158) / C371137 -
                           (C374954 * be + C371140 * C392478) / q -
                           (C374958 * p) / q;
    const double C371123 = C374990 / q -
                           (C375002 * be + C371158 * C392478) / q -
                           (C371140 * p) / q;
    const double C371141 = (2 * C371140) / q -
                           (C375017 * be + C374958 * C392478) / q -
                           (C375021 * p) / q;
    const double C371157 =
        C392384 - (C375032 * be + C374990 * C392478) / q - (C371158 * p) / q;
    const double C371599 =
        C392403 - (C375433 * be + C371616 * C392478) / q - C392387 / q;
    const double C371615 =
        C392404 - (C375448 * be + C374046 * C392478) / q - C392389 / q;
    const double C371617 = (3 * C371616) / C371137 -
                           (C375464 * be + C375052 * C392478) / q - C392397 / q;
    const double C371846 =
        C392414 - (C375659 * be + C371863 * C392478) / q - C392391 / q;
    const double C371862 =
        C392415 - (C375674 * be + C374514 * C392478) / q - C392393 / q;
    const double C371864 = (3 * C371863) / C371137 -
                           (C375690 * be + C375069 * C392478) / q - C392399 / q;
    const double C372091 =
        C392287 - (C375850 * be + C372122 * C392478) / q - C392522;
    const double C372106 = -(C375865 * be + C372139 * C392478 + C392411) / q;
    const double C372123 =
        C372122 / q - (C375880 * be + C375157 * C392478) / q - C392521;
    const double C372576 = -(C376220 * be + C372592 * C392478 + C392421) / q;
    const double C372593 =
        C392308 - (C376235 * be + C375899 * C392478) / q - C392525;
    const double C372820 = -(C376404 * be + C372836 * C392478 + C392423) / q;
    const double C372837 =
        C392313 - (C376419 * be + C375931 * C392478) / q - C392528;
    const double C373064 =
        C392329 - (C376580 * be + C373095 * C392478) / q - C392524;
    const double C373079 = -(C376595 * be + C373112 * C392478 + C392418) / q;
    const double C373096 =
        C373095 / q - (C376610 * be + C375274 * C392478) / q - C392523;
    const double C373549 = -(C376947 * be + C373565 * C392478 + C392444) / q;
    const double C373566 =
        C392350 - (C376962 * be + C376629 * C392478) / q - C392526;
    const double C373789 = -(C377067 * be + C373805 * C392478 + C392445) / q;
    const double C373806 =
        C392356 - (C377082 * be + C376646 * C392478) / q - C392529;
    const double C374045 = -(C377216 * be + C375452 * C392478 + C392398) / q;
    const double C374262 =
        C392381 - (C377258 * be + C374279 * C392478) / q - C392402 / q;
    const double C374278 = -(C377273 * be + C374744 * C392478 + C392412) / q;
    const double C374280 =
        C392440 - (C377288 * be + C375421 * C392478) / q - C392401 / q;
    const double C374513 = -(C377331 * be + C375678 * C392478 + C392400) / q;
    const double C374974 = (5 * C374958) / C371137 -
                           (C377374 * be + C375021 * C392478) / q -
                           (C377378 * p) / q;
    const double C374989 =
        -(C377390 * be + C375036 * C392478 + C374990 * p) / q;
    const double C375053 = (2 * C375052) / q -
                           (C377405 * be + C375319 * C392478) / q -
                           (C377409 * p) / q;
    const double C375070 = (2 * C375069) / q -
                           (C377421 * be + C375377 * C392478) / q -
                           (C377425 * p) / q;
    const double C375483 =
        C392542 - (C377542 * be + C375128 * C392478) / q - C392536;
    const double C375499 = (3 * C375421) / C371137 -
                           (C377557 * be + C375406 * C392478) / q - C392460 / q;
    const double C375709 =
        C392547 - (C377646 * be + C375245 * C392478) / q - C392539;
    const double C375900 =
        C375899 / q - (C377690 * be + C375514 * C392478) / q - C392537;
    const double C375932 =
        C392469 - (C377705 * be + C375647 * C392478) / q - C392538;
    const double C376254 = -(C377808 * be + C376003 * C392478 + C392422) / q;
    const double C376255 =
        C392433 - (C377823 * be + C375961 * C392478) / q - C392543;
    const double C376271 = -(C377838 * be + C376208 * C392478 + C392430) / q;
    const double C376272 =
        C392434 - (C377853 * be + C376179 * C392478) / q - C392544;
    const double C376438 = -(C377942 * be + C376105 * C392478 + C392424) / q;
    const double C376439 =
        C392437 - (C377957 * be + C376076 * C392478) / q - C392545;
    const double C376630 =
        C392477 - (C378001 * be + C375559 * C392478) / q - C392540;
    const double C376647 =
        C376646 / q - (C378016 * be + C375767 * C392478) / q - C392541;
    const double C376981 = -(C378103 * be + C376935 * C392478 + C392449) / q;
    const double C376982 =
        C392451 - (C378118 * be + C376920 * C392478) / q - C392546;
    const double C377101 = -(C378162 * be + C376833 * C392478 + C392446) / q;
    const double C377102 =
        C392453 - (C378177 * be + C376791 * C392478) / q - C392548;
    const double C378239 =
        (3 * C378288) / C371137 - (C378271 * C392478) / q - (C382002 * p) / q;
    const double C378256 =
        C382032 / q - (C378288 * C392478) / q - (C378271 * p) / q;
    const double C378272 =
        (2 * C378271) / q - (C382002 * C392478) / q - (C382061 * p) / q;
    const double C378287 =
        C392715 - (C382032 * C392478) / q - (C378288 * p) / q;
    const double C378721 = C392734 - (C378737 * C392478) / q - C392718 / q;
    const double C378736 = C392735 - (C381106 * C392478) / q - C392720 / q;
    const double C378738 =
        (3 * C378737) / C371137 - (C382090 * C392478) / q - C392728 / q;
    const double C378961 = C392745 - (C378977 * C392478) / q - C392722 / q;
    const double C378976 = C392746 - (C381564 * C392478) / q - C392724 / q;
    const double C378978 =
        (3 * C378977) / C371137 - (C382106 * C392478) / q - C392730 / q;
    const double C379214 = -(C379245 * C392478 + C392742) / q;
    const double C379674 = -(C379689 * C392478 + C392752) / q;
    const double C379911 = -(C379926 * C392478 + C392754) / q;
    const double C380163 = -(C380194 * C392478 + C392749) / q;
    const double C380623 = -(C380638 * C392478 + C392775) / q;
    const double C380856 = -(C380871 * C392478 + C392776) / q;
    const double C381105 = -(C382493 * C392478 + C392729) / q;
    const double C381319 = C392712 - (C381335 * C392478) / q - C392733 / q;
    const double C381334 = -(C381791 * C392478 + C392743) / q;
    const double C381336 = C392771 - (C382464 * C392478) / q - C392732 / q;
    const double C381563 = -(C382717 * C392478 + C392731) / q;
    const double C382017 =
        (5 * C382002) / C371137 - (C382061 * C392478) / q - (C384406 * p) / q;
    const double C382031 = -(C382075 * C392478 + C382032 * p) / q;
    const double C382091 =
        (2 * C382090) / q - (C382360 * C392478) / q - (C384435 * p) / q;
    const double C382107 =
        (2 * C382106) / q - (C382420 * C392478) / q - (C384450 * p) / q;
    const double C382537 =
        (3 * C382464) / C371137 - (C382449 * C392478) / q - C392791 / q;
    const double C383288 = -(C383036 * C392478 + C392753) / q;
    const double C383304 = -(C383245 * C392478 + C392761) / q;
    const double C383471 = -(C383141 * C392478 + C392755) / q;
    const double C384011 = -(C383968 * C392478 + C392780) / q;
    const double C384130 = -(C383865 * C392478 + C392777) / q;
    const double C385252 =
        (3 * C385301) / C371137 - (C385284 * C392478) / q - (C389015 * p) / q;
    const double C385269 =
        C389045 / q - (C385301 * C392478) / q - (C385284 * p) / q;
    const double C385285 =
        (2 * C385284) / q - (C389015 * C392478) / q - (C389074 * p) / q;
    const double C385300 =
        C393043 - (C389045 * C392478) / q - (C385301 * p) / q;
    const double C385734 = C393062 - (C385750 * C392478) / q - C393046 / q;
    const double C385749 = C393063 - (C388119 * C392478) / q - C393048 / q;
    const double C385751 =
        (3 * C385750) / C371137 - (C389103 * C392478) / q - C393056 / q;
    const double C385974 = C393073 - (C385990 * C392478) / q - C393050 / q;
    const double C385989 = C393074 - (C388577 * C392478) / q - C393052 / q;
    const double C385991 =
        (3 * C385990) / C371137 - (C389119 * C392478) / q - C393058 / q;
    const double C386227 = -(C386258 * C392478 + C393070) / q;
    const double C386687 = -(C386702 * C392478 + C393080) / q;
    const double C386924 = -(C386939 * C392478 + C393082) / q;
    const double C387176 = -(C387207 * C392478 + C393077) / q;
    const double C387636 = -(C387651 * C392478 + C393103) / q;
    const double C387869 = -(C387884 * C392478 + C393104) / q;
    const double C388118 = -(C389500 * C392478 + C393057) / q;
    const double C388332 = C393040 - (C388348 * C392478) / q - C393061 / q;
    const double C388347 = -(C388804 * C392478 + C393071) / q;
    const double C388349 = C393099 - (C389471 * C392478) / q - C393060 / q;
    const double C388576 = -(C389721 * C392478 + C393059) / q;
    const double C389030 =
        (5 * C389015) / C371137 - (C389074 * C392478) / q - (C391393 * p) / q;
    const double C389044 = -(C389088 * C392478 + C389045 * p) / q;
    const double C389104 =
        (2 * C389103) / q - (C389369 * C392478) / q - (C391422 * p) / q;
    const double C389120 =
        (2 * C389119) / q - (C389427 * C392478) / q - (C391437 * p) / q;
    const double C389544 =
        (3 * C389471) / C371137 - (C389456 * C392478) / q - C393119 / q;
    const double C390286 = -(C390038 * C392478 + C393081) / q;
    const double C390302 = -(C390243 * C392478 + C393089) / q;
    const double C390468 = -(C390140 * C392478 + C393083) / q;
    const double C391003 = -(C390960 * C392478 + C393108) / q;
    const double C391121 = -(C390858 * C392478 + C393105) / q;
    const double C384176 =
        C392784 - (C385217 * be + C384057 * C392479) / q - C392882;
    const double C383560 = C392881 - (C383545 * C392480) / q - C392882;
    const double C383397 = C383245 / q - (C383367 * C392480) / q - C392880;
    const double C384042 =
        C383968 / q - (C385145 * be + C383545 * C392479) / q - C392880;
    const double C383382 = C392764 - (C383428 * C392480) / q - C392879;
    const double C383530 =
        C392881 - (C384987 * be + C383367 * C392479) / q - C392879;
    const double C383185 = C392800 - (C383112 * C392480) / q - C392878;
    const double C383779 =
        C392774 - (C378118 * be + C383953 * C392479) / q - C392878;
    const double C383156 = C392750 - (C383216 * C392480) / q - C392877;
    const double C383763 =
        C392808 - (C377957 * be + C383112 * C392479) / q - C392877;
    const double C384131 = C392784 - (C383823 * C392478) / q - C392876;
    const double C382820 = C392875 - (C382805 * C392480) / q - C392876;
    const double C382629 = C392794 - (C382599 * C392480) / q - C392874;
    const double C384012 = C392782 - (C383953 * C392478) / q - C392874;
    const double C382614 = C392736 - (C382688 * C392480) / q - C392873;
    const double C382790 =
        C392747 - (C378001 * be + C382599 * C392479) / q - C392873;
    const double C383472 = C392768 - (C383112 * C392478) / q - C392873;
    const double C382584 =
        C392794 - (C377705 * be + C382688 * C392479) / q - C392872;
    const double C383305 = C392765 - (C383216 * C392478) / q - C392872;
    const double C383289 = C392764 - (C382994 * C392478) / q - C392871;
    const double C382568 =
        C392870 - (C377690 * be + C382552 * C392479) / q - C392871;
    const double C382345 = C382106 / q - (C382286 * C392480) / q - C392869;
    const double C383677 = C383676 / q - (C382805 * C392478) / q - C392869;
    const double C382330 = C392716 - (C382449 * C392480) / q - C392868;
    const double C383661 = C392808 - (C382599 * C392478) / q - C392868;
    const double C382243 = C392713 - (C382420 * C392480) / q - C392867;
    const double C382746 = C392875 - (C382286 * C392478) / q - C392867;
    const double C382228 =
        C392717 - (C377557 * be + C382449 * C392479) / q - C392866;
    const double C382965 = C392800 - (C382688 * C392478) / q - C392866;
    const double C382212 =
        C382090 / q - (C377542 * be + C382167 * C392479) / q - C392865;
    const double C382935 = C382934 / q - (C382552 * C392478) / q - C392865;
    const double C382123 =
        C392713 - (C377405 * be + C382360 * C392479) / q - C392864;
    const double C382522 = C392870 - (C382167 * C392478) / q - C392864;
    const double C380045 = C379926 / q - (C383141 * C392480) / q - C392863;
    const double C380931 =
        C392687 - (C378103 * be + C383968 * C392479) / q - C392863;
    const double C379808 = C392639 - (C383245 * C392480) / q - C392862;
    const double C380697 =
        C380638 / q - (C377942 * be + C383141 * C392479) / q - C392862;
    const double C379484 = C392618 - (C379926 * C392480) / q - C392859;
    const double C380313 =
        C392660 - (C376947 * be + C380638 * C392479) / q - C392859;
    const double C379468 = C392617 - (C382964 * C392480) / q - C392858;
    const double C380297 =
        C392659 - (C376962 * be + C383660 * C392479) / q - C392858;
    const double C379095 = C378977 / q - (C382315 * C392480) / q - C392857;
    const double C380872 = C392687 - (C383676 * C392478) / q - C392857;
    const double C379037 =
        C392603 - (C377288 * be + C382464 * C392479) / q - C392856;
    const double C379927 = C392644 - (C382964 * C392478) / q - C392856;
    const double C378856 = C392581 - (C382464 * C392480) / q - C392854;
    const double C380639 = C392681 - (C383660 * C392478) / q - C392854;
    const double C378797 =
        C378737 / q - (C375880 * be + C382196 * C392479) / q - C392853;
    const double C379690 = C392639 - (C382934 * C392478) / q - C392853;
    const double C378528 = C392560 - (C378977 * C392480) / q - C392852;
    const double C380148 = C392660 - (C380178 * C392478) / q - C392852;
    const double C378512 = C392559 - (C382106 * C392480) / q - C392851;
    const double C380179 = C380178 / q - (C382315 * C392478) / q - C392851;
    const double C378408 =
        C392560 - (C375433 * be + C378737 * C392479) / q - C392850;
    const double C379199 = C392618 - (C379229 * C392478) / q - C392850;
    const double C378392 =
        C392559 - (C375464 * be + C382090 * C392479) / q - C392849;
    const double C379230 = C379229 / q - (C382196 * C392478) / q - C392849;
    const double C391166 = C393112 - (C391048 * C392479) / q - C393210;
    const double C390557 =
        C393209 - (C385145 * be + C390541 * C392480) / q - C393210;
    const double C390395 =
        C390243 / q - (C384987 * be + C390363 * C392480) / q - C393208;
    const double C391033 = C390960 / q - (C390541 * C392479) / q - C393208;
    const double C390379 =
        C393092 - (C384899 * be + C390425 * C392480) / q - C393207;
    const double C390526 = C393209 - (C390363 * C392479) / q - C393207;
    const double C390184 =
        C393128 - (C377957 * be + C390111 * C392480) / q - C393206;
    const double C390773 = C393102 - (C390945 * C392479) / q - C393206;
    const double C390155 =
        C393078 - (C377853 * be + C390214 * C392480) / q - C393205;
    const double C390758 = C393136 - (C390111 * C392479) / q - C393205;
    const double C391122 = C393112 - (C390816 * C392478) / q - C393204;
    const double C389823 =
        C393203 - (C378016 * be + C389808 * C392480) / q - C393204;
    const double C389634 =
        C393122 - (C378001 * be + C389604 * C392480) / q - C393202;
    const double C391004 = C393110 - (C390945 * C392478) / q - C393202;
    const double C389619 =
        C393064 - (C377705 * be + C389692 * C392480) / q - C393201;
    const double C389793 = C393075 - (C389604 * C392479) / q - C393201;
    const double C390469 = C393096 - (C390111 * C392478) / q - C393201;
    const double C389589 = C393122 - (C389692 * C392479) / q - C393200;
    const double C390303 = C393093 - (C390214 * C392478) / q - C393200;
    const double C390287 = C393092 - (C389996 * C392478) / q - C393199;
    const double C389574 = C393198 - (C389559 * C392479) / q - C393199;
    const double C389354 =
        C389119 / q - (C377646 * be + C389295 * C392480) / q - C393197;
    const double C390673 = C390672 / q - (C389808 * C392478) / q - C393197;
    const double C389339 =
        C393044 - (C377557 * be + C389456 * C392480) / q - C393196;
    const double C390657 = C393136 - (C389604 * C392478) / q - C393196;
    const double C389252 =
        C393041 - (C377421 * be + C389427 * C392480) / q - C393195;
    const double C389750 = C393203 - (C389295 * C392478) / q - C393195;
    const double C389237 = C393045 - (C389456 * C392479) / q - C393194;
    const double C389967 = C393128 - (C389692 * C392478) / q - C393194;
    const double C389222 = C389103 / q - (C389178 * C392479) / q - C393193;
    const double C389937 = C389936 / q - (C389559 * C392478) / q - C393193;
    const double C389135 = C393041 - (C389369 * C392479) / q - C393192;
    const double C389529 = C393198 - (C389178 * C392478) / q - C393192;
    const double C387058 =
        C386939 / q - (C377942 * be + C390140 * C392480) / q - C393191;
    const double C387944 = C393015 - (C390960 * C392479) / q - C393191;
    const double C386821 =
        C392967 - (C377838 * be + C390243 * C392480) / q - C393190;
    const double C387710 = C387651 / q - (C390140 * C392479) / q - C393190;
    const double C386497 =
        C392946 - (C376404 * be + C386939 * C392480) / q - C393187;
    const double C387326 = C392988 - (C387651 * C392479) / q - C393187;
    const double C386481 =
        C392945 - (C376419 * be + C389966 * C392480) / q - C393186;
    const double C387310 = C392987 - (C390656 * C392479) / q - C393186;
    const double C386108 =
        C385990 / q - (C376610 * be + C389324 * C392480) / q - C393185;
    const double C387885 = C393015 - (C390672 * C392478) / q - C393185;
    const double C386050 = C392931 - (C389471 * C392479) / q - C393184;
    const double C386940 = C392972 - (C389966 * C392478) / q - C393184;
    const double C385869 =
        C392909 - (C377288 * be + C389471 * C392480) / q - C393182;
    const double C387652 = C393009 - (C390656 * C392478) / q - C393182;
    const double C385810 = C385750 / q - (C389207 * C392479) / q - C393181;
    const double C386703 = C392967 - (C389936 * C392478) / q - C393181;
    const double C385541 =
        C392888 - (C375659 * be + C385990 * C392480) / q - C393180;
    const double C387161 = C392988 - (C387191 * C392478) / q - C393180;
    const double C385525 =
        C392887 - (C375690 * be + C389119 * C392480) / q - C393179;
    const double C387192 = C387191 / q - (C389324 * C392478) / q - C393179;
    const double C385421 = C392888 - (C385750 * C392479) / q - C393178;
    const double C386212 = C392946 - (C386242 * C392478) / q - C393178;
    const double C385405 = C392887 - (C389103 * C392479) / q - C393177;
    const double C386243 = C386242 / q - (C389207 * C392478) / q - C393177;
    const double C392396 = C371383 / C371137;
    const double C392240 = C371384 * p;
    const double C392268 = C371399 / C371137;
    const double C392279 = C371400 / q;
    const double C392241 = C371400 * p;
    const double C358357 = (3 * C371399) / C371137 -
                           (C371533 * be + C371383 * C392478) / q -
                           (C371537 * p) / q;
    const double C392369 = C371553 / C371137;
    const double C358358 = C371553 / q -
                           (C371549 * be + C371399 * C392478) / q -
                           (C371383 * p) / q;
    const double C392246 = C371568 * p;
    const double C392264 = C371583 / q;
    const double C392247 = C371583 * p;
    const double C392261 = C371737 * p;
    const double C392267 = C371815 / q;
    const double C371521 = -(C371553 * C392479 + C371815 * p) / q;
    const double C392269 = C371830 * p;
    const double C392278 = C371983 * p;
    const double C392282 = C372061 / q;
    const double C371368 =
        C392383 - (C371553 * C392480) / q - (C372061 * p) / q;
    const double C392306 = C372363 * p;
    const double C392299 = C372364 * p;
    const double C392305 = C372379 / C371137;
    const double C392321 = C372380 / q;
    const double C392300 = C372380 * p;
    const double C392307 = C372544 * p;
    const double C392368 = C372559 / C371137;
    const double C358833 =
        C372559 / q - (C372379 * C392479) / q - (C372560 * p) / q;
    const double C392311 = C372713 * p;
    const double C358977 =
        (3 * C372379) / C371137 - (C372560 * C392479) / q - (C372804 * p) / q;
    const double C392319 = C372957 * p;
    const double C392428 = C373048 * p;
    const double C392324 = C373048 / q;
    const double C392347 = C373335 * p;
    const double C392341 = C373336 * p;
    const double C392380 = C373351 / C371137;
    const double C392346 = C373352 / C371137;
    const double C359231 =
        C373351 / q - (C373352 * C392480) / q + C392329 - (C373353 * p) / q;
    const double C392348 = C373518 * p;
    const double C392349 = C373533 * p;
    const double C392354 = C373684 * p;
    const double C359531 = (3 * C373352) / C371137 - (C373353 * C392480) / q +
                           C392356 - (C373925 * p) / q;
    const double C392373 = C374159 / q;
    const double C392365 = C374159 * p;
    const double C371353 =
        C392382 - (C371537 * C392480) / q - (C375202 * p) / q;
    const double C392395 = C375289 * p;
    const double C371506 = -(C371537 * C392479 + C375348 * p) / q;
    const double C392409 = C375574 * p;
    const double C392410 = C375589 * p;
    const double C392427 = C376120 * p;
    const double C392429 = C376149 * p;
    const double C372728 =
        C392433 - (C372804 * C392480) / q - (C376347 * p) / q;
    const double C372743 = C372560 / C371137 - (C372713 * C392480) / q +
                           C392434 - (C376362 * p) / q;
    const double C372774 =
        (3 * C372363) / C371137 - (C372544 * C392479) / q - (C376377 * p) / q;
    const double C392447 = C376848 * p;
    const double C373397 = (3 * C373335) / C371137 - (C373336 * C392480) / q +
                           C392443 - (C376863 * p) / q;
    const double C392448 = C376877 / C371137;
    const double C373713 = (3 * C373533) / C371137 - (C373684 * C392480) / q +
                           C392451 - (C377041 * p) / q;
    const double C373954 = (2 * C373353) / q - (C373925 * C392480) / q +
                           C392453 - (C377176 * p) / q;
    const double C392727 = C378511 / C371137;
    const double C392599 = C378527 / C371137;
    const double C363554 =
        (3 * C378527) / C371137 - (C378511 * C392478) / q - (C378661 * p) / q;
    const double C392700 = C378676 / C371137;
    const double C363555 =
        C378676 / q - (C378527 * C392478) / q - (C378511 * p) / q;
    const double C392577 = C378691 * p;
    const double C392595 = C378706 / q;
    const double C392578 = C378706 * p;
    const double C392598 = C378931 / q;
    const double C378646 =
        -(C382401 * be + C378676 * C392479 + C378931 * p) / q;
    const double C392600 = C378946 * p;
    const double C392613 = C379170 / q;
    const double C378496 =
        C392714 - (C378676 * C392480) / q - (C379170 * p) / q;
    const double C392637 = C379467 * p;
    const double C392636 = C379483 / C371137;
    const double C392638 = C379643 * p;
    const double C392699 = C379658 / C371137;
    const double C364013 = C379658 / q -
                           (C372526 * be + C379483 * C392479) / q -
                           (C379659 * p) / q;
    const double C364157 = (3 * C379483) / C371137 -
                           (C372786 * be + C379659 * C392479) / q -
                           (C379896 * p) / q;
    const double C392759 = C380133 * p;
    const double C392655 = C380133 / q;
    const double C392678 = C380415 * p;
    const double C392672 = C380416 * p;
    const double C392711 = C380431 / C371137;
    const double C392677 = C380432 / C371137;
    const double C364401 =
        C380431 / q - (C380432 * C392480) / q + C392660 - (C380433 * p) / q;
    const double C392679 = C380593 * p;
    const double C392680 = C380608 * p;
    const double C392685 = C380755 * p;
    const double C364695 = (3 * C380432) / C371137 - (C380433 * C392480) / q +
                           C392687 - (C380989 * p) / q;
    const double C392704 = C381219 / q;
    const double C392696 = C381219 * p;
    const double C378631 =
        -(C382385 * be + C378661 * C392479 + C382390 * p) / q;
    const double C379867 = (3 * C379467) / C371137 -
                           (C383408 * be + C379643 * C392479) / q -
                           (C383413 * p) / q;
    const double C392778 = C383880 * p;
    const double C380477 = (3 * C380415) / C371137 - (C380416 * C392480) / q +
                           C392774 - (C383895 * p) / q;
    const double C392779 = C383909 / C371137;
    const double C380784 = (3 * C380608) / C371137 - (C380755 * C392480) / q +
                           C392782 - (C384072 * p) / q;
    const double C381018 = (2 * C380433) / q - (C380989 * C392480) / q +
                           C392784 - (C384206 * p) / q;
    const double C393055 = C385524 / C371137;
    const double C392927 = C385540 / C371137;
    const double C368670 =
        (3 * C385540) / C371137 - (C385524 * C392478) / q - (C385674 * p) / q;
    const double C393028 = C385689 / C371137;
    const double C368671 =
        C385689 / q - (C385540 * C392478) / q - (C385524 * p) / q;
    const double C392905 = C385704 * p;
    const double C392923 = C385719 / q;
    const double C392906 = C385719 * p;
    const double C392926 = C385944 / q;
    const double C385659 = -(C385689 * C392479 + C385944 * p) / q;
    const double C392928 = C385959 * p;
    const double C392941 = C386183 / q;
    const double C385509 =
        C393042 - (C382401 * be + C385689 * C392480) / q - (C386183 * p) / q;
    const double C392965 = C386480 * p;
    const double C392964 = C386496 / C371137;
    const double C392966 = C386656 * p;
    const double C393027 = C386671 / C371137;
    const double C369129 =
        C386671 / q - (C386496 * C392479) / q - (C386672 * p) / q;
    const double C369273 =
        (3 * C386496) / C371137 - (C386672 * C392479) / q - (C386909 * p) / q;
    const double C393087 = C387146 * p;
    const double C392983 = C387146 / q;
    const double C393006 = C387428 * p;
    const double C393000 = C387429 * p;
    const double C393039 = C387444 / C371137;
    const double C393005 = C387445 / C371137;
    const double C369517 = C387444 / q -
                           (C373500 * be + C387445 * C392480) / q + C392988 -
                           (C387446 * p) / q;
    const double C393007 = C387606 * p;
    const double C393008 = C387621 * p;
    const double C393013 = C387768 * p;
    const double C369811 = (3 * C387445) / C371137 -
                           (C373998 * be + C387446 * C392480) / q + C393015 -
                           (C388002 * p) / q;
    const double C393032 = C388232 / q;
    const double C393024 = C388232 * p;
    const double C385644 = -(C385674 * C392479 + C389398 * p) / q;
    const double C386880 =
        (3 * C386480) / C371137 - (C386656 * C392479) / q - (C390410 * p) / q;
    const double C393106 = C390873 * p;
    const double C387490 = (3 * C387428) / C371137 -
                           (C384231 * be + C387429 * C392480) / q + C393102 -
                           (C390888 * p) / q;
    const double C393107 = C390902 / C371137;
    const double C387797 = (3 * C387621) / C371137 -
                           (C391058 * be + C387768 * C392480) / q + C393110 -
                           (C391064 * p) / q;
    const double C388031 = (2 * C387446) / q -
                           (C391191 * be + C388002 * C392480) / q + C393112 -
                           (C391197 * p) / q;
    const double C392234 = C371263 * p;
    const double C392257 = C371279 / q;
    const double C392235 = C371279 * p;
    const double C358335 = (3 * C371278) / C371137 -
                           (C371470 * be + C371262 * C392478) / q -
                           (C371474 * p) / q;
    const double C358336 = C371490 / q -
                           (C371486 * be + C371278 * C392478) / q -
                           (C371262 * p) / q;
    const double C392255 = C371677 * p;
    const double C392266 = C371783 / q;
    const double C371247 =
        C392383 - (C371490 * C392479) / q - (C371783 * p) / q;
    const double C392275 = C371924 * p;
    const double C392281 = C372028 / q;
    const double C392304 = C372242 * p;
    const double C392293 = C372243 * p;
    const double C358723 =
        C372258 / q - (C372259 * C392479) / q + C392287 - (C372260 * p) / q;
    const double C358887 = (3 * C372259) / C371137 - (C372260 * C392479) / q +
                           C392308 - (C372653 * p) / q;
    const double C392316 = C372896 / q;
    const double C392323 = C373002 * p;
    const double C392335 = C373216 * p;
    const double C392345 = C373231 / C371137;
    const double C359264 =
        -(C373440 * be + C373231 * C392478 + C373215 * p) / q;
    const double C392352 = C373232 / q;
    const double C359187 =
        C392329 - (C373231 * C392479) / q - (C373232 * p) / q;
    const double C359495 =
        C392356 - (C373865 * C392479) / q - (C373866 * p) / q;
    const double C359558 =
        -(C373966 * be + C373865 * C392478 + C373970 * p) / q;
    const double C392377 = C374338 * p;
    const double C392372 = C374338 / q;
    const double C392379 = C374670 / C371137;
    const double C373291 =
        C392415 - (C374670 * C392479) / q - (C372896 * p) / q;
    const double C371232 =
        C392382 - (C371474 * C392479) / q - (C375085 * p) / q;
    const double C371294 = C371262 / C371137 - (C371263 * C392479) / q +
                           C392385 - (C375172 * p) / q;
    const double C371323 =
        C392386 - (C372029 * C392479) / q - (C375187 * p) / q;
    const double C371707 = C371923 / C371137 - (C371924 * C392479) / q +
                           C392406 - (C375544 * p) / q;
    const double C371953 =
        C392416 - (C373428 * C392479) / q - (C375752 * p) / q;
    const double C372275 = (3 * C372242) / C371137 - (C372243 * C392479) / q +
                           C392419 - (C376018 * p) / q;
    const double C372290 = C376032 / C371137 - (C372258 * C392479) / q +
                           C392404 - (C372259 * p) / q;
    const double C372668 = (2 * C372260) / q - (C372653 * C392479) / q +
                           C392433 - (C376302 * p) / q;
    const double C372683 = (3 * C372897) / C371137 - (C372898 * C392479) / q +
                           C392434 - (C376317 * p) / q;
    const double C373247 = C373215 / C371137 - (C373216 * C392479) / q +
                           C392442 - (C376733 * p) / q;
    const double C373276 =
        C392443 - (C373970 * C392479) / q - (C376748 * p) / q;
    const double C373654 = C373865 / C371137 - (C373866 * C392479) / q +
                           C392451 - (C377011 * p) / q;
    const double C373895 =
        C392453 - (C377145 * C392479) / q - (C377146 * p) / q;
    const double C363534 =
        (3 * C378407) / C371137 - (C378391 * C392478) / q - (C378601 * p) / q;
    const double C363535 =
        C378616 / q - (C378407 * C392478) / q - (C378391 * p) / q;
    const double C392597 = C378901 / q;
    const double C378376 =
        C392714 - (C382134 * be + C378616 * C392479) / q - (C378901 * p) / q;
    const double C392612 = C379139 / q;
    const double C392635 = C379347 * p;
    const double C392624 = C379348 * p;
    const double C363913 = C379363 / q -
                           (C372466 * be + C379364 * C392479) / q + C392618 -
                           (C379365 * p) / q;
    const double C364067 = (3 * C379364) / C371137 -
                           (C372755 * be + C379365 * C392479) / q + C392639 -
                           (C379749 * p) / q;
    const double C392647 = C379985 / q;
    const double C392654 = C380089 * p;
    const double C392676 = C380312 / C371137;
    const double C364431 = -(C380312 * C392478 + C380296 * p) / q;
    const double C364722 = -(C380930 * C392478 + C381033 * p) / q;
    const double C392708 = C381393 * p;
    const double C392703 = C381393 / q;
    const double C392710 = C381719 / C371137;
    const double C380372 =
        C392746 - (C383790 * be + C381719 * C392479) / q - (C379985 * p) / q;
    const double C379380 = (3 * C379347) / C371137 -
                           (C383047 * be + C379348 * C392479) / q + C392750 -
                           (C383052 * p) / q;
    const double C379395 = C383067 / C371137 -
                           (C383062 * be + C379363 * C392479) / q + C392735 -
                           (C379364 * p) / q;
    const double C379764 = (2 * C379365) / q -
                           (C383331 * be + C379749 * C392479) / q + C392764 -
                           (C383336 * p) / q;
    const double C379779 = (3 * C379986) / C371137 -
                           (C383347 * be + C379987 * C392479) / q + C392765 -
                           (C383352 * p) / q;
    const double C368650 =
        (3 * C385420) / C371137 - (C385404 * C392478) / q - (C385614 * p) / q;
    const double C368651 =
        C385629 / q - (C385420 * C392478) / q - (C385404 * p) / q;
    const double C392925 = C385914 / q;
    const double C385389 =
        C393042 - (C385629 * C392479) / q - (C385914 * p) / q;
    const double C392940 = C386152 / q;
    const double C392963 = C386360 * p;
    const double C392952 = C386361 * p;
    const double C369029 =
        C386376 / q - (C386377 * C392479) / q + C392946 - (C386378 * p) / q;
    const double C369183 = (3 * C386377) / C371137 - (C386378 * C392479) / q +
                           C392967 - (C386762 * p) / q;
    const double C392975 = C386998 / q;
    const double C392982 = C387102 * p;
    const double C393004 = C387325 / C371137;
    const double C369547 = -(C387325 * C392478 + C387309 * p) / q;
    const double C369838 = -(C387943 * C392478 + C388046 * p) / q;
    const double C393036 = C388406 * p;
    const double C393031 = C388406 / q;
    const double C393038 = C388732 / C371137;
    const double C387385 =
        C393074 - (C388732 * C392479) / q - (C386998 * p) / q;
    const double C386393 = (3 * C386360) / C371137 - (C386361 * C392479) / q +
                           C393078 - (C390053 * p) / q;
    const double C386408 = C390067 / C371137 - (C386376 * C392479) / q +
                           C393063 - (C386377 * p) / q;
    const double C386777 = (2 * C386378) / q - (C386762 * C392479) / q +
                           C393092 - (C390333 * p) / q;
    const double C386792 = (3 * C386999) / C371137 - (C387000 * C392479) / q +
                           C393093 - (C390348 * p) / q;
    const double C358214 = (3 * C371123) / C371137 -
                           (C371135 * be + C371106 * C392478) / q + C392224 -
                           (C371141 * p) / q;
    const double C358215 = C371157 / q -
                           (C371153 * be + C371123 * C392478) / q + C392225 -
                           (C371106 * p) / q;
    const double C392249 = C371615 / q;
    const double C392271 = C371862 / q;
    const double C392284 = C372091 / q;
    const double C358679 =
        C392287 - (C372135 * be + C372106 * C392478) / q - (C372091 * p) / q;
    const double C358678 = C372106 / C371137 -
                           (C372118 * be + C372091 * C392478) / q + C392286 -
                           (C372123 * p) / q;
    const double C358851 =
        C392308 - (C372588 * be + C372576 * C392478) / q - (C372593 * p) / q;
    const double C358995 =
        C392313 - (C372832 * be + C372820 * C392478) / q - (C372837 * p) / q;
    const double C392326 = C373064 / q;
    const double C359143 =
        C392329 - (C373108 * be + C373079 * C392478) / q - (C373064 * p) / q;
    const double C359142 = C373079 / C371137 -
                           (C373091 * be + C373064 * C392478) / q + C392328 -
                           (C373096 * p) / q;
    const double C359315 =
        C392350 - (C373561 * be + C373549 * C392478) / q - (C373566 * p) / q;
    const double C359459 =
        C392356 - (C373801 * be + C373789 * C392478) / q - (C373806 * p) / q;
    const double C359605 = C374045 / C371137 -
                           (C374041 * be + C371615 * C392478) / q + C392358 -
                           (C371599 * p) / q;
    const double C372169 =
        C392404 - (C375912 * be + C374045 * C392478) / q - (C371615 * p) / q;
    const double C392370 = C374262 / q;
    const double C360453 =
        C392381 - (C374740 * be + C374278 * C392478) / q - (C374262 * p) / q;
    const double C359891 = C374278 / C371137 -
                           (C374274 * be + C374262 * C392478) / q + C392371 -
                           (C374280 * p) / q;
    const double C360037 = C374513 / C371137 -
                           (C374509 * be + C371862 * C392478) / q + C392375 -
                           (C371846 * p) / q;
    const double C373171 =
        C392415 - (C376659 * be + C374513 * C392478) / q - (C371862 * p) / q;
    const double C371107 = (2 * C371106) / q -
                           (C374970 * be + C371141 * C392478) / q + C392382 -
                           (C374974 * p) / q;
    const double C371122 = C374989 / C371137 -
                           (C374985 * be + C371157 * C392478) / q + C392383 -
                           (C371123 * p) / q;
    const double C371173 = (3 * C371599) / C371137 -
                           (C375048 * be + C371617 * C392478) / q + C392385 -
                           (C375053 * p) / q;
    const double C371202 = (3 * C371846) / C371137 -
                           (C375065 * be + C371864 * C392478) / q + C392386 -
                           (C375070 * p) / q;
    const double C372154 = C372576 / C371137 -
                           (C375895 * be + C372593 * C392478) / q + C392419 -
                           (C375900 * p) / q;
    const double C372184 = C372820 / C371137 -
                           (C375927 * be + C372837 * C392478) / q + C392420 -
                           (C375932 * p) / q;
    const double C372608 =
        C392433 - (C376250 * be + C376254 * C392478) / q - (C376255 * p) / q;
    const double C372623 =
        C392434 - (C376267 * be + C376271 * C392478) / q - (C376272 * p) / q;
    const double C372866 =
        C392437 - (C376434 * be + C376438 * C392478) / q - (C376439 * p) / q;
    const double C373127 = C373549 / C371137 -
                           (C376625 * be + C373566 * C392478) / q + C392442 -
                           (C376630 * p) / q;
    const double C373156 = C373789 / C371137 -
                           (C376642 * be + C373806 * C392478) / q + C392443 -
                           (C376647 * p) / q;
    const double C373595 =
        C392451 - (C376977 * be + C376981 * C392478) / q - (C376982 * p) / q;
    const double C373835 =
        C392453 - (C377097 * be + C377101 * C392478) / q - (C377102 * p) / q;
    const double C363424 = (3 * C378256) / C371137 - (C378239 * C392478) / q +
                           C392559 - (C378272 * p) / q;
    const double C363425 =
        C378287 / q - (C378256 * C392478) / q + C392560 - (C378239 * p) / q;
    const double C392580 = C378736 / q;
    const double C392602 = C378976 / q;
    const double C364767 = C381105 / C371137 - (C378736 * C392478) / q +
                           C392689 - (C378721 * p) / q;
    const double C379275 =
        C392735 - (C381105 * C392478) / q - (C378736 * p) / q;
    const double C392701 = C381319 / q;
    const double C365583 =
        C392712 - (C381334 * C392478) / q - (C381319 * p) / q;
    const double C365039 = C381334 / C371137 - (C381319 * C392478) / q +
                           C392702 - (C381336 * p) / q;
    const double C365183 = C381563 / C371137 - (C378976 * C392478) / q +
                           C392706 - (C378961 * p) / q;
    const double C380253 =
        C392746 - (C381563 * C392478) / q - (C378976 * p) / q;
    const double C378240 = (2 * C378239) / q - (C378272 * C392478) / q +
                           C392713 - (C382017 * p) / q;
    const double C378255 = C382031 / C371137 - (C378287 * C392478) / q +
                           C392714 - (C378256 * p) / q;
    const double C378303 = (3 * C378721) / C371137 - (C378738 * C392478) / q +
                           C392716 - (C382091 * p) / q;
    const double C378332 = (3 * C378961) / C371137 - (C378978 * C392478) / q +
                           C392717 - (C382107 * p) / q;
    const double C368540 = (3 * C385269) / C371137 - (C385252 * C392478) / q +
                           C392887 - (C385285 * p) / q;
    const double C368541 =
        C385300 / q - (C385269 * C392478) / q + C392888 - (C385252 * p) / q;
    const double C392908 = C385749 / q;
    const double C392930 = C385989 / q;
    const double C369883 = C388118 / C371137 - (C385749 * C392478) / q +
                           C393017 - (C385734 * p) / q;
    const double C386288 =
        C393063 - (C388118 * C392478) / q - (C385749 * p) / q;
    const double C393029 = C388332 / q;
    const double C370699 =
        C393040 - (C388347 * C392478) / q - (C388332 * p) / q;
    const double C370155 = C388347 / C371137 - (C388332 * C392478) / q +
                           C393030 - (C388349 * p) / q;
    const double C370299 = C388576 / C371137 - (C385989 * C392478) / q +
                           C393034 - (C385974 * p) / q;
    const double C387266 =
        C393074 - (C388576 * C392478) / q - (C385989 * p) / q;
    const double C385253 = (2 * C385252) / q - (C385285 * C392478) / q +
                           C393041 - (C389030 * p) / q;
    const double C385268 = C389044 / C371137 - (C385300 * C392478) / q +
                           C393042 - (C385269 * p) / q;
    const double C385316 = (3 * C385734) / C371137 - (C385751 * C392478) / q +
                           C393044 - (C389104 * p) / q;
    const double C385345 = (3 * C385974) / C371137 - (C385991 * C392478) / q +
                           C393045 - (C389120 * p) / q;
    const double C380960 =
        C392784 - (C384170 * be + C384175 * C392479) / q - (C384176 * p) / q;
    const double C379823 =
        C392764 - (C379896 * C392480) / q - (C383382 * p) / q;
    const double C392760 = C383185 * p;
    const double C380357 =
        C392774 - (C383774 * be + C381033 * C392479) / q - (C383779 * p) / q;
    const double C392758 = C383156 * p;
    const double C380901 =
        C392784 - (C384130 * C392478) / q - (C384131 * p) / q;
    const double C392741 = C382629 * p;
    const double C380668 =
        C392782 - (C384011 * C392478) / q - (C384012 * p) / q;
    const double C392740 = C382614 * p;
    const double C379066 =
        C392747 - (C382785 * be + C380507 * C392479) / q - (C382790 * p) / q;
    const double C379956 =
        C392768 - (C383471 * C392478) / q - (C383472 * p) / q;
    const double C379720 =
        C392765 - (C383304 * C392478) / q - (C383305 * p) / q;
    const double C379705 =
        C392764 - (C383288 * C392478) / q - (C383289 * p) / q;
    const double C392726 = C382330 * p;
    const double C378481 =
        C392713 - (C378661 * C392480) / q - (C382243 * p) / q;
    const double C378452 =
        C392717 - (C382223 * be + C379140 * C392479) / q - (C382228 * p) / q;
    const double C378361 =
        C392713 - (C382118 * be + C378601 * C392479) / q - (C382123 * p) / q;
    const double C392650 = C380045 * p;
    const double C364659 =
        C392687 - (C373966 * be + C380930 * C392479) / q - (C380931 * p) / q;
    const double C380726 = C380930 / C371137 -
                           (C384037 * be + C380931 * C392479) / q + C392782 -
                           (C384042 * p) / q;
    const double C392642 = C379808 * p;
    const double C379838 = C379659 / C371137 - (C379808 * C392480) / q +
                           C392765 - (C383397 * p) / q;
    const double C392652 = C379484 / q;
    const double C392631 = C379484 * p;
    const double C392683 = C380313 / q;
    const double C364361 =
        C392660 - (C373440 * be + C380312 * C392479) / q - (C380313 * p) / q;
    const double C392630 = C379468 * p;
    const double C392666 = C380297 * p;
    const double C380328 = C380296 / C371137 -
                           (C383758 * be + C380297 * C392479) / q + C392773 -
                           (C383763 * p) / q;
    const double C392609 = C379095 * p;
    const double C364623 =
        C392687 - (C380856 * C392478) / q - (C380872 * p) / q;
    const double C380238 = C380856 / C371137 - (C380872 * C392478) / q +
                           C392774 - (C383677 * p) / q;
    const double C392606 = C379037 * p;
    const double C378827 = C379036 / C371137 -
                           (C382579 * be + C379037 * C392479) / q + C392737 -
                           (C382584 * p) / q;
    const double C364175 =
        C392644 - (C379911 * C392478) / q - (C379927 * p) / q;
    const double C379290 = C379911 / C371137 - (C379927 * C392478) / q +
                           C392751 - (C382965 * p) / q;
    const double C392592 = C378856 * p;
    const double C364479 =
        C392681 - (C380623 * C392478) / q - (C380639 * p) / q;
    const double C380209 = C380623 / C371137 - (C380639 * C392478) / q +
                           C392773 - (C383661 * p) / q;
    const double C392586 = C378797 * p;
    const double C364031 =
        C392639 - (C379674 * C392478) / q - (C379690 * p) / q;
    const double C379260 = C379674 / C371137 - (C379690 * C392478) / q +
                           C392750 - (C382935 * p) / q;
    const double C392610 = C378528 / q;
    const double C392572 = C378528 * p;
    const double C392657 = C380148 / q;
    const double C364321 =
        C392660 - (C380163 * C392478) / q - (C380148 * p) / q;
    const double C392571 = C378512 * p;
    const double C364320 = C380163 / C371137 - (C380148 * C392478) / q +
                           C392659 - (C380179 * p) / q;
    const double C392588 = C378408 / q;
    const double C392566 = C378408 * p;
    const double C392615 = C379199 / q;
    const double C363873 =
        C392618 - (C379214 * C392478) / q - (C379199 * p) / q;
    const double C392565 = C378392 * p;
    const double C378423 = C378391 / C371137 -
                           (C382207 * be + C378392 * C392479) / q + C392716 -
                           (C382212 * p) / q;
    const double C363872 = C379214 / C371137 - (C379199 * C392478) / q +
                           C392617 - (C379230 * p) / q;
    const double C387973 =
        C393112 - (C391165 * C392479) / q - (C391166 * p) / q;
    const double C386836 =
        C393092 - (C390373 * be + C386909 * C392480) / q - (C390379 * p) / q;
    const double C393088 = C390184 * p;
    const double C387370 =
        C393102 - (C388046 * C392479) / q - (C390773 * p) / q;
    const double C393086 = C390155 * p;
    const double C387914 =
        C393112 - (C391121 * C392478) / q - (C391122 * p) / q;
    const double C393069 = C389634 * p;
    const double C387681 =
        C393110 - (C391003 * C392478) / q - (C391004 * p) / q;
    const double C393068 = C389619 * p;
    const double C386079 =
        C393075 - (C387520 * C392479) / q - (C389793 * p) / q;
    const double C386969 =
        C393096 - (C390468 * C392478) / q - (C390469 * p) / q;
    const double C386733 =
        C393093 - (C390302 * C392478) / q - (C390303 * p) / q;
    const double C386718 =
        C393092 - (C390286 * C392478) / q - (C390287 * p) / q;
    const double C393054 = C389339 * p;
    const double C385494 =
        C393041 - (C382385 * be + C385674 * C392480) / q - (C389252 * p) / q;
    const double C385465 =
        C393045 - (C386153 * C392479) / q - (C389237 * p) / q;
    const double C385374 =
        C393041 - (C385614 * C392479) / q - (C389135 * p) / q;
    const double C392978 = C387058 * p;
    const double C369775 =
        C393015 - (C387943 * C392479) / q - (C387944 * p) / q;
    const double C387739 = C387943 / C371137 - (C387944 * C392479) / q +
                           C393110 - (C391033 * p) / q;
    const double C392970 = C386821 * p;
    const double C386851 = C386672 / C371137 -
                           (C390389 * be + C386821 * C392480) / q + C393093 -
                           (C390395 * p) / q;
    const double C392980 = C386497 / q;
    const double C392959 = C386497 * p;
    const double C393011 = C387326 / q;
    const double C369477 =
        C392988 - (C387325 * C392479) / q - (C387326 * p) / q;
    const double C392958 = C386481 * p;
    const double C392994 = C387310 * p;
    const double C387341 = C387309 / C371137 - (C387310 * C392479) / q +
                           C393101 - (C390758 * p) / q;
    const double C392937 = C386108 * p;
    const double C369739 =
        C393015 - (C387869 * C392478) / q - (C387885 * p) / q;
    const double C387251 = C387869 / C371137 - (C387885 * C392478) / q +
                           C393102 - (C390673 * p) / q;
    const double C392934 = C386050 * p;
    const double C385840 = C386049 / C371137 - (C386050 * C392479) / q +
                           C393065 - (C389589 * p) / q;
    const double C369291 =
        C392972 - (C386924 * C392478) / q - (C386940 * p) / q;
    const double C386303 = C386924 / C371137 - (C386940 * C392478) / q +
                           C393079 - (C389967 * p) / q;
    const double C392920 = C385869 * p;
    const double C369595 =
        C393009 - (C387636 * C392478) / q - (C387652 * p) / q;
    const double C387222 = C387636 / C371137 - (C387652 * C392478) / q +
                           C393101 - (C390657 * p) / q;
    const double C392914 = C385810 * p;
    const double C369147 =
        C392967 - (C386687 * C392478) / q - (C386703 * p) / q;
    const double C386273 = C386687 / C371137 - (C386703 * C392478) / q +
                           C393078 - (C389937 * p) / q;
    const double C392938 = C385541 / q;
    const double C392900 = C385541 * p;
    const double C392985 = C387161 / q;
    const double C369437 =
        C392988 - (C387176 * C392478) / q - (C387161 * p) / q;
    const double C392899 = C385525 * p;
    const double C369436 = C387176 / C371137 - (C387161 * C392478) / q +
                           C392987 - (C387192 * p) / q;
    const double C392916 = C385421 / q;
    const double C392894 = C385421 * p;
    const double C392943 = C386212 / q;
    const double C368989 =
        C392946 - (C386227 * C392478) / q - (C386212 * p) / q;
    const double C392893 = C385405 * p;
    const double C385436 = C385404 / C371137 - (C385405 * C392479) / q +
                           C393044 - (C389222 * p) / q;
    const double C368988 = C386227 / C371137 - (C386212 * C392478) / q +
                           C392945 - (C386243 * p) / q;
    const double C371444 =
        C392396 - (C371384 * C392480) / q + C392386 - (C375304 * p) / q;
    const double C371799 =
        C392396 - (C371568 * C392479) / q - (C375618 * p) / q;
    const double C392485 = C392240 / q;
    const double C372012 =
        C392279 - (C371983 * C392480) / q + C392416 - (C375782 * p) / q;
    const double C392486 = C392241 / q;
    const double C358368 = -(C371383 * C392479 + C392246) / q;
    const double C372485 =
        C392264 - (C371830 * C392479) / q - (C376164 * p) / q;
    const double C358369 = -(C371399 * C392479 + C392247) / q;
    const double C392492 = C392261 / q;
    const double C358657 = -(C371400 * C392479 + C392261) / q;
    const double C358504 =
        C392267 - (C371811 * be + C371583 * C392478) / q - C392246 / q;
    const double C392495 = C392269 / q;
    const double C392500 = C392278 / q;
    const double C392366 = C371368 / C371137;
    const double C358822 = -(C372526 * be + C372379 * C392478 + C392306) / q;
    const double C359745 = C392369 - (C371815 * C392479) / q - C392306 / q;
    const double C392504 = C392299 / q;
    const double C359112 = -(C373030 * be + C372380 * C392478 + C392299) / q;
    const double C372986 =
        C392321 - (C372957 * C392480) / q + C392437 - (C376526 * p) / q;
    const double C392505 = C392300 / q;
    const double C358832 = C392267 - (C372363 * C392479) / q - C392307 / q;
    const double C358968 = -(C372786 * be + C372560 * C392478 + C392307) / q;
    const double C359735 =
        C392368 - (C374229 * be + C371815 * C392478) / q - C392247 / q;
    const double C392508 = C392311 / q;
    const double C392513 = C392319 / q;
    const double C372410 = C392404 - (C372559 * C392480) / q - C392428 / q;
    const double C374685 = -(C373351 * C392479 + C392428) / q;
    const double C359286 = -(C373500 * be + C373352 * C392478 + C392347) / q;
    const double C360117 =
        C392369 - (C372061 * C392480) / q + C392375 - C392347 / q;
    const double C359230 =
        C392282 - (C373335 * C392480) / q + C392328 - C392341 / q;
    const double C359576 = -(C373998 * be + C373353 * C392478 + C392341) / q;
    const double C392339 = C359231 / C371137;
    const double C359296 = -(C373335 * C392479 + C392348) / q;
    const double C359432 = -(C373756 * be + C373533 * C392478 + C392348) / q;
    const double C359963 =
        C371815 / C371137 - (C374159 * C392480) / q + C392371 - C392348 / q;
    const double C359297 = -(C373352 * C392479 + C392349) / q;
    const double C360533 =
        C392368 - (C373048 * C392480) / q + C392381 - C392349 / q;
    const double C359387 =
        C392324 - (C373533 * C392480) / q + C392350 - C392354 / q;
    const double C359585 = -(C373353 * C392479 + C392354) / q;
    const double C359685 = C392358 - (C371815 * C392480) / q - C392365 / q;
    const double C360177 = -(C372061 * C392479 + C392365) / q;
    const double C360583 = -(C374925 * be + C373048 * C392478 + C392365) / q;
    const double C371415 = C392385 - (C371568 * C392480) / q - C392395 / q;
    const double C372045 = -(C371384 * C392479 + C392395) / q;
    const double C392527 = C392409 / q;
    const double C371767 =
        C371583 / C371137 - (C371737 * C392480) / q + C392406 - C392410 / q;
    const double C373459 = -(C371983 * C392479 + C392410) / q;
    const double C392532 = C392427 / q;
    const double C392533 = C392429 / q;
    const double C392312 = C372743 * p;
    const double C358959 =
        -(C372770 * be + C358977 * C392478 + C372774 * p) / q;
    const double C373368 =
        C392373 - (C373518 * C392480) / q + C392442 - C392447 / q;
    const double C373986 = -(C373336 * C392479 + C392447) / q;
    const double C392344 = C373397 * p;
    const double C373412 =
        C392448 - (C373351 * C392480) / q + C392415 - (C373352 * p) / q;
    const double C374217 =
        C392448 - (C372559 * C392479) / q - (C372379 * p) / q;
    const double C392355 = C373713 * p;
    const double C359549 = (3 * C359231) / C371137 - (C359531 * C392480) / q +
                           C373353 / q - (C373954 * p) / q;
    const double C378572 =
        C392727 - (C378512 * C392480) / q + C392717 - (C382345 * p) / q;
    const double C378916 =
        C392727 - (C382654 * be + C378691 * C392479) / q - (C382659 * p) / q;
    const double C363564 = -(C371533 * be + C378511 * C392479 + C392577) / q;
    const double C379586 =
        C392595 - (C383196 * be + C378946 * C392479) / q - (C383201 * p) / q;
    const double C363565 = -(C371549 * be + C378527 * C392479 + C392578) / q;
    const double C363700 = C392598 - (C378706 * C392478) / q - C392577 / q;
    const double C392823 = C392600 / q;
    const double C392697 = C378496 / C371137;
    const double C364003 = -(C379483 * C392478 + C392637) / q;
    const double C364893 =
        C392700 - (C374229 * be + C378931 * C392479) / q - C392637 / q;
    const double C364012 =
        C392598 - (C372511 * be + C379467 * C392479) / q - C392638 / q;
    const double C364148 = -(C379659 * C392478 + C392638) / q;
    const double C364884 = C392699 - (C378931 * C392478) / q - C392578 / q;
    const double C379514 = C392735 - (C379658 * C392480) / q - C392759 / q;
    const double C381734 = -(C384387 * be + C380431 * C392479 + C392759) / q;
    const double C364451 = -(C380432 * C392478 + C392678) / q;
    const double C365255 =
        C392700 - (C379170 * C392480) / q + C392706 - C392678 / q;
    const double C364400 =
        C392613 - (C380415 * C392480) / q + C392659 - C392672 / q;
    const double C364740 = -(C380433 * C392478 + C392672) / q;
    const double C392670 = C364401 / C371137;
    const double C364460 = -(C373485 * be + C380415 * C392479 + C392679) / q;
    const double C364596 = -(C380608 * C392478 + C392679) / q;
    const double C365111 =
        C378931 / C371137 - (C381219 * C392480) / q + C392702 - C392679 / q;
    const double C364461 = -(C373500 * be + C380432 * C392479 + C392680) / q;
    const double C365655 =
        C392699 - (C380133 * C392480) / q + C392712 - C392680 / q;
    const double C364551 =
        C392655 - (C380608 * C392480) / q + C392681 - C392685 / q;
    const double C364749 = -(C373998 * be + C380433 * C392479 + C392685) / q;
    const double C364839 = C392689 - (C378931 * C392480) / q - C392696 / q;
    const double C365309 = -(C374697 * be + C379170 * C392479 + C392696) / q;
    const double C365700 = -(C380133 * C392478 + C392696) / q;
    const double C364139 = -(C364157 * C392478 + C379867 * p) / q;
    const double C380448 =
        C392704 - (C380593 * C392480) / q + C392773 - C392778 / q;
    const double C381048 = -(C384231 * be + C380416 * C392479 + C392778) / q;
    const double C392675 = C380477 * p;
    const double C380492 =
        C392779 - (C380431 * C392480) / q + C392746 - (C380432 * p) / q;
    const double C381276 =
        C392779 - (C384273 * be + C379658 * C392479) / q - (C379483 * p) / q;
    const double C392686 = C380784 * p;
    const double C364713 = (3 * C364401) / C371137 - (C364695 * C392480) / q +
                           C380433 / q - (C381018 * p) / q;
    const double C385585 = C393055 - (C382859 * be + C385525 * C392480) / q +
                           C393045 - (C389354 * p) / q;
    const double C385929 =
        C393055 - (C385704 * C392479) / q - (C389663 * p) / q;
    const double C368680 = -(C385524 * C392479 + C392905) / q;
    const double C386599 =
        C392923 - (C385959 * C392479) / q - (C390199 * p) / q;
    const double C368681 = -(C385540 * C392479 + C392906) / q;
    const double C368816 = C392926 - (C385719 * C392478) / q - C392905 / q;
    const double C393151 = C392928 / q;
    const double C393025 = C385509 / C371137;
    const double C369119 = -(C386496 * C392478 + C392965) / q;
    const double C370009 = C393028 - (C385944 * C392479) / q - C392965 / q;
    const double C369128 = C392926 - (C386480 * C392479) / q - C392966 / q;
    const double C369264 = -(C386672 * C392478 + C392966) / q;
    const double C370000 = C393027 - (C385944 * C392478) / q - C392906 / q;
    const double C386527 =
        C393063 - (C384273 * be + C386671 * C392480) / q - C393087 / q;
    const double C388747 = -(C387444 * C392479 + C393087) / q;
    const double C369567 = -(C387445 * C392478 + C393006) / q;
    const double C370371 = C393028 - (C374697 * be + C386183 * C392480) / q +
                           C393034 - C393006 / q;
    const double C369516 = C392941 - (C373485 * be + C387428 * C392480) / q +
                           C392987 - C393000 / q;
    const double C369856 = -(C387446 * C392478 + C393000) / q;
    const double C392998 = C369517 / C371137;
    const double C369576 = -(C387428 * C392479 + C393007) / q;
    const double C369712 = -(C387621 * C392478 + C393007) / q;
    const double C370227 = C385944 / C371137 -
                           (C374466 * be + C388232 * C392480) / q + C393030 -
                           C393007 / q;
    const double C369577 = -(C387445 * C392479 + C393008) / q;
    const double C370771 = C393027 - (C374925 * be + C387146 * C392480) / q +
                           C393040 - C393008 / q;
    const double C369667 = C392983 - (C373756 * be + C387621 * C392480) / q +
                           C393009 - C393013 / q;
    const double C369865 = -(C387446 * C392479 + C393013) / q;
    const double C369955 =
        C393017 - (C374229 * be + C385944 * C392480) / q - C393024 / q;
    const double C370425 = -(C386183 * C392479 + C393024) / q;
    const double C370816 = -(C387146 * C392478 + C393024) / q;
    const double C369255 = -(C369273 * C392478 + C386880 * p) / q;
    const double C387461 = C393032 - (C384083 * be + C387606 * C392480) / q +
                           C393101 - C393106 / q;
    const double C388061 = -(C387429 * C392479 + C393106) / q;
    const double C393003 = C387490 * p;
    const double C387505 = C393107 - (C384387 * be + C387444 * C392480) / q +
                           C393074 - (C387445 * p) / q;
    const double C388289 =
        C393107 - (C386671 * C392479) / q - (C386496 * p) / q;
    const double C393014 = C387797 * p;
    const double C369829 = (3 * C369517) / C371137 -
                           (C373907 * be + C369811 * C392480) / q +
                           C387446 / q - (C388031 * p) / q;
    const double C392481 = C392234 / q;
    const double C371692 =
        C392257 - (C371677 * C392479) / q + C392405 - (C375529 * p) / q;
    const double C392482 = C392235 / q;
    const double C392490 = C392255 / q;
    const double C392362 = C371247 / C371137;
    const double C392497 = C392275 / q;
    const double C358630 =
        C392281 - (C372024 * be + C371923 * C392478) / q - (C372029 * p) / q;
    const double C358800 = -(C372466 * be + C372259 * C392478 + C392304) / q;
    const double C359645 =
        C371490 / C371137 - (C371783 * C392479) / q + C392358 - C392304 / q;
    const double C358722 =
        C392266 - (C372242 * C392479) / q + C392286 - C392293 / q;
    const double C358950 = -(C372755 * be + C372260 * C392478 + C392293) / q;
    const double C392291 = C358723 / C371137;
    const double C359031 =
        C392316 - (C372897 * C392479) / q + C392313 - (C372898 * p) / q;
    const double C359094 = -(C372998 * be + C372897 * C392478 + C392323) / q;
    const double C359927 =
        C372028 / C371137 - (C374338 * C392479) / q + C392371 - C392323 / q;
    const double C359186 = C392328 - (C373215 * C392479) / q - C392335 / q;
    const double C359414 = -(C373725 * be + C373232 * C392478 + C392335) / q;
    const double C359263 =
        C392345 - (C373424 * be + C373215 * C392478) / q - (C373428 * p) / q;
    const double C359351 =
        C392345 - (C373232 * C392479) / q + C392350 - (C373625 * p) / q;
    const double C372927 =
        C392352 - (C373625 * C392479) / q + C392437 - (C376496 * p) / q;
    const double C392333 = C359187 / C371137;
    const double C360077 = C392375 - (C372028 * C392479) / q - C392377 / q;
    const double C360563 = -(C374896 * be + C372896 * C392478 + C392377) / q;
    const double C372305 =
        C392372 - (C373002 * C392479) / q + C392420 - (C376047 * p) / q;
    const double C360147 =
        C392379 - (C374666 * be + C372028 * C392478) / q - (C371923 * p) / q;
    const double C360493 =
        C392379 - (C372896 * C392479) / q + C392381 - (C372897 * p) / q;
    const double C392376 = C373291 / C371137;
    const double C359209 =
        C373291 / q - (C359187 * C392480) / q - (C359495 * p) / q;
    const double C392236 = C371294 * p;
    const double C392238 = C371323 * p;
    const double C392259 = C371707 * p;
    const double C392276 = C371953 * p;
    const double C392294 = C372275 * p;
    const double C392361 = C372290 / C371137;
    const double C358734 =
        C372290 / q - (C358723 * C392479) / q + C372259 / q - (C358887 * p) / q;
    const double C358896 = (3 * C358723) / C371137 - (C358887 * C392479) / q +
                           C372260 / q - (C372668 * p) / q;
    const double C392310 = C372683 * p;
    const double C392336 = C373247 * p;
    const double C392338 = C373276 * p;
    const double C392353 = C373654 * p;
    const double C359513 =
        (3 * C359187) / C371137 - (C359495 * C392480) / q - (C373895 * p) / q;
    const double C392693 = C378376 / C371137;
    const double C363826 =
        C392612 - (C379036 * C392478) / q - (C379140 * p) / q;
    const double C363983 = -(C379364 * C392478 + C392635) / q;
    const double C364803 = C378616 / C371137 -
                           (C374199 * be + C378901 * C392479) / q + C392689 -
                           C392635 / q;
    const double C363912 = C392597 - (C372451 * be + C379347 * C392479) / q +
                           C392617 - C392624 / q;
    const double C364130 = -(C379365 * C392478 + C392624) / q;
    const double C392622 = C363913 / C371137;
    const double C364211 = C392647 - (C372998 * be + C379986 * C392479) / q +
                           C392644 - (C379987 * p) / q;
    const double C364274 = -(C379986 * C392478 + C392654) / q;
    const double C365075 = C379139 / C371137 -
                           (C374435 * be + C381393 * C392479) / q + C392702 -
                           C392654 / q;
    const double C364430 =
        C392676 - (C380296 * C392478) / q - (C380507 * p) / q;
    const double C364515 = C392676 - (C373725 * be + C380313 * C392479) / q +
                           C392681 - (C380697 * p) / q;
    const double C365219 =
        C392706 - (C374666 * be + C379139 * C392479) / q - C392708 / q;
    const double C365682 = -(C379985 * C392478 + C392708) / q;
    const double C379410 = C392703 - (C383078 * be + C380089 * C392479) / q +
                           C392751 - (C383083 * p) / q;
    const double C365282 =
        C392710 - (C379139 * C392478) / q - (C379036 * p) / q;
    const double C365619 = C392710 - (C374896 * be + C379985 * C392479) / q +
                           C392712 - (C379986 * p) / q;
    const double C392707 = C380372 / C371137;
    const double C392625 = C379380 * p;
    const double C392692 = C379395 / C371137;
    const double C363923 = C379395 / q -
                           (C358719 * be + C363913 * C392479) / q +
                           C379364 / q - (C364067 * p) / q;
    const double C364076 = (3 * C363913) / C371137 -
                           (C372635 * be + C364067 * C392479) / q +
                           C379365 / q - (C379764 * p) / q;
    const double C392641 = C379779 * p;
    const double C393021 = C385389 / C371137;
    const double C368942 =
        C392940 - (C386049 * C392478) / q - (C386153 * p) / q;
    const double C369099 = -(C386377 * C392478 + C392963) / q;
    const double C369919 =
        C385629 / C371137 - (C385914 * C392479) / q + C393017 - C392963 / q;
    const double C369028 =
        C392925 - (C386360 * C392479) / q + C392945 - C392952 / q;
    const double C369246 = -(C386378 * C392478 + C392952) / q;
    const double C392950 = C369029 / C371137;
    const double C369327 =
        C392975 - (C386999 * C392479) / q + C392972 - (C387000 * p) / q;
    const double C369390 = -(C386999 * C392478 + C392982) / q;
    const double C370191 =
        C386152 / C371137 - (C388406 * C392479) / q + C393030 - C392982 / q;
    const double C369546 =
        C393004 - (C387309 * C392478) / q - (C387520 * p) / q;
    const double C369631 =
        C393004 - (C387326 * C392479) / q + C393009 - (C387710 * p) / q;
    const double C370335 = C393034 - (C386152 * C392479) / q - C393036 / q;
    const double C370798 = -(C386998 * C392478 + C393036) / q;
    const double C386423 =
        C393031 - (C387102 * C392479) / q + C393079 - (C390082 * p) / q;
    const double C370398 =
        C393038 - (C386152 * C392478) / q - (C386049 * p) / q;
    const double C370735 =
        C393038 - (C386998 * C392479) / q + C393040 - (C386999 * p) / q;
    const double C393035 = C387385 / C371137;
    const double C392953 = C386393 * p;
    const double C393020 = C386408 / C371137;
    const double C369039 =
        C386408 / q - (C369029 * C392479) / q + C386377 / q - (C369183 * p) / q;
    const double C369192 = (3 * C369029) / C371137 - (C369183 * C392479) / q +
                           C386378 / q - (C386777 * p) / q;
    const double C392969 = C386792 * p;
    const double C392251 = C358215 / C371137;
    const double C358387 = C392249 - (C371611 * be + C371599 * C392478) / q +
                           C392250 - (C371617 * p) / q;
    const double C358531 = C392271 - (C371858 * be + C371846 * C392478) / q +
                           C392272 - (C371864 * p) / q;
    const double C371632 = C392284 - (C375479 * be + C372123 * C392478) / q +
                           C392405 - (C375483 * p) / q;
    const double C392283 = C358679 / C371137;
    const double C392285 = C358678 * p;
    const double C392290 = C358995 * p;
    const double C371893 = C392326 - (C375705 * be + C373096 * C392478) / q +
                           C392416 - (C375709 * p) / q;
    const double C392325 = C359143 / C371137;
    const double C392327 = C359142 * p;
    const double C392331 = C359315 * p;
    const double C392248 = C359605 / q;
    const double C392357 = C372169 / C371137;
    const double C358690 =
        C372169 / q - (C358679 * C392479) / q - (C358851 * p) / q;
    const double C371647 = C392370 - (C375495 * be + C374280 * C392478) / q +
                           C392406 - (C375499 * p) / q;
    const double C392314 = C360453 / q;
    const double C392360 = C359891 * p;
    const double C392270 = C360037 / q;
    const double C392374 = C373171 / C371137;
    const double C359165 =
        C373171 / q - (C359143 * C392480) / q - (C359459 * p) / q;
    const double C358203 = (3 * C358215) / C371137 -
                           (C371102 * be + C358214 * C392478) / q +
                           C371106 / q - (C371107 * p) / q;
    const double C392359 = C371122 / C371137;
    const double C358204 = C371122 / q -
                           (C358211 * be + C358215 * C392478) / q +
                           C371123 / q - (C358214 * p) / q;
    const double C392228 = C371173 * p;
    const double C392232 = C371202 * p;
    const double C392288 = C372154 * p;
    const double C392289 = C372184 * p;
    const double C358860 =
        (3 * C358679) / C371137 - (C358851 * C392479) / q - (C372608 * p) / q;
    const double C392309 = C372623 * p;
    const double C392315 = C372866 * p;
    const double C392330 = C373127 * p;
    const double C392332 = C373156 * p;
    const double C392351 = C373595 * p;
    const double C359477 =
        (3 * C359143) / C371137 - (C359459 * C392480) / q - (C373835 * p) / q;
    const double C392582 = C363425 / C371137;
    const double C363583 =
        C392580 - (C378721 * C392478) / q + C392581 - (C378738 * p) / q;
    const double C363727 =
        C392602 - (C378961 * C392478) / q + C392603 - (C378978 * p) / q;
    const double C392579 = C364767 / q;
    const double C392688 = C379275 / C371137;
    const double C378768 =
        C392701 - (C381336 * C392478) / q + C392737 - (C382537 * p) / q;
    const double C392645 = C365583 / q;
    const double C392691 = C365039 * p;
    const double C392601 = C365183 / q;
    const double C392705 = C380253 / C371137;
    const double C363414 = (3 * C363425) / C371137 - (C363424 * C392478) / q +
                           C378239 / q - (C378240 * p) / q;
    const double C392690 = C378255 / C371137;
    const double C363415 =
        C378255 / q - (C363425 * C392478) / q + C378256 / q - (C363424 * p) / q;
    const double C392561 = C378303 * p;
    const double C392563 = C378332 * p;
    const double C392910 = C368541 / C371137;
    const double C368699 =
        C392908 - (C385734 * C392478) / q + C392909 - (C385751 * p) / q;
    const double C368843 =
        C392930 - (C385974 * C392478) / q + C392931 - (C385991 * p) / q;
    const double C392907 = C369883 / q;
    const double C393016 = C386288 / C371137;
    const double C385781 =
        C393029 - (C388349 * C392478) / q + C393065 - (C389544 * p) / q;
    const double C392973 = C370699 / q;
    const double C393019 = C370155 * p;
    const double C392929 = C370299 / q;
    const double C393033 = C387266 / C371137;
    const double C368530 = (3 * C368541) / C371137 - (C368540 * C392478) / q +
                           C385252 / q - (C385253 * p) / q;
    const double C393018 = C385268 / C371137;
    const double C368531 =
        C385268 / q - (C368541 * C392478) / q + C385269 / q - (C368540 * p) / q;
    const double C392889 = C385316 * p;
    const double C392891 = C385345 * p;
    const double C392861 = C392760 / q;
    const double C392669 = C380357 * p;
    const double C392860 = C392758 / q;
    const double C378886 =
        C378706 / C371137 - (C378856 * C392480) / q + C392737 - C392741 / q;
    const double C380536 = -(C383934 * be + C379095 * C392479 + C392741) / q;
    const double C392682 = C380668 * p;
    const double C392855 = C392740 / q;
    const double C392607 = C379066 * p;
    const double C392646 = C379956 * p;
    const double C392640 = C379720 * p;
    const double C378543 = C392716 - (C378691 * C392480) / q - C392726 / q;
    const double C379155 = -(C382859 * be + C378512 * C392479 + C392726) / q;
    const double C392569 = C378452 * p;
    const double C392841 = C392650 / q;
    const double C392684 = C380726 * p;
    const double C392836 = C392642 / q;
    const double C392643 = C379838 * p;
    const double C380074 =
        C392652 - (C380045 * C392480) / q + C392768 - (C383560 * p) / q;
    const double C392833 = C392631 / q;
    const double C380016 = C392683 - (C383525 * be + C380697 * C392479) / q +
                           C392768 - (C383530 * p) / q;
    const double C392664 = C364361 / C371137;
    const double C364381 =
        C380372 / q - (C364361 * C392480) / q - (C364659 * p) / q;
    const double C364677 =
        (3 * C364361) / C371137 - (C364659 * C392480) / q - (C380960 * p) / q;
    const double C392832 = C392630 / q;
    const double C364292 = -(C379484 * C392478 + C392630) / q;
    const double C364360 =
        C392659 - (C373424 * be + C380296 * C392479) / q - C392666 / q;
    const double C364578 = -(C380313 * C392478 + C392666) / q;
    const double C392667 = C380328 * p;
    const double C392828 = C392609 / q;
    const double C392663 = C380238 * p;
    const double C392825 = C392606 / q;
    const double C392590 = C378827 * p;
    const double C392621 = C364175 * p;
    const double C392620 = C379290 * p;
    const double C392820 = C392592 / q;
    const double C363853 = -(C372057 * be + C378528 * C392479 + C392592) / q;
    const double C392662 = C364479 * p;
    const double C392661 = C380209 * p;
    const double C392818 = C392586 / q;
    const double C392619 = C379260 * p;
    const double C379124 =
        C392610 - (C379095 * C392480) / q + C392747 - (C382820 * p) / q;
    const double C392814 = C392572 / q;
    const double C379007 =
        C392657 - (C380179 * C392478) / q + C392747 - (C382746 * p) / q;
    const double C392656 = C364321 / C371137;
    const double C364341 =
        C380253 / q - (C364321 * C392480) / q - (C364623 * p) / q;
    const double C364641 =
        (3 * C364321) / C371137 - (C364623 * C392480) / q - (C380901 * p) / q;
    const double C392813 = C392571 / q;
    const double C392658 = C364320 * p;
    const double C378812 = C392588 - (C382563 * be + C378797 * C392479) / q +
                           C392736 - (C382568 * p) / q;
    const double C392810 = C392566 / q;
    const double C378753 =
        C392615 - (C379230 * C392478) / q + C392736 - (C382522 * p) / q;
    const double C392614 = C363873 / C371137;
    const double C363883 = C379275 / q -
                           (C358675 * be + C363873 * C392479) / q -
                           (C364031 * p) / q;
    const double C364040 = (3 * C363873) / C371137 -
                           (C372572 * be + C364031 * C392479) / q -
                           (C379705 * p) / q;
    const double C392809 = C392565 / q;
    const double C392567 = C378423 * p;
    const double C392616 = C363872 * p;
    const double C393189 = C393088 / q;
    const double C392997 = C387370 * p;
    const double C393188 = C393086 / q;
    const double C385899 = C385719 / C371137 -
                           (C384344 * be + C385869 * C392480) / q + C393065 -
                           C393069 / q;
    const double C387549 = -(C386108 * C392479 + C393069) / q;
    const double C393010 = C387681 * p;
    const double C393183 = C393068 / q;
    const double C392935 = C386079 * p;
    const double C392974 = C386969 * p;
    const double C392968 = C386733 * p;
    const double C385556 =
        C393044 - (C382654 * be + C385704 * C392480) / q - C393054 / q;
    const double C386168 = -(C385525 * C392479 + C393054) / q;
    const double C392897 = C385465 * p;
    const double C393169 = C392978 / q;
    const double C393012 = C387739 * p;
    const double C393164 = C392970 / q;
    const double C392971 = C386851 * p;
    const double C387087 = C392980 - (C390551 * be + C387058 * C392480) / q +
                           C393096 - (C390557 * p) / q;
    const double C393161 = C392959 / q;
    const double C387029 =
        C393011 - (C387710 * C392479) / q + C393096 - (C390526 * p) / q;
    const double C392992 = C369477 / C371137;
    const double C369497 = C387385 / q -
                           (C359183 * be + C369477 * C392480) / q -
                           (C369775 * p) / q;
    const double C369793 = (3 * C369477) / C371137 -
                           (C373847 * be + C369775 * C392480) / q -
                           (C387973 * p) / q;
    const double C393160 = C392958 / q;
    const double C369408 = -(C386497 * C392478 + C392958) / q;
    const double C369476 = C392987 - (C387309 * C392479) / q - C392994 / q;
    const double C369694 = -(C387326 * C392478 + C392994) / q;
    const double C392995 = C387341 * p;
    const double C393156 = C392937 / q;
    const double C392991 = C387251 * p;
    const double C393153 = C392934 / q;
    const double C392918 = C385840 * p;
    const double C392949 = C369291 * p;
    const double C392948 = C386303 * p;
    const double C393148 = C392920 / q;
    const double C368969 = -(C385541 * C392479 + C392920) / q;
    const double C392990 = C369595 * p;
    const double C392989 = C387222 * p;
    const double C393146 = C392914 / q;
    const double C392947 = C386273 * p;
    const double C386137 = C392938 - (C383934 * be + C386108 * C392480) / q +
                           C393075 - (C389823 * p) / q;
    const double C393142 = C392900 / q;
    const double C386020 =
        C392985 - (C387192 * C392478) / q + C393075 - (C389750 * p) / q;
    const double C392984 = C369437 / C371137;
    const double C369457 = C387266 / q -
                           (C359139 * be + C369437 * C392480) / q -
                           (C369739 * p) / q;
    const double C369757 = (3 * C369437) / C371137 -
                           (C373785 * be + C369739 * C392480) / q -
                           (C387914 * p) / q;
    const double C393141 = C392899 / q;
    const double C392986 = C369436 * p;
    const double C385825 =
        C392916 - (C385810 * C392479) / q + C393064 - (C389574 * p) / q;
    const double C393138 = C392894 / q;
    const double C385766 =
        C392943 - (C386243 * C392478) / q + C393064 - (C389529 * p) / q;
    const double C392942 = C368989 / C371137;
    const double C368999 =
        C386288 / q - (C368989 * C392479) / q - (C369147 * p) / q;
    const double C369156 =
        (3 * C368989) / C371137 - (C369147 * C392479) / q - (C386718 * p) / q;
    const double C393137 = C392893 / q;
    const double C392895 = C385436 * p;
    const double C392944 = C368988 * p;
    const double C392244 = C371444 * p;
    const double C358302 = C392224 - (C371383 * C392480) / q - C392485;
    const double C358648 =
        C392282 - (C372057 * be + C371400 * C392478) / q - C392485;
    const double C392280 = C372012 * p;
    const double C358303 = C392225 - (C371399 * C392480) / q - C392486;
    const double C360167 =
        C392380 - (C374697 * be + C372061 * C392478) / q - C392486;
    const double C358346 = (3 * C358369) / C371137 -
                           (C371502 * be + C358368 * C392478) / q -
                           (C371506 * p) / q;
    const double C358347 = C371521 / q -
                           (C358365 * be + C358369 * C392478) / q -
                           (C358368 * p) / q;
    const double C358459 = C392250 - (C371583 * C392480) / q - C392492;
    const double C360008 =
        C373048 / C371137 - (C374466 * be + C374159 * C392478) / q - C392492;
    const double C358513 = C392268 - (C371583 * C392479) / q - C392495;
    const double C358821 =
        C392305 - (C372511 * be + C372363 * C392478) / q - C392495;
    const double C358603 =
        C392268 - (C371400 * C392480) / q + C392272 - C392500;
    const double C359285 =
        C392346 - (C373485 * be + C373335 * C392478) / q - C392500;
    const double C358766 = C392286 - (C372363 * C392480) / q - C392504;
    const double C360017 =
        C372061 / C371137 - (C374159 * C392479) / q - C392504;
    const double C392322 = C372986 * p;
    const double C358767 = C392287 - (C372379 * C392480) / q - C392505;
    const double C360593 = C392380 - (C373048 * C392479) / q - C392505;
    const double C358810 = C358833 / C371137 -
                           (C372481 * be + C358832 * C392478) / q -
                           (C372485 * p) / q;
    const double C358811 =
        -(C358829 * be + C358833 * C392478 + C358832 * p) / q;
    const double C358923 = C392308 - (C372560 * C392480) / q - C392508;
    const double C359121 = C392324 - (C372380 * C392479) / q - C392508;
    const double C359067 =
        C392305 - (C372380 * C392480) / q + C392313 - C392513;
    const double C359441 = C392346 - (C373533 * C392479) / q - C392513;
    const double C392364 = C372410 / C371137;
    const double C392277 = C360117 / q;
    const double C392340 = C359230 * p;
    const double C392367 = C359963 * p;
    const double C359275 =
        -(C359293 * be + C359297 * C392478 + C359296 * p) / q;
    const double C392320 = C360533 / q;
    const double C392343 = C359387 * p;
    const double C392260 = C359685 / q;
    const double C360157 = C374685 / C371137 -
                           (C360174 * be + C360177 * C392478) / q -
                           (C358657 * p) / q;
    const double C392242 = C371415 * p;
    const double C358639 = C360177 / q -
                           (C372041 * be + C358657 * C392478) / q -
                           (C372045 * p) / q;
    const double C371752 = C392405 - (C371830 * C392480) / q - C392527;
    const double C374454 =
        C371400 / C371137 - (C371737 * C392479) / q - C392527;
    const double C392265 = C371767 * p;
    const double C359274 = C359297 / C371137 -
                           (C373455 * be + C359296 * C392478) / q -
                           (C373459 * p) / q;
    const double C372395 = C392419 - (C372544 * C392480) / q - C392532;
    const double C373018 = C392373 - (C372364 * C392479) / q - C392532;
    const double C372425 =
        C372363 / C371137 - (C372364 * C392480) / q + C392420 - C392533;
    const double C373744 =
        C373335 / C371137 - (C373518 * C392479) / q - C392533;
    const double C392509 = C392312 / q;
    const double C392342 = C373368 * p;
    const double C359567 =
        -(C373982 * be + C359585 * C392478 + C373986 * p) / q;
    const double C359522 = -(C373907 * be + C359531 * C392478 + C392344) / q;
    const double C392378 = C373412 / C371137;
    const double C359253 =
        C373412 / q - (C359231 * C392480) / q + C373352 / q - (C359531 * p) / q;
    const double C359540 = -(C359531 * C392479 + C392355) / q;
    const double C392575 = C378572 * p;
    const double C363544 =
        (3 * C363565) / C371137 - (C363564 * C392478) / q - (C378631 * p) / q;
    const double C363545 =
        C378646 / q - (C363565 * C392478) / q - (C363564 * p) / q;
    const double C363709 =
        C392599 - (C371811 * be + C378706 * C392479) / q - C392823;
    const double C364002 = C392636 - (C379467 * C392478) / q - C392823;
    const double C363992 =
        C364013 / C371137 - (C364012 * C392478) / q - (C379586 * p) / q;
    const double C363993 = -(C364013 * C392478 + C364012 * p) / q;
    const double C392695 = C379514 / C371137;
    const double C392608 = C365255 / q;
    const double C392671 = C364400 * p;
    const double C392698 = C365111 * p;
    const double C364441 = -(C364461 * C392478 + C364460 * p) / q;
    const double C392651 = C365655 / q;
    const double C392674 = C364551 * p;
    const double C392591 = C364839 / q;
    const double C392673 = C380448 * p;
    const double C364731 = -(C364749 * C392478 + C381048 * p) / q;
    const double C364686 = -(C364695 * C392478 + C392675) / q;
    const double C392709 = C380492 / C371137;
    const double C364421 =
        C380492 / q - (C364401 * C392480) / q + C380432 / q - (C364695 * p) / q;
    const double C364704 = -(C373907 * be + C364695 * C392479 + C392686) / q;
    const double C392903 = C385585 * p;
    const double C368660 =
        (3 * C368681) / C371137 - (C368680 * C392478) / q - (C385644 * p) / q;
    const double C368661 =
        C385659 / q - (C368681 * C392478) / q - (C368680 * p) / q;
    const double C368825 = C392927 - (C385719 * C392479) / q - C393151;
    const double C369118 = C392964 - (C386480 * C392478) / q - C393151;
    const double C369108 =
        C369129 / C371137 - (C369128 * C392478) / q - (C386599 * p) / q;
    const double C369109 = -(C369129 * C392478 + C369128 * p) / q;
    const double C393023 = C386527 / C371137;
    const double C392936 = C370371 / q;
    const double C392999 = C369516 * p;
    const double C393026 = C370227 * p;
    const double C369557 = -(C369577 * C392478 + C369576 * p) / q;
    const double C392979 = C370771 / q;
    const double C393002 = C369667 * p;
    const double C392919 = C369955 / q;
    const double C393001 = C387461 * p;
    const double C369847 = -(C369865 * C392478 + C388061 * p) / q;
    const double C369802 = -(C369811 * C392478 + C393003) / q;
    const double C393037 = C387505 / C371137;
    const double C369537 = C387505 / q -
                           (C359227 * be + C369517 * C392480) / q +
                           C387445 / q - (C369811 * p) / q;
    const double C369820 = -(C369811 * C392479 + C393014) / q;
    const double C358258 = C392224 - (C371262 * C392479) / q - C392481;
    const double C358486 =
        C392266 - (C371779 * be + C371279 * C392478) / q - C392481;
    const double C392258 = C371692 * p;
    const double C358259 = C392225 - (C371278 * C392479) / q - C392482;
    const double C359715 =
        C372258 / C371137 - (C374199 * be + C371783 * C392478) / q - C392482;
    const double C358423 =
        C371278 / C371137 - (C371279 * C392479) / q + C392250 - C392490;
    const double C358799 =
        C372259 / C371137 - (C372451 * be + C372242 * C392478) / q - C392490;
    const double C358567 = C392272 - (C371923 * C392479) / q - C392497;
    const double C359990 =
        C372896 / C371137 - (C374435 * be + C374338 * C392478) / q - C392497;
    const double C392254 = C359645 / q;
    const double C392292 = C358722 * p;
    const double C392296 = C359031 * p;
    const double C392363 = C359927 * p;
    const double C392334 = C359186 * p;
    const double C392337 = C359351 * p;
    const double C392318 = C372927 * p;
    const double C392274 = C360077 / q;
    const double C392295 = C372305 * p;
    const double C392317 = C360493 / q;
    const double C392483 = C392236 / q;
    const double C392498 = C392259 / q;
    const double C392499 = C392276 / q;
    const double C358878 = -(C372635 * be + C358887 * C392478 + C392294) / q;
    const double C358905 = -(C358887 * C392480 + C392310) / q;
    const double C392517 = C392336 / q;
    const double C359342 = -(C373607 * be + C359351 * C392478 + C392336) / q;
    const double C359486 = -(C373847 * be + C359495 * C392478 + C392338) / q;
    const double C392520 = C392353 / q;
    const double C392585 = C364803 / q;
    const double C392623 = C363912 * p;
    const double C392627 = C364211 * p;
    const double C392694 = C365075 * p;
    const double C392668 = C364515 * p;
    const double C392605 = C365219 / q;
    const double C392626 = C379410 * p;
    const double C392648 = C365619 / q;
    const double C364058 = -(C364067 * C392478 + C392625) / q;
    const double C364085 = -(C364067 * C392480 + C392641) / q;
    const double C392913 = C369919 / q;
    const double C392951 = C369028 * p;
    const double C392955 = C369327 * p;
    const double C393022 = C370191 * p;
    const double C392996 = C369631 * p;
    const double C392933 = C370335 / q;
    const double C392954 = C386423 * p;
    const double C392976 = C370735 / q;
    const double C369174 = -(C369183 * C392478 + C392953) / q;
    const double C369201 = -(C372635 * be + C369183 * C392480 + C392969) / q;
    const double C392229 = C358387 * p;
    const double C392233 = C358531 * p;
    const double C392252 = C371632 * p;
    const double C392502 = C392285 / q;
    const double C358701 = -(C358679 * C392480 + C392290) / q;
    const double C392273 = C371893 * p;
    const double C392515 = C392327 / q;
    const double C359154 = -(C359143 * C392479 + C392331) / q;
    const double C360473 = C392357 - (C360453 * C392480) / q - C392331 / q;
    const double C392253 = C371647 * p;
    const double C359625 = -(C359605 * C392480 + C392360) / q;
    const double C360047 = -(C360037 * C392479 + C392360) / q;
    const double C360443 =
        C374278 / q - (C360450 * be + C360453 * C392478) / q - C392360 / q;
    const double C360463 = C392374 - (C360453 * C392479) / q - C392290 / q;
    const double C358225 = -(C358214 * C392479 + C392228) / q;
    const double C358378 = C392248 - (C371595 * be + C358387 * C392478) / q +
                           C371599 / q - C392228 / q;
    const double C358236 = -(C358214 * C392480 + C392232) / q;
    const double C358522 = C392270 - (C371842 * be + C358531 * C392478) / q +
                           C371846 / q - C392232 / q;
    const double C392503 = C392288 / q;
    const double C392510 = C392289 / q;
    const double C358700 = -(C358678 * C392480 + C392289) / q;
    const double C358869 = -(C358851 * C392480 + C392309) / q;
    const double C359004 = C392314 - (C358995 * C392479) / q - C392309 / q;
    const double C392511 = C392315 / q;
    const double C392519 = C392330 / q;
    const double C359153 = -(C359142 * C392479 + C392330) / q;
    const double C392516 = C392332 / q;
    const double C359333 = C392314 - (C359315 * C392480) / q - C392351 / q;
    const double C359468 = -(C359459 * C392479 + C392351) / q;
    const double C392562 = C363583 * p;
    const double C392564 = C363727 * p;
    const double C392584 = C378768 * p;
    const double C364785 = -(C364767 * C392480 + C392691) / q;
    const double C365192 = -(C360034 * be + C365183 * C392479 + C392691) / q;
    const double C365574 = C381334 / q - (C365583 * C392478) / q - C392691 / q;
    const double C363434 = -(C371102 * be + C363424 * C392479 + C392561) / q;
    const double C363574 =
        C392579 - (C363583 * C392478) / q + C378721 / q - C392561 / q;
    const double C363444 = -(C363424 * C392480 + C392563) / q;
    const double C363718 =
        C392601 - (C363727 * C392478) / q + C378961 / q - C392563 / q;
    const double C392890 = C368699 * p;
    const double C392892 = C368843 * p;
    const double C392912 = C385781 * p;
    const double C369901 = -(C359602 * be + C369883 * C392480 + C393019) / q;
    const double C370308 = -(C370299 * C392479 + C393019) / q;
    const double C370690 = C388347 / q - (C370699 * C392478) / q - C393019 / q;
    const double C368550 = -(C368540 * C392479 + C392889) / q;
    const double C368690 =
        C392907 - (C368699 * C392478) / q + C385734 / q - C392889 / q;
    const double C368560 = -(C371102 * be + C368540 * C392480 + C392891) / q;
    const double C368834 =
        C392929 - (C368843 * C392478) / q + C385974 / q - C392891 / q;
    const double C379529 =
        C379467 / C371137 - (C379468 * C392480) / q + C392751 - C392861;
    const double C380813 =
        C380415 / C371137 - (C384083 * be + C380593 * C392479) / q - C392861;
    const double C364650 = -(C364659 * C392478 + C392669) / q;
    const double C379499 = C392750 - (C379643 * C392480) / q - C392860;
    const double C380104 =
        C392704 - (C383585 * be + C379468 * C392479) / q - C392860;
    const double C392596 = C378886 * p;
    const double C364440 =
        C364461 / C371137 - (C364460 * C392478) / q - (C380536 * p) / q;
    const double C364497 = C392645 - (C364479 * C392480) / q - C392682 / q;
    const double C364632 = -(C373785 * be + C364623 * C392479 + C392682) / q;
    const double C378871 = C392736 - (C378946 * C392480) / q - C392855;
    const double C381506 =
        C378528 / C371137 - (C384344 * be + C378856 * C392479) / q - C392855;
    const double C392827 = C392607 / q;
    const double C392839 = C392646 / q;
    const double C364049 = -(C364031 * C392480 + C392640) / q;
    const double C364184 =
        C392645 - (C372816 * be + C364175 * C392479) / q - C392640 / q;
    const double C392573 = C378543 * p;
    const double C364247 =
        C392636 - (C379484 * C392480) / q + C392644 - C392841;
    const double C364605 =
        C392677 - (C373756 * be + C380608 * C392479) / q - C392841;
    const double C392848 = C392684 / q;
    const double C364103 = C392639 - (C379659 * C392480) / q - C392836;
    const double C364301 =
        C392655 - (C373030 * be + C379484 * C392479) / q - C392836;
    const double C392837 = C392643 / q;
    const double C392653 = C380074 * p;
    const double C363953 = C392618 - (C379483 * C392480) / q - C392833;
    const double C365709 =
        C392711 - (C374925 * be + C380133 * C392479) / q - C392833;
    const double C392649 = C380016 * p;
    const double C363952 = C392617 - (C379467 * C392480) / q - C392832;
    const double C365165 =
        C379170 / C371137 - (C374466 * be + C381219 * C392479) / q - C392832;
    const double C392665 = C364360 * p;
    const double C392845 = C392667 / q;
    const double C364506 = -(C364515 * C392478 + C392667) / q;
    const double C363799 =
        C392599 - (C378528 * C392480) / q + C392603 - C392828;
    const double C364450 = C392677 - (C380415 * C392478) / q - C392828;
    const double C392844 = C392663 / q;
    const double C363763 =
        C392603 - (C372024 * be + C379036 * C392479) / q - C392825;
    const double C365138 =
        C379985 / C371137 - (C381393 * C392478) / q - C392825;
    const double C392826 = C392590 / q;
    const double C363893 = -(C363873 * C392480 + C392621) / q;
    const double C365592 =
        C392705 - (C360450 * be + C365583 * C392479) / q - C392621 / q;
    const double C392838 = C392620 / q;
    const double C363892 = -(C363872 * C392480 + C392620) / q;
    const double C363655 = C392581 - (C378706 * C392480) / q - C392820;
    const double C365156 =
        C380133 / C371137 - (C381219 * C392478) / q - C392820;
    const double C363835 =
        C365309 / q - (C363853 * C392478) / q - (C379155 * p) / q;
    const double C365291 =
        C381734 / C371137 - (C365309 * C392478) / q - (C363853 * p) / q;
    const double C364331 = -(C359139 * be + C364321 * C392479 + C392662) / q;
    const double C365601 = C392688 - (C365583 * C392480) / q - C392662 / q;
    const double C392847 = C392661 / q;
    const double C364330 = -(C373060 * be + C364320 * C392479 + C392661) / q;
    const double C363619 = C378407 / C371137 -
                           (C371779 * be + C378408 * C392479) / q + C392581 -
                           C392818;
    const double C363982 =
        C379364 / C371137 - (C379347 * C392478) / q - C392818;
    const double C392831 = C392619 / q;
    const double C392611 = C379124 * p;
    const double C363505 = C392560 - (C378527 * C392480) / q - C392814;
    const double C365300 = C392711 - (C379170 * C392478) / q - C392814;
    const double C392604 = C379007 * p;
    const double C363504 = C392559 - (C378511 * C392480) / q - C392813;
    const double C363844 = C392613 - (C378528 * C392478) / q - C392813;
    const double C392843 = C392658 / q;
    const double C392589 = C378812 * p;
    const double C363465 =
        C392560 - (C371486 * be + C378407 * C392479) / q - C392810;
    const double C364866 =
        C379363 / C371137 - (C378901 * C392478) / q - C392810;
    const double C392583 = C378753 * p;
    const double C363464 =
        C392559 - (C371470 * be + C378391 * C392479) / q - C392809;
    const double C363682 = C392597 - (C378408 * C392478) / q - C392809;
    const double C392811 = C392567 / q;
    const double C392830 = C392616 / q;
    const double C386542 = C386480 / C371137 -
                           (C383585 * be + C386481 * C392480) / q + C393079 -
                           C393189;
    const double C387826 =
        C387428 / C371137 - (C387606 * C392479) / q - C393189;
    const double C369766 = -(C369775 * C392478 + C392997) / q;
    const double C386512 =
        C393078 - (C383408 * be + C386656 * C392480) / q - C393188;
    const double C387117 = C393032 - (C386481 * C392479) / q - C393188;
    const double C392924 = C385899 * p;
    const double C369556 =
        C369577 / C371137 - (C369576 * C392478) / q - (C387549 * p) / q;
    const double C369613 =
        C392973 - (C373545 * be + C369595 * C392480) / q - C393010 / q;
    const double C369748 = -(C369739 * C392479 + C393010) / q;
    const double C385884 =
        C393064 - (C383196 * be + C385959 * C392480) / q - C393183;
    const double C388519 =
        C385541 / C371137 - (C385869 * C392479) / q - C393183;
    const double C393155 = C392935 / q;
    const double C393167 = C392974 / q;
    const double C369165 = -(C372572 * be + C369147 * C392480 + C392968) / q;
    const double C369300 = C392973 - (C369291 * C392479) / q - C392968 / q;
    const double C392901 = C385556 * p;
    const double C369363 =
        C392964 - (C373030 * be + C386497 * C392480) / q + C392972 - C393169;
    const double C369721 = C393005 - (C387621 * C392479) / q - C393169;
    const double C393176 = C393012 / q;
    const double C369219 =
        C392967 - (C372786 * be + C386672 * C392480) / q - C393164;
    const double C369417 = C392983 - (C386497 * C392479) / q - C393164;
    const double C393165 = C392971 / q;
    const double C392981 = C387087 * p;
    const double C369069 =
        C392946 - (C372526 * be + C386496 * C392480) / q - C393161;
    const double C370825 = C393039 - (C387146 * C392479) / q - C393161;
    const double C392977 = C387029 * p;
    const double C369068 =
        C392945 - (C372511 * be + C386480 * C392480) / q - C393160;
    const double C370281 =
        C386183 / C371137 - (C388232 * C392479) / q - C393160;
    const double C392993 = C369476 * p;
    const double C393173 = C392995 / q;
    const double C369622 = -(C369631 * C392478 + C392995) / q;
    const double C368915 =
        C392927 - (C372057 * be + C385541 * C392480) / q + C392931 - C393156;
    const double C369566 = C393005 - (C387428 * C392478) / q - C393156;
    const double C393172 = C392991 / q;
    const double C368879 = C392931 - (C386049 * C392479) / q - C393153;
    const double C370254 =
        C386998 / C371137 - (C388406 * C392478) / q - C393153;
    const double C393154 = C392918 / q;
    const double C369009 = -(C358675 * be + C368989 * C392480 + C392949) / q;
    const double C370708 = C393033 - (C370699 * C392479) / q - C392949 / q;
    const double C393166 = C392948 / q;
    const double C369008 = -(C372087 * be + C368988 * C392480 + C392948) / q;
    const double C368771 =
        C392909 - (C371811 * be + C385719 * C392480) / q - C393148;
    const double C370272 =
        C387146 / C371137 - (C388232 * C392478) / q - C393148;
    const double C368951 =
        C370425 / q - (C368969 * C392478) / q - (C386168 * p) / q;
    const double C370407 =
        C388747 / C371137 - (C370425 * C392478) / q - (C368969 * p) / q;
    const double C369447 = -(C369437 * C392479 + C392990) / q;
    const double C370717 =
        C393016 - (C360450 * be + C370699 * C392480) / q - C392990 / q;
    const double C393175 = C392989 / q;
    const double C369446 = -(C369436 * C392479 + C392989) / q;
    const double C368735 =
        C385420 / C371137 - (C385421 * C392479) / q + C392909 - C393146;
    const double C369098 =
        C386377 / C371137 - (C386360 * C392478) / q - C393146;
    const double C393159 = C392947 / q;
    const double C392939 = C386137 * p;
    const double C368621 =
        C392888 - (C371549 * be + C385540 * C392480) / q - C393142;
    const double C370416 = C393039 - (C386183 * C392478) / q - C393142;
    const double C392932 = C386020 * p;
    const double C368620 =
        C392887 - (C371533 * be + C385524 * C392480) / q - C393141;
    const double C368960 = C392941 - (C385541 * C392478) / q - C393141;
    const double C393171 = C392986 / q;
    const double C392917 = C385825 * p;
    const double C368581 = C392888 - (C385420 * C392479) / q - C393138;
    const double C369982 =
        C386376 / C371137 - (C385914 * C392478) / q - C393138;
    const double C392911 = C385766 * p;
    const double C368580 = C392887 - (C385404 * C392479) / q - C393137;
    const double C368798 = C392925 - (C385421 * C392478) / q - C393137;
    const double C393139 = C392895 / q;
    const double C393158 = C392944 / q;
    const double C392487 = C392244 / q;
    const double C392501 = C392280 / q;
    const double C392262 = C358303 / C371137;
    const double C358291 = (3 * C358303) / C371137 -
                           (C371349 * be + C358302 * C392478) / q -
                           (C371353 * p) / q;
    const double C358292 = C371368 / q -
                           (C358299 * be + C358303 * C392478) / q -
                           (C358302 * p) / q;
    const double C392243 = C358459 * p;
    const double C358495 = C359745 / q -
                           (C371795 * be + C358513 * C392478) / q -
                           (C371799 * p) / q;
    const double C359725 = C374217 / C371137 -
                           (C359742 * be + C359745 * C392478) / q -
                           (C358513 * p) / q;
    const double C392245 = C358603 * p;
    const double C392298 = C358766 * p;
    const double C392514 = C392322 / q;
    const double C392297 = C358767 / C371137;
    const double C360573 =
        -(C360590 * be + C360593 * C392478 + C360017 * p) / q;
    const double C358778 =
        C372410 / q - (C358767 * C392479) / q - (C358923 * p) / q;
    const double C358932 =
        (3 * C358767) / C371137 - (C358923 * C392479) / q - (C372728 * p) / q;
    const double C392303 = C359067 * p;
    const double C359252 =
        C392277 - (C359230 * C392480) / q + C373335 / q - C392344 / q;
    const double C359220 = -(C359227 * be + C359231 * C392478 + C392340) / q;
    const double C360137 =
        C392366 - (C360117 * C392480) / q + C392282 - C392340 / q;
    const double C359705 = C392267 - (C359685 * C392480) / q - C392367 / q;
    const double C360127 = -(C360117 * C392479 + C392367) / q;
    const double C360523 = -(C360530 * be + C360533 * C392478 + C392367) / q;
    const double C359405 =
        C392320 - (C359387 * C392480) / q + C373533 / q - C392355 / q;
    const double C359242 = -(C359231 * C392479 + C392343) / q;
    const double C360553 =
        C392364 - (C360533 * C392480) / q + C392324 - C392343 / q;
    const double C358313 = -(C358302 * C392479 + C392242) / q;
    const double C358450 =
        C392260 - (C371719 * be + C358459 * C392478) / q - C392242 / q;
    const double C392263 = C371752 * p;
    const double C359999 = C360593 / C371137 -
                           (C374450 * be + C360017 * C392478) / q -
                           (C374454 * p) / q;
    const double C392494 = C392265 / q;
    const double C358612 = -(C358603 * C392479 + C392265) / q;
    const double C392301 = C372395 * p;
    const double C359103 =
        -(C373014 * be + C359121 * C392478 + C373018 * p) / q;
    const double C392302 = C372425 * p;
    const double C359423 =
        -(C373740 * be + C359441 * C392478 + C373744 * p) / q;
    const double C358941 = C372560 / q - (C358923 * C392480) / q - C392509;
    const double C359076 = C392320 - (C359067 * C392479) / q - C392509;
    const double C359241 = -(C359230 * C392479 + C392342) / q;
    const double C359378 = -(C373666 * be + C359387 * C392478 + C392342) / q;
    const double C359981 =
        C359685 / C371137 - (C359963 * C392480) / q + C392373 - C392342 / q;
    const double C392815 = C392575 / q;
    const double C363691 =
        C364893 / q - (C363709 * C392478) / q - (C378916 * p) / q;
    const double C364875 =
        C381276 / C371137 - (C364893 * C392478) / q - (C363709 * p) / q;
    const double C364420 =
        C392608 - (C364400 * C392480) / q + C380415 / q - C392675 / q;
    const double C364391 = -(C364401 * C392478 + C392671) / q;
    const double C365273 =
        C392697 - (C365255 * C392480) / q + C392613 - C392671 / q;
    const double C364857 = C392598 - (C364839 * C392480) / q - C392698 / q;
    const double C365264 = -(C360114 * be + C365255 * C392479 + C392698) / q;
    const double C365646 = -(C365655 * C392478 + C392698) / q;
    const double C364569 =
        C392651 - (C364551 * C392480) / q + C380608 / q - C392686 / q;
    const double C364411 = -(C359227 * be + C364401 * C392479 + C392674) / q;
    const double C365673 =
        C392695 - (C365655 * C392480) / q + C392655 - C392674 / q;
    const double C364410 = -(C373303 * be + C364400 * C392479 + C392673) / q;
    const double C364542 = -(C364551 * C392478 + C392673) / q;
    const double C365129 =
        C364839 / C371137 - (C365111 * C392480) / q + C392704 - C392673 / q;
    const double C393143 = C392903 / q;
    const double C368807 =
        C370009 / q - (C368825 * C392478) / q - (C385929 * p) / q;
    const double C369991 =
        C388289 / C371137 - (C370009 * C392478) / q - (C368825 * p) / q;
    const double C369536 = C392936 - (C373303 * be + C369516 * C392480) / q +
                           C387428 / q - C393003 / q;
    const double C369507 = -(C369517 * C392478 + C392999) / q;
    const double C370389 = C393025 - (C360114 * be + C370371 * C392480) / q +
                           C392941 - C392999 / q;
    const double C369973 =
        C392926 - (C359682 * be + C369955 * C392480) / q - C393026 / q;
    const double C370380 = -(C370371 * C392479 + C393026) / q;
    const double C370762 = -(C370771 * C392478 + C393026) / q;
    const double C369685 = C392979 - (C373666 * be + C369667 * C392480) / q +
                           C387621 / q - C393014 / q;
    const double C369527 = -(C369517 * C392479 + C393002) / q;
    const double C370789 = C393023 - (C360530 * be + C370771 * C392480) / q +
                           C392983 - C393002 / q;
    const double C369526 = -(C369516 * C392479 + C393001) / q;
    const double C369658 = -(C369667 * C392478 + C393001) / q;
    const double C370245 = C369955 / C371137 -
                           (C374378 * be + C370227 * C392480) / q + C393032 -
                           C393001 / q;
    const double C358280 = -(C358258 * C392480 + C392238) / q;
    const double C392491 = C392258 / q;
    const double C392256 = C358259 / C371137;
    const double C358247 = (3 * C358259) / C371137 -
                           (C371228 * be + C358258 * C392478) / q -
                           (C371232 * p) / q;
    const double C358248 = C371247 / q -
                           (C358255 * be + C358259 * C392478) / q -
                           (C358258 * p) / q;
    const double C392237 = C358423 * p;
    const double C358441 = -(C358423 * C392480 + C392259) / q;
    const double C392239 = C358567 * p;
    const double C358733 =
        C392254 - (C358722 * C392479) / q + C372242 / q - C392294 / q;
    const double C358712 = -(C358719 * be + C358723 * C392478 + C392292) / q;
    const double C359655 =
        C392362 - (C359645 * C392479) / q + C392266 - C392292 / q;
    const double C358745 = -(C358723 * C392480 + C392296) / q;
    const double C360503 =
        C392376 - (C360493 * C392479) / q + C392316 - C392296 / q;
    const double C359665 = -(C359645 * C392480 + C392363) / q;
    const double C360087 = C392281 - (C360077 * C392479) / q - C392363 / q;
    const double C360483 = -(C360490 * be + C360493 * C392478 + C392363) / q;
    const double C359176 = -(C359183 * be + C359187 * C392478 + C392334) / q;
    const double C360097 = C392362 - (C360077 * C392480) / q - C392334 / q;
    const double C392518 = C392337 / q;
    const double C392512 = C392318 / q;
    const double C358558 =
        C392274 - (C371905 * be + C358567 * C392478) / q - C392238 / q;
    const double C359208 = C392274 - (C359186 * C392480) / q - C392338 / q;
    const double C358744 = -(C358722 * C392480 + C392295) / q;
    const double C359022 = -(C372878 * be + C359031 * C392478 + C392295) / q;
    const double C359936 =
        C360077 / C371137 - (C359927 * C392479) / q + C392372 - C392295 / q;
    const double C359040 =
        C392317 - (C359031 * C392479) / q + C372897 / q - C392310 / q;
    const double C358269 = C371262 / q - (C358258 * C392479) / q - C392483;
    const double C358414 =
        C392254 - (C371659 * be + C358423 * C392478) / q - C392483;
    const double C358576 = C371923 / q - (C358567 * C392479) / q - C392498;
    const double C359918 =
        C360493 / C371137 - (C374320 * be + C359927 * C392478) / q - C392498;
    const double C359175 =
        C392333 - (C373183 * be + C359186 * C392478) / q - C392499;
    const double C359197 = C373215 / q - (C359186 * C392479) / q - C392517;
    const double C359945 =
        C359645 / C371137 - (C359927 * C392480) / q - C392517;
    const double C359369 = C392317 - (C359351 * C392480) / q - C392520;
    const double C359504 = C373865 / q - (C359495 * C392479) / q - C392520;
    const double C363922 = C392585 - (C372210 * be + C363912 * C392479) / q +
                           C379347 / q - C392625 / q;
    const double C363903 = -(C363913 * C392478 + C392623) / q;
    const double C364812 = C392693 - (C359642 * be + C364803 * C392479) / q +
                           C392597 - C392623 / q;
    const double C363933 = -(C363913 * C392480 + C392627) / q;
    const double C365628 = C392707 - (C360490 * be + C365619 * C392479) / q +
                           C392647 - C392627 / q;
    const double C364821 = -(C364803 * C392480 + C392694) / q;
    const double C365228 =
        C392612 - (C360074 * be + C365219 * C392479) / q - C392694 / q;
    const double C365610 = -(C365619 * C392478 + C392694) / q;
    const double C392846 = C392668 / q;
    const double C364380 = C392605 - (C364360 * C392480) / q - C392669 / q;
    const double C363932 = -(C363912 * C392480 + C392626) / q;
    const double C364202 = -(C364211 * C392478 + C392626) / q;
    const double C365084 = C365219 / C371137 -
                           (C374320 * be + C365075 * C392479) / q + C392703 -
                           C392626 / q;
    const double C364220 = C392648 - (C372878 * be + C364211 * C392479) / q +
                           C379986 / q - C392641 / q;
    const double C369038 =
        C392913 - (C369028 * C392479) / q + C386360 / q - C392953 / q;
    const double C369019 = -(C369029 * C392478 + C392951) / q;
    const double C369928 =
        C393021 - (C369919 * C392479) / q + C392925 - C392951 / q;
    const double C369049 = -(C358719 * be + C369029 * C392480 + C392955) / q;
    const double C370744 =
        C393035 - (C370735 * C392479) / q + C392975 - C392955 / q;
    const double C369937 = -(C359642 * be + C369919 * C392480 + C393022) / q;
    const double C370344 = C392940 - (C370335 * C392479) / q - C393022 / q;
    const double C370726 = -(C370735 * C392478 + C393022) / q;
    const double C393174 = C392996 / q;
    const double C369496 =
        C392933 - (C373183 * be + C369476 * C392480) / q - C392997 / q;
    const double C369048 = -(C372210 * be + C369028 * C392480 + C392954) / q;
    const double C369318 = -(C369327 * C392478 + C392954) / q;
    const double C370200 =
        C370335 / C371137 - (C370191 * C392479) / q + C393031 - C392954 / q;
    const double C369336 =
        C392976 - (C369327 * C392479) / q + C386999 / q - C392969 / q;
    const double C358226 = -(C358215 * C392479 + C392229) / q;
    const double C359595 = C392357 - (C359602 * be + C359605 * C392478) / q +
                           C392249 - C392229 / q;
    const double C358237 = -(C358215 * C392480 + C392233) / q;
    const double C360027 = C392374 - (C360034 * be + C360037 * C392478) / q +
                           C392271 - C392233 / q;
    const double C392489 = C392252 / q;
    const double C358668 =
        C372106 / q - (C358675 * be + C358679 * C392478) / q - C392502;
    const double C359615 = C392359 - (C359605 * C392479) / q - C392502;
    const double C392496 = C392273 / q;
    const double C359132 =
        C373079 / q - (C359139 * be + C359143 * C392478) / q - C392515;
    const double C360057 = C392359 - (C360037 * C392480) / q - C392515;
    const double C358405 = -(C358387 * C392480 + C392253) / q;
    const double C358540 = -(C358531 * C392479 + C392253) / q;
    const double C359882 = C360453 / C371137 -
                           (C374258 * be + C359891 * C392478) / q + C392370 -
                           C392253 / q;
    const double C358689 = C392248 - (C358678 * C392479) / q - C392503;
    const double C358842 =
        C372576 / q - (C372572 * be + C358851 * C392478) / q - C392503;
    const double C358986 =
        C372820 / q - (C372816 * be + C358995 * C392478) / q - C392510;
    const double C359900 =
        C360037 / C371137 - (C359891 * C392479) / q - C392510;
    const double C359013 = C392283 - (C358995 * C392480) / q - C392511;
    const double C359324 = C392325 - (C359315 * C392479) / q - C392511;
    const double C359306 =
        C373549 / q - (C373545 * be + C359315 * C392478) / q - C392519;
    const double C359909 =
        C359605 / C371137 - (C359891 * C392480) / q - C392519;
    const double C359164 = C392270 - (C359142 * C392480) / q - C392516;
    const double C359450 =
        C373789 / q - (C373785 * be + C359459 * C392478) / q - C392516;
    const double C363435 = -(C358211 * be + C363425 * C392479 + C392562) / q;
    const double C364758 =
        C392688 - (C364767 * C392478) / q + C392580 - C392562 / q;
    const double C363445 = -(C363425 * C392480 + C392564) / q;
    const double C365174 =
        C392705 - (C365183 * C392478) / q + C392602 - C392564 / q;
    const double C363601 = -(C363583 * C392480 + C392584) / q;
    const double C363736 = -(C371842 * be + C363727 * C392479 + C392584) / q;
    const double C365030 =
        C365583 / C371137 - (C365039 * C392478) / q + C392701 - C392584 / q;
    const double C368551 = -(C368541 * C392479 + C392890) / q;
    const double C369874 =
        C393016 - (C369883 * C392478) / q + C392908 - C392890 / q;
    const double C368561 = -(C358211 * be + C368541 * C392480 + C392892) / q;
    const double C370290 =
        C393033 - (C370299 * C392478) / q + C392930 - C392892 / q;
    const double C368717 = -(C371595 * be + C368699 * C392480 + C392912) / q;
    const double C368852 = -(C368843 * C392479 + C392912) / q;
    const double C370146 =
        C370699 / C371137 - (C370155 * C392478) / q + C393029 - C392912 / q;
    const double C392633 = C379529 * p;
    const double C392632 = C379499 * p;
    const double C392822 = C392596 / q;
    const double C392594 = C378871 * p;
    const double C364350 = C392664 - (C364360 * C392478) / q - C392827;
    const double C364193 = C392614 - (C364175 * C392480) / q - C392839;
    const double C364488 =
        C392656 - (C373545 * be + C364479 * C392479) / q - C392839;
    const double C392634 = C364247 * p;
    const double C364587 = -(C364605 * C392478 + C380813 * p) / q;
    const double C364533 = C392648 - (C364515 * C392480) / q - C392848;
    const double C364668 =
        C380930 / q - (C373847 * be + C364659 * C392479) / q - C392848;
    const double C364283 = -(C364301 * C392478 + C380104 * p) / q;
    const double C364121 = C379659 / q - (C364103 * C392480) / q - C392837;
    const double C364256 =
        C392651 - (C372939 * be + C364247 * C392479) / q - C392837;
    const double C392842 = C392653 / q;
    const double C392628 = C363953 / C371137;
    const double C363963 = C379514 / q -
                           (C358763 * be + C363953 * C392479) / q -
                           (C364103 * p) / q;
    const double C364112 = (3 * C363953) / C371137 -
                           (C372695 * be + C364103 * C392479) / q -
                           (C379823 * p) / q;
    const double C392840 = C392649 / q;
    const double C392629 = C363952 * p;
    const double C365147 =
        C365709 / C371137 - (C365165 * C392478) / q - (C381506 * p) / q;
    const double C365691 = -(C365709 * C392478 + C365165 * p) / q;
    const double C364351 = -(C364361 * C392478 + C392665) / q;
    const double C365237 = C392693 - (C365219 * C392480) / q - C392665 / q;
    const double C364370 =
        C380296 / q - (C373183 * be + C364360 * C392479) / q - C392845;
    const double C365093 =
        C364803 / C371137 - (C365075 * C392480) / q - C392845;
    const double C392576 = C363799 * p;
    const double C363808 = -(C371965 * be + C363799 * C392479 + C392596) / q;
    const double C364340 = C392601 - (C364320 * C392480) / q - C392844;
    const double C364614 = C380856 / q - (C364623 * C392478) / q - C392844;
    const double C392570 = C363763 * p;
    const double C363754 = C392605 - (C363763 * C392478) / q - C392569 / q;
    const double C363772 =
        C379036 / q - (C371905 * be + C363763 * C392479) / q - C392826;
    const double C365066 =
        C365619 / C371137 - (C365075 * C392478) / q - C392826;
    const double C364166 = C379911 / q - (C364175 * C392478) / q - C392838;
    const double C365048 =
        C365183 / C371137 - (C374258 * be + C365039 * C392479) / q - C392838;
    const double C392574 = C363655 * p;
    const double C363646 = C392591 - (C363655 * C392478) / q - C392573 / q;
    const double C364470 = C380623 / q - (C364479 * C392478) / q - C392847;
    const double C365057 =
        C364767 / C371137 - (C365039 * C392480) / q - C392847;
    const double C392568 = C363619 * p;
    const double C363637 = -(C363619 * C392480 + C392590) / q;
    const double C363882 =
        C392579 - (C372087 * be + C363872 * C392479) / q - C392831;
    const double C364022 = C379674 / q - (C364031 * C392478) / q - C392831;
    const double C392829 = C392611 / q;
    const double C392593 = C363505 / C371137;
    const double C392824 = C392604 / q;
    const double C363494 =
        (3 * C363505) / C371137 - (C363504 * C392478) / q - (C378481 * p) / q;
    const double C363495 =
        C378496 / q - (C363505 * C392478) / q - (C363504 * p) / q;
    const double C363514 = -(C371349 * be + C363504 * C392479 + C392573) / q;
    const double C364311 = C380163 / q - (C364321 * C392478) / q - C392843;
    const double C365201 = C392690 - (C365183 * C392480) / q - C392843;
    const double C392819 = C392589 / q;
    const double C392587 = C363465 / C371137;
    const double C392817 = C392583 / q;
    const double C363454 =
        (3 * C363465) / C371137 - (C363464 * C392478) / q - (C378361 * p) / q;
    const double C363455 =
        C378376 / q - (C363465 * C392478) / q - (C363464 * p) / q;
    const double C363484 = -(C363464 * C392480 + C392569) / q;
    const double C363474 =
        C378391 / q - (C371228 * be + C363464 * C392479) / q - C392811;
    const double C363610 = C392585 - (C363619 * C392478) / q - C392811;
    const double C363863 = C379214 / q - (C363873 * C392478) / q - C392830;
    const double C364776 =
        C392690 - (C359602 * be + C364767 * C392479) / q - C392830;
    const double C392961 = C386542 * p;
    const double C392960 = C386512 * p;
    const double C393150 = C392924 / q;
    const double C392922 = C385884 * p;
    const double C369466 = C392992 - (C369476 * C392478) / q - C393155;
    const double C369309 =
        C392942 - (C372816 * be + C369291 * C392480) / q - C393167;
    const double C369604 = C392984 - (C369595 * C392479) / q - C393167;
    const double C392962 = C369363 * p;
    const double C369703 = -(C369721 * C392478 + C387826 * p) / q;
    const double C369649 =
        C392976 - (C373607 * be + C369631 * C392480) / q - C393176;
    const double C369784 = C387943 / q - (C369775 * C392479) / q - C393176;
    const double C369399 = -(C369417 * C392478 + C387117 * p) / q;
    const double C369237 =
        C386672 / q - (C372695 * be + C369219 * C392480) / q - C393165;
    const double C369372 = C392979 - (C369363 * C392479) / q - C393165;
    const double C393170 = C392981 / q;
    const double C392956 = C369069 / C371137;
    const double C369079 =
        C386527 / q - (C369069 * C392479) / q - (C369219 * p) / q;
    const double C369228 =
        (3 * C369069) / C371137 - (C369219 * C392479) / q - (C386836 * p) / q;
    const double C393168 = C392977 / q;
    const double C392957 = C369068 * p;
    const double C370263 =
        C370825 / C371137 - (C370281 * C392478) / q - (C388519 * p) / q;
    const double C370807 = -(C370825 * C392478 + C370281 * p) / q;
    const double C369467 = -(C369477 * C392478 + C392993) / q;
    const double C370353 =
        C393021 - (C360074 * be + C370335 * C392480) / q - C392993 / q;
    const double C369486 = C387309 / q - (C369476 * C392479) / q - C393173;
    const double C370209 =
        C369919 / C371137 - (C374320 * be + C370191 * C392480) / q - C393173;
    const double C392904 = C368915 * p;
    const double C368924 = -(C368915 * C392479 + C392924) / q;
    const double C369456 =
        C392929 - (C373060 * be + C369436 * C392480) / q - C393172;
    const double C369730 = C387869 / q - (C369739 * C392478) / q - C393172;
    const double C392898 = C368879 * p;
    const double C368870 = C392933 - (C368879 * C392478) / q - C392897 / q;
    const double C368888 = C386049 / q - (C368879 * C392479) / q - C393154;
    const double C370182 =
        C370735 / C371137 - (C370191 * C392478) / q - C393154;
    const double C369282 = C386924 / q - (C369291 * C392478) / q - C393166;
    const double C370164 =
        C370299 / C371137 - (C370155 * C392479) / q - C393166;
    const double C392902 = C368771 * p;
    const double C368762 = C392919 - (C368771 * C392478) / q - C392901 / q;
    const double C369586 = C387636 / q - (C369595 * C392478) / q - C393175;
    const double C370173 =
        C369883 / C371137 - (C374258 * be + C370155 * C392480) / q - C393175;
    const double C392896 = C368735 * p;
    const double C368753 = -(C371659 * be + C368735 * C392480 + C392918) / q;
    const double C368998 = C392907 - (C368988 * C392479) / q - C393159;
    const double C369138 = C386687 / q - (C369147 * C392478) / q - C393159;
    const double C393157 = C392939 / q;
    const double C392921 = C368621 / C371137;
    const double C393152 = C392932 / q;
    const double C368610 =
        (3 * C368621) / C371137 - (C368620 * C392478) / q - (C385494 * p) / q;
    const double C368611 =
        C385509 / q - (C368621 * C392478) / q - (C368620 * p) / q;
    const double C368630 = -(C368620 * C392479 + C392901) / q;
    const double C369427 = C387176 / q - (C369437 * C392478) / q - C393171;
    const double C370317 =
        C393018 - (C360034 * be + C370299 * C392480) / q - C393171;
    const double C393147 = C392917 / q;
    const double C392915 = C368581 / C371137;
    const double C393145 = C392911 / q;
    const double C368570 =
        (3 * C368581) / C371137 - (C368580 * C392478) / q - (C385374 * p) / q;
    const double C368571 =
        C385389 / q - (C368581 * C392478) / q - (C368580 * p) / q;
    const double C368600 = -(C371228 * be + C368580 * C392480 + C392897) / q;
    const double C368590 = C385404 / q - (C368580 * C392479) / q - C393139;
    const double C368726 = C392913 - (C368735 * C392478) / q - C393139;
    const double C368979 = C386227 / q - (C368989 * C392478) / q - C393158;
    const double C369892 = C393018 - (C369883 * C392479) / q - C393158;
    const double C358324 = C371383 / q - (C358302 * C392480) / q - C392487;
    const double C358594 =
        C392277 - (C371965 * be + C358603 * C392478) / q - C392487;
    const double C359219 =
        C392339 - (C373303 * be + C359230 * C392478) / q - C392501;
    const double C358621 =
        C392262 - (C358603 * C392480) / q + C392279 - C392501;
    const double C358314 = -(C358303 * C392479 + C392243) / q;
    const double C359675 =
        C392364 - (C359682 * be + C359685 * C392478) / q - C392243 / q;
    const double C392488 = C392245 / q;
    const double C358756 = -(C358763 * be + C358767 * C392478 + C392298) / q;
    const double C359695 = C392366 - (C359685 * C392479) / q - C392298 / q;
    const double C359396 = C392339 - (C359387 * C392479) / q - C392514;
    const double C359085 =
        C392297 - (C359067 * C392480) / q + C392321 - C392514;
    const double C392507 = C392303 / q;
    const double C392493 = C392263 / q;
    const double C358477 = C392264 - (C358459 * C392480) / q - C392494;
    const double C359954 =
        C360533 / C371137 - (C374378 * be + C359963 * C392478) / q - C392494;
    const double C358777 = C392260 - (C358766 * C392479) / q - C392301 / q;
    const double C358914 = -(C372695 * be + C358923 * C392478 + C392301) / q;
    const double C392506 = C392302 / q;
    const double C359058 = -(C372939 * be + C359067 * C392478 + C392302) / q;
    const double C363524 = C378511 / q - (C363504 * C392480) / q - C392815;
    const double C363790 = C392608 - (C363799 * C392478) / q - C392815;
    const double C368640 =
        C385524 / q - (C371349 * be + C368620 * C392480) / q - C393143;
    const double C368906 = C392936 - (C368915 * C392478) / q - C393143;
    const double C358711 =
        C392291 - (C372210 * be + C358722 * C392478) / q - C392491;
    const double C358432 =
        C392256 - (C358423 * C392479) / q + C392257 - C392491;
    const double C358585 = C392256 - (C358567 * C392480) / q - C392499;
    const double C392484 = C392237 / q;
    const double C358281 = -(C358259 * C392480 + C392239) / q;
    const double C360067 =
        C392376 - (C360074 * be + C360077 * C392478) / q - C392239 / q;
    const double C359198 = C373231 / q - (C359187 * C392479) / q - C392518;
    const double C360513 = C392361 - (C360493 * C392480) / q - C392518;
    const double C359049 = C392291 - (C359031 * C392480) / q - C392512;
    const double C359360 =
        C392333 - (C359351 * C392479) / q + C392352 - C392512;
    const double C364371 =
        C380312 / q - (C359183 * be + C364361 * C392479) / q - C392846;
    const double C365637 = C392692 - (C365619 * C392480) / q - C392846;
    const double C369487 = C387325 / q - (C369477 * C392479) / q - C393174;
    const double C370753 =
        C393020 - (C360490 * be + C370735 * C392480) / q - C393174;
    const double C358396 = C392251 - (C358387 * C392479) / q - C392489;
    const double C358667 =
        C392283 - (C372087 * be + C358678 * C392478) / q + C392284 - C392489;
    const double C358549 = C392251 - (C358531 * C392480) / q - C392496;
    const double C359131 =
        C392325 - (C373060 * be + C359142 * C392478) / q + C392326 - C392496;
    const double C392834 = C392633 / q;
    const double C364238 = -(C364247 * C392478 + C392633) / q;
    const double C363962 =
        C392591 - (C372331 * be + C363952 * C392479) / q - C392632 / q;
    const double C364094 = -(C364103 * C392478 + C392632) / q;
    const double C363673 = C392595 - (C363655 * C392480) / q - C392822;
    const double C365102 =
        C365655 / C371137 - (C365111 * C392478) / q - C392822;
    const double C392821 = C392594 / q;
    const double C392835 = C392634 / q;
    const double C364560 =
        C392670 - (C373666 * be + C364551 * C392479) / q - C392842;
    const double C364265 =
        C392628 - (C364247 * C392480) / q + C392652 - C392842;
    const double C364229 = C392622 - (C364211 * C392480) / q - C392840;
    const double C364524 =
        C392664 - (C373607 * be + C364515 * C392479) / q + C392683 - C392840;
    const double C363943 = -(C363953 * C392478 + C392629) / q;
    const double C364848 =
        C392697 - (C359682 * be + C364839 * C392479) / q - C392629 / q;
    const double C392816 = C392576 / q;
    const double C363485 = -(C363465 * C392480 + C392570) / q;
    const double C365210 = C392707 - (C365219 * C392478) / q - C392570 / q;
    const double C363515 = -(C358299 * be + C363505 * C392479 + C392574) / q;
    const double C364830 = C392695 - (C364839 * C392478) / q - C392574 / q;
    const double C392812 = C392568 / q;
    const double C364390 = C392670 - (C364400 * C392478) / q - C392829;
    const double C363817 =
        C392593 - (C363799 * C392480) / q + C392610 - C392829;
    const double C363745 = C392582 - (C363727 * C392480) / q - C392824;
    const double C364310 =
        C392656 - (C364320 * C392478) / q + C392657 - C392824;
    const double C363902 = C392622 - (C363912 * C392478) / q - C392819;
    const double C363628 =
        C392587 - (C371659 * be + C363619 * C392479) / q + C392588 - C392819;
    const double C363781 = C392587 - (C363763 * C392480) / q - C392827;
    const double C363592 =
        C392582 - (C371595 * be + C363583 * C392479) / q - C392817;
    const double C363862 =
        C392614 - (C363872 * C392478) / q + C392615 - C392817;
    const double C393162 = C392961 / q;
    const double C369354 = -(C369363 * C392478 + C392961) / q;
    const double C369078 = C392919 - (C369068 * C392479) / q - C392960 / q;
    const double C369210 = -(C369219 * C392478 + C392960) / q;
    const double C368789 =
        C392923 - (C371719 * be + C368771 * C392480) / q - C393150;
    const double C370218 =
        C370771 / C371137 - (C370227 * C392478) / q - C393150;
    const double C393149 = C392922 / q;
    const double C393163 = C392962 / q;
    const double C369676 = C392998 - (C369667 * C392479) / q - C393170;
    const double C369381 =
        C392956 - (C372939 * be + C369363 * C392480) / q + C392980 - C393170;
    const double C369345 =
        C392950 - (C372878 * be + C369327 * C392480) / q - C393168;
    const double C369640 =
        C392992 - (C369631 * C392479) / q + C393011 - C393168;
    const double C369059 = -(C369069 * C392478 + C392957) / q;
    const double C369964 = C393025 - (C369955 * C392479) / q - C392957 / q;
    const double C393144 = C392904 / q;
    const double C368601 = -(C358255 * be + C368581 * C392480 + C392898) / q;
    const double C370326 = C393035 - (C370335 * C392478) / q - C392898 / q;
    const double C368631 = -(C368621 * C392479 + C392902) / q;
    const double C369946 = C393023 - (C369955 * C392478) / q - C392902 / q;
    const double C393140 = C392896 / q;
    const double C369506 = C392998 - (C369516 * C392478) / q - C393157;
    const double C368933 =
        C392921 - (C371965 * be + C368915 * C392480) / q + C392938 - C393157;
    const double C368861 =
        C392910 - (C371842 * be + C368843 * C392480) / q - C393152;
    const double C369426 =
        C392984 - (C369436 * C392478) / q + C392985 - C393152;
    const double C369018 = C392950 - (C369028 * C392478) / q - C393147;
    const double C368744 =
        C392915 - (C368735 * C392479) / q + C392916 - C393147;
    const double C368897 =
        C392915 - (C371905 * be + C368879 * C392480) / q - C393155;
    const double C368708 = C392910 - (C368699 * C392479) / q - C393145;
    const double C368978 =
        C392942 - (C368988 * C392478) / q + C392943 - C393145;
    const double C358325 = C371399 / q - (C358303 * C392480) / q - C392488;
    const double C360107 =
        C392378 - (C360114 * be + C360117 * C392478) / q - C392488;
    const double C358789 = C372379 / q - (C358767 * C392480) / q - C392507;
    const double C360543 = C392378 - (C360533 * C392479) / q - C392507;
    const double C358468 = C392262 - (C358459 * C392479) / q - C392493;
    const double C358755 =
        C392297 - (C372331 * be + C358766 * C392478) / q - C392493;
    const double C358788 = C372363 / q - (C358766 * C392480) / q - C392506;
    const double C359972 =
        C360117 / C371137 - (C359963 * C392479) / q - C392506;
    const double C358270 = C371278 / q - (C358259 * C392479) / q - C392484;
    const double C359635 =
        C392361 - (C359642 * be + C359645 * C392478) / q - C392484;
    const double C363972 = C379467 / q - (C363952 * C392480) / q - C392834;
    const double C365120 =
        C365255 / C371137 - (C374378 * be + C365111 * C392479) / q - C392834;
    const double C363664 =
        C392593 - (C371719 * be + C363655 * C392479) / q - C392821;
    const double C363942 = C392628 - (C363952 * C392478) / q - C392821;
    const double C363973 = C379483 / q - (C363953 * C392480) / q - C392835;
    const double C365664 =
        C392709 - (C360530 * be + C365655 * C392479) / q - C392835;
    const double C363525 = C378527 / q - (C363505 * C392480) / q - C392816;
    const double C365246 = C392709 - (C365255 * C392478) / q - C392816;
    const double C363475 =
        C378407 / q - (C358255 * be + C363465 * C392479) / q - C392812;
    const double C364794 = C392692 - (C364803 * C392478) / q - C392812;
    const double C369088 =
        C386480 / q - (C372331 * be + C369068 * C392480) / q - C393162;
    const double C370236 =
        C370371 / C371137 - (C370227 * C392479) / q - C393162;
    const double C368780 = C392921 - (C368771 * C392479) / q - C393149;
    const double C369058 = C392956 - (C369068 * C392478) / q - C393149;
    const double C369089 =
        C386496 / q - (C358763 * be + C369069 * C392480) / q - C393163;
    const double C370780 = C393037 - (C370771 * C392479) / q - C393163;
    const double C368641 =
        C385540 / q - (C358299 * be + C368621 * C392480) / q - C393144;
    const double C370362 = C393037 - (C370371 * C392478) / q - C393144;
    const double C368591 = C385420 / q - (C368581 * C392479) / q - C393140;
    const double C369910 = C393020 - (C369919 * C392478) / q - C393140;
    etx[0] = C358203;
    etx[1] = C358204;
    etx[2] = C358214;
    etx[3] = C358215;
    etx[4] = C358225;
    etx[5] = C358226;
    etx[6] = C358236;
    etx[7] = C358237;
    etx[8] = C358247;
    etx[9] = C358248;
    etx[10] = C358258;
    etx[11] = C358259;
    etx[12] = C358269;
    etx[13] = C358270;
    etx[14] = C358280;
    etx[15] = C358281;
    etx[16] = C358291;
    etx[17] = C358292;
    etx[18] = C358302;
    etx[19] = C358303;
    etx[20] = C358313;
    etx[21] = C358314;
    etx[22] = C358324;
    etx[23] = C358325;
    etx[24] = C358335;
    etx[25] = C358336;
    etx[26] = C358346;
    etx[27] = C358347;
    etx[28] = C358357;
    etx[29] = C358358;
    etx[30] = C358368;
    etx[31] = C358369;
    etx[32] = C358378;
    etx[33] = C358387;
    etx[34] = C358396;
    etx[35] = C358405;
    etx[36] = C358414;
    etx[37] = C358423;
    etx[38] = C358432;
    etx[39] = C358441;
    etx[40] = C358450;
    etx[41] = C358459;
    etx[42] = C358468;
    etx[43] = C358477;
    etx[44] = C358486;
    etx[45] = C358495;
    etx[46] = C358504;
    etx[47] = C358513;
    etx[48] = C358522;
    etx[49] = C358531;
    etx[50] = C358540;
    etx[51] = C358549;
    etx[52] = C358558;
    etx[53] = C358567;
    etx[54] = C358576;
    etx[55] = C358585;
    etx[56] = C358594;
    etx[57] = C358603;
    etx[58] = C358612;
    etx[59] = C358621;
    etx[60] = C358630;
    etx[61] = C358639;
    etx[62] = C358648;
    etx[63] = C358657;
    etx[64] = C358667;
    etx[65] = C358668;
    etx[66] = C358678;
    etx[67] = C358679;
    etx[68] = C358689;
    etx[69] = C358690;
    etx[70] = C358700;
    etx[71] = C358701;
    etx[72] = C358711;
    etx[73] = C358712;
    etx[74] = C358722;
    etx[75] = C358723;
    etx[76] = C358733;
    etx[77] = C358734;
    etx[78] = C358744;
    etx[79] = C358745;
    etx[80] = C358755;
    etx[81] = C358756;
    etx[82] = C358766;
    etx[83] = C358767;
    etx[84] = C358777;
    etx[85] = C358778;
    etx[86] = C358788;
    etx[87] = C358789;
    etx[88] = C358799;
    etx[89] = C358800;
    etx[90] = C358810;
    etx[91] = C358811;
    etx[92] = C358821;
    etx[93] = C358822;
    etx[94] = C358832;
    etx[95] = C358833;
    etx[96] = C358842;
    etx[97] = C358851;
    etx[98] = C358860;
    etx[99] = C358869;
    etx[100] = C358878;
    etx[101] = C358887;
    etx[102] = C358896;
    etx[103] = C358905;
    etx[104] = C358914;
    etx[105] = C358923;
    etx[106] = C358932;
    etx[107] = C358941;
    etx[108] = C358950;
    etx[109] = C358959;
    etx[110] = C358968;
    etx[111] = C358977;
    etx[112] = C358986;
    etx[113] = C358995;
    etx[114] = C359004;
    etx[115] = C359013;
    etx[116] = C359022;
    etx[117] = C359031;
    etx[118] = C359040;
    etx[119] = C359049;
    etx[120] = C359058;
    etx[121] = C359067;
    etx[122] = C359076;
    etx[123] = C359085;
    etx[124] = C359094;
    etx[125] = C359103;
    etx[126] = C359112;
    etx[127] = C359121;
    etx[128] = C359131;
    etx[129] = C359132;
    etx[130] = C359142;
    etx[131] = C359143;
    etx[132] = C359153;
    etx[133] = C359154;
    etx[134] = C359164;
    etx[135] = C359165;
    etx[136] = C359175;
    etx[137] = C359176;
    etx[138] = C359186;
    etx[139] = C359187;
    etx[140] = C359197;
    etx[141] = C359198;
    etx[142] = C359208;
    etx[143] = C359209;
    etx[144] = C359219;
    etx[145] = C359220;
    etx[146] = C359230;
    etx[147] = C359231;
    etx[148] = C359241;
    etx[149] = C359242;
    etx[150] = C359252;
    etx[151] = C359253;
    etx[152] = C359263;
    etx[153] = C359264;
    etx[154] = C359274;
    etx[155] = C359275;
    etx[156] = C359285;
    etx[157] = C359286;
    etx[158] = C359296;
    etx[159] = C359297;
    etx[160] = C359306;
    etx[161] = C359315;
    etx[162] = C359324;
    etx[163] = C359333;
    etx[164] = C359342;
    etx[165] = C359351;
    etx[166] = C359360;
    etx[167] = C359369;
    etx[168] = C359378;
    etx[169] = C359387;
    etx[170] = C359396;
    etx[171] = C359405;
    etx[172] = C359414;
    etx[173] = C359423;
    etx[174] = C359432;
    etx[175] = C359441;
    etx[176] = C359450;
    etx[177] = C359459;
    etx[178] = C359468;
    etx[179] = C359477;
    etx[180] = C359486;
    etx[181] = C359495;
    etx[182] = C359504;
    etx[183] = C359513;
    etx[184] = C359522;
    etx[185] = C359531;
    etx[186] = C359540;
    etx[187] = C359549;
    etx[188] = C359558;
    etx[189] = C359567;
    etx[190] = C359576;
    etx[191] = C359585;
    etx[192] = C359595;
    etx[193] = C359605;
    etx[194] = C359615;
    etx[195] = C359625;
    etx[196] = C359635;
    etx[197] = C359645;
    etx[198] = C359655;
    etx[199] = C359665;
    etx[200] = C359675;
    etx[201] = C359685;
    etx[202] = C359695;
    etx[203] = C359705;
    etx[204] = C359715;
    etx[205] = C359725;
    etx[206] = C359735;
    etx[207] = C359745;
    etx[208] = C359882;
    etx[209] = C359891;
    etx[210] = C359900;
    etx[211] = C359909;
    etx[212] = C359918;
    etx[213] = C359927;
    etx[214] = C359936;
    etx[215] = C359945;
    etx[216] = C359954;
    etx[217] = C359963;
    etx[218] = C359972;
    etx[219] = C359981;
    etx[220] = C359990;
    etx[221] = C359999;
    etx[222] = C360008;
    etx[223] = C360017;
    etx[224] = C360027;
    etx[225] = C360037;
    etx[226] = C360047;
    etx[227] = C360057;
    etx[228] = C360067;
    etx[229] = C360077;
    etx[230] = C360087;
    etx[231] = C360097;
    etx[232] = C360107;
    etx[233] = C360117;
    etx[234] = C360127;
    etx[235] = C360137;
    etx[236] = C360147;
    etx[237] = C360157;
    etx[238] = C360167;
    etx[239] = C360177;
    etx[240] = C360443;
    etx[241] = C360453;
    etx[242] = C360463;
    etx[243] = C360473;
    etx[244] = C360483;
    etx[245] = C360493;
    etx[246] = C360503;
    etx[247] = C360513;
    etx[248] = C360523;
    etx[249] = C360533;
    etx[250] = C360543;
    etx[251] = C360553;
    etx[252] = C360563;
    etx[253] = C360573;
    etx[254] = C360583;
    etx[255] = C360593;
    ety[0] = C363414;
    ety[1] = C363415;
    ety[2] = C363424;
    ety[3] = C363425;
    ety[4] = C363434;
    ety[5] = C363435;
    ety[6] = C363444;
    ety[7] = C363445;
    ety[8] = C363454;
    ety[9] = C363455;
    ety[10] = C363464;
    ety[11] = C363465;
    ety[12] = C363474;
    ety[13] = C363475;
    ety[14] = C363484;
    ety[15] = C363485;
    ety[16] = C363494;
    ety[17] = C363495;
    ety[18] = C363504;
    ety[19] = C363505;
    ety[20] = C363514;
    ety[21] = C363515;
    ety[22] = C363524;
    ety[23] = C363525;
    ety[24] = C363534;
    ety[25] = C363535;
    ety[26] = C363544;
    ety[27] = C363545;
    ety[28] = C363554;
    ety[29] = C363555;
    ety[30] = C363564;
    ety[31] = C363565;
    ety[32] = C363574;
    ety[33] = C363583;
    ety[34] = C363592;
    ety[35] = C363601;
    ety[36] = C363610;
    ety[37] = C363619;
    ety[38] = C363628;
    ety[39] = C363637;
    ety[40] = C363646;
    ety[41] = C363655;
    ety[42] = C363664;
    ety[43] = C363673;
    ety[44] = C363682;
    ety[45] = C363691;
    ety[46] = C363700;
    ety[47] = C363709;
    ety[48] = C363718;
    ety[49] = C363727;
    ety[50] = C363736;
    ety[51] = C363745;
    ety[52] = C363754;
    ety[53] = C363763;
    ety[54] = C363772;
    ety[55] = C363781;
    ety[56] = C363790;
    ety[57] = C363799;
    ety[58] = C363808;
    ety[59] = C363817;
    ety[60] = C363826;
    ety[61] = C363835;
    ety[62] = C363844;
    ety[63] = C363853;
    ety[64] = C363862;
    ety[65] = C363863;
    ety[66] = C363872;
    ety[67] = C363873;
    ety[68] = C363882;
    ety[69] = C363883;
    ety[70] = C363892;
    ety[71] = C363893;
    ety[72] = C363902;
    ety[73] = C363903;
    ety[74] = C363912;
    ety[75] = C363913;
    ety[76] = C363922;
    ety[77] = C363923;
    ety[78] = C363932;
    ety[79] = C363933;
    ety[80] = C363942;
    ety[81] = C363943;
    ety[82] = C363952;
    ety[83] = C363953;
    ety[84] = C363962;
    ety[85] = C363963;
    ety[86] = C363972;
    ety[87] = C363973;
    ety[88] = C363982;
    ety[89] = C363983;
    ety[90] = C363992;
    ety[91] = C363993;
    ety[92] = C364002;
    ety[93] = C364003;
    ety[94] = C364012;
    ety[95] = C364013;
    ety[96] = C364022;
    ety[97] = C364031;
    ety[98] = C364040;
    ety[99] = C364049;
    ety[100] = C364058;
    ety[101] = C364067;
    ety[102] = C364076;
    ety[103] = C364085;
    ety[104] = C364094;
    ety[105] = C364103;
    ety[106] = C364112;
    ety[107] = C364121;
    ety[108] = C364130;
    ety[109] = C364139;
    ety[110] = C364148;
    ety[111] = C364157;
    ety[112] = C364166;
    ety[113] = C364175;
    ety[114] = C364184;
    ety[115] = C364193;
    ety[116] = C364202;
    ety[117] = C364211;
    ety[118] = C364220;
    ety[119] = C364229;
    ety[120] = C364238;
    ety[121] = C364247;
    ety[122] = C364256;
    ety[123] = C364265;
    ety[124] = C364274;
    ety[125] = C364283;
    ety[126] = C364292;
    ety[127] = C364301;
    ety[128] = C364310;
    ety[129] = C364311;
    ety[130] = C364320;
    ety[131] = C364321;
    ety[132] = C364330;
    ety[133] = C364331;
    ety[134] = C364340;
    ety[135] = C364341;
    ety[136] = C364350;
    ety[137] = C364351;
    ety[138] = C364360;
    ety[139] = C364361;
    ety[140] = C364370;
    ety[141] = C364371;
    ety[142] = C364380;
    ety[143] = C364381;
    ety[144] = C364390;
    ety[145] = C364391;
    ety[146] = C364400;
    ety[147] = C364401;
    ety[148] = C364410;
    ety[149] = C364411;
    ety[150] = C364420;
    ety[151] = C364421;
    ety[152] = C364430;
    ety[153] = C364431;
    ety[154] = C364440;
    ety[155] = C364441;
    ety[156] = C364450;
    ety[157] = C364451;
    ety[158] = C364460;
    ety[159] = C364461;
    ety[160] = C364470;
    ety[161] = C364479;
    ety[162] = C364488;
    ety[163] = C364497;
    ety[164] = C364506;
    ety[165] = C364515;
    ety[166] = C364524;
    ety[167] = C364533;
    ety[168] = C364542;
    ety[169] = C364551;
    ety[170] = C364560;
    ety[171] = C364569;
    ety[172] = C364578;
    ety[173] = C364587;
    ety[174] = C364596;
    ety[175] = C364605;
    ety[176] = C364614;
    ety[177] = C364623;
    ety[178] = C364632;
    ety[179] = C364641;
    ety[180] = C364650;
    ety[181] = C364659;
    ety[182] = C364668;
    ety[183] = C364677;
    ety[184] = C364686;
    ety[185] = C364695;
    ety[186] = C364704;
    ety[187] = C364713;
    ety[188] = C364722;
    ety[189] = C364731;
    ety[190] = C364740;
    ety[191] = C364749;
    ety[192] = C364758;
    ety[193] = C364767;
    ety[194] = C364776;
    ety[195] = C364785;
    ety[196] = C364794;
    ety[197] = C364803;
    ety[198] = C364812;
    ety[199] = C364821;
    ety[200] = C364830;
    ety[201] = C364839;
    ety[202] = C364848;
    ety[203] = C364857;
    ety[204] = C364866;
    ety[205] = C364875;
    ety[206] = C364884;
    ety[207] = C364893;
    ety[208] = C365030;
    ety[209] = C365039;
    ety[210] = C365048;
    ety[211] = C365057;
    ety[212] = C365066;
    ety[213] = C365075;
    ety[214] = C365084;
    ety[215] = C365093;
    ety[216] = C365102;
    ety[217] = C365111;
    ety[218] = C365120;
    ety[219] = C365129;
    ety[220] = C365138;
    ety[221] = C365147;
    ety[222] = C365156;
    ety[223] = C365165;
    ety[224] = C365174;
    ety[225] = C365183;
    ety[226] = C365192;
    ety[227] = C365201;
    ety[228] = C365210;
    ety[229] = C365219;
    ety[230] = C365228;
    ety[231] = C365237;
    ety[232] = C365246;
    ety[233] = C365255;
    ety[234] = C365264;
    ety[235] = C365273;
    ety[236] = C365282;
    ety[237] = C365291;
    ety[238] = C365300;
    ety[239] = C365309;
    ety[240] = C365574;
    ety[241] = C365583;
    ety[242] = C365592;
    ety[243] = C365601;
    ety[244] = C365610;
    ety[245] = C365619;
    ety[246] = C365628;
    ety[247] = C365637;
    ety[248] = C365646;
    ety[249] = C365655;
    ety[250] = C365664;
    ety[251] = C365673;
    ety[252] = C365682;
    ety[253] = C365691;
    ety[254] = C365700;
    ety[255] = C365709;
    etz[0] = C368530;
    etz[1] = C368531;
    etz[2] = C368540;
    etz[3] = C368541;
    etz[4] = C368550;
    etz[5] = C368551;
    etz[6] = C368560;
    etz[7] = C368561;
    etz[8] = C368570;
    etz[9] = C368571;
    etz[10] = C368580;
    etz[11] = C368581;
    etz[12] = C368590;
    etz[13] = C368591;
    etz[14] = C368600;
    etz[15] = C368601;
    etz[16] = C368610;
    etz[17] = C368611;
    etz[18] = C368620;
    etz[19] = C368621;
    etz[20] = C368630;
    etz[21] = C368631;
    etz[22] = C368640;
    etz[23] = C368641;
    etz[24] = C368650;
    etz[25] = C368651;
    etz[26] = C368660;
    etz[27] = C368661;
    etz[28] = C368670;
    etz[29] = C368671;
    etz[30] = C368680;
    etz[31] = C368681;
    etz[32] = C368690;
    etz[33] = C368699;
    etz[34] = C368708;
    etz[35] = C368717;
    etz[36] = C368726;
    etz[37] = C368735;
    etz[38] = C368744;
    etz[39] = C368753;
    etz[40] = C368762;
    etz[41] = C368771;
    etz[42] = C368780;
    etz[43] = C368789;
    etz[44] = C368798;
    etz[45] = C368807;
    etz[46] = C368816;
    etz[47] = C368825;
    etz[48] = C368834;
    etz[49] = C368843;
    etz[50] = C368852;
    etz[51] = C368861;
    etz[52] = C368870;
    etz[53] = C368879;
    etz[54] = C368888;
    etz[55] = C368897;
    etz[56] = C368906;
    etz[57] = C368915;
    etz[58] = C368924;
    etz[59] = C368933;
    etz[60] = C368942;
    etz[61] = C368951;
    etz[62] = C368960;
    etz[63] = C368969;
    etz[64] = C368978;
    etz[65] = C368979;
    etz[66] = C368988;
    etz[67] = C368989;
    etz[68] = C368998;
    etz[69] = C368999;
    etz[70] = C369008;
    etz[71] = C369009;
    etz[72] = C369018;
    etz[73] = C369019;
    etz[74] = C369028;
    etz[75] = C369029;
    etz[76] = C369038;
    etz[77] = C369039;
    etz[78] = C369048;
    etz[79] = C369049;
    etz[80] = C369058;
    etz[81] = C369059;
    etz[82] = C369068;
    etz[83] = C369069;
    etz[84] = C369078;
    etz[85] = C369079;
    etz[86] = C369088;
    etz[87] = C369089;
    etz[88] = C369098;
    etz[89] = C369099;
    etz[90] = C369108;
    etz[91] = C369109;
    etz[92] = C369118;
    etz[93] = C369119;
    etz[94] = C369128;
    etz[95] = C369129;
    etz[96] = C369138;
    etz[97] = C369147;
    etz[98] = C369156;
    etz[99] = C369165;
    etz[100] = C369174;
    etz[101] = C369183;
    etz[102] = C369192;
    etz[103] = C369201;
    etz[104] = C369210;
    etz[105] = C369219;
    etz[106] = C369228;
    etz[107] = C369237;
    etz[108] = C369246;
    etz[109] = C369255;
    etz[110] = C369264;
    etz[111] = C369273;
    etz[112] = C369282;
    etz[113] = C369291;
    etz[114] = C369300;
    etz[115] = C369309;
    etz[116] = C369318;
    etz[117] = C369327;
    etz[118] = C369336;
    etz[119] = C369345;
    etz[120] = C369354;
    etz[121] = C369363;
    etz[122] = C369372;
    etz[123] = C369381;
    etz[124] = C369390;
    etz[125] = C369399;
    etz[126] = C369408;
    etz[127] = C369417;
    etz[128] = C369426;
    etz[129] = C369427;
    etz[130] = C369436;
    etz[131] = C369437;
    etz[132] = C369446;
    etz[133] = C369447;
    etz[134] = C369456;
    etz[135] = C369457;
    etz[136] = C369466;
    etz[137] = C369467;
    etz[138] = C369476;
    etz[139] = C369477;
    etz[140] = C369486;
    etz[141] = C369487;
    etz[142] = C369496;
    etz[143] = C369497;
    etz[144] = C369506;
    etz[145] = C369507;
    etz[146] = C369516;
    etz[147] = C369517;
    etz[148] = C369526;
    etz[149] = C369527;
    etz[150] = C369536;
    etz[151] = C369537;
    etz[152] = C369546;
    etz[153] = C369547;
    etz[154] = C369556;
    etz[155] = C369557;
    etz[156] = C369566;
    etz[157] = C369567;
    etz[158] = C369576;
    etz[159] = C369577;
    etz[160] = C369586;
    etz[161] = C369595;
    etz[162] = C369604;
    etz[163] = C369613;
    etz[164] = C369622;
    etz[165] = C369631;
    etz[166] = C369640;
    etz[167] = C369649;
    etz[168] = C369658;
    etz[169] = C369667;
    etz[170] = C369676;
    etz[171] = C369685;
    etz[172] = C369694;
    etz[173] = C369703;
    etz[174] = C369712;
    etz[175] = C369721;
    etz[176] = C369730;
    etz[177] = C369739;
    etz[178] = C369748;
    etz[179] = C369757;
    etz[180] = C369766;
    etz[181] = C369775;
    etz[182] = C369784;
    etz[183] = C369793;
    etz[184] = C369802;
    etz[185] = C369811;
    etz[186] = C369820;
    etz[187] = C369829;
    etz[188] = C369838;
    etz[189] = C369847;
    etz[190] = C369856;
    etz[191] = C369865;
    etz[192] = C369874;
    etz[193] = C369883;
    etz[194] = C369892;
    etz[195] = C369901;
    etz[196] = C369910;
    etz[197] = C369919;
    etz[198] = C369928;
    etz[199] = C369937;
    etz[200] = C369946;
    etz[201] = C369955;
    etz[202] = C369964;
    etz[203] = C369973;
    etz[204] = C369982;
    etz[205] = C369991;
    etz[206] = C370000;
    etz[207] = C370009;
    etz[208] = C370146;
    etz[209] = C370155;
    etz[210] = C370164;
    etz[211] = C370173;
    etz[212] = C370182;
    etz[213] = C370191;
    etz[214] = C370200;
    etz[215] = C370209;
    etz[216] = C370218;
    etz[217] = C370227;
    etz[218] = C370236;
    etz[219] = C370245;
    etz[220] = C370254;
    etz[221] = C370263;
    etz[222] = C370272;
    etz[223] = C370281;
    etz[224] = C370290;
    etz[225] = C370299;
    etz[226] = C370308;
    etz[227] = C370317;
    etz[228] = C370326;
    etz[229] = C370335;
    etz[230] = C370344;
    etz[231] = C370353;
    etz[232] = C370362;
    etz[233] = C370371;
    etz[234] = C370380;
    etz[235] = C370389;
    etz[236] = C370398;
    etz[237] = C370407;
    etz[238] = C370416;
    etz[239] = C370425;
    etz[240] = C370690;
    etz[241] = C370699;
    etz[242] = C370708;
    etz[243] = C370717;
    etz[244] = C370726;
    etz[245] = C370735;
    etz[246] = C370744;
    etz[247] = C370753;
    etz[248] = C370762;
    etz[249] = C370771;
    etz[250] = C370780;
    etz[251] = C370789;
    etz[252] = C370798;
    etz[253] = C370807;
    etz[254] = C370816;
    etz[255] = C370825;
}
