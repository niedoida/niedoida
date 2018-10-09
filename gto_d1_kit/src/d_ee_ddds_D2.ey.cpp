/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_4_et(const double ae,
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
    const double C12859 = g[0];
    const double C12878 = g[1];
    const double C12896 = g[2];
    const double C13009 = g[3];
    const double C13025 = g[4];
    const double C13040 = g[5];
    const double C13056 = g[6];
    const double C13072 = g[7];
    const double C13087 = g[8];
    const double C13148 = g[9];
    const double C13167 = g[10];
    const double C13247 = g[11];
    const double C13264 = g[12];
    const double C13280 = g[13];
    const double C13297 = g[14];
    const double C13342 = g[15];
    const double C13361 = g[16];
    const double C13442 = g[17];
    const double C13459 = g[18];
    const double C13476 = g[19];
    const double C13493 = g[20];
    const double C13538 = g[21];
    const double C13584 = g[22];
    const double C13599 = g[23];
    const double C13628 = g[24];
    const double C13674 = g[25];
    const double C13690 = g[26];
    const double C13719 = g[27];
    const double C13767 = g[28];
    const double C13783 = g[29];
    const double C13813 = g[30];
    const double C13830 = g[31];
    const double C13909 = g[32];
    const double C13924 = g[33];
    const double C13939 = g[34];
    const double C13954 = g[35];
    const double C14000 = g[36];
    const double C14018 = g[37];
    const double C14097 = g[38];
    const double C14113 = g[39];
    const double C14128 = g[40];
    const double C14144 = g[41];
    const double C14188 = g[42];
    const double C14206 = g[43];
    const double C14288 = g[44];
    const double C14304 = g[45];
    const double C14320 = g[46];
    const double C14336 = g[47];
    const double C14382 = g[48];
    const double C14428 = g[49];
    const double C14443 = g[50];
    const double C14472 = g[51];
    const double C14518 = g[52];
    const double C14533 = g[53];
    const double C14562 = g[54];
    const double C14609 = g[55];
    const double C14624 = g[56];
    const double C14653 = g[57];
    const double C14670 = g[58];
    const double C14748 = g[59];
    const double C14763 = g[60];
    const double C14778 = g[61];
    const double C14793 = g[62];
    const double C14837 = g[63];
    const double C14884 = g[64];
    const double C14899 = g[65];
    const double C14928 = g[66];
    const double C14946 = g[67];
    const double C15026 = g[68];
    const double C15042 = g[69];
    const double C15058 = g[70];
    const double C15074 = g[71];
    const double C15118 = g[72];
    const double C15164 = g[73];
    const double C15179 = g[74];
    const double C15208 = g[75];
    const double C15254 = g[76];
    const double C15270 = g[77];
    const double C15299 = g[78];
    const double C15346 = g[79];
    const double C15361 = g[80];
    const double C15390 = g[81];
    const double C15435 = g[82];
    const double C15450 = g[83];
    const double C15479 = g[84];
    const double C15524 = g[85];
    const double C15539 = g[86];
    const double C15568 = g[87];
    const double C15613 = g[88];
    const double C15629 = g[89];
    const double C15658 = g[90];
    const double C15702 = g[91];
    const double C15717 = g[92];
    const double C15746 = g[93];
    const double C15762 = g[94];
    const double C15777 = g[95];
    const double C15793 = g[96];
    const double C15808 = g[97];
    const double C16100 = g[98];
    const double C16115 = g[99];
    const double C16130 = g[100];
    const double C16145 = g[101];
    const double C16160 = g[102];
    const double C16176 = g[103];
    const double C16367 = g[104];
    const double C16382 = g[105];
    const double C16397 = g[106];
    const double C16412 = g[107];
    const double C16427 = g[108];
    const double C16443 = g[109];
    const double C16659 = g[110];
    const double C16688 = g[111];
    const double C16731 = g[112];
    const double C16746 = g[113];
    const double C16761 = g[114];
    const double C16818 = g[115];
    const double C16975 = g[116];
    const double C16990 = g[117];
    const double C17005 = g[118];
    const double C17020 = g[119];
    const double C17155 = g[120];
    const double C17170 = g[121];
    const double C17185 = g[122];
    const double C17200 = g[123];
    const double C17416 = g[124];
    const double C17445 = g[125];
    const double C17474 = g[126];
    const double C17489 = g[127];
    const double C17518 = g[128];
    const double C17632 = g[129];
    const double C17647 = g[130];
    const double C17677 = g[131];
    const double C17692 = g[132];
    const double C17707 = g[133];
    const double C17722 = g[134];
    const double C17882 = g[135];
    const double C17911 = g[136];
    const double C17954 = g[137];
    const double C17969 = g[138];
    const double C17998 = g[139];
    const double C18013 = g[140];
    const double C18028 = g[141];
    const double C22127 = g[142];
    const double C22317 = g[143];
    const double C22575 = g[144];
    const double C22816 = g[145];
    const double C23046 = g[146];
    const double C27930 = g[147];
    const double C12865 = vrx[0];
    const double C12884 = vrx[1];
    const double C12901 = vrx[2];
    const double C13154 = vrx[3];
    const double C13173 = vrx[4];
    const double C13348 = vrx[5];
    const double C13367 = vrx[6];
    const double C13542 = vrx[7];
    const double C13632 = vrx[8];
    const double C13725 = vrx[9];
    const double C13818 = vrx[10];
    const double C13834 = vrx[11];
    const double C14005 = vrx[12];
    const double C14023 = vrx[13];
    const double C14193 = vrx[14];
    const double C14211 = vrx[15];
    const double C14386 = vrx[16];
    const double C14476 = vrx[17];
    const double C14567 = vrx[18];
    const double C14658 = vrx[19];
    const double C14674 = vrx[20];
    const double C14842 = vrx[21];
    const double C14933 = vrx[22];
    const double C14951 = vrx[23];
    const double C15122 = vrx[24];
    const double C15212 = vrx[25];
    const double C15304 = vrx[26];
    const double C15395 = vrx[27];
    const double C15484 = vrx[28];
    const double C15573 = vrx[29];
    const double C15662 = vrx[30];
    const double C15750 = vrx[31];
    const double C15781 = vrx[32];
    const double C15797 = vrx[33];
    const double C15812 = vrx[34];
    const double C15827 = vrx[35];
    const double C15842 = vrx[36];
    const double C15871 = vrx[37];
    const double C15914 = vrx[38];
    const double C15929 = vrx[39];
    const double C15958 = vrx[40];
    const double C16001 = vrx[41];
    const double C16030 = vrx[42];
    const double C16059 = vrx[43];
    const double C16074 = vrx[44];
    const double C16164 = vrx[45];
    const double C16194 = vrx[46];
    const double C16209 = vrx[47];
    const double C16224 = vrx[48];
    const double C16239 = vrx[49];
    const double C16254 = vrx[50];
    const double C16283 = vrx[51];
    const double C16326 = vrx[52];
    const double C16355 = vrx[53];
    const double C16431 = vrx[54];
    const double C16517 = vrx[55];
    const double C16532 = vrx[56];
    const double C16561 = vrx[57];
    const double C16618 = vrx[58];
    const double C16647 = vrx[59];
    const double C16836 = vrx[60];
    const double C16892 = vrx[61];
    const double C16935 = vrx[62];
    const double C17038 = vrx[63];
    const double C17053 = vrx[64];
    const double C17068 = vrx[65];
    const double C17083 = vrx[66];
    const double C17098 = vrx[67];
    const double C17113 = vrx[68];
    const double C17128 = vrx[69];
    const double C17143 = vrx[70];
    const double C17302 = vrx[71];
    const double C17317 = vrx[72];
    const double C17332 = vrx[73];
    const double C17361 = vrx[74];
    const double C17390 = vrx[75];
    const double C17564 = vrx[76];
    const double C17620 = vrx[77];
    const double C17665 = vrx[78];
    const double C17796 = vrx[79];
    const double C17811 = vrx[80];
    const double C17826 = vrx[81];
    const double C17855 = vrx[82];
    const double C17870 = vrx[83];
    const double C18063 = vry[0];
    const double C18080 = vry[1];
    const double C18096 = vry[2];
    const double C18342 = vry[3];
    const double C18360 = vry[4];
    const double C18530 = vry[5];
    const double C18548 = vry[6];
    const double C18718 = vry[7];
    const double C18805 = vry[8];
    const double C18895 = vry[9];
    const double C18985 = vry[10];
    const double C19000 = vry[11];
    const double C19165 = vry[12];
    const double C19182 = vry[13];
    const double C19347 = vry[14];
    const double C19364 = vry[15];
    const double C19535 = vry[16];
    const double C19622 = vry[17];
    const double C19709 = vry[18];
    const double C19798 = vry[19];
    const double C19813 = vry[20];
    const double C19975 = vry[21];
    const double C20063 = vry[22];
    const double C20080 = vry[23];
    const double C20247 = vry[24];
    const double C20334 = vry[25];
    const double C20422 = vry[26];
    const double C20511 = vry[27];
    const double C20597 = vry[28];
    const double C20683 = vry[29];
    const double C20769 = vry[30];
    const double C20868 = vry[31];
    const double C20883 = vry[32];
    const double C20898 = vry[33];
    const double C20912 = vry[34];
    const double C20927 = vry[35];
    const double C20942 = vry[36];
    const double C20971 = vry[37];
    const double C21014 = vry[38];
    const double C21029 = vry[39];
    const double C21058 = vry[40];
    const double C21101 = vry[41];
    const double C21130 = vry[42];
    const double C21159 = vry[43];
    const double C21174 = vry[44];
    const double C21245 = vry[45];
    const double C21288 = vry[46];
    const double C21303 = vry[47];
    const double C21318 = vry[48];
    const double C21333 = vry[49];
    const double C21348 = vry[50];
    const double C21377 = vry[51];
    const double C21420 = vry[52];
    const double C21449 = vry[53];
    const double C21506 = vry[54];
    const double C21605 = vry[55];
    const double C21620 = vry[56];
    const double C21649 = vry[57];
    const double C21706 = vry[58];
    const double C21735 = vry[59];
    const double C21918 = vry[60];
    const double C21974 = vry[61];
    const double C22017 = vry[62];
    const double C22116 = vry[63];
    const double C22132 = vry[64];
    const double C22147 = vry[65];
    const double C22162 = vry[66];
    const double C22177 = vry[67];
    const double C22192 = vry[68];
    const double C22207 = vry[69];
    const double C22222 = vry[70];
    const double C22378 = vry[71];
    const double C22393 = vry[72];
    const double C22408 = vry[73];
    const double C22437 = vry[74];
    const double C22466 = vry[75];
    const double C22636 = vry[76];
    const double C22692 = vry[77];
    const double C22735 = vry[78];
    const double C22863 = vry[79];
    const double C22878 = vry[80];
    const double C22893 = vry[81];
    const double C22922 = vry[82];
    const double C22937 = vry[83];
    const double C23124 = vrz[0];
    const double C23141 = vrz[1];
    const double C23157 = vrz[2];
    const double C23403 = vrz[3];
    const double C23421 = vrz[4];
    const double C23591 = vrz[5];
    const double C23609 = vrz[6];
    const double C23779 = vrz[7];
    const double C23866 = vrz[8];
    const double C23956 = vrz[9];
    const double C24046 = vrz[10];
    const double C24061 = vrz[11];
    const double C24226 = vrz[12];
    const double C24243 = vrz[13];
    const double C24408 = vrz[14];
    const double C24425 = vrz[15];
    const double C24596 = vrz[16];
    const double C24683 = vrz[17];
    const double C24770 = vrz[18];
    const double C24859 = vrz[19];
    const double C24874 = vrz[20];
    const double C25036 = vrz[21];
    const double C25124 = vrz[22];
    const double C25141 = vrz[23];
    const double C25308 = vrz[24];
    const double C25395 = vrz[25];
    const double C25483 = vrz[26];
    const double C25572 = vrz[27];
    const double C25658 = vrz[28];
    const double C25744 = vrz[29];
    const double C25830 = vrz[30];
    const double C25929 = vrz[31];
    const double C25944 = vrz[32];
    const double C25959 = vrz[33];
    const double C25973 = vrz[34];
    const double C25988 = vrz[35];
    const double C26003 = vrz[36];
    const double C26032 = vrz[37];
    const double C26075 = vrz[38];
    const double C26090 = vrz[39];
    const double C26119 = vrz[40];
    const double C26162 = vrz[41];
    const double C26191 = vrz[42];
    const double C26220 = vrz[43];
    const double C26235 = vrz[44];
    const double C26306 = vrz[45];
    const double C26349 = vrz[46];
    const double C26364 = vrz[47];
    const double C26379 = vrz[48];
    const double C26394 = vrz[49];
    const double C26409 = vrz[50];
    const double C26438 = vrz[51];
    const double C26481 = vrz[52];
    const double C26510 = vrz[53];
    const double C26567 = vrz[54];
    const double C26666 = vrz[55];
    const double C26681 = vrz[56];
    const double C26710 = vrz[57];
    const double C26767 = vrz[58];
    const double C26796 = vrz[59];
    const double C26979 = vrz[60];
    const double C27035 = vrz[61];
    const double C27078 = vrz[62];
    const double C27177 = vrz[63];
    const double C27192 = vrz[64];
    const double C27207 = vrz[65];
    const double C27222 = vrz[66];
    const double C27237 = vrz[67];
    const double C27252 = vrz[68];
    const double C27267 = vrz[69];
    const double C27282 = vrz[70];
    const double C27437 = vrz[71];
    const double C27452 = vrz[72];
    const double C27467 = vrz[73];
    const double C27496 = vrz[74];
    const double C27525 = vrz[75];
    const double C27694 = vrz[76];
    const double C27750 = vrz[77];
    const double C27793 = vrz[78];
    const double C27920 = vrz[79];
    const double C27936 = vrz[80];
    const double C27951 = vrz[81];
    const double C27980 = vrz[82];
    const double C27995 = vrz[83];
    const double C12880 = 2 * q;
    const double C28352 = C17826 * p;
    const double C28351 = C17665 * p;
    const double C28350 = C17620 * p;
    const double C28349 = C17564 * p;
    const double C28348 = C14842 * p;
    const double C28347 = C17390 * p;
    const double C28346 = C15304 * p;
    const double C28345 = C17361 * p;
    const double C28344 = C14476 / q;
    const double C28343 = C17332 * p;
    const double C28342 = C15122 / q;
    const double C28341 = C17317 * p;
    const double C28340 = C17302 * p;
    const double C28339 = C15662 / q;
    const double C28338 = 3 * C14193;
    const double C28337 = C17143 * p;
    const double C28336 = C17128 * p;
    const double C28335 = C17098 * p;
    const double C28334 = C17083 * p;
    const double C28333 = C17068 * p;
    const double C28332 = C14567 * p;
    const double C28331 = C15662 * p;
    const double C28330 = C16935 * p;
    const double C28329 = C14193 * p;
    const double C28328 = C14211 * p;
    const double C28327 = C16892 * p;
    const double C28326 = C16836 * p;
    const double C28325 = C15484 / q;
    const double C28324 = C16647 * p;
    const double C28323 = C13725 / q;
    const double C28322 = C14658 * p;
    const double C28321 = C16618 * p;
    const double C28320 = C15212 * p;
    const double C28319 = C16561 * p;
    const double C28318 = C15122 * p;
    const double C28317 = C16532 * p;
    const double C28316 = C16517 * p;
    const double C28314 = C15573 / q;
    const double C28313 = 3 * C13348;
    const double C28312 = C16355 * p;
    const double C28311 = C15484 * p;
    const double C28310 = C16326 * p;
    const double C28309 = C14476 * p;
    const double C28308 = C13818 * p;
    const double C28306 = C16283 * p;
    const double C28305 = C14386 * p;
    const double C28304 = C16254 * p;
    const double C28303 = C16239 * p;
    const double C28302 = C16224 * p;
    const double C28301 = C16209 * p;
    const double C28300 = C16194 * p;
    const double C28298 = C15395 / q;
    const double C28297 = 3 * C13154;
    const double C28296 = C13725 * p;
    const double C28295 = C16074 * p;
    const double C28294 = C16059 * p;
    const double C28293 = C15573 * p;
    const double C28292 = C16030 * p;
    const double C28291 = C15395 * p;
    const double C28290 = C16001 * p;
    const double C28289 = C13348 * p;
    const double C28288 = C13367 * p;
    const double C28287 = C15958 * p;
    const double C28286 = C13632 * p;
    const double C28285 = C15929 * p;
    const double C28284 = C15914 * p;
    const double C28283 = C13154 * p;
    const double C28282 = C13173 * p;
    const double C28281 = C15871 * p;
    const double C28280 = C13542 * p;
    const double C28279 = C15842 * p;
    const double C28278 = C15827 * p;
    const double C28177 = de * zCD;
    const double C28176 = be * zAB;
    const double C28172 = de * yCD;
    const double C28171 = be * yAB;
    const double C28167 = de * xCD;
    const double C28166 = be * xAB;
    const double C28631 = C22893 * p;
    const double C28630 = C22735 * p;
    const double C28629 = C22692 * p;
    const double C28628 = C22636 * p;
    const double C28627 = C19975 * p;
    const double C28626 = C22466 * p;
    const double C28625 = C20422 * p;
    const double C28624 = C22437 * p;
    const double C28623 = C19622 / q;
    const double C28622 = C22408 * p;
    const double C28621 = C20247 / q;
    const double C28620 = C22393 * p;
    const double C28619 = C22378 * p;
    const double C28618 = C20769 / q;
    const double C28617 = 3 * C19347;
    const double C28616 = C22222 * p;
    const double C28615 = C22207 * p;
    const double C28614 = C22177 * p;
    const double C28613 = C22162 * p;
    const double C28612 = C22147 * p;
    const double C28611 = C19709 * p;
    const double C28610 = C20769 * p;
    const double C28609 = C22017 * p;
    const double C28608 = C19347 * p;
    const double C28607 = C19364 * p;
    const double C28606 = C21974 * p;
    const double C28605 = C21918 * p;
    const double C28604 = C20597 / q;
    const double C28603 = C21735 * p;
    const double C28602 = C18895 / q;
    const double C28601 = C19798 * p;
    const double C28600 = C21706 * p;
    const double C28599 = C20334 * p;
    const double C28598 = C21649 * p;
    const double C28597 = C20247 * p;
    const double C28596 = C21620 * p;
    const double C28595 = C21605 * p;
    const double C28594 = C20683 / q;
    const double C28592 = 3 * C18530;
    const double C28591 = C21449 * p;
    const double C28590 = C20597 * p;
    const double C28589 = C21420 * p;
    const double C28588 = C19622 * p;
    const double C28587 = C18985 * p;
    const double C28585 = C21377 * p;
    const double C28584 = C19535 * p;
    const double C28583 = C21348 * p;
    const double C28582 = C21333 * p;
    const double C28581 = C21318 * p;
    const double C28580 = C21303 * p;
    const double C28579 = C21288 * p;
    const double C28578 = C20511 / q;
    const double C28576 = 3 * C18342;
    const double C28575 = C18895 * p;
    const double C28574 = C21174 * p;
    const double C28573 = C21159 * p;
    const double C28572 = C20683 * p;
    const double C28571 = C21130 * p;
    const double C28570 = C20511 * p;
    const double C28569 = C21101 * p;
    const double C28568 = C18530 * p;
    const double C28567 = C18548 * p;
    const double C28566 = C21058 * p;
    const double C28565 = C18805 * p;
    const double C28564 = C21029 * p;
    const double C28563 = C21014 * p;
    const double C28562 = C18342 * p;
    const double C28561 = C18360 * p;
    const double C28560 = C20971 * p;
    const double C28559 = C18718 * p;
    const double C28558 = C20942 * p;
    const double C28557 = C20927 * p;
    const double C28901 = C27951 * p;
    const double C28900 = C27793 * p;
    const double C28899 = C27750 * p;
    const double C28898 = C27694 * p;
    const double C28897 = C25036 * p;
    const double C28896 = C27525 * p;
    const double C28895 = C25483 * p;
    const double C28894 = C27496 * p;
    const double C28893 = C24683 / q;
    const double C28892 = C27467 * p;
    const double C28891 = C25308 / q;
    const double C28890 = C27452 * p;
    const double C28889 = C27437 * p;
    const double C28888 = C25830 / q;
    const double C28887 = 3 * C24408;
    const double C28886 = C27282 * p;
    const double C28885 = C27267 * p;
    const double C28884 = C27237 * p;
    const double C28883 = C27222 * p;
    const double C28882 = C27207 * p;
    const double C28881 = C24770 * p;
    const double C28880 = C25830 * p;
    const double C28879 = C27078 * p;
    const double C28878 = C24408 * p;
    const double C28877 = C24425 * p;
    const double C28876 = C27035 * p;
    const double C28875 = C26979 * p;
    const double C28874 = C25658 / q;
    const double C28873 = C26796 * p;
    const double C28872 = C23956 / q;
    const double C28871 = C24859 * p;
    const double C28870 = C26767 * p;
    const double C28869 = C25395 * p;
    const double C28868 = C26710 * p;
    const double C28867 = C25308 * p;
    const double C28866 = C26681 * p;
    const double C28865 = C26666 * p;
    const double C28864 = C25744 / q;
    const double C28862 = 3 * C23591;
    const double C28861 = C26510 * p;
    const double C28860 = C25658 * p;
    const double C28859 = C26481 * p;
    const double C28858 = C24683 * p;
    const double C28857 = C24046 * p;
    const double C28855 = C26438 * p;
    const double C28854 = C24596 * p;
    const double C28853 = C26409 * p;
    const double C28852 = C26394 * p;
    const double C28851 = C26379 * p;
    const double C28850 = C26364 * p;
    const double C28849 = C26349 * p;
    const double C28848 = C25572 / q;
    const double C28846 = 3 * C23403;
    const double C28845 = C23956 * p;
    const double C28844 = C26235 * p;
    const double C28843 = C26220 * p;
    const double C28842 = C25744 * p;
    const double C28841 = C26191 * p;
    const double C28840 = C25572 * p;
    const double C28839 = C26162 * p;
    const double C28838 = C23591 * p;
    const double C28837 = C23609 * p;
    const double C28836 = C26119 * p;
    const double C28835 = C23866 * p;
    const double C28834 = C26090 * p;
    const double C28833 = C26075 * p;
    const double C28832 = C23403 * p;
    const double C28831 = C23421 * p;
    const double C28830 = C26032 * p;
    const double C28829 = C23779 * p;
    const double C28828 = C26003 * p;
    const double C28827 = C25988 * p;
    const double C28315 = C16431 / C12880;
    const double C28307 = C15797 / C12880;
    const double C28299 = C16164 / C12880;
    const double C28277 = C15812 / C12880;
    const double C28276 = C15662 / C12880;
    const double C28272 = C15573 / C12880;
    const double C28271 = C15484 / C12880;
    const double C28267 = C15395 / C12880;
    const double C28266 = C15304 / C12880;
    const double C28262 = C15212 / C12880;
    const double C28260 = C15122 / C12880;
    const double C28257 = C14951 / C12880;
    const double C28256 = C14933 / C12880;
    const double C28254 = C14842 / C12880;
    const double C28246 = C14674 / C12880;
    const double C28245 = C14658 / C12880;
    const double C28244 = C14567 / C12880;
    const double C28242 = C14476 / C12880;
    const double C28239 = C14386 / C12880;
    const double C28231 = C14211 / C12880;
    const double C28230 = C14193 / C12880;
    const double C28225 = C14023 / C12880;
    const double C28224 = C14005 / C12880;
    const double C28216 = C13834 / C12880;
    const double C28215 = C13818 / C12880;
    const double C28211 = C13725 / C12880;
    const double C28209 = C13632 / C12880;
    const double C28206 = C13542 / C12880;
    const double C28198 = C13367 / C12880;
    const double C28197 = C13348 / C12880;
    const double C28185 = C13173 / C12880;
    const double C28184 = C13154 / C12880;
    const double C28170 = C12901 / C12880;
    const double C28169 = C12884 / C12880;
    const double C28168 = C12865 / C12880;
    const double C28593 = C21506 / C12880;
    const double C28586 = C20898 / C12880;
    const double C28577 = C21245 / C12880;
    const double C28556 = C20912 / C12880;
    const double C28555 = C20769 / C12880;
    const double C28551 = C20683 / C12880;
    const double C28550 = C20597 / C12880;
    const double C28546 = C20511 / C12880;
    const double C28545 = C20422 / C12880;
    const double C28541 = C20334 / C12880;
    const double C28539 = C20247 / C12880;
    const double C28536 = C20080 / C12880;
    const double C28535 = C20063 / C12880;
    const double C28533 = C19975 / C12880;
    const double C28525 = C19813 / C12880;
    const double C28524 = C19798 / C12880;
    const double C28523 = C19709 / C12880;
    const double C28521 = C19622 / C12880;
    const double C28518 = C19535 / C12880;
    const double C28510 = C19364 / C12880;
    const double C28509 = C19347 / C12880;
    const double C28504 = C19182 / C12880;
    const double C28503 = C19165 / C12880;
    const double C28495 = C19000 / C12880;
    const double C28494 = C18985 / C12880;
    const double C28490 = C18895 / C12880;
    const double C28488 = C18805 / C12880;
    const double C28485 = C18718 / C12880;
    const double C28477 = C18548 / C12880;
    const double C28476 = C18530 / C12880;
    const double C28464 = C18360 / C12880;
    const double C28463 = C18342 / C12880;
    const double C28453 = C18096 / C12880;
    const double C28452 = C18080 / C12880;
    const double C28451 = C18063 / C12880;
    const double C28863 = C26567 / C12880;
    const double C28856 = C25959 / C12880;
    const double C28847 = C26306 / C12880;
    const double C28826 = C25973 / C12880;
    const double C28825 = C25830 / C12880;
    const double C28821 = C25744 / C12880;
    const double C28820 = C25658 / C12880;
    const double C28816 = C25572 / C12880;
    const double C28815 = C25483 / C12880;
    const double C28811 = C25395 / C12880;
    const double C28809 = C25308 / C12880;
    const double C28806 = C25141 / C12880;
    const double C28805 = C25124 / C12880;
    const double C28803 = C25036 / C12880;
    const double C28795 = C24874 / C12880;
    const double C28794 = C24859 / C12880;
    const double C28793 = C24770 / C12880;
    const double C28791 = C24683 / C12880;
    const double C28788 = C24596 / C12880;
    const double C28780 = C24425 / C12880;
    const double C28779 = C24408 / C12880;
    const double C28774 = C24243 / C12880;
    const double C28773 = C24226 / C12880;
    const double C28765 = C24061 / C12880;
    const double C28764 = C24046 / C12880;
    const double C28760 = C23956 / C12880;
    const double C28758 = C23866 / C12880;
    const double C28755 = C23779 / C12880;
    const double C28747 = C23609 / C12880;
    const double C28746 = C23591 / C12880;
    const double C28734 = C23421 / C12880;
    const double C28733 = C23403 / C12880;
    const double C28723 = C23157 / C12880;
    const double C28722 = C23141 / C12880;
    const double C28721 = C23124 / C12880;
    const double C28446 = C28350 / q;
    const double C28445 = C28349 / q;
    const double C28444 = C28347 / q;
    const double C28443 = C28345 / q;
    const double C28441 = C28343 / q;
    const double C28440 = C28341 / q;
    const double C28439 = C28340 / q;
    const double C28438 = C28338 / C12880;
    const double C28437 = C28335 / q;
    const double C28436 = C28334 / q;
    const double C28442 = C28330 / q;
    const double C28435 = C28329 / q;
    const double C28434 = C28327 / q;
    const double C28433 = C28326 / q;
    const double C28427 = C28324 / q;
    const double C28426 = C28322 / q;
    const double C28425 = C28321 / q;
    const double C28424 = C28320 / q;
    const double C28428 = C28319 / q;
    const double C28432 = C28318 / q;
    const double C28423 = C28317 / q;
    const double C28422 = C28316 / q;
    const double C28420 = C28313 / C12880;
    const double C28430 = C28312 / q;
    const double C28429 = C28310 / q;
    const double C28431 = C28309 / q;
    const double C28419 = C28308 / q;
    const double C28418 = C28306 / q;
    const double C28417 = C28305 / q;
    const double C28416 = C28304 / q;
    const double C28415 = C28303 / q;
    const double C28421 = C28302 / q;
    const double C28414 = C28301 / q;
    const double C28413 = C28300 / q;
    const double C28412 = C28297 / C12880;
    const double C28411 = C28289 / q;
    const double C28410 = C28287 / q;
    const double C28409 = C28285 / q;
    const double C28408 = C28283 / q;
    const double C28407 = C28281 / q;
    const double C28406 = C28279 / q;
    const double C28358 = C28176 + C28177;
    const double C28354 = C28171 + C28172;
    const double C28353 = C28166 + C28167;
    const double C28716 = C28631 / q;
    const double C28715 = C28630 / q;
    const double C28714 = C28629 / q;
    const double C28713 = C28627 / q;
    const double C28712 = C28626 / q;
    const double C28711 = C28625 / q;
    const double C28710 = C28624 / q;
    const double C28709 = C28622 / q;
    const double C28708 = C28620 / q;
    const double C28707 = C28619 / q;
    const double C28706 = C28617 / C12880;
    const double C28705 = C28614 / q;
    const double C28704 = C28613 / q;
    const double C28703 = C28608 / q;
    const double C28702 = C28606 / q;
    const double C28698 = C28603 / q;
    const double C28697 = C28600 / q;
    const double C28695 = C28598 / q;
    const double C28694 = C28597 / q;
    const double C28693 = C28596 / q;
    const double C28692 = C28595 / q;
    const double C28689 = C28592 / C12880;
    const double C28701 = C28591 / q;
    const double C28699 = C28589 / q;
    const double C28688 = C28585 / q;
    const double C28687 = C28583 / q;
    const double C28686 = C28582 / q;
    const double C28691 = C28581 / q;
    const double C28685 = C28580 / q;
    const double C28684 = C28579 / q;
    const double C28683 = C28576 / C12880;
    const double C28690 = C28575 / q;
    const double C28696 = C28574 / q;
    const double C28700 = C28573 / q;
    const double C28682 = C28569 / q;
    const double C28681 = C28568 / q;
    const double C28680 = C28566 / q;
    const double C28679 = C28564 / q;
    const double C28678 = C28562 / q;
    const double C28677 = C28561 / q;
    const double C28676 = C28560 / q;
    const double C28675 = C28559 / q;
    const double C28674 = C28558 / q;
    const double C28673 = C28557 / q;
    const double C28978 = C28896 / q;
    const double C28977 = C28894 / q;
    const double C28976 = C28892 / q;
    const double C28975 = C28890 / q;
    const double C28974 = C28889 / q;
    const double C28973 = C28887 / C12880;
    const double C28972 = C28886 / q;
    const double C28971 = C28885 / q;
    const double C28970 = C28884 / q;
    const double C28969 = C28883 / q;
    const double C28968 = C28882 / q;
    const double C28967 = C28881 / q;
    const double C28966 = C28879 / q;
    const double C28965 = C28878 / q;
    const double C28964 = C28877 / q;
    const double C28963 = C28876 / q;
    const double C28961 = C28873 / q;
    const double C28960 = C28870 / q;
    const double C28962 = C28868 / q;
    const double C28959 = C28866 / q;
    const double C28958 = C28865 / q;
    const double C28957 = C28862 / C12880;
    const double C28956 = C28861 / q;
    const double C28955 = C28859 / q;
    const double C28954 = C28858 / q;
    const double C28953 = C28855 / q;
    const double C28952 = C28853 / q;
    const double C28951 = C28852 / q;
    const double C28950 = C28851 / q;
    const double C28949 = C28850 / q;
    const double C28948 = C28849 / q;
    const double C28947 = C28846 / C12880;
    const double C28946 = C28845 / q;
    const double C28945 = C28844 / q;
    const double C28944 = C28843 / q;
    const double C28943 = C28841 / q;
    const double C28942 = C28838 / q;
    const double C28941 = C28837 / q;
    const double C28940 = C28836 / q;
    const double C28939 = C28835 / q;
    const double C28938 = C28834 / q;
    const double C28937 = C28833 / q;
    const double C28936 = C28832 / q;
    const double C28935 = C28830 / q;
    const double C28934 = C28828 / q;
    const double C12964 = -(C12865 * C28358 + C28284) / q;
    const double C12965 = C28168 - (C15914 * C28358) / q - C28409;
    const double C12980 = -(C12884 * C28358 + C28286) / q;
    const double C12981 = C28169 - (C13632 * C28358) / q - C28410;
    const double C12996 = -(C12901 * C28358 + C28288) / q;
    const double C12997 = C28170 - (C13367 * C28358) / q - C28411;
    const double C13060 = -(C15750 * C28358 + C28292) / q;
    const double C13091 = -(C15797 * C28358 + C28293) / q;
    const double C13106 = -(C15827 * C28358 + C28294) / q;
    const double C13121 = -(C13542 * C28358 + C28295) / q;
    const double C13136 = -(C13173 * C28358 + C28296) / q;
    const double C13219 = -(C13154 * C28358 + C28302) / q;
    const double C13220 = C28184 - (C16224 * C28358) / q - C28415;
    const double C13235 = C28185 - (C13725 * C28358) / q - C28416;
    const double C13284 = -(C13818 * C28358 + C28309) / q;
    const double C13285 = -(C15871 * C28358 + C28310) / q;
    const double C13301 = -(C15395 * C28358 + C28311) / q;
    const double C13316 = -(C16194 * C28358 + C28312) / q;
    const double C13415 = C13367 / q - (C13348 * C28358) / q - C28422;
    const double C13416 = C28420 - (C16517 * C28358) / q - C28423;
    const double C13480 = C28314 - (C14658 * C28358) / q - C28424;
    const double C13481 = C13632 / q - (C15958 * C28358) / q - C28425;
    const double C13497 = C28307 - (C15573 * C28358) / q - C28426;
    const double C13512 = C28323 - (C16254 * C28358) / q - C28427;
    const double C13572 = C28206 - (C16074 * C28358) / q - C28428;
    const double C13787 = C28267 - (C15484 * C28358) / q - C28432;
    const double C13881 = C28215 - (C14476 * C28358) / q - C28434;
    const double C13896 = -(C13834 * C28358 + C28328) / q;
    const double C13897 = C28216 - (C14211 * C28358) / q - C28435;
    const double C13972 = -(C14386 * C28358 + C28330) / q;
    const double C13987 = -(C16164 * C28358 + C28331) / q;
    const double C13988 = -(C14023 * C28358 + C28332) / q;
    const double C14069 = -(C14005 * C28358 + C28333) / q;
    const double C14070 = C28224 - (C17068 * C28358) / q - C28436;
    const double C14085 = C28225 - (C14567 * C28358) / q - C28437;
    const double C14132 = -(C16836 * C28358 + C28336) / q;
    const double C14162 = -(C17038 * C28358 + C28337) / q;
    const double C14261 = C14211 / q - (C14193 * C28358) / q - C28439;
    const double C14262 = C28438 - (C17302 * C28358) / q - C28440;
    const double C14324 = C28344 - (C16892 * C28358) / q - C28443;
    const double C14354 = C28339 - (C14842 * C28358) / q - C28346 / q;
    const double C14355 = C14567 / q - (C17098 * C28358) / q - C28444;
    const double C14370 = C28299 - (C15662 * C28358) / q - C28348 / q;
    const double C14416 = C28239 - (C16935 * C28358) / q - C28441;
    const double C14719 =
        (3 * C14658) / C12880 - (C15212 * C28358) / q - C28445;
    const double C14734 = C28277 - (C16431 * C28358) / q - (C14674 * p) / q;
    const double C14735 = C16431 / q - (C14674 * C28358) / q - (C14951 * p) / q;
    const double C14736 =
        (3 * C14674) / C12880 - (C14951 * C28358) / q - (C14933 * p) / q;
    const double C14811 = C28325 - (C15122 * C28358) / q - C28446;
    const double C14872 =
        (3 * C14842) / C12880 - (C15304 * C28358) / q - C28351 / q;
    const double C14999 =
        (2 * C14951) / q - (C14933 * C28358) / q - (C17796 * p) / q;
    const double C15000 =
        (5 * C14933) / C12880 - (C17796 * C28358) / q - (C17811 * p) / q;
    const double C15062 =
        (2 * C15212) / q - (C17564 * C28358) / q - (C17855 * p) / q;
    const double C15092 =
        (2 * C15304) / q - (C17665 * C28358) / q - (C17870 * p) / q;
    const double C15152 =
        (3 * C15122) / C12880 - (C17620 * C28358) / q - C28352 / q;
    const double C18159 = -(C18063 * C28358 + C28563) / q;
    const double C18175 = -(C18080 * C28358 + C28565) / q;
    const double C18191 = -(C18096 * C28358 + C28567) / q;
    const double C18251 = -(C20868 * C28358 + C28571) / q;
    const double C18280 = -(C20898 * C28358 + C28572) / q;
    const double C18295 = -(C20927 * C28358 + C28573) / q;
    const double C18310 = -(C18718 * C28358 + C28574) / q;
    const double C18325 = -(C18360 * C28358 + C28575) / q;
    const double C18406 = -(C18342 * C28358 + C28581) / q;
    const double C18468 = -(C18985 * C28358 + C28588) / q;
    const double C18469 = -(C20971 * C28358 + C28589) / q;
    const double C18484 = -(C20511 * C28358 + C28590) / q;
    const double C18499 = -(C21288 * C28358 + C28591) / q;
    const double C18658 = C28594 - (C19798 * C28358) / q - C28599 / q;
    const double C18674 = C28586 - (C20683 * C28358) / q - C28601 / q;
    const double C19062 = -(C19000 * C28358 + C28607) / q;
    const double C19134 = -(C19535 * C28358 + C28609) / q;
    const double C19149 = -(C21245 * C28358 + C28610) / q;
    const double C19150 = -(C19182 * C28358 + C28611) / q;
    const double C19229 = -(C19165 * C28358 + C28612) / q;
    const double C19289 = -(C21918 * C28358 + C28615) / q;
    const double C19318 = -(C22116 * C28358 + C28616) / q;
    const double C19858 =
        (3 * C19798) / C12880 - (C20334 * C28358) / q - C28628 / q;
    const double C19873 = C28556 - (C21506 * C28358) / q - (C19813 * p) / q;
    const double C19874 = C21506 / q - (C19813 * C28358) / q - (C20080 * p) / q;
    const double C19875 =
        (3 * C19813) / C12880 - (C20080 * C28358) / q - (C20063 * p) / q;
    const double C20129 =
        (2 * C20080) / q - (C20063 * C28358) / q - (C22863 * p) / q;
    const double C20130 =
        (5 * C20063) / C12880 - (C22863 * C28358) / q - (C22878 * p) / q;
    const double C20189 =
        (2 * C20334) / q - (C22636 * C28358) / q - (C22922 * p) / q;
    const double C20218 =
        (2 * C20422) / q - (C22735 * C28358) / q - (C22937 * p) / q;
    const double C23341 =
        (C15808 * de) / q - (C25959 * C28358) / q - C28842 / q;
    const double C23545 =
        (C16160 * de) / q - (C25572 * C28358) / q - C28860 / q;
    const double C23719 =
        (C16382 * de) / q - (C24859 * C28358) / q + C28864 - C28869 / q;
    const double C23735 =
        (C16427 * de) / q - (C25744 * C28358) / q + C28856 - C28871 / q;
    const double C24016 =
        (C16746 * de) / q - (C25658 * C28358) / q + C28816 - C28867 / q;
    const double C24210 =
        (C17998 * de) / q - (C26306 * C28358) / q - C28880 / q;
    const double C24565 =
        (C17632 * de) / q - (C25036 * C28358) / q + C28888 - C28895 / q;
    const double C24581 =
        (C18013 * de) / q - (C25830 * C28358) / q + C28847 - C28897 / q;
    const double C24919 = (C17722 * de) / q - (C25395 * C28358) / q +
                          (3 * C24859) / C12880 - C28898 / q;
    const double C24934 = (C17518 * de) / q - (C24874 * C28358) / q +
                          C26567 / q - (C25141 * p) / q;
    const double C24935 =
        (C18028 * de) / q - (C26567 * C28358) / q + C28826 - (C24874 * p) / q;
    const double C24936 = (C17707 * de) / q - (C25141 * C28358) / q +
                          (3 * C24874) / C12880 - (C25124 * p) / q;
    const double C25007 =
        (C17647 * de) / q - (C25308 * C28358) / q + C28874 - C28899 / q;
    const double C25067 = (C17954 * de) / q - (C25483 * C28358) / q +
                          (3 * C25036) / C12880 - C28900 / q;
    const double C25190 = (C17677 * de) / q - (C25124 * C28358) / q +
                          (2 * C25141) / q - (C27920 * p) / q;
    const double C25191 = (C27930 * de) / q - (C27920 * C28358) / q +
                          (5 * C25124) / C12880 - (C27936 * p) / q;
    const double C25250 = (C17692 * de) / q - (C27694 * C28358) / q +
                          (2 * C25395) / q - (C27980 * p) / q;
    const double C25279 = (C22816 * de) / q - (C27793 * C28358) / q +
                          (2 * C25483) / q - (C27995 * p) / q;
    const double C25338 = (C17969 * de) / q - (C27750 * C28358) / q +
                          (3 * C25308) / C12880 - C28901 / q;
    const double C12916 = -(C12865 * C28354 + C28278) / q;
    const double C12917 = C28168 - (C15827 * C28354) / q - C28406;
    const double C12932 = -(C12884 * C28354 + C28280) / q;
    const double C12933 = C28169 - (C13542 * C28354) / q - C28407;
    const double C12948 = -(C12901 * C28354 + C28282) / q;
    const double C12949 = C28170 - (C13173 * C28354) / q - C28408;
    const double C13013 = -(C15750 * C28354 + C28290) / q;
    const double C13044 = -(C15797 * C28354 + C28291) / q;
    const double C13189 = C13173 / q - (C13154 * C28354) / q - C28413;
    const double C13190 = C28412 - (C16194 * C28354) / q - C28414;
    const double C13251 = C28298 - (C13818 * C28354) / q - C28417;
    const double C13252 = C13542 / q - (C15871 * C28354) / q - C28418;
    const double C13268 = C28307 - (C15395 * C28354) / q - C28419;
    const double C13383 = -(C13348 * C28354 + C28304) / q;
    const double C13384 = C28197 - (C16254 * C28354) / q - C28415;
    const double C13399 = -(C13367 * C28354 + C28296) / q;
    const double C13400 = C28198 - (C13725 * C28354) / q - C28421;
    const double C13446 = -(C14658 * C28354 + C28318) / q;
    const double C13447 = -(C15958 * C28354 + C28319) / q;
    const double C13463 = -(C15573 * C28354 + C28311) / q;
    const double C13464 = -(C13632 * C28354 + C28295) / q;
    const double C13648 = C28209 - (C16074 * C28354) / q - C28429;
    const double C13678 = -(C15914 * C28354 + C28294) / q;
    const double C13741 = C28323 - (C16224 * C28354) / q - C28430;
    const double C13771 = C28272 - (C15484 * C28354) / q - C28431;
    const double C13849 =
        (3 * C13818) / C12880 - (C14386 * C28354) / q - C28433;
    const double C13864 = C28277 - (C16164 * C28354) / q - (C13834 * p) / q;
    const double C13865 = C16164 / q - (C13834 * C28354) / q - (C14023 * p) / q;
    const double C13866 =
        (3 * C13834) / C12880 - (C14023 * C28354) / q - (C14005 * p) / q;
    const double C14039 =
        (2 * C14023) / q - (C14005 * C28354) / q - (C17038 * p) / q;
    const double C14040 =
        (5 * C14005) / C12880 - (C17038 * C28354) / q - (C17053 * p) / q;
    const double C14101 =
        (2 * C14386) / q - (C16836 * C28354) / q - (C17113 * p) / q;
    const double C14227 = C28246 - (C14842 * C28354) / q - C28435;
    const double C14228 = C14842 / q - (C14193 * C28354) / q - C28437;
    const double C14229 = C28438 - (C17098 * C28354) / q - C28436;
    const double C14244 = C28315 - (C15662 * C28354) / q - C28328 / q;
    const double C14245 = C28339 - (C14211 * C28354) / q - C28332 / q;
    const double C14246 =
        (3 * C14211) / C12880 - (C14567 * C28354) / q - C28333 / q;
    const double C14292 = C28342 - (C16892 * C28354) / q - C28441;
    const double C14308 = C28325 - (C14476 * C28354) / q - C28442;
    const double C14492 =
        (3 * C14476) / C12880 - (C16935 * C28354) / q - C28336 / q;
    const double C14583 = (2 * C14567) / q - (C17068 * C28354) / q - C28337 / q;
    const double C14689 = C28245 - (C15122 * C28354) / q - C28434;
    const double C14704 = -(C14674 * C28354 + C28348) / q;
    const double C14967 = -(C14933 * C28354 + C28351) / q;
    const double C14968 = C28256 - (C17665 * C28354) / q - C28440;
    const double C14983 = -(C14951 * C28354 + C28346) / q;
    const double C14984 = C28257 - (C15304 * C28354) / q - C28439;
    const double C15030 = -(C17564 * C28354 + C28352) / q;
    const double C15046 = -(C15212 * C28354 + C28350) / q;
    const double C15228 = C28262 - (C17620 * C28354) / q - C28443;
    const double C15258 = -(C16517 * C28354 + C28324) / q;
    const double C15320 = C15304 / q - (C17302 * C28354) / q - C28444;
    const double C15617 = -(C16431 * C28354 + C28331) / q;
    const double C18236 =
        (C15808 * de) / q - (C20898 * C28354) / q - C28570 / q;
    const double C18437 =
        (C16115 * de) / q - (C18985 * C28354) / q + C28578 - C28584 / q;
    const double C18453 =
        (C16160 * de) / q - (C20511 * C28354) / q + C28586 - C28587 / q;
    const double C18642 =
        (C16427 * de) / q - (C20683 * C28354) / q - C28590 / q;
    const double C18940 =
        (C16746 * de) / q - (C20597 * C28354) / q + C28551 - C28588 / q;
    const double C19015 = (C17020 * de) / q - (C19535 * C28354) / q +
                          (3 * C18985) / C12880 - C28605 / q;
    const double C19030 = (C16818 * de) / q - (C19000 * C28354) / q +
                          C21245 / q - (C19182 * p) / q;
    const double C19031 =
        (C17998 * de) / q - (C21245 * C28354) / q + C28556 - (C19000 * p) / q;
    const double C19032 = (C17005 * de) / q - (C19182 * C28354) / q +
                          (3 * C19000) / C12880 - (C19165 * p) / q;
    const double C19199 = (C16975 * de) / q - (C19165 * C28354) / q +
                          (2 * C19182) / q - (C22116 * p) / q;
    const double C19200 = (C22127 * de) / q - (C22116 * C28354) / q +
                          (5 * C19165) / C12880 - (C22132 * p) / q;
    const double C19260 = (C16990 * de) / q - (C21918 * C28354) / q +
                          (2 * C19535) / q - (C22192 * p) / q;
    const double C19398 =
        (C17185 * de) / q - (C19364 * C28354) / q + C28618 - C28611 / q;
    const double C19399 =
        (C18013 * de) / q - (C20769 * C28354) / q + C28593 - C28607 / q;
    const double C19400 = (C17474 * de) / q - (C19709 * C28354) / q +
                          (3 * C19364) / C12880 - C28612 / q;
    const double C19460 =
        (C17200 * de) / q - (C19622 * C28354) / q + C28604 - C28609 / q;
    const double C19638 = (C17489 * de) / q - (C22017 * C28354) / q +
                          (3 * C19622) / C12880 - C28615 / q;
    const double C19726 = (C22575 * de) / q - (C22147 * C28354) / q +
                          (2 * C19709) / q - C28616 / q;
    const double C20726 =
        (C18028 * de) / q - (C21506 * C28354) / q - C28610 / q;
    const double C23172 = -(C23124 * C28354 + C28827) / q;
    const double C23188 = -(C23141 * C28354 + C28829) / q;
    const double C23204 = -(C23157 * C28354 + C28831) / q;
    const double C23268 = -(C25929 * C28354 + C28839) / q;
    const double C23297 = -(C25959 * C28354 + C28840) / q;
    const double C23498 = C28848 - (C24046 * C28354) / q - C28854 / q;
    const double C23514 = C28856 - (C25572 * C28354) / q - C28857 / q;
    const double C23625 = -(C23591 * C28354 + C28853) / q;
    const double C23641 = -(C23609 * C28354 + C28845) / q;
    const double C23687 = -(C24859 * C28354 + C28867) / q;
    const double C23688 = -(C26119 * C28354 + C28868) / q;
    const double C23703 = -(C25744 * C28354 + C28860) / q;
    const double C23704 = -(C23866 * C28354 + C28844) / q;
    const double C23911 = -(C26075 * C28354 + C28843) / q;
    const double C24076 =
        (3 * C24046) / C12880 - (C24596 * C28354) / q - C28875 / q;
    const double C24091 = C28826 - (C26306 * C28354) / q - (C24061 * p) / q;
    const double C24092 = C26306 / q - (C24061 * C28354) / q - (C24243 * p) / q;
    const double C24093 =
        (3 * C24061) / C12880 - (C24243 * C28354) / q - (C24226 * p) / q;
    const double C24260 =
        (2 * C24243) / q - (C24226 * C28354) / q - (C27177 * p) / q;
    const double C24261 =
        (5 * C24226) / C12880 - (C27177 * C28354) / q - (C27192 * p) / q;
    const double C24321 =
        (2 * C24596) / q - (C26979 * C28354) / q - (C27252 * p) / q;
    const double C24904 = -(C24874 * C28354 + C28897) / q;
    const double C25158 = -(C25124 * C28354 + C28900) / q;
    const double C25174 = -(C25141 * C28354 + C28895) / q;
    const double C25220 = -(C27694 * C28354 + C28901) / q;
    const double C25235 = -(C25395 * C28354 + C28899) / q;
    const double C25440 = -(C26666 * C28354 + C28873) / q;
    const double C25787 = -(C26567 * C28354 + C28880) / q;
    const double C12863 = (C15746 * de) / q - (C12865 * C28353) / q +
                          (2 * C12884) / q - (C15750 * p) / q;
    const double C12864 = (C15762 * de) / q - (C12884 * C28353) / q +
                          (3 * C12901) / C12880 - (C12865 * p) / q;
    const double C12866 = (C15777 * de) / q - (C15750 * C28353) / q +
                          (5 * C12865) / C12880 - (C15781 * p) / q;
    const double C12883 = (C15793 * de) / q - (C12901 * C28353) / q +
                          C15797 / q - (C12884 * p) / q;
    const double C12900 =
        (C15808 * de) / q - (C15797 * C28353) / q + C28277 - (C12901 * p) / q;
    const double C13152 =
        (C16100 * de) / q - (C13154 * C28353) / q + C13818 / q - C28407;
    const double C13153 =
        (C16115 * de) / q - (C13818 * C28353) / q + C28216 - C28408;
    const double C13155 =
        (C16130 * de) / q - (C15871 * C28353) / q + C28412 - C28406;
    const double C13171 =
        (C16145 * de) / q - (C13173 * C28353) / q + C28298 - C28280 / q;
    const double C13172 =
        (C16160 * de) / q - (C15395 * C28353) / q + C28299 - C28282 / q;
    const double C13174 = (C16176 * de) / q - (C13542 * C28353) / q +
                          (3 * C13173) / C12880 - C28278 / q;
    const double C13346 =
        (C16367 * de) / q - (C13348 * C28353) / q + C14658 / q - C28410;
    const double C13347 =
        (C16382 * de) / q - (C14658 * C28353) / q + C28246 - C28411;
    const double C13349 =
        (C16397 * de) / q - (C15958 * C28353) / q + C28420 - C28409;
    const double C13365 =
        (C16412 * de) / q - (C13367 * C28353) / q + C28314 - C28286 / q;
    const double C13366 =
        (C16427 * de) / q - (C15573 * C28353) / q + C28315 - C28288 / q;
    const double C13368 = (C16443 * de) / q - (C13632 * C28353) / q +
                          (3 * C13367) / C12880 - C28284 / q;
    const double C13543 = (C16659 * de) / q - (C15827 * C28353) / q +
                          (2 * C13542) / q - C28290 / q;
    const double C13633 = (C16688 * de) / q - (C15914 * C28353) / q +
                          (2 * C13632) / q - C28292 / q;
    const double C13723 =
        (C16731 * de) / q - (C13725 * C28353) / q + C28325 - C28295 / q;
    const double C13724 =
        (C16746 * de) / q - (C15484 * C28353) / q + C28276 - C28296 / q;
    const double C13726 = (C16761 * de) / q - (C16074 * C28353) / q +
                          (3 * C13725) / C12880 - C28294 / q;
    const double C13817 = (C16818 * de) / q - (C13834 * C28353) / q - C28419;
    const double C14004 = (C16975 * de) / q - (C14005 * C28353) / q - C28433;
    const double C14006 =
        (C16990 * de) / q - (C16836 * C28353) / q + C28224 - C28414;
    const double C14022 = (C17005 * de) / q - (C14023 * C28353) / q - C28417;
    const double C14024 =
        (C17020 * de) / q - (C14386 * C28353) / q + C28225 - C28413;
    const double C14192 = (C17155 * de) / q - (C14193 * C28353) / q - C28434;
    const double C14194 =
        (C17170 * de) / q - (C16892 * C28353) / q + C28230 - C28415;
    const double C14210 = (C17185 * de) / q - (C14211 * C28353) / q - C28431;
    const double C14212 =
        (C17200 * de) / q - (C14476 * C28353) / q + C28231 - C28421;
    const double C14387 =
        (C17416 * de) / q - (C16194 * C28353) / q + C14386 / q - C28418;
    const double C14477 =
        (C17445 * de) / q - (C16224 * C28353) / q + C28344 - C28429;
    const double C14566 = (C17474 * de) / q - (C14567 * C28353) / q - C28442;
    const double C14568 =
        (C17489 * de) / q - (C16935 * C28353) / q + C28244 - C28430;
    const double C14657 = (C17518 * de) / q - (C14674 * C28353) / q - C28426;
    const double C14841 = (C17632 * de) / q - (C14842 * C28353) / q - C28432;
    const double C14843 =
        (C17647 * de) / q - (C15122 * C28353) / q + C28254 - C28416;
    const double C14932 = (C17677 * de) / q - (C14933 * C28353) / q - C28445;
    const double C14934 =
        (C17692 * de) / q - (C17564 * C28353) / q + C28256 - C28423;
    const double C14950 = (C17707 * de) / q - (C14951 * C28353) / q - C28424;
    const double C14952 =
        (C17722 * de) / q - (C15212 * C28353) / q + C28257 - C28422;
    const double C15123 =
        (C17882 * de) / q - (C16254 * C28353) / q + C28342 - C28428;
    const double C15213 =
        (C17911 * de) / q - (C16517 * C28353) / q + C15212 / q - C28425;
    const double C15303 = (C17954 * de) / q - (C15304 * C28353) / q - C28446;
    const double C15305 =
        (C17969 * de) / q - (C17620 * C28353) / q + C28266 - C28427;
    const double C15394 =
        (C17998 * de) / q - (C16164 * C28353) / q - C28291 / q;
    const double C15483 =
        (C18013 * de) / q - (C15662 * C28353) / q - C28311 / q;
    const double C15572 =
        (C18028 * de) / q - (C16431 * C28353) / q - C28293 / q;
    const double C18061 =
        (3 * C18096) / C12880 - (C18080 * C28353) / q - (C18063 * p) / q;
    const double C18062 =
        (2 * C18080) / q - (C18063 * C28353) / q - (C20868 * p) / q;
    const double C18064 =
        (5 * C18063) / C12880 - (C20868 * C28353) / q - (C20883 * p) / q;
    const double C18079 = C20898 / q - (C18096 * C28353) / q - (C18080 * p) / q;
    const double C18095 = C28556 - (C20898 * C28353) / q - (C18096 * p) / q;
    const double C18546 = C28593 - (C20683 * C28353) / q - C28567 / q;
    const double C18547 = C28594 - (C18548 * C28353) / q - C28565 / q;
    const double C18549 =
        (3 * C18548) / C12880 - (C18805 * C28353) / q - C28563 / q;
    const double C18806 = (2 * C18805) / q - (C21014 * C28353) / q - C28571 / q;
    const double C18984 = -(C19000 * C28353 + C28587) / q;
    const double C19166 = -(C19165 * C28353 + C28605) / q;
    const double C19183 = -(C19182 * C28353 + C28584) / q;
    const double C19348 = -(C19347 * C28353 + C28606) / q;
    const double C19365 = -(C19364 * C28353 + C28588) / q;
    const double C19710 = -(C19709 * C28353 + C28609) / q;
    const double C19797 = -(C19813 * C28353 + C28601) / q;
    const double C19976 = -(C19975 * C28353 + C28597) / q;
    const double C20064 = -(C20063 * C28353 + C28628) / q;
    const double C20081 = -(C20080 * C28353 + C28599) / q;
    const double C20423 = -(C20422 * C28353 + C28629) / q;
    const double C20510 = -(C21245 * C28353 + C28570) / q;
    const double C20596 = -(C20769 * C28353 + C28590) / q;
    const double C20682 = -(C21506 * C28353 + C28572) / q;
    const double C23122 =
        (3 * C23157) / C12880 - (C23141 * C28353) / q - (C23124 * p) / q;
    const double C23123 =
        (2 * C23141) / q - (C23124 * C28353) / q - (C25929 * p) / q;
    const double C23125 =
        (5 * C23124) / C12880 - (C25929 * C28353) / q - (C25944 * p) / q;
    const double C23140 = C25959 / q - (C23157 * C28353) / q - (C23141 * p) / q;
    const double C23156 = C28826 - (C25959 * C28353) / q - (C23157 * p) / q;
    const double C23419 = C28847 - (C25572 * C28353) / q - C28831 / q;
    const double C23420 = C28848 - (C23421 * C28353) / q - C28829 / q;
    const double C23422 =
        (3 * C23421) / C12880 - (C23779 * C28353) / q - C28827 / q;
    const double C23780 = (2 * C23779) / q - (C25988 * C28353) / q - C28839 / q;
    const double C24045 = -(C24061 * C28353 + C28857) / q;
    const double C24227 = -(C24226 * C28353 + C28875) / q;
    const double C24244 = -(C24243 * C28353 + C28854) / q;
    const double C24409 = -(C24408 * C28353 + C28876) / q;
    const double C24426 = -(C24425 * C28353 + C28858) / q;
    const double C24771 = -(C24770 * C28353 + C28879) / q;
    const double C24858 = -(C24874 * C28353 + C28871) / q;
    const double C25037 = -(C25036 * C28353 + C28867) / q;
    const double C25125 = -(C25124 * C28353 + C28898) / q;
    const double C25142 = -(C25141 * C28353 + C28869) / q;
    const double C25484 = -(C25483 * C28353 + C28899) / q;
    const double C25571 = -(C26306 * C28353 + C28840) / q;
    const double C25657 = -(C25830 * C28353 + C28860) / q;
    const double C25743 = -(C26567 * C28353 + C28842) / q;
    const double C20159 = (C17692 * de) / q - (C22636 * C28354) / q - C28716;
    const double C20277 =
        (3 * C20247) / C12880 - (C22692 * C28358) / q - C28716;
    const double C20006 =
        (3 * C19975) / C12880 - (C20422 * C28358) / q - C28715;
    const double C20097 = (C17677 * de) / q - (C20063 * C28354) / q - C28715;
    const double C19946 = C28604 - (C20247 * C28358) / q - C28714;
    const double C20174 = (C17722 * de) / q - (C20334 * C28354) / q - C28714;
    const double C19520 = C28577 - (C20769 * C28358) / q - C28713;
    const double C19843 = (C17518 * de) / q - (C19813 * C28354) / q - C28713;
    const double C19505 = C19709 / q - (C22177 * C28358) / q - C28712;
    const double C20439 =
        (C23046 * de) / q - (C22378 * C28354) / q + C20422 / q - C28712;
    const double C19504 = C28618 - (C19975 * C28358) / q - C28711;
    const double C20113 = (C17707 * de) / q - (C20080 * C28354) / q - C28711;
    const double C19475 = C28623 - (C21974 * C28358) / q - C28710;
    const double C20350 =
        (C17969 * de) / q - (C22692 * C28354) / q + C28541 - C28710;
    const double C19445 =
        (C17170 * de) / q - (C21974 * C28354) / q + C28621 - C28709;
    const double C19565 = C28518 - (C22017 * C28358) / q - C28709;
    const double C20098 =
        (C22816 * de) / q - (C22735 * C28354) / q + C28535 - C28708;
    const double C19415 = C19364 / q - (C19347 * C28358) / q - C28707;
    const double C20114 =
        (C17954 * de) / q - (C20422 * C28354) / q + C28536 - C28707;
    const double C19416 = C28706 - (C22378 * C28358) / q - C28708;
    const double C19245 = C28504 - (C19709 * C28358) / q - C28705;
    const double C19381 =
        (C17155 * de) / q - (C19347 * C28354) / q + C19975 / q - C28705;
    const double C19230 = C28503 - (C22147 * C28358) / q - C28704;
    const double C19383 =
        (C22317 * de) / q - (C22177 * C28354) / q + C28706 - C28704;
    const double C19063 = C28495 - (C19364 * C28358) / q - C28703;
    const double C19382 =
        (C17632 * de) / q - (C19975 * C28354) / q + C28525 - C28703;
    const double C19047 = C28494 - (C19622 * C28358) / q - C28702;
    const double C19828 =
        (C17647 * de) / q - (C20247 * C28354) / q + C28524 - C28702;
    const double C18689 = C28602 - (C21348 * C28358) / q - C28698;
    const double C20379 = (C17911 * de) / q - (C21605 * C28354) / q - C28698;
    const double C20424 = C28545 - (C22692 * C28353) / q - C28698;
    const double C18659 = C18805 / q - (C21058 * C28358) / q - C28697;
    const double C20335 = C20334 / q - (C21605 * C28353) / q - C28697;
    const double C18627 = (C16397 * de) / q - (C21058 * C28354) / q - C28695;
    const double C18748 = C28485 - (C21174 * C28358) / q - C28695;
    const double C20248 = C28621 - (C21348 * C28353) / q - C28695;
    const double C18626 = (C16382 * de) / q - (C19798 * C28354) / q - C28694;
    const double C18955 = C28546 - (C20597 * C28358) / q - C28694;
    const double C20065 = C28535 - (C22636 * C28353) / q - C28693;
    const double C18596 = C18548 / q - (C18530 * C28358) / q - C28692;
    const double C20082 = C28536 - (C20334 * C28353) / q - C28692;
    const double C18597 = C28689 - (C21605 * C28358) / q - C28693;
    const double C18911 =
        (C17445 * de) / q - (C21318 * C28354) / q + C28602 - C28701;
    const double C19711 = C28523 - (C22017 * C28353) / q - C28701;
    const double C18821 =
        (C16761 * de) / q - (C21174 * C28354) / q + C28488 - C28699;
    const double C19623 = C28623 - (C21318 * C28353) / q - C28699;
    const double C18438 =
        (C16130 * de) / q - (C20971 * C28354) / q + C18718 / q - C28688;
    const double C19536 = C19535 / q - (C21288 * C28353) / q - C28688;
    const double C18422 = C28464 - (C18895 * C28358) / q - C28687;
    const double C18564 = (C16367 * de) / q - (C18530 * C28354) / q - C28687;
    const double C19977 = C28533 - (C20247 * C28353) / q - C28687;
    const double C18407 = C28463 - (C21318 * C28358) / q - C28686;
    const double C18565 =
        (C17882 * de) / q - (C21348 * C28354) / q + C28476 - C28686;
    const double C19349 = C28509 - (C21974 * C28353) / q - C28686;
    const double C18581 =
        (C16731 * de) / q - (C18895 * C28354) / q + C28477 - C28691;
    const double C19366 = C28510 - (C19622 * C28353) / q - C28691;
    const double C19167 = C28503 - (C21918 * C28353) / q - C28685;
    const double C18376 =
        (C16100 * de) / q - (C18342 * C28354) / q + C18360 / q - C28684;
    const double C19184 = C28504 - (C19535 * C28353) / q - C28684;
    const double C18377 =
        (C17416 * de) / q - (C21288 * C28354) / q + C28683 - C28685;
    const double C18580 = (C16412 * de) / q - (C18548 * C28354) / q - C28690;
    const double C18893 = C28555 - (C20597 * C28353) / q - C28690;
    const double C18643 = (C16443 * de) / q - (C18805 * C28354) / q - C28696;
    const double C18894 = C28604 - (C18895 * C28353) / q - C28696;
    const double C18850 = (C16688 * de) / q - (C21014 * C28354) / q - C28700;
    const double C18896 =
        (3 * C18895) / C12880 - (C21174 * C28353) / q - C28700;
    const double C18207 = (C15777 * de) / q - (C20868 * C28354) / q - C28682;
    const double C18719 = (2 * C18718) / q - (C20927 * C28353) / q - C28682;
    const double C18192 = C28453 - (C18548 * C28358) / q - C28681;
    const double C18528 = C28525 - (C19798 * C28353) / q - C28681;
    const double C18176 = C28452 - (C18805 * C28358) / q - C28680;
    const double C18529 = C19798 / q - (C18530 * C28353) / q - C28680;
    const double C18160 = C28451 - (C21014 * C28358) / q - C28679;
    const double C18531 = C28689 - (C21058 * C28353) / q - C28679;
    const double C18144 =
        (C16145 * de) / q - (C18360 * C28354) / q + C28453 - C28678;
    const double C18340 = C28495 - (C18985 * C28353) / q - C28678;
    const double C18143 = (C15793 * de) / q - (C18096 * C28354) / q - C28677;
    const double C18358 = C28577 - (C20511 * C28353) / q - C28677;
    const double C18128 =
        (C16176 * de) / q - (C18718 * C28354) / q + C28452 - C28676;
    const double C18341 = C18985 / q - (C18342 * C28353) / q - C28676;
    const double C18127 = (C15762 * de) / q - (C18080 * C28354) / q - C28675;
    const double C18359 = C28578 - (C18360 * C28353) / q - C28675;
    const double C18112 =
        (C16659 * de) / q - (C20927 * C28354) / q + C28451 - C28674;
    const double C18343 = C28683 - (C20971 * C28353) / q - C28674;
    const double C18111 = (C15746 * de) / q - (C18063 * C28354) / q - C28673;
    const double C18361 =
        (3 * C18360) / C12880 - (C18718 * C28353) / q - C28673;
    const double C24566 =
        (C22317 * de) / q - (C27237 * C28358) / q + C24770 / q - C28978;
    const double C25500 = C25483 / q - (C27437 * C28354) / q - C28978;
    const double C24536 =
        (C17170 * de) / q - (C27035 * C28358) / q + C28893 - C28977;
    const double C25411 = C28811 - (C27750 * C28354) / q - C28977;
    const double C24506 = C28891 - (C27035 * C28354) / q - C28976;
    const double C24626 =
        (C17489 * de) / q - (C27078 * C28358) / q + C28788 - C28976;
    const double C25159 = C28805 - (C27793 * C28354) / q - C28975;
    const double C24476 =
        (C17155 * de) / q - (C24408 * C28358) / q + C24425 / q - C28974;
    const double C25175 = C28806 - (C25483 * C28354) / q - C28974;
    const double C24477 =
        (C23046 * de) / q - (C27437 * C28358) / q + C28973 - C28975;
    const double C24379 = (C22127 * de) / q - (C27177 * C28358) / q - C28972;
    const double C24787 = (2 * C24770) / q - (C27207 * C28354) / q - C28972;
    const double C24350 = (C16990 * de) / q - (C26979 * C28358) / q - C28971;
    const double C24699 =
        (3 * C24683) / C12880 - (C27078 * C28354) / q - C28971;
    const double C24306 =
        (C17474 * de) / q - (C24770 * C28358) / q + C28774 - C28970;
    const double C24443 = C25036 / q - (C24408 * C28354) / q - C28970;
    const double C24291 =
        (C22575 * de) / q - (C27207 * C28358) / q + C28773 - C28969;
    const double C24444 = C28973 - (C27237 * C28354) / q - C28969;
    const double C24290 = (C16975 * de) / q - (C24226 * C28358) / q - C28968;
    const double C24461 =
        (3 * C24425) / C12880 - (C24770 * C28354) / q - C28968;
    const double C24211 = (C17005 * de) / q - (C24243 * C28358) / q - C28967;
    const double C24460 = C28888 - (C24425 * C28354) / q - C28967;
    const double C24195 = (C17020 * de) / q - (C24596 * C28358) / q - C28966;
    const double C24521 = C28874 - (C24683 * C28354) / q - C28966;
    const double C24124 =
        (C17185 * de) / q - (C24425 * C28358) / q + C28765 - C28965;
    const double C24442 = C28795 - (C25036 * C28354) / q - C28965;
    const double C24123 = (C16818 * de) / q - (C24061 * C28358) / q - C28964;
    const double C24459 = C28863 - (C25830 * C28354) / q - C28964;
    const double C24108 =
        (C17200 * de) / q - (C24683 * C28358) / q + C28764 - C28963;
    const double C24889 = C28794 - (C25308 * C28354) / q - C28963;
    const double C23750 =
        (C17882 * de) / q - (C26409 * C28358) / q + C28872 - C28961;
    const double C25485 = C28815 - (C27750 * C28353) / q - C28961;
    const double C23720 =
        (C16397 * de) / q - (C26119 * C28358) / q + C23866 / q - C28960;
    const double C25396 = C25395 / q - (C26666 * C28353) / q - C28960;
    const double C23809 =
        (C16761 * de) / q - (C26235 * C28358) / q + C28755 - C28962;
    const double C25309 = C28891 - (C26409 * C28353) / q - C28962;
    const double C25126 = C28805 - (C27694 * C28353) / q - C28959;
    const double C23657 =
        (C16367 * de) / q - (C23591 * C28358) / q + C23609 / q - C28958;
    const double C25143 = C28806 - (C25395 * C28353) / q - C28958;
    const double C23658 =
        (C17911 * de) / q - (C26666 * C28358) / q + C28957 - C28959;
    const double C23560 = (C17416 * de) / q - (C26349 * C28358) / q - C28956;
    const double C23972 = C28872 - (C26379 * C28354) / q - C28956;
    const double C24772 = C28793 - (C27078 * C28353) / q - C28956;
    const double C23530 = (C16130 * de) / q - (C26032 * C28358) / q - C28955;
    const double C23882 = C28758 - (C26235 * C28354) / q - C28955;
    const double C24684 = C28893 - (C26379 * C28353) / q - C28955;
    const double C23529 = (C16115 * de) / q - (C24046 * C28358) / q - C28954;
    const double C24001 = C28821 - (C25658 * C28354) / q - C28954;
    const double C23499 = C23779 / q - (C26032 * C28354) / q - C28953;
    const double C24597 = C24596 / q - (C26349 * C28353) / q - C28953;
    const double C23483 =
        (C16731 * de) / q - (C23956 * C28358) / q + C28734 - C28952;
    const double C25038 = C28803 - (C25308 * C28353) / q - C28952;
    const double C23468 =
        (C17445 * de) / q - (C26379 * C28358) / q + C28733 - C28951;
    const double C23626 = C28746 - (C26409 * C28354) / q - C28951;
    const double C24410 = C28779 - (C27035 * C28353) / q - C28951;
    const double C23467 = (C16100 * de) / q - (C23403 * C28358) / q - C28950;
    const double C23642 = C28747 - (C23956 * C28354) / q - C28950;
    const double C24427 = C28780 - (C24683 * C28353) / q - C28950;
    const double C24228 = C28773 - (C26979 * C28353) / q - C28949;
    const double C23437 = C23421 / q - (C23403 * C28354) / q - C28948;
    const double C24245 = C28774 - (C24596 * C28353) / q - C28948;
    const double C23438 = C28947 - (C26349 * C28354) / q - C28949;
    const double C23386 = (C16145 * de) / q - (C23421 * C28358) / q - C28946;
    const double C23954 = C28825 - (C25658 * C28353) / q - C28946;
    const double C23371 = (C16176 * de) / q - (C23779 * C28358) / q - C28945;
    const double C23955 = C28874 - (C23956 * C28353) / q - C28945;
    const double C23356 = (C16659 * de) / q - (C25988 * C28358) / q - C28944;
    const double C23957 =
        (3 * C23956) / C12880 - (C26235 * C28353) / q - C28944;
    const double C23312 = (C15777 * de) / q - (C25929 * C28358) / q - C28943;
    const double C23867 = (2 * C23866) / q - (C26075 * C28353) / q - C28943;
    const double C23253 =
        (C16412 * de) / q - (C23609 * C28358) / q + C28723 - C28942;
    const double C23589 = C28795 - (C24859 * C28353) / q - C28942;
    const double C23252 = (C15793 * de) / q - (C23157 * C28358) / q - C28941;
    const double C23607 = C28863 - (C25744 * C28353) / q - C28941;
    const double C23237 =
        (C16443 * de) / q - (C23866 * C28358) / q + C28722 - C28940;
    const double C23590 = C24859 / q - (C23591 * C28353) / q - C28940;
    const double C23236 = (C15762 * de) / q - (C23141 * C28358) / q - C28939;
    const double C23608 = C28864 - (C23609 * C28353) / q - C28939;
    const double C23221 =
        (C16688 * de) / q - (C26075 * C28358) / q + C28721 - C28938;
    const double C23592 = C28957 - (C26119 * C28353) / q - C28938;
    const double C23220 = (C15746 * de) / q - (C23124 * C28358) / q - C28937;
    const double C23610 =
        (3 * C23609) / C12880 - (C23866 * C28353) / q - C28937;
    const double C23205 = C28723 - (C23421 * C28354) / q - C28936;
    const double C23401 = C28765 - (C24046 * C28353) / q - C28936;
    const double C23189 = C28722 - (C23779 * C28354) / q - C28935;
    const double C23402 = C24046 / q - (C23403 * C28353) / q - C28935;
    const double C23173 = C28721 - (C25988 * C28354) / q - C28934;
    const double C23404 = C28947 - (C26032 * C28353) / q - C28934;
    const double C28178 = C12965 * p;
    const double C28208 = C12980 / C12880;
    const double C28179 = C12981 * p;
    const double C28195 = C12996 / C12880;
    const double C3399 = (C13072 * de) / q - (C12980 * C28353) / q +
                         (3 * C12996) / C12880 - (C12964 * p) / q;
    const double C28180 = C12997 * p;
    const double C3398 = (C13056 * de) / q - (C12964 * C28353) / q +
                         (2 * C12980) / q - (C13060 * p) / q;
    const double C28270 = C13091 / C12880;
    const double C3407 = (C13087 * de) / q - (C12996 * C28353) / q +
                         C13091 / q - (C12980 * p) / q;
    const double C28181 = C13106 * p;
    const double C28182 = C13121 * p;
    const double C28183 = C13136 * p;
    const double C28196 = C13219 * p;
    const double C28188 = C13220 * p;
    const double C28189 = C13235 * p;
    const double C28222 = C13284 * p;
    const double C28192 = C13285 * p;
    const double C28193 = C13301 / q;
    const double C28194 = C13316 * p;
    const double C28202 = C13415 * p;
    const double C28201 = C13416 * p;
    const double C28251 = C13480 * p;
    const double C28203 = C13481 * p;
    const double C28204 = C13497 / q;
    const double C28205 = C13512 * p;
    const double C28207 = C13572 * p;
    const double C28268 = C13787 * p;
    const double C28214 = C13787 / q;
    const double C28218 = C13881 * p;
    const double C28221 = C13896 / C12880;
    const double C28219 = C13897 * p;
    const double C28223 = C13972 * p;
    const double C28269 = C13987 / C12880;
    const double C28241 = C13988 / C12880;
    const double C3856 = C13987 / q - (C13896 * C28354) / q - (C13988 * p) / q;
    const double C3945 =
        (3 * C13896) / C12880 - (C13988 * C28354) / q - (C14069 * p) / q;
    const double C28226 = C14070 * p;
    const double C28227 = C14085 * p;
    const double C28229 = C14132 * p;
    const double C3944 =
        (2 * C13988) / q - (C14069 * C28354) / q - (C14162 * p) / q;
    const double C28233 = C14261 * p;
    const double C28232 = C14262 * p;
    const double C28236 = C14324 * p;
    const double C28253 = C14354 * p;
    const double C28237 = C14355 * p;
    const double C28238 = C14370 / q;
    const double C28240 = C14416 * p;
    const double C28248 = C14719 * p;
    const double C28275 = C14734 / C12880;
    const double C28250 = C14735 / C12880;
    const double C28265 = C14736 / C12880;
    const double C4240 =
        C14734 / q - (C14735 * C28358) / q + C28246 - (C14736 * p) / q;
    const double C28252 = C14811 * p;
    const double C28255 = C14872 * p;
    const double C4419 = (3 * C14735) / C12880 - (C14736 * C28358) / q +
                         C28257 - (C14999 * p) / q;
    const double C4418 =
        (2 * C14736) / q - (C14999 * C28358) / q + C28256 - (C15000 * p) / q;
    const double C28258 = C15062 * p;
    const double C28259 = C15092 * p;
    const double C28261 = C15152 * p;
    const double C28487 = C18175 / C12880;
    const double C28474 = C18191 / C12880;
    const double C7161 =
        (3 * C18191) / C12880 - (C18175 * C28353) / q - (C18159 * p) / q;
    const double C7160 =
        (2 * C18175) / q - (C18159 * C28353) / q - (C18251 * p) / q;
    const double C28549 = C18280 / C12880;
    const double C7169 = C18280 / q - (C18191 * C28353) / q - (C18175 * p) / q;
    const double C28460 = C18295 * p;
    const double C28461 = C18310 * p;
    const double C28462 = C18325 * p;
    const double C28475 = C18406 * p;
    const double C28501 = C18468 * p;
    const double C28471 = C18469 * p;
    const double C28472 = C18484 / q;
    const double C28473 = C18499 * p;
    const double C28530 = C18658 * p;
    const double C28483 = C18674 / q;
    const double C28500 = C19062 / C12880;
    const double C28502 = C19134 * p;
    const double C28548 = C19149 / C12880;
    const double C28520 = C19150 / C12880;
    const double C7618 = (C13954 * de) / q - (C19062 * C28354) / q +
                         C19149 / q - (C19150 * p) / q;
    const double C7707 = (C14144 * de) / q - (C19150 * C28354) / q +
                         (3 * C19062) / C12880 - (C19229 * p) / q;
    const double C28508 = C19289 * p;
    const double C7706 = (C14128 * de) / q - (C19229 * C28354) / q +
                         (2 * C19150) / q - (C19318 * p) / q;
    const double C28527 = C19858 * p;
    const double C28554 = C19873 / C12880;
    const double C28529 = C19874 / C12880;
    const double C28544 = C19875 / C12880;
    const double C8002 =
        C19873 / q - (C19874 * C28358) / q + C28525 - (C19875 * p) / q;
    const double C8181 = (3 * C19874) / C12880 - (C19875 * C28358) / q +
                         C28536 - (C20129 * p) / q;
    const double C8180 =
        (2 * C19875) / q - (C20129 * C28358) / q + C28535 - (C20130 * p) / q;
    const double C28537 = C20189 * p;
    const double C28538 = C20218 * p;
    const double C28819 = C23341 / C12880;
    const double C28742 = C23545 / q;
    const double C28800 = C23719 * p;
    const double C28753 = C23735 / q;
    const double C28817 = C24016 * p;
    const double C28763 = C24016 / q;
    const double C28818 = C24210 / C12880;
    const double C28802 = C24565 * p;
    const double C28787 = C24581 / q;
    const double C28797 = C24919 * p;
    const double C28799 = C24934 / C12880;
    const double C28824 = C24935 / C12880;
    const double C28814 = C24936 / C12880;
    const double C11764 = (C14793 * de) / q - (C24934 * C28358) / q +
                          C24935 / q + C28795 - (C24936 * p) / q;
    const double C28801 = C25007 * p;
    const double C28804 = C25067 * p;
    const double C11943 = (C15074 * de) / q - (C24936 * C28358) / q +
                          (3 * C24934) / C12880 + C28806 - (C25190 * p) / q;
    const double C11942 = (C15058 * de) / q - (C25190 * C28358) / q +
                          (2 * C24936) / q + C28805 - (C25191 * p) / q;
    const double C28807 = C25250 * p;
    const double C28808 = C25279 * p;
    const double C28810 = C25338 * p;
    const double C28173 = C12917 * p;
    const double C28174 = C12933 * p;
    const double C3382 = (C13025 * de) / q - (C12932 * C28353) / q +
                         (3 * C12948) / C12880 - (C12916 * p) / q;
    const double C28175 = C12949 * p;
    const double C3381 = (C13009 * de) / q - (C12916 * C28353) / q +
                         (2 * C12932) / q - (C13013 * p) / q;
    const double C3390 = (C13040 * de) / q - (C12948 * C28353) / q +
                         C13044 / q - (C12932 * p) / q;
    const double C28187 = C13189 * p;
    const double C28186 = C13190 * p;
    const double C28220 = C13251 * p;
    const double C28190 = C13252 * p;
    const double C28191 = C13268 / q;
    const double C28199 = C13384 * p;
    const double C28200 = C13400 * p;
    const double C3576 = (C13442 * de) / q - (C13383 * C28353) / q +
                         C13446 / q - (C13447 * p) / q;
    const double C3577 = (C13459 * de) / q - (C13399 * C28353) / q +
                         C13463 / q - (C13464 * p) / q;
    const double C28210 = C13648 * p;
    const double C3696 = (C13674 * de) / q - (C13464 * C28353) / q +
                         (3 * C13399) / C12880 - (C13678 * p) / q;
    const double C28212 = C13741 * p;
    const double C28273 = C13771 * p;
    const double C28213 = C13771 / q;
    const double C28217 = C13849 * p;
    const double C3792 =
        C13864 / q - (C13865 * C28354) / q + C28216 - (C13866 * p) / q;
    const double C3881 = (3 * C13865) / C12880 - (C13866 * C28354) / q +
                         C28225 - (C14039 * p) / q;
    const double C3880 =
        (2 * C13866) / q - (C14039 * C28354) / q + C28224 - (C14040 * p) / q;
    const double C28228 = C14101 * p;
    const double C3976 =
        C14227 / q - (C14228 * C28354) / q + C28230 - (C14229 * p) / q;
    const double C3977 =
        C14244 / q - (C14245 * C28354) / q + C28231 - (C14246 * p) / q;
    const double C28234 = C14292 * p;
    const double C28235 = C14308 * p;
    const double C28243 = C14492 * p;
    const double C4160 = (3 * C14245) / C12880 - (C14246 * C28354) / q +
                         C28244 - (C14583 * p) / q;
    const double C28247 = C14689 * p;
    const double C28249 = C14704 / C12880;
    const double C4224 = C28246 - (C14704 * C28354) / q - (C14227 * p) / q;
    const double C4256 =
        (C14763 * de) / q - (C14704 * C28353) / q - (C13446 * p) / q;
    const double C4402 = C28256 - (C14967 * C28354) / q - (C14968 * p) / q;
    const double C28264 = C14983 / C12880;
    const double C4403 = C28257 - (C14983 * C28354) / q - (C14984 * p) / q;
    const double C4434 =
        (C15026 * de) / q - (C14967 * C28353) / q - (C15030 * p) / q;
    const double C4435 =
        (C15042 * de) / q - (C14983 * C28353) / q - (C15046 * p) / q;
    const double C28263 = C15228 * p;
    const double C28274 = C15617 / C12880;
    const double C28499 = C18437 * p;
    const double C28470 = C18453 / q;
    const double C28552 = C18940 * p;
    const double C28492 = C18940 / q;
    const double C28496 = C19015 * p;
    const double C7554 = (C13924 * de) / q - (C19030 * C28354) / q +
                         C19031 / q + C28495 - (C19032 * p) / q;
    const double C7643 = (C14113 * de) / q - (C19032 * C28354) / q +
                         (3 * C19030) / C12880 + C28504 - (C19199 * p) / q;
    const double C7642 = (C14097 * de) / q - (C19199 * C28354) / q +
                         (2 * C19032) / q + C28503 - (C19200 * p) / q;
    const double C28507 = C19260 * p;
    const double C7739 = (C14304 * de) / q - (C19398 * C28354) / q +
                         C19399 / q + C28510 - (C19400 * p) / q;
    const double C28514 = C19460 * p;
    const double C28522 = C19638 * p;
    const double C7922 = (C14609 * de) / q - (C19400 * C28354) / q +
                         (3 * C19398) / C12880 + C28523 - (C19726 * p) / q;
    const double C28553 = C20726 / C12880;
    const double C10906 =
        (3 * C23204) / C12880 - (C23188 * C28353) / q - (C23172 * p) / q;
    const double C10905 =
        (2 * C23188) / q - (C23172 * C28353) / q - (C23268 * p) / q;
    const double C10914 = C23297 / q - (C23204 * C28353) / q - (C23188 * p) / q;
    const double C28769 = C23498 * p;
    const double C28740 = C23514 / q;
    const double C11100 = C23687 / q - (C23625 * C28353) / q - (C23688 * p) / q;
    const double C11101 = C23703 / q - (C23641 * C28353) / q - (C23704 * p) / q;
    const double C11220 =
        (3 * C23641) / C12880 - (C23704 * C28353) / q - (C23911 * p) / q;
    const double C28766 = C24076 * p;
    const double C11316 =
        C24091 / q - (C24092 * C28354) / q + C28765 - (C24093 * p) / q;
    const double C11405 = (3 * C24092) / C12880 - (C24093 * C28354) / q +
                          C28774 - (C24260 * p) / q;
    const double C11404 =
        (2 * C24093) / q - (C24260 * C28354) / q + C28773 - (C24261 * p) / q;
    const double C28777 = C24321 * p;
    const double C28798 = C24904 / C12880;
    const double C11780 = -(C24904 * C28353 + C23687 * p) / q;
    const double C28813 = C25174 / C12880;
    const double C11958 = -(C25158 * C28353 + C25220 * p) / q;
    const double C11959 = -(C25174 * C28353 + C25235 * p) / q;
    const double C28823 = C25787 / C12880;
    const double C3330 = (C12859 * de) / q - (C12863 * C28353) / q +
                         (2 * C12864) / q + C28168 - (C12866 * p) / q;
    const double C3331 = (C12878 * de) / q - (C12864 * C28353) / q +
                         (3 * C12883) / C12880 + C28169 - (C12863 * p) / q;
    const double C3339 = (C12896 * de) / q - (C12883 * C28353) / q +
                         C12900 / q + C28170 - (C12864 * p) / q;
    const double C3432 = (C13148 * de) / q - (C13152 * C28353) / q +
                         C13153 / q + C28184 - (C13155 * p) / q;
    const double C3433 = (C13167 * de) / q - (C13171 * C28353) / q +
                         C13172 / q + C28185 - (C13174 * p) / q;
    const double C3528 = (C13342 * de) / q - (C13346 * C28353) / q +
                         C13347 / q + C28197 - (C13349 * p) / q;
    const double C3529 = (C13361 * de) / q - (C13365 * C28353) / q +
                         C13366 / q + C28198 - (C13368 * p) / q;
    const double C3624 = (C13538 * de) / q - (C13174 * C28353) / q +
                         (3 * C13171) / C12880 + C28206 - (C13543 * p) / q;
    const double C3672 = (C13628 * de) / q - (C13368 * C28353) / q +
                         (3 * C13365) / C12880 + C28209 - (C13633 * p) / q;
    const double C3720 = (C13719 * de) / q - (C13723 * C28353) / q +
                         C13724 / q + C28211 - (C13726 * p) / q;
    const double C3768 = (C13813 * de) / q - (C13153 * C28353) / q +
                         C13817 / C12880 + C28215 - (C13152 * p) / q;
    const double C3776 =
        (C13830 * de) / q - (C13817 * C28353) / q + C28216 - (C13153 * p) / q;
    const double C3864 =
        (C14000 * de) / q - (C14004 * C28353) / q + C28224 - (C14006 * p) / q;
    const double C3865 =
        (C14018 * de) / q - (C14022 * C28353) / q + C28225 - (C14024 * p) / q;
    const double C3960 =
        (C14188 * de) / q - (C14192 * C28353) / q + C28230 - (C14194 * p) / q;
    const double C3961 =
        (C14206 * de) / q - (C14210 * C28353) / q + C28231 - (C14212 * p) / q;
    const double C4056 = (C14382 * de) / q - (C14024 * C28353) / q +
                         C14022 / C12880 + C28239 - (C14387 * p) / q;
    const double C4104 = (C14472 * de) / q - (C14212 * C28353) / q +
                         C14210 / C12880 + C28242 - (C14477 * p) / q;
    const double C4152 =
        (C14562 * de) / q - (C14566 * C28353) / q + C28244 - (C14568 * p) / q;
    const double C4200 = (C14653 * de) / q - (C13347 * C28353) / q +
                         C14657 / C12880 + C28245 - (C13346 * p) / q;
    const double C4208 =
        (C14670 * de) / q - (C14657 * C28353) / q + C28246 - (C13347 * p) / q;
    const double C4296 =
        (C14837 * de) / q - (C14841 * C28353) / q + C28254 - (C14843 * p) / q;
    const double C4386 =
        (C14928 * de) / q - (C14932 * C28353) / q + C28256 - (C14934 * p) / q;
    const double C4387 =
        (C14946 * de) / q - (C14950 * C28353) / q + C28257 - (C14952 * p) / q;
    const double C4482 = (C15118 * de) / q - (C14843 * C28353) / q +
                         C14841 / C12880 + C28260 - (C15123 * p) / q;
    const double C4530 = (C15208 * de) / q - (C14952 * C28353) / q +
                         C14950 / C12880 + C28262 - (C15213 * p) / q;
    const double C4578 =
        (C15299 * de) / q - (C15303 * C28353) / q + C28266 - (C15305 * p) / q;
    const double C4633 = (C15390 * de) / q - (C13172 * C28353) / q +
                         C15394 / C12880 + C28267 - (C13171 * p) / q;
    const double C4758 = (C15479 * de) / q - (C13724 * C28353) / q +
                         C15483 / C12880 + C28271 - (C13723 * p) / q;
    const double C5113 =
        (C15658 * de) / q - (C15483 * C28353) / q + C28276 - (C13724 * p) / q;
    const double C4855 = (C15568 * de) / q - (C13366 * C28353) / q +
                         C15572 / C12880 + C28272 - (C13365 * p) / q;
    const double C7092 =
        (2 * C18061) / q - (C18062 * C28353) / q + C28451 - (C18064 * p) / q;
    const double C7093 = (3 * C18079) / C12880 - (C18061 * C28353) / q +
                         C28452 - (C18062 * p) / q;
    const double C7101 =
        C18095 / q - (C18079 * C28353) / q + C28453 - (C18061 * p) / q;
    const double C7291 =
        C18546 / q - (C18547 * C28353) / q + C28477 - (C18549 * p) / q;
    const double C7434 = (3 * C18547) / C12880 - (C18549 * C28353) / q +
                         C28488 - (C18806 * p) / q;
    const double C8617 =
        C20682 / C12880 - (C18546 * C28353) / q + C28551 - (C18547 * p) / q;
    const double C10854 =
        (2 * C23122) / q - (C23123 * C28353) / q + C28721 - (C23125 * p) / q;
    const double C10855 = (3 * C23140) / C12880 - (C23122 * C28353) / q +
                          C28722 - (C23123 * p) / q;
    const double C10863 =
        C23156 / q - (C23140 * C28353) / q + C28723 - (C23122 * p) / q;
    const double C10957 =
        C23419 / q - (C23420 * C28353) / q + C28734 - (C23422 * p) / q;
    const double C11148 = (3 * C23420) / C12880 - (C23422 * C28353) / q +
                          C28755 - (C23780 * p) / q;
    const double C12157 =
        C25571 / C12880 - (C23419 * C28353) / q + C28816 - (C23420 * p) / q;
    const double C28540 = C20277 * p;
    const double C28534 = C20006 * p;
    const double C8196 = -(C20097 * C28353 + C20159 * p) / q;
    const double C28531 = C19946 * p;
    const double C28517 = C19520 / q;
    const double C28528 = C19843 / C12880;
    const double C28516 = C19505 * p;
    const double C28532 = C19504 * p;
    const double C28543 = C20113 / C12880;
    const double C8197 = -(C20113 * C28353 + C20174 * p) / q;
    const double C28515 = C19475 * p;
    const double C28542 = C20350 * p;
    const double C28513 = C19445 * p;
    const double C28519 = C19565 * p;
    const double C8164 =
        (C15026 * de) / q - (C20097 * C28354) / q + C28535 - (C20098 * p) / q;
    const double C28512 = C19415 * p;
    const double C8165 =
        (C15042 * de) / q - (C20113 * C28354) / q + C28536 - (C20114 * p) / q;
    const double C28511 = C19416 * p;
    const double C28506 = C19245 * p;
    const double C28505 = C19230 * p;
    const double C28498 = C19063 * p;
    const double C7738 = (C14288 * de) / q - (C19381 * C28354) / q +
                         C19382 / q + C28509 - (C19383 * p) / q;
    const double C7986 =
        (C14763 * de) / q - (C19843 * C28354) / q + C28525 - (C19382 * p) / q;
    const double C28497 = C19047 * p;
    const double C28526 = C19828 * p;
    const double C28484 = C18689 * p;
    const double C8340 = C28545 - (C20423 * C28353) / q - (C20424 * p) / q;
    const double C28482 = C18659 * p;
    const double C28486 = C18748 * p;
    const double C8018 = -(C19843 * C28353 + C18626 * p) / q;
    const double C28547 = C18955 * p;
    const double C28493 = C18955 / q;
    const double C8148 = C28535 - (C20064 * C28353) / q - (C20065 * p) / q;
    const double C28481 = C18596 * p;
    const double C8149 = C28536 - (C20081 * C28353) / q - (C20082 * p) / q;
    const double C8292 =
        C20081 / C12880 - (C20082 * C28353) / q + C28541 - (C20335 * p) / q;
    const double C28480 = C18597 * p;
    const double C28491 = C18911 * p;
    const double C7914 = C28523 - (C19710 * C28353) / q - (C19711 * p) / q;
    const double C28489 = C18821 * p;
    const double C28469 = C18438 * p;
    const double C28468 = C18422 * p;
    const double C7338 = C18626 / q - (C18564 * C28353) / q - (C18627 * p) / q;
    const double C8058 = C28533 - (C19976 * C28353) / q - (C19977 * p) / q;
    const double C8244 =
        C19976 / C12880 - (C19977 * C28353) / q + C28539 - (C20248 * p) / q;
    const double C28467 = C18407 * p;
    const double C28478 = C18565 * p;
    const double C7722 = C28509 - (C19348 * C28353) / q - (C19349 * p) / q;
    const double C28479 = C18581 * p;
    const double C7723 = C28510 - (C19365 * C28353) / q - (C19366 * p) / q;
    const double C7866 =
        C19365 / C12880 - (C19366 * C28353) / q + C28521 - (C19623 * p) / q;
    const double C7626 = C28503 - (C19166 * C28353) / q - (C19167 * p) / q;
    const double C28466 = C18376 * p;
    const double C7627 = C28504 - (C19183 * C28353) / q - (C19184 * p) / q;
    const double C7818 =
        C19183 / C12880 - (C19184 * C28353) / q + C28518 - (C19536 * p) / q;
    const double C28465 = C18377 * p;
    const double C8875 = C28555 - (C20596 * C28353) / q - (C18893 * p) / q;
    const double C7339 = C18642 / q - (C18580 * C28353) / q - (C18643 * p) / q;
    const double C8520 =
        C20596 / C12880 - (C18893 * C28353) / q + C28550 - (C18894 * p) / q;
    const double C7458 =
        (3 * C18580) / C12880 - (C18643 * C28353) / q - (C18850 * p) / q;
    const double C7482 =
        C18893 / q - (C18894 * C28353) / q + C28490 - (C18896 * p) / q;
    const double C28459 = C18192 * p;
    const double C7970 = C28525 - (C19797 * C28353) / q - (C18528 * p) / q;
    const double C28458 = C18176 * p;
    const double C7962 =
        C19797 / C12880 - (C18528 * C28353) / q + C28524 - (C18529 * p) / q;
    const double C28457 = C18160 * p;
    const double C7290 =
        C18528 / q - (C18529 * C28353) / q + C28476 - (C18531 * p) / q;
    const double C28456 = C18144 * p;
    const double C7538 = C28495 - (C18984 * C28353) / q - (C18340 * p) / q;
    const double C28455 = C18128 * p;
    const double C7530 =
        C18984 / C12880 - (C18340 * C28353) / q + C28494 - (C18341 * p) / q;
    const double C7152 = C18236 / q - (C18143 * C28353) / q - (C18127 * p) / q;
    const double C8395 =
        C20510 / C12880 - (C18358 * C28353) / q + C28546 - (C18359 * p) / q;
    const double C28454 = C18112 * p;
    const double C7194 =
        C18340 / q - (C18341 * C28353) / q + C28463 - (C18343 * p) / q;
    const double C7143 =
        (2 * C18127) / q - (C18111 * C28353) / q - (C18207 * p) / q;
    const double C7144 =
        (3 * C18143) / C12880 - (C18127 * C28353) / q - (C18111 * p) / q;
    const double C7195 =
        C18358 / q - (C18359 * C28353) / q + C28464 - (C18361 * p) / q;
    const double C7386 = (3 * C18359) / C12880 - (C18361 * C28353) / q +
                         C28485 - (C18719 * p) / q;
    const double C28786 = C24566 * p;
    const double C28785 = C24536 * p;
    const double C28812 = C25411 * p;
    const double C28783 = C24506 * p;
    const double C28789 = C24626 * p;
    const double C11926 = C28805 - (C25158 * C28354) / q - (C25159 * p) / q;
    const double C28782 = C24476 * p;
    const double C11927 = C28806 - (C25174 * C28354) / q - (C25175 * p) / q;
    const double C28781 = C24477 * p;
    const double C28778 = C24350 * p;
    const double C28792 = C24699 * p;
    const double C28776 = C24306 * p;
    const double C28775 = C24291 * p;
    const double C28790 = C24211 / C12880;
    const double C11468 =
        (2 * C24211) / q - (C24290 * C28354) / q - (C24379 * p) / q;
    const double C11684 = (3 * C24460) / C12880 - (C24461 * C28354) / q +
                          C28793 - (C24787 * p) / q;
    const double C28772 = C24195 * p;
    const double C28784 = C24521 * p;
    const double C28768 = C24124 * p;
    const double C11500 =
        C24442 / q - (C24443 * C28354) / q + C28779 - (C24444 * p) / q;
    const double C11748 = C28795 - (C24904 * C28354) / q - (C24442 * p) / q;
    const double C28770 = C24123 / C12880;
    const double C11380 = C24210 / q - (C24123 * C28354) / q - (C24211 * p) / q;
    const double C11469 =
        (3 * C24123) / C12880 - (C24211 * C28354) / q - (C24290 * p) / q;
    const double C11501 =
        C24459 / q - (C24460 * C28354) / q + C28780 - (C24461 * p) / q;
    const double C28767 = C24108 * p;
    const double C28796 = C24889 * p;
    const double C28754 = C23750 * p;
    const double C12102 = C28815 - (C25484 * C28353) / q - (C25485 * p) / q;
    const double C28752 = C23720 * p;
    const double C28756 = C23809 * p;
    const double C11910 = C28805 - (C25125 * C28353) / q - (C25126 * p) / q;
    const double C28751 = C23657 * p;
    const double C11911 = C28806 - (C25142 * C28353) / q - (C25143 * p) / q;
    const double C12054 =
        C25142 / C12880 - (C25143 * C28353) / q + C28811 - (C25396 * p) / q;
    const double C28750 = C23658 * p;
    const double C28743 = C23560 * p;
    const double C28761 = C23972 * p;
    const double C11676 = C28793 - (C24771 * C28353) / q - (C24772 * p) / q;
    const double C28741 = C23530 * p;
    const double C28759 = C23882 * p;
    const double C28771 = C23529 * p;
    const double C28822 = C24001 * p;
    const double C28762 = C24001 / q;
    const double C28739 = C23499 * p;
    const double C28738 = C23483 * p;
    const double C11820 = C28803 - (C25037 * C28353) / q - (C25038 * p) / q;
    const double C12006 =
        C25037 / C12880 - (C25038 * C28353) / q + C28809 - (C25309 * p) / q;
    const double C28737 = C23468 * p;
    const double C28748 = C23626 * p;
    const double C11484 = C28779 - (C24409 * C28353) / q - (C24410 * p) / q;
    const double C28745 = C23467 * p;
    const double C28749 = C23642 * p;
    const double C11485 = C28780 - (C24426 * C28353) / q - (C24427 * p) / q;
    const double C11628 =
        C24426 / C12880 - (C24427 * C28353) / q + C28791 - (C24684 * p) / q;
    const double C11388 = C28773 - (C24227 * C28353) / q - (C24228 * p) / q;
    const double C28736 = C23437 * p;
    const double C11389 = C28774 - (C24244 * C28353) / q - (C24245 * p) / q;
    const double C11580 =
        C24244 / C12880 - (C24245 * C28353) / q + C28788 - (C24597 * p) / q;
    const double C28735 = C23438 * p;
    const double C28732 = C23386 * p;
    const double C12637 = C28825 - (C25657 * C28353) / q - (C23954 * p) / q;
    const double C28731 = C23371 * p;
    const double C12282 =
        C25657 / C12880 - (C23954 * C28353) / q + C28820 - (C23955 * p) / q;
    const double C28730 = C23356 * p;
    const double C11244 =
        C23954 / q - (C23955 * C28353) / q + C28760 - (C23957 * p) / q;
    const double C28729 = C23253 * p;
    const double C11732 = C28795 - (C24858 * C28353) / q - (C23589 * p) / q;
    const double C28744 = C23252 / C12880;
    const double C28728 = C23237 * p;
    const double C11724 =
        C24858 / C12880 - (C23589 * C28353) / q + C28794 - (C23590 * p) / q;
    const double C28757 = C23236 / C12880;
    const double C10931 = C23341 / q - (C23252 * C28353) / q - (C23236 * p) / q;
    const double C12379 =
        C25743 / C12880 - (C23607 * C28353) / q + C28821 - (C23608 * p) / q;
    const double C28727 = C23221 * p;
    const double C11052 =
        C23589 / q - (C23590 * C28353) / q + C28746 - (C23592 * p) / q;
    const double C10922 =
        (2 * C23236) / q - (C23220 * C28353) / q - (C23312 * p) / q;
    const double C10923 =
        (3 * C23252) / C12880 - (C23236 * C28353) / q - (C23220 * p) / q;
    const double C11053 =
        C23607 / q - (C23608 * C28353) / q + C28747 - (C23610 * p) / q;
    const double C11196 = (3 * C23608) / C12880 - (C23610 * C28353) / q +
                          C28758 - (C23867 * p) / q;
    const double C28726 = C23205 * p;
    const double C11300 = C28765 - (C24045 * C28353) / q - (C23401 * p) / q;
    const double C28725 = C23189 * p;
    const double C11292 =
        C24045 / C12880 - (C23401 * C28353) / q + C28764 - (C23402 * p) / q;
    const double C28724 = C23173 * p;
    const double C10956 =
        C23401 / q - (C23402 * C28353) / q + C28733 - (C23404 * p) / q;
    const double C28359 = C28178 / q;
    const double C28360 = C28179 / q;
    const double C28361 = C28180 / q;
    const double C3415 = -(C12964 * C28354 + C28181) / q;
    const double C3656 = (C13599 * de) / q - (C13121 * C28353) / q +
                         (3 * C13136) / C12880 - C28181 / q;
    const double C3416 = -(C12980 * C28354 + C28182) / q;
    const double C3424 = -(C12996 * C28354 + C28183) / q;
    const double C28369 = C28196 / q;
    const double C28364 = C28188 / q;
    const double C28365 = C28189 / q;
    const double C3609 = -(C12997 * C28354 + C28189) / q;
    const double C28383 = C28222 / q;
    const double C28367 = C28192 / q;
    const double C3497 =
        (C13297 * de) / q - (C13136 * C28353) / q + C28193 - C28182 / q;
    const double C28368 = C28194 / q;
    const double C28373 = C28202 / q;
    const double C28372 = C28201 / q;
    const double C28399 = C28251 / q;
    const double C28374 = C28203 / q;
    const double C28378 = C28205 / q;
    const double C3608 = -(C13415 * C28354 + C28205) / q;
    const double C28375 = C28207 / q;
    const double C3712 = -(C12981 * C28354 + C28207) / q;
    const double C28404 = C28268 / q;
    const double C4930 = -(C13497 * C28354 + C28268) / q;
    const double C28380 = C28218 / q;
    const double C28381 = C28219 / q;
    const double C28384 = C28223 / q;
    const double C4693 =
        (C15450 * de) / q - (C13301 * C28353) / q + C28269 - C28183 / q;
    const double C28385 = C28226 / q;
    const double C28386 = C28227 / q;
    const double C28388 = C28229 / q;
    const double C28390 = C28233 / q;
    const double C28389 = C28232 / q;
    const double C28393 = C28236 / q;
    const double C4288 = -(C14735 * C28354 + C28253) / q;
    const double C5143 = C28269 - (C14370 * C28358) / q + C28276 - C28253 / q;
    const double C28394 = C28237 / q;
    const double C28395 = C28240 / q;
    const double C28398 = C28248 / q;
    const double C28400 = C28252 / q;
    const double C4280 = -(C13480 * C28354 + C28252) / q;
    const double C4326 = C28238 - (C14354 * C28358) / q + C28254 - C28255 / q;
    const double C4467 = -(C14736 * C28354 + C28255) / q;
    const double C28401 = C28258 / q;
    const double C4466 = -(C14999 * C28354 + C28259) / q;
    const double C4594 =
        (3 * C14354) / C12880 - (C14872 * C28358) / q + C28266 - C28259 / q;
    const double C28402 = C28261 / q;
    const double C4570 = -(C14719 * C28354 + C28261) / q;
    const double C28638 = C28460 / q;
    const double C28639 = C28461 / q;
    const double C28640 = C28462 / q;
    const double C28648 = C28475 / q;
    const double C7602 = -(C19062 * C28353 + C28501) / q;
    const double C8470 =
        (C15450 * de) / q - (C18484 * C28354) / q + C28549 - C28501 / q;
    const double C28646 = C28471 / q;
    const double C28647 = C28473 / q;
    const double C8034 = -(C19874 * C28353 + C28530) / q;
    const double C8647 = C28549 - (C18674 * C28358) / q + C28551 - C28530 / q;
    const double C7610 =
        (C13939 * de) / q - (C18468 * C28354) / q + C28472 - C28502 / q;
    const double C7691 = -(C19150 * C28353 + C28502) / q;
    const double C7690 = -(C19229 * C28353 + C28508) / q;
    const double C7858 = (C14443 * de) / q - (C19134 * C28354) / q +
                         (3 * C18468) / C12880 - C28508 / q;
    const double C7994 = C28483 - (C18658 * C28358) / q + C28524 - C28527 / q;
    const double C8213 = -(C19875 * C28353 + C28527) / q;
    const double C8212 = -(C20129 * C28353 + C28537) / q;
    const double C8308 =
        (3 * C18658) / C12880 - (C19858 * C28358) / q + C28541 - C28537 / q;
    const double C28670 = C28538 / q;
    const double C11796 = -(C24934 * C28353 + C28800) / q;
    const double C12409 = (C15629 * de) / q - (C23735 * C28358) / q + C28819 +
                          C28821 - C28800 / q;
    const double C12187 =
        (C15450 * de) / q - (C23545 * C28358) / q + C28816 - C28817 / q;
    const double C12454 = -(C23735 * C28354 + C28817) / q;
    const double C12697 = -(C24581 * C28353 + C28817) / q;
    const double C11812 = -(C24934 * C28354 + C28802) / q;
    const double C12667 = (C15717 * de) / q - (C24581 * C28358) / q + C28818 +
                          C28825 - C28802 / q;
    const double C11756 = (C14778 * de) / q - (C23719 * C28358) / q + C28753 +
                          C28794 - C28797 / q;
    const double C11975 = -(C24936 * C28353 + C28797) / q;
    const double C11804 = -(C23719 * C28354 + C28801) / q;
    const double C11880 = -(C24565 * C28353 + C28801) / q;
    const double C12312 = (C15539 * de) / q - (C24016 * C28358) / q +
                          C23545 / C12880 + C28820 - C28801 / q;
    const double C11850 = (C14899 * de) / q - (C24565 * C28358) / q + C28787 +
                          C28803 - C28804 / q;
    const double C11991 = -(C24936 * C28354 + C28804) / q;
    const double C11974 = -(C25190 * C28353 + C28807) / q;
    const double C12070 = (C15270 * de) / q - (C24919 * C28358) / q +
                          (3 * C23719) / C12880 + C28811 - C28807 / q;
    const double C11990 = -(C25190 * C28354 + C28808) / q;
    const double C12118 = (C15361 * de) / q - (C25067 * C28358) / q +
                          (3 * C24565) / C12880 + C28815 - C28808 / q;
    const double C12022 = (C15179 * de) / q - (C25007 * C28358) / q + C28763 +
                          C28809 - C28810 / q;
    const double C12094 = -(C24919 * C28354 + C28810) / q;
    const double C12134 = -(C25067 * C28353 + C28810) / q;
    const double C28355 = C28173 / q;
    const double C28356 = C28174 / q;
    const double C28357 = C28175 / q;
    const double C28363 = C28187 / q;
    const double C28362 = C28186 / q;
    const double C28382 = C28220 / q;
    const double C28366 = C28190 / q;
    const double C28370 = C28199 / q;
    const double C28371 = C28200 / q;
    const double C28376 = C28210 / q;
    const double C28377 = C28212 / q;
    const double C28405 = C28273 / q;
    const double C28379 = C28217 / q;
    const double C28387 = C28228 / q;
    const double C28391 = C28234 / q;
    const double C28392 = C28235 / q;
    const double C28396 = C28243 / q;
    const double C28397 = C28247 / q;
    const double C4248 =
        (C14748 * de) / q - (C13446 * C28353) / q + C28249 - (C13383 * p) / q;
    const double C4311 =
        C28249 - (C14227 * C28354) / q + C28254 - (C14228 * p) / q;
    const double C4554 =
        (C15254 * de) / q - (C15046 * C28353) / q + C28264 - (C15258 * p) / q;
    const double C4586 =
        C28264 - (C14984 * C28354) / q + C28266 - (C15320 * p) / q;
    const double C28403 = C28263 / q;
    const double C4900 =
        (C15613 * de) / q - (C13463 * C28353) / q + C28274 - (C13399 * p) / q;
    const double C5128 =
        C28274 - (C14244 * C28354) / q + C28276 - (C14245 * p) / q;
    const double C7586 = -(C19030 * C28353 + C28499) / q;
    const double C8410 = (C15435 * de) / q - (C18453 * C28354) / q +
                         C18236 / C12880 + C28546 - C28499 / q;
    const double C8632 =
        (C15613 * de) / q - (C18642 * C28354) / q + C28551 - C28552 / q;
    const double C8920 = -(C19399 * C28353 + C28552) / q;
    const double C7546 = (C13909 * de) / q - (C18437 * C28354) / q + C28470 +
                         C28494 - C28496 / q;
    const double C7675 = -(C19032 * C28353 + C28496) / q;
    const double C7674 = -(C19199 * C28353 + C28507) / q;
    const double C7826 = (C14428 * de) / q - (C19015 * C28354) / q +
                         (3 * C18437) / C12880 + C28518 - C28507 / q;
    const double C7771 = -(C19398 * C28353 + C28514) / q;
    const double C8535 = (C15524 * de) / q - (C18940 * C28354) / q +
                         C18642 / C12880 + C28550 - C28514 / q;
    const double C7874 = (C14518 * de) / q - (C19460 * C28354) / q + C28492 +
                         C28521 - C28522 / q;
    const double C7938 = -(C19400 * C28353 + C28522) / q;
    const double C8662 = C28553 - (C18642 * C28353) / q - (C18580 * p) / q;
    const double C8890 = (C15702 * de) / q - (C19399 * C28354) / q + C28553 +
                         C28555 - (C19398 * p) / q;
    const double C11348 = -(C24092 * C28353 + C28769) / q;
    const double C12172 =
        C23297 / C12880 - (C23514 * C28354) / q + C28816 - C28769 / q;
    const double C11308 = C28740 - (C23498 * C28354) / q + C28764 - C28766 / q;
    const double C11437 = -(C24093 * C28353 + C28766) / q;
    const double C11436 = -(C24260 * C28353 + C28777) / q;
    const double C11588 =
        (3 * C23498) / C12880 - (C24076 * C28354) / q + C28788 - C28777 / q;
    const double C11772 = C28798 - (C23687 * C28353) / q - (C23625 * p) / q;
    const double C11835 =
        C28798 - (C24442 * C28354) / q + C28803 - (C24443 * p) / q;
    const double C12078 = C28813 - (C25235 * C28353) / q - (C25440 * p) / q;
    const double C12110 =
        C28813 - (C25175 * C28354) / q + C28815 - (C25500 * p) / q;
    const double C12424 = C28823 - (C23703 * C28353) / q - (C23641 * p) / q;
    const double C12652 =
        C28823 - (C24459 * C28354) / q + C28825 - (C24460 * p) / q;
    const double C28671 = C28540 / q;
    const double C8372 = -(C20006 * C28353 + C28540) / q;
    const double C28669 = C28534 / q;
    const double C28667 = C28531 / q;
    const double C8118 = -(C19504 * C28353 + C28531) / q;
    const double C8010 = C28528 - (C18626 * C28353) / q - (C18564 * p) / q;
    const double C8073 = (C14884 * de) / q - (C19382 * C28354) / q + C28528 +
                         C28533 - (C19381 * p) / q;
    const double C28664 = C28516 / q;
    const double C28668 = C28532 / q;
    const double C8316 = C28543 - (C20174 * C28353) / q - (C20379 * p) / q;
    const double C8348 = (C15346 * de) / q - (C20114 * C28354) / q + C28543 +
                         C28545 - (C20439 * p) / q;
    const double C28666 = C28515 / q;
    const double C7786 = -(C19415 * C28353 + C28515) / q;
    const double C8300 =
        (C15254 * de) / q - (C20174 * C28354) / q + C28541 - C28542 / q;
    const double C8364 = -(C20114 * C28353 + C28542) / q;
    const double C7770 = -(C19381 * C28353 + C28513) / q;
    const double C8252 = (C15164 * de) / q - (C19828 * C28354) / q +
                         C18626 / C12880 + C28539 - C28513 / q;
    const double C28665 = C28519 / q;
    const double C7946 = -(C19245 * C28353 + C28519) / q;
    const double C28663 = C28512 / q;
    const double C28662 = C28511 / q;
    const double C28661 = C28506 / q;
    const double C28660 = C28505 / q;
    const double C28659 = C28498 / q;
    const double C28658 = C28497 / q;
    const double C7787 = -(C19063 * C28353 + C28497) / q;
    const double C7978 =
        (C14748 * de) / q - (C18626 * C28354) / q + C28524 - C28526 / q;
    const double C8103 = -(C19382 * C28353 + C28526) / q;
    const double C28654 = C28484 / q;
    const double C28653 = C28482 / q;
    const double C28655 = C28486 / q;
    const double C28672 = C28547 / q;
    const double C8935 = -(C19520 * C28353 + C28547) / q;
    const double C28652 = C28481 / q;
    const double C28651 = C28480 / q;
    const double C28657 = C28491 / q;
    const double C28656 = C28489 / q;
    const double C28645 = C28469 / q;
    const double C28644 = C28468 / q;
    const double C28643 = C28467 / q;
    const double C28649 = C28478 / q;
    const double C28650 = C28479 / q;
    const double C28642 = C28466 / q;
    const double C28641 = C28465 / q;
    const double C28637 = C28459 / q;
    const double C28636 = C28458 / q;
    const double C28635 = C28457 / q;
    const double C28634 = C28456 / q;
    const double C28633 = C28455 / q;
    const double C28632 = C28454 / q;
    const double C28931 = C28786 / q;
    const double C28933 = C28785 / q;
    const double C11548 = -(C24476 * C28353 + C28785) / q;
    const double C12062 = C28811 - (C25235 * C28354) / q - C28812 / q;
    const double C12126 = -(C25175 * C28353 + C28812) / q;
    const double C11532 = -(C24443 * C28353 + C28783) / q;
    const double C12014 =
        C23687 / C12880 - (C24889 * C28354) / q + C28809 - C28783 / q;
    const double C28932 = C28789 / q;
    const double C11708 = -(C24306 * C28353 + C28789) / q;
    const double C28930 = C28782 / q;
    const double C28929 = C28781 / q;
    const double C11452 = -(C24290 * C28353 + C28778) / q;
    const double C11620 =
        (3 * C23529) / C12880 - (C24195 * C28354) / q - C28778 / q;
    const double C11700 = -(C24461 * C28353 + C28792) / q;
    const double C28928 = C28776 / q;
    const double C28927 = C28775 / q;
    const double C11372 = C28742 - (C23529 * C28354) / q - C28772 / q;
    const double C11453 = -(C24211 * C28353 + C28772) / q;
    const double C11533 = -(C24460 * C28353 + C28784) / q;
    const double C12297 =
        C23703 / C12880 - (C24001 * C28354) / q + C28820 - C28784 / q;
    const double C28926 = C28768 / q;
    const double C28925 = C28767 / q;
    const double C11549 = -(C24124 * C28353 + C28767) / q;
    const double C11740 = C28794 - (C23687 * C28354) / q - C28796 / q;
    const double C11865 = -(C24442 * C28353 + C28796) / q;
    const double C28924 = C28754 / q;
    const double C11132 = -(C23657 * C28354 + C28754) / q;
    const double C28920 = C28752 / q;
    const double C28921 = C28756 / q;
    const double C11236 = -(C23237 * C28354 + C28756) / q;
    const double C28919 = C28751 / q;
    const double C28918 = C28750 / q;
    const double C28914 = C28743 / q;
    const double C28923 = C28761 / q;
    const double C28913 = C28741 / q;
    const double C28922 = C28759 / q;
    const double C11364 = -(C24123 * C28353 + C28771) / q;
    const double C12232 = C28819 - (C23545 * C28354) / q - C28771 / q;
    const double C12394 = C28821 - (C23703 * C28354) / q - C28822 / q;
    const double C12682 = -(C24459 * C28353 + C28822) / q;
    const double C11636 = C28762 - (C24521 * C28354) / q + C28791 - C28792 / q;
    const double C28912 = C28739 / q;
    const double C28911 = C28738 / q;
    const double C11133 = -(C23253 * C28354 + C28738) / q;
    const double C28910 = C28737 / q;
    const double C28916 = C28748 / q;
    const double C28915 = C28745 / q;
    const double C28917 = C28749 / q;
    const double C28909 = C28736 / q;
    const double C28908 = C28735 / q;
    const double C10948 = -(C23252 * C28354 + C28732) / q;
    const double C12217 = C28818 - (C23545 * C28353) / q - C28732 / q;
    const double C10940 = -(C23236 * C28354 + C28731) / q;
    const double C11021 = C28742 - (C23386 * C28353) / q - C28731 / q;
    const double C10939 = -(C23220 * C28354 + C28730) / q;
    const double C11180 =
        (3 * C23386) / C12880 - (C23371 * C28353) / q - C28730 / q;
    const double C28907 = C28729 / q;
    const double C28906 = C28728 / q;
    const double C28905 = C28727 / q;
    const double C28904 = C28726 / q;
    const double C28903 = C28725 / q;
    const double C28902 = C28724 / q;
    const double C3364 = C28168 - (C12964 * C28358) / q - C28359;
    const double C3704 = (C13690 * de) / q - (C12981 * C28353) / q +
                         (3 * C12997) / C12880 - C28359;
    const double C3365 = C28169 - (C12980 * C28358) / q - C28360;
    const double C3593 =
        (C13493 * de) / q - (C12997 * C28353) / q + C28204 - C28360;
    const double C3373 = C28170 - (C12996 * C28358) / q - C28361;
    const double C4915 =
        (C15629 * de) / q - (C13497 * C28353) / q + C28275 - C28361;
    const double C3513 = C28195 - (C13136 * C28354) / q - C28369;
    const double C3832 =
        (C13939 * de) / q - (C13284 * C28353) / q + C28221 - C28369;
    const double C3464 = C28184 - (C13219 * C28358) / q - C28364;
    const double C3760 = C12997 / C12880 - (C13235 * C28354) / q - C28364;
    const double C4136 =
        (C14533 * de) / q - (C13881 * C28353) / q + C13897 / C12880 - C28364;
    const double C3465 = C28185 - (C13136 * C28358) / q - C28365;
    const double C4818 =
        (C15539 * de) / q - (C13787 * C28353) / q + C14370 / C12880 - C28365;
    const double C3840 = (C13954 * de) / q - (C13896 * C28353) / q - C28383;
    const double C4708 = C28270 - (C13301 * C28354) / q - C28383;
    const double C3496 =
        (C13280 * de) / q - (C13219 * C28353) / q + C13284 / q - C28367;
    const double C3664 = C28208 - (C13121 * C28354) / q - C28367;
    const double C3512 = C13136 / q - (C13219 * C28354) / q - C28368;
    const double C4088 =
        (C14443 * de) / q - (C13972 * C28353) / q + C28241 - C28368;
    const double C3561 = C28195 - (C12997 * C28358) / q + C28198 - C28373;
    const double C4264 =
        (C14778 * de) / q - (C13480 * C28353) / q + C28250 - C28373;
    const double C3560 = C12997 / q - (C13415 * C28358) / q + C28197 - C28372;
    const double C4562 =
        (C15270 * de) / q - (C14719 * C28353) / q + C28265 - C28372;
    const double C4272 = (C14793 * de) / q - (C14735 * C28353) / q - C28399;
    const double C4885 = C28270 - (C13497 * C28358) / q + C28272 - C28399;
    const double C3592 =
        (C13476 * de) / q - (C13415 * C28353) / q + C13480 / q - C28374;
    const double C3688 = C28208 - (C12981 * C28358) / q + C28209 - C28374;
    const double C3736 =
        C13136 / C12880 - (C13235 * C28358) / q + C28211 - C28378;
    const double C4514 =
        (C15179 * de) / q - (C14811 * C28353) / q + C14354 / C12880 - C28378;
    const double C3640 = C28206 - (C13121 * C28358) / q - C28375;
    const double C3752 =
        (C13783 * de) / q - (C13235 * C28353) / q + C28214 - C28375;
    const double C4663 = C28267 - (C13301 * C28358) / q - C28404;
    const double C5173 = (C15717 * de) / q - (C14370 * C28353) / q - C28404;
    const double C3800 = C28215 - (C13284 * C28358) / q - C28380;
    const double C4025 = (C14336 * de) / q - (C13897 * C28353) / q - C28380;
    const double C4833 = C13497 / C12880 - (C13787 * C28354) / q - C28380;
    const double C3808 = C28216 - (C13896 * C28358) / q - C28381;
    const double C5188 = C28275 - (C14370 * C28354) / q - C28381;
    const double C3848 = C28193 - (C13284 * C28354) / q - C28384;
    const double C3929 = (C14144 * de) / q - (C13988 * C28353) / q - C28384;
    const double C3896 = C28224 - (C14069 * C28358) / q - C28385;
    const double C4192 = (3 * C13897) / C12880 - (C14085 * C28354) / q - C28385;
    const double C3897 = C28225 - (C13988 * C28358) / q - C28386;
    const double C4041 = C28238 - (C13897 * C28354) / q - C28386;
    const double C3928 = (C14128 * de) / q - (C14069 * C28353) / q - C28388;
    const double C4096 = (3 * C13284) / C12880 - (C13972 * C28354) / q - C28388;
    const double C3993 = C28221 - (C13897 * C28358) / q + C28231 - C28390;
    const double C4371 = C28250 - (C14354 * C28354) / q - C28390;
    const double C3992 = C13897 / q - (C14261 * C28358) / q + C28230 - C28389;
    const double C4618 = C28265 - (C14872 * C28354) / q - C28389;
    const double C4024 = (C14320 * de) / q - (C14261 * C28353) / q - C28393;
    const double C4120 =
        C13284 / C12880 - (C13881 * C28358) / q + C28242 - C28393;
    const double C4522 = C13480 / C12880 - (C14811 * C28354) / q - C28393;
    const double C4040 = C14354 / q - (C14261 * C28354) / q - C28394;
    const double C4168 = C28241 - (C14085 * C28358) / q + C28244 - C28394;
    const double C4072 = C28239 - (C13972 * C28358) / q - C28395;
    const double C4144 = C28214 - (C13881 * C28354) / q - C28395;
    const double C4184 = (C14624 * de) / q - (C14085 * C28353) / q - C28395;
    const double C4232 = C28204 - (C13480 * C28358) / q + C28245 - C28398;
    const double C4451 = (C15074 * de) / q - (C14736 * C28353) / q - C28398;
    const double C4356 = (C14899 * de) / q - (C14354 * C28353) / q - C28400;
    const double C4788 =
        C13301 / C12880 - (C13787 * C28358) / q + C28271 - C28400;
    const double C4450 = (C15058 * de) / q - (C14999 * C28353) / q - C28401;
    const double C4546 =
        (3 * C13480) / C12880 - (C14719 * C28358) / q + C28262 - C28401;
    const double C4498 = C28214 - (C14811 * C28358) / q + C28260 - C28402;
    const double C4610 = (C15361 * de) / q - (C14872 * C28353) / q - C28402;
    const double C7177 = (C13056 * de) / q - (C18159 * C28354) / q - C28638;
    const double C7418 = (3 * C18325) / C12880 - (C18310 * C28353) / q - C28638;
    const double C7178 = (C13072 * de) / q - (C18175 * C28354) / q - C28639;
    const double C7259 = C28472 - (C18325 * C28353) / q - C28639;
    const double C7186 = (C13087 * de) / q - (C18191 * C28354) / q - C28640;
    const double C8455 = C28548 - (C18484 * C28353) / q - C28640;
    const double C7275 =
        (C13297 * de) / q - (C18325 * C28354) / q + C28474 - C28648;
    const double C7594 = C28500 - (C18468 * C28353) / q - C28648;
    const double C7258 = C18468 / q - (C18406 * C28353) / q - C28646;
    const double C7426 =
        (C13599 * de) / q - (C18310 * C28354) / q + C28487 - C28646;
    const double C7274 =
        (C13280 * de) / q - (C18406 * C28354) / q + C18325 / q - C28647;
    const double C7850 = C28520 - (C19134 * C28353) / q - C28647;
    const double C8228 = (C15058 * de) / q - (C20129 * C28354) / q - C28670;
    const double C8356 =
        (3 * C19504) / C12880 - (C20006 * C28358) / q + C28545 - C28670;
    const double C3347 = C28168 - (C12916 * C28354) / q - C28355;
    const double C3648 = (C13584 * de) / q - (C12933 * C28353) / q +
                         (3 * C12949) / C12880 - C28355;
    const double C3348 = C28169 - (C12932 * C28354) / q - C28356;
    const double C3481 =
        (C13264 * de) / q - (C12949 * C28353) / q + C28191 - C28356;
    const double C3356 = C28170 - (C12948 * C28354) / q - C28357;
    const double C4678 =
        (C15435 * de) / q - (C13268 * C28353) / q + C13864 / C12880 - C28357;
    const double C3449 =
        C12948 / C12880 - (C12949 * C28354) / q + C28185 - C28363;
    const double C3816 =
        (C13909 * de) / q - (C13251 * C28353) / q + C13865 / C12880 - C28363;
    const double C3448 = C12949 / q - (C13189 * C28354) / q + C28184 - C28362;
    const double C4080 =
        (C14428 * de) / q - (C13849 * C28353) / q + C13866 / C12880 - C28362;
    const double C3824 = (C13924 * de) / q - (C13865 * C28353) / q - C28382;
    const double C4648 =
        C13044 / C12880 - (C13268 * C28354) / q + C28267 - C28382;
    const double C3480 =
        (C13247 * de) / q - (C13189 * C28353) / q + C13251 / q - C28366;
    const double C3632 =
        C12932 / C12880 - (C12933 * C28354) / q + C28206 - C28366;
    const double C3544 = C28197 - (C13383 * C28354) / q - C28370;
    const double C4506 =
        (C15164 * de) / q - (C14689 * C28353) / q + C14227 / C12880 - C28370;
    const double C3545 = C28198 - (C13399 * C28354) / q - C28371;
    const double C4803 =
        (C15524 * de) / q - (C13771 * C28353) / q + C14244 / C12880 - C28371;
    const double C3680 = C28209 - (C13464 * C28354) / q - C28376;
    const double C3744 =
        (C13767 * de) / q - (C13400 * C28353) / q + C28213 - C28376;
    const double C3728 =
        C13399 / C12880 - (C13400 * C28354) / q + C28211 - C28377;
    const double C4128 =
        (C14518 * de) / q - (C14308 * C28353) / q + C14245 / C12880 - C28377;
    const double C4870 = C28272 - (C13463 * C28354) / q - C28405;
    const double C5158 = (C15702 * de) / q - (C14244 * C28353) / q - C28405;
    const double C3784 = C28191 - (C13251 * C28354) / q + C28215 - C28379;
    const double C3913 = (C14113 * de) / q - (C13866 * C28353) / q - C28379;
    const double C3912 = (C14097 * de) / q - (C14039 * C28353) / q - C28387;
    const double C4064 =
        (3 * C13251) / C12880 - (C13849 * C28354) / q + C28239 - C28387;
    const double C4008 = (C14288 * de) / q - (C14228 * C28353) / q - C28391;
    const double C4490 =
        C13446 / C12880 - (C14689 * C28354) / q + C28260 - C28391;
    const double C4009 = (C14304 * de) / q - (C14245 * C28353) / q - C28392;
    const double C4773 =
        C13463 / C12880 - (C13771 * C28354) / q + C28271 - C28392;
    const double C4112 = C28213 - (C14308 * C28354) / q + C28242 - C28396;
    const double C4176 = (C14609 * de) / q - (C14246 * C28353) / q - C28396;
    const double C4216 = C28245 - (C13446 * C28354) / q - C28397;
    const double C4341 = (C14884 * de) / q - (C14227 * C28353) / q - C28397;
    const double C4538 = C28262 - (C15046 * C28354) / q - C28403;
    const double C4602 = (C15346 * de) / q - (C14984 * C28353) / q - C28403;
    const double C8260 = C28493 - (C19946 * C28358) / q + C28539 - C28671;
    const double C8332 = (C15270 * de) / q - (C19858 * C28354) / q - C28671;
    const double C8088 = C28517 - (C19504 * C28358) / q + C28533 - C28669;
    const double C8229 = (C15074 * de) / q - (C19875 * C28354) / q - C28669;
    const double C8042 = (C14778 * de) / q - (C18658 * C28354) / q - C28667;
    const double C8550 =
        C18484 / C12880 - (C18955 * C28358) / q + C28550 - C28667;
    const double C7802 =
        (C14320 * de) / q - (C19415 * C28354) / q + C19504 / q - C28664;
    const double C7930 = C28520 - (C19245 * C28358) / q + C28523 - C28664;
    const double C8050 = (C14793 * de) / q - (C19874 * C28354) / q - C28668;
    const double C8905 = C28548 - (C19520 * C28358) / q + C28555 - C28668;
    const double C7882 =
        C18468 / C12880 - (C19047 * C28358) / q + C28521 - C28666;
    const double C8284 =
        (C15179 * de) / q - (C19946 * C28354) / q + C18658 / C12880 - C28666;
    const double C7834 = C28518 - (C19134 * C28358) / q - C28665;
    const double C7906 =
        (C14533 * de) / q - (C19047 * C28354) / q + C28493 - C28665;
    const double C7755 = C28500 - (C19063 * C28358) / q + C28510 - C28663;
    const double C8133 =
        (C14899 * de) / q - (C19504 * C28354) / q + C28529 - C28663;
    const double C7754 = C19063 / q - (C19415 * C28358) / q + C28509 - C28662;
    const double C8380 =
        (C15361 * de) / q - (C20006 * C28354) / q + C28544 - C28662;
    const double C7659 = C28504 - (C19150 * C28358) / q - C28661;
    const double C7803 =
        (C14336 * de) / q - (C19063 * C28354) / q + C28517 - C28661;
    const double C7658 = C28503 - (C19229 * C28358) / q - C28660;
    const double C7954 = (C14624 * de) / q - (C19245 * C28354) / q +
                         (3 * C19063) / C12880 - C28660;
    const double C7570 = C28495 - (C19062 * C28358) / q - C28659;
    const double C8950 =
        (C15717 * de) / q - (C19520 * C28354) / q + C28554 - C28659;
    const double C7562 = C28494 - (C18468 * C28358) / q - C28658;
    const double C8595 =
        (C15539 * de) / q - (C18955 * C28354) / q + C18674 / C12880 - C28658;
    const double C7370 = (C13476 * de) / q - (C18596 * C28354) / q - C28654;
    const double C7498 =
        C18325 / C12880 - (C18422 * C28358) / q + C28490 - C28654;
    const double C8276 = C19504 / C12880 - (C19946 * C28353) / q - C28654;
    const double C7354 = C18658 / q - (C18596 * C28353) / q - C28653;
    const double C7450 = C28487 - (C18176 * C28358) / q + C28488 - C28653;
    const double C7402 = C28485 - (C18310 * C28358) / q - C28655;
    const double C7474 = (C13690 * de) / q - (C18176 * C28354) / q - C28655;
    const double C7514 = C28493 - (C18422 * C28353) / q - C28655;
    const double C8425 = C28546 - (C18484 * C28358) / q - C28672;
    const double C8692 = (C15629 * de) / q - (C18674 * C28354) / q - C28672;
    const double C7323 = C28474 - (C18192 * C28358) / q + C28477 - C28652;
    const double C8026 = C28529 - (C18658 * C28353) / q - C28652;
    const double C7322 = C18192 / q - (C18596 * C28358) / q + C28476 - C28651;
    const double C8324 = C28544 - (C19858 * C28353) / q - C28651;
    const double C7490 = (C13767 * de) / q - (C18581 * C28354) / q +
                         C18580 / C12880 + C28490 - C28657;
    const double C7890 = C19398 / C12880 - (C19460 * C28353) / q - C28657;
    const double C7442 =
        (C13674 * de) / q - (C18643 * C28354) / q + C28488 - C28656;
    const double C7506 = C28492 - (C18581 * C28353) / q - C28656;
    const double C7242 = C18437 / q - (C18376 * C28353) / q - C28645;
    const double C7394 = (C13584 * de) / q - (C18128 * C28354) / q +
                         C18127 / C12880 + C28485 - C28645;
    const double C7227 = C28464 - (C18325 * C28358) / q - C28644;
    const double C7371 = (C13493 * de) / q - (C18192 * C28354) / q - C28644;
    const double C8580 = C19520 / C12880 - (C18955 * C28353) / q - C28644;
    const double C7226 = C28463 - (C18406 * C28358) / q - C28643;
    const double C7522 =
        (C13783 * de) / q - (C18422 * C28354) / q + C18192 / C12880 - C28643;
    const double C7898 = C19063 / C12880 - (C19047 * C28353) / q - C28643;
    const double C7306 =
        (C13442 * de) / q - (C18564 * C28354) / q + C28476 - C28649;
    const double C8268 = C19382 / C12880 - (C19828 * C28353) / q - C28649;
    const double C7307 =
        (C13459 * de) / q - (C18580 * C28354) / q + C28477 - C28650;
    const double C8565 = C19399 / C12880 - (C18940 * C28353) / q - C28650;
    const double C7211 = (C13264 * de) / q - (C18144 * C28354) / q +
                         C18143 / C12880 + C28464 - C28642;
    const double C7578 = C19030 / C12880 - (C18437 * C28353) / q - C28642;
    const double C7210 = (C13247 * de) / q - (C18376 * C28354) / q +
                         C18144 / q + C28463 - C28641;
    const double C7842 = C19032 / C12880 - (C19015 * C28353) / q - C28641;
    const double C7135 = C28453 - (C18191 * C28358) / q - C28637;
    const double C8677 = C28554 - (C18674 * C28353) / q - C28637;
    const double C7127 = C28452 - (C18175 * C28358) / q - C28636;
    const double C7355 = C28483 - (C18192 * C28353) / q - C28636;
    const double C7126 = C28451 - (C18159 * C28358) / q - C28635;
    const double C7466 = (3 * C18192) / C12880 - (C18176 * C28353) / q - C28635;
    const double C7118 =
        (C13040 * de) / q - (C18143 * C28354) / q + C28453 - C28634;
    const double C8440 = C19031 / C12880 - (C18453 * C28353) / q - C28634;
    const double C7110 =
        (C13025 * de) / q - (C18127 * C28354) / q + C28452 - C28633;
    const double C7243 = C28470 - (C18144 * C28353) / q - C28633;
    const double C7109 =
        (C13009 * de) / q - (C18111 * C28354) / q + C28451 - C28632;
    const double C7410 = (3 * C18144) / C12880 - (C18128 * C28353) / q - C28632;
    const double C11564 = C24565 / q - (C24476 * C28354) / q - C28931;
    const double C11692 =
        (C14624 * de) / q - (C24306 * C28358) / q + C28790 + C28793 - C28931;
    const double C11644 = (C14533 * de) / q - (C24108 * C28358) / q +
                          C23529 / C12880 + C28791 - C28933;
    const double C12046 = C23719 / C12880 - (C25007 * C28354) / q - C28933;
    const double C11596 =
        (C14443 * de) / q - (C24195 * C28358) / q + C28788 - C28932;
    const double C11668 = C28763 - (C24108 * C28354) / q - C28932;
    const double C11517 =
        (C14336 * de) / q - (C24124 * C28358) / q + C28770 + C28780 - C28930;
    const double C11895 = C28799 - (C24565 * C28354) / q - C28930;
    const double C11516 = (C14320 * de) / q - (C24476 * C28358) / q +
                          C24124 / q + C28779 - C28929;
    const double C12142 = C28814 - (C25067 * C28354) / q - C28929;
    const double C11421 =
        (C14144 * de) / q - (C24211 * C28358) / q + C28774 - C28928;
    const double C11565 = C28787 - (C24124 * C28354) / q - C28928;
    const double C11420 =
        (C14128 * de) / q - (C24290 * C28358) / q + C28773 - C28927;
    const double C11716 =
        (3 * C24124) / C12880 - (C24306 * C28354) / q - C28927;
    const double C11332 =
        (C13954 * de) / q - (C24123 * C28358) / q + C28765 - C28926;
    const double C12712 = C28824 - (C24581 * C28354) / q - C28926;
    const double C11324 =
        (C13939 * de) / q - (C23529 * C28358) / q + C28764 - C28925;
    const double C12357 = C23735 / C12880 - (C24016 * C28354) / q - C28925;
    const double C11260 = (C13783 * de) / q - (C23483 * C28358) / q +
                          C23386 / C12880 + C28760 - C28924;
    const double C12038 = C24565 / C12880 - (C25007 * C28353) / q - C28924;
    const double C11116 = C23719 / q - (C23657 * C28353) / q - C28920;
    const double C11212 =
        (C13690 * de) / q - (C23237 * C28358) / q + C28757 + C28758 - C28920;
    const double C11164 =
        (C13599 * de) / q - (C23371 * C28358) / q + C28755 - C28921;
    const double C11276 = C28763 - (C23483 * C28353) / q - C28921;
    const double C11085 =
        (C13493 * de) / q - (C23253 * C28358) / q + C28744 + C28747 - C28919;
    const double C11788 = C28799 - (C23719 * C28353) / q - C28919;
    const double C11084 = (C13476 * de) / q - (C23657 * C28358) / q +
                          C23253 / q + C28746 - C28918;
    const double C12086 = C28814 - (C24919 * C28353) / q - C28918;
    const double C11036 = C23386 / q - (C23467 * C28354) / q - C28914;
    const double C11612 = C28790 - (C24195 * C28353) / q - C28914;
    const double C11252 =
        C23641 / C12880 - (C23642 * C28354) / q + C28760 - C28923;
    const double C11652 = C24460 / C12880 - (C24521 * C28353) / q - C28923;
    const double C11020 = C23529 / q - (C23467 * C28353) / q - C28913;
    const double C11188 = C28757 - (C23371 * C28354) / q - C28913;
    const double C11204 = C28758 - (C23704 * C28354) / q - C28922;
    const double C11268 = C28762 - (C23642 * C28353) / q - C28922;
    const double C11004 = C23498 / q - (C23437 * C28353) / q - C28912;
    const double C11156 =
        C23188 / C12880 - (C23189 * C28354) / q + C28755 - C28912;
    const double C10989 =
        (C13297 * de) / q - (C23386 * C28358) / q + C28734 - C28911;
    const double C12342 = C24581 / C12880 - (C24016 * C28353) / q - C28911;
    const double C10988 =
        (C13280 * de) / q - (C23467 * C28358) / q + C28733 - C28910;
    const double C11284 = C23253 / C12880 - (C23483 * C28354) / q - C28910;
    const double C11660 = C24124 / C12880 - (C24108 * C28353) / q - C28910;
    const double C11068 = C28746 - (C23625 * C28354) / q - C28916;
    const double C12030 = C24442 / C12880 - (C24889 * C28353) / q - C28916;
    const double C11037 = C28744 - (C23386 * C28354) / q - C28915;
    const double C11356 = C28770 - (C23529 * C28353) / q - C28915;
    const double C11069 = C28747 - (C23641 * C28354) / q - C28917;
    const double C12327 = C24459 / C12880 - (C24001 * C28353) / q - C28917;
    const double C10973 =
        C23204 / C12880 - (C23205 * C28354) / q + C28734 - C28909;
    const double C11340 = C24092 / C12880 - (C23498 * C28353) / q - C28909;
    const double C10972 = C23205 / q - (C23437 * C28354) / q + C28733 - C28908;
    const double C11604 = C24093 / C12880 - (C24076 * C28353) / q - C28908;
    const double C10897 =
        (C13087 * de) / q - (C23252 * C28358) / q + C28723 - C28907;
    const double C12439 = C28824 - (C23735 * C28353) / q - C28907;
    const double C10889 =
        (C13072 * de) / q - (C23236 * C28358) / q + C28722 - C28906;
    const double C11117 = C28753 - (C23253 * C28353) / q - C28906;
    const double C10888 =
        (C13056 * de) / q - (C23220 * C28358) / q + C28721 - C28905;
    const double C11228 =
        (3 * C23253) / C12880 - (C23237 * C28353) / q - C28905;
    const double C10880 = C28723 - (C23204 * C28354) / q - C28904;
    const double C12202 = C24091 / C12880 - (C23514 * C28353) / q - C28904;
    const double C10872 = C28722 - (C23188 * C28354) / q - C28903;
    const double C11005 = C28740 - (C23205 * C28353) / q - C28903;
    const double C10871 = C28721 - (C23172 * C28354) / q - C28902;
    const double C11172 =
        (3 * C23205) / C12880 - (C23189 * C28353) / q - C28902;
    etx[0] = C3330;
    etx[1] = C3331;
    etx[2] = C3339;
    etx[3] = C3347;
    etx[4] = C3348;
    etx[5] = C3356;
    etx[6] = C3364;
    etx[7] = C3365;
    etx[8] = C3373;
    etx[9] = C3381;
    etx[10] = C3382;
    etx[11] = C3390;
    etx[12] = C3398;
    etx[13] = C3399;
    etx[14] = C3407;
    etx[15] = C3415;
    etx[16] = C3416;
    etx[17] = C3424;
    etx[18] = C3432;
    etx[19] = C3433;
    etx[20] = C3448;
    etx[21] = C3449;
    etx[22] = C3464;
    etx[23] = C3465;
    etx[24] = C3480;
    etx[25] = C3481;
    etx[26] = C3496;
    etx[27] = C3497;
    etx[28] = C3512;
    etx[29] = C3513;
    etx[30] = C3528;
    etx[31] = C3529;
    etx[32] = C3544;
    etx[33] = C3545;
    etx[34] = C3560;
    etx[35] = C3561;
    etx[36] = C3576;
    etx[37] = C3577;
    etx[38] = C3592;
    etx[39] = C3593;
    etx[40] = C3608;
    etx[41] = C3609;
    etx[42] = C3624;
    etx[43] = C3632;
    etx[44] = C3640;
    etx[45] = C3648;
    etx[46] = C3656;
    etx[47] = C3664;
    etx[48] = C3672;
    etx[49] = C3680;
    etx[50] = C3688;
    etx[51] = C3696;
    etx[52] = C3704;
    etx[53] = C3712;
    etx[54] = C3720;
    etx[55] = C3728;
    etx[56] = C3736;
    etx[57] = C3744;
    etx[58] = C3752;
    etx[59] = C3760;
    etx[60] = C3768;
    etx[61] = C3776;
    etx[62] = C3784;
    etx[63] = C3792;
    etx[64] = C3800;
    etx[65] = C3808;
    etx[66] = C3816;
    etx[67] = C3824;
    etx[68] = C3832;
    etx[69] = C3840;
    etx[70] = C3848;
    etx[71] = C3856;
    etx[72] = C3864;
    etx[73] = C3865;
    etx[74] = C3880;
    etx[75] = C3881;
    etx[76] = C3896;
    etx[77] = C3897;
    etx[78] = C3912;
    etx[79] = C3913;
    etx[80] = C3928;
    etx[81] = C3929;
    etx[82] = C3944;
    etx[83] = C3945;
    etx[84] = C3960;
    etx[85] = C3961;
    etx[86] = C3976;
    etx[87] = C3977;
    etx[88] = C3992;
    etx[89] = C3993;
    etx[90] = C4008;
    etx[91] = C4009;
    etx[92] = C4024;
    etx[93] = C4025;
    etx[94] = C4040;
    etx[95] = C4041;
    etx[96] = C4056;
    etx[97] = C4064;
    etx[98] = C4072;
    etx[99] = C4080;
    etx[100] = C4088;
    etx[101] = C4096;
    etx[102] = C4104;
    etx[103] = C4112;
    etx[104] = C4120;
    etx[105] = C4128;
    etx[106] = C4136;
    etx[107] = C4144;
    etx[108] = C4152;
    etx[109] = C4160;
    etx[110] = C4168;
    etx[111] = C4176;
    etx[112] = C4184;
    etx[113] = C4192;
    etx[114] = C4200;
    etx[115] = C4208;
    etx[116] = C4216;
    etx[117] = C4224;
    etx[118] = C4232;
    etx[119] = C4240;
    etx[120] = C4248;
    etx[121] = C4256;
    etx[122] = C4264;
    etx[123] = C4272;
    etx[124] = C4280;
    etx[125] = C4288;
    etx[126] = C4296;
    etx[127] = C4311;
    etx[128] = C4326;
    etx[129] = C4341;
    etx[130] = C4356;
    etx[131] = C4371;
    etx[132] = C4386;
    etx[133] = C4387;
    etx[134] = C4402;
    etx[135] = C4403;
    etx[136] = C4418;
    etx[137] = C4419;
    etx[138] = C4434;
    etx[139] = C4435;
    etx[140] = C4450;
    etx[141] = C4451;
    etx[142] = C4466;
    etx[143] = C4467;
    etx[144] = C4482;
    etx[145] = C4490;
    etx[146] = C4498;
    etx[147] = C4506;
    etx[148] = C4514;
    etx[149] = C4522;
    etx[150] = C4530;
    etx[151] = C4538;
    etx[152] = C4546;
    etx[153] = C4554;
    etx[154] = C4562;
    etx[155] = C4570;
    etx[156] = C4578;
    etx[157] = C4586;
    etx[158] = C4594;
    etx[159] = C4602;
    etx[160] = C4610;
    etx[161] = C4618;
    etx[162] = C4633;
    etx[163] = C4648;
    etx[164] = C4663;
    etx[165] = C4678;
    etx[166] = C4693;
    etx[167] = C4708;
    etx[168] = C4758;
    etx[169] = C4773;
    etx[170] = C4788;
    etx[171] = C4803;
    etx[172] = C4818;
    etx[173] = C4833;
    etx[174] = C4855;
    etx[175] = C4870;
    etx[176] = C4885;
    etx[177] = C4900;
    etx[178] = C4915;
    etx[179] = C4930;
    etx[180] = C5113;
    etx[181] = C5128;
    etx[182] = C5143;
    etx[183] = C5158;
    etx[184] = C5173;
    etx[185] = C5188;
    ety[0] = C7092;
    ety[1] = C7093;
    ety[2] = C7101;
    ety[3] = C7109;
    ety[4] = C7110;
    ety[5] = C7118;
    ety[6] = C7126;
    ety[7] = C7127;
    ety[8] = C7135;
    ety[9] = C7143;
    ety[10] = C7144;
    ety[11] = C7152;
    ety[12] = C7160;
    ety[13] = C7161;
    ety[14] = C7169;
    ety[15] = C7177;
    ety[16] = C7178;
    ety[17] = C7186;
    ety[18] = C7194;
    ety[19] = C7195;
    ety[20] = C7210;
    ety[21] = C7211;
    ety[22] = C7226;
    ety[23] = C7227;
    ety[24] = C7242;
    ety[25] = C7243;
    ety[26] = C7258;
    ety[27] = C7259;
    ety[28] = C7274;
    ety[29] = C7275;
    ety[30] = C7290;
    ety[31] = C7291;
    ety[32] = C7306;
    ety[33] = C7307;
    ety[34] = C7322;
    ety[35] = C7323;
    ety[36] = C7338;
    ety[37] = C7339;
    ety[38] = C7354;
    ety[39] = C7355;
    ety[40] = C7370;
    ety[41] = C7371;
    ety[42] = C7386;
    ety[43] = C7394;
    ety[44] = C7402;
    ety[45] = C7410;
    ety[46] = C7418;
    ety[47] = C7426;
    ety[48] = C7434;
    ety[49] = C7442;
    ety[50] = C7450;
    ety[51] = C7458;
    ety[52] = C7466;
    ety[53] = C7474;
    ety[54] = C7482;
    ety[55] = C7490;
    ety[56] = C7498;
    ety[57] = C7506;
    ety[58] = C7514;
    ety[59] = C7522;
    ety[60] = C7530;
    ety[61] = C7538;
    ety[62] = C7546;
    ety[63] = C7554;
    ety[64] = C7562;
    ety[65] = C7570;
    ety[66] = C7578;
    ety[67] = C7586;
    ety[68] = C7594;
    ety[69] = C7602;
    ety[70] = C7610;
    ety[71] = C7618;
    ety[72] = C7626;
    ety[73] = C7627;
    ety[74] = C7642;
    ety[75] = C7643;
    ety[76] = C7658;
    ety[77] = C7659;
    ety[78] = C7674;
    ety[79] = C7675;
    ety[80] = C7690;
    ety[81] = C7691;
    ety[82] = C7706;
    ety[83] = C7707;
    ety[84] = C7722;
    ety[85] = C7723;
    ety[86] = C7738;
    ety[87] = C7739;
    ety[88] = C7754;
    ety[89] = C7755;
    ety[90] = C7770;
    ety[91] = C7771;
    ety[92] = C7786;
    ety[93] = C7787;
    ety[94] = C7802;
    ety[95] = C7803;
    ety[96] = C7818;
    ety[97] = C7826;
    ety[98] = C7834;
    ety[99] = C7842;
    ety[100] = C7850;
    ety[101] = C7858;
    ety[102] = C7866;
    ety[103] = C7874;
    ety[104] = C7882;
    ety[105] = C7890;
    ety[106] = C7898;
    ety[107] = C7906;
    ety[108] = C7914;
    ety[109] = C7922;
    ety[110] = C7930;
    ety[111] = C7938;
    ety[112] = C7946;
    ety[113] = C7954;
    ety[114] = C7962;
    ety[115] = C7970;
    ety[116] = C7978;
    ety[117] = C7986;
    ety[118] = C7994;
    ety[119] = C8002;
    ety[120] = C8010;
    ety[121] = C8018;
    ety[122] = C8026;
    ety[123] = C8034;
    ety[124] = C8042;
    ety[125] = C8050;
    ety[126] = C8058;
    ety[127] = C8073;
    ety[128] = C8088;
    ety[129] = C8103;
    ety[130] = C8118;
    ety[131] = C8133;
    ety[132] = C8148;
    ety[133] = C8149;
    ety[134] = C8164;
    ety[135] = C8165;
    ety[136] = C8180;
    ety[137] = C8181;
    ety[138] = C8196;
    ety[139] = C8197;
    ety[140] = C8212;
    ety[141] = C8213;
    ety[142] = C8228;
    ety[143] = C8229;
    ety[144] = C8244;
    ety[145] = C8252;
    ety[146] = C8260;
    ety[147] = C8268;
    ety[148] = C8276;
    ety[149] = C8284;
    ety[150] = C8292;
    ety[151] = C8300;
    ety[152] = C8308;
    ety[153] = C8316;
    ety[154] = C8324;
    ety[155] = C8332;
    ety[156] = C8340;
    ety[157] = C8348;
    ety[158] = C8356;
    ety[159] = C8364;
    ety[160] = C8372;
    ety[161] = C8380;
    ety[162] = C8395;
    ety[163] = C8410;
    ety[164] = C8425;
    ety[165] = C8440;
    ety[166] = C8455;
    ety[167] = C8470;
    ety[168] = C8520;
    ety[169] = C8535;
    ety[170] = C8550;
    ety[171] = C8565;
    ety[172] = C8580;
    ety[173] = C8595;
    ety[174] = C8617;
    ety[175] = C8632;
    ety[176] = C8647;
    ety[177] = C8662;
    ety[178] = C8677;
    ety[179] = C8692;
    ety[180] = C8875;
    ety[181] = C8890;
    ety[182] = C8905;
    ety[183] = C8920;
    ety[184] = C8935;
    ety[185] = C8950;
    etz[0] = C10854;
    etz[1] = C10855;
    etz[2] = C10863;
    etz[3] = C10871;
    etz[4] = C10872;
    etz[5] = C10880;
    etz[6] = C10888;
    etz[7] = C10889;
    etz[8] = C10897;
    etz[9] = C10905;
    etz[10] = C10906;
    etz[11] = C10914;
    etz[12] = C10922;
    etz[13] = C10923;
    etz[14] = C10931;
    etz[15] = C10939;
    etz[16] = C10940;
    etz[17] = C10948;
    etz[18] = C10956;
    etz[19] = C10957;
    etz[20] = C10972;
    etz[21] = C10973;
    etz[22] = C10988;
    etz[23] = C10989;
    etz[24] = C11004;
    etz[25] = C11005;
    etz[26] = C11020;
    etz[27] = C11021;
    etz[28] = C11036;
    etz[29] = C11037;
    etz[30] = C11052;
    etz[31] = C11053;
    etz[32] = C11068;
    etz[33] = C11069;
    etz[34] = C11084;
    etz[35] = C11085;
    etz[36] = C11100;
    etz[37] = C11101;
    etz[38] = C11116;
    etz[39] = C11117;
    etz[40] = C11132;
    etz[41] = C11133;
    etz[42] = C11148;
    etz[43] = C11156;
    etz[44] = C11164;
    etz[45] = C11172;
    etz[46] = C11180;
    etz[47] = C11188;
    etz[48] = C11196;
    etz[49] = C11204;
    etz[50] = C11212;
    etz[51] = C11220;
    etz[52] = C11228;
    etz[53] = C11236;
    etz[54] = C11244;
    etz[55] = C11252;
    etz[56] = C11260;
    etz[57] = C11268;
    etz[58] = C11276;
    etz[59] = C11284;
    etz[60] = C11292;
    etz[61] = C11300;
    etz[62] = C11308;
    etz[63] = C11316;
    etz[64] = C11324;
    etz[65] = C11332;
    etz[66] = C11340;
    etz[67] = C11348;
    etz[68] = C11356;
    etz[69] = C11364;
    etz[70] = C11372;
    etz[71] = C11380;
    etz[72] = C11388;
    etz[73] = C11389;
    etz[74] = C11404;
    etz[75] = C11405;
    etz[76] = C11420;
    etz[77] = C11421;
    etz[78] = C11436;
    etz[79] = C11437;
    etz[80] = C11452;
    etz[81] = C11453;
    etz[82] = C11468;
    etz[83] = C11469;
    etz[84] = C11484;
    etz[85] = C11485;
    etz[86] = C11500;
    etz[87] = C11501;
    etz[88] = C11516;
    etz[89] = C11517;
    etz[90] = C11532;
    etz[91] = C11533;
    etz[92] = C11548;
    etz[93] = C11549;
    etz[94] = C11564;
    etz[95] = C11565;
    etz[96] = C11580;
    etz[97] = C11588;
    etz[98] = C11596;
    etz[99] = C11604;
    etz[100] = C11612;
    etz[101] = C11620;
    etz[102] = C11628;
    etz[103] = C11636;
    etz[104] = C11644;
    etz[105] = C11652;
    etz[106] = C11660;
    etz[107] = C11668;
    etz[108] = C11676;
    etz[109] = C11684;
    etz[110] = C11692;
    etz[111] = C11700;
    etz[112] = C11708;
    etz[113] = C11716;
    etz[114] = C11724;
    etz[115] = C11732;
    etz[116] = C11740;
    etz[117] = C11748;
    etz[118] = C11756;
    etz[119] = C11764;
    etz[120] = C11772;
    etz[121] = C11780;
    etz[122] = C11788;
    etz[123] = C11796;
    etz[124] = C11804;
    etz[125] = C11812;
    etz[126] = C11820;
    etz[127] = C11835;
    etz[128] = C11850;
    etz[129] = C11865;
    etz[130] = C11880;
    etz[131] = C11895;
    etz[132] = C11910;
    etz[133] = C11911;
    etz[134] = C11926;
    etz[135] = C11927;
    etz[136] = C11942;
    etz[137] = C11943;
    etz[138] = C11958;
    etz[139] = C11959;
    etz[140] = C11974;
    etz[141] = C11975;
    etz[142] = C11990;
    etz[143] = C11991;
    etz[144] = C12006;
    etz[145] = C12014;
    etz[146] = C12022;
    etz[147] = C12030;
    etz[148] = C12038;
    etz[149] = C12046;
    etz[150] = C12054;
    etz[151] = C12062;
    etz[152] = C12070;
    etz[153] = C12078;
    etz[154] = C12086;
    etz[155] = C12094;
    etz[156] = C12102;
    etz[157] = C12110;
    etz[158] = C12118;
    etz[159] = C12126;
    etz[160] = C12134;
    etz[161] = C12142;
    etz[162] = C12157;
    etz[163] = C12172;
    etz[164] = C12187;
    etz[165] = C12202;
    etz[166] = C12217;
    etz[167] = C12232;
    etz[168] = C12282;
    etz[169] = C12297;
    etz[170] = C12312;
    etz[171] = C12327;
    etz[172] = C12342;
    etz[173] = C12357;
    etz[174] = C12379;
    etz[175] = C12394;
    etz[176] = C12409;
    etz[177] = C12424;
    etz[178] = C12439;
    etz[179] = C12454;
    etz[180] = C12637;
    etz[181] = C12652;
    etz[182] = C12667;
    etz[183] = C12682;
    etz[184] = C12697;
    etz[185] = C12712;
}
