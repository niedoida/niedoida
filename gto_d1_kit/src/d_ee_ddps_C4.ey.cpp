/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_3(const double ae,
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
    double g[135];
    eri_gradient_2120_3_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[56];
    double vry[56];
    double vrz[56];
    eri_gradient_2120_3_vr(ae,
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
    double etx[96];
    double ety[96];
    double etz[96];
    eri_gradient_2120_3_et(ae,
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
    double hrx[108];
    double hry[108];
    double hrz[108];
    eri_gradient_2120_3_hr(ae,
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
    gx[0] += std::sqrt(9.) * C441;
    gy[0] += std::sqrt(9.) * C443;
    gz[0] += std::sqrt(9.) * C445;
    gx[1] += std::sqrt(9.) * C455;
    gy[1] += std::sqrt(9.) * C457;
    gz[1] += std::sqrt(9.) * C459;
    gx[2] += std::sqrt(3.0) * C434 -
             (std::sqrt(0.75) * C427 + std::sqrt(0.75) * C420);
    gy[2] += std::sqrt(3.0) * C436 -
             (std::sqrt(0.75) * C429 + std::sqrt(0.75) * C422);
    gz[2] += std::sqrt(3.0) * C438 -
             (std::sqrt(0.75) * C431 + std::sqrt(0.75) * C424);
    gx[3] += std::sqrt(9.) * C448;
    gy[3] += std::sqrt(9.) * C450;
    gz[3] += std::sqrt(9.) * C452;
    gx[4] += std::sqrt(2.25) * C420 - std::sqrt(2.25) * C427;
    gy[4] += std::sqrt(2.25) * C422 - std::sqrt(2.25) * C429;
    gz[4] += std::sqrt(2.25) * C424 - std::sqrt(2.25) * C431;
    gx[5] += std::sqrt(9.) * C483;
    gy[5] += std::sqrt(9.) * C485;
    gz[5] += std::sqrt(9.) * C487;
    gx[6] += std::sqrt(9.) * C497;
    gy[6] += std::sqrt(9.) * C499;
    gz[6] += std::sqrt(9.) * C501;
    gx[7] += std::sqrt(3.0) * C476 -
             (std::sqrt(0.75) * C469 + std::sqrt(0.75) * C462);
    gy[7] += std::sqrt(3.0) * C478 -
             (std::sqrt(0.75) * C471 + std::sqrt(0.75) * C464);
    gz[7] += std::sqrt(3.0) * C480 -
             (std::sqrt(0.75) * C473 + std::sqrt(0.75) * C466);
    gx[8] += std::sqrt(9.) * C490;
    gy[8] += std::sqrt(9.) * C492;
    gz[8] += std::sqrt(9.) * C494;
    gx[9] += std::sqrt(2.25) * C462 - std::sqrt(2.25) * C469;
    gy[9] += std::sqrt(2.25) * C464 - std::sqrt(2.25) * C471;
    gz[9] += std::sqrt(2.25) * C466 - std::sqrt(2.25) * C473;
    gx[10] += std::sqrt(9.) * C525;
    gy[10] += std::sqrt(9.) * C527;
    gz[10] += std::sqrt(9.) * C529;
    gx[11] += std::sqrt(9.) * C539;
    gy[11] += std::sqrt(9.) * C541;
    gz[11] += std::sqrt(9.) * C543;
    gx[12] += std::sqrt(3.0) * C518 -
              (std::sqrt(0.75) * C511 + std::sqrt(0.75) * C504);
    gy[12] += std::sqrt(3.0) * C520 -
              (std::sqrt(0.75) * C513 + std::sqrt(0.75) * C506);
    gz[12] += std::sqrt(3.0) * C522 -
              (std::sqrt(0.75) * C515 + std::sqrt(0.75) * C508);
    gx[13] += std::sqrt(9.) * C532;
    gy[13] += std::sqrt(9.) * C534;
    gz[13] += std::sqrt(9.) * C536;
    gx[14] += std::sqrt(2.25) * C504 - std::sqrt(2.25) * C511;
    gy[14] += std::sqrt(2.25) * C506 - std::sqrt(2.25) * C513;
    gz[14] += std::sqrt(2.25) * C508 - std::sqrt(2.25) * C515;
    gx[15] += std::sqrt(9.) * C693;
    gy[15] += std::sqrt(9.) * C695;
    gz[15] += std::sqrt(9.) * C697;
    gx[16] += std::sqrt(9.) * C707;
    gy[16] += std::sqrt(9.) * C709;
    gz[16] += std::sqrt(9.) * C711;
    gx[17] += std::sqrt(3.0) * C686 -
              (std::sqrt(0.75) * C679 + std::sqrt(0.75) * C672);
    gy[17] += std::sqrt(3.0) * C688 -
              (std::sqrt(0.75) * C681 + std::sqrt(0.75) * C674);
    gz[17] += std::sqrt(3.0) * C690 -
              (std::sqrt(0.75) * C683 + std::sqrt(0.75) * C676);
    gx[18] += std::sqrt(9.) * C700;
    gy[18] += std::sqrt(9.) * C702;
    gz[18] += std::sqrt(9.) * C704;
    gx[19] += std::sqrt(2.25) * C672 - std::sqrt(2.25) * C679;
    gy[19] += std::sqrt(2.25) * C674 - std::sqrt(2.25) * C681;
    gz[19] += std::sqrt(2.25) * C676 - std::sqrt(2.25) * C683;
    gx[20] += std::sqrt(9.) * C735;
    gy[20] += std::sqrt(9.) * C737;
    gz[20] += std::sqrt(9.) * C739;
    gx[21] += std::sqrt(9.) * C749;
    gy[21] += std::sqrt(9.) * C751;
    gz[21] += std::sqrt(9.) * C753;
    gx[22] += std::sqrt(3.0) * C728 -
              (std::sqrt(0.75) * C721 + std::sqrt(0.75) * C714);
    gy[22] += std::sqrt(3.0) * C730 -
              (std::sqrt(0.75) * C723 + std::sqrt(0.75) * C716);
    gz[22] += std::sqrt(3.0) * C732 -
              (std::sqrt(0.75) * C725 + std::sqrt(0.75) * C718);
    gx[23] += std::sqrt(9.) * C742;
    gy[23] += std::sqrt(9.) * C744;
    gz[23] += std::sqrt(9.) * C746;
    gx[24] += std::sqrt(2.25) * C714 - std::sqrt(2.25) * C721;
    gy[24] += std::sqrt(2.25) * C716 - std::sqrt(2.25) * C723;
    gz[24] += std::sqrt(2.25) * C718 - std::sqrt(2.25) * C725;
    gx[25] += std::sqrt(9.) * C777;
    gy[25] += std::sqrt(9.) * C779;
    gz[25] += std::sqrt(9.) * C781;
    gx[26] += std::sqrt(9.) * C791;
    gy[26] += std::sqrt(9.) * C793;
    gz[26] += std::sqrt(9.) * C795;
    gx[27] += std::sqrt(3.0) * C770 -
              (std::sqrt(0.75) * C763 + std::sqrt(0.75) * C756);
    gy[27] += std::sqrt(3.0) * C772 -
              (std::sqrt(0.75) * C765 + std::sqrt(0.75) * C758);
    gz[27] += std::sqrt(3.0) * C774 -
              (std::sqrt(0.75) * C767 + std::sqrt(0.75) * C760);
    gx[28] += std::sqrt(9.) * C784;
    gy[28] += std::sqrt(9.) * C786;
    gz[28] += std::sqrt(9.) * C788;
    gx[29] += std::sqrt(2.25) * C756 - std::sqrt(2.25) * C763;
    gy[29] += std::sqrt(2.25) * C758 - std::sqrt(2.25) * C765;
    gz[29] += std::sqrt(2.25) * C760 - std::sqrt(2.25) * C767;
    gx[30] += std::sqrt(3.0) * C315 -
              (std::sqrt(0.75) * C189 + std::sqrt(0.75) * C63);
    gy[30] += std::sqrt(3.0) * C317 -
              (std::sqrt(0.75) * C191 + std::sqrt(0.75) * C65);
    gz[30] += std::sqrt(3.0) * C319 -
              (std::sqrt(0.75) * C193 + std::sqrt(0.75) * C67);
    gx[31] += std::sqrt(3.0) * C329 -
              (std::sqrt(0.75) * C203 + std::sqrt(0.75) * C77);
    gy[31] += std::sqrt(3.0) * C331 -
              (std::sqrt(0.75) * C205 + std::sqrt(0.75) * C79);
    gz[31] += std::sqrt(3.0) * C333 -
              (std::sqrt(0.75) * C207 + std::sqrt(0.75) * C81);
    gx[32] += 0.25 * C40 + 0.25 * C49 - 0.5 * C56 + 0.25 * C168 + 0.25 * C175 -
              0.5 * C182 - 0.5 * C294 - 0.5 * C301 + C308;
    gy[32] += 0.25 * C44 + 0.25 * C51 - 0.5 * C58 + 0.25 * C170 + 0.25 * C177 -
              0.5 * C184 - 0.5 * C296 - 0.5 * C303 + C310;
    gz[32] += 0.25 * C46 + 0.25 * C53 - 0.5 * C60 + 0.25 * C172 + 0.25 * C179 -
              0.5 * C186 - 0.5 * C298 - 0.5 * C305 + C312;
    gx[33] += std::sqrt(3.0) * C322 -
              (std::sqrt(0.75) * C196 + std::sqrt(0.75) * C70);
    gy[33] += std::sqrt(3.0) * C324 -
              (std::sqrt(0.75) * C198 + std::sqrt(0.75) * C72);
    gz[33] += std::sqrt(3.0) * C326 -
              (std::sqrt(0.75) * C200 + std::sqrt(0.75) * C74);
    gx[34] += std::sqrt(0.1875) * C49 - std::sqrt(0.1875) * C40 -
              std::sqrt(0.1875) * C168 + std::sqrt(0.1875) * C175 +
              std::sqrt(0.75) * C294 - std::sqrt(0.75) * C301;
    gy[34] += std::sqrt(0.1875) * C51 - std::sqrt(0.1875) * C44 -
              std::sqrt(0.1875) * C170 + std::sqrt(0.1875) * C177 +
              std::sqrt(0.75) * C296 - std::sqrt(0.75) * C303;
    gz[34] += std::sqrt(0.1875) * C53 - std::sqrt(0.1875) * C46 -
              std::sqrt(0.1875) * C172 + std::sqrt(0.1875) * C179 +
              std::sqrt(0.75) * C298 - std::sqrt(0.75) * C305;
    gx[35] += std::sqrt(3.0) * C357 -
              (std::sqrt(0.75) * C231 + std::sqrt(0.75) * C105);
    gy[35] += std::sqrt(3.0) * C359 -
              (std::sqrt(0.75) * C233 + std::sqrt(0.75) * C107);
    gz[35] += std::sqrt(3.0) * C361 -
              (std::sqrt(0.75) * C235 + std::sqrt(0.75) * C109);
    gx[36] += std::sqrt(3.0) * C371 -
              (std::sqrt(0.75) * C245 + std::sqrt(0.75) * C119);
    gy[36] += std::sqrt(3.0) * C373 -
              (std::sqrt(0.75) * C247 + std::sqrt(0.75) * C121);
    gz[36] += std::sqrt(3.0) * C375 -
              (std::sqrt(0.75) * C249 + std::sqrt(0.75) * C123);
    gx[37] += 0.25 * C84 + 0.25 * C91 - 0.5 * C98 + 0.25 * C210 + 0.25 * C217 -
              0.5 * C224 - 0.5 * C336 - 0.5 * C343 + C350;
    gy[37] += 0.25 * C86 + 0.25 * C93 - 0.5 * C100 + 0.25 * C212 + 0.25 * C219 -
              0.5 * C226 - 0.5 * C338 - 0.5 * C345 + C352;
    gz[37] += 0.25 * C88 + 0.25 * C95 - 0.5 * C102 + 0.25 * C214 + 0.25 * C221 -
              0.5 * C228 - 0.5 * C340 - 0.5 * C347 + C354;
    gx[38] += std::sqrt(3.0) * C364 -
              (std::sqrt(0.75) * C238 + std::sqrt(0.75) * C112);
    gy[38] += std::sqrt(3.0) * C366 -
              (std::sqrt(0.75) * C240 + std::sqrt(0.75) * C114);
    gz[38] += std::sqrt(3.0) * C368 -
              (std::sqrt(0.75) * C242 + std::sqrt(0.75) * C116);
    gx[39] += std::sqrt(0.1875) * C91 - std::sqrt(0.1875) * C84 -
              std::sqrt(0.1875) * C210 + std::sqrt(0.1875) * C217 +
              std::sqrt(0.75) * C336 - std::sqrt(0.75) * C343;
    gy[39] += std::sqrt(0.1875) * C93 - std::sqrt(0.1875) * C86 -
              std::sqrt(0.1875) * C212 + std::sqrt(0.1875) * C219 +
              std::sqrt(0.75) * C338 - std::sqrt(0.75) * C345;
    gz[39] += std::sqrt(0.1875) * C95 - std::sqrt(0.1875) * C88 -
              std::sqrt(0.1875) * C214 + std::sqrt(0.1875) * C221 +
              std::sqrt(0.75) * C340 - std::sqrt(0.75) * C347;
    gx[40] += std::sqrt(3.0) * C399 -
              (std::sqrt(0.75) * C273 + std::sqrt(0.75) * C147);
    gy[40] += std::sqrt(3.0) * C401 -
              (std::sqrt(0.75) * C275 + std::sqrt(0.75) * C149);
    gz[40] += std::sqrt(3.0) * C403 -
              (std::sqrt(0.75) * C277 + std::sqrt(0.75) * C151);
    gx[41] += std::sqrt(3.0) * C413 -
              (std::sqrt(0.75) * C287 + std::sqrt(0.75) * C161);
    gy[41] += std::sqrt(3.0) * C415 -
              (std::sqrt(0.75) * C289 + std::sqrt(0.75) * C163);
    gz[41] += std::sqrt(3.0) * C417 -
              (std::sqrt(0.75) * C291 + std::sqrt(0.75) * C165);
    gx[42] += 0.25 * C126 + 0.25 * C133 - 0.5 * C140 + 0.25 * C252 +
              0.25 * C259 - 0.5 * C266 - 0.5 * C378 - 0.5 * C385 + C392;
    gy[42] += 0.25 * C128 + 0.25 * C135 - 0.5 * C142 + 0.25 * C254 +
              0.25 * C261 - 0.5 * C268 - 0.5 * C380 - 0.5 * C387 + C394;
    gz[42] += 0.25 * C130 + 0.25 * C137 - 0.5 * C144 + 0.25 * C256 +
              0.25 * C263 - 0.5 * C270 - 0.5 * C382 - 0.5 * C389 + C396;
    gx[43] += std::sqrt(3.0) * C406 -
              (std::sqrt(0.75) * C280 + std::sqrt(0.75) * C154);
    gy[43] += std::sqrt(3.0) * C408 -
              (std::sqrt(0.75) * C282 + std::sqrt(0.75) * C156);
    gz[43] += std::sqrt(3.0) * C410 -
              (std::sqrt(0.75) * C284 + std::sqrt(0.75) * C158);
    gx[44] += std::sqrt(0.1875) * C133 - std::sqrt(0.1875) * C126 -
              std::sqrt(0.1875) * C252 + std::sqrt(0.1875) * C259 +
              std::sqrt(0.75) * C378 - std::sqrt(0.75) * C385;
    gy[44] += std::sqrt(0.1875) * C135 - std::sqrt(0.1875) * C128 -
              std::sqrt(0.1875) * C254 + std::sqrt(0.1875) * C261 +
              std::sqrt(0.75) * C380 - std::sqrt(0.75) * C387;
    gz[44] += std::sqrt(0.1875) * C137 - std::sqrt(0.1875) * C130 -
              std::sqrt(0.1875) * C256 + std::sqrt(0.1875) * C263 +
              std::sqrt(0.75) * C382 - std::sqrt(0.75) * C389;
    gx[45] += std::sqrt(9.) * C567;
    gy[45] += std::sqrt(9.) * C569;
    gz[45] += std::sqrt(9.) * C571;
    gx[46] += std::sqrt(9.) * C581;
    gy[46] += std::sqrt(9.) * C583;
    gz[46] += std::sqrt(9.) * C585;
    gx[47] += std::sqrt(3.0) * C560 -
              (std::sqrt(0.75) * C553 + std::sqrt(0.75) * C546);
    gy[47] += std::sqrt(3.0) * C562 -
              (std::sqrt(0.75) * C555 + std::sqrt(0.75) * C548);
    gz[47] += std::sqrt(3.0) * C564 -
              (std::sqrt(0.75) * C557 + std::sqrt(0.75) * C550);
    gx[48] += std::sqrt(9.) * C574;
    gy[48] += std::sqrt(9.) * C576;
    gz[48] += std::sqrt(9.) * C578;
    gx[49] += std::sqrt(2.25) * C546 - std::sqrt(2.25) * C553;
    gy[49] += std::sqrt(2.25) * C548 - std::sqrt(2.25) * C555;
    gz[49] += std::sqrt(2.25) * C550 - std::sqrt(2.25) * C557;
    gx[50] += std::sqrt(9.) * C609;
    gy[50] += std::sqrt(9.) * C611;
    gz[50] += std::sqrt(9.) * C613;
    gx[51] += std::sqrt(9.) * C623;
    gy[51] += std::sqrt(9.) * C625;
    gz[51] += std::sqrt(9.) * C627;
    gx[52] += std::sqrt(3.0) * C602 -
              (std::sqrt(0.75) * C595 + std::sqrt(0.75) * C588);
    gy[52] += std::sqrt(3.0) * C604 -
              (std::sqrt(0.75) * C597 + std::sqrt(0.75) * C590);
    gz[52] += std::sqrt(3.0) * C606 -
              (std::sqrt(0.75) * C599 + std::sqrt(0.75) * C592);
    gx[53] += std::sqrt(9.) * C616;
    gy[53] += std::sqrt(9.) * C618;
    gz[53] += std::sqrt(9.) * C620;
    gx[54] += std::sqrt(2.25) * C588 - std::sqrt(2.25) * C595;
    gy[54] += std::sqrt(2.25) * C590 - std::sqrt(2.25) * C597;
    gz[54] += std::sqrt(2.25) * C592 - std::sqrt(2.25) * C599;
    gx[55] += std::sqrt(9.) * C651;
    gy[55] += std::sqrt(9.) * C653;
    gz[55] += std::sqrt(9.) * C655;
    gx[56] += std::sqrt(9.) * C665;
    gy[56] += std::sqrt(9.) * C667;
    gz[56] += std::sqrt(9.) * C669;
    gx[57] += std::sqrt(3.0) * C644 -
              (std::sqrt(0.75) * C637 + std::sqrt(0.75) * C630);
    gy[57] += std::sqrt(3.0) * C646 -
              (std::sqrt(0.75) * C639 + std::sqrt(0.75) * C632);
    gz[57] += std::sqrt(3.0) * C648 -
              (std::sqrt(0.75) * C641 + std::sqrt(0.75) * C634);
    gx[58] += std::sqrt(9.) * C658;
    gy[58] += std::sqrt(9.) * C660;
    gz[58] += std::sqrt(9.) * C662;
    gx[59] += std::sqrt(2.25) * C630 - std::sqrt(2.25) * C637;
    gy[59] += std::sqrt(2.25) * C632 - std::sqrt(2.25) * C639;
    gz[59] += std::sqrt(2.25) * C634 - std::sqrt(2.25) * C641;
    gx[60] += std::sqrt(2.25) * C63 - std::sqrt(2.25) * C189;
    gy[60] += std::sqrt(2.25) * C65 - std::sqrt(2.25) * C191;
    gz[60] += std::sqrt(2.25) * C67 - std::sqrt(2.25) * C193;
    gx[61] += std::sqrt(2.25) * C77 - std::sqrt(2.25) * C203;
    gy[61] += std::sqrt(2.25) * C79 - std::sqrt(2.25) * C205;
    gz[61] += std::sqrt(2.25) * C81 - std::sqrt(2.25) * C207;
    gx[62] += std::sqrt(0.75) * C56 -
              (std::sqrt(0.1875) * C49 + std::sqrt(0.1875) * C40) +
              std::sqrt(0.1875) * C168 + std::sqrt(0.1875) * C175 -
              std::sqrt(0.75) * C182;
    gy[62] += std::sqrt(0.75) * C58 -
              (std::sqrt(0.1875) * C51 + std::sqrt(0.1875) * C44) +
              std::sqrt(0.1875) * C170 + std::sqrt(0.1875) * C177 -
              std::sqrt(0.75) * C184;
    gz[62] += std::sqrt(0.75) * C60 -
              (std::sqrt(0.1875) * C53 + std::sqrt(0.1875) * C46) +
              std::sqrt(0.1875) * C172 + std::sqrt(0.1875) * C179 -
              std::sqrt(0.75) * C186;
    gx[63] += std::sqrt(2.25) * C70 - std::sqrt(2.25) * C196;
    gy[63] += std::sqrt(2.25) * C72 - std::sqrt(2.25) * C198;
    gz[63] += std::sqrt(2.25) * C74 - std::sqrt(2.25) * C200;
    gx[64] += std::sqrt(0.5625) * C40 - std::sqrt(0.5625) * C49 -
              std::sqrt(0.5625) * C168 + std::sqrt(0.5625) * C175;
    gy[64] += std::sqrt(0.5625) * C44 - std::sqrt(0.5625) * C51 -
              std::sqrt(0.5625) * C170 + std::sqrt(0.5625) * C177;
    gz[64] += std::sqrt(0.5625) * C46 - std::sqrt(0.5625) * C53 -
              std::sqrt(0.5625) * C172 + std::sqrt(0.5625) * C179;
    gx[65] += std::sqrt(2.25) * C105 - std::sqrt(2.25) * C231;
    gy[65] += std::sqrt(2.25) * C107 - std::sqrt(2.25) * C233;
    gz[65] += std::sqrt(2.25) * C109 - std::sqrt(2.25) * C235;
    gx[66] += std::sqrt(2.25) * C119 - std::sqrt(2.25) * C245;
    gy[66] += std::sqrt(2.25) * C121 - std::sqrt(2.25) * C247;
    gz[66] += std::sqrt(2.25) * C123 - std::sqrt(2.25) * C249;
    gx[67] += std::sqrt(0.75) * C98 -
              (std::sqrt(0.1875) * C91 + std::sqrt(0.1875) * C84) +
              std::sqrt(0.1875) * C210 + std::sqrt(0.1875) * C217 -
              std::sqrt(0.75) * C224;
    gy[67] += std::sqrt(0.75) * C100 -
              (std::sqrt(0.1875) * C93 + std::sqrt(0.1875) * C86) +
              std::sqrt(0.1875) * C212 + std::sqrt(0.1875) * C219 -
              std::sqrt(0.75) * C226;
    gz[67] += std::sqrt(0.75) * C102 -
              (std::sqrt(0.1875) * C95 + std::sqrt(0.1875) * C88) +
              std::sqrt(0.1875) * C214 + std::sqrt(0.1875) * C221 -
              std::sqrt(0.75) * C228;
    gx[68] += std::sqrt(2.25) * C112 - std::sqrt(2.25) * C238;
    gy[68] += std::sqrt(2.25) * C114 - std::sqrt(2.25) * C240;
    gz[68] += std::sqrt(2.25) * C116 - std::sqrt(2.25) * C242;
    gx[69] += std::sqrt(0.5625) * C84 - std::sqrt(0.5625) * C91 -
              std::sqrt(0.5625) * C210 + std::sqrt(0.5625) * C217;
    gy[69] += std::sqrt(0.5625) * C86 - std::sqrt(0.5625) * C93 -
              std::sqrt(0.5625) * C212 + std::sqrt(0.5625) * C219;
    gz[69] += std::sqrt(0.5625) * C88 - std::sqrt(0.5625) * C95 -
              std::sqrt(0.5625) * C214 + std::sqrt(0.5625) * C221;
    gx[70] += std::sqrt(2.25) * C147 - std::sqrt(2.25) * C273;
    gy[70] += std::sqrt(2.25) * C149 - std::sqrt(2.25) * C275;
    gz[70] += std::sqrt(2.25) * C151 - std::sqrt(2.25) * C277;
    gx[71] += std::sqrt(2.25) * C161 - std::sqrt(2.25) * C287;
    gy[71] += std::sqrt(2.25) * C163 - std::sqrt(2.25) * C289;
    gz[71] += std::sqrt(2.25) * C165 - std::sqrt(2.25) * C291;
    gx[72] += std::sqrt(0.75) * C140 -
              (std::sqrt(0.1875) * C133 + std::sqrt(0.1875) * C126) +
              std::sqrt(0.1875) * C252 + std::sqrt(0.1875) * C259 -
              std::sqrt(0.75) * C266;
    gy[72] += std::sqrt(0.75) * C142 -
              (std::sqrt(0.1875) * C135 + std::sqrt(0.1875) * C128) +
              std::sqrt(0.1875) * C254 + std::sqrt(0.1875) * C261 -
              std::sqrt(0.75) * C268;
    gz[72] += std::sqrt(0.75) * C144 -
              (std::sqrt(0.1875) * C137 + std::sqrt(0.1875) * C130) +
              std::sqrt(0.1875) * C256 + std::sqrt(0.1875) * C263 -
              std::sqrt(0.75) * C270;
    gx[73] += std::sqrt(2.25) * C154 - std::sqrt(2.25) * C280;
    gy[73] += std::sqrt(2.25) * C156 - std::sqrt(2.25) * C282;
    gz[73] += std::sqrt(2.25) * C158 - std::sqrt(2.25) * C284;
    gx[74] += std::sqrt(0.5625) * C126 - std::sqrt(0.5625) * C133 -
              std::sqrt(0.5625) * C252 + std::sqrt(0.5625) * C259;
    gy[74] += std::sqrt(0.5625) * C128 - std::sqrt(0.5625) * C135 -
              std::sqrt(0.5625) * C254 + std::sqrt(0.5625) * C261;
    gz[74] += std::sqrt(0.5625) * C130 - std::sqrt(0.5625) * C137 -
              std::sqrt(0.5625) * C256 + std::sqrt(0.5625) * C263;
}
