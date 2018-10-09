/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_1(const double ae,
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
    double g[66];
    eri_gradient_2110_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[34];
    double vry[34];
    double vrz[34];
    eri_gradient_2110_1_vr(ae,
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
    double etx[48];
    double ety[48];
    double etz[48];
    eri_gradient_2110_1_et(ae,
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
    double hrx[54];
    double hry[54];
    double hrz[54];
    eri_gradient_2110_1_hr(ae,
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
    gx[0] += std::sqrt(3.0) * C231;
    gy[0] += std::sqrt(3.0) * C233;
    gz[0] += std::sqrt(3.0) * C235;
    gx[1] += std::sqrt(3.0) * C238;
    gy[1] += std::sqrt(3.0) * C240;
    gz[1] += std::sqrt(3.0) * C242;
    gx[2] += std::sqrt(3.0) * C245;
    gy[2] += std::sqrt(3.0) * C247;
    gz[2] += std::sqrt(3.0) * C249;
    gx[3] += std::sqrt(3.0) * C252;
    gy[3] += std::sqrt(3.0) * C254;
    gz[3] += std::sqrt(3.0) * C256;
    gx[4] += std::sqrt(3.0) * C259;
    gy[4] += std::sqrt(3.0) * C261;
    gz[4] += std::sqrt(3.0) * C263;
    gx[5] += std::sqrt(3.0) * C266;
    gy[5] += std::sqrt(3.0) * C268;
    gz[5] += std::sqrt(3.0) * C270;
    gx[6] += std::sqrt(3.0) * C273;
    gy[6] += std::sqrt(3.0) * C275;
    gz[6] += std::sqrt(3.0) * C277;
    gx[7] += std::sqrt(3.0) * C280;
    gy[7] += std::sqrt(3.0) * C282;
    gz[7] += std::sqrt(3.0) * C284;
    gx[8] += std::sqrt(3.0) * C287;
    gy[8] += std::sqrt(3.0) * C289;
    gz[8] += std::sqrt(3.0) * C291;
    gx[9] += std::sqrt(3.0) * C357;
    gy[9] += std::sqrt(3.0) * C359;
    gz[9] += std::sqrt(3.0) * C361;
    gx[10] += std::sqrt(3.0) * C364;
    gy[10] += std::sqrt(3.0) * C366;
    gz[10] += std::sqrt(3.0) * C368;
    gx[11] += std::sqrt(3.0) * C371;
    gy[11] += std::sqrt(3.0) * C373;
    gz[11] += std::sqrt(3.0) * C375;
    gx[12] += std::sqrt(3.0) * C378;
    gy[12] += std::sqrt(3.0) * C380;
    gz[12] += std::sqrt(3.0) * C382;
    gx[13] += std::sqrt(3.0) * C385;
    gy[13] += std::sqrt(3.0) * C387;
    gz[13] += std::sqrt(3.0) * C389;
    gx[14] += std::sqrt(3.0) * C392;
    gy[14] += std::sqrt(3.0) * C394;
    gz[14] += std::sqrt(3.0) * C396;
    gx[15] += std::sqrt(3.0) * C399;
    gy[15] += std::sqrt(3.0) * C401;
    gz[15] += std::sqrt(3.0) * C403;
    gx[16] += std::sqrt(3.0) * C406;
    gy[16] += std::sqrt(3.0) * C408;
    gz[16] += std::sqrt(3.0) * C410;
    gx[17] += std::sqrt(3.0) * C413;
    gy[17] += std::sqrt(3.0) * C415;
    gz[17] += std::sqrt(3.0) * C417;
    gx[18] += -0.5 * C40 - 0.5 * C105 + C168;
    gy[18] += -0.5 * C44 - 0.5 * C107 + C170;
    gz[18] += -0.5 * C46 - 0.5 * C109 + C172;
    gx[19] += -0.5 * C49 - 0.5 * C112 + C175;
    gy[19] += -0.5 * C51 - 0.5 * C114 + C177;
    gz[19] += -0.5 * C53 - 0.5 * C116 + C179;
    gx[20] += -0.5 * C56 - 0.5 * C119 + C182;
    gy[20] += -0.5 * C58 - 0.5 * C121 + C184;
    gz[20] += -0.5 * C60 - 0.5 * C123 + C186;
    gx[21] += -0.5 * C63 - 0.5 * C126 + C189;
    gy[21] += -0.5 * C65 - 0.5 * C128 + C191;
    gz[21] += -0.5 * C67 - 0.5 * C130 + C193;
    gx[22] += -0.5 * C70 - 0.5 * C133 + C196;
    gy[22] += -0.5 * C72 - 0.5 * C135 + C198;
    gz[22] += -0.5 * C74 - 0.5 * C137 + C200;
    gx[23] += -0.5 * C77 - 0.5 * C140 + C203;
    gy[23] += -0.5 * C79 - 0.5 * C142 + C205;
    gz[23] += -0.5 * C81 - 0.5 * C144 + C207;
    gx[24] += -0.5 * C84 - 0.5 * C147 + C210;
    gy[24] += -0.5 * C86 - 0.5 * C149 + C212;
    gz[24] += -0.5 * C88 - 0.5 * C151 + C214;
    gx[25] += -0.5 * C91 - 0.5 * C154 + C217;
    gy[25] += -0.5 * C93 - 0.5 * C156 + C219;
    gz[25] += -0.5 * C95 - 0.5 * C158 + C221;
    gx[26] += -0.5 * C98 - 0.5 * C161 + C224;
    gy[26] += -0.5 * C100 - 0.5 * C163 + C226;
    gz[26] += -0.5 * C102 - 0.5 * C165 + C228;
    gx[27] += std::sqrt(3.0) * C294;
    gy[27] += std::sqrt(3.0) * C296;
    gz[27] += std::sqrt(3.0) * C298;
    gx[28] += std::sqrt(3.0) * C301;
    gy[28] += std::sqrt(3.0) * C303;
    gz[28] += std::sqrt(3.0) * C305;
    gx[29] += std::sqrt(3.0) * C308;
    gy[29] += std::sqrt(3.0) * C310;
    gz[29] += std::sqrt(3.0) * C312;
    gx[30] += std::sqrt(3.0) * C315;
    gy[30] += std::sqrt(3.0) * C317;
    gz[30] += std::sqrt(3.0) * C319;
    gx[31] += std::sqrt(3.0) * C322;
    gy[31] += std::sqrt(3.0) * C324;
    gz[31] += std::sqrt(3.0) * C326;
    gx[32] += std::sqrt(3.0) * C329;
    gy[32] += std::sqrt(3.0) * C331;
    gz[32] += std::sqrt(3.0) * C333;
    gx[33] += std::sqrt(3.0) * C336;
    gy[33] += std::sqrt(3.0) * C338;
    gz[33] += std::sqrt(3.0) * C340;
    gx[34] += std::sqrt(3.0) * C343;
    gy[34] += std::sqrt(3.0) * C345;
    gz[34] += std::sqrt(3.0) * C347;
    gx[35] += std::sqrt(3.0) * C350;
    gy[35] += std::sqrt(3.0) * C352;
    gz[35] += std::sqrt(3.0) * C354;
    gx[36] += std::sqrt(0.75) * C40 - std::sqrt(0.75) * C105;
    gy[36] += std::sqrt(0.75) * C44 - std::sqrt(0.75) * C107;
    gz[36] += std::sqrt(0.75) * C46 - std::sqrt(0.75) * C109;
    gx[37] += std::sqrt(0.75) * C49 - std::sqrt(0.75) * C112;
    gy[37] += std::sqrt(0.75) * C51 - std::sqrt(0.75) * C114;
    gz[37] += std::sqrt(0.75) * C53 - std::sqrt(0.75) * C116;
    gx[38] += std::sqrt(0.75) * C56 - std::sqrt(0.75) * C119;
    gy[38] += std::sqrt(0.75) * C58 - std::sqrt(0.75) * C121;
    gz[38] += std::sqrt(0.75) * C60 - std::sqrt(0.75) * C123;
    gx[39] += std::sqrt(0.75) * C63 - std::sqrt(0.75) * C126;
    gy[39] += std::sqrt(0.75) * C65 - std::sqrt(0.75) * C128;
    gz[39] += std::sqrt(0.75) * C67 - std::sqrt(0.75) * C130;
    gx[40] += std::sqrt(0.75) * C70 - std::sqrt(0.75) * C133;
    gy[40] += std::sqrt(0.75) * C72 - std::sqrt(0.75) * C135;
    gz[40] += std::sqrt(0.75) * C74 - std::sqrt(0.75) * C137;
    gx[41] += std::sqrt(0.75) * C77 - std::sqrt(0.75) * C140;
    gy[41] += std::sqrt(0.75) * C79 - std::sqrt(0.75) * C142;
    gz[41] += std::sqrt(0.75) * C81 - std::sqrt(0.75) * C144;
    gx[42] += std::sqrt(0.75) * C84 - std::sqrt(0.75) * C147;
    gy[42] += std::sqrt(0.75) * C86 - std::sqrt(0.75) * C149;
    gz[42] += std::sqrt(0.75) * C88 - std::sqrt(0.75) * C151;
    gx[43] += std::sqrt(0.75) * C91 - std::sqrt(0.75) * C154;
    gy[43] += std::sqrt(0.75) * C93 - std::sqrt(0.75) * C156;
    gz[43] += std::sqrt(0.75) * C95 - std::sqrt(0.75) * C158;
    gx[44] += std::sqrt(0.75) * C98 - std::sqrt(0.75) * C161;
    gy[44] += std::sqrt(0.75) * C100 - std::sqrt(0.75) * C163;
    gz[44] += std::sqrt(0.75) * C102 - std::sqrt(0.75) * C165;
}
