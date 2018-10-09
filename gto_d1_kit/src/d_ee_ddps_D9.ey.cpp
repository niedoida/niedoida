/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_4(const double ae,
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
    double g[84];
    eri_gradient_2210_4_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[55];
    double vry[55];
    double vrz[55];
    eri_gradient_2210_4_vr(ae,
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
    double etx[93];
    double ety[93];
    double etz[93];
    eri_gradient_2210_4_et(ae,
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
    eri_gradient_2210_4_hr(ae,
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
    const double C18204 = hrx[0];
    const double C18753 = hrx[1];
    const double C19303 = hrx[2];
    const double C19853 = hrx[3];
    const double C20403 = hrx[4];
    const double C20953 = hrx[5];
    const double C21503 = hrx[6];
    const double C22053 = hrx[7];
    const double C22603 = hrx[8];
    const double C23153 = hrx[9];
    const double C23703 = hrx[10];
    const double C24253 = hrx[11];
    const double C24803 = hrx[12];
    const double C25353 = hrx[13];
    const double C25903 = hrx[14];
    const double C26453 = hrx[15];
    const double C27003 = hrx[16];
    const double C27553 = hrx[17];
    const double C28103 = hrx[18];
    const double C28653 = hrx[19];
    const double C29203 = hrx[20];
    const double C29753 = hrx[21];
    const double C30303 = hrx[22];
    const double C30853 = hrx[23];
    const double C31403 = hrx[24];
    const double C31953 = hrx[25];
    const double C32503 = hrx[26];
    const double C33053 = hrx[27];
    const double C33603 = hrx[28];
    const double C34153 = hrx[29];
    const double C34703 = hrx[30];
    const double C35253 = hrx[31];
    const double C35803 = hrx[32];
    const double C36353 = hrx[33];
    const double C36903 = hrx[34];
    const double C37453 = hrx[35];
    const double C38003 = hrx[36];
    const double C38553 = hrx[37];
    const double C39103 = hrx[38];
    const double C39653 = hrx[39];
    const double C40203 = hrx[40];
    const double C40753 = hrx[41];
    const double C41303 = hrx[42];
    const double C41853 = hrx[43];
    const double C42403 = hrx[44];
    const double C42953 = hrx[45];
    const double C43503 = hrx[46];
    const double C44053 = hrx[47];
    const double C44603 = hrx[48];
    const double C45153 = hrx[49];
    const double C45703 = hrx[50];
    const double C46253 = hrx[51];
    const double C46803 = hrx[52];
    const double C47353 = hrx[53];
    const double C47903 = hrx[54];
    const double C48453 = hrx[55];
    const double C49003 = hrx[56];
    const double C49553 = hrx[57];
    const double C50103 = hrx[58];
    const double C50653 = hrx[59];
    const double C51203 = hrx[60];
    const double C51753 = hrx[61];
    const double C52303 = hrx[62];
    const double C52853 = hrx[63];
    const double C53403 = hrx[64];
    const double C53953 = hrx[65];
    const double C54503 = hrx[66];
    const double C55053 = hrx[67];
    const double C55603 = hrx[68];
    const double C56153 = hrx[69];
    const double C56703 = hrx[70];
    const double C57253 = hrx[71];
    const double C57803 = hrx[72];
    const double C58353 = hrx[73];
    const double C58903 = hrx[74];
    const double C59453 = hrx[75];
    const double C60003 = hrx[76];
    const double C60553 = hrx[77];
    const double C61103 = hrx[78];
    const double C61653 = hrx[79];
    const double C62203 = hrx[80];
    const double C62753 = hrx[81];
    const double C63303 = hrx[82];
    const double C63853 = hrx[83];
    const double C64403 = hrx[84];
    const double C64953 = hrx[85];
    const double C65503 = hrx[86];
    const double C66053 = hrx[87];
    const double C66603 = hrx[88];
    const double C67153 = hrx[89];
    const double C67703 = hrx[90];
    const double C68253 = hrx[91];
    const double C68803 = hrx[92];
    const double C69353 = hrx[93];
    const double C69903 = hrx[94];
    const double C70453 = hrx[95];
    const double C71003 = hrx[96];
    const double C71553 = hrx[97];
    const double C72103 = hrx[98];
    const double C72653 = hrx[99];
    const double C73203 = hrx[100];
    const double C73753 = hrx[101];
    const double C74303 = hrx[102];
    const double C74853 = hrx[103];
    const double C75403 = hrx[104];
    const double C75953 = hrx[105];
    const double C76503 = hrx[106];
    const double C77053 = hrx[107];
    const double C18386 = hry[0];
    const double C18936 = hry[1];
    const double C19486 = hry[2];
    const double C20036 = hry[3];
    const double C20586 = hry[4];
    const double C21136 = hry[5];
    const double C21686 = hry[6];
    const double C22236 = hry[7];
    const double C22786 = hry[8];
    const double C23336 = hry[9];
    const double C23886 = hry[10];
    const double C24436 = hry[11];
    const double C24986 = hry[12];
    const double C25536 = hry[13];
    const double C26086 = hry[14];
    const double C26636 = hry[15];
    const double C27186 = hry[16];
    const double C27736 = hry[17];
    const double C28286 = hry[18];
    const double C28836 = hry[19];
    const double C29386 = hry[20];
    const double C29936 = hry[21];
    const double C30486 = hry[22];
    const double C31036 = hry[23];
    const double C31586 = hry[24];
    const double C32136 = hry[25];
    const double C32686 = hry[26];
    const double C33236 = hry[27];
    const double C33786 = hry[28];
    const double C34336 = hry[29];
    const double C34886 = hry[30];
    const double C35436 = hry[31];
    const double C35986 = hry[32];
    const double C36536 = hry[33];
    const double C37086 = hry[34];
    const double C37636 = hry[35];
    const double C38186 = hry[36];
    const double C38736 = hry[37];
    const double C39286 = hry[38];
    const double C39836 = hry[39];
    const double C40386 = hry[40];
    const double C40936 = hry[41];
    const double C41486 = hry[42];
    const double C42036 = hry[43];
    const double C42586 = hry[44];
    const double C43136 = hry[45];
    const double C43686 = hry[46];
    const double C44236 = hry[47];
    const double C44786 = hry[48];
    const double C45336 = hry[49];
    const double C45886 = hry[50];
    const double C46436 = hry[51];
    const double C46986 = hry[52];
    const double C47536 = hry[53];
    const double C48086 = hry[54];
    const double C48636 = hry[55];
    const double C49186 = hry[56];
    const double C49736 = hry[57];
    const double C50286 = hry[58];
    const double C50836 = hry[59];
    const double C51386 = hry[60];
    const double C51936 = hry[61];
    const double C52486 = hry[62];
    const double C53036 = hry[63];
    const double C53586 = hry[64];
    const double C54136 = hry[65];
    const double C54686 = hry[66];
    const double C55236 = hry[67];
    const double C55786 = hry[68];
    const double C56336 = hry[69];
    const double C56886 = hry[70];
    const double C57436 = hry[71];
    const double C57986 = hry[72];
    const double C58536 = hry[73];
    const double C59086 = hry[74];
    const double C59636 = hry[75];
    const double C60186 = hry[76];
    const double C60736 = hry[77];
    const double C61286 = hry[78];
    const double C61836 = hry[79];
    const double C62386 = hry[80];
    const double C62936 = hry[81];
    const double C63486 = hry[82];
    const double C64036 = hry[83];
    const double C64586 = hry[84];
    const double C65136 = hry[85];
    const double C65686 = hry[86];
    const double C66236 = hry[87];
    const double C66786 = hry[88];
    const double C67336 = hry[89];
    const double C67886 = hry[90];
    const double C68436 = hry[91];
    const double C68986 = hry[92];
    const double C69536 = hry[93];
    const double C70086 = hry[94];
    const double C70636 = hry[95];
    const double C71186 = hry[96];
    const double C71736 = hry[97];
    const double C72286 = hry[98];
    const double C72836 = hry[99];
    const double C73386 = hry[100];
    const double C73936 = hry[101];
    const double C74486 = hry[102];
    const double C75036 = hry[103];
    const double C75586 = hry[104];
    const double C76136 = hry[105];
    const double C76686 = hry[106];
    const double C77236 = hry[107];
    const double C18569 = hrz[0];
    const double C19119 = hrz[1];
    const double C19669 = hrz[2];
    const double C20219 = hrz[3];
    const double C20769 = hrz[4];
    const double C21319 = hrz[5];
    const double C21869 = hrz[6];
    const double C22419 = hrz[7];
    const double C22969 = hrz[8];
    const double C23519 = hrz[9];
    const double C24069 = hrz[10];
    const double C24619 = hrz[11];
    const double C25169 = hrz[12];
    const double C25719 = hrz[13];
    const double C26269 = hrz[14];
    const double C26819 = hrz[15];
    const double C27369 = hrz[16];
    const double C27919 = hrz[17];
    const double C28469 = hrz[18];
    const double C29019 = hrz[19];
    const double C29569 = hrz[20];
    const double C30119 = hrz[21];
    const double C30669 = hrz[22];
    const double C31219 = hrz[23];
    const double C31769 = hrz[24];
    const double C32319 = hrz[25];
    const double C32869 = hrz[26];
    const double C33419 = hrz[27];
    const double C33969 = hrz[28];
    const double C34519 = hrz[29];
    const double C35069 = hrz[30];
    const double C35619 = hrz[31];
    const double C36169 = hrz[32];
    const double C36719 = hrz[33];
    const double C37269 = hrz[34];
    const double C37819 = hrz[35];
    const double C38369 = hrz[36];
    const double C38919 = hrz[37];
    const double C39469 = hrz[38];
    const double C40019 = hrz[39];
    const double C40569 = hrz[40];
    const double C41119 = hrz[41];
    const double C41669 = hrz[42];
    const double C42219 = hrz[43];
    const double C42769 = hrz[44];
    const double C43319 = hrz[45];
    const double C43869 = hrz[46];
    const double C44419 = hrz[47];
    const double C44969 = hrz[48];
    const double C45519 = hrz[49];
    const double C46069 = hrz[50];
    const double C46619 = hrz[51];
    const double C47169 = hrz[52];
    const double C47719 = hrz[53];
    const double C48269 = hrz[54];
    const double C48819 = hrz[55];
    const double C49369 = hrz[56];
    const double C49919 = hrz[57];
    const double C50469 = hrz[58];
    const double C51019 = hrz[59];
    const double C51569 = hrz[60];
    const double C52119 = hrz[61];
    const double C52669 = hrz[62];
    const double C53219 = hrz[63];
    const double C53769 = hrz[64];
    const double C54319 = hrz[65];
    const double C54869 = hrz[66];
    const double C55419 = hrz[67];
    const double C55969 = hrz[68];
    const double C56519 = hrz[69];
    const double C57069 = hrz[70];
    const double C57619 = hrz[71];
    const double C58169 = hrz[72];
    const double C58719 = hrz[73];
    const double C59269 = hrz[74];
    const double C59819 = hrz[75];
    const double C60369 = hrz[76];
    const double C60919 = hrz[77];
    const double C61469 = hrz[78];
    const double C62019 = hrz[79];
    const double C62569 = hrz[80];
    const double C63119 = hrz[81];
    const double C63669 = hrz[82];
    const double C64219 = hrz[83];
    const double C64769 = hrz[84];
    const double C65319 = hrz[85];
    const double C65869 = hrz[86];
    const double C66419 = hrz[87];
    const double C66969 = hrz[88];
    const double C67519 = hrz[89];
    const double C68069 = hrz[90];
    const double C68619 = hrz[91];
    const double C69169 = hrz[92];
    const double C69719 = hrz[93];
    const double C70269 = hrz[94];
    const double C70819 = hrz[95];
    const double C71369 = hrz[96];
    const double C71919 = hrz[97];
    const double C72469 = hrz[98];
    const double C73019 = hrz[99];
    const double C73569 = hrz[100];
    const double C74119 = hrz[101];
    const double C74669 = hrz[102];
    const double C75219 = hrz[103];
    const double C75769 = hrz[104];
    const double C76319 = hrz[105];
    const double C76869 = hrz[106];
    const double C77419 = hrz[107];
    gx[0] += std::sqrt(9.) * C52853;
    gy[0] += std::sqrt(9.) * C53036;
    gz[0] += std::sqrt(9.) * C53219;
    gx[1] += std::sqrt(9.) * C53403;
    gy[1] += std::sqrt(9.) * C53586;
    gz[1] += std::sqrt(9.) * C53769;
    gx[2] += std::sqrt(9.) * C53953;
    gy[2] += std::sqrt(9.) * C54136;
    gz[2] += std::sqrt(9.) * C54319;
    gx[3] += std::sqrt(9.) * C56153;
    gy[3] += std::sqrt(9.) * C56336;
    gz[3] += std::sqrt(9.) * C56519;
    gx[4] += std::sqrt(9.) * C56703;
    gy[4] += std::sqrt(9.) * C56886;
    gz[4] += std::sqrt(9.) * C57069;
    gx[5] += std::sqrt(9.) * C57253;
    gy[5] += std::sqrt(9.) * C57436;
    gz[5] += std::sqrt(9.) * C57619;
    gx[6] += std::sqrt(3.0) * C51203 -
             (std::sqrt(0.75) * C49553 + std::sqrt(0.75) * C47903);
    gy[6] += std::sqrt(3.0) * C51386 -
             (std::sqrt(0.75) * C49736 + std::sqrt(0.75) * C48086);
    gz[6] += std::sqrt(3.0) * C51569 -
             (std::sqrt(0.75) * C49919 + std::sqrt(0.75) * C48269);
    gx[7] += std::sqrt(3.0) * C51753 -
             (std::sqrt(0.75) * C50103 + std::sqrt(0.75) * C48453);
    gy[7] += std::sqrt(3.0) * C51936 -
             (std::sqrt(0.75) * C50286 + std::sqrt(0.75) * C48636);
    gz[7] += std::sqrt(3.0) * C52119 -
             (std::sqrt(0.75) * C50469 + std::sqrt(0.75) * C48819);
    gx[8] += std::sqrt(3.0) * C52303 -
             (std::sqrt(0.75) * C50653 + std::sqrt(0.75) * C49003);
    gy[8] += std::sqrt(3.0) * C52486 -
             (std::sqrt(0.75) * C50836 + std::sqrt(0.75) * C49186);
    gz[8] += std::sqrt(3.0) * C52669 -
             (std::sqrt(0.75) * C51019 + std::sqrt(0.75) * C49369);
    gx[9] += std::sqrt(9.) * C54503;
    gy[9] += std::sqrt(9.) * C54686;
    gz[9] += std::sqrt(9.) * C54869;
    gx[10] += std::sqrt(9.) * C55053;
    gy[10] += std::sqrt(9.) * C55236;
    gz[10] += std::sqrt(9.) * C55419;
    gx[11] += std::sqrt(9.) * C55603;
    gy[11] += std::sqrt(9.) * C55786;
    gz[11] += std::sqrt(9.) * C55969;
    gx[12] += std::sqrt(2.25) * C47903 - std::sqrt(2.25) * C49553;
    gy[12] += std::sqrt(2.25) * C48086 - std::sqrt(2.25) * C49736;
    gz[12] += std::sqrt(2.25) * C48269 - std::sqrt(2.25) * C49919;
    gx[13] += std::sqrt(2.25) * C48453 - std::sqrt(2.25) * C50103;
    gy[13] += std::sqrt(2.25) * C48636 - std::sqrt(2.25) * C50286;
    gz[13] += std::sqrt(2.25) * C48819 - std::sqrt(2.25) * C50469;
    gx[14] += std::sqrt(2.25) * C49003 - std::sqrt(2.25) * C50653;
    gy[14] += std::sqrt(2.25) * C49186 - std::sqrt(2.25) * C50836;
    gz[14] += std::sqrt(2.25) * C49369 - std::sqrt(2.25) * C51019;
    gx[15] += std::sqrt(9.) * C72653;
    gy[15] += std::sqrt(9.) * C72836;
    gz[15] += std::sqrt(9.) * C73019;
    gx[16] += std::sqrt(9.) * C73203;
    gy[16] += std::sqrt(9.) * C73386;
    gz[16] += std::sqrt(9.) * C73569;
    gx[17] += std::sqrt(9.) * C73753;
    gy[17] += std::sqrt(9.) * C73936;
    gz[17] += std::sqrt(9.) * C74119;
    gx[18] += std::sqrt(9.) * C75953;
    gy[18] += std::sqrt(9.) * C76136;
    gz[18] += std::sqrt(9.) * C76319;
    gx[19] += std::sqrt(9.) * C76503;
    gy[19] += std::sqrt(9.) * C76686;
    gz[19] += std::sqrt(9.) * C76869;
    gx[20] += std::sqrt(9.) * C77053;
    gy[20] += std::sqrt(9.) * C77236;
    gz[20] += std::sqrt(9.) * C77419;
    gx[21] += std::sqrt(3.0) * C71003 -
              (std::sqrt(0.75) * C69353 + std::sqrt(0.75) * C67703);
    gy[21] += std::sqrt(3.0) * C71186 -
              (std::sqrt(0.75) * C69536 + std::sqrt(0.75) * C67886);
    gz[21] += std::sqrt(3.0) * C71369 -
              (std::sqrt(0.75) * C69719 + std::sqrt(0.75) * C68069);
    gx[22] += std::sqrt(3.0) * C71553 -
              (std::sqrt(0.75) * C69903 + std::sqrt(0.75) * C68253);
    gy[22] += std::sqrt(3.0) * C71736 -
              (std::sqrt(0.75) * C70086 + std::sqrt(0.75) * C68436);
    gz[22] += std::sqrt(3.0) * C71919 -
              (std::sqrt(0.75) * C70269 + std::sqrt(0.75) * C68619);
    gx[23] += std::sqrt(3.0) * C72103 -
              (std::sqrt(0.75) * C70453 + std::sqrt(0.75) * C68803);
    gy[23] += std::sqrt(3.0) * C72286 -
              (std::sqrt(0.75) * C70636 + std::sqrt(0.75) * C68986);
    gz[23] += std::sqrt(3.0) * C72469 -
              (std::sqrt(0.75) * C70819 + std::sqrt(0.75) * C69169);
    gx[24] += std::sqrt(9.) * C74303;
    gy[24] += std::sqrt(9.) * C74486;
    gz[24] += std::sqrt(9.) * C74669;
    gx[25] += std::sqrt(9.) * C74853;
    gy[25] += std::sqrt(9.) * C75036;
    gz[25] += std::sqrt(9.) * C75219;
    gx[26] += std::sqrt(9.) * C75403;
    gy[26] += std::sqrt(9.) * C75586;
    gz[26] += std::sqrt(9.) * C75769;
    gx[27] += std::sqrt(2.25) * C67703 - std::sqrt(2.25) * C69353;
    gy[27] += std::sqrt(2.25) * C67886 - std::sqrt(2.25) * C69536;
    gz[27] += std::sqrt(2.25) * C68069 - std::sqrt(2.25) * C69719;
    gx[28] += std::sqrt(2.25) * C68253 - std::sqrt(2.25) * C69903;
    gy[28] += std::sqrt(2.25) * C68436 - std::sqrt(2.25) * C70086;
    gz[28] += std::sqrt(2.25) * C68619 - std::sqrt(2.25) * C70269;
    gx[29] += std::sqrt(2.25) * C68803 - std::sqrt(2.25) * C70453;
    gy[29] += std::sqrt(2.25) * C68986 - std::sqrt(2.25) * C70636;
    gz[29] += std::sqrt(2.25) * C69169 - std::sqrt(2.25) * C70819;
    gx[30] += std::sqrt(3.0) * C42953 -
              (std::sqrt(0.75) * C33053 + std::sqrt(0.75) * C23153);
    gy[30] += std::sqrt(3.0) * C43136 -
              (std::sqrt(0.75) * C33236 + std::sqrt(0.75) * C23336);
    gz[30] += std::sqrt(3.0) * C43319 -
              (std::sqrt(0.75) * C33419 + std::sqrt(0.75) * C23519);
    gx[31] += std::sqrt(3.0) * C43503 -
              (std::sqrt(0.75) * C33603 + std::sqrt(0.75) * C23703);
    gy[31] += std::sqrt(3.0) * C43686 -
              (std::sqrt(0.75) * C33786 + std::sqrt(0.75) * C23886);
    gz[31] += std::sqrt(3.0) * C43869 -
              (std::sqrt(0.75) * C33969 + std::sqrt(0.75) * C24069);
    gx[32] += std::sqrt(3.0) * C44053 -
              (std::sqrt(0.75) * C34153 + std::sqrt(0.75) * C24253);
    gy[32] += std::sqrt(3.0) * C44236 -
              (std::sqrt(0.75) * C34336 + std::sqrt(0.75) * C24436);
    gz[32] += std::sqrt(3.0) * C44419 -
              (std::sqrt(0.75) * C34519 + std::sqrt(0.75) * C24619);
    gx[33] += std::sqrt(3.0) * C46253 -
              (std::sqrt(0.75) * C36353 + std::sqrt(0.75) * C26453);
    gy[33] += std::sqrt(3.0) * C46436 -
              (std::sqrt(0.75) * C36536 + std::sqrt(0.75) * C26636);
    gz[33] += std::sqrt(3.0) * C46619 -
              (std::sqrt(0.75) * C36719 + std::sqrt(0.75) * C26819);
    gx[34] += std::sqrt(3.0) * C46803 -
              (std::sqrt(0.75) * C36903 + std::sqrt(0.75) * C27003);
    gy[34] += std::sqrt(3.0) * C46986 -
              (std::sqrt(0.75) * C37086 + std::sqrt(0.75) * C27186);
    gz[34] += std::sqrt(3.0) * C47169 -
              (std::sqrt(0.75) * C37269 + std::sqrt(0.75) * C27369);
    gx[35] += std::sqrt(3.0) * C47353 -
              (std::sqrt(0.75) * C37453 + std::sqrt(0.75) * C27553);
    gy[35] += std::sqrt(3.0) * C47536 -
              (std::sqrt(0.75) * C37636 + std::sqrt(0.75) * C27736);
    gz[35] += std::sqrt(3.0) * C47719 -
              (std::sqrt(0.75) * C37819 + std::sqrt(0.75) * C27919);
    gx[36] += 0.25 * C18204 + 0.25 * C19853 - 0.5 * C21503 + 0.25 * C28103 +
              0.25 * C29753 - 0.5 * C31403 - 0.5 * C38003 - 0.5 * C39653 +
              C41303;
    gy[36] += 0.25 * C18386 + 0.25 * C20036 - 0.5 * C21686 + 0.25 * C28286 +
              0.25 * C29936 - 0.5 * C31586 - 0.5 * C38186 - 0.5 * C39836 +
              C41486;
    gz[36] += 0.25 * C18569 + 0.25 * C20219 - 0.5 * C21869 + 0.25 * C28469 +
              0.25 * C30119 - 0.5 * C31769 - 0.5 * C38369 - 0.5 * C40019 +
              C41669;
    gx[37] += 0.25 * C18753 + 0.25 * C20403 - 0.5 * C22053 + 0.25 * C28653 +
              0.25 * C30303 - 0.5 * C31953 - 0.5 * C38553 - 0.5 * C40203 +
              C41853;
    gy[37] += 0.25 * C18936 + 0.25 * C20586 - 0.5 * C22236 + 0.25 * C28836 +
              0.25 * C30486 - 0.5 * C32136 - 0.5 * C38736 - 0.5 * C40386 +
              C42036;
    gz[37] += 0.25 * C19119 + 0.25 * C20769 - 0.5 * C22419 + 0.25 * C29019 +
              0.25 * C30669 - 0.5 * C32319 - 0.5 * C38919 - 0.5 * C40569 +
              C42219;
    gx[38] += 0.25 * C19303 + 0.25 * C20953 - 0.5 * C22603 + 0.25 * C29203 +
              0.25 * C30853 - 0.5 * C32503 - 0.5 * C39103 - 0.5 * C40753 +
              C42403;
    gy[38] += 0.25 * C19486 + 0.25 * C21136 - 0.5 * C22786 + 0.25 * C29386 +
              0.25 * C31036 - 0.5 * C32686 - 0.5 * C39286 - 0.5 * C40936 +
              C42586;
    gz[38] += 0.25 * C19669 + 0.25 * C21319 - 0.5 * C22969 + 0.25 * C29569 +
              0.25 * C31219 - 0.5 * C32869 - 0.5 * C39469 - 0.5 * C41119 +
              C42769;
    gx[39] += std::sqrt(3.0) * C44603 -
              (std::sqrt(0.75) * C34703 + std::sqrt(0.75) * C24803);
    gy[39] += std::sqrt(3.0) * C44786 -
              (std::sqrt(0.75) * C34886 + std::sqrt(0.75) * C24986);
    gz[39] += std::sqrt(3.0) * C44969 -
              (std::sqrt(0.75) * C35069 + std::sqrt(0.75) * C25169);
    gx[40] += std::sqrt(3.0) * C45153 -
              (std::sqrt(0.75) * C35253 + std::sqrt(0.75) * C25353);
    gy[40] += std::sqrt(3.0) * C45336 -
              (std::sqrt(0.75) * C35436 + std::sqrt(0.75) * C25536);
    gz[40] += std::sqrt(3.0) * C45519 -
              (std::sqrt(0.75) * C35619 + std::sqrt(0.75) * C25719);
    gx[41] += std::sqrt(3.0) * C45703 -
              (std::sqrt(0.75) * C35803 + std::sqrt(0.75) * C25903);
    gy[41] += std::sqrt(3.0) * C45886 -
              (std::sqrt(0.75) * C35986 + std::sqrt(0.75) * C26086);
    gz[41] += std::sqrt(3.0) * C46069 -
              (std::sqrt(0.75) * C36169 + std::sqrt(0.75) * C26269);
    gx[42] += std::sqrt(0.1875) * C19853 - std::sqrt(0.1875) * C18204 -
              std::sqrt(0.1875) * C28103 + std::sqrt(0.1875) * C29753 +
              std::sqrt(0.75) * C38003 - std::sqrt(0.75) * C39653;
    gy[42] += std::sqrt(0.1875) * C20036 - std::sqrt(0.1875) * C18386 -
              std::sqrt(0.1875) * C28286 + std::sqrt(0.1875) * C29936 +
              std::sqrt(0.75) * C38186 - std::sqrt(0.75) * C39836;
    gz[42] += std::sqrt(0.1875) * C20219 - std::sqrt(0.1875) * C18569 -
              std::sqrt(0.1875) * C28469 + std::sqrt(0.1875) * C30119 +
              std::sqrt(0.75) * C38369 - std::sqrt(0.75) * C40019;
    gx[43] += std::sqrt(0.1875) * C20403 - std::sqrt(0.1875) * C18753 -
              std::sqrt(0.1875) * C28653 + std::sqrt(0.1875) * C30303 +
              std::sqrt(0.75) * C38553 - std::sqrt(0.75) * C40203;
    gy[43] += std::sqrt(0.1875) * C20586 - std::sqrt(0.1875) * C18936 -
              std::sqrt(0.1875) * C28836 + std::sqrt(0.1875) * C30486 +
              std::sqrt(0.75) * C38736 - std::sqrt(0.75) * C40386;
    gz[43] += std::sqrt(0.1875) * C20769 - std::sqrt(0.1875) * C19119 -
              std::sqrt(0.1875) * C29019 + std::sqrt(0.1875) * C30669 +
              std::sqrt(0.75) * C38919 - std::sqrt(0.75) * C40569;
    gx[44] += std::sqrt(0.1875) * C20953 - std::sqrt(0.1875) * C19303 -
              std::sqrt(0.1875) * C29203 + std::sqrt(0.1875) * C30853 +
              std::sqrt(0.75) * C39103 - std::sqrt(0.75) * C40753;
    gy[44] += std::sqrt(0.1875) * C21136 - std::sqrt(0.1875) * C19486 -
              std::sqrt(0.1875) * C29386 + std::sqrt(0.1875) * C31036 +
              std::sqrt(0.75) * C39286 - std::sqrt(0.75) * C40936;
    gz[44] += std::sqrt(0.1875) * C21319 - std::sqrt(0.1875) * C19669 -
              std::sqrt(0.1875) * C29569 + std::sqrt(0.1875) * C31219 +
              std::sqrt(0.75) * C39469 - std::sqrt(0.75) * C41119;
    gx[45] += std::sqrt(9.) * C62753;
    gy[45] += std::sqrt(9.) * C62936;
    gz[45] += std::sqrt(9.) * C63119;
    gx[46] += std::sqrt(9.) * C63303;
    gy[46] += std::sqrt(9.) * C63486;
    gz[46] += std::sqrt(9.) * C63669;
    gx[47] += std::sqrt(9.) * C63853;
    gy[47] += std::sqrt(9.) * C64036;
    gz[47] += std::sqrt(9.) * C64219;
    gx[48] += std::sqrt(9.) * C66053;
    gy[48] += std::sqrt(9.) * C66236;
    gz[48] += std::sqrt(9.) * C66419;
    gx[49] += std::sqrt(9.) * C66603;
    gy[49] += std::sqrt(9.) * C66786;
    gz[49] += std::sqrt(9.) * C66969;
    gx[50] += std::sqrt(9.) * C67153;
    gy[50] += std::sqrt(9.) * C67336;
    gz[50] += std::sqrt(9.) * C67519;
    gx[51] += std::sqrt(3.0) * C61103 -
              (std::sqrt(0.75) * C59453 + std::sqrt(0.75) * C57803);
    gy[51] += std::sqrt(3.0) * C61286 -
              (std::sqrt(0.75) * C59636 + std::sqrt(0.75) * C57986);
    gz[51] += std::sqrt(3.0) * C61469 -
              (std::sqrt(0.75) * C59819 + std::sqrt(0.75) * C58169);
    gx[52] += std::sqrt(3.0) * C61653 -
              (std::sqrt(0.75) * C60003 + std::sqrt(0.75) * C58353);
    gy[52] += std::sqrt(3.0) * C61836 -
              (std::sqrt(0.75) * C60186 + std::sqrt(0.75) * C58536);
    gz[52] += std::sqrt(3.0) * C62019 -
              (std::sqrt(0.75) * C60369 + std::sqrt(0.75) * C58719);
    gx[53] += std::sqrt(3.0) * C62203 -
              (std::sqrt(0.75) * C60553 + std::sqrt(0.75) * C58903);
    gy[53] += std::sqrt(3.0) * C62386 -
              (std::sqrt(0.75) * C60736 + std::sqrt(0.75) * C59086);
    gz[53] += std::sqrt(3.0) * C62569 -
              (std::sqrt(0.75) * C60919 + std::sqrt(0.75) * C59269);
    gx[54] += std::sqrt(9.) * C64403;
    gy[54] += std::sqrt(9.) * C64586;
    gz[54] += std::sqrt(9.) * C64769;
    gx[55] += std::sqrt(9.) * C64953;
    gy[55] += std::sqrt(9.) * C65136;
    gz[55] += std::sqrt(9.) * C65319;
    gx[56] += std::sqrt(9.) * C65503;
    gy[56] += std::sqrt(9.) * C65686;
    gz[56] += std::sqrt(9.) * C65869;
    gx[57] += std::sqrt(2.25) * C57803 - std::sqrt(2.25) * C59453;
    gy[57] += std::sqrt(2.25) * C57986 - std::sqrt(2.25) * C59636;
    gz[57] += std::sqrt(2.25) * C58169 - std::sqrt(2.25) * C59819;
    gx[58] += std::sqrt(2.25) * C58353 - std::sqrt(2.25) * C60003;
    gy[58] += std::sqrt(2.25) * C58536 - std::sqrt(2.25) * C60186;
    gz[58] += std::sqrt(2.25) * C58719 - std::sqrt(2.25) * C60369;
    gx[59] += std::sqrt(2.25) * C58903 - std::sqrt(2.25) * C60553;
    gy[59] += std::sqrt(2.25) * C59086 - std::sqrt(2.25) * C60736;
    gz[59] += std::sqrt(2.25) * C59269 - std::sqrt(2.25) * C60919;
    gx[60] += std::sqrt(2.25) * C23153 - std::sqrt(2.25) * C33053;
    gy[60] += std::sqrt(2.25) * C23336 - std::sqrt(2.25) * C33236;
    gz[60] += std::sqrt(2.25) * C23519 - std::sqrt(2.25) * C33419;
    gx[61] += std::sqrt(2.25) * C23703 - std::sqrt(2.25) * C33603;
    gy[61] += std::sqrt(2.25) * C23886 - std::sqrt(2.25) * C33786;
    gz[61] += std::sqrt(2.25) * C24069 - std::sqrt(2.25) * C33969;
    gx[62] += std::sqrt(2.25) * C24253 - std::sqrt(2.25) * C34153;
    gy[62] += std::sqrt(2.25) * C24436 - std::sqrt(2.25) * C34336;
    gz[62] += std::sqrt(2.25) * C24619 - std::sqrt(2.25) * C34519;
    gx[63] += std::sqrt(2.25) * C26453 - std::sqrt(2.25) * C36353;
    gy[63] += std::sqrt(2.25) * C26636 - std::sqrt(2.25) * C36536;
    gz[63] += std::sqrt(2.25) * C26819 - std::sqrt(2.25) * C36719;
    gx[64] += std::sqrt(2.25) * C27003 - std::sqrt(2.25) * C36903;
    gy[64] += std::sqrt(2.25) * C27186 - std::sqrt(2.25) * C37086;
    gz[64] += std::sqrt(2.25) * C27369 - std::sqrt(2.25) * C37269;
    gx[65] += std::sqrt(2.25) * C27553 - std::sqrt(2.25) * C37453;
    gy[65] += std::sqrt(2.25) * C27736 - std::sqrt(2.25) * C37636;
    gz[65] += std::sqrt(2.25) * C27919 - std::sqrt(2.25) * C37819;
    gx[66] += std::sqrt(0.75) * C21503 -
              (std::sqrt(0.1875) * C19853 + std::sqrt(0.1875) * C18204) +
              std::sqrt(0.1875) * C28103 + std::sqrt(0.1875) * C29753 -
              std::sqrt(0.75) * C31403;
    gy[66] += std::sqrt(0.75) * C21686 -
              (std::sqrt(0.1875) * C20036 + std::sqrt(0.1875) * C18386) +
              std::sqrt(0.1875) * C28286 + std::sqrt(0.1875) * C29936 -
              std::sqrt(0.75) * C31586;
    gz[66] += std::sqrt(0.75) * C21869 -
              (std::sqrt(0.1875) * C20219 + std::sqrt(0.1875) * C18569) +
              std::sqrt(0.1875) * C28469 + std::sqrt(0.1875) * C30119 -
              std::sqrt(0.75) * C31769;
    gx[67] += std::sqrt(0.75) * C22053 -
              (std::sqrt(0.1875) * C20403 + std::sqrt(0.1875) * C18753) +
              std::sqrt(0.1875) * C28653 + std::sqrt(0.1875) * C30303 -
              std::sqrt(0.75) * C31953;
    gy[67] += std::sqrt(0.75) * C22236 -
              (std::sqrt(0.1875) * C20586 + std::sqrt(0.1875) * C18936) +
              std::sqrt(0.1875) * C28836 + std::sqrt(0.1875) * C30486 -
              std::sqrt(0.75) * C32136;
    gz[67] += std::sqrt(0.75) * C22419 -
              (std::sqrt(0.1875) * C20769 + std::sqrt(0.1875) * C19119) +
              std::sqrt(0.1875) * C29019 + std::sqrt(0.1875) * C30669 -
              std::sqrt(0.75) * C32319;
    gx[68] += std::sqrt(0.75) * C22603 -
              (std::sqrt(0.1875) * C20953 + std::sqrt(0.1875) * C19303) +
              std::sqrt(0.1875) * C29203 + std::sqrt(0.1875) * C30853 -
              std::sqrt(0.75) * C32503;
    gy[68] += std::sqrt(0.75) * C22786 -
              (std::sqrt(0.1875) * C21136 + std::sqrt(0.1875) * C19486) +
              std::sqrt(0.1875) * C29386 + std::sqrt(0.1875) * C31036 -
              std::sqrt(0.75) * C32686;
    gz[68] += std::sqrt(0.75) * C22969 -
              (std::sqrt(0.1875) * C21319 + std::sqrt(0.1875) * C19669) +
              std::sqrt(0.1875) * C29569 + std::sqrt(0.1875) * C31219 -
              std::sqrt(0.75) * C32869;
    gx[69] += std::sqrt(2.25) * C24803 - std::sqrt(2.25) * C34703;
    gy[69] += std::sqrt(2.25) * C24986 - std::sqrt(2.25) * C34886;
    gz[69] += std::sqrt(2.25) * C25169 - std::sqrt(2.25) * C35069;
    gx[70] += std::sqrt(2.25) * C25353 - std::sqrt(2.25) * C35253;
    gy[70] += std::sqrt(2.25) * C25536 - std::sqrt(2.25) * C35436;
    gz[70] += std::sqrt(2.25) * C25719 - std::sqrt(2.25) * C35619;
    gx[71] += std::sqrt(2.25) * C25903 - std::sqrt(2.25) * C35803;
    gy[71] += std::sqrt(2.25) * C26086 - std::sqrt(2.25) * C35986;
    gz[71] += std::sqrt(2.25) * C26269 - std::sqrt(2.25) * C36169;
    gx[72] += std::sqrt(0.5625) * C18204 - std::sqrt(0.5625) * C19853 -
              std::sqrt(0.5625) * C28103 + std::sqrt(0.5625) * C29753;
    gy[72] += std::sqrt(0.5625) * C18386 - std::sqrt(0.5625) * C20036 -
              std::sqrt(0.5625) * C28286 + std::sqrt(0.5625) * C29936;
    gz[72] += std::sqrt(0.5625) * C18569 - std::sqrt(0.5625) * C20219 -
              std::sqrt(0.5625) * C28469 + std::sqrt(0.5625) * C30119;
    gx[73] += std::sqrt(0.5625) * C18753 - std::sqrt(0.5625) * C20403 -
              std::sqrt(0.5625) * C28653 + std::sqrt(0.5625) * C30303;
    gy[73] += std::sqrt(0.5625) * C18936 - std::sqrt(0.5625) * C20586 -
              std::sqrt(0.5625) * C28836 + std::sqrt(0.5625) * C30486;
    gz[73] += std::sqrt(0.5625) * C19119 - std::sqrt(0.5625) * C20769 -
              std::sqrt(0.5625) * C29019 + std::sqrt(0.5625) * C30669;
    gx[74] += std::sqrt(0.5625) * C19303 - std::sqrt(0.5625) * C20953 -
              std::sqrt(0.5625) * C29203 + std::sqrt(0.5625) * C30853;
    gy[74] += std::sqrt(0.5625) * C19486 - std::sqrt(0.5625) * C21136 -
              std::sqrt(0.5625) * C29386 + std::sqrt(0.5625) * C31036;
    gz[74] += std::sqrt(0.5625) * C19669 - std::sqrt(0.5625) * C21319 -
              std::sqrt(0.5625) * C29569 + std::sqrt(0.5625) * C31219;
}
