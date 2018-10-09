/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2121_2_et(const double ae,
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
    const double C4882 = g[1];
    const double C4926 = g[5];
    const double C4970 = g[9];
    const double C5036 = g[15];
    const double C5346 = g[17];
    const double C5390 = g[21];
    const double C5434 = g[25];
    const double C5500 = g[31];
    const double C5810 = g[33];
    const double C5854 = g[37];
    const double C5898 = g[41];
    const double C5964 = g[47];
    const double C6273 = g[49];
    const double C6313 = g[53];
    const double C6353 = g[57];
    const double C6413 = g[63];
    const double C6705 = g[65];
    const double C6745 = g[69];
    const double C6785 = g[73];
    const double C6845 = g[79];
    const double C7121 = g[81];
    const double C7161 = g[85];
    const double C7201 = g[89];
    const double C7261 = g[95];
    const double C17773 = g[96];
    const double C17806 = g[97];
    const double C17824 = g[98];
    const double C17899 = g[99];
    const double C18020 = g[100];
    const double C18141 = g[101];
    const double C18157 = g[102];
    const double C18173 = g[103];
    const double C18204 = g[104];
    const double C18220 = g[105];
    const double C18266 = g[106];
    const double C18282 = g[107];
    const double C18330 = g[108];
    const double C18390 = g[109];
    const double C18450 = g[110];
    const double C18466 = g[111];
    const double C18482 = g[112];
    const double C18513 = g[113];
    const double C18529 = g[114];
    const double C18576 = g[115];
    const double C18636 = g[116];
    const double C18695 = g[117];
    const double C18712 = g[118];
    const double C18728 = g[119];
    const double C18758 = g[120];
    const double C18789 = g[121];
    const double C18806 = g[122];
    const double C18881 = g[123];
    const double C19002 = g[124];
    const double C19122 = g[125];
    const double C19137 = g[126];
    const double C19152 = g[127];
    const double C19182 = g[128];
    const double C19197 = g[129];
    const double C19243 = g[130];
    const double C19259 = g[131];
    const double C19306 = g[132];
    const double C19366 = g[133];
    const double C19426 = g[134];
    const double C19441 = g[135];
    const double C19457 = g[136];
    const double C19487 = g[137];
    const double C19503 = g[138];
    const double C19549 = g[139];
    const double C19610 = g[140];
    const double C19669 = g[141];
    const double C19685 = g[142];
    const double C19701 = g[143];
    const double C19731 = g[144];
    const double C19762 = g[145];
    const double C19779 = g[146];
    const double C19854 = g[147];
    const double C19974 = g[148];
    const double C20095 = g[149];
    const double C20111 = g[150];
    const double C20126 = g[151];
    const double C20156 = g[152];
    const double C20171 = g[153];
    const double C20216 = g[154];
    const double C20232 = g[155];
    const double C20278 = g[156];
    const double C20337 = g[157];
    const double C20396 = g[158];
    const double C20411 = g[159];
    const double C20427 = g[160];
    const double C20456 = g[161];
    const double C20472 = g[162];
    const double C20518 = g[163];
    const double C20578 = g[164];
    const double C20637 = g[165];
    const double C20653 = g[166];
    const double C20669 = g[167];
    const double C20712 = g[168];
    const double C20870 = g[169];
    const double C20900 = g[170];
    const double C20929 = g[171];
    const double C20945 = g[172];
    const double C20991 = g[173];
    const double C21049 = g[174];
    const double C21106 = g[175];
    const double C21121 = g[176];
    const double C21137 = g[177];
    const double C21180 = g[178];
    const double C21337 = g[179];
    const double C21368 = g[180];
    const double C21411 = g[181];
    const double C21567 = g[182];
    const double C21596 = g[183];
    const double C21625 = g[184];
    const double C21641 = g[185];
    const double C21656 = g[186];
    const double C21673 = g[187];
    const double C21688 = g[188];
    const double C21703 = g[189];
    const double C21719 = g[190];
    const double C21736 = g[191];
    const double C22104 = g[192];
    const double C22119 = g[193];
    const double C22135 = g[194];
    const double C22150 = g[195];
    const double C22166 = g[196];
    const double C22330 = g[197];
    const double C22345 = g[198];
    const double C22361 = g[199];
    const double C22376 = g[200];
    const double C22521 = g[201];
    const double C22536 = g[202];
    const double C22551 = g[203];
    const double C22566 = g[204];
    const double C22583 = g[205];
    const double C22598 = g[206];
    const double C22891 = g[207];
    const double C22906 = g[208];
    const double C22921 = g[209];
    const double C22938 = g[210];
    const double C23075 = g[211];
    const double C23090 = g[212];
    const double C23105 = g[213];
    const double C23251 = g[214];
    const double C23266 = g[215];
    const double C23281 = g[216];
    const double C23296 = g[217];
    const double C23313 = g[218];
    const double C23330 = g[219];
    const double C23618 = g[220];
    const double C23633 = g[221];
    const double C23648 = g[222];
    const double C23738 = g[223];
    const double C23753 = g[224];
    const double C23768 = g[225];
    const double C23887 = g[226];
    const double C23929 = g[227];
    const double C23944 = g[228];
    const double C23959 = g[229];
    const double C24002 = g[230];
    const double C24045 = g[231];
    const double C24061 = g[232];
    const double C24076 = g[233];
    const double C24092 = g[234];
    const double C24213 = g[235];
    const double C24228 = g[236];
    const double C24317 = g[237];
    const double C24361 = g[238];
    const double C24376 = g[239];
    const double C24479 = g[240];
    const double C24494 = g[241];
    const double C24509 = g[242];
    const double C24524 = g[243];
    const double C24613 = g[244];
    const double C24628 = g[245];
    const double C24672 = g[246];
    const double C24687 = g[247];
    const double C24774 = g[248];
    const double C24789 = g[249];
    const double C24833 = g[250];
    const double C24848 = g[251];
    const double C28789 = g[252];
    const double C28805 = g[253];
    const double C28878 = g[254];
    const double C28894 = g[255];
    const double C29056 = g[256];
    const double C29072 = g[257];
    const double C29234 = g[258];
    const double C29250 = g[259];
    const double C29325 = g[260];
    const double C29456 = g[261];
    const double C29530 = g[262];
    const double C29718 = g[263];
    const double C29733 = g[264];
    const double C29749 = g[265];
    const double C29867 = g[266];
    const double C30002 = g[267];
    const double C30018 = g[268];
    const double C30079 = g[269];
    const double C30196 = g[270];
    const double C30256 = g[271];
    const double C30429 = g[272];
    const double C30445 = g[273];
    const double C30461 = g[274];
    const double C30605 = g[275];
    const double C30708 = g[276];
    const double C30754 = g[277];
    const double C30841 = g[278];
    const double C30902 = g[279];
    const double C30944 = g[280];
    const double C31015 = g[281];
    const double C31058 = g[282];
    const double C31554 = g[283];
    const double C31570 = g[284];
    const double C31658 = g[285];
    const double C31816 = g[286];
    const double C31888 = g[287];
    const double C37044 = g[288];
    const double C37060 = g[289];
    const double C37222 = g[290];
    const double C37729 = g[291];
    const double C37862 = g[292];
    const double C38884 = g[293];
    const double C17811 = vrx[0];
    const double C17829 = vrx[1];
    const double C18287 = vrx[2];
    const double C18534 = vrx[3];
    const double C18793 = vrx[4];
    const double C18810 = vrx[5];
    const double C19263 = vrx[6];
    const double C19507 = vrx[7];
    const double C19766 = vrx[8];
    const double C19783 = vrx[9];
    const double C20236 = vrx[10];
    const double C20476 = vrx[11];
    const double C20717 = vrx[12];
    const double C20950 = vrx[13];
    const double C21185 = vrx[14];
    const double C21415 = vrx[15];
    const double C21629 = vrx[16];
    const double C21661 = vrx[17];
    const double C21692 = vrx[18];
    const double C21707 = vrx[19];
    const double C21723 = vrx[20];
    const double C21740 = vrx[21];
    const double C21799 = vrx[22];
    const double C21828 = vrx[23];
    const double C21916 = vrx[24];
    const double C21945 = vrx[25];
    const double C21990 = vrx[26];
    const double C22048 = vrx[27];
    const double C22077 = vrx[28];
    const double C22092 = vrx[29];
    const double C22123 = vrx[30];
    const double C22185 = vrx[31];
    const double C22230 = vrx[32];
    const double C22318 = vrx[33];
    const double C22349 = vrx[34];
    const double C22438 = vrx[35];
    const double C22570 = vrx[36];
    const double C22602 = vrx[37];
    const double C22632 = vrx[38];
    const double C22674 = vrx[39];
    const double C22747 = vrx[40];
    const double C22776 = vrx[41];
    const double C22850 = vrx[42];
    const double C22879 = vrx[43];
    const double C22958 = vrx[44];
    const double C23003 = vrx[45];
    const double C23063 = vrx[46];
    const double C23182 = vrx[47];
    const double C23300 = vrx[48];
    const double C23317 = vrx[49];
    const double C23462 = vrx[50];
    const double C23504 = vrx[51];
    const double C23591 = vrx[52];
    const double C23606 = vrx[53];
    const double C23697 = vrx[54];
    const double C23832 = vrx[55];
    const double C24049 = vrx[56];
    const double C24080 = vrx[57];
    const double C24096 = vrx[58];
    const double C24111 = vrx[59];
    const double C24126 = vrx[60];
    const double C24141 = vrx[61];
    const double C24156 = vrx[62];
    const double C24171 = vrx[63];
    const double C24186 = vrx[64];
    const double C24201 = vrx[65];
    const double C24246 = vrx[66];
    const double C24261 = vrx[67];
    const double C24276 = vrx[68];
    const double C24291 = vrx[69];
    const double C24349 = vrx[70];
    const double C24394 = vrx[71];
    const double C24423 = vrx[72];
    const double C24438 = vrx[73];
    const double C24453 = vrx[74];
    const double C24542 = vrx[75];
    const double C24557 = vrx[76];
    const double C24572 = vrx[77];
    const double C24587 = vrx[78];
    const double C24660 = vrx[79];
    const double C24733 = vrx[80];
    const double C24748 = vrx[81];
    const double C24821 = vrx[82];
    const double C24894 = vrx[83];
    const double C24942 = vry[0];
    const double C24959 = vry[1];
    const double C25408 = vry[2];
    const double C25648 = vry[3];
    const double C25900 = vry[4];
    const double C25916 = vry[5];
    const double C26360 = vry[6];
    const double C26597 = vry[7];
    const double C26849 = vry[8];
    const double C26865 = vry[9];
    const double C27309 = vry[10];
    const double C27542 = vry[11];
    const double C27777 = vry[12];
    const double C28006 = vry[13];
    const double C28235 = vry[14];
    const double C28462 = vry[15];
    const double C28673 = vry[16];
    const double C28703 = vry[17];
    const double C28732 = vry[18];
    const double C28746 = vry[19];
    const double C28761 = vry[20];
    const double C28777 = vry[21];
    const double C28838 = vry[22];
    const double C28867 = vry[23];
    const double C28957 = vry[24];
    const double C28986 = vry[25];
    const double C29031 = vry[26];
    const double C29091 = vry[27];
    const double C29120 = vry[28];
    const double C29135 = vry[29];
    const double C29164 = vry[30];
    const double C29223 = vry[31];
    const double C29270 = vry[32];
    const double C29359 = vry[33];
    const double C29388 = vry[34];
    const double C29476 = vry[35];
    const double C29605 = vry[36];
    const double C29635 = vry[37];
    const double C29665 = vry[38];
    const double C29707 = vry[39];
    const double C29783 = vry[40];
    const double C29812 = vry[41];
    const double C29887 = vry[42];
    const double C29916 = vry[43];
    const double C29991 = vry[44];
    const double C30038 = vry[45];
    const double C30099 = vry[46];
    const double C30216 = vry[47];
    const double C30331 = vry[48];
    const double C30347 = vry[49];
    const double C30494 = vry[50];
    const double C30536 = vry[51];
    const double C30624 = vry[52];
    const double C30639 = vry[53];
    const double C30728 = vry[54];
    const double C30862 = vry[55];
    const double C31077 = vry[56];
    const double C31106 = vry[57];
    const double C31121 = vry[58];
    const double C31136 = vry[59];
    const double C31151 = vry[60];
    const double C31166 = vry[61];
    const double C31181 = vry[62];
    const double C31196 = vry[63];
    const double C31211 = vry[64];
    const double C31226 = vry[65];
    const double C31269 = vry[66];
    const double C31284 = vry[67];
    const double C31299 = vry[68];
    const double C31314 = vry[69];
    const double C31371 = vry[70];
    const double C31414 = vry[71];
    const double C31443 = vry[72];
    const double C31458 = vry[73];
    const double C31473 = vry[74];
    const double C31559 = vry[75];
    const double C31575 = vry[76];
    const double C31590 = vry[77];
    const double C31605 = vry[78];
    const double C31677 = vry[79];
    const double C31748 = vry[80];
    const double C31763 = vry[81];
    const double C31835 = vry[82];
    const double C31907 = vry[83];
    const double C31955 = vrz[0];
    const double C31972 = vrz[1];
    const double C32421 = vrz[2];
    const double C32661 = vrz[3];
    const double C32913 = vrz[4];
    const double C32929 = vrz[5];
    const double C33373 = vrz[6];
    const double C33610 = vrz[7];
    const double C33862 = vrz[8];
    const double C33878 = vrz[9];
    const double C34322 = vrz[10];
    const double C34555 = vrz[11];
    const double C34790 = vrz[12];
    const double C35019 = vrz[13];
    const double C35248 = vrz[14];
    const double C35475 = vrz[15];
    const double C35686 = vrz[16];
    const double C35716 = vrz[17];
    const double C35745 = vrz[18];
    const double C35759 = vrz[19];
    const double C35774 = vrz[20];
    const double C35790 = vrz[21];
    const double C35849 = vrz[22];
    const double C35878 = vrz[23];
    const double C35966 = vrz[24];
    const double C35995 = vrz[25];
    const double C36040 = vrz[26];
    const double C36098 = vrz[27];
    const double C36127 = vrz[28];
    const double C36142 = vrz[29];
    const double C36171 = vrz[30];
    const double C36230 = vrz[31];
    const double C36275 = vrz[32];
    const double C36363 = vrz[33];
    const double C36392 = vrz[34];
    const double C36479 = vrz[35];
    const double C36607 = vrz[36];
    const double C36637 = vrz[37];
    const double C36667 = vrz[38];
    const double C36709 = vrz[39];
    const double C36782 = vrz[40];
    const double C36811 = vrz[41];
    const double C36885 = vrz[42];
    const double C36914 = vrz[43];
    const double C36989 = vrz[44];
    const double C37034 = vrz[45];
    const double C37096 = vrz[46];
    const double C37212 = vrz[47];
    const double C37327 = vrz[48];
    const double C37343 = vrz[49];
    const double C37487 = vrz[50];
    const double C37529 = vrz[51];
    const double C37616 = vrz[52];
    const double C37631 = vrz[53];
    const double C37719 = vrz[54];
    const double C37852 = vrz[55];
    const double C38064 = vrz[56];
    const double C38093 = vrz[57];
    const double C38108 = vrz[58];
    const double C38123 = vrz[59];
    const double C38138 = vrz[60];
    const double C38153 = vrz[61];
    const double C38168 = vrz[62];
    const double C38183 = vrz[63];
    const double C38198 = vrz[64];
    const double C38213 = vrz[65];
    const double C38256 = vrz[66];
    const double C38271 = vrz[67];
    const double C38286 = vrz[68];
    const double C38301 = vrz[69];
    const double C38358 = vrz[70];
    const double C38401 = vrz[71];
    const double C38430 = vrz[72];
    const double C38445 = vrz[73];
    const double C38460 = vrz[74];
    const double C38545 = vrz[75];
    const double C38560 = vrz[76];
    const double C38575 = vrz[77];
    const double C38590 = vrz[78];
    const double C38661 = vrz[79];
    const double C38732 = vrz[80];
    const double C38747 = vrz[81];
    const double C38818 = vrz[82];
    const double C38890 = vrz[83];
    const double C17808 = 2 * q;
    const double C39148 = C23300 / q;
    const double C39147 = C24660 * p;
    const double C39146 = 3 * C22776;
    const double C39145 = C24587 * p;
    const double C39144 = C24572 * p;
    const double C39143 = C24453 * p;
    const double C39142 = C24438 * p;
    const double C39141 = C24423 * p;
    const double C39140 = C22602 / q;
    const double C39139 = C24349 * p;
    const double C39138 = 3 * C21945;
    const double C39137 = C24291 * p;
    const double C39136 = C24276 * p;
    const double C39135 = C24261 * p;
    const double C39134 = C22092 / q;
    const double C39133 = C24246 * p;
    const double C39132 = 3 * C21828;
    const double C39131 = C24201 * p;
    const double C39130 = C24186 * p;
    const double C39129 = C24171 * p;
    const double C39128 = C24156 * p;
    const double C39127 = C24141 * p;
    const double C39126 = C24126 * p;
    const double C39125 = C24111 * p;
    const double C39123 = C23697 * p;
    const double C39121 = C23606 * p;
    const double C39120 = C23591 * p;
    const double C39117 = C23462 * p;
    const double C39116 = C23317 * p;
    const double C39115 = C23300 * p;
    const double C39112 = C20236 * p;
    const double C39111 = C20950 / q;
    const double C39110 = C23182 * p;
    const double C39109 = C21415 / q;
    const double C39107 = C23063 * p;
    const double C39106 = C23003 * p;
    const double C39103 = C22879 * p;
    const double C39102 = C21415 * p;
    const double C39101 = C22850 * p;
    const double C39097 = C22776 * p;
    const double C39096 = C19507 * p;
    const double C39095 = C22747 * p;
    const double C39094 = C22602 * p;
    const double C39093 = C22632 * p;
    const double C39092 = C22570 * p;
    const double C39089 = C19766 * p;
    const double C39088 = C22438 * p;
    const double C39085 = C21185 / q;
    const double C39084 = C22318 * p;
    const double C39083 = C20950 * p;
    const double C39082 = C18793 * p;
    const double C39079 = C22230 * p;
    const double C39078 = C22185 * p;
    const double C39074 = C20717 / q;
    const double C39073 = C22092 * p;
    const double C39072 = C22077 * p;
    const double C39071 = C21185 * p;
    const double C39070 = C22048 * p;
    const double C39069 = C20717 * p;
    const double C39068 = C21990 * p;
    const double C39065 = C21945 * p;
    const double C39064 = C18534 * p;
    const double C39063 = C21916 * p;
    const double C39062 = C21740 * p;
    const double C39061 = C21828 * p;
    const double C39060 = C18287 * p;
    const double C39059 = C21799 * p;
    const double C39058 = C21723 * p;
    const double C38902 = de * zCD;
    const double C38901 = be * zAB;
    const double C38898 = de * yCD;
    const double C38897 = be * yAB;
    const double C38894 = de * xCD;
    const double C38893 = be * xAB;
    const double C39512 = C30331 / q;
    const double C39511 = C31677 * p;
    const double C39510 = 3 * C29812;
    const double C39509 = C31605 * p;
    const double C39508 = C31590 * p;
    const double C39507 = C31473 * p;
    const double C39506 = C31458 * p;
    const double C39505 = C31443 * p;
    const double C39504 = C29635 / q;
    const double C39503 = C31371 * p;
    const double C39502 = 3 * C28986;
    const double C39501 = C31314 * p;
    const double C39500 = C31299 * p;
    const double C39499 = C31284 * p;
    const double C39498 = C29135 / q;
    const double C39497 = C31269 * p;
    const double C39496 = 3 * C28867;
    const double C39495 = C31226 * p;
    const double C39494 = C31211 * p;
    const double C39493 = C31196 * p;
    const double C39492 = C31181 * p;
    const double C39491 = C31166 * p;
    const double C39490 = C31151 * p;
    const double C39489 = C31136 * p;
    const double C39487 = C30728 * p;
    const double C39485 = C30639 * p;
    const double C39484 = C30624 * p;
    const double C39481 = C30494 * p;
    const double C39480 = C30347 * p;
    const double C39479 = C30331 * p;
    const double C39476 = C27309 * p;
    const double C39475 = C28006 / q;
    const double C39474 = C30216 * p;
    const double C39473 = C28462 / q;
    const double C39471 = C30099 * p;
    const double C39470 = C30038 * p;
    const double C39467 = C29916 * p;
    const double C39466 = C28462 * p;
    const double C39465 = C29887 * p;
    const double C39461 = C29812 * p;
    const double C39460 = C26597 * p;
    const double C39459 = C29783 * p;
    const double C39458 = C29635 * p;
    const double C39457 = C29665 * p;
    const double C39456 = C29605 * p;
    const double C39453 = C26849 * p;
    const double C39452 = C29476 * p;
    const double C39449 = C28235 / q;
    const double C39448 = C29359 * p;
    const double C39447 = C28006 * p;
    const double C39446 = C25900 * p;
    const double C39443 = C29270 * p;
    const double C39442 = C29223 * p;
    const double C39438 = C27777 / q;
    const double C39437 = C29135 * p;
    const double C39436 = C29120 * p;
    const double C39435 = C28235 * p;
    const double C39434 = C29091 * p;
    const double C39433 = C27777 * p;
    const double C39432 = C29031 * p;
    const double C39429 = C28986 * p;
    const double C39428 = C25648 * p;
    const double C39427 = C28957 * p;
    const double C39426 = C28777 * p;
    const double C39425 = C28867 * p;
    const double C39424 = C25408 * p;
    const double C39423 = C28838 * p;
    const double C39422 = C28761 * p;
    const double C39872 = C37327 / q;
    const double C39871 = C38661 * p;
    const double C39870 = 3 * C36811;
    const double C39869 = C38590 * p;
    const double C39868 = C38575 * p;
    const double C39867 = C38460 * p;
    const double C39866 = C38445 * p;
    const double C39865 = C38430 * p;
    const double C39864 = C36637 / q;
    const double C39863 = C38358 * p;
    const double C39862 = 3 * C35995;
    const double C39861 = C38301 * p;
    const double C39860 = C38286 * p;
    const double C39859 = C38271 * p;
    const double C39858 = C36142 / q;
    const double C39857 = C38256 * p;
    const double C39856 = 3 * C35878;
    const double C39855 = C38213 * p;
    const double C39854 = C38198 * p;
    const double C39853 = C38183 * p;
    const double C39852 = C38168 * p;
    const double C39851 = C38153 * p;
    const double C39850 = C38138 * p;
    const double C39849 = C38123 * p;
    const double C39847 = C37719 * p;
    const double C39845 = C37631 * p;
    const double C39844 = C37616 * p;
    const double C39841 = C37487 * p;
    const double C39840 = C37343 * p;
    const double C39839 = C37327 * p;
    const double C39836 = C34322 * p;
    const double C39835 = C35019 / q;
    const double C39834 = C37212 * p;
    const double C39833 = C35475 / q;
    const double C39831 = C37096 * p;
    const double C39830 = C37034 * p;
    const double C39827 = C36914 * p;
    const double C39826 = C35475 * p;
    const double C39825 = C36885 * p;
    const double C39821 = C36811 * p;
    const double C39820 = C33610 * p;
    const double C39819 = C36782 * p;
    const double C39818 = C36637 * p;
    const double C39817 = C36667 * p;
    const double C39816 = C36607 * p;
    const double C39813 = C33862 * p;
    const double C39812 = C36479 * p;
    const double C39809 = C35248 / q;
    const double C39808 = C36363 * p;
    const double C39807 = C35019 * p;
    const double C39806 = C32913 * p;
    const double C39803 = C36275 * p;
    const double C39802 = C36230 * p;
    const double C39798 = C34790 / q;
    const double C39797 = C36142 * p;
    const double C39796 = C36127 * p;
    const double C39795 = C35248 * p;
    const double C39794 = C36098 * p;
    const double C39793 = C34790 * p;
    const double C39792 = C36040 * p;
    const double C39789 = C35995 * p;
    const double C39788 = C32661 * p;
    const double C39787 = C35966 * p;
    const double C39786 = C35790 * p;
    const double C39785 = C35878 * p;
    const double C39784 = C32421 * p;
    const double C39783 = C35849 * p;
    const double C39782 = C35774 * p;
    const double C39124 = C23504 / C17808;
    const double C39122 = C23606 / C17808;
    const double C39114 = C23317 / C17808;
    const double C39113 = C23300 / C17808;
    const double C39108 = C22776 / C17808;
    const double C39105 = C22879 / C17808;
    const double C39104 = C22674 / C17808;
    const double C39091 = C22602 / C17808;
    const double C39090 = C22570 / C17808;
    const double C39087 = C21945 / C17808;
    const double C39086 = C22349 / C17808;
    const double C39077 = C22092 / C17808;
    const double C39076 = C21828 / C17808;
    const double C39075 = C22123 / C17808;
    const double C39057 = C21740 / C17808;
    const double C39056 = C21723 / C17808;
    const double C39055 = C21707 / C17808;
    const double C39054 = C21661 / C17808;
    const double C39053 = C21629 / C17808;
    const double C39052 = C21415 / C17808;
    const double C39046 = C21185 / C17808;
    const double C39042 = C20950 / C17808;
    const double C39029 = C20717 / C17808;
    const double C39027 = C20476 / C17808;
    const double C39021 = C20236 / C17808;
    const double C39000 = C19783 / C17808;
    const double C38999 = C19766 / C17808;
    const double C38984 = C19507 / C17808;
    const double C38979 = C19263 / C17808;
    const double C38958 = C18810 / C17808;
    const double C38957 = C18793 / C17808;
    const double C38943 = C18534 / C17808;
    const double C38921 = C18287 / C17808;
    const double C38896 = C17829 / C17808;
    const double C38895 = C17811 / C17808;
    const double C39488 = C30536 / C17808;
    const double C39486 = C30639 / C17808;
    const double C39478 = C30347 / C17808;
    const double C39477 = C30331 / C17808;
    const double C39472 = C29812 / C17808;
    const double C39469 = C29916 / C17808;
    const double C39468 = C29707 / C17808;
    const double C39455 = C29635 / C17808;
    const double C39454 = C29605 / C17808;
    const double C39451 = C28986 / C17808;
    const double C39450 = C29388 / C17808;
    const double C39441 = C29135 / C17808;
    const double C39440 = C28867 / C17808;
    const double C39439 = C29164 / C17808;
    const double C39421 = C28777 / C17808;
    const double C39420 = C28761 / C17808;
    const double C39419 = C28746 / C17808;
    const double C39418 = C28703 / C17808;
    const double C39417 = C28673 / C17808;
    const double C39416 = C28462 / C17808;
    const double C39410 = C28235 / C17808;
    const double C39406 = C28006 / C17808;
    const double C39393 = C27777 / C17808;
    const double C39391 = C27542 / C17808;
    const double C39385 = C27309 / C17808;
    const double C39364 = C26865 / C17808;
    const double C39363 = C26849 / C17808;
    const double C39348 = C26597 / C17808;
    const double C39343 = C26360 / C17808;
    const double C39322 = C25916 / C17808;
    const double C39321 = C25900 / C17808;
    const double C39307 = C25648 / C17808;
    const double C39285 = C25408 / C17808;
    const double C39264 = C24959 / C17808;
    const double C39263 = C24942 / C17808;
    const double C39848 = C37529 / C17808;
    const double C39846 = C37631 / C17808;
    const double C39838 = C37343 / C17808;
    const double C39837 = C37327 / C17808;
    const double C39832 = C36811 / C17808;
    const double C39829 = C36914 / C17808;
    const double C39828 = C36709 / C17808;
    const double C39815 = C36637 / C17808;
    const double C39814 = C36607 / C17808;
    const double C39811 = C35995 / C17808;
    const double C39810 = C36392 / C17808;
    const double C39801 = C36142 / C17808;
    const double C39800 = C35878 / C17808;
    const double C39799 = C36171 / C17808;
    const double C39781 = C35790 / C17808;
    const double C39780 = C35774 / C17808;
    const double C39779 = C35759 / C17808;
    const double C39778 = C35716 / C17808;
    const double C39777 = C35686 / C17808;
    const double C39776 = C35475 / C17808;
    const double C39770 = C35248 / C17808;
    const double C39766 = C35019 / C17808;
    const double C39753 = C34790 / C17808;
    const double C39751 = C34555 / C17808;
    const double C39745 = C34322 / C17808;
    const double C39724 = C33878 / C17808;
    const double C39723 = C33862 / C17808;
    const double C39708 = C33610 / C17808;
    const double C39703 = C33373 / C17808;
    const double C39682 = C32929 / C17808;
    const double C39681 = C32913 / C17808;
    const double C39667 = C32661 / C17808;
    const double C39645 = C32421 / C17808;
    const double C39624 = C31972 / C17808;
    const double C39623 = C31955 / C17808;
    const double C39258 = C39147 / q;
    const double C39257 = C39146 / C17808;
    const double C39256 = C39145 / q;
    const double C39255 = C39144 / q;
    const double C39254 = C39143 / q;
    const double C39253 = C39142 / q;
    const double C39252 = C39139 / q;
    const double C39251 = C39138 / C17808;
    const double C39250 = C39137 / q;
    const double C39249 = C39136 / q;
    const double C39248 = C39135 / q;
    const double C39247 = C39133 / q;
    const double C39246 = C39132 / C17808;
    const double C39245 = C39130 / q;
    const double C39244 = C39129 / q;
    const double C39243 = C39128 / q;
    const double C39242 = C39127 / q;
    const double C39241 = C39126 / q;
    const double C39240 = C39125 / q;
    const double C39238 = C39120 / q;
    const double C39237 = C39117 / q;
    const double C39236 = C39116 / q;
    const double C39239 = C39115 / q;
    const double C39234 = C39110 / q;
    const double C39232 = C39106 / q;
    const double C39235 = C39101 / q;
    const double C39229 = C39097 / q;
    const double C39228 = C39095 / q;
    const double C39233 = C39094 / q;
    const double C39227 = C39093 / q;
    const double C39226 = C39092 / q;
    const double C39225 = C39089 / q;
    const double C39224 = C39088 / q;
    const double C39223 = C39084 / q;
    const double C39222 = C39082 / q;
    const double C39220 = C39079 / q;
    const double C39219 = C39078 / q;
    const double C39218 = C39065 / q;
    const double C39217 = C39063 / q;
    const double C39216 = C39061 / q;
    const double C39215 = C39059 / q;
    const double C39151 = C38901 + C38902;
    const double C39150 = C38897 + C38898;
    const double C39149 = C38893 + C38894;
    const double C39618 = C39511 / q;
    const double C39617 = C39510 / C17808;
    const double C39616 = C39509 / q;
    const double C39615 = C39508 / q;
    const double C39614 = C39507 / q;
    const double C39613 = C39506 / q;
    const double C39612 = C39503 / q;
    const double C39611 = C39502 / C17808;
    const double C39610 = C39501 / q;
    const double C39609 = C39500 / q;
    const double C39608 = C39499 / q;
    const double C39607 = C39497 / q;
    const double C39606 = C39496 / C17808;
    const double C39605 = C39494 / q;
    const double C39604 = C39493 / q;
    const double C39603 = C39492 / q;
    const double C39602 = C39491 / q;
    const double C39601 = C39490 / q;
    const double C39600 = C39489 / q;
    const double C39599 = C39487 / q;
    const double C39598 = C39485 / q;
    const double C39597 = C39484 / q;
    const double C39595 = C39479 / q;
    const double C39594 = C39476 / q;
    const double C39593 = C39474 / q;
    const double C39592 = C39470 / q;
    const double C39588 = C39461 / q;
    const double C39587 = C39459 / q;
    const double C39585 = C39452 / q;
    const double C39584 = C39448 / q;
    const double C39580 = C39443 / q;
    const double C39579 = C39442 / q;
    const double C39583 = C39437 / q;
    const double C39586 = C39436 / q;
    const double C39578 = C39432 / q;
    const double C39576 = C39429 / q;
    const double C39575 = C39427 / q;
    const double C39574 = C39425 / q;
    const double C39573 = C39424 / q;
    const double C39572 = C39423 / q;
    const double C39571 = C39422 / q;
    const double C39970 = C39871 / q;
    const double C39969 = C39870 / C17808;
    const double C39968 = C39869 / q;
    const double C39967 = C39868 / q;
    const double C39966 = C39867 / q;
    const double C39965 = C39866 / q;
    const double C39964 = C39865 / q;
    const double C39963 = C39863 / q;
    const double C39962 = C39862 / C17808;
    const double C39961 = C39861 / q;
    const double C39960 = C39860 / q;
    const double C39959 = C39859 / q;
    const double C39958 = C39857 / q;
    const double C39957 = C39856 / C17808;
    const double C39956 = C39855 / q;
    const double C39955 = C39854 / q;
    const double C39954 = C39853 / q;
    const double C39953 = C39852 / q;
    const double C39952 = C39851 / q;
    const double C39951 = C39850 / q;
    const double C39950 = C39849 / q;
    const double C39949 = C39834 / q;
    const double C39948 = C39831 / q;
    const double C39947 = C39830 / q;
    const double C39946 = C39827 / q;
    const double C39945 = C39825 / q;
    const double C39942 = C39821 / q;
    const double C39941 = C39820 / q;
    const double C39940 = C39819 / q;
    const double C39939 = C39818 / q;
    const double C39938 = C39812 / q;
    const double C39937 = C39808 / q;
    const double C39935 = C39803 / q;
    const double C39934 = C39802 / q;
    const double C39933 = C39797 / q;
    const double C39932 = C39796 / q;
    const double C39931 = C39794 / q;
    const double C39930 = C39789 / q;
    const double C39929 = C39788 / q;
    const double C39928 = C39787 / q;
    const double C39927 = C39786 / q;
    const double C39926 = C39785 / q;
    const double C39925 = C39783 / q;
    const double C18054 = -(C17811 * C39151 + C39062) / q;
    const double C18055 = C38895 - (C21740 * C39151) / q - C39217;
    const double C18070 = -(C17829 * C39151 + C39064) / q;
    const double C18071 = C38896 - (C18534 * C39151) / q - C39218;
    const double C18208 = -(C21629 * C39151 + C39070) / q;
    const double C18224 = -(C21661 * C39151 + C39071) / q;
    const double C18239 = -(C21723 * C39151 + C39072) / q;
    const double C18254 = -(C18287 * C39151 + C39073) / q;
    const double C18408 = C38921 - (C22092 * C39151) / q - C39220;
    const double C18486 = -(C20717 * C39151 + C39083) / q;
    const double C18501 = -(C21828 * C39151 + C39084) / q;
    const double C18654 = C18534 / q - (C21945 * C39151) / q - C39224;
    const double C18732 = C39054 - (C21185 * C39151) / q - C39225;
    const double C19034 = -(C18793 * C39151 + C39094) / q;
    const double C19035 = C38957 - (C22602 * C39151) / q - C39228;
    const double C19050 = -(C18810 * C39151 + C39096) / q;
    const double C19051 = C38958 - (C19507 * C39151) / q - C39229;
    const double C19215 = -(C22570 * C39151 + C39101) / q;
    const double C19230 = -(C22123 * C39151 + C39102) / q;
    const double C19231 = -(C19263 * C39151 + C39103) / q;
    const double C19384 = C38979 - (C22879 * C39151) / q - C39232;
    const double C19475 = -(C22674 * C39151 + C39107) / q;
    const double C19628 = C19507 / q - (C22776 * C39151) / q - C39234;
    const double C19719 = C39075 - (C21415 * C39151) / q - C39112 / q;
    const double C20006 = C39085 - (C19766 * C39151) / q - C39236;
    const double C20007 =
        (3 * C19766) / C17808 - (C23317 * C39151) / q - C39237;
    const double C20022 = C39055 - (C22349 * C39151) / q - (C19783 * p) / q;
    const double C20023 = C22349 / q - (C19783 * C39151) / q - (C20476 * p) / q;
    const double C20024 =
        (3 * C19783) / C17808 - (C20476 * C39151) / q - (C23504 * p) / q;
    const double C20189 = C39111 - (C23300 * C39151) / q - C39238;
    const double C20204 = C39109 - (C20236 * C39151) / q - C39121 / q;
    const double C20355 =
        (3 * C20236) / C17808 - (C23606 * C39151) / q - C39123 / q;
    const double C20596 =
        (2 * C20476) / q - (C23504 * C39151) / q - (C23832 * p) / q;
    const double C20830 = C39029 - (C20950 * C39151) / q - C39239;
    const double C21873 = C39053 - (C22048 * C39151) / q - C39243;
    const double C21960 = C39056 - (C22077 * C39151) / q - C39244;
    const double C21975 = C21740 / q - (C21916 * C39151) / q - C39245;
    const double C22019 = -(C21990 * C39151 + C39131) / q;
    const double C22245 = C39076 - (C22318 * C39151) / q - C39249;
    const double C22260 = C39134 - (C22230 * C39151) / q - C39250;
    const double C22289 = -(C21799 * C39151 + C39127) / q;
    const double C22453 = C39251 - (C22438 * C39151) / q - C39252;
    const double C22791 = C39090 - (C22850 * C39151) / q - C39253;
    const double C22820 = C39140 - (C22747 * C39151) / q - C39254;
    const double C22835 = -(C22185 * C39151 + C39135) / q;
    const double C23018 = C39104 - (C23063 * C39151) / q - C39255;
    const double C23033 = C22879 / q - (C23003 * C39151) / q - C39256;
    const double C23048 = -(C22632 * C39151 + C39141) / q;
    const double C23197 = C39257 - (C23182 * C39151) / q - C39258;
    const double C23519 =
        (3 * C23300) / C17808 - (C23591 * C39151) / q - (C24733 * p) / q;
    const double C23534 =
        (2 * C23317) / q - (C23462 * C39151) / q - (C24748 * p) / q;
    const double C23548 = -(C21707 * C39151 + C22349 * p) / q;
    const double C23712 =
        (2 * C23606) / q - (C23697 * C39151) / q - (C24821 * p) / q;
    const double C23847 =
        (5 * C23504) / C17808 - (C23832 * C39151) / q - (C24894 * p) / q;
    const double C25182 = -(C24942 * C39151 + C39426) / q;
    const double C25198 = -(C24959 * C39151 + C39428) / q;
    const double C25332 = -(C28673 * C39151 + C39434) / q;
    const double C25347 = -(C28703 * C39151 + C39435) / q;
    const double C25362 = -(C28761 * C39151 + C39436) / q;
    const double C25377 = -(C25408 * C39151 + C39437) / q;
    const double C25602 = -(C27777 * C39151 + C39447) / q;
    const double C25617 = -(C28867 * C39151 + C39448) / q;
    const double C25841 = C39418 - (C28235 * C39151) / q - C39453 / q;
    const double C26138 = -(C25900 * C39151 + C39458) / q;
    const double C26154 = -(C25916 * C39151 + C39460) / q;
    const double C26314 = -(C29605 * C39151 + C39465) / q;
    const double C26329 = -(C29164 * C39151 + C39466) / q;
    const double C26330 = -(C26360 * C39151 + C39467) / q;
    const double C26567 = -(C29707 * C39151 + C39471) / q;
    const double C27086 = C39449 - (C26849 * C39151) / q - C39480 / q;
    const double C27087 =
        (3 * C26849) / C17808 - (C30347 * C39151) / q - C39481 / q;
    const double C27102 = C39419 - (C29388 * C39151) / q - (C26865 * p) / q;
    const double C27103 = C29388 / q - (C26865 * C39151) / q - (C27542 * p) / q;
    const double C27104 =
        (3 * C26865) / C17808 - (C27542 * C39151) / q - (C30536 * p) / q;
    const double C27660 =
        (2 * C27542) / q - (C30536 * C39151) / q - (C30862 * p) / q;
    const double C29061 = -(C29031 * C39151 + C39495) / q;
    const double C29330 = -(C28838 * C39151 + C39491) / q;
    const double C29872 = -(C29223 * C39151 + C39499) / q;
    const double C30084 = -(C29665 * C39151 + C39505) / q;
    const double C30551 =
        (3 * C30331) / C17808 - (C30624 * C39151) / q - (C31748 * p) / q;
    const double C30566 =
        (2 * C30347) / q - (C30494 * C39151) / q - (C31763 * p) / q;
    const double C30580 = -(C28746 * C39151 + C29388 * p) / q;
    const double C30743 =
        (2 * C30639) / q - (C30728 * C39151) / q - (C31835 * p) / q;
    const double C30877 =
        (5 * C30536) / C17808 - (C30862 * C39151) / q - (C31907 * p) / q;
    const double C32360 =
        (C21703 * be) / q - (C35716 * C39151) / q - C39795 / q;
    const double C32615 =
        (C22119 * be) / q - (C34790 * C39151) / q - C39807 / q;
    const double C32854 =
        (C22345 * be) / q - (C35248 * C39151) / q + C39778 - C39813 / q;
    const double C33342 =
        (C23887 * be) / q - (C36171 * C39151) / q - C39826 / q;
    const double C33817 =
        (C23944 * be) / q - (C35475 * C39151) / q + C39799 - C39836 / q;
    const double C34099 =
        (C23251 * be) / q - (C33862 * C39151) / q + C39809 - C39840 / q;
    const double C34100 = (C23753 * be) / q - (C37343 * C39151) / q +
                          (3 * C33862) / C17808 - C39841 / q;
    const double C34115 = (C23266 * be) / q - (C33878 * C39151) / q +
                          C36392 / q - (C34555 * p) / q;
    const double C34116 =
        (C24002 * be) / q - (C36392 * C39151) / q + C39779 - (C33878 * p) / q;
    const double C34117 = (C23738 * be) / q - (C34555 * C39151) / q +
                          (3 * C33878) / C17808 - (C37529 * p) / q;
    const double C34277 =
        (C23633 * be) / q - (C37327 * C39151) / q + C39835 - C39844 / q;
    const double C34292 =
        (C23618 * be) / q - (C34322 * C39151) / q + C39833 - C39845 / q;
    const double C34439 = (C24774 * be) / q - (C37631 * C39151) / q +
                          (3 * C34322) / C17808 - C39847 / q;
    const double C34673 = (C24833 * be) / q - (C37529 * C39151) / q +
                          (2 * C34555) / q - (C37852 * p) / q;
    const double C34903 =
        (C23929 * be) / q - (C35019 * C39151) / q + C39753 - C39839 / q;
    const double C37544 = (C24789 * be) / q - (C37616 * C39151) / q +
                          (3 * C37327) / C17808 - (C38732 * p) / q;
    const double C37559 = (C24848 * be) / q - (C37487 * C39151) / q +
                          (2 * C37343) / q - (C38747 * p) / q;
    const double C37573 =
        (C24061 * be) / q - (C35759 * C39151) / q - (C36392 * p) / q;
    const double C37735 = (C31888 * be) / q - (C37719 * C39151) / q +
                          (2 * C37631) / q - (C38818 * p) / q;
    const double C37868 = (C38884 * be) / q - (C37852 * C39151) / q +
                          (5 * C37529) / C17808 - (C38890 * p) / q;
    const double C17933 = -(C17811 * C39150 + C39058) / q;
    const double C17934 = C38895 - (C21723 * C39150) / q - C39215;
    const double C17949 = -(C17829 * C39150 + C39060) / q;
    const double C17950 = C38896 - (C18287 * C39150) / q - C39216;
    const double C18145 = -(C21629 * C39150 + C39068) / q;
    const double C18161 = -(C21661 * C39150 + C39069) / q;
    const double C18348 = C18287 / q - (C21828 * C39150) / q - C39219;
    const double C18454 = C39054 - (C20717 * C39150) / q - C39222;
    const double C18594 = -(C18534 * C39150 + C39073) / q;
    const double C18595 = C38943 - (C22092 * C39150) / q - C39223;
    const double C18699 = -(C21185 * C39150 + C39083) / q;
    const double C18700 = -(C21740 * C39150 + C39072) / q;
    const double C18913 = C39074 - (C18793 * C39150) / q - C39226;
    const double C18914 =
        (3 * C18793) / C17808 - (C22570 * C39150) / q - C39227;
    const double C18929 = C39055 - (C22123 * C39150) / q - (C18810 * p) / q;
    const double C18930 = C22123 / q - (C18810 * C39150) / q - (C19263 * p) / q;
    const double C18931 =
        (3 * C18810) / C17808 - (C19263 * C39150) / q - (C22674 * p) / q;
    const double C19324 =
        (2 * C19263) / q - (C22674 * C39150) / q - (C22958 * p) / q;
    const double C19567 = C39086 - (C21415 * C39150) / q - C39096 / q;
    const double C19568 = C39109 - (C19507 * C39150) / q - C39103 / q;
    const double C19569 =
        (3 * C19507) / C17808 - (C22879 * C39150) / q - C39107 / q;
    const double C19673 = C39111 - (C22602 * C39150) / q - C39235;
    const double C19886 = -(C19766 * C39150 + C39115) / q;
    const double C19887 = C38999 - (C23300 * C39150) / q - C39228;
    const double C19902 = -(C19783 * C39150 + C39112) / q;
    const double C19903 = C39000 - (C20236 * C39150) / q - C39229;
    const double C20099 = -(C21945 * C39150 + C39079) / q;
    const double C20296 = C20236 / q - (C22776 * C39150) / q - C39232;
    const double C20536 = -(C20476 * C39150 + C39121) / q;
    const double C20537 = C39027 - (C23606 * C39150) / q - C39234;
    const double C20641 = -(C23317 * C39150 + C39120) / q;
    const double C21009 = C39046 - (C20950 * C39150) / q - C39233;
    const double C21341 = -(C22349 * C39150 + C39102) / q;
    const double C21756 = C39053 - (C21990 * C39150) / q - C39240;
    const double C21843 = C21723 / q - (C21799 * C39150) / q - C39241;
    const double C21858 = C39057 - (C22077 * C39150) / q - C39242;
    const double C22200 = C39246 - (C22185 * C39150) / q - C39247;
    const double C22215 = C39134 - (C22318 * C39150) / q - C39248;
    const double C22423 = C39087 - (C22230 * C39150) / q - C39249;
    const double C22689 =
        (2 * C22570) / q - (C22632 * C39150) / q - (C24394 * p) / q;
    const double C22703 = -(C21707 * C39150 + C22123 * p) / q;
    const double C22718 =
        (3 * C22602) / C17808 - (C22850 * C39150) / q - C39141 / q;
    const double C22973 =
        (5 * C22674) / C17808 - (C22958 * C39150) / q - (C24542 * p) / q;
    const double C22988 =
        (2 * C22879) / q - (C23063 * C39150) / q - (C24557 * p) / q;
    const double C23167 = C39257 - (C23003 * C39150) / q - C39255;
    const double C23404 = C39148 - (C22747 * C39150) / q - C39253;
    const double C23419 = C39114 - (C23591 * C39150) / q - C39254;
    const double C23682 = C23606 / q - (C23182 * C39150) / q - C39256;
    const double C23816 = -(C23504 * C39150 + C39123) / q;
    const double C23817 = C39124 - (C23697 * C39150) / q - C39258;
    const double C25287 =
        (C21703 * be) / q - (C28703 * C39150) / q - C39433 / q;
    const double C25572 =
        (C22119 * be) / q - (C27777 * C39150) / q + C39418 - C39446 / q;
    const double C25810 =
        (C22345 * be) / q - (C28235 * C39150) / q - C39447 / q;
    const double C26018 =
        (C22521 * be) / q - (C25900 * C39150) / q + C39438 - C39456 / q;
    const double C26019 = (C22906 * be) / q - (C29605 * C39150) / q +
                          (3 * C25900) / C17808 - C39457 / q;
    const double C26034 = (C22536 * be) / q - (C25916 * C39150) / q +
                          C29164 / q - (C26360 * p) / q;
    const double C26035 =
        (C23887 * be) / q - (C29164 * C39150) / q + C39419 - (C25916 * p) / q;
    const double C26036 = (C22891 * be) / q - (C26360 * C39150) / q +
                          (3 * C25916) / C17808 - (C29707 * p) / q;
    const double C26420 = (C24479 * be) / q - (C29707 * C39150) / q +
                          (2 * C26360) / q - (C29991 * p) / q;
    const double C26656 =
        (C23075 * be) / q - (C26597 * C39150) / q + C39473 - C39467 / q;
    const double C26657 =
        (C23944 * be) / q - (C28462 * C39150) / q + C39450 - C39460 / q;
    const double C26658 = (C24509 * be) / q - (C29916 * C39150) / q +
                          (3 * C26597) / C17808 - C39471 / q;
    const double C26760 =
        (C23090 * be) / q - (C29635 * C39150) / q + C39475 - C39465 / q;
    const double C28064 =
        (C23929 * be) / q - (C28006 * C39150) / q + C39410 - C39458 / q;
    const double C28390 =
        (C24002 * be) / q - (C29388 * C39150) / q - C39466 / q;
    const double C29723 = (C24494 * be) / q - (C29665 * C39150) / q +
                          (2 * C29605) / q - (C31414 * p) / q;
    const double C29738 =
        (C24061 * be) / q - (C28746 * C39150) / q - (C29164 * p) / q;
    const double C29754 = (C24524 * be) / q - (C29887 * C39150) / q +
                          (3 * C29635) / C17808 - C39505 / q;
    const double C30007 = (C31554 * be) / q - (C29991 * C39150) / q +
                          (5 * C29707) / C17808 - (C31559 * p) / q;
    const double C30023 = (C31570 * be) / q - (C30099 * C39150) / q +
                          (2 * C29916) / q - (C31575 * p) / q;
    const double C32075 = -(C31955 * C39150 + C39782) / q;
    const double C32091 = -(C31972 * C39150 + C39784) / q;
    const double C32285 = -(C35686 * C39150 + C39792) / q;
    const double C32300 = -(C35716 * C39150 + C39793) / q;
    const double C32585 = C39778 - (C34790 * C39150) / q - C39806 / q;
    const double C32720 = -(C32661 * C39150 + C39797) / q;
    const double C32823 = -(C35248 * C39150 + C39807) / q;
    const double C32824 = -(C35790 * C39150 + C39796) / q;
    const double C33031 = C39798 - (C32913 * C39150) / q - C39816 / q;
    const double C33032 =
        (3 * C32913) / C17808 - (C36607 * C39150) / q - C39817 / q;
    const double C33047 = C39779 - (C36171 * C39150) / q - (C32929 * p) / q;
    const double C33048 = C36171 / q - (C32929 * C39150) / q - (C33373 * p) / q;
    const double C33049 =
        (3 * C32929) / C17808 - (C33373 * C39150) / q - (C36709 * p) / q;
    const double C33433 =
        (2 * C33373) / q - (C36709 * C39150) / q - (C36989 * p) / q;
    const double C33980 = -(C33862 * C39150 + C39839) / q;
    const double C33996 = -(C33878 * C39150 + C39836) / q;
    const double C34191 = -(C35995 * C39150 + C39803) / q;
    const double C34614 = -(C34555 * C39150 + C39845) / q;
    const double C34717 = -(C37343 * C39150 + C39844) / q;
    const double C35403 = -(C36392 * C39150 + C39826) / q;
    const double C36724 =
        (2 * C36607) / q - (C36667 * C39150) / q - (C38401 * p) / q;
    const double C36738 = -(C35759 * C39150 + C36171 * p) / q;
    const double C37004 =
        (5 * C36709) / C17808 - (C36989 * C39150) / q - (C38545 * p) / q;
    const double C37019 =
        (2 * C36914) / q - (C37096 * C39150) / q - (C38560 * p) / q;
    const double C37836 = -(C37529 * C39150 + C39847) / q;
    const double C17777 = (C21625 * be) / q - (C17811 * C39149) / q +
                          (3 * C17829) / C17808 - (C21629 * p) / q;
    const double C17794 = (C21673 * be) / q - (C17829 * C39149) / q +
                          C21661 / q - (C17811 * p) / q;
    const double C17812 = (C21688 * be) / q - (C21629 * C39149) / q +
                          (2 * C17811) / q - (C21692 * p) / q;
    const double C17828 =
        (C21703 * be) / q - (C21661 * C39149) / q + C39055 - (C17829 * p) / q;
    const double C18270 =
        (C22104 * be) / q - (C18287 * C39149) / q + C39074 - C39058 / q;
    const double C18286 =
        (C22119 * be) / q - (C20717 * C39149) / q + C39075 - C39060 / q;
    const double C18288 = (C22135 * be) / q - (C21723 * C39149) / q +
                          (3 * C18287) / C17808 - C39068 / q;
    const double C18517 =
        (C22330 * be) / q - (C18534 * C39149) / q + C39085 - C39062 / q;
    const double C18533 =
        (C22345 * be) / q - (C21185 * C39149) / q + C39086 - C39064 / q;
    const double C18535 = (C22361 * be) / q - (C21740 * C39149) / q +
                          (3 * C18534) / C17808 - C39070 / q;
    const double C18762 =
        (C22521 * be) / q - (C18793 * C39149) / q + C38958 - C39216;
    const double C18777 = (C22536 * be) / q - (C18810 * C39149) / q - C39222;
    const double C18794 =
        (C22551 * be) / q - (C21828 * C39149) / q + C18793 / q - C39215;
    const double C19247 = (C22891 * be) / q - (C19263 * C39149) / q - C39226;
    const double C19264 =
        (C22906 * be) / q - (C22570 * C39149) / q + C38979 - C39219;
    const double C19491 = (C23075 * be) / q - (C19507 * C39149) / q - C39233;
    const double C19508 =
        (C23090 * be) / q - (C22602 * C39149) / q + C38984 - C39223;
    const double C19735 =
        (C23251 * be) / q - (C19766 * C39149) / q + C39000 - C39218;
    const double C19750 = (C23266 * be) / q - (C19783 * C39149) / q - C39225;
    const double C19767 =
        (C23281 * be) / q - (C21945 * C39149) / q + C19766 / q - C39217;
    const double C20220 = (C23618 * be) / q - (C20236 * C39149) / q - C39239;
    const double C20237 =
        (C23633 * be) / q - (C23300 * C39149) / q + C39021 - C39220;
    const double C20460 = (C23738 * be) / q - (C20476 * C39149) / q - C39236;
    const double C20477 =
        (C23753 * be) / q - (C23317 * C39149) / q + C39027 - C39224;
    const double C20716 =
        (C23887 * be) / q - (C22123 * C39149) / q - C39069 / q;
    const double C20933 =
        (C23929 * be) / q - (C20950 * C39149) / q + C39052 - C39073 / q;
    const double C20949 =
        (C23944 * be) / q - (C21415 * C39149) / q - C39083 / q;
    const double C20951 =
        (C23959 * be) / q - (C22092 * C39149) / q + C39111 - C39072 / q;
    const double C21184 =
        (C24002 * be) / q - (C22349 * C39149) / q - C39071 / q;
    const double C21645 = (C24045 * be) / q - (C21692 * C39149) / q +
                          (5 * C21629) / C17808 - (C24049 * p) / q;
    const double C21660 =
        (C24061 * be) / q - (C21707 * C39149) / q - (C21661 * p) / q;
    const double C21724 = (C24076 * be) / q - (C21990 * C39149) / q +
                          (2 * C21723) / q - (C24080 * p) / q;
    const double C21741 = (C24092 * be) / q - (C22048 * C39149) / q +
                          (2 * C21740) / q - (C24096 * p) / q;
    const double C22154 =
        (C24213 * be) / q - (C21799 * C39149) / q + C39246 - C39240;
    const double C22170 = (C24228 * be) / q - (C22077 * C39149) / q +
                          (3 * C22092) / C17808 - C39131 / q;
    const double C22380 =
        (C24317 * be) / q - (C21916 * C39149) / q + C39251 - C39243;
    const double C22571 =
        (C24361 * be) / q - (C22185 * C39149) / q + C22570 / q - C39241;
    const double C22603 =
        (C24376 * be) / q - (C22318 * C39149) / q + C39140 - C39242;
    const double C22925 = (C24479 * be) / q - (C22674 * C39149) / q - C39227;
    const double C22926 =
        (C24494 * be) / q - (C22632 * C39149) / q + C39104 - C39247;
    const double C22942 = (C24509 * be) / q - (C22879 * C39149) / q - C39235;
    const double C22943 =
        (C24524 * be) / q - (C22850 * C39149) / q + C39105 - C39248;
    const double C23109 = (C24613 * be) / q - (C22776 * C39149) / q - C39228;
    const double C23110 =
        (C24628 * be) / q - (C22747 * C39149) / q + C39108 - C39249;
    const double C23301 =
        (C24672 * be) / q - (C22230 * C39149) / q + C39148 - C39244;
    const double C23318 =
        (C24687 * be) / q - (C22438 * C39149) / q + C23317 / q - C39245;
    const double C23652 = (C24774 * be) / q - (C23606 * C39149) / q - C39238;
    const double C23653 =
        (C24789 * be) / q - (C23591 * C39149) / q + C39122 - C39250;
    const double C23772 = (C24833 * be) / q - (C23504 * C39149) / q - C39237;
    const double C23773 =
        (C24848 * be) / q - (C23462 * C39149) / q + C39124 - C39252;
    const double C24910 =
        (3 * C24959) / C17808 - (C24942 * C39149) / q - (C28673 * p) / q;
    const double C24927 = C28703 / q - (C24959 * C39149) / q - (C24942 * p) / q;
    const double C24943 =
        (2 * C24942) / q - (C28673 * C39149) / q - (C28732 * p) / q;
    const double C24958 = C39419 - (C28703 * C39149) / q - (C24959 * p) / q;
    const double C25632 = C39449 - (C25648 * C39149) / q - C39426 / q;
    const double C25647 = C39450 - (C28235 * C39149) / q - C39428 / q;
    const double C25649 =
        (3 * C25648) / C17808 - (C28777 * C39149) / q - C39434 / q;
    const double C25885 = -(C25916 * C39149 + C39446) / q;
    const double C26345 = -(C26360 * C39149 + C39456) / q;
    const double C26582 = -(C26597 * C39149 + C39458) / q;
    const double C26834 = -(C26865 * C39149 + C39453) / q;
    const double C27294 = -(C27309 * C39149 + C39479) / q;
    const double C27527 = -(C27542 * C39149 + C39480) / q;
    const double C27776 = -(C29164 * C39149 + C39433) / q;
    const double C28005 = -(C28462 * C39149 + C39447) / q;
    const double C28234 = -(C29388 * C39149 + C39435) / q;
    const double C28688 =
        (5 * C28673) / C17808 - (C28732 * C39149) / q - (C31077 * p) / q;
    const double C28702 = -(C28746 * C39149 + C28703 * p) / q;
    const double C28762 =
        (2 * C28761) / q - (C29031 * C39149) / q - (C31106 * p) / q;
    const double C28778 =
        (2 * C28777) / q - (C29091 * C39149) / q - (C31121 * p) / q;
    const double C29208 =
        (3 * C29135) / C17808 - (C29120 * C39149) / q - C39495 / q;
    const double C29959 = -(C29707 * C39149 + C39457) / q;
    const double C29975 = -(C29916 * C39149 + C39465) / q;
    const double C30142 = -(C29812 * C39149 + C39459) / q;
    const double C30682 = -(C30639 * C39149 + C39484) / q;
    const double C30801 = -(C30536 * C39149 + C39481) / q;
    const double C31923 =
        (3 * C31972) / C17808 - (C31955 * C39149) / q - (C35686 * p) / q;
    const double C31940 = C35716 / q - (C31972 * C39149) / q - (C31955 * p) / q;
    const double C31956 =
        (2 * C31955) / q - (C35686 * C39149) / q - (C35745 * p) / q;
    const double C31971 = C39779 - (C35716 * C39149) / q - (C31972 * p) / q;
    const double C32405 = C39798 - (C32421 * C39149) / q - C39782 / q;
    const double C32420 = C39799 - (C34790 * C39149) / q - C39784 / q;
    const double C32422 =
        (3 * C32421) / C17808 - (C35774 * C39149) / q - C39792 / q;
    const double C32898 = -(C32929 * C39149 + C39806) / q;
    const double C33358 = -(C33373 * C39149 + C39816) / q;
    const double C33595 = -(C33610 * C39149 + C39818) / q;
    const double C33847 = -(C33878 * C39149 + C39813) / q;
    const double C34307 = -(C34322 * C39149 + C39839) / q;
    const double C34540 = -(C34555 * C39149 + C39840) / q;
    const double C34789 = -(C36171 * C39149 + C39793) / q;
    const double C35018 = -(C35475 * C39149 + C39807) / q;
    const double C35247 = -(C36392 * C39149 + C39795) / q;
    const double C35701 =
        (5 * C35686) / C17808 - (C35745 * C39149) / q - (C38064 * p) / q;
    const double C35715 = -(C35759 * C39149 + C35716 * p) / q;
    const double C35775 =
        (2 * C35774) / q - (C36040 * C39149) / q - (C38093 * p) / q;
    const double C35791 =
        (2 * C35790) / q - (C36098 * C39149) / q - (C38108 * p) / q;
    const double C36957 = -(C36709 * C39149 + C39817) / q;
    const double C36973 = -(C36914 * C39149 + C39825) / q;
    const double C37139 = -(C36811 * C39149 + C39819) / q;
    const double C37674 = -(C37631 * C39149 + C39844) / q;
    const double C37792 = -(C37529 * C39149 + C39841) / q;
    const double C30847 =
        (C31888 * be) / q - (C30728 * C39150) / q + C39488 - C39618;
    const double C30231 = C39617 - (C30216 * C39151) / q - C39618;
    const double C30068 = C29916 / q - (C30038 * C39151) / q - C39616;
    const double C30713 =
        (C31816 * be) / q - (C30216 * C39150) / q + C30639 / q - C39616;
    const double C30053 = C39468 - (C30099 * C39151) / q - C39615;
    const double C30201 =
        (C31658 * be) / q - (C30038 * C39150) / q + C39617 - C39615;
    const double C29856 = C39504 - (C29783 * C39151) / q - C39614;
    const double C30450 =
        (C24789 * be) / q - (C30624 * C39150) / q + C39478 - C39614;
    const double C29827 = C39454 - (C29887 * C39151) / q - C39613;
    const double C30434 =
        (C24628 * be) / q - (C29783 * C39150) / q + C39512 - C39613;
    const double C30802 = C39488 - (C30494 * C39149) / q - C39612;
    const double C29491 = C39611 - (C29476 * C39151) / q - C39612;
    const double C29300 = C39498 - (C29270 * C39151) / q - C39610;
    const double C30683 = C39486 - (C30624 * C39149) / q - C39610;
    const double C29285 = C39440 - (C29359 * C39151) / q - C39609;
    const double C29461 =
        (C24672 * be) / q - (C29270 * C39150) / q + C39451 - C39609;
    const double C30143 = C39472 - (C29783 * C39149) / q - C39609;
    const double C29255 =
        (C24376 * be) / q - (C29359 * C39150) / q + C39498 - C39608;
    const double C29976 = C39469 - (C29887 * C39149) / q - C39608;
    const double C29960 = C39468 - (C29665 * C39149) / q - C39607;
    const double C29239 =
        (C24361 * be) / q - (C29223 * C39150) / q + C39606 - C39607;
    const double C29016 = C28777 / q - (C28957 * C39151) / q - C39605;
    const double C30348 = C30347 / q - (C29476 * C39149) / q - C39605;
    const double C29001 = C39420 - (C29120 * C39151) / q - C39604;
    const double C30332 = C39512 - (C29270 * C39149) / q - C39604;
    const double C28914 = C39417 - (C29091 * C39151) / q - C39603;
    const double C29417 = C39611 - (C28957 * C39149) / q - C39603;
    const double C28899 =
        (C24228 * be) / q - (C29120 * C39150) / q + C39421 - C39602;
    const double C29636 = C39504 - (C29359 * C39149) / q - C39602;
    const double C28883 =
        (C24213 * be) / q - (C28838 * C39150) / q + C28761 / q - C39601;
    const double C29606 = C29605 / q - (C29223 * C39149) / q - C39601;
    const double C28794 =
        (C24076 * be) / q - (C29031 * C39150) / q + C39417 - C39600;
    const double C29193 = C39606 - (C28838 * C39149) / q - C39600;
    const double C27426 =
        (3 * C27309) / C17808 - (C30639 * C39151) / q - C39599;
    const double C30846 = (C24833 * be) / q - (C30536 * C39150) / q - C39599;
    const double C27279 = C39473 - (C27309 * C39151) / q - C39598;
    const double C27601 = (C23738 * be) / q - (C27542 * C39150) / q - C39598;
    const double C27264 = C39475 - (C30331 * C39151) / q - C39597;
    const double C27704 = (C23753 * be) / q - (C30347 * C39150) / q - C39597;
    const double C26967 = (C23251 * be) / q - (C26849 * C39150) / q - C39595;
    const double C27890 = C39393 - (C28006 * C39151) / q - C39595;
    const double C26804 = C39439 - (C28462 * C39151) / q - C39594;
    const double C26983 = (C23266 * be) / q - (C26865 * C39150) / q - C39594;
    const double C26716 = C26597 / q - (C29812 * C39151) / q - C39593;
    const double C27602 =
        (C24774 * be) / q - (C30639 * C39150) / q + C39391 - C39593;
    const double C26479 = C39343 - (C29916 * C39151) / q - C39592;
    const double C27368 =
        (C24613 * be) / q - (C29812 * C39150) / q + C27309 / q - C39592;
    const double C26155 = C39322 - (C26597 * C39151) / q - C39588;
    const double C26984 =
        (C23618 * be) / q - (C27309 * C39150) / q + C39364 - C39588;
    const double C26139 = C39321 - (C29635 * C39151) / q - C39587;
    const double C26968 =
        (C23633 * be) / q - (C30331 * C39150) / q + C39363 - C39587;
    const double C25766 = C25648 / q - (C28986 * C39151) / q - C39585;
    const double C27543 = C39391 - (C30347 * C39149) / q - C39585;
    const double C25708 =
        (C23959 * be) / q - (C29135 * C39150) / q + C39307 - C39584;
    const double C26598 = C39348 - (C29635 * C39149) / q - C39584;
    const double C25527 = C39285 - (C29135 * C39151) / q - C39580;
    const double C27178 = (C23281 * be) / q - (C28986 * C39150) / q - C39580;
    const double C27310 = C39385 - (C30331 * C39149) / q - C39580;
    const double C25468 =
        (C22551 * be) / q - (C28867 * C39150) / q + C25408 / q - C39579;
    const double C26361 = C39343 - (C29605 * C39149) / q - C39579;
    const double C25707 = (C22330 * be) / q - (C25648 * C39150) / q - C39583;
    const double C27990 = C39416 - (C28006 * C39149) / q - C39583;
    const double C25811 = (C22361 * be) / q - (C28777 * C39150) / q - C39586;
    const double C28007 = C39475 - (C29135 * C39149) / q - C39586;
    const double C25272 = (C21688 * be) / q - (C28673 * C39150) / q - C39578;
    const double C25409 =
        (3 * C25408) / C17808 - (C28761 * C39149) / q - C39578;
    const double C25199 = C39264 - (C25648 * C39151) / q - C39576;
    const double C26819 = C39364 - (C26849 * C39149) / q - C39576;
    const double C25183 = C39263 - (C28777 * C39151) / q - C39575;
    const double C26850 = C26849 / q - (C28986 * C39149) / q - C39575;
    const double C25079 =
        (C22104 * be) / q - (C25408 * C39150) / q + C39264 - C39574;
    const double C25870 = C39322 - (C25900 * C39149) / q - C39574;
    const double C25078 = (C21673 * be) / q - (C24959 * C39150) / q - C39573;
    const double C25407 = C39439 - (C27777 * C39149) / q - C39573;
    const double C25063 =
        (C22135 * be) / q - (C28761 * C39150) / q + C39263 - C39572;
    const double C25901 = C25900 / q - (C28867 * C39149) / q - C39572;
    const double C25062 = (C21625 * be) / q - (C24942 * C39150) / q - C39571;
    const double C25392 = C39438 - (C25408 * C39149) / q - C39571;
    const double C37837 = C39848 - (C37719 * C39150) / q - C39970;
    const double C37228 =
        (C31816 * be) / q - (C37212 * C39151) / q + C39969 - C39970;
    const double C37066 =
        (C31658 * be) / q - (C37034 * C39151) / q + C36914 / q - C39968;
    const double C37704 = C37631 / q - (C37212 * C39150) / q - C39968;
    const double C37050 =
        (C31570 * be) / q - (C37096 * C39151) / q + C39828 - C39967;
    const double C37197 = C39969 - (C37034 * C39150) / q - C39967;
    const double C36855 =
        (C24628 * be) / q - (C36782 * C39151) / q + C39864 - C39966;
    const double C37444 = C39838 - (C37616 * C39150) / q - C39966;
    const double C36826 =
        (C24524 * be) / q - (C36885 * C39151) / q + C39814 - C39965;
    const double C37429 = C39872 - (C36782 * C39150) / q - C39965;
    const double C36753 =
        (3 * C36637) / C17808 - (C36885 * C39150) / q - C39964;
    const double C37081 = (C24494 * be) / q - (C36667 * C39151) / q - C39964;
    const double C37793 = C39848 - (C37487 * C39149) / q - C39963;
    const double C36494 =
        (C24687 * be) / q - (C36479 * C39151) / q + C39962 - C39963;
    const double C36305 =
        (C24672 * be) / q - (C36275 * C39151) / q + C39858 - C39961;
    const double C37675 = C39846 - (C37616 * C39149) / q - C39961;
    const double C36290 =
        (C24376 * be) / q - (C36363 * C39151) / q + C39800 - C39960;
    const double C36464 = C39811 - (C36275 * C39150) / q - C39960;
    const double C37140 = C39832 - (C36782 * C39149) / q - C39960;
    const double C36260 = C39858 - (C36363 * C39150) / q - C39959;
    const double C36870 = (C24361 * be) / q - (C36230 * C39151) / q - C39959;
    const double C36974 = C39829 - (C36885 * C39149) / q - C39959;
    const double C36958 = C39828 - (C36667 * C39149) / q - C39958;
    const double C36245 = C39957 - (C36230 * C39150) / q - C39958;
    const double C36069 = (C24076 * be) / q - (C36040 * C39151) / q - C39956;
    const double C36215 =
        (3 * C36142) / C17808 - (C36127 * C39149) / q - C39956;
    const double C36025 =
        (C24317 * be) / q - (C35966 * C39151) / q + C35790 / q - C39955;
    const double C37344 = C37343 / q - (C36479 * C39149) / q - C39955;
    const double C36010 =
        (C24228 * be) / q - (C36127 * C39151) / q + C39780 - C39954;
    const double C37328 = C39872 - (C36275 * C39149) / q - C39954;
    const double C35923 =
        (C24092 * be) / q - (C36098 * C39151) / q + C39777 - C39953;
    const double C36421 = C39962 - (C35966 * C39149) / q - C39953;
    const double C35908 = C39781 - (C36127 * C39150) / q - C39952;
    const double C36334 = (C24213 * be) / q - (C35849 * C39151) / q - C39952;
    const double C36638 = C39864 - (C36363 * C39149) / q - C39952;
    const double C35893 = C35774 / q - (C35849 * C39150) / q - C39951;
    const double C36608 = C36607 / q - (C36230 * C39149) / q - C39951;
    const double C35806 = C39777 - (C36040 * C39150) / q - C39950;
    const double C36200 = C39957 - (C35849 * C39149) / q - C39950;
    const double C33729 =
        (C24613 * be) / q - (C36811 * C39151) / q + C33610 / q - C39949;
    const double C34615 = C39751 - (C37631 * C39150) / q - C39949;
    const double C33580 = (C24479 * be) / q - (C36709 * C39151) / q - C39948;
    const double C33671 =
        (3 * C33610) / C17808 - (C36914 * C39150) / q - C39948;
    const double C33492 =
        (C24509 * be) / q - (C36914 * C39151) / q + C39703 - C39947;
    const double C34381 = C34322 / q - (C36811 * C39150) / q - C39947;
    const double C33343 = (C22891 * be) / q - (C33373 * C39151) / q - C39946;
    const double C33670 = C39833 - (C33610 * C39150) / q - C39946;
    const double C33327 = (C22906 * be) / q - (C36607 * C39151) / q - C39945;
    const double C33773 = C39835 - (C36637 * C39150) / q - C39945;
    const double C33168 =
        (C23075 * be) / q - (C33610 * C39151) / q + C39682 - C39942;
    const double C33997 = C39724 - (C34322 * C39150) / q - C39942;
    const double C33167 = (C22536 * be) / q - (C32929 * C39151) / q - C39941;
    const double C33669 = C39810 - (C35475 * C39150) / q - C39941;
    const double C33152 =
        (C23090 * be) / q - (C36637 * C39151) / q + C39681 - C39940;
    const double C33981 = C39723 - (C37327 * C39150) / q - C39940;
    const double C33151 = (C22521 * be) / q - (C32913 * C39151) / q - C39939;
    const double C35077 = C39770 - (C35019 * C39150) / q - C39939;
    const double C32779 =
        (C23281 * be) / q - (C35995 * C39151) / q + C32661 / q - C39938;
    const double C34556 = C39751 - (C37343 * C39149) / q - C39938;
    const double C32630 = (C22551 * be) / q - (C35878 * C39151) / q - C39937;
    const double C32721 = C39667 - (C36142 * C39150) / q - C39937;
    const double C33611 = C39708 - (C36637 * C39149) / q - C39937;
    const double C32540 =
        (C23959 * be) / q - (C36142 * C39151) / q + C39645 - C39935;
    const double C34323 = C39745 - (C37327 * C39149) / q - C39935;
    const double C32481 = C32421 / q - (C35878 * C39150) / q - C39934;
    const double C33374 = C39703 - (C36607 * C39149) / q - C39934;
    const double C32390 = (C22104 * be) / q - (C32421 * C39151) / q - C39933;
    const double C35003 = C39776 - (C35019 * C39149) / q - C39933;
    const double C32375 = (C22135 * be) / q - (C35774 * C39151) / q - C39932;
    const double C35020 = C39835 - (C36142 * C39149) / q - C39932;
    const double C32345 = (C21688 * be) / q - (C35686 * C39151) / q - C39931;
    const double C32662 =
        (3 * C32661) / C17808 - (C35790 * C39149) / q - C39931;
    const double C32212 =
        (C22330 * be) / q - (C32661 * C39151) / q + C39624 - C39930;
    const double C33832 = C39724 - (C33862 * C39149) / q - C39930;
    const double C32211 = (C21673 * be) / q - (C31972 * C39151) / q - C39929;
    const double C32660 = C39810 - (C35248 * C39149) / q - C39929;
    const double C32196 =
        (C22361 * be) / q - (C35790 * C39151) / q + C39623 - C39928;
    const double C33863 = C33862 / q - (C35995 * C39149) / q - C39928;
    const double C32195 = (C21625 * be) / q - (C31955 * C39151) / q - C39927;
    const double C32645 = C39809 - (C32661 * C39149) / q - C39927;
    const double C32092 = C39624 - (C32421 * C39150) / q - C39926;
    const double C32883 = C39682 - (C32913 * C39149) / q - C39926;
    const double C32076 = C39623 - (C35774 * C39150) / q - C39925;
    const double C32914 = C32913 / q - (C35878 * C39149) / q - C39925;
    const double C39067 = C18054 / C17808;
    const double C38911 = C18055 * p;
    const double C38939 = C18070 / C17808;
    const double C38950 = C18071 / q;
    const double C38912 = C18071 * p;
    const double C5028 = (C18204 * be) / q - (C18054 * C39149) / q +
                         (3 * C18070) / C17808 - (C18208 * p) / q;
    const double C39040 = C18224 / C17808;
    const double C5029 = (C18220 * be) / q - (C18070 * C39149) / q +
                         C18224 / q - (C18054 * p) / q;
    const double C38917 = C18239 * p;
    const double C38935 = C18254 / q;
    const double C38918 = C18254 * p;
    const double C38932 = C18408 * p;
    const double C38938 = C18486 / q;
    const double C18192 = -(C18224 * C39150 + C18486 * p) / q;
    const double C38940 = C18501 * p;
    const double C38949 = C18654 * p;
    const double C38953 = C18732 / q;
    const double C18039 = C39054 - (C18224 * C39151) / q - (C18732 * p) / q;
    const double C38977 = C19034 * p;
    const double C38970 = C19035 * p;
    const double C38976 = C19050 / C17808;
    const double C38992 = C19051 / q;
    const double C38971 = C19051 * p;
    const double C38978 = C19215 * p;
    const double C39039 = C19230 / C17808;
    const double C5504 = C19230 / q - (C19050 * C39150) / q - (C19231 * p) / q;
    const double C38982 = C19384 * p;
    const double C5648 =
        (3 * C19050) / C17808 - (C19231 * C39150) / q - (C19475 * p) / q;
    const double C38990 = C19628 * p;
    const double C39099 = C19719 * p;
    const double C38995 = C19719 / q;
    const double C39018 = C20006 * p;
    const double C39012 = C20007 * p;
    const double C39051 = C20022 / C17808;
    const double C39017 = C20023 / C17808;
    const double C5902 =
        C20022 / q - (C20023 * C39151) / q + C39000 - (C20024 * p) / q;
    const double C39019 = C20189 * p;
    const double C39020 = C20204 * p;
    const double C39025 = C20355 * p;
    const double C6202 = (3 * C20023) / C17808 - (C20024 * C39151) / q +
                         C39027 - (C20596 * p) / q;
    const double C39044 = C20830 / q;
    const double C39036 = C20830 * p;
    const double C18024 = C39053 - (C18208 * C39151) / q - (C21873 * p) / q;
    const double C39066 = C21960 * p;
    const double C18177 = -(C18208 * C39150 + C22019 * p) / q;
    const double C39080 = C22245 * p;
    const double C39081 = C22260 * p;
    const double C39098 = C22791 * p;
    const double C39100 = C22820 * p;
    const double C19399 = C39104 - (C19475 * C39151) / q - (C23018 * p) / q;
    const double C19414 =
        C19231 / C17808 - (C19384 * C39151) / q + C39105 - (C23033 * p) / q;
    const double C19445 =
        (3 * C19034) / C17808 - (C19215 * C39150) / q - (C23048 * p) / q;
    const double C39118 = C23519 * p;
    const double C20068 = (3 * C20006) / C17808 - (C20007 * C39151) / q +
                          C39114 - (C23534 * p) / q;
    const double C39119 = C23548 / C17808;
    const double C20384 = (3 * C20204) / C17808 - (C20355 * C39151) / q +
                          C39122 - (C23712 * p) / q;
    const double C20625 =
        (2 * C20024) / q - (C20596 * C39151) / q + C39124 - (C23847 * p) / q;
    const double C39431 = C25182 / C17808;
    const double C39303 = C25198 / C17808;
    const double C10225 =
        (3 * C25198) / C17808 - (C25182 * C39149) / q - (C25332 * p) / q;
    const double C39404 = C25347 / C17808;
    const double C10226 = C25347 / q - (C25198 * C39149) / q - (C25182 * p) / q;
    const double C39281 = C25362 * p;
    const double C39299 = C25377 / q;
    const double C39282 = C25377 * p;
    const double C39302 = C25602 / q;
    const double C25317 =
        (C29072 * be) / q - (C25347 * C39150) / q - (C25602 * p) / q;
    const double C39304 = C25617 * p;
    const double C39317 = C25841 / q;
    const double C25167 = C39418 - (C25347 * C39151) / q - (C25841 * p) / q;
    const double C39341 = C26138 * p;
    const double C39340 = C26154 / C17808;
    const double C39342 = C26314 * p;
    const double C39403 = C26329 / C17808;
    const double C10684 = (C19197 * be) / q - (C26154 * C39150) / q +
                          C26329 / q - (C26330 * p) / q;
    const double C10828 = (C19457 * be) / q - (C26330 * C39150) / q +
                          (3 * C26154) / C17808 - (C26567 * p) / q;
    const double C39382 = C27086 * p;
    const double C39376 = C27087 * p;
    const double C39415 = C27102 / C17808;
    const double C39381 = C27103 / C17808;
    const double C11072 =
        C27102 / q - (C27103 * C39151) / q + C39364 - (C27104 * p) / q;
    const double C11366 = (3 * C27103) / C17808 - (C27104 * C39151) / q +
                          C39391 - (C27660 * p) / q;
    const double C25302 =
        (C29056 * be) / q - (C25332 * C39150) / q - (C29061 * p) / q;
    const double C26538 = (C30079 * be) / q - (C26314 * C39150) / q +
                          (3 * C26138) / C17808 - (C30084 * p) / q;
    const double C39482 = C30551 * p;
    const double C27148 = (3 * C27086) / C17808 - (C27087 * C39151) / q +
                          C39478 - (C30566 * p) / q;
    const double C39483 = C30580 / C17808;
    const double C27689 =
        (2 * C27104) / q - (C27660 * C39151) / q + C39488 - (C30877 * p) / q;
    const double C39764 = C32360 / C17808;
    const double C39662 = C32615 / q;
    const double C32330 = -(C32360 * C39150 + C32615 * p) / q;
    const double C39677 = C32854 / q;
    const double C32180 =
        (C29072 * be) / q - (C32360 * C39151) / q + C39778 - (C32854 * p) / q;
    const double C39763 = C33342 / C17808;
    const double C39823 = C33817 * p;
    const double C39719 = C33817 / q;
    const double C39742 = C34099 * p;
    const double C39736 = C34100 * p;
    const double C39741 = C34115 / C17808;
    const double C39775 = C34116 / C17808;
    const double C16188 = (C20171 * be) / q - (C34115 * C39151) / q +
                          C34116 / q + C39724 - (C34117 * p) / q;
    const double C39743 = C34277 * p;
    const double C39744 = C34292 * p;
    const double C39749 = C34439 * p;
    const double C16482 = (C20669 * be) / q - (C34117 * C39151) / q +
                          (3 * C34115) / C17808 + C39751 - (C34673 * p) / q;
    const double C39768 = C34903 / q;
    const double C39760 = C34903 * p;
    const double C39842 = C37544 * p;
    const double C34161 = (C30902 * be) / q - (C34100 * C39151) / q +
                          (3 * C34099) / C17808 + C39838 - (C37559 * p) / q;
    const double C39843 = C37573 / C17808;
    const double C34468 = (C37729 * be) / q - (C34439 * C39151) / q +
                          (3 * C34292) / C17808 + C39846 - (C37735 * p) / q;
    const double C34702 = (C37862 * be) / q - (C34673 * C39151) / q +
                          (2 * C34117) / q + C39848 - (C37868 * p) / q;
    const double C38905 = C17934 * p;
    const double C38928 = C17950 / q;
    const double C38906 = C17950 * p;
    const double C5006 = (C18141 * be) / q - (C17933 * C39149) / q +
                         (3 * C17949) / C17808 - (C18145 * p) / q;
    const double C5007 = (C18157 * be) / q - (C17949 * C39149) / q +
                         C18161 / q - (C17933 * p) / q;
    const double C38926 = C18348 * p;
    const double C38937 = C18454 / q;
    const double C17918 = C39054 - (C18161 * C39150) / q - (C18454 * p) / q;
    const double C38946 = C18595 * p;
    const double C38952 = C18699 / q;
    const double C38975 = C18913 * p;
    const double C38964 = C18914 * p;
    const double C5394 =
        C18929 / q - (C18930 * C39150) / q + C38958 - (C18931 * p) / q;
    const double C5558 = (3 * C18930) / C17808 - (C18931 * C39150) / q +
                         C38979 - (C19324 * p) / q;
    const double C38987 = C19567 / q;
    const double C38994 = C19673 * p;
    const double C39006 = C19887 * p;
    const double C39016 = C19902 / C17808;
    const double C5935 =
        (C20111 * be) / q - (C19902 * C39149) / q - (C19886 * p) / q;
    const double C39023 = C19903 / q;
    const double C5858 = C39000 - (C19902 * C39150) / q - (C19903 * p) / q;
    const double C6166 = C39027 - (C20536 * C39150) / q - (C20537 * p) / q;
    const double C6229 =
        (C20637 * be) / q - (C20536 * C39149) / q - (C20641 * p) / q;
    const double C39048 = C21009 * p;
    const double C39043 = C21009 / q;
    const double C39050 = C21341 / C17808;
    const double C19962 = C39086 - (C21341 * C39150) / q - (C19567 * p) / q;
    const double C17903 = C39053 - (C18145 * C39150) / q - (C21756 * p) / q;
    const double C17965 =
        C17933 / C17808 - (C17934 * C39150) / q + C39056 - (C21843 * p) / q;
    const double C17994 = C39057 - (C18700 * C39150) / q - (C21858 * p) / q;
    const double C18378 =
        C18594 / C17808 - (C18595 * C39150) / q + C39077 - (C22215 * p) / q;
    const double C18624 = C39087 - (C20099 * C39150) / q - (C22423 * p) / q;
    const double C18946 = (3 * C18913) / C17808 - (C18914 * C39150) / q +
                          C39090 - (C22689 * p) / q;
    const double C18961 =
        C22703 / C17808 - (C18929 * C39150) / q + C39075 - (C18930 * p) / q;
    const double C19339 =
        (2 * C18931) / q - (C19324 * C39150) / q + C39104 - (C22973 * p) / q;
    const double C19354 = (3 * C19568) / C17808 - (C19569 * C39150) / q +
                          C39105 - (C22988 * p) / q;
    const double C19918 =
        C19886 / C17808 - (C19887 * C39150) / q + C39113 - (C23404 * p) / q;
    const double C19947 = C39114 - (C20641 * C39150) / q - (C23419 * p) / q;
    const double C20325 =
        C20536 / C17808 - (C20537 * C39150) / q + C39122 - (C23682 * p) / q;
    const double C20566 = C39124 - (C23816 * C39150) / q - (C23817 * p) / q;
    const double C39301 = C25572 / q;
    const double C25047 =
        (C28805 * be) / q - (C25287 * C39150) / q + C39418 - (C25572 * p) / q;
    const double C39316 = C25810 / q;
    const double C39339 = C26018 * p;
    const double C39328 = C26019 * p;
    const double C10584 = (C19137 * be) / q - (C26034 * C39150) / q +
                          C26035 / q + C39322 - (C26036 * p) / q;
    const double C10738 = (C19426 * be) / q - (C26036 * C39150) / q +
                          (3 * C26034) / C17808 + C39343 - (C26420 * p) / q;
    const double C39351 = C26657 / q;
    const double C39358 = C26760 * p;
    const double C39412 = C28064 * p;
    const double C39407 = C28064 / q;
    const double C39414 = C28390 / C17808;
    const double C27043 =
        (C30461 * be) / q - (C28390 * C39150) / q + C39450 - (C26657 * p) / q;
    const double C26051 = (C29718 * be) / q - (C26019 * C39150) / q +
                          (3 * C26018) / C17808 + C39454 - (C29723 * p) / q;
    const double C26066 = (C29733 * be) / q - (C26035 * C39150) / q +
                          C29738 / C17808 + C39439 - (C26034 * p) / q;
    const double C26435 = (C30002 * be) / q - (C26420 * C39150) / q +
                          (2 * C26036) / q + C39468 - (C30007 * p) / q;
    const double C26450 = (C30018 * be) / q - (C26658 * C39150) / q +
                          (3 * C26656) / C17808 + C39469 - (C30023 * p) / q;
    const double C15321 =
        (3 * C32091) / C17808 - (C32075 * C39149) / q - (C32285 * p) / q;
    const double C15322 = C32300 / q - (C32091 * C39149) / q - (C32075 * p) / q;
    const double C39661 = C32585 / q;
    const double C32060 = C39778 - (C32300 * C39150) / q - (C32585 * p) / q;
    const double C39676 = C32823 / q;
    const double C39699 = C33031 * p;
    const double C39688 = C33032 * p;
    const double C15700 =
        C33047 / q - (C33048 * C39150) / q + C39682 - (C33049 * p) / q;
    const double C15854 = (3 * C33048) / C17808 - (C33049 * C39150) / q +
                          C39703 - (C33433 * p) / q;
    const double C39740 = C33996 / C17808;
    const double C16218 = -(C33996 * C39149 + C33980 * p) / q;
    const double C16509 = -(C34614 * C39149 + C34717 * p) / q;
    const double C39774 = C35403 / C17808;
    const double C33064 = (3 * C33031) / C17808 - (C33032 * C39150) / q +
                          C39814 - (C36724 * p) / q;
    const double C33079 =
        C36738 / C17808 - (C33047 * C39150) / q + C39799 - (C33048 * p) / q;
    const double C33448 =
        (2 * C33049) / q - (C33433 * C39150) / q + C39828 - (C37004 * p) / q;
    const double C4885 = (C17806 * be) / q - (C17777 * C39149) / q +
                         (3 * C17794) / C17808 + C38895 - (C17812 * p) / q;
    const double C4886 = (C17824 * be) / q - (C17794 * C39149) / q +
                         C17828 / q + C38896 - (C17777 * p) / q;
    const double C38920 = C18286 / q;
    const double C38942 = C18533 / q;
    const double C38955 = C18762 / q;
    const double C5350 =
        (C18806 * be) / q - (C18777 * C39149) / q + C38958 - (C18762 * p) / q;
    const double C5349 = (C18789 * be) / q - (C18762 * C39149) / q +
                         C18777 / C17808 + C38957 - (C18794 * p) / q;
    const double C5522 =
        (C19259 * be) / q - (C19247 * C39149) / q + C38979 - (C19264 * p) / q;
    const double C5666 =
        (C19503 * be) / q - (C19491 * C39149) / q + C38984 - (C19508 * p) / q;
    const double C38997 = C19735 / q;
    const double C5814 =
        (C19779 * be) / q - (C19750 * C39149) / q + C39000 - (C19735 * p) / q;
    const double C5813 = (C19762 * be) / q - (C19735 * C39149) / q +
                         C19750 / C17808 + C38999 - (C19767 * p) / q;
    const double C5986 =
        (C20232 * be) / q - (C20220 * C39149) / q + C39021 - (C20237 * p) / q;
    const double C6130 =
        (C20472 * be) / q - (C20460 * C39149) / q + C39027 - (C20477 * p) / q;
    const double C6276 = (C20712 * be) / q - (C18286 * C39149) / q +
                         C20716 / C17808 + C39029 - (C18270 * p) / q;
    const double C18840 =
        (C22583 * be) / q - (C20716 * C39149) / q + C39075 - (C18286 * p) / q;
    const double C39041 = C20933 / q;
    const double C7124 =
        (C21411 * be) / q - (C20949 * C39149) / q + C39052 - (C20933 * p) / q;
    const double C6562 = (C20945 * be) / q - (C20933 * C39149) / q +
                         C20949 / C17808 + C39042 - (C20951 * p) / q;
    const double C6708 = (C21180 * be) / q - (C18533 * C39149) / q +
                         C21184 / C17808 + C39046 - (C18517 * p) / q;
    const double C19842 =
        (C23330 * be) / q - (C21184 * C39149) / q + C39086 - (C18533 * p) / q;
    const double C17778 = (C21641 * be) / q - (C17812 * C39149) / q +
                          (2 * C17777) / q + C39053 - (C21645 * p) / q;
    const double C17793 = (C21656 * be) / q - (C17828 * C39149) / q +
                          C21660 / C17808 + C39054 - (C17794 * p) / q;
    const double C17844 = (C21719 * be) / q - (C18288 * C39149) / q +
                          (3 * C18270) / C17808 + C39056 - (C21724 * p) / q;
    const double C17873 = (C21736 * be) / q - (C18535 * C39149) / q +
                          (3 * C18517) / C17808 + C39057 - (C21741 * p) / q;
    const double C18825 = (C22566 * be) / q - (C19264 * C39149) / q +
                          C19247 / C17808 + C39090 - (C22571 * p) / q;
    const double C18855 = (C22598 * be) / q - (C19508 * C39149) / q +
                          C19491 / C17808 + C39091 - (C22603 * p) / q;
    const double C19279 =
        (C22921 * be) / q - (C22925 * C39149) / q + C39104 - (C22926 * p) / q;
    const double C19294 =
        (C22938 * be) / q - (C22942 * C39149) / q + C39105 - (C22943 * p) / q;
    const double C19537 =
        (C23105 * be) / q - (C23109 * C39149) / q + C39108 - (C23110 * p) / q;
    const double C19798 = (C23296 * be) / q - (C20237 * C39149) / q +
                          C20220 / C17808 + C39113 - (C23301 * p) / q;
    const double C19827 = (C23313 * be) / q - (C20477 * C39149) / q +
                          C20460 / C17808 + C39114 - (C23318 * p) / q;
    const double C20266 =
        (C23648 * be) / q - (C23652 * C39149) / q + C39122 - (C23653 * p) / q;
    const double C20506 =
        (C23768 * be) / q - (C23772 * C39149) / q + C39124 - (C23773 * p) / q;
    const double C10095 = (3 * C24927) / C17808 - (C24910 * C39149) / q +
                          C39263 - (C24943 * p) / q;
    const double C10096 =
        C24958 / q - (C24927 * C39149) / q + C39264 - (C24910 * p) / q;
    const double C39306 = C25647 / q;
    const double C11854 =
        C28234 / C17808 - (C25647 * C39149) / q + C39410 - (C25632 * p) / q;
    const double C26924 = C39450 - (C28234 * C39149) / q - (C25647 * p) / q;
    const double C24911 =
        (2 * C24910) / q - (C24943 * C39149) / q + C39417 - (C28688 * p) / q;
    const double C24926 =
        C28702 / C17808 - (C24958 * C39149) / q + C39418 - (C24927 * p) / q;
    const double C25003 = (3 * C25632) / C17808 - (C25649 * C39149) / q +
                          C39421 - (C28778 * p) / q;
    const double C15211 = (3 * C31940) / C17808 - (C31923 * C39149) / q +
                          C39623 - (C31956 * p) / q;
    const double C15212 =
        C31971 / q - (C31940 * C39149) / q + C39624 - (C31923 * p) / q;
    const double C39644 = C32420 / q;
    const double C16554 =
        C34789 / C17808 - (C32420 * C39149) / q + C39753 - (C32405 * p) / q;
    const double C32959 = C39799 - (C34789 * C39149) / q - (C32420 * p) / q;
    const double C31924 =
        (2 * C31923) / q - (C31956 * C39149) / q + C39777 - (C35701 * p) / q;
    const double C31939 =
        C35715 / C17808 - (C31971 * C39149) / q + C39778 - (C31940 * p) / q;
    const double C31987 = (3 * C32405) / C17808 - (C32422 * C39149) / q +
                          C39780 - (C35775 * p) / q;
    const double C26494 = C39468 - (C26567 * C39151) / q - (C30053 * p) / q;
    const double C39464 = C29856 * p;
    const double C39462 = C29827 * p;
    const double C27572 = C39488 - (C30801 * C39149) / q - (C30802 * p) / q;
    const double C39445 = C29300 * p;
    const double C27339 = C39486 - (C30682 * C39149) / q - (C30683 * p) / q;
    const double C39444 = C29285 * p;
    const double C26627 = C39472 - (C30142 * C39149) / q - (C30143 * p) / q;
    const double C26391 = C39469 - (C29975 * C39149) / q - (C29976 * p) / q;
    const double C26376 = C39468 - (C29959 * C39149) / q - (C29960 * p) / q;
    const double C39430 = C29001 * p;
    const double C25152 = C39417 - (C25332 * C39151) / q - (C28914 * p) / q;
    const double C39389 = C27426 * p;
    const double C27631 =
        (C30841 * be) / q - (C30846 * C39150) / q + C39488 - (C30847 * p) / q;
    const double C39384 = C27279 * p;
    const double C27455 = (3 * C27279) / C17808 - (C27426 * C39151) / q +
                          C39486 - (C30743 * p) / q;
    const double C39383 = C27264 * p;
    const double C11393 = -(C27601 * C39149 + C27704 * p) / q;
    const double C27028 =
        (C30445 * be) / q - (C27704 * C39150) / q + C39478 - (C30450 * p) / q;
    const double C39408 = C27890 / q;
    const double C39400 = C27890 * p;
    const double C39463 = C26804 * p;
    const double C39359 = C26804 / q;
    const double C39380 = C26983 / C17808;
    const double C11102 = -(C26983 * C39149 + C26967 * p) / q;
    const double C39354 = C26716 * p;
    const double C11330 =
        (C20637 * be) / q - (C27601 * C39150) / q + C39391 - (C27602 * p) / q;
    const double C27397 = (C30708 * be) / q - (C27602 * C39150) / q +
                          C27601 / C17808 + C39486 - (C30713 * p) / q;
    const double C39346 = C26479 * p;
    const double C26509 =
        C26330 / C17808 - (C26479 * C39151) / q + C39469 - (C30068 * p) / q;
    const double C39356 = C26155 / q;
    const double C39335 = C26155 * p;
    const double C39387 = C26984 / q;
    const double C11032 =
        (C20111 * be) / q - (C26983 * C39150) / q + C39364 - (C26984 * p) / q;
    const double C39334 = C26139 * p;
    const double C39370 = C26968 * p;
    const double C26999 = (C30429 * be) / q - (C26968 * C39150) / q +
                          C26967 / C17808 + C39477 - (C30434 * p) / q;
    const double C39313 = C25766 * p;
    const double C11294 = C39391 - (C27527 * C39149) / q - (C27543 * p) / q;
    const double C26909 =
        C27527 / C17808 - (C27543 * C39149) / q + C39478 - (C30348 * p) / q;
    const double C39310 = C25708 * p;
    const double C10846 = C39348 - (C26582 * C39149) / q - (C26598 * p) / q;
    const double C25961 =
        C26582 / C17808 - (C26598 * C39149) / q + C39455 - (C29636 * p) / q;
    const double C39296 = C25527 * p;
    const double C25737 =
        (C29456 * be) / q - (C27178 * C39150) / q + C39451 - (C29461 * p) / q;
    const double C11150 = C39385 - (C27294 * C39149) / q - (C27310 * p) / q;
    const double C26880 =
        C27294 / C17808 - (C27310 * C39149) / q + C39477 - (C30332 * p) / q;
    const double C39290 = C25468 * p;
    const double C10702 = C39343 - (C26345 * C39149) / q - (C26361 * p) / q;
    const double C25931 =
        C26345 / C17808 - (C26361 * C39149) / q + C39454 - (C29606 * p) / q;
    const double C25498 = (C29250 * be) / q - (C25708 * C39150) / q +
                          C25707 / C17808 + C39441 - (C29255 * p) / q;
    const double C39405 = C27990 / q;
    const double C12254 = C39416 - (C28005 * C39149) / q - (C27990 * p) / q;
    const double C25123 =
        (C28894 * be) / q - (C25811 * C39150) / q + C39421 - (C28899 * p) / q;
    const double C11710 =
        C28005 / C17808 - (C27990 * C39149) / q + C39406 - (C28007 * p) / q;
    const double C25032 =
        (C28789 * be) / q - (C25272 * C39150) / q + C39417 - (C28794 * p) / q;
    const double C39314 = C25199 / q;
    const double C39276 = C25199 * p;
    const double C39361 = C26819 / q;
    const double C10992 = C39364 - (C26834 * C39149) / q - (C26819 * p) / q;
    const double C39275 = C25183 * p;
    const double C10991 =
        C26834 / C17808 - (C26819 * C39149) / q + C39363 - (C26850 * p) / q;
    const double C39292 = C25079 / q;
    const double C39270 = C25079 * p;
    const double C39319 = C25870 / q;
    const double C10544 = C39322 - (C25885 * C39149) / q - (C25870 * p) / q;
    const double C39284 = C25407 / q;
    const double C25946 = C39439 - (C27776 * C39149) / q - (C25407 * p) / q;
    const double C39269 = C25063 * p;
    const double C10543 =
        C25885 / C17808 - (C25870 * C39149) / q + C39321 - (C25901 * p) / q;
    const double C10205 =
        (3 * C25078) / C17808 - (C25062 * C39149) / q - (C25272 * p) / q;
    const double C10206 = C25287 / q - (C25078 * C39149) / q - (C25062 * p) / q;
    const double C25094 = (C28878 * be) / q - (C25063 * C39150) / q +
                          C25062 / C17808 + C39420 - (C28883 * p) / q;
    const double C11438 =
        C27776 / C17808 - (C25407 * C39149) / q + C39393 - (C25392 * p) / q;
    const double C24974 = (3 * C25392) / C17808 - (C25409 * C39149) / q +
                          C39420 - (C28762 * p) / q;
    const double C34644 = C39848 - (C37836 * C39150) / q - (C37837 * p) / q;
    const double C39824 = C36855 * p;
    const double C34041 = C39838 - (C34717 * C39150) / q - (C37444 * p) / q;
    const double C39822 = C36826 * p;
    const double C34585 = C39848 - (C37792 * C39149) / q - (C37793 * p) / q;
    const double C39805 = C36305 * p;
    const double C34352 = C39846 - (C37674 * C39149) / q - (C37675 * p) / q;
    const double C39804 = C36290 * p;
    const double C32750 = C39811 - (C34191 * C39150) / q - (C36464 * p) / q;
    const double C33640 = C39832 - (C37139 * C39149) / q - (C37140 * p) / q;
    const double C33404 = C39829 - (C36973 * C39149) / q - (C36974 * p) / q;
    const double C33389 = C39828 - (C36957 * C39149) / q - (C36958 * p) / q;
    const double C39790 = C36010 * p;
    const double C32136 = C39781 - (C32824 * C39150) / q - (C35908 * p) / q;
    const double C32045 = C39777 - (C32285 * C39150) / q - (C35806 * p) / q;
    const double C39714 = C33729 * p;
    const double C16446 = C39751 - (C34614 * C39150) / q - (C34615 * p) / q;
    const double C34410 =
        C34614 / C17808 - (C34615 * C39150) / q + C39846 - (C37704 * p) / q;
    const double C33507 =
        (C37044 * be) / q - (C33580 * C39151) / q + C39828 - (C37050 * p) / q;
    const double C39706 = C33492 * p;
    const double C33522 = (C37060 * be) / q - (C33492 * C39151) / q +
                          C33343 / C17808 + C39829 - (C37066 * p) / q;
    const double C33463 = (3 * C33670) / C17808 - (C33671 * C39150) / q +
                          C39829 - (C37019 * p) / q;
    const double C39702 = C33327 * p;
    const double C39718 = C33773 * p;
    const double C39716 = C33168 / q;
    const double C39695 = C33168 * p;
    const double C39747 = C33997 / q;
    const double C16148 = C39724 - (C33996 * C39150) / q - (C33997 * p) / q;
    const double C39700 = C33167 / C17808;
    const double C15800 = C33342 / q - (C33167 * C39150) / q - (C33343 * p) / q;
    const double C15944 =
        (3 * C33167) / C17808 - (C33343 * C39150) / q - (C33580 * p) / q;
    const double C39711 = C33669 / q;
    const double C34056 = C39810 - (C35403 * C39150) / q - (C33669 * p) / q;
    const double C39694 = C33152 * p;
    const double C39730 = C33981 * p;
    const double C34012 =
        C33980 / C17808 - (C33981 * C39150) / q + C39837 - (C37429 * p) / q;
    const double C39701 = C33151 * p;
    const double C33551 =
        (3 * C33151) / C17808 - (C33327 * C39150) / q - (C37081 * p) / q;
    const double C39772 = C35077 * p;
    const double C39767 = C35077 / q;
    const double C39673 = C32779 * p;
    const double C16410 = C39751 - (C34540 * C39149) / q - (C34556 * p) / q;
    const double C33922 =
        C34540 / C17808 - (C34556 * C39149) / q + C39838 - (C37344 * p) / q;
    const double C39664 = C32630 * p;
    const double C39670 = C32721 * p;
    const double C32511 =
        C32720 / C17808 - (C32721 * C39150) / q + C39801 - (C36260 * p) / q;
    const double C15962 = C39708 - (C33595 * C39149) / q - (C33611 * p) / q;
    const double C32974 =
        C33595 / C17808 - (C33611 * C39149) / q + C39815 - (C36638 * p) / q;
    const double C39656 = C32540 * p;
    const double C16266 = C39745 - (C34307 * C39149) / q - (C34323 * p) / q;
    const double C33893 =
        C34307 / C17808 - (C34323 * C39149) / q + C39837 - (C37328 * p) / q;
    const double C39650 = C32481 * p;
    const double C15818 = C39703 - (C33358 * C39149) / q - (C33374 * p) / q;
    const double C32944 =
        C33358 / C17808 - (C33374 * C39149) / q + C39814 - (C36608 * p) / q;
    const double C39659 = C32390 / q;
    const double C39642 = C32390 * p;
    const double C39765 = C35003 / q;
    const double C17370 = C39776 - (C35018 * C39149) / q - (C35003 * p) / q;
    const double C39641 = C32375 * p;
    const double C16826 =
        C35018 / C17808 - (C35003 * C39149) / q + C39766 - (C35020 * p) / q;
    const double C32165 =
        (C29056 * be) / q - (C32345 * C39151) / q + C39777 - (C35923 * p) / q;
    const double C32315 = -(C32345 * C39150 + C36069 * p) / q;
    const double C39674 = C32212 / q;
    const double C39636 = C32212 * p;
    const double C39721 = C33832 / q;
    const double C16108 = C39724 - (C33847 * C39149) / q - (C33832 * p) / q;
    const double C39663 = C32211 / C17808;
    const double C39666 = C32660 / q;
    const double C33937 = C39810 - (C35247 * C39149) / q - (C32660 * p) / q;
    const double C39635 = C32196 * p;
    const double C16107 =
        C33847 / C17808 - (C33832 * C39149) / q + C39723 - (C33863 * p) / q;
    const double C39791 = C32195 / C17808;
    const double C15341 =
        (3 * C32211) / C17808 - (C32195 * C39149) / q - (C32345 * p) / q;
    const double C15342 = C32360 / q - (C32211 * C39149) / q - (C32195 * p) / q;
    const double C16970 =
        C35247 / C17808 - (C32660 * C39149) / q + C39770 - (C32645 * p) / q;
    const double C32016 = (3 * C32645) / C17808 - (C32662 * C39149) / q +
                          C39781 - (C35791 * p) / q;
    const double C39652 = C32092 / q;
    const double C39630 = C32092 * p;
    const double C39679 = C32883 / q;
    const double C15660 = C39682 - (C32898 * C39149) / q - (C32883 * p) / q;
    const double C39629 = C32076 * p;
    const double C32107 =
        C32075 / C17808 - (C32076 * C39150) / q + C39780 - (C35893 * p) / q;
    const double C15659 =
        C32898 / C17808 - (C32883 * C39149) / q + C39681 - (C32914 * p) / q;
    const double C18115 =
        C39067 - (C18055 * C39151) / q + C39057 - (C21975 * p) / q;
    const double C18470 = C39067 - (C18239 * C39150) / q - (C22289 * p) / q;
    const double C39156 = C38911 / q;
    const double C18683 =
        C38950 - (C18654 * C39151) / q + C39087 - (C22453 * p) / q;
    const double C39157 = C38912 / q;
    const double C5039 = -(C18054 * C39150 + C38917) / q;
    const double C19156 = C38935 - (C18501 * C39150) / q - (C22835 * p) / q;
    const double C5040 = -(C18070 * C39150 + C38918) / q;
    const double C39163 = C38932 / q;
    const double C5328 = -(C18071 * C39150 + C38932) / q;
    const double C5175 =
        (C18482 * be) / q - (C18254 * C39149) / q + C38938 - C38917 / q;
    const double C39166 = C38940 / q;
    const double C39171 = C38949 / q;
    const double C39037 = C18039 / C17808;
    const double C39185 = C38977 / q;
    const double C39179 = C38970 / q;
    const double C19657 =
        C38992 - (C19628 * C39151) / q + C39108 - (C23197 * p) / q;
    const double C39180 = C38971 / q;
    const double C39186 = C38978 / q;
    const double C6406 =
        (C20900 * be) / q - (C18486 * C39149) / q + C39039 - C38918 / q;
    const double C39187 = C38982 / q;
    const double C39193 = C38990 / q;
    const double C19081 = C39075 - (C19230 * C39151) / q - C39099 / q;
    const double C21356 = -(C20022 * C39150 + C39099) / q;
    const double C39206 = C39018 / q;
    const double C39204 = C39012 / q;
    const double C39010 = C5902 / C17808;
    const double C39210 = C39019 / q;
    const double C5967 = -(C20006 * C39150 + C39019) / q;
    const double C5968 = -(C20023 * C39150 + C39020) / q;
    const double C7204 = C39039 - (C19719 * C39151) / q + C39052 - C39020 / q;
    const double C6058 = C38995 - (C20204 * C39151) / q + C39021 - C39025 / q;
    const double C6256 = -(C20024 * C39150 + C39025) / q;
    const double C39211 = C39036 / q;
    const double C6848 = -(C18732 * C39150 + C39036) / q;
    const double C18086 = C39056 - (C18239 * C39151) / q - C39066 / q;
    const double C18716 = -(C18055 * C39150 + C39066) / q;
    const double C39221 = C39080 / q;
    const double C18438 =
        C18254 / C17808 - (C18408 * C39151) / q + C39077 - C39081 / q;
    const double C20130 = -(C18654 * C39150 + C39081) / q;
    const double C39230 = C39098 / q;
    const double C39231 = C39100 / q;
    const double C38983 = C19414 * p;
    const double C5630 =
        (C19441 * be) / q - (C5648 * C39149) / q - (C19445 * p) / q;
    const double C20039 = C39044 - (C20189 * C39151) / q + C39113 - C39118 / q;
    const double C20657 = -(C20007 * C39150 + C39118) / q;
    const double C39015 = C20068 * p;
    const double C20083 =
        C39119 - (C20022 * C39151) / q + C39086 - (C20023 * p) / q;
    const double C20888 = C39119 - (C19230 * C39150) / q - (C19050 * p) / q;
    const double C39026 = C20384 * p;
    const double C6220 = (3 * C5902) / C17808 - (C6202 * C39151) / q +
                         C20024 / q - (C20625 * p) / q;
    const double C25243 =
        C39431 - (C25183 * C39151) / q + C39421 - (C29016 * p) / q;
    const double C25587 =
        (C29325 * be) / q - (C25362 * C39150) / q + C39431 - (C29330 * p) / q;
    const double C39525 = C39281 / q;
    const double C26257 =
        (C29867 * be) / q - (C25617 * C39150) / q + C39299 - (C29872 * p) / q;
    const double C39526 = C39282 / q;
    const double C39533 = C39304 / q;
    const double C39401 = C25167 / C17808;
    const double C10674 = -(C26154 * C39149 + C39341) / q;
    const double C11564 =
        (C20900 * be) / q - (C25602 * C39150) / q + C39404 - C39341 / q;
    const double C10683 =
        (C19182 * be) / q - (C26138 * C39150) / q + C39302 - C39342 / q;
    const double C10819 = -(C26330 * C39149 + C39342) / q;
    const double C11122 = -(C27103 * C39149 + C39382) / q;
    const double C11926 = C39404 - (C25841 * C39151) / q + C39410 - C39382 / q;
    const double C11071 = C39317 - (C27086 * C39151) / q + C39363 - C39376 / q;
    const double C11411 = -(C27104 * C39149 + C39376) / q;
    const double C39374 = C11072 / C17808;
    const double C10810 = -(C10828 * C39149 + C26538 * p) / q;
    const double C39596 = C39482 / q;
    const double C39379 = C27148 * p;
    const double C27163 =
        C39483 - (C27102 * C39151) / q + C39450 - (C27103 * p) / q;
    const double C27947 =
        (C30944 * be) / q - (C26329 * C39150) / q + C39483 - (C26154 * p) / q;
    const double C11384 = (3 * C11072) / C17808 - (C11366 * C39151) / q +
                          C27104 / q - (C27689 * p) / q;
    const double C39761 = C32180 / C17808;
    const double C33198 =
        (C30944 * be) / q - (C33342 * C39151) / q + C39799 - C39823 / q;
    const double C35418 = -(C34116 * C39150 + C39823) / q;
    const double C16238 = -(C34115 * C39149 + C39742) / q;
    const double C17042 = (C21368 * be) / q - (C32854 * C39151) / q + C39764 +
                          C39770 - C39742 / q;
    const double C16187 = (C20156 * be) / q - (C34099 * C39151) / q + C39677 +
                          C39723 - C39736 / q;
    const double C16527 = -(C34117 * C39149 + C39736) / q;
    const double C39734 = C16188 / C17808;
    const double C16247 = -(C34099 * C39150 + C39743) / q;
    const double C16383 = -(C34292 * C39149 + C39743) / q;
    const double C16898 = (C21137 * be) / q - (C34903 * C39151) / q +
                          C32615 / C17808 + C39766 - C39743 / q;
    const double C16248 = -(C34115 * C39150 + C39744) / q;
    const double C17442 = (C21596 * be) / q - (C33817 * C39151) / q + C39763 +
                          C39776 - C39744 / q;
    const double C16338 = (C20427 * be) / q - (C34292 * C39151) / q + C39719 +
                          C39745 - C39749 / q;
    const double C16536 = -(C34117 * C39150 + C39749) / q;
    const double C16626 =
        (C20900 * be) / q - (C32615 * C39151) / q + C39753 - C39760 / q;
    const double C17096 = -(C32854 * C39150 + C39760) / q;
    const double C17487 = -(C33817 * C39149 + C39760) / q;
    const double C34132 = (C30754 * be) / q - (C34277 * C39151) / q + C39768 +
                          C39837 - C39842 / q;
    const double C34732 = -(C34100 * C39150 + C39842) / q;
    const double C39739 = C34161 * p;
    const double C34176 = (C31058 * be) / q - (C34116 * C39151) / q + C39843 +
                          C39810 - (C34115 * p) / q;
    const double C34960 = C39843 - (C33342 * C39150) / q - (C33167 * p) / q;
    const double C39750 = C34468 * p;
    const double C16500 = (C20578 * be) / q - (C16482 * C39151) / q +
                          (3 * C16188) / C17808 + C34117 / q - (C34702 * p) / q;
    const double C39152 = C38905 / q;
    const double C18363 =
        C38928 - (C18348 * C39150) / q + C39076 - (C22200 * p) / q;
    const double C39153 = C38906 / q;
    const double C39161 = C38926 / q;
    const double C39033 = C17918 / C17808;
    const double C39168 = C38946 / q;
    const double C5301 =
        (C18695 * be) / q - (C18594 * C39149) / q + C38952 - (C18700 * p) / q;
    const double C39184 = C38975 / q;
    const double C39176 = C38964 / q;
    const double C38962 = C5394 / C17808;
    const double C5702 =
        C38987 - (C19568 * C39150) / q + C38984 - (C19569 * p) / q;
    const double C39195 = C38994 / q;
    const double C39199 = C39006 / q;
    const double C5934 =
        (C20095 * be) / q - (C19886 * C39149) / q + C39016 - (C20099 * p) / q;
    const double C6022 =
        C39016 - (C19903 * C39150) / q + C39021 - (C20296 * p) / q;
    const double C19598 =
        C39023 - (C20296 * C39150) / q + C39108 - (C23167 * p) / q;
    const double C39004 = C5858 / C17808;
    const double C39213 = C39048 / q;
    const double C18976 =
        C39043 - (C19673 * C39150) / q + C39091 - (C22718 * p) / q;
    const double C6818 =
        (C21337 * be) / q - (C18699 * C39149) / q + C39050 - (C18594 * p) / q;
    const double C7164 =
        C39050 - (C19567 * C39150) / q + C39052 - (C19568 * p) / q;
    const double C39047 = C19962 / C17808;
    const double C5880 = C19962 / q - (C5858 * C39151) / q - (C6166 * p) / q;
    const double C38907 = C17965 * p;
    const double C38909 = C17994 * p;
    const double C38930 = C18378 * p;
    const double C38947 = C18624 * p;
    const double C38965 = C18946 * p;
    const double C39032 = C18961 / C17808;
    const double C5405 =
        C18961 / q - (C5394 * C39150) / q + C18930 / q - (C5558 * p) / q;
    const double C5567 = (3 * C5394) / C17808 - (C5558 * C39150) / q +
                         C18931 / q - (C19339 * p) / q;
    const double C38981 = C19354 * p;
    const double C39007 = C19918 * p;
    const double C39009 = C19947 * p;
    const double C39024 = C20325 * p;
    const double C6184 =
        (3 * C5858) / C17808 - (C6166 * C39151) / q - (C20566 * p) / q;
    const double C39397 = C25047 / C17808;
    const double C10497 = C39316 - (C25707 * C39149) / q - (C25811 * p) / q;
    const double C10654 = -(C26034 * C39149 + C39339) / q;
    const double C11474 = (C20870 * be) / q - (C25572 * C39150) / q +
                          C25287 / C17808 + C39393 - C39339 / q;
    const double C10583 = (C19122 * be) / q - (C26018 * C39150) / q + C39301 +
                          C39321 - C39328 / q;
    const double C10801 = -(C26036 * C39149 + C39328) / q;
    const double C39326 = C10584 / C17808;
    const double C10882 = (C19669 * be) / q - (C26656 * C39150) / q + C39351 +
                          C39348 - (C26658 * p) / q;
    const double C10945 = -(C26656 * C39149 + C39358) / q;
    const double C11746 = (C21106 * be) / q - (C28064 * C39150) / q +
                          C25810 / C17808 + C39406 - C39358 / q;
    const double C11890 =
        (C21337 * be) / q - (C25810 * C39150) / q + C39410 - C39412 / q;
    const double C12353 = -(C26657 * C39149 + C39412) / q;
    const double C26081 = (C29749 * be) / q - (C26760 * C39150) / q + C39407 +
                          C39455 - (C29754 * p) / q;
    const double C11953 = C39414 - (C25810 * C39149) / q - (C25707 * p) / q;
    const double C12290 = (C21567 * be) / q - (C26657 * C39150) / q + C39414 +
                          C39416 - (C26656 * p) / q;
    const double C39411 = C27043 / C17808;
    const double C39329 = C26051 * p;
    const double C39396 = C26066 / C17808;
    const double C10594 = (C5390 * be) / q - (C10584 * C39150) / q +
                          C26066 / q + C26034 / q - (C10738 * p) / q;
    const double C10747 = (C19306 * be) / q - (C10738 * C39150) / q +
                          (3 * C10584) / C17808 + C26036 / q - (C26435 * p) / q;
    const double C39345 = C26450 * p;
    const double C39757 = C32060 / C17808;
    const double C15613 = C39676 - (C32720 * C39149) / q - (C32824 * p) / q;
    const double C15770 = -(C33048 * C39149 + C39699) / q;
    const double C16590 =
        C32300 / C17808 - (C32585 * C39150) / q + C39753 - C39699 / q;
    const double C15699 = C39661 - (C33031 * C39150) / q + C39681 - C39688 / q;
    const double C15917 = -(C33049 * C39149 + C39688) / q;
    const double C39686 = C15700 / C17808;
    const double C16217 = C39740 - (C33980 * C39149) / q - (C34191 * p) / q;
    const double C16302 =
        C39740 - (C33997 * C39150) / q + C39745 - (C34381 * p) / q;
    const double C17069 = C39774 - (C32823 * C39149) / q - (C32720 * p) / q;
    const double C17406 =
        C39774 - (C33669 * C39150) / q + C39776 - (C33670 * p) / q;
    const double C39689 = C33064 * p;
    const double C39756 = C33079 / C17808;
    const double C15710 =
        C33079 / q - (C15700 * C39150) / q + C33048 / q - (C15854 * p) / q;
    const double C15863 = (3 * C15700) / C17808 - (C15854 * C39150) / q +
                          C33049 / q - (C33448 * p) / q;
    const double C38922 = C4886 / C17808;
    const double C5058 = (C18282 * be) / q - (C18270 * C39149) / q + C38920 +
                         C38921 - (C18288 * p) / q;
    const double C5202 = (C18529 * be) / q - (C18517 * C39149) / q + C38942 +
                         C38943 - (C18535 * p) / q;
    const double C18303 = (C22150 * be) / q - (C18794 * C39149) / q + C38955 +
                          C39076 - (C22154 * p) / q;
    const double C38954 = C5350 / C17808;
    const double C38956 = C5349 * p;
    const double C38961 = C5666 * p;
    const double C18564 = (C22376 * be) / q - (C19767 * C39149) / q + C38997 +
                          C39087 - (C22380 * p) / q;
    const double C38996 = C5814 / C17808;
    const double C38998 = C5813 * p;
    const double C39002 = C5986 * p;
    const double C38919 = C6276 / q;
    const double C39028 = C18840 / C17808;
    const double C5361 = C18840 / q - (C5350 * C39150) / q - (C5522 * p) / q;
    const double C18318 = (C22166 * be) / q - (C20951 * C39149) / q + C39041 +
                          C39077 - (C22170 * p) / q;
    const double C38985 = C7124 / q;
    const double C39031 = C6562 * p;
    const double C38941 = C6708 / q;
    const double C39045 = C19842 / C17808;
    const double C5836 = C19842 / q - (C5814 * C39151) / q - (C6130 * p) / q;
    const double C4874 = (C17773 * be) / q - (C4885 * C39149) / q +
                         (3 * C4886) / C17808 + C17777 / q - (C17778 * p) / q;
    const double C39030 = C17793 / C17808;
    const double C4875 = (C4882 * be) / q - (C4886 * C39149) / q + C17793 / q +
                         C17794 / q - (C4885 * p) / q;
    const double C38899 = C17844 * p;
    const double C38903 = C17873 * p;
    const double C38959 = C18825 * p;
    const double C38960 = C18855 * p;
    const double C5531 =
        (3 * C5350) / C17808 - (C5522 * C39150) / q - (C19279 * p) / q;
    const double C38980 = C19294 * p;
    const double C38986 = C19537 * p;
    const double C39001 = C19798 * p;
    const double C39003 = C19827 * p;
    const double C39022 = C20266 * p;
    const double C6148 =
        (3 * C5814) / C17808 - (C6130 * C39151) / q - (C20506 * p) / q;
    const double C39286 = C10096 / C17808;
    const double C10398 =
        C39306 - (C25632 * C39149) / q + C39307 - (C25649 * p) / q;
    const double C39305 = C11854 / q;
    const double C39409 = C26924 / C17808;
    const double C10085 = (3 * C10096) / C17808 - (C10095 * C39149) / q +
                          C24910 / q - (C24911 * p) / q;
    const double C39394 = C24926 / C17808;
    const double C10086 =
        C24926 / q - (C10096 * C39149) / q + C24927 / q - (C10095 * p) / q;
    const double C39267 = C25003 * p;
    const double C39646 = C15212 / C17808;
    const double C15370 =
        C39644 - (C32405 * C39149) / q + C39645 - (C32422 * p) / q;
    const double C39643 = C16554 / q;
    const double C39752 = C32959 / C17808;
    const double C15201 = (3 * C15212) / C17808 - (C15211 * C39149) / q +
                          C31923 / q - (C31924 * p) / q;
    const double C39754 = C31939 / C17808;
    const double C15202 =
        C31939 / q - (C15212 * C39149) / q + C31940 / q - (C15211 * p) / q;
    const double C39625 = C31987 * p;
    const double C39591 = C39464 / q;
    const double C39589 = C39462 / q;
    const double C39582 = C39445 / q;
    const double C39386 = C27339 * p;
    const double C39581 = C39444 / q;
    const double C39350 = C26627 * p;
    const double C39344 = C26391 * p;
    const double C39577 = C39430 / q;
    const double C39566 = C39389 / q;
    const double C39563 = C39384 / q;
    const double C39390 = C27455 * p;
    const double C39562 = C39383 / q;
    const double C11267 = -(C27279 * C39149 + C39383) / q;
    const double C39373 = C27028 * p;
    const double C39568 = C39400 / q;
    const double C12371 = -(C26804 * C39149 + C39400) / q;
    const double C39590 = C39463 / q;
    const double C11101 = C39380 - (C26967 * C39149) / q - (C27178 * p) / q;
    const double C11186 = (C20396 * be) / q - (C26984 * C39150) / q + C39380 +
                          C39385 - (C27368 * p) / q;
    const double C39552 = C39354 / q;
    const double C39388 = C27397 * p;
    const double C39547 = C39346 / q;
    const double C39347 = C26509 * p;
    const double C26745 =
        C39356 - (C26716 * C39151) / q + C39472 - (C30231 * p) / q;
    const double C39544 = C39335 / q;
    const double C26687 = (C30196 * be) / q - (C27368 * C39150) / q + C39387 +
                          C39472 - (C30201 * p) / q;
    const double C39368 = C11032 / C17808;
    const double C11052 = C27043 / q - (C11032 * C39151) / q - (C11330 * p) / q;
    const double C11348 =
        (3 * C11032) / C17808 - (C11330 * C39151) / q - (C27631 * p) / q;
    const double C39543 = C39334 / q;
    const double C10963 = -(C26155 * C39149 + C39334) / q;
    const double C11031 =
        (C20095 * be) / q - (C26967 * C39150) / q + C39363 - C39370 / q;
    const double C11249 = -(C26984 * C39149 + C39370) / q;
    const double C39371 = C26999 * p;
    const double C39539 = C39313 / q;
    const double C39367 = C26909 * p;
    const double C39536 = C39310 / q;
    const double C39325 = C10846 * p;
    const double C39324 = C25961 * p;
    const double C39530 = C39296 / q;
    const double C39311 = C25737 * p;
    const double C39366 = C11150 * p;
    const double C39365 = C26880 * p;
    const double C39528 = C39290 / q;
    const double C39323 = C25931 * p;
    const double C39294 = C25498 * p;
    const double C25439 =
        C39405 - (C28007 * C39149) / q + C39441 - (C29208 * p) / q;
    const double C39349 = C12254 / q;
    const double C39273 = C25123 * p;
    const double C39395 = C11710 * p;
    const double C25795 =
        C39314 - (C25766 * C39151) / q + C39451 - (C29491 * p) / q;
    const double C39520 = C39276 / q;
    const double C25678 =
        C39361 - (C26850 * C39149) / q + C39451 - (C29417 * p) / q;
    const double C39360 = C10992 / C17808;
    const double C11012 = C26924 / q - (C10992 * C39151) / q - (C11294 * p) / q;
    const double C11312 =
        (3 * C10992) / C17808 - (C11294 * C39151) / q - (C27572 * p) / q;
    const double C39519 = C39275 / q;
    const double C39362 = C10991 * p;
    const double C25483 = (C29234 * be) / q - (C25468 * C39150) / q + C39292 +
                          C39440 - (C29239 * p) / q;
    const double C39516 = C39270 / q;
    const double C25424 =
        C39319 - (C25901 * C39149) / q + C39440 - (C29193 * p) / q;
    const double C39318 = C10544 / C17808;
    const double C10711 = (C19243 * be) / q - (C10702 * C39150) / q +
                          (3 * C10544) / C17808 - (C26376 * p) / q;
    const double C10254 =
        C39284 - (C25392 * C39149) / q + C39285 - (C25409 * p) / q;
    const double C39392 = C25946 / C17808;
    const double C10554 = (C5346 * be) / q - (C10544 * C39150) / q +
                          C25946 / q - (C10702 * p) / q;
    const double C39515 = C39269 / q;
    const double C39320 = C10543 * p;
    const double C39271 = C25094 * p;
    const double C39283 = C11438 / q;
    const double C39265 = C24974 * p;
    const double C39944 = C39824 / q;
    const double C39733 = C34041 * p;
    const double C39943 = C39822 / q;
    const double C32570 = (C31015 * be) / q - (C32540 * C39151) / q +
                          C32390 / C17808 + C39801 - C39805 / q;
    const double C34220 = -(C32779 * C39150 + C39805) / q;
    const double C39746 = C34352 * p;
    const double C39936 = C39804 / q;
    const double C39671 = C32750 * p;
    const double C39710 = C33640 * p;
    const double C39704 = C33404 * p;
    const double C32227 =
        (C29325 * be) / q - (C32375 * C39151) / q + C39780 - C39790 / q;
    const double C32839 = -(C32196 * C39150 + C39790) / q;
    const double C39633 = C32136 * p;
    const double C39915 = C39714 / q;
    const double C39748 = C34410 * p;
    const double C39911 = C39706 / q;
    const double C39707 = C33522 * p;
    const double C39705 = C33463 * p;
    const double C15799 = C39662 - (C33151 * C39150) / q - C39702 / q;
    const double C15935 = -(C33343 * C39149 + C39702) / q;
    const double C16061 = -(C33670 * C39149 + C39718) / q;
    const double C16862 =
        C32823 / C17808 - (C35077 * C39150) / q + C39766 - C39718 / q;
    const double C33758 = (C37222 * be) / q - (C33729 * C39151) / q + C39716 +
                          C39832 - (C37228 * p) / q;
    const double C39906 = C39695 / q;
    const double C33700 =
        C39747 - (C34381 * C39150) / q + C39832 - (C37197 * p) / q;
    const double C39728 = C16148 / C17808;
    const double C16464 = (C20518 * be) / q - (C16446 * C39151) / q +
                          (3 * C16148) / C17808 - (C34644 * p) / q;
    const double C15998 =
        C39711 - (C33670 * C39150) / q + C39708 - (C33671 * p) / q;
    const double C39771 = C34056 / C17808;
    const double C16168 = (C5854 * be) / q - (C16148 * C39151) / q +
                          C34056 / q - (C16446 * p) / q;
    const double C39905 = C39694 / q;
    const double C16079 = -(C33168 * C39149 + C39694) / q;
    const double C16147 = C39723 - (C33980 * C39150) / q - C39730 / q;
    const double C16365 = -(C33997 * C39149 + C39730) / q;
    const double C39731 = C34012 * p;
    const double C15790 = -(C33167 * C39149 + C39701) / q;
    const double C16680 = C39764 - (C32615 * C39150) / q - C39701 / q;
    const double C15926 = -(C15944 * C39149 + C33551 * p) / q;
    const double C17006 = C39770 - (C32823 * C39150) / q - C39772 / q;
    const double C17469 = -(C33669 * C39149 + C39772) / q;
    const double C33094 =
        C39767 - (C33773 * C39150) / q + C39815 - (C36753 * p) / q;
    const double C39897 = C39673 / q;
    const double C39727 = C33922 * p;
    const double C39893 = C39664 / q;
    const double C39895 = C39670 / q;
    const double C39654 = C32511 * p;
    const double C39685 = C15962 * p;
    const double C39684 = C32974 * p;
    const double C39890 = C39656 / q;
    const double C15640 = -(C32212 * C39150 + C39656) / q;
    const double C39726 = C16266 * p;
    const double C39725 = C33893 * p;
    const double C39887 = C39650 / q;
    const double C39683 = C32944 * p;
    const double C33270 = C39659 - (C32630 * C39150) / q - (C36870 * p) / q;
    const double C15352 = -(C32211 * C39150 + C39642) / q;
    const double C16671 = C39763 - (C32615 * C39149) / q - C39642 / q;
    const double C32452 =
        C39765 - (C35020 * C39149) / q + C39801 - (C36215 * p) / q;
    const double C39709 = C17370 / q;
    const double C15351 = -(C32195 * C39150 + C39641) / q;
    const double C15487 = C39662 - (C32390 * C39149) / q - C39641 / q;
    const double C39755 = C16826 * p;
    const double C32808 = (C30605 * be) / q - (C32779 * C39151) / q + C39674 +
                          C39811 - (C36494 * p) / q;
    const double C39882 = C39636 / q;
    const double C32691 =
        C39721 - (C33863 * C39149) / q + C39811 - (C36421 * p) / q;
    const double C39720 = C16108 / C17808;
    const double C16428 = (C20456 * be) / q - (C16410 * C39151) / q +
                          (3 * C16108) / C17808 - (C34585 * p) / q;
    const double C15514 =
        C39666 - (C32645 * C39149) / q + C39667 - (C32662 * p) / q;
    const double C39769 = C33937 / C17808;
    const double C16128 = (C5810 * be) / q - (C16108 * C39151) / q +
                          C33937 / q - (C16410 * p) / q;
    const double C39881 = C39635 / q;
    const double C39722 = C16107 * p;
    const double C32256 = (C29530 * be) / q - (C32196 * C39151) / q + C39791 +
                          C39781 - (C36025 * p) / q;
    const double C32600 = C39791 - (C32375 * C39150) / q - (C36334 * p) / q;
    const double C39665 = C16970 / q;
    const double C39627 = C32016 * p;
    const double C32496 =
        C39652 - (C32481 * C39150) / q + C39800 - (C36245 * p) / q;
    const double C39876 = C39630 / q;
    const double C32437 =
        C39679 - (C32914 * C39149) / q + C39800 - (C36200 * p) / q;
    const double C39678 = C15660 / C17808;
    const double C15670 = C32959 / q - (C15660 * C39150) / q - (C15818 * p) / q;
    const double C15827 =
        (3 * C15660) / C17808 - (C15818 * C39150) / q - (C33389 * p) / q;
    const double C39875 = C39629 / q;
    const double C39631 = C32107 * p;
    const double C39680 = C15659 * p;
    const double C38915 = C18115 * p;
    const double C4973 = C38895 - (C18054 * C39151) / q - C39156;
    const double C5319 =
        (C18728 * be) / q - (C18071 * C39149) / q + C38953 - C39156;
    const double C38951 = C18683 * p;
    const double C4974 = C38896 - (C18070 * C39151) / q - C39157;
    const double C6838 =
        (C21368 * be) / q - (C18732 * C39149) / q + C39051 - C39157;
    const double C5017 = (C18173 * be) / q - (C5039 * C39149) / q +
                         (3 * C5040) / C17808 - (C18177 * p) / q;
    const double C5018 =
        (C5036 * be) / q - (C5040 * C39149) / q + C18192 / q - (C5039 * p) / q;
    const double C5130 = C38921 - (C18254 * C39151) / q - C39163;
    const double C6679 =
        (C21137 * be) / q - (C20830 * C39149) / q + C19719 / C17808 - C39163;
    const double C5184 = C38939 - (C18254 * C39150) / q - C39166;
    const double C5492 =
        (C19182 * be) / q - (C19034 * C39149) / q + C38976 - C39166;
    const double C5274 = C38939 - (C18071 * C39151) / q + C38943 - C39171;
    const double C5956 =
        (C20156 * be) / q - (C20006 * C39149) / q + C39017 - C39171;
    const double C5493 = (C19197 * be) / q - (C19050 * C39149) / q - C39185;
    const double C6416 = C39040 - (C18486 * C39150) / q - C39185;
    const double C5437 = C38957 - (C19034 * C39151) / q - C39179;
    const double C5783 = (C19701 * be) / q - (C19051 * C39149) / q - C39179;
    const double C6688 = C18732 / C17808 - (C20830 * C39150) / q - C39179;
    const double C38993 = C19657 * p;
    const double C5438 = C38958 - (C19050 * C39151) / q - C39180;
    const double C7264 = C39051 - (C19719 * C39150) / q - C39180;
    const double C5503 = C38938 - (C19034 * C39150) / q - C39186;
    const double C5639 = (C19457 * be) / q - (C19231 * C39149) / q - C39186;
    const double C5594 = C38979 - (C19231 * C39151) / q - C39187;
    const double C5792 = C38995 - (C19051 * C39150) / q - C39187;
    const double C5738 = C38976 - (C19051 * C39151) / q + C38984 - C39193;
    const double C6112 = C39017 - (C20204 * C39150) / q - C39193;
    const double C39035 = C19081 / C17808;
    const double C5957 = (C20171 * be) / q - (C20023 * C39149) / q - C39206;
    const double C6788 = C39040 - (C18732 * C39151) / q + C39046 - C39206;
    const double C5901 = C38953 - (C20006 * C39151) / q + C38999 - C39204;
    const double C6247 = (C20669 * be) / q - (C20024 * C39149) / q - C39204;
    const double C6103 = (C20427 * be) / q - (C20204 * C39149) / q - C39210;
    const double C6634 =
        C18486 / C17808 - (C20830 * C39151) / q + C39042 - C39210;
    const double C5946 =
        (C5964 * be) / q - (C5968 * C39149) / q - (C5967 * p) / q;
    const double C38991 = C7204 / q;
    const double C39014 = C6058 * p;
    const double C6356 = C39029 - (C18486 * C39151) / q - C39211;
    const double C7254 = (C21596 * be) / q - (C19719 * C39149) / q - C39211;
    const double C6828 = (C6845 * be) / q - (C6848 * C39149) / q +
                         C21356 / C17808 - (C5328 * p) / q;
    const double C38913 = C18086 * p;
    const double C5310 =
        (C18712 * be) / q - (C5328 * C39149) / q + C6848 / q - (C18716 * p) / q;
    const double C18423 = C39076 - (C18501 * C39151) / q - C39221;
    const double C21125 = C18071 / C17808 - (C18408 * C39150) / q - C39221;
    const double C38936 = C18438 * p;
    const double C5945 = (C20126 * be) / q - (C5967 * C39149) / q +
                         C5968 / C17808 - (C20130 * p) / q;
    const double C19066 = C39090 - (C19215 * C39151) / q - C39230;
    const double C19689 = C39044 - (C19035 * C39150) / q - C39230;
    const double C19096 =
        C19034 / C17808 - (C19035 * C39151) / q + C39091 - C39231;
    const double C20415 = C20006 / C17808 - (C20189 * C39150) / q - C39231;
    const double C39188 = C38983 / q;
    const double C39013 = C20039 * p;
    const double C6238 =
        (C20653 * be) / q - (C6256 * C39149) / q - (C20657 * p) / q;
    const double C39205 = C39015 / q;
    const double C39049 = C20083 / C17808;
    const double C5924 =
        C20083 / q - (C5902 * C39151) / q + C20023 / q - (C6202 * p) / q;
    const double C6211 = -(C6202 * C39150 + C39026) / q;
    const double C39279 = C25243 * p;
    const double C10235 = (C18204 * be) / q - (C25182 * C39150) / q - C39525;
    const double C10371 = C39302 - (C25377 * C39149) / q - C39525;
    const double C10236 = (C18220 * be) / q - (C25198 * C39150) / q - C39526;
    const double C11555 = C39403 - (C25602 * C39149) / q - C39526;
    const double C10380 =
        (C18482 * be) / q - (C25377 * C39150) / q + C39303 - C39533;
    const double C10673 = C39340 - (C26138 * C39149) / q - C39533;
    const double C10663 =
        C10684 / C17808 - (C10683 * C39149) / q - (C26257 * p) / q;
    const double C10664 = -(C10684 * C39149 + C10683 * p) / q;
    const double C39312 = C11926 / q;
    const double C39375 = C11071 * p;
    const double C27119 = C39408 - (C27264 * C39151) / q + C39477 - C39596;
    const double C27719 = (C30902 * be) / q - (C27087 * C39150) / q - C39596;
    const double C11357 = -(C11366 * C39149 + C39379) / q;
    const double C39413 = C27163 / C17808;
    const double C11092 =
        C27163 / q - (C11072 * C39151) / q + C27103 / q - (C11366 * p) / q;
    const double C39759 = C33198 / C17808;
    const double C39672 = C17042 / q;
    const double C39735 = C16187 * p;
    const double C39762 = C16898 * p;
    const double C16228 = -(C16248 * C39149 + C16247 * p) / q;
    const double C39715 = C17442 / q;
    const double C39738 = C16338 * p;
    const double C39655 = C16626 / q;
    const double C39737 = C34132 * p;
    const double C16518 = -(C16536 * C39149 + C34732 * p) / q;
    const double C16473 = -(C16482 * C39149 + C39739) / q;
    const double C39773 = C34176 / C17808;
    const double C16208 = (C5898 * be) / q - (C16188 * C39151) / q +
                          C34176 / q + C34115 / q - (C16482 * p) / q;
    const double C16491 = -(C16482 * C39150 + C39750) / q;
    const double C4929 = C38895 - (C17933 * C39150) / q - C39152;
    const double C5157 =
        (C18450 * be) / q - (C17950 * C39149) / q + C38937 - C39152;
    const double C38929 = C18363 * p;
    const double C4930 = C38896 - (C17949 * C39150) / q - C39153;
    const double C6386 =
        (C20870 * be) / q - (C18454 * C39149) / q + C18929 / C17808 - C39153;
    const double C5094 =
        C17949 / C17808 - (C17950 * C39150) / q + C38921 - C39161;
    const double C5470 =
        (C19122 * be) / q - (C18913 * C39149) / q + C18930 / C17808 - C39161;
    const double C5238 = C38943 - (C18594 * C39150) / q - C39168;
    const double C6661 =
        (C21106 * be) / q - (C21009 * C39149) / q + C19567 / C17808 - C39168;
    const double C5471 = (C19137 * be) / q - (C18930 * C39149) / q - C39184;
    const double C6316 =
        C18161 / C17808 - (C18454 * C39150) / q + C39029 - C39184;
    const double C5393 = C38937 - (C18913 * C39150) / q + C38957 - C39176;
    const double C5621 = (C19426 * be) / q - (C18931 * C39149) / q - C39176;
    const double C38967 = C5702 * p;
    const double C5765 = (C19669 * be) / q - (C19568 * C39149) / q - C39195;
    const double C6598 =
        C18699 / C17808 - (C21009 * C39150) / q + C39042 - C39195;
    const double C5857 = C38999 - (C19886 * C39150) / q - C39199;
    const double C6085 = (C20396 * be) / q - (C19903 * C39149) / q - C39199;
    const double C39008 = C6022 * p;
    const double C38989 = C19598 * p;
    const double C6748 = C39046 - (C18699 * C39150) / q - C39213;
    const double C7234 = (C21567 * be) / q - (C19567 * C39149) / q - C39213;
    const double C38966 = C18976 * p;
    const double C38988 = C7164 / q;
    const double C39154 = C38907 / q;
    const double C39169 = C38930 / q;
    const double C39170 = C38947 / q;
    const double C39177 = C38965 / q;
    const double C5576 = -(C5558 * C39151 + C38981) / q;
    const double C39200 = C39007 / q;
    const double C39202 = C39009 / q;
    const double C39208 = C39024 / q;
    const double C39289 = C11474 / q;
    const double C39327 = C10583 * p;
    const double C39331 = C10882 * p;
    const double C39398 = C11746 * p;
    const double C39309 = C11890 / q;
    const double C39330 = C26081 * p;
    const double C39352 = C12290 / q;
    const double C10729 = -(C10738 * C39149 + C39329) / q;
    const double C10756 = -(C10738 * C39151 + C39345) / q;
    const double C39649 = C16590 / q;
    const double C39687 = C15699 * p;
    const double C39732 = C16302 * p;
    const double C39712 = C17406 / q;
    const double C15845 = -(C15854 * C39149 + C39689) / q;
    const double C38900 = C5058 * p;
    const double C38904 = C5202 * p;
    const double C38923 = C18303 * p;
    const double C39173 = C38956 / q;
    const double C5372 = -(C5350 * C39151 + C38961) / q;
    const double C38944 = C18564 * p;
    const double C39196 = C38998 / q;
    const double C5825 = -(C5814 * C39150 + C39002) / q;
    const double C7144 = C39028 - (C7124 * C39151) / q - C39002 / q;
    const double C38924 = C18318 * p;
    const double C6296 = -(C6276 * C39151 + C39031) / q;
    const double C6718 = -(C6708 * C39150 + C39031) / q;
    const double C7114 =
        (C7121 * be) / q - (C7124 * C39149) / q + C20949 / q - C39031 / q;
    const double C7134 = C39045 - (C7124 * C39150) / q - C38961 / q;
    const double C4896 = -(C4885 * C39150 + C38899) / q;
    const double C5049 = (C18266 * be) / q - (C5058 * C39149) / q + C38919 +
                         C18270 / q - C38899 / q;
    const double C4907 = -(C4885 * C39151 + C38903) / q;
    const double C5193 = (C18513 * be) / q - (C5202 * C39149) / q + C38941 +
                         C18517 / q - C38903 / q;
    const double C39174 = C38959 / q;
    const double C39189 = C38960 / q;
    const double C5371 = -(C5349 * C39151 + C38960) / q;
    const double C5540 = -(C5522 * C39151 + C38980) / q;
    const double C5675 = C38985 - (C5666 * C39150) / q - C38980 / q;
    const double C39190 = C38986 / q;
    const double C39207 = C39001 / q;
    const double C5824 = -(C5813 * C39150 + C39001) / q;
    const double C39197 = C39003 / q;
    const double C6004 = C38985 - (C5986 * C39151) / q - C39022 / q;
    const double C6139 = -(C6130 * C39150 + C39022) / q;
    const double C39268 = C10398 * p;
    const double C10115 = -(C10095 * C39151 + C39267) / q;
    const double C10389 =
        C39305 - (C10398 * C39149) / q + C25632 / q - C39267 / q;
    const double C39626 = C15370 * p;
    const double C15221 = -(C15211 * C39150 + C39625) / q;
    const double C15361 =
        C39643 - (C15370 * C39149) / q + C32405 / q - C39625 / q;
    const double C26200 =
        C26138 / C17808 - (C26139 * C39151) / q + C39455 - C39591;
    const double C27484 =
        (C30754 * be) / q - (C27264 * C39150) / q + C27086 / C17808 - C39591;
    const double C26170 = C39454 - (C26314 * C39151) / q - C39589;
    const double C26775 =
        (C30256 * be) / q - (C26139 * C39150) / q + C39408 - C39589;
    const double C25557 =
        C25377 / C17808 - (C25527 * C39151) / q + C39441 - C39582;
    const double C27207 = (C30605 * be) / q - (C25766 * C39150) / q - C39582;
    const double C39564 = C39386 / q;
    const double C25542 = C39440 - (C25617 * C39151) / q - C39581;
    const double C28177 =
        (C31015 * be) / q - (C25527 * C39150) / q + C25199 / C17808 - C39581;
    const double C39550 = C39350 / q;
    const double C10720 = -(C10702 * C39151 + C39344) / q;
    const double C25214 = C39420 - (C25362 * C39151) / q - C39577;
    const double C25826 = (C29530 * be) / q - (C25183 * C39150) / q - C39577;
    const double C11222 = C39359 - (C27279 * C39151) / q + C39385 - C39566;
    const double C11420 = (C20669 * be) / q - (C27104 * C39150) / q - C39566;
    const double C11132 = (C20171 * be) / q - (C27103 * C39150) / q - C39563;
    const double C12326 = C39403 - (C26804 * C39151) / q + C39416 - C39563;
    const double C39567 = C39390 / q;
    const double C11131 = (C20156 * be) / q - (C27086 * C39150) / q - C39562;
    const double C11782 =
        C25602 / C17808 - (C27890 * C39151) / q + C39406 - C39562;
    const double C11321 = -(C11330 * C39149 + C39373) / q;
    const double C11510 = C39393 - (C25602 * C39151) / q - C39568;
    const double C11980 = (C21368 * be) / q - (C25841 * C39150) / q - C39568;
    const double C26185 = C39439 - (C26329 * C39151) / q - C39590;
    const double C28405 = (C31058 * be) / q - (C27102 * C39150) / q - C39590;
    const double C39372 = C11186 * p;
    const double C10918 = C39340 - (C26155 * C39151) / q + C39348 - C39552;
    const double C11276 =
        (C20427 * be) / q - (C27279 * C39150) / q + C39381 - C39552;
    const double C39565 = C39388 / q;
    const double C10774 = C39343 - (C26330 * C39151) / q - C39547;
    const double C10972 =
        (C19701 * be) / q - (C26155 * C39150) / q + C39359 - C39547;
    const double C39548 = C39347 / q;
    const double C39357 = C26745 * p;
    const double C10624 = C39322 - (C26154 * C39151) / q - C39544;
    const double C12380 =
        (C21596 * be) / q - (C26804 * C39150) / q + C39415 - C39544;
    const double C39353 = C26687 * p;
    const double C10623 = C39321 - (C26138 * C39151) / q - C39543;
    const double C11836 =
        (C21137 * be) / q - (C27890 * C39150) / q + C25841 / C17808 - C39543;
    const double C39369 = C11031 * p;
    const double C39558 = C39371 / q;
    const double C11177 = -(C11186 * C39149 + C39371) / q;
    const double C10470 = C39303 - (C25199 * C39151) / q + C39307 - C39539;
    const double C11121 = C39381 - (C27086 * C39149) / q - C39539;
    const double C39557 = C39367 / q;
    const double C10434 =
        (C18695 * be) / q - (C25707 * C39150) / q + C39307 - C39536;
    const double C11809 = C26657 / C17808 - (C28064 * C39149) / q - C39536;
    const double C10564 = -(C10544 * C39151 + C39325) / q;
    const double C12263 =
        (C7121 * be) / q - (C12254 * C39150) / q + C39409 - C39325 / q;
    const double C39549 = C39324 / q;
    const double C10563 = -(C10543 * C39151 + C39324) / q;
    const double C10326 = C39285 - (C25377 * C39151) / q - C39530;
    const double C10524 = (C18728 * be) / q - (C25199 * C39150) / q - C39530;
    const double C11827 = C26804 / C17808 - (C27890 * C39149) / q - C39530;
    const double C39538 = C39311 / q;
    const double C39556 = C39366 / q;
    const double C39555 = C39365 / q;
    const double C10290 = (C18450 * be) / q - (C25079 * C39150) / q +
                          C25078 / C17808 + C39285 - C39528;
    const double C10653 = C26034 / C17808 - (C26018 * C39149) / q - C39528;
    const double C39542 = C39323 / q;
    const double C39537 = C39294 / q;
    const double C39288 = C25439 * p;
    const double C10855 =
        (C19487 * be) / q - (C10846 * C39150) / q + C39349 - C39344 / q;
    const double C39570 = C39395 / q;
    const double C11456 = -(C11438 * C39151 + C39395) / q;
    const double C39315 = C25795 * p;
    const double C10176 = C39264 - (C25198 * C39151) / q - C39520;
    const double C11971 = C39415 - (C25841 * C39149) / q - C39520;
    const double C39308 = C25678 * p;
    const double C10175 = C39263 - (C25182 * C39151) / q - C39519;
    const double C10515 = C39317 - (C25199 * C39149) / q - C39519;
    const double C39554 = C39362 / q;
    const double C39293 = C25483 * p;
    const double C10136 =
        (C18157 * be) / q - (C25078 * C39150) / q + C39264 - C39516;
    const double C11537 = C26035 / C17808 - (C25572 * C39149) / q - C39516;
    const double C39287 = C25424 * p;
    const double C39266 = C10254 * p;
    const double C10135 =
        (C18141 * be) / q - (C25062 * C39150) / q + C39263 - C39515;
    const double C10353 = C39301 - (C25079 * C39149) / q - C39515;
    const double C39541 = C39320 / q;
    const double C39517 = C39271 / q;
    const double C39513 = C39265 / q;
    const double C33213 = (C30256 * be) / q - (C33152 * C39151) / q +
                          C33151 / C17808 + C39815 - C39944;
    const double C34497 = C34099 / C17808 - (C34277 * C39150) / q - C39944;
    const double C16437 = -(C16446 * C39149 + C39733) / q;
    const double C33183 =
        (C30079 * be) / q - (C33327 * C39151) / q + C39814 - C39943;
    const double C33788 = C39768 - (C33152 * C39150) / q - C39943;
    const double C39660 = C32570 * p;
    const double C16227 =
        C16248 / C17808 - (C16247 * C39149) / q - (C34220 * p) / q;
    const double C16419 = -(C16410 * C39150 + C39746) / q;
    const double C32555 =
        (C29867 * be) / q - (C32630 * C39151) / q + C39800 - C39936;
    const double C35190 = C32212 / C17808 - (C32540 * C39150) / q - C39936;
    const double C39896 = C39671 / q;
    const double C39913 = C39710 / q;
    const double C39909 = C39704 / q;
    const double C39637 = C32227 * p;
    const double C39879 = C39633 / q;
    const double C16034 =
        (C19701 * be) / q - (C33168 * C39151) / q + C39700 + C39708 - C39915;
    const double C16392 = C39741 - (C34292 * C39150) / q - C39915;
    const double C39922 = C39748 / q;
    const double C15890 =
        (C19457 * be) / q - (C33343 * C39151) / q + C39703 - C39911;
    const double C16088 = C39719 - (C33168 * C39150) / q - C39911;
    const double C39912 = C39707 / q;
    const double C39910 = C39705 / q;
    const double C15780 = -(C15800 * C39149 + C15799 * p) / q;
    const double C39758 = C16862 * p;
    const double C39717 = C33758 * p;
    const double C15740 =
        (C19197 * be) / q - (C33167 * C39151) / q + C39682 - C39906;
    const double C17496 = C39775 - (C33817 * C39150) / q - C39906;
    const double C39713 = C33700 * p;
    const double C39691 = C15998 * p;
    const double C15739 =
        (C19182 * be) / q - (C33151 * C39151) / q + C39681 - C39905;
    const double C16952 = C32854 / C17808 - (C34903 * C39150) / q - C39905;
    const double C39729 = C16147 * p;
    const double C39919 = C39731 / q;
    const double C16293 = -(C16302 * C39149 + C39731) / q;
    const double C39669 = C17006 / q;
    const double C39690 = C33094 * p;
    const double C15586 =
        (C18728 * be) / q - (C32212 * C39151) / q + C39663 + C39667 - C39897;
    const double C16237 = C39741 - (C34099 * C39149) / q - C39897;
    const double C39918 = C39727 / q;
    const double C15496 = C39663 - (C32390 * C39150) / q - C39893;
    const double C15789 = C39700 - (C33151 * C39149) / q - C39893;
    const double C15550 = C39667 - (C32720 * C39150) / q - C39895;
    const double C16925 = C33669 / C17808 - (C35077 * C39149) / q - C39895;
    const double C39889 = C39654 / q;
    const double C39902 = C39685 / q;
    const double C39901 = C39684 / q;
    const double C15442 =
        (C18482 * be) / q - (C32390 * C39151) / q + C39645 - C39890;
    const double C16943 = C33817 / C17808 - (C34903 * C39149) / q - C39890;
    const double C15622 = C17096 / q - (C15640 * C39149) / q - (C32839 * p) / q;
    const double C17078 =
        C35418 / C17808 - (C17096 * C39149) / q - (C15640 * p) / q;
    const double C16118 = -(C16108 * C39150 + C39726) / q;
    const double C17388 =
        (C7121 * be) / q - (C17370 * C39151) / q + C39752 - C39726 / q;
    const double C39921 = C39725 / q;
    const double C16117 = -(C16107 * C39150 + C39725) / q;
    const double C15406 =
        C32091 / C17808 - (C32092 * C39150) / q + C39645 - C39887;
    const double C15769 = C33048 / C17808 - (C33031 * C39149) / q - C39887;
    const double C39900 = C39683 / q;
    const double C15779 =
        C15800 / C17808 - (C15799 * C39149) / q - (C33270 * p) / q;
    const double C39648 = C32452 * p;
    const double C16284 =
        (C20216 * be) / q - (C16266 * C39151) / q + C39709 - C39746 / q;
    const double C15331 =
        (3 * C15352) / C17808 - (C15351 * C39149) / q - (C32315 * p) / q;
    const double C15332 = C32330 / q - (C15352 * C39149) / q - (C15351 * p) / q;
    const double C39923 = C39755 / q;
    const double C16979 = -(C16970 * C39150 + C39755) / q;
    const double C39675 = C32808 * p;
    const double C15292 =
        (C18220 * be) / q - (C32211 * C39151) / q + C39624 - C39882;
    const double C17087 = C39775 - (C32854 * C39149) / q - C39882;
    const double C39668 = C32691 * p;
    const double C39628 = C15514 * p;
    const double C15291 =
        (C18204 * be) / q - (C32195 * C39151) / q + C39623 - C39881;
    const double C15631 = C39677 - (C32212 * C39149) / q - C39881;
    const double C39917 = C39722 / q;
    const double C39639 = C32256 * p;
    const double C39873 = C39627 / q;
    const double C39653 = C32496 * p;
    const double C15252 = C39624 - (C32091 * C39150) / q - C39876;
    const double C16653 = C33047 / C17808 - (C32585 * C39149) / q - C39876;
    const double C39647 = C32437 * p;
    const double C15251 = C39623 - (C32075 * C39150) / q - C39875;
    const double C15469 = C39661 - (C32092 * C39149) / q - C39875;
    const double C39877 = C39631 / q;
    const double C39899 = C39680 / q;
    const double C39158 = C38915 / q;
    const double C39172 = C38951 / q;
    const double C38933 = C4974 / C17808;
    const double C4962 = (C18020 * be) / q - (C4973 * C39149) / q +
                         (3 * C4974) / C17808 - (C18024 * p) / q;
    const double C4963 =
        (C4970 * be) / q - (C4974 * C39149) / q + C18039 / q - (C4973 * p) / q;
    const double C38914 = C5130 * p;
    const double C38916 = C5274 * p;
    const double C5166 =
        (C18466 * be) / q - (C5184 * C39149) / q + C6416 / q - (C18470 * p) / q;
    const double C6396 = (C6413 * be) / q - (C6416 * C39149) / q +
                         C20888 / C17808 - (C5184 * p) / q;
    const double C38969 = C5437 * p;
    const double C39194 = C38993 / q;
    const double C38968 = C5438 / C17808;
    const double C7244 =
        (C7261 * be) / q - (C7264 * C39149) / q - (C6688 * p) / q;
    const double C5481 = (C19152 * be) / q - (C5503 * C39149) / q +
                         C5504 / C17808 - (C19156 * p) / q;
    const double C5482 =
        (C5500 * be) / q - (C5504 * C39149) / q - (C5503 * p) / q;
    const double C5449 = C19081 / q - (C5438 * C39150) / q - (C5594 * p) / q;
    const double C5603 =
        (3 * C5438) / C17808 - (C5594 * C39150) / q - (C19399 * p) / q;
    const double C38974 = C5738 * p;
    const double C38948 = C6788 / q;
    const double C39011 = C5901 * p;
    const double C39038 = C6634 * p;
    const double C6076 =
        C38991 - (C6058 * C39151) / q + C20204 / q - C39026 / q;
    const double C5913 = -(C5902 * C39150 + C39014) / q;
    const double C7224 = C39035 - (C7204 * C39151) / q + C38995 - C39014 / q;
    const double C38931 = C6356 / q;
    const double C4984 = -(C4973 * C39150 + C38913) / q;
    const double C38934 = C18423 * p;
    const double C6670 = (C21121 * be) / q - (C6688 * C39149) / q +
                         C7264 / C17808 - (C21125 * p) / q;
    const double C39165 = C38936 / q;
    const double C5283 = -(C5274 * C39150 + C38936) / q;
    const double C38972 = C19066 * p;
    const double C5774 =
        (C19685 * be) / q - (C5792 * C39149) / q - (C19689 * p) / q;
    const double C38973 = C19096 * p;
    const double C6094 =
        (C20411 * be) / q - (C6112 * C39149) / q - (C20415 * p) / q;
    const double C5612 = C19231 / q - (C5594 * C39151) / q - C39188;
    const double C5747 = C38991 - (C5738 * C39150) / q - C39188;
    const double C39209 = C39013 / q;
    const double C5912 = -(C5901 * C39150 + C39013) / q;
    const double C6193 = (C20578 * be) / q - (C6202 * C39149) / q - C39205;
    const double C39523 = C39279 / q;
    const double C10215 =
        (3 * C10236) / C17808 - (C10235 * C39149) / q - (C25302 * p) / q;
    const double C10216 = C25317 / q - (C10236 * C39149) / q - (C10235 * p) / q;
    const double C10362 = C11564 / q - (C10380 * C39149) / q - (C25587 * p) / q;
    const double C11546 =
        C27947 / C17808 - (C11564 * C39149) / q - (C10380 * p) / q;
    const double C11091 =
        C39312 - (C11071 * C39151) / q + C27086 / q - C39379 / q;
    const double C11062 = -(C11072 * C39149 + C39375) / q;
    const double C11944 = C39401 - (C11926 * C39151) / q + C39317 - C39375 / q;
    const double C39377 = C27119 * p;
    const double C16207 = (C19974 * be) / q - (C16187 * C39151) / q + C39672 +
                          C34099 / q - C39739 / q;
    const double C16178 = -(C16188 * C39149 + C39735) / q;
    const double C17060 =
        (C6785 * be) / q - (C17042 * C39151) / q + C39761 + C39677 - C39735 / q;
    const double C16644 =
        (C6353 * be) / q - (C16626 * C39151) / q + C39662 - C39762 / q;
    const double C17051 = -(C17042 * C39150 + C39762) / q;
    const double C17433 = -(C17442 * C39149 + C39762) / q;
    const double C16356 = (C20337 * be) / q - (C16338 * C39151) / q + C39715 +
                          C34292 / q - C39750 / q;
    const double C16198 = -(C16188 * C39150 + C39738) / q;
    const double C17460 =
        (C7201 * be) / q - (C17442 * C39151) / q + C39759 + C39719 - C39738 / q;
    const double C16197 = -(C16187 * C39150 + C39737) / q;
    const double C16329 = -(C16338 * C39149 + C39737) / q;
    const double C16916 = (C21049 * be) / q - (C16898 * C39151) / q +
                          C16626 / C17808 + C39768 - C39737 / q;
    const double C4951 = -(C4929 * C39151 + C38909) / q;
    const double C39162 = C38929 / q;
    const double C38927 = C4930 / C17808;
    const double C4918 = (C17899 * be) / q - (C4929 * C39149) / q +
                         (3 * C4930) / C17808 - (C17903 * p) / q;
    const double C4919 =
        (C4926 * be) / q - (C4930 * C39149) / q + C17918 / q - (C4929 * p) / q;
    const double C38908 = C5094 * p;
    const double C5112 = -(C5094 * C39151 + C38930) / q;
    const double C38910 = C5238 * p;
    const double C38925 = C6316 / q;
    const double C38963 = C5393 * p;
    const double C5416 = -(C5394 * C39151 + C38967) / q;
    const double C7174 = C39047 - (C7164 * C39150) / q + C38987 - C38967 / q;
    const double C39034 = C6598 * p;
    const double C39005 = C5857 * p;
    const double C39201 = C39008 / q;
    const double C39192 = C38989 / q;
    const double C38945 = C6748 / q;
    const double C39191 = C38966 / q;
    const double C5415 = -(C5393 * C39151 + C38966) / q;
    const double C5711 =
        C38988 - (C5702 * C39150) / q + C19568 / q - C38981 / q;
    const double C4940 = C17933 / q - (C4929 * C39150) / q - C39154;
    const double C5247 = C18594 / q - (C5238 * C39150) / q - C39169;
    const double C6589 =
        (C20991 * be) / q - (C6598 * C39149) / q + C7164 / C17808 - C39169;
    const double C5846 =
        (C19854 * be) / q - (C5857 * C39149) / q + C39004 - C39170;
    const double C5549 = (C19306 * be) / q - (C5558 * C39149) / q - C39177;
    const double C5868 = C19886 / q - (C5857 * C39150) / q - C39200;
    const double C6013 = (C20278 * be) / q - (C6022 * C39149) / q - C39200;
    const double C6616 = C6316 / C17808 - (C6598 * C39151) / q - C39200;
    const double C6157 = (C20518 * be) / q - (C6166 * C39149) / q - C39202;
    const double C6040 = C38988 - (C6022 * C39151) / q - C39208;
    const double C6175 = C20536 / q - (C6166 * C39150) / q - C39208;
    const double C10593 = (C18881 * be) / q - (C10583 * C39150) / q + C39289 +
                          C26018 / q - C39329 / q;
    const double C10574 = -(C10584 * C39149 + C39327) / q;
    const double C11483 =
        (C6313 * be) / q - (C11474 * C39150) / q + C39397 + C39301 - C39327 / q;
    const double C10604 = -(C10584 * C39151 + C39331) / q;
    const double C12299 =
        (C7161 * be) / q - (C12290 * C39150) / q + C39411 + C39351 - C39331 / q;
    const double C11492 = -(C11474 * C39151 + C39398) / q;
    const double C11899 =
        (C6745 * be) / q - (C11890 * C39150) / q + C39316 - C39398 / q;
    const double C12281 = -(C12290 * C39149 + C39398) / q;
    const double C11051 = C39309 - (C11031 * C39151) / q - C39373 / q;
    const double C10603 = -(C10583 * C39151 + C39330) / q;
    const double C10873 = -(C10882 * C39149 + C39330) / q;
    const double C11755 = (C20991 * be) / q - (C11746 * C39150) / q +
                          C11890 / C17808 + C39407 - C39330 / q;
    const double C10891 = (C19549 * be) / q - (C10882 * C39150) / q + C39352 +
                          C26656 / q - C39345 / q;
    const double C15709 =
        C39649 - (C15699 * C39150) / q + C33031 / q - C39689 / q;
    const double C15690 = -(C15700 * C39149 + C39687) / q;
    const double C16599 = C39757 - (C16590 * C39150) / q + C39661 - C39687 / q;
    const double C39920 = C39732 / q;
    const double C4897 = -(C4886 * C39150 + C38900) / q;
    const double C6266 =
        (C6273 * be) / q - (C6276 * C39149) / q + C39028 + C38920 - C38900 / q;
    const double C4908 = -(C4886 * C39151 + C38904) / q;
    const double C6698 =
        (C6705 * be) / q - (C6708 * C39149) / q + C39045 + C38942 - C38904 / q;
    const double C39160 = C38923 / q;
    const double C5339 =
        (C5346 * be) / q - (C5350 * C39149) / q + C18777 / q - C39173;
    const double C6286 = C39030 - (C6276 * C39150) / q - C39173;
    const double C39167 = C38944 / q;
    const double C5803 =
        (C5810 * be) / q - (C5814 * C39149) / q + C19750 / q - C39196;
    const double C6728 = C39030 - (C6708 * C39151) / q - C39196;
    const double C5076 = -(C5058 * C39151 + C38924) / q;
    const double C5211 = -(C5202 * C39150 + C38924) / q;
    const double C6553 = (C20929 * be) / q - (C6562 * C39149) / q +
                         C7124 / C17808 + C39041 - C38924 / q;
    const double C5360 = C38919 - (C5349 * C39150) / q - C39174;
    const double C5513 =
        (C19243 * be) / q - (C5522 * C39149) / q + C19247 / q - C39174;
    const double C5657 =
        (C19487 * be) / q - (C5666 * C39149) / q + C19491 / q - C39189;
    const double C6571 = C6708 / C17808 - (C6562 * C39150) / q - C39189;
    const double C5684 = C38954 - (C5666 * C39151) / q - C39190;
    const double C5995 = C38996 - (C5986 * C39150) / q - C39190;
    const double C5977 =
        (C20216 * be) / q - (C5986 * C39149) / q + C20220 / q - C39207;
    const double C6580 = C6276 / C17808 - (C6562 * C39151) / q - C39207;
    const double C5835 = C38941 - (C5813 * C39151) / q - C39197;
    const double C6121 =
        (C20456 * be) / q - (C6130 * C39149) / q + C20460 / q - C39197;
    const double C10116 = -(C10096 * C39151 + C39268) / q;
    const double C11845 = C39409 - (C11854 * C39149) / q + C39306 - C39268 / q;
    const double C15222 = -(C15212 * C39150 + C39626) / q;
    const double C16545 = C39752 - (C16554 * C39149) / q + C39644 - C39626 / q;
    const double C39337 = C26200 * p;
    const double C39336 = C26170 * p;
    const double C39300 = C25557 * p;
    const double C11168 = C39349 - (C11150 * C39151) / q - C39564;
    const double C11303 = (C20456 * be) / q - (C11294 * C39150) / q - C39564;
    const double C39298 = C25542 * p;
    const double C10864 = C39318 - (C10846 * C39151) / q - C39550;
    const double C11159 =
        (C20216 * be) / q - (C11150 * C39150) / q + C39360 - C39550;
    const double C39277 = C25214 * p;
    const double C39378 = C11222 * p;
    const double C11402 = -(C11420 * C39149 + C27719 * p) / q;
    const double C39355 = C12326 / q;
    const double C11375 = (C20578 * be) / q - (C11366 * C39150) / q - C39567;
    const double C11111 =
        C11132 / C17808 - (C11131 * C39149) / q - (C27207 * p) / q;
    const double C11112 = -(C11132 * C39149 + C11131 * p) / q;
    const double C39402 = C11782 * p;
    const double C39295 = C11510 / q;
    const double C39399 = C26185 / C17808;
    const double C39559 = C39372 / q;
    const double C39338 = C10918 * p;
    const double C11258 = -(C11276 * C39149 + C27484 * p) / q;
    const double C11204 = C39352 - (C11186 * C39151) / q - C39565;
    const double C11339 =
        (C20518 * be) / q - (C11330 * C39150) / q + C27601 / q - C39565;
    const double C10954 = -(C10972 * C39149 + C26775 * p) / q;
    const double C10792 = C26330 / q - (C10774 * C39151) / q - C39548;
    const double C39553 = C39357 / q;
    const double C39332 = C10624 / C17808;
    const double C10634 = (C5434 * be) / q - (C10624 * C39150) / q +
                          C26185 / q - (C10774 * p) / q;
    const double C10783 = (C19366 * be) / q - (C10774 * C39150) / q +
                          (3 * C10624) / C17808 - (C26494 * p) / q;
    const double C39551 = C39353 / q;
    const double C39333 = C10623 * p;
    const double C11818 =
        C12380 / C17808 - (C11836 * C39149) / q - (C28177 * p) / q;
    const double C12362 = -(C12380 * C39149 + C11836 * p) / q;
    const double C11022 = -(C11032 * C39149 + C39369) / q;
    const double C11908 = C39397 - (C11890 * C39151) / q - C39369 / q;
    const double C11041 =
        (C19854 * be) / q - (C11031 * C39150) / q + C26967 / q - C39558;
    const double C11764 = C11474 / C17808 - (C11746 * C39151) / q - C39558;
    const double C39280 = C10470 * p;
    const double C11011 = C39305 - (C10991 * C39151) / q - C39557;
    const double C11285 = C27527 / q - (C11294 * C39149) / q - C39557;
    const double C39274 = C10434 * p;
    const double C10425 = C39309 - (C10434 * C39149) / q - C39273 / q;
    const double C10837 = C26582 / q - (C10846 * C39149) / q - C39549;
    const double C11719 =
        (C20929 * be) / q - (C11710 * C39150) / q + C11854 / C17808 - C39549;
    const double C39278 = C10326 * p;
    const double C10506 = C11980 / q - (C10524 * C39149) / q - (C25826 * p) / q;
    const double C11962 =
        C28405 / C17808 - (C11980 * C39149) / q - (C10524 * p) / q;
    const double C11021 = C39368 - (C11031 * C39149) / q - C39538;
    const double C11002 = (C5810 * be) / q - (C10992 * C39150) / q - C39556;
    const double C12272 = C39392 - (C12254 * C39151) / q - C39556;
    const double C11001 = (C19731 * be) / q - (C10991 * C39150) / q - C39555;
    const double C11141 = C27294 / q - (C11150 * C39149) / q - C39555;
    const double C11728 = C11438 / C17808 - (C11710 * C39151) / q - C39555;
    const double C39272 = C10290 * p;
    const double C10308 = -(C10290 * C39151 + C39294) / q;
    const double C10553 =
        (C18758 * be) / q - (C10543 * C39150) / q + C39283 - C39542;
    const double C10693 = C26345 / q - (C10702 * C39149) / q - C39542;
    const double C10443 =
        (C18576 * be) / q - (C10434 * C39150) / q + C25707 / q - C39537;
    const double C11737 = C12290 / C17808 - (C11746 * C39149) / q - C39537;
    const double C39534 = C39288 / q;
    const double C10272 = -(C10254 * C39151 + C39288) / q;
    const double C11863 = (C6705 * be) / q - (C11854 * C39150) / q - C39570;
    const double C12245 = C28005 / q - (C12254 * C39149) / q - C39570;
    const double C39540 = C39315 / q;
    const double C39297 = C10176 / C17808;
    const double C39535 = C39308 / q;
    const double C10165 =
        (3 * C10176) / C17808 - (C10175 * C39149) / q - (C25152 * p) / q;
    const double C10166 = C25167 / q - (C10176 * C39149) / q - (C10175 * p) / q;
    const double C10982 = C26834 / q - (C10992 * C39149) / q - C39554;
    const double C11872 = C39394 - (C11854 * C39151) / q - C39554;
    const double C39529 = C39293 / q;
    const double C39291 = C10136 / C17808;
    const double C39527 = C39287 / q;
    const double C39514 = C39266 / q;
    const double C10125 =
        (3 * C10136) / C17808 - (C10135 * C39149) / q - (C25032 * p) / q;
    const double C10126 = C25047 / q - (C10136 * C39149) / q - (C10135 * p) / q;
    const double C10155 = -(C10135 * C39151 + C39273) / q;
    const double C10534 = C25885 / q - (C10544 * C39149) / q - C39541;
    const double C11447 =
        (C6273 * be) / q - (C11438 * C39150) / q + C39394 - C39541;
    const double C10145 =
        (C17899 * be) / q - (C10135 * C39150) / q + C25062 / q - C39517;
    const double C10281 = C39289 - (C10290 * C39149) / q - C39517;
    const double C10105 = (C17773 * be) / q - (C10095 * C39150) / q - C39513;
    const double C10245 = C39283 - (C10254 * C39149) / q + C25392 / q - C39513;
    const double C39697 = C33213 * p;
    const double C39696 = C33183 * p;
    const double C39892 = C39660 / q;
    const double C39658 = C32555 * p;
    const double C16137 = C39728 - (C16147 * C39149) / q - C39896;
    const double C15980 =
        (C19487 * be) / q - (C15962 * C39151) / q + C39678 - C39913;
    const double C16275 = C39720 - (C16266 * C39150) / q - C39913;
    const double C15836 = (C19243 * be) / q - (C15818 * C39151) / q - C39909;
    const double C15971 = C39709 - (C15962 * C39150) / q - C39909;
    const double C39698 = C16034 * p;
    const double C16374 = -(C16392 * C39149 + C34497 * p) / q;
    const double C16320 =
        (C20278 * be) / q - (C16302 * C39151) / q + C39712 - C39922;
    const double C16455 = C34614 / q - (C16446 * C39150) / q - C39922;
    const double C16070 = -(C16088 * C39149 + C33788 * p) / q;
    const double C15908 =
        (C19366 * be) / q - (C15890 * C39151) / q + C33343 / q - C39912;
    const double C16043 = C39715 - (C16034 * C39150) / q - C39912;
    const double C15872 = (C19306 * be) / q - (C15854 * C39151) / q - C39910;
    const double C16007 = C39712 - (C15998 * C39150) / q + C33670 / q - C39910;
    const double C39924 = C39758 / q;
    const double C17397 = -(C17406 * C39149 + C39758) / q;
    const double C39916 = C39717 / q;
    const double C39692 = C15740 / C17808;
    const double C15750 = C33198 / q - (C15740 * C39150) / q - (C15890 * p) / q;
    const double C15899 =
        (3 * C15740) / C17808 - (C15890 * C39150) / q - (C33507 * p) / q;
    const double C39914 = C39713 / q;
    const double C39904 = C39691 / q;
    const double C39693 = C15739 * p;
    const double C16934 =
        C17496 / C17808 - (C16952 * C39149) / q - (C35190 * p) / q;
    const double C17478 = -(C17496 * C39149 + C16952 * p) / q;
    const double C16138 = -(C16148 * C39149 + C39729) / q;
    const double C17024 =
        (C6745 * be) / q - (C17006 * C39151) / q + C39757 - C39729 / q;
    const double C16157 = C33980 / q - (C16147 * C39150) / q - C39919;
    const double C16880 =
        (C20991 * be) / q - (C16862 * C39151) / q + C16590 / C17808 - C39919;
    const double C16167 =
        (C19854 * be) / q - (C16147 * C39151) / q + C39669 - C39733 / q;
    const double C39903 = C39690 / q;
    const double C15989 = -(C15998 * C39149 + C39690) / q;
    const double C39640 = C15586 * p;
    const double C15595 = -(C15586 * C39150 + C39660) / q;
    const double C16127 =
        (C19731 * be) / q - (C16107 * C39151) / q + C39665 - C39918;
    const double C16401 = C34540 / q - (C16410 * C39149) / q - C39918;
    const double C15478 = C16680 / q - (C15496 * C39149) / q - (C32600 * p) / q;
    const double C16662 =
        C34960 / C17808 - (C16680 * C39149) / q - (C15496 * p) / q;
    const double C39634 = C15550 * p;
    const double C15541 = C39669 - (C15550 * C39149) / q - C39879;
    const double C15559 = C32720 / q - (C15550 * C39150) / q - C39889;
    const double C16853 = C17406 / C17808 - (C16862 * C39149) / q - C39889;
    const double C15680 = (C5346 * be) / q - (C15660 * C39151) / q - C39902;
    const double C17379 = C39769 - (C17370 * C39150) / q - C39902;
    const double C15679 = (C18758 * be) / q - (C15659 * C39151) / q - C39901;
    const double C15953 = C33595 / q - (C15962 * C39149) / q - C39901;
    const double C16835 = C16970 / C17808 - (C16826 * C39150) / q - C39901;
    const double C39638 = C15442 * p;
    const double C15433 = C39655 - (C15442 * C39149) / q - C39637 / q;
    const double C16257 = C34307 / q - (C16266 * C39149) / q - C39921;
    const double C16844 =
        (C20929 * be) / q - (C16826 * C39151) / q + C16554 / C17808 - C39921;
    const double C39632 = C15406 * p;
    const double C15424 = (C18330 * be) / q - (C15406 * C39151) / q - C39889;
    const double C15669 = C39643 - (C15659 * C39150) / q - C39900;
    const double C15809 = C33358 / q - (C15818 * C39149) / q - C39900;
    const double C39886 = C39648 / q;
    const double C15523 = -(C15514 * C39150 + C39648) / q;
    const double C16572 = (C6273 * be) / q - (C16554 * C39151) / q - C39923;
    const double C17361 = C35018 / q - (C17370 * C39149) / q - C39923;
    const double C39898 = C39675 / q;
    const double C39657 = C15292 / C17808;
    const double C39894 = C39668 / q;
    const double C39874 = C39628 / q;
    const double C15281 =
        (3 * C15292) / C17808 - (C15291 * C39149) / q - (C32165 * p) / q;
    const double C15282 = C32180 / q - (C15292 * C39149) / q - (C15291 * p) / q;
    const double C15301 = -(C15291 * C39150 + C39637) / q;
    const double C16098 = C33847 / q - (C16108 * C39149) / q - C39917;
    const double C16988 =
        (C6705 * be) / q - (C16970 * C39151) / q + C39754 - C39917;
    const double C39883 = C39639 / q;
    const double C15231 = (C17773 * be) / q - (C15211 * C39151) / q - C39873;
    const double C15505 = C39665 - (C15514 * C39149) / q + C32645 / q - C39873;
    const double C39888 = C39653 / q;
    const double C39651 = C15252 / C17808;
    const double C39885 = C39647 / q;
    const double C15241 =
        (3 * C15252) / C17808 - (C15251 * C39149) / q - (C32045 * p) / q;
    const double C15242 = C32060 / q - (C15252 * C39149) / q - (C15251 * p) / q;
    const double C15271 = (C17899 * be) / q - (C15251 * C39151) / q - C39879;
    const double C15261 = C32075 / q - (C15251 * C39150) / q - C39877;
    const double C15397 = C39649 - (C15406 * C39149) / q - C39877;
    const double C15650 = C32898 / q - (C15660 * C39149) / q - C39899;
    const double C16563 = C39754 - (C16554 * C39150) / q - C39899;
    const double C4995 = C18054 / q - (C4973 * C39151) / q - C39158;
    const double C5890 =
        (C19974 * be) / q - (C5901 * C39149) / q + C39010 - C39172;
    const double C5292 = C38933 - (C5274 * C39151) / q + C38950 - C39172;
    const double C4985 = -(C4974 * C39150 + C38914) / q;
    const double C6346 =
        (C6353 * be) / q - (C6356 * C39149) / q + C39035 - C38914 / q;
    const double C39159 = C38916 / q;
    const double C39178 = C38969 / q;
    const double C6067 = C39010 - (C6058 * C39150) / q - C39194;
    const double C5756 = C38968 - (C5738 * C39151) / q + C38992 - C39194;
    const double C39183 = C38974 / q;
    const double C5265 =
        (C18636 * be) / q - (C5274 * C39149) / q + C38948 - C39158;
    const double C5923 = C38948 - (C5901 * C39151) / q + C20006 / q - C39205;
    const double C39203 = C39011 / q;
    const double C39212 = C39038 / q;
    const double C6798 = -(C6788 * C39150 + C39038) / q;
    const double C5121 =
        (C18390 * be) / q - (C5130 * C39149) / q + C38931 - C38913 / q;
    const double C39164 = C38934 / q;
    const double C5148 = C38935 - (C5130 * C39151) / q - C39165;
    const double C6625 =
        (C21049 * be) / q - (C6634 * C39149) / q + C7204 / C17808 - C39165;
    const double C39181 = C38972 / q;
    const double C39182 = C38973 / q;
    const double C6049 = (C20337 * be) / q - (C6058 * C39149) / q - C39209;
    const double C6652 =
        C6356 / C17808 - (C6634 * C39151) / q + C39044 - C39209;
    const double C10195 = C25182 / q - (C10175 * C39151) / q - C39523;
    const double C10461 = C39312 - (C10470 * C39149) / q - C39523;
    const double C39560 = C39377 / q;
    const double C11213 = -(C11222 * C39149 + C39377) / q;
    const double C5382 =
        (C18881 * be) / q - (C5393 * C39149) / q + C38962 - C39162;
    const double C5103 = C38927 - (C5094 * C39150) / q + C38928 - C39162;
    const double C5256 = C38927 - (C5238 * C39151) / q - C39170;
    const double C39155 = C38908 / q;
    const double C4952 = -(C4930 * C39151 + C38910) / q;
    const double C6738 =
        (C6745 * be) / q - (C6748 * C39149) / q + C39047 - C38910 / q;
    const double C5085 =
        (C18330 * be) / q - (C5094 * C39149) / q + C38925 - C39154;
    const double C5404 = C38925 - (C5393 * C39150) / q + C18913 / q - C39177;
    const double C39175 = C38963 / q;
    const double C39214 = C39034 / q;
    const double C6336 = -(C6316 * C39151 + C39034) / q;
    const double C39198 = C39005 / q;
    const double C5869 = C19902 / q - (C5858 * C39150) / q - C39201;
    const double C7184 = C39032 - (C7164 * C39151) / q - C39201;
    const double C5720 = C38962 - (C5702 * C39151) / q - C39192;
    const double C6031 = C39004 - (C6022 * C39150) / q + C39023 - C39192;
    const double C5229 =
        (C18576 * be) / q - (C5238 * C39149) / q + C38945 - C38909 / q;
    const double C5879 = C38945 - (C5857 * C39151) / q - C39202;
    const double C5693 = (C19549 * be) / q - (C5702 * C39149) / q - C39191;
    const double C6607 =
        C6748 / C17808 - (C6598 * C39150) / q + C39043 - C39191;
    const double C16158 = C33996 / q - (C16148 * C39150) / q - C39920;
    const double C17424 =
        (C7161 * be) / q - (C17406 * C39151) / q + C39756 - C39920;
    const double C5067 = C38922 - (C5058 * C39150) / q - C39160;
    const double C5338 =
        (C18758 * be) / q - (C5349 * C39149) / q + C38954 + C38955 - C39160;
    const double C5220 = C38922 - (C5202 * C39151) / q - C39167;
    const double C5802 =
        (C19731 * be) / q - (C5813 * C39149) / q + C38996 + C38997 - C39167;
    const double C39545 = C39337 / q;
    const double C10909 = -(C10918 * C39149 + C39337) / q;
    const double C10765 = -(C10774 * C39149 + C39336) / q;
    const double C39532 = C39300 / q;
    const double C39531 = C39298 / q;
    const double C39521 = C39277 / q;
    const double C39561 = C39378 / q;
    const double C10927 =
        (C19610 * be) / q - (C10918 * C39150) / q + C39355 - C39548;
    const double C11240 = C39355 - (C11222 * C39151) / q + C27279 / q - C39567;
    const double C39569 = C39402 / q;
    const double C12317 = -(C12326 * C39149 + C39402) / q;
    const double C10633 =
        (C19002 * be) / q - (C10623 * C39150) / q + C39295 - C39336 / q;
    const double C11042 =
        (C5854 * be) / q - (C11032 * C39150) / q + C26983 / q - C39559;
    const double C12308 = C39396 - (C12290 * C39151) / q - C39559;
    const double C39546 = C39338 / q;
    const double C11231 =
        (C20337 * be) / q - (C11222 * C39150) / q + C39374 - C39553;
    const double C10936 = C39332 - (C10918 * C39151) / q + C39356 - C39553;
    const double C10900 = C39326 - (C10882 * C39151) / q - C39551;
    const double C11195 =
        (C20278 * be) / q - (C11186 * C39150) / q + C39368 + C39387 - C39551;
    const double C10614 = -(C10624 * C39149 + C39333) / q;
    const double C11519 =
        (C6353 * be) / q - (C11510 * C39150) / q + C39401 - C39333 / q;
    const double C39524 = C39280 / q;
    const double C10156 = -(C10136 * C39151 + C39274) / q;
    const double C11881 = C39411 - (C11890 * C39149) / q - C39274 / q;
    const double C39522 = C39278 / q;
    const double C39518 = C39272 / q;
    const double C10407 = (C18513 * be) / q - (C10398 * C39150) / q - C39534;
    const double C11701 =
        C12254 / C17808 - (C11710 * C39149) / q + C39405 - C39534;
    const double C11061 = C39374 - (C11071 * C39149) / q - C39540;
    const double C10488 = C39297 - (C10470 * C39151) / q + C39314 - C39540;
    const double C10416 = C39286 - (C10398 * C39151) / q - C39535;
    const double C10981 = C39360 - (C10991 * C39149) / q + C39361 - C39535;
    const double C10573 = C39326 - (C10583 * C39149) / q - C39529;
    const double C10299 =
        (C18330 * be) / q - (C10290 * C39150) / q + C39291 + C39292 - C39529;
    const double C10452 = C39291 - (C10434 * C39151) / q - C39538;
    const double C10263 =
        (C18266 * be) / q - (C10254 * C39150) / q + C39286 - C39527;
    const double C10533 = C39318 - (C10543 * C39149) / q + C39319 - C39527;
    const double C10106 = (C4882 * be) / q - (C10096 * C39150) / q - C39514;
    const double C11429 = C39392 - (C11438 * C39149) / q + C39284 - C39514;
    const double C39907 = C39697 / q;
    const double C16025 = -(C16034 * C39149 + C39697) / q;
    const double C15749 = C39655 - (C15739 * C39150) / q - C39696 / q;
    const double C15881 = -(C15890 * C39149 + C39696) / q;
    const double C15460 =
        (C18390 * be) / q - (C15442 * C39151) / q + C39659 - C39892;
    const double C16889 = C17442 / C17808 - (C16898 * C39149) / q - C39892;
    const double C39891 = C39658 / q;
    const double C39908 = C39698 / q;
    const double C16608 = (C6313 * be) / q - (C16590 * C39151) / q - C39924;
    const double C17015 = C39676 - (C17006 * C39150) / q - C39924;
    const double C16347 = C39734 - (C16338 * C39150) / q - C39916;
    const double C16052 =
        (C19610 * be) / q - (C16034 * C39151) / q + C39692 + C39716 - C39916;
    const double C16016 =
        (C19549 * be) / q - (C15998 * C39151) / q + C39686 - C39914;
    const double C16311 = C39728 - (C16302 * C39150) / q + C39747 - C39914;
    const double C15720 = (C5390 * be) / q - (C15700 * C39151) / q - C39904;
    const double C17415 = C39771 - (C17406 * C39150) / q + C39711 - C39904;
    const double C15730 = -(C15740 * C39149 + C39693) / q;
    const double C16635 = C39761 - (C16626 * C39150) / q - C39693 / q;
    const double C15719 = (C18881 * be) / q - (C15699 * C39151) / q - C39903;
    const double C16871 =
        C17006 / C17808 - (C16862 * C39150) / q + C39767 - C39903;
    const double C39884 = C39640 / q;
    const double C39880 = C39634 / q;
    const double C15302 = -(C15292 * C39150 + C39638) / q;
    const double C16617 = C39759 - (C16626 * C39149) / q - C39638 / q;
    const double C39878 = C39632 / q;
    const double C15388 = (C18266 * be) / q - (C15370 * C39151) / q - C39886;
    const double C16817 =
        C17370 / C17808 - (C16826 * C39149) / q + C39765 - C39886;
    const double C16177 = C39734 - (C16187 * C39149) / q - C39898;
    const double C15604 =
        (C18636 * be) / q - (C15586 * C39151) / q + C39657 + C39674 - C39898;
    const double C15532 =
        (C18513 * be) / q - (C15514 * C39151) / q + C39646 - C39894;
    const double C16097 = C39720 - (C16107 * C39149) / q + C39721 - C39894;
    const double C15232 = (C4882 * be) / q - (C15212 * C39151) / q - C39874;
    const double C16961 = C39769 - (C16970 * C39149) / q + C39666 - C39874;
    const double C15311 =
        (C18020 * be) / q - (C15291 * C39151) / q + C32195 / q - C39883;
    const double C15577 = C39672 - (C15586 * C39149) / q - C39883;
    const double C15689 = C39686 - (C15699 * C39149) / q - C39888;
    const double C15415 = C39651 - (C15406 * C39150) / q + C39652 - C39888;
    const double C15568 =
        (C18576 * be) / q - (C15550 * C39151) / q + C39651 - C39896;
    const double C15379 = C39646 - (C15370 * C39150) / q - C39885;
    const double C15649 = C39678 - (C15659 * C39149) / q + C39679 - C39885;
    const double C4996 = C18070 / q - (C4974 * C39151) / q - C39159;
    const double C6778 =
        (C6785 * be) / q - (C6788 * C39149) / q + C39049 - C39159;
    const double C5427 = (C5434 * be) / q - (C5438 * C39149) / q - C39178;
    const double C6366 = C39037 - (C6356 * C39150) / q - C39178;
    const double C5460 = C19050 / q - (C5438 * C39151) / q - C39183;
    const double C7214 = C39049 - (C7204 * C39150) / q - C39183;
    const double C5891 = (C5898 * be) / q - (C5902 * C39149) / q - C39203;
    const double C6808 = C39037 - (C6788 * C39151) / q + C38953 - C39203;
    const double C6376 = C38938 - (C6356 * C39151) / q - C39212;
    const double C7194 = (C7201 * be) / q - (C7204 * C39149) / q - C39212;
    const double C5139 = C38933 - (C5130 * C39150) / q - C39164;
    const double C5426 =
        (C19002 * be) / q - (C5437 * C39149) / q + C38968 - C39164;
    const double C5448 = C38931 - (C5437 * C39150) / q - C39181;
    const double C5585 = (C19366 * be) / q - (C5594 * C39149) / q - C39181;
    const double C5459 = C19034 / q - (C5437 * C39151) / q - C39182;
    const double C5729 = (C19610 * be) / q - (C5738 * C39149) / q - C39182;
    const double C6643 = C6788 / C17808 - (C6634 * C39150) / q - C39182;
    const double C11081 = (C19974 * be) / q - (C11071 * C39150) / q - C39560;
    const double C11800 =
        C11510 / C17808 - (C11782 * C39151) / q + C39408 - C39560;
    const double C4941 = C17949 / q - (C4930 * C39150) / q - C39155;
    const double C6306 =
        (C6313 * be) / q - (C6316 * C39149) / q + C39032 - C39155;
    const double C5383 = (C5390 * be) / q - (C5394 * C39149) / q - C39175;
    const double C6326 = C39033 - (C6316 * C39150) / q + C38937 - C39175;
    const double C6758 = C38952 - (C6748 * C39150) / q - C39214;
    const double C7154 = (C7161 * be) / q - (C7164 * C39149) / q - C39214;
    const double C5847 = (C5854 * be) / q - (C5858 * C39149) / q - C39198;
    const double C6768 = C39033 - (C6748 * C39151) / q - C39198;
    const double C10643 = C26138 / q - (C10623 * C39151) / q - C39545;
    const double C11791 =
        (C21049 * be) / q - (C11782 * C39150) / q + C11926 / C17808 - C39545;
    const double C10344 = C39299 - (C10326 * C39151) / q - C39532;
    const double C10479 = (C18636 * be) / q - (C10470 * C39150) / q - C39532;
    const double C11773 = C12326 / C17808 - (C11782 * C39149) / q - C39532;
    const double C10335 =
        (C18390 * be) / q - (C10326 * C39150) / q + C39297 - C39531;
    const double C10613 = C39332 - (C10623 * C39149) / q - C39531;
    const double C10185 = (C18020 * be) / q - (C10175 * C39150) / q - C39521;
    const double C10317 = C39295 - (C10326 * C39149) / q - C39521;
    const double C11082 = (C5898 * be) / q - (C11072 * C39150) / q - C39561;
    const double C12344 = C39399 - (C12326 * C39151) / q + C39359 - C39561;
    const double C11528 = C39302 - (C11510 * C39151) / q - C39569;
    const double C11935 = (C6785 * be) / q - (C11926 * C39150) / q - C39569;
    const double C10644 = C26154 / q - (C10624 * C39151) / q - C39546;
    const double C12335 =
        (C7201 * be) / q - (C12326 * C39150) / q + C39413 - C39546;
    const double C10196 = C25198 / q - (C10176 * C39151) / q - C39524;
    const double C11917 = C39413 - (C11926 * C39149) / q - C39524;
    const double C10186 = (C4970 * be) / q - (C10176 * C39150) / q - C39522;
    const double C11501 = C39399 - (C11510 * C39149) / q - C39522;
    const double C10146 =
        (C4926 * be) / q - (C10136 * C39150) / q + C25078 / q - C39518;
    const double C11465 = C39396 - (C11474 * C39149) / q - C39518;
    const double C15759 =
        (C19002 * be) / q - (C15739 * C39151) / q + C33151 / q - C39907;
    const double C16907 = C17042 / C17808 - (C16898 * C39150) / q - C39907;
    const double C15451 = C39657 - (C15442 * C39150) / q - C39891;
    const double C15729 = C39692 - (C15739 * C39149) / q - C39891;
    const double C15760 =
        (C5434 * be) / q - (C15740 * C39151) / q + C33167 / q - C39908;
    const double C17451 = C39773 - (C17442 * C39150) / q - C39908;
    const double C15312 =
        (C4970 * be) / q - (C15292 * C39151) / q + C32211 / q - C39884;
    const double C17033 = C39773 - (C17042 * C39149) / q - C39884;
    const double C15272 = (C4926 * be) / q - (C15252 * C39151) / q - C39880;
    const double C16997 = C39771 - (C17006 * C39149) / q - C39880;
    const double C15262 = C32091 / q - (C15252 * C39150) / q - C39878;
    const double C16581 = C39756 - (C16590 * C39149) / q - C39878;
    etx[0] = C4874;
    etx[1] = C4875;
    etx[2] = C4885;
    etx[3] = C4886;
    etx[4] = C4896;
    etx[5] = C4897;
    etx[6] = C4907;
    etx[7] = C4908;
    etx[8] = C4918;
    etx[9] = C4919;
    etx[10] = C4929;
    etx[11] = C4930;
    etx[12] = C4940;
    etx[13] = C4941;
    etx[14] = C4951;
    etx[15] = C4952;
    etx[16] = C4962;
    etx[17] = C4963;
    etx[18] = C4973;
    etx[19] = C4974;
    etx[20] = C4984;
    etx[21] = C4985;
    etx[22] = C4995;
    etx[23] = C4996;
    etx[24] = C5006;
    etx[25] = C5007;
    etx[26] = C5017;
    etx[27] = C5018;
    etx[28] = C5028;
    etx[29] = C5029;
    etx[30] = C5039;
    etx[31] = C5040;
    etx[32] = C5049;
    etx[33] = C5058;
    etx[34] = C5067;
    etx[35] = C5076;
    etx[36] = C5085;
    etx[37] = C5094;
    etx[38] = C5103;
    etx[39] = C5112;
    etx[40] = C5121;
    etx[41] = C5130;
    etx[42] = C5139;
    etx[43] = C5148;
    etx[44] = C5157;
    etx[45] = C5166;
    etx[46] = C5175;
    etx[47] = C5184;
    etx[48] = C5193;
    etx[49] = C5202;
    etx[50] = C5211;
    etx[51] = C5220;
    etx[52] = C5229;
    etx[53] = C5238;
    etx[54] = C5247;
    etx[55] = C5256;
    etx[56] = C5265;
    etx[57] = C5274;
    etx[58] = C5283;
    etx[59] = C5292;
    etx[60] = C5301;
    etx[61] = C5310;
    etx[62] = C5319;
    etx[63] = C5328;
    etx[64] = C5338;
    etx[65] = C5339;
    etx[66] = C5349;
    etx[67] = C5350;
    etx[68] = C5360;
    etx[69] = C5361;
    etx[70] = C5371;
    etx[71] = C5372;
    etx[72] = C5382;
    etx[73] = C5383;
    etx[74] = C5393;
    etx[75] = C5394;
    etx[76] = C5404;
    etx[77] = C5405;
    etx[78] = C5415;
    etx[79] = C5416;
    etx[80] = C5426;
    etx[81] = C5427;
    etx[82] = C5437;
    etx[83] = C5438;
    etx[84] = C5448;
    etx[85] = C5449;
    etx[86] = C5459;
    etx[87] = C5460;
    etx[88] = C5470;
    etx[89] = C5471;
    etx[90] = C5481;
    etx[91] = C5482;
    etx[92] = C5492;
    etx[93] = C5493;
    etx[94] = C5503;
    etx[95] = C5504;
    etx[96] = C5513;
    etx[97] = C5522;
    etx[98] = C5531;
    etx[99] = C5540;
    etx[100] = C5549;
    etx[101] = C5558;
    etx[102] = C5567;
    etx[103] = C5576;
    etx[104] = C5585;
    etx[105] = C5594;
    etx[106] = C5603;
    etx[107] = C5612;
    etx[108] = C5621;
    etx[109] = C5630;
    etx[110] = C5639;
    etx[111] = C5648;
    etx[112] = C5657;
    etx[113] = C5666;
    etx[114] = C5675;
    etx[115] = C5684;
    etx[116] = C5693;
    etx[117] = C5702;
    etx[118] = C5711;
    etx[119] = C5720;
    etx[120] = C5729;
    etx[121] = C5738;
    etx[122] = C5747;
    etx[123] = C5756;
    etx[124] = C5765;
    etx[125] = C5774;
    etx[126] = C5783;
    etx[127] = C5792;
    etx[128] = C5802;
    etx[129] = C5803;
    etx[130] = C5813;
    etx[131] = C5814;
    etx[132] = C5824;
    etx[133] = C5825;
    etx[134] = C5835;
    etx[135] = C5836;
    etx[136] = C5846;
    etx[137] = C5847;
    etx[138] = C5857;
    etx[139] = C5858;
    etx[140] = C5868;
    etx[141] = C5869;
    etx[142] = C5879;
    etx[143] = C5880;
    etx[144] = C5890;
    etx[145] = C5891;
    etx[146] = C5901;
    etx[147] = C5902;
    etx[148] = C5912;
    etx[149] = C5913;
    etx[150] = C5923;
    etx[151] = C5924;
    etx[152] = C5934;
    etx[153] = C5935;
    etx[154] = C5945;
    etx[155] = C5946;
    etx[156] = C5956;
    etx[157] = C5957;
    etx[158] = C5967;
    etx[159] = C5968;
    etx[160] = C5977;
    etx[161] = C5986;
    etx[162] = C5995;
    etx[163] = C6004;
    etx[164] = C6013;
    etx[165] = C6022;
    etx[166] = C6031;
    etx[167] = C6040;
    etx[168] = C6049;
    etx[169] = C6058;
    etx[170] = C6067;
    etx[171] = C6076;
    etx[172] = C6085;
    etx[173] = C6094;
    etx[174] = C6103;
    etx[175] = C6112;
    etx[176] = C6121;
    etx[177] = C6130;
    etx[178] = C6139;
    etx[179] = C6148;
    etx[180] = C6157;
    etx[181] = C6166;
    etx[182] = C6175;
    etx[183] = C6184;
    etx[184] = C6193;
    etx[185] = C6202;
    etx[186] = C6211;
    etx[187] = C6220;
    etx[188] = C6229;
    etx[189] = C6238;
    etx[190] = C6247;
    etx[191] = C6256;
    etx[192] = C6266;
    etx[193] = C6276;
    etx[194] = C6286;
    etx[195] = C6296;
    etx[196] = C6306;
    etx[197] = C6316;
    etx[198] = C6326;
    etx[199] = C6336;
    etx[200] = C6346;
    etx[201] = C6356;
    etx[202] = C6366;
    etx[203] = C6376;
    etx[204] = C6386;
    etx[205] = C6396;
    etx[206] = C6406;
    etx[207] = C6416;
    etx[208] = C6553;
    etx[209] = C6562;
    etx[210] = C6571;
    etx[211] = C6580;
    etx[212] = C6589;
    etx[213] = C6598;
    etx[214] = C6607;
    etx[215] = C6616;
    etx[216] = C6625;
    etx[217] = C6634;
    etx[218] = C6643;
    etx[219] = C6652;
    etx[220] = C6661;
    etx[221] = C6670;
    etx[222] = C6679;
    etx[223] = C6688;
    etx[224] = C6698;
    etx[225] = C6708;
    etx[226] = C6718;
    etx[227] = C6728;
    etx[228] = C6738;
    etx[229] = C6748;
    etx[230] = C6758;
    etx[231] = C6768;
    etx[232] = C6778;
    etx[233] = C6788;
    etx[234] = C6798;
    etx[235] = C6808;
    etx[236] = C6818;
    etx[237] = C6828;
    etx[238] = C6838;
    etx[239] = C6848;
    etx[240] = C7114;
    etx[241] = C7124;
    etx[242] = C7134;
    etx[243] = C7144;
    etx[244] = C7154;
    etx[245] = C7164;
    etx[246] = C7174;
    etx[247] = C7184;
    etx[248] = C7194;
    etx[249] = C7204;
    etx[250] = C7214;
    etx[251] = C7224;
    etx[252] = C7234;
    etx[253] = C7244;
    etx[254] = C7254;
    etx[255] = C7264;
    ety[0] = C10085;
    ety[1] = C10086;
    ety[2] = C10095;
    ety[3] = C10096;
    ety[4] = C10105;
    ety[5] = C10106;
    ety[6] = C10115;
    ety[7] = C10116;
    ety[8] = C10125;
    ety[9] = C10126;
    ety[10] = C10135;
    ety[11] = C10136;
    ety[12] = C10145;
    ety[13] = C10146;
    ety[14] = C10155;
    ety[15] = C10156;
    ety[16] = C10165;
    ety[17] = C10166;
    ety[18] = C10175;
    ety[19] = C10176;
    ety[20] = C10185;
    ety[21] = C10186;
    ety[22] = C10195;
    ety[23] = C10196;
    ety[24] = C10205;
    ety[25] = C10206;
    ety[26] = C10215;
    ety[27] = C10216;
    ety[28] = C10225;
    ety[29] = C10226;
    ety[30] = C10235;
    ety[31] = C10236;
    ety[32] = C10245;
    ety[33] = C10254;
    ety[34] = C10263;
    ety[35] = C10272;
    ety[36] = C10281;
    ety[37] = C10290;
    ety[38] = C10299;
    ety[39] = C10308;
    ety[40] = C10317;
    ety[41] = C10326;
    ety[42] = C10335;
    ety[43] = C10344;
    ety[44] = C10353;
    ety[45] = C10362;
    ety[46] = C10371;
    ety[47] = C10380;
    ety[48] = C10389;
    ety[49] = C10398;
    ety[50] = C10407;
    ety[51] = C10416;
    ety[52] = C10425;
    ety[53] = C10434;
    ety[54] = C10443;
    ety[55] = C10452;
    ety[56] = C10461;
    ety[57] = C10470;
    ety[58] = C10479;
    ety[59] = C10488;
    ety[60] = C10497;
    ety[61] = C10506;
    ety[62] = C10515;
    ety[63] = C10524;
    ety[64] = C10533;
    ety[65] = C10534;
    ety[66] = C10543;
    ety[67] = C10544;
    ety[68] = C10553;
    ety[69] = C10554;
    ety[70] = C10563;
    ety[71] = C10564;
    ety[72] = C10573;
    ety[73] = C10574;
    ety[74] = C10583;
    ety[75] = C10584;
    ety[76] = C10593;
    ety[77] = C10594;
    ety[78] = C10603;
    ety[79] = C10604;
    ety[80] = C10613;
    ety[81] = C10614;
    ety[82] = C10623;
    ety[83] = C10624;
    ety[84] = C10633;
    ety[85] = C10634;
    ety[86] = C10643;
    ety[87] = C10644;
    ety[88] = C10653;
    ety[89] = C10654;
    ety[90] = C10663;
    ety[91] = C10664;
    ety[92] = C10673;
    ety[93] = C10674;
    ety[94] = C10683;
    ety[95] = C10684;
    ety[96] = C10693;
    ety[97] = C10702;
    ety[98] = C10711;
    ety[99] = C10720;
    ety[100] = C10729;
    ety[101] = C10738;
    ety[102] = C10747;
    ety[103] = C10756;
    ety[104] = C10765;
    ety[105] = C10774;
    ety[106] = C10783;
    ety[107] = C10792;
    ety[108] = C10801;
    ety[109] = C10810;
    ety[110] = C10819;
    ety[111] = C10828;
    ety[112] = C10837;
    ety[113] = C10846;
    ety[114] = C10855;
    ety[115] = C10864;
    ety[116] = C10873;
    ety[117] = C10882;
    ety[118] = C10891;
    ety[119] = C10900;
    ety[120] = C10909;
    ety[121] = C10918;
    ety[122] = C10927;
    ety[123] = C10936;
    ety[124] = C10945;
    ety[125] = C10954;
    ety[126] = C10963;
    ety[127] = C10972;
    ety[128] = C10981;
    ety[129] = C10982;
    ety[130] = C10991;
    ety[131] = C10992;
    ety[132] = C11001;
    ety[133] = C11002;
    ety[134] = C11011;
    ety[135] = C11012;
    ety[136] = C11021;
    ety[137] = C11022;
    ety[138] = C11031;
    ety[139] = C11032;
    ety[140] = C11041;
    ety[141] = C11042;
    ety[142] = C11051;
    ety[143] = C11052;
    ety[144] = C11061;
    ety[145] = C11062;
    ety[146] = C11071;
    ety[147] = C11072;
    ety[148] = C11081;
    ety[149] = C11082;
    ety[150] = C11091;
    ety[151] = C11092;
    ety[152] = C11101;
    ety[153] = C11102;
    ety[154] = C11111;
    ety[155] = C11112;
    ety[156] = C11121;
    ety[157] = C11122;
    ety[158] = C11131;
    ety[159] = C11132;
    ety[160] = C11141;
    ety[161] = C11150;
    ety[162] = C11159;
    ety[163] = C11168;
    ety[164] = C11177;
    ety[165] = C11186;
    ety[166] = C11195;
    ety[167] = C11204;
    ety[168] = C11213;
    ety[169] = C11222;
    ety[170] = C11231;
    ety[171] = C11240;
    ety[172] = C11249;
    ety[173] = C11258;
    ety[174] = C11267;
    ety[175] = C11276;
    ety[176] = C11285;
    ety[177] = C11294;
    ety[178] = C11303;
    ety[179] = C11312;
    ety[180] = C11321;
    ety[181] = C11330;
    ety[182] = C11339;
    ety[183] = C11348;
    ety[184] = C11357;
    ety[185] = C11366;
    ety[186] = C11375;
    ety[187] = C11384;
    ety[188] = C11393;
    ety[189] = C11402;
    ety[190] = C11411;
    ety[191] = C11420;
    ety[192] = C11429;
    ety[193] = C11438;
    ety[194] = C11447;
    ety[195] = C11456;
    ety[196] = C11465;
    ety[197] = C11474;
    ety[198] = C11483;
    ety[199] = C11492;
    ety[200] = C11501;
    ety[201] = C11510;
    ety[202] = C11519;
    ety[203] = C11528;
    ety[204] = C11537;
    ety[205] = C11546;
    ety[206] = C11555;
    ety[207] = C11564;
    ety[208] = C11701;
    ety[209] = C11710;
    ety[210] = C11719;
    ety[211] = C11728;
    ety[212] = C11737;
    ety[213] = C11746;
    ety[214] = C11755;
    ety[215] = C11764;
    ety[216] = C11773;
    ety[217] = C11782;
    ety[218] = C11791;
    ety[219] = C11800;
    ety[220] = C11809;
    ety[221] = C11818;
    ety[222] = C11827;
    ety[223] = C11836;
    ety[224] = C11845;
    ety[225] = C11854;
    ety[226] = C11863;
    ety[227] = C11872;
    ety[228] = C11881;
    ety[229] = C11890;
    ety[230] = C11899;
    ety[231] = C11908;
    ety[232] = C11917;
    ety[233] = C11926;
    ety[234] = C11935;
    ety[235] = C11944;
    ety[236] = C11953;
    ety[237] = C11962;
    ety[238] = C11971;
    ety[239] = C11980;
    ety[240] = C12245;
    ety[241] = C12254;
    ety[242] = C12263;
    ety[243] = C12272;
    ety[244] = C12281;
    ety[245] = C12290;
    ety[246] = C12299;
    ety[247] = C12308;
    ety[248] = C12317;
    ety[249] = C12326;
    ety[250] = C12335;
    ety[251] = C12344;
    ety[252] = C12353;
    ety[253] = C12362;
    ety[254] = C12371;
    ety[255] = C12380;
    etz[0] = C15201;
    etz[1] = C15202;
    etz[2] = C15211;
    etz[3] = C15212;
    etz[4] = C15221;
    etz[5] = C15222;
    etz[6] = C15231;
    etz[7] = C15232;
    etz[8] = C15241;
    etz[9] = C15242;
    etz[10] = C15251;
    etz[11] = C15252;
    etz[12] = C15261;
    etz[13] = C15262;
    etz[14] = C15271;
    etz[15] = C15272;
    etz[16] = C15281;
    etz[17] = C15282;
    etz[18] = C15291;
    etz[19] = C15292;
    etz[20] = C15301;
    etz[21] = C15302;
    etz[22] = C15311;
    etz[23] = C15312;
    etz[24] = C15321;
    etz[25] = C15322;
    etz[26] = C15331;
    etz[27] = C15332;
    etz[28] = C15341;
    etz[29] = C15342;
    etz[30] = C15351;
    etz[31] = C15352;
    etz[32] = C15361;
    etz[33] = C15370;
    etz[34] = C15379;
    etz[35] = C15388;
    etz[36] = C15397;
    etz[37] = C15406;
    etz[38] = C15415;
    etz[39] = C15424;
    etz[40] = C15433;
    etz[41] = C15442;
    etz[42] = C15451;
    etz[43] = C15460;
    etz[44] = C15469;
    etz[45] = C15478;
    etz[46] = C15487;
    etz[47] = C15496;
    etz[48] = C15505;
    etz[49] = C15514;
    etz[50] = C15523;
    etz[51] = C15532;
    etz[52] = C15541;
    etz[53] = C15550;
    etz[54] = C15559;
    etz[55] = C15568;
    etz[56] = C15577;
    etz[57] = C15586;
    etz[58] = C15595;
    etz[59] = C15604;
    etz[60] = C15613;
    etz[61] = C15622;
    etz[62] = C15631;
    etz[63] = C15640;
    etz[64] = C15649;
    etz[65] = C15650;
    etz[66] = C15659;
    etz[67] = C15660;
    etz[68] = C15669;
    etz[69] = C15670;
    etz[70] = C15679;
    etz[71] = C15680;
    etz[72] = C15689;
    etz[73] = C15690;
    etz[74] = C15699;
    etz[75] = C15700;
    etz[76] = C15709;
    etz[77] = C15710;
    etz[78] = C15719;
    etz[79] = C15720;
    etz[80] = C15729;
    etz[81] = C15730;
    etz[82] = C15739;
    etz[83] = C15740;
    etz[84] = C15749;
    etz[85] = C15750;
    etz[86] = C15759;
    etz[87] = C15760;
    etz[88] = C15769;
    etz[89] = C15770;
    etz[90] = C15779;
    etz[91] = C15780;
    etz[92] = C15789;
    etz[93] = C15790;
    etz[94] = C15799;
    etz[95] = C15800;
    etz[96] = C15809;
    etz[97] = C15818;
    etz[98] = C15827;
    etz[99] = C15836;
    etz[100] = C15845;
    etz[101] = C15854;
    etz[102] = C15863;
    etz[103] = C15872;
    etz[104] = C15881;
    etz[105] = C15890;
    etz[106] = C15899;
    etz[107] = C15908;
    etz[108] = C15917;
    etz[109] = C15926;
    etz[110] = C15935;
    etz[111] = C15944;
    etz[112] = C15953;
    etz[113] = C15962;
    etz[114] = C15971;
    etz[115] = C15980;
    etz[116] = C15989;
    etz[117] = C15998;
    etz[118] = C16007;
    etz[119] = C16016;
    etz[120] = C16025;
    etz[121] = C16034;
    etz[122] = C16043;
    etz[123] = C16052;
    etz[124] = C16061;
    etz[125] = C16070;
    etz[126] = C16079;
    etz[127] = C16088;
    etz[128] = C16097;
    etz[129] = C16098;
    etz[130] = C16107;
    etz[131] = C16108;
    etz[132] = C16117;
    etz[133] = C16118;
    etz[134] = C16127;
    etz[135] = C16128;
    etz[136] = C16137;
    etz[137] = C16138;
    etz[138] = C16147;
    etz[139] = C16148;
    etz[140] = C16157;
    etz[141] = C16158;
    etz[142] = C16167;
    etz[143] = C16168;
    etz[144] = C16177;
    etz[145] = C16178;
    etz[146] = C16187;
    etz[147] = C16188;
    etz[148] = C16197;
    etz[149] = C16198;
    etz[150] = C16207;
    etz[151] = C16208;
    etz[152] = C16217;
    etz[153] = C16218;
    etz[154] = C16227;
    etz[155] = C16228;
    etz[156] = C16237;
    etz[157] = C16238;
    etz[158] = C16247;
    etz[159] = C16248;
    etz[160] = C16257;
    etz[161] = C16266;
    etz[162] = C16275;
    etz[163] = C16284;
    etz[164] = C16293;
    etz[165] = C16302;
    etz[166] = C16311;
    etz[167] = C16320;
    etz[168] = C16329;
    etz[169] = C16338;
    etz[170] = C16347;
    etz[171] = C16356;
    etz[172] = C16365;
    etz[173] = C16374;
    etz[174] = C16383;
    etz[175] = C16392;
    etz[176] = C16401;
    etz[177] = C16410;
    etz[178] = C16419;
    etz[179] = C16428;
    etz[180] = C16437;
    etz[181] = C16446;
    etz[182] = C16455;
    etz[183] = C16464;
    etz[184] = C16473;
    etz[185] = C16482;
    etz[186] = C16491;
    etz[187] = C16500;
    etz[188] = C16509;
    etz[189] = C16518;
    etz[190] = C16527;
    etz[191] = C16536;
    etz[192] = C16545;
    etz[193] = C16554;
    etz[194] = C16563;
    etz[195] = C16572;
    etz[196] = C16581;
    etz[197] = C16590;
    etz[198] = C16599;
    etz[199] = C16608;
    etz[200] = C16617;
    etz[201] = C16626;
    etz[202] = C16635;
    etz[203] = C16644;
    etz[204] = C16653;
    etz[205] = C16662;
    etz[206] = C16671;
    etz[207] = C16680;
    etz[208] = C16817;
    etz[209] = C16826;
    etz[210] = C16835;
    etz[211] = C16844;
    etz[212] = C16853;
    etz[213] = C16862;
    etz[214] = C16871;
    etz[215] = C16880;
    etz[216] = C16889;
    etz[217] = C16898;
    etz[218] = C16907;
    etz[219] = C16916;
    etz[220] = C16925;
    etz[221] = C16934;
    etz[222] = C16943;
    etz[223] = C16952;
    etz[224] = C16961;
    etz[225] = C16970;
    etz[226] = C16979;
    etz[227] = C16988;
    etz[228] = C16997;
    etz[229] = C17006;
    etz[230] = C17015;
    etz[231] = C17024;
    etz[232] = C17033;
    etz[233] = C17042;
    etz[234] = C17051;
    etz[235] = C17060;
    etz[236] = C17069;
    etz[237] = C17078;
    etz[238] = C17087;
    etz[239] = C17096;
    etz[240] = C17361;
    etz[241] = C17370;
    etz[242] = C17379;
    etz[243] = C17388;
    etz[244] = C17397;
    etz[245] = C17406;
    etz[246] = C17415;
    etz[247] = C17424;
    etz[248] = C17433;
    etz[249] = C17442;
    etz[250] = C17451;
    etz[251] = C17460;
    etz[252] = C17469;
    etz[253] = C17478;
    etz[254] = C17487;
    etz[255] = C17496;
}
