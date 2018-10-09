/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2211_1_et(const double ae,
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
    const double C7961 = g[164];
    const double C7972 = g[165];
    const double C8024 = g[170];
    const double C8035 = g[171];
    const double C8087 = g[176];
    const double C8098 = g[177];
    const double C8716 = g[182];
    const double C8726 = g[183];
    const double C8776 = g[188];
    const double C8786 = g[189];
    const double C8836 = g[194];
    const double C8846 = g[195];
    const double C9463 = g[200];
    const double C9473 = g[201];
    const double C9523 = g[206];
    const double C9533 = g[207];
    const double C9583 = g[212];
    const double C9593 = g[213];
    const double C10200 = g[218];
    const double C10209 = g[219];
    const double C10257 = g[224];
    const double C10266 = g[225];
    const double C10314 = g[230];
    const double C10323 = g[231];
    const double C10596 = g[236];
    const double C10605 = g[237];
    const double C10653 = g[242];
    const double C10662 = g[243];
    const double C10710 = g[248];
    const double C10719 = g[249];
    const double C11055 = g[254];
    const double C11064 = g[255];
    const double C11112 = g[260];
    const double C11121 = g[261];
    const double C11169 = g[266];
    const double C11178 = g[267];
    const double C17805 = g[271];
    const double C17862 = g[274];
    const double C17919 = g[277];
    const double C18542 = g[280];
    const double C18596 = g[283];
    const double C18650 = g[286];
    const double C20080 = g[289];
    const double C20131 = g[292];
    const double C20182 = g[295];
    const double C27552 = g[298];
    const double C27609 = g[301];
    const double C27666 = g[304];
    const double C29149 = g[306];
    const double C29198 = g[307];
    const double C29214 = g[308];
    const double C29229 = g[309];
    const double C29245 = g[310];
    const double C29290 = g[311];
    const double C29554 = g[312];
    const double C29585 = g[313];
    const double C29602 = g[314];
    const double C29618 = g[315];
    const double C29648 = g[316];
    const double C29824 = g[317];
    const double C29855 = g[318];
    const double C29872 = g[319];
    const double C29888 = g[320];
    const double C29918 = g[321];
    const double C30093 = g[322];
    const double C30109 = g[323];
    const double C30124 = g[324];
    const double C30139 = g[325];
    const double C30226 = g[326];
    const double C30242 = g[327];
    const double C30257 = g[328];
    const double C30273 = g[329];
    const double C30359 = g[330];
    const double C30375 = g[331];
    const double C30391 = g[332];
    const double C30406 = g[333];
    const double C30521 = g[334];
    const double C30536 = g[335];
    const double C30754 = g[336];
    const double C30785 = g[337];
    const double C30801 = g[338];
    const double C30816 = g[339];
    const double C30846 = g[340];
    const double C31022 = g[341];
    const double C31053 = g[342];
    const double C31069 = g[343];
    const double C31084 = g[344];
    const double C31114 = g[345];
    const double C31291 = g[346];
    const double C31307 = g[347];
    const double C31322 = g[348];
    const double C31337 = g[349];
    const double C31424 = g[350];
    const double C31440 = g[351];
    const double C31455 = g[352];
    const double C31470 = g[353];
    const double C31556 = g[354];
    const double C31572 = g[355];
    const double C31587 = g[356];
    const double C31602 = g[357];
    const double C31717 = g[358];
    const double C31732 = g[359];
    const double C31962 = g[360];
    const double C32076 = g[361];
    const double C32107 = g[362];
    const double C32123 = g[363];
    const double C32138 = g[364];
    const double C32168 = g[365];
    const double C32343 = g[366];
    const double C32359 = g[367];
    const double C32374 = g[368];
    const double C32389 = g[369];
    const double C32476 = g[370];
    const double C32492 = g[371];
    const double C32507 = g[372];
    const double C32523 = g[373];
    const double C32609 = g[374];
    const double C32625 = g[375];
    const double C32640 = g[376];
    const double C32655 = g[377];
    const double C32756 = g[378];
    const double C32883 = g[379];
    const double C33011 = g[380];
    const double C33139 = g[381];
    const double C33252 = g[382];
    const double C33267 = g[383];
    const double C33386 = g[384];
    const double C33476 = g[385];
    const double C33565 = g[386];
    const double C33594 = g[387];
    const double C33637 = g[388];
    const double C33693 = g[389];
    const double C33783 = g[390];
    const double C33872 = g[391];
    const double C33901 = g[392];
    const double C33930 = g[393];
    const double C33972 = g[394];
    const double C34061 = g[395];
    const double C34090 = g[396];
    const double C34133 = g[397];
    const double C34162 = g[398];
    const double C34177 = g[399];
    const double C38710 = g[400];
    const double C38800 = g[401];
    const double C38915 = g[402];
    const double C38987 = g[403];
    const double C39116 = g[404];
    const double C43980 = g[405];
    const double C29153 = vrx[0];
    const double C29170 = vrx[1];
    const double C29186 = vrx[2];
    const double C29202 = vrx[3];
    const double C29233 = vrx[4];
    const double C29338 = vrx[5];
    const double C29353 = vrx[6];
    const double C29368 = vrx[7];
    const double C29469 = vrx[8];
    const double C29484 = vrx[9];
    const double C29499 = vrx[10];
    const double C29558 = vrx[11];
    const double C29589 = vrx[12];
    const double C29590 = vrx[13];
    const double C29606 = vrx[14];
    const double C29681 = vrx[15];
    const double C29768 = vrx[16];
    const double C29783 = vrx[17];
    const double C29828 = vrx[18];
    const double C29859 = vrx[19];
    const double C29860 = vrx[20];
    const double C29876 = vrx[21];
    const double C29951 = vrx[22];
    const double C30038 = vrx[23];
    const double C30199 = vrx[24];
    const double C30379 = vrx[25];
    const double C30509 = vrx[26];
    const double C30610 = vrx[27];
    const double C30625 = vrx[28];
    const double C30626 = vrx[29];
    const double C30699 = vrx[30];
    const double C30714 = vrx[31];
    const double C30758 = vrx[32];
    const double C30789 = vrx[33];
    const double C30879 = vrx[34];
    const double C30966 = vrx[35];
    const double C30981 = vrx[36];
    const double C31026 = vrx[37];
    const double C31057 = vrx[38];
    const double C31147 = vrx[39];
    const double C31148 = vrx[40];
    const double C31163 = vrx[41];
    const double C31236 = vrx[42];
    const double C31397 = vrx[43];
    const double C31705 = vrx[44];
    const double C31806 = vrx[45];
    const double C31891 = vrx[46];
    const double C31906 = vrx[47];
    const double C31907 = vrx[48];
    const double C32050 = vrx[49];
    const double C32080 = vrx[50];
    const double C32111 = vrx[51];
    const double C32201 = vrx[52];
    const double C32288 = vrx[53];
    const double C32449 = vrx[54];
    const double C33256 = vrx[55];
    const double C33271 = vrx[56];
    const double C33286 = vrx[57];
    const double C33315 = vrx[58];
    const double C33344 = vrx[59];
    const double C33359 = vrx[60];
    const double C33374 = vrx[61];
    const double C33404 = vrx[62];
    const double C33419 = vrx[63];
    const double C33434 = vrx[64];
    const double C33449 = vrx[65];
    const double C33464 = vrx[66];
    const double C33494 = vrx[67];
    const double C33509 = vrx[68];
    const double C33538 = vrx[69];
    const double C33553 = vrx[70];
    const double C33711 = vrx[71];
    const double C33726 = vrx[72];
    const double C33741 = vrx[73];
    const double C33756 = vrx[74];
    const double C33771 = vrx[75];
    const double C33801 = vrx[76];
    const double C33816 = vrx[77];
    const double C33845 = vrx[78];
    const double C33860 = vrx[79];
    const double C33990 = vrx[80];
    const double C34005 = vrx[81];
    const double C34034 = vrx[82];
    const double C34049 = vrx[83];
    const double C34210 = vry[0];
    const double C34226 = vry[1];
    const double C34242 = vry[2];
    const double C34257 = vry[3];
    const double C34286 = vry[4];
    const double C34389 = vry[5];
    const double C34404 = vry[6];
    const double C34419 = vry[7];
    const double C34520 = vry[8];
    const double C34535 = vry[9];
    const double C34550 = vry[10];
    const double C34608 = vry[11];
    const double C34638 = vry[12];
    const double C34639 = vry[13];
    const double C34654 = vry[14];
    const double C34727 = vry[15];
    const double C34814 = vry[16];
    const double C34829 = vry[17];
    const double C34873 = vry[18];
    const double C34903 = vry[19];
    const double C34904 = vry[20];
    const double C34919 = vry[21];
    const double C34992 = vry[22];
    const double C35079 = vry[23];
    const double C35236 = vry[24];
    const double C35410 = vry[25];
    const double C35538 = vry[26];
    const double C35637 = vry[27];
    const double C35652 = vry[28];
    const double C35653 = vry[29];
    const double C35726 = vry[30];
    const double C35741 = vry[31];
    const double C35784 = vry[32];
    const double C35814 = vry[33];
    const double C35901 = vry[34];
    const double C35988 = vry[35];
    const double C36003 = vry[36];
    const double C36047 = vry[37];
    const double C36077 = vry[38];
    const double C36164 = vry[39];
    const double C36165 = vry[40];
    const double C36180 = vry[41];
    const double C36253 = vry[42];
    const double C36410 = vry[43];
    const double C36710 = vry[44];
    const double C36809 = vry[45];
    const double C36894 = vry[46];
    const double C36909 = vry[47];
    const double C36910 = vry[48];
    const double C37052 = vry[49];
    const double C37081 = vry[50];
    const double C37111 = vry[51];
    const double C37198 = vry[52];
    const double C37285 = vry[53];
    const double C37442 = vry[54];
    const double C38236 = vry[55];
    const double C38250 = vry[56];
    const double C38265 = vry[57];
    const double C38294 = vry[58];
    const double C38323 = vry[59];
    const double C38338 = vry[60];
    const double C38353 = vry[61];
    const double C38382 = vry[62];
    const double C38397 = vry[63];
    const double C38412 = vry[64];
    const double C38427 = vry[65];
    const double C38442 = vry[66];
    const double C38471 = vry[67];
    const double C38486 = vry[68];
    const double C38515 = vry[69];
    const double C38530 = vry[70];
    const double C38684 = vry[71];
    const double C38699 = vry[72];
    const double C38715 = vry[73];
    const double C38730 = vry[74];
    const double C38745 = vry[75];
    const double C38774 = vry[76];
    const double C38789 = vry[77];
    const double C38819 = vry[78];
    const double C38834 = vry[79];
    const double C38961 = vry[80];
    const double C38976 = vry[81];
    const double C39006 = vry[82];
    const double C39021 = vry[83];
    const double C39178 = vrz[0];
    const double C39194 = vrz[1];
    const double C39210 = vrz[2];
    const double C39225 = vrz[3];
    const double C39254 = vrz[4];
    const double C39357 = vrz[5];
    const double C39372 = vrz[6];
    const double C39387 = vrz[7];
    const double C39488 = vrz[8];
    const double C39503 = vrz[9];
    const double C39518 = vrz[10];
    const double C39576 = vrz[11];
    const double C39606 = vrz[12];
    const double C39607 = vrz[13];
    const double C39622 = vrz[14];
    const double C39695 = vrz[15];
    const double C39782 = vrz[16];
    const double C39797 = vrz[17];
    const double C39841 = vrz[18];
    const double C39871 = vrz[19];
    const double C39872 = vrz[20];
    const double C39887 = vrz[21];
    const double C39960 = vrz[22];
    const double C40047 = vrz[23];
    const double C40204 = vrz[24];
    const double C40378 = vrz[25];
    const double C40506 = vrz[26];
    const double C40605 = vrz[27];
    const double C40620 = vrz[28];
    const double C40621 = vrz[29];
    const double C40694 = vrz[30];
    const double C40709 = vrz[31];
    const double C40752 = vrz[32];
    const double C40782 = vrz[33];
    const double C40869 = vrz[34];
    const double C40956 = vrz[35];
    const double C40971 = vrz[36];
    const double C41015 = vrz[37];
    const double C41045 = vrz[38];
    const double C41132 = vrz[39];
    const double C41133 = vrz[40];
    const double C41148 = vrz[41];
    const double C41221 = vrz[42];
    const double C41378 = vrz[43];
    const double C41678 = vrz[44];
    const double C41777 = vrz[45];
    const double C41862 = vrz[46];
    const double C41877 = vrz[47];
    const double C41878 = vrz[48];
    const double C42020 = vrz[49];
    const double C42049 = vrz[50];
    const double C42079 = vrz[51];
    const double C42166 = vrz[52];
    const double C42253 = vrz[53];
    const double C42410 = vrz[54];
    const double C43204 = vrz[55];
    const double C43218 = vrz[56];
    const double C43233 = vrz[57];
    const double C43262 = vrz[58];
    const double C43291 = vrz[59];
    const double C43306 = vrz[60];
    const double C43321 = vrz[61];
    const double C43350 = vrz[62];
    const double C43365 = vrz[63];
    const double C43380 = vrz[64];
    const double C43395 = vrz[65];
    const double C43410 = vrz[66];
    const double C43439 = vrz[67];
    const double C43454 = vrz[68];
    const double C43483 = vrz[69];
    const double C43498 = vrz[70];
    const double C43652 = vrz[71];
    const double C43667 = vrz[72];
    const double C43682 = vrz[73];
    const double C43697 = vrz[74];
    const double C43712 = vrz[75];
    const double C43741 = vrz[76];
    const double C43756 = vrz[77];
    const double C43785 = vrz[78];
    const double C43800 = vrz[79];
    const double C43926 = vrz[80];
    const double C43941 = vrz[81];
    const double C43970 = vrz[82];
    const double C43986 = vrz[83];
    const double C29167 = 2 * q;
    const double C44315 = C33990 * p;
    const double C44314 = C33860 * p;
    const double C44313 = C33845 * p;
    const double C44312 = 3 * C31026;
    const double C44311 = C33816 * p;
    const double C44310 = C30699 / q;
    const double C44309 = C33801 * p;
    const double C44308 = C31806 / q;
    const double C44307 = C33771 * p;
    const double C44306 = C33756 * p;
    const double C44305 = C33726 * p;
    const double C44304 = C31163 * p;
    const double C44303 = C33553 * p;
    const double C44302 = C33538 * p;
    const double C44301 = C29783 / q;
    const double C44300 = C33509 * p;
    const double C44299 = C33494 * p;
    const double C44298 = 3 * C29828;
    const double C44297 = C33464 * p;
    const double C44296 = C33449 * p;
    const double C44295 = C33434 * p;
    const double C44294 = C33419 * p;
    const double C44293 = C33404 * p;
    const double C44292 = 3 * C29558;
    const double C44291 = C33374 * p;
    const double C44290 = C33359 * p;
    const double C44289 = C33344 * p;
    const double C44288 = C29876 * p;
    const double C44287 = C33315 * p;
    const double C44286 = C29606 * p;
    const double C44285 = C33286 * p;
    const double C44275 = C30379 * p;
    const double C44263 = C32449 * p;
    const double C44260 = C32201 * p;
    const double C44258 = C32111 * p;
    const double C44254 = C32050 * p;
    const double C44251 = C31891 * p;
    const double C44247 = C31147 * p;
    const double C44246 = C31806 * p;
    const double C44242 = C29859 * p;
    const double C44235 = C31397 * p;
    const double C44230 = C31026 * p;
    const double C44229 = C31236 * p;
    const double C44226 = C31163 / q;
    const double C44225 = C31148 * p;
    const double C44221 = C31057 * p;
    const double C44216 = C30981 * p;
    const double C44215 = C30966 * p;
    const double C44212 = C30789 * p;
    const double C44207 = C30714 * p;
    const double C44206 = C30699 * p;
    const double C44203 = C30610 * p;
    const double C44199 = C29589 * p;
    const double C44193 = C30379 / q;
    const double C44188 = C30199 * p;
    const double C44183 = C29828 * p;
    const double C44182 = C30038 * p;
    const double C44178 = C29951 * p;
    const double C44175 = C29876 / q;
    const double C44174 = C29860 * p;
    const double C44169 = C29783 * p;
    const double C44168 = C29768 * p;
    const double C44162 = C29558 * p;
    const double C44161 = C29681 * p;
    const double C44156 = C29606 / q;
    const double C44155 = C29590 * p;
    const double C44149 = C29499 * p;
    const double C44148 = C29484 * p;
    const double C44147 = C29469 * p;
    const double C44146 = de * zCD;
    const double C44145 = be * zAB;
    const double C44138 = C29368 * p;
    const double C44137 = C29353 * p;
    const double C44136 = C29338 * p;
    const double C44135 = de * yCD;
    const double C44134 = be * yAB;
    const double C44130 = de * xCD;
    const double C44129 = be * xAB;
    const double C44566 = C38961 * p;
    const double C44565 = C38834 * p;
    const double C44564 = C38819 * p;
    const double C44563 = 3 * C36047;
    const double C44562 = C38789 * p;
    const double C44561 = C35726 / q;
    const double C44560 = C38774 * p;
    const double C44559 = C36809 / q;
    const double C44558 = C38745 * p;
    const double C44557 = C38730 * p;
    const double C44556 = C38699 * p;
    const double C44555 = C36180 * p;
    const double C44554 = C38530 * p;
    const double C44553 = C38515 * p;
    const double C44552 = C34829 / q;
    const double C44551 = C38486 * p;
    const double C44550 = C38471 * p;
    const double C44549 = 3 * C34873;
    const double C44548 = C38442 * p;
    const double C44547 = C38427 * p;
    const double C44546 = C38412 * p;
    const double C44545 = C38397 * p;
    const double C44544 = C38382 * p;
    const double C44543 = 3 * C34608;
    const double C44542 = C38353 * p;
    const double C44541 = C38338 * p;
    const double C44540 = C38323 * p;
    const double C44539 = C34919 * p;
    const double C44538 = C38294 * p;
    const double C44537 = C34654 * p;
    const double C44536 = C38265 * p;
    const double C44526 = C35410 * p;
    const double C44514 = C37442 * p;
    const double C44511 = C37198 * p;
    const double C44509 = C37111 * p;
    const double C44505 = C37052 * p;
    const double C44502 = C36894 * p;
    const double C44498 = C36164 * p;
    const double C44497 = C36809 * p;
    const double C44493 = C34903 * p;
    const double C44486 = C36410 * p;
    const double C44481 = C36047 * p;
    const double C44480 = C36253 * p;
    const double C44477 = C36180 / q;
    const double C44476 = C36165 * p;
    const double C44472 = C36077 * p;
    const double C44467 = C36003 * p;
    const double C44466 = C35988 * p;
    const double C44463 = C35814 * p;
    const double C44458 = C35741 * p;
    const double C44457 = C35726 * p;
    const double C44454 = C35637 * p;
    const double C44450 = C34638 * p;
    const double C44444 = C35410 / q;
    const double C44439 = C35236 * p;
    const double C44434 = C34873 * p;
    const double C44433 = C35079 * p;
    const double C44429 = C34992 * p;
    const double C44426 = C34919 / q;
    const double C44425 = C34904 * p;
    const double C44420 = C34829 * p;
    const double C44419 = C34814 * p;
    const double C44413 = C34608 * p;
    const double C44412 = C34727 * p;
    const double C44407 = C34654 / q;
    const double C44406 = C34639 * p;
    const double C44400 = C34550 * p;
    const double C44399 = C34535 * p;
    const double C44398 = C34520 * p;
    const double C44391 = C34419 * p;
    const double C44390 = C34404 * p;
    const double C44389 = C34389 * p;
    const double C44814 = C43926 * p;
    const double C44813 = C43800 * p;
    const double C44812 = C43785 * p;
    const double C44811 = 3 * C41015;
    const double C44810 = C43756 * p;
    const double C44809 = C40694 / q;
    const double C44808 = C43741 * p;
    const double C44807 = C41777 / q;
    const double C44806 = C43712 * p;
    const double C44805 = C43697 * p;
    const double C44804 = C43667 * p;
    const double C44803 = C41148 * p;
    const double C44802 = C43498 * p;
    const double C44801 = C43483 * p;
    const double C44800 = C39797 / q;
    const double C44799 = C43454 * p;
    const double C44798 = C43439 * p;
    const double C44797 = 3 * C39841;
    const double C44796 = C43410 * p;
    const double C44795 = C43395 * p;
    const double C44794 = C43380 * p;
    const double C44793 = C43365 * p;
    const double C44792 = C43350 * p;
    const double C44791 = 3 * C39576;
    const double C44790 = C43321 * p;
    const double C44789 = C43306 * p;
    const double C44788 = C43291 * p;
    const double C44787 = C39887 * p;
    const double C44786 = C43262 * p;
    const double C44785 = C39622 * p;
    const double C44784 = C43233 * p;
    const double C44774 = C40378 * p;
    const double C44762 = C42410 * p;
    const double C44759 = C42166 * p;
    const double C44757 = C42079 * p;
    const double C44753 = C42020 * p;
    const double C44750 = C41862 * p;
    const double C44746 = C41132 * p;
    const double C44745 = C41777 * p;
    const double C44741 = C39871 * p;
    const double C44734 = C41378 * p;
    const double C44729 = C41015 * p;
    const double C44728 = C41221 * p;
    const double C44725 = C41148 / q;
    const double C44724 = C41133 * p;
    const double C44720 = C41045 * p;
    const double C44715 = C40971 * p;
    const double C44714 = C40956 * p;
    const double C44711 = C40782 * p;
    const double C44706 = C40709 * p;
    const double C44705 = C40694 * p;
    const double C44702 = C40605 * p;
    const double C44698 = C39606 * p;
    const double C44692 = C40378 / q;
    const double C44687 = C40204 * p;
    const double C44682 = C39841 * p;
    const double C44681 = C40047 * p;
    const double C44677 = C39960 * p;
    const double C44674 = C39887 / q;
    const double C44673 = C39872 * p;
    const double C44668 = C39797 * p;
    const double C44667 = C39782 * p;
    const double C44661 = C39576 * p;
    const double C44660 = C39695 * p;
    const double C44655 = C39622 / q;
    const double C44654 = C39607 * p;
    const double C44648 = C39518 * p;
    const double C44647 = C39503 * p;
    const double C44646 = C39488 * p;
    const double C44639 = C39387 * p;
    const double C44638 = C39372 * p;
    const double C44637 = C39357 * p;
    const double C44284 = C33271 / C29167;
    const double C44280 = C31906 / C29167;
    const double C44279 = C29876 / C29167;
    const double C44278 = C31163 / C29167;
    const double C44277 = C30379 / C29167;
    const double C44273 = C29233 / C29167;
    const double C44271 = C30625 / C29167;
    const double C44270 = C29606 / C29167;
    const double C44269 = C32050 / C29167;
    const double C44265 = C31891 / C29167;
    const double C44262 = C31806 / C29167;
    const double C44257 = C31907 / C29167;
    const double C44256 = C32080 / C29167;
    const double C44253 = C31147 / C29167;
    const double C44241 = C31705 / C29167;
    const double C44240 = C29859 / C29167;
    const double C44239 = C30981 / C29167;
    const double C44237 = C30699 / C29167;
    const double C44233 = C30610 / C29167;
    const double C44220 = C30714 / C29167;
    const double C44219 = C31026 / C29167;
    const double C44211 = C30626 / C29167;
    const double C44210 = C30758 / C29167;
    const double C44198 = C30509 / C29167;
    const double C44197 = C29589 / C29167;
    const double C44192 = C29783 / C29167;
    const double C44190 = C29484 / C29167;
    const double C44186 = C29353 / C29167;
    const double C44173 = C29499 / C29167;
    const double C44172 = C29828 / C29167;
    const double C44154 = C29368 / C29167;
    const double C44153 = C29558 / C29167;
    const double C44133 = C29186 / C29167;
    const double C44132 = C29170 / C29167;
    const double C44131 = C29153 / C29167;
    const double C44535 = C38250 / C29167;
    const double C44531 = C36909 / C29167;
    const double C44530 = C34919 / C29167;
    const double C44529 = C36180 / C29167;
    const double C44528 = C35410 / C29167;
    const double C44524 = C34286 / C29167;
    const double C44522 = C35652 / C29167;
    const double C44521 = C34654 / C29167;
    const double C44520 = C37052 / C29167;
    const double C44516 = C36894 / C29167;
    const double C44513 = C36809 / C29167;
    const double C44508 = C36910 / C29167;
    const double C44507 = C37081 / C29167;
    const double C44504 = C36164 / C29167;
    const double C44492 = C36710 / C29167;
    const double C44491 = C34903 / C29167;
    const double C44490 = C36003 / C29167;
    const double C44488 = C35726 / C29167;
    const double C44484 = C35637 / C29167;
    const double C44471 = C35741 / C29167;
    const double C44470 = C36047 / C29167;
    const double C44462 = C35653 / C29167;
    const double C44461 = C35784 / C29167;
    const double C44449 = C35538 / C29167;
    const double C44448 = C34638 / C29167;
    const double C44443 = C34829 / C29167;
    const double C44441 = C34535 / C29167;
    const double C44437 = C34404 / C29167;
    const double C44424 = C34550 / C29167;
    const double C44423 = C34873 / C29167;
    const double C44405 = C34419 / C29167;
    const double C44404 = C34608 / C29167;
    const double C44388 = C34242 / C29167;
    const double C44387 = C34226 / C29167;
    const double C44386 = C34210 / C29167;
    const double C44783 = C43218 / C29167;
    const double C44779 = C41877 / C29167;
    const double C44778 = C39887 / C29167;
    const double C44777 = C41148 / C29167;
    const double C44776 = C40378 / C29167;
    const double C44772 = C39254 / C29167;
    const double C44770 = C40620 / C29167;
    const double C44769 = C39622 / C29167;
    const double C44768 = C42020 / C29167;
    const double C44764 = C41862 / C29167;
    const double C44761 = C41777 / C29167;
    const double C44756 = C41878 / C29167;
    const double C44755 = C42049 / C29167;
    const double C44752 = C41132 / C29167;
    const double C44740 = C41678 / C29167;
    const double C44739 = C39871 / C29167;
    const double C44738 = C40971 / C29167;
    const double C44736 = C40694 / C29167;
    const double C44732 = C40605 / C29167;
    const double C44719 = C40709 / C29167;
    const double C44718 = C41015 / C29167;
    const double C44710 = C40621 / C29167;
    const double C44709 = C40752 / C29167;
    const double C44697 = C40506 / C29167;
    const double C44696 = C39606 / C29167;
    const double C44691 = C39797 / C29167;
    const double C44689 = C39503 / C29167;
    const double C44685 = C39372 / C29167;
    const double C44672 = C39518 / C29167;
    const double C44671 = C39841 / C29167;
    const double C44653 = C39387 / C29167;
    const double C44652 = C39576 / C29167;
    const double C44636 = C39210 / C29167;
    const double C44635 = C39194 / C29167;
    const double C44634 = C39178 / C29167;
    const double C44381 = C44314 / q;
    const double C44380 = C44313 / q;
    const double C44379 = C44312 / C29167;
    const double C44378 = C44311 / q;
    const double C44377 = C44309 / q;
    const double C44376 = C44307 / q;
    const double C44372 = C44303 / q;
    const double C44371 = C44302 / q;
    const double C44370 = C44300 / q;
    const double C44373 = C44299 / q;
    const double C44369 = C44298 / C29167;
    const double C44368 = C44297 / q;
    const double C44375 = C44296 / q;
    const double C44367 = C44295 / q;
    const double C44374 = C44294 / q;
    const double C44366 = C44293 / q;
    const double C44365 = C44292 / C29167;
    const double C44364 = C44291 / q;
    const double C44363 = C44289 / q;
    const double C44357 = C44230 / q;
    const double C44356 = C44229 / q;
    const double C44354 = C44225 / q;
    const double C44361 = C44221 / q;
    const double C44341 = C44183 / q;
    const double C44340 = C44182 / q;
    const double C44348 = C44178 / q;
    const double C44336 = C44174 / q;
    const double C44346 = C44168 / q;
    const double C44329 = C44162 / q;
    const double C44328 = C44161 / q;
    const double C44325 = C44155 / q;
    const double C44321 = C44145 + C44146;
    const double C44317 = C44134 + C44135;
    const double C44316 = C44129 + C44130;
    const double C44629 = C44565 / q;
    const double C44628 = C44564 / q;
    const double C44627 = C44563 / C29167;
    const double C44626 = C44562 / q;
    const double C44625 = C44560 / q;
    const double C44624 = C44558 / q;
    const double C44620 = C44554 / q;
    const double C44619 = C44553 / q;
    const double C44618 = C44551 / q;
    const double C44621 = C44550 / q;
    const double C44617 = C44549 / C29167;
    const double C44616 = C44548 / q;
    const double C44623 = C44547 / q;
    const double C44615 = C44546 / q;
    const double C44622 = C44545 / q;
    const double C44614 = C44544 / q;
    const double C44613 = C44543 / C29167;
    const double C44612 = C44542 / q;
    const double C44611 = C44540 / q;
    const double C44605 = C44481 / q;
    const double C44604 = C44480 / q;
    const double C44602 = C44476 / q;
    const double C44609 = C44472 / q;
    const double C44589 = C44434 / q;
    const double C44588 = C44433 / q;
    const double C44596 = C44429 / q;
    const double C44584 = C44425 / q;
    const double C44594 = C44419 / q;
    const double C44577 = C44413 / q;
    const double C44576 = C44412 / q;
    const double C44573 = C44406 / q;
    const double C44877 = C44813 / q;
    const double C44876 = C44812 / q;
    const double C44875 = C44811 / C29167;
    const double C44874 = C44810 / q;
    const double C44873 = C44808 / q;
    const double C44872 = C44806 / q;
    const double C44868 = C44802 / q;
    const double C44867 = C44801 / q;
    const double C44866 = C44799 / q;
    const double C44869 = C44798 / q;
    const double C44865 = C44797 / C29167;
    const double C44864 = C44796 / q;
    const double C44871 = C44795 / q;
    const double C44863 = C44794 / q;
    const double C44870 = C44793 / q;
    const double C44862 = C44792 / q;
    const double C44861 = C44791 / C29167;
    const double C44860 = C44790 / q;
    const double C44859 = C44788 / q;
    const double C44853 = C44729 / q;
    const double C44852 = C44728 / q;
    const double C44850 = C44724 / q;
    const double C44857 = C44720 / q;
    const double C44837 = C44682 / q;
    const double C44836 = C44681 / q;
    const double C44844 = C44677 / q;
    const double C44832 = C44673 / q;
    const double C44842 = C44667 / q;
    const double C44825 = C44661 / q;
    const double C44824 = C44660 / q;
    const double C44821 = C44654 / q;
    const double C8090 = -(C29153 * C44321 + C44147) / q;
    const double C8091 = -(C29170 * C44321 + C44148) / q;
    const double C8101 = -(C29186 * C44321 + C44149) / q;
    const double C8257 = -(C29558 * C44321 + C44168) / q;
    const double C8258 = -(C29368 * C44321 + C44169) / q;
    const double C8419 = C29499 / q - (C29828 * C44321) / q - C44340;
    const double C8420 = C44133 - (C29499 * C44321) / q - C44341;
    const double C8518 = -(C29353 * C44321 + C44188) / q;
    const double C8599 = C44132 - (C29484 * C44321) / q - C44336;
    const double C8680 = C44154 - (C29783 * C44321) / q - C44348;
    const double C8839 = -(C29589 * C44321 + C44206) / q;
    const double C8849 = -(C30509 * C44321 + C44207) / q;
    const double C9004 = -(C30758 * C44321 + C44215) / q;
    const double C9005 = -(C30626 * C44321 + C44216) / q;
    const double C9166 = C30714 / q - (C31026 * C44321) / q - C44356;
    const double C9167 = C44198 - (C30714 * C44321) / q - C44357;
    const double C9265 = -(C30610 * C44321 + C44235) / q;
    const double C9346 = C44197 - (C30699 * C44321) / q - C44361;
    const double C9427 = C44211 - (C30981 * C44321) / q - C44354;
    const double C9586 = C44175 - (C29859 * C44321) / q - C44251 / q;
    const double C9596 = C31906 / q - (C31705 * C44321) / q - (C31907 * p) / q;
    const double C9744 = C44226 - (C31147 * C44321) / q - C44254 / q;
    const double C9904 =
        (2 * C31907) / q - (C32080 * C44321) / q - (C32288 * p) / q;
    const double C9905 =
        (3 * C31705) / C29167 - (C31907 * C44321) / q - (C32080 * p) / q;
    const double C10003 = C44193 - (C31806 * C44321) / q - C44263 / q;
    const double C10084 =
        (3 * C29859) / C29167 - (C31891 * C44321) / q - C44258 / q;
    const double C10165 =
        (3 * C31147) / C29167 - (C32050 * C44321) / q - C44260 / q;
    const double C10326 = -(C29606 * C44321 + C44275) / q;
    const double C10545 = C44270 - (C30379 * C44321) / q - C44246 / q;
    const double C10722 = C44273 - (C29876 * C44321) / q - C44242 / q;
    const double C11181 = C44271 - (C31163 * C44321) / q - C44247 / q;
    const double C29294 = -(C29202 * C44321 + C44287) / q;
    const double C29323 = -(C29233 * C44321 + C44288) / q;
    const double C29426 = -(C29338 * C44321 + C44290) / q;
    const double C29514 = C44131 - (C29469 * C44321) / q - C44364;
    const double C29652 = -(C29590 * C44321 + C44294) / q;
    const double C29739 = -(C29681 * C44321 + C44296) / q;
    const double C29798 = C44153 - (C29768 * C44321) / q - C44368;
    const double C29922 = C29484 / q - (C29860 * C44321) / q - C44370;
    const double C30009 = C44301 - (C29951 * C44321) / q - C44371;
    const double C30067 = C44369 - (C30038 * C44321) / q - C44372;
    const double C30214 = C44186 - (C30199 * C44321) / q - C44373;
    const double C30684 = -(C30625 * C44321 + C44304) / q;
    const double C30850 = -(C30789 * C44321 + C44305) / q;
    const double C30937 = -(C30879 * C44321 + C44306) / q;
    const double C30996 = C44210 - (C30966 * C44321) / q - C44376;
    const double C31118 = C44310 - (C31057 * C44321) / q - C44378;
    const double C31207 = C30981 / q - (C31148 * C44321) / q - C44380;
    const double C31265 = C44379 - (C31236 * C44321) / q - C44381;
    const double C31412 = C44233 - (C31397 * C44321) / q - C44377;
    const double C31936 = C44284 - (C31906 * C44321) / q - (C31705 * p) / q;
    const double C32172 =
        (2 * C31891) / q - (C32111 * C44321) / q - (C34005 * p) / q;
    const double C32259 =
        (2 * C32050) / q - (C32201 * C44321) / q - (C34034 * p) / q;
    const double C32317 =
        (5 * C32080) / C29167 - (C32288 * C44321) / q - (C34049 * p) / q;
    const double C32464 =
        (3 * C31806) / C29167 - (C32449 * C44321) / q - C44315 / q;
    const double C17021 = -(C34210 * C44321 + C44398) / q;
    const double C17022 = -(C34226 * C44321 + C44399) / q;
    const double C17031 = -(C34242 * C44321 + C44400) / q;
    const double C17185 = -(C34608 * C44321 + C44419) / q;
    const double C17186 = -(C34419 * C44321 + C44420) / q;
    const double C17446 = -(C34404 * C44321 + C44439) / q;
    const double C17752 = -(C34638 * C44321 + C44457) / q;
    const double C17761 = -(C35538 * C44321 + C44458) / q;
    const double C17922 = -(C35784 * C44321 + C44466) / q;
    const double C17923 = -(C35653 * C44321 + C44467) / q;
    const double C18184 = -(C35637 * C44321 + C44486) / q;
    const double C18490 = C44426 - (C34903 * C44321) / q - C44502 / q;
    const double C18499 = C36909 / q - (C36710 * C44321) / q - (C36910 * p) / q;
    const double C18653 = C44477 - (C36164 * C44321) / q - C44505 / q;
    const double C18814 =
        (2 * C36910) / q - (C37081 * C44321) / q - (C37285 * p) / q;
    const double C18815 =
        (3 * C36710) / C29167 - (C36910 * C44321) / q - (C37081 * p) / q;
    const double C18913 = C44444 - (C36809 * C44321) / q - C44514 / q;
    const double C18994 =
        (3 * C34903) / C29167 - (C36894 * C44321) / q - C44509 / q;
    const double C19075 =
        (3 * C36164) / C29167 - (C37052 * C44321) / q - C44511 / q;
    const double C19220 = -(C34654 * C44321 + C44526) / q;
    const double C19437 = C44521 - (C35410 * C44321) / q - C44497 / q;
    const double C19598 = C44524 - (C34919 * C44321) / q - C44493 / q;
    const double C20039 = C44522 - (C36180 * C44321) / q - C44498 / q;
    const double C34345 = -(C34257 * C44321 + C44538) / q;
    const double C34374 = -(C34286 * C44321 + C44539) / q;
    const double C34477 = -(C34389 * C44321 + C44541) / q;
    const double C34698 = -(C34639 * C44321 + C44545) / q;
    const double C34785 = -(C34727 * C44321 + C44547) / q;
    const double C35711 = -(C35652 * C44321 + C44555) / q;
    const double C35872 = -(C35814 * C44321 + C44556) / q;
    const double C35959 = -(C35901 * C44321 + C44557) / q;
    const double C36939 = C44535 - (C36909 * C44321) / q - (C36710 * p) / q;
    const double C37169 =
        (2 * C36894) / q - (C37111 * C44321) / q - (C38976 * p) / q;
    const double C37256 =
        (2 * C37052) / q - (C37198 * C44321) / q - (C39006 * p) / q;
    const double C37314 =
        (5 * C37081) / C29167 - (C37285 * C44321) / q - (C39021 * p) / q;
    const double C37457 =
        (3 * C36809) / C29167 - (C37442 * C44321) / q - C44566 / q;
    const double C25886 = -(C29198 * be + C39178 * C44321 + C44646) / q;
    const double C25887 = -(C29214 * be + C39194 * C44321 + C44647) / q;
    const double C25896 = -(C29229 * be + C39210 * C44321 + C44648) / q;
    const double C26050 = -(C29585 * be + C39576 * C44321 + C44667) / q;
    const double C26051 = -(C29602 * be + C39387 * C44321 + C44668) / q;
    const double C26311 = -(C30109 * be + C39372 * C44321 + C44687) / q;
    const double C26617 = -(C30521 * be + C39606 * C44321 + C44705) / q;
    const double C26626 = -(C30536 * be + C40506 * C44321 + C44706) / q;
    const double C26779 = -(C30785 * be + C40752 * C44321 + C44714) / q;
    const double C26780 = -(C30801 * be + C40621 * C44321 + C44715) / q;
    const double C27040 = -(C31307 * be + C40605 * C44321 + C44734) / q;
    const double C27346 =
        C44674 - (C31717 * be + C39871 * C44321) / q - C44750 / q;
    const double C27355 =
        C41877 / q - (C31732 * be + C41678 * C44321) / q - (C41878 * p) / q;
    const double C27501 =
        C44725 - (C31962 * be + C41132 * C44321) / q - C44753 / q;
    const double C27669 = (2 * C41878) / q -
                          (C32107 * be + C42049 * C44321) / q -
                          (C42253 * p) / q;
    const double C27670 = (3 * C41678) / C29167 -
                          (C32123 * be + C41878 * C44321) / q -
                          (C42049 * p) / q;
    const double C27769 =
        C44692 - (C32359 * be + C41777 * C44321) / q - C44762 / q;
    const double C27850 = (3 * C39871) / C29167 -
                          (C32492 * be + C41862 * C44321) / q - C44757 / q;
    const double C27931 = (3 * C41132) / C29167 -
                          (C32625 * be + C42020 * C44321) / q - C44759 / q;
    const double C28076 = -(C32756 * be + C39622 * C44321 + C44774) / q;
    const double C28293 =
        C44769 - (C32883 * be + C40378 * C44321) / q - C44745 / q;
    const double C28454 =
        C44772 - (C33011 * be + C39887 * C44321) / q - C44741 / q;
    const double C28895 =
        C44770 - (C33139 * be + C41148 * C44321) / q - C44746 / q;
    const double C39313 = -(C33252 * be + C39225 * C44321 + C44786) / q;
    const double C39342 = -(C33267 * be + C39254 * C44321 + C44787) / q;
    const double C39445 = -(C33565 * be + C39357 * C44321 + C44789) / q;
    const double C39666 = -(C33386 * be + C39607 * C44321 + C44793) / q;
    const double C39753 = -(C33872 * be + C39695 * C44321 + C44795) / q;
    const double C40679 = -(C34162 * be + C40620 * C44321 + C44803) / q;
    const double C40840 = -(C33693 * be + C40782 * C44321 + C44804) / q;
    const double C40927 = -(C38710 * be + C40869 * C44321 + C44805) / q;
    const double C41907 =
        C44783 - (C34177 * be + C41877 * C44321) / q - (C41678 * p) / q;
    const double C42137 = (2 * C41862) / q -
                          (C33972 * be + C42079 * C44321) / q -
                          (C43941 * p) / q;
    const double C42224 = (2 * C42020) / q -
                          (C38987 * be + C42166 * C44321) / q -
                          (C43970 * p) / q;
    const double C42282 = (5 * C42049) / C29167 -
                          (C43980 * be + C42253 * C44321) / q -
                          (C43986 * p) / q;
    const double C42425 = (3 * C41777) / C29167 -
                          (C34133 * be + C42410 * C44321) / q - C44814 / q;
    const double C8027 = -(C29153 * C44317 + C44136) / q;
    const double C8028 = -(C29170 * C44317 + C44137) / q;
    const double C8038 = -(C29186 * C44317 + C44138) / q;
    const double C8203 = C29368 / q - (C29558 * C44317) / q - C44328;
    const double C8204 = C44133 - (C29368 * C44317) / q - C44329;
    const double C8365 = -(C29828 * C44317 + C44178) / q;
    const double C8366 = -(C29499 * C44317 + C44169) / q;
    const double C8491 = C44132 - (C29353 * C44317) / q - C44325;
    const double C8572 = -(C29484 * C44317 + C44188) / q;
    const double C8653 = C44173 - (C29783 * C44317) / q - C44346;
    const double C8779 = C44156 - (C29589 * C44317) / q - C44203 / q;
    const double C8789 = C30625 / q - (C30509 * C44317) / q - (C30626 * p) / q;
    const double C8950 =
        (2 * C30626) / q - (C30758 * C44317) / q - (C30879 * p) / q;
    const double C8951 =
        (3 * C30509) / C29167 - (C30626 * C44317) / q - (C30758 * p) / q;
    const double C9112 = C31147 / q - (C31026 * C44317) / q - C44354;
    const double C9113 = C44226 - (C30714 * C44317) / q - C44216 / q;
    const double C9238 =
        (3 * C29589) / C29167 - (C30610 * C44317) / q - C44212 / q;
    const double C9319 = C44193 - (C30699 * C44317) / q - C44235 / q;
    const double C9400 =
        (3 * C30714) / C29167 - (C30981 * C44317) / q - C44215 / q;
    const double C9526 = -(C29859 * C44317 + C44246) / q;
    const double C9536 = -(C31705 * C44317 + C44247) / q;
    const double C9693 = C44241 - (C31147 * C44317) / q - C44357;
    const double C9850 = -(C32080 * C44317 + C44260) / q;
    const double C9851 = -(C31907 * C44317 + C44254) / q;
    const double C9976 = C44240 - (C31806 * C44317) / q - C44361;
    const double C10057 = -(C31891 * C44317 + C44263) / q;
    const double C10138 = C44257 - (C32050 * C44317) / q - C44356;
    const double C10269 = C44273 - (C29606 * C44317) / q - C44199 / q;
    const double C10494 = C44279 - (C30379 * C44317) / q - C44206 / q;
    const double C10665 = -(C29876 * C44317 + C44275) / q;
    const double C11124 = C44280 - (C31163 * C44317) / q - C44207 / q;
    const double C29249 = -(C29202 * C44317 + C44285) / q;
    const double C29278 = -(C29233 * C44317 + C44286) / q;
    const double C29383 = C44131 - (C29338 * C44317) / q - C44363;
    const double C29622 = C29353 / q - (C29590 * C44317) / q - C44366;
    const double C29710 = C44365 - (C29681 * C44317) / q - C44367;
    const double C29892 = -(C29860 * C44317 + C44299) / q;
    const double C29980 = C44172 - (C29951 * C44317) / q - C44368;
    const double C30261 = -(C29469 * C44317 + C44290) / q;
    const double C30305 = C44190 - (C30199 * C44317) / q - C44374;
    const double C30438 = C44301 - (C29768 * C44317) / q - C44375;
    const double C30655 = C44284 - (C30625 * C44317) / q - (C30509 * p) / q;
    const double C30820 =
        (2 * C30610) / q - (C30789 * C44317) / q - (C33711 * p) / q;
    const double C30908 =
        (5 * C30758) / C29167 - (C30879 * C44317) / q - (C33741 * p) / q;
    const double C31088 = C44308 - (C31057 * C44317) / q - C44377;
    const double C31178 = C44379 - (C31148 * C44317) / q - C44376;
    const double C31502 =
        (3 * C30699) / C29167 - (C31397 * C44317) / q - C44305 / q;
    const double C31634 = (2 * C30981) / q - (C30966 * C44317) / q - C44306 / q;
    const double C32142 = -(C32111 * C44317 + C44315) / q;
    const double C32230 = C44256 - (C32201 * C44317) / q - C44381;
    const double C32511 = -(C30038 * C44317 + C44302) / q;
    const double C32555 = C44265 - (C32449 * C44317) / q - C44378;
    const double C32687 = C32050 / q - (C31236 * C44317) / q - C44380;
    const double C33029 = -(C31906 * C44317 + C44304) / q;
    const double C16964 = -(C29198 * be + C34210 * C44317 + C44389) / q;
    const double C16965 = -(C29214 * be + C34226 * C44317 + C44390) / q;
    const double C16974 = -(C29229 * be + C34242 * C44317 + C44391) / q;
    const double C17293 = -(C29855 * be + C34873 * C44317 + C44429) / q;
    const double C17294 = -(C29872 * be + C34550 * C44317 + C44420) / q;
    const double C17500 = -(C30242 * be + C34535 * C44317 + C44439) / q;
    const double C17698 =
        C44407 - (C30521 * be + C34638 * C44317) / q - C44454 / q;
    const double C17707 =
        C35652 / q - (C30536 * be + C35538 * C44317) / q - (C35653 * p) / q;
    const double C17865 = (2 * C35653) / q -
                          (C30785 * be + C35784 * C44317) / q -
                          (C35901 * p) / q;
    const double C17866 = (3 * C35538) / C29167 -
                          (C30801 * be + C35653 * C44317) / q -
                          (C35784 * p) / q;
    const double C18032 =
        C44477 - (C31069 * be + C35741 * C44317) / q - C44467 / q;
    const double C18157 = (3 * C34638) / C29167 -
                          (C31307 * be + C35637 * C44317) / q - C44463 / q;
    const double C18238 =
        C44444 - (C31440 * be + C35726 * C44317) / q - C44486 / q;
    const double C18319 = (3 * C35741) / C29167 -
                          (C31572 * be + C36003 * C44317) / q - C44466 / q;
    const double C18436 = -(C31717 * be + C34903 * C44317 + C44497) / q;
    const double C18445 = -(C31732 * be + C36710 * C44317 + C44498) / q;
    const double C18760 = -(C32107 * be + C37081 * C44317 + C44511) / q;
    const double C18761 = -(C32123 * be + C36910 * C44317 + C44505) / q;
    const double C18967 = -(C32492 * be + C36894 * C44317 + C44514) / q;
    const double C19169 =
        C44524 - (C32756 * be + C34654 * C44317) / q - C44450 / q;
    const double C19386 =
        C44530 - (C32883 * be + C35410 * C44317) / q - C44457 / q;
    const double C19547 = -(C33011 * be + C34919 * C44317 + C44526) / q;
    const double C19988 =
        C44531 - (C33139 * be + C36180 * C44317) / q - C44458 / q;
    const double C34301 = -(C33252 * be + C34257 * C44317 + C44536) / q;
    const double C34330 = -(C33267 * be + C34286 * C44317 + C44537) / q;
    const double C34934 = -(C33476 * be + C34904 * C44317 + C44550) / q;
    const double C35295 = -(C33594 * be + C34520 * C44317 + C44541) / q;
    const double C35682 =
        C44535 - (C34162 * be + C35652 * C44317) / q - (C35538 * p) / q;
    const double C35843 = (2 * C35637) / q -
                          (C33693 * be + C35814 * C44317) / q -
                          (C38684 * p) / q;
    const double C35930 = (5 * C35784) / C29167 -
                          (C38710 * be + C35901 * C44317) / q -
                          (C38715 * p) / q;
    const double C36511 = (3 * C35726) / C29167 -
                          (C33930 * be + C36410 * C44317) / q - C44556 / q;
    const double C36639 =
        (2 * C36003) / q - (C38915 * be + C35988 * C44317) / q - C44557 / q;
    const double C37140 = -(C33972 * be + C37111 * C44317 + C44566) / q;
    const double C37501 = -(C34090 * be + C35079 * C44317 + C44553) / q;
    const double C38011 = -(C34177 * be + C36909 * C44317 + C44555) / q;
    const double C25829 = -(C39178 * C44317 + C44637) / q;
    const double C25830 = -(C39194 * C44317 + C44638) / q;
    const double C25839 = -(C39210 * C44317 + C44639) / q;
    const double C26158 = -(C39841 * C44317 + C44677) / q;
    const double C26159 = -(C39518 * C44317 + C44668) / q;
    const double C26365 = -(C39503 * C44317 + C44687) / q;
    const double C26563 = C44655 - (C39606 * C44317) / q - C44702 / q;
    const double C26572 = C40620 / q - (C40506 * C44317) / q - (C40621 * p) / q;
    const double C26725 =
        (2 * C40621) / q - (C40752 * C44317) / q - (C40869 * p) / q;
    const double C26726 =
        (3 * C40506) / C29167 - (C40621 * C44317) / q - (C40752 * p) / q;
    const double C26888 = C44725 - (C40709 * C44317) / q - C44715 / q;
    const double C27013 =
        (3 * C39606) / C29167 - (C40605 * C44317) / q - C44711 / q;
    const double C27094 = C44692 - (C40694 * C44317) / q - C44734 / q;
    const double C27175 =
        (3 * C40709) / C29167 - (C40971 * C44317) / q - C44714 / q;
    const double C27292 = -(C39871 * C44317 + C44745) / q;
    const double C27301 = -(C41678 * C44317 + C44746) / q;
    const double C27612 = -(C42049 * C44317 + C44759) / q;
    const double C27613 = -(C41878 * C44317 + C44753) / q;
    const double C27823 = -(C41862 * C44317 + C44762) / q;
    const double C28025 = C44772 - (C39622 * C44317) / q - C44698 / q;
    const double C28242 = C44778 - (C40378 * C44317) / q - C44705 / q;
    const double C28403 = -(C39887 * C44317 + C44774) / q;
    const double C28844 = C44779 - (C41148 * C44317) / q - C44706 / q;
    const double C39269 = -(C39225 * C44317 + C44784) / q;
    const double C39298 = -(C39254 * C44317 + C44785) / q;
    const double C39902 = -(C39872 * C44317 + C44798) / q;
    const double C40263 = -(C39488 * C44317 + C44789) / q;
    const double C40650 = C44783 - (C40620 * C44317) / q - (C40506 * p) / q;
    const double C40811 =
        (2 * C40605) / q - (C40782 * C44317) / q - (C43652 * p) / q;
    const double C40898 =
        (5 * C40752) / C29167 - (C40869 * C44317) / q - (C43682 * p) / q;
    const double C41479 =
        (3 * C40694) / C29167 - (C41378 * C44317) / q - C44804 / q;
    const double C41607 = (2 * C40971) / q - (C40956 * C44317) / q - C44805 / q;
    const double C42108 = -(C42079 * C44317 + C44814) / q;
    const double C42469 = -(C40047 * C44317 + C44801) / q;
    const double C42979 = -(C41877 * C44317 + C44803) / q;
    const double C7964 = (2 * C29170) / q -
                         (C29198 * be + C29153 * C44316) / q - (C29202 * p) / q;
    const double C7965 = (3 * C29186) / C29167 -
                         (C29214 * be + C29170 * C44316) / q - (C29153 * p) / q;
    const double C7975 =
        C29233 / q - (C29229 * be + C29186 * C44316) / q - (C29170 * p) / q;
    const double C8149 =
        C29589 / q - (C29585 * be + C29558 * C44316) / q - C44325;
    const double C8150 =
        C44156 - (C29602 * be + C29368 * C44316) / q - C44137 / q;
    const double C8311 =
        C29859 / q - (C29855 * be + C29828 * C44316) / q - C44336;
    const double C8312 =
        C44175 - (C29872 * be + C29499 * C44316) / q - C44148 / q;
    const double C8464 = (3 * C29368) / C29167 -
                         (C30109 * be + C29353 * C44316) / q - C44136 / q;
    const double C8545 = (3 * C29499) / C29167 -
                         (C30242 * be + C29484 * C44316) / q - C44147 / q;
    const double C8626 =
        C44193 - (C30375 * be + C29783 * C44316) / q - C44188 / q;
    const double C8719 = C44198 - (C30521 * be + C29589 * C44316) / q - C44329;
    const double C8729 = -(C30536 * be + C30509 * C44316 + C44199) / q;
    const double C8896 = -(C30785 * be + C30758 * C44316 + C44212) / q;
    const double C8897 = -(C30801 * be + C30626 * C44316 + C44203) / q;
    const double C9058 = -(C31053 * be + C31026 * C44316 + C44221) / q;
    const double C9059 = -(C31069 * be + C30714 * C44316 + C44206) / q;
    const double C9211 = C44211 - (C31307 * be + C30610 * C44316) / q - C44328;
    const double C9292 = C44220 - (C31440 * be + C30699 * C44316) / q - C44346;
    const double C9373 = -(C31572 * be + C30981 * C44316 + C44235) / q;
    const double C9466 = C44241 - (C31717 * be + C29859 * C44316) / q - C44341;
    const double C9476 = -(C31732 * be + C31705 * C44316 + C44242) / q;
    const double C9642 = -(C31962 * be + C31147 * C44316 + C44246) / q;
    const double C9796 = -(C32107 * be + C32080 * C44316 + C44258) / q;
    const double C9797 = -(C32123 * be + C31907 * C44316 + C44251) / q;
    const double C9949 = C44253 - (C32359 * be + C31806 * C44316) / q - C44348;
    const double C10030 = C44257 - (C32492 * be + C31891 * C44316) / q - C44340;
    const double C10111 = -(C32625 * be + C32050 * C44316 + C44263) / q;
    const double C10212 =
        C44271 - (C32756 * be + C29606 * C44316) / q - C44138 / q;
    const double C10443 =
        C44278 - (C32883 * be + C30379 * C44316) / q - C44169 / q;
    const double C10608 =
        C44280 - (C33011 * be + C29876 * C44316) / q - C44149 / q;
    const double C11067 = -(C33139 * be + C31163 * C44316 + C44275) / q;
    const double C29154 = (5 * C29153) / C29167 -
                          (C33252 * be + C29202 * C44316) / q -
                          (C33256 * p) / q;
    const double C29185 =
        C44284 - (C33267 * be + C29233 * C44316) / q - (C29186 * p) / q;
    const double C29559 = C44365 - (C33386 * be + C29590 * C44316) / q - C44363;
    const double C29829 = C44369 - (C33476 * be + C29860 * C44316) / q - C44364;
    const double C30097 =
        (2 * C29353) / q - (C33565 * be + C29338 * C44316) / q - C44285 / q;
    const double C30230 =
        (2 * C29484) / q - (C33594 * be + C29469 * C44316) / q - C44287 / q;
    const double C30363 = (3 * C29783) / C29167 -
                          (C33637 * be + C30199 * C44316) / q - C44290 / q;
    const double C30759 = C44210 - (C33693 * be + C30789 * C44316) / q - C44367;
    const double C31027 = C44219 - (C33783 * be + C31057 * C44316) / q - C44368;
    const double C31295 =
        C30610 / q - (C33872 * be + C29681 * C44316) / q - C44366;
    const double C31428 = C44310 - (C33901 * be + C29768 * C44316) / q - C44374;
    const double C31560 = C44239 - (C33930 * be + C31397 * C44316) / q - C44375;
    const double C32081 = C44256 - (C33972 * be + C32111 * C44316) / q - C44372;
    const double C32347 = C44308 - (C34061 * be + C29951 * C44316) / q - C44373;
    const double C32480 =
        C31891 / q - (C34090 * be + C30038 * C44316) / q - C44370;
    const double C32613 = C44269 - (C34133 * be + C32449 * C44316) / q - C44371;
    const double C32744 = -(C34162 * be + C30625 * C44316 + C44286) / q;
    const double C32999 = -(C34177 * be + C31906 * C44316 + C44288) / q;
    const double C16907 =
        (2 * C34226) / q - (C34210 * C44316) / q - (C34257 * p) / q;
    const double C16908 =
        (3 * C34242) / C29167 - (C34226 * C44316) / q - (C34210 * p) / q;
    const double C16917 = C34286 / q - (C34242 * C44316) / q - (C34226 * p) / q;
    const double C17078 = C44407 - (C34419 * C44316) / q - C44390 / q;
    const double C17240 = C44426 - (C34550 * C44316) / q - C44399 / q;
    const double C17392 =
        (3 * C34419) / C29167 - (C34404 * C44316) / q - C44389 / q;
    const double C17473 =
        (3 * C34550) / C29167 - (C34535 * C44316) / q - C44398 / q;
    const double C17554 = C44444 - (C34829 * C44316) / q - C44439 / q;
    const double C17653 = -(C35538 * C44316 + C44450) / q;
    const double C17808 = -(C35784 * C44316 + C44463) / q;
    const double C17809 = -(C35653 * C44316 + C44454) / q;
    const double C17977 = -(C36047 * C44316 + C44472) / q;
    const double C17978 = -(C35741 * C44316 + C44457) / q;
    const double C18292 = -(C36003 * C44316 + C44486) / q;
    const double C18391 = -(C36710 * C44316 + C44493) / q;
    const double C18545 = -(C36164 * C44316 + C44497) / q;
    const double C18706 = -(C37081 * C44316 + C44509) / q;
    const double C18707 = -(C36910 * C44316 + C44502) / q;
    const double C19021 = -(C37052 * C44316 + C44514) / q;
    const double C19118 = C44522 - (C34654 * C44316) / q - C44391 / q;
    const double C19335 = C44529 - (C35410 * C44316) / q - C44420 / q;
    const double C19496 = C44531 - (C34919 * C44316) / q - C44400 / q;
    const double C19937 = -(C36180 * C44316 + C44526) / q;
    const double C34211 =
        (5 * C34210) / C29167 - (C34257 * C44316) / q - (C38236 * p) / q;
    const double C34241 = C44535 - (C34286 * C44316) / q - (C34242 * p) / q;
    const double C35137 = (2 * C34404) / q - (C34389 * C44316) / q - C44536 / q;
    const double C35266 = (2 * C34535) / q - (C34520 * C44316) / q - C44538 / q;
    const double C35395 =
        (3 * C34829) / C29167 - (C35236 * C44316) / q - C44541 / q;
    const double C37729 = -(C35652 * C44316 + C44537) / q;
    const double C37982 = -(C36909 * C44316 + C44539) / q;
    const double C25772 =
        (2 * C39194) / q - (C39178 * C44316) / q - (C39225 * p) / q;
    const double C25773 =
        (3 * C39210) / C29167 - (C39194 * C44316) / q - (C39178 * p) / q;
    const double C25782 = C39254 / q - (C39210 * C44316) / q - (C39194 * p) / q;
    const double C25943 = C44655 - (C39387 * C44316) / q - C44638 / q;
    const double C26105 = C44674 - (C39518 * C44316) / q - C44647 / q;
    const double C26257 =
        (3 * C39387) / C29167 - (C39372 * C44316) / q - C44637 / q;
    const double C26338 =
        (3 * C39518) / C29167 - (C39503 * C44316) / q - C44646 / q;
    const double C26419 = C44692 - (C39797 * C44316) / q - C44687 / q;
    const double C26518 = -(C40506 * C44316 + C44698) / q;
    const double C26671 = -(C40752 * C44316 + C44711) / q;
    const double C26672 = -(C40621 * C44316 + C44702) / q;
    const double C26833 = -(C41015 * C44316 + C44720) / q;
    const double C26834 = -(C40709 * C44316 + C44705) / q;
    const double C27148 = -(C40971 * C44316 + C44734) / q;
    const double C27247 = -(C41678 * C44316 + C44741) / q;
    const double C27399 = -(C41132 * C44316 + C44745) / q;
    const double C27555 = -(C42049 * C44316 + C44757) / q;
    const double C27556 = -(C41878 * C44316 + C44750) / q;
    const double C27877 = -(C42020 * C44316 + C44762) / q;
    const double C27974 = C44770 - (C39622 * C44316) / q - C44639 / q;
    const double C28191 = C44777 - (C40378 * C44316) / q - C44668 / q;
    const double C28352 = C44779 - (C39887 * C44316) / q - C44648 / q;
    const double C28793 = -(C41148 * C44316 + C44774) / q;
    const double C39179 =
        (5 * C39178) / C29167 - (C39225 * C44316) / q - (C43204 * p) / q;
    const double C39209 = C44783 - (C39254 * C44316) / q - (C39210 * p) / q;
    const double C40105 = (2 * C39372) / q - (C39357 * C44316) / q - C44784 / q;
    const double C40234 = (2 * C39503) / q - (C39488 * C44316) / q - C44786 / q;
    const double C40363 =
        (3 * C39797) / C29167 - (C40204 * C44316) / q - C44789 / q;
    const double C42697 = -(C40620 * C44316 + C44785) / q;
    const double C42950 = -(C41877 * C44316 + C44787) / q;
    const double C37227 = C44507 - (C38987 * be + C37198 * C44317) / q - C44629;
    const double C36224 = C36003 / q - (C36165 * C44321) / q - C44628;
    const double C37672 =
        C37052 / q - (C39116 * be + C36253 * C44317) / q - C44628;
    const double C36282 = C44627 - (C36253 * C44321) / q - C44629;
    const double C36135 = C44561 - (C36077 * C44321) / q - C44626;
    const double C37544 = C44516 - (C34133 * be + C37442 * C44317) / q - C44626;
    const double C36106 = C44559 - (C33783 * be + C36077 * C44317) / q - C44625;
    const double C36425 = C44484 - (C36410 * C44321) / q - C44625;
    const double C36018 = C44461 - (C35988 * C44321) / q - C44624;
    const double C36195 = C44627 - (C38800 * be + C36165 * C44317) / q - C44624;
    const double C37082 = C44507 - (C37111 * C44316) / q - C44620;
    const double C35050 = C44552 - (C34992 * C44321) / q - C44619;
    const double C37601 = C44520 - (C37442 * C44316) / q - C44619;
    const double C34963 = C34535 / q - (C34904 * C44321) / q - C44618;
    const double C37472 = C36894 / q - (C35079 * C44316) / q - C44618;
    const double C35251 = C44437 - (C35236 * C44321) / q - C44621;
    const double C37343 = C44559 - (C34992 * C44316) / q - C44621;
    const double C35108 = C44617 - (C35079 * C44321) / q - C44620;
    const double C34844 = C44404 - (C34814 * C44321) / q - C44616;
    const double C35021 = C44423 - (C34061 * be + C34992 * C44317) / q - C44616;
    const double C36048 = C44470 - (C36077 * C44316) / q - C44616;
    const double C35467 = C44552 - (C33901 * be + C34814 * C44317) / q - C44623;
    const double C36568 = C44490 - (C36410 * C44316) / q - C44623;
    const double C35785 = C44461 - (C35814 * C44316) / q - C44615;
    const double C35338 = C44441 - (C33637 * be + C35236 * C44317) / q - C44622;
    const double C36440 = C44561 - (C34814 * C44316) / q - C44622;
    const double C34669 =
        C34404 / q - (C33386 * be + C34639 * C44317) / q - C44614;
    const double C36311 = C35637 / q - (C34727 * C44316) / q - C44614;
    const double C34756 = C44613 - (C33872 * be + C34727 * C44317) / q - C44615;
    const double C34565 = C44386 - (C34520 * C44321) / q - C44612;
    const double C34874 = C44617 - (C34904 * C44316) / q - C44612;
    const double C34434 = C44386 - (C33565 * be + C34389 * C44317) / q - C44611;
    const double C34609 = C44613 - (C34639 * C44316) / q - C44611;
    const double C18086 = C44449 - (C35741 * C44321) / q - C44605;
    const double C18599 = C44492 - (C31962 * be + C36164 * C44317) / q - C44605;
    const double C18085 = C35741 / q - (C36047 * C44321) / q - C44604;
    const double C19048 = C44508 - (C32625 * be + C37052 * C44317) / q - C44604;
    const double C18031 =
        C36164 / q - (C31053 * be + C36047 * C44317) / q - C44602;
    const double C18346 = C44462 - (C36003 * C44321) / q - C44602;
    const double C18265 = C44448 - (C35726 * C44321) / q - C44609;
    const double C18886 = C44491 - (C32359 * be + C36809 * C44317) / q - C44609;
    const double C17348 = C44388 - (C34550 * C44321) / q - C44589;
    const double C18382 = C44492 - (C34903 * C44316) / q - C44589;
    const double C17347 = C34550 / q - (C34873 * C44321) / q - C44588;
    const double C18940 = C44508 - (C36894 * C44316) / q - C44588;
    const double C17608 = C44405 - (C34829 * C44321) / q - C44596;
    const double C18859 = C44504 - (C36809 * C44316) / q - C44596;
    const double C17239 = C34903 / q - (C34873 * C44316) / q - C44584;
    const double C17527 = C44387 - (C34535 * C44321) / q - C44584;
    const double C17581 = C44424 - (C30375 * be + C34829 * C44317) / q - C44594;
    const double C18211 = C44471 - (C35726 * C44316) / q - C44594;
    const double C17132 = C44388 - (C29602 * be + C34419 * C44317) / q - C44577;
    const double C17644 = C44449 - (C34638 * C44316) / q - C44577;
    const double C17131 =
        C34419 / q - (C29585 * be + C34608 * C44317) / q - C44576;
    const double C18130 = C44462 - (C35637 * C44316) / q - C44576;
    const double C17077 = C34638 / q - (C34608 * C44316) / q - C44573;
    const double C17419 = C44387 - (C30109 * be + C34404 * C44317) / q - C44573;
    const double C42195 = C44755 - (C42166 * C44317) / q - C44877;
    const double C41192 =
        C40971 / q - (C38800 * be + C41133 * C44321) / q - C44876;
    const double C42640 = C42020 / q - (C41221 * C44317) / q - C44876;
    const double C41250 = C44875 - (C39116 * be + C41221 * C44321) / q - C44877;
    const double C41103 = C44809 - (C33783 * be + C41045 * C44321) / q - C44874;
    const double C42512 = C44764 - (C42410 * C44317) / q - C44874;
    const double C41074 = C44807 - (C41045 * C44317) / q - C44873;
    const double C41393 = C44732 - (C33930 * be + C41378 * C44321) / q - C44873;
    const double C40986 = C44709 - (C38915 * be + C40956 * C44321) / q - C44872;
    const double C41163 = C44875 - (C41133 * C44317) / q - C44872;
    const double C42050 = C44755 - (C42079 * C44316) / q - C44868;
    const double C40018 = C44800 - (C34061 * be + C39960 * C44321) / q - C44867;
    const double C42569 = C44768 - (C42410 * C44316) / q - C44867;
    const double C39931 =
        C39503 / q - (C33476 * be + C39872 * C44321) / q - C44866;
    const double C42440 = C41862 / q - (C40047 * C44316) / q - C44866;
    const double C40219 = C44685 - (C33637 * be + C40204 * C44321) / q - C44869;
    const double C42311 = C44807 - (C39960 * C44316) / q - C44869;
    const double C40076 = C44865 - (C34090 * be + C40047 * C44321) / q - C44868;
    const double C39812 = C44652 - (C33901 * be + C39782 * C44321) / q - C44864;
    const double C39989 = C44671 - (C39960 * C44317) / q - C44864;
    const double C41016 = C44718 - (C41045 * C44316) / q - C44864;
    const double C40435 = C44800 - (C39782 * C44317) / q - C44871;
    const double C41536 = C44738 - (C41378 * C44316) / q - C44871;
    const double C40753 = C44709 - (C40782 * C44316) / q - C44863;
    const double C40306 = C44689 - (C40204 * C44317) / q - C44870;
    const double C41408 = C44809 - (C39782 * C44316) / q - C44870;
    const double C39637 = C39372 / q - (C39607 * C44317) / q - C44862;
    const double C41279 = C40605 / q - (C39695 * C44316) / q - C44862;
    const double C39724 = C44861 - (C39695 * C44317) / q - C44863;
    const double C39533 = C44634 - (C33594 * be + C39488 * C44321) / q - C44860;
    const double C39842 = C44865 - (C39872 * C44316) / q - C44860;
    const double C39402 = C44634 - (C39357 * C44317) / q - C44859;
    const double C39577 = C44861 - (C39607 * C44316) / q - C44859;
    const double C26942 = C44697 - (C31069 * be + C40709 * C44321) / q - C44853;
    const double C27450 = C44740 - (C41132 * C44317) / q - C44853;
    const double C26941 =
        C40709 / q - (C31053 * be + C41015 * C44321) / q - C44852;
    const double C27904 = C44756 - (C42020 * C44317) / q - C44852;
    const double C26887 = C41132 / q - (C41015 * C44317) / q - C44850;
    const double C27202 = C44710 - (C31572 * be + C40971 * C44321) / q - C44850;
    const double C27121 = C44696 - (C31440 * be + C40694 * C44321) / q - C44857;
    const double C27742 = C44739 - (C41777 * C44317) / q - C44857;
    const double C26213 = C44636 - (C29872 * be + C39518 * C44321) / q - C44837;
    const double C27238 = C44740 - (C39871 * C44316) / q - C44837;
    const double C26212 =
        C39518 / q - (C29855 * be + C39841 * C44321) / q - C44836;
    const double C27796 = C44756 - (C41862 * C44316) / q - C44836;
    const double C26473 = C44653 - (C30375 * be + C39797 * C44321) / q - C44844;
    const double C27715 = C44752 - (C41777 * C44316) / q - C44844;
    const double C26104 = C39871 / q - (C39841 * C44316) / q - C44832;
    const double C26392 = C44635 - (C30242 * be + C39503 * C44321) / q - C44832;
    const double C26446 = C44672 - (C39797 * C44317) / q - C44842;
    const double C27067 = C44719 - (C40694 * C44316) / q - C44842;
    const double C25997 = C44636 - (C39387 * C44317) / q - C44825;
    const double C26509 = C44697 - (C39606 * C44316) / q - C44825;
    const double C25996 = C39387 / q - (C39576 * C44317) / q - C44824;
    const double C26986 = C44710 - (C40605 * C44316) / q - C44824;
    const double C25942 = C39606 / q - (C39576 * C44316) / q - C44821;
    const double C26284 = C44635 - (C39372 * C44317) / q - C44821;
    const double C44187 = C8091 / C29167;
    const double C44166 = C8101 / C29167;
    const double C8007 = (3 * C8101) / C29167 -
                         (C8087 * be + C8091 * C44316) / q - (C8090 * p) / q;
    const double C44167 = C8257 * p;
    const double C44144 = C8258 * p;
    const double C44185 = C8419 * p;
    const double C44152 = C8420 * p;
    const double C44143 = C8518 * p;
    const double C44151 = C8599 * p;
    const double C44171 = C8680 * p;
    const double C44202 = C8839 * p;
    const double C44201 = C8849 / C29167;
    const double C44234 = C9005 / C29167;
    const double C8987 =
        (3 * C8849) / C29167 - (C9005 * C44317) / q - (C9004 * p) / q;
    const double C44232 = C9166 * p;
    const double C44209 = C9167 * p;
    const double C44205 = C9265 * p;
    const double C44208 = C9346 * p;
    const double C44218 = C9427 * p;
    const double C44245 = C9586 * p;
    const double C44244 = C9596 / C29167;
    const double C44250 = C9744 * p;
    const double C44267 = C9905 / C29167;
    const double C9923 =
        (3 * C9596) / C29167 - (C9905 * C44321) / q + C44257 - (C9904 * p) / q;
    const double C44249 = C10003 * p;
    const double C44252 = C10084 * p;
    const double C44255 = C10165 * p;
    const double C44160 = C10326 / q;
    const double C44276 = C10545 * p;
    const double C44195 = C10545 / q;
    const double C44177 = C10722 / q;
    const double C44228 = C11181 / q;
    const double C8006 =
        (2 * C8091) / q - (C29290 * be + C8090 * C44316) / q - (C29294 * p) / q;
    const double C44274 = C29323 / C29167;
    const double C8017 =
        C29323 / q - (C8098 * be + C8101 * C44316) / q - (C8091 * p) / q;
    const double C44142 = C29426 * p;
    const double C44150 = C29514 * p;
    const double C44159 = C29652 * p;
    const double C44165 = C29739 * p;
    const double C44170 = C29798 * p;
    const double C44176 = C29922 * p;
    const double C44181 = C30009 * p;
    const double C44184 = C30067 * p;
    const double C44189 = C30214 * p;
    const double C44272 = C30684 / C29167;
    const double C8829 = C30684 / q - (C8849 * C44317) / q - (C9005 * p) / q;
    const double C44214 = C30850 * p;
    const double C8986 =
        (2 * C9005) / q - (C9004 * C44317) / q - (C30937 * p) / q;
    const double C44217 = C30996 * p;
    const double C44224 = C31118 * p;
    const double C44227 = C31207 * p;
    const double C44231 = C31265 * p;
    const double C44236 = C31412 * p;
    const double C44282 = C31936 / C29167;
    const double C9616 =
        C31936 / q - (C9596 * C44321) / q + C44241 - (C9905 * p) / q;
    const double C44259 = C32172 * p;
    const double C44261 = C32259 * p;
    const double C9922 =
        (2 * C9905) / q - (C9904 * C44321) / q + C44256 - (C32317 * p) / q;
    const double C44264 = C32464 * p;
    const double C44438 = C17022 / C29167;
    const double C44417 = C17031 / C29167;
    const double C16946 =
        (3 * C17031) / C29167 - (C17022 * C44316) / q - (C17021 * p) / q;
    const double C44418 = C17185 * p;
    const double C44397 = C17186 * p;
    const double C44396 = C17446 * p;
    const double C44453 = C17752 * p;
    const double C44452 = C17761 / C29167;
    const double C44485 = C17923 / C29167;
    const double C17904 = (3 * C17761) / C29167 -
                          (C17919 * be + C17923 * C44317) / q -
                          (C17922 * p) / q;
    const double C44456 = C18184 * p;
    const double C44496 = C18490 * p;
    const double C44495 = C18499 / C29167;
    const double C44501 = C18653 * p;
    const double C44518 = C18815 / C29167;
    const double C18833 = (3 * C18499) / C29167 - (C18815 * C44321) / q +
                          C44508 - (C18814 * p) / q;
    const double C44500 = C18913 * p;
    const double C44503 = C18994 * p;
    const double C44506 = C19075 * p;
    const double C44411 = C19220 / q;
    const double C44527 = C19437 * p;
    const double C44446 = C19437 / q;
    const double C44428 = C19598 / q;
    const double C44479 = C20039 / q;
    const double C16945 =
        (2 * C17022) / q - (C17021 * C44316) / q - (C34345 * p) / q;
    const double C44525 = C34374 / C29167;
    const double C16955 = C34374 / q - (C17031 * C44316) / q - (C17022 * p) / q;
    const double C44395 = C34477 * p;
    const double C44410 = C34698 * p;
    const double C44416 = C34785 * p;
    const double C44523 = C35711 / C29167;
    const double C17743 =
        C35711 / q - (C8846 * be + C17761 * C44317) / q - (C17923 * p) / q;
    const double C44465 = C35872 * p;
    const double C17903 = (2 * C17923) / q -
                          (C30846 * be + C17922 * C44317) / q -
                          (C35959 * p) / q;
    const double C44533 = C36939 / C29167;
    const double C18517 =
        C36939 / q - (C18499 * C44321) / q + C44492 - (C18815 * p) / q;
    const double C44510 = C37169 * p;
    const double C44512 = C37256 * p;
    const double C18832 =
        (2 * C18815) / q - (C18814 * C44321) / q + C44507 - (C37314 * p) / q;
    const double C44515 = C37457 * p;
    const double C44686 = C25887 / C29167;
    const double C44665 = C25896 / C29167;
    const double C25811 =
        (3 * C25896) / C29167 - (C25887 * C44316) / q - (C25886 * p) / q;
    const double C44666 = C26050 * p;
    const double C44645 = C26051 * p;
    const double C44644 = C26311 * p;
    const double C44701 = C26617 * p;
    const double C44700 = C26626 / C29167;
    const double C44733 = C26780 / C29167;
    const double C26762 =
        (3 * C26626) / C29167 - (C26780 * C44317) / q - (C26779 * p) / q;
    const double C44704 = C27040 * p;
    const double C44744 = C27346 * p;
    const double C44743 = C27355 / C29167;
    const double C44749 = C27501 * p;
    const double C44766 = C27670 / C29167;
    const double C27689 = (3 * C27355) / C29167 -
                          (C27666 * be + C27670 * C44321) / q + C44756 -
                          (C27669 * p) / q;
    const double C44748 = C27769 * p;
    const double C44751 = C27850 * p;
    const double C44754 = C27931 * p;
    const double C44659 = C28076 / q;
    const double C44775 = C28293 * p;
    const double C44694 = C28293 / q;
    const double C44676 = C28454 / q;
    const double C44727 = C28895 / q;
    const double C25810 =
        (2 * C25887) / q - (C25886 * C44316) / q - (C39313 * p) / q;
    const double C44773 = C39342 / C29167;
    const double C25820 = C39342 / q - (C25896 * C44316) / q - (C25887 * p) / q;
    const double C44643 = C39445 * p;
    const double C44658 = C39666 * p;
    const double C44664 = C39753 * p;
    const double C44771 = C40679 / C29167;
    const double C26608 = C40679 / q - (C26626 * C44317) / q - (C26780 * p) / q;
    const double C44713 = C40840 * p;
    const double C26761 =
        (2 * C26780) / q - (C26779 * C44317) / q - (C40927 * p) / q;
    const double C44781 = C41907 / C29167;
    const double C27373 = C41907 / q - (C9593 * be + C27355 * C44321) / q +
                          C44740 - (C27670 * p) / q;
    const double C44758 = C42137 * p;
    const double C44760 = C42224 * p;
    const double C27688 = (2 * C27670) / q -
                          (C32168 * be + C27669 * C44321) / q + C44755 -
                          (C42282 * p) / q;
    const double C44763 = C42425 * p;
    const double C7986 = (3 * C8038) / C29167 -
                         (C8024 * be + C8028 * C44316) / q - (C8027 * p) / q;
    const double C44164 = C8203 * p;
    const double C44141 = C8204 * p;
    const double C44140 = C8491 * p;
    const double C44180 = C8653 * p;
    const double C44200 = C8779 * p;
    const double C8969 =
        (3 * C8789) / C29167 - (C8951 * C44317) / q + C44211 - (C8950 * p) / q;
    const double C44204 = C9238 * p;
    const double C44223 = C9319 * p;
    const double C44243 = C9536 / C29167;
    const double C9496 = -(C9533 * be + C9536 * C44316 + C9526 * p) / q;
    const double C9556 = C44241 - (C9536 * C44317) / q - (C9693 * p) / q;
    const double C44266 = C9851 / C29167;
    const double C44248 = C9976 * p;
    const double C9815 = -(C27609 * be + C9851 * C44316 + C10057 * p) / q;
    const double C9869 = C44257 - (C9851 * C44317) / q - (C10138 * p) / q;
    const double C44158 = C10269 / q;
    const double C44283 = C10494 * p;
    const double C44194 = C10494 / q;
    const double C8330 =
        C10665 / q - (C10653 * be + C8366 * C44316) / q - (C8572 * p) / q;
    const double C9131 =
        C11124 / q - (C9113 * C44317) / q + C44220 - (C9400 * p) / q;
    const double C7985 =
        (2 * C8028) / q - (C29245 * be + C8027 * C44316) / q - (C29249 * p) / q;
    const double C7996 =
        C29278 / q - (C8035 * be + C8038 * C44316) / q - (C8028 * p) / q;
    const double C44139 = C29383 * p;
    const double C44157 = C29622 * p;
    const double C44163 = C29710 * p;
    const double C8329 =
        C9526 / q - (C29888 * be + C8365 * C44316) / q - (C29892 * p) / q;
    const double C44179 = C29980 * p;
    const double C8554 = (3 * C8366) / C29167 -
                         (C30257 * be + C8572 * C44316) / q - (C30261 * p) / q;
    const double C44191 = C30305 * p;
    const double C44196 = C30438 * p;
    const double C8809 =
        C30655 / q - (C8789 * C44317) / q + C44198 - (C8951 * p) / q;
    const double C44213 = C30820 * p;
    const double C8968 =
        (2 * C8951) / q - (C8950 * C44317) / q + C44210 - (C30908 * p) / q;
    const double C44222 = C31088 * p;
    const double C9130 =
        C9693 / q - (C9112 * C44317) / q + C44219 - (C31178 * p) / q;
    const double C44238 = C31502 * p;
    const double C9409 =
        (3 * C9113) / C29167 - (C9400 * C44317) / q + C44239 - (C31634 * p) / q;
    const double C9814 = -(C32138 * be + C9850 * C44316 + C32142 * p) / q;
    const double C9868 = C44256 - (C9850 * C44317) / q - (C32230 * p) / q;
    const double C44268 = C32555 * p;
    const double C44281 = C33029 / C29167;
    const double C16927 =
        (3 * C16974) / C29167 - (C16965 * C44316) / q - (C16964 * p) / q;
    const double C44451 = C17698 * p;
    const double C17885 = (3 * C17707) / C29167 -
                          (C17862 * be + C17866 * C44317) / q + C44462 -
                          (C17865 * p) / q;
    const double C44455 = C18157 * p;
    const double C44474 = C18238 * p;
    const double C44494 = C18445 / C29167;
    const double C18409 = -(C18445 * C44316 + C18436 * p) / q;
    const double C44517 = C18761 / C29167;
    const double C18725 = -(C18761 * C44316 + C18967 * p) / q;
    const double C44409 = C19169 / q;
    const double C44534 = C19386 * p;
    const double C44445 = C19386 / q;
    const double C17258 = C19547 / q - (C17294 * C44316) / q - (C17500 * p) / q;
    const double C18050 = C19988 / q - (C20131 * be + C18032 * C44317) / q +
                          C44471 - (C18319 * p) / q;
    const double C16926 =
        (2 * C16965) / q - (C16964 * C44316) / q - (C34301 * p) / q;
    const double C16936 = C34330 / q - (C16974 * C44316) / q - (C16965 * p) / q;
    const double C17257 = C18436 / q - (C17293 * C44316) / q - (C34934 * p) / q;
    const double C17482 =
        (3 * C17294) / C29167 - (C17500 * C44316) / q - (C35295 * p) / q;
    const double C17725 = C35682 / q - (C8786 * be + C17707 * C44317) / q +
                          C44449 - (C17866 * p) / q;
    const double C44464 = C35843 * p;
    const double C17884 = (2 * C17866) / q -
                          (C30816 * be + C17865 * C44317) / q + C44461 -
                          (C35930 * p) / q;
    const double C44489 = C36511 * p;
    const double C18328 = (3 * C18032) / C29167 -
                          (C31587 * be + C18319 * C44317) / q + C44490 -
                          (C36639 * p) / q;
    const double C18724 = -(C18760 * C44316 + C37140 * p) / q;
    const double C44532 = C38011 / C29167;
    const double C25792 =
        (3 * C25839) / C29167 - (C25830 * C44316) / q - (C25829 * p) / q;
    const double C44699 = C26563 * p;
    const double C26744 = (3 * C26572) / C29167 - (C26726 * C44317) / q +
                          C44710 - (C26725 * p) / q;
    const double C44703 = C27013 * p;
    const double C44722 = C27094 * p;
    const double C44742 = C27301 / C29167;
    const double C27265 = -(C27301 * C44316 + C27292 * p) / q;
    const double C44765 = C27613 / C29167;
    const double C27575 = -(C27613 * C44316 + C27823 * p) / q;
    const double C44657 = C28025 / q;
    const double C44782 = C28242 * p;
    const double C44693 = C28242 / q;
    const double C26123 = C28403 / q - (C26159 * C44316) / q - (C26365 * p) / q;
    const double C26906 =
        C28844 / q - (C26888 * C44317) / q + C44719 - (C27175 * p) / q;
    const double C25791 =
        (2 * C25830) / q - (C25829 * C44316) / q - (C39269 * p) / q;
    const double C25801 = C39298 / q - (C25839 * C44316) / q - (C25830 * p) / q;
    const double C26122 = C27292 / q - (C26158 * C44316) / q - (C39902 * p) / q;
    const double C26347 =
        (3 * C26159) / C29167 - (C26365 * C44316) / q - (C40263 * p) / q;
    const double C26590 =
        C40650 / q - (C26572 * C44317) / q + C44697 - (C26726 * p) / q;
    const double C44712 = C40811 * p;
    const double C26743 =
        (2 * C26726) / q - (C26725 * C44317) / q + C44709 - (C40898 * p) / q;
    const double C44737 = C41479 * p;
    const double C27184 = (3 * C26888) / C29167 - (C27175 * C44317) / q +
                          C44738 - (C41607 * p) / q;
    const double C27574 = -(C27612 * C44316 + C42108 * p) / q;
    const double C44780 = C42979 / C29167;
    const double C7944 = (3 * C7975) / C29167 -
                         (C7961 * be + C7965 * C44316) / q + C44132 -
                         (C7964 * p) / q;
    const double C8699 = C8729 / C29167 - (C8716 * be + C8719 * C44316) / q +
                         C44197 - (C8149 * p) / q;
    const double C8709 =
        C44198 - (C8726 * be + C8729 * C44316) / q - (C8719 * p) / q;
    const double C8879 =
        C44211 - (C17805 * be + C8897 * C44316) / q - (C9211 * p) / q;
    const double C9041 =
        C44220 - (C20080 * be + C9059 * C44316) / q - (C9292 * p) / q;
    const double C9446 = C9476 / C29167 - (C9463 * be + C9466 * C44316) / q +
                         C44240 - (C8311 * p) / q;
    const double C9456 =
        C44241 - (C9473 * be + C9476 * C44316) / q - (C9466 * p) / q;
    const double C9625 =
        C44253 - (C18542 * be + C9642 * C44316) / q - (C9949 * p) / q;
    const double C9779 =
        C44257 - (C27552 * be + C9797 * C44316) / q - (C10030 * p) / q;
    const double C8132 = C10212 / q - (C10200 * be + C8150 * C44316) / q +
                         C44154 - (C8464 * p) / q;
    const double C8294 = C10608 / q - (C10596 * be + C8312 * C44316) / q +
                         C44173 - (C8545 * p) / q;
    const double C10426 = C11067 / C29167 -
                          (C11055 * be + C10443 * C44316) / q + C44277 -
                          (C8626 * p) / q;
    const double C11048 =
        C44278 - (C11064 * be + C11067 * C44316) / q - (C10443 * p) / q;
    const double C7943 = (2 * C7965) / q - (C29149 * be + C7964 * C44316) / q +
                         C44131 - (C29154 * p) / q;
    const double C7954 = C29185 / q - (C7972 * be + C7975 * C44316) / q +
                         C44133 - (C7965 * p) / q;
    const double C8131 = C8719 / q - (C29554 * be + C8149 * C44316) / q +
                         C44153 - (C29559 * p) / q;
    const double C8293 = C9466 / q - (C29824 * be + C8311 * C44316) / q +
                         C44172 - (C29829 * p) / q;
    const double C8455 = (3 * C8150) / C29167 -
                         (C30093 * be + C8464 * C44316) / q + C44186 -
                         (C30097 * p) / q;
    const double C8536 = (3 * C8312) / C29167 -
                         (C30226 * be + C8545 * C44316) / q + C44190 -
                         (C30230 * p) / q;
    const double C8617 = C10443 / q - (C30359 * be + C8626 * C44316) / q +
                         C44192 - (C30363 * p) / q;
    const double C8878 =
        C44210 - (C30754 * be + C8896 * C44316) / q - (C30759 * p) / q;
    const double C9040 =
        C44219 - (C31022 * be + C9058 * C44316) / q - (C31027 * p) / q;
    const double C9202 = C8897 / C29167 - (C31291 * be + C9211 * C44316) / q +
                         C44233 - (C31295 * p) / q;
    const double C9283 = C9059 / C29167 - (C31424 * be + C9292 * C44316) / q +
                         C44237 - (C31428 * p) / q;
    const double C9364 =
        C44239 - (C31556 * be + C9373 * C44316) / q - (C31560 * p) / q;
    const double C9778 =
        C44256 - (C32076 * be + C9796 * C44316) / q - (C32081 * p) / q;
    const double C9940 = C9642 / C29167 - (C32343 * be + C9949 * C44316) / q +
                         C44262 - (C32347 * p) / q;
    const double C10021 = C9797 / C29167 - (C32476 * be + C10030 * C44316) / q +
                          C44265 - (C32480 * p) / q;
    const double C10102 =
        C44269 - (C32609 * be + C10111 * C44316) / q - (C32613 * p) / q;
    const double C10193 = C32744 / C29167 -
                          (C10209 * be + C10212 * C44316) / q + C44270 -
                          (C8150 * p) / q;
    const double C10589 = C32999 / C29167 -
                          (C10605 * be + C10608 * C44316) / q + C44279 -
                          (C8312 * p) / q;
    const double C16889 = (3 * C16917) / C29167 - (C16908 * C44316) / q +
                          C44387 - (C16907 * p) / q;
    const double C17060 =
        C19118 / q - (C17078 * C44316) / q + C44405 - (C17392 * p) / q;
    const double C17222 =
        C19496 / q - (C17240 * C44316) / q + C44424 - (C17473 * p) / q;
    const double C19318 =
        C19937 / C29167 - (C19335 * C44316) / q + C44528 - (C17554 * p) / q;
    const double C19920 = C44529 - (C19937 * C44316) / q - (C19335 * p) / q;
    const double C16888 =
        (2 * C16908) / q - (C16907 * C44316) / q + C44386 - (C34211 * p) / q;
    const double C16898 =
        C34241 / q - (C16917 * C44316) / q + C44388 - (C16908 * p) / q;
    const double C17383 = (3 * C17078) / C29167 - (C17392 * C44316) / q +
                          C44437 - (C35137 * p) / q;
    const double C17464 = (3 * C17240) / C29167 - (C17473 * C44316) / q +
                          C44441 - (C35266 * p) / q;
    const double C17545 =
        C19335 / q - (C17554 * C44316) / q + C44443 - (C35395 * p) / q;
    const double C19101 =
        C37729 / C29167 - (C19118 * C44316) / q + C44521 - (C17078 * p) / q;
    const double C19479 =
        C37982 / C29167 - (C19496 * C44316) / q + C44530 - (C17240 * p) / q;
    const double C25754 = (3 * C25782) / C29167 - (C25773 * C44316) / q +
                          C44635 - (C25772 * p) / q;
    const double C25925 =
        C27974 / q - (C25943 * C44316) / q + C44653 - (C26257 * p) / q;
    const double C26087 =
        C28352 / q - (C26105 * C44316) / q + C44672 - (C26338 * p) / q;
    const double C28174 =
        C28793 / C29167 - (C28191 * C44316) / q + C44776 - (C26419 * p) / q;
    const double C28776 = C44777 - (C28793 * C44316) / q - (C28191 * p) / q;
    const double C25753 =
        (2 * C25773) / q - (C25772 * C44316) / q + C44634 - (C39179 * p) / q;
    const double C25763 =
        C39209 / q - (C25782 * C44316) / q + C44636 - (C25773 * p) / q;
    const double C26248 = (3 * C25943) / C29167 - (C26257 * C44316) / q +
                          C44685 - (C40105 * p) / q;
    const double C26329 = (3 * C26105) / C29167 - (C26338 * C44316) / q +
                          C44689 - (C40234 * p) / q;
    const double C26410 =
        C28191 / q - (C26419 * C44316) / q + C44691 - (C40363 * p) / q;
    const double C27957 =
        C42697 / C29167 - (C27974 * C44316) / q + C44769 - (C25943 * p) / q;
    const double C28335 =
        C42950 / C29167 - (C28352 * C44316) / q + C44778 - (C26105 * p) / q;
    const double C18778 =
        C44507 - (C32138 * be + C18760 * C44317) / q - (C37227 * p) / q;
    const double C44478 = C36224 * p;
    const double C44482 = C36282 * p;
    const double C44475 = C36135 * p;
    const double C44519 = C37544 * p;
    const double C44473 = C36106 * p;
    const double C44487 = C36425 * p;
    const double C44468 = C36018 * p;
    const double C18688 = C44507 - (C18706 * C44316) / q - (C37082 * p) / q;
    const double C44432 = C35050 * p;
    const double C19012 = C44520 - (C19021 * C44316) / q - (C37601 * p) / q;
    const double C44427 = C34963 * p;
    const double C44440 = C35251 * p;
    const double C44435 = C35108 * p;
    const double C44421 = C34844 * p;
    const double C44430 = C35021 * p;
    const double C17959 = C44470 - (C17977 * C44316) / q - (C36048 * p) / q;
    const double C44447 = C35467 * p;
    const double C18283 = C44490 - (C18292 * C44316) / q - (C36568 * p) / q;
    const double C17789 = C44461 - (C17808 * C44316) / q - (C35785 * p) / q;
    const double C44442 = C35338 * p;
    const double C44408 = C34669 * p;
    const double C44414 = C34756 * p;
    const double C44401 = C34565 * p;
    const double C44392 = C34434 * p;
    const double C44460 = C18086 * p;
    const double C18463 =
        C44492 - (C9533 * be + C18445 * C44317) / q - (C18599 * p) / q;
    const double C44483 = C18085 * p;
    const double C18779 =
        C44508 - (C27609 * be + C18761 * C44317) / q - (C19048 * p) / q;
    const double C18049 = C18599 / q - (C31084 * be + C18031 * C44317) / q +
                          C44470 - (C36195 * p) / q;
    const double C44469 = C18346 * p;
    const double C44459 = C18265 * p;
    const double C44499 = C18886 * p;
    const double C44403 = C17348 * p;
    const double C18373 = C44492 - (C18391 * C44316) / q - (C18382 * p) / q;
    const double C44436 = C17347 * p;
    const double C18689 = C44508 - (C18707 * C44316) / q - (C18940 * p) / q;
    const double C18931 =
        C18707 / C29167 - (C18940 * C44316) / q + C44516 - (C37472 * p) / q;
    const double C44422 = C17608 * p;
    const double C18527 = C44504 - (C18545 * C44316) / q - (C18859 * p) / q;
    const double C18850 =
        C18545 / C29167 - (C18859 * C44316) / q + C44513 - (C37343 * p) / q;
    const double C17221 =
        C18382 / q - (C17239 * C44316) / q + C44423 - (C34874 * p) / q;
    const double C18364 =
        C18391 / C29167 - (C18382 * C44316) / q + C44491 - (C17239 * p) / q;
    const double C44402 = C17527 * p;
    const double C44431 = C17581 * p;
    const double C17960 = C44471 - (C17978 * C44316) / q - (C18211 * p) / q;
    const double C18202 =
        C17978 / C29167 - (C18211 * C44316) / q + C44488 - (C36440 * p) / q;
    const double C44394 = C17132 * p;
    const double C17635 = C44449 - (C17653 * C44316) / q - (C17644 * p) / q;
    const double C44415 = C17131 * p;
    const double C17790 = C44462 - (C17809 * C44316) / q - (C18130 * p) / q;
    const double C18121 =
        C17809 / C29167 - (C18130 * C44316) / q + C44484 - (C36311 * p) / q;
    const double C17059 =
        C17644 / q - (C17077 * C44316) / q + C44404 - (C34609 * p) / q;
    const double C17626 =
        C17653 / C29167 - (C17644 * C44316) / q + C44448 - (C17077 * p) / q;
    const double C44393 = C17419 * p;
    const double C27631 = C44755 - (C27612 * C44317) / q - (C42195 * p) / q;
    const double C44726 = C41192 * p;
    const double C44730 = C41250 * p;
    const double C44723 = C41103 * p;
    const double C44767 = C42512 * p;
    const double C44721 = C41074 * p;
    const double C44735 = C41393 * p;
    const double C44716 = C40986 * p;
    const double C27536 = C44755 - (C27555 * C44316) / q - (C42050 * p) / q;
    const double C44680 = C40018 * p;
    const double C27868 = C44768 - (C27877 * C44316) / q - (C42569 * p) / q;
    const double C44675 = C39931 * p;
    const double C44688 = C40219 * p;
    const double C44683 = C40076 * p;
    const double C44669 = C39812 * p;
    const double C44678 = C39989 * p;
    const double C26815 = C44718 - (C26833 * C44316) / q - (C41016 * p) / q;
    const double C44695 = C40435 * p;
    const double C27139 = C44738 - (C27148 * C44316) / q - (C41536 * p) / q;
    const double C26653 = C44709 - (C26671 * C44316) / q - (C40753 * p) / q;
    const double C44690 = C40306 * p;
    const double C44656 = C39637 * p;
    const double C44662 = C39724 * p;
    const double C44649 = C39533 * p;
    const double C44640 = C39402 * p;
    const double C44708 = C26942 * p;
    const double C27319 = C44740 - (C27301 * C44317) / q - (C27450 * p) / q;
    const double C44731 = C26941 * p;
    const double C27632 = C44756 - (C27613 * C44317) / q - (C27904 * p) / q;
    const double C26905 =
        C27450 / q - (C26887 * C44317) / q + C44718 - (C41163 * p) / q;
    const double C44717 = C27202 * p;
    const double C44707 = C27121 * p;
    const double C44747 = C27742 * p;
    const double C44651 = C26213 * p;
    const double C27229 = C44740 - (C27247 * C44316) / q - (C27238 * p) / q;
    const double C44684 = C26212 * p;
    const double C27537 = C44756 - (C27556 * C44316) / q - (C27796 * p) / q;
    const double C27787 =
        C27556 / C29167 - (C27796 * C44316) / q + C44764 - (C42440 * p) / q;
    const double C44670 = C26473 * p;
    const double C27382 = C44752 - (C27399 * C44316) / q - (C27715 * p) / q;
    const double C27706 =
        C27399 / C29167 - (C27715 * C44316) / q + C44761 - (C42311 * p) / q;
    const double C26086 =
        C27238 / q - (C26104 * C44316) / q + C44671 - (C39842 * p) / q;
    const double C27220 =
        C27247 / C29167 - (C27238 * C44316) / q + C44739 - (C26104 * p) / q;
    const double C44650 = C26392 * p;
    const double C44679 = C26446 * p;
    const double C26816 = C44719 - (C26834 * C44316) / q - (C27067 * p) / q;
    const double C27058 =
        C26834 / C29167 - (C27067 * C44316) / q + C44736 - (C41408 * p) / q;
    const double C44642 = C25997 * p;
    const double C26500 = C44697 - (C26518 * C44316) / q - (C26509 * p) / q;
    const double C44663 = C25996 * p;
    const double C26654 = C44710 - (C26672 * C44316) / q - (C26986 * p) / q;
    const double C26977 =
        C26672 / C29167 - (C26986 * C44316) / q + C44732 - (C41279 * p) / q;
    const double C25924 =
        C26509 / q - (C25942 * C44316) / q + C44652 - (C39577 * p) / q;
    const double C26491 =
        C26518 / C29167 - (C26509 * C44316) / q + C44696 - (C25942 * p) / q;
    const double C44641 = C26284 * p;
    const double C44333 = C44167 / q;
    const double C8080 = -(C8101 * C44317 + C44144) / q;
    const double C44343 = C44185 / q;
    const double C44324 = C44152 / q;
    const double C8070 = -(C8091 * C44317 + C44143) / q;
    const double C44323 = C44151 / q;
    const double C44335 = C44171 / q;
    const double C8402 = -(C8420 * C44317 + C44171) / q;
    const double C8769 = -(C8846 * be + C8849 * C44316 + C44202) / q;
    const double C44359 = C44232 / q;
    const double C44351 = C44209 / q;
    const double C8933 = -(C17919 * be + C9005 * C44316 + C44205) / q;
    const double C44350 = C44208 / q;
    const double C9095 = -(C20182 * be + C9167 * C44316 + C44208) / q;
    const double C44353 = C44218 / q;
    const double C9516 = -(C9593 * be + C9596 * C44316 + C44245) / q;
    const double C9576 = -(C9596 * C44317 + C44250) / q;
    const double C9566 = -(C9586 * C44317 + C44249) / q;
    const double C9676 = -(C18650 * be + C9744 * C44316 + C44249) / q;
    const double C10562 =
        C10326 / C29167 - (C10545 * C44321) / q + C44277 - C44249 / q;
    const double C9833 = -(C27666 * be + C9905 * C44316 + C44252) / q;
    const double C9887 = -(C9905 * C44317 + C44255) / q;
    const double C8186 =
        C44160 - (C10314 * be + C8258 * C44316) / q - C44143 / q;
    const double C8819 = C44160 - (C8839 * C44317) / q - C44205 / q;
    const double C10345 = C44270 - (C10326 * C44321) / q - C44276 / q;
    const double C10703 = -(C10722 * C44317 + C44276) / q;
    const double C11105 = -(C11178 * be + C11181 * C44316 + C44276) / q;
    const double C9606 = C44177 - (C9586 * C44321) / q + C44240 - C44252 / q;
    const double C9761 = C44228 - (C9744 * C44321) / q + C44253 - C44255 / q;
    const double C10307 = C44274 - (C10326 * C44317) / q - C44202 / q;
    const double C10741 = C44274 - (C10722 * C44321) / q + C44279 - C44245 / q;
    const double C8069 = -(C8090 * C44317 + C44142) / q;
    const double C8482 =
        (3 * C8258) / C29167 - (C30139 * be + C8518 * C44316) / q - C44142 / q;
    const double C44322 = C44150 / q;
    const double C44327 = C44159 / q;
    const double C44332 = C44165 / q;
    const double C44334 = C44170 / q;
    const double C44337 = C44176 / q;
    const double C44349 = C44181 / q;
    const double C8401 = -(C8419 * C44317 + C44181) / q;
    const double C44342 = C44184 / q;
    const double C44344 = C44189 / q;
    const double C8590 = -(C8599 * C44317 + C44189) / q;
    const double C10250 =
        C44272 - (C10323 * be + C10326 * C44316) / q - C44144 / q;
    const double C11200 = C44272 - (C11181 * C44321) / q + C44278 - C44250 / q;
    const double C8932 = -(C30846 * be + C9004 * C44316 + C44214) / q;
    const double C9256 =
        (3 * C8839) / C29167 - (C9265 * C44317) / q - C44214 / q;
    const double C44352 = C44217 / q;
    const double C44362 = C44224 / q;
    const double C9094 = -(C31114 * be + C9166 * C44316 + C44224) / q;
    const double C44355 = C44227 / q;
    const double C44358 = C44231 / q;
    const double C44360 = C44236 / q;
    const double C9391 = -(C31602 * be + C9427 * C44316 + C44236) / q;
    const double C9832 = -(C32168 * be + C9904 * C44316 + C44259) / q;
    const double C10093 =
        (3 * C9586) / C29167 - (C10084 * C44321) / q + C44265 - C44259 / q;
    const double C9886 = -(C9904 * C44317 + C44261) / q;
    const double C10174 =
        (3 * C9744) / C29167 - (C10165 * C44321) / q + C44269 - C44261 / q;
    const double C10012 = C44195 - (C10003 * C44321) / q + C44262 - C44264 / q;
    const double C10075 = -(C10084 * C44317 + C44264) / q;
    const double C10129 = -(C32655 * be + C10165 * C44316 + C44264) / q;
    const double C44581 = C44418 / q;
    const double C17012 = -(C8098 * be + C17031 * C44317 + C44397) / q;
    const double C17003 = -(C8087 * be + C17022 * C44317 + C44396) / q;
    const double C17689 = -(C17761 * C44316 + C44453) / q;
    const double C17847 = -(C17923 * C44316 + C44456) / q;
    const double C18427 = -(C18499 * C44316 + C44496) / q;
    const double C18481 = -(C9593 * be + C18499 * C44317 + C44501) / q;
    const double C18472 = -(C9583 * be + C18490 * C44317 + C44500) / q;
    const double C18581 = -(C18653 * C44316 + C44500) / q;
    const double C19454 =
        C19220 / C29167 - (C19437 * C44321) / q + C44528 - C44500 / q;
    const double C18743 = -(C18815 * C44316 + C44503) / q;
    const double C18797 = -(C27666 * be + C18815 * C44317 + C44506) / q;
    const double C17114 = C44411 - (C17186 * C44316) / q - C44396 / q;
    const double C17734 =
        C44411 - (C8836 * be + C17752 * C44317) / q - C44456 / q;
    const double C19237 = C44521 - (C19220 * C44321) / q - C44527 / q;
    const double C19581 = -(C10719 * be + C19598 * C44317 + C44527) / q;
    const double C19971 = -(C20039 * C44316 + C44527) / q;
    const double C18508 = C44428 - (C18490 * C44321) / q + C44491 - C44503 / q;
    const double C18671 = C44479 - (C18653 * C44321) / q + C44504 - C44506 / q;
    const double C19203 =
        C44525 - (C10323 * be + C19220 * C44317) / q - C44453 / q;
    const double C19615 = C44525 - (C19598 * C44321) / q + C44530 - C44496 / q;
    const double C17002 = -(C29290 * be + C17021 * C44317 + C44395) / q;
    const double C17410 =
        (3 * C17186) / C29167 - (C17446 * C44316) / q - C44395 / q;
    const double C44575 = C44410 / q;
    const double C44580 = C44416 / q;
    const double C19152 = C44523 - (C19220 * C44316) / q - C44397 / q;
    const double C20056 = C44523 - (C20039 * C44321) / q + C44529 - C44501 / q;
    const double C17846 = -(C17922 * C44316 + C44465) / q;
    const double C18175 = (3 * C17752) / C29167 -
                          (C31337 * be + C18184 * C44317) / q - C44465 / q;
    const double C18742 = -(C18814 * C44316 + C44510) / q;
    const double C19003 =
        (3 * C18490) / C29167 - (C18994 * C44321) / q + C44516 - C44510 / q;
    const double C18796 = -(C32168 * be + C18814 * C44317 + C44512) / q;
    const double C19084 =
        (3 * C18653) / C29167 - (C19075 * C44321) / q + C44520 - C44512 / q;
    const double C18922 = C44446 - (C18913 * C44321) / q + C44513 - C44515 / q;
    const double C18985 = -(C32523 * be + C18994 * C44317 + C44515) / q;
    const double C19039 = -(C19075 * C44316 + C44515) / q;
    const double C44829 = C44666 / q;
    const double C25877 = -(C25896 * C44317 + C44645) / q;
    const double C25868 = -(C25887 * C44317 + C44644) / q;
    const double C26554 = -(C26626 * C44316 + C44701) / q;
    const double C26708 = -(C26780 * C44316 + C44704) / q;
    const double C27283 = -(C27355 * C44316 + C44744) / q;
    const double C27337 = -(C27355 * C44317 + C44749) / q;
    const double C27328 = -(C27346 * C44317 + C44748) / q;
    const double C27433 = -(C27501 * C44316 + C44748) / q;
    const double C28310 = C28076 / C29167 -
                          (C11169 * be + C28293 * C44321) / q + C44776 -
                          C44748 / q;
    const double C27594 = -(C27670 * C44316 + C44751) / q;
    const double C27651 = -(C27670 * C44317 + C44754) / q;
    const double C25979 = C44659 - (C26051 * C44316) / q - C44644 / q;
    const double C26599 = C44659 - (C26617 * C44317) / q - C44704 / q;
    const double C28093 =
        C44769 - (C10323 * be + C28076 * C44321) / q - C44775 / q;
    const double C28437 = -(C28454 * C44317 + C44775) / q;
    const double C28827 = -(C28895 * C44316 + C44775) / q;
    const double C27364 =
        C44676 - (C9583 * be + C27346 * C44321) / q + C44739 - C44751 / q;
    const double C27518 =
        C44727 - (C18650 * be + C27501 * C44321) / q + C44752 - C44754 / q;
    const double C28059 = C44773 - (C28076 * C44317) / q - C44701 / q;
    const double C28471 =
        C44773 - (C10719 * be + C28454 * C44321) / q + C44778 - C44744 / q;
    const double C25867 = -(C25886 * C44317 + C44643) / q;
    const double C26275 =
        (3 * C26051) / C29167 - (C26311 * C44316) / q - C44643 / q;
    const double C44823 = C44658 / q;
    const double C44828 = C44664 / q;
    const double C28008 = C44771 - (C28076 * C44316) / q - C44645 / q;
    const double C28912 =
        C44771 - (C11178 * be + C28895 * C44321) / q + C44777 - C44749 / q;
    const double C26707 = -(C26779 * C44316 + C44713) / q;
    const double C27031 =
        (3 * C26617) / C29167 - (C27040 * C44317) / q - C44713 / q;
    const double C27593 = -(C27669 * C44316 + C44758) / q;
    const double C27859 = (3 * C27346) / C29167 -
                          (C32523 * be + C27850 * C44321) / q + C44764 -
                          C44758 / q;
    const double C27650 = -(C27669 * C44317 + C44760) / q;
    const double C27940 = (3 * C27501) / C29167 -
                          (C32655 * be + C27931 * C44321) / q + C44768 -
                          C44760 / q;
    const double C27778 =
        C44694 - (C32389 * be + C27769 * C44321) / q + C44761 - C44763 / q;
    const double C27841 = -(C27850 * C44317 + C44763) / q;
    const double C27895 = -(C27931 * C44316 + C44763) / q;
    const double C44331 = C44164 / q;
    const double C44320 = C44141 / q;
    const double C44319 = C44140 / q;
    const double C44339 = C44180 / q;
    const double C8749 = -(C8786 * be + C8789 * C44316 + C44200) / q;
    const double C10288 =
        C29278 / C29167 - (C10269 * C44317) / q + C44270 - C44200 / q;
    const double C8915 = -(C17862 * be + C8951 * C44316 + C44204) / q;
    const double C9077 = -(C20131 * be + C9113 * C44316 + C44223) / q;
    const double C10511 =
        C10665 / C29167 - (C10494 * C44317) / q + C44277 - C44223 / q;
    const double C9486 =
        C44243 - (C9523 * be + C9526 * C44316) / q - (C8365 * p) / q;
    const double C9710 =
        C44243 - (C9693 * C44317) / q + C44253 - (C9112 * p) / q;
    const double C10039 =
        C44266 - (C32507 * be + C10057 * C44316) / q - (C32511 * p) / q;
    const double C10147 =
        C44266 - (C10138 * C44317) / q + C44269 - (C32687 * p) / q;
    const double C9546 = C44240 - (C9526 * C44317) / q - C44248 / q;
    const double C9659 = -(C18596 * be + C9693 * C44316 + C44248) / q;
    const double C8799 = C44158 - (C8779 * C44317) / q + C44197 - C44204 / q;
    const double C10684 = C44279 - (C10665 * C44317) / q - C44283 / q;
    const double C11086 = -(C11121 * be + C11124 * C44316 + C44283) / q;
    const double C44318 = C44139 / q;
    const double C44326 = C44157 / q;
    const double C44330 = C44163 / q;
    const double C44338 = C44179 / q;
    const double C44345 = C44191 / q;
    const double C44347 = C44196 / q;
    const double C8914 = -(C30816 * be + C8950 * C44316 + C44213) / q;
    const double C9247 =
        (3 * C8779) / C29167 - (C9238 * C44317) / q + C44233 - C44213 / q;
    const double C9076 = -(C31084 * be + C9112 * C44316 + C44222) / q;
    const double C9985 =
        C9526 / C29167 - (C9976 * C44317) / q + C44262 - C44222 / q;
    const double C9328 = C44194 - (C9319 * C44317) / q + C44237 - C44238 / q;
    const double C9382 = -(C31587 * be + C9400 * C44316 + C44238) / q;
    const double C10066 = C44265 - (C10057 * C44317) / q - C44268 / q;
    const double C10120 = -(C32640 * be + C10138 * C44316 + C44268) / q;
    const double C10627 =
        C44281 - (C10662 * be + C10665 * C44316) / q - (C8366 * p) / q;
    const double C11143 =
        C44281 - (C11124 * C44317) / q + C44278 - (C9113 * p) / q;
    const double C17671 = -(C17707 * C44316 + C44451) / q;
    const double C19186 = C34330 / C29167 -
                          (C10266 * be + C19169 * C44317) / q + C44521 -
                          C44451 / q;
    const double C17828 = -(C17866 * C44316 + C44455) / q;
    const double C17996 = -(C18032 * C44316 + C44474) / q;
    const double C19403 = C19547 / C29167 -
                          (C11112 * be + C19386 * C44317) / q + C44528 -
                          C44474 / q;
    const double C18400 = C44494 - (C18436 * C44316) / q - (C17293 * p) / q;
    const double C18617 = C44494 - (C18596 * be + C18599 * C44317) / q +
                          C44504 - (C18031 * p) / q;
    const double C18949 = C44517 - (C18967 * C44316) / q - (C37501 * p) / q;
    const double C19057 = C44517 - (C32640 * be + C19048 * C44317) / q +
                          C44520 - (C37672 * p) / q;
    const double C17716 =
        C44409 - (C8776 * be + C17698 * C44317) / q + C44448 - C44455 / q;
    const double C19564 =
        C44530 - (C10662 * be + C19547 * C44317) / q - C44534 / q;
    const double C19954 = -(C19988 * C44316 + C44534) / q;
    const double C17827 = -(C17865 * C44316 + C44464) / q;
    const double C18166 = (3 * C17698) / C29167 -
                          (C31322 * be + C18157 * C44317) / q + C44484 -
                          C44464 / q;
    const double C18247 =
        C44445 - (C31455 * be + C18238 * C44317) / q + C44488 - C44489 / q;
    const double C18301 = -(C18319 * C44316 + C44489) / q;
    const double C19513 = C44532 - (C19547 * C44316) / q - (C17294 * p) / q;
    const double C20005 = C44532 - (C11121 * be + C19988 * C44317) / q +
                          C44529 - (C18032 * p) / q;
    const double C26536 = -(C26572 * C44316 + C44699) / q;
    const double C28042 =
        C39298 / C29167 - (C28025 * C44317) / q + C44769 - C44699 / q;
    const double C26690 = -(C26726 * C44316 + C44703) / q;
    const double C26852 = -(C26888 * C44316 + C44722) / q;
    const double C28259 =
        C28403 / C29167 - (C28242 * C44317) / q + C44776 - C44722 / q;
    const double C27256 = C44742 - (C27292 * C44316) / q - (C26158 * p) / q;
    const double C27467 =
        C44742 - (C27450 * C44317) / q + C44752 - (C26887 * p) / q;
    const double C27805 = C44765 - (C27823 * C44316) / q - (C42469 * p) / q;
    const double C27913 =
        C44765 - (C27904 * C44317) / q + C44768 - (C42640 * p) / q;
    const double C26581 = C44657 - (C26563 * C44317) / q + C44696 - C44703 / q;
    const double C28420 = C44778 - (C28403 * C44317) / q - C44782 / q;
    const double C28810 = -(C28844 * C44316 + C44782) / q;
    const double C26689 = -(C26725 * C44316 + C44712) / q;
    const double C27022 =
        (3 * C26563) / C29167 - (C27013 * C44317) / q + C44732 - C44712 / q;
    const double C27103 = C44693 - (C27094 * C44317) / q + C44736 - C44737 / q;
    const double C27157 = -(C27175 * C44316 + C44737) / q;
    const double C28369 = C44780 - (C28403 * C44316) / q - (C26159 * p) / q;
    const double C28861 =
        C44780 - (C28844 * C44317) / q + C44777 - (C26888 * p) / q;
    const double C44603 = C44478 / q;
    const double C44606 = C44482 / q;
    const double C44610 = C44475 / q;
    const double C18013 = -(C18085 * C44316 + C44475) / q;
    const double C18976 =
        C44516 - (C32507 * be + C18967 * C44317) / q - C44519 / q;
    const double C19030 = -(C19048 * C44316 + C44519) / q;
    const double C17995 = -(C18031 * C44316 + C44473) / q;
    const double C18895 = C18436 / C29167 -
                          (C32374 * be + C18886 * C44317) / q + C44513 -
                          C44473 / q;
    const double C44608 = C44487 / q;
    const double C18310 = -(C18346 * C44316 + C44487) / q;
    const double C44600 = C44468 / q;
    const double C44597 = C44432 / q;
    const double C17329 = -(C29918 * be + C17347 * C44317 + C44432) / q;
    const double C44585 = C44427 / q;
    const double C44592 = C44440 / q;
    const double C17518 = -(C30273 * be + C17527 * C44317 + C44440) / q;
    const double C44590 = C44435 / q;
    const double C44582 = C44421 / q;
    const double C44586 = C44430 / q;
    const double C44595 = C44447 / q;
    const double C44593 = C44442 / q;
    const double C44574 = C44408 / q;
    const double C44578 = C44414 / q;
    const double C44570 = C44401 / q;
    const double C44567 = C44392 / q;
    const double C44599 = C44460 / q;
    const double C44607 = C44483 / q;
    const double C44601 = C44469 / q;
    const double C44598 = C44459 / q;
    const double C18014 = -(C18086 * C44316 + C44459) / q;
    const double C18454 =
        C44491 - (C9523 * be + C18436 * C44317) / q - C44499 / q;
    const double C18563 = -(C18599 * C44316 + C44499) / q;
    const double C44572 = C44403 / q;
    const double C44591 = C44436 / q;
    const double C44583 = C44422 / q;
    const double C17330 = -(C10710 * be + C17348 * C44317 + C44422) / q;
    const double C44571 = C44402 / q;
    const double C44587 = C44431 / q;
    const double C44569 = C44394 / q;
    const double C44579 = C44415 / q;
    const double C44568 = C44393 / q;
    const double C44851 = C44726 / q;
    const double C44854 = C44730 / q;
    const double C44858 = C44723 / q;
    const double C26869 = -(C26941 * C44316 + C44723) / q;
    const double C27832 = C44764 - (C27823 * C44317) / q - C44767 / q;
    const double C27886 = -(C27904 * C44316 + C44767) / q;
    const double C26851 = -(C26887 * C44316 + C44721) / q;
    const double C27751 =
        C27292 / C29167 - (C27742 * C44317) / q + C44761 - C44721 / q;
    const double C44856 = C44735 / q;
    const double C27166 = -(C27202 * C44316 + C44735) / q;
    const double C44848 = C44716 / q;
    const double C44845 = C44680 / q;
    const double C26194 = -(C26212 * C44317 + C44680) / q;
    const double C44833 = C44675 / q;
    const double C44840 = C44688 / q;
    const double C26383 = -(C26392 * C44317 + C44688) / q;
    const double C44838 = C44683 / q;
    const double C44830 = C44669 / q;
    const double C44834 = C44678 / q;
    const double C44843 = C44695 / q;
    const double C44841 = C44690 / q;
    const double C44822 = C44656 / q;
    const double C44826 = C44662 / q;
    const double C44818 = C44649 / q;
    const double C44815 = C44640 / q;
    const double C44847 = C44708 / q;
    const double C44855 = C44731 / q;
    const double C44849 = C44717 / q;
    const double C44846 = C44707 / q;
    const double C26870 = -(C26942 * C44316 + C44707) / q;
    const double C27310 = C44739 - (C27292 * C44317) / q - C44747 / q;
    const double C27416 = -(C27450 * C44316 + C44747) / q;
    const double C44820 = C44651 / q;
    const double C44839 = C44684 / q;
    const double C44831 = C44670 / q;
    const double C26195 = -(C26213 * C44317 + C44670) / q;
    const double C44819 = C44650 / q;
    const double C44835 = C44679 / q;
    const double C44817 = C44642 / q;
    const double C44827 = C44663 / q;
    const double C44816 = C44641 / q;
    const double C8240 = C44166 - (C8258 * C44317) / q - C44333;
    const double C8759 = C44201 - (C8836 * be + C8839 * C44316) / q - C44333;
    const double C8438 = C44166 - (C8420 * C44321) / q + C44173 - C44343;
    const double C9506 = C44244 - (C9583 * be + C9586 * C44316) / q - C44343;
    const double C8122 = C44133 - (C8101 * C44321) / q - C44324;
    const double C10646 = C44282 - (C10719 * be + C10722 * C44316) / q - C44324;
    const double C8112 = C44132 - (C8091 * C44321) / q - C44323;
    const double C8348 = C44177 - (C10710 * be + C8420 * C44316) / q - C44323;
    const double C8276 = C44154 - (C8258 * C44321) / q - C44335;
    const double C10477 =
        C11181 / C29167 - (C11169 * be + C10545 * C44316) / q - C44335;
    const double C9185 = C44201 - (C9167 * C44321) / q + C44220 - C44359;
    const double C9727 = C44244 - (C9744 * C44317) / q - C44359;
    const double C8869 = C44198 - (C8849 * C44321) / q - C44351;
    const double C11162 = C44282 - (C11181 * C44317) / q - C44351;
    const double C8859 = C44197 - (C8839 * C44321) / q - C44350;
    const double C10528 = C10722 / C29167 - (C10545 * C44317) / q - C44350;
    const double C9023 = C44211 - (C9005 * C44321) / q - C44353;
    const double C9149 = C44228 - (C9167 * C44317) / q - C44353;
    const double C8111 = C44131 - (C8090 * C44321) / q - C44322;
    const double C8563 =
        (3 * C8420) / C29167 - (C30273 * be + C8599 * C44316) / q - C44322;
    const double C8185 =
        C8839 / q - (C29648 * be + C8257 * C44316) / q - C44327;
    const double C8509 = C44187 - (C8518 * C44317) / q - C44327;
    const double C8239 = C8258 / q - (C8257 * C44317) / q - C44332;
    const double C9229 = C44234 - (C31337 * be + C9265 * C44316) / q - C44332;
    const double C8275 = C44153 - (C8257 * C44321) / q - C44334;
    const double C8671 = C8420 / C29167 - (C8680 * C44317) / q - C44334;
    const double C9310 =
        C9167 / C29167 - (C31470 * be + C9346 * C44316) / q - C44334;
    const double C8347 =
        C9586 / q - (C29918 * be + C8419 * C44316) / q - C44337;
    const double C8608 = C44187 - (C8599 * C44321) / q + C44190 - C44337;
    const double C8689 =
        C8258 / C29167 - (C8680 * C44321) / q + C44192 - C44349;
    const double C9967 =
        C9744 / C29167 - (C32389 * be + C10003 * C44316) / q - C44349;
    const double C8437 = C8420 / q - (C8419 * C44321) / q + C44172 - C44342;
    const double C10048 = C44267 - (C32523 * be + C10084 * C44316) / q - C44342;
    const double C8527 = C44186 - (C8518 * C44321) / q - C44344;
    const double C8644 = C44195 - (C30406 * be + C8680 * C44316) / q - C44344;
    const double C9022 = C44210 - (C9004 * C44321) / q - C44352;
    const double C9418 = (3 * C9167) / C29167 - (C9427 * C44317) / q - C44352;
    const double C9355 =
        C8839 / C29167 - (C9346 * C44321) / q + C44237 - C44362;
    const double C9994 = C9586 / C29167 - (C10003 * C44317) / q - C44362;
    const double C9148 = C9744 / q - (C9166 * C44317) / q - C44355;
    const double C9436 = C44234 - (C9427 * C44321) / q + C44239 - C44355;
    const double C9184 = C9167 / q - (C9166 * C44321) / q + C44219 - C44358;
    const double C10156 = C44267 - (C10165 * C44317) / q - C44358;
    const double C9274 = C44233 - (C9265 * C44321) / q - C44360;
    const double C9337 = C44195 - (C9346 * C44317) / q - C44360;
    const double C17168 = C44417 - (C10314 * be + C17186 * C44317) / q - C44581;
    const double C17680 = C44452 - (C17752 * C44316) / q - C44581;
    const double C17113 = C17752 / q - (C17185 * C44316) / q - C44575;
    const double C17437 = C44438 - (C30139 * be + C17446 * C44317) / q - C44575;
    const double C17167 =
        C17186 / q - (C29648 * be + C17185 * C44317) / q - C44580;
    const double C18148 = C44485 - (C18184 * C44316) / q - C44580;
    const double C26033 = C44665 - (C26051 * C44317) / q - C44829;
    const double C26545 = C44700 - (C26617 * C44316) / q - C44829;
    const double C25978 = C26617 / q - (C26050 * C44316) / q - C44823;
    const double C26302 = C44686 - (C26311 * C44317) / q - C44823;
    const double C26032 = C26051 / q - (C26050 * C44317) / q - C44828;
    const double C27004 = C44733 - (C27040 * C44316) / q - C44828;
    const double C8222 =
        C8038 / C29167 - (C8204 * C44317) / q + C44154 - C44331;
    const double C8739 =
        C8789 / C29167 - (C8776 * be + C8779 * C44316) / q - C44331;
    const double C8059 = C44133 - (C8038 * C44317) / q - C44320;
    const double C10231 =
        C30655 / C29167 - (C10266 * be + C10269 * C44316) / q - C44320;
    const double C8049 = C44132 - (C8028 * C44317) / q - C44319;
    const double C8168 = C44158 - (C10257 * be + C8204 * C44316) / q - C44319;
    const double C8384 = C44173 - (C8366 * C44317) / q - C44339;
    const double C10460 =
        C11124 / C29167 - (C11112 * be + C10494 * C44316) / q - C44339;
    const double C8048 = C44131 - (C8027 * C44317) / q - C44318;
    const double C8473 =
        (3 * C8204) / C29167 - (C30124 * be + C8491 * C44316) / q - C44318;
    const double C8167 =
        C8779 / q - (C29618 * be + C8203 * C44316) / q - C44326;
    const double C8500 =
        C8028 / C29167 - (C8491 * C44317) / q + C44186 - C44326;
    const double C8221 = C8204 / q - (C8203 * C44317) / q + C44153 - C44330;
    const double C9220 =
        C8951 / C29167 - (C31322 * be + C9238 * C44316) / q - C44330;
    const double C8383 = C44172 - (C8365 * C44317) / q - C44338;
    const double C9958 =
        C9693 / C29167 - (C32374 * be + C9976 * C44316) / q - C44338;
    const double C8581 = C44190 - (C8572 * C44317) / q - C44345;
    const double C8635 = C44194 - (C30391 * be + C8653 * C44316) / q - C44345;
    const double C8662 =
        C8366 / C29167 - (C8653 * C44317) / q + C44192 - C44347;
    const double C9301 =
        C9113 / C29167 - (C31455 * be + C9319 * C44316) / q - C44347;
    const double C18067 =
        C18653 / q - (C31114 * be + C18085 * C44317) / q - C44603;
    const double C18355 = C44485 - (C18346 * C44321) / q + C44490 - C44603;
    const double C18103 = C18086 / q - (C18085 * C44321) / q + C44470 - C44606;
    const double C19066 = C44518 - (C32655 * be + C19075 * C44317) / q - C44606;
    const double C18274 =
        C17752 / C29167 - (C18265 * C44321) / q + C44488 - C44610;
    const double C18904 =
        C18490 / C29167 - (C32389 * be + C18913 * C44317) / q - C44610;
    const double C18193 = C44484 - (C18184 * C44321) / q - C44608;
    const double C18256 = C44446 - (C31470 * be + C18265 * C44317) / q - C44608;
    const double C17941 = C44461 - (C17922 * C44321) / q - C44600;
    const double C18337 =
        (3 * C18086) / C29167 - (C31602 * be + C18346 * C44317) / q - C44600;
    const double C17617 =
        C17186 / C29167 - (C17608 * C44321) / q + C44443 - C44597;
    const double C18877 = C18653 / C29167 - (C18913 * C44316) / q - C44597;
    const double C17275 = C18490 / q - (C17347 * C44316) / q - C44585;
    const double C17536 = C44438 - (C17527 * C44321) / q + C44441 - C44585;
    const double C17455 = C44437 - (C17446 * C44321) / q - C44592;
    const double C17572 = C44446 - (C17608 * C44316) / q - C44592;
    const double C17365 = C17348 / q - (C17347 * C44321) / q + C44423 - C44590;
    const double C18958 = C44518 - (C18994 * C44316) / q - C44590;
    const double C17203 = C44404 - (C17185 * C44321) / q - C44582;
    const double C17599 =
        C17348 / C29167 - (C30406 * be + C17608 * C44317) / q - C44582;
    const double C18229 = C18086 / C29167 - (C18265 * C44316) / q - C44582;
    const double C17311 = C44423 - (C29888 * be + C17293 * C44317) / q - C44586;
    const double C18868 = C18599 / C29167 - (C18886 * C44316) / q - C44586;
    const double C17590 =
        C17294 / C29167 - (C30391 * be + C17581 * C44317) / q + C44443 - C44595;
    const double C18220 = C18032 / C29167 - (C18238 * C44316) / q - C44595;
    const double C17509 = C44441 - (C30257 * be + C17500 * C44317) / q - C44593;
    const double C17563 = C44445 - (C17581 * C44316) / q - C44593;
    const double C17095 = C17698 / q - (C17131 * C44316) / q - C44574;
    const double C17428 =
        C16965 / C29167 - (C30124 * be + C17419 * C44317) / q + C44437 - C44574;
    const double C17149 =
        C17132 / q - (C29618 * be + C17131 * C44317) / q + C44404 - C44578;
    const double C18139 = C17866 / C29167 - (C18157 * C44316) / q - C44578;
    const double C17040 = C44386 - (C17021 * C44321) / q - C44570;
    const double C17491 =
        (3 * C17348) / C29167 - (C17527 * C44316) / q - C44570;
    const double C16983 = C44386 - (C29245 * be + C16964 * C44317) / q - C44567;
    const double C17401 =
        (3 * C17132) / C29167 - (C17419 * C44316) / q - C44567;
    const double C17779 = C44449 - (C17761 * C44321) / q - C44599;
    const double C20022 = C44533 - (C11178 * be + C20039 * C44317) / q - C44599;
    const double C18104 = C44452 - (C18086 * C44321) / q + C44471 - C44607;
    const double C18635 = C44495 - (C18650 * be + C18653 * C44317) / q - C44607;
    const double C17942 = C44462 - (C17923 * C44321) / q - C44601;
    const double C18068 = C44479 - (C20182 * be + C18086 * C44317) / q - C44601;
    const double C17770 = C44448 - (C17752 * C44321) / q - C44598;
    const double C19420 =
        C19598 / C29167 - (C11169 * be + C19437 * C44317) / q - C44598;
    const double C17050 = C44388 - (C17031 * C44321) / q - C44572;
    const double C19530 = C44533 - (C19598 * C44316) / q - C44572;
    const double C17366 = C44417 - (C17348 * C44321) / q + C44424 - C44591;
    const double C18418 = C44495 - (C18490 * C44316) / q - C44591;
    const double C17204 = C44405 - (C17186 * C44321) / q - C44583;
    const double C19369 = C20039 / C29167 - (C19437 * C44316) / q - C44583;
    const double C17041 = C44387 - (C17022 * C44321) / q - C44571;
    const double C17276 = C44428 - (C17348 * C44316) / q - C44571;
    const double C17312 = C44424 - (C10653 * be + C17294 * C44317) / q - C44587;
    const double C19352 = C19988 / C29167 - (C19386 * C44316) / q - C44587;
    const double C16993 = C44388 - (C8035 * be + C16974 * C44317) / q - C44569;
    const double C19135 = C35682 / C29167 - (C19169 * C44316) / q - C44569;
    const double C17150 =
        C16974 / C29167 - (C10257 * be + C17132 * C44317) / q + C44405 - C44579;
    const double C17662 = C17707 / C29167 - (C17698 * C44316) / q - C44579;
    const double C16984 = C44387 - (C8024 * be + C16965 * C44317) / q - C44568;
    const double C17096 = C44409 - (C17132 * C44316) / q - C44568;
    const double C26923 = C27501 / q - (C26941 * C44317) / q - C44851;
    const double C27211 =
        C44733 - (C31602 * be + C27202 * C44321) / q + C44738 - C44851;
    const double C26959 =
        C26942 / q - (C31114 * be + C26941 * C44321) / q + C44718 - C44854;
    const double C27922 = C44766 - (C27931 * C44317) / q - C44854;
    const double C27130 =
        C26617 / C29167 - (C31470 * be + C27121 * C44321) / q + C44736 - C44858;
    const double C27760 = C27346 / C29167 - (C27769 * C44317) / q - C44858;
    const double C27049 = C44732 - (C31337 * be + C27040 * C44321) / q - C44856;
    const double C27112 = C44694 - (C27121 * C44317) / q - C44856;
    const double C26797 = C44709 - (C30846 * be + C26779 * C44321) / q - C44848;
    const double C27193 =
        (3 * C26942) / C29167 - (C27202 * C44317) / q - C44848;
    const double C26482 =
        C26051 / C29167 - (C30406 * be + C26473 * C44321) / q + C44691 - C44845;
    const double C27733 = C27501 / C29167 - (C27769 * C44316) / q - C44845;
    const double C26140 = C27346 / q - (C26212 * C44316) / q - C44833;
    const double C26401 =
        C44686 - (C30273 * be + C26392 * C44321) / q + C44689 - C44833;
    const double C26320 = C44685 - (C30139 * be + C26311 * C44321) / q - C44840;
    const double C26437 = C44694 - (C26473 * C44316) / q - C44840;
    const double C26230 =
        C26213 / q - (C29918 * be + C26212 * C44321) / q + C44671 - C44838;
    const double C27814 = C44766 - (C27850 * C44316) / q - C44838;
    const double C26068 = C44652 - (C29648 * be + C26050 * C44321) / q - C44830;
    const double C26464 = C26213 / C29167 - (C26473 * C44317) / q - C44830;
    const double C27085 = C26942 / C29167 - (C27121 * C44316) / q - C44830;
    const double C26176 = C44671 - (C26158 * C44317) / q - C44834;
    const double C27724 = C27450 / C29167 - (C27742 * C44316) / q - C44834;
    const double C26455 =
        C26159 / C29167 - (C26446 * C44317) / q + C44691 - C44843;
    const double C27076 = C26888 / C29167 - (C27094 * C44316) / q - C44843;
    const double C26374 = C44689 - (C26365 * C44317) / q - C44841;
    const double C26428 = C44693 - (C26446 * C44316) / q - C44841;
    const double C25960 = C26563 / q - (C25996 * C44316) / q - C44822;
    const double C26293 =
        C25830 / C29167 - (C26284 * C44317) / q + C44685 - C44822;
    const double C26014 = C25997 / q - (C25996 * C44317) / q + C44652 - C44826;
    const double C26995 = C26726 / C29167 - (C27013 * C44316) / q - C44826;
    const double C25905 = C44634 - (C29290 * be + C25886 * C44321) / q - C44818;
    const double C26356 =
        (3 * C26213) / C29167 - (C26392 * C44316) / q - C44818;
    const double C25848 = C44634 - (C25829 * C44317) / q - C44815;
    const double C26266 =
        (3 * C25997) / C29167 - (C26284 * C44316) / q - C44815;
    const double C26644 = C44697 - (C8846 * be + C26626 * C44321) / q - C44847;
    const double C28878 = C44781 - (C28895 * C44317) / q - C44847;
    const double C26960 =
        C44700 - (C20182 * be + C26942 * C44321) / q + C44719 - C44855;
    const double C27484 = C44743 - (C27501 * C44317) / q - C44855;
    const double C26798 = C44710 - (C17919 * be + C26780 * C44321) / q - C44849;
    const double C26924 = C44727 - (C26942 * C44317) / q - C44849;
    const double C26635 = C44696 - (C8836 * be + C26617 * C44321) / q - C44846;
    const double C28276 = C28454 / C29167 - (C28293 * C44317) / q - C44846;
    const double C25915 = C44636 - (C8098 * be + C25896 * C44321) / q - C44820;
    const double C28386 = C44781 - (C28454 * C44316) / q - C44820;
    const double C26231 =
        C44665 - (C10710 * be + C26213 * C44321) / q + C44672 - C44839;
    const double C27274 = C44743 - (C27346 * C44316) / q - C44839;
    const double C26069 = C44653 - (C10314 * be + C26051 * C44321) / q - C44831;
    const double C28225 = C28895 / C29167 - (C28293 * C44316) / q - C44831;
    const double C25906 = C44635 - (C8087 * be + C25887 * C44321) / q - C44819;
    const double C26141 = C44676 - (C26213 * C44316) / q - C44819;
    const double C26177 = C44672 - (C26159 * C44317) / q - C44835;
    const double C28208 = C28844 / C29167 - (C28242 * C44316) / q - C44835;
    const double C25858 = C44636 - (C25839 * C44317) / q - C44817;
    const double C27991 = C40650 / C29167 - (C28025 * C44316) / q - C44817;
    const double C26015 =
        C25839 / C29167 - (C25997 * C44317) / q + C44653 - C44827;
    const double C26527 = C26572 / C29167 - (C26563 * C44316) / q - C44827;
    const double C25849 = C44635 - (C25830 * C44317) / q - C44816;
    const double C25961 = C44657 - (C25997 * C44316) / q - C44816;
    etx[0] = C7943;
    etx[1] = C7944;
    etx[2] = C7954;
    etx[3] = C7964;
    etx[4] = C7965;
    etx[5] = C7975;
    etx[6] = C7985;
    etx[7] = C7986;
    etx[8] = C7996;
    etx[9] = C8006;
    etx[10] = C8007;
    etx[11] = C8017;
    etx[12] = C8027;
    etx[13] = C8028;
    etx[14] = C8038;
    etx[15] = C8048;
    etx[16] = C8049;
    etx[17] = C8059;
    etx[18] = C8069;
    etx[19] = C8070;
    etx[20] = C8080;
    etx[21] = C8090;
    etx[22] = C8091;
    etx[23] = C8101;
    etx[24] = C8111;
    etx[25] = C8112;
    etx[26] = C8122;
    etx[27] = C8131;
    etx[28] = C8132;
    etx[29] = C8149;
    etx[30] = C8150;
    etx[31] = C8167;
    etx[32] = C8168;
    etx[33] = C8185;
    etx[34] = C8186;
    etx[35] = C8203;
    etx[36] = C8204;
    etx[37] = C8221;
    etx[38] = C8222;
    etx[39] = C8239;
    etx[40] = C8240;
    etx[41] = C8257;
    etx[42] = C8258;
    etx[43] = C8275;
    etx[44] = C8276;
    etx[45] = C8293;
    etx[46] = C8294;
    etx[47] = C8311;
    etx[48] = C8312;
    etx[49] = C8329;
    etx[50] = C8330;
    etx[51] = C8347;
    etx[52] = C8348;
    etx[53] = C8365;
    etx[54] = C8366;
    etx[55] = C8383;
    etx[56] = C8384;
    etx[57] = C8401;
    etx[58] = C8402;
    etx[59] = C8419;
    etx[60] = C8420;
    etx[61] = C8437;
    etx[62] = C8438;
    etx[63] = C8455;
    etx[64] = C8464;
    etx[65] = C8473;
    etx[66] = C8482;
    etx[67] = C8491;
    etx[68] = C8500;
    etx[69] = C8509;
    etx[70] = C8518;
    etx[71] = C8527;
    etx[72] = C8536;
    etx[73] = C8545;
    etx[74] = C8554;
    etx[75] = C8563;
    etx[76] = C8572;
    etx[77] = C8581;
    etx[78] = C8590;
    etx[79] = C8599;
    etx[80] = C8608;
    etx[81] = C8617;
    etx[82] = C8626;
    etx[83] = C8635;
    etx[84] = C8644;
    etx[85] = C8653;
    etx[86] = C8662;
    etx[87] = C8671;
    etx[88] = C8680;
    etx[89] = C8689;
    etx[90] = C8699;
    etx[91] = C8709;
    etx[92] = C8719;
    etx[93] = C8729;
    etx[94] = C8739;
    etx[95] = C8749;
    etx[96] = C8759;
    etx[97] = C8769;
    etx[98] = C8779;
    etx[99] = C8789;
    etx[100] = C8799;
    etx[101] = C8809;
    etx[102] = C8819;
    etx[103] = C8829;
    etx[104] = C8839;
    etx[105] = C8849;
    etx[106] = C8859;
    etx[107] = C8869;
    etx[108] = C8878;
    etx[109] = C8879;
    etx[110] = C8896;
    etx[111] = C8897;
    etx[112] = C8914;
    etx[113] = C8915;
    etx[114] = C8932;
    etx[115] = C8933;
    etx[116] = C8950;
    etx[117] = C8951;
    etx[118] = C8968;
    etx[119] = C8969;
    etx[120] = C8986;
    etx[121] = C8987;
    etx[122] = C9004;
    etx[123] = C9005;
    etx[124] = C9022;
    etx[125] = C9023;
    etx[126] = C9040;
    etx[127] = C9041;
    etx[128] = C9058;
    etx[129] = C9059;
    etx[130] = C9076;
    etx[131] = C9077;
    etx[132] = C9094;
    etx[133] = C9095;
    etx[134] = C9112;
    etx[135] = C9113;
    etx[136] = C9130;
    etx[137] = C9131;
    etx[138] = C9148;
    etx[139] = C9149;
    etx[140] = C9166;
    etx[141] = C9167;
    etx[142] = C9184;
    etx[143] = C9185;
    etx[144] = C9202;
    etx[145] = C9211;
    etx[146] = C9220;
    etx[147] = C9229;
    etx[148] = C9238;
    etx[149] = C9247;
    etx[150] = C9256;
    etx[151] = C9265;
    etx[152] = C9274;
    etx[153] = C9283;
    etx[154] = C9292;
    etx[155] = C9301;
    etx[156] = C9310;
    etx[157] = C9319;
    etx[158] = C9328;
    etx[159] = C9337;
    etx[160] = C9346;
    etx[161] = C9355;
    etx[162] = C9364;
    etx[163] = C9373;
    etx[164] = C9382;
    etx[165] = C9391;
    etx[166] = C9400;
    etx[167] = C9409;
    etx[168] = C9418;
    etx[169] = C9427;
    etx[170] = C9436;
    etx[171] = C9446;
    etx[172] = C9456;
    etx[173] = C9466;
    etx[174] = C9476;
    etx[175] = C9486;
    etx[176] = C9496;
    etx[177] = C9506;
    etx[178] = C9516;
    etx[179] = C9526;
    etx[180] = C9536;
    etx[181] = C9546;
    etx[182] = C9556;
    etx[183] = C9566;
    etx[184] = C9576;
    etx[185] = C9586;
    etx[186] = C9596;
    etx[187] = C9606;
    etx[188] = C9616;
    etx[189] = C9625;
    etx[190] = C9642;
    etx[191] = C9659;
    etx[192] = C9676;
    etx[193] = C9693;
    etx[194] = C9710;
    etx[195] = C9727;
    etx[196] = C9744;
    etx[197] = C9761;
    etx[198] = C9778;
    etx[199] = C9779;
    etx[200] = C9796;
    etx[201] = C9797;
    etx[202] = C9814;
    etx[203] = C9815;
    etx[204] = C9832;
    etx[205] = C9833;
    etx[206] = C9850;
    etx[207] = C9851;
    etx[208] = C9868;
    etx[209] = C9869;
    etx[210] = C9886;
    etx[211] = C9887;
    etx[212] = C9904;
    etx[213] = C9905;
    etx[214] = C9922;
    etx[215] = C9923;
    etx[216] = C9940;
    etx[217] = C9949;
    etx[218] = C9958;
    etx[219] = C9967;
    etx[220] = C9976;
    etx[221] = C9985;
    etx[222] = C9994;
    etx[223] = C10003;
    etx[224] = C10012;
    etx[225] = C10021;
    etx[226] = C10030;
    etx[227] = C10039;
    etx[228] = C10048;
    etx[229] = C10057;
    etx[230] = C10066;
    etx[231] = C10075;
    etx[232] = C10084;
    etx[233] = C10093;
    etx[234] = C10102;
    etx[235] = C10111;
    etx[236] = C10120;
    etx[237] = C10129;
    etx[238] = C10138;
    etx[239] = C10147;
    etx[240] = C10156;
    etx[241] = C10165;
    etx[242] = C10174;
    etx[243] = C10193;
    etx[244] = C10212;
    etx[245] = C10231;
    etx[246] = C10250;
    etx[247] = C10269;
    etx[248] = C10288;
    etx[249] = C10307;
    etx[250] = C10326;
    etx[251] = C10345;
    etx[252] = C10426;
    etx[253] = C10443;
    etx[254] = C10460;
    etx[255] = C10477;
    etx[256] = C10494;
    etx[257] = C10511;
    etx[258] = C10528;
    etx[259] = C10545;
    etx[260] = C10562;
    etx[261] = C10589;
    etx[262] = C10608;
    etx[263] = C10627;
    etx[264] = C10646;
    etx[265] = C10665;
    etx[266] = C10684;
    etx[267] = C10703;
    etx[268] = C10722;
    etx[269] = C10741;
    etx[270] = C11048;
    etx[271] = C11067;
    etx[272] = C11086;
    etx[273] = C11105;
    etx[274] = C11124;
    etx[275] = C11143;
    etx[276] = C11162;
    etx[277] = C11181;
    etx[278] = C11200;
    ety[0] = C16888;
    ety[1] = C16889;
    ety[2] = C16898;
    ety[3] = C16907;
    ety[4] = C16908;
    ety[5] = C16917;
    ety[6] = C16926;
    ety[7] = C16927;
    ety[8] = C16936;
    ety[9] = C16945;
    ety[10] = C16946;
    ety[11] = C16955;
    ety[12] = C16964;
    ety[13] = C16965;
    ety[14] = C16974;
    ety[15] = C16983;
    ety[16] = C16984;
    ety[17] = C16993;
    ety[18] = C17002;
    ety[19] = C17003;
    ety[20] = C17012;
    ety[21] = C17021;
    ety[22] = C17022;
    ety[23] = C17031;
    ety[24] = C17040;
    ety[25] = C17041;
    ety[26] = C17050;
    ety[27] = C17059;
    ety[28] = C17060;
    ety[29] = C17077;
    ety[30] = C17078;
    ety[31] = C17095;
    ety[32] = C17096;
    ety[33] = C17113;
    ety[34] = C17114;
    ety[35] = C17131;
    ety[36] = C17132;
    ety[37] = C17149;
    ety[38] = C17150;
    ety[39] = C17167;
    ety[40] = C17168;
    ety[41] = C17185;
    ety[42] = C17186;
    ety[43] = C17203;
    ety[44] = C17204;
    ety[45] = C17221;
    ety[46] = C17222;
    ety[47] = C17239;
    ety[48] = C17240;
    ety[49] = C17257;
    ety[50] = C17258;
    ety[51] = C17275;
    ety[52] = C17276;
    ety[53] = C17293;
    ety[54] = C17294;
    ety[55] = C17311;
    ety[56] = C17312;
    ety[57] = C17329;
    ety[58] = C17330;
    ety[59] = C17347;
    ety[60] = C17348;
    ety[61] = C17365;
    ety[62] = C17366;
    ety[63] = C17383;
    ety[64] = C17392;
    ety[65] = C17401;
    ety[66] = C17410;
    ety[67] = C17419;
    ety[68] = C17428;
    ety[69] = C17437;
    ety[70] = C17446;
    ety[71] = C17455;
    ety[72] = C17464;
    ety[73] = C17473;
    ety[74] = C17482;
    ety[75] = C17491;
    ety[76] = C17500;
    ety[77] = C17509;
    ety[78] = C17518;
    ety[79] = C17527;
    ety[80] = C17536;
    ety[81] = C17545;
    ety[82] = C17554;
    ety[83] = C17563;
    ety[84] = C17572;
    ety[85] = C17581;
    ety[86] = C17590;
    ety[87] = C17599;
    ety[88] = C17608;
    ety[89] = C17617;
    ety[90] = C17626;
    ety[91] = C17635;
    ety[92] = C17644;
    ety[93] = C17653;
    ety[94] = C17662;
    ety[95] = C17671;
    ety[96] = C17680;
    ety[97] = C17689;
    ety[98] = C17698;
    ety[99] = C17707;
    ety[100] = C17716;
    ety[101] = C17725;
    ety[102] = C17734;
    ety[103] = C17743;
    ety[104] = C17752;
    ety[105] = C17761;
    ety[106] = C17770;
    ety[107] = C17779;
    ety[108] = C17789;
    ety[109] = C17790;
    ety[110] = C17808;
    ety[111] = C17809;
    ety[112] = C17827;
    ety[113] = C17828;
    ety[114] = C17846;
    ety[115] = C17847;
    ety[116] = C17865;
    ety[117] = C17866;
    ety[118] = C17884;
    ety[119] = C17885;
    ety[120] = C17903;
    ety[121] = C17904;
    ety[122] = C17922;
    ety[123] = C17923;
    ety[124] = C17941;
    ety[125] = C17942;
    ety[126] = C17959;
    ety[127] = C17960;
    ety[128] = C17977;
    ety[129] = C17978;
    ety[130] = C17995;
    ety[131] = C17996;
    ety[132] = C18013;
    ety[133] = C18014;
    ety[134] = C18031;
    ety[135] = C18032;
    ety[136] = C18049;
    ety[137] = C18050;
    ety[138] = C18067;
    ety[139] = C18068;
    ety[140] = C18085;
    ety[141] = C18086;
    ety[142] = C18103;
    ety[143] = C18104;
    ety[144] = C18121;
    ety[145] = C18130;
    ety[146] = C18139;
    ety[147] = C18148;
    ety[148] = C18157;
    ety[149] = C18166;
    ety[150] = C18175;
    ety[151] = C18184;
    ety[152] = C18193;
    ety[153] = C18202;
    ety[154] = C18211;
    ety[155] = C18220;
    ety[156] = C18229;
    ety[157] = C18238;
    ety[158] = C18247;
    ety[159] = C18256;
    ety[160] = C18265;
    ety[161] = C18274;
    ety[162] = C18283;
    ety[163] = C18292;
    ety[164] = C18301;
    ety[165] = C18310;
    ety[166] = C18319;
    ety[167] = C18328;
    ety[168] = C18337;
    ety[169] = C18346;
    ety[170] = C18355;
    ety[171] = C18364;
    ety[172] = C18373;
    ety[173] = C18382;
    ety[174] = C18391;
    ety[175] = C18400;
    ety[176] = C18409;
    ety[177] = C18418;
    ety[178] = C18427;
    ety[179] = C18436;
    ety[180] = C18445;
    ety[181] = C18454;
    ety[182] = C18463;
    ety[183] = C18472;
    ety[184] = C18481;
    ety[185] = C18490;
    ety[186] = C18499;
    ety[187] = C18508;
    ety[188] = C18517;
    ety[189] = C18527;
    ety[190] = C18545;
    ety[191] = C18563;
    ety[192] = C18581;
    ety[193] = C18599;
    ety[194] = C18617;
    ety[195] = C18635;
    ety[196] = C18653;
    ety[197] = C18671;
    ety[198] = C18688;
    ety[199] = C18689;
    ety[200] = C18706;
    ety[201] = C18707;
    ety[202] = C18724;
    ety[203] = C18725;
    ety[204] = C18742;
    ety[205] = C18743;
    ety[206] = C18760;
    ety[207] = C18761;
    ety[208] = C18778;
    ety[209] = C18779;
    ety[210] = C18796;
    ety[211] = C18797;
    ety[212] = C18814;
    ety[213] = C18815;
    ety[214] = C18832;
    ety[215] = C18833;
    ety[216] = C18850;
    ety[217] = C18859;
    ety[218] = C18868;
    ety[219] = C18877;
    ety[220] = C18886;
    ety[221] = C18895;
    ety[222] = C18904;
    ety[223] = C18913;
    ety[224] = C18922;
    ety[225] = C18931;
    ety[226] = C18940;
    ety[227] = C18949;
    ety[228] = C18958;
    ety[229] = C18967;
    ety[230] = C18976;
    ety[231] = C18985;
    ety[232] = C18994;
    ety[233] = C19003;
    ety[234] = C19012;
    ety[235] = C19021;
    ety[236] = C19030;
    ety[237] = C19039;
    ety[238] = C19048;
    ety[239] = C19057;
    ety[240] = C19066;
    ety[241] = C19075;
    ety[242] = C19084;
    ety[243] = C19101;
    ety[244] = C19118;
    ety[245] = C19135;
    ety[246] = C19152;
    ety[247] = C19169;
    ety[248] = C19186;
    ety[249] = C19203;
    ety[250] = C19220;
    ety[251] = C19237;
    ety[252] = C19318;
    ety[253] = C19335;
    ety[254] = C19352;
    ety[255] = C19369;
    ety[256] = C19386;
    ety[257] = C19403;
    ety[258] = C19420;
    ety[259] = C19437;
    ety[260] = C19454;
    ety[261] = C19479;
    ety[262] = C19496;
    ety[263] = C19513;
    ety[264] = C19530;
    ety[265] = C19547;
    ety[266] = C19564;
    ety[267] = C19581;
    ety[268] = C19598;
    ety[269] = C19615;
    ety[270] = C19920;
    ety[271] = C19937;
    ety[272] = C19954;
    ety[273] = C19971;
    ety[274] = C19988;
    ety[275] = C20005;
    ety[276] = C20022;
    ety[277] = C20039;
    ety[278] = C20056;
    etz[0] = C25753;
    etz[1] = C25754;
    etz[2] = C25763;
    etz[3] = C25772;
    etz[4] = C25773;
    etz[5] = C25782;
    etz[6] = C25791;
    etz[7] = C25792;
    etz[8] = C25801;
    etz[9] = C25810;
    etz[10] = C25811;
    etz[11] = C25820;
    etz[12] = C25829;
    etz[13] = C25830;
    etz[14] = C25839;
    etz[15] = C25848;
    etz[16] = C25849;
    etz[17] = C25858;
    etz[18] = C25867;
    etz[19] = C25868;
    etz[20] = C25877;
    etz[21] = C25886;
    etz[22] = C25887;
    etz[23] = C25896;
    etz[24] = C25905;
    etz[25] = C25906;
    etz[26] = C25915;
    etz[27] = C25924;
    etz[28] = C25925;
    etz[29] = C25942;
    etz[30] = C25943;
    etz[31] = C25960;
    etz[32] = C25961;
    etz[33] = C25978;
    etz[34] = C25979;
    etz[35] = C25996;
    etz[36] = C25997;
    etz[37] = C26014;
    etz[38] = C26015;
    etz[39] = C26032;
    etz[40] = C26033;
    etz[41] = C26050;
    etz[42] = C26051;
    etz[43] = C26068;
    etz[44] = C26069;
    etz[45] = C26086;
    etz[46] = C26087;
    etz[47] = C26104;
    etz[48] = C26105;
    etz[49] = C26122;
    etz[50] = C26123;
    etz[51] = C26140;
    etz[52] = C26141;
    etz[53] = C26158;
    etz[54] = C26159;
    etz[55] = C26176;
    etz[56] = C26177;
    etz[57] = C26194;
    etz[58] = C26195;
    etz[59] = C26212;
    etz[60] = C26213;
    etz[61] = C26230;
    etz[62] = C26231;
    etz[63] = C26248;
    etz[64] = C26257;
    etz[65] = C26266;
    etz[66] = C26275;
    etz[67] = C26284;
    etz[68] = C26293;
    etz[69] = C26302;
    etz[70] = C26311;
    etz[71] = C26320;
    etz[72] = C26329;
    etz[73] = C26338;
    etz[74] = C26347;
    etz[75] = C26356;
    etz[76] = C26365;
    etz[77] = C26374;
    etz[78] = C26383;
    etz[79] = C26392;
    etz[80] = C26401;
    etz[81] = C26410;
    etz[82] = C26419;
    etz[83] = C26428;
    etz[84] = C26437;
    etz[85] = C26446;
    etz[86] = C26455;
    etz[87] = C26464;
    etz[88] = C26473;
    etz[89] = C26482;
    etz[90] = C26491;
    etz[91] = C26500;
    etz[92] = C26509;
    etz[93] = C26518;
    etz[94] = C26527;
    etz[95] = C26536;
    etz[96] = C26545;
    etz[97] = C26554;
    etz[98] = C26563;
    etz[99] = C26572;
    etz[100] = C26581;
    etz[101] = C26590;
    etz[102] = C26599;
    etz[103] = C26608;
    etz[104] = C26617;
    etz[105] = C26626;
    etz[106] = C26635;
    etz[107] = C26644;
    etz[108] = C26653;
    etz[109] = C26654;
    etz[110] = C26671;
    etz[111] = C26672;
    etz[112] = C26689;
    etz[113] = C26690;
    etz[114] = C26707;
    etz[115] = C26708;
    etz[116] = C26725;
    etz[117] = C26726;
    etz[118] = C26743;
    etz[119] = C26744;
    etz[120] = C26761;
    etz[121] = C26762;
    etz[122] = C26779;
    etz[123] = C26780;
    etz[124] = C26797;
    etz[125] = C26798;
    etz[126] = C26815;
    etz[127] = C26816;
    etz[128] = C26833;
    etz[129] = C26834;
    etz[130] = C26851;
    etz[131] = C26852;
    etz[132] = C26869;
    etz[133] = C26870;
    etz[134] = C26887;
    etz[135] = C26888;
    etz[136] = C26905;
    etz[137] = C26906;
    etz[138] = C26923;
    etz[139] = C26924;
    etz[140] = C26941;
    etz[141] = C26942;
    etz[142] = C26959;
    etz[143] = C26960;
    etz[144] = C26977;
    etz[145] = C26986;
    etz[146] = C26995;
    etz[147] = C27004;
    etz[148] = C27013;
    etz[149] = C27022;
    etz[150] = C27031;
    etz[151] = C27040;
    etz[152] = C27049;
    etz[153] = C27058;
    etz[154] = C27067;
    etz[155] = C27076;
    etz[156] = C27085;
    etz[157] = C27094;
    etz[158] = C27103;
    etz[159] = C27112;
    etz[160] = C27121;
    etz[161] = C27130;
    etz[162] = C27139;
    etz[163] = C27148;
    etz[164] = C27157;
    etz[165] = C27166;
    etz[166] = C27175;
    etz[167] = C27184;
    etz[168] = C27193;
    etz[169] = C27202;
    etz[170] = C27211;
    etz[171] = C27220;
    etz[172] = C27229;
    etz[173] = C27238;
    etz[174] = C27247;
    etz[175] = C27256;
    etz[176] = C27265;
    etz[177] = C27274;
    etz[178] = C27283;
    etz[179] = C27292;
    etz[180] = C27301;
    etz[181] = C27310;
    etz[182] = C27319;
    etz[183] = C27328;
    etz[184] = C27337;
    etz[185] = C27346;
    etz[186] = C27355;
    etz[187] = C27364;
    etz[188] = C27373;
    etz[189] = C27382;
    etz[190] = C27399;
    etz[191] = C27416;
    etz[192] = C27433;
    etz[193] = C27450;
    etz[194] = C27467;
    etz[195] = C27484;
    etz[196] = C27501;
    etz[197] = C27518;
    etz[198] = C27536;
    etz[199] = C27537;
    etz[200] = C27555;
    etz[201] = C27556;
    etz[202] = C27574;
    etz[203] = C27575;
    etz[204] = C27593;
    etz[205] = C27594;
    etz[206] = C27612;
    etz[207] = C27613;
    etz[208] = C27631;
    etz[209] = C27632;
    etz[210] = C27650;
    etz[211] = C27651;
    etz[212] = C27669;
    etz[213] = C27670;
    etz[214] = C27688;
    etz[215] = C27689;
    etz[216] = C27706;
    etz[217] = C27715;
    etz[218] = C27724;
    etz[219] = C27733;
    etz[220] = C27742;
    etz[221] = C27751;
    etz[222] = C27760;
    etz[223] = C27769;
    etz[224] = C27778;
    etz[225] = C27787;
    etz[226] = C27796;
    etz[227] = C27805;
    etz[228] = C27814;
    etz[229] = C27823;
    etz[230] = C27832;
    etz[231] = C27841;
    etz[232] = C27850;
    etz[233] = C27859;
    etz[234] = C27868;
    etz[235] = C27877;
    etz[236] = C27886;
    etz[237] = C27895;
    etz[238] = C27904;
    etz[239] = C27913;
    etz[240] = C27922;
    etz[241] = C27931;
    etz[242] = C27940;
    etz[243] = C27957;
    etz[244] = C27974;
    etz[245] = C27991;
    etz[246] = C28008;
    etz[247] = C28025;
    etz[248] = C28042;
    etz[249] = C28059;
    etz[250] = C28076;
    etz[251] = C28093;
    etz[252] = C28174;
    etz[253] = C28191;
    etz[254] = C28208;
    etz[255] = C28225;
    etz[256] = C28242;
    etz[257] = C28259;
    etz[258] = C28276;
    etz[259] = C28293;
    etz[260] = C28310;
    etz[261] = C28335;
    etz[262] = C28352;
    etz[263] = C28369;
    etz[264] = C28386;
    etz[265] = C28403;
    etz[266] = C28420;
    etz[267] = C28437;
    etz[268] = C28454;
    etz[269] = C28471;
    etz[270] = C28776;
    etz[271] = C28793;
    etz[272] = C28810;
    etz[273] = C28827;
    etz[274] = C28844;
    etz[275] = C28861;
    etz[276] = C28878;
    etz[277] = C28895;
    etz[278] = C28912;
}
