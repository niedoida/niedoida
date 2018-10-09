/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2221_1_et(const double ae,
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
    const double C15300 = g[290];
    const double C15311 = g[291];
    const double C15384 = g[298];
    const double C15395 = g[299];
    const double C15468 = g[306];
    const double C15479 = g[307];
    const double C15594 = g[318];
    const double C15605 = g[319];
    const double C16643 = g[322];
    const double C16653 = g[323];
    const double C16723 = g[330];
    const double C16733 = g[331];
    const double C16803 = g[338];
    const double C16813 = g[339];
    const double C16923 = g[350];
    const double C16933 = g[351];
    const double C17971 = g[354];
    const double C17981 = g[355];
    const double C18051 = g[362];
    const double C18061 = g[363];
    const double C18131 = g[370];
    const double C18141 = g[371];
    const double C18251 = g[382];
    const double C18261 = g[383];
    const double C19282 = g[386];
    const double C19291 = g[387];
    const double C19358 = g[394];
    const double C19367 = g[395];
    const double C19434 = g[402];
    const double C19443 = g[403];
    const double C19548 = g[414];
    const double C19557 = g[415];
    const double C19986 = g[418];
    const double C19995 = g[419];
    const double C20062 = g[426];
    const double C20071 = g[427];
    const double C20138 = g[434];
    const double C20147 = g[435];
    const double C20252 = g[446];
    const double C20261 = g[447];
    const double C20802 = g[450];
    const double C20811 = g[451];
    const double C20878 = g[458];
    const double C20887 = g[459];
    const double C20954 = g[466];
    const double C20963 = g[467];
    const double C21068 = g[478];
    const double C21077 = g[479];
    const double C33498 = g[481];
    const double C33574 = g[485];
    const double C33650 = g[489];
    const double C33764 = g[495];
    const double C34809 = g[497];
    const double C34881 = g[501];
    const double C34953 = g[505];
    const double C35061 = g[511];
    const double C37544 = g[513];
    const double C37612 = g[517];
    const double C37680 = g[521];
    const double C37782 = g[527];
    const double C51522 = g[529];
    const double C51598 = g[533];
    const double C51674 = g[537];
    const double C51788 = g[543];
    const double C54365 = g[544];
    const double C54413 = g[545];
    const double C54430 = g[546];
    const double C54447 = g[547];
    const double C54550 = g[548];
    const double C54729 = g[549];
    const double C54908 = g[550];
    const double C54924 = g[551];
    const double C54939 = g[552];
    const double C54955 = g[553];
    const double C55000 = g[554];
    const double C55016 = g[555];
    const double C55031 = g[556];
    const double C55092 = g[557];
    const double C55124 = g[558];
    const double C55142 = g[559];
    const double C55218 = g[560];
    const double C55336 = g[561];
    const double C55455 = g[562];
    const double C55472 = g[563];
    const double C55488 = g[564];
    const double C55518 = g[565];
    const double C55535 = g[566];
    const double C55580 = g[567];
    const double C55612 = g[568];
    const double C55630 = g[569];
    const double C55706 = g[570];
    const double C55826 = g[571];
    const double C55944 = g[572];
    const double C55961 = g[573];
    const double C55978 = g[574];
    const double C56008 = g[575];
    const double C56025 = g[576];
    const double C56070 = g[577];
    const double C56085 = g[578];
    const double C56131 = g[579];
    const double C56189 = g[580];
    const double C56248 = g[581];
    const double C56263 = g[582];
    const double C56279 = g[583];
    const double C56308 = g[584];
    const double C56323 = g[585];
    const double C56368 = g[586];
    const double C56426 = g[587];
    const double C56483 = g[588];
    const double C56499 = g[589];
    const double C56515 = g[590];
    const double C56544 = g[591];
    const double C56560 = g[592];
    const double C56606 = g[593];
    const double C56664 = g[594];
    const double C56721 = g[595];
    const double C56737 = g[596];
    const double C56753 = g[597];
    const double C56812 = g[598];
    const double C56828 = g[599];
    const double C57134 = g[600];
    const double C57149 = g[601];
    const double C57192 = g[602];
    const double C57207 = g[603];
    const double C57253 = g[604];
    const double C57285 = g[605];
    const double C57302 = g[606];
    const double C57377 = g[607];
    const double C57495 = g[608];
    const double C57614 = g[609];
    const double C57630 = g[610];
    const double C57645 = g[611];
    const double C57675 = g[612];
    const double C57691 = g[613];
    const double C57735 = g[614];
    const double C57767 = g[615];
    const double C57784 = g[616];
    const double C57859 = g[617];
    const double C57981 = g[618];
    const double C58099 = g[619];
    const double C58115 = g[620];
    const double C58131 = g[621];
    const double C58161 = g[622];
    const double C58177 = g[623];
    const double C58223 = g[624];
    const double C58238 = g[625];
    const double C58284 = g[626];
    const double C58342 = g[627];
    const double C58401 = g[628];
    const double C58416 = g[629];
    const double C58432 = g[630];
    const double C58461 = g[631];
    const double C58476 = g[632];
    const double C58521 = g[633];
    const double C58579 = g[634];
    const double C58636 = g[635];
    const double C58651 = g[636];
    const double C58667 = g[637];
    const double C58696 = g[638];
    const double C58712 = g[639];
    const double C58757 = g[640];
    const double C58815 = g[641];
    const double C58872 = g[642];
    const double C58887 = g[643];
    const double C58903 = g[644];
    const double C58961 = g[645];
    const double C58977 = g[646];
    const double C59282 = g[647];
    const double C59297 = g[648];
    const double C59340 = g[649];
    const double C59355 = g[650];
    const double C59414 = g[651];
    const double C59572 = g[652];
    const double C59601 = g[653];
    const double C59630 = g[654];
    const double C59662 = g[655];
    const double C59679 = g[656];
    const double C59754 = g[657];
    const double C59874 = g[658];
    const double C59992 = g[659];
    const double C60008 = g[660];
    const double C60024 = g[661];
    const double C60054 = g[662];
    const double C60070 = g[663];
    const double C60114 = g[664];
    const double C60129 = g[665];
    const double C60175 = g[666];
    const double C60233 = g[667];
    const double C60292 = g[668];
    const double C60307 = g[669];
    const double C60323 = g[670];
    const double C60352 = g[671];
    const double C60367 = g[672];
    const double C60412 = g[673];
    const double C60470 = g[674];
    const double C60527 = g[675];
    const double C60543 = g[676];
    const double C60559 = g[677];
    const double C60588 = g[678];
    const double C60604 = g[679];
    const double C60649 = g[680];
    const double C60707 = g[681];
    const double C60764 = g[682];
    const double C60779 = g[683];
    const double C60795 = g[684];
    const double C60838 = g[685];
    const double C60995 = g[686];
    const double C61025 = g[687];
    const double C61068 = g[688];
    const double C61225 = g[689];
    const double C61254 = g[690];
    const double C61297 = g[691];
    const double C61454 = g[692];
    const double C61485 = g[693];
    const double C61528 = g[694];
    const double C61684 = g[695];
    const double C61713 = g[696];
    const double C61742 = g[697];
    const double C61758 = g[698];
    const double C61774 = g[699];
    const double C61788 = g[700];
    const double C61805 = g[701];
    const double C61820 = g[702];
    const double C61835 = g[703];
    const double C61851 = g[704];
    const double C61868 = g[705];
    const double C62306 = g[706];
    const double C62321 = g[707];
    const double C62337 = g[708];
    const double C62352 = g[709];
    const double C62367 = g[710];
    const double C62382 = g[711];
    const double C62398 = g[712];
    const double C62413 = g[713];
    const double C62430 = g[714];
    const double C62726 = g[715];
    const double C62741 = g[716];
    const double C62757 = g[717];
    const double C62772 = g[718];
    const double C62787 = g[719];
    const double C62802 = g[720];
    const double C62818 = g[721];
    const double C62833 = g[722];
    const double C62849 = g[723];
    const double C63171 = g[724];
    const double C63186 = g[725];
    const double C63260 = g[726];
    const double C63317 = g[727];
    const double C63332 = g[728];
    const double C63347 = g[729];
    const double C63418 = g[730];
    const double C63433 = g[731];
    const double C63618 = g[732];
    const double C63633 = g[733];
    const double C63649 = g[734];
    const double C63664 = g[735];
    const double C63679 = g[736];
    const double C63694 = g[737];
    const double C63712 = g[738];
    const double C63953 = g[739];
    const double C63968 = g[740];
    const double C63984 = g[741];
    const double C63999 = g[742];
    const double C64014 = g[743];
    const double C64029 = g[744];
    const double C64046 = g[745];
    const double C64369 = g[746];
    const double C64384 = g[747];
    const double C64458 = g[748];
    const double C64501 = g[749];
    const double C64516 = g[750];
    const double C64559 = g[751];
    const double C64574 = g[752];
    const double C64716 = g[753];
    const double C64731 = g[754];
    const double C64761 = g[755];
    const double C64776 = g[756];
    const double C64792 = g[757];
    const double C64807 = g[758];
    const double C64822 = g[759];
    const double C64837 = g[760];
    const double C64854 = g[761];
    const double C65122 = g[762];
    const double C65137 = g[763];
    const double C65210 = g[764];
    const double C65267 = g[765];
    const double C65282 = g[766];
    const double C65325 = g[767];
    const double C65353 = g[768];
    const double C65368 = g[769];
    const double C65411 = g[770];
    const double C65427 = g[771];
    const double C65442 = g[772];
    const double C65458 = g[773];
    const double C65579 = g[774];
    const double C65594 = g[775];
    const double C65609 = g[776];
    const double C65729 = g[777];
    const double C65744 = g[778];
    const double C65759 = g[779];
    const double C65876 = g[780];
    const double C65933 = g[781];
    const double C65948 = g[782];
    const double C65963 = g[783];
    const double C65978 = g[784];
    const double C65993 = g[785];
    const double C66113 = g[786];
    const double C66128 = g[787];
    const double C66143 = g[788];
    const double C66158 = g[789];
    const double C66173 = g[790];
    const double C66290 = g[791];
    const double C66347 = g[792];
    const double C66362 = g[793];
    const double C66377 = g[794];
    const double C66392 = g[795];
    const double C66407 = g[796];
    const double C66538 = g[797];
    const double C73924 = g[798];
    const double C73940 = g[799];
    const double C74041 = g[800];
    const double C74057 = g[801];
    const double C74247 = g[802];
    const double C74263 = g[803];
    const double C74483 = g[804];
    const double C74528 = g[805];
    const double C74544 = g[806];
    const double C74692 = g[807];
    const double C74897 = g[808];
    const double C74969 = g[809];
    const double C74985 = g[810];
    const double C75132 = g[811];
    const double C75235 = g[812];
    const double C75279 = g[813];
    const double C75337 = g[814];
    const double C75422 = g[815];
    const double C75534 = g[816];
    const double C75755 = g[817];
    const double C75800 = g[818];
    const double C75816 = g[819];
    const double C75936 = g[820];
    const double C76086 = g[821];
    const double C76186 = g[822];
    const double C76202 = g[823];
    const double C76321 = g[824];
    const double C76424 = g[825];
    const double C76468 = g[826];
    const double C76512 = g[827];
    const double C76569 = g[828];
    const double C76640 = g[829];
    const double C76887 = g[830];
    const double C76959 = g[831];
    const double C76975 = g[832];
    const double C77095 = g[833];
    const double C77170 = g[834];
    const double C77214 = g[835];
    const double C77271 = g[836];
    const double C77328 = g[837];
    const double C77356 = g[838];
    const double C77413 = g[839];
    const double C78024 = g[840];
    const double C78040 = g[841];
    const double C78200 = g[842];
    const double C78215 = g[843];
    const double C78430 = g[844];
    const double C78459 = g[845];
    const double C87864 = g[846];
    const double C87880 = g[847];
    const double C88233 = g[848];
    const double C88249 = g[849];
    const double C89000 = g[850];
    const double C89016 = g[851];
    const double C90457 = g[852];
    const double C54417 = vrx[0];
    const double C54435 = vrx[1];
    const double C54452 = vrx[2];
    const double C55129 = vrx[3];
    const double C55147 = vrx[4];
    const double C55617 = vrx[5];
    const double C55635 = vrx[6];
    const double C56089 = vrx[7];
    const double C56327 = vrx[8];
    const double C56565 = vrx[9];
    const double C56816 = vrx[10];
    const double C56832 = vrx[11];
    const double C57289 = vrx[12];
    const double C57306 = vrx[13];
    const double C57771 = vrx[14];
    const double C57788 = vrx[15];
    const double C58242 = vrx[16];
    const double C58480 = vrx[17];
    const double C58716 = vrx[18];
    const double C58965 = vrx[19];
    const double C58981 = vrx[20];
    const double C59418 = vrx[21];
    const double C59666 = vrx[22];
    const double C59683 = vrx[23];
    const double C60133 = vrx[24];
    const double C60371 = vrx[25];
    const double C60608 = vrx[26];
    const double C60843 = vrx[27];
    const double C61073 = vrx[28];
    const double C61302 = vrx[29];
    const double C61532 = vrx[30];
    const double C61746 = vrx[31];
    const double C61793 = vrx[32];
    const double C61824 = vrx[33];
    const double C61839 = vrx[34];
    const double C61855 = vrx[35];
    const double C61872 = vrx[36];
    const double C61931 = vrx[37];
    const double C61960 = vrx[38];
    const double C62076 = vrx[39];
    const double C62105 = vrx[40];
    const double C62178 = vrx[41];
    const double C62236 = vrx[42];
    const double C62265 = vrx[43];
    const double C62280 = vrx[44];
    const double C62386 = vrx[45];
    const double C62417 = vrx[46];
    const double C62434 = vrx[47];
    const double C62479 = vrx[48];
    const double C62553 = vrx[49];
    const double C62568 = vrx[50];
    const double C62627 = vrx[51];
    const double C62685 = vrx[52];
    const double C62714 = vrx[53];
    const double C62806 = vrx[54];
    const double C62853 = vrx[55];
    const double C62999 = vrx[56];
    const double C63058 = vrx[57];
    const double C63130 = vrx[58];
    const double C63159 = vrx[59];
    const double C63451 = vrx[60];
    const double C63521 = vrx[61];
    const double C63578 = vrx[62];
    const double C63698 = vrx[63];
    const double C63716 = vrx[64];
    const double C63762 = vrx[65];
    const double C63836 = vrx[66];
    const double C63851 = vrx[67];
    const double C63896 = vrx[68];
    const double C63926 = vrx[69];
    const double C63941 = vrx[70];
    const double C64050 = vrx[71];
    const double C64225 = vrx[72];
    const double C64270 = vrx[73];
    const double C64314 = vrx[74];
    const double C64343 = vrx[75];
    const double C64634 = vrx[76];
    const double C64704 = vrx[77];
    const double C64749 = vrx[78];
    const double C64858 = vrx[79];
    const double C65006 = vrx[80];
    const double C65051 = vrx[81];
    const double C65095 = vrx[82];
    const double C65110 = vrx[83];
    const double C65415 = vrx[84];
    const double C65446 = vrx[85];
    const double C65462 = vrx[86];
    const double C65477 = vrx[87];
    const double C65492 = vrx[88];
    const double C65507 = vrx[89];
    const double C65522 = vrx[90];
    const double C65537 = vrx[91];
    const double C65552 = vrx[92];
    const double C65567 = vrx[93];
    const double C65627 = vrx[94];
    const double C65642 = vrx[95];
    const double C65657 = vrx[96];
    const double C65672 = vrx[97];
    const double C65687 = vrx[98];
    const double C65702 = vrx[99];
    const double C65717 = vrx[100];
    const double C65819 = vrx[101];
    const double C65834 = vrx[102];
    const double C65849 = vrx[103];
    const double C65864 = vrx[104];
    const double C66011 = vrx[105];
    const double C66026 = vrx[106];
    const double C66041 = vrx[107];
    const double C66056 = vrx[108];
    const double C66071 = vrx[109];
    const double C66086 = vrx[110];
    const double C66101 = vrx[111];
    const double C66233 = vrx[112];
    const double C66248 = vrx[113];
    const double C66263 = vrx[114];
    const double C66278 = vrx[115];
    const double C66481 = vrx[116];
    const double C66496 = vrx[117];
    const double C66511 = vrx[118];
    const double C66526 = vrx[119];
    const double C66618 = vry[0];
    const double C66634 = vry[1];
    const double C66650 = vry[2];
    const double C67316 = vry[3];
    const double C67333 = vry[4];
    const double C67794 = vry[5];
    const double C67811 = vry[6];
    const double C68256 = vry[7];
    const double C68487 = vry[8];
    const double C68718 = vry[9];
    const double C68963 = vry[10];
    const double C68978 = vry[11];
    const double C69429 = vry[12];
    const double C69445 = vry[13];
    const double C69901 = vry[14];
    const double C69917 = vry[15];
    const double C70362 = vry[16];
    const double C70593 = vry[17];
    const double C70822 = vry[18];
    const double C71065 = vry[19];
    const double C71080 = vry[20];
    const double C71512 = vry[21];
    const double C71756 = vry[22];
    const double C71772 = vry[23];
    const double C72213 = vry[24];
    const double C72444 = vry[25];
    const double C72674 = vry[26];
    const double C72903 = vry[27];
    const double C73130 = vry[28];
    const double C73356 = vry[29];
    const double C73583 = vry[30];
    const double C73794 = vry[31];
    const double C73838 = vry[32];
    const double C73867 = vry[33];
    const double C73881 = vry[34];
    const double C73896 = vry[35];
    const double C73912 = vry[36];
    const double C73973 = vry[37];
    const double C74002 = vry[38];
    const double C74120 = vry[39];
    const double C74149 = vry[40];
    const double C74222 = vry[41];
    const double C74282 = vry[42];
    const double C74311 = vry[43];
    const double C74326 = vry[44];
    const double C74426 = vry[45];
    const double C74455 = vry[46];
    const double C74471 = vry[47];
    const double C74517 = vry[48];
    const double C74593 = vry[49];
    const double C74608 = vry[50];
    const double C74667 = vry[51];
    const double C74726 = vry[52];
    const double C74755 = vry[53];
    const double C74841 = vry[54];
    const double C74885 = vry[55];
    const double C75034 = vry[56];
    const double C75093 = vry[57];
    const double C75166 = vry[58];
    const double C75195 = vry[59];
    const double C75483 = vry[60];
    const double C75554 = vry[61];
    const double C75611 = vry[62];
    const double C75725 = vry[63];
    const double C75742 = vry[64];
    const double C75789 = vry[65];
    const double C75865 = vry[66];
    const double C75880 = vry[67];
    const double C75925 = vry[68];
    const double C75956 = vry[69];
    const double C75971 = vry[70];
    const double C76073 = vry[71];
    const double C76251 = vry[72];
    const double C76296 = vry[73];
    const double C76341 = vry[74];
    const double C76370 = vry[75];
    const double C76659 = vry[76];
    const double C76729 = vry[77];
    const double C76772 = vry[78];
    const double C76874 = vry[79];
    const double C77025 = vry[80];
    const double C77070 = vry[81];
    const double C77115 = vry[82];
    const double C77130 = vry[83];
    const double C77432 = vry[84];
    const double C77461 = vry[85];
    const double C77476 = vry[86];
    const double C77491 = vry[87];
    const double C77506 = vry[88];
    const double C77521 = vry[89];
    const double C77536 = vry[90];
    const double C77551 = vry[91];
    const double C77566 = vry[92];
    const double C77581 = vry[93];
    const double C77638 = vry[94];
    const double C77653 = vry[95];
    const double C77668 = vry[96];
    const double C77683 = vry[97];
    const double C77698 = vry[98];
    const double C77713 = vry[99];
    const double C77728 = vry[100];
    const double C77827 = vry[101];
    const double C77842 = vry[102];
    const double C77857 = vry[103];
    const double C77872 = vry[104];
    const double C78013 = vry[105];
    const double C78029 = vry[106];
    const double C78045 = vry[107];
    const double C78060 = vry[108];
    const double C78075 = vry[109];
    const double C78090 = vry[110];
    const double C78105 = vry[111];
    const double C78234 = vry[112];
    const double C78249 = vry[113];
    const double C78264 = vry[114];
    const double C78279 = vry[115];
    const double C78478 = vry[116];
    const double C78493 = vry[117];
    const double C78508 = vry[118];
    const double C78523 = vry[119];
    const double C78614 = vrz[0];
    const double C78630 = vrz[1];
    const double C78646 = vrz[2];
    const double C79312 = vrz[3];
    const double C79329 = vrz[4];
    const double C79790 = vrz[5];
    const double C79807 = vrz[6];
    const double C80252 = vrz[7];
    const double C80483 = vrz[8];
    const double C80714 = vrz[9];
    const double C80959 = vrz[10];
    const double C80974 = vrz[11];
    const double C81425 = vrz[12];
    const double C81441 = vrz[13];
    const double C81897 = vrz[14];
    const double C81913 = vrz[15];
    const double C82358 = vrz[16];
    const double C82589 = vrz[17];
    const double C82818 = vrz[18];
    const double C83061 = vrz[19];
    const double C83076 = vrz[20];
    const double C83508 = vrz[21];
    const double C83752 = vrz[22];
    const double C83768 = vrz[23];
    const double C84209 = vrz[24];
    const double C84440 = vrz[25];
    const double C84670 = vrz[26];
    const double C84899 = vrz[27];
    const double C85126 = vrz[28];
    const double C85352 = vrz[29];
    const double C85579 = vrz[30];
    const double C85790 = vrz[31];
    const double C85834 = vrz[32];
    const double C85863 = vrz[33];
    const double C85877 = vrz[34];
    const double C85892 = vrz[35];
    const double C85908 = vrz[36];
    const double C85967 = vrz[37];
    const double C85996 = vrz[38];
    const double C86112 = vrz[39];
    const double C86141 = vrz[40];
    const double C86214 = vrz[41];
    const double C86272 = vrz[42];
    const double C86301 = vrz[43];
    const double C86316 = vrz[44];
    const double C86416 = vrz[45];
    const double C86445 = vrz[46];
    const double C86461 = vrz[47];
    const double C86506 = vrz[48];
    const double C86580 = vrz[49];
    const double C86595 = vrz[50];
    const double C86654 = vrz[51];
    const double C86712 = vrz[52];
    const double C86741 = vrz[53];
    const double C86827 = vrz[54];
    const double C86871 = vrz[55];
    const double C87017 = vrz[56];
    const double C87076 = vrz[57];
    const double C87148 = vrz[58];
    const double C87177 = vrz[59];
    const double C87461 = vrz[60];
    const double C87531 = vrz[61];
    const double C87588 = vrz[62];
    const double C87702 = vrz[63];
    const double C87719 = vrz[64];
    const double C87765 = vrz[65];
    const double C87839 = vrz[66];
    const double C87854 = vrz[67];
    const double C87901 = vrz[68];
    const double C87931 = vrz[69];
    const double C87946 = vrz[70];
    const double C88048 = vrz[71];
    const double C88223 = vrz[72];
    const double C88270 = vrz[73];
    const double C88314 = vrz[74];
    const double C88343 = vrz[75];
    const double C88627 = vrz[76];
    const double C88697 = vrz[77];
    const double C88740 = vrz[78];
    const double C88842 = vrz[79];
    const double C88990 = vrz[80];
    const double C89037 = vrz[81];
    const double C89081 = vrz[82];
    const double C89096 = vrz[83];
    const double C89392 = vrz[84];
    const double C89421 = vrz[85];
    const double C89436 = vrz[86];
    const double C89451 = vrz[87];
    const double C89466 = vrz[88];
    const double C89481 = vrz[89];
    const double C89496 = vrz[90];
    const double C89511 = vrz[91];
    const double C89526 = vrz[92];
    const double C89541 = vrz[93];
    const double C89598 = vrz[94];
    const double C89613 = vrz[95];
    const double C89628 = vrz[96];
    const double C89643 = vrz[97];
    const double C89658 = vrz[98];
    const double C89673 = vrz[99];
    const double C89688 = vrz[100];
    const double C89787 = vrz[101];
    const double C89802 = vrz[102];
    const double C89817 = vrz[103];
    const double C89832 = vrz[104];
    const double C89973 = vrz[105];
    const double C89988 = vrz[106];
    const double C90003 = vrz[107];
    const double C90018 = vrz[108];
    const double C90033 = vrz[109];
    const double C90048 = vrz[110];
    const double C90063 = vrz[111];
    const double C90190 = vrz[112];
    const double C90205 = vrz[113];
    const double C90220 = vrz[114];
    const double C90235 = vrz[115];
    const double C90432 = vrz[116];
    const double C90447 = vrz[117];
    const double C90463 = vrz[118];
    const double C90478 = vrz[119];
    const double C54432 = 2 * q;
    const double C90945 = C64704 / q;
    const double C90944 = C66278 * p;
    const double C90943 = C63578 / q;
    const double C90942 = C66263 * p;
    const double C90941 = C66248 * p;
    const double C90940 = C66233 * p;
    const double C90939 = 3 * C63521;
    const double C90938 = C66101 * p;
    const double C90937 = C66086 * p;
    const double C90936 = C66071 * p;
    const double C90935 = C66056 * p;
    const double C90934 = C65864 * p;
    const double C90933 = C62280 / q;
    const double C90932 = C65849 * p;
    const double C90931 = C65834 * p;
    const double C90930 = C65819 * p;
    const double C90929 = 3 * C62568;
    const double C90928 = C65717 * p;
    const double C90927 = C65702 * p;
    const double C90926 = C65687 * p;
    const double C90925 = C65672 * p;
    const double C90924 = C65657 * p;
    const double C90923 = C65642 * p;
    const double C90922 = C65627 * p;
    const double C90921 = 3 * C62434;
    const double C90920 = C65567 * p;
    const double C90919 = C65552 * p;
    const double C90918 = C65537 * p;
    const double C90917 = C65522 * p;
    const double C90916 = C65507 * p;
    const double C90915 = C65492 * p;
    const double C90914 = C65477 * p;
    const double C90912 = C65110 * p;
    const double C90911 = C65095 * p;
    const double C90909 = C65051 * p;
    const double C90905 = C64749 * p;
    const double C90904 = C64704 * p;
    const double C90902 = C64634 * p;
    const double C90900 = C59418 * p;
    const double C90899 = C64343 * p;
    const double C90898 = C60608 * p;
    const double C90897 = C64314 * p;
    const double C90896 = C58480 / q;
    const double C90894 = C64270 * p;
    const double C90893 = C60133 / q;
    const double C90892 = C64225 * p;
    const double C90891 = C64050 * p;
    const double C90889 = C61532 / q;
    const double C90888 = 3 * C57771;
    const double C90884 = C63941 * p;
    const double C90883 = C63926 * p;
    const double C90882 = C63896 * p;
    const double C90881 = C63851 * p;
    const double C90880 = C63836 * p;
    const double C90879 = C63716 * p;
    const double C90874 = C58716 * p;
    const double C90873 = C61532 * p;
    const double C90872 = C63578 * p;
    const double C90870 = C57771 * p;
    const double C90869 = C57788 * p;
    const double C90868 = C63521 * p;
    const double C90867 = C63451 * p;
    const double C90866 = C61073 / q;
    const double C90864 = C63159 * p;
    const double C90863 = C56565 / q;
    const double C90862 = C58965 * p;
    const double C90861 = C63130 * p;
    const double C90860 = C60371 * p;
    const double C90858 = C63058 * p;
    const double C90857 = C60133 * p;
    const double C90855 = C62999 * p;
    const double C90854 = C62853 * p;
    const double C90850 = 3 * C55617;
    const double C90849 = C61302 / q;
    const double C90847 = C62714 * p;
    const double C90846 = C61073 * p;
    const double C90845 = C62685 * p;
    const double C90844 = C58480 * p;
    const double C90843 = C56816 * p;
    const double C90842 = C62627 * p;
    const double C90841 = C58242 * p;
    const double C90838 = C62568 * p;
    const double C90837 = C62553 * p;
    const double C90836 = C62434 * p;
    const double C90834 = C62479 * p;
    const double C90833 = C62417 * p;
    const double C90829 = 3 * C55129;
    const double C90828 = C60843 / q;
    const double C90826 = C56565 * p;
    const double C90825 = C62280 * p;
    const double C90824 = C62265 * p;
    const double C90823 = C61302 * p;
    const double C90822 = C62236 * p;
    const double C90821 = C60843 * p;
    const double C90820 = C62178 * p;
    const double C90817 = C55617 * p;
    const double C90816 = C55635 * p;
    const double C90815 = C62105 * p;
    const double C90814 = C56327 * p;
    const double C90813 = C62076 * p;
    const double C90812 = C61872 * p;
    const double C90811 = C55129 * p;
    const double C90810 = C55147 * p;
    const double C90809 = C61960 * p;
    const double C90808 = C56089 * p;
    const double C90807 = C61931 * p;
    const double C90806 = C61855 * p;
    const double C90520 = de * zCD;
    const double C90519 = be * zAB;
    const double C90515 = de * yCD;
    const double C90514 = be * yAB;
    const double C90510 = de * xCD;
    const double C90509 = be * xAB;
    const double C91545 = C76729 / q;
    const double C91544 = C78279 * p;
    const double C91543 = C75611 / q;
    const double C91542 = C78264 * p;
    const double C91541 = C78249 * p;
    const double C91540 = C78234 * p;
    const double C91539 = 3 * C75554;
    const double C91538 = C78105 * p;
    const double C91537 = C78090 * p;
    const double C91536 = C78075 * p;
    const double C91535 = C78060 * p;
    const double C91534 = C77872 * p;
    const double C91533 = C74326 / q;
    const double C91532 = C77857 * p;
    const double C91531 = C77842 * p;
    const double C91530 = C77827 * p;
    const double C91529 = 3 * C74608;
    const double C91528 = C77728 * p;
    const double C91527 = C77713 * p;
    const double C91526 = C77698 * p;
    const double C91525 = C77683 * p;
    const double C91524 = C77668 * p;
    const double C91523 = C77653 * p;
    const double C91522 = C77638 * p;
    const double C91521 = 3 * C74471;
    const double C91520 = C77581 * p;
    const double C91519 = C77566 * p;
    const double C91518 = C77551 * p;
    const double C91517 = C77536 * p;
    const double C91516 = C77521 * p;
    const double C91515 = C77506 * p;
    const double C91514 = C77491 * p;
    const double C91512 = C77130 * p;
    const double C91511 = C77115 * p;
    const double C91509 = C77070 * p;
    const double C91505 = C76772 * p;
    const double C91504 = C76729 * p;
    const double C91502 = C76659 * p;
    const double C91500 = C71512 * p;
    const double C91499 = C76370 * p;
    const double C91498 = C72674 * p;
    const double C91497 = C76341 * p;
    const double C91496 = C70593 / q;
    const double C91494 = C76296 * p;
    const double C91493 = C72213 / q;
    const double C91492 = C76251 * p;
    const double C91491 = C76073 * p;
    const double C91489 = C73583 / q;
    const double C91488 = 3 * C69901;
    const double C91484 = C75971 * p;
    const double C91483 = C75956 * p;
    const double C91482 = C75925 * p;
    const double C91481 = C75880 * p;
    const double C91480 = C75865 * p;
    const double C91479 = C75742 * p;
    const double C91474 = C70822 * p;
    const double C91473 = C73583 * p;
    const double C91472 = C75611 * p;
    const double C91470 = C69901 * p;
    const double C91469 = C69917 * p;
    const double C91468 = C75554 * p;
    const double C91467 = C75483 * p;
    const double C91466 = C73130 / q;
    const double C91464 = C75195 * p;
    const double C91463 = C68718 / q;
    const double C91462 = C71065 * p;
    const double C91461 = C75166 * p;
    const double C91460 = C72444 * p;
    const double C91458 = C75093 * p;
    const double C91457 = C72213 * p;
    const double C91455 = C75034 * p;
    const double C91454 = C74885 * p;
    const double C91450 = 3 * C67794;
    const double C91449 = C73356 / q;
    const double C91447 = C74755 * p;
    const double C91446 = C73130 * p;
    const double C91445 = C74726 * p;
    const double C91444 = C70593 * p;
    const double C91443 = C68963 * p;
    const double C91442 = C74667 * p;
    const double C91441 = C70362 * p;
    const double C91438 = C74608 * p;
    const double C91437 = C74593 * p;
    const double C91436 = C74471 * p;
    const double C91434 = C74517 * p;
    const double C91433 = C74455 * p;
    const double C91429 = 3 * C67316;
    const double C91428 = C72903 / q;
    const double C91426 = C68718 * p;
    const double C91425 = C74326 * p;
    const double C91424 = C74311 * p;
    const double C91423 = C73356 * p;
    const double C91422 = C74282 * p;
    const double C91421 = C72903 * p;
    const double C91420 = C74222 * p;
    const double C91417 = C67794 * p;
    const double C91416 = C67811 * p;
    const double C91415 = C74149 * p;
    const double C91414 = C68487 * p;
    const double C91413 = C74120 * p;
    const double C91412 = C73912 * p;
    const double C91411 = C67316 * p;
    const double C91410 = C67333 * p;
    const double C91409 = C74002 * p;
    const double C91408 = C68256 * p;
    const double C91407 = C73973 * p;
    const double C91406 = C73896 * p;
    const double C92142 = C88697 / q;
    const double C92141 = C90235 * p;
    const double C92140 = C87588 / q;
    const double C92139 = C90220 * p;
    const double C92138 = C90205 * p;
    const double C92137 = C90190 * p;
    const double C92136 = 3 * C87531;
    const double C92135 = C90063 * p;
    const double C92134 = C90048 * p;
    const double C92133 = C90033 * p;
    const double C92132 = C90018 * p;
    const double C92131 = C89832 * p;
    const double C92130 = C86316 / q;
    const double C92129 = C89817 * p;
    const double C92128 = C89802 * p;
    const double C92127 = C89787 * p;
    const double C92126 = 3 * C86595;
    const double C92125 = C89688 * p;
    const double C92124 = C89673 * p;
    const double C92123 = C89658 * p;
    const double C92122 = C89643 * p;
    const double C92121 = C89628 * p;
    const double C92120 = C89613 * p;
    const double C92119 = C89598 * p;
    const double C92118 = 3 * C86461;
    const double C92117 = C89541 * p;
    const double C92116 = C89526 * p;
    const double C92115 = C89511 * p;
    const double C92114 = C89496 * p;
    const double C92113 = C89481 * p;
    const double C92112 = C89466 * p;
    const double C92111 = C89451 * p;
    const double C92109 = C89096 * p;
    const double C92108 = C89081 * p;
    const double C92106 = C89037 * p;
    const double C92102 = C88740 * p;
    const double C92101 = C88697 * p;
    const double C92099 = C88627 * p;
    const double C92097 = C83508 * p;
    const double C92096 = C88343 * p;
    const double C92095 = C84670 * p;
    const double C92094 = C88314 * p;
    const double C92093 = C82589 / q;
    const double C92091 = C88270 * p;
    const double C92090 = C84209 / q;
    const double C92089 = C88223 * p;
    const double C92088 = C88048 * p;
    const double C92086 = C85579 / q;
    const double C92085 = 3 * C81897;
    const double C92081 = C87946 * p;
    const double C92080 = C87931 * p;
    const double C92079 = C87901 * p;
    const double C92078 = C87854 * p;
    const double C92077 = C87839 * p;
    const double C92076 = C87719 * p;
    const double C92071 = C82818 * p;
    const double C92070 = C85579 * p;
    const double C92069 = C87588 * p;
    const double C92067 = C81897 * p;
    const double C92066 = C81913 * p;
    const double C92065 = C87531 * p;
    const double C92064 = C87461 * p;
    const double C92063 = C85126 / q;
    const double C92061 = C87177 * p;
    const double C92060 = C80714 / q;
    const double C92059 = C83061 * p;
    const double C92058 = C87148 * p;
    const double C92057 = C84440 * p;
    const double C92055 = C87076 * p;
    const double C92054 = C84209 * p;
    const double C92052 = C87017 * p;
    const double C92051 = C86871 * p;
    const double C92047 = 3 * C79790;
    const double C92046 = C85352 / q;
    const double C92044 = C86741 * p;
    const double C92043 = C85126 * p;
    const double C92042 = C86712 * p;
    const double C92041 = C82589 * p;
    const double C92040 = C80959 * p;
    const double C92039 = C86654 * p;
    const double C92038 = C82358 * p;
    const double C92035 = C86595 * p;
    const double C92034 = C86580 * p;
    const double C92033 = C86461 * p;
    const double C92031 = C86506 * p;
    const double C92030 = C86445 * p;
    const double C92026 = 3 * C79312;
    const double C92025 = C84899 / q;
    const double C92023 = C80714 * p;
    const double C92022 = C86316 * p;
    const double C92021 = C86301 * p;
    const double C92020 = C85352 * p;
    const double C92019 = C86272 * p;
    const double C92018 = C84899 * p;
    const double C92017 = C86214 * p;
    const double C92014 = C79790 * p;
    const double C92013 = C79807 * p;
    const double C92012 = C86141 * p;
    const double C92011 = C80483 * p;
    const double C92010 = C86112 * p;
    const double C92009 = C85908 * p;
    const double C92008 = C79312 * p;
    const double C92007 = C79329 * p;
    const double C92006 = C85996 * p;
    const double C92005 = C80252 * p;
    const double C92004 = C85967 * p;
    const double C92003 = C85892 * p;
    const double C90913 = C64704 / C54432;
    const double C90908 = C64858 / C54432;
    const double C90907 = C64749 / C54432;
    const double C90906 = C64634 / C54432;
    const double C90901 = C63578 / C54432;
    const double C90887 = C64050 / C54432;
    const double C90886 = C63851 / C54432;
    const double C90885 = C63521 / C54432;
    const double C90877 = C63716 / C54432;
    const double C90876 = C63698 / C54432;
    const double C90875 = C63451 / C54432;
    const double C90865 = C62280 / C54432;
    const double C90853 = C62853 / C54432;
    const double C90852 = C62568 / C54432;
    const double C90851 = C62806 / C54432;
    const double C90848 = C62105 / C54432;
    const double C90832 = C62434 / C54432;
    const double C90831 = C62417 / C54432;
    const double C90830 = C62386 / C54432;
    const double C90827 = C61960 / C54432;
    const double C90805 = C61872 / C54432;
    const double C90804 = C61855 / C54432;
    const double C90803 = C61839 / C54432;
    const double C90802 = C61793 / C54432;
    const double C90801 = C61746 / C54432;
    const double C90800 = C61532 / C54432;
    const double C90794 = C61302 / C54432;
    const double C90792 = C61073 / C54432;
    const double C90780 = C60843 / C54432;
    const double C90777 = C60608 / C54432;
    const double C90771 = C60371 / C54432;
    const double C90762 = C60133 / C54432;
    const double C90753 = C59683 / C54432;
    const double C90752 = C59666 / C54432;
    const double C90746 = C59418 / C54432;
    const double C90725 = C58981 / C54432;
    const double C90724 = C58965 / C54432;
    const double C90720 = C58716 / C54432;
    const double C90717 = C58480 / C54432;
    const double C90708 = C58242 / C54432;
    const double C90680 = C57788 / C54432;
    const double C90679 = C57771 / C54432;
    const double C90665 = C57306 / C54432;
    const double C90664 = C57289 / C54432;
    const double C90642 = C56832 / C54432;
    const double C90641 = C56816 / C54432;
    const double C90631 = C56565 / C54432;
    const double C90626 = C56327 / C54432;
    const double C90615 = C56089 / C54432;
    const double C90590 = C55635 / C54432;
    const double C90588 = C55617 / C54432;
    const double C90550 = C55147 / C54432;
    const double C90548 = C55129 / C54432;
    const double C90513 = C54452 / C54432;
    const double C90512 = C54435 / C54432;
    const double C90511 = C54417 / C54432;
    const double C91513 = C76729 / C54432;
    const double C91508 = C76874 / C54432;
    const double C91507 = C76772 / C54432;
    const double C91506 = C76659 / C54432;
    const double C91501 = C75611 / C54432;
    const double C91487 = C76073 / C54432;
    const double C91486 = C75880 / C54432;
    const double C91485 = C75554 / C54432;
    const double C91477 = C75742 / C54432;
    const double C91476 = C75725 / C54432;
    const double C91475 = C75483 / C54432;
    const double C91465 = C74326 / C54432;
    const double C91453 = C74885 / C54432;
    const double C91452 = C74608 / C54432;
    const double C91451 = C74841 / C54432;
    const double C91448 = C74149 / C54432;
    const double C91432 = C74471 / C54432;
    const double C91431 = C74455 / C54432;
    const double C91430 = C74426 / C54432;
    const double C91427 = C74002 / C54432;
    const double C91405 = C73912 / C54432;
    const double C91404 = C73896 / C54432;
    const double C91403 = C73881 / C54432;
    const double C91402 = C73838 / C54432;
    const double C91401 = C73794 / C54432;
    const double C91400 = C73583 / C54432;
    const double C91394 = C73356 / C54432;
    const double C91392 = C73130 / C54432;
    const double C91380 = C72903 / C54432;
    const double C91377 = C72674 / C54432;
    const double C91371 = C72444 / C54432;
    const double C91362 = C72213 / C54432;
    const double C91353 = C71772 / C54432;
    const double C91352 = C71756 / C54432;
    const double C91346 = C71512 / C54432;
    const double C91325 = C71080 / C54432;
    const double C91324 = C71065 / C54432;
    const double C91320 = C70822 / C54432;
    const double C91317 = C70593 / C54432;
    const double C91308 = C70362 / C54432;
    const double C91280 = C69917 / C54432;
    const double C91279 = C69901 / C54432;
    const double C91265 = C69445 / C54432;
    const double C91264 = C69429 / C54432;
    const double C91242 = C68978 / C54432;
    const double C91241 = C68963 / C54432;
    const double C91231 = C68718 / C54432;
    const double C91226 = C68487 / C54432;
    const double C91215 = C68256 / C54432;
    const double C91190 = C67811 / C54432;
    const double C91188 = C67794 / C54432;
    const double C91150 = C67333 / C54432;
    const double C91148 = C67316 / C54432;
    const double C91117 = C66650 / C54432;
    const double C91116 = C66634 / C54432;
    const double C91115 = C66618 / C54432;
    const double C92110 = C88697 / C54432;
    const double C92105 = C88842 / C54432;
    const double C92104 = C88740 / C54432;
    const double C92103 = C88627 / C54432;
    const double C92098 = C87588 / C54432;
    const double C92084 = C88048 / C54432;
    const double C92083 = C87854 / C54432;
    const double C92082 = C87531 / C54432;
    const double C92074 = C87719 / C54432;
    const double C92073 = C87702 / C54432;
    const double C92072 = C87461 / C54432;
    const double C92062 = C86316 / C54432;
    const double C92050 = C86871 / C54432;
    const double C92049 = C86595 / C54432;
    const double C92048 = C86827 / C54432;
    const double C92045 = C86141 / C54432;
    const double C92029 = C86461 / C54432;
    const double C92028 = C86445 / C54432;
    const double C92027 = C86416 / C54432;
    const double C92024 = C85996 / C54432;
    const double C92002 = C85908 / C54432;
    const double C92001 = C85892 / C54432;
    const double C92000 = C85877 / C54432;
    const double C91999 = C85834 / C54432;
    const double C91998 = C85790 / C54432;
    const double C91997 = C85579 / C54432;
    const double C91991 = C85352 / C54432;
    const double C91989 = C85126 / C54432;
    const double C91977 = C84899 / C54432;
    const double C91974 = C84670 / C54432;
    const double C91968 = C84440 / C54432;
    const double C91959 = C84209 / C54432;
    const double C91950 = C83768 / C54432;
    const double C91949 = C83752 / C54432;
    const double C91943 = C83508 / C54432;
    const double C91922 = C83076 / C54432;
    const double C91921 = C83061 / C54432;
    const double C91917 = C82818 / C54432;
    const double C91914 = C82589 / C54432;
    const double C91905 = C82358 / C54432;
    const double C91877 = C81913 / C54432;
    const double C91876 = C81897 / C54432;
    const double C91862 = C81441 / C54432;
    const double C91861 = C81425 / C54432;
    const double C91839 = C80974 / C54432;
    const double C91838 = C80959 / C54432;
    const double C91828 = C80714 / C54432;
    const double C91823 = C80483 / C54432;
    const double C91812 = C80252 / C54432;
    const double C91787 = C79807 / C54432;
    const double C91785 = C79790 / C54432;
    const double C91747 = C79329 / C54432;
    const double C91745 = C79312 / C54432;
    const double C91714 = C78646 / C54432;
    const double C91713 = C78630 / C54432;
    const double C91712 = C78614 / C54432;
    const double C91110 = C90944 / q;
    const double C91109 = C90942 / q;
    const double C91108 = C90941 / q;
    const double C91107 = C90940 / q;
    const double C91106 = C90939 / C54432;
    const double C91105 = C90937 / q;
    const double C91104 = C90936 / q;
    const double C91103 = C90935 / q;
    const double C91101 = C90934 / q;
    const double C91100 = C90932 / q;
    const double C91099 = C90931 / q;
    const double C91098 = C90930 / q;
    const double C91097 = C90929 / C54432;
    const double C91102 = C90928 / q;
    const double C91096 = C90927 / q;
    const double C91095 = C90926 / q;
    const double C91094 = C90925 / q;
    const double C91093 = C90924 / q;
    const double C91092 = C90923 / q;
    const double C91091 = C90922 / q;
    const double C91090 = C90921 / C54432;
    const double C91089 = C90919 / q;
    const double C91088 = C90918 / q;
    const double C91087 = C90917 / q;
    const double C91086 = C90916 / q;
    const double C91085 = C90915 / q;
    const double C91084 = C90914 / q;
    const double C91083 = C90899 / q;
    const double C91082 = C90897 / q;
    const double C91080 = C90894 / q;
    const double C91079 = C90892 / q;
    const double C91078 = C90891 / q;
    const double C91076 = C90888 / C54432;
    const double C91075 = C90881 / q;
    const double C91074 = C90880 / q;
    const double C91072 = C90870 / q;
    const double C91071 = C90868 / q;
    const double C91067 = C90864 / q;
    const double C91066 = C90861 / q;
    const double C91068 = C90858 / q;
    const double C91065 = C90855 / q;
    const double C91064 = C90854 / q;
    const double C91062 = C90850 / C54432;
    const double C91070 = C90847 / q;
    const double C91069 = C90845 / q;
    const double C91061 = C90842 / q;
    const double C91058 = C90838 / q;
    const double C91057 = C90837 / q;
    const double C91063 = C90836 / q;
    const double C91055 = C90834 / q;
    const double C91054 = C90833 / q;
    const double C91053 = C90829 / C54432;
    const double C91052 = C90817 / q;
    const double C91051 = C90815 / q;
    const double C91050 = C90813 / q;
    const double C91049 = C90811 / q;
    const double C91048 = C90809 / q;
    const double C91047 = C90807 / q;
    const double C90948 = C90519 + C90520;
    const double C90947 = C90514 + C90515;
    const double C90946 = C90509 + C90510;
    const double C91707 = C91544 / q;
    const double C91706 = C91542 / q;
    const double C91705 = C91541 / q;
    const double C91704 = C91540 / q;
    const double C91703 = C91539 / C54432;
    const double C91702 = C91537 / q;
    const double C91701 = C91536 / q;
    const double C91700 = C91535 / q;
    const double C91698 = C91534 / q;
    const double C91697 = C91532 / q;
    const double C91696 = C91531 / q;
    const double C91695 = C91530 / q;
    const double C91694 = C91529 / C54432;
    const double C91699 = C91528 / q;
    const double C91693 = C91527 / q;
    const double C91692 = C91526 / q;
    const double C91691 = C91525 / q;
    const double C91690 = C91524 / q;
    const double C91689 = C91523 / q;
    const double C91688 = C91522 / q;
    const double C91687 = C91521 / C54432;
    const double C91686 = C91519 / q;
    const double C91685 = C91518 / q;
    const double C91684 = C91517 / q;
    const double C91683 = C91516 / q;
    const double C91682 = C91515 / q;
    const double C91681 = C91514 / q;
    const double C91680 = C91499 / q;
    const double C91679 = C91497 / q;
    const double C91677 = C91494 / q;
    const double C91676 = C91492 / q;
    const double C91675 = C91491 / q;
    const double C91673 = C91488 / C54432;
    const double C91672 = C91481 / q;
    const double C91671 = C91480 / q;
    const double C91669 = C91470 / q;
    const double C91668 = C91468 / q;
    const double C91664 = C91464 / q;
    const double C91663 = C91461 / q;
    const double C91665 = C91458 / q;
    const double C91662 = C91455 / q;
    const double C91661 = C91454 / q;
    const double C91659 = C91450 / C54432;
    const double C91667 = C91447 / q;
    const double C91666 = C91445 / q;
    const double C91658 = C91442 / q;
    const double C91655 = C91438 / q;
    const double C91654 = C91437 / q;
    const double C91660 = C91436 / q;
    const double C91652 = C91434 / q;
    const double C91651 = C91433 / q;
    const double C91650 = C91429 / C54432;
    const double C91649 = C91417 / q;
    const double C91648 = C91415 / q;
    const double C91647 = C91413 / q;
    const double C91646 = C91411 / q;
    const double C91645 = C91409 / q;
    const double C91644 = C91407 / q;
    const double C92304 = C92141 / q;
    const double C92303 = C92139 / q;
    const double C92302 = C92138 / q;
    const double C92301 = C92137 / q;
    const double C92300 = C92136 / C54432;
    const double C92299 = C92134 / q;
    const double C92298 = C92133 / q;
    const double C92297 = C92132 / q;
    const double C92295 = C92131 / q;
    const double C92294 = C92129 / q;
    const double C92293 = C92128 / q;
    const double C92292 = C92127 / q;
    const double C92291 = C92126 / C54432;
    const double C92296 = C92125 / q;
    const double C92290 = C92124 / q;
    const double C92289 = C92123 / q;
    const double C92288 = C92122 / q;
    const double C92287 = C92121 / q;
    const double C92286 = C92120 / q;
    const double C92285 = C92119 / q;
    const double C92284 = C92118 / C54432;
    const double C92283 = C92116 / q;
    const double C92282 = C92115 / q;
    const double C92281 = C92114 / q;
    const double C92280 = C92113 / q;
    const double C92279 = C92112 / q;
    const double C92278 = C92111 / q;
    const double C92277 = C92096 / q;
    const double C92276 = C92094 / q;
    const double C92274 = C92091 / q;
    const double C92273 = C92089 / q;
    const double C92272 = C92088 / q;
    const double C92270 = C92085 / C54432;
    const double C92269 = C92078 / q;
    const double C92268 = C92077 / q;
    const double C92266 = C92067 / q;
    const double C92265 = C92065 / q;
    const double C92261 = C92061 / q;
    const double C92260 = C92058 / q;
    const double C92262 = C92055 / q;
    const double C92259 = C92052 / q;
    const double C92258 = C92051 / q;
    const double C92256 = C92047 / C54432;
    const double C92264 = C92044 / q;
    const double C92263 = C92042 / q;
    const double C92255 = C92039 / q;
    const double C92252 = C92035 / q;
    const double C92251 = C92034 / q;
    const double C92257 = C92033 / q;
    const double C92249 = C92031 / q;
    const double C92248 = C92030 / q;
    const double C92247 = C92026 / C54432;
    const double C92246 = C92014 / q;
    const double C92245 = C92012 / q;
    const double C92244 = C92010 / q;
    const double C92243 = C92008 / q;
    const double C92242 = C92006 / q;
    const double C92241 = C92004 / q;
    const double C54777 = -(C54417 * C90948 + C90812) / q;
    const double C54778 = C90511 - (C61872 * C90948) / q - C91050;
    const double C54793 = -(C54435 * C90948 + C90814) / q;
    const double C54794 = C90512 - (C56327 * C90948) / q - C91051;
    const double C54809 = -(C54452 * C90948 + C90816) / q;
    const double C54810 = C90513 - (C55635 * C90948) / q - C91052;
    const double C55004 = -(C61746 * C90948 + C90822) / q;
    const double C55035 = -(C61793 * C90948 + C90823) / q;
    const double C55050 = -(C61855 * C90948 + C90824) / q;
    const double C55065 = -(C56089 * C90948 + C90825) / q;
    const double C55080 = -(C55147 * C90948 + C90826) / q;
    const double C55369 = -(C55129 * C90948 + C90836) / q;
    const double C55370 = C90548 - (C62434 * C90948) / q - C91057;
    const double C55385 = C90550 - (C56565 * C90948) / q - C91058;
    const double C55522 = -(C56816 * C90948 + C90844) / q;
    const double C55523 = -(C61960 * C90948 + C90845) / q;
    const double C55539 = -(C60843 * C90948 + C90846) / q;
    const double C55554 = -(C62417 * C90948 + C90847) / q;
    const double C55859 = C55635 / q - (C55617 * C90948) / q - C91064;
    const double C55860 = C91062 - (C62853 * C90948) / q - C91065;
    const double C56012 = C90849 - (C58965 * C90948) / q - C90860 / q;
    const double C56013 = C56327 / q - (C62105 * C90948) / q - C91066;
    const double C56029 = C90802 - (C61302 * C90948) / q - C90862 / q;
    const double C56044 = C90863 - (C62568 * C90948) / q - C91067;
    const double C56207 = C90615 - (C62280 * C90948) / q - C91068;
    const double C56757 = C90780 - (C61073 * C90948) / q - C90857 / q;
    const double C57049 = C90641 - (C58480 * C90948) / q - C91071;
    const double C57064 = -(C56832 * C90948 + C90869) / q;
    const double C57065 = C90642 - (C57788 * C90948) / q - C91072;
    const double C57225 = -(C58242 * C90948 + C90872) / q;
    const double C57240 = -(C62386 * C90948 + C90873) / q;
    const double C57241 = -(C57306 * C90948 + C90874) / q;
    const double C57528 = -(C57289 * C90948 + C90879) / q;
    const double C57529 = C90664 - (C63716 * C90948) / q - C91074;
    const double C57544 = C90665 - (C58716 * C90948) / q - C91075;
    const double C57679 = -(C63451 * C90948 + C90883) / q;
    const double C57709 = -(C63698 * C90948 + C90884) / q;
    const double C58014 = C57788 / q - (C57771 * C90948) / q - C91078;
    const double C58015 = C91076 - (C64050 * C90948) / q - C91079;
    const double C58165 = C90896 - (C63521 * C90948) / q - C91082;
    const double C58195 = C90889 - (C59418 * C90948) / q - C90898 / q;
    const double C58196 = C58716 / q - (C63851 * C90948) / q - C91083;
    const double C58211 = C90830 - (C61532 * C90948) / q - C90900 / q;
    const double C58360 = C90708 - (C63578 * C90948) / q - C91080;
    const double C59196 =
        (3 * C58965) / C54432 - (C60371 * C90948) / q - C90902 / q;
    const double C59211 = C90803 - (C62806 * C90948) / q - (C58981 * p) / q;
    const double C59212 = C62806 / q - (C58981 * C90948) / q - (C59683 * p) / q;
    const double C59213 =
        (3 * C58981) / C54432 - (C59683 * C90948) / q - (C59666 * p) / q;
    const double C59373 = C90866 - (C60133 * C90948) / q - C90904 / q;
    const double C59532 =
        (3 * C59418) / C54432 - (C60608 * C90948) / q - C90905 / q;
    const double C59907 =
        (2 * C59683) / q - (C59666 * C90948) / q - (C64858 * p) / q;
    const double C59908 =
        (5 * C59666) / C54432 - (C64858 * C90948) / q - (C65006 * p) / q;
    const double C60058 = (2 * C60371) / q - (C64634 * C90948) / q - C90911 / q;
    const double C60088 = (2 * C60608) / q - (C64749 * C90948) / q - C90912 / q;
    const double C60251 =
        (3 * C60133) / C54432 - (C64704 * C90948) / q - C90909 / q;
    const double C62033 = C90801 - (C62236 * C90948) / q - C91087;
    const double C62148 = C90804 - (C62265 * C90948) / q - C91088;
    const double C62163 = C61872 / q - (C62076 * C90948) / q - C91089;
    const double C62207 = -(C62178 * C90948 + C90920) / q;
    const double C62524 = C90827 - (C62685 * C90948) / q - C91094;
    const double C62583 = C90831 - (C62714 * C90948) / q - C91095;
    const double C62598 = C62434 / q - (C62553 * C90948) / q - C91096;
    const double C62656 = -(C62627 * C90948 + C90928) / q;
    const double C62970 =
        (3 * C62105) / C54432 - (C63130 * C90948) / q - C91098;
    const double C63014 = C91097 - (C63159 * C90948) / q - C91099;
    const double C63029 = (2 * C62853) / q - (C62999 * C90948) / q - C91100;
    const double C63101 = C90933 - (C63058 * C90948) / q - C91101;
    const double C63248 = -(C61931 * C90948 + C90916) / q;
    const double C63807 = C90875 - (C63926 * C90948) / q - C91103;
    const double C63866 = C90876 - (C63941 * C90948) / q - C91104;
    const double C63881 = C63716 / q - (C63836 * C90948) / q - C91105;
    const double C63911 = -(C63896 * C90948 + C90938) / q;
    const double C64196 = C91106 - (C64314 * C90948) / q - C91107;
    const double C64240 =
        (3 * C63851) / C54432 - (C64343 * C90948) / q - C91108;
    const double C64255 = (2 * C64050) / q - (C64225 * C90948) / q - C91109;
    const double C64299 = C90943 - (C64270 * C90948) / q - C91110;
    const double C64446 = -(C62479 * C90948 + C90924) / q;
    const double C64689 = -(C61839 * C90948 + C62806 * p) / q;
    const double C64977 =
        (5 * C64634) / C54432 - (C65095 * C90948) / q - (C66481 * p) / q;
    const double C65021 =
        (5 * C64749) / C54432 - (C65110 * C90948) / q - (C66496 * p) / q;
    const double C65036 =
        (3 * C64858) / q - (C65006 * C90948) / q - (C66511 * p) / q;
    const double C65080 =
        (2 * C64704) / q - (C65051 * C90948) / q - (C66526 * p) / q;
    const double C66973 = -(C66618 * C90948 + C91412) / q;
    const double C66989 = -(C66634 * C90948 + C91414) / q;
    const double C67005 = -(C66650 * C90948 + C91416) / q;
    const double C67195 = -(C73794 * C90948 + C91422) / q;
    const double C67224 = -(C73838 * C90948 + C91423) / q;
    const double C67239 = -(C73896 * C90948 + C91424) / q;
    const double C67254 = -(C68256 * C90948 + C91425) / q;
    const double C67269 = -(C67333 * C90948 + C91426) / q;
    const double C67553 = -(C67316 * C90948 + C91436) / q;
    const double C67702 = -(C68963 * C90948 + C91444) / q;
    const double C67703 = -(C74002 * C90948 + C91445) / q;
    const double C67718 = -(C72903 * C90948 + C91446) / q;
    const double C67733 = -(C74455 * C90948 + C91447) / q;
    const double C68182 = C91449 - (C71065 * C90948) / q - C91460 / q;
    const double C68198 = C91402 - (C73356 * C90948) / q - C91462 / q;
    const double C68905 = C91380 - (C73130 * C90948) / q - C91457 / q;
    const double C69210 = -(C68978 * C90948 + C91469) / q;
    const double C69367 = -(C70362 * C90948 + C91472) / q;
    const double C69382 = -(C74426 * C90948 + C91473) / q;
    const double C69383 = -(C69445 * C90948 + C91474) / q;
    const double C69665 = -(C69429 * C90948 + C91479) / q;
    const double C69812 = -(C75483 * C90948 + C91483) / q;
    const double C69841 = -(C75725 * C90948 + C91484) / q;
    const double C70317 = C91489 - (C71512 * C90948) / q - C91498 / q;
    const double C70333 = C91430 - (C73583 * C90948) / q - C91500 / q;
    const double C71295 =
        (3 * C71065) / C54432 - (C72444 * C90948) / q - C91502 / q;
    const double C71310 = C91403 - (C74841 * C90948) / q - (C71080 * p) / q;
    const double C71311 = C74841 / q - (C71080 * C90948) / q - (C71772 * p) / q;
    const double C71312 =
        (3 * C71080) / C54432 - (C71772 * C90948) / q - (C71756 * p) / q;
    const double C71468 = C91466 - (C72213 * C90948) / q - C91504 / q;
    const double C71626 =
        (3 * C71512) / C54432 - (C72674 * C90948) / q - C91505 / q;
    const double C71994 =
        (2 * C71772) / q - (C71756 * C90948) / q - (C76874 * p) / q;
    const double C71995 =
        (5 * C71756) / C54432 - (C76874 * C90948) / q - (C77025 * p) / q;
    const double C72141 = (2 * C72444) / q - (C76659 * C90948) / q - C91511 / q;
    const double C72170 = (2 * C72674) / q - (C76772 * C90948) / q - C91512 / q;
    const double C72329 =
        (3 * C72213) / C54432 - (C76729 * C90948) / q - C91509 / q;
    const double C74252 = -(C74222 * C90948 + C91520) / q;
    const double C74697 = -(C74667 * C90948 + C91528) / q;
    const double C75284 = -(C73973 * C90948 + C91516) / q;
    const double C75941 = -(C75925 * C90948 + C91538) / q;
    const double C76473 = -(C74517 * C90948 + C91524) / q;
    const double C76714 = -(C73881 * C90948 + C74841 * p) / q;
    const double C76996 =
        (5 * C76659) / C54432 - (C77115 * C90948) / q - (C78478 * p) / q;
    const double C77040 =
        (5 * C76772) / C54432 - (C77130 * C90948) / q - (C78493 * p) / q;
    const double C77055 =
        (3 * C76874) / q - (C77025 * C90948) / q - (C78508 * p) / q;
    const double C77100 =
        (2 * C76729) / q - (C77070 * C90948) / q - (C78523 * p) / q;
    const double C78969 = -(C61742 * be + C78614 * C90948 + C92009) / q;
    const double C78985 = -(C61774 * be + C78630 * C90948 + C92011) / q;
    const double C79001 = -(C61805 * be + C78646 * C90948 + C92013) / q;
    const double C79191 = -(C61820 * be + C85790 * C90948 + C92019) / q;
    const double C79220 = -(C61835 * be + C85834 * C90948 + C92020) / q;
    const double C79235 = -(C63171 * be + C85892 * C90948 + C92021) / q;
    const double C79250 = -(C62398 * be + C80252 * C90948 + C92022) / q;
    const double C79265 = -(C62337 * be + C79329 * C90948 + C92023) / q;
    const double C79549 = -(C62306 * be + C79312 * C90948 + C92033) / q;
    const double C79698 = -(C62352 * be + C80959 * C90948 + C92041) / q;
    const double C79699 = -(C62367 * be + C85996 * C90948 + C92042) / q;
    const double C79714 = -(C62382 * be + C84899 * C90948 + C92043) / q;
    const double C79729 = -(C64369 * be + C86445 * C90948 + C92044) / q;
    const double C80178 =
        C92046 - (C62772 * be + C83061 * C90948) / q - C92057 / q;
    const double C80194 =
        C91999 - (C62802 * be + C85352 * C90948) / q - C92059 / q;
    const double C80901 =
        C91977 - (C63332 * be + C85126 * C90948) / q - C92054 / q;
    const double C81206 = -(C63418 * be + C80974 * C90948 + C92066) / q;
    const double C81363 = -(C63679 * be + C82358 * C90948 + C92069) / q;
    const double C81378 = -(C65325 * be + C86416 * C90948 + C92070) / q;
    const double C81379 = -(C63649 * be + C81441 * C90948 + C92071) / q;
    const double C81661 = -(C63618 * be + C81425 * C90948 + C92076) / q;
    const double C81808 = -(C63664 * be + C87461 * C90948 + C92080) / q;
    const double C81837 = -(C65948 * be + C87702 * C90948 + C92081) / q;
    const double C82313 =
        C92086 - (C64716 * be + C83508 * C90948) / q - C92095 / q;
    const double C82329 =
        C92027 - (C65353 * be + C85579 * C90948) / q - C92097 / q;
    const double C83291 = (3 * C83061) / C54432 -
                          (C64822 * be + C84440 * C90948) / q - C92099 / q;
    const double C83306 =
        C92000 - (C65368 * be + C86827 * C90948) / q - (C83076 * p) / q;
    const double C83307 =
        C86827 / q - (C64559 * be + C83076 * C90948) / q - (C83768 * p) / q;
    const double C83308 = (3 * C83076) / C54432 -
                          (C64792 * be + C83768 * C90948) / q -
                          (C83752 * p) / q;
    const double C83464 =
        C92063 - (C64731 * be + C84209 * C90948) / q - C92101 / q;
    const double C83622 = (3 * C83508) / C54432 -
                          (C65267 * be + C84670 * C90948) / q - C92102 / q;
    const double C83990 = (2 * C83768) / q -
                          (C64761 * be + C83752 * C90948) / q -
                          (C88842 * p) / q;
    const double C83991 = (5 * C83752) / C54432 -
                          (C66392 * be + C88842 * C90948) / q -
                          (C88990 * p) / q;
    const double C84137 =
        (2 * C84440) / q - (C64807 * be + C88627 * C90948) / q - C92108 / q;
    const double C84166 =
        (2 * C84670) / q - (C66362 * be + C88740 * C90948) / q - C92109 / q;
    const double C84325 = (3 * C84209) / C54432 -
                          (C65282 * be + C88697 * C90948) / q - C92106 / q;
    const double C86243 = -(C65442 * be + C86214 * C90948 + C92117) / q;
    const double C86683 = -(C65594 * be + C86654 * C90948 + C92125) / q;
    const double C87264 = -(C65579 * be + C85967 * C90948 + C92113) / q;
    const double C87916 = -(C65963 * be + C87901 * C90948 + C92135) / q;
    const double C88444 = -(C65933 * be + C86506 * C90948 + C92121) / q;
    const double C88682 = -(C65427 * be + C85877 * C90948 + C86827 * p) / q;
    const double C88961 = (5 * C88627) / C54432 -
                          (C66407 * be + C89081 * C90948) / q -
                          (C90432 * p) / q;
    const double C89006 = (5 * C88740) / C54432 -
                          (C78459 * be + C89096 * C90948) / q -
                          (C90447 * p) / q;
    const double C89022 = (3 * C88842) / q -
                          (C90457 * be + C88990 * C90948) / q -
                          (C90463 * p) / q;
    const double C89066 = (2 * C88697) / q -
                          (C66377 * be + C89037 * C90948) / q -
                          (C90478 * p) / q;
    const double C54598 = -(C54417 * C90947 + C90806) / q;
    const double C54599 = C90511 - (C61855 * C90947) / q - C91047;
    const double C54614 = -(C54435 * C90947 + C90808) / q;
    const double C54615 = C90512 - (C56089 * C90947) / q - C91048;
    const double C54630 = -(C54452 * C90947 + C90810) / q;
    const double C54631 = C90513 - (C55147 * C90947) / q - C91049;
    const double C54912 = -(C61746 * C90947 + C90820) / q;
    const double C54943 = -(C61793 * C90947 + C90821) / q;
    const double C55251 = C55147 / q - (C55129 * C90947) / q - C91054;
    const double C55252 = C91053 - (C62417 * C90947) / q - C91055;
    const double C55459 = C90828 - (C56816 * C90947) / q - C90841 / q;
    const double C55460 = C56089 / q - (C61960 * C90947) / q - C91061;
    const double C55476 = C90802 - (C60843 * C90947) / q - C90843 / q;
    const double C55739 = -(C55617 * C90947 + C90838) / q;
    const double C55740 = C90588 - (C62568 * C90947) / q - C91057;
    const double C55755 = -(C55635 * C90947 + C90826) / q;
    const double C55756 = C90590 - (C56565 * C90947) / q - C91063;
    const double C55948 = -(C58965 * C90947 + C90857) / q;
    const double C55949 = -(C62105 * C90947 + C90858) / q;
    const double C55965 = -(C61302 * C90947 + C90846) / q;
    const double C55966 = -(C56327 * C90947 + C90825) / q;
    const double C56386 = C90626 - (C62280 * C90947) / q - C91069;
    const double C56487 = -(C61872 * C90947 + C90824) / q;
    const double C56624 = C90863 - (C62434 * C90947) / q - C91070;
    const double C56725 = C90794 - (C61073 * C90947) / q - C90844 / q;
    const double C56932 =
        (3 * C56816) / C54432 - (C58242 * C90947) / q - C90867 / q;
    const double C56947 = C90803 - (C62386 * C90947) / q - (C56832 * p) / q;
    const double C56948 = C62386 / q - (C56832 * C90947) / q - (C57306 * p) / q;
    const double C56949 =
        (3 * C56832) / C54432 - (C57306 * C90947) / q - (C57289 * p) / q;
    const double C57410 =
        (2 * C57306) / q - (C57289 * C90947) / q - (C63698 * p) / q;
    const double C57411 =
        (5 * C57289) / C54432 - (C63698 * C90947) / q - (C63762 * p) / q;
    const double C57618 = (2 * C58242) / q - (C63451 * C90947) / q - C90882 / q;
    const double C57892 = C90725 - (C59418 * C90947) / q - C91072;
    const double C57893 = C59418 / q - (C57771 * C90947) / q - C91075;
    const double C57894 = C91076 - (C63851 * C90947) / q - C91074;
    const double C57909 = C90851 - (C61532 * C90947) / q - C90869 / q;
    const double C57910 = C90889 - (C57788 * C90947) / q - C90874 / q;
    const double C57911 =
        (3 * C57788) / C54432 - (C58716 * C90947) / q - C90879 / q;
    const double C58103 = C90893 - (C63521 * C90947) / q - C91080;
    const double C58119 = C90866 - (C58480 * C90947) / q - C90872 / q;
    const double C58539 =
        (3 * C58480) / C54432 - (C63578 * C90947) / q - C90883 / q;
    const double C58775 = (2 * C58716) / q - (C63716 * C90947) / q - C90884 / q;
    const double C59081 = C90724 - (C60133 * C90947) / q - C91071;
    const double C59096 = -(C58981 * C90947 + C90900) / q;
    const double C59787 = -(C59666 * C90947 + C90905) / q;
    const double C59788 = C90752 - (C64749 * C90947) / q - C91079;
    const double C59803 = -(C59683 * C90947 + C90898) / q;
    const double C59804 = C90753 - (C60608 * C90947) / q - C91078;
    const double C59996 = -(C64634 * C90947 + C90909) / q;
    const double C60012 = -(C60371 * C90947 + C90904) / q;
    const double C60430 = C90771 - (C64704 * C90947) / q - C91082;
    const double C60531 = -(C62853 * C90947 + C90864) / q;
    const double C60667 = C60608 / q - (C64050 * C90947) / q - C91083;
    const double C61458 = -(C62806 * C90947 + C90873) / q;
    const double C61888 = C90801 - (C62178 * C90947) / q - C91084;
    const double C62003 = C61855 / q - (C61931 * C90947) / q - C91085;
    const double C62018 = C90805 - (C62265 * C90947) / q - C91086;
    const double C62450 =
        (3 * C61960) / C54432 - (C62627 * C90947) / q - C91091;
    const double C62494 = (2 * C62417) / q - (C62479 * C90947) / q - C91092;
    const double C62509 = C91090 - (C62714 * C90947) / q - C91093;
    const double C62869 = C90848 - (C63058 * C90947) / q - C91094;
    const double C62940 = C62568 / q - (C62553 * C90947) / q - C91095;
    const double C62955 = C90853 - (C63159 * C90947) / q - C91096;
    const double C63205 = C90933 - (C62685 * C90947) / q - C91102;
    const double C63506 = -(C61839 * C90947 + C62386 * p) / q;
    const double C63733 =
        (5 * C63451) / C54432 - (C63896 * C90947) / q - (C66011 * p) / q;
    const double C63777 =
        (3 * C63698) / q - (C63762 * C90947) / q - (C66026 * p) / q;
    const double C63792 =
        (5 * C63716) / C54432 - (C63941 * C90947) / q - (C66041 * p) / q;
    const double C64067 = C91106 - (C64270 * C90947) / q - C91103;
    const double C64166 = (2 * C63851) / q - (C63836 * C90947) / q - C91104;
    const double C64181 =
        (3 * C64050) / C54432 - (C64343 * C90947) / q - C91105;
    const double C64403 = (2 * C63578) / q - (C63926 * C90947) / q - C90938 / q;
    const double C64875 = C90906 - (C65051 * C90947) / q - C91107;
    const double C64946 = C64749 / q - (C64225 * C90947) / q - C91108;
    const double C64961 = -(C64858 * C90947 + C90912) / q;
    const double C64962 = C90908 - (C65110 * C90947) / q - C91109;
    const double C65156 = C90945 - (C64314 * C90947) / q - C91110;
    const double C66795 = -(C61742 * be + C66618 * C90947 + C91406) / q;
    const double C66811 = -(C61774 * be + C66634 * C90947 + C91408) / q;
    const double C66827 = -(C61805 * be + C66650 * C90947 + C91410) / q;
    const double C67107 = -(C61820 * be + C73794 * C90947 + C91420) / q;
    const double C67136 = -(C61835 * be + C73838 * C90947 + C91421) / q;
    const double C67642 =
        C91428 - (C62352 * be + C68963 * C90947) / q - C91441 / q;
    const double C67658 =
        C91402 - (C62382 * be + C72903 * C90947) / q - C91443 / q;
    const double C67914 = -(C62726 * be + C67794 * C90947 + C91438) / q;
    const double C67930 = -(C62757 * be + C67811 * C90947 + C91426) / q;
    const double C68121 = -(C62772 * be + C71065 * C90947 + C91457) / q;
    const double C68122 = -(C62787 * be + C74149 * C90947 + C91458) / q;
    const double C68137 = -(C62802 * be + C73356 * C90947 + C91446) / q;
    const double C68138 = -(C62818 * be + C68487 * C90947 + C91425) / q;
    const double C68644 = -(C63260 * be + C73912 * C90947 + C91424) / q;
    const double C68875 =
        C91394 - (C63332 * be + C73130 * C90947) / q - C91444 / q;
    const double C69078 = (3 * C68963) / C54432 -
                          (C63679 * be + C70362 * C90947) / q - C91467 / q;
    const double C69093 =
        C91403 - (C65325 * be + C74426 * C90947) / q - (C68978 * p) / q;
    const double C69094 =
        C74426 / q - (C63418 * be + C68978 * C90947) / q - (C69445 * p) / q;
    const double C69095 = (3 * C68978) / C54432 -
                          (C63649 * be + C69445 * C90947) / q -
                          (C69429 * p) / q;
    const double C69548 = (2 * C69445) / q -
                          (C63618 * be + C69429 * C90947) / q -
                          (C75725 * p) / q;
    const double C69549 = (5 * C69429) / C54432 -
                          (C65948 * be + C75725 * C90947) / q -
                          (C75789 * p) / q;
    const double C69754 =
        (2 * C70362) / q - (C63664 * be + C75483 * C90947) / q - C91482 / q;
    const double C70037 =
        C91451 - (C65353 * be + C73583 * C90947) / q - C91469 / q;
    const double C70038 =
        C91489 - (C63984 * be + C69917 * C90947) / q - C91474 / q;
    const double C70039 = (3 * C69917) / C54432 -
                          (C64501 * be + C70822 * C90947) / q - C91479 / q;
    const double C70244 =
        C91466 - (C64014 * be + C70593 * C90947) / q - C91472 / q;
    const double C70651 = (3 * C70593) / C54432 -
                          (C64516 * be + C75611 * C90947) / q - C91483 / q;
    const double C70880 =
        (2 * C70822) / q - (C65978 * be + C75742 * C90947) / q - C91484 / q;
    const double C71195 = -(C64559 * be + C71080 * C90947 + C91500) / q;
    const double C71875 = -(C64761 * be + C71756 * C90947 + C91505) / q;
    const double C71891 = -(C64792 * be + C71772 * C90947 + C91498) / q;
    const double C72082 = -(C64807 * be + C76659 * C90947 + C91509) / q;
    const double C72097 = -(C64822 * be + C72444 * C90947 + C91504) / q;
    const double C72601 = -(C65210 * be + C74885 * C90947 + C91464) / q;
    const double C73511 = -(C65368 * be + C74841 * C90947 + C91473) / q;
    const double C75539 = -(C65427 * be + C73881 * C90947 + C74426 * p) / q;
    const double C75760 = (5 * C75483) / C54432 -
                          (C65963 * be + C75925 * C90947) / q -
                          (C78013 * p) / q;
    const double C75805 = (3 * C75725) / q -
                          (C78024 * be + C75789 * C90947) / q -
                          (C78029 * p) / q;
    const double C75821 = (5 * C75742) / C54432 -
                          (C78040 * be + C75971 * C90947) / q -
                          (C78045 * p) / q;
    const double C76429 =
        (2 * C75611) / q - (C65993 * be + C75956 * C90947) / q - C91538 / q;
    const double C76980 = -(C66392 * be + C76874 * C90947 + C91512) / q;
    const double C78791 = -(C78614 * C90947 + C92003) / q;
    const double C78807 = -(C78630 * C90947 + C92005) / q;
    const double C78823 = -(C78646 * C90947 + C92007) / q;
    const double C79103 = -(C85790 * C90947 + C92017) / q;
    const double C79132 = -(C85834 * C90947 + C92018) / q;
    const double C79638 = C92025 - (C80959 * C90947) / q - C92038 / q;
    const double C79654 = C91999 - (C84899 * C90947) / q - C92040 / q;
    const double C79910 = -(C79790 * C90947 + C92035) / q;
    const double C79926 = -(C79807 * C90947 + C92023) / q;
    const double C80117 = -(C83061 * C90947 + C92054) / q;
    const double C80118 = -(C86141 * C90947 + C92055) / q;
    const double C80133 = -(C85352 * C90947 + C92043) / q;
    const double C80134 = -(C80483 * C90947 + C92022) / q;
    const double C80640 = -(C85908 * C90947 + C92021) / q;
    const double C80871 = C91991 - (C85126 * C90947) / q - C92041 / q;
    const double C81074 =
        (3 * C80959) / C54432 - (C82358 * C90947) / q - C92064 / q;
    const double C81089 = C92000 - (C86416 * C90947) / q - (C80974 * p) / q;
    const double C81090 = C86416 / q - (C80974 * C90947) / q - (C81441 * p) / q;
    const double C81091 =
        (3 * C80974) / C54432 - (C81441 * C90947) / q - (C81425 * p) / q;
    const double C81544 =
        (2 * C81441) / q - (C81425 * C90947) / q - (C87702 * p) / q;
    const double C81545 =
        (5 * C81425) / C54432 - (C87702 * C90947) / q - (C87765 * p) / q;
    const double C81750 = (2 * C82358) / q - (C87461 * C90947) / q - C92079 / q;
    const double C82033 = C92048 - (C85579 * C90947) / q - C92066 / q;
    const double C82034 = C92086 - (C81913 * C90947) / q - C92071 / q;
    const double C82035 =
        (3 * C81913) / C54432 - (C82818 * C90947) / q - C92076 / q;
    const double C82240 = C92063 - (C82589 * C90947) / q - C92069 / q;
    const double C82647 =
        (3 * C82589) / C54432 - (C87588 * C90947) / q - C92080 / q;
    const double C82876 = (2 * C82818) / q - (C87719 * C90947) / q - C92081 / q;
    const double C83191 = -(C83076 * C90947 + C92097) / q;
    const double C83871 = -(C83752 * C90947 + C92102) / q;
    const double C83887 = -(C83768 * C90947 + C92095) / q;
    const double C84078 = -(C88627 * C90947 + C92106) / q;
    const double C84093 = -(C84440 * C90947 + C92101) / q;
    const double C84597 = -(C86871 * C90947 + C92061) / q;
    const double C85507 = -(C86827 * C90947 + C92070) / q;
    const double C87516 = -(C85877 * C90947 + C86416 * p) / q;
    const double C87736 =
        (5 * C87461) / C54432 - (C87901 * C90947) / q - (C89973 * p) / q;
    const double C87780 =
        (3 * C87702) / q - (C87765 * C90947) / q - (C89988 * p) / q;
    const double C87795 =
        (5 * C87719) / C54432 - (C87946 * C90947) / q - (C90003 * p) / q;
    const double C88401 = (2 * C87588) / q - (C87931 * C90947) / q - C92135 / q;
    const double C88945 = -(C88842 * C90947 + C92109) / q;
    const double C54369 = (2 * C54435) / q -
                          (C61742 * be + C54417 * C90946) / q -
                          (C61746 * p) / q;
    const double C54385 = (3 * C54452) / C54432 -
                          (C61774 * be + C54435 * C90946) / q -
                          (C54417 * p) / q;
    const double C54401 =
        C61793 / q - (C61805 * be + C54452 * C90946) / q - (C54435 * p) / q;
    const double C54418 = (5 * C54417) / C54432 -
                          (C61820 * be + C61746 * C90946) / q -
                          (C61824 * p) / q;
    const double C54451 =
        C90803 - (C61835 * be + C61793 * C90946) / q - (C54452 * p) / q;
    const double C55096 =
        C56816 / q - (C62306 * be + C55129 * C90946) / q - C91048;
    const double C55112 =
        C90828 - (C62337 * be + C55147 * C90946) / q - C90808 / q;
    const double C55128 = C90642 - (C62352 * be + C56816 * C90946) / q - C91049;
    const double C55130 = C91053 - (C62367 * be + C61960 * C90946) / q - C91047;
    const double C55146 =
        C90830 - (C62382 * be + C60843 * C90946) / q - C90810 / q;
    const double C55148 = (3 * C55147) / C54432 -
                          (C62398 * be + C56089 * C90946) / q - C90806 / q;
    const double C55584 =
        C58965 / q - (C62726 * be + C55617 * C90946) / q - C91051;
    const double C55600 =
        C90849 - (C62757 * be + C55635 * C90946) / q - C90814 / q;
    const double C55616 = C90725 - (C62772 * be + C58965 * C90946) / q - C91052;
    const double C55618 = C91062 - (C62787 * be + C62105 * C90946) / q - C91050;
    const double C55634 =
        C90851 - (C62802 * be + C61302 * C90946) / q - C90816 / q;
    const double C55636 = (3 * C55635) / C54432 -
                          (C62818 * be + C56327 * C90946) / q - C90812 / q;
    const double C56090 =
        (2 * C56089) / q - (C63171 * be + C61855 * C90946) / q - C90820 / q;
    const double C56328 =
        (2 * C56327) / q - (C63260 * be + C61872 * C90946) / q - C90822 / q;
    const double C56548 =
        C90866 - (C63317 * be + C56565 * C90946) / q - C90825 / q;
    const double C56564 =
        C90800 - (C63332 * be + C61073 * C90946) / q - C90826 / q;
    const double C56566 = (3 * C56565) / C54432 -
                          (C63347 * be + C62280 * C90946) / q - C90824 / q;
    const double C56800 = -(C63418 * be + C56832 * C90946 + C90843) / q;
    const double C57257 = -(C63618 * be + C57289 * C90946 + C90867) / q;
    const double C57273 = -(C63649 * be + C57306 * C90946 + C90841) / q;
    const double C57290 = C90664 - (C63664 * be + C63451 * C90946) / q - C91055;
    const double C57307 = C90665 - (C63679 * be + C58242 * C90946) / q - C91054;
    const double C57739 = -(C63953 * be + C57771 * C90946 + C90868) / q;
    const double C57755 = -(C63984 * be + C57788 * C90946 + C90844) / q;
    const double C57772 = C90679 - (C63999 * be + C63521 * C90946) / q - C91057;
    const double C57789 = C90680 - (C64014 * be + C58480 * C90946) / q - C91063;
    const double C58243 =
        C58242 / q - (C64369 * be + C62417 * C90946) / q - C91061;
    const double C58481 = C90896 - (C64458 * be + C62434 * C90946) / q - C91069;
    const double C58700 = -(C64501 * be + C58716 * C90946 + C90872) / q;
    const double C58717 = C90720 - (C64516 * be + C63578 * C90946) / q - C91070;
    const double C58949 = -(C64559 * be + C58981 * C90946 + C90862) / q;
    const double C59402 = -(C64716 * be + C59418 * C90946 + C90857) / q;
    const double C59419 = C90746 - (C64731 * be + C60133 * C90946) / q - C91058;
    const double C59634 = -(C64761 * be + C59666 * C90946 + C90902) / q;
    const double C59650 = -(C64792 * be + C59683 * C90946 + C90860) / q;
    const double C59667 = C90752 - (C64807 * be + C64634 * C90946) / q - C91065;
    const double C59684 = C90753 - (C64822 * be + C60371 * C90946) / q - C91064;
    const double C60134 = C90893 - (C65122 * be + C62568 * C90946) / q - C91068;
    const double C60372 =
        C60371 / q - (C65210 * be + C62853 * C90946) / q - C91066;
    const double C60592 = -(C65267 * be + C60608 * C90946 + C90904) / q;
    const double C60609 = C90777 - (C65282 * be + C64704 * C90946) / q - C91067;
    const double C60842 = -(C65325 * be + C62386 * C90946 + C90821) / q;
    const double C61072 = -(C65353 * be + C61532 * C90946 + C90846) / q;
    const double C61301 = -(C65368 * be + C62806 * C90946 + C90823) / q;
    const double C61762 = (3 * C61746) / q -
                          (C65411 * be + C61824 * C90946) / q -
                          (C65415 * p) / q;
    const double C61792 = -(C65427 * be + C61839 * C90946 + C61793 * p) / q;
    const double C61856 = (5 * C61855) / C54432 -
                          (C65442 * be + C62178 * C90946) / q -
                          (C65446 * p) / q;
    const double C61873 = (5 * C61872) / C54432 -
                          (C65458 * be + C62236 * C90946) / q -
                          (C65462 * p) / q;
    const double C62325 =
        (2 * C61960) / q - (C65579 * be + C61931 * C90946) / q - C91084;
    const double C62418 =
        (3 * C62417) / C54432 - (C65594 * be + C62627 * C90946) / q - C91085;
    const double C62435 = C91090 - (C65609 * be + C62685 * C90946) / q - C91086;
    const double C62745 =
        (2 * C62105) / q - (C65729 * be + C62076 * C90946) / q - C91087;
    const double C62837 = C91097 - (C65744 * be + C63058 * C90946) / q - C91088;
    const double C62854 =
        (3 * C62853) / C54432 - (C65759 * be + C63130 * C90946) / q - C91089;
    const double C63190 =
        (2 * C62280) / q - (C65876 * be + C62265 * C90946) / q - C90920 / q;
    const double C63637 =
        C63451 / q - (C65933 * be + C62479 * C90946) / q - C91091;
    const double C63699 = -(C65948 * be + C63698 * C90946 + C90882) / q;
    const double C63700 = C90876 - (C65963 * be + C63896 * C90946) / q - C91092;
    const double C63717 = -(C65978 * be + C63716 * C90946 + C90883) / q;
    const double C63718 = C90877 - (C65993 * be + C63926 * C90946) / q - C91093;
    const double C63972 =
        C63521 / q - (C66113 * be + C62553 * C90946) / q - C91094;
    const double C64033 = -(C66128 * be + C63851 * C90946 + C90894) / q;
    const double C64034 = C90886 - (C66143 * be + C64270 * C90946) / q - C91095;
    const double C64051 = -(C66158 * be + C64050 * C90946 + C90897) / q;
    const double C64052 = C90887 - (C66173 * be + C64314 * C90946) / q - C91096;
    const double C64388 = C90943 - (C66290 * be + C62714 * C90946) / q - C91102;
    const double C64780 =
        C64634 / q - (C66347 * be + C62999 * C90946) / q - C91098;
    const double C64841 = -(C66362 * be + C64749 * C90946 + C90909) / q;
    const double C64842 = C90907 - (C66377 * be + C65051 * C90946) / q - C91099;
    const double C64859 = -(C66392 * be + C64858 * C90946 + C90911) / q;
    const double C64860 = C90908 - (C66407 * be + C65095 * C90946) / q - C91100;
    const double C65141 = C90945 - (C66538 * be + C63159 * C90946) / q - C91101;
    const double C66571 =
        (2 * C66634) / q - (C66618 * C90946) / q - (C73794 * p) / q;
    const double C66587 =
        (3 * C66650) / C54432 - (C66634 * C90946) / q - (C66618 * p) / q;
    const double C66603 = C73838 / q - (C66650 * C90946) / q - (C66634 * p) / q;
    const double C66619 =
        (5 * C66618) / C54432 - (C73794 * C90946) / q - (C73867 * p) / q;
    const double C66649 = C91403 - (C73838 * C90946) / q - (C66650 * p) / q;
    const double C67300 = C91428 - (C67333 * C90946) / q - C91408 / q;
    const double C67332 = C91430 - (C72903 * C90946) / q - C91410 / q;
    const double C67334 =
        (3 * C67333) / C54432 - (C68256 * C90946) / q - C91406 / q;
    const double C67778 = C91449 - (C67811 * C90946) / q - C91414 / q;
    const double C67810 = C91451 - (C73356 * C90946) / q - C91416 / q;
    const double C67812 =
        (3 * C67811) / C54432 - (C68487 * C90946) / q - C91412 / q;
    const double C68257 = (2 * C68256) / q - (C73896 * C90946) / q - C91420 / q;
    const double C68488 = (2 * C68487) / q - (C73912 * C90946) / q - C91422 / q;
    const double C68702 = C91466 - (C68718 * C90946) / q - C91425 / q;
    const double C68717 = C91400 - (C73130 * C90946) / q - C91426 / q;
    const double C68719 =
        (3 * C68718) / C54432 - (C74326 * C90946) / q - C91424 / q;
    const double C68948 = -(C68978 * C90946 + C91443) / q;
    const double C69398 = -(C69429 * C90946 + C91467) / q;
    const double C69414 = -(C69445 * C90946 + C91441) / q;
    const double C69870 = -(C69901 * C90946 + C91468) / q;
    const double C69886 = -(C69917 * C90946 + C91444) / q;
    const double C70807 = -(C70822 * C90946 + C91472) / q;
    const double C71050 = -(C71080 * C90946 + C91462) / q;
    const double C71497 = -(C71512 * C90946 + C91457) / q;
    const double C71725 = -(C71756 * C90946 + C91502) / q;
    const double C71741 = -(C71772 * C90946 + C91460) / q;
    const double C72659 = -(C72674 * C90946 + C91504) / q;
    const double C72902 = -(C74426 * C90946 + C91421) / q;
    const double C73129 = -(C73583 * C90946 + C91446) / q;
    const double C73355 = -(C74841 * C90946 + C91423) / q;
    const double C73809 =
        (3 * C73794) / q - (C73867 * C90946) / q - (C77432 * p) / q;
    const double C73837 = -(C73881 * C90946 + C73838 * p) / q;
    const double C73897 =
        (5 * C73896) / C54432 - (C74222 * C90946) / q - (C77461 * p) / q;
    const double C73913 =
        (5 * C73912) / C54432 - (C74282 * C90946) / q - (C77476 * p) / q;
    const double C75224 = (2 * C74326) / q - (C74311 * C90946) / q - C91520 / q;
    const double C75726 = -(C75725 * C90946 + C91482) / q;
    const double C75743 = -(C75742 * C90946 + C91483) / q;
    const double C76057 = -(C75880 * C90946 + C91494) / q;
    const double C76074 = -(C76073 * C90946 + C91497) / q;
    const double C76858 = -(C76772 * C90946 + C91509) / q;
    const double C76875 = -(C76874 * C90946 + C91511) / q;
    const double C78567 =
        (2 * C78630) / q - (C78614 * C90946) / q - (C85790 * p) / q;
    const double C78583 =
        (3 * C78646) / C54432 - (C78630 * C90946) / q - (C78614 * p) / q;
    const double C78599 = C85834 / q - (C78646 * C90946) / q - (C78630 * p) / q;
    const double C78615 =
        (5 * C78614) / C54432 - (C85790 * C90946) / q - (C85863 * p) / q;
    const double C78645 = C92000 - (C85834 * C90946) / q - (C78646 * p) / q;
    const double C79296 = C92025 - (C79329 * C90946) / q - C92005 / q;
    const double C79328 = C92027 - (C84899 * C90946) / q - C92007 / q;
    const double C79330 =
        (3 * C79329) / C54432 - (C80252 * C90946) / q - C92003 / q;
    const double C79774 = C92046 - (C79807 * C90946) / q - C92011 / q;
    const double C79806 = C92048 - (C85352 * C90946) / q - C92013 / q;
    const double C79808 =
        (3 * C79807) / C54432 - (C80483 * C90946) / q - C92009 / q;
    const double C80253 = (2 * C80252) / q - (C85892 * C90946) / q - C92017 / q;
    const double C80484 = (2 * C80483) / q - (C85908 * C90946) / q - C92019 / q;
    const double C80698 = C92063 - (C80714 * C90946) / q - C92022 / q;
    const double C80713 = C91997 - (C85126 * C90946) / q - C92023 / q;
    const double C80715 =
        (3 * C80714) / C54432 - (C86316 * C90946) / q - C92021 / q;
    const double C80944 = -(C80974 * C90946 + C92040) / q;
    const double C81394 = -(C81425 * C90946 + C92064) / q;
    const double C81410 = -(C81441 * C90946 + C92038) / q;
    const double C81866 = -(C81897 * C90946 + C92065) / q;
    const double C81882 = -(C81913 * C90946 + C92041) / q;
    const double C82803 = -(C82818 * C90946 + C92069) / q;
    const double C83046 = -(C83076 * C90946 + C92059) / q;
    const double C83493 = -(C83508 * C90946 + C92054) / q;
    const double C83721 = -(C83752 * C90946 + C92099) / q;
    const double C83737 = -(C83768 * C90946 + C92057) / q;
    const double C84655 = -(C84670 * C90946 + C92101) / q;
    const double C84898 = -(C86416 * C90946 + C92018) / q;
    const double C85125 = -(C85579 * C90946 + C92043) / q;
    const double C85351 = -(C86827 * C90946 + C92020) / q;
    const double C85805 =
        (3 * C85790) / q - (C85863 * C90946) / q - (C89392 * p) / q;
    const double C85833 = -(C85877 * C90946 + C85834 * p) / q;
    const double C85893 =
        (5 * C85892) / C54432 - (C86214 * C90946) / q - (C89421 * p) / q;
    const double C85909 =
        (5 * C85908) / C54432 - (C86272 * C90946) / q - (C89436 * p) / q;
    const double C87206 = (2 * C86316) / q - (C86301 * C90946) / q - C92117 / q;
    const double C87703 = -(C87702 * C90946 + C92079) / q;
    const double C87720 = -(C87719 * C90946 + C92080) / q;
    const double C88032 = -(C87854 * C90946 + C92091) / q;
    const double C88049 = -(C88048 * C90946 + C92094) / q;
    const double C88826 = -(C88740 * C90946 + C92106) / q;
    const double C88843 = -(C88842 * C90946 + C92108) / q;
    const double C76326 = C91543 - (C76296 * C90948) / q - C91707;
    const double C77175 = C91545 - (C66173 * be + C76341 * C90947) / q - C91707;
    const double C76281 = (2 * C76073) / q - (C76251 * C90948) / q - C91706;
    const double C76981 = C91508 - (C78459 * be + C77130 * C90947) / q - C91706;
    const double C76266 =
        (3 * C75880) / C54432 - (C76370 * C90948) / q - C91705;
    const double C76964 =
        C76772 / q - (C78430 * be + C76251 * C90947) / q - C91705;
    const double C76892 = C91506 - (C66377 * be + C77070 * C90947) / q - C91704;
    const double C76222 = C91703 - (C76341 * C90948) / q - C91704;
    const double C75910 = C75742 / q - (C75865 * C90948) / q - C91702;
    const double C76207 =
        (3 * C76073) / C54432 - (C78215 * be + C76370 * C90947) / q - C91702;
    const double C75895 = C91476 - (C75971 * C90948) / q - C91701;
    const double C76191 =
        (2 * C75880) / q - (C78200 * be + C75865 * C90947) / q - C91701;
    const double C75836 = C91475 - (C75956 * C90948) / q - C91700;
    const double C76091 = C91703 - (C66143 * be + C76296 * C90947) / q - C91700;
    const double C75137 = C91533 - (C75093 * C90948) / q - C91698;
    const double C77159 = C91545 - (C75195 * C90946) / q - C91698;
    const double C75064 = (2 * C74885) / q - (C75034 * C90948) / q - C91697;
    const double C76876 = C91508 - (C77115 * C90946) / q - C91697;
    const double C76859 = C91507 - (C77070 * C90946) / q - C91696;
    const double C75005 =
        (3 * C74149) / C54432 - (C75166 * C90948) / q - C91695;
    const double C76801 = C76659 / q - (C75034 * C90946) / q - C91695;
    const double C75049 = C91694 - (C75195 * C90948) / q - C91696;
    const double C75240 = C91533 - (C65609 * be + C74726 * C90947) / q - C91699;
    const double C76413 = C91543 - (C74755 * C90946) / q - C91699;
    const double C74638 = C74471 / q - (C74593 * C90948) / q - C91693;
    const double C74990 = C91453 - (C66538 * be + C75195 * C90947) / q - C91693;
    const double C76075 = C91487 - (C76341 * C90946) / q - C91693;
    const double C74623 = C91431 - (C74755 * C90948) / q - C91692;
    const double C74974 =
        C74608 / q - (C66113 * be + C74593 * C90947) / q - C91692;
    const double C76058 = C91486 - (C76296 * C90946) / q - C91692;
    const double C74564 = C91427 - (C74726 * C90948) / q - C91691;
    const double C74902 = C91448 - (C65744 * be + C75093 * C90947) / q - C91691;
    const double C76000 = C75554 / q - (C74593 * C90946) / q - C91691;
    const double C75744 = C91477 - (C75956 * C90946) / q - C91690;
    const double C74533 =
        (2 * C74455) / q - (C65933 * be + C74517 * C90947) / q - C91689;
    const double C75727 = C91476 - (C75925 * C90946) / q - C91689;
    const double C74488 =
        (3 * C74002) / C54432 - (C65594 * be + C74667 * C90947) / q - C91688;
    const double C75668 = C75483 / q - (C74517 * C90946) / q - C91688;
    const double C74549 = C91687 - (C66290 * be + C74755 * C90947) / q - C91690;
    const double C74207 = C73912 / q - (C74120 * C90948) / q - C91686;
    const double C74886 =
        (3 * C74885) / C54432 - (C75166 * C90946) / q - C91686;
    const double C74192 = C91404 - (C74311 * C90948) / q - C91685;
    const double C74870 = C91694 - (C75093 * C90946) / q - C91685;
    const double C74077 = C91401 - (C74282 * C90948) / q - C91684;
    const double C74784 = (2 * C74149) / q - (C74120 * C90946) / q - C91684;
    const double C74062 = C91405 - (C65876 * be + C74311 * C90947) / q - C91683;
    const double C74472 = C91687 - (C74726 * C90946) / q - C91683;
    const double C74046 =
        C73896 / q - (C65579 * be + C73973 * C90947) / q - C91682;
    const double C74456 =
        (3 * C74455) / C54432 - (C74667 * C90946) / q - C91682;
    const double C73929 = C91401 - (C65442 * be + C74222 * C90947) / q - C91681;
    const double C74369 = (2 * C74002) / q - (C73973 * C90946) / q - C91681;
    const double C70318 = C70822 / q - (C75880 * C90948) / q - C91680;
    const double C72732 =
        C72674 / q - (C66158 * be + C76073 * C90947) / q - C91680;
    const double C70288 = C91496 - (C75554 * C90948) / q - C91679;
    const double C72502 = C91371 - (C65282 * be + C76729 * C90947) / q - C91679;
    const double C70229 = C91493 - (C63999 * be + C75554 * C90947) / q - C91677;
    const double C70478 = C91308 - (C75611 * C90948) / q - C91677;
    const double C71876 = C91352 - (C66362 * be + C76772 * C90947) / q - C91676;
    const double C70141 = C69917 / q - (C69901 * C90948) / q - C91675;
    const double C71892 = C91353 - (C65267 * be + C72674 * C90947) / q - C91675;
    const double C70142 = C91673 - (C76073 * C90948) / q - C91676;
    const double C69681 = C91265 - (C70822 * C90948) / q - C91672;
    const double C70021 =
        C71512 / q - (C63953 * be + C69901 * C90947) / q - C91672;
    const double C69666 = C91264 - (C75742 * C90948) / q - C91671;
    const double C70022 = C91673 - (C66128 * be + C75880 * C90947) / q - C91671;
    const double C69211 = C91242 - (C69917 * C90948) / q - C91669;
    const double C70020 = C91325 - (C64716 * be + C71512 * C90947) / q - C91669;
    const double C69195 = C91241 - (C70593 * C90948) / q - C91668;
    const double C71180 = C91324 - (C64731 * be + C72213 * C90947) / q - C91668;
    const double C68213 = C91463 - (C74608 * C90948) / q - C91664;
    const double C72675 = C91377 - (C76729 * C90946) / q - C91664;
    const double C68183 = C68487 / q - (C74149 * C90948) / q - C91663;
    const double C72445 = C72444 / q - (C74885 * C90946) / q - C91663;
    const double C68372 = C91215 - (C74326 * C90948) / q - C91665;
    const double C72214 = C91493 - (C74608 * C90946) / q - C91665;
    const double C71757 = C91352 - (C76659 * C90946) / q - C91662;
    const double C68033 = C67811 / q - (C67794 * C90948) / q - C91661;
    const double C71773 = C91353 - (C72444 * C90946) / q - C91661;
    const double C68034 = C91659 - (C74885 * C90948) / q - C91662;
    const double C68776 = C91463 - (C64458 * be + C74471 * C90947) / q - C91667;
    const double C70823 = C91320 - (C75611 * C90946) / q - C91667;
    const double C68545 = C91226 - (C63347 * be + C74326 * C90947) / q - C91666;
    const double C70594 = C91496 - (C74471 * C90946) / q - C91666;
    const double C67643 =
        C68256 / q - (C62367 * be + C74002 * C90947) / q - C91658;
    const double C70363 = C70362 / q - (C74455 * C90946) / q - C91658;
    const double C67569 = C91150 - (C68718 * C90948) / q - C91655;
    const double C71513 = C91346 - (C72213 * C90946) / q - C91655;
    const double C67554 = C91148 - (C74471 * C90948) / q - C91654;
    const double C67915 = C91188 - (C65122 * be + C74608 * C90947) / q - C91654;
    const double C69902 = C91279 - (C75554 * C90946) / q - C91654;
    const double C67931 = C91190 - (C63317 * be + C68718 * C90947) / q - C91660;
    const double C69918 = C91280 - (C70593 * C90946) / q - C91660;
    const double C69430 = C91264 - (C75483 * C90946) / q - C91652;
    const double C67436 =
        C67333 / q - (C62306 * be + C67316 * C90947) / q - C91651;
    const double C69446 = C91265 - (C70362 * C90946) / q - C91651;
    const double C67437 = C91650 - (C64369 * be + C74455 * C90947) / q - C91652;
    const double C67006 = C91117 - (C67811 * C90948) / q - C91649;
    const double C67793 = C91325 - (C71065 * C90946) / q - C91649;
    const double C66990 = C91116 - (C68487 * C90948) / q - C91648;
    const double C67762 = C71065 / q - (C67794 * C90946) / q - C91648;
    const double C66974 = C91115 - (C73912 * C90948) / q - C91647;
    const double C67795 = C91659 - (C74149 * C90946) / q - C91647;
    const double C66828 = C91117 - (C62337 * be + C67333 * C90947) / q - C91646;
    const double C67315 = C91242 - (C68963 * C90946) / q - C91646;
    const double C66812 = C91116 - (C62398 * be + C68256 * C90947) / q - C91645;
    const double C67284 = C68963 / q - (C67316 * C90946) / q - C91645;
    const double C66796 = C91115 - (C63171 * be + C73896 * C90947) / q - C91644;
    const double C67317 = C91650 - (C74002 * C90946) / q - C91644;
    const double C88299 = C92140 - (C66143 * be + C88270 * C90948) / q - C92304;
    const double C89140 = C92142 - (C88314 * C90947) / q - C92304;
    const double C88255 =
        (2 * C88048) / q - (C78430 * be + C88223 * C90948) / q - C92303;
    const double C88946 = C92105 - (C89096 * C90947) / q - C92303;
    const double C88239 =
        (3 * C87854) / C54432 - (C78215 * be + C88343 * C90948) / q - C92302;
    const double C88930 = C88740 / q - (C88223 * C90947) / q - C92302;
    const double C88859 = C92103 - (C89037 * C90947) / q - C92301;
    const double C88194 = C92300 - (C66173 * be + C88314 * C90948) / q - C92301;
    const double C87886 =
        C87719 / q - (C78200 * be + C87839 * C90948) / q - C92299;
    const double C88179 =
        (3 * C88048) / C54432 - (C88343 * C90947) / q - C92299;
    const double C87870 = C92073 - (C78040 * be + C87946 * C90948) / q - C92298;
    const double C88164 = (2 * C87854) / q - (C87839 * C90947) / q - C92298;
    const double C87810 = C92072 - (C65993 * be + C87931 * C90948) / q - C92297;
    const double C88065 = C92300 - (C88270 * C90947) / q - C92297;
    const double C87119 = C92130 - (C65744 * be + C87076 * C90948) / q - C92295;
    const double C89125 = C92142 - (C87177 * C90946) / q - C92295;
    const double C87047 =
        (2 * C86871) / q - (C66347 * be + C87017 * C90948) / q - C92294;
    const double C88844 = C92105 - (C89081 * C90946) / q - C92294;
    const double C88827 = C92104 - (C89037 * C90946) / q - C92293;
    const double C86988 =
        (3 * C86141) / C54432 - (C65759 * be + C87148 * C90948) / q - C92292;
    const double C88769 = C88627 / q - (C87017 * C90946) / q - C92292;
    const double C87032 = C92291 - (C66538 * be + C87177 * C90948) / q - C92293;
    const double C87221 = C92130 - (C86712 * C90947) / q - C92296;
    const double C88386 = C92140 - (C86741 * C90946) / q - C92296;
    const double C86625 =
        C86461 / q - (C66113 * be + C86580 * C90948) / q - C92290;
    const double C86973 = C92050 - (C87177 * C90947) / q - C92290;
    const double C88050 = C92084 - (C88314 * C90946) / q - C92290;
    const double C86610 = C92028 - (C66290 * be + C86741 * C90948) / q - C92289;
    const double C86958 = C86595 / q - (C86580 * C90947) / q - C92289;
    const double C88033 = C92083 - (C88270 * C90946) / q - C92289;
    const double C86551 = C92024 - (C65609 * be + C86712 * C90948) / q - C92288;
    const double C86887 = C92045 - (C87076 * C90947) / q - C92288;
    const double C87975 = C87531 / q - (C86580 * C90946) / q - C92288;
    const double C87721 = C92074 - (C87931 * C90946) / q - C92287;
    const double C86521 = (2 * C86445) / q - (C86506 * C90947) / q - C92286;
    const double C87704 = C92073 - (C87901 * C90946) / q - C92286;
    const double C86477 =
        (3 * C85996) / C54432 - (C86654 * C90947) / q - C92285;
    const double C87645 = C87461 / q - (C86506 * C90946) / q - C92285;
    const double C86536 = C92284 - (C86741 * C90947) / q - C92287;
    const double C86199 =
        C85908 / q - (C65729 * be + C86112 * C90948) / q - C92283;
    const double C86872 =
        (3 * C86871) / C54432 - (C87148 * C90946) / q - C92283;
    const double C86184 = C92001 - (C65876 * be + C86301 * C90948) / q - C92282;
    const double C86856 = C92291 - (C87076 * C90946) / q - C92282;
    const double C86069 = C91998 - (C65458 * be + C86272 * C90948) / q - C92281;
    const double C86770 = (2 * C86141) / q - (C86112 * C90946) / q - C92281;
    const double C86054 = C92002 - (C86301 * C90947) / q - C92280;
    const double C86462 = C92284 - (C86712 * C90946) / q - C92280;
    const double C86039 = C85892 / q - (C85967 * C90947) / q - C92279;
    const double C86446 =
        (3 * C86445) / C54432 - (C86654 * C90946) / q - C92279;
    const double C85924 = C91998 - (C86214 * C90947) / q - C92278;
    const double C86359 = (2 * C85996) / q - (C85967 * C90946) / q - C92278;
    const double C82314 =
        C82818 / q - (C66128 * be + C87854 * C90948) / q - C92277;
    const double C84728 = C84670 / q - (C88048 * C90947) / q - C92277;
    const double C82284 = C92093 - (C63999 * be + C87531 * C90948) / q - C92276;
    const double C84498 = C91968 - (C88697 * C90947) / q - C92276;
    const double C82225 = C92090 - (C87531 * C90947) / q - C92274;
    const double C82474 = C91905 - (C64516 * be + C87588 * C90948) / q - C92274;
    const double C83872 = C91949 - (C88740 * C90947) / q - C92273;
    const double C82137 =
        C81913 / q - (C63953 * be + C81897 * C90948) / q - C92272;
    const double C83888 = C91950 - (C84670 * C90947) / q - C92272;
    const double C82138 = C92270 - (C66158 * be + C88048 * C90948) / q - C92273;
    const double C81677 = C91862 - (C64501 * be + C82818 * C90948) / q - C92269;
    const double C82017 = C83508 / q - (C81897 * C90947) / q - C92269;
    const double C81662 = C91861 - (C65978 * be + C87719 * C90948) / q - C92268;
    const double C82018 = C92270 - (C87854 * C90947) / q - C92268;
    const double C81207 = C91839 - (C63984 * be + C81913 * C90948) / q - C92266;
    const double C82016 = C91922 - (C83508 * C90947) / q - C92266;
    const double C81191 = C91838 - (C64014 * be + C82589 * C90948) / q - C92265;
    const double C83176 = C91921 - (C84209 * C90947) / q - C92265;
    const double C80209 = C92060 - (C65122 * be + C86595 * C90948) / q - C92261;
    const double C84671 = C91974 - (C88697 * C90946) / q - C92261;
    const double C80179 =
        C80483 / q - (C62787 * be + C86141 * C90948) / q - C92260;
    const double C84441 = C84440 / q - (C86871 * C90946) / q - C92260;
    const double C80368 = C91812 - (C63347 * be + C86316 * C90948) / q - C92262;
    const double C84210 = C92090 - (C86595 * C90946) / q - C92262;
    const double C83753 = C91949 - (C88627 * C90946) / q - C92259;
    const double C80029 =
        C79807 / q - (C62726 * be + C79790 * C90948) / q - C92258;
    const double C83769 = C91950 - (C84440 * C90946) / q - C92258;
    const double C80030 = C92256 - (C65210 * be + C86871 * C90948) / q - C92259;
    const double C80772 = C92060 - (C86461 * C90947) / q - C92264;
    const double C82819 = C91917 - (C87588 * C90946) / q - C92264;
    const double C80541 = C91823 - (C86316 * C90947) / q - C92263;
    const double C82590 = C92093 - (C86461 * C90946) / q - C92263;
    const double C79639 = C80252 / q - (C85996 * C90947) / q - C92255;
    const double C82359 = C82358 / q - (C86445 * C90946) / q - C92255;
    const double C79565 = C91747 - (C63317 * be + C80714 * C90948) / q - C92252;
    const double C83509 = C91943 - (C84209 * C90946) / q - C92252;
    const double C79550 = C91745 - (C64458 * be + C86461 * C90948) / q - C92251;
    const double C79911 = C91785 - (C86595 * C90947) / q - C92251;
    const double C81898 = C91876 - (C87531 * C90946) / q - C92251;
    const double C79927 = C91787 - (C80714 * C90947) / q - C92257;
    const double C81914 = C91877 - (C82589 * C90946) / q - C92257;
    const double C81426 = C91861 - (C87461 * C90946) / q - C92249;
    const double C79432 = C79329 / q - (C79312 * C90947) / q - C92248;
    const double C81442 = C91862 - (C82358 * C90946) / q - C92248;
    const double C79433 = C92247 - (C86445 * C90947) / q - C92249;
    const double C79002 = C91714 - (C62757 * be + C79807 * C90948) / q - C92246;
    const double C79789 = C91922 - (C83061 * C90946) / q - C92246;
    const double C78986 = C91713 - (C62818 * be + C80483 * C90948) / q - C92245;
    const double C79758 = C83061 / q - (C79790 * C90946) / q - C92245;
    const double C78970 = C91712 - (C63260 * be + C85908 * C90948) / q - C92244;
    const double C79791 = C92256 - (C86141 * C90946) / q - C92244;
    const double C78824 = C91714 - (C79329 * C90947) / q - C92243;
    const double C79311 = C91839 - (C80959 * C90946) / q - C92243;
    const double C78808 = C91713 - (C80252 * C90947) / q - C92242;
    const double C79280 = C80959 / q - (C79312 * C90946) / q - C92242;
    const double C78792 = C91712 - (C85892 * C90947) / q - C92241;
    const double C79313 = C92247 - (C85996 * C90946) / q - C92241;
    const double C90819 = C54777 / C54432;
    const double C90533 = C54778 * p;
    const double C90625 = C54793 / C54432;
    const double C90628 = C54794 / q;
    const double C90534 = C54794 * p;
    const double C90583 = C54809 / C54432;
    const double C15577 = (3 * C54809) / C54432 -
                          (C55016 * be + C54793 * C90946) / q -
                          (C54777 * p) / q;
    const double C90603 = C54810 / q;
    const double C90535 = C54810 * p;
    const double C15576 = (2 * C54793) / q -
                          (C55000 * be + C54777 * C90946) / q -
                          (C55004 * p) / q;
    const double C90791 = C55035 / C54432;
    const double C15587 =
        C55035 / q - (C55031 * be + C54809 * C90946) / q - (C54793 * p) / q;
    const double C90542 = C55050 * p;
    const double C90623 = C55065 / q;
    const double C90543 = C55065 * p;
    const double C90574 = C55080 / q;
    const double C90544 = C55080 * p;
    const double C90584 = C55369 * p;
    const double C90568 = C55370 * p;
    const double C90636 = C55385 / q;
    const double C90569 = C55385 * p;
    const double C90661 = C55522 * p;
    const double C90579 = C55522 / q;
    const double C90580 = C55523 * p;
    const double C90581 = C55539 / q;
    const double C54988 = -(C55035 * C90947 + C55539 * p) / q;
    const double C90582 = C55554 * p;
    const double C90605 = C55859 * p;
    const double C90604 = C55860 * p;
    const double C90743 = C56012 * p;
    const double C90611 = C56012 / q;
    const double C90612 = C56013 * p;
    const double C90613 = C56029 / q;
    const double C54762 = C90802 - (C55035 * C90948) / q - (C56029 * p) / q;
    const double C90614 = C56044 * p;
    const double C90621 = C56207 * p;
    const double C90787 = C56757 * p;
    const double C90638 = C56757 / q;
    const double C90719 = C57049 / q;
    const double C90654 = C57049 * p;
    const double C90660 = C57064 / C54432;
    const double C90693 = C57065 / q;
    const double C90655 = C57065 * p;
    const double C90662 = C57225 * p;
    const double C90790 = C57240 / C54432;
    const double C90715 = C57241 / C54432;
    const double C16936 = C57240 / q - (C57064 * C90947) / q - (C57241 * p) / q;
    const double C17216 =
        (3 * C57064) / C54432 - (C57241 * C90947) / q - (C57528 * p) / q;
    const double C90672 = C57529 * p;
    const double C90721 = C57544 / q;
    const double C90673 = C57544 * p;
    const double C90677 = C57679 * p;
    const double C17215 =
        (2 * C57241) / q - (C57528 * C90947) / q - (C57709 * p) / q;
    const double C90695 = C58014 * p;
    const double C90694 = C58015 * p;
    const double C90702 = C58165 * p;
    const double C90745 = C58195 * p;
    const double C90703 = C58195 / q;
    const double C90704 = C58196 * p;
    const double C90871 = C58211 * p;
    const double C90705 = C58211 / q;
    const double C90713 = C58360 * p;
    const double C90737 = C59196 * p;
    const double C90799 = C59211 / C54432;
    const double C90742 = C59212 / C54432;
    const double C90776 = C59213 / C54432;
    const double C18144 =
        C59211 / q - (C59212 * C90948) / q + C90725 - (C59213 * p) / q;
    const double C90767 = C59373 / q;
    const double C90744 = C59373 * p;
    const double C90749 = C59532 * p;
    const double C18708 = (3 * C59212) / C54432 - (C59213 * C90948) / q +
                          C90753 - (C59907 * p) / q;
    const double C18707 =
        (2 * C59213) / q - (C59907 * C90948) / q + C90752 - (C59908 * p) / q;
    const double C90759 = C60058 * p;
    const double C90760 = C60088 * p;
    const double C90766 = C60251 * p;
    const double C54733 = C90801 - (C55004 * C90948) / q - (C62033 * p) / q;
    const double C90818 = C62148 * p;
    const double C54959 = -(C55004 * C90947 + C62207 * p) / q;
    const double C90835 = C62524 * p;
    const double C90839 = C62583 * p;
    const double C90840 = C62598 * p;
    const double C90856 = C63014 * p;
    const double C55918 = (3 * C55859) / C54432 - (C55860 * C90948) / q +
                          C90853 - (C63029 * p) / q;
    const double C90859 = C63101 * p;
    const double C90878 = C63807 * p;
    const double C57559 = C90876 - (C57709 * C90948) / q - (C63866 * p) / q;
    const double C57588 =
        C57528 / C54432 - (C57529 * C90948) / q + C90877 - (C63881 * p) / q;
    const double C57649 =
        (2 * C57225) / q - (C57679 * C90947) / q - (C63911 * p) / q;
    const double C90890 = C64196 * p;
    const double C58073 = (3 * C58014) / C54432 - (C58015 * C90948) / q +
                          C90887 - (C64255 * p) / q;
    const double C90895 = C64299 * p;
    const double C58420 =
        (3 * C55369) / C54432 - (C55554 * C90947) / q - (C64446 * p) / q;
    const double C90903 = C64689 / C54432;
    const double C59878 =
        (2 * C59196) / q - (C60058 * C90948) / q + C90906 - (C64977 * p) / q;
    const double C59937 =
        (2 * C59532) / q - (C60088 * C90948) / q + C90907 - (C65021 * p) / q;
    const double C59966 = (5 * C59907) / C54432 - (C59908 * C90948) / q +
                          C90908 - (C65036 * p) / q;
    const double C90910 = C65080 * p;
    const double C91419 = C66973 / C54432;
    const double C91225 = C66989 / C54432;
    const double C91183 = C67005 / C54432;
    const double C32148 =
        (3 * C67005) / C54432 - (C66989 * C90946) / q - (C66973 * p) / q;
    const double C32147 =
        (2 * C66989) / q - (C66973 * C90946) / q - (C67195 * p) / q;
    const double C91391 = C67224 / C54432;
    const double C32157 = C67224 / q - (C67005 * C90946) / q - (C66989 * p) / q;
    const double C91142 = C67239 * p;
    const double C91223 = C67254 / q;
    const double C91143 = C67254 * p;
    const double C91174 = C67269 / q;
    const double C91144 = C67269 * p;
    const double C91184 = C67553 * p;
    const double C91261 = C67702 * p;
    const double C91179 = C67702 / q;
    const double C91180 = C67703 * p;
    const double C91181 = C67718 / q;
    const double C67180 = -(C74263 * be + C67224 * C90947 + C67718 * p) / q;
    const double C91182 = C67733 * p;
    const double C91343 = C68182 * p;
    const double C91211 = C68182 / q;
    const double C91213 = C68198 / q;
    const double C66958 = C91402 - (C67224 * C90948) / q - (C68198 * p) / q;
    const double C91387 = C68905 * p;
    const double C91238 = C68905 / q;
    const double C91260 = C69210 / C54432;
    const double C91262 = C69367 * p;
    const double C91390 = C69382 / C54432;
    const double C91315 = C69383 / C54432;
    const double C33472 =
        C69382 / q - (C57207 * be + C69210 * C90947) / q - (C69383 * p) / q;
    const double C33768 = (3 * C69210) / C54432 -
                          (C57691 * be + C69383 * C90947) / q -
                          (C69665 * p) / q;
    const double C91277 = C69812 * p;
    const double C33767 = (2 * C69383) / q -
                          (C57675 * be + C69665 * C90947) / q -
                          (C69841 * p) / q;
    const double C91345 = C70317 * p;
    const double C91303 = C70317 / q;
    const double C91471 = C70333 * p;
    const double C91305 = C70333 / q;
    const double C91337 = C71295 * p;
    const double C91399 = C71310 / C54432;
    const double C91342 = C71311 / C54432;
    const double C91376 = C71312 / C54432;
    const double C34676 =
        C71310 / q - (C71311 * C90948) / q + C91325 - (C71312 * p) / q;
    const double C91367 = C71468 / q;
    const double C91344 = C71468 * p;
    const double C91349 = C71626 * p;
    const double C35244 = (3 * C71311) / C54432 - (C71312 * C90948) / q +
                          C91353 - (C71994 * p) / q;
    const double C35243 =
        (2 * C71312) / q - (C71994 * C90948) / q + C91352 - (C71995 * p) / q;
    const double C91359 = C72141 * p;
    const double C91360 = C72170 * p;
    const double C91366 = C72329 * p;
    const double C67151 = -(C74247 * be + C67195 * C90947 + C74252 * p) / q;
    const double C69783 = (2 * C69367) / q -
                          (C75936 * be + C69812 * C90947) / q -
                          (C75941 * p) / q;
    const double C70536 = (3 * C67553) / C54432 -
                          (C76468 * be + C67733 * C90947) / q -
                          (C76473 * p) / q;
    const double C91503 = C76714 / C54432;
    const double C71965 =
        (2 * C71295) / q - (C72141 * C90948) / q + C91506 - (C76996 * p) / q;
    const double C72024 =
        (2 * C71626) / q - (C72170 * C90948) / q + C91507 - (C77040 * p) / q;
    const double C72053 = (5 * C71994) / C54432 - (C71995 * C90948) / q +
                          C91508 - (C77055 * p) / q;
    const double C91510 = C77100 * p;
    const double C92016 = C78969 / C54432;
    const double C91822 = C78985 / C54432;
    const double C91780 = C79001 / C54432;
    const double C48604 =
        (3 * C79001) / C54432 - (C78985 * C90946) / q - (C78969 * p) / q;
    const double C48603 =
        (2 * C78985) / q - (C78969 * C90946) / q - (C79191 * p) / q;
    const double C91988 = C79220 / C54432;
    const double C48613 = C79220 / q - (C79001 * C90946) / q - (C78985 * p) / q;
    const double C91739 = C79235 * p;
    const double C91820 = C79250 / q;
    const double C91740 = C79250 * p;
    const double C91771 = C79265 / q;
    const double C91741 = C79265 * p;
    const double C91781 = C79549 * p;
    const double C91858 = C79698 * p;
    const double C91776 = C79698 / q;
    const double C91777 = C79699 * p;
    const double C91778 = C79714 / q;
    const double C79176 = -(C79220 * C90947 + C79714 * p) / q;
    const double C91779 = C79729 * p;
    const double C91940 = C80178 * p;
    const double C91808 = C80178 / q;
    const double C91810 = C80194 / q;
    const double C78954 =
        C91999 - (C74263 * be + C79220 * C90948) / q - (C80194 * p) / q;
    const double C91984 = C80901 * p;
    const double C91835 = C80901 / q;
    const double C91857 = C81206 / C54432;
    const double C91859 = C81363 * p;
    const double C91987 = C81378 / C54432;
    const double C91912 = C81379 / C54432;
    const double C49928 = C81378 / q - (C81206 * C90947) / q - (C81379 * p) / q;
    const double C50208 =
        (3 * C81206) / C54432 - (C81379 * C90947) / q - (C81661 * p) / q;
    const double C91874 = C81808 * p;
    const double C50207 =
        (2 * C81379) / q - (C81661 * C90947) / q - (C81837 * p) / q;
    const double C91942 = C82313 * p;
    const double C91900 = C82313 / q;
    const double C92068 = C82329 * p;
    const double C91902 = C82329 / q;
    const double C91934 = C83291 * p;
    const double C91996 = C83306 / C54432;
    const double C91939 = C83307 / C54432;
    const double C91973 = C83308 / C54432;
    const double C51116 = C83306 / q - (C59355 * be + C83307 * C90948) / q +
                          C91922 - (C83308 * p) / q;
    const double C91964 = C83464 / q;
    const double C91941 = C83464 * p;
    const double C91946 = C83622 * p;
    const double C51678 = (3 * C83307) / C54432 -
                          (C60070 * be + C83308 * C90948) / q + C91950 -
                          (C83990 * p) / q;
    const double C51677 = (2 * C83308) / q -
                          (C60054 * be + C83990 * C90948) / q + C91949 -
                          (C83991 * p) / q;
    const double C91956 = C84137 * p;
    const double C91957 = C84166 * p;
    const double C91963 = C84325 * p;
    const double C79147 = -(C79191 * C90947 + C86243 * p) / q;
    const double C81779 =
        (2 * C81363) / q - (C81808 * C90947) / q - (C87916 * p) / q;
    const double C82532 =
        (3 * C79549) / C54432 - (C79729 * C90947) / q - (C88444 * p) / q;
    const double C92100 = C88682 / C54432;
    const double C83961 = (2 * C83291) / q -
                          (C77095 * be + C84137 * C90948) / q + C92103 -
                          (C88961 * p) / q;
    const double C84020 = (2 * C83622) / q -
                          (C89000 * be + C84166 * C90948) / q + C92104 -
                          (C89006 * p) / q;
    const double C84049 = (5 * C83990) / C54432 -
                          (C89016 * be + C83991 * C90948) / q + C92105 -
                          (C89022 * p) / q;
    const double C92107 = C89066 * p;
    const double C90524 = C54599 * p;
    const double C90619 = C54615 / q;
    const double C90525 = C54615 * p;
    const double C15535 = (3 * C54630) / C54432 -
                          (C54924 * be + C54614 * C90946) / q -
                          (C54598 * p) / q;
    const double C90558 = C54631 / q;
    const double C90526 = C54631 * p;
    const double C15534 = (2 * C54614) / q -
                          (C54908 * be + C54598 * C90946) / q -
                          (C54912 * p) / q;
    const double C15545 =
        C54943 / q - (C54939 * be + C54630 * C90946) / q - (C54614 * p) / q;
    const double C90560 = C55251 * p;
    const double C90559 = C55252 * p;
    const double C90659 = C55459 * p;
    const double C90576 = C55459 / q;
    const double C90577 = C55460 * p;
    const double C90578 = C55476 / q;
    const double C54583 = C90802 - (C54943 * C90947) / q - (C55476 * p) / q;
    const double C90596 = C55740 * p;
    const double C90634 = C55756 / q;
    const double C90597 = C55756 * p;
    const double C90609 = C55948 / q;
    const double C90610 = C55965 / q;
    const double C90627 = C56386 * p;
    const double C16445 = (3 * C55755) / C54432 -
                          (C56483 * be + C55966 * C90946) / q -
                          (C56487 * p) / q;
    const double C90633 = C56624 * p;
    const double C90796 = C56725 * p;
    const double C90637 = C56725 / q;
    const double C90648 = C56932 * p;
    const double C16736 =
        C56947 / q - (C56948 * C90947) / q + C90642 - (C56949 * p) / q;
    const double C17036 = (3 * C56948) / C54432 - (C56949 * C90947) / q +
                          C90665 - (C57410 * p) / q;
    const double C17035 =
        (2 * C56949) / q - (C57410 * C90947) / q + C90664 - (C57411 * p) / q;
    const double C90676 = C57618 * p;
    const double C90686 = C57892 / q;
    const double C90687 = C57909 / q;
    const double C90700 = C58103 * p;
    const double C90701 = C58119 * p;
    const double C90718 = C58539 * p;
    const double C17854 = (3 * C57910) / C54432 - (C57911 * C90947) / q +
                          C90720 - (C58775 * p) / q;
    const double C90764 = C59081 / q;
    const double C90731 = C59081 * p;
    const double C90741 = C59096 / C54432;
    const double C18064 = C90725 - (C59096 * C90947) / q - (C57892 * p) / q;
    const double C18204 = -(C59297 * be + C59096 * C90946 + C55948 * p) / q;
    const double C18635 = C90752 - (C59787 * C90947) / q - (C59788 * p) / q;
    const double C90775 = C59803 / C54432;
    const double C90778 = C59804 / q;
    const double C18636 = C90753 - (C59803 * C90947) / q - (C59804 * p) / q;
    const double C18761 = -(C59992 * be + C59787 * C90946 + C59996 * p) / q;
    const double C18762 = -(C60008 * be + C59803 * C90946 + C60012 * p) / q;
    const double C90773 = C60430 * p;
    const double C90798 = C61458 / C54432;
    const double C59153 = C90851 - (C61458 * C90947) / q - (C57909 * p) / q;
    const double C54554 = C90801 - (C54912 * C90947) / q - (C61888 * p) / q;
    const double C54646 =
        C54598 / C54432 - (C54599 * C90947) / q + C90804 - (C62003 * p) / q;
    const double C54689 = C90805 - (C56487 * C90947) / q - (C62018 * p) / q;
    const double C55281 = (3 * C55251) / C54432 - (C55252 * C90947) / q +
                          C90831 - (C62494 * p) / q;
    const double C55710 = C90848 - (C55949 * C90947) / q - (C62869 * p) / q;
    const double C55771 =
        C55739 / C54432 - (C55740 * C90947) / q + C90852 - (C62940 * p) / q;
    const double C55800 = C90853 - (C60531 * C90947) / q - (C62955 * p) / q;
    const double C56177 =
        C55966 / C54432 - (C56386 * C90947) / q + C90865 - (C63205 * p) / q;
    const double C56978 =
        C63506 / C54432 - (C56947 * C90947) / q + C90830 - (C56948 * p) / q;
    const double C57381 =
        (2 * C56932) / q - (C57618 * C90947) / q + C90875 - (C63733 * p) / q;
    const double C57440 = (5 * C57410) / C54432 - (C57411 * C90947) / q +
                          C90876 - (C63777 * p) / q;
    const double C57469 =
        (2 * C57911) / q - (C58775 * C90947) / q + C90877 - (C63792 * p) / q;
    const double C57926 = (3 * C57893) / C54432 - (C57894 * C90947) / q +
                          C90886 - (C64166 * p) / q;
    const double C58330 = (3 * C58119) / C54432 - (C58539 * C90947) / q +
                          C90901 - (C64403 * p) / q;
    const double C59758 = C90906 - (C59996 * C90947) / q - (C64875 * p) / q;
    const double C59819 =
        C59787 / C54432 - (C59788 * C90947) / q + C90907 - (C64946 * p) / q;
    const double C59848 = C90908 - (C64961 * C90947) / q - (C64962 * p) / q;
    const double C60221 =
        C60012 / C54432 - (C60430 * C90947) / q + C90913 - (C65156 * p) / q;
    const double C32110 =
        (3 * C66827) / C54432 - (C66811 * C90946) / q - (C66795 * p) / q;
    const double C32109 =
        (2 * C66811) / q - (C66795 * C90946) / q - (C67107 * p) / q;
    const double C32119 = C67136 / q - (C66827 * C90946) / q - (C66811 * p) / q;
    const double C91259 = C67642 * p;
    const double C91176 = C67642 / q;
    const double C91178 = C67658 / q;
    const double C66780 =
        C91402 - (C73940 * be + C67136 * C90947) / q - (C67658 * p) / q;
    const double C91209 = C68121 / q;
    const double C91210 = C68137 / q;
    const double C33013 =
        (3 * C67930) / C54432 - (C68138 * C90946) / q - (C68644 * p) / q;
    const double C91396 = C68875 * p;
    const double C91237 = C68875 / q;
    const double C91248 = C69078 * p;
    const double C33292 = C69093 / q - (C57149 * be + C69094 * C90947) / q +
                          C91242 - (C69095 * p) / q;
    const double C33578 = (3 * C69094) / C54432 -
                          (C57630 * be + C69095 * C90947) / q + C91265 -
                          (C69548 * p) / q;
    const double C33577 = (2 * C69095) / q -
                          (C57614 * be + C69548 * C90947) / q + C91264 -
                          (C69549 * p) / q;
    const double C91276 = C69754 * p;
    const double C91287 = C70037 / q;
    const double C91301 = C70244 * p;
    const double C91318 = C70651 * p;
    const double C34406 = (3 * C70038) / C54432 -
                          (C58872 * be + C70039 * C90947) / q + C91320 -
                          (C70880 * p) / q;
    const double C91341 = C71195 / C54432;
    const double C34730 = -(C71195 * C90946 + C68121 * p) / q;
    const double C91375 = C71891 / C54432;
    const double C35297 = -(C71875 * C90946 + C72082 * p) / q;
    const double C35298 = -(C71891 * C90946 + C72097 * p) / q;
    const double C91398 = C73511 / C54432;
    const double C71252 =
        C91451 - (C76640 * be + C73511 * C90947) / q - (C70037 * p) / q;
    const double C69124 = C75539 / C54432 -
                          (C75534 * be + C69093 * C90947) / q + C91430 -
                          (C69094 * p) / q;
    const double C69519 = (2 * C69078) / q -
                          (C75755 * be + C69754 * C90947) / q + C91475 -
                          (C75760 * p) / q;
    const double C69578 = (5 * C69548) / C54432 -
                          (C75800 * be + C69549 * C90947) / q + C91476 -
                          (C75805 * p) / q;
    const double C69607 = (2 * C70039) / q -
                          (C75816 * be + C70880 * C90947) / q + C91477 -
                          (C75821 * p) / q;
    const double C70449 = (3 * C70244) / C54432 -
                          (C76424 * be + C70651 * C90947) / q + C91501 -
                          (C76429 * p) / q;
    const double C48566 =
        (3 * C78823) / C54432 - (C78807 * C90946) / q - (C78791 * p) / q;
    const double C48565 =
        (2 * C78807) / q - (C78791 * C90946) / q - (C79103 * p) / q;
    const double C48575 = C79132 / q - (C78823 * C90946) / q - (C78807 * p) / q;
    const double C91856 = C79638 * p;
    const double C91773 = C79638 / q;
    const double C91775 = C79654 / q;
    const double C78776 = C91999 - (C79132 * C90947) / q - (C79654 * p) / q;
    const double C91806 = C80117 / q;
    const double C91807 = C80133 / q;
    const double C49469 =
        (3 * C79926) / C54432 - (C80134 * C90946) / q - (C80640 * p) / q;
    const double C91993 = C80871 * p;
    const double C91834 = C80871 / q;
    const double C91845 = C81074 * p;
    const double C49748 =
        C81089 / q - (C81090 * C90947) / q + C91839 - (C81091 * p) / q;
    const double C50028 = (3 * C81090) / C54432 - (C81091 * C90947) / q +
                          C91862 - (C81544 * p) / q;
    const double C50027 =
        (2 * C81091) / q - (C81544 * C90947) / q + C91861 - (C81545 * p) / q;
    const double C91873 = C81750 * p;
    const double C91884 = C82033 / q;
    const double C91898 = C82240 * p;
    const double C91915 = C82647 * p;
    const double C50846 = (3 * C82034) / C54432 - (C82035 * C90947) / q +
                          C91917 - (C82876 * p) / q;
    const double C91938 = C83191 / C54432;
    const double C51170 = -(C83191 * C90946 + C80117 * p) / q;
    const double C91972 = C83887 / C54432;
    const double C51734 = -(C83871 * C90946 + C84078 * p) / q;
    const double C51735 = -(C83887 * C90946 + C84093 * p) / q;
    const double C91995 = C85507 / C54432;
    const double C83248 = C92048 - (C85507 * C90947) / q - (C82033 * p) / q;
    const double C81120 =
        C87516 / C54432 - (C81089 * C90947) / q + C92027 - (C81090 * p) / q;
    const double C81515 =
        (2 * C81074) / q - (C81750 * C90947) / q + C92072 - (C87736 * p) / q;
    const double C81574 = (5 * C81544) / C54432 - (C81545 * C90947) / q +
                          C92073 - (C87780 * p) / q;
    const double C81603 =
        (2 * C82035) / q - (C82876 * C90947) / q + C92074 - (C87795 * p) / q;
    const double C82445 = (3 * C82240) / C54432 - (C82647 * C90947) / q +
                          C92098 - (C88401 * p) / q;
    const double C15304 = (3 * C54401) / C54432 -
                          (C54430 * be + C54385 * C90946) / q + C90512 -
                          (C54369 * p) / q;
    const double C15303 = (2 * C54385) / q -
                          (C54413 * be + C54369 * C90946) / q + C90511 -
                          (C54418 * p) / q;
    const double C15314 = C54451 / q - (C54447 * be + C54401 * C90946) / q +
                          C90513 - (C54385 * p) / q;
    const double C90547 = C55128 / q;
    const double C90549 = C55146 / q;
    const double C90587 = C55616 / q;
    const double C90589 = C55634 / q;
    const double C16202 = (3 * C55112) / C54432 -
                          (C56085 * be + C55148 * C90946) / q + C90615 -
                          (C56090 * p) / q;
    const double C16346 = (3 * C55600) / C54432 -
                          (C56323 * be + C55636 * C90946) / q + C90626 -
                          (C56328 * p) / q;
    const double C90630 = C56564 / q;
    const double C16646 = C56800 / C54432 -
                          (C56812 * be + C55128 * C90946) / q + C90641 -
                          (C55096 * p) / q;
    const double C16656 =
        C90642 - (C56828 * be + C56800 * C90946) / q - (C55128 * p) / q;
    const double C16963 =
        C90664 - (C57285 * be + C57257 * C90946) / q - (C57290 * p) / q;
    const double C90707 = C57307 / q;
    const double C16964 =
        C90665 - (C57302 * be + C57273 * C90946) / q - (C57307 * p) / q;
    const double C17251 =
        C90679 - (C57767 * be + C57739 * C90946) / q - (C57772 * p) / q;
    const double C90716 = C57789 / q;
    const double C17252 =
        C90680 - (C57784 * be + C57755 * C90946) / q - (C57789 * p) / q;
    const double C17530 = C57273 / C54432 -
                          (C58238 * be + C57307 * C90946) / q + C90708 -
                          (C58243 * p) / q;
    const double C17674 = C57755 / C54432 -
                          (C58476 * be + C57789 * C90946) / q + C90717 -
                          (C58481 * p) / q;
    const double C17818 =
        C90720 - (C58712 * be + C58700 * C90946) / q - (C58717 * p) / q;
    const double C17974 = C58949 / C54432 -
                          (C58961 * be + C55616 * C90946) / q + C90724 -
                          (C55584 * p) / q;
    const double C17984 =
        C90725 - (C58977 * be + C58949 * C90946) / q - (C55616 * p) / q;
    const double C90761 = C59419 / q;
    const double C18290 =
        C90746 - (C59414 * be + C59402 * C90946) / q - (C59419 * p) / q;
    const double C18563 =
        C90752 - (C59662 * be + C59634 * C90946) / q - (C59667 * p) / q;
    const double C90770 = C59684 / q;
    const double C18564 =
        C90753 - (C59679 * be + C59650 * C90946) / q - (C59684 * p) / q;
    const double C18842 = C59402 / C54432 -
                          (C60129 * be + C59419 * C90946) / q + C90762 -
                          (C60134 * p) / q;
    const double C18986 = C59650 / C54432 -
                          (C60367 * be + C59684 * C90946) / q + C90771 -
                          (C60372 * p) / q;
    const double C19130 =
        C90777 - (C60604 * be + C60592 * C90946) / q - (C60609 * p) / q;
    const double C19294 = C60842 / C54432 -
                          (C60838 * be + C55146 * C90946) / q + C90780 -
                          (C55112 * p) / q;
    const double C56861 =
        C90830 - (C63433 * be + C60842 * C90946) / q - (C55146 * p) / q;
    const double C19714 = C61072 / C54432 -
                          (C61068 * be + C56564 * C90946) / q + C90792 -
                          (C56548 * p) / q;
    const double C20814 =
        C90800 - (C61528 * be + C61072 * C90946) / q - (C56564 * p) / q;
    const double C19998 = C61301 / C54432 -
                          (C61297 * be + C55634 * C90946) / q + C90794 -
                          (C55600 * p) / q;
    const double C59038 =
        C90851 - (C64574 * be + C61301 * C90946) / q - (C55634 * p) / q;
    const double C54370 = (5 * C54369) / C54432 -
                          (C61758 * be + C54418 * C90946) / q + C90801 -
                          (C61762 * p) / q;
    const double C54400 = C61792 / C54432 -
                          (C61788 * be + C54451 * C90946) / q + C90802 -
                          (C54401 * p) / q;
    const double C54467 = (2 * C55148) / q -
                          (C61851 * be + C56090 * C90946) / q + C90804 -
                          (C61856 * p) / q;
    const double C54510 = (2 * C55636) / q -
                          (C61868 * be + C56328 * C90946) / q + C90805 -
                          (C61873 * p) / q;
    const double C55097 = (3 * C55096) / C54432 -
                          (C62321 * be + C55130 * C90946) / q + C90827 -
                          (C62325 * p) / q;
    const double C55585 = (3 * C55584) / C54432 -
                          (C62741 * be + C55618 * C90946) / q + C90848 -
                          (C62745 * p) / q;
    const double C56119 = (3 * C56548) / C54432 -
                          (C63186 * be + C56566 * C90946) / q + C90865 -
                          (C63190 * p) / q;
    const double C57258 = C57257 / C54432 -
                          (C63633 * be + C57290 * C90946) / q + C90875 -
                          (C63637 * p) / q;
    const double C57322 =
        C90876 - (C63694 * be + C63699 * C90946) / q - (C63700 * p) / q;
    const double C57351 =
        C90877 - (C63712 * be + C63717 * C90946) / q - (C63718 * p) / q;
    const double C57740 = C57739 / C54432 -
                          (C63968 * be + C57772 * C90946) / q + C90885 -
                          (C63972 * p) / q;
    const double C57804 =
        C90886 - (C64029 * be + C64033 * C90946) / q - (C64034 * p) / q;
    const double C57833 =
        C90887 - (C64046 * be + C64051 * C90946) / q - (C64052 * p) / q;
    const double C58272 = C58700 / C54432 -
                          (C64384 * be + C58717 * C90946) / q + C90901 -
                          (C64388 * p) / q;
    const double C59635 = C59634 / C54432 -
                          (C64776 * be + C59667 * C90946) / q + C90906 -
                          (C64780 * p) / q;
    const double C59699 =
        C90907 - (C64837 * be + C64841 * C90946) / q - (C64842 * p) / q;
    const double C59728 =
        C90908 - (C64854 * be + C64859 * C90946) / q - (C64860 * p) / q;
    const double C60163 = C60592 / C54432 -
                          (C65137 * be + C60609 * C90946) / q + C90913 -
                          (C65141 * p) / q;
    const double C31901 = (3 * C66603) / C54432 - (C66587 * C90946) / q +
                          C91116 - (C66571 * p) / q;
    const double C31900 =
        (2 * C66587) / q - (C66571 * C90946) / q + C91115 - (C66619 * p) / q;
    const double C31910 =
        C66649 / q - (C66603 * C90946) / q + C91117 - (C66587 * p) / q;
    const double C91149 = C67332 / q;
    const double C91189 = C67810 / q;
    const double C32770 = (3 * C67300) / C54432 - (C67334 * C90946) / q +
                          C91215 - (C68257 * p) / q;
    const double C32914 = (3 * C67778) / C54432 - (C67812 * C90946) / q +
                          C91226 - (C68488 * p) / q;
    const double C91230 = C68717 / q;
    const double C35826 =
        C72902 / C54432 - (C67332 * C90946) / q + C91380 - (C67300 * p) / q;
    const double C69007 = C91430 - (C72902 * C90946) / q - (C67332 * p) / q;
    const double C36218 =
        C73129 / C54432 - (C68717 * C90946) / q + C91392 - (C68702 * p) / q;
    const double C37282 = C91400 - (C73129 * C90946) / q - (C68717 * p) / q;
    const double C36498 =
        C73355 / C54432 - (C67810 * C90946) / q + C91394 - (C67778 * p) / q;
    const double C71137 = C91451 - (C73355 * C90946) / q - (C67810 * p) / q;
    const double C66572 = (5 * C66571) / C54432 - (C66619 * C90946) / q +
                          C91401 - (C73809 * p) / q;
    const double C66602 =
        C73837 / C54432 - (C66649 * C90946) / q + C91402 - (C66603 * p) / q;
    const double C66665 =
        (2 * C67334) / q - (C68257 * C90946) / q + C91404 - (C73897 * p) / q;
    const double C66708 =
        (2 * C67812) / q - (C68488 * C90946) / q + C91405 - (C73913 * p) / q;
    const double C68286 = (3 * C68702) / C54432 - (C68719 * C90946) / q +
                          C91465 - (C75224 * p) / q;
    const double C48357 = (3 * C78599) / C54432 - (C78583 * C90946) / q +
                          C91713 - (C78567 * p) / q;
    const double C48356 =
        (2 * C78583) / q - (C78567 * C90946) / q + C91712 - (C78615 * p) / q;
    const double C48366 =
        C78645 / q - (C78599 * C90946) / q + C91714 - (C78583 * p) / q;
    const double C91746 = C79328 / q;
    const double C91786 = C79806 / q;
    const double C49226 = (3 * C79296) / C54432 - (C79330 * C90946) / q +
                          C91812 - (C80253 * p) / q;
    const double C49370 = (3 * C79774) / C54432 - (C79808 * C90946) / q +
                          C91823 - (C80484 * p) / q;
    const double C91827 = C80713 / q;
    const double C52266 =
        C84898 / C54432 - (C79328 * C90946) / q + C91977 - (C79296 * p) / q;
    const double C81003 = C92027 - (C84898 * C90946) / q - (C79328 * p) / q;
    const double C52658 =
        C85125 / C54432 - (C80713 * C90946) / q + C91989 - (C80698 * p) / q;
    const double C53722 = C91997 - (C85125 * C90946) / q - (C80713 * p) / q;
    const double C52938 =
        C85351 / C54432 - (C79806 * C90946) / q + C91991 - (C79774 * p) / q;
    const double C83133 = C92048 - (C85351 * C90946) / q - (C79806 * p) / q;
    const double C78568 = (5 * C78567) / C54432 - (C78615 * C90946) / q +
                          C91998 - (C85805 * p) / q;
    const double C78598 =
        C85833 / C54432 - (C78645 * C90946) / q + C91999 - (C78599 * p) / q;
    const double C78661 =
        (2 * C79330) / q - (C80253 * C90946) / q + C92001 - (C85893 * p) / q;
    const double C78704 =
        (2 * C79808) / q - (C80484 * C90946) / q + C92002 - (C85909 * p) / q;
    const double C80282 = (3 * C80698) / C54432 - (C80715 * C90946) / q +
                          C92062 - (C87206 * p) / q;
    const double C91495 = C76326 * p;
    const double C71936 =
        C91508 - (C76975 * be + C76980 * C90947) / q - (C76981 * p) / q;
    const double C71846 =
        C91506 - (C76887 * be + C72082 * C90947) / q - (C76892 * p) / q;
    const double C91490 = C76222 * p;
    const double C69696 = C91476 - (C69841 * C90948) / q - (C75895 * p) / q;
    const double C91478 = C75836 * p;
    const double C91459 = C75137 * p;
    const double C71817 = C91508 - (C76875 * C90946) / q - (C76876 * p) / q;
    const double C71788 = C91507 - (C76858 * C90946) / q - (C76859 * p) / q;
    const double C91456 = C75049 * p;
    const double C91440 = C74638 * p;
    const double C67975 =
        C91453 - (C74985 * be + C72601 * C90947) / q - (C74990 * p) / q;
    const double C69962 = C91487 - (C76074 * C90946) / q - (C76075 * p) / q;
    const double C91439 = C74623 * p;
    const double C69933 = C91486 - (C76057 * C90946) / q - (C76058 * p) / q;
    const double C91435 = C74564 * p;
    const double C67885 =
        C91448 - (C74897 * be + C68122 * C90947) / q - (C74902 * p) / q;
    const double C69490 = C91477 - (C75743 * C90946) / q - (C75744 * p) / q;
    const double C69461 = C91476 - (C75726 * C90946) / q - (C75727 * p) / q;
    const double C91418 = C74192 * p;
    const double C66929 = C91401 - (C67195 * C90948) / q - (C74077 * p) / q;
    const double C66886 =
        C91405 - (C74057 * be + C68644 * C90947) / q - (C74062 * p) / q;
    const double C66751 =
        C91401 - (C73924 * be + C67107 * C90947) / q - (C73929 * p) / q;
    const double C91304 = C70318 * p;
    const double C91302 = C70288 * p;
    const double C91373 = C72502 * p;
    const double C72300 = C72097 / C54432 -
                          (C77170 * be + C72502 * C90947) / q + C91513 -
                          (C77175 * p) / q;
    const double C91300 = C70229 * p;
    const double C91313 = C70478 * p;
    const double C35171 =
        C91352 - (C59992 * be + C71875 * C90947) / q - (C71876 * p) / q;
    const double C71907 = C71875 / C54432 -
                          (C76959 * be + C71876 * C90947) / q + C91507 -
                          (C76964 * p) / q;
    const double C91295 = C70141 * p;
    const double C91378 = C71892 / q;
    const double C35172 =
        C91353 - (C60008 * be + C71891 * C90947) / q - (C71892 * p) / q;
    const double C91294 = C70142 * p;
    const double C70200 = (3 * C70141) / C54432 - (C70142 * C90948) / q +
                          C91487 - (C76281 * p) / q;
    const double C91321 = C69681 / q;
    const double C91273 = C69681 * p;
    const double C91272 = C69666 * p;
    const double C69725 =
        C69665 / C54432 - (C69666 * C90948) / q + C91477 - (C75910 * p) / q;
    const double C70054 = (3 * C70021) / C54432 -
                          (C76186 * be + C70022 * C90947) / q + C91486 -
                          (C76191 * p) / q;
    const double C91293 = C69211 / q;
    const double C91255 = C69211 * p;
    const double C91286 = C70020 / q;
    const double C34604 =
        C91325 - (C59297 * be + C71195 * C90947) / q - (C70020 * p) / q;
    const double C91319 = C69195 / q;
    const double C91254 = C69195 * p;
    const double C91364 = C71180 / q;
    const double C91331 = C71180 * p;
    const double C91214 = C68213 * p;
    const double C35666 = C91377 - (C72659 * C90946) / q - (C72675 * p) / q;
    const double C72243 =
        C72659 / C54432 - (C72675 * C90946) / q + C91513 - (C77159 * p) / q;
    const double C91212 = C68183 * p;
    const double C91221 = C68372 * p;
    const double C35099 = C91352 - (C71725 * C90946) / q - (C71757 * p) / q;
    const double C71726 =
        C71725 / C54432 - (C71757 * C90946) / q + C91506 - (C76801 * p) / q;
    const double C91205 = C68033 * p;
    const double C91370 = C71773 / q;
    const double C35100 = C91353 - (C71741 * C90946) / q - (C71773 * p) / q;
    const double C35522 =
        C71741 / C54432 - (C71773 * C90946) / q + C91371 - (C72445 * p) / q;
    const double C91204 = C68034 * p;
    const double C68092 = (3 * C68033) / C54432 - (C68034 * C90948) / q +
                          C91453 - (C75064 * p) / q;
    const double C91233 = C68776 * p;
    const double C34370 = C91320 - (C70807 * C90946) / q - (C70823 * p) / q;
    const double C70392 =
        C70807 / C54432 - (C70823 * C90946) / q + C91501 - (C76413 * p) / q;
    const double C91227 = C68545 * p;
    const double C68343 = C68138 / C54432 -
                          (C75235 * be + C68545 * C90947) / q + C91465 -
                          (C75240 * p) / q;
    const double C91177 = C67643 * p;
    const double C91236 = C67569 / q;
    const double C91169 = C67569 * p;
    const double C91361 = C71513 / q;
    const double C34812 = C91346 - (C71497 * C90946) / q - (C71513 * p) / q;
    const double C35378 =
        C71497 / C54432 - (C71513 * C90946) / q + C91362 - (C72214 * p) / q;
    const double C91168 = C67554 * p;
    const double C91196 = C67915 * p;
    const double C67946 = C67914 / C54432 -
                          (C74969 * be + C67915 * C90947) / q + C91452 -
                          (C74974 * p) / q;
    const double C33803 = C91279 - (C69870 * C90946) / q - (C69902 * p) / q;
    const double C69871 =
        C69870 / C54432 - (C69902 * C90946) / q + C91485 - (C76000 * p) / q;
    const double C91234 = C67931 / q;
    const double C91197 = C67931 * p;
    const double C91316 = C69918 / q;
    const double C33804 = C91280 - (C69886 * C90946) / q - (C69918 * p) / q;
    const double C34226 =
        C69886 / C54432 - (C69918 * C90946) / q + C91317 - (C70594 * p) / q;
    const double C33501 = C91264 - (C69398 * C90946) / q - (C69430 * p) / q;
    const double C69399 =
        C69398 / C54432 - (C69430 * C90946) / q + C91475 - (C75668 * p) / q;
    const double C91160 = C67436 * p;
    const double C91307 = C69446 / q;
    const double C33502 = C91265 - (C69414 * C90946) / q - (C69446 * p) / q;
    const double C34082 =
        C69414 / C54432 - (C69446 * C90946) / q + C91308 - (C70363 * p) / q;
    const double C91159 = C67437 * p;
    const double C67466 = (3 * C67436) / C54432 -
                          (C74528 * be + C67437 * C90947) / q + C91431 -
                          (C74533 * p) / q;
    const double C91203 = C67006 / q;
    const double C91135 = C67006 * p;
    const double C91187 = C67793 / q;
    const double C34532 = C91325 - (C71050 * C90946) / q - (C67793 * p) / q;
    const double C91228 = C66990 / q;
    const double C91134 = C66990 * p;
    const double C34523 =
        C71050 / C54432 - (C67793 * C90946) / q + C91324 - (C67762 * p) / q;
    const double C91133 = C66974 * p;
    const double C67763 = (3 * C67762) / C54432 - (C67795 * C90946) / q +
                          C91448 - (C74784 * p) / q;
    const double C91158 = C66828 / q;
    const double C91126 = C66828 * p;
    const double C91147 = C67315 / q;
    const double C33220 = C91242 - (C68948 * C90946) / q - (C67315 * p) / q;
    const double C91219 = C66812 / q;
    const double C91125 = C66812 * p;
    const double C33211 =
        C68948 / C54432 - (C67315 * C90946) / q + C91241 - (C67284 * p) / q;
    const double C91124 = C66796 * p;
    const double C66843 = C66795 / C54432 -
                          (C74041 * be + C66796 * C90947) / q + C91404 -
                          (C74046 * p) / q;
    const double C67285 = (3 * C67284) / C54432 - (C67317 * C90946) / q +
                          C91427 - (C74369 * p) / q;
    const double C92092 = C88299 * p;
    const double C83932 = C92105 - (C88945 * C90947) / q - (C88946 * p) / q;
    const double C83842 = C92103 - (C84078 * C90947) / q - (C88859 * p) / q;
    const double C92087 = C88194 * p;
    const double C81692 =
        C92073 - (C87864 * be + C81837 * C90948) / q - (C87870 * p) / q;
    const double C92075 = C87810 * p;
    const double C92056 = C87119 * p;
    const double C83813 = C92105 - (C88843 * C90946) / q - (C88844 * p) / q;
    const double C83784 = C92104 - (C88826 * C90946) / q - (C88827 * p) / q;
    const double C92053 = C87032 * p;
    const double C92037 = C86625 * p;
    const double C79971 = C92050 - (C84597 * C90947) / q - (C86973 * p) / q;
    const double C81958 = C92084 - (C88049 * C90946) / q - (C88050 * p) / q;
    const double C92036 = C86610 * p;
    const double C81929 = C92083 - (C88032 * C90946) / q - (C88033 * p) / q;
    const double C92032 = C86551 * p;
    const double C79881 = C92045 - (C80118 * C90947) / q - (C86887 * p) / q;
    const double C81486 = C92074 - (C87720 * C90946) / q - (C87721 * p) / q;
    const double C81457 = C92073 - (C87703 * C90946) / q - (C87704 * p) / q;
    const double C92015 = C86184 * p;
    const double C78925 =
        C91998 - (C74247 * be + C79191 * C90948) / q - (C86069 * p) / q;
    const double C78882 = C92002 - (C80640 * C90947) / q - (C86054 * p) / q;
    const double C78747 = C91998 - (C79103 * C90947) / q - (C85924 * p) / q;
    const double C91901 = C82314 * p;
    const double C91899 = C82284 * p;
    const double C91970 = C84498 * p;
    const double C84296 =
        C84093 / C54432 - (C84498 * C90947) / q + C92110 - (C89140 * p) / q;
    const double C91897 = C82225 * p;
    const double C91910 = C82474 * p;
    const double C51601 = C91949 - (C83871 * C90947) / q - (C83872 * p) / q;
    const double C83903 =
        C83871 / C54432 - (C83872 * C90947) / q + C92104 - (C88930 * p) / q;
    const double C91892 = C82137 * p;
    const double C91975 = C83888 / q;
    const double C51602 = C91950 - (C83887 * C90947) / q - (C83888 * p) / q;
    const double C91891 = C82138 * p;
    const double C82196 = (3 * C82137) / C54432 -
                          (C88249 * be + C82138 * C90948) / q + C92084 -
                          (C88255 * p) / q;
    const double C91918 = C81677 / q;
    const double C91870 = C81677 * p;
    const double C91869 = C81662 * p;
    const double C81721 = C81661 / C54432 -
                          (C87880 * be + C81662 * C90948) / q + C92074 -
                          (C87886 * p) / q;
    const double C82050 = (3 * C82017) / C54432 - (C82018 * C90947) / q +
                          C92083 - (C88164 * p) / q;
    const double C91890 = C81207 / q;
    const double C91852 = C81207 * p;
    const double C91883 = C82016 / q;
    const double C51044 = C91922 - (C83191 * C90947) / q - (C82016 * p) / q;
    const double C91916 = C81191 / q;
    const double C91851 = C81191 * p;
    const double C91961 = C83176 / q;
    const double C91928 = C83176 * p;
    const double C91811 = C80209 * p;
    const double C52106 = C91974 - (C84655 * C90946) / q - (C84671 * p) / q;
    const double C84239 =
        C84655 / C54432 - (C84671 * C90946) / q + C92110 - (C89125 * p) / q;
    const double C91809 = C80179 * p;
    const double C91818 = C80368 * p;
    const double C51525 = C91949 - (C83721 * C90946) / q - (C83753 * p) / q;
    const double C83722 =
        C83721 / C54432 - (C83753 * C90946) / q + C92103 - (C88769 * p) / q;
    const double C91802 = C80029 * p;
    const double C91967 = C83769 / q;
    const double C51526 = C91950 - (C83737 * C90946) / q - (C83769 * p) / q;
    const double C51962 =
        C83737 / C54432 - (C83769 * C90946) / q + C91968 - (C84441 * p) / q;
    const double C91801 = C80030 * p;
    const double C80088 = (3 * C80029) / C54432 -
                          (C77271 * be + C80030 * C90948) / q + C92050 -
                          (C87047 * p) / q;
    const double C91830 = C80772 * p;
    const double C50810 = C91917 - (C82803 * C90946) / q - (C82819 * p) / q;
    const double C82388 =
        C82803 / C54432 - (C82819 * C90946) / q + C92098 - (C88386 * p) / q;
    const double C91824 = C80541 * p;
    const double C80339 =
        C80134 / C54432 - (C80541 * C90947) / q + C92062 - (C87221 * p) / q;
    const double C91774 = C79639 * p;
    const double C91833 = C79565 / q;
    const double C91766 = C79565 * p;
    const double C91958 = C83509 / q;
    const double C51250 = C91943 - (C83493 * C90946) / q - (C83509 * p) / q;
    const double C51818 =
        C83493 / C54432 - (C83509 * C90946) / q + C91959 - (C84210 * p) / q;
    const double C91765 = C79550 * p;
    const double C91793 = C79911 * p;
    const double C79942 =
        C79910 / C54432 - (C79911 * C90947) / q + C92049 - (C86958 * p) / q;
    const double C50243 = C91876 - (C81866 * C90946) / q - (C81898 * p) / q;
    const double C81867 =
        C81866 / C54432 - (C81898 * C90946) / q + C92082 - (C87975 * p) / q;
    const double C91831 = C79927 / q;
    const double C91794 = C79927 * p;
    const double C91913 = C81914 / q;
    const double C50244 = C91877 - (C81882 * C90946) / q - (C81914 * p) / q;
    const double C50666 =
        C81882 / C54432 - (C81914 * C90946) / q + C91914 - (C82590 * p) / q;
    const double C49955 = C91861 - (C81394 * C90946) / q - (C81426 * p) / q;
    const double C81395 =
        C81394 / C54432 - (C81426 * C90946) / q + C92072 - (C87645 * p) / q;
    const double C91757 = C79432 * p;
    const double C91904 = C81442 / q;
    const double C49956 = C91862 - (C81410 * C90946) / q - (C81442 * p) / q;
    const double C50522 =
        C81410 / C54432 - (C81442 * C90946) / q + C91905 - (C82359 * p) / q;
    const double C91756 = C79433 * p;
    const double C79462 = (3 * C79432) / C54432 - (C79433 * C90947) / q +
                          C92028 - (C86521 * p) / q;
    const double C91800 = C79002 / q;
    const double C91732 = C79002 * p;
    const double C91784 = C79789 / q;
    const double C50972 = C91922 - (C83046 * C90946) / q - (C79789 * p) / q;
    const double C91825 = C78986 / q;
    const double C91731 = C78986 * p;
    const double C50963 =
        C83046 / C54432 - (C79789 * C90946) / q + C91921 - (C79758 * p) / q;
    const double C91730 = C78970 * p;
    const double C79759 = (3 * C79758) / C54432 - (C79791 * C90946) / q +
                          C92045 - (C86770 * p) / q;
    const double C91755 = C78824 / q;
    const double C91723 = C78824 * p;
    const double C91744 = C79311 / q;
    const double C49676 = C91839 - (C80944 * C90946) / q - (C79311 * p) / q;
    const double C91816 = C78808 / q;
    const double C91722 = C78808 * p;
    const double C49667 =
        C80944 / C54432 - (C79311 * C90946) / q + C91838 - (C79280 * p) / q;
    const double C91721 = C78792 * p;
    const double C78839 =
        C78791 / C54432 - (C78792 * C90947) / q + C92001 - (C86039 * p) / q;
    const double C79281 = (3 * C79280) / C54432 - (C79313 * C90946) / q +
                          C92024 - (C86359 * p) / q;
    const double C54868 =
        C90819 - (C54778 * C90948) / q + C90805 - (C62163 * p) / q;
    const double C56267 = C90819 - (C55050 * C90947) / q - (C63248 * p) / q;
    const double C90955 = C90533 / q;
    const double C55830 =
        C90628 - (C56013 * C90948) / q + C90848 - (C62970 * p) / q;
    const double C90956 = C90534 / q;
    const double C90957 = C90535 / q;
    const double C15597 = -(C54777 * C90947 + C90542) / q;
    const double C16319 = (3 * C55080) / C54432 -
                          (C56279 * be + C55065 * C90946) / q - C90542 / q;
    const double C55492 = C90623 - (C55523 * C90947) / q - (C62656 * p) / q;
    const double C15598 = -(C54793 * C90947 + C90543) / q;
    const double C15608 = -(C54809 * C90947 + C90544) / q;
    const double C90979 = C90584 / q;
    const double C90970 = C90568 / q;
    const double C90971 = C90569 / q;
    const double C16176 = -(C54810 * C90947 + C90569) / q;
    const double C16916 = -(C57207 * be + C57064 * C90946 + C90661) / q;
    const double C19560 = C90791 - (C55539 * C90947) / q - C90661 / q;
    const double C90977 = C90580 / q;
    const double C15870 =
        C90581 - (C55535 * be + C55080 * C90946) / q - C90543 / q;
    const double C90978 = C90582 / q;
    const double C90992 = C90605 / q;
    const double C90991 = C90604 / q;
    const double C18244 = -(C59355 * be + C59212 * C90946 + C90743) / q;
    const double C20150 = C90791 - (C56029 * C90948) / q + C90794 - C90743 / q;
    const double C90995 = C90612 / q;
    const double C90788 = C54762 / C54432;
    const double C91004 = C90614 / q;
    const double C16175 = -(C55859 * C90947 + C90614) / q;
    const double C90996 = C90621 / q;
    const double C16472 = -(C54794 * C90947 + C90621) / q;
    const double C19446 = C90780 - (C55539 * C90948) / q - C90787 / q;
    const double C20264 = -(C56029 * C90947 + C90787) / q;
    const double C21061 = -(C61713 * be + C58211 * C90946 + C90787) / q;
    const double C91008 = C90654 / q;
    const double C17486 = -(C58177 * be + C57065 * C90946 + C90654) / q;
    const double C91009 = C90655 / q;
    const double C16926 = C90581 - (C55522 * C90947) / q - C90662 / q;
    const double C17198 = -(C57691 * be + C57241 * C90946 + C90662) / q;
    const double C19541 =
        C90790 - (C61025 * be + C55539 * C90946) / q - C90544 / q;
    const double C91013 = C90672 / q;
    const double C58044 =
        C90721 - (C58196 * C90948) / q + C90886 - (C64240 * p) / q;
    const double C91014 = C90673 / q;
    const double C17197 = -(C57675 * be + C57528 * C90946 + C90677) / q;
    const double C17656 =
        (3 * C55522) / C54432 - (C57225 * C90947) / q - C90677 / q;
    const double C91026 = C90695 / q;
    const double C91025 = C90694 / q;
    const double C91035 = C90702 / q;
    const double C17485 = -(C58161 * be + C58014 * C90946 + C90702) / q;
    const double C18264 = -(C59212 * C90947 + C90745) / q;
    const double C20966 = C90790 - (C58211 * C90948) / q + C90800 - C90745 / q;
    const double C91030 = C90704 / q;
    const double C57094 = C90830 - (C57240 * C90948) / q - C90871 / q;
    const double C61473 = -(C59211 * C90947 + C90871) / q;
    const double C91031 = C90713 / q;
    const double C17935 = -(C58903 * be + C57544 * C90946 + C90713) / q;
    const double C18134 = C90613 - (C56012 * C90948) / q + C90724 - C90737 / q;
    const double C18798 = -(C60070 * be + C59213 * C90946 + C90737) / q;
    const double C90735 = C18144 / C54432;
    const double C18254 = -(C56012 * C90947 + C90744) / q;
    const double C18511 = -(C59601 * be + C58195 * C90946 + C90744) / q;
    const double C19850 =
        C55539 / C54432 - (C56757 * C90948) / q + C90792 - C90744 / q;
    const double C18426 = C90705 - (C58195 * C90948) / q + C90746 - C90749 / q;
    const double C18816 = -(C59213 * C90947 + C90749) / q;
    const double C90774 = C18708 / C54432;
    const double C18744 = (3 * C18144) / C54432 - (C18708 * C90948) / q +
                          C59213 / q - (C18707 * p) / q;
    const double C18797 = -(C60054 * be + C59907 * C90946 + C90759) / q;
    const double C19058 =
        (3 * C56012) / C54432 - (C59196 * C90948) / q + C90771 - C90759 / q;
    const double C18815 = -(C59907 * C90947 + C90760) / q;
    const double C19202 =
        (3 * C58195) / C54432 - (C59532 * C90948) / q + C90777 - C90760 / q;
    const double C18914 = C90638 - (C59373 * C90948) / q + C90762 - C90766 / q;
    const double C19112 = -(C59196 * C90947 + C90766) / q;
    const double C19247 = -(C60795 * be + C59532 * C90946 + C90766) / q;
    const double C54825 = C90804 - (C55050 * C90948) / q - C90818 / q;
    const double C56503 = -(C54778 * C90947 + C90818) / q;
    const double C91056 = C90835 / q;
    const double C91059 = C90839 / q;
    const double C91060 = C90840 / q;
    const double C55889 = C90636 - (C56044 * C90948) / q + C90852 - C90856 / q;
    const double C60547 = -(C55860 * C90947 + C90856) / q;
    const double C90607 = C55918 * p;
    const double C55982 = -(C56013 * C90947 + C90859) / q;
    const double C56236 =
        C55065 / C54432 - (C56207 * C90948) / q + C90865 - C90859 / q;
    const double C91073 = C90878 / q;
    const double C90674 = C57588 * p;
    const double C17179 = -(C57645 * be + C17215 * C90946 + C57649 * p) / q;
    const double C91077 = C90890 / q;
    const double C90698 = C58073 * p;
    const double C91081 = C90895 / q;
    const double C59270 =
        C90903 - (C59211 * C90948) / q + C90851 - (C59212 * p) / q;
    const double C61013 = C90903 - (C57240 * C90947) / q - (C57064 * p) / q;
    const double C90757 = C59878 * p;
    const double C90758 = C59937 * p;
    const double C18743 = (2 * C18708) / q - (C18707 * C90948) / q +
                          C59907 / q - (C59966 * p) / q;
    const double C60028 = -(C60058 * C90947 + C90910) / q;
    const double C60280 =
        (3 * C59373) / C54432 - (C60251 * C90948) / q + C90913 - C90910 / q;
    const double C67064 =
        C91419 - (C66974 * C90948) / q + C91405 - (C74207 * p) / q;
    const double C68430 =
        C91419 - (C75279 * be + C67239 * C90947) / q - (C75284 * p) / q;
    const double C32166 = -(C55000 * be + C66973 * C90947 + C91142) / q;
    const double C32887 =
        (3 * C67269) / C54432 - (C67254 * C90946) / q - C91142 / q;
    const double C67673 =
        C91223 - (C74692 * be + C67703 * C90947) / q - (C74697 * p) / q;
    const double C32167 = -(C55016 * be + C66989 * C90947 + C91143) / q;
    const double C32176 = -(C55031 * be + C67005 * C90947 + C91144) / q;
    const double C91576 = C91184 / q;
    const double C33454 = -(C69210 * C90946 + C91261) / q;
    const double C36064 =
        C91391 - (C61025 * be + C67718 * C90947) / q - C91261 / q;
    const double C91574 = C91180 / q;
    const double C32438 = C91181 - (C67269 * C90946) / q - C91143 / q;
    const double C91575 = C91182 / q;
    const double C34766 = -(C71311 * C90946 + C91343) / q;
    const double C36634 = C91391 - (C68198 * C90948) / q + C91394 - C91343 / q;
    const double C91388 = C66958 / C54432;
    const double C35962 = C91380 - (C67718 * C90948) / q - C91387 / q;
    const double C36736 = -(C61485 * be + C68198 * C90947 + C91387) / q;
    const double C37503 = -(C70333 * C90946 + C91387) / q;
    const double C33463 =
        C91181 - (C57192 * be + C67702 * C90947) / q - C91262 / q;
    const double C33749 = -(C69383 * C90946 + C91262) / q;
    const double C36047 = C91390 - (C67718 * C90946) / q - C91144 / q;
    const double C33748 = -(C69665 * C90946 + C91277) / q;
    const double C34208 = (3 * C67702) / C54432 -
                          (C58432 * be + C69367 * C90947) / q - C91277 / q;
    const double C34784 = -(C59355 * be + C71311 * C90947 + C91345) / q;
    const double C37418 = C91390 - (C70333 * C90948) / q + C91400 - C91345 / q;
    const double C69240 = C91430 - (C69382 * C90948) / q - C91471 / q;
    const double C73526 = -(C77413 * be + C71310 * C90947 + C91471) / q;
    const double C34667 = C91213 - (C68182 * C90948) / q + C91324 - C91337 / q;
    const double C35334 = -(C71312 * C90946 + C91337) / q;
    const double C91335 = C34676 / C54432;
    const double C34775 = -(C59340 * be + C68182 * C90947 + C91344) / q;
    const double C35046 = -(C70317 * C90946 + C91344) / q;
    const double C36354 =
        C67718 / C54432 - (C68905 * C90948) / q + C91392 - C91344 / q;
    const double C34956 = C91305 - (C70317 * C90948) / q + C91346 - C91349 / q;
    const double C35352 = -(C60070 * be + C71312 * C90947 + C91349) / q;
    const double C91374 = C35244 / C54432;
    const double C35280 = (3 * C34676) / C54432 - (C35244 * C90948) / q +
                          C71312 / q - (C35243 * p) / q;
    const double C35333 = -(C71994 * C90946 + C91359) / q;
    const double C35594 =
        (3 * C68182) / C54432 - (C71295 * C90948) / q + C91371 - C91359 / q;
    const double C35351 = -(C60054 * be + C71994 * C90947 + C91360) / q;
    const double C35738 =
        (3 * C70317) / C54432 - (C71626 * C90948) / q + C91377 - C91360 / q;
    const double C35450 = C91238 - (C71468 * C90948) / q + C91362 - C91366 / q;
    const double C35648 = -(C60559 * be + C71295 * C90947 + C91366) / q;
    const double C35783 = -(C71626 * C90946 + C91366) / q;
    const double C33729 = -(C33767 * C90946 + C69783 * p) / q;
    const double C71369 =
        C91503 - (C71310 * C90948) / q + C91451 - (C71311 * p) / q;
    const double C73072 =
        C91503 - (C77356 * be + C69382 * C90947) / q - (C69210 * p) / q;
    const double C91357 = C71965 * p;
    const double C91358 = C72024 * p;
    const double C35279 = (2 * C35244) / q - (C35243 * C90948) / q +
                          C71994 / q - (C72053 * p) / q;
    const double C72112 = -(C77095 * be + C72141 * C90947 + C91510) / q;
    const double C72358 =
        (3 * C71468) / C54432 - (C72329 * C90948) / q + C91513 - C91510 / q;
    const double C79060 = C92016 - (C75337 * be + C78970 * C90948) / q +
                          C92002 - (C86199 * p) / q;
    const double C80426 = C92016 - (C79235 * C90947) / q - (C87264 * p) / q;
    const double C48622 = -(C78969 * C90947 + C91739) / q;
    const double C49343 =
        (3 * C79265) / C54432 - (C79250 * C90946) / q - C91739 / q;
    const double C79669 = C91820 - (C79699 * C90947) / q - (C86683 * p) / q;
    const double C48623 = -(C78985 * C90947 + C91740) / q;
    const double C48632 = -(C79001 * C90947 + C91741) / q;
    const double C92173 = C91781 / q;
    const double C49910 = -(C81206 * C90946 + C91858) / q;
    const double C52504 = C91988 - (C79714 * C90947) / q - C91858 / q;
    const double C92171 = C91777 / q;
    const double C48894 = C91778 - (C79265 * C90946) / q - C91740 / q;
    const double C92172 = C91779 / q;
    const double C51206 = -(C83307 * C90946 + C91940) / q;
    const double C53074 =
        C91988 - (C61485 * be + C80194 * C90948) / q + C91991 - C91940 / q;
    const double C91985 = C78954 / C54432;
    const double C52402 =
        C91977 - (C61025 * be + C79714 * C90948) / q - C91984 / q;
    const double C53176 = -(C80194 * C90947 + C91984) / q;
    const double C53943 = -(C82329 * C90946 + C91984) / q;
    const double C49919 = C91778 - (C79698 * C90947) / q - C91859 / q;
    const double C50190 = -(C81379 * C90946 + C91859) / q;
    const double C52487 = C91987 - (C79714 * C90946) / q - C91741 / q;
    const double C50189 = -(C81661 * C90946 + C91874) / q;
    const double C50648 =
        (3 * C79698) / C54432 - (C81363 * C90947) / q - C91874 / q;
    const double C51224 = -(C83307 * C90947 + C91942) / q;
    const double C53858 =
        C91987 - (C61713 * be + C82329 * C90948) / q + C91997 - C91942 / q;
    const double C81236 =
        C92027 - (C77356 * be + C81378 * C90948) / q - C92068 / q;
    const double C85522 = -(C83306 * C90947 + C92068) / q;
    const double C51107 =
        C91810 - (C59340 * be + C80178 * C90948) / q + C91921 - C91934 / q;
    const double C51773 = -(C83308 * C90946 + C91934) / q;
    const double C91932 = C51116 / C54432;
    const double C51215 = -(C80178 * C90947 + C91941) / q;
    const double C51471 = -(C82313 * C90946 + C91941) / q;
    const double C52794 = C79714 / C54432 -
                          (C61254 * be + C80901 * C90948) / q + C91989 -
                          C91941 / q;
    const double C51386 =
        C91902 - (C59601 * be + C82313 * C90948) / q + C91943 - C91946 / q;
    const double C51792 = -(C83308 * C90947 + C91946) / q;
    const double C91971 = C51678 / C54432;
    const double C51716 = (3 * C51116) / C54432 -
                          (C51674 * be + C51678 * C90948) / q + C83308 / q -
                          (C51677 * p) / q;
    const double C51772 = -(C83990 * C90946 + C91956) / q;
    const double C52034 = (3 * C80178) / C54432 -
                          (C60559 * be + C83291 * C90948) / q + C91968 -
                          C91956 / q;
    const double C51791 = -(C83990 * C90947 + C91957) / q;
    const double C52178 = (3 * C82313) / C54432 -
                          (C60795 * be + C83622 * C90948) / q + C91974 -
                          C91957 / q;
    const double C51890 =
        C91835 - (C60323 * be + C83464 * C90948) / q + C91959 - C91963 / q;
    const double C52088 = -(C83291 * C90947 + C91963) / q;
    const double C52223 = -(C83622 * C90946 + C91963) / q;
    const double C50171 = -(C50207 * C90946 + C81779 * p) / q;
    const double C83365 = C92100 - (C77413 * be + C83306 * C90948) / q +
                          C92048 - (C83307 * p) / q;
    const double C85068 = C92100 - (C81378 * C90947) / q - (C81206 * p) / q;
    const double C91954 = C83961 * p;
    const double C91955 = C84020 * p;
    const double C51715 = (2 * C51678) / q -
                          (C59874 * be + C51677 * C90948) / q + C83990 / q -
                          (C84049 * p) / q;
    const double C84108 = -(C84137 * C90947 + C92107) / q;
    const double C84354 = (3 * C83464) / C54432 -
                          (C77328 * be + C84325 * C90948) / q + C92110 -
                          C92107 / q;
    const double C90949 = C90524 / q;
    const double C55222 =
        C90619 - (C55460 * C90947) / q + C90827 - (C62450 * p) / q;
    const double C90950 = C90525 / q;
    const double C90951 = C90526 / q;
    const double C90966 = C90560 / q;
    const double C90965 = C90559 / q;
    const double C16876 = -(C57149 * be + C56948 * C90946 + C90659) / q;
    const double C19370 =
        C54943 / C54432 - (C55476 * C90947) / q + C90780 - C90659 / q;
    const double C90976 = C90577 / q;
    const double C90784 = C54583 / C54432;
    const double C90984 = C90596 / q;
    const double C55310 =
        C90634 - (C56624 * C90947) / q + C90832 - (C62509 * p) / q;
    const double C90985 = C90597 / q;
    const double C16121 =
        C90609 - (C55944 * be + C55739 * C90946) / q - (C55949 * p) / q;
    const double C16122 =
        C90610 - (C55961 * be + C55755 * C90946) / q - (C55966 * p) / q;
    const double C90998 = C90627 / q;
    const double C91002 = C90633 / q;
    const double C20074 = C90794 - (C55965 * C90947) / q - C90796 / q;
    const double C21023 = -(C61684 * be + C57909 * C90946 + C90796) / q;
    const double C16726 = C90578 - (C55459 * C90947) / q + C90641 - C90648 / q;
    const double C17162 = -(C57630 * be + C56949 * C90946 + C90648) / q;
    const double C90646 = C16736 / C54432;
    const double C90710 = C17036 / C54432;
    const double C17054 = (3 * C16736) / C54432 - (C17036 * C90947) / q +
                          C56949 / q - (C17035 * p) / q;
    const double C17161 = -(C57614 * be + C57410 * C90946 + C90676) / q;
    const double C17566 =
        (3 * C55459) / C54432 - (C56932 * C90947) / q + C90708 - C90676 / q;
    const double C17323 =
        C90686 - (C57893 * C90947) / q + C90679 - (C57894 * p) / q;
    const double C17324 =
        C90687 - (C57910 * C90947) / q + C90680 - (C57911 * p) / q;
    const double C17449 = -(C58099 * be + C57893 * C90946 + C90700) / q;
    const double C18878 =
        C55948 / C54432 - (C59081 * C90947) / q + C90762 - C90700 / q;
    const double C17450 = -(C58115 * be + C57910 * C90946 + C90701) / q;
    const double C19782 =
        C55965 / C54432 - (C56725 * C90947) / q + C90792 - C90701 / q;
    const double C17710 = C90637 - (C58119 * C90947) / q + C90717 - C90718 / q;
    const double C17917 = -(C58872 * be + C57911 * C90946 + C90718) / q;
    const double C90670 = C17854 * p;
    const double C57863 =
        C90764 - (C58103 * C90947) / q + C90885 - (C64067 * p) / q;
    const double C18054 = C90724 - (C55948 * C90947) / q - C90731 / q;
    const double C18477 = -(C59572 * be + C57892 * C90946 + C90731) / q;
    const double C18194 =
        C90741 - (C59282 * be + C55948 * C90946) / q - (C55739 * p) / q;
    const double C18358 =
        C90741 - (C57892 * C90947) / q + C90746 - (C57893 * p) / q;
    const double C90729 = C18064 / C54432;
    const double C19085 =
        C90775 - (C60527 * be + C60012 * C90946) / q - (C60531 * p) / q;
    const double C19166 =
        C90775 - (C59804 * C90947) / q + C90777 - (C60667 * p) / q;
    const double C57955 =
        C90778 - (C60667 * C90947) / q + C90887 - (C64181 * p) / q;
    const double C90772 = C18636 / C54432;
    const double C18672 =
        (3 * C18064) / C54432 - (C18636 * C90948) / q - (C18635 * p) / q;
    const double C19022 = C90771 - (C60012 * C90947) / q - C90773 / q;
    const double C19229 = -(C60764 * be + C59804 * C90946 + C90773) / q;
    const double C20207 =
        C90798 - (C61454 * be + C55965 * C90946) / q - (C55755 * p) / q;
    const double C20890 =
        C90798 - (C57909 * C90947) / q + C90800 - (C57910 * p) / q;
    const double C90795 = C59153 / C54432;
    const double C18104 = C59153 / q - (C18064 * C90948) / q - (C18636 * p) / q;
    const double C90527 = C54646 * p;
    const double C90530 = C54689 * p;
    const double C90561 = C55281 * p;
    const double C90594 = C55710 * p;
    const double C90598 = C55771 * p;
    const double C90599 = C55800 * p;
    const double C90620 = C56177 * p;
    const double C90783 = C56978 / C54432;
    const double C16756 =
        C56978 / q - (C16736 * C90947) / q + C56948 / q - (C17036 * p) / q;
    const double C90668 = C57381 * p;
    const double C17053 = (2 * C17036) / q - (C17035 * C90947) / q +
                          C57410 / q - (C57440 * p) / q;
    const double C90669 = C57469 * p;
    const double C90688 = C57926 * p;
    const double C90711 = C58330 * p;
    const double C90755 = C59758 * p;
    const double C90756 = C59819 * p;
    const double C18671 =
        (2 * C18636) / q - (C18635 * C90948) / q - (C59848 * p) / q;
    const double C90765 = C60221 * p;
    const double C33418 = -(C69094 * C90946 + C91259) / q;
    const double C35894 = C67136 / C54432 -
                          (C60995 * be + C67658 * C90947) / q + C91380 -
                          C91259 / q;
    const double C91384 = C66780 / C54432;
    const double C32689 = C91209 - (C67914 * C90946) / q - (C68122 * p) / q;
    const double C32690 = C91210 - (C67930 * C90946) / q - (C68138 * p) / q;
    const double C36566 =
        C91394 - (C61454 * be + C68137 * C90947) / q - C91396 / q;
    const double C37469 = -(C70037 * C90946 + C91396) / q;
    const double C33283 =
        C91178 - (C57134 * be + C67642 * C90947) / q + C91241 - C91248 / q;
    const double C33711 = -(C69095 * C90946 + C91248) / q;
    const double C91246 = C33292 / C54432;
    const double C91310 = C33578 / C54432;
    const double C33597 = (3 * C33292) / C54432 -
                          (C33574 * be + C33578 * C90947) / q + C69095 / q -
                          (C33577 * p) / q;
    const double C33710 = -(C69548 * C90946 + C91276) / q;
    const double C34118 = (3 * C67642) / C54432 -
                          (C58401 * be + C69078 * C90947) / q + C91308 -
                          C91276 / q;
    const double C33876 = C91287 - (C58115 * be + C70038 * C90947) / q +
                          C91280 - (C70039 * p) / q;
    const double C34002 = -(C70038 * C90946 + C91301) / q;
    const double C36286 = C68137 / C54432 -
                          (C61225 * be + C68875 * C90947) / q + C91392 -
                          C91301 / q;
    const double C34262 =
        C91237 - (C58636 * be + C70244 * C90947) / q + C91317 - C91318 / q;
    const double C34469 = -(C70039 * C90946 + C91318) / q;
    const double C91270 = C34406 * p;
    const double C34721 = C91341 - (C68121 * C90946) / q - (C67914 * p) / q;
    const double C34884 = C91341 - (C59572 * be + C70020 * C90947) / q +
                          C91346 - (C70021 * p) / q;
    const double C35621 = C91375 - (C72097 * C90946) / q - (C72601 * p) / q;
    const double C35702 = C91375 - (C60764 * be + C71892 * C90947) / q +
                          C91377 - (C72732 * p) / q;
    const double C36685 = C91398 - (C68137 * C90946) / q - (C67930 * p) / q;
    const double C37350 = C91398 - (C61684 * be + C70037 * C90947) / q +
                          C91400 - (C70038 * p) / q;
    const double C91395 = C71252 / C54432;
    const double C91383 = C69124 / C54432;
    const double C33310 = C69124 / q - (C16733 * be + C33292 * C90947) / q +
                          C69094 / q - (C33578 * p) / q;
    const double C91268 = C69519 * p;
    const double C33596 = (2 * C33578) / q -
                          (C57377 * be + C33577 * C90947) / q + C69548 / q -
                          (C69578 * p) / q;
    const double C91269 = C69607 * p;
    const double C91311 = C70449 * p;
    const double C49874 = -(C81090 * C90946 + C91856) / q;
    const double C52334 =
        C79132 / C54432 - (C79654 * C90947) / q + C91977 - C91856 / q;
    const double C91981 = C78776 / C54432;
    const double C49145 = C91806 - (C79910 * C90946) / q - (C80118 * p) / q;
    const double C49146 = C91807 - (C79926 * C90946) / q - (C80134 * p) / q;
    const double C53006 = C91991 - (C80133 * C90947) / q - C91993 / q;
    const double C53909 = -(C82033 * C90946 + C91993) / q;
    const double C49739 = C91775 - (C79638 * C90947) / q + C91838 - C91845 / q;
    const double C50154 = -(C81091 * C90946 + C91845) / q;
    const double C91843 = C49748 / C54432;
    const double C91907 = C50028 / C54432;
    const double C50046 = (3 * C49748) / C54432 - (C50028 * C90947) / q +
                          C81091 / q - (C50027 * p) / q;
    const double C50153 = -(C81544 * C90946 + C91873) / q;
    const double C50558 =
        (3 * C79638) / C54432 - (C81074 * C90947) / q + C91905 - C91873 / q;
    const double C50316 =
        C91884 - (C82034 * C90947) / q + C91877 - (C82035 * p) / q;
    const double C50442 = -(C82034 * C90946 + C91898) / q;
    const double C52726 =
        C80133 / C54432 - (C80871 * C90947) / q + C91989 - C91898 / q;
    const double C50702 = C91834 - (C82240 * C90947) / q + C91914 - C91915 / q;
    const double C50909 = -(C82035 * C90946 + C91915) / q;
    const double C91867 = C50846 * p;
    const double C51161 = C91938 - (C80117 * C90946) / q - (C79910 * p) / q;
    const double C51318 =
        C91938 - (C82016 * C90947) / q + C91943 - (C82017 * p) / q;
    const double C52061 = C91972 - (C84093 * C90946) / q - (C84597 * p) / q;
    const double C52142 =
        C91972 - (C83888 * C90947) / q + C91974 - (C84728 * p) / q;
    const double C53125 = C91995 - (C80133 * C90946) / q - (C79926 * p) / q;
    const double C53790 =
        C91995 - (C82033 * C90947) / q + C91997 - (C82034 * p) / q;
    const double C91992 = C83248 / C54432;
    const double C91980 = C81120 / C54432;
    const double C49766 =
        C81120 / q - (C49748 * C90947) / q + C81090 / q - (C50028 * p) / q;
    const double C91865 = C81515 * p;
    const double C50045 = (2 * C50028) / q - (C50027 * C90947) / q +
                          C81544 / q - (C81574 * p) / q;
    const double C91866 = C81603 * p;
    const double C91908 = C82445 * p;
    const double C90616 = C15304 / C54432;
    const double C90552 = C15314 / C54432;
    const double C15283 = (3 * C15314) / C54432 -
                          (C15300 * be + C15304 * C90946) / q + C54385 / q -
                          (C15303 * p) / q;
    const double C15635 = C90547 - (C55124 * be + C55096 * C90946) / q +
                          C90548 - (C55130 * p) / q;
    const double C15636 = C90549 - (C55142 * be + C55112 * C90946) / q +
                          C90550 - (C55148 * p) / q;
    const double C15923 = C90587 - (C55612 * be + C55584 * C90946) / q +
                          C90588 - (C55618 * p) / q;
    const double C15924 = C90589 - (C55630 * be + C55600 * C90946) / q +
                          C90590 - (C55636 * p) / q;
    const double C90517 = C16202 * p;
    const double C90522 = C16346 * p;
    const double C16490 = C90630 - (C56560 * be + C56548 * C90946) / q +
                          C90631 - (C56566 * p) / q;
    const double C90640 = C16646 * p;
    const double C90639 = C16656 / C54432;
    const double C55163 = C90707 - (C62413 * be + C58243 * C90946) / q +
                          C90831 - (C62418 * p) / q;
    const double C90706 = C16964 / C54432;
    const double C16982 =
        (3 * C16656) / C54432 - (C16964 * C90947) / q - (C16963 * p) / q;
    const double C90684 = C17251 * p;
    const double C55192 = C90716 - (C62430 * be + C58481 * C90946) / q +
                          C90832 - (C62435 * p) / q;
    const double C90645 = C17252 * p;
    const double C90643 = C17530 * p;
    const double C90644 = C17674 * p;
    const double C90667 = C17818 * p;
    const double C90723 = C17974 * p;
    const double C90722 = C17984 / C54432;
    const double C55651 = C90761 - (C62833 * be + C60134 * C90946) / q +
                          C90852 - (C62837 * p) / q;
    const double C90727 = C18290 * p;
    const double C55680 = C90770 - (C62849 * be + C60372 * C90946) / q +
                          C90853 - (C62854 * p) / q;
    const double C90769 = C18564 / C54432;
    const double C18600 =
        (3 * C17984) / C54432 - (C18564 * C90948) / q - (C18563 * p) / q;
    const double C90726 = C18842 * p;
    const double C90728 = C18986 * p;
    const double C90747 = C19130 * p;
    const double C90546 = C19294 / q;
    const double C90779 = C56861 / C54432;
    const double C16676 = C56861 / q - (C16656 * C90947) / q - (C16964 * p) / q;
    const double C90782 = C19714 * p;
    const double C90629 = C19714 / q;
    const double C90682 = C20814 / q;
    const double C90586 = C19998 / q;
    const double C90793 = C59038 / C54432;
    const double C18024 = C59038 / q - (C17984 * C90948) / q - (C18564 * p) / q;
    const double C15282 = (2 * C15304) / q -
                          (C54365 * be + C15303 * C90946) / q + C54369 / q -
                          (C54370 * p) / q;
    const double C90781 = C54400 / C54432;
    const double C15293 = C54400 / q - (C15311 * be + C15314 * C90946) / q +
                          C54401 / q - (C15304 * p) / q;
    const double C90516 = C54467 * p;
    const double C90521 = C54510 * p;
    const double C90545 = C55097 * p;
    const double C90585 = C55585 * p;
    const double C90617 = C56119 * p;
    const double C90663 = C57258 * p;
    const double C16981 =
        (2 * C16964) / q - (C16963 * C90947) / q - (C57322 * p) / q;
    const double C90666 = C57351 * p;
    const double C90678 = C57740 * p;
    const double C90681 = C57804 * p;
    const double C90683 = C57833 * p;
    const double C90709 = C58272 * p;
    const double C90751 = C59635 * p;
    const double C90754 = C59699 * p;
    const double C18599 =
        (2 * C18564) / q - (C18563 * C90948) / q - (C59728 * p) / q;
    const double C90763 = C60163 * p;
    const double C91216 = C31901 / C54432;
    const double C91152 = C31910 / C54432;
    const double C31882 = (3 * C31910) / C54432 - (C31901 * C90946) / q +
                          C66587 / q - (C31900 * p) / q;
    const double C32204 =
        C91149 - (C67300 * C90946) / q + C91150 - (C67334 * p) / q;
    const double C32492 =
        C91189 - (C67778 * C90946) / q + C91190 - (C67812 * p) / q;
    const double C91119 = C32770 * p;
    const double C91122 = C32914 * p;
    const double C33058 =
        C91230 - (C68702 * C90946) / q + C91231 - (C68719 * p) / q;
    const double C91146 = C35826 / q;
    const double C91379 = C69007 / C54432;
    const double C91382 = C36218 * p;
    const double C91229 = C36218 / q;
    const double C91282 = C37282 / q;
    const double C91186 = C36498 / q;
    const double C91393 = C71137 / C54432;
    const double C31881 = (2 * C31901) / q - (C31900 * C90946) / q +
                          C66571 / q - (C66572 * p) / q;
    const double C91381 = C66602 / C54432;
    const double C31891 =
        C66602 / q - (C31910 * C90946) / q + C66603 / q - (C31901 * p) / q;
    const double C91118 = C66665 * p;
    const double C91121 = C66708 * p;
    const double C91217 = C68286 * p;
    const double C91813 = C48357 / C54432;
    const double C91749 = C48366 / C54432;
    const double C48338 = (3 * C48366) / C54432 - (C48357 * C90946) / q +
                          C78583 / q - (C48356 * p) / q;
    const double C48660 =
        C91746 - (C79296 * C90946) / q + C91747 - (C79330 * p) / q;
    const double C48948 =
        C91786 - (C79774 * C90946) / q + C91787 - (C79808 * p) / q;
    const double C91716 = C49226 * p;
    const double C91719 = C49370 * p;
    const double C49514 =
        C91827 - (C80698 * C90946) / q + C91828 - (C80715 * p) / q;
    const double C91743 = C52266 / q;
    const double C91976 = C81003 / C54432;
    const double C91979 = C52658 * p;
    const double C91826 = C52658 / q;
    const double C91879 = C53722 / q;
    const double C91783 = C52938 / q;
    const double C91990 = C83133 / C54432;
    const double C48337 = (2 * C48357) / q - (C48356 * C90946) / q +
                          C78567 / q - (C78568 * p) / q;
    const double C91978 = C78598 / C54432;
    const double C48347 =
        C78598 / q - (C48366 * C90946) / q + C78599 / q - (C48357 * p) / q;
    const double C91715 = C78661 * p;
    const double C91718 = C78704 * p;
    const double C91814 = C80282 * p;
    const double C91678 = C91495 / q;
    const double C91355 = C71846 * p;
    const double C91674 = C91490 / q;
    const double C91670 = C91478 / q;
    const double C68153 = -(C75132 * be + C68183 * C90947 + C91459) / q;
    const double C68401 =
        C67254 / C54432 - (C68372 * C90948) / q + C91465 - C91459 / q;
    const double C91354 = C71788 * p;
    const double C72616 = -(C77271 * be + C68034 * C90947 + C91456) / q;
    const double C91657 = C91440 / q;
    const double C91199 = C67975 * p;
    const double C91283 = C69962 * p;
    const double C91656 = C91439 / q;
    const double C91281 = C69933 * p;
    const double C91653 = C91435 / q;
    const double C91194 = C67885 * p;
    const double C91266 = C69490 * p;
    const double C67021 = C91404 - (C67239 * C90948) / q - C91418 / q;
    const double C68659 = -(C75337 * be + C66974 * C90947 + C91418) / q;
    const double C91130 = C66886 * p;
    const double C91627 = C91304 / q;
    const double C91632 = C91302 / q;
    const double C34037 = -(C70141 * C90946 + C91302) / q;
    const double C35558 =
        C91371 - (C60527 * be + C72097 * C90947) / q - C91373 / q;
    const double C35765 = -(C71892 * C90946 + C91373) / q;
    const double C91365 = C72300 * p;
    const double C34001 = -(C70021 * C90946 + C91300) / q;
    const double C35414 = C68121 / C54432 -
                          (C60292 * be + C71180 * C90947) / q + C91362 -
                          C91300 / q;
    const double C91628 = C91313 / q;
    const double C34487 = -(C69681 * C90946 + C91313) / q;
    const double C91356 = C71907 * p;
    const double C91623 = C91295 / q;
    const double C70083 = C91378 - (C76202 * be + C72732 * C90947) / q +
                          C91487 - (C76207 * p) / q;
    const double C91372 = C35172 / C54432;
    const double C35207 =
        (2 * C35172) / q - (C35171 * C90948) / q - (C71936 * p) / q;
    const double C91622 = C91294 / q;
    const double C91298 = C70200 * p;
    const double C70171 =
        C91321 - (C70318 * C90948) / q + C91486 - (C76266 * p) / q;
    const double C91611 = C91273 / q;
    const double C91610 = C91272 / q;
    const double C91274 = C69725 * p;
    const double C91288 = C70054 * p;
    const double C91606 = C91255 / q;
    const double C33875 = C91286 - (C58099 * be + C70021 * C90947) / q +
                          C91279 - (C70022 * p) / q;
    const double C91329 = C34604 / C54432;
    const double C34640 = C71252 / q - (C34604 * C90948) / q - (C35172 * p) / q;
    const double C35208 =
        (3 * C34604) / C54432 - (C35172 * C90948) / q - (C35171 * p) / q;
    const double C91605 = C91254 / q;
    const double C34038 = -(C69211 * C90946 + C91254) / q;
    const double C69991 = C91364 - (C76086 * be + C70229 * C90947) / q +
                          C91485 - (C76091 * p) / q;
    const double C34595 =
        C91324 - (C59282 * be + C68121 * C90947) / q - C91331 / q;
    const double C35010 = -(C70020 * C90946 + C91331) / q;
    const double C91601 = C91214 / q;
    const double C32743 = -(C56008 * be + C68033 * C90947 + C91214) / q;
    const double C91347 = C35666 * p;
    const double C91363 = C72243 * p;
    const double C91592 = C91212 / q;
    const double C91593 = C91221 / q;
    const double C33040 = -(C56515 * be + C66990 * C90947 + C91221) / q;
    const double C91351 = C71726 * p;
    const double C91589 = C91205 / q;
    const double C67856 =
        C91370 - (C72445 * C90946) / q + C91453 - (C74886 * p) / q;
    const double C91369 = C35100 / C54432;
    const double C35135 =
        (2 * C35100) / q - (C35099 * C90948) / q - (C71817 * p) / q;
    const double C91328 = C35522 * p;
    const double C91588 = C91204 / q;
    const double C91207 = C68092 * p;
    const double C91599 = C91233 / q;
    const double C91267 = C34370 * p;
    const double C91309 = C70392 * p;
    const double C91595 = C91227 / q;
    const double C91220 = C68343 * p;
    const double C91573 = C91177 / q;
    const double C68063 = C91236 - (C68213 * C90948) / q + C91452 - C91456 / q;
    const double C91568 = C91169 / q;
    const double C32744 = -(C56025 * be + C67006 * C90947 + C91169) / q;
    const double C67827 =
        C91361 - (C72214 * C90946) / q + C91452 - (C74870 * p) / q;
    const double C91327 = C34812 * p;
    const double C91326 = C35378 * p;
    const double C91567 = C91168 / q;
    const double C91581 = C91196 / q;
    const double C91198 = C67946 * p;
    const double C91284 = C33803 * p;
    const double C91278 = C69871 * p;
    const double C67495 = C91234 - (C74544 * be + C68776 * C90947) / q +
                          C91432 - (C74549 * p) / q;
    const double C91582 = C91197 / q;
    const double C67378 =
        C91316 - (C70594 * C90946) / q + C91432 - (C74472 * p) / q;
    const double C91245 = C33804 * p;
    const double C91244 = C34226 * p;
    const double C91263 = C69399 * p;
    const double C91563 = C91160 / q;
    const double C67349 =
        C91307 - (C70363 * C90946) / q + C91431 - (C74456 * p) / q;
    const double C91306 = C33502 / C54432;
    const double C33520 = (2 * C33502) / q -
                          (C57253 * be + C33501 * C90947) / q -
                          (C69461 * p) / q;
    const double C91243 = C34082 * p;
    const double C91562 = C91159 / q;
    const double C91161 = C67466 * p;
    const double C91554 = C91135 / q;
    const double C32491 =
        C91187 - (C67762 * C90946) / q + C91188 - (C67795 * p) / q;
    const double C91322 = C34532 / C54432;
    const double C34568 = C71137 / q - (C34532 * C90948) / q - (C35100 * p) / q;
    const double C35136 =
        (3 * C34532) / C54432 - (C35100 * C90948) / q - (C35099 * p) / q;
    const double C68004 =
        C91228 - (C68183 * C90948) / q + C91448 - (C75005 * p) / q;
    const double C91553 = C91134 / q;
    const double C91323 = C34523 * p;
    const double C91552 = C91133 / q;
    const double C91185 = C67763 * p;
    const double C91548 = C91126 / q;
    const double C32203 =
        C91147 - (C67284 * C90946) / q + C91148 - (C67317 * p) / q;
    const double C91239 = C33220 / C54432;
    const double C33238 =
        C69007 / q - (C16653 * be + C33220 * C90947) / q - (C33502 * p) / q;
    const double C33521 = (3 * C33220) / C54432 -
                          (C33498 * be + C33502 * C90947) / q -
                          (C33501 * p) / q;
    const double C67407 = C91219 - (C74483 * be + C67643 * C90947) / q +
                          C91427 - (C74488 * p) / q;
    const double C91547 = C91125 / q;
    const double C91240 = C33211 * p;
    const double C91546 = C91124 / q;
    const double C91127 = C66843 * p;
    const double C91145 = C67285 * p;
    const double C92275 = C92092 / q;
    const double C91952 = C83842 * p;
    const double C92271 = C92087 / q;
    const double C92267 = C92075 / q;
    const double C80149 = -(C80179 * C90947 + C92056) / q;
    const double C80397 = C79250 / C54432 -
                          (C75422 * be + C80368 * C90948) / q + C92062 -
                          C92056 / q;
    const double C91951 = C83784 * p;
    const double C84612 = -(C80030 * C90947 + C92053) / q;
    const double C92254 = C92037 / q;
    const double C91796 = C79971 * p;
    const double C91880 = C81958 * p;
    const double C92253 = C92036 / q;
    const double C91878 = C81929 * p;
    const double C92250 = C92032 / q;
    const double C91791 = C79881 * p;
    const double C91863 = C81486 * p;
    const double C79017 =
        C92001 - (C75279 * be + C79235 * C90948) / q - C92015 / q;
    const double C80655 = -(C78970 * C90947 + C92015) / q;
    const double C91727 = C78882 * p;
    const double C92224 = C91901 / q;
    const double C92229 = C91899 / q;
    const double C50477 = -(C82137 * C90946 + C91899) / q;
    const double C51998 = C91968 - (C84093 * C90947) / q - C91970 / q;
    const double C52205 = -(C83888 * C90946 + C91970) / q;
    const double C91962 = C84296 * p;
    const double C50441 = -(C82017 * C90946 + C91897) / q;
    const double C51854 =
        C80117 / C54432 - (C83176 * C90947) / q + C91959 - C91897 / q;
    const double C92225 = C91910 / q;
    const double C50927 = -(C81677 * C90946 + C91910) / q;
    const double C91953 = C83903 * p;
    const double C92220 = C91892 / q;
    const double C82079 =
        C91975 - (C84728 * C90947) / q + C92084 - (C88179 * p) / q;
    const double C91969 = C51602 / C54432;
    const double C51639 = (2 * C51602) / q -
                          (C59754 * be + C51601 * C90948) / q -
                          (C83932 * p) / q;
    const double C92219 = C91891 / q;
    const double C91895 = C82196 * p;
    const double C82167 = C91918 - (C88233 * be + C82314 * C90948) / q +
                          C92083 - (C88239 * p) / q;
    const double C92208 = C91870 / q;
    const double C92207 = C91869 / q;
    const double C91871 = C81721 * p;
    const double C91885 = C82050 * p;
    const double C92203 = C91852 / q;
    const double C50315 =
        C91883 - (C82017 * C90947) / q + C91876 - (C82018 * p) / q;
    const double C91926 = C51044 / C54432;
    const double C51080 =
        C83248 / q - (C18061 * be + C51044 * C90948) / q - (C51602 * p) / q;
    const double C51640 = (3 * C51044) / C54432 -
                          (C51598 * be + C51602 * C90948) / q -
                          (C51601 * p) / q;
    const double C92202 = C91851 / q;
    const double C50478 = -(C81207 * C90946 + C91851) / q;
    const double C81987 =
        C91961 - (C82225 * C90947) / q + C92082 - (C88065 * p) / q;
    const double C51035 = C91921 - (C80117 * C90947) / q - C91928 / q;
    const double C51437 = -(C82016 * C90946 + C91928) / q;
    const double C92198 = C91811 / q;
    const double C49199 = -(C80029 * C90947 + C91811) / q;
    const double C91944 = C52106 * p;
    const double C91960 = C84239 * p;
    const double C92189 = C91809 / q;
    const double C92190 = C91818 / q;
    const double C49496 = -(C78986 * C90947 + C91818) / q;
    const double C91948 = C83722 * p;
    const double C92186 = C91802 / q;
    const double C79852 =
        C91967 - (C84441 * C90946) / q + C92050 - (C86872 * p) / q;
    const double C91966 = C51526 / C54432;
    const double C51563 = (2 * C51526) / q -
                          (C59630 * be + C51525 * C90948) / q -
                          (C83813 * p) / q;
    const double C91925 = C51962 * p;
    const double C92185 = C91801 / q;
    const double C91804 = C80088 * p;
    const double C92196 = C91830 / q;
    const double C91864 = C50810 * p;
    const double C91906 = C82388 * p;
    const double C92192 = C91824 / q;
    const double C91817 = C80339 * p;
    const double C92170 = C91774 / q;
    const double C80059 =
        C91833 - (C77214 * be + C80209 * C90948) / q + C92049 - C92053 / q;
    const double C92165 = C91766 / q;
    const double C49200 = -(C79002 * C90947 + C91766) / q;
    const double C79823 =
        C91958 - (C84210 * C90946) / q + C92049 - (C86856 * p) / q;
    const double C91924 = C51250 * p;
    const double C91923 = C51818 * p;
    const double C92164 = C91765 / q;
    const double C92178 = C91793 / q;
    const double C91795 = C79942 * p;
    const double C91881 = C50243 * p;
    const double C91875 = C81867 * p;
    const double C79491 =
        C91831 - (C80772 * C90947) / q + C92029 - (C86536 * p) / q;
    const double C92179 = C91794 / q;
    const double C79374 =
        C91913 - (C82590 * C90946) / q + C92029 - (C86462 * p) / q;
    const double C91842 = C50244 * p;
    const double C91841 = C50666 * p;
    const double C91860 = C81395 * p;
    const double C92160 = C91757 / q;
    const double C79345 =
        C91904 - (C82359 * C90946) / q + C92028 - (C86446 * p) / q;
    const double C91903 = C49956 / C54432;
    const double C49973 =
        (2 * C49956) / q - (C49955 * C90947) / q - (C81457 * p) / q;
    const double C91840 = C50522 * p;
    const double C92159 = C91756 / q;
    const double C91758 = C79462 * p;
    const double C92151 = C91732 / q;
    const double C48947 =
        C91784 - (C79758 * C90946) / q + C91785 - (C79791 * p) / q;
    const double C91919 = C50972 / C54432;
    const double C51008 =
        C83133 / q - (C17981 * be + C50972 * C90948) / q - (C51526 * p) / q;
    const double C51564 = (3 * C50972) / C54432 -
                          (C51522 * be + C51526 * C90948) / q -
                          (C51525 * p) / q;
    const double C80000 = C91825 - (C75132 * be + C80179 * C90948) / q +
                          C92045 - (C86988 * p) / q;
    const double C92150 = C91731 / q;
    const double C91920 = C50963 * p;
    const double C92149 = C91730 / q;
    const double C91782 = C79759 * p;
    const double C92145 = C91723 / q;
    const double C48659 =
        C91744 - (C79280 * C90946) / q + C91745 - (C79313 * p) / q;
    const double C91836 = C49676 / C54432;
    const double C49694 = C81003 / q - (C49676 * C90947) / q - (C49956 * p) / q;
    const double C49974 =
        (3 * C49676) / C54432 - (C49956 * C90947) / q - (C49955 * p) / q;
    const double C79403 =
        C91816 - (C79639 * C90947) / q + C92024 - (C86477 * p) / q;
    const double C92144 = C91722 / q;
    const double C91837 = C49667 * p;
    const double C92143 = C91721 / q;
    const double C91724 = C78839 * p;
    const double C91742 = C79281 * p;
    const double C90539 = C54868 * p;
    const double C15471 = C90511 - (C54777 * C90948) / q - C90955;
    const double C16463 =
        (3 * C54810) / C54432 - (C56515 * be + C54794 * C90946) / q - C90955;
    const double C90601 = C55830 * p;
    const double C15472 = C90512 - (C54793 * C90948) / q - C90956;
    const double C16158 = C90613 - (C56025 * be + C54810 * C90946) / q - C90956;
    const double C15482 = C90513 - (C54809 * C90948) / q - C90957;
    const double C20245 = C90799 - (C61485 * be + C56029 * C90946) / q - C90957;
    const double C15555 = (2 * C15598) / q -
                          (C54955 * be + C15597 * C90946) / q -
                          (C54959 * p) / q;
    const double C15556 = (3 * C15608) / C54432 -
                          (C15594 * be + C15598 * C90946) / q -
                          (C15597 * p) / q;
    const double C15566 =
        C54988 / q - (C15605 * be + C15608 * C90946) / q - (C15598 * p) / q;
    const double C15888 = C90583 - (C55080 * C90947) / q - C90979;
    const double C16906 = C90660 - (C57192 * be + C55522 * C90946) / q - C90979;
    const double C15779 = C90548 - (C55369 * C90948) / q - C90970;
    const double C16616 = C54810 / C54432 - (C55385 * C90947) / q - C90970;
    const double C17791 =
        C57065 / C54432 - (C58667 * be + C57049 * C90946) / q - C90970;
    const double C15780 = C90550 - (C55080 * C90948) / q - C90971;
    const double C19935 =
        C58211 / C54432 - (C61254 * be + C56757 * C90946) / q - C90971;
    const double C15869 = C90579 - (C55518 * be + C55369 * C90946) / q - C90977;
    const double C16328 = C90625 - (C55065 * C90947) / q - C90977;
    const double C15887 = C90574 - (C55369 * C90947) / q - C90978;
    const double C17647 = C90715 - (C58432 * be + C57225 * C90946) / q - C90978;
    const double C16068 = C90583 - (C54810 * C90948) / q + C90590 - C90992;
    const double C18234 = C90742 - (C59340 * be + C56012 * C90946) / q - C90992;
    const double C16067 = C90603 - (C55859 * C90948) / q + C90588 - C90991;
    const double C19103 = C90776 - (C60559 * be + C59196 * C90946) / q - C90991;
    const double C90602 = C20150 / q;
    const double C16157 = C90611 - (C56008 * be + C55859 * C90946) / q - C90995;
    const double C16418 = C90625 - (C54794 * C90948) / q + C90626 - C90995;
    const double C16562 =
        C55080 / C54432 - (C55385 * C90948) / q + C90631 - C91004;
    const double C18959 =
        C58195 / C54432 - (C60323 * be + C59373 * C90946) / q - C91004;
    const double C16274 = C90615 - (C55065 * C90948) / q - C90996;
    const double C16607 = C90638 - (C56753 * be + C55385 * C90946) / q - C90996;
    const double C90567 = C19446 / q;
    const double C16140 =
        C20264 / q - (C20252 * be + C16176 * C90946) / q - (C16472 * p) / q;
    const double C16806 = C90641 - (C55522 * C90948) / q - C91008;
    const double C19952 = C56029 / C54432 - (C56757 * C90947) / q - C91008;
    const double C16816 = C90642 - (C57064 * C90948) / q - C91009;
    const double C21080 = C90799 - (C58211 * C90947) / q - C91009;
    const double C16896 = -(C16933 * be + C16936 * C90946 + C16926 * p) / q;
    const double C17107 = C90664 - (C57528 * C90948) / q - C91013;
    const double C17944 =
        (3 * C57065) / C54432 - (C57544 * C90947) / q - C91013;
    const double C90696 = C58044 * p;
    const double C17108 = C90665 - (C57241 * C90948) / q - C91014;
    const double C17504 = C90705 - (C57065 * C90947) / q - C91014;
    const double C17180 = -(C33764 * be + C17216 * C90946 + C17656 * p) / q;
    const double C17638 = C17216 / C54432 -
                          (C58416 * be + C17656 * C90946) / q -
                          (C58420 * p) / q;
    const double C17396 = C90660 - (C57065 * C90948) / q + C90680 - C91026;
    const double C18528 = C90742 - (C58195 * C90947) / q - C91026;
    const double C17395 = C90693 - (C58014 * C90948) / q + C90679 - C91025;
    const double C19256 = C90776 - (C59532 * C90947) / q - C91025;
    const double C17746 =
        C55522 / C54432 - (C57049 * C90948) / q + C90717 - C91035;
    const double C18968 = C56012 / C54432 - (C59373 * C90947) / q - C91035;
    const double C90697 = C20966 / q;
    const double C17503 = C90703 - (C58014 * C90947) / q - C91030;
    const double C17890 = C90715 - (C57544 * C90948) / q + C90720 - C91030;
    const double C90786 = C57094 / C54432;
    const double C20226 = C61473 / C54432 -
                          (C20261 * be + C20264 * C90946) / q -
                          (C16176 * p) / q;
    const double C17602 = C90708 - (C57225 * C90948) / q - C91031;
    const double C17800 = C90638 - (C57049 * C90947) / q - C91031;
    const double C90736 = C18134 * p;
    const double C18214 = C18264 / C54432 -
                          (C18251 * be + C18254 * C90946) / q -
                          (C16175 * p) / q;
    const double C18224 = -(C18261 * be + C18264 * C90946 + C18254 * p) / q;
    const double C90789 = C19850 * p;
    const double C90635 = C19850 / q;
    const double C90739 = C18426 * p;
    const double C90740 = C19058 * p;
    const double C90750 = C19202 * p;
    const double C90738 = C18914 * p;
    const double C18780 = -(C51788 * be + C18816 * C90946 + C19112 * p) / q;
    const double C90536 = C54825 * p;
    const double C16454 = (3 * C16176) / C54432 -
                          (C56499 * be + C16472 * C90946) / q -
                          (C56503 * p) / q;
    const double C55340 = C90827 - (C55523 * C90948) / q - C91056;
    const double C56741 = C54794 / C54432 - (C56207 * C90947) / q - C91056;
    const double C55400 = C90831 - (C55554 * C90948) / q - C91059;
    const double C58655 = C90636 - (C55370 * C90947) / q - C91059;
    const double C55429 =
        C55369 / C54432 - (C55370 * C90948) / q + C90832 - C91060;
    const double C60311 = C55859 / C54432 - (C56044 * C90947) / q - C91060;
    const double C90606 = C55889 * p;
    const double C19094 = C18816 / C54432 -
                          (C60543 * be + C19112 * C90946) / q -
                          (C60547 * p) / q;
    const double C90993 = C90607 / q;
    const double C16139 =
        C18254 / q - (C55978 * be + C16175 * C90946) / q - (C55982 * p) / q;
    const double C90624 = C56236 * p;
    const double C57499 = C90875 - (C57679 * C90948) / q - C91073;
    const double C58891 =
        (3 * C57049) / C54432 - (C58360 * C90947) / q - C91073;
    const double C91015 = C90674 / q;
    const double C57985 = C90719 - (C58165 * C90948) / q + C90885 - C91077;
    const double C60783 = C59196 / C54432 - (C60251 * C90947) / q - C91077;
    const double C91028 = C90698 / q;
    const double C58135 = C90767 - (C58165 * C90947) / q - C91081;
    const double C58389 =
        C57225 / C54432 - (C58360 * C90948) / q + C90901 - C91081;
    const double C90797 = C59270 / C54432;
    const double C18184 =
        C59270 / q - (C18144 * C90948) / q + C59212 / q - (C18708 * p) / q;
    const double C18689 = -(C59874 * be + C18707 * C90946 + C90757) / q;
    const double C19076 =
        (3 * C18134) / C54432 - (C19058 * C90948) / q + C59196 / q - C90757 / q;
    const double C18725 = -(C18707 * C90947 + C90758) / q;
    const double C19220 =
        (3 * C18426) / C54432 - (C19202 * C90948) / q + C59532 / q - C90758 / q;
    const double C18779 = -(C60024 * be + C18815 * C90946 + C60028 * p) / q;
    const double C90768 = C60280 * p;
    const double C91139 = C67064 * p;
    const double C32128 =
        (2 * C32167) / q - (C32166 * C90946) / q - (C67151 * p) / q;
    const double C32129 =
        (3 * C32176) / C54432 - (C32167 * C90946) / q - (C32166 * p) / q;
    const double C32138 = C67180 / q - (C32176 * C90946) / q - (C32167 * p) / q;
    const double C32456 = C91183 - (C55535 * be + C67269 * C90947) / q - C91576;
    const double C33445 = C91260 - (C67702 * C90946) / q - C91576;
    const double C32437 = C91179 - (C67553 * C90946) / q - C91574;
    const double C32896 = C91225 - (C56279 * be + C67254 * C90947) / q - C91574;
    const double C32455 = C91174 - (C55518 * be + C67553 * C90947) / q - C91575;
    const double C34199 = C91315 - (C69367 * C90946) / q - C91575;
    const double C91202 = C36634 / q;
    const double C91167 = C35962 / q;
    const double C33436 = -(C33472 * C90946 + C33463 * p) / q;
    const double C33730 = -(C33768 * C90946 + C34208 * p) / q;
    const double C34190 =
        C33768 / C54432 - (C34208 * C90946) / q - (C70536 * p) / q;
    const double C91297 = C37418 / q;
    const double C91386 = C69240 / C54432;
    const double C91336 = C34667 * p;
    const double C34748 = -(C34784 * C90946 + C34775 * p) / q;
    const double C91389 = C36354 * p;
    const double C91235 = C36354 / q;
    const double C91339 = C34956 * p;
    const double C91340 = C35594 * p;
    const double C91350 = C35738 * p;
    const double C91338 = C35450 * p;
    const double C35316 = -(C35352 * C90946 + C35648 * p) / q;
    const double C91397 = C71369 / C54432;
    const double C34712 =
        C71369 / q - (C34676 * C90948) / q + C71311 / q - (C35244 * p) / q;
    const double C35225 = -(C35243 * C90946 + C91357) / q;
    const double C35612 =
        (3 * C34667) / C54432 - (C35594 * C90948) / q + C71295 / q - C91357 / q;
    const double C35261 = -(C59874 * be + C35243 * C90947 + C91358) / q;
    const double C35756 =
        (3 * C34956) / C54432 - (C35738 * C90948) / q + C71626 / q - C91358 / q;
    const double C35315 = -(C35351 * C90946 + C72112 * p) / q;
    const double C91368 = C72358 * p;
    const double C91736 = C79060 * p;
    const double C48584 =
        (2 * C48623) / q - (C48622 * C90946) / q - (C79147 * p) / q;
    const double C48585 =
        (3 * C48632) / C54432 - (C48623 * C90946) / q - (C48622 * p) / q;
    const double C48594 = C79176 / q - (C48632 * C90946) / q - (C48623 * p) / q;
    const double C48912 = C91780 - (C79265 * C90947) / q - C92173;
    const double C49901 = C91857 - (C79698 * C90946) / q - C92173;
    const double C48893 = C91776 - (C79549 * C90946) / q - C92171;
    const double C49352 = C91822 - (C79250 * C90947) / q - C92171;
    const double C48911 = C91771 - (C79549 * C90947) / q - C92172;
    const double C50639 = C91912 - (C81363 * C90946) / q - C92172;
    const double C91799 = C53074 / q;
    const double C91764 = C52402 / q;
    const double C49892 = -(C49928 * C90946 + C49919 * p) / q;
    const double C50172 = -(C50208 * C90946 + C50648 * p) / q;
    const double C50630 =
        C50208 / C54432 - (C50648 * C90946) / q - (C82532 * p) / q;
    const double C91894 = C53858 / q;
    const double C91983 = C81236 / C54432;
    const double C91933 = C51107 * p;
    const double C51188 = -(C51224 * C90946 + C51215 * p) / q;
    const double C91986 = C52794 * p;
    const double C91832 = C52794 / q;
    const double C91936 = C51386 * p;
    const double C91937 = C52034 * p;
    const double C91947 = C52178 * p;
    const double C91935 = C51890 * p;
    const double C51754 = -(C51792 * C90946 + C52088 * p) / q;
    const double C91994 = C83365 / C54432;
    const double C51152 = C83365 / q - (C18141 * be + C51116 * C90948) / q +
                          C83307 / q - (C51678 * p) / q;
    const double C51658 = -(C51677 * C90946 + C91954) / q;
    const double C52052 = (3 * C51107) / C54432 -
                          (C60470 * be + C52034 * C90948) / q + C83291 / q -
                          C91954 / q;
    const double C51696 = -(C51677 * C90947 + C91955) / q;
    const double C52196 = (3 * C51386) / C54432 -
                          (C60707 * be + C52178 * C90948) / q + C83622 / q -
                          C91955 / q;
    const double C51753 = -(C51791 * C90946 + C84108 * p) / q;
    const double C91965 = C84354 * p;
    const double C15387 = C90511 - (C54598 * C90947) / q - C90949;
    const double C16301 =
        (3 * C54631) / C54432 - (C56248 * be + C54615 * C90946) / q - C90949;
    const double C90556 = C55222 * p;
    const double C15388 = C90512 - (C54614 * C90947) / q - C90950;
    const double C15834 = C90578 - (C55472 * be + C54631 * C90946) / q - C90950;
    const double C15398 = C90513 - (C54630 * C90947) / q - C90951;
    const double C19503 =
        C56947 / C54432 - (C60995 * be + C55476 * C90946) / q - C90951;
    const double C15708 =
        C54630 / C54432 - (C54631 * C90947) / q + C90550 - C90966;
    const double C16866 =
        C56948 / C54432 - (C57134 * be + C55459 * C90946) / q - C90966;
    const double C15707 = C90558 - (C55251 * C90947) / q + C90548 - C90965;
    const double C17629 =
        C56949 / C54432 - (C58401 * be + C56932 * C90946) / q - C90965;
    const double C90557 = C19370 / q;
    const double C15833 = C90576 - (C55455 * be + C55251 * C90946) / q - C90976;
    const double C16238 =
        C54614 / C54432 - (C54615 * C90947) / q + C90615 - C90976;
    const double C15995 = C90588 - (C55739 * C90947) / q - C90984;
    const double C18941 =
        C57892 / C54432 - (C60292 * be + C59081 * C90946) / q - C90984;
    const double C90564 = C55310 * p;
    const double C15996 = C90590 - (C55755 * C90947) / q - C90985;
    const double C19901 =
        C57909 / C54432 - (C61225 * be + C56725 * C90946) / q - C90985;
    const double C16382 = C90626 - (C55966 * C90947) / q - C90998;
    const double C16589 = C90637 - (C56721 * be + C55756 * C90946) / q - C90998;
    const double C16526 =
        C55755 / C54432 - (C55756 * C90947) / q + C90631 - C91002;
    const double C17773 =
        C57910 / C54432 - (C58636 * be + C58119 * C90946) / q - C91002;
    const double C90595 = C20074 / q;
    const double C90647 = C16726 * p;
    const double C90649 = C17566 * p;
    const double C90691 = C17323 * p;
    const double C90651 = C17324 * p;
    const double C90732 = C18878 * p;
    const double C90785 = C19782 * p;
    const double C90632 = C19782 / q;
    const double C90650 = C17710 * p;
    const double C17072 = -(C17036 * C90948 + C90670) / q;
    const double C90685 = C57863 * p;
    const double C90730 = C18054 * p;
    const double C90733 = C18358 * p;
    const double C90748 = C19166 * p;
    const double C90690 = C57955 * p;
    const double C90734 = C19022 * p;
    const double C90689 = C20890 / q;
    const double C90952 = C90527 / q;
    const double C90967 = C90561 / q;
    const double C90983 = C90594 / q;
    const double C90986 = C90598 / q;
    const double C90988 = C90599 / q;
    const double C90999 = C90620 / q;
    const double C17017 = -(C57377 * be + C17035 * C90946 + C90668) / q;
    const double C17575 =
        (3 * C16726) / C54432 - (C17566 * C90947) / q + C56932 / q - C90668 / q;
    const double C17071 = -(C17035 * C90948 + C90669) / q;
    const double C17863 =
        (3 * C17324) / C54432 - (C17854 * C90947) / q + C57911 / q - C90669 / q;
    const double C91022 = C90688 / q;
    const double C17584 = -(C17566 * C90948 + C90711) / q;
    const double C17845 = -(C58757 * be + C17854 * C90946 + C90711) / q;
    const double C18617 = -(C59754 * be + C18635 * C90946 + C90755) / q;
    const double C19040 =
        (3 * C18054) / C54432 - (C19022 * C90948) / q - C90755 / q;
    const double C91044 = C90756 / q;
    const double C91046 = C90765 / q;
    const double C19157 = -(C60649 * be + C19166 * C90946 + C90765) / q;
    const double C91157 = C35894 / q;
    const double C91195 = C36566 / q;
    const double C91247 = C33283 * p;
    const double C91249 = C34118 * p;
    const double C91251 = C33876 * p;
    const double C91385 = C36286 * p;
    const double C91232 = C36286 / q;
    const double C91250 = C34262 * p;
    const double C33616 = -(C33578 * C90948 + C91270) / q;
    const double C91333 = C34884 * p;
    const double C91348 = C35702 * p;
    const double C91289 = C37350 / q;
    const double C33558 = -(C33577 * C90946 + C91268) / q;
    const double C34127 = (3 * C33283) / C54432 -
                          (C58284 * be + C34118 * C90947) / q + C69078 / q -
                          C91268 / q;
    const double C33615 = -(C33577 * C90948 + C91269) / q;
    const double C34415 = (3 * C33876) / C54432 -
                          (C58757 * be + C34406 * C90947) / q + C70039 / q -
                          C91269 / q;
    const double C34136 = -(C34118 * C90948 + C91311) / q;
    const double C34397 = -(C34406 * C90946 + C91311) / q;
    const double C91754 = C52334 / q;
    const double C91792 = C53006 / q;
    const double C91844 = C49739 * p;
    const double C91846 = C50558 * p;
    const double C91848 = C50316 * p;
    const double C91982 = C52726 * p;
    const double C91829 = C52726 / q;
    const double C91847 = C50702 * p;
    const double C50064 = -(C33574 * be + C50028 * C90948 + C91867) / q;
    const double C91930 = C51318 * p;
    const double C91945 = C52142 * p;
    const double C91886 = C53790 / q;
    const double C50009 = -(C50027 * C90946 + C91865) / q;
    const double C50567 =
        (3 * C49739) / C54432 - (C50558 * C90947) / q + C81074 / q - C91865 / q;
    const double C50063 = -(C57377 * be + C50027 * C90948 + C91866) / q;
    const double C50855 =
        (3 * C50316) / C54432 - (C50846 * C90947) / q + C82035 / q - C91866 / q;
    const double C50576 = -(C58284 * be + C50558 * C90948 + C91908) / q;
    const double C50837 = -(C50846 * C90946 + C91908) / q;
    const double C90553 = C15635 * p;
    const double C90518 = C15636 * p;
    const double C90593 = C15923 * p;
    const double C90523 = C15924 * p;
    const double C15325 = -(C15304 * C90947 + C90517) / q;
    const double C15346 = -(C15304 * C90948 + C90522) / q;
    const double C90555 = C16490 * p;
    const double C91006 = C90640 / q;
    const double C90551 = C55163 * p;
    const double C91021 = C90684 / q;
    const double C90554 = C55192 * p;
    const double C16696 = -(C16656 * C90948 + C90645) / q;
    const double C91007 = C90643 / q;
    const double C91018 = C90644 / q;
    const double C16686 = -(C16646 * C90948 + C90644) / q;
    const double C17000 = -(C16964 * C90948 + C90667) / q;
    const double C91037 = C90723 / q;
    const double C90591 = C55651 * p;
    const double C18004 = -(C17984 * C90947 + C90727) / q;
    const double C90592 = C55680 * p;
    const double C91041 = C90726 / q;
    const double C17994 = -(C17974 * C90947 + C90726) / q;
    const double C91038 = C90728 / q;
    const double C18582 = -(C18564 * C90947 + C90747) / q;
    const double C15618 =
        C90546 - (C19282 * be + C15636 * C90946) / q + C55112 / q - C90517 / q;
    const double C20852 = C90779 - (C20814 * C90948) / q - C90727 / q;
    const double C19332 = -(C19294 * C90948 + C90782) / q;
    const double C20017 = -(C19998 * C90947 + C90782) / q;
    const double C20795 =
        C61072 / q - (C20811 * be + C20814 * C90946) / q - C90782 / q;
    const double C17270 = C90682 - (C17252 * C90947) / q - C90667 / q;
    const double C18324 = C90682 - (C18290 * C90948) / q - C90747 / q;
    const double C15906 =
        C90586 - (C19986 * be + C15924 * C90946) / q + C55600 / q - C90522 / q;
    const double C20833 = C90793 - (C20814 * C90947) / q - C90645 / q;
    const double C15324 = -(C15303 * C90947 + C90516) / q;
    const double C16193 = (3 * C15636) / C54432 -
                          (C56070 * be + C16202 * C90946) / q + C55148 / q -
                          C90516 / q;
    const double C15345 = -(C15303 * C90948 + C90521) / q;
    const double C16337 = (3 * C15924) / C54432 -
                          (C56308 * be + C16346 * C90946) / q + C55636 / q -
                          C90521 / q;
    const double C90961 = C90545 / q;
    const double C90980 = C90585 / q;
    const double C16220 = -(C16202 * C90948 + C90617) / q;
    const double C16355 = -(C16346 * C90947 + C90617) / q;
    const double C16481 =
        C90629 - (C56544 * be + C16490 * C90946) / q + C56548 / q - C90617 / q;
    const double C91012 = C90663 / q;
    const double C16999 = -(C16963 * C90948 + C90666) / q;
    const double C17827 =
        (3 * C17252) / C54432 - (C17818 * C90947) / q - C90666 / q;
    const double C91017 = C90678 / q;
    const double C91019 = C90681 / q;
    const double C91020 = C90683 / q;
    const double C91033 = C90709 / q;
    const double C17548 = -(C17530 * C90948 + C90709) / q;
    const double C91043 = C90751 / q;
    const double C18581 = -(C18563 * C90947 + C90754) / q;
    const double C19148 =
        (3 * C18290) / C54432 - (C19130 * C90948) / q - C90754 / q;
    const double C91045 = C90763 / q;
    const double C18995 = -(C18986 * C90947 + C90763) / q;
    const double C91120 = C32204 * p;
    const double C91123 = C32492 * p;
    const double C31920 = -(C15300 * be + C31901 * C90947 + C91119) / q;
    const double C31939 = -(C31901 * C90948 + C91122) / q;
    const double C91155 = C33058 * p;
    const double C32186 =
        C91146 - (C32204 * C90946) / q + C67300 / q - C91119 / q;
    const double C35860 = -(C35826 * C90948 + C91382) / q;
    const double C36515 = -(C19995 * be + C36498 * C90947 + C91382) / q;
    const double C37265 = C73129 / q - (C37282 * C90946) / q - C91382 / q;
    const double C32474 =
        C91186 - (C32492 * C90946) / q + C67778 / q - C91122 / q;
    const double C31919 = -(C54365 * be + C31900 * C90947 + C91118) / q;
    const double C32761 =
        (3 * C32204) / C54432 - (C32770 * C90946) / q + C67334 / q - C91118 / q;
    const double C31938 = -(C31900 * C90948 + C91121) / q;
    const double C32905 =
        (3 * C32492) / C54432 - (C32914 * C90946) / q + C67812 / q - C91121 / q;
    const double C32788 = -(C32770 * C90948 + C91217) / q;
    const double C32923 = -(C56308 * be + C32914 * C90947 + C91217) / q;
    const double C33049 =
        C91229 - (C33058 * C90946) / q + C68702 / q - C91217 / q;
    const double C91717 = C48660 * p;
    const double C91720 = C48948 * p;
    const double C48376 = -(C48357 * C90947 + C91716) / q;
    const double C48395 = -(C15300 * be + C48357 * C90948 + C91719) / q;
    const double C91752 = C49514 * p;
    const double C48642 =
        C91743 - (C48660 * C90946) / q + C79296 / q - C91716 / q;
    const double C52300 = -(C19291 * be + C52266 * C90948 + C91979) / q;
    const double C52955 = -(C52938 * C90947 + C91979) / q;
    const double C53705 = C85125 / q - (C53722 * C90946) / q - C91979 / q;
    const double C48930 =
        C91783 - (C48948 * C90946) / q + C79774 / q - C91719 / q;
    const double C48375 = -(C48356 * C90947 + C91715) / q;
    const double C49217 =
        (3 * C48660) / C54432 - (C49226 * C90946) / q + C79330 / q - C91715 / q;
    const double C48394 = -(C54365 * be + C48356 * C90948 + C91718) / q;
    const double C49361 =
        (3 * C48948) / C54432 - (C49370 * C90946) / q + C79808 / q - C91718 / q;
    const double C49244 = -(C56070 * be + C49226 * C90948 + C91814) / q;
    const double C49379 = -(C49370 * C90947 + C91814) / q;
    const double C49505 =
        C91826 - (C49514 * C90946) / q + C80698 / q - C91814 / q;
    const double C70259 = C91367 - (C76321 * be + C70288 * C90947) / q - C91678;
    const double C70507 =
        C69367 / C54432 - (C70478 * C90948) / q + C91501 - C91678;
    const double C35153 = -(C35171 * C90946 + C91355) / q;
    const double C70112 = C91319 - (C70288 * C90948) / q + C91485 - C91674;
    const double C72845 =
        C71295 / C54432 - (C77328 * be + C72329 * C90947) / q - C91674;
    const double C69636 = C91475 - (C69812 * C90948) / q - C91670;
    const double C70993 =
        (3 * C69195) / C54432 - (C76569 * be + C70478 * C90947) / q - C91670;
    const double C91224 = C68401 * p;
    const double C35117 = -(C59630 * be + C35099 * C90947 + C91354) / q;
    const double C35684 =
        (3 * C34812) / C54432 - (C35666 * C90948) / q - C91354 / q;
    const double C35630 =
        C35352 / C54432 - (C35648 * C90946) / q - (C72616 * p) / q;
    const double C67613 =
        C67553 / C54432 - (C67554 * C90948) / q + C91432 - C91657;
    const double C72387 =
        C68033 / C54432 - (C77214 * be + C68213 * C90947) / q - C91657;
    const double C91585 = C91199 / q;
    const double C91617 = C91283 / q;
    const double C67584 = C91431 - (C67733 * C90948) / q - C91656;
    const double C70764 = C91236 - (C76512 * be + C67554 * C90947) / q - C91656;
    const double C91616 = C91281 / q;
    const double C67524 = C91427 - (C67703 * C90948) / q - C91653;
    const double C68890 =
        C66990 / C54432 - (C75422 * be + C68372 * C90947) / q - C91653;
    const double C91580 = C91194 / q;
    const double C33539 = -(C33501 * C90948 + C91266) / q;
    const double C34379 = (3 * C33804) / C54432 -
                          (C58696 * be + C34370 * C90947) / q - C91266 / q;
    const double C91136 = C67021 * p;
    const double C34055 = C91303 - (C58161 * be + C70141 * C90947) / q - C91627;
    const double C34442 = C91315 - (C69681 * C90948) / q + C91320 - C91627;
    const double C34298 =
        C67702 / C54432 - (C69195 * C90948) / q + C91317 - C91632;
    const double C35504 =
        C68182 / C54432 - (C60323 * be + C71468 * C90947) / q - C91632;
    const double C91334 = C35558 * p;
    const double C91643 = C91365 / q;
    const double C35693 = -(C35702 * C90946 + C91365) / q;
    const double C91332 = C35414 * p;
    const double C34154 = C91308 - (C69367 * C90948) / q - C91628;
    const double C34352 = C91238 - (C58667 * be + C69195 * C90947) / q - C91628;
    const double C91641 = C91356 / q;
    const double C33948 = C91260 - (C69211 * C90948) / q + C91280 - C91623;
    const double C35064 = C91342 - (C59601 * be + C70317 * C90947) / q - C91623;
    const double C91290 = C70083 * p;
    const double C33947 = C91293 - (C70141 * C90948) / q + C91279 - C91622;
    const double C35792 = C91376 - (C60795 * be + C71626 * C90947) / q - C91622;
    const double C91625 = C91298 / q;
    const double C91296 = C70171 * p;
    const double C33654 = C91265 - (C69383 * C90948) / q - C91611;
    const double C34056 = C91305 - (C58177 * be + C69211 * C90947) / q - C91611;
    const double C33653 = C91264 - (C69665 * C90948) / q - C91610;
    const double C34496 =
        (3 * C69211) / C54432 - (C58903 * be + C69681 * C90947) / q - C91610;
    const double C91612 = C91274 / q;
    const double C91619 = C91288 / q;
    const double C33364 = C91242 - (C69210 * C90948) / q - C91606;
    const double C37520 = C91399 - (C61713 * be + C70333 * C90947) / q - C91606;
    const double C91291 = C33875 * p;
    const double C33355 = C91241 - (C67702 * C90948) / q - C91605;
    const double C36456 =
        C68198 / C54432 - (C61254 * be + C68905 * C90947) / q - C91605;
    const double C91285 = C69991 * p;
    const double C91330 = C34595 * p;
    const double C35576 =
        (3 * C34595) / C54432 - (C35558 * C90948) / q - C91355 / q;
    const double C33130 =
        C67269 / C54432 - (C67569 * C90948) / q + C91231 - C91601;
    const double C35495 = C70317 / C54432 - (C71468 * C90946) / q - C91601;
    const double C32707 = C34775 / q - (C32743 * C90946) / q - (C68153 * p) / q;
    const double C34739 =
        C34784 / C54432 - (C34775 * C90946) / q - (C32743 * p) / q;
    const double C34848 = C91282 - (C34812 * C90948) / q - C91347 / q;
    const double C35118 = -(C51522 * be + C35100 * C90947 + C91347) / q;
    const double C91642 = C91363 / q;
    const double C35531 = -(C60352 * be + C35522 * C90947 + C91363) / q;
    const double C32725 = C91211 - (C68033 * C90946) / q - C91592;
    const double C32986 = C91225 - (C66990 * C90948) / q + C91226 - C91592;
    const double C32842 = C91215 - (C67254 * C90948) / q - C91593;
    const double C33175 = C91238 - (C67569 * C90946) / q - C91593;
    const double C91640 = C91351 / q;
    const double C32636 = C91183 - (C67006 * C90948) / q + C91190 - C91589;
    const double C34757 = C91342 - (C68182 * C90946) / q - C91589;
    const double C91192 = C67856 * p;
    const double C91635 = C91328 / q;
    const double C32635 = C91203 - (C68033 * C90948) / q + C91188 - C91588;
    const double C35639 = C91376 - (C71295 * C90946) / q - C91588;
    const double C91590 = C91207 / q;
    const double C33094 =
        C67930 / C54432 - (C56721 * be + C67931 * C90947) / q + C91231 - C91599;
    const double C34325 = C70038 / C54432 - (C70244 * C90946) / q - C91599;
    const double C33540 = -(C33502 * C90948 + C91267) / q;
    const double C33822 =
        C91282 - (C37544 * be + C33804 * C90947) / q - C91267 / q;
    const double C91630 = C91309 / q;
    const double C34100 = -(C34082 * C90948 + C91309) / q;
    const double C32950 = C91226 - (C56483 * be + C68138 * C90947) / q - C91595;
    const double C33157 = C91237 - (C67931 * C90946) / q - C91595;
    const double C91596 = C91220 / q;
    const double C32401 = C91176 - (C67436 * C90946) / q - C91573;
    const double C32806 =
        C66811 / C54432 - (C56248 * be + C66812 * C90947) / q + C91215 - C91573;
    const double C91206 = C68063 * p;
    const double C32348 = C91150 - (C67269 * C90948) / q - C91568;
    const double C36439 = C70333 / C54432 - (C68905 * C90946) / q - C91568;
    const double C32708 = C36736 / q - (C32744 * C90946) / q - (C33040 * p) / q;
    const double C33022 =
        (3 * C32744) / C54432 - (C33040 * C90946) / q - (C68659 * p) / q;
    const double C36702 =
        C73526 / C54432 - (C36736 * C90946) / q - (C32744 * p) / q;
    const double C91191 = C67827 * p;
    const double C34550 = -(C17981 * be + C34532 * C90947 + C91327) / q;
    const double C37316 = C91379 - (C37282 * C90948) / q - C91327 / q;
    const double C91638 = C91326 / q;
    const double C34541 = -(C17971 * be + C34523 * C90947 + C91326) / q;
    const double C32347 = C91148 - (C67553 * C90948) / q - C91567;
    const double C33184 =
        C67006 / C54432 - (C56753 * be + C67569 * C90947) / q - C91567;
    const double C34343 = C69211 / C54432 - (C69195 * C90946) / q - C91567;
    const double C32563 = C91188 - (C55944 * be + C67914 * C90947) / q - C91581;
    const double C35477 = C70020 / C54432 - (C71180 * C90946) / q - C91581;
    const double C91583 = C91198 / q;
    const double C91618 = C91284 / q;
    const double C91614 = C91278 / q;
    const double C91164 = C67495 * p;
    const double C32564 = C91190 - (C55961 * be + C67930 * C90947) / q - C91582;
    const double C36405 = C70037 / C54432 - (C68875 * C90946) / q - C91582;
    const double C91154 = C67378 * p;
    const double C33256 = -(C33220 * C90948 + C91245) / q;
    const double C37299 =
        C91393 - (C20811 * be + C37282 * C90947) / q - C91245 / q;
    const double C91615 = C91244 / q;
    const double C33247 = -(C33211 * C90948 + C91244) / q;
    const double C91609 = C91263 / q;
    const double C32276 =
        C66827 / C54432 - (C55472 * be + C66828 * C90947) / q + C91150 - C91563;
    const double C33409 = C69094 / C54432 - (C67642 * C90946) / q - C91563;
    const double C91151 = C67349 * p;
    const double C91604 = C91243 / q;
    const double C32275 =
        C91158 - (C55455 * be + C67436 * C90947) / q + C91148 - C91562;
    const double C34181 = C69095 / C54432 - (C69078 * C90946) / q - C91562;
    const double C91564 = C91161 / q;
    const double C32062 = C91117 - (C67005 * C90948) / q - C91554;
    const double C36719 = C91399 - (C68198 * C90946) / q - C91554;
    const double C91193 = C32491 * p;
    const double C91201 = C68004 * p;
    const double C32053 = C91116 - (C66989 * C90948) / q - C91553;
    const double C32726 = C91213 - (C67006 * C90946) / q - C91553;
    const double C91634 = C91323 / q;
    const double C32052 = C91115 - (C66973 * C90948) / q - C91552;
    const double C33031 =
        (3 * C67006) / C54432 - (C66990 * C90946) / q - C91552;
    const double C91577 = C91185 / q;
    const double C31986 = C91117 - (C54939 * be + C66827 * C90947) / q - C91548;
    const double C36013 = C69093 / C54432 - (C67658 * C90946) / q - C91548;
    const double C91153 = C32203 * p;
    const double C91156 = C67407 * p;
    const double C31977 = C91116 - (C54924 * be + C66811 * C90947) / q - C91547;
    const double C32402 = C91178 - (C66828 * C90946) / q - C91547;
    const double C91603 = C91240 / q;
    const double C31976 = C91115 - (C54908 * be + C66795 * C90947) / q - C91546;
    const double C32869 =
        (3 * C66828) / C54432 - (C66812 * C90946) / q - C91546;
    const double C91549 = C91127 / q;
    const double C91558 = C91145 / q;
    const double C82255 = C91964 - (C82284 * C90947) / q - C92275;
    const double C82503 =
        C81363 / C54432 - (C76569 * be + C82474 * C90948) / q + C92098 - C92275;
    const double C51582 = -(C51601 * C90946 + C91952) / q;
    const double C82108 =
        C91916 - (C76321 * be + C82284 * C90948) / q + C92082 - C92271;
    const double C84841 = C83291 / C54432 - (C84325 * C90947) / q - C92271;
    const double C81632 = C92072 - (C75936 * be + C81808 * C90948) / q - C92267;
    const double C82989 =
        (3 * C81191) / C54432 - (C82474 * C90947) / q - C92267;
    const double C91821 = C80397 * p;
    const double C51544 = -(C51525 * C90947 + C91951) / q;
    const double C52124 = (3 * C51250) / C54432 -
                          (C60588 * be + C52106 * C90948) / q - C91951 / q;
    const double C52070 =
        C51792 / C54432 - (C52088 * C90946) / q - (C84612 * p) / q;
    const double C79609 =
        C79549 / C54432 - (C76512 * be + C79550 * C90948) / q + C92029 - C92254;
    const double C84383 = C80029 / C54432 - (C80209 * C90947) / q - C92254;
    const double C92182 = C91796 / q;
    const double C92214 = C91880 / q;
    const double C79580 = C92028 - (C76468 * be + C79729 * C90948) / q - C92253;
    const double C82760 = C91833 - (C79550 * C90947) / q - C92253;
    const double C92213 = C91878 / q;
    const double C79520 = C92024 - (C74692 * be + C79699 * C90948) / q - C92250;
    const double C80886 = C78986 / C54432 - (C80368 * C90947) / q - C92250;
    const double C92177 = C91791 / q;
    const double C49991 = -(C57253 * be + C49955 * C90948 + C91863) / q;
    const double C50819 =
        (3 * C50244) / C54432 - (C50810 * C90947) / q - C91863 / q;
    const double C91733 = C79017 * p;
    const double C50495 = C91900 - (C82137 * C90947) / q - C92224;
    const double C50882 =
        C91912 - (C58903 * be + C81677 * C90948) / q + C91917 - C92224;
    const double C50738 =
        C79698 / C54432 - (C58667 * be + C81191 * C90948) / q + C91914 - C92229;
    const double C51944 = C80178 / C54432 - (C83464 * C90947) / q - C92229;
    const double C91931 = C51998 * p;
    const double C92240 = C91962 / q;
    const double C52133 = -(C52142 * C90946 + C91962) / q;
    const double C91929 = C51854 * p;
    const double C50594 = C91905 - (C58432 * be + C81363 * C90948) / q - C92225;
    const double C50792 = C91835 - (C81191 * C90947) / q - C92225;
    const double C92238 = C91953 / q;
    const double C50388 =
        C91857 - (C58177 * be + C81207 * C90948) / q + C91877 - C92220;
    const double C51488 = C91939 - (C82313 * C90947) / q - C92220;
    const double C91887 = C82079 * p;
    const double C50387 =
        C91890 - (C58161 * be + C82137 * C90948) / q + C91876 - C92219;
    const double C52232 = C91973 - (C83622 * C90947) / q - C92219;
    const double C92222 = C91895 / q;
    const double C91893 = C82167 * p;
    const double C50100 = C91862 - (C57691 * be + C81379 * C90948) / q - C92208;
    const double C50496 = C91902 - (C81207 * C90947) / q - C92208;
    const double C50099 = C91861 - (C57675 * be + C81661 * C90948) / q - C92207;
    const double C50936 =
        (3 * C81207) / C54432 - (C81677 * C90947) / q - C92207;
    const double C92209 = C91871 / q;
    const double C92216 = C91885 / q;
    const double C49820 = C91839 - (C57207 * be + C81206 * C90948) / q - C92203;
    const double C53960 = C91996 - (C82329 * C90947) / q - C92203;
    const double C91888 = C50315 * p;
    const double C49811 = C91838 - (C57192 * be + C79698 * C90948) / q - C92202;
    const double C52896 = C80194 / C54432 - (C80901 * C90947) / q - C92202;
    const double C91882 = C81987 * p;
    const double C91927 = C51035 * p;
    const double C52016 = (3 * C51035) / C54432 -
                          (C60412 * be + C51998 * C90948) / q - C91952 / q;
    const double C49586 =
        C79265 / C54432 - (C56753 * be + C79565 * C90948) / q + C91828 - C92198;
    const double C51935 = C82313 / C54432 - (C83464 * C90946) / q - C92198;
    const double C49163 = C51215 / q - (C49199 * C90946) / q - (C80149 * p) / q;
    const double C51179 =
        C51224 / C54432 - (C51215 * C90946) / q - (C49199 * p) / q;
    const double C51284 =
        C91879 - (C34809 * be + C51250 * C90948) / q - C91944 / q;
    const double C51545 = -(C51526 * C90947 + C91944) / q;
    const double C92239 = C91960 / q;
    const double C51971 = -(C51962 * C90947 + C91960) / q;
    const double C49181 = C91808 - (C80029 * C90946) / q - C92189;
    const double C49442 =
        C91822 - (C56515 * be + C78986 * C90948) / q + C91823 - C92189;
    const double C49298 = C91812 - (C56279 * be + C79250 * C90948) / q - C92190;
    const double C49631 = C91835 - (C79565 * C90946) / q - C92190;
    const double C92237 = C91948 / q;
    const double C49092 =
        C91780 - (C56025 * be + C79002 * C90948) / q + C91787 - C92186;
    const double C51197 = C91939 - (C80178 * C90946) / q - C92186;
    const double C91789 = C79852 * p;
    const double C92232 = C91925 / q;
    const double C49091 =
        C91800 - (C56008 * be + C80029 * C90948) / q + C91785 - C92185;
    const double C52079 = C91973 - (C83291 * C90946) / q - C92185;
    const double C92187 = C91804 / q;
    const double C49550 =
        C79926 / C54432 - (C79927 * C90947) / q + C91828 - C92196;
    const double C50765 = C82034 / C54432 - (C82240 * C90946) / q - C92196;
    const double C49992 = -(C33498 * be + C49956 * C90948 + C91864) / q;
    const double C50262 = C91879 - (C50244 * C90947) / q - C91864 / q;
    const double C92227 = C91906 / q;
    const double C50540 = -(C58223 * be + C50522 * C90948 + C91906) / q;
    const double C49406 = C91823 - (C80134 * C90947) / q - C92192;
    const double C49613 = C91834 - (C79927 * C90946) / q - C92192;
    const double C92193 = C91817 / q;
    const double C48857 = C91773 - (C79432 * C90946) / q - C92170;
    const double C49262 =
        C78807 / C54432 - (C78808 * C90947) / q + C91812 - C92170;
    const double C91803 = C80059 * p;
    const double C48804 = C91747 - (C55535 * be + C79265 * C90948) / q - C92165;
    const double C52879 = C82329 / C54432 - (C80901 * C90946) / q - C92165;
    const double C49164 = C53176 / q - (C49200 * C90946) / q - (C49496 * p) / q;
    const double C49478 =
        (3 * C49200) / C54432 - (C49496 * C90946) / q - (C80655 * p) / q;
    const double C53142 =
        C85522 / C54432 - (C53176 * C90946) / q - (C49200 * p) / q;
    const double C91788 = C79823 * p;
    const double C50990 = -(C50972 * C90947 + C91924) / q;
    const double C53756 =
        C91976 - (C20811 * be + C53722 * C90948) / q - C91924 / q;
    const double C92235 = C91923 / q;
    const double C50981 = -(C50963 * C90947 + C91923) / q;
    const double C48803 = C91745 - (C55518 * be + C79549 * C90948) / q - C92164;
    const double C49640 = C79002 / C54432 - (C79565 * C90947) / q - C92164;
    const double C50783 = C81207 / C54432 - (C81191 * C90946) / q - C92164;
    const double C49019 = C91785 - (C79910 * C90947) / q - C92178;
    const double C51917 = C82016 / C54432 - (C83176 * C90946) / q - C92178;
    const double C92180 = C91795 / q;
    const double C92215 = C91881 / q;
    const double C92211 = C91875 / q;
    const double C91761 = C79491 * p;
    const double C49020 = C91787 - (C79926 * C90947) / q - C92179;
    const double C52845 = C82033 / C54432 - (C80871 * C90946) / q - C92179;
    const double C91751 = C79374 * p;
    const double C49712 = -(C16653 * be + C49676 * C90948 + C91842) / q;
    const double C53739 = C91990 - (C53722 * C90947) / q - C91842 / q;
    const double C92212 = C91841 / q;
    const double C49703 = -(C16643 * be + C49667 * C90948 + C91841) / q;
    const double C92206 = C91860 / q;
    const double C48732 =
        C78823 / C54432 - (C78824 * C90947) / q + C91747 - C92160;
    const double C49865 = C81090 / C54432 - (C79638 * C90946) / q - C92160;
    const double C91748 = C79345 * p;
    const double C92201 = C91840 / q;
    const double C48731 = C91755 - (C79432 * C90947) / q + C91745 - C92159;
    const double C50621 = C81091 / C54432 - (C81074 * C90946) / q - C92159;
    const double C92161 = C91758 / q;
    const double C48518 = C91714 - (C55031 * be + C79001 * C90948) / q - C92151;
    const double C53159 = C91996 - (C80194 * C90946) / q - C92151;
    const double C91790 = C48947 * p;
    const double C91798 = C80000 * p;
    const double C48509 = C91713 - (C55016 * be + C78985 * C90948) / q - C92150;
    const double C49182 = C91810 - (C79002 * C90946) / q - C92150;
    const double C92231 = C91920 / q;
    const double C48508 = C91712 - (C55000 * be + C78969 * C90948) / q - C92149;
    const double C49487 =
        (3 * C79002) / C54432 - (C78986 * C90946) / q - C92149;
    const double C92174 = C91782 / q;
    const double C48442 = C91714 - (C78823 * C90947) / q - C92145;
    const double C52453 = C81089 / C54432 - (C79654 * C90946) / q - C92145;
    const double C91750 = C48659 * p;
    const double C91753 = C79403 * p;
    const double C48433 = C91713 - (C78807 * C90947) / q - C92144;
    const double C48858 = C91775 - (C78824 * C90946) / q - C92144;
    const double C92200 = C91837 / q;
    const double C48432 = C91712 - (C78791 * C90947) / q - C92143;
    const double C49325 =
        (3 * C78824) / C54432 - (C78808 * C90946) / q - C92143;
    const double C92146 = C91724 / q;
    const double C92155 = C91742 / q;
    const double C90958 = C90539 / q;
    const double C90990 = C90601 / q;
    const double C90622 = C15472 / C54432;
    const double C15450 = (2 * C15472) / q -
                          (C54729 * be + C15471 * C90946) / q -
                          (C54733 * p) / q;
    const double C90571 = C15482 / C54432;
    const double C15451 = (3 * C15482) / C54432 -
                          (C15468 * be + C15472 * C90946) / q -
                          (C15471 * p) / q;
    const double C15461 =
        C54762 / q - (C15479 * be + C15482 * C90946) / q - (C15472 * p) / q;
    const double C19522 = C61013 / C54432 -
                          (C19557 * be + C19560 * C90946) / q -
                          (C15888 * p) / q;
    const double C90572 = C15779 * p;
    const double C90538 = C15780 * p;
    const double C15852 =
        C19560 / q - (C19548 * be + C15888 * C90946) / q - (C16328 * p) / q;
    const double C16310 = (3 * C15888) / C54432 -
                          (C56263 * be + C16328 * C90946) / q -
                          (C56267 * p) / q;
    const double C15851 =
        C16926 / q - (C55488 * be + C15887 * C90946) / q - (C55492 * p) / q;
    const double C16886 = C16936 / C54432 -
                          (C16923 * be + C16926 * C90946) / q -
                          (C15887 * p) / q;
    const double C90541 = C16068 * p;
    const double C90608 = C16067 * p;
    const double C90540 = C16418 * p;
    const double C90575 = C16562 * p;
    const double C90537 = C16274 * p;
    const double C90653 = C16806 * p;
    const double C90652 = C16816 / C54432;
    const double C19918 = C21080 / C54432 -
                          (C21068 * be + C19952 * C90946) / q -
                          (C16616 * p) / q;
    const double C21042 = -(C21077 * be + C21080 * C90946 + C19952 * p) / q;
    const double C91027 = C90696 / q;
    const double C90712 = C17108 / C54432;
    const double C16836 = C57094 / q - (C16816 * C90947) / q - (C17108 * p) / q;
    const double C17125 =
        (2 * C17108) / q - (C17107 * C90947) / q - (C57559 * p) / q;
    const double C17126 =
        (3 * C16816) / C54432 - (C17108 * C90947) / q - (C17107 * p) / q;
    const double C90658 = C17396 * p;
    const double C90699 = C17395 * p;
    const double C90657 = C17746 * p;
    const double C18494 = -(C35061 * be + C18528 * C90946 + C18968 * p) / q;
    const double C90675 = C17890 * p;
    const double C90656 = C17602 * p;
    const double C17468 = -(C37782 * be + C17504 * C90946 + C17800 * p) / q;
    const double C18124 = -(C18141 * be + C18144 * C90946 + C90736) / q;
    const double C20188 = C90788 - (C20150 * C90948) / q + C90613 - C90736 / q;
    const double C19484 = C90581 - (C19446 * C90948) / q - C90789 / q;
    const double C20169 = -(C20150 * C90947 + C90789) / q;
    const double C20947 = -(C20963 * be + C20966 * C90946 + C90789) / q;
    const double C18164 = -(C18144 * C90947 + C90739) / q;
    const double C21004 = C90786 - (C20966 * C90948) / q + C90705 - C90739 / q;
    const double C18174 = C90602 - (C18134 * C90948) / q + C90611 - C90740 / q;
    const double C18690 = -(C51674 * be + C18708 * C90946 + C90740) / q;
    const double C18460 = C90697 - (C18426 * C90948) / q + C90703 - C90750 / q;
    const double C18726 = -(C18708 * C90947 + C90750) / q;
    const double C18154 = -(C18134 * C90947 + C90738) / q;
    const double C18409 = -(C34953 * be + C18426 * C90946 + C90738) / q;
    const double C19884 =
        C19446 / C54432 - (C19850 * C90948) / q + C90638 - C90738 / q;
    const double C15492 = -(C15471 * C90947 + C90536) / q;
    const double C16265 = (3 * C15780) / C54432 -
                          (C56189 * be + C16274 * C90946) / q - C90536 / q;
    const double C90566 = C55340 * p;
    const double C16598 =
        C19952 / q - (C56737 * be + C16616 * C90946) / q - (C56741 * p) / q;
    const double C90570 = C55400 * p;
    const double C17782 = C17504 / C54432 -
                          (C58651 * be + C17800 * C90946) / q -
                          (C58655 * p) / q;
    const double C90573 = C55429 * p;
    const double C18950 = C18528 / C54432 -
                          (C60307 * be + C18968 * C90946) / q -
                          (C60311 * p) / q;
    const double C91005 = C90606 / q;
    const double C16085 = -(C16067 * C90947 + C90606) / q;
    const double C16103 =
        C16068 / q - (C16067 * C90948) / q + C55859 / q - C90993;
    const double C19049 = C90774 - (C60470 * be + C19058 * C90946) / q - C90993;
    const double C90997 = C90624 / q;
    const double C16427 = -(C16418 * C90947 + C90624) / q;
    const double C90671 = C57499 * p;
    const double C17926 = -(C58887 * be + C17944 * C90946 + C58891 * p) / q;
    const double C17143 = C57528 / q - (C17107 * C90948) / q - C91015;
    const double C17899 =
        (3 * C17396) / C54432 - (C17890 * C90947) / q - C91015;
    const double C90692 = C57985 * p;
    const double C19238 = -(C60779 * be + C19256 * C90946 + C60783 * p) / q;
    const double C17431 =
        C17396 / q - (C17395 * C90948) / q + C58014 / q - C91028;
    const double C19211 = C90774 - (C19202 * C90947) / q - C91028;
    const double C17467 = -(C58131 * be + C17503 * C90946 + C58135 * p) / q;
    const double C90714 = C58389 * p;
    const double C18932 = C90635 - (C18914 * C90948) / q + C90767 - C90768 / q;
    const double C19067 = -(C19058 * C90947 + C90768) / q;
    const double C19193 = -(C60707 * be + C19202 * C90946 + C90768) / q;
    const double C91555 = C91139 / q;
    const double C36030 =
        C73072 / C54432 - (C36064 * C90946) / q - (C32456 * p) / q;
    const double C32420 = C36064 / q - (C32456 * C90946) / q - (C32896 * p) / q;
    const double C32878 =
        (3 * C32456) / C54432 - (C32896 * C90946) / q - (C68430 * p) / q;
    const double C32419 = C33463 / q - (C32455 * C90946) / q - (C67673 * p) / q;
    const double C33427 =
        C33472 / C54432 - (C33463 * C90946) / q - (C32455 * p) / q;
    const double C34658 = -(C34676 * C90946 + C91336) / q;
    const double C36668 = C91388 - (C36634 * C90948) / q + C91213 - C91336 / q;
    const double C35996 = C91181 - (C35962 * C90948) / q - C91389 / q;
    const double C36651 = -(C20147 * be + C36634 * C90947 + C91389) / q;
    const double C37401 = -(C37418 * C90946 + C91389) / q;
    const double C34694 = -(C18141 * be + C34676 * C90947 + C91339) / q;
    const double C37452 = C91386 - (C37418 * C90948) / q + C91305 - C91339 / q;
    const double C34703 = C91202 - (C34667 * C90948) / q + C91211 - C91340 / q;
    const double C35226 = -(C35244 * C90946 + C91340) / q;
    const double C34992 = C91297 - (C34956 * C90948) / q + C91303 - C91350 / q;
    const double C35262 = -(C51674 * be + C35244 * C90947 + C91350) / q;
    const double C34685 = -(C18131 * be + C34667 * C90947 + C91338) / q;
    const double C34938 = -(C34956 * C90946 + C91338) / q;
    const double C36388 =
        C35962 / C54432 - (C36354 * C90948) / q + C91238 - C91338 / q;
    const double C35468 = C91235 - (C35450 * C90948) / q + C91367 - C91368 / q;
    const double C35603 = -(C60470 * be + C35594 * C90947 + C91368) / q;
    const double C35729 = -(C35738 * C90946 + C91368) / q;
    const double C92152 = C91736 / q;
    const double C52470 =
        C85068 / C54432 - (C52504 * C90946) / q - (C48912 * p) / q;
    const double C48876 = C52504 / q - (C48912 * C90946) / q - (C49352 * p) / q;
    const double C49334 =
        (3 * C48912) / C54432 - (C49352 * C90946) / q - (C80426 * p) / q;
    const double C48875 = C49919 / q - (C48911 * C90946) / q - (C79669 * p) / q;
    const double C49883 =
        C49928 / C54432 - (C49919 * C90946) / q - (C48911 * p) / q;
    const double C51098 = -(C51116 * C90946 + C91933) / q;
    const double C53108 =
        C91985 - (C20147 * be + C53074 * C90948) / q + C91810 - C91933 / q;
    const double C52436 =
        C91778 - (C19443 * be + C52402 * C90948) / q - C91986 / q;
    const double C53091 = -(C53074 * C90947 + C91986) / q;
    const double C53841 = -(C53858 * C90946 + C91986) / q;
    const double C51134 = -(C51116 * C90947 + C91936) / q;
    const double C53892 =
        C91983 - (C20963 * be + C53858 * C90948) / q + C91902 - C91936 / q;
    const double C51143 =
        C91799 - (C18131 * be + C51107 * C90948) / q + C91808 - C91937 / q;
    const double C51659 = -(C51678 * C90946 + C91937) / q;
    const double C51420 =
        C91894 - (C34953 * be + C51386 * C90948) / q + C91900 - C91947 / q;
    const double C51697 = -(C51678 * C90947 + C91947) / q;
    const double C51125 = -(C51107 * C90947 + C91935) / q;
    const double C51369 = -(C51386 * C90946 + C91935) / q;
    const double C52828 = C52402 / C54432 -
                          (C20954 * be + C52794 * C90948) / q + C91835 -
                          C91935 / q;
    const double C51908 =
        C91832 - (C60233 * be + C51890 * C90948) / q + C91964 - C91965 / q;
    const double C52043 = -(C52034 * C90947 + C91965) / q;
    const double C52169 = -(C52178 * C90946 + C91965) / q;
    const double C15429 = -(C15387 * C90948 + C90530) / q;
    const double C90964 = C90556 / q;
    const double C90618 = C15388 / C54432;
    const double C15366 = (2 * C15388) / q -
                          (C54550 * be + C15387 * C90946) / q -
                          (C54554 * p) / q;
    const double C90562 = C15398 / C54432;
    const double C15367 = (3 * C15398) / C54432 -
                          (C15384 * be + C15388 * C90946) / q -
                          (C15387 * p) / q;
    const double C15377 =
        C54583 / q - (C15395 * be + C15398 * C90946) / q - (C15388 * p) / q;
    const double C90529 = C15708 * p;
    const double C90563 = C15707 * p;
    const double C90528 = C16238 * p;
    const double C16256 = -(C16238 * C90948 + C90620) / q;
    const double C90600 = C15995 * p;
    const double C91003 = C90564 / q;
    const double C15743 = -(C15707 * C90948 + C90564) / q;
    const double C90532 = C15996 * p;
    const double C90531 = C16382 * p;
    const double C16373 = (3 * C15996) / C54432 -
                          (C56368 * be + C16382 * C90946) / q - C90530 / q;
    const double C90565 = C16526 * p;
    const double C16716 = -(C16733 * be + C16736 * C90946 + C90647) / q;
    const double C19389 = C90784 - (C19370 * C90947) / q + C90578 - C90647 / q;
    const double C16746 = C90557 - (C16726 * C90947) / q + C90576 - C90649 / q;
    const double C17018 = -(C33574 * be + C17036 * C90946 + C90649) / q;
    const double C91024 = C90691 / q;
    const double C16776 = -(C16736 * C90948 + C90651) / q;
    const double C20909 = C90795 - (C20890 * C90947) / q + C90687 - C90651 / q;
    const double C91039 = C90732 / q;
    const double C18341 = -(C34881 * be + C18358 * C90946 + C90732) / q;
    const double C19408 = -(C19370 * C90948 + C90785) / q;
    const double C20093 = C90610 - (C20074 * C90947) / q - C90785 / q;
    const double C20871 = -(C20887 * be + C20890 * C90946 + C90785) / q;
    const double C17719 =
        C90632 - (C17710 * C90947) / q + C58119 / q - C90711 / q;
    const double C16766 = -(C16726 * C90948 + C90650) / q;
    const double C17306 = -(C37612 * be + C17324 * C90946 + C90650) / q;
    const double C19799 =
        C20074 / C54432 - (C19782 * C90947) / q + C90637 - C90650 / q;
    const double C91034 = C90685 / q;
    const double C17305 = -(C57859 * be + C17323 * C90946 + C90685) / q;
    const double C18044 = -(C18061 * be + C18064 * C90946 + C90730) / q;
    const double C20112 = C90784 - (C20074 * C90948) / q - C90730 / q;
    const double C91040 = C90733 / q;
    const double C91042 = C90748 / q;
    const double C91023 = C90690 / q;
    const double C18094 = C90595 - (C18054 * C90948) / q - C90734 / q;
    const double C18618 = -(C51598 * be + C18636 * C90946 + C90734) / q;
    const double C17342 =
        C90689 - (C17324 * C90947) / q + C57910 / q - C90670 / q;
    const double C15408 = C54598 / q - (C15387 * C90947) / q - C90952;
    const double C16229 =
        (3 * C15708) / C54432 - (C56131 * be + C16238 * C90946) / q - C90952;
    const double C15725 =
        C15708 / q - (C15707 * C90947) / q + C55251 / q - C90967;
    const double C17557 = C90710 - (C58284 * be + C17566 * C90946) / q - C90967;
    const double C15977 =
        C18054 / q - (C55706 * be + C15995 * C90946) / q - C90983;
    const double C16013 = C55739 / q - (C15995 * C90947) / q - C90986;
    const double C16544 = C15708 / C54432 - (C16526 * C90948) / q - C90986;
    const double C18869 =
        C18358 / C54432 - (C60175 * be + C18878 * C90946) / q - C90986;
    const double C16031 = C15996 / q - (C15995 * C90948) / q - C90988;
    const double C19013 = C90772 - (C60412 * be + C19022 * C90946) / q - C90988;
    const double C16391 = C55966 / q - (C16382 * C90947) / q - C90999;
    const double C16517 = C90632 - (C56606 * be + C16526 * C90946) / q - C90999;
    const double C17341 =
        C18358 / q - (C17323 * C90947) / q + C57893 / q - C91022;
    const double C17872 = C90710 - (C17854 * C90948) / q - C91022;
    const double C18653 = C59787 / q - (C18635 * C90947) / q - C91044;
    const double C19184 =
        (3 * C18358) / C54432 - (C19166 * C90948) / q - C91044;
    const double C18896 = C90632 - (C18878 * C90948) / q - C91046;
    const double C19031 = C60012 / q - (C19022 * C90947) / q - C91046;
    const double C33274 = -(C33292 * C90946 + C91247) / q;
    const double C35911 =
        C91384 - (C19367 * be + C35894 * C90947) / q + C91178 - C91247 / q;
    const double C33301 =
        C91157 - (C16723 * be + C33283 * C90947) / q + C91176 - C91249 / q;
    const double C33559 = -(C33578 * C90946 + C91249) / q;
    const double C33328 = -(C33292 * C90948 + C91251) / q;
    const double C37367 =
        C91395 - (C20887 * be + C37350 * C90947) / q + C91287 - C91251 / q;
    const double C35928 = -(C35894 * C90948 + C91385) / q;
    const double C36583 =
        C91210 - (C20071 * be + C36566 * C90947) / q - C91385 / q;
    const double C37333 = -(C37350 * C90946 + C91385) / q;
    const double C34271 =
        C91232 - (C58521 * be + C34262 * C90947) / q + C70244 / q - C91311 / q;
    const double C33319 = -(C33283 * C90948 + C91250) / q;
    const double C33858 = -(C33876 * C90946 + C91250) / q;
    const double C36303 = C36566 / C54432 -
                          (C20878 * be + C36286 * C90947) / q + C91237 -
                          C91250 / q;
    const double C91637 = C91333 / q;
    const double C91639 = C91348 / q;
    const double C33894 =
        C91289 - (C37612 * be + C33876 * C90947) / q + C70038 / q - C91270 / q;
    const double C49730 = -(C49748 * C90946 + C91844) / q;
    const double C52351 = C91981 - (C52334 * C90947) / q + C91775 - C91844 / q;
    const double C49757 = C91754 - (C49739 * C90947) / q + C91773 - C91846 / q;
    const double C50010 = -(C50028 * C90946 + C91846) / q;
    const double C49784 = -(C16733 * be + C49748 * C90948 + C91848) / q;
    const double C53807 = C91992 - (C53790 * C90947) / q + C91884 - C91848 / q;
    const double C52368 = -(C19367 * be + C52334 * C90948 + C91982) / q;
    const double C53023 = C91807 - (C53006 * C90947) / q - C91982 / q;
    const double C53773 = -(C53790 * C90946 + C91982) / q;
    const double C50711 =
        C91829 - (C50702 * C90947) / q + C82240 / q - C91908 / q;
    const double C49775 = -(C16723 * be + C49739 * C90948 + C91847) / q;
    const double C50298 = -(C50316 * C90946 + C91847) / q;
    const double C52743 =
        C53006 / C54432 - (C52726 * C90947) / q + C91834 - C91847 / q;
    const double C92234 = C91930 / q;
    const double C92236 = C91945 / q;
    const double C50334 =
        C91886 - (C50316 * C90947) / q + C82034 / q - C91867 / q;
    const double C90963 = C90553 / q;
    const double C15335 = -(C15314 * C90947 + C90518) / q;
    const double C19275 =
        C90779 - (C19291 * be + C19294 * C90946) / q + C90549 - C90518 / q;
    const double C90982 = C90593 / q;
    const double C15356 = -(C15314 * C90948 + C90523) / q;
    const double C19979 =
        C90793 - (C19995 * be + C19998 * C90946) / q + C90589 - C90523 / q;
    const double C15672 = -(C15636 * C90948 + C90555) / q;
    const double C15942 = -(C15924 * C90947 + C90555) / q;
    const double C19697 = C20814 / C54432 -
                          (C20802 * be + C19714 * C90946) / q + C90630 -
                          C90555 / q;
    const double C16636 =
        C56800 / q - (C16653 * be + C16656 * C90946) / q - C91006;
    const double C19313 = C90781 - (C19294 * C90947) / q - C91006;
    const double C90962 = C90551 / q;
    const double C17288 = C90639 - (C17252 * C90948) / q - C91021;
    const double C18307 = C90722 - (C18290 * C90947) / q - C91021;
    const double C91000 = C90554 / q;
    const double C15671 = -(C15635 * C90948 + C90554) / q;
    const double C16666 = C90546 - (C16646 * C90947) / q - C91007;
    const double C16946 =
        C57273 / q - (C33498 * be + C16964 * C90946) / q - C91007;
    const double C17234 =
        C57755 / q - (C37544 * be + C17252 * C90946) / q - C91018;
    const double C19731 = C19998 / C54432 - (C19714 * C90947) / q - C91018;
    const double C17964 =
        C58949 / q - (C17981 * be + C17984 * C90946) / q - C91037;
    const double C20036 = C90781 - (C19998 * C90948) / q - C91037;
    const double C91001 = C90591 / q;
    const double C15941 = -(C15923 * C90947 + C90591) / q;
    const double C90981 = C90592 / q;
    const double C18273 =
        C59402 / q - (C34809 * be + C18290 * C90946) / q - C91041;
    const double C19748 = C19294 / C54432 - (C19714 * C90948) / q - C91041;
    const double C18014 = C90586 - (C17974 * C90948) / q - C91038;
    const double C18546 =
        C59650 / q - (C51522 * be + C18564 * C90946) / q - C91038;
    const double C15617 =
        C16646 / q - (C55092 * be + C15635 * C90946) / q + C55096 / q - C90961;
    const double C16211 = C90616 - (C16202 * C90947) / q - C90961;
    const double C15905 =
        C17974 / q - (C55580 * be + C15923 * C90946) / q + C55584 / q - C90980;
    const double C16364 = C90616 - (C16346 * C90948) / q - C90980;
    const double C16945 =
        C57257 / q - (C57253 * be + C16963 * C90946) / q - C91012;
    const double C17539 =
        (3 * C16646) / C54432 - (C17530 * C90947) / q - C91012;
    const double C17233 =
        C57739 / q - (C57735 * be + C17251 * C90946) / q - C91017;
    const double C17692 = C16646 / C54432 - (C17674 * C90948) / q - C91017;
    const double C18851 = C17974 / C54432 - (C18842 * C90947) / q - C91017;
    const double C17269 = C18290 / q - (C17251 * C90947) / q - C91019;
    const double C17836 = C90706 - (C17818 * C90948) / q - C91019;
    const double C17287 = C17252 / q - (C17251 * C90948) / q - C91020;
    const double C19139 = C90769 - (C19130 * C90947) / q - C91020;
    const double C17683 = C90629 - (C17674 * C90947) / q - C91033;
    const double C17809 =
        C58700 / q - (C58696 * be + C17818 * C90946) / q - C91033;
    const double C18545 =
        C59634 / q - (C59630 * be + C18563 * C90946) / q - C91043;
    const double C19004 =
        (3 * C17974) / C54432 - (C18986 * C90948) / q - C91043;
    const double C18860 = C90629 - (C18842 * C90948) / q - C91045;
    const double C19121 =
        C60592 / q - (C60588 * be + C19130 * C90946) / q - C91045;
    const double C31929 = -(C15311 * be + C31910 * C90947 + C91120) / q;
    const double C35809 = C91379 - (C35826 * C90946) / q + C91149 - C91120 / q;
    const double C31948 = -(C31910 * C90948 + C91123) / q;
    const double C36481 = C91393 - (C36498 * C90946) / q + C91189 - C91123 / q;
    const double C32240 = -(C32204 * C90948 + C91155) / q;
    const double C32510 = -(C19986 * be + C32492 * C90947 + C91155) / q;
    const double C36201 =
        C37282 / C54432 - (C36218 * C90946) / q + C91230 - C91155 / q;
    const double C48385 = -(C48366 * C90947 + C91717) / q;
    const double C52249 = C91976 - (C52266 * C90946) / q + C91746 - C91717 / q;
    const double C48404 = -(C15311 * be + C48366 * C90948 + C91720) / q;
    const double C52921 = C91990 - (C52938 * C90946) / q + C91786 - C91720 / q;
    const double C48696 = -(C19282 * be + C48660 * C90948 + C91752) / q;
    const double C48966 = -(C48948 * C90947 + C91752) / q;
    const double C52641 =
        C53722 / C54432 - (C52658 * C90946) / q + C91827 - C91752 / q;
    const double C91314 = C70507 * p;
    const double C91292 = C70112 * p;
    const double C91271 = C69636 * p;
    const double C91594 = C91224 / q;
    const double C91173 = C67613 * p;
    const double C35549 = C91372 - (C35558 * C90946) / q - C91585;
    const double C33839 = C33804 / q - (C33803 * C90948) / q - C91617;
    const double C35675 = C91369 - (C60588 * be + C35666 * C90947) / q - C91617;
    const double C91170 = C67584 * p;
    const double C33821 =
        C34812 / q - (C57735 * be + C33803 * C90947) / q - C91616;
    const double C34388 = C91306 - (C34370 * C90948) / q - C91616;
    const double C91166 = C67524 * p;
    const double C34019 = -(C34055 * C90946 + C70259 * p) / q;
    const double C91275 = C34442 * p;
    const double C91257 = C34298 * p;
    const double C34631 = C91195 - (C34595 * C90948) / q - C91334 / q;
    const double C35154 = -(C35172 * C90946 + C91334) / q;
    const double C35432 = C91232 - (C35414 * C90948) / q - C91643;
    const double C35567 =
        C72097 / q - (C60412 * be + C35558 * C90947) / q - C91643;
    const double C91636 = C91332 / q;
    const double C34866 = -(C34884 * C90946 + C91332) / q;
    const double C91256 = C34154 * p;
    const double C35189 =
        C71875 / q - (C59754 * be + C35171 * C90947) / q - C91641;
    const double C35720 =
        (3 * C34884) / C54432 - (C35702 * C90948) / q - C91641;
    const double C91258 = C33948 * p;
    const double C35028 = -(C35064 * C90946 + C35504 * p) / q;
    const double C35486 =
        C35064 / C54432 - (C35504 * C90946) / q - (C72387 * p) / q;
    const double C91620 = C91290 / q;
    const double C91299 = C33947 * p;
    const double C35774 = -(C35792 * C90946 + C72845 * p) / q;
    const double C33983 =
        C33948 / q - (C33947 * C90948) / q + C70141 / q - C91625;
    const double C35747 = C91374 - (C60707 * be + C35738 * C90947) / q - C91625;
    const double C91624 = C91296 / q;
    const double C91312 = C33654 / C54432;
    const double C34020 = -(C34056 * C90946 + C34352 * p) / q;
    const double C34334 =
        C34056 / C54432 - (C34352 * C90946) / q - (C70764 * p) / q;
    const double C33672 = (2 * C33654) / q -
                          (C57495 * be + C33653 * C90947) / q -
                          (C69696 * p) / q;
    const double C34478 = -(C34496 * C90946 + C70993 * p) / q;
    const double C33691 = C69665 / q - (C33653 * C90948) / q - C91612;
    const double C34451 =
        (3 * C33948) / C54432 - (C58815 * be + C34442 * C90947) / q - C91612;
    const double C33893 =
        C34884 / q - (C57859 * be + C33875 * C90947) / q + C70021 / q - C91619;
    const double C34424 = C91310 - (C34406 * C90948) / q - C91619;
    const double C91252 = C33364 / C54432;
    const double C33382 =
        C69240 / q - (C16813 * be + C33364 * C90947) / q - (C33654 * p) / q;
    const double C33673 = (3 * C33364) / C54432 -
                          (C33650 * be + C33654 * C90947) / q -
                          (C33653 * p) / q;
    const double C91621 = C91291 / q;
    const double C91253 = C33355 * p;
    const double C37486 = -(C37520 * C90946 + C36456 * p) / q;
    const double C91631 = C91285 / q;
    const double C33857 = -(C33875 * C90946 + C91285) / q;
    const double C34586 = -(C34604 * C90946 + C91330) / q;
    const double C36600 = C91384 - (C36566 * C90948) / q - C91330 / q;
    const double C91175 = C33130 * p;
    const double C35396 = C91229 - (C35378 * C90948) / q - C91642;
    const double C35657 = C72659 / q - (C35666 * C90946) / q - C91642;
    const double C91140 = C32986 * p;
    const double C32995 = -(C56426 * be + C32986 * C90947 + C91224) / q;
    const double C91137 = C32842 * p;
    const double C35081 = C71725 / q - (C35099 * C90946) / q - C91640;
    const double C35540 =
        (3 * C34523) / C54432 - (C35522 * C90948) / q - C91640;
    const double C91141 = C32636 * p;
    const double C91578 = C91192 / q;
    const double C34559 = C91186 - (C34523 * C90948) / q - C91635;
    const double C35082 = C71741 / q - (C35100 * C90946) / q - C91635;
    const double C91208 = C32635 * p;
    const double C32671 =
        C32636 / q - (C32635 * C90948) / q + C68033 / q - C91590;
    const double C35585 = C91374 - (C35594 * C90946) / q - C91590;
    const double C91165 = C33094 * p;
    const double C34235 = C91229 - (C58461 * be + C34226 * C90947) / q - C91630;
    const double C34361 = C70807 / q - (C34370 * C90946) / q - C91630;
    const double C91131 = C32950 * p;
    const double C32959 =
        C68138 / q - (C56368 * be + C32950 * C90947) / q - C91596;
    const double C33085 = C91232 - (C33094 * C90946) / q - C91596;
    const double C91128 = C32806 * p;
    const double C32824 = -(C32806 * C90948 + C91220) / q;
    const double C91602 = C91206 / q;
    const double C32653 = -(C55826 * be + C32635 * C90947 + C91206) / q;
    const double C91138 = C32348 * p;
    const double C32833 =
        (3 * C32348) / C54432 - (C32842 * C90946) / q - C91136 / q;
    const double C91598 = C91191 / q;
    const double C32509 = -(C55580 * be + C32491 * C90947 + C91191) / q;
    const double C34794 = C71497 / q - (C34812 * C90946) / q - C91638;
    const double C36252 = C35826 / C54432 - (C36218 * C90948) / q - C91638;
    const double C91172 = C32347 * p;
    const double C33166 = C36456 / q - (C33184 * C90946) / q - (C68890 * p) / q;
    const double C36422 =
        C37520 / C54432 - (C36456 * C90946) / q - (C33184 * p) / q;
    const double C91200 = C32563 * p;
    const double C32545 = C34595 / q - (C32563 * C90946) / q - C91580;
    const double C32581 =
        C67914 / q - (C55706 * be + C32563 * C90947) / q - C91583;
    const double C35405 = C34884 / C54432 - (C35414 * C90946) / q - C91583;
    const double C33840 = C91239 - (C33804 * C90948) / q - C91618;
    const double C34830 = C91322 - (C34809 * be + C34812 * C90947) / q - C91618;
    const double C33785 = C69870 / q - (C33803 * C90946) / q - C91614;
    const double C34244 = C33211 / C54432 - (C34226 * C90948) / q - C91614;
    const double C35387 =
        C34523 / C54432 - (C60114 * be + C35378 * C90947) / q - C91614;
    const double C91600 = C91164 / q;
    const double C91132 = C32564 * p;
    const double C32599 = C32564 / q - (C32563 * C90948) / q - C91585;
    const double C32941 =
        (3 * C32564) / C54432 - (C32950 * C90946) / q - C91130 / q;
    const double C91597 = C91154 / q;
    const double C32239 = -(C32203 * C90948 + C91154) / q;
    const double C33786 = C69886 / q - (C33804 * C90946) / q - C91615;
    const double C36235 =
        C36498 / C54432 - (C20802 * be + C36218 * C90947) / q - C91615;
    const double C33482 = C69398 / q - (C33501 * C90946) / q - C91609;
    const double C34091 =
        (3 * C33211) / C54432 - (C58223 * be + C34082 * C90947) / q - C91609;
    const double C91129 = C32276 * p;
    const double C33112 = C32276 / C54432 - (C33094 * C90948) / q - C91583;
    const double C91559 = C91151 / q;
    const double C33229 = C91146 - (C16643 * be + C33211 * C90947) / q - C91604;
    const double C33483 = C69414 / q - (C33502 * C90946) / q - C91604;
    const double C91163 = C32275 * p;
    const double C32311 = -(C32275 * C90948 + C91164) / q;
    const double C32293 =
        C32276 / q - (C55218 * be + C32275 * C90947) / q + C67436 / q - C91564;
    const double C34109 = C91310 - (C34118 * C90946) / q - C91564;
    const double C91171 = C32062 / C54432;
    const double C91579 = C91193 / q;
    const double C91587 = C91201 / q;
    const double C91222 = C32053 / C54432;
    const double C32043 = C66958 / q - (C32062 * C90946) / q - (C32053 * p) / q;
    const double C34514 = C71050 / q - (C34532 * C90946) / q - C91634;
    const double C36532 = C91381 - (C36498 * C90948) / q - C91634;
    const double C32033 =
        (2 * C32053) / q - (C32052 * C90946) / q - (C66929 * p) / q;
    const double C32034 =
        (3 * C32062) / C54432 - (C32053 * C90946) / q - (C32052 * p) / q;
    const double C32071 = -(C54729 * be + C32052 * C90947 + C91136) / q;
    const double C32473 =
        C34523 / q - (C32491 * C90946) / q + C67762 / q - C91577;
    const double C32932 = C91216 - (C32914 * C90948) / q - C91577;
    const double C91162 = C31986 / C54432;
    const double C91560 = C91153 / q;
    const double C91561 = C91156 / q;
    const double C91218 = C31977 / C54432;
    const double C31967 = C66780 / q - (C31986 * C90946) / q - (C31977 * p) / q;
    const double C33202 = C68948 / q - (C33220 * C90946) / q - C91603;
    const double C35843 = C91381 - (C19291 * be + C35826 * C90947) / q - C91603;
    const double C31957 =
        (2 * C31977) / q - (C31976 * C90946) / q - (C66751 * p) / q;
    const double C31958 =
        (3 * C31986) / C54432 - (C31977 * C90946) / q - (C31976 * p) / q;
    const double C32014 = -(C31976 * C90948 + C91130) / q;
    const double C31995 =
        C66795 / q - (C54550 * be + C31976 * C90947) / q - C91549;
    const double C32797 =
        (3 * C32276) / C54432 - (C32806 * C90946) / q - C91549;
    const double C32185 =
        C33211 / q - (C32203 * C90946) / q + C67284 / q - C91558;
    const double C32779 = C91216 - (C56070 * be + C32770 * C90947) / q - C91558;
    const double C91911 = C82503 * p;
    const double C91889 = C82108 * p;
    const double C91868 = C81632 * p;
    const double C92191 = C91821 / q;
    const double C91770 = C79609 * p;
    const double C51989 = C91969 - (C51998 * C90946) / q - C92182;
    const double C50279 =
        C50244 / q - (C57735 * be + C50243 * C90948) / q - C92214;
    const double C52115 = C91966 - (C52106 * C90947) / q - C92214;
    const double C91767 = C79580 * p;
    const double C50261 = C51250 / q - (C50243 * C90947) / q - C92213;
    const double C50828 = C91903 - (C58696 * be + C50810 * C90948) / q - C92213;
    const double C91763 = C79520 * p;
    const double C50459 = -(C50495 * C90946 + C82255 * p) / q;
    const double C91872 = C50882 * p;
    const double C91854 = C50738 * p;
    const double C51071 =
        C91792 - (C18051 * be + C51035 * C90948) / q - C91931 / q;
    const double C51583 = -(C51602 * C90946 + C91931) / q;
    const double C51872 = C91829 - (C60175 * be + C51854 * C90948) / q - C92240;
    const double C52007 = C84093 / q - (C51998 * C90947) / q - C92240;
    const double C92233 = C91929 / q;
    const double C51301 = -(C51318 * C90946 + C91929) / q;
    const double C91853 = C50594 * p;
    const double C51620 = C83871 / q - (C51601 * C90947) / q - C92238;
    const double C52160 =
        (3 * C51318) / C54432 - (C60649 * be + C52142 * C90948) / q - C92238;
    const double C91855 = C50388 * p;
    const double C51454 = -(C51488 * C90946 + C51944 * p) / q;
    const double C51926 =
        C51488 / C54432 - (C51944 * C90946) / q - (C84383 * p) / q;
    const double C92217 = C91887 / q;
    const double C91896 = C50387 * p;
    const double C52214 = -(C52232 * C90946 + C84841 * p) / q;
    const double C50423 =
        C50388 / q - (C57981 * be + C50387 * C90948) / q + C82137 / q - C92222;
    const double C52187 = C91971 - (C52178 * C90947) / q - C92222;
    const double C92221 = C91893 / q;
    const double C91909 = C50100 / C54432;
    const double C50460 = -(C50496 * C90946 + C50792 * p) / q;
    const double C50774 =
        C50496 / C54432 - (C50792 * C90946) / q - (C82760 * p) / q;
    const double C50117 =
        (2 * C50100) / q - (C50099 * C90947) / q - (C81692 * p) / q;
    const double C50918 = -(C50936 * C90946 + C82989 * p) / q;
    const double C50135 =
        C81661 / q - (C57495 * be + C50099 * C90948) / q - C92209;
    const double C50891 =
        (3 * C50388) / C54432 - (C50882 * C90947) / q - C92209;
    const double C50333 =
        C51318 / q - (C50315 * C90947) / q + C82017 / q - C92216;
    const double C50864 = C91907 - (C58757 * be + C50846 * C90948) / q - C92216;
    const double C91849 = C49820 / C54432;
    const double C49838 = C81236 / q - (C49820 * C90947) / q - (C50100 * p) / q;
    const double C50118 =
        (3 * C49820) / C54432 - (C50100 * C90947) / q - (C50099 * p) / q;
    const double C92218 = C91888 / q;
    const double C91850 = C49811 * p;
    const double C53926 = -(C53960 * C90946 + C52896 * p) / q;
    const double C92228 = C91882 / q;
    const double C50297 = -(C50315 * C90946 + C91882) / q;
    const double C51026 = -(C51044 * C90946 + C91927) / q;
    const double C53040 =
        C91981 - (C20071 * be + C53006 * C90948) / q - C91927 / q;
    const double C91772 = C49586 * p;
    const double C51836 = C91826 - (C60114 * be + C51818 * C90948) / q - C92239;
    const double C52097 = C84655 / q - (C52106 * C90946) / q - C92239;
    const double C91737 = C49442 * p;
    const double C49451 = -(C49442 * C90947 + C91821) / q;
    const double C91734 = C49298 * p;
    const double C51506 = C83721 / q - (C51525 * C90946) / q - C92237;
    const double C51980 =
        (3 * C50963) / C54432 - (C60352 * be + C51962 * C90948) / q - C92237;
    const double C91738 = C49092 * p;
    const double C92175 = C91789 / q;
    const double C50999 = C91783 - (C17971 * be + C50963 * C90948) / q - C92232;
    const double C51507 = C83737 / q - (C51526 * C90946) / q - C92232;
    const double C91805 = C49091 * p;
    const double C49127 =
        C49092 / q - (C55826 * be + C49091 * C90948) / q + C80029 / q - C92187;
    const double C52025 = C91971 - (C52034 * C90946) / q - C92187;
    const double C91762 = C49550 * p;
    const double C50675 = C91826 - (C50666 * C90947) / q - C92227;
    const double C50801 = C82803 / q - (C50810 * C90946) / q - C92227;
    const double C91728 = C49406 * p;
    const double C49415 = C80134 / q - (C49406 * C90947) / q - C92193;
    const double C49541 = C91829 - (C49550 * C90946) / q - C92193;
    const double C91725 = C49262 * p;
    const double C49280 = -(C56131 * be + C49262 * C90948 + C91817) / q;
    const double C92199 = C91803 / q;
    const double C49109 = -(C49091 * C90947 + C91803) / q;
    const double C91735 = C48804 * p;
    const double C49289 =
        (3 * C48804) / C54432 - (C49298 * C90946) / q - C91733 / q;
    const double C92195 = C91788 / q;
    const double C48965 = -(C48947 * C90947 + C91788) / q;
    const double C51233 = C83493 / q - (C51250 * C90946) / q - C92235;
    const double C52692 =
        C52266 / C54432 - (C20802 * be + C52658 * C90948) / q - C92235;
    const double C91769 = C48803 * p;
    const double C49622 = C52896 / q - (C49640 * C90946) / q - (C80886 * p) / q;
    const double C52862 =
        C53960 / C54432 - (C52896 * C90946) / q - (C49640 * p) / q;
    const double C91797 = C49019 * p;
    const double C49001 = C51035 / q - (C49019 * C90946) / q - C92177;
    const double C49037 = C79910 / q - (C49019 * C90947) / q - C92180;
    const double C51845 = C51318 / C54432 - (C51854 * C90946) / q - C92180;
    const double C50280 = C91836 - (C37544 * be + C50244 * C90948) / q - C92215;
    const double C51267 = C91919 - (C51250 * C90947) / q - C92215;
    const double C50225 = C81866 / q - (C50243 * C90946) / q - C92211;
    const double C50684 =
        C49667 / C54432 - (C58461 * be + C50666 * C90948) / q - C92211;
    const double C51827 = C50963 / C54432 - (C51818 * C90947) / q - C92211;
    const double C92197 = C91761 / q;
    const double C91729 = C49020 * p;
    const double C49055 =
        C49020 / q - (C55706 * be + C49019 * C90948) / q - C92182;
    const double C49397 =
        (3 * C49020) / C54432 - (C49406 * C90946) / q - C91727 / q;
    const double C92194 = C91751 / q;
    const double C48695 = -(C55092 * be + C48659 * C90948 + C91751) / q;
    const double C50226 = C81882 / q - (C50244 * C90946) / q - C92212;
    const double C52675 = C52938 / C54432 - (C52658 * C90947) / q - C92212;
    const double C49937 = C81394 / q - (C49955 * C90946) / q - C92206;
    const double C50531 =
        (3 * C49667) / C54432 - (C50522 * C90947) / q - C92206;
    const double C91726 = C48732 * p;
    const double C49568 =
        C48732 / C54432 - (C56606 * be + C49550 * C90948) / q - C92180;
    const double C92156 = C91748 / q;
    const double C49685 = C91743 - (C49667 * C90947) / q - C92201;
    const double C49938 = C81410 / q - (C49956 * C90946) / q - C92201;
    const double C91760 = C48731 * p;
    const double C48767 = -(C55218 * be + C48731 * C90948 + C91761) / q;
    const double C48749 =
        C48732 / q - (C48731 * C90947) / q + C79432 / q - C92161;
    const double C50549 = C91907 - (C50558 * C90946) / q - C92161;
    const double C91768 = C48518 / C54432;
    const double C92176 = C91790 / q;
    const double C92184 = C91798 / q;
    const double C91819 = C48509 / C54432;
    const double C48499 = C78954 / q - (C48518 * C90946) / q - (C48509 * p) / q;
    const double C50954 = C83046 / q - (C50972 * C90946) / q - C92231;
    const double C52972 = C91978 - (C19995 * be + C52938 * C90948) / q - C92231;
    const double C48489 =
        (2 * C48509) / q - (C48508 * C90946) / q - (C78925 * p) / q;
    const double C48490 =
        (3 * C48518) / C54432 - (C48509 * C90946) / q - (C48508 * p) / q;
    const double C48527 = -(C48508 * C90947 + C91733) / q;
    const double C48929 =
        C50963 / q - (C48947 * C90946) / q + C79758 / q - C92174;
    const double C49388 = C91813 - (C56308 * be + C49370 * C90948) / q - C92174;
    const double C91759 = C48442 / C54432;
    const double C92157 = C91750 / q;
    const double C92158 = C91753 / q;
    const double C91815 = C48433 / C54432;
    const double C48423 = C78776 / q - (C48442 * C90946) / q - (C48433 * p) / q;
    const double C49658 = C80944 / q - (C49676 * C90946) / q - C92200;
    const double C52283 = C91978 - (C52266 * C90947) / q - C92200;
    const double C48413 =
        (2 * C48433) / q - (C48432 * C90946) / q - (C78747 * p) / q;
    const double C48414 =
        (3 * C48442) / C54432 - (C48433 * C90946) / q - (C48432 * p) / q;
    const double C48470 = -(C54550 * be + C48432 * C90948 + C91727) / q;
    const double C48451 = C78791 / q - (C48432 * C90947) / q - C92146;
    const double C49253 =
        (3 * C48732) / C54432 - (C49262 * C90946) / q - C92146;
    const double C48641 =
        C49667 / q - (C48659 * C90946) / q + C79280 / q - C92155;
    const double C49235 = C91813 - (C49226 * C90947) / q - C92155;
    const double C15513 = C54777 / q - (C15471 * C90948) / q - C90958;
    const double C16409 =
        (3 * C16068) / C54432 - (C56426 * be + C16418 * C90946) / q - C90958;
    const double C16049 =
        C18134 / q - (C55826 * be + C16067 * C90946) / q - C90990;
    const double C16436 = C90622 - (C16418 * C90948) / q + C90628 - C90990;
    const double C90973 = C90572 / q;
    const double C15503 = -(C15482 * C90947 + C90538) / q;
    const double C19427 =
        C90786 - (C19443 * be + C19446 * C90946) / q - C90538 / q;
    const double C90960 = C90541 / q;
    const double C90994 = C90608 / q;
    const double C90959 = C90540 / q;
    const double C90975 = C90575 / q;
    const double C16086 = -(C16068 * C90947 + C90575) / q;
    const double C15493 = -(C15472 * C90947 + C90537) / q;
    const double C15762 =
        C90567 - (C19434 * be + C15780 * C90946) / q - C90537 / q;
    const double C16796 = -(C16813 * be + C16816 * C90946 + C90653) / q;
    const double C19465 = C90788 - (C19446 * C90947) / q - C90653 / q;
    const double C17413 = C18426 / q - (C17395 * C90947) / q - C91027;
    const double C17908 = C90712 - (C17890 * C90948) / q + C90721 - C91027;
    const double C91011 = C90658 / q;
    const double C91029 = C90699 / q;
    const double C91010 = C90657 / q;
    const double C17378 = -(C37680 * be + C17396 * C90946 + C90657) / q;
    const double C91016 = C90675 / q;
    const double C16826 = C90567 - (C16806 * C90947) / q - C90656 / q;
    const double C17090 = -(C33650 * be + C17108 * C90946 + C90656) / q;
    const double C90969 = C90566 / q;
    const double C90972 = C90570 / q;
    const double C90974 = C90573 / q;
    const double C16580 =
        C15780 / C54432 - (C16562 * C90948) / q + C90636 - C91005;
    const double C18905 =
        C18426 / C54432 - (C60233 * be + C18914 * C90946) / q - C91005;
    const double C16292 = C90623 - (C16274 * C90948) / q - C90997;
    const double C16553 = C90635 - (C56664 * be + C16562 * C90946) / q - C90997;
    const double C17089 = -(C57495 * be + C17107 * C90946 + C90671) / q;
    const double C17611 =
        (3 * C16806) / C54432 - (C17602 * C90947) / q - C90671 / q;
    const double C91036 = C90692 / q;
    const double C17377 = -(C57981 * be + C17395 * C90946 + C90692) / q;
    const double C91032 = C90714 / q;
    const double C17881 = -(C58815 * be + C17890 * C90946 + C90714) / q;
    const double C32090 = C66973 / q - (C32052 * C90948) / q - C91555;
    const double C32977 =
        (3 * C32636) / C54432 - (C32986 * C90946) / q - C91555;
    const double C48546 =
        C78969 / q - (C54729 * be + C48508 * C90948) / q - C92152;
    const double C49433 =
        (3 * C49092) / C54432 - (C49442 * C90946) / q - C92152;
    const double C15689 =
        C16726 / q - (C55218 * be + C15707 * C90946) / q - C90964;
    const double C16247 = C90618 - (C16238 * C90947) / q + C90619 - C90964;
    const double C16400 = C90618 - (C16382 * C90948) / q - C90983;
    const double C90954 = C90529 / q;
    const double C90968 = C90563 / q;
    const double C90953 = C90528 / q;
    const double C90989 = C90600 / q;
    const double C16535 =
        C15996 / C54432 - (C16526 * C90947) / q + C90634 - C91003;
    const double C17701 =
        C17324 / C54432 - (C58521 * be + C17710 * C90946) / q - C91003;
    const double C15440 = -(C15398 * C90948 + C90532) / q;
    const double C20055 =
        C90795 - (C20071 * be + C20074 * C90946) / q - C90532 / q;
    const double C15430 = -(C15388 * C90948 + C90531) / q;
    const double C15978 =
        C90595 - (C20062 * be + C15996 * C90946) / q - C90531 / q;
    const double C90987 = C90565 / q;
    const double C15744 = -(C15708 * C90948 + C90565) / q;
    const double C17360 = C90646 - (C17324 * C90948) / q - C91024;
    const double C18375 = C90729 - (C18358 * C90947) / q + C90686 - C91024;
    const double C18074 = C90609 - (C18054 * C90947) / q - C91039;
    const double C19816 = C19370 / C54432 - (C19782 * C90948) / q - C91039;
    const double C17728 = C16726 / C54432 - (C17710 * C90948) / q - C91034;
    const double C18887 =
        C18054 / C54432 - (C18878 * C90947) / q + C90764 - C91034;
    const double C18084 = C59096 / q - (C18064 * C90947) / q - C91040;
    const double C20928 = C90783 - (C20890 * C90948) / q - C91040;
    const double C18392 = C90689 - (C18358 * C90948) / q - C91042;
    const double C18654 = C59803 / q - (C18636 * C90947) / q - C91042;
    const double C17359 = C17324 / q - (C17323 * C90948) / q - C91023;
    const double C19175 = C90772 - (C19166 * C90947) / q + C90778 - C91023;
    const double C34622 =
        C71195 / q - (C18061 * be + C34604 * C90947) / q - C91637;
    const double C37384 = C91383 - (C37350 * C90948) / q - C91637;
    const double C34920 = C91289 - (C34884 * C90948) / q - C91639;
    const double C35190 =
        C71891 / q - (C51598 * be + C35172 * C90947) / q - C91639;
    const double C51062 = C83191 / q - (C51044 * C90947) / q - C92234;
    const double C53824 = C91980 - (C20887 * be + C53790 * C90948) / q - C92234;
    const double C51352 = C91886 - (C34881 * be + C51318 * C90948) / q - C92236;
    const double C51621 = C83887 / q - (C51602 * C90947) / q - C92236;
    const double C15654 = C90552 - (C15636 * C90947) / q - C90963;
    const double C16626 =
        C90639 - (C16643 * be + C16646 * C90946) / q + C90547 - C90963;
    const double C15960 = C90552 - (C15924 * C90948) / q - C90982;
    const double C17954 =
        C90722 - (C17971 * be + C17974 * C90946) / q + C90587 - C90982;
    const double C15653 = C15636 / q - (C15635 * C90947) / q - C90962;
    const double C17521 =
        C90706 - (C58223 * be + C17530 * C90946) / q + C90707 - C90962;
    const double C16499 = C15924 / C54432 - (C16490 * C90947) / q - C91000;
    const double C17665 =
        C17252 / C54432 - (C58461 * be + C17674 * C90946) / q + C90716 - C91000;
    const double C16508 = C15636 / C54432 - (C16490 * C90948) / q - C91001;
    const double C18833 =
        C18290 / C54432 - (C60114 * be + C18842 * C90946) / q + C90761 - C91001;
    const double C15959 = C15924 / q - (C15923 * C90948) / q - C90981;
    const double C18977 =
        C90769 - (C60352 * be + C18986 * C90946) / q + C90770 - C90981;
    const double C91629 = C91314 / q;
    const double C34433 = -(C34442 * C90946 + C91314) / q;
    const double C91633 = C91292 / q;
    const double C33929 = -(C33947 * C90946 + C91292) / q;
    const double C33634 = -(C33653 * C90946 + C91271) / q;
    const double C34163 = (3 * C33355) / C54432 -
                          (C58342 * be + C34154 * C90947) / q - C91271 / q;
    const double C32860 = C91223 - (C32842 * C90948) / q - C91594;
    const double C33121 = C91235 - (C33130 * C90946) / q - C91594;
    const double C91571 = C91173 / q;
    const double C91569 = C91170 / q;
    const double C91566 = C91166 / q;
    const double C91613 = C91275 / q;
    const double C91607 = C91257 / q;
    const double C33930 = -(C33948 * C90946 + C91257) / q;
    const double C34613 = C91209 - (C18051 * be + C34595 * C90947) / q - C91636;
    const double C36320 = C35894 / C54432 - (C36286 * C90948) / q - C91636;
    const double C33373 =
        C91167 - (C16803 * be + C33355 * C90947) / q - C91256 / q;
    const double C33635 = -(C33654 * C90946 + C91256) / q;
    const double C91608 = C91258 / q;
    const double C33911 = C33876 / q - (C33875 * C90948) / q - C91620;
    const double C35711 =
        C91372 - (C60649 * be + C35702 * C90947) / q + C91378 - C91620;
    const double C91626 = C91299 / q;
    const double C33965 =
        C34956 / q - (C57981 * be + C33947 * C90947) / q - C91624;
    const double C34460 = C91312 - (C34442 * C90948) / q + C91321 - C91624;
    const double C33912 = C91246 - (C33876 * C90948) / q - C91621;
    const double C34902 =
        C91329 - (C34881 * be + C34884 * C90947) / q + C91286 - C91621;
    const double C33346 = -(C33364 * C90946 + C91253) / q;
    const double C35979 =
        C91388 - (C19443 * be + C35962 * C90947) / q - C91253 / q;
    const double C34280 = C33283 / C54432 - (C34262 * C90948) / q - C91631;
    const double C35423 =
        C34595 / C54432 - (C60175 * be + C35414 * C90947) / q + C91364 - C91631;
    const double C91572 = C91175 / q;
    const double C32654 = -(C20138 * be + C32636 * C90947 + C91175) / q;
    const double C91556 = C91140 / q;
    const double C32072 = -(C15468 * be + C32053 * C90947 + C91137) / q;
    const double C32330 = C91167 - (C32348 * C90946) / q - C91137 / q;
    const double C91557 = C91141 / q;
    const double C32527 = C32492 / q - (C32491 * C90948) / q - C91578;
    const double C35513 = C91369 - (C35522 * C90946) / q + C91370 - C91578;
    const double C91591 = C91208 / q;
    const double C91584 = C91165 / q;
    const double C32312 = -(C32276 * C90948 + C91165) / q;
    const double C32015 = -(C31977 * C90948 + C91131) / q;
    const double C32546 = C91195 - (C32564 * C90946) / q - C91131 / q;
    const double C91550 = C91128 / q;
    const double C33148 =
        C32348 / C54432 - (C33130 * C90948) / q + C91236 - C91602;
    const double C35441 = C34956 / C54432 - (C35450 * C90946) / q - C91602;
    const double C32081 = -(C15479 * be + C32062 * C90947 + C91138) / q;
    const double C35945 = C91386 - (C35962 * C90946) / q - C91138 / q;
    const double C33076 = C32204 / C54432 - (C33058 * C90948) / q - C91598;
    const double C35369 =
        C34812 / C54432 - (C35378 * C90946) / q + C91361 - C91598;
    const double C91570 = C91172 / q;
    const double C91586 = C91200 / q;
    const double C33103 =
        C32564 / C54432 - (C56606 * be + C33094 * C90947) / q + C91234 - C91600;
    const double C34253 = C33876 / C54432 - (C34262 * C90946) / q - C91600;
    const double C32024 = -(C31986 * C90948 + C91132) / q;
    const double C36549 = C91395 - (C36566 * C90946) / q - C91132 / q;
    const double C33067 =
        C32492 / C54432 - (C56544 * be + C33058 * C90947) / q - C91597;
    const double C34217 =
        C33804 / C54432 - (C34226 * C90946) / q + C91316 - C91597;
    const double C91551 = C91129 / q;
    const double C32221 =
        C32204 / q - (C55092 * be + C32203 * C90947) / q - C91559;
    const double C34073 = C91306 - (C34082 * C90946) / q + C91307 - C91559;
    const double C91565 = C91163 / q;
    const double C32528 = C91152 - (C32492 * C90948) / q - C91579;
    const double C34505 = C91322 - (C34523 * C90946) / q + C91187 - C91579;
    const double C32617 = C34667 / q - (C32635 * C90946) / q - C91587;
    const double C33004 = C91222 - (C32986 * C90948) / q + C91228 - C91587;
    const double C32222 = C91152 - (C19282 * be + C32204 * C90947) / q - C91560;
    const double C33193 = C91239 - (C33211 * C90946) / q + C91147 - C91560;
    const double C32257 = C33283 / q - (C32275 * C90946) / q - C91561;
    const double C32815 =
        C91218 - (C56131 * be + C32806 * C90947) / q + C91219 - C91561;
    const double C32968 = C91218 - (C32950 * C90948) / q - C91580;
    const double C92226 = C91911 / q;
    const double C50873 = -(C50882 * C90946 + C91911) / q;
    const double C92230 = C91889 / q;
    const double C50369 = -(C50387 * C90946 + C91889) / q;
    const double C50081 = -(C50099 * C90946 + C91868) / q;
    const double C50603 =
        (3 * C49811) / C54432 - (C50594 * C90947) / q - C91868 / q;
    const double C49316 = C91820 - (C56189 * be + C49298 * C90948) / q - C92191;
    const double C49577 = C91832 - (C49586 * C90946) / q - C92191;
    const double C92168 = C91770 / q;
    const double C92166 = C91767 / q;
    const double C92163 = C91763 / q;
    const double C92210 = C91872 / q;
    const double C92204 = C91854 / q;
    const double C50370 = -(C50388 * C90946 + C91854) / q;
    const double C51053 = C91806 - (C51035 * C90947) / q - C92233;
    const double C52760 =
        C52334 / C54432 - (C20878 * be + C52726 * C90948) / q - C92233;
    const double C49829 = C91764 - (C49811 * C90947) / q - C91853 / q;
    const double C50082 = -(C50100 * C90946 + C91853) / q;
    const double C92205 = C91855 / q;
    const double C50351 =
        C50316 / q - (C57859 * be + C50315 * C90948) / q - C92217;
    const double C52151 = C91969 - (C52142 * C90947) / q + C91975 - C92217;
    const double C92223 = C91896 / q;
    const double C50405 = C51386 / q - (C50387 * C90947) / q - C92221;
    const double C50900 =
        C91909 - (C58815 * be + C50882 * C90948) / q + C91918 - C92221;
    const double C50352 = C91843 - (C37612 * be + C50316 * C90948) / q - C92218;
    const double C51335 = C91926 - (C51318 * C90947) / q + C91883 - C92218;
    const double C49802 = -(C49820 * C90946 + C91850) / q;
    const double C52419 = C91985 - (C52402 * C90947) / q - C91850 / q;
    const double C50720 =
        C49739 / C54432 - (C58521 * be + C50702 * C90948) / q - C92228;
    const double C51863 =
        C51035 / C54432 - (C51854 * C90947) / q + C91961 - C92228;
    const double C92169 = C91772 / q;
    const double C49110 = -(C49092 * C90947 + C91772) / q;
    const double C92153 = C91737 / q;
    const double C48528 = -(C48509 * C90947 + C91734) / q;
    const double C48786 = C91764 - (C48804 * C90946) / q - C91734 / q;
    const double C92154 = C91738 / q;
    const double C48983 =
        C48948 / q - (C55580 * be + C48947 * C90948) / q - C92175;
    const double C51953 = C91966 - (C51962 * C90946) / q + C91967 - C92175;
    const double C92188 = C91805 / q;
    const double C92181 = C91762 / q;
    const double C48768 = -(C19358 * be + C48732 * C90948 + C91762) / q;
    const double C48471 = -(C15384 * be + C48433 * C90948 + C91728) / q;
    const double C49002 = C91792 - (C49020 * C90946) / q - C91728 / q;
    const double C92147 = C91725 / q;
    const double C49604 =
        C48804 / C54432 - (C56664 * be + C49586 * C90948) / q + C91833 - C92199;
    const double C51881 = C51386 / C54432 - (C51890 * C90946) / q - C92199;
    const double C48537 = -(C48518 * C90947 + C91735) / q;
    const double C52385 = C91983 - (C52402 * C90946) / q - C91735 / q;
    const double C49532 =
        C48660 / C54432 - (C56544 * be + C49514 * C90948) / q - C92195;
    const double C51809 =
        C51250 / C54432 - (C51818 * C90946) / q + C91958 - C92195;
    const double C92167 = C91769 / q;
    const double C92183 = C91797 / q;
    const double C49559 =
        C49020 / C54432 - (C49550 * C90947) / q + C91831 - C92197;
    const double C50693 = C50316 / C54432 - (C50702 * C90946) / q - C92197;
    const double C48480 = -(C15395 * be + C48442 * C90948 + C91729) / q;
    const double C52989 = C91992 - (C53006 * C90946) / q - C91729 / q;
    const double C49523 = C48948 / C54432 - (C49514 * C90947) / q - C92194;
    const double C50657 =
        C50244 / C54432 - (C50666 * C90946) / q + C91913 - C92194;
    const double C92148 = C91726 / q;
    const double C48677 = C48660 / q - (C48659 * C90947) / q - C92156;
    const double C50513 = C91903 - (C50522 * C90946) / q + C91904 - C92156;
    const double C92162 = C91760 / q;
    const double C48984 = C91749 - (C19986 * be + C48948 * C90948) / q - C92176;
    const double C50945 = C91919 - (C50963 * C90946) / q + C91784 - C92176;
    const double C49073 = C51107 / q - (C49091 * C90946) / q - C92184;
    const double C49460 =
        C91819 - (C56426 * be + C49442 * C90948) / q + C91825 - C92184;
    const double C48678 = C91749 - (C48660 * C90947) / q - C92157;
    const double C49649 = C91836 - (C49667 * C90946) / q + C91744 - C92157;
    const double C48713 = C49739 / q - (C48731 * C90946) / q - C92158;
    const double C49271 = C91815 - (C49262 * C90947) / q + C91816 - C92158;
    const double C49424 = C91815 - (C56368 * be + C49406 * C90948) / q - C92177;
    const double C15798 = C90571 - (C15780 * C90947) / q - C90973;
    const double C16786 = C90652 - (C16803 * be + C16806 * C90946) / q - C90973;
    const double C15524 = C54809 / q - (C15482 * C90948) / q - C90960;
    const double C20131 = C90797 - (C20147 * be + C20150 * C90946) / q - C90960;
    const double C16104 = C90571 - (C16068 * C90948) / q + C90603 - C90994;
    const double C18114 = C90735 - (C18131 * be + C18134 * C90946) / q - C90994;
    const double C15514 = C54793 / q - (C15472 * C90948) / q - C90959;
    const double C16050 = C90602 - (C20138 * be + C16068 * C90946) / q - C90959;
    const double C15816 = C90574 - (C15780 * C90948) / q - C90975;
    const double C19833 =
        C20966 / C54432 - (C20954 * be + C19850 * C90946) / q - C90975;
    const double C16856 = C57064 / q - (C16816 * C90948) / q - C91011;
    const double C20985 = C90797 - (C20966 * C90947) / q - C91011;
    const double C17432 = C90652 - (C17396 * C90948) / q + C90693 - C91029;
    const double C18443 = C90735 - (C18426 * C90947) / q - C91029;
    const double C16846 = C90579 - (C16806 * C90948) / q - C91010;
    const double C19867 = C20150 / C54432 - (C19850 * C90947) / q - C91010;
    const double C17144 = C57241 / q - (C17108 * C90948) / q - C91016;
    const double C17414 = C90697 - (C17396 * C90947) / q - C91016;
    const double C15761 =
        C16806 / q - (C55336 * be + C15779 * C90946) / q - C90969;
    const double C16283 = C90622 - (C16274 * C90947) / q - C90969;
    const double C15797 = C15780 / q - (C15779 * C90947) / q - C90972;
    const double C17593 = C90712 - (C58342 * be + C17602 * C90946) / q - C90972;
    const double C15815 = C55369 / q - (C15779 * C90948) / q - C90974;
    const double C16571 = C16068 / C54432 - (C16562 * C90947) / q - C90974;
    const double C17737 =
        C17396 / C54432 - (C58579 * be + C17746 * C90946) / q - C90974;
    const double C17764 =
        C16806 / C54432 - (C17746 * C90948) / q + C90719 - C91036;
    const double C18923 = C18134 / C54432 - (C18914 * C90947) / q - C91036;
    const double C17620 = C57225 / q - (C17602 * C90948) / q - C91032;
    const double C17755 = C90635 - (C17746 * C90947) / q - C91032;
    const double C15419 = C54630 / q - (C15398 * C90947) / q - C90954;
    const double C19351 = C90783 - (C19367 * be + C19370 * C90946) / q - C90954;
    const double C15726 = C90562 - (C15708 * C90947) / q + C90558 - C90968;
    const double C16706 = C90646 - (C16723 * be + C16726 * C90946) / q - C90968;
    const double C15409 = C54614 / q - (C15388 * C90947) / q - C90953;
    const double C15690 = C90557 - (C19358 * be + C15708 * C90946) / q - C90953;
    const double C16032 = C90562 - (C15996 * C90948) / q - C90989;
    const double C18034 = C90729 - (C18051 * be + C18054 * C90946) / q - C90989;
    const double C16014 = C55755 / q - (C15996 * C90947) / q - C90987;
    const double C19765 =
        C20890 / C54432 - (C20878 * be + C19782 * C90946) / q - C90987;
    const double C34172 = C69367 / q - (C34154 * C90948) / q - C91629;
    const double C34307 = C91235 - (C58579 * be + C34298 * C90947) / q - C91629;
    const double C34316 =
        C33355 / C54432 - (C34298 * C90948) / q + C91319 - C91633;
    const double C35459 =
        C34667 / C54432 - (C60233 * be + C35450 * C90947) / q - C91633;
    const double C32383 = C67553 / q - (C32347 * C90948) / q - C91571;
    const double C33139 =
        C32636 / C54432 - (C56664 * be + C33130 * C90947) / q - C91571;
    const double C34289 = C33948 / C54432 - (C34298 * C90946) / q - C91571;
    const double C32365 =
        C32348 / q - (C55336 * be + C32347 * C90947) / q - C91569;
    const double C34145 = C91312 - (C34154 * C90946) / q - C91569;
    const double C32329 = C33355 / q - (C32347 * C90946) / q - C91566;
    const double C32851 = C91222 - (C56189 * be + C32842 * C90947) / q - C91566;
    const double C33692 = C69383 / q - (C33654 * C90948) / q - C91613;
    const double C33966 = C91297 - (C37680 * be + C33948 * C90947) / q - C91613;
    const double C33391 = C91179 - (C33355 * C90948) / q - C91607;
    const double C36371 =
        C36634 / C54432 - (C20954 * be + C36354 * C90947) / q - C91607;
    const double C33400 = C69210 / q - (C33364 * C90948) / q - C91608;
    const double C37435 = C91397 - (C20963 * be + C37418 * C90947) / q - C91608;
    const double C33984 = C91252 - (C33948 * C90948) / q + C91293 - C91626;
    const double C34974 = C91335 - (C34953 * be + C34956 * C90947) / q - C91626;
    const double C32384 = C91174 - (C32348 * C90948) / q - C91572;
    const double C36337 = C37418 / C54432 - (C36354 * C90946) / q - C91572;
    const double C32091 = C66989 / q - (C32053 * C90948) / q - C91556;
    const double C32618 = C91202 - (C32636 * C90946) / q - C91556;
    const double C32100 = C67005 / q - (C32062 * C90948) / q - C91557;
    const double C36617 = C91397 - (C36634 * C90946) / q - C91557;
    const double C32672 = C91171 - (C32636 * C90948) / q + C91203 - C91591;
    const double C34649 = C91335 - (C34667 * C90946) / q - C91591;
    const double C32582 =
        C67930 / q - (C20062 * be + C32564 * C90947) / q - C91584;
    const double C36269 = C37350 / C54432 - (C36286 * C90946) / q - C91584;
    const double C31996 =
        C66811 / q - (C15384 * be + C31977 * C90947) / q - C91550;
    const double C32258 = C91157 - (C32276 * C90946) / q - C91550;
    const double C32366 = C91171 - (C19434 * be + C32348 * C90947) / q - C91570;
    const double C33337 = C91252 - (C33355 * C90946) / q - C91570;
    const double C32600 = C91162 - (C32564 * C90948) / q - C91586;
    const double C34577 = C91329 - (C34595 * C90946) / q - C91586;
    const double C32005 =
        C66827 / q - (C15395 * be + C31986 * C90947) / q - C91551;
    const double C35877 = C91383 - (C35894 * C90946) / q - C91551;
    const double C32294 =
        C91162 - (C19358 * be + C32276 * C90947) / q + C91158 - C91565;
    const double C33265 = C91246 - (C33283 * C90946) / q - C91565;
    const double C50612 =
        C81363 / q - (C58342 * be + C50594 * C90948) / q - C92226;
    const double C50747 = C91832 - (C50738 * C90947) / q - C92226;
    const double C50756 =
        C49811 / C54432 - (C58579 * be + C50738 * C90948) / q + C91916 - C92230;
    const double C51899 = C51107 / C54432 - (C51890 * C90947) / q - C92230;
    const double C48839 =
        C79549 / q - (C55336 * be + C48803 * C90948) / q - C92168;
    const double C49595 = C49092 / C54432 - (C49586 * C90947) / q - C92168;
    const double C50729 = C50388 / C54432 - (C50738 * C90946) / q - C92168;
    const double C48821 = C48804 / q - (C48803 * C90947) / q - C92166;
    const double C50585 = C91909 - (C50594 * C90946) / q - C92166;
    const double C48785 = C49811 / q - (C48803 * C90946) / q - C92163;
    const double C49307 = C91819 - (C49298 * C90947) / q - C92163;
    const double C50136 =
        C81379 / q - (C33650 * be + C50100 * C90948) / q - C92210;
    const double C50406 = C91894 - (C50388 * C90947) / q - C92210;
    const double C49847 = C91776 - (C16803 * be + C49811 * C90948) / q - C92204;
    const double C52811 = C53074 / C54432 - (C52794 * C90947) / q - C92204;
    const double C49856 =
        C81206 / q - (C16813 * be + C49820 * C90948) / q - C92205;
    const double C53875 = C91994 - (C53858 * C90947) / q - C92205;
    const double C50424 =
        C91849 - (C37680 * be + C50388 * C90948) / q + C91890 - C92223;
    const double C51403 = C91932 - (C51386 * C90947) / q - C92223;
    const double C48840 = C91771 - (C19434 * be + C48804 * C90948) / q - C92169;
    const double C52777 = C53858 / C54432 - (C52794 * C90946) / q - C92169;
    const double C48547 =
        C78985 / q - (C15468 * be + C48509 * C90948) / q - C92153;
    const double C49074 = C91799 - (C49092 * C90946) / q - C92153;
    const double C48556 =
        C79001 / q - (C15479 * be + C48518 * C90948) / q - C92154;
    const double C53057 = C91994 - (C53074 * C90946) / q - C92154;
    const double C49128 =
        C91768 - (C20138 * be + C49092 * C90948) / q + C91800 - C92188;
    const double C51089 = C91932 - (C51107 * C90946) / q - C92188;
    const double C49038 = C79926 / q - (C49020 * C90947) / q - C92181;
    const double C52709 = C53790 / C54432 - (C52726 * C90946) / q - C92181;
    const double C48452 = C78807 / q - (C48433 * C90947) / q - C92147;
    const double C48714 = C91754 - (C48732 * C90946) / q - C92147;
    const double C48822 = C91768 - (C48804 * C90947) / q - C92167;
    const double C49793 = C91849 - (C49811 * C90946) / q - C92167;
    const double C49056 = C91759 - (C20062 * be + C49020 * C90948) / q - C92183;
    const double C51017 = C91926 - (C51035 * C90946) / q - C92183;
    const double C48461 = C78823 / q - (C48442 * C90947) / q - C92148;
    const double C52317 = C91980 - (C52334 * C90946) / q - C92148;
    const double C48750 = C91759 - (C48732 * C90947) / q + C91755 - C92162;
    const double C49721 = C91843 - (C49739 * C90946) / q - C92162;
    etx[0] = C15282;
    etx[1] = C15283;
    etx[2] = C15293;
    etx[3] = C15303;
    etx[4] = C15304;
    etx[5] = C15314;
    etx[6] = C15324;
    etx[7] = C15325;
    etx[8] = C15335;
    etx[9] = C15345;
    etx[10] = C15346;
    etx[11] = C15356;
    etx[12] = C15366;
    etx[13] = C15367;
    etx[14] = C15377;
    etx[15] = C15387;
    etx[16] = C15388;
    etx[17] = C15398;
    etx[18] = C15408;
    etx[19] = C15409;
    etx[20] = C15419;
    etx[21] = C15429;
    etx[22] = C15430;
    etx[23] = C15440;
    etx[24] = C15450;
    etx[25] = C15451;
    etx[26] = C15461;
    etx[27] = C15471;
    etx[28] = C15472;
    etx[29] = C15482;
    etx[30] = C15492;
    etx[31] = C15493;
    etx[32] = C15503;
    etx[33] = C15513;
    etx[34] = C15514;
    etx[35] = C15524;
    etx[36] = C15534;
    etx[37] = C15535;
    etx[38] = C15545;
    etx[39] = C15555;
    etx[40] = C15556;
    etx[41] = C15566;
    etx[42] = C15576;
    etx[43] = C15577;
    etx[44] = C15587;
    etx[45] = C15597;
    etx[46] = C15598;
    etx[47] = C15608;
    etx[48] = C15617;
    etx[49] = C15618;
    etx[50] = C15635;
    etx[51] = C15636;
    etx[52] = C15653;
    etx[53] = C15654;
    etx[54] = C15671;
    etx[55] = C15672;
    etx[56] = C15689;
    etx[57] = C15690;
    etx[58] = C15707;
    etx[59] = C15708;
    etx[60] = C15725;
    etx[61] = C15726;
    etx[62] = C15743;
    etx[63] = C15744;
    etx[64] = C15761;
    etx[65] = C15762;
    etx[66] = C15779;
    etx[67] = C15780;
    etx[68] = C15797;
    etx[69] = C15798;
    etx[70] = C15815;
    etx[71] = C15816;
    etx[72] = C15833;
    etx[73] = C15834;
    etx[74] = C15851;
    etx[75] = C15852;
    etx[76] = C15869;
    etx[77] = C15870;
    etx[78] = C15887;
    etx[79] = C15888;
    etx[80] = C15905;
    etx[81] = C15906;
    etx[82] = C15923;
    etx[83] = C15924;
    etx[84] = C15941;
    etx[85] = C15942;
    etx[86] = C15959;
    etx[87] = C15960;
    etx[88] = C15977;
    etx[89] = C15978;
    etx[90] = C15995;
    etx[91] = C15996;
    etx[92] = C16013;
    etx[93] = C16014;
    etx[94] = C16031;
    etx[95] = C16032;
    etx[96] = C16049;
    etx[97] = C16050;
    etx[98] = C16067;
    etx[99] = C16068;
    etx[100] = C16085;
    etx[101] = C16086;
    etx[102] = C16103;
    etx[103] = C16104;
    etx[104] = C16121;
    etx[105] = C16122;
    etx[106] = C16139;
    etx[107] = C16140;
    etx[108] = C16157;
    etx[109] = C16158;
    etx[110] = C16175;
    etx[111] = C16176;
    etx[112] = C16193;
    etx[113] = C16202;
    etx[114] = C16211;
    etx[115] = C16220;
    etx[116] = C16229;
    etx[117] = C16238;
    etx[118] = C16247;
    etx[119] = C16256;
    etx[120] = C16265;
    etx[121] = C16274;
    etx[122] = C16283;
    etx[123] = C16292;
    etx[124] = C16301;
    etx[125] = C16310;
    etx[126] = C16319;
    etx[127] = C16328;
    etx[128] = C16337;
    etx[129] = C16346;
    etx[130] = C16355;
    etx[131] = C16364;
    etx[132] = C16373;
    etx[133] = C16382;
    etx[134] = C16391;
    etx[135] = C16400;
    etx[136] = C16409;
    etx[137] = C16418;
    etx[138] = C16427;
    etx[139] = C16436;
    etx[140] = C16445;
    etx[141] = C16454;
    etx[142] = C16463;
    etx[143] = C16472;
    etx[144] = C16481;
    etx[145] = C16490;
    etx[146] = C16499;
    etx[147] = C16508;
    etx[148] = C16517;
    etx[149] = C16526;
    etx[150] = C16535;
    etx[151] = C16544;
    etx[152] = C16553;
    etx[153] = C16562;
    etx[154] = C16571;
    etx[155] = C16580;
    etx[156] = C16589;
    etx[157] = C16598;
    etx[158] = C16607;
    etx[159] = C16616;
    etx[160] = C16626;
    etx[161] = C16636;
    etx[162] = C16646;
    etx[163] = C16656;
    etx[164] = C16666;
    etx[165] = C16676;
    etx[166] = C16686;
    etx[167] = C16696;
    etx[168] = C16706;
    etx[169] = C16716;
    etx[170] = C16726;
    etx[171] = C16736;
    etx[172] = C16746;
    etx[173] = C16756;
    etx[174] = C16766;
    etx[175] = C16776;
    etx[176] = C16786;
    etx[177] = C16796;
    etx[178] = C16806;
    etx[179] = C16816;
    etx[180] = C16826;
    etx[181] = C16836;
    etx[182] = C16846;
    etx[183] = C16856;
    etx[184] = C16866;
    etx[185] = C16876;
    etx[186] = C16886;
    etx[187] = C16896;
    etx[188] = C16906;
    etx[189] = C16916;
    etx[190] = C16926;
    etx[191] = C16936;
    etx[192] = C16945;
    etx[193] = C16946;
    etx[194] = C16963;
    etx[195] = C16964;
    etx[196] = C16981;
    etx[197] = C16982;
    etx[198] = C16999;
    etx[199] = C17000;
    etx[200] = C17017;
    etx[201] = C17018;
    etx[202] = C17035;
    etx[203] = C17036;
    etx[204] = C17053;
    etx[205] = C17054;
    etx[206] = C17071;
    etx[207] = C17072;
    etx[208] = C17089;
    etx[209] = C17090;
    etx[210] = C17107;
    etx[211] = C17108;
    etx[212] = C17125;
    etx[213] = C17126;
    etx[214] = C17143;
    etx[215] = C17144;
    etx[216] = C17161;
    etx[217] = C17162;
    etx[218] = C17179;
    etx[219] = C17180;
    etx[220] = C17197;
    etx[221] = C17198;
    etx[222] = C17215;
    etx[223] = C17216;
    etx[224] = C17233;
    etx[225] = C17234;
    etx[226] = C17251;
    etx[227] = C17252;
    etx[228] = C17269;
    etx[229] = C17270;
    etx[230] = C17287;
    etx[231] = C17288;
    etx[232] = C17305;
    etx[233] = C17306;
    etx[234] = C17323;
    etx[235] = C17324;
    etx[236] = C17341;
    etx[237] = C17342;
    etx[238] = C17359;
    etx[239] = C17360;
    etx[240] = C17377;
    etx[241] = C17378;
    etx[242] = C17395;
    etx[243] = C17396;
    etx[244] = C17413;
    etx[245] = C17414;
    etx[246] = C17431;
    etx[247] = C17432;
    etx[248] = C17449;
    etx[249] = C17450;
    etx[250] = C17467;
    etx[251] = C17468;
    etx[252] = C17485;
    etx[253] = C17486;
    etx[254] = C17503;
    etx[255] = C17504;
    etx[256] = C17521;
    etx[257] = C17530;
    etx[258] = C17539;
    etx[259] = C17548;
    etx[260] = C17557;
    etx[261] = C17566;
    etx[262] = C17575;
    etx[263] = C17584;
    etx[264] = C17593;
    etx[265] = C17602;
    etx[266] = C17611;
    etx[267] = C17620;
    etx[268] = C17629;
    etx[269] = C17638;
    etx[270] = C17647;
    etx[271] = C17656;
    etx[272] = C17665;
    etx[273] = C17674;
    etx[274] = C17683;
    etx[275] = C17692;
    etx[276] = C17701;
    etx[277] = C17710;
    etx[278] = C17719;
    etx[279] = C17728;
    etx[280] = C17737;
    etx[281] = C17746;
    etx[282] = C17755;
    etx[283] = C17764;
    etx[284] = C17773;
    etx[285] = C17782;
    etx[286] = C17791;
    etx[287] = C17800;
    etx[288] = C17809;
    etx[289] = C17818;
    etx[290] = C17827;
    etx[291] = C17836;
    etx[292] = C17845;
    etx[293] = C17854;
    etx[294] = C17863;
    etx[295] = C17872;
    etx[296] = C17881;
    etx[297] = C17890;
    etx[298] = C17899;
    etx[299] = C17908;
    etx[300] = C17917;
    etx[301] = C17926;
    etx[302] = C17935;
    etx[303] = C17944;
    etx[304] = C17954;
    etx[305] = C17964;
    etx[306] = C17974;
    etx[307] = C17984;
    etx[308] = C17994;
    etx[309] = C18004;
    etx[310] = C18014;
    etx[311] = C18024;
    etx[312] = C18034;
    etx[313] = C18044;
    etx[314] = C18054;
    etx[315] = C18064;
    etx[316] = C18074;
    etx[317] = C18084;
    etx[318] = C18094;
    etx[319] = C18104;
    etx[320] = C18114;
    etx[321] = C18124;
    etx[322] = C18134;
    etx[323] = C18144;
    etx[324] = C18154;
    etx[325] = C18164;
    etx[326] = C18174;
    etx[327] = C18184;
    etx[328] = C18194;
    etx[329] = C18204;
    etx[330] = C18214;
    etx[331] = C18224;
    etx[332] = C18234;
    etx[333] = C18244;
    etx[334] = C18254;
    etx[335] = C18264;
    etx[336] = C18273;
    etx[337] = C18290;
    etx[338] = C18307;
    etx[339] = C18324;
    etx[340] = C18341;
    etx[341] = C18358;
    etx[342] = C18375;
    etx[343] = C18392;
    etx[344] = C18409;
    etx[345] = C18426;
    etx[346] = C18443;
    etx[347] = C18460;
    etx[348] = C18477;
    etx[349] = C18494;
    etx[350] = C18511;
    etx[351] = C18528;
    etx[352] = C18545;
    etx[353] = C18546;
    etx[354] = C18563;
    etx[355] = C18564;
    etx[356] = C18581;
    etx[357] = C18582;
    etx[358] = C18599;
    etx[359] = C18600;
    etx[360] = C18617;
    etx[361] = C18618;
    etx[362] = C18635;
    etx[363] = C18636;
    etx[364] = C18653;
    etx[365] = C18654;
    etx[366] = C18671;
    etx[367] = C18672;
    etx[368] = C18689;
    etx[369] = C18690;
    etx[370] = C18707;
    etx[371] = C18708;
    etx[372] = C18725;
    etx[373] = C18726;
    etx[374] = C18743;
    etx[375] = C18744;
    etx[376] = C18761;
    etx[377] = C18762;
    etx[378] = C18779;
    etx[379] = C18780;
    etx[380] = C18797;
    etx[381] = C18798;
    etx[382] = C18815;
    etx[383] = C18816;
    etx[384] = C18833;
    etx[385] = C18842;
    etx[386] = C18851;
    etx[387] = C18860;
    etx[388] = C18869;
    etx[389] = C18878;
    etx[390] = C18887;
    etx[391] = C18896;
    etx[392] = C18905;
    etx[393] = C18914;
    etx[394] = C18923;
    etx[395] = C18932;
    etx[396] = C18941;
    etx[397] = C18950;
    etx[398] = C18959;
    etx[399] = C18968;
    etx[400] = C18977;
    etx[401] = C18986;
    etx[402] = C18995;
    etx[403] = C19004;
    etx[404] = C19013;
    etx[405] = C19022;
    etx[406] = C19031;
    etx[407] = C19040;
    etx[408] = C19049;
    etx[409] = C19058;
    etx[410] = C19067;
    etx[411] = C19076;
    etx[412] = C19085;
    etx[413] = C19094;
    etx[414] = C19103;
    etx[415] = C19112;
    etx[416] = C19121;
    etx[417] = C19130;
    etx[418] = C19139;
    etx[419] = C19148;
    etx[420] = C19157;
    etx[421] = C19166;
    etx[422] = C19175;
    etx[423] = C19184;
    etx[424] = C19193;
    etx[425] = C19202;
    etx[426] = C19211;
    etx[427] = C19220;
    etx[428] = C19229;
    etx[429] = C19238;
    etx[430] = C19247;
    etx[431] = C19256;
    etx[432] = C19275;
    etx[433] = C19294;
    etx[434] = C19313;
    etx[435] = C19332;
    etx[436] = C19351;
    etx[437] = C19370;
    etx[438] = C19389;
    etx[439] = C19408;
    etx[440] = C19427;
    etx[441] = C19446;
    etx[442] = C19465;
    etx[443] = C19484;
    etx[444] = C19503;
    etx[445] = C19522;
    etx[446] = C19541;
    etx[447] = C19560;
    etx[448] = C19697;
    etx[449] = C19714;
    etx[450] = C19731;
    etx[451] = C19748;
    etx[452] = C19765;
    etx[453] = C19782;
    etx[454] = C19799;
    etx[455] = C19816;
    etx[456] = C19833;
    etx[457] = C19850;
    etx[458] = C19867;
    etx[459] = C19884;
    etx[460] = C19901;
    etx[461] = C19918;
    etx[462] = C19935;
    etx[463] = C19952;
    etx[464] = C19979;
    etx[465] = C19998;
    etx[466] = C20017;
    etx[467] = C20036;
    etx[468] = C20055;
    etx[469] = C20074;
    etx[470] = C20093;
    etx[471] = C20112;
    etx[472] = C20131;
    etx[473] = C20150;
    etx[474] = C20169;
    etx[475] = C20188;
    etx[476] = C20207;
    etx[477] = C20226;
    etx[478] = C20245;
    etx[479] = C20264;
    etx[480] = C20795;
    etx[481] = C20814;
    etx[482] = C20833;
    etx[483] = C20852;
    etx[484] = C20871;
    etx[485] = C20890;
    etx[486] = C20909;
    etx[487] = C20928;
    etx[488] = C20947;
    etx[489] = C20966;
    etx[490] = C20985;
    etx[491] = C21004;
    etx[492] = C21023;
    etx[493] = C21042;
    etx[494] = C21061;
    etx[495] = C21080;
    ety[0] = C31881;
    ety[1] = C31882;
    ety[2] = C31891;
    ety[3] = C31900;
    ety[4] = C31901;
    ety[5] = C31910;
    ety[6] = C31919;
    ety[7] = C31920;
    ety[8] = C31929;
    ety[9] = C31938;
    ety[10] = C31939;
    ety[11] = C31948;
    ety[12] = C31957;
    ety[13] = C31958;
    ety[14] = C31967;
    ety[15] = C31976;
    ety[16] = C31977;
    ety[17] = C31986;
    ety[18] = C31995;
    ety[19] = C31996;
    ety[20] = C32005;
    ety[21] = C32014;
    ety[22] = C32015;
    ety[23] = C32024;
    ety[24] = C32033;
    ety[25] = C32034;
    ety[26] = C32043;
    ety[27] = C32052;
    ety[28] = C32053;
    ety[29] = C32062;
    ety[30] = C32071;
    ety[31] = C32072;
    ety[32] = C32081;
    ety[33] = C32090;
    ety[34] = C32091;
    ety[35] = C32100;
    ety[36] = C32109;
    ety[37] = C32110;
    ety[38] = C32119;
    ety[39] = C32128;
    ety[40] = C32129;
    ety[41] = C32138;
    ety[42] = C32147;
    ety[43] = C32148;
    ety[44] = C32157;
    ety[45] = C32166;
    ety[46] = C32167;
    ety[47] = C32176;
    ety[48] = C32185;
    ety[49] = C32186;
    ety[50] = C32203;
    ety[51] = C32204;
    ety[52] = C32221;
    ety[53] = C32222;
    ety[54] = C32239;
    ety[55] = C32240;
    ety[56] = C32257;
    ety[57] = C32258;
    ety[58] = C32275;
    ety[59] = C32276;
    ety[60] = C32293;
    ety[61] = C32294;
    ety[62] = C32311;
    ety[63] = C32312;
    ety[64] = C32329;
    ety[65] = C32330;
    ety[66] = C32347;
    ety[67] = C32348;
    ety[68] = C32365;
    ety[69] = C32366;
    ety[70] = C32383;
    ety[71] = C32384;
    ety[72] = C32401;
    ety[73] = C32402;
    ety[74] = C32419;
    ety[75] = C32420;
    ety[76] = C32437;
    ety[77] = C32438;
    ety[78] = C32455;
    ety[79] = C32456;
    ety[80] = C32473;
    ety[81] = C32474;
    ety[82] = C32491;
    ety[83] = C32492;
    ety[84] = C32509;
    ety[85] = C32510;
    ety[86] = C32527;
    ety[87] = C32528;
    ety[88] = C32545;
    ety[89] = C32546;
    ety[90] = C32563;
    ety[91] = C32564;
    ety[92] = C32581;
    ety[93] = C32582;
    ety[94] = C32599;
    ety[95] = C32600;
    ety[96] = C32617;
    ety[97] = C32618;
    ety[98] = C32635;
    ety[99] = C32636;
    ety[100] = C32653;
    ety[101] = C32654;
    ety[102] = C32671;
    ety[103] = C32672;
    ety[104] = C32689;
    ety[105] = C32690;
    ety[106] = C32707;
    ety[107] = C32708;
    ety[108] = C32725;
    ety[109] = C32726;
    ety[110] = C32743;
    ety[111] = C32744;
    ety[112] = C32761;
    ety[113] = C32770;
    ety[114] = C32779;
    ety[115] = C32788;
    ety[116] = C32797;
    ety[117] = C32806;
    ety[118] = C32815;
    ety[119] = C32824;
    ety[120] = C32833;
    ety[121] = C32842;
    ety[122] = C32851;
    ety[123] = C32860;
    ety[124] = C32869;
    ety[125] = C32878;
    ety[126] = C32887;
    ety[127] = C32896;
    ety[128] = C32905;
    ety[129] = C32914;
    ety[130] = C32923;
    ety[131] = C32932;
    ety[132] = C32941;
    ety[133] = C32950;
    ety[134] = C32959;
    ety[135] = C32968;
    ety[136] = C32977;
    ety[137] = C32986;
    ety[138] = C32995;
    ety[139] = C33004;
    ety[140] = C33013;
    ety[141] = C33022;
    ety[142] = C33031;
    ety[143] = C33040;
    ety[144] = C33049;
    ety[145] = C33058;
    ety[146] = C33067;
    ety[147] = C33076;
    ety[148] = C33085;
    ety[149] = C33094;
    ety[150] = C33103;
    ety[151] = C33112;
    ety[152] = C33121;
    ety[153] = C33130;
    ety[154] = C33139;
    ety[155] = C33148;
    ety[156] = C33157;
    ety[157] = C33166;
    ety[158] = C33175;
    ety[159] = C33184;
    ety[160] = C33193;
    ety[161] = C33202;
    ety[162] = C33211;
    ety[163] = C33220;
    ety[164] = C33229;
    ety[165] = C33238;
    ety[166] = C33247;
    ety[167] = C33256;
    ety[168] = C33265;
    ety[169] = C33274;
    ety[170] = C33283;
    ety[171] = C33292;
    ety[172] = C33301;
    ety[173] = C33310;
    ety[174] = C33319;
    ety[175] = C33328;
    ety[176] = C33337;
    ety[177] = C33346;
    ety[178] = C33355;
    ety[179] = C33364;
    ety[180] = C33373;
    ety[181] = C33382;
    ety[182] = C33391;
    ety[183] = C33400;
    ety[184] = C33409;
    ety[185] = C33418;
    ety[186] = C33427;
    ety[187] = C33436;
    ety[188] = C33445;
    ety[189] = C33454;
    ety[190] = C33463;
    ety[191] = C33472;
    ety[192] = C33482;
    ety[193] = C33483;
    ety[194] = C33501;
    ety[195] = C33502;
    ety[196] = C33520;
    ety[197] = C33521;
    ety[198] = C33539;
    ety[199] = C33540;
    ety[200] = C33558;
    ety[201] = C33559;
    ety[202] = C33577;
    ety[203] = C33578;
    ety[204] = C33596;
    ety[205] = C33597;
    ety[206] = C33615;
    ety[207] = C33616;
    ety[208] = C33634;
    ety[209] = C33635;
    ety[210] = C33653;
    ety[211] = C33654;
    ety[212] = C33672;
    ety[213] = C33673;
    ety[214] = C33691;
    ety[215] = C33692;
    ety[216] = C33710;
    ety[217] = C33711;
    ety[218] = C33729;
    ety[219] = C33730;
    ety[220] = C33748;
    ety[221] = C33749;
    ety[222] = C33767;
    ety[223] = C33768;
    ety[224] = C33785;
    ety[225] = C33786;
    ety[226] = C33803;
    ety[227] = C33804;
    ety[228] = C33821;
    ety[229] = C33822;
    ety[230] = C33839;
    ety[231] = C33840;
    ety[232] = C33857;
    ety[233] = C33858;
    ety[234] = C33875;
    ety[235] = C33876;
    ety[236] = C33893;
    ety[237] = C33894;
    ety[238] = C33911;
    ety[239] = C33912;
    ety[240] = C33929;
    ety[241] = C33930;
    ety[242] = C33947;
    ety[243] = C33948;
    ety[244] = C33965;
    ety[245] = C33966;
    ety[246] = C33983;
    ety[247] = C33984;
    ety[248] = C34001;
    ety[249] = C34002;
    ety[250] = C34019;
    ety[251] = C34020;
    ety[252] = C34037;
    ety[253] = C34038;
    ety[254] = C34055;
    ety[255] = C34056;
    ety[256] = C34073;
    ety[257] = C34082;
    ety[258] = C34091;
    ety[259] = C34100;
    ety[260] = C34109;
    ety[261] = C34118;
    ety[262] = C34127;
    ety[263] = C34136;
    ety[264] = C34145;
    ety[265] = C34154;
    ety[266] = C34163;
    ety[267] = C34172;
    ety[268] = C34181;
    ety[269] = C34190;
    ety[270] = C34199;
    ety[271] = C34208;
    ety[272] = C34217;
    ety[273] = C34226;
    ety[274] = C34235;
    ety[275] = C34244;
    ety[276] = C34253;
    ety[277] = C34262;
    ety[278] = C34271;
    ety[279] = C34280;
    ety[280] = C34289;
    ety[281] = C34298;
    ety[282] = C34307;
    ety[283] = C34316;
    ety[284] = C34325;
    ety[285] = C34334;
    ety[286] = C34343;
    ety[287] = C34352;
    ety[288] = C34361;
    ety[289] = C34370;
    ety[290] = C34379;
    ety[291] = C34388;
    ety[292] = C34397;
    ety[293] = C34406;
    ety[294] = C34415;
    ety[295] = C34424;
    ety[296] = C34433;
    ety[297] = C34442;
    ety[298] = C34451;
    ety[299] = C34460;
    ety[300] = C34469;
    ety[301] = C34478;
    ety[302] = C34487;
    ety[303] = C34496;
    ety[304] = C34505;
    ety[305] = C34514;
    ety[306] = C34523;
    ety[307] = C34532;
    ety[308] = C34541;
    ety[309] = C34550;
    ety[310] = C34559;
    ety[311] = C34568;
    ety[312] = C34577;
    ety[313] = C34586;
    ety[314] = C34595;
    ety[315] = C34604;
    ety[316] = C34613;
    ety[317] = C34622;
    ety[318] = C34631;
    ety[319] = C34640;
    ety[320] = C34649;
    ety[321] = C34658;
    ety[322] = C34667;
    ety[323] = C34676;
    ety[324] = C34685;
    ety[325] = C34694;
    ety[326] = C34703;
    ety[327] = C34712;
    ety[328] = C34721;
    ety[329] = C34730;
    ety[330] = C34739;
    ety[331] = C34748;
    ety[332] = C34757;
    ety[333] = C34766;
    ety[334] = C34775;
    ety[335] = C34784;
    ety[336] = C34794;
    ety[337] = C34812;
    ety[338] = C34830;
    ety[339] = C34848;
    ety[340] = C34866;
    ety[341] = C34884;
    ety[342] = C34902;
    ety[343] = C34920;
    ety[344] = C34938;
    ety[345] = C34956;
    ety[346] = C34974;
    ety[347] = C34992;
    ety[348] = C35010;
    ety[349] = C35028;
    ety[350] = C35046;
    ety[351] = C35064;
    ety[352] = C35081;
    ety[353] = C35082;
    ety[354] = C35099;
    ety[355] = C35100;
    ety[356] = C35117;
    ety[357] = C35118;
    ety[358] = C35135;
    ety[359] = C35136;
    ety[360] = C35153;
    ety[361] = C35154;
    ety[362] = C35171;
    ety[363] = C35172;
    ety[364] = C35189;
    ety[365] = C35190;
    ety[366] = C35207;
    ety[367] = C35208;
    ety[368] = C35225;
    ety[369] = C35226;
    ety[370] = C35243;
    ety[371] = C35244;
    ety[372] = C35261;
    ety[373] = C35262;
    ety[374] = C35279;
    ety[375] = C35280;
    ety[376] = C35297;
    ety[377] = C35298;
    ety[378] = C35315;
    ety[379] = C35316;
    ety[380] = C35333;
    ety[381] = C35334;
    ety[382] = C35351;
    ety[383] = C35352;
    ety[384] = C35369;
    ety[385] = C35378;
    ety[386] = C35387;
    ety[387] = C35396;
    ety[388] = C35405;
    ety[389] = C35414;
    ety[390] = C35423;
    ety[391] = C35432;
    ety[392] = C35441;
    ety[393] = C35450;
    ety[394] = C35459;
    ety[395] = C35468;
    ety[396] = C35477;
    ety[397] = C35486;
    ety[398] = C35495;
    ety[399] = C35504;
    ety[400] = C35513;
    ety[401] = C35522;
    ety[402] = C35531;
    ety[403] = C35540;
    ety[404] = C35549;
    ety[405] = C35558;
    ety[406] = C35567;
    ety[407] = C35576;
    ety[408] = C35585;
    ety[409] = C35594;
    ety[410] = C35603;
    ety[411] = C35612;
    ety[412] = C35621;
    ety[413] = C35630;
    ety[414] = C35639;
    ety[415] = C35648;
    ety[416] = C35657;
    ety[417] = C35666;
    ety[418] = C35675;
    ety[419] = C35684;
    ety[420] = C35693;
    ety[421] = C35702;
    ety[422] = C35711;
    ety[423] = C35720;
    ety[424] = C35729;
    ety[425] = C35738;
    ety[426] = C35747;
    ety[427] = C35756;
    ety[428] = C35765;
    ety[429] = C35774;
    ety[430] = C35783;
    ety[431] = C35792;
    ety[432] = C35809;
    ety[433] = C35826;
    ety[434] = C35843;
    ety[435] = C35860;
    ety[436] = C35877;
    ety[437] = C35894;
    ety[438] = C35911;
    ety[439] = C35928;
    ety[440] = C35945;
    ety[441] = C35962;
    ety[442] = C35979;
    ety[443] = C35996;
    ety[444] = C36013;
    ety[445] = C36030;
    ety[446] = C36047;
    ety[447] = C36064;
    ety[448] = C36201;
    ety[449] = C36218;
    ety[450] = C36235;
    ety[451] = C36252;
    ety[452] = C36269;
    ety[453] = C36286;
    ety[454] = C36303;
    ety[455] = C36320;
    ety[456] = C36337;
    ety[457] = C36354;
    ety[458] = C36371;
    ety[459] = C36388;
    ety[460] = C36405;
    ety[461] = C36422;
    ety[462] = C36439;
    ety[463] = C36456;
    ety[464] = C36481;
    ety[465] = C36498;
    ety[466] = C36515;
    ety[467] = C36532;
    ety[468] = C36549;
    ety[469] = C36566;
    ety[470] = C36583;
    ety[471] = C36600;
    ety[472] = C36617;
    ety[473] = C36634;
    ety[474] = C36651;
    ety[475] = C36668;
    ety[476] = C36685;
    ety[477] = C36702;
    ety[478] = C36719;
    ety[479] = C36736;
    ety[480] = C37265;
    ety[481] = C37282;
    ety[482] = C37299;
    ety[483] = C37316;
    ety[484] = C37333;
    ety[485] = C37350;
    ety[486] = C37367;
    ety[487] = C37384;
    ety[488] = C37401;
    ety[489] = C37418;
    ety[490] = C37435;
    ety[491] = C37452;
    ety[492] = C37469;
    ety[493] = C37486;
    ety[494] = C37503;
    ety[495] = C37520;
    etz[0] = C48337;
    etz[1] = C48338;
    etz[2] = C48347;
    etz[3] = C48356;
    etz[4] = C48357;
    etz[5] = C48366;
    etz[6] = C48375;
    etz[7] = C48376;
    etz[8] = C48385;
    etz[9] = C48394;
    etz[10] = C48395;
    etz[11] = C48404;
    etz[12] = C48413;
    etz[13] = C48414;
    etz[14] = C48423;
    etz[15] = C48432;
    etz[16] = C48433;
    etz[17] = C48442;
    etz[18] = C48451;
    etz[19] = C48452;
    etz[20] = C48461;
    etz[21] = C48470;
    etz[22] = C48471;
    etz[23] = C48480;
    etz[24] = C48489;
    etz[25] = C48490;
    etz[26] = C48499;
    etz[27] = C48508;
    etz[28] = C48509;
    etz[29] = C48518;
    etz[30] = C48527;
    etz[31] = C48528;
    etz[32] = C48537;
    etz[33] = C48546;
    etz[34] = C48547;
    etz[35] = C48556;
    etz[36] = C48565;
    etz[37] = C48566;
    etz[38] = C48575;
    etz[39] = C48584;
    etz[40] = C48585;
    etz[41] = C48594;
    etz[42] = C48603;
    etz[43] = C48604;
    etz[44] = C48613;
    etz[45] = C48622;
    etz[46] = C48623;
    etz[47] = C48632;
    etz[48] = C48641;
    etz[49] = C48642;
    etz[50] = C48659;
    etz[51] = C48660;
    etz[52] = C48677;
    etz[53] = C48678;
    etz[54] = C48695;
    etz[55] = C48696;
    etz[56] = C48713;
    etz[57] = C48714;
    etz[58] = C48731;
    etz[59] = C48732;
    etz[60] = C48749;
    etz[61] = C48750;
    etz[62] = C48767;
    etz[63] = C48768;
    etz[64] = C48785;
    etz[65] = C48786;
    etz[66] = C48803;
    etz[67] = C48804;
    etz[68] = C48821;
    etz[69] = C48822;
    etz[70] = C48839;
    etz[71] = C48840;
    etz[72] = C48857;
    etz[73] = C48858;
    etz[74] = C48875;
    etz[75] = C48876;
    etz[76] = C48893;
    etz[77] = C48894;
    etz[78] = C48911;
    etz[79] = C48912;
    etz[80] = C48929;
    etz[81] = C48930;
    etz[82] = C48947;
    etz[83] = C48948;
    etz[84] = C48965;
    etz[85] = C48966;
    etz[86] = C48983;
    etz[87] = C48984;
    etz[88] = C49001;
    etz[89] = C49002;
    etz[90] = C49019;
    etz[91] = C49020;
    etz[92] = C49037;
    etz[93] = C49038;
    etz[94] = C49055;
    etz[95] = C49056;
    etz[96] = C49073;
    etz[97] = C49074;
    etz[98] = C49091;
    etz[99] = C49092;
    etz[100] = C49109;
    etz[101] = C49110;
    etz[102] = C49127;
    etz[103] = C49128;
    etz[104] = C49145;
    etz[105] = C49146;
    etz[106] = C49163;
    etz[107] = C49164;
    etz[108] = C49181;
    etz[109] = C49182;
    etz[110] = C49199;
    etz[111] = C49200;
    etz[112] = C49217;
    etz[113] = C49226;
    etz[114] = C49235;
    etz[115] = C49244;
    etz[116] = C49253;
    etz[117] = C49262;
    etz[118] = C49271;
    etz[119] = C49280;
    etz[120] = C49289;
    etz[121] = C49298;
    etz[122] = C49307;
    etz[123] = C49316;
    etz[124] = C49325;
    etz[125] = C49334;
    etz[126] = C49343;
    etz[127] = C49352;
    etz[128] = C49361;
    etz[129] = C49370;
    etz[130] = C49379;
    etz[131] = C49388;
    etz[132] = C49397;
    etz[133] = C49406;
    etz[134] = C49415;
    etz[135] = C49424;
    etz[136] = C49433;
    etz[137] = C49442;
    etz[138] = C49451;
    etz[139] = C49460;
    etz[140] = C49469;
    etz[141] = C49478;
    etz[142] = C49487;
    etz[143] = C49496;
    etz[144] = C49505;
    etz[145] = C49514;
    etz[146] = C49523;
    etz[147] = C49532;
    etz[148] = C49541;
    etz[149] = C49550;
    etz[150] = C49559;
    etz[151] = C49568;
    etz[152] = C49577;
    etz[153] = C49586;
    etz[154] = C49595;
    etz[155] = C49604;
    etz[156] = C49613;
    etz[157] = C49622;
    etz[158] = C49631;
    etz[159] = C49640;
    etz[160] = C49649;
    etz[161] = C49658;
    etz[162] = C49667;
    etz[163] = C49676;
    etz[164] = C49685;
    etz[165] = C49694;
    etz[166] = C49703;
    etz[167] = C49712;
    etz[168] = C49721;
    etz[169] = C49730;
    etz[170] = C49739;
    etz[171] = C49748;
    etz[172] = C49757;
    etz[173] = C49766;
    etz[174] = C49775;
    etz[175] = C49784;
    etz[176] = C49793;
    etz[177] = C49802;
    etz[178] = C49811;
    etz[179] = C49820;
    etz[180] = C49829;
    etz[181] = C49838;
    etz[182] = C49847;
    etz[183] = C49856;
    etz[184] = C49865;
    etz[185] = C49874;
    etz[186] = C49883;
    etz[187] = C49892;
    etz[188] = C49901;
    etz[189] = C49910;
    etz[190] = C49919;
    etz[191] = C49928;
    etz[192] = C49937;
    etz[193] = C49938;
    etz[194] = C49955;
    etz[195] = C49956;
    etz[196] = C49973;
    etz[197] = C49974;
    etz[198] = C49991;
    etz[199] = C49992;
    etz[200] = C50009;
    etz[201] = C50010;
    etz[202] = C50027;
    etz[203] = C50028;
    etz[204] = C50045;
    etz[205] = C50046;
    etz[206] = C50063;
    etz[207] = C50064;
    etz[208] = C50081;
    etz[209] = C50082;
    etz[210] = C50099;
    etz[211] = C50100;
    etz[212] = C50117;
    etz[213] = C50118;
    etz[214] = C50135;
    etz[215] = C50136;
    etz[216] = C50153;
    etz[217] = C50154;
    etz[218] = C50171;
    etz[219] = C50172;
    etz[220] = C50189;
    etz[221] = C50190;
    etz[222] = C50207;
    etz[223] = C50208;
    etz[224] = C50225;
    etz[225] = C50226;
    etz[226] = C50243;
    etz[227] = C50244;
    etz[228] = C50261;
    etz[229] = C50262;
    etz[230] = C50279;
    etz[231] = C50280;
    etz[232] = C50297;
    etz[233] = C50298;
    etz[234] = C50315;
    etz[235] = C50316;
    etz[236] = C50333;
    etz[237] = C50334;
    etz[238] = C50351;
    etz[239] = C50352;
    etz[240] = C50369;
    etz[241] = C50370;
    etz[242] = C50387;
    etz[243] = C50388;
    etz[244] = C50405;
    etz[245] = C50406;
    etz[246] = C50423;
    etz[247] = C50424;
    etz[248] = C50441;
    etz[249] = C50442;
    etz[250] = C50459;
    etz[251] = C50460;
    etz[252] = C50477;
    etz[253] = C50478;
    etz[254] = C50495;
    etz[255] = C50496;
    etz[256] = C50513;
    etz[257] = C50522;
    etz[258] = C50531;
    etz[259] = C50540;
    etz[260] = C50549;
    etz[261] = C50558;
    etz[262] = C50567;
    etz[263] = C50576;
    etz[264] = C50585;
    etz[265] = C50594;
    etz[266] = C50603;
    etz[267] = C50612;
    etz[268] = C50621;
    etz[269] = C50630;
    etz[270] = C50639;
    etz[271] = C50648;
    etz[272] = C50657;
    etz[273] = C50666;
    etz[274] = C50675;
    etz[275] = C50684;
    etz[276] = C50693;
    etz[277] = C50702;
    etz[278] = C50711;
    etz[279] = C50720;
    etz[280] = C50729;
    etz[281] = C50738;
    etz[282] = C50747;
    etz[283] = C50756;
    etz[284] = C50765;
    etz[285] = C50774;
    etz[286] = C50783;
    etz[287] = C50792;
    etz[288] = C50801;
    etz[289] = C50810;
    etz[290] = C50819;
    etz[291] = C50828;
    etz[292] = C50837;
    etz[293] = C50846;
    etz[294] = C50855;
    etz[295] = C50864;
    etz[296] = C50873;
    etz[297] = C50882;
    etz[298] = C50891;
    etz[299] = C50900;
    etz[300] = C50909;
    etz[301] = C50918;
    etz[302] = C50927;
    etz[303] = C50936;
    etz[304] = C50945;
    etz[305] = C50954;
    etz[306] = C50963;
    etz[307] = C50972;
    etz[308] = C50981;
    etz[309] = C50990;
    etz[310] = C50999;
    etz[311] = C51008;
    etz[312] = C51017;
    etz[313] = C51026;
    etz[314] = C51035;
    etz[315] = C51044;
    etz[316] = C51053;
    etz[317] = C51062;
    etz[318] = C51071;
    etz[319] = C51080;
    etz[320] = C51089;
    etz[321] = C51098;
    etz[322] = C51107;
    etz[323] = C51116;
    etz[324] = C51125;
    etz[325] = C51134;
    etz[326] = C51143;
    etz[327] = C51152;
    etz[328] = C51161;
    etz[329] = C51170;
    etz[330] = C51179;
    etz[331] = C51188;
    etz[332] = C51197;
    etz[333] = C51206;
    etz[334] = C51215;
    etz[335] = C51224;
    etz[336] = C51233;
    etz[337] = C51250;
    etz[338] = C51267;
    etz[339] = C51284;
    etz[340] = C51301;
    etz[341] = C51318;
    etz[342] = C51335;
    etz[343] = C51352;
    etz[344] = C51369;
    etz[345] = C51386;
    etz[346] = C51403;
    etz[347] = C51420;
    etz[348] = C51437;
    etz[349] = C51454;
    etz[350] = C51471;
    etz[351] = C51488;
    etz[352] = C51506;
    etz[353] = C51507;
    etz[354] = C51525;
    etz[355] = C51526;
    etz[356] = C51544;
    etz[357] = C51545;
    etz[358] = C51563;
    etz[359] = C51564;
    etz[360] = C51582;
    etz[361] = C51583;
    etz[362] = C51601;
    etz[363] = C51602;
    etz[364] = C51620;
    etz[365] = C51621;
    etz[366] = C51639;
    etz[367] = C51640;
    etz[368] = C51658;
    etz[369] = C51659;
    etz[370] = C51677;
    etz[371] = C51678;
    etz[372] = C51696;
    etz[373] = C51697;
    etz[374] = C51715;
    etz[375] = C51716;
    etz[376] = C51734;
    etz[377] = C51735;
    etz[378] = C51753;
    etz[379] = C51754;
    etz[380] = C51772;
    etz[381] = C51773;
    etz[382] = C51791;
    etz[383] = C51792;
    etz[384] = C51809;
    etz[385] = C51818;
    etz[386] = C51827;
    etz[387] = C51836;
    etz[388] = C51845;
    etz[389] = C51854;
    etz[390] = C51863;
    etz[391] = C51872;
    etz[392] = C51881;
    etz[393] = C51890;
    etz[394] = C51899;
    etz[395] = C51908;
    etz[396] = C51917;
    etz[397] = C51926;
    etz[398] = C51935;
    etz[399] = C51944;
    etz[400] = C51953;
    etz[401] = C51962;
    etz[402] = C51971;
    etz[403] = C51980;
    etz[404] = C51989;
    etz[405] = C51998;
    etz[406] = C52007;
    etz[407] = C52016;
    etz[408] = C52025;
    etz[409] = C52034;
    etz[410] = C52043;
    etz[411] = C52052;
    etz[412] = C52061;
    etz[413] = C52070;
    etz[414] = C52079;
    etz[415] = C52088;
    etz[416] = C52097;
    etz[417] = C52106;
    etz[418] = C52115;
    etz[419] = C52124;
    etz[420] = C52133;
    etz[421] = C52142;
    etz[422] = C52151;
    etz[423] = C52160;
    etz[424] = C52169;
    etz[425] = C52178;
    etz[426] = C52187;
    etz[427] = C52196;
    etz[428] = C52205;
    etz[429] = C52214;
    etz[430] = C52223;
    etz[431] = C52232;
    etz[432] = C52249;
    etz[433] = C52266;
    etz[434] = C52283;
    etz[435] = C52300;
    etz[436] = C52317;
    etz[437] = C52334;
    etz[438] = C52351;
    etz[439] = C52368;
    etz[440] = C52385;
    etz[441] = C52402;
    etz[442] = C52419;
    etz[443] = C52436;
    etz[444] = C52453;
    etz[445] = C52470;
    etz[446] = C52487;
    etz[447] = C52504;
    etz[448] = C52641;
    etz[449] = C52658;
    etz[450] = C52675;
    etz[451] = C52692;
    etz[452] = C52709;
    etz[453] = C52726;
    etz[454] = C52743;
    etz[455] = C52760;
    etz[456] = C52777;
    etz[457] = C52794;
    etz[458] = C52811;
    etz[459] = C52828;
    etz[460] = C52845;
    etz[461] = C52862;
    etz[462] = C52879;
    etz[463] = C52896;
    etz[464] = C52921;
    etz[465] = C52938;
    etz[466] = C52955;
    etz[467] = C52972;
    etz[468] = C52989;
    etz[469] = C53006;
    etz[470] = C53023;
    etz[471] = C53040;
    etz[472] = C53057;
    etz[473] = C53074;
    etz[474] = C53091;
    etz[475] = C53108;
    etz[476] = C53125;
    etz[477] = C53142;
    etz[478] = C53159;
    etz[479] = C53176;
    etz[480] = C53705;
    etz[481] = C53722;
    etz[482] = C53739;
    etz[483] = C53756;
    etz[484] = C53773;
    etz[485] = C53790;
    etz[486] = C53807;
    etz[487] = C53824;
    etz[488] = C53841;
    etz[489] = C53858;
    etz[490] = C53875;
    etz[491] = C53892;
    etz[492] = C53909;
    etz[493] = C53926;
    etz[494] = C53943;
    etz[495] = C53960;
}
