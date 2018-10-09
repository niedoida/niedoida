/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2121_1(const double ae,
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
    double g[384];
    eri_gradient_2121_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[84];
    double vry[84];
    double vrz[84];
    eri_gradient_2121_1_vr(ae,
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
    double etx[256];
    double ety[256];
    double etz[256];
    eri_gradient_2121_1_et(ae,
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
    eri_gradient_2121_1_hr(ae,
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
    const double C56912 = hrx[0];
    const double C57833 = hrx[1];
    const double C58755 = hrx[2];
    const double C59677 = hrx[3];
    const double C60599 = hrx[4];
    const double C61521 = hrx[5];
    const double C62443 = hrx[6];
    const double C63365 = hrx[7];
    const double C64287 = hrx[8];
    const double C65209 = hrx[9];
    const double C66131 = hrx[10];
    const double C67053 = hrx[11];
    const double C67975 = hrx[12];
    const double C68897 = hrx[13];
    const double C69819 = hrx[14];
    const double C70741 = hrx[15];
    const double C71663 = hrx[16];
    const double C72585 = hrx[17];
    const double C73507 = hrx[18];
    const double C74429 = hrx[19];
    const double C75351 = hrx[20];
    const double C76273 = hrx[21];
    const double C77195 = hrx[22];
    const double C78117 = hrx[23];
    const double C79039 = hrx[24];
    const double C79961 = hrx[25];
    const double C80883 = hrx[26];
    const double C81805 = hrx[27];
    const double C82727 = hrx[28];
    const double C83649 = hrx[29];
    const double C84571 = hrx[30];
    const double C85493 = hrx[31];
    const double C86415 = hrx[32];
    const double C87337 = hrx[33];
    const double C88259 = hrx[34];
    const double C89181 = hrx[35];
    const double C90103 = hrx[36];
    const double C91025 = hrx[37];
    const double C91947 = hrx[38];
    const double C92869 = hrx[39];
    const double C93791 = hrx[40];
    const double C94713 = hrx[41];
    const double C95635 = hrx[42];
    const double C96557 = hrx[43];
    const double C97479 = hrx[44];
    const double C98401 = hrx[45];
    const double C99323 = hrx[46];
    const double C100245 = hrx[47];
    const double C101167 = hrx[48];
    const double C102089 = hrx[49];
    const double C103011 = hrx[50];
    const double C103933 = hrx[51];
    const double C104855 = hrx[52];
    const double C105777 = hrx[53];
    const double C106699 = hrx[54];
    const double C107621 = hrx[55];
    const double C108543 = hrx[56];
    const double C109465 = hrx[57];
    const double C110387 = hrx[58];
    const double C111309 = hrx[59];
    const double C112231 = hrx[60];
    const double C113153 = hrx[61];
    const double C114075 = hrx[62];
    const double C114997 = hrx[63];
    const double C115919 = hrx[64];
    const double C116841 = hrx[65];
    const double C117763 = hrx[66];
    const double C118685 = hrx[67];
    const double C119607 = hrx[68];
    const double C120529 = hrx[69];
    const double C121451 = hrx[70];
    const double C122373 = hrx[71];
    const double C123295 = hrx[72];
    const double C124217 = hrx[73];
    const double C125139 = hrx[74];
    const double C126061 = hrx[75];
    const double C126983 = hrx[76];
    const double C127905 = hrx[77];
    const double C128827 = hrx[78];
    const double C129749 = hrx[79];
    const double C130671 = hrx[80];
    const double C131593 = hrx[81];
    const double C132515 = hrx[82];
    const double C133437 = hrx[83];
    const double C134359 = hrx[84];
    const double C135281 = hrx[85];
    const double C136203 = hrx[86];
    const double C137125 = hrx[87];
    const double C138047 = hrx[88];
    const double C138969 = hrx[89];
    const double C139891 = hrx[90];
    const double C140813 = hrx[91];
    const double C141735 = hrx[92];
    const double C142657 = hrx[93];
    const double C143579 = hrx[94];
    const double C144501 = hrx[95];
    const double C145423 = hrx[96];
    const double C146345 = hrx[97];
    const double C147267 = hrx[98];
    const double C148189 = hrx[99];
    const double C149111 = hrx[100];
    const double C150033 = hrx[101];
    const double C150955 = hrx[102];
    const double C151877 = hrx[103];
    const double C152799 = hrx[104];
    const double C153721 = hrx[105];
    const double C154643 = hrx[106];
    const double C155565 = hrx[107];
    const double C156487 = hrx[108];
    const double C157409 = hrx[109];
    const double C158331 = hrx[110];
    const double C159253 = hrx[111];
    const double C160175 = hrx[112];
    const double C161097 = hrx[113];
    const double C162019 = hrx[114];
    const double C162941 = hrx[115];
    const double C163863 = hrx[116];
    const double C164785 = hrx[117];
    const double C165707 = hrx[118];
    const double C166629 = hrx[119];
    const double C167551 = hrx[120];
    const double C168473 = hrx[121];
    const double C169395 = hrx[122];
    const double C170317 = hrx[123];
    const double C171239 = hrx[124];
    const double C172161 = hrx[125];
    const double C173083 = hrx[126];
    const double C174005 = hrx[127];
    const double C174927 = hrx[128];
    const double C175849 = hrx[129];
    const double C176771 = hrx[130];
    const double C177693 = hrx[131];
    const double C178615 = hrx[132];
    const double C179537 = hrx[133];
    const double C180459 = hrx[134];
    const double C181381 = hrx[135];
    const double C182303 = hrx[136];
    const double C183225 = hrx[137];
    const double C184147 = hrx[138];
    const double C185069 = hrx[139];
    const double C185991 = hrx[140];
    const double C186913 = hrx[141];
    const double C187835 = hrx[142];
    const double C188757 = hrx[143];
    const double C189679 = hrx[144];
    const double C190601 = hrx[145];
    const double C191523 = hrx[146];
    const double C192445 = hrx[147];
    const double C193367 = hrx[148];
    const double C194289 = hrx[149];
    const double C195211 = hrx[150];
    const double C196133 = hrx[151];
    const double C197055 = hrx[152];
    const double C197977 = hrx[153];
    const double C198899 = hrx[154];
    const double C199821 = hrx[155];
    const double C200743 = hrx[156];
    const double C201665 = hrx[157];
    const double C202587 = hrx[158];
    const double C203509 = hrx[159];
    const double C204431 = hrx[160];
    const double C205353 = hrx[161];
    const double C206275 = hrx[162];
    const double C207197 = hrx[163];
    const double C208119 = hrx[164];
    const double C209041 = hrx[165];
    const double C209963 = hrx[166];
    const double C210885 = hrx[167];
    const double C211807 = hrx[168];
    const double C212729 = hrx[169];
    const double C213651 = hrx[170];
    const double C214573 = hrx[171];
    const double C215495 = hrx[172];
    const double C216417 = hrx[173];
    const double C217339 = hrx[174];
    const double C218261 = hrx[175];
    const double C219183 = hrx[176];
    const double C220105 = hrx[177];
    const double C221027 = hrx[178];
    const double C221949 = hrx[179];
    const double C222871 = hrx[180];
    const double C223793 = hrx[181];
    const double C224715 = hrx[182];
    const double C225637 = hrx[183];
    const double C226559 = hrx[184];
    const double C227481 = hrx[185];
    const double C228403 = hrx[186];
    const double C229325 = hrx[187];
    const double C230247 = hrx[188];
    const double C231169 = hrx[189];
    const double C232091 = hrx[190];
    const double C233013 = hrx[191];
    const double C233935 = hrx[192];
    const double C234857 = hrx[193];
    const double C235779 = hrx[194];
    const double C236701 = hrx[195];
    const double C237623 = hrx[196];
    const double C238545 = hrx[197];
    const double C239467 = hrx[198];
    const double C240389 = hrx[199];
    const double C241311 = hrx[200];
    const double C242233 = hrx[201];
    const double C243155 = hrx[202];
    const double C244077 = hrx[203];
    const double C244999 = hrx[204];
    const double C245921 = hrx[205];
    const double C246843 = hrx[206];
    const double C247765 = hrx[207];
    const double C248687 = hrx[208];
    const double C249609 = hrx[209];
    const double C250531 = hrx[210];
    const double C251453 = hrx[211];
    const double C252375 = hrx[212];
    const double C253297 = hrx[213];
    const double C254219 = hrx[214];
    const double C255141 = hrx[215];
    const double C256063 = hrx[216];
    const double C256985 = hrx[217];
    const double C257907 = hrx[218];
    const double C258829 = hrx[219];
    const double C259751 = hrx[220];
    const double C260673 = hrx[221];
    const double C261595 = hrx[222];
    const double C262517 = hrx[223];
    const double C263439 = hrx[224];
    const double C264361 = hrx[225];
    const double C265283 = hrx[226];
    const double C266205 = hrx[227];
    const double C267127 = hrx[228];
    const double C268049 = hrx[229];
    const double C268971 = hrx[230];
    const double C269893 = hrx[231];
    const double C270815 = hrx[232];
    const double C271737 = hrx[233];
    const double C272659 = hrx[234];
    const double C273581 = hrx[235];
    const double C274503 = hrx[236];
    const double C275425 = hrx[237];
    const double C276347 = hrx[238];
    const double C277269 = hrx[239];
    const double C278191 = hrx[240];
    const double C279113 = hrx[241];
    const double C280035 = hrx[242];
    const double C280957 = hrx[243];
    const double C281879 = hrx[244];
    const double C282801 = hrx[245];
    const double C283723 = hrx[246];
    const double C284645 = hrx[247];
    const double C285567 = hrx[248];
    const double C286489 = hrx[249];
    const double C287411 = hrx[250];
    const double C288333 = hrx[251];
    const double C289255 = hrx[252];
    const double C290177 = hrx[253];
    const double C291099 = hrx[254];
    const double C292021 = hrx[255];
    const double C292943 = hrx[256];
    const double C293865 = hrx[257];
    const double C294787 = hrx[258];
    const double C295709 = hrx[259];
    const double C296631 = hrx[260];
    const double C297553 = hrx[261];
    const double C298475 = hrx[262];
    const double C299397 = hrx[263];
    const double C300319 = hrx[264];
    const double C301241 = hrx[265];
    const double C302163 = hrx[266];
    const double C303085 = hrx[267];
    const double C304007 = hrx[268];
    const double C304929 = hrx[269];
    const double C305851 = hrx[270];
    const double C306773 = hrx[271];
    const double C307695 = hrx[272];
    const double C308617 = hrx[273];
    const double C309539 = hrx[274];
    const double C310461 = hrx[275];
    const double C311383 = hrx[276];
    const double C312305 = hrx[277];
    const double C313227 = hrx[278];
    const double C314149 = hrx[279];
    const double C315071 = hrx[280];
    const double C315993 = hrx[281];
    const double C316915 = hrx[282];
    const double C317837 = hrx[283];
    const double C318759 = hrx[284];
    const double C319681 = hrx[285];
    const double C320603 = hrx[286];
    const double C321525 = hrx[287];
    const double C322447 = hrx[288];
    const double C323369 = hrx[289];
    const double C324291 = hrx[290];
    const double C325213 = hrx[291];
    const double C326135 = hrx[292];
    const double C327057 = hrx[293];
    const double C327979 = hrx[294];
    const double C328901 = hrx[295];
    const double C329823 = hrx[296];
    const double C330745 = hrx[297];
    const double C331667 = hrx[298];
    const double C332589 = hrx[299];
    const double C333511 = hrx[300];
    const double C334433 = hrx[301];
    const double C335355 = hrx[302];
    const double C336277 = hrx[303];
    const double C337199 = hrx[304];
    const double C338121 = hrx[305];
    const double C339043 = hrx[306];
    const double C339965 = hrx[307];
    const double C340887 = hrx[308];
    const double C341809 = hrx[309];
    const double C342731 = hrx[310];
    const double C343653 = hrx[311];
    const double C344575 = hrx[312];
    const double C345497 = hrx[313];
    const double C346419 = hrx[314];
    const double C347341 = hrx[315];
    const double C348263 = hrx[316];
    const double C349185 = hrx[317];
    const double C350107 = hrx[318];
    const double C351029 = hrx[319];
    const double C351951 = hrx[320];
    const double C352873 = hrx[321];
    const double C353795 = hrx[322];
    const double C354717 = hrx[323];
    const double C57218 = hry[0];
    const double C58140 = hry[1];
    const double C59062 = hry[2];
    const double C59984 = hry[3];
    const double C60906 = hry[4];
    const double C61828 = hry[5];
    const double C62750 = hry[6];
    const double C63672 = hry[7];
    const double C64594 = hry[8];
    const double C65516 = hry[9];
    const double C66438 = hry[10];
    const double C67360 = hry[11];
    const double C68282 = hry[12];
    const double C69204 = hry[13];
    const double C70126 = hry[14];
    const double C71048 = hry[15];
    const double C71970 = hry[16];
    const double C72892 = hry[17];
    const double C73814 = hry[18];
    const double C74736 = hry[19];
    const double C75658 = hry[20];
    const double C76580 = hry[21];
    const double C77502 = hry[22];
    const double C78424 = hry[23];
    const double C79346 = hry[24];
    const double C80268 = hry[25];
    const double C81190 = hry[26];
    const double C82112 = hry[27];
    const double C83034 = hry[28];
    const double C83956 = hry[29];
    const double C84878 = hry[30];
    const double C85800 = hry[31];
    const double C86722 = hry[32];
    const double C87644 = hry[33];
    const double C88566 = hry[34];
    const double C89488 = hry[35];
    const double C90410 = hry[36];
    const double C91332 = hry[37];
    const double C92254 = hry[38];
    const double C93176 = hry[39];
    const double C94098 = hry[40];
    const double C95020 = hry[41];
    const double C95942 = hry[42];
    const double C96864 = hry[43];
    const double C97786 = hry[44];
    const double C98708 = hry[45];
    const double C99630 = hry[46];
    const double C100552 = hry[47];
    const double C101474 = hry[48];
    const double C102396 = hry[49];
    const double C103318 = hry[50];
    const double C104240 = hry[51];
    const double C105162 = hry[52];
    const double C106084 = hry[53];
    const double C107006 = hry[54];
    const double C107928 = hry[55];
    const double C108850 = hry[56];
    const double C109772 = hry[57];
    const double C110694 = hry[58];
    const double C111616 = hry[59];
    const double C112538 = hry[60];
    const double C113460 = hry[61];
    const double C114382 = hry[62];
    const double C115304 = hry[63];
    const double C116226 = hry[64];
    const double C117148 = hry[65];
    const double C118070 = hry[66];
    const double C118992 = hry[67];
    const double C119914 = hry[68];
    const double C120836 = hry[69];
    const double C121758 = hry[70];
    const double C122680 = hry[71];
    const double C123602 = hry[72];
    const double C124524 = hry[73];
    const double C125446 = hry[74];
    const double C126368 = hry[75];
    const double C127290 = hry[76];
    const double C128212 = hry[77];
    const double C129134 = hry[78];
    const double C130056 = hry[79];
    const double C130978 = hry[80];
    const double C131900 = hry[81];
    const double C132822 = hry[82];
    const double C133744 = hry[83];
    const double C134666 = hry[84];
    const double C135588 = hry[85];
    const double C136510 = hry[86];
    const double C137432 = hry[87];
    const double C138354 = hry[88];
    const double C139276 = hry[89];
    const double C140198 = hry[90];
    const double C141120 = hry[91];
    const double C142042 = hry[92];
    const double C142964 = hry[93];
    const double C143886 = hry[94];
    const double C144808 = hry[95];
    const double C145730 = hry[96];
    const double C146652 = hry[97];
    const double C147574 = hry[98];
    const double C148496 = hry[99];
    const double C149418 = hry[100];
    const double C150340 = hry[101];
    const double C151262 = hry[102];
    const double C152184 = hry[103];
    const double C153106 = hry[104];
    const double C154028 = hry[105];
    const double C154950 = hry[106];
    const double C155872 = hry[107];
    const double C156794 = hry[108];
    const double C157716 = hry[109];
    const double C158638 = hry[110];
    const double C159560 = hry[111];
    const double C160482 = hry[112];
    const double C161404 = hry[113];
    const double C162326 = hry[114];
    const double C163248 = hry[115];
    const double C164170 = hry[116];
    const double C165092 = hry[117];
    const double C166014 = hry[118];
    const double C166936 = hry[119];
    const double C167858 = hry[120];
    const double C168780 = hry[121];
    const double C169702 = hry[122];
    const double C170624 = hry[123];
    const double C171546 = hry[124];
    const double C172468 = hry[125];
    const double C173390 = hry[126];
    const double C174312 = hry[127];
    const double C175234 = hry[128];
    const double C176156 = hry[129];
    const double C177078 = hry[130];
    const double C178000 = hry[131];
    const double C178922 = hry[132];
    const double C179844 = hry[133];
    const double C180766 = hry[134];
    const double C181688 = hry[135];
    const double C182610 = hry[136];
    const double C183532 = hry[137];
    const double C184454 = hry[138];
    const double C185376 = hry[139];
    const double C186298 = hry[140];
    const double C187220 = hry[141];
    const double C188142 = hry[142];
    const double C189064 = hry[143];
    const double C189986 = hry[144];
    const double C190908 = hry[145];
    const double C191830 = hry[146];
    const double C192752 = hry[147];
    const double C193674 = hry[148];
    const double C194596 = hry[149];
    const double C195518 = hry[150];
    const double C196440 = hry[151];
    const double C197362 = hry[152];
    const double C198284 = hry[153];
    const double C199206 = hry[154];
    const double C200128 = hry[155];
    const double C201050 = hry[156];
    const double C201972 = hry[157];
    const double C202894 = hry[158];
    const double C203816 = hry[159];
    const double C204738 = hry[160];
    const double C205660 = hry[161];
    const double C206582 = hry[162];
    const double C207504 = hry[163];
    const double C208426 = hry[164];
    const double C209348 = hry[165];
    const double C210270 = hry[166];
    const double C211192 = hry[167];
    const double C212114 = hry[168];
    const double C213036 = hry[169];
    const double C213958 = hry[170];
    const double C214880 = hry[171];
    const double C215802 = hry[172];
    const double C216724 = hry[173];
    const double C217646 = hry[174];
    const double C218568 = hry[175];
    const double C219490 = hry[176];
    const double C220412 = hry[177];
    const double C221334 = hry[178];
    const double C222256 = hry[179];
    const double C223178 = hry[180];
    const double C224100 = hry[181];
    const double C225022 = hry[182];
    const double C225944 = hry[183];
    const double C226866 = hry[184];
    const double C227788 = hry[185];
    const double C228710 = hry[186];
    const double C229632 = hry[187];
    const double C230554 = hry[188];
    const double C231476 = hry[189];
    const double C232398 = hry[190];
    const double C233320 = hry[191];
    const double C234242 = hry[192];
    const double C235164 = hry[193];
    const double C236086 = hry[194];
    const double C237008 = hry[195];
    const double C237930 = hry[196];
    const double C238852 = hry[197];
    const double C239774 = hry[198];
    const double C240696 = hry[199];
    const double C241618 = hry[200];
    const double C242540 = hry[201];
    const double C243462 = hry[202];
    const double C244384 = hry[203];
    const double C245306 = hry[204];
    const double C246228 = hry[205];
    const double C247150 = hry[206];
    const double C248072 = hry[207];
    const double C248994 = hry[208];
    const double C249916 = hry[209];
    const double C250838 = hry[210];
    const double C251760 = hry[211];
    const double C252682 = hry[212];
    const double C253604 = hry[213];
    const double C254526 = hry[214];
    const double C255448 = hry[215];
    const double C256370 = hry[216];
    const double C257292 = hry[217];
    const double C258214 = hry[218];
    const double C259136 = hry[219];
    const double C260058 = hry[220];
    const double C260980 = hry[221];
    const double C261902 = hry[222];
    const double C262824 = hry[223];
    const double C263746 = hry[224];
    const double C264668 = hry[225];
    const double C265590 = hry[226];
    const double C266512 = hry[227];
    const double C267434 = hry[228];
    const double C268356 = hry[229];
    const double C269278 = hry[230];
    const double C270200 = hry[231];
    const double C271122 = hry[232];
    const double C272044 = hry[233];
    const double C272966 = hry[234];
    const double C273888 = hry[235];
    const double C274810 = hry[236];
    const double C275732 = hry[237];
    const double C276654 = hry[238];
    const double C277576 = hry[239];
    const double C278498 = hry[240];
    const double C279420 = hry[241];
    const double C280342 = hry[242];
    const double C281264 = hry[243];
    const double C282186 = hry[244];
    const double C283108 = hry[245];
    const double C284030 = hry[246];
    const double C284952 = hry[247];
    const double C285874 = hry[248];
    const double C286796 = hry[249];
    const double C287718 = hry[250];
    const double C288640 = hry[251];
    const double C289562 = hry[252];
    const double C290484 = hry[253];
    const double C291406 = hry[254];
    const double C292328 = hry[255];
    const double C293250 = hry[256];
    const double C294172 = hry[257];
    const double C295094 = hry[258];
    const double C296016 = hry[259];
    const double C296938 = hry[260];
    const double C297860 = hry[261];
    const double C298782 = hry[262];
    const double C299704 = hry[263];
    const double C300626 = hry[264];
    const double C301548 = hry[265];
    const double C302470 = hry[266];
    const double C303392 = hry[267];
    const double C304314 = hry[268];
    const double C305236 = hry[269];
    const double C306158 = hry[270];
    const double C307080 = hry[271];
    const double C308002 = hry[272];
    const double C308924 = hry[273];
    const double C309846 = hry[274];
    const double C310768 = hry[275];
    const double C311690 = hry[276];
    const double C312612 = hry[277];
    const double C313534 = hry[278];
    const double C314456 = hry[279];
    const double C315378 = hry[280];
    const double C316300 = hry[281];
    const double C317222 = hry[282];
    const double C318144 = hry[283];
    const double C319066 = hry[284];
    const double C319988 = hry[285];
    const double C320910 = hry[286];
    const double C321832 = hry[287];
    const double C322754 = hry[288];
    const double C323676 = hry[289];
    const double C324598 = hry[290];
    const double C325520 = hry[291];
    const double C326442 = hry[292];
    const double C327364 = hry[293];
    const double C328286 = hry[294];
    const double C329208 = hry[295];
    const double C330130 = hry[296];
    const double C331052 = hry[297];
    const double C331974 = hry[298];
    const double C332896 = hry[299];
    const double C333818 = hry[300];
    const double C334740 = hry[301];
    const double C335662 = hry[302];
    const double C336584 = hry[303];
    const double C337506 = hry[304];
    const double C338428 = hry[305];
    const double C339350 = hry[306];
    const double C340272 = hry[307];
    const double C341194 = hry[308];
    const double C342116 = hry[309];
    const double C343038 = hry[310];
    const double C343960 = hry[311];
    const double C344882 = hry[312];
    const double C345804 = hry[313];
    const double C346726 = hry[314];
    const double C347648 = hry[315];
    const double C348570 = hry[316];
    const double C349492 = hry[317];
    const double C350414 = hry[318];
    const double C351336 = hry[319];
    const double C352258 = hry[320];
    const double C353180 = hry[321];
    const double C354102 = hry[322];
    const double C355024 = hry[323];
    const double C57525 = hrz[0];
    const double C58447 = hrz[1];
    const double C59369 = hrz[2];
    const double C60291 = hrz[3];
    const double C61213 = hrz[4];
    const double C62135 = hrz[5];
    const double C63057 = hrz[6];
    const double C63979 = hrz[7];
    const double C64901 = hrz[8];
    const double C65823 = hrz[9];
    const double C66745 = hrz[10];
    const double C67667 = hrz[11];
    const double C68589 = hrz[12];
    const double C69511 = hrz[13];
    const double C70433 = hrz[14];
    const double C71355 = hrz[15];
    const double C72277 = hrz[16];
    const double C73199 = hrz[17];
    const double C74121 = hrz[18];
    const double C75043 = hrz[19];
    const double C75965 = hrz[20];
    const double C76887 = hrz[21];
    const double C77809 = hrz[22];
    const double C78731 = hrz[23];
    const double C79653 = hrz[24];
    const double C80575 = hrz[25];
    const double C81497 = hrz[26];
    const double C82419 = hrz[27];
    const double C83341 = hrz[28];
    const double C84263 = hrz[29];
    const double C85185 = hrz[30];
    const double C86107 = hrz[31];
    const double C87029 = hrz[32];
    const double C87951 = hrz[33];
    const double C88873 = hrz[34];
    const double C89795 = hrz[35];
    const double C90717 = hrz[36];
    const double C91639 = hrz[37];
    const double C92561 = hrz[38];
    const double C93483 = hrz[39];
    const double C94405 = hrz[40];
    const double C95327 = hrz[41];
    const double C96249 = hrz[42];
    const double C97171 = hrz[43];
    const double C98093 = hrz[44];
    const double C99015 = hrz[45];
    const double C99937 = hrz[46];
    const double C100859 = hrz[47];
    const double C101781 = hrz[48];
    const double C102703 = hrz[49];
    const double C103625 = hrz[50];
    const double C104547 = hrz[51];
    const double C105469 = hrz[52];
    const double C106391 = hrz[53];
    const double C107313 = hrz[54];
    const double C108235 = hrz[55];
    const double C109157 = hrz[56];
    const double C110079 = hrz[57];
    const double C111001 = hrz[58];
    const double C111923 = hrz[59];
    const double C112845 = hrz[60];
    const double C113767 = hrz[61];
    const double C114689 = hrz[62];
    const double C115611 = hrz[63];
    const double C116533 = hrz[64];
    const double C117455 = hrz[65];
    const double C118377 = hrz[66];
    const double C119299 = hrz[67];
    const double C120221 = hrz[68];
    const double C121143 = hrz[69];
    const double C122065 = hrz[70];
    const double C122987 = hrz[71];
    const double C123909 = hrz[72];
    const double C124831 = hrz[73];
    const double C125753 = hrz[74];
    const double C126675 = hrz[75];
    const double C127597 = hrz[76];
    const double C128519 = hrz[77];
    const double C129441 = hrz[78];
    const double C130363 = hrz[79];
    const double C131285 = hrz[80];
    const double C132207 = hrz[81];
    const double C133129 = hrz[82];
    const double C134051 = hrz[83];
    const double C134973 = hrz[84];
    const double C135895 = hrz[85];
    const double C136817 = hrz[86];
    const double C137739 = hrz[87];
    const double C138661 = hrz[88];
    const double C139583 = hrz[89];
    const double C140505 = hrz[90];
    const double C141427 = hrz[91];
    const double C142349 = hrz[92];
    const double C143271 = hrz[93];
    const double C144193 = hrz[94];
    const double C145115 = hrz[95];
    const double C146037 = hrz[96];
    const double C146959 = hrz[97];
    const double C147881 = hrz[98];
    const double C148803 = hrz[99];
    const double C149725 = hrz[100];
    const double C150647 = hrz[101];
    const double C151569 = hrz[102];
    const double C152491 = hrz[103];
    const double C153413 = hrz[104];
    const double C154335 = hrz[105];
    const double C155257 = hrz[106];
    const double C156179 = hrz[107];
    const double C157101 = hrz[108];
    const double C158023 = hrz[109];
    const double C158945 = hrz[110];
    const double C159867 = hrz[111];
    const double C160789 = hrz[112];
    const double C161711 = hrz[113];
    const double C162633 = hrz[114];
    const double C163555 = hrz[115];
    const double C164477 = hrz[116];
    const double C165399 = hrz[117];
    const double C166321 = hrz[118];
    const double C167243 = hrz[119];
    const double C168165 = hrz[120];
    const double C169087 = hrz[121];
    const double C170009 = hrz[122];
    const double C170931 = hrz[123];
    const double C171853 = hrz[124];
    const double C172775 = hrz[125];
    const double C173697 = hrz[126];
    const double C174619 = hrz[127];
    const double C175541 = hrz[128];
    const double C176463 = hrz[129];
    const double C177385 = hrz[130];
    const double C178307 = hrz[131];
    const double C179229 = hrz[132];
    const double C180151 = hrz[133];
    const double C181073 = hrz[134];
    const double C181995 = hrz[135];
    const double C182917 = hrz[136];
    const double C183839 = hrz[137];
    const double C184761 = hrz[138];
    const double C185683 = hrz[139];
    const double C186605 = hrz[140];
    const double C187527 = hrz[141];
    const double C188449 = hrz[142];
    const double C189371 = hrz[143];
    const double C190293 = hrz[144];
    const double C191215 = hrz[145];
    const double C192137 = hrz[146];
    const double C193059 = hrz[147];
    const double C193981 = hrz[148];
    const double C194903 = hrz[149];
    const double C195825 = hrz[150];
    const double C196747 = hrz[151];
    const double C197669 = hrz[152];
    const double C198591 = hrz[153];
    const double C199513 = hrz[154];
    const double C200435 = hrz[155];
    const double C201357 = hrz[156];
    const double C202279 = hrz[157];
    const double C203201 = hrz[158];
    const double C204123 = hrz[159];
    const double C205045 = hrz[160];
    const double C205967 = hrz[161];
    const double C206889 = hrz[162];
    const double C207811 = hrz[163];
    const double C208733 = hrz[164];
    const double C209655 = hrz[165];
    const double C210577 = hrz[166];
    const double C211499 = hrz[167];
    const double C212421 = hrz[168];
    const double C213343 = hrz[169];
    const double C214265 = hrz[170];
    const double C215187 = hrz[171];
    const double C216109 = hrz[172];
    const double C217031 = hrz[173];
    const double C217953 = hrz[174];
    const double C218875 = hrz[175];
    const double C219797 = hrz[176];
    const double C220719 = hrz[177];
    const double C221641 = hrz[178];
    const double C222563 = hrz[179];
    const double C223485 = hrz[180];
    const double C224407 = hrz[181];
    const double C225329 = hrz[182];
    const double C226251 = hrz[183];
    const double C227173 = hrz[184];
    const double C228095 = hrz[185];
    const double C229017 = hrz[186];
    const double C229939 = hrz[187];
    const double C230861 = hrz[188];
    const double C231783 = hrz[189];
    const double C232705 = hrz[190];
    const double C233627 = hrz[191];
    const double C234549 = hrz[192];
    const double C235471 = hrz[193];
    const double C236393 = hrz[194];
    const double C237315 = hrz[195];
    const double C238237 = hrz[196];
    const double C239159 = hrz[197];
    const double C240081 = hrz[198];
    const double C241003 = hrz[199];
    const double C241925 = hrz[200];
    const double C242847 = hrz[201];
    const double C243769 = hrz[202];
    const double C244691 = hrz[203];
    const double C245613 = hrz[204];
    const double C246535 = hrz[205];
    const double C247457 = hrz[206];
    const double C248379 = hrz[207];
    const double C249301 = hrz[208];
    const double C250223 = hrz[209];
    const double C251145 = hrz[210];
    const double C252067 = hrz[211];
    const double C252989 = hrz[212];
    const double C253911 = hrz[213];
    const double C254833 = hrz[214];
    const double C255755 = hrz[215];
    const double C256677 = hrz[216];
    const double C257599 = hrz[217];
    const double C258521 = hrz[218];
    const double C259443 = hrz[219];
    const double C260365 = hrz[220];
    const double C261287 = hrz[221];
    const double C262209 = hrz[222];
    const double C263131 = hrz[223];
    const double C264053 = hrz[224];
    const double C264975 = hrz[225];
    const double C265897 = hrz[226];
    const double C266819 = hrz[227];
    const double C267741 = hrz[228];
    const double C268663 = hrz[229];
    const double C269585 = hrz[230];
    const double C270507 = hrz[231];
    const double C271429 = hrz[232];
    const double C272351 = hrz[233];
    const double C273273 = hrz[234];
    const double C274195 = hrz[235];
    const double C275117 = hrz[236];
    const double C276039 = hrz[237];
    const double C276961 = hrz[238];
    const double C277883 = hrz[239];
    const double C278805 = hrz[240];
    const double C279727 = hrz[241];
    const double C280649 = hrz[242];
    const double C281571 = hrz[243];
    const double C282493 = hrz[244];
    const double C283415 = hrz[245];
    const double C284337 = hrz[246];
    const double C285259 = hrz[247];
    const double C286181 = hrz[248];
    const double C287103 = hrz[249];
    const double C288025 = hrz[250];
    const double C288947 = hrz[251];
    const double C289869 = hrz[252];
    const double C290791 = hrz[253];
    const double C291713 = hrz[254];
    const double C292635 = hrz[255];
    const double C293557 = hrz[256];
    const double C294479 = hrz[257];
    const double C295401 = hrz[258];
    const double C296323 = hrz[259];
    const double C297245 = hrz[260];
    const double C298167 = hrz[261];
    const double C299089 = hrz[262];
    const double C300011 = hrz[263];
    const double C300933 = hrz[264];
    const double C301855 = hrz[265];
    const double C302777 = hrz[266];
    const double C303699 = hrz[267];
    const double C304621 = hrz[268];
    const double C305543 = hrz[269];
    const double C306465 = hrz[270];
    const double C307387 = hrz[271];
    const double C308309 = hrz[272];
    const double C309231 = hrz[273];
    const double C310153 = hrz[274];
    const double C311075 = hrz[275];
    const double C311997 = hrz[276];
    const double C312919 = hrz[277];
    const double C313841 = hrz[278];
    const double C314763 = hrz[279];
    const double C315685 = hrz[280];
    const double C316607 = hrz[281];
    const double C317529 = hrz[282];
    const double C318451 = hrz[283];
    const double C319373 = hrz[284];
    const double C320295 = hrz[285];
    const double C321217 = hrz[286];
    const double C322139 = hrz[287];
    const double C323061 = hrz[288];
    const double C323983 = hrz[289];
    const double C324905 = hrz[290];
    const double C325827 = hrz[291];
    const double C326749 = hrz[292];
    const double C327671 = hrz[293];
    const double C328593 = hrz[294];
    const double C329515 = hrz[295];
    const double C330437 = hrz[296];
    const double C331359 = hrz[297];
    const double C332281 = hrz[298];
    const double C333203 = hrz[299];
    const double C334125 = hrz[300];
    const double C335047 = hrz[301];
    const double C335969 = hrz[302];
    const double C336891 = hrz[303];
    const double C337813 = hrz[304];
    const double C338735 = hrz[305];
    const double C339657 = hrz[306];
    const double C340579 = hrz[307];
    const double C341501 = hrz[308];
    const double C342423 = hrz[309];
    const double C343345 = hrz[310];
    const double C344267 = hrz[311];
    const double C345189 = hrz[312];
    const double C346111 = hrz[313];
    const double C347033 = hrz[314];
    const double C347955 = hrz[315];
    const double C348877 = hrz[316];
    const double C349799 = hrz[317];
    const double C350721 = hrz[318];
    const double C351643 = hrz[319];
    const double C352565 = hrz[320];
    const double C353487 = hrz[321];
    const double C354409 = hrz[322];
    const double C355331 = hrz[323];
    gx[0] += std::sqrt(9.) * C214573;
    gy[0] += std::sqrt(9.) * C214880;
    gz[0] += std::sqrt(9.) * C215187;
    gx[1] += std::sqrt(9.) * C215495;
    gy[1] += std::sqrt(9.) * C215802;
    gz[1] += std::sqrt(9.) * C216109;
    gx[2] += std::sqrt(9.) * C216417;
    gy[2] += std::sqrt(9.) * C216724;
    gz[2] += std::sqrt(9.) * C217031;
    gx[3] += std::sqrt(9.) * C220105;
    gy[3] += std::sqrt(9.) * C220412;
    gz[3] += std::sqrt(9.) * C220719;
    gx[4] += std::sqrt(9.) * C221027;
    gy[4] += std::sqrt(9.) * C221334;
    gz[4] += std::sqrt(9.) * C221641;
    gx[5] += std::sqrt(9.) * C221949;
    gy[5] += std::sqrt(9.) * C222256;
    gz[5] += std::sqrt(9.) * C222563;
    gx[6] += std::sqrt(3.0) * C211807 -
             (std::sqrt(0.75) * C209041 + std::sqrt(0.75) * C206275);
    gy[6] += std::sqrt(3.0) * C212114 -
             (std::sqrt(0.75) * C209348 + std::sqrt(0.75) * C206582);
    gz[6] += std::sqrt(3.0) * C212421 -
             (std::sqrt(0.75) * C209655 + std::sqrt(0.75) * C206889);
    gx[7] += std::sqrt(3.0) * C212729 -
             (std::sqrt(0.75) * C209963 + std::sqrt(0.75) * C207197);
    gy[7] += std::sqrt(3.0) * C213036 -
             (std::sqrt(0.75) * C210270 + std::sqrt(0.75) * C207504);
    gz[7] += std::sqrt(3.0) * C213343 -
             (std::sqrt(0.75) * C210577 + std::sqrt(0.75) * C207811);
    gx[8] += std::sqrt(3.0) * C213651 -
             (std::sqrt(0.75) * C210885 + std::sqrt(0.75) * C208119);
    gy[8] += std::sqrt(3.0) * C213958 -
             (std::sqrt(0.75) * C211192 + std::sqrt(0.75) * C208426);
    gz[8] += std::sqrt(3.0) * C214265 -
             (std::sqrt(0.75) * C211499 + std::sqrt(0.75) * C208733);
    gx[9] += std::sqrt(9.) * C217339;
    gy[9] += std::sqrt(9.) * C217646;
    gz[9] += std::sqrt(9.) * C217953;
    gx[10] += std::sqrt(9.) * C218261;
    gy[10] += std::sqrt(9.) * C218568;
    gz[10] += std::sqrt(9.) * C218875;
    gx[11] += std::sqrt(9.) * C219183;
    gy[11] += std::sqrt(9.) * C219490;
    gz[11] += std::sqrt(9.) * C219797;
    gx[12] += std::sqrt(2.25) * C206275 - std::sqrt(2.25) * C209041;
    gy[12] += std::sqrt(2.25) * C206582 - std::sqrt(2.25) * C209348;
    gz[12] += std::sqrt(2.25) * C206889 - std::sqrt(2.25) * C209655;
    gx[13] += std::sqrt(2.25) * C207197 - std::sqrt(2.25) * C209963;
    gy[13] += std::sqrt(2.25) * C207504 - std::sqrt(2.25) * C210270;
    gz[13] += std::sqrt(2.25) * C207811 - std::sqrt(2.25) * C210577;
    gx[14] += std::sqrt(2.25) * C208119 - std::sqrt(2.25) * C210885;
    gy[14] += std::sqrt(2.25) * C208426 - std::sqrt(2.25) * C211192;
    gz[14] += std::sqrt(2.25) * C208733 - std::sqrt(2.25) * C211499;
    gx[15] += std::sqrt(9.) * C231169;
    gy[15] += std::sqrt(9.) * C231476;
    gz[15] += std::sqrt(9.) * C231783;
    gx[16] += std::sqrt(9.) * C232091;
    gy[16] += std::sqrt(9.) * C232398;
    gz[16] += std::sqrt(9.) * C232705;
    gx[17] += std::sqrt(9.) * C233013;
    gy[17] += std::sqrt(9.) * C233320;
    gz[17] += std::sqrt(9.) * C233627;
    gx[18] += std::sqrt(9.) * C236701;
    gy[18] += std::sqrt(9.) * C237008;
    gz[18] += std::sqrt(9.) * C237315;
    gx[19] += std::sqrt(9.) * C237623;
    gy[19] += std::sqrt(9.) * C237930;
    gz[19] += std::sqrt(9.) * C238237;
    gx[20] += std::sqrt(9.) * C238545;
    gy[20] += std::sqrt(9.) * C238852;
    gz[20] += std::sqrt(9.) * C239159;
    gx[21] += std::sqrt(3.0) * C228403 -
              (std::sqrt(0.75) * C225637 + std::sqrt(0.75) * C222871);
    gy[21] += std::sqrt(3.0) * C228710 -
              (std::sqrt(0.75) * C225944 + std::sqrt(0.75) * C223178);
    gz[21] += std::sqrt(3.0) * C229017 -
              (std::sqrt(0.75) * C226251 + std::sqrt(0.75) * C223485);
    gx[22] += std::sqrt(3.0) * C229325 -
              (std::sqrt(0.75) * C226559 + std::sqrt(0.75) * C223793);
    gy[22] += std::sqrt(3.0) * C229632 -
              (std::sqrt(0.75) * C226866 + std::sqrt(0.75) * C224100);
    gz[22] += std::sqrt(3.0) * C229939 -
              (std::sqrt(0.75) * C227173 + std::sqrt(0.75) * C224407);
    gx[23] += std::sqrt(3.0) * C230247 -
              (std::sqrt(0.75) * C227481 + std::sqrt(0.75) * C224715);
    gy[23] += std::sqrt(3.0) * C230554 -
              (std::sqrt(0.75) * C227788 + std::sqrt(0.75) * C225022);
    gz[23] += std::sqrt(3.0) * C230861 -
              (std::sqrt(0.75) * C228095 + std::sqrt(0.75) * C225329);
    gx[24] += std::sqrt(9.) * C233935;
    gy[24] += std::sqrt(9.) * C234242;
    gz[24] += std::sqrt(9.) * C234549;
    gx[25] += std::sqrt(9.) * C234857;
    gy[25] += std::sqrt(9.) * C235164;
    gz[25] += std::sqrt(9.) * C235471;
    gx[26] += std::sqrt(9.) * C235779;
    gy[26] += std::sqrt(9.) * C236086;
    gz[26] += std::sqrt(9.) * C236393;
    gx[27] += std::sqrt(2.25) * C222871 - std::sqrt(2.25) * C225637;
    gy[27] += std::sqrt(2.25) * C223178 - std::sqrt(2.25) * C225944;
    gz[27] += std::sqrt(2.25) * C223485 - std::sqrt(2.25) * C226251;
    gx[28] += std::sqrt(2.25) * C223793 - std::sqrt(2.25) * C226559;
    gy[28] += std::sqrt(2.25) * C224100 - std::sqrt(2.25) * C226866;
    gz[28] += std::sqrt(2.25) * C224407 - std::sqrt(2.25) * C227173;
    gx[29] += std::sqrt(2.25) * C224715 - std::sqrt(2.25) * C227481;
    gy[29] += std::sqrt(2.25) * C225022 - std::sqrt(2.25) * C227788;
    gz[29] += std::sqrt(2.25) * C225329 - std::sqrt(2.25) * C228095;
    gx[30] += std::sqrt(9.) * C247765;
    gy[30] += std::sqrt(9.) * C248072;
    gz[30] += std::sqrt(9.) * C248379;
    gx[31] += std::sqrt(9.) * C248687;
    gy[31] += std::sqrt(9.) * C248994;
    gz[31] += std::sqrt(9.) * C249301;
    gx[32] += std::sqrt(9.) * C249609;
    gy[32] += std::sqrt(9.) * C249916;
    gz[32] += std::sqrt(9.) * C250223;
    gx[33] += std::sqrt(9.) * C253297;
    gy[33] += std::sqrt(9.) * C253604;
    gz[33] += std::sqrt(9.) * C253911;
    gx[34] += std::sqrt(9.) * C254219;
    gy[34] += std::sqrt(9.) * C254526;
    gz[34] += std::sqrt(9.) * C254833;
    gx[35] += std::sqrt(9.) * C255141;
    gy[35] += std::sqrt(9.) * C255448;
    gz[35] += std::sqrt(9.) * C255755;
    gx[36] += std::sqrt(3.0) * C244999 -
              (std::sqrt(0.75) * C242233 + std::sqrt(0.75) * C239467);
    gy[36] += std::sqrt(3.0) * C245306 -
              (std::sqrt(0.75) * C242540 + std::sqrt(0.75) * C239774);
    gz[36] += std::sqrt(3.0) * C245613 -
              (std::sqrt(0.75) * C242847 + std::sqrt(0.75) * C240081);
    gx[37] += std::sqrt(3.0) * C245921 -
              (std::sqrt(0.75) * C243155 + std::sqrt(0.75) * C240389);
    gy[37] += std::sqrt(3.0) * C246228 -
              (std::sqrt(0.75) * C243462 + std::sqrt(0.75) * C240696);
    gz[37] += std::sqrt(3.0) * C246535 -
              (std::sqrt(0.75) * C243769 + std::sqrt(0.75) * C241003);
    gx[38] += std::sqrt(3.0) * C246843 -
              (std::sqrt(0.75) * C244077 + std::sqrt(0.75) * C241311);
    gy[38] += std::sqrt(3.0) * C247150 -
              (std::sqrt(0.75) * C244384 + std::sqrt(0.75) * C241618);
    gz[38] += std::sqrt(3.0) * C247457 -
              (std::sqrt(0.75) * C244691 + std::sqrt(0.75) * C241925);
    gx[39] += std::sqrt(9.) * C250531;
    gy[39] += std::sqrt(9.) * C250838;
    gz[39] += std::sqrt(9.) * C251145;
    gx[40] += std::sqrt(9.) * C251453;
    gy[40] += std::sqrt(9.) * C251760;
    gz[40] += std::sqrt(9.) * C252067;
    gx[41] += std::sqrt(9.) * C252375;
    gy[41] += std::sqrt(9.) * C252682;
    gz[41] += std::sqrt(9.) * C252989;
    gx[42] += std::sqrt(2.25) * C239467 - std::sqrt(2.25) * C242233;
    gy[42] += std::sqrt(2.25) * C239774 - std::sqrt(2.25) * C242540;
    gz[42] += std::sqrt(2.25) * C240081 - std::sqrt(2.25) * C242847;
    gx[43] += std::sqrt(2.25) * C240389 - std::sqrt(2.25) * C243155;
    gy[43] += std::sqrt(2.25) * C240696 - std::sqrt(2.25) * C243462;
    gz[43] += std::sqrt(2.25) * C241003 - std::sqrt(2.25) * C243769;
    gx[44] += std::sqrt(2.25) * C241311 - std::sqrt(2.25) * C244077;
    gy[44] += std::sqrt(2.25) * C241618 - std::sqrt(2.25) * C244384;
    gz[44] += std::sqrt(2.25) * C241925 - std::sqrt(2.25) * C244691;
    gx[45] += std::sqrt(9.) * C314149;
    gy[45] += std::sqrt(9.) * C314456;
    gz[45] += std::sqrt(9.) * C314763;
    gx[46] += std::sqrt(9.) * C315071;
    gy[46] += std::sqrt(9.) * C315378;
    gz[46] += std::sqrt(9.) * C315685;
    gx[47] += std::sqrt(9.) * C315993;
    gy[47] += std::sqrt(9.) * C316300;
    gz[47] += std::sqrt(9.) * C316607;
    gx[48] += std::sqrt(9.) * C319681;
    gy[48] += std::sqrt(9.) * C319988;
    gz[48] += std::sqrt(9.) * C320295;
    gx[49] += std::sqrt(9.) * C320603;
    gy[49] += std::sqrt(9.) * C320910;
    gz[49] += std::sqrt(9.) * C321217;
    gx[50] += std::sqrt(9.) * C321525;
    gy[50] += std::sqrt(9.) * C321832;
    gz[50] += std::sqrt(9.) * C322139;
    gx[51] += std::sqrt(3.0) * C311383 -
              (std::sqrt(0.75) * C308617 + std::sqrt(0.75) * C305851);
    gy[51] += std::sqrt(3.0) * C311690 -
              (std::sqrt(0.75) * C308924 + std::sqrt(0.75) * C306158);
    gz[51] += std::sqrt(3.0) * C311997 -
              (std::sqrt(0.75) * C309231 + std::sqrt(0.75) * C306465);
    gx[52] += std::sqrt(3.0) * C312305 -
              (std::sqrt(0.75) * C309539 + std::sqrt(0.75) * C306773);
    gy[52] += std::sqrt(3.0) * C312612 -
              (std::sqrt(0.75) * C309846 + std::sqrt(0.75) * C307080);
    gz[52] += std::sqrt(3.0) * C312919 -
              (std::sqrt(0.75) * C310153 + std::sqrt(0.75) * C307387);
    gx[53] += std::sqrt(3.0) * C313227 -
              (std::sqrt(0.75) * C310461 + std::sqrt(0.75) * C307695);
    gy[53] += std::sqrt(3.0) * C313534 -
              (std::sqrt(0.75) * C310768 + std::sqrt(0.75) * C308002);
    gz[53] += std::sqrt(3.0) * C313841 -
              (std::sqrt(0.75) * C311075 + std::sqrt(0.75) * C308309);
    gx[54] += std::sqrt(9.) * C316915;
    gy[54] += std::sqrt(9.) * C317222;
    gz[54] += std::sqrt(9.) * C317529;
    gx[55] += std::sqrt(9.) * C317837;
    gy[55] += std::sqrt(9.) * C318144;
    gz[55] += std::sqrt(9.) * C318451;
    gx[56] += std::sqrt(9.) * C318759;
    gy[56] += std::sqrt(9.) * C319066;
    gz[56] += std::sqrt(9.) * C319373;
    gx[57] += std::sqrt(2.25) * C305851 - std::sqrt(2.25) * C308617;
    gy[57] += std::sqrt(2.25) * C306158 - std::sqrt(2.25) * C308924;
    gz[57] += std::sqrt(2.25) * C306465 - std::sqrt(2.25) * C309231;
    gx[58] += std::sqrt(2.25) * C306773 - std::sqrt(2.25) * C309539;
    gy[58] += std::sqrt(2.25) * C307080 - std::sqrt(2.25) * C309846;
    gz[58] += std::sqrt(2.25) * C307387 - std::sqrt(2.25) * C310153;
    gx[59] += std::sqrt(2.25) * C307695 - std::sqrt(2.25) * C310461;
    gy[59] += std::sqrt(2.25) * C308002 - std::sqrt(2.25) * C310768;
    gz[59] += std::sqrt(2.25) * C308309 - std::sqrt(2.25) * C311075;
    gx[60] += std::sqrt(9.) * C330745;
    gy[60] += std::sqrt(9.) * C331052;
    gz[60] += std::sqrt(9.) * C331359;
    gx[61] += std::sqrt(9.) * C331667;
    gy[61] += std::sqrt(9.) * C331974;
    gz[61] += std::sqrt(9.) * C332281;
    gx[62] += std::sqrt(9.) * C332589;
    gy[62] += std::sqrt(9.) * C332896;
    gz[62] += std::sqrt(9.) * C333203;
    gx[63] += std::sqrt(9.) * C336277;
    gy[63] += std::sqrt(9.) * C336584;
    gz[63] += std::sqrt(9.) * C336891;
    gx[64] += std::sqrt(9.) * C337199;
    gy[64] += std::sqrt(9.) * C337506;
    gz[64] += std::sqrt(9.) * C337813;
    gx[65] += std::sqrt(9.) * C338121;
    gy[65] += std::sqrt(9.) * C338428;
    gz[65] += std::sqrt(9.) * C338735;
    gx[66] += std::sqrt(3.0) * C327979 -
              (std::sqrt(0.75) * C325213 + std::sqrt(0.75) * C322447);
    gy[66] += std::sqrt(3.0) * C328286 -
              (std::sqrt(0.75) * C325520 + std::sqrt(0.75) * C322754);
    gz[66] += std::sqrt(3.0) * C328593 -
              (std::sqrt(0.75) * C325827 + std::sqrt(0.75) * C323061);
    gx[67] += std::sqrt(3.0) * C328901 -
              (std::sqrt(0.75) * C326135 + std::sqrt(0.75) * C323369);
    gy[67] += std::sqrt(3.0) * C329208 -
              (std::sqrt(0.75) * C326442 + std::sqrt(0.75) * C323676);
    gz[67] += std::sqrt(3.0) * C329515 -
              (std::sqrt(0.75) * C326749 + std::sqrt(0.75) * C323983);
    gx[68] += std::sqrt(3.0) * C329823 -
              (std::sqrt(0.75) * C327057 + std::sqrt(0.75) * C324291);
    gy[68] += std::sqrt(3.0) * C330130 -
              (std::sqrt(0.75) * C327364 + std::sqrt(0.75) * C324598);
    gz[68] += std::sqrt(3.0) * C330437 -
              (std::sqrt(0.75) * C327671 + std::sqrt(0.75) * C324905);
    gx[69] += std::sqrt(9.) * C333511;
    gy[69] += std::sqrt(9.) * C333818;
    gz[69] += std::sqrt(9.) * C334125;
    gx[70] += std::sqrt(9.) * C334433;
    gy[70] += std::sqrt(9.) * C334740;
    gz[70] += std::sqrt(9.) * C335047;
    gx[71] += std::sqrt(9.) * C335355;
    gy[71] += std::sqrt(9.) * C335662;
    gz[71] += std::sqrt(9.) * C335969;
    gx[72] += std::sqrt(2.25) * C322447 - std::sqrt(2.25) * C325213;
    gy[72] += std::sqrt(2.25) * C322754 - std::sqrt(2.25) * C325520;
    gz[72] += std::sqrt(2.25) * C323061 - std::sqrt(2.25) * C325827;
    gx[73] += std::sqrt(2.25) * C323369 - std::sqrt(2.25) * C326135;
    gy[73] += std::sqrt(2.25) * C323676 - std::sqrt(2.25) * C326442;
    gz[73] += std::sqrt(2.25) * C323983 - std::sqrt(2.25) * C326749;
    gx[74] += std::sqrt(2.25) * C324291 - std::sqrt(2.25) * C327057;
    gy[74] += std::sqrt(2.25) * C324598 - std::sqrt(2.25) * C327364;
    gz[74] += std::sqrt(2.25) * C324905 - std::sqrt(2.25) * C327671;
    gx[75] += std::sqrt(9.) * C347341;
    gy[75] += std::sqrt(9.) * C347648;
    gz[75] += std::sqrt(9.) * C347955;
    gx[76] += std::sqrt(9.) * C348263;
    gy[76] += std::sqrt(9.) * C348570;
    gz[76] += std::sqrt(9.) * C348877;
    gx[77] += std::sqrt(9.) * C349185;
    gy[77] += std::sqrt(9.) * C349492;
    gz[77] += std::sqrt(9.) * C349799;
    gx[78] += std::sqrt(9.) * C352873;
    gy[78] += std::sqrt(9.) * C353180;
    gz[78] += std::sqrt(9.) * C353487;
    gx[79] += std::sqrt(9.) * C353795;
    gy[79] += std::sqrt(9.) * C354102;
    gz[79] += std::sqrt(9.) * C354409;
    gx[80] += std::sqrt(9.) * C354717;
    gy[80] += std::sqrt(9.) * C355024;
    gz[80] += std::sqrt(9.) * C355331;
    gx[81] += std::sqrt(3.0) * C344575 -
              (std::sqrt(0.75) * C341809 + std::sqrt(0.75) * C339043);
    gy[81] += std::sqrt(3.0) * C344882 -
              (std::sqrt(0.75) * C342116 + std::sqrt(0.75) * C339350);
    gz[81] += std::sqrt(3.0) * C345189 -
              (std::sqrt(0.75) * C342423 + std::sqrt(0.75) * C339657);
    gx[82] += std::sqrt(3.0) * C345497 -
              (std::sqrt(0.75) * C342731 + std::sqrt(0.75) * C339965);
    gy[82] += std::sqrt(3.0) * C345804 -
              (std::sqrt(0.75) * C343038 + std::sqrt(0.75) * C340272);
    gz[82] += std::sqrt(3.0) * C346111 -
              (std::sqrt(0.75) * C343345 + std::sqrt(0.75) * C340579);
    gx[83] += std::sqrt(3.0) * C346419 -
              (std::sqrt(0.75) * C343653 + std::sqrt(0.75) * C340887);
    gy[83] += std::sqrt(3.0) * C346726 -
              (std::sqrt(0.75) * C343960 + std::sqrt(0.75) * C341194);
    gz[83] += std::sqrt(3.0) * C347033 -
              (std::sqrt(0.75) * C344267 + std::sqrt(0.75) * C341501);
    gx[84] += std::sqrt(9.) * C350107;
    gy[84] += std::sqrt(9.) * C350414;
    gz[84] += std::sqrt(9.) * C350721;
    gx[85] += std::sqrt(9.) * C351029;
    gy[85] += std::sqrt(9.) * C351336;
    gz[85] += std::sqrt(9.) * C351643;
    gx[86] += std::sqrt(9.) * C351951;
    gy[86] += std::sqrt(9.) * C352258;
    gz[86] += std::sqrt(9.) * C352565;
    gx[87] += std::sqrt(2.25) * C339043 - std::sqrt(2.25) * C341809;
    gy[87] += std::sqrt(2.25) * C339350 - std::sqrt(2.25) * C342116;
    gz[87] += std::sqrt(2.25) * C339657 - std::sqrt(2.25) * C342423;
    gx[88] += std::sqrt(2.25) * C339965 - std::sqrt(2.25) * C342731;
    gy[88] += std::sqrt(2.25) * C340272 - std::sqrt(2.25) * C343038;
    gz[88] += std::sqrt(2.25) * C340579 - std::sqrt(2.25) * C343345;
    gx[89] += std::sqrt(2.25) * C340887 - std::sqrt(2.25) * C343653;
    gy[89] += std::sqrt(2.25) * C341194 - std::sqrt(2.25) * C343960;
    gz[89] += std::sqrt(2.25) * C341501 - std::sqrt(2.25) * C344267;
    gx[90] += std::sqrt(3.0) * C164785 -
              (std::sqrt(0.75) * C114997 + std::sqrt(0.75) * C65209);
    gy[90] += std::sqrt(3.0) * C165092 -
              (std::sqrt(0.75) * C115304 + std::sqrt(0.75) * C65516);
    gz[90] += std::sqrt(3.0) * C165399 -
              (std::sqrt(0.75) * C115611 + std::sqrt(0.75) * C65823);
    gx[91] += std::sqrt(3.0) * C165707 -
              (std::sqrt(0.75) * C115919 + std::sqrt(0.75) * C66131);
    gy[91] += std::sqrt(3.0) * C166014 -
              (std::sqrt(0.75) * C116226 + std::sqrt(0.75) * C66438);
    gz[91] += std::sqrt(3.0) * C166321 -
              (std::sqrt(0.75) * C116533 + std::sqrt(0.75) * C66745);
    gx[92] += std::sqrt(3.0) * C166629 -
              (std::sqrt(0.75) * C116841 + std::sqrt(0.75) * C67053);
    gy[92] += std::sqrt(3.0) * C166936 -
              (std::sqrt(0.75) * C117148 + std::sqrt(0.75) * C67360);
    gz[92] += std::sqrt(3.0) * C167243 -
              (std::sqrt(0.75) * C117455 + std::sqrt(0.75) * C67667);
    gx[93] += std::sqrt(3.0) * C170317 -
              (std::sqrt(0.75) * C120529 + std::sqrt(0.75) * C70741);
    gy[93] += std::sqrt(3.0) * C170624 -
              (std::sqrt(0.75) * C120836 + std::sqrt(0.75) * C71048);
    gz[93] += std::sqrt(3.0) * C170931 -
              (std::sqrt(0.75) * C121143 + std::sqrt(0.75) * C71355);
    gx[94] += std::sqrt(3.0) * C171239 -
              (std::sqrt(0.75) * C121451 + std::sqrt(0.75) * C71663);
    gy[94] += std::sqrt(3.0) * C171546 -
              (std::sqrt(0.75) * C121758 + std::sqrt(0.75) * C71970);
    gz[94] += std::sqrt(3.0) * C171853 -
              (std::sqrt(0.75) * C122065 + std::sqrt(0.75) * C72277);
    gx[95] += std::sqrt(3.0) * C172161 -
              (std::sqrt(0.75) * C122373 + std::sqrt(0.75) * C72585);
    gy[95] += std::sqrt(3.0) * C172468 -
              (std::sqrt(0.75) * C122680 + std::sqrt(0.75) * C72892);
    gz[95] += std::sqrt(3.0) * C172775 -
              (std::sqrt(0.75) * C122987 + std::sqrt(0.75) * C73199);
    gx[96] += 0.25 * C56912 + 0.25 * C59677 - 0.5 * C62443 + 0.25 * C106699 +
              0.25 * C109465 - 0.5 * C112231 - 0.5 * C156487 - 0.5 * C159253 +
              C162019;
    gy[96] += 0.25 * C57218 + 0.25 * C59984 - 0.5 * C62750 + 0.25 * C107006 +
              0.25 * C109772 - 0.5 * C112538 - 0.5 * C156794 - 0.5 * C159560 +
              C162326;
    gz[96] += 0.25 * C57525 + 0.25 * C60291 - 0.5 * C63057 + 0.25 * C107313 +
              0.25 * C110079 - 0.5 * C112845 - 0.5 * C157101 - 0.5 * C159867 +
              C162633;
    gx[97] += 0.25 * C57833 + 0.25 * C60599 - 0.5 * C63365 + 0.25 * C107621 +
              0.25 * C110387 - 0.5 * C113153 - 0.5 * C157409 - 0.5 * C160175 +
              C162941;
    gy[97] += 0.25 * C58140 + 0.25 * C60906 - 0.5 * C63672 + 0.25 * C107928 +
              0.25 * C110694 - 0.5 * C113460 - 0.5 * C157716 - 0.5 * C160482 +
              C163248;
    gz[97] += 0.25 * C58447 + 0.25 * C61213 - 0.5 * C63979 + 0.25 * C108235 +
              0.25 * C111001 - 0.5 * C113767 - 0.5 * C158023 - 0.5 * C160789 +
              C163555;
    gx[98] += 0.25 * C58755 + 0.25 * C61521 - 0.5 * C64287 + 0.25 * C108543 +
              0.25 * C111309 - 0.5 * C114075 - 0.5 * C158331 - 0.5 * C161097 +
              C163863;
    gy[98] += 0.25 * C59062 + 0.25 * C61828 - 0.5 * C64594 + 0.25 * C108850 +
              0.25 * C111616 - 0.5 * C114382 - 0.5 * C158638 - 0.5 * C161404 +
              C164170;
    gz[98] += 0.25 * C59369 + 0.25 * C62135 - 0.5 * C64901 + 0.25 * C109157 +
              0.25 * C111923 - 0.5 * C114689 - 0.5 * C158945 - 0.5 * C161711 +
              C164477;
    gx[99] += std::sqrt(3.0) * C167551 -
              (std::sqrt(0.75) * C117763 + std::sqrt(0.75) * C67975);
    gy[99] += std::sqrt(3.0) * C167858 -
              (std::sqrt(0.75) * C118070 + std::sqrt(0.75) * C68282);
    gz[99] += std::sqrt(3.0) * C168165 -
              (std::sqrt(0.75) * C118377 + std::sqrt(0.75) * C68589);
    gx[100] += std::sqrt(3.0) * C168473 -
               (std::sqrt(0.75) * C118685 + std::sqrt(0.75) * C68897);
    gy[100] += std::sqrt(3.0) * C168780 -
               (std::sqrt(0.75) * C118992 + std::sqrt(0.75) * C69204);
    gz[100] += std::sqrt(3.0) * C169087 -
               (std::sqrt(0.75) * C119299 + std::sqrt(0.75) * C69511);
    gx[101] += std::sqrt(3.0) * C169395 -
               (std::sqrt(0.75) * C119607 + std::sqrt(0.75) * C69819);
    gy[101] += std::sqrt(3.0) * C169702 -
               (std::sqrt(0.75) * C119914 + std::sqrt(0.75) * C70126);
    gz[101] += std::sqrt(3.0) * C170009 -
               (std::sqrt(0.75) * C120221 + std::sqrt(0.75) * C70433);
    gx[102] += std::sqrt(0.1875) * C59677 - std::sqrt(0.1875) * C56912 -
               std::sqrt(0.1875) * C106699 + std::sqrt(0.1875) * C109465 +
               std::sqrt(0.75) * C156487 - std::sqrt(0.75) * C159253;
    gy[102] += std::sqrt(0.1875) * C59984 - std::sqrt(0.1875) * C57218 -
               std::sqrt(0.1875) * C107006 + std::sqrt(0.1875) * C109772 +
               std::sqrt(0.75) * C156794 - std::sqrt(0.75) * C159560;
    gz[102] += std::sqrt(0.1875) * C60291 - std::sqrt(0.1875) * C57525 -
               std::sqrt(0.1875) * C107313 + std::sqrt(0.1875) * C110079 +
               std::sqrt(0.75) * C157101 - std::sqrt(0.75) * C159867;
    gx[103] += std::sqrt(0.1875) * C60599 - std::sqrt(0.1875) * C57833 -
               std::sqrt(0.1875) * C107621 + std::sqrt(0.1875) * C110387 +
               std::sqrt(0.75) * C157409 - std::sqrt(0.75) * C160175;
    gy[103] += std::sqrt(0.1875) * C60906 - std::sqrt(0.1875) * C58140 -
               std::sqrt(0.1875) * C107928 + std::sqrt(0.1875) * C110694 +
               std::sqrt(0.75) * C157716 - std::sqrt(0.75) * C160482;
    gz[103] += std::sqrt(0.1875) * C61213 - std::sqrt(0.1875) * C58447 -
               std::sqrt(0.1875) * C108235 + std::sqrt(0.1875) * C111001 +
               std::sqrt(0.75) * C158023 - std::sqrt(0.75) * C160789;
    gx[104] += std::sqrt(0.1875) * C61521 - std::sqrt(0.1875) * C58755 -
               std::sqrt(0.1875) * C108543 + std::sqrt(0.1875) * C111309 +
               std::sqrt(0.75) * C158331 - std::sqrt(0.75) * C161097;
    gy[104] += std::sqrt(0.1875) * C61828 - std::sqrt(0.1875) * C59062 -
               std::sqrt(0.1875) * C108850 + std::sqrt(0.1875) * C111616 +
               std::sqrt(0.75) * C158638 - std::sqrt(0.75) * C161404;
    gz[104] += std::sqrt(0.1875) * C62135 - std::sqrt(0.1875) * C59369 -
               std::sqrt(0.1875) * C109157 + std::sqrt(0.1875) * C111923 +
               std::sqrt(0.75) * C158945 - std::sqrt(0.75) * C161711;
    gx[105] += std::sqrt(3.0) * C181381 -
               (std::sqrt(0.75) * C131593 + std::sqrt(0.75) * C81805);
    gy[105] += std::sqrt(3.0) * C181688 -
               (std::sqrt(0.75) * C131900 + std::sqrt(0.75) * C82112);
    gz[105] += std::sqrt(3.0) * C181995 -
               (std::sqrt(0.75) * C132207 + std::sqrt(0.75) * C82419);
    gx[106] += std::sqrt(3.0) * C182303 -
               (std::sqrt(0.75) * C132515 + std::sqrt(0.75) * C82727);
    gy[106] += std::sqrt(3.0) * C182610 -
               (std::sqrt(0.75) * C132822 + std::sqrt(0.75) * C83034);
    gz[106] += std::sqrt(3.0) * C182917 -
               (std::sqrt(0.75) * C133129 + std::sqrt(0.75) * C83341);
    gx[107] += std::sqrt(3.0) * C183225 -
               (std::sqrt(0.75) * C133437 + std::sqrt(0.75) * C83649);
    gy[107] += std::sqrt(3.0) * C183532 -
               (std::sqrt(0.75) * C133744 + std::sqrt(0.75) * C83956);
    gz[107] += std::sqrt(3.0) * C183839 -
               (std::sqrt(0.75) * C134051 + std::sqrt(0.75) * C84263);
    gx[108] += std::sqrt(3.0) * C186913 -
               (std::sqrt(0.75) * C137125 + std::sqrt(0.75) * C87337);
    gy[108] += std::sqrt(3.0) * C187220 -
               (std::sqrt(0.75) * C137432 + std::sqrt(0.75) * C87644);
    gz[108] += std::sqrt(3.0) * C187527 -
               (std::sqrt(0.75) * C137739 + std::sqrt(0.75) * C87951);
    gx[109] += std::sqrt(3.0) * C187835 -
               (std::sqrt(0.75) * C138047 + std::sqrt(0.75) * C88259);
    gy[109] += std::sqrt(3.0) * C188142 -
               (std::sqrt(0.75) * C138354 + std::sqrt(0.75) * C88566);
    gz[109] += std::sqrt(3.0) * C188449 -
               (std::sqrt(0.75) * C138661 + std::sqrt(0.75) * C88873);
    gx[110] += std::sqrt(3.0) * C188757 -
               (std::sqrt(0.75) * C138969 + std::sqrt(0.75) * C89181);
    gy[110] += std::sqrt(3.0) * C189064 -
               (std::sqrt(0.75) * C139276 + std::sqrt(0.75) * C89488);
    gz[110] += std::sqrt(3.0) * C189371 -
               (std::sqrt(0.75) * C139583 + std::sqrt(0.75) * C89795);
    gx[111] += 0.25 * C73507 + 0.25 * C76273 - 0.5 * C79039 + 0.25 * C123295 +
               0.25 * C126061 - 0.5 * C128827 - 0.5 * C173083 - 0.5 * C175849 +
               C178615;
    gy[111] += 0.25 * C73814 + 0.25 * C76580 - 0.5 * C79346 + 0.25 * C123602 +
               0.25 * C126368 - 0.5 * C129134 - 0.5 * C173390 - 0.5 * C176156 +
               C178922;
    gz[111] += 0.25 * C74121 + 0.25 * C76887 - 0.5 * C79653 + 0.25 * C123909 +
               0.25 * C126675 - 0.5 * C129441 - 0.5 * C173697 - 0.5 * C176463 +
               C179229;
    gx[112] += 0.25 * C74429 + 0.25 * C77195 - 0.5 * C79961 + 0.25 * C124217 +
               0.25 * C126983 - 0.5 * C129749 - 0.5 * C174005 - 0.5 * C176771 +
               C179537;
    gy[112] += 0.25 * C74736 + 0.25 * C77502 - 0.5 * C80268 + 0.25 * C124524 +
               0.25 * C127290 - 0.5 * C130056 - 0.5 * C174312 - 0.5 * C177078 +
               C179844;
    gz[112] += 0.25 * C75043 + 0.25 * C77809 - 0.5 * C80575 + 0.25 * C124831 +
               0.25 * C127597 - 0.5 * C130363 - 0.5 * C174619 - 0.5 * C177385 +
               C180151;
    gx[113] += 0.25 * C75351 + 0.25 * C78117 - 0.5 * C80883 + 0.25 * C125139 +
               0.25 * C127905 - 0.5 * C130671 - 0.5 * C174927 - 0.5 * C177693 +
               C180459;
    gy[113] += 0.25 * C75658 + 0.25 * C78424 - 0.5 * C81190 + 0.25 * C125446 +
               0.25 * C128212 - 0.5 * C130978 - 0.5 * C175234 - 0.5 * C178000 +
               C180766;
    gz[113] += 0.25 * C75965 + 0.25 * C78731 - 0.5 * C81497 + 0.25 * C125753 +
               0.25 * C128519 - 0.5 * C131285 - 0.5 * C175541 - 0.5 * C178307 +
               C181073;
    gx[114] += std::sqrt(3.0) * C184147 -
               (std::sqrt(0.75) * C134359 + std::sqrt(0.75) * C84571);
    gy[114] += std::sqrt(3.0) * C184454 -
               (std::sqrt(0.75) * C134666 + std::sqrt(0.75) * C84878);
    gz[114] += std::sqrt(3.0) * C184761 -
               (std::sqrt(0.75) * C134973 + std::sqrt(0.75) * C85185);
    gx[115] += std::sqrt(3.0) * C185069 -
               (std::sqrt(0.75) * C135281 + std::sqrt(0.75) * C85493);
    gy[115] += std::sqrt(3.0) * C185376 -
               (std::sqrt(0.75) * C135588 + std::sqrt(0.75) * C85800);
    gz[115] += std::sqrt(3.0) * C185683 -
               (std::sqrt(0.75) * C135895 + std::sqrt(0.75) * C86107);
    gx[116] += std::sqrt(3.0) * C185991 -
               (std::sqrt(0.75) * C136203 + std::sqrt(0.75) * C86415);
    gy[116] += std::sqrt(3.0) * C186298 -
               (std::sqrt(0.75) * C136510 + std::sqrt(0.75) * C86722);
    gz[116] += std::sqrt(3.0) * C186605 -
               (std::sqrt(0.75) * C136817 + std::sqrt(0.75) * C87029);
    gx[117] += std::sqrt(0.1875) * C76273 - std::sqrt(0.1875) * C73507 -
               std::sqrt(0.1875) * C123295 + std::sqrt(0.1875) * C126061 +
               std::sqrt(0.75) * C173083 - std::sqrt(0.75) * C175849;
    gy[117] += std::sqrt(0.1875) * C76580 - std::sqrt(0.1875) * C73814 -
               std::sqrt(0.1875) * C123602 + std::sqrt(0.1875) * C126368 +
               std::sqrt(0.75) * C173390 - std::sqrt(0.75) * C176156;
    gz[117] += std::sqrt(0.1875) * C76887 - std::sqrt(0.1875) * C74121 -
               std::sqrt(0.1875) * C123909 + std::sqrt(0.1875) * C126675 +
               std::sqrt(0.75) * C173697 - std::sqrt(0.75) * C176463;
    gx[118] += std::sqrt(0.1875) * C77195 - std::sqrt(0.1875) * C74429 -
               std::sqrt(0.1875) * C124217 + std::sqrt(0.1875) * C126983 +
               std::sqrt(0.75) * C174005 - std::sqrt(0.75) * C176771;
    gy[118] += std::sqrt(0.1875) * C77502 - std::sqrt(0.1875) * C74736 -
               std::sqrt(0.1875) * C124524 + std::sqrt(0.1875) * C127290 +
               std::sqrt(0.75) * C174312 - std::sqrt(0.75) * C177078;
    gz[118] += std::sqrt(0.1875) * C77809 - std::sqrt(0.1875) * C75043 -
               std::sqrt(0.1875) * C124831 + std::sqrt(0.1875) * C127597 +
               std::sqrt(0.75) * C174619 - std::sqrt(0.75) * C177385;
    gx[119] += std::sqrt(0.1875) * C78117 - std::sqrt(0.1875) * C75351 -
               std::sqrt(0.1875) * C125139 + std::sqrt(0.1875) * C127905 +
               std::sqrt(0.75) * C174927 - std::sqrt(0.75) * C177693;
    gy[119] += std::sqrt(0.1875) * C78424 - std::sqrt(0.1875) * C75658 -
               std::sqrt(0.1875) * C125446 + std::sqrt(0.1875) * C128212 +
               std::sqrt(0.75) * C175234 - std::sqrt(0.75) * C178000;
    gz[119] += std::sqrt(0.1875) * C78731 - std::sqrt(0.1875) * C75965 -
               std::sqrt(0.1875) * C125753 + std::sqrt(0.1875) * C128519 +
               std::sqrt(0.75) * C175541 - std::sqrt(0.75) * C178307;
    gx[120] += std::sqrt(3.0) * C197977 -
               (std::sqrt(0.75) * C148189 + std::sqrt(0.75) * C98401);
    gy[120] += std::sqrt(3.0) * C198284 -
               (std::sqrt(0.75) * C148496 + std::sqrt(0.75) * C98708);
    gz[120] += std::sqrt(3.0) * C198591 -
               (std::sqrt(0.75) * C148803 + std::sqrt(0.75) * C99015);
    gx[121] += std::sqrt(3.0) * C198899 -
               (std::sqrt(0.75) * C149111 + std::sqrt(0.75) * C99323);
    gy[121] += std::sqrt(3.0) * C199206 -
               (std::sqrt(0.75) * C149418 + std::sqrt(0.75) * C99630);
    gz[121] += std::sqrt(3.0) * C199513 -
               (std::sqrt(0.75) * C149725 + std::sqrt(0.75) * C99937);
    gx[122] += std::sqrt(3.0) * C199821 -
               (std::sqrt(0.75) * C150033 + std::sqrt(0.75) * C100245);
    gy[122] += std::sqrt(3.0) * C200128 -
               (std::sqrt(0.75) * C150340 + std::sqrt(0.75) * C100552);
    gz[122] += std::sqrt(3.0) * C200435 -
               (std::sqrt(0.75) * C150647 + std::sqrt(0.75) * C100859);
    gx[123] += std::sqrt(3.0) * C203509 -
               (std::sqrt(0.75) * C153721 + std::sqrt(0.75) * C103933);
    gy[123] += std::sqrt(3.0) * C203816 -
               (std::sqrt(0.75) * C154028 + std::sqrt(0.75) * C104240);
    gz[123] += std::sqrt(3.0) * C204123 -
               (std::sqrt(0.75) * C154335 + std::sqrt(0.75) * C104547);
    gx[124] += std::sqrt(3.0) * C204431 -
               (std::sqrt(0.75) * C154643 + std::sqrt(0.75) * C104855);
    gy[124] += std::sqrt(3.0) * C204738 -
               (std::sqrt(0.75) * C154950 + std::sqrt(0.75) * C105162);
    gz[124] += std::sqrt(3.0) * C205045 -
               (std::sqrt(0.75) * C155257 + std::sqrt(0.75) * C105469);
    gx[125] += std::sqrt(3.0) * C205353 -
               (std::sqrt(0.75) * C155565 + std::sqrt(0.75) * C105777);
    gy[125] += std::sqrt(3.0) * C205660 -
               (std::sqrt(0.75) * C155872 + std::sqrt(0.75) * C106084);
    gz[125] += std::sqrt(3.0) * C205967 -
               (std::sqrt(0.75) * C156179 + std::sqrt(0.75) * C106391);
    gx[126] += 0.25 * C90103 + 0.25 * C92869 - 0.5 * C95635 + 0.25 * C139891 +
               0.25 * C142657 - 0.5 * C145423 - 0.5 * C189679 - 0.5 * C192445 +
               C195211;
    gy[126] += 0.25 * C90410 + 0.25 * C93176 - 0.5 * C95942 + 0.25 * C140198 +
               0.25 * C142964 - 0.5 * C145730 - 0.5 * C189986 - 0.5 * C192752 +
               C195518;
    gz[126] += 0.25 * C90717 + 0.25 * C93483 - 0.5 * C96249 + 0.25 * C140505 +
               0.25 * C143271 - 0.5 * C146037 - 0.5 * C190293 - 0.5 * C193059 +
               C195825;
    gx[127] += 0.25 * C91025 + 0.25 * C93791 - 0.5 * C96557 + 0.25 * C140813 +
               0.25 * C143579 - 0.5 * C146345 - 0.5 * C190601 - 0.5 * C193367 +
               C196133;
    gy[127] += 0.25 * C91332 + 0.25 * C94098 - 0.5 * C96864 + 0.25 * C141120 +
               0.25 * C143886 - 0.5 * C146652 - 0.5 * C190908 - 0.5 * C193674 +
               C196440;
    gz[127] += 0.25 * C91639 + 0.25 * C94405 - 0.5 * C97171 + 0.25 * C141427 +
               0.25 * C144193 - 0.5 * C146959 - 0.5 * C191215 - 0.5 * C193981 +
               C196747;
    gx[128] += 0.25 * C91947 + 0.25 * C94713 - 0.5 * C97479 + 0.25 * C141735 +
               0.25 * C144501 - 0.5 * C147267 - 0.5 * C191523 - 0.5 * C194289 +
               C197055;
    gy[128] += 0.25 * C92254 + 0.25 * C95020 - 0.5 * C97786 + 0.25 * C142042 +
               0.25 * C144808 - 0.5 * C147574 - 0.5 * C191830 - 0.5 * C194596 +
               C197362;
    gz[128] += 0.25 * C92561 + 0.25 * C95327 - 0.5 * C98093 + 0.25 * C142349 +
               0.25 * C145115 - 0.5 * C147881 - 0.5 * C192137 - 0.5 * C194903 +
               C197669;
    gx[129] += std::sqrt(3.0) * C200743 -
               (std::sqrt(0.75) * C150955 + std::sqrt(0.75) * C101167);
    gy[129] += std::sqrt(3.0) * C201050 -
               (std::sqrt(0.75) * C151262 + std::sqrt(0.75) * C101474);
    gz[129] += std::sqrt(3.0) * C201357 -
               (std::sqrt(0.75) * C151569 + std::sqrt(0.75) * C101781);
    gx[130] += std::sqrt(3.0) * C201665 -
               (std::sqrt(0.75) * C151877 + std::sqrt(0.75) * C102089);
    gy[130] += std::sqrt(3.0) * C201972 -
               (std::sqrt(0.75) * C152184 + std::sqrt(0.75) * C102396);
    gz[130] += std::sqrt(3.0) * C202279 -
               (std::sqrt(0.75) * C152491 + std::sqrt(0.75) * C102703);
    gx[131] += std::sqrt(3.0) * C202587 -
               (std::sqrt(0.75) * C152799 + std::sqrt(0.75) * C103011);
    gy[131] += std::sqrt(3.0) * C202894 -
               (std::sqrt(0.75) * C153106 + std::sqrt(0.75) * C103318);
    gz[131] += std::sqrt(3.0) * C203201 -
               (std::sqrt(0.75) * C153413 + std::sqrt(0.75) * C103625);
    gx[132] += std::sqrt(0.1875) * C92869 - std::sqrt(0.1875) * C90103 -
               std::sqrt(0.1875) * C139891 + std::sqrt(0.1875) * C142657 +
               std::sqrt(0.75) * C189679 - std::sqrt(0.75) * C192445;
    gy[132] += std::sqrt(0.1875) * C93176 - std::sqrt(0.1875) * C90410 -
               std::sqrt(0.1875) * C140198 + std::sqrt(0.1875) * C142964 +
               std::sqrt(0.75) * C189986 - std::sqrt(0.75) * C192752;
    gz[132] += std::sqrt(0.1875) * C93483 - std::sqrt(0.1875) * C90717 -
               std::sqrt(0.1875) * C140505 + std::sqrt(0.1875) * C143271 +
               std::sqrt(0.75) * C190293 - std::sqrt(0.75) * C193059;
    gx[133] += std::sqrt(0.1875) * C93791 - std::sqrt(0.1875) * C91025 -
               std::sqrt(0.1875) * C140813 + std::sqrt(0.1875) * C143579 +
               std::sqrt(0.75) * C190601 - std::sqrt(0.75) * C193367;
    gy[133] += std::sqrt(0.1875) * C94098 - std::sqrt(0.1875) * C91332 -
               std::sqrt(0.1875) * C141120 + std::sqrt(0.1875) * C143886 +
               std::sqrt(0.75) * C190908 - std::sqrt(0.75) * C193674;
    gz[133] += std::sqrt(0.1875) * C94405 - std::sqrt(0.1875) * C91639 -
               std::sqrt(0.1875) * C141427 + std::sqrt(0.1875) * C144193 +
               std::sqrt(0.75) * C191215 - std::sqrt(0.75) * C193981;
    gx[134] += std::sqrt(0.1875) * C94713 - std::sqrt(0.1875) * C91947 -
               std::sqrt(0.1875) * C141735 + std::sqrt(0.1875) * C144501 +
               std::sqrt(0.75) * C191523 - std::sqrt(0.75) * C194289;
    gy[134] += std::sqrt(0.1875) * C95020 - std::sqrt(0.1875) * C92254 -
               std::sqrt(0.1875) * C142042 + std::sqrt(0.1875) * C144808 +
               std::sqrt(0.75) * C191830 - std::sqrt(0.75) * C194596;
    gz[134] += std::sqrt(0.1875) * C95327 - std::sqrt(0.1875) * C92561 -
               std::sqrt(0.1875) * C142349 + std::sqrt(0.1875) * C145115 +
               std::sqrt(0.75) * C192137 - std::sqrt(0.75) * C194903;
    gx[135] += std::sqrt(9.) * C264361;
    gy[135] += std::sqrt(9.) * C264668;
    gz[135] += std::sqrt(9.) * C264975;
    gx[136] += std::sqrt(9.) * C265283;
    gy[136] += std::sqrt(9.) * C265590;
    gz[136] += std::sqrt(9.) * C265897;
    gx[137] += std::sqrt(9.) * C266205;
    gy[137] += std::sqrt(9.) * C266512;
    gz[137] += std::sqrt(9.) * C266819;
    gx[138] += std::sqrt(9.) * C269893;
    gy[138] += std::sqrt(9.) * C270200;
    gz[138] += std::sqrt(9.) * C270507;
    gx[139] += std::sqrt(9.) * C270815;
    gy[139] += std::sqrt(9.) * C271122;
    gz[139] += std::sqrt(9.) * C271429;
    gx[140] += std::sqrt(9.) * C271737;
    gy[140] += std::sqrt(9.) * C272044;
    gz[140] += std::sqrt(9.) * C272351;
    gx[141] += std::sqrt(3.0) * C261595 -
               (std::sqrt(0.75) * C258829 + std::sqrt(0.75) * C256063);
    gy[141] += std::sqrt(3.0) * C261902 -
               (std::sqrt(0.75) * C259136 + std::sqrt(0.75) * C256370);
    gz[141] += std::sqrt(3.0) * C262209 -
               (std::sqrt(0.75) * C259443 + std::sqrt(0.75) * C256677);
    gx[142] += std::sqrt(3.0) * C262517 -
               (std::sqrt(0.75) * C259751 + std::sqrt(0.75) * C256985);
    gy[142] += std::sqrt(3.0) * C262824 -
               (std::sqrt(0.75) * C260058 + std::sqrt(0.75) * C257292);
    gz[142] += std::sqrt(3.0) * C263131 -
               (std::sqrt(0.75) * C260365 + std::sqrt(0.75) * C257599);
    gx[143] += std::sqrt(3.0) * C263439 -
               (std::sqrt(0.75) * C260673 + std::sqrt(0.75) * C257907);
    gy[143] += std::sqrt(3.0) * C263746 -
               (std::sqrt(0.75) * C260980 + std::sqrt(0.75) * C258214);
    gz[143] += std::sqrt(3.0) * C264053 -
               (std::sqrt(0.75) * C261287 + std::sqrt(0.75) * C258521);
    gx[144] += std::sqrt(9.) * C267127;
    gy[144] += std::sqrt(9.) * C267434;
    gz[144] += std::sqrt(9.) * C267741;
    gx[145] += std::sqrt(9.) * C268049;
    gy[145] += std::sqrt(9.) * C268356;
    gz[145] += std::sqrt(9.) * C268663;
    gx[146] += std::sqrt(9.) * C268971;
    gy[146] += std::sqrt(9.) * C269278;
    gz[146] += std::sqrt(9.) * C269585;
    gx[147] += std::sqrt(2.25) * C256063 - std::sqrt(2.25) * C258829;
    gy[147] += std::sqrt(2.25) * C256370 - std::sqrt(2.25) * C259136;
    gz[147] += std::sqrt(2.25) * C256677 - std::sqrt(2.25) * C259443;
    gx[148] += std::sqrt(2.25) * C256985 - std::sqrt(2.25) * C259751;
    gy[148] += std::sqrt(2.25) * C257292 - std::sqrt(2.25) * C260058;
    gz[148] += std::sqrt(2.25) * C257599 - std::sqrt(2.25) * C260365;
    gx[149] += std::sqrt(2.25) * C257907 - std::sqrt(2.25) * C260673;
    gy[149] += std::sqrt(2.25) * C258214 - std::sqrt(2.25) * C260980;
    gz[149] += std::sqrt(2.25) * C258521 - std::sqrt(2.25) * C261287;
    gx[150] += std::sqrt(9.) * C280957;
    gy[150] += std::sqrt(9.) * C281264;
    gz[150] += std::sqrt(9.) * C281571;
    gx[151] += std::sqrt(9.) * C281879;
    gy[151] += std::sqrt(9.) * C282186;
    gz[151] += std::sqrt(9.) * C282493;
    gx[152] += std::sqrt(9.) * C282801;
    gy[152] += std::sqrt(9.) * C283108;
    gz[152] += std::sqrt(9.) * C283415;
    gx[153] += std::sqrt(9.) * C286489;
    gy[153] += std::sqrt(9.) * C286796;
    gz[153] += std::sqrt(9.) * C287103;
    gx[154] += std::sqrt(9.) * C287411;
    gy[154] += std::sqrt(9.) * C287718;
    gz[154] += std::sqrt(9.) * C288025;
    gx[155] += std::sqrt(9.) * C288333;
    gy[155] += std::sqrt(9.) * C288640;
    gz[155] += std::sqrt(9.) * C288947;
    gx[156] += std::sqrt(3.0) * C278191 -
               (std::sqrt(0.75) * C275425 + std::sqrt(0.75) * C272659);
    gy[156] += std::sqrt(3.0) * C278498 -
               (std::sqrt(0.75) * C275732 + std::sqrt(0.75) * C272966);
    gz[156] += std::sqrt(3.0) * C278805 -
               (std::sqrt(0.75) * C276039 + std::sqrt(0.75) * C273273);
    gx[157] += std::sqrt(3.0) * C279113 -
               (std::sqrt(0.75) * C276347 + std::sqrt(0.75) * C273581);
    gy[157] += std::sqrt(3.0) * C279420 -
               (std::sqrt(0.75) * C276654 + std::sqrt(0.75) * C273888);
    gz[157] += std::sqrt(3.0) * C279727 -
               (std::sqrt(0.75) * C276961 + std::sqrt(0.75) * C274195);
    gx[158] += std::sqrt(3.0) * C280035 -
               (std::sqrt(0.75) * C277269 + std::sqrt(0.75) * C274503);
    gy[158] += std::sqrt(3.0) * C280342 -
               (std::sqrt(0.75) * C277576 + std::sqrt(0.75) * C274810);
    gz[158] += std::sqrt(3.0) * C280649 -
               (std::sqrt(0.75) * C277883 + std::sqrt(0.75) * C275117);
    gx[159] += std::sqrt(9.) * C283723;
    gy[159] += std::sqrt(9.) * C284030;
    gz[159] += std::sqrt(9.) * C284337;
    gx[160] += std::sqrt(9.) * C284645;
    gy[160] += std::sqrt(9.) * C284952;
    gz[160] += std::sqrt(9.) * C285259;
    gx[161] += std::sqrt(9.) * C285567;
    gy[161] += std::sqrt(9.) * C285874;
    gz[161] += std::sqrt(9.) * C286181;
    gx[162] += std::sqrt(2.25) * C272659 - std::sqrt(2.25) * C275425;
    gy[162] += std::sqrt(2.25) * C272966 - std::sqrt(2.25) * C275732;
    gz[162] += std::sqrt(2.25) * C273273 - std::sqrt(2.25) * C276039;
    gx[163] += std::sqrt(2.25) * C273581 - std::sqrt(2.25) * C276347;
    gy[163] += std::sqrt(2.25) * C273888 - std::sqrt(2.25) * C276654;
    gz[163] += std::sqrt(2.25) * C274195 - std::sqrt(2.25) * C276961;
    gx[164] += std::sqrt(2.25) * C274503 - std::sqrt(2.25) * C277269;
    gy[164] += std::sqrt(2.25) * C274810 - std::sqrt(2.25) * C277576;
    gz[164] += std::sqrt(2.25) * C275117 - std::sqrt(2.25) * C277883;
    gx[165] += std::sqrt(9.) * C297553;
    gy[165] += std::sqrt(9.) * C297860;
    gz[165] += std::sqrt(9.) * C298167;
    gx[166] += std::sqrt(9.) * C298475;
    gy[166] += std::sqrt(9.) * C298782;
    gz[166] += std::sqrt(9.) * C299089;
    gx[167] += std::sqrt(9.) * C299397;
    gy[167] += std::sqrt(9.) * C299704;
    gz[167] += std::sqrt(9.) * C300011;
    gx[168] += std::sqrt(9.) * C303085;
    gy[168] += std::sqrt(9.) * C303392;
    gz[168] += std::sqrt(9.) * C303699;
    gx[169] += std::sqrt(9.) * C304007;
    gy[169] += std::sqrt(9.) * C304314;
    gz[169] += std::sqrt(9.) * C304621;
    gx[170] += std::sqrt(9.) * C304929;
    gy[170] += std::sqrt(9.) * C305236;
    gz[170] += std::sqrt(9.) * C305543;
    gx[171] += std::sqrt(3.0) * C294787 -
               (std::sqrt(0.75) * C292021 + std::sqrt(0.75) * C289255);
    gy[171] += std::sqrt(3.0) * C295094 -
               (std::sqrt(0.75) * C292328 + std::sqrt(0.75) * C289562);
    gz[171] += std::sqrt(3.0) * C295401 -
               (std::sqrt(0.75) * C292635 + std::sqrt(0.75) * C289869);
    gx[172] += std::sqrt(3.0) * C295709 -
               (std::sqrt(0.75) * C292943 + std::sqrt(0.75) * C290177);
    gy[172] += std::sqrt(3.0) * C296016 -
               (std::sqrt(0.75) * C293250 + std::sqrt(0.75) * C290484);
    gz[172] += std::sqrt(3.0) * C296323 -
               (std::sqrt(0.75) * C293557 + std::sqrt(0.75) * C290791);
    gx[173] += std::sqrt(3.0) * C296631 -
               (std::sqrt(0.75) * C293865 + std::sqrt(0.75) * C291099);
    gy[173] += std::sqrt(3.0) * C296938 -
               (std::sqrt(0.75) * C294172 + std::sqrt(0.75) * C291406);
    gz[173] += std::sqrt(3.0) * C297245 -
               (std::sqrt(0.75) * C294479 + std::sqrt(0.75) * C291713);
    gx[174] += std::sqrt(9.) * C300319;
    gy[174] += std::sqrt(9.) * C300626;
    gz[174] += std::sqrt(9.) * C300933;
    gx[175] += std::sqrt(9.) * C301241;
    gy[175] += std::sqrt(9.) * C301548;
    gz[175] += std::sqrt(9.) * C301855;
    gx[176] += std::sqrt(9.) * C302163;
    gy[176] += std::sqrt(9.) * C302470;
    gz[176] += std::sqrt(9.) * C302777;
    gx[177] += std::sqrt(2.25) * C289255 - std::sqrt(2.25) * C292021;
    gy[177] += std::sqrt(2.25) * C289562 - std::sqrt(2.25) * C292328;
    gz[177] += std::sqrt(2.25) * C289869 - std::sqrt(2.25) * C292635;
    gx[178] += std::sqrt(2.25) * C290177 - std::sqrt(2.25) * C292943;
    gy[178] += std::sqrt(2.25) * C290484 - std::sqrt(2.25) * C293250;
    gz[178] += std::sqrt(2.25) * C290791 - std::sqrt(2.25) * C293557;
    gx[179] += std::sqrt(2.25) * C291099 - std::sqrt(2.25) * C293865;
    gy[179] += std::sqrt(2.25) * C291406 - std::sqrt(2.25) * C294172;
    gz[179] += std::sqrt(2.25) * C291713 - std::sqrt(2.25) * C294479;
    gx[180] += std::sqrt(2.25) * C65209 - std::sqrt(2.25) * C114997;
    gy[180] += std::sqrt(2.25) * C65516 - std::sqrt(2.25) * C115304;
    gz[180] += std::sqrt(2.25) * C65823 - std::sqrt(2.25) * C115611;
    gx[181] += std::sqrt(2.25) * C66131 - std::sqrt(2.25) * C115919;
    gy[181] += std::sqrt(2.25) * C66438 - std::sqrt(2.25) * C116226;
    gz[181] += std::sqrt(2.25) * C66745 - std::sqrt(2.25) * C116533;
    gx[182] += std::sqrt(2.25) * C67053 - std::sqrt(2.25) * C116841;
    gy[182] += std::sqrt(2.25) * C67360 - std::sqrt(2.25) * C117148;
    gz[182] += std::sqrt(2.25) * C67667 - std::sqrt(2.25) * C117455;
    gx[183] += std::sqrt(2.25) * C70741 - std::sqrt(2.25) * C120529;
    gy[183] += std::sqrt(2.25) * C71048 - std::sqrt(2.25) * C120836;
    gz[183] += std::sqrt(2.25) * C71355 - std::sqrt(2.25) * C121143;
    gx[184] += std::sqrt(2.25) * C71663 - std::sqrt(2.25) * C121451;
    gy[184] += std::sqrt(2.25) * C71970 - std::sqrt(2.25) * C121758;
    gz[184] += std::sqrt(2.25) * C72277 - std::sqrt(2.25) * C122065;
    gx[185] += std::sqrt(2.25) * C72585 - std::sqrt(2.25) * C122373;
    gy[185] += std::sqrt(2.25) * C72892 - std::sqrt(2.25) * C122680;
    gz[185] += std::sqrt(2.25) * C73199 - std::sqrt(2.25) * C122987;
    gx[186] += std::sqrt(0.75) * C62443 -
               (std::sqrt(0.1875) * C59677 + std::sqrt(0.1875) * C56912) +
               std::sqrt(0.1875) * C106699 + std::sqrt(0.1875) * C109465 -
               std::sqrt(0.75) * C112231;
    gy[186] += std::sqrt(0.75) * C62750 -
               (std::sqrt(0.1875) * C59984 + std::sqrt(0.1875) * C57218) +
               std::sqrt(0.1875) * C107006 + std::sqrt(0.1875) * C109772 -
               std::sqrt(0.75) * C112538;
    gz[186] += std::sqrt(0.75) * C63057 -
               (std::sqrt(0.1875) * C60291 + std::sqrt(0.1875) * C57525) +
               std::sqrt(0.1875) * C107313 + std::sqrt(0.1875) * C110079 -
               std::sqrt(0.75) * C112845;
    gx[187] += std::sqrt(0.75) * C63365 -
               (std::sqrt(0.1875) * C60599 + std::sqrt(0.1875) * C57833) +
               std::sqrt(0.1875) * C107621 + std::sqrt(0.1875) * C110387 -
               std::sqrt(0.75) * C113153;
    gy[187] += std::sqrt(0.75) * C63672 -
               (std::sqrt(0.1875) * C60906 + std::sqrt(0.1875) * C58140) +
               std::sqrt(0.1875) * C107928 + std::sqrt(0.1875) * C110694 -
               std::sqrt(0.75) * C113460;
    gz[187] += std::sqrt(0.75) * C63979 -
               (std::sqrt(0.1875) * C61213 + std::sqrt(0.1875) * C58447) +
               std::sqrt(0.1875) * C108235 + std::sqrt(0.1875) * C111001 -
               std::sqrt(0.75) * C113767;
    gx[188] += std::sqrt(0.75) * C64287 -
               (std::sqrt(0.1875) * C61521 + std::sqrt(0.1875) * C58755) +
               std::sqrt(0.1875) * C108543 + std::sqrt(0.1875) * C111309 -
               std::sqrt(0.75) * C114075;
    gy[188] += std::sqrt(0.75) * C64594 -
               (std::sqrt(0.1875) * C61828 + std::sqrt(0.1875) * C59062) +
               std::sqrt(0.1875) * C108850 + std::sqrt(0.1875) * C111616 -
               std::sqrt(0.75) * C114382;
    gz[188] += std::sqrt(0.75) * C64901 -
               (std::sqrt(0.1875) * C62135 + std::sqrt(0.1875) * C59369) +
               std::sqrt(0.1875) * C109157 + std::sqrt(0.1875) * C111923 -
               std::sqrt(0.75) * C114689;
    gx[189] += std::sqrt(2.25) * C67975 - std::sqrt(2.25) * C117763;
    gy[189] += std::sqrt(2.25) * C68282 - std::sqrt(2.25) * C118070;
    gz[189] += std::sqrt(2.25) * C68589 - std::sqrt(2.25) * C118377;
    gx[190] += std::sqrt(2.25) * C68897 - std::sqrt(2.25) * C118685;
    gy[190] += std::sqrt(2.25) * C69204 - std::sqrt(2.25) * C118992;
    gz[190] += std::sqrt(2.25) * C69511 - std::sqrt(2.25) * C119299;
    gx[191] += std::sqrt(2.25) * C69819 - std::sqrt(2.25) * C119607;
    gy[191] += std::sqrt(2.25) * C70126 - std::sqrt(2.25) * C119914;
    gz[191] += std::sqrt(2.25) * C70433 - std::sqrt(2.25) * C120221;
    gx[192] += std::sqrt(0.5625) * C56912 - std::sqrt(0.5625) * C59677 -
               std::sqrt(0.5625) * C106699 + std::sqrt(0.5625) * C109465;
    gy[192] += std::sqrt(0.5625) * C57218 - std::sqrt(0.5625) * C59984 -
               std::sqrt(0.5625) * C107006 + std::sqrt(0.5625) * C109772;
    gz[192] += std::sqrt(0.5625) * C57525 - std::sqrt(0.5625) * C60291 -
               std::sqrt(0.5625) * C107313 + std::sqrt(0.5625) * C110079;
    gx[193] += std::sqrt(0.5625) * C57833 - std::sqrt(0.5625) * C60599 -
               std::sqrt(0.5625) * C107621 + std::sqrt(0.5625) * C110387;
    gy[193] += std::sqrt(0.5625) * C58140 - std::sqrt(0.5625) * C60906 -
               std::sqrt(0.5625) * C107928 + std::sqrt(0.5625) * C110694;
    gz[193] += std::sqrt(0.5625) * C58447 - std::sqrt(0.5625) * C61213 -
               std::sqrt(0.5625) * C108235 + std::sqrt(0.5625) * C111001;
    gx[194] += std::sqrt(0.5625) * C58755 - std::sqrt(0.5625) * C61521 -
               std::sqrt(0.5625) * C108543 + std::sqrt(0.5625) * C111309;
    gy[194] += std::sqrt(0.5625) * C59062 - std::sqrt(0.5625) * C61828 -
               std::sqrt(0.5625) * C108850 + std::sqrt(0.5625) * C111616;
    gz[194] += std::sqrt(0.5625) * C59369 - std::sqrt(0.5625) * C62135 -
               std::sqrt(0.5625) * C109157 + std::sqrt(0.5625) * C111923;
    gx[195] += std::sqrt(2.25) * C81805 - std::sqrt(2.25) * C131593;
    gy[195] += std::sqrt(2.25) * C82112 - std::sqrt(2.25) * C131900;
    gz[195] += std::sqrt(2.25) * C82419 - std::sqrt(2.25) * C132207;
    gx[196] += std::sqrt(2.25) * C82727 - std::sqrt(2.25) * C132515;
    gy[196] += std::sqrt(2.25) * C83034 - std::sqrt(2.25) * C132822;
    gz[196] += std::sqrt(2.25) * C83341 - std::sqrt(2.25) * C133129;
    gx[197] += std::sqrt(2.25) * C83649 - std::sqrt(2.25) * C133437;
    gy[197] += std::sqrt(2.25) * C83956 - std::sqrt(2.25) * C133744;
    gz[197] += std::sqrt(2.25) * C84263 - std::sqrt(2.25) * C134051;
    gx[198] += std::sqrt(2.25) * C87337 - std::sqrt(2.25) * C137125;
    gy[198] += std::sqrt(2.25) * C87644 - std::sqrt(2.25) * C137432;
    gz[198] += std::sqrt(2.25) * C87951 - std::sqrt(2.25) * C137739;
    gx[199] += std::sqrt(2.25) * C88259 - std::sqrt(2.25) * C138047;
    gy[199] += std::sqrt(2.25) * C88566 - std::sqrt(2.25) * C138354;
    gz[199] += std::sqrt(2.25) * C88873 - std::sqrt(2.25) * C138661;
    gx[200] += std::sqrt(2.25) * C89181 - std::sqrt(2.25) * C138969;
    gy[200] += std::sqrt(2.25) * C89488 - std::sqrt(2.25) * C139276;
    gz[200] += std::sqrt(2.25) * C89795 - std::sqrt(2.25) * C139583;
    gx[201] += std::sqrt(0.75) * C79039 -
               (std::sqrt(0.1875) * C76273 + std::sqrt(0.1875) * C73507) +
               std::sqrt(0.1875) * C123295 + std::sqrt(0.1875) * C126061 -
               std::sqrt(0.75) * C128827;
    gy[201] += std::sqrt(0.75) * C79346 -
               (std::sqrt(0.1875) * C76580 + std::sqrt(0.1875) * C73814) +
               std::sqrt(0.1875) * C123602 + std::sqrt(0.1875) * C126368 -
               std::sqrt(0.75) * C129134;
    gz[201] += std::sqrt(0.75) * C79653 -
               (std::sqrt(0.1875) * C76887 + std::sqrt(0.1875) * C74121) +
               std::sqrt(0.1875) * C123909 + std::sqrt(0.1875) * C126675 -
               std::sqrt(0.75) * C129441;
    gx[202] += std::sqrt(0.75) * C79961 -
               (std::sqrt(0.1875) * C77195 + std::sqrt(0.1875) * C74429) +
               std::sqrt(0.1875) * C124217 + std::sqrt(0.1875) * C126983 -
               std::sqrt(0.75) * C129749;
    gy[202] += std::sqrt(0.75) * C80268 -
               (std::sqrt(0.1875) * C77502 + std::sqrt(0.1875) * C74736) +
               std::sqrt(0.1875) * C124524 + std::sqrt(0.1875) * C127290 -
               std::sqrt(0.75) * C130056;
    gz[202] += std::sqrt(0.75) * C80575 -
               (std::sqrt(0.1875) * C77809 + std::sqrt(0.1875) * C75043) +
               std::sqrt(0.1875) * C124831 + std::sqrt(0.1875) * C127597 -
               std::sqrt(0.75) * C130363;
    gx[203] += std::sqrt(0.75) * C80883 -
               (std::sqrt(0.1875) * C78117 + std::sqrt(0.1875) * C75351) +
               std::sqrt(0.1875) * C125139 + std::sqrt(0.1875) * C127905 -
               std::sqrt(0.75) * C130671;
    gy[203] += std::sqrt(0.75) * C81190 -
               (std::sqrt(0.1875) * C78424 + std::sqrt(0.1875) * C75658) +
               std::sqrt(0.1875) * C125446 + std::sqrt(0.1875) * C128212 -
               std::sqrt(0.75) * C130978;
    gz[203] += std::sqrt(0.75) * C81497 -
               (std::sqrt(0.1875) * C78731 + std::sqrt(0.1875) * C75965) +
               std::sqrt(0.1875) * C125753 + std::sqrt(0.1875) * C128519 -
               std::sqrt(0.75) * C131285;
    gx[204] += std::sqrt(2.25) * C84571 - std::sqrt(2.25) * C134359;
    gy[204] += std::sqrt(2.25) * C84878 - std::sqrt(2.25) * C134666;
    gz[204] += std::sqrt(2.25) * C85185 - std::sqrt(2.25) * C134973;
    gx[205] += std::sqrt(2.25) * C85493 - std::sqrt(2.25) * C135281;
    gy[205] += std::sqrt(2.25) * C85800 - std::sqrt(2.25) * C135588;
    gz[205] += std::sqrt(2.25) * C86107 - std::sqrt(2.25) * C135895;
    gx[206] += std::sqrt(2.25) * C86415 - std::sqrt(2.25) * C136203;
    gy[206] += std::sqrt(2.25) * C86722 - std::sqrt(2.25) * C136510;
    gz[206] += std::sqrt(2.25) * C87029 - std::sqrt(2.25) * C136817;
    gx[207] += std::sqrt(0.5625) * C73507 - std::sqrt(0.5625) * C76273 -
               std::sqrt(0.5625) * C123295 + std::sqrt(0.5625) * C126061;
    gy[207] += std::sqrt(0.5625) * C73814 - std::sqrt(0.5625) * C76580 -
               std::sqrt(0.5625) * C123602 + std::sqrt(0.5625) * C126368;
    gz[207] += std::sqrt(0.5625) * C74121 - std::sqrt(0.5625) * C76887 -
               std::sqrt(0.5625) * C123909 + std::sqrt(0.5625) * C126675;
    gx[208] += std::sqrt(0.5625) * C74429 - std::sqrt(0.5625) * C77195 -
               std::sqrt(0.5625) * C124217 + std::sqrt(0.5625) * C126983;
    gy[208] += std::sqrt(0.5625) * C74736 - std::sqrt(0.5625) * C77502 -
               std::sqrt(0.5625) * C124524 + std::sqrt(0.5625) * C127290;
    gz[208] += std::sqrt(0.5625) * C75043 - std::sqrt(0.5625) * C77809 -
               std::sqrt(0.5625) * C124831 + std::sqrt(0.5625) * C127597;
    gx[209] += std::sqrt(0.5625) * C75351 - std::sqrt(0.5625) * C78117 -
               std::sqrt(0.5625) * C125139 + std::sqrt(0.5625) * C127905;
    gy[209] += std::sqrt(0.5625) * C75658 - std::sqrt(0.5625) * C78424 -
               std::sqrt(0.5625) * C125446 + std::sqrt(0.5625) * C128212;
    gz[209] += std::sqrt(0.5625) * C75965 - std::sqrt(0.5625) * C78731 -
               std::sqrt(0.5625) * C125753 + std::sqrt(0.5625) * C128519;
    gx[210] += std::sqrt(2.25) * C98401 - std::sqrt(2.25) * C148189;
    gy[210] += std::sqrt(2.25) * C98708 - std::sqrt(2.25) * C148496;
    gz[210] += std::sqrt(2.25) * C99015 - std::sqrt(2.25) * C148803;
    gx[211] += std::sqrt(2.25) * C99323 - std::sqrt(2.25) * C149111;
    gy[211] += std::sqrt(2.25) * C99630 - std::sqrt(2.25) * C149418;
    gz[211] += std::sqrt(2.25) * C99937 - std::sqrt(2.25) * C149725;
    gx[212] += std::sqrt(2.25) * C100245 - std::sqrt(2.25) * C150033;
    gy[212] += std::sqrt(2.25) * C100552 - std::sqrt(2.25) * C150340;
    gz[212] += std::sqrt(2.25) * C100859 - std::sqrt(2.25) * C150647;
    gx[213] += std::sqrt(2.25) * C103933 - std::sqrt(2.25) * C153721;
    gy[213] += std::sqrt(2.25) * C104240 - std::sqrt(2.25) * C154028;
    gz[213] += std::sqrt(2.25) * C104547 - std::sqrt(2.25) * C154335;
    gx[214] += std::sqrt(2.25) * C104855 - std::sqrt(2.25) * C154643;
    gy[214] += std::sqrt(2.25) * C105162 - std::sqrt(2.25) * C154950;
    gz[214] += std::sqrt(2.25) * C105469 - std::sqrt(2.25) * C155257;
    gx[215] += std::sqrt(2.25) * C105777 - std::sqrt(2.25) * C155565;
    gy[215] += std::sqrt(2.25) * C106084 - std::sqrt(2.25) * C155872;
    gz[215] += std::sqrt(2.25) * C106391 - std::sqrt(2.25) * C156179;
    gx[216] += std::sqrt(0.75) * C95635 -
               (std::sqrt(0.1875) * C92869 + std::sqrt(0.1875) * C90103) +
               std::sqrt(0.1875) * C139891 + std::sqrt(0.1875) * C142657 -
               std::sqrt(0.75) * C145423;
    gy[216] += std::sqrt(0.75) * C95942 -
               (std::sqrt(0.1875) * C93176 + std::sqrt(0.1875) * C90410) +
               std::sqrt(0.1875) * C140198 + std::sqrt(0.1875) * C142964 -
               std::sqrt(0.75) * C145730;
    gz[216] += std::sqrt(0.75) * C96249 -
               (std::sqrt(0.1875) * C93483 + std::sqrt(0.1875) * C90717) +
               std::sqrt(0.1875) * C140505 + std::sqrt(0.1875) * C143271 -
               std::sqrt(0.75) * C146037;
    gx[217] += std::sqrt(0.75) * C96557 -
               (std::sqrt(0.1875) * C93791 + std::sqrt(0.1875) * C91025) +
               std::sqrt(0.1875) * C140813 + std::sqrt(0.1875) * C143579 -
               std::sqrt(0.75) * C146345;
    gy[217] += std::sqrt(0.75) * C96864 -
               (std::sqrt(0.1875) * C94098 + std::sqrt(0.1875) * C91332) +
               std::sqrt(0.1875) * C141120 + std::sqrt(0.1875) * C143886 -
               std::sqrt(0.75) * C146652;
    gz[217] += std::sqrt(0.75) * C97171 -
               (std::sqrt(0.1875) * C94405 + std::sqrt(0.1875) * C91639) +
               std::sqrt(0.1875) * C141427 + std::sqrt(0.1875) * C144193 -
               std::sqrt(0.75) * C146959;
    gx[218] += std::sqrt(0.75) * C97479 -
               (std::sqrt(0.1875) * C94713 + std::sqrt(0.1875) * C91947) +
               std::sqrt(0.1875) * C141735 + std::sqrt(0.1875) * C144501 -
               std::sqrt(0.75) * C147267;
    gy[218] += std::sqrt(0.75) * C97786 -
               (std::sqrt(0.1875) * C95020 + std::sqrt(0.1875) * C92254) +
               std::sqrt(0.1875) * C142042 + std::sqrt(0.1875) * C144808 -
               std::sqrt(0.75) * C147574;
    gz[218] += std::sqrt(0.75) * C98093 -
               (std::sqrt(0.1875) * C95327 + std::sqrt(0.1875) * C92561) +
               std::sqrt(0.1875) * C142349 + std::sqrt(0.1875) * C145115 -
               std::sqrt(0.75) * C147881;
    gx[219] += std::sqrt(2.25) * C101167 - std::sqrt(2.25) * C150955;
    gy[219] += std::sqrt(2.25) * C101474 - std::sqrt(2.25) * C151262;
    gz[219] += std::sqrt(2.25) * C101781 - std::sqrt(2.25) * C151569;
    gx[220] += std::sqrt(2.25) * C102089 - std::sqrt(2.25) * C151877;
    gy[220] += std::sqrt(2.25) * C102396 - std::sqrt(2.25) * C152184;
    gz[220] += std::sqrt(2.25) * C102703 - std::sqrt(2.25) * C152491;
    gx[221] += std::sqrt(2.25) * C103011 - std::sqrt(2.25) * C152799;
    gy[221] += std::sqrt(2.25) * C103318 - std::sqrt(2.25) * C153106;
    gz[221] += std::sqrt(2.25) * C103625 - std::sqrt(2.25) * C153413;
    gx[222] += std::sqrt(0.5625) * C90103 - std::sqrt(0.5625) * C92869 -
               std::sqrt(0.5625) * C139891 + std::sqrt(0.5625) * C142657;
    gy[222] += std::sqrt(0.5625) * C90410 - std::sqrt(0.5625) * C93176 -
               std::sqrt(0.5625) * C140198 + std::sqrt(0.5625) * C142964;
    gz[222] += std::sqrt(0.5625) * C90717 - std::sqrt(0.5625) * C93483 -
               std::sqrt(0.5625) * C140505 + std::sqrt(0.5625) * C143271;
    gx[223] += std::sqrt(0.5625) * C91025 - std::sqrt(0.5625) * C93791 -
               std::sqrt(0.5625) * C140813 + std::sqrt(0.5625) * C143579;
    gy[223] += std::sqrt(0.5625) * C91332 - std::sqrt(0.5625) * C94098 -
               std::sqrt(0.5625) * C141120 + std::sqrt(0.5625) * C143886;
    gz[223] += std::sqrt(0.5625) * C91639 - std::sqrt(0.5625) * C94405 -
               std::sqrt(0.5625) * C141427 + std::sqrt(0.5625) * C144193;
    gx[224] += std::sqrt(0.5625) * C91947 - std::sqrt(0.5625) * C94713 -
               std::sqrt(0.5625) * C141735 + std::sqrt(0.5625) * C144501;
    gy[224] += std::sqrt(0.5625) * C92254 - std::sqrt(0.5625) * C95020 -
               std::sqrt(0.5625) * C142042 + std::sqrt(0.5625) * C144808;
    gz[224] += std::sqrt(0.5625) * C92561 - std::sqrt(0.5625) * C95327 -
               std::sqrt(0.5625) * C142349 + std::sqrt(0.5625) * C145115;
}
