/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1111_1(const double ae,
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
    double g[93];
    eri_gradient_1111_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[35];
    double vry[35];
    double vrz[35];
    eri_gradient_1111_1_vr(ae,
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
    double etx[81];
    double ety[81];
    double etz[81];
    eri_gradient_1111_1_et(ae,
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
    double hrx[81];
    double hry[81];
    double hrz[81];
    eri_gradient_1111_1_hr(ae,
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
    gx[0] += C40;
    gy[0] += C44;
    gz[0] += C46;
    gx[1] += C49;
    gy[1] += C51;
    gz[1] += C53;
    gx[2] += C56;
    gy[2] += C58;
    gz[2] += C60;
    gx[3] += C63;
    gy[3] += C65;
    gz[3] += C67;
    gx[4] += C70;
    gy[4] += C72;
    gz[4] += C74;
    gx[5] += C77;
    gy[5] += C79;
    gz[5] += C81;
    gx[6] += C84;
    gy[6] += C86;
    gz[6] += C88;
    gx[7] += C91;
    gy[7] += C93;
    gz[7] += C95;
    gx[8] += C98;
    gy[8] += C100;
    gz[8] += C102;
    gx[9] += C105;
    gy[9] += C107;
    gz[9] += C109;
    gx[10] += C112;
    gy[10] += C114;
    gz[10] += C116;
    gx[11] += C119;
    gy[11] += C121;
    gz[11] += C123;
    gx[12] += C126;
    gy[12] += C128;
    gz[12] += C130;
    gx[13] += C133;
    gy[13] += C135;
    gz[13] += C137;
    gx[14] += C140;
    gy[14] += C142;
    gz[14] += C144;
    gx[15] += C147;
    gy[15] += C149;
    gz[15] += C151;
    gx[16] += C154;
    gy[16] += C156;
    gz[16] += C158;
    gx[17] += C161;
    gy[17] += C163;
    gz[17] += C165;
    gx[18] += C168;
    gy[18] += C170;
    gz[18] += C172;
    gx[19] += C175;
    gy[19] += C177;
    gz[19] += C179;
    gx[20] += C182;
    gy[20] += C184;
    gz[20] += C186;
    gx[21] += C189;
    gy[21] += C191;
    gz[21] += C193;
    gx[22] += C196;
    gy[22] += C198;
    gz[22] += C200;
    gx[23] += C203;
    gy[23] += C205;
    gz[23] += C207;
    gx[24] += C210;
    gy[24] += C212;
    gz[24] += C214;
    gx[25] += C217;
    gy[25] += C219;
    gz[25] += C221;
    gx[26] += C224;
    gy[26] += C226;
    gz[26] += C228;
    gx[27] += C231;
    gy[27] += C233;
    gz[27] += C235;
    gx[28] += C238;
    gy[28] += C240;
    gz[28] += C242;
    gx[29] += C245;
    gy[29] += C247;
    gz[29] += C249;
    gx[30] += C252;
    gy[30] += C254;
    gz[30] += C256;
    gx[31] += C259;
    gy[31] += C261;
    gz[31] += C263;
    gx[32] += C266;
    gy[32] += C268;
    gz[32] += C270;
    gx[33] += C273;
    gy[33] += C275;
    gz[33] += C277;
    gx[34] += C280;
    gy[34] += C282;
    gz[34] += C284;
    gx[35] += C287;
    gy[35] += C289;
    gz[35] += C291;
    gx[36] += C294;
    gy[36] += C296;
    gz[36] += C298;
    gx[37] += C301;
    gy[37] += C303;
    gz[37] += C305;
    gx[38] += C308;
    gy[38] += C310;
    gz[38] += C312;
    gx[39] += C315;
    gy[39] += C317;
    gz[39] += C319;
    gx[40] += C322;
    gy[40] += C324;
    gz[40] += C326;
    gx[41] += C329;
    gy[41] += C331;
    gz[41] += C333;
    gx[42] += C336;
    gy[42] += C338;
    gz[42] += C340;
    gx[43] += C343;
    gy[43] += C345;
    gz[43] += C347;
    gx[44] += C350;
    gy[44] += C352;
    gz[44] += C354;
    gx[45] += C357;
    gy[45] += C359;
    gz[45] += C361;
    gx[46] += C364;
    gy[46] += C366;
    gz[46] += C368;
    gx[47] += C371;
    gy[47] += C373;
    gz[47] += C375;
    gx[48] += C378;
    gy[48] += C380;
    gz[48] += C382;
    gx[49] += C385;
    gy[49] += C387;
    gz[49] += C389;
    gx[50] += C392;
    gy[50] += C394;
    gz[50] += C396;
    gx[51] += C399;
    gy[51] += C401;
    gz[51] += C403;
    gx[52] += C406;
    gy[52] += C408;
    gz[52] += C410;
    gx[53] += C413;
    gy[53] += C415;
    gz[53] += C417;
    gx[54] += C420;
    gy[54] += C422;
    gz[54] += C424;
    gx[55] += C427;
    gy[55] += C429;
    gz[55] += C431;
    gx[56] += C434;
    gy[56] += C436;
    gz[56] += C438;
    gx[57] += C441;
    gy[57] += C443;
    gz[57] += C445;
    gx[58] += C448;
    gy[58] += C450;
    gz[58] += C452;
    gx[59] += C455;
    gy[59] += C457;
    gz[59] += C459;
    gx[60] += C462;
    gy[60] += C464;
    gz[60] += C466;
    gx[61] += C469;
    gy[61] += C471;
    gz[61] += C473;
    gx[62] += C476;
    gy[62] += C478;
    gz[62] += C480;
    gx[63] += C483;
    gy[63] += C485;
    gz[63] += C487;
    gx[64] += C490;
    gy[64] += C492;
    gz[64] += C494;
    gx[65] += C497;
    gy[65] += C499;
    gz[65] += C501;
    gx[66] += C504;
    gy[66] += C506;
    gz[66] += C508;
    gx[67] += C511;
    gy[67] += C513;
    gz[67] += C515;
    gx[68] += C518;
    gy[68] += C520;
    gz[68] += C522;
    gx[69] += C525;
    gy[69] += C527;
    gz[69] += C529;
    gx[70] += C532;
    gy[70] += C534;
    gz[70] += C536;
    gx[71] += C539;
    gy[71] += C541;
    gz[71] += C543;
    gx[72] += C546;
    gy[72] += C548;
    gz[72] += C550;
    gx[73] += C553;
    gy[73] += C555;
    gz[73] += C557;
    gx[74] += C560;
    gy[74] += C562;
    gz[74] += C564;
    gx[75] += C567;
    gy[75] += C569;
    gz[75] += C571;
    gx[76] += C574;
    gy[76] += C576;
    gz[76] += C578;
    gx[77] += C581;
    gy[77] += C583;
    gz[77] += C585;
    gx[78] += C588;
    gy[78] += C590;
    gz[78] += C592;
    gx[79] += C595;
    gy[79] += C597;
    gz[79] += C599;
    gx[80] += C602;
    gy[80] += C604;
    gz[80] += C606;
}
