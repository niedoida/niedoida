/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_2(const double ae,
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
    eri_gradient_2020_2_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[35];
    double vry[35];
    double vrz[35];
    eri_gradient_2020_2_vr(ae,
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
    double etx[36];
    double ety[36];
    double etz[36];
    eri_gradient_2020_2_et(ae,
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
    double hrx[36];
    double hry[36];
    double hrz[36];
    eri_gradient_2020_2_hr(ae,
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
    gx[0] += std::sqrt(9.) * C189;
    gy[0] += std::sqrt(9.) * C191;
    gz[0] += std::sqrt(9.) * C193;
    gx[1] += std::sqrt(9.) * C203;
    gy[1] += std::sqrt(9.) * C205;
    gz[1] += std::sqrt(9.) * C207;
    gx[2] += std::sqrt(3.0) * C182 -
             (std::sqrt(0.75) * C175 + std::sqrt(0.75) * C168);
    gy[2] += std::sqrt(3.0) * C184 -
             (std::sqrt(0.75) * C177 + std::sqrt(0.75) * C170);
    gz[2] += std::sqrt(3.0) * C186 -
             (std::sqrt(0.75) * C179 + std::sqrt(0.75) * C172);
    gx[3] += std::sqrt(9.) * C196;
    gy[3] += std::sqrt(9.) * C198;
    gz[3] += std::sqrt(9.) * C200;
    gx[4] += std::sqrt(2.25) * C168 - std::sqrt(2.25) * C175;
    gy[4] += std::sqrt(2.25) * C170 - std::sqrt(2.25) * C177;
    gz[4] += std::sqrt(2.25) * C172 - std::sqrt(2.25) * C179;
    gx[5] += std::sqrt(9.) * C273;
    gy[5] += std::sqrt(9.) * C275;
    gz[5] += std::sqrt(9.) * C277;
    gx[6] += std::sqrt(9.) * C287;
    gy[6] += std::sqrt(9.) * C289;
    gz[6] += std::sqrt(9.) * C291;
    gx[7] += std::sqrt(3.0) * C266 -
             (std::sqrt(0.75) * C259 + std::sqrt(0.75) * C252);
    gy[7] += std::sqrt(3.0) * C268 -
             (std::sqrt(0.75) * C261 + std::sqrt(0.75) * C254);
    gz[7] += std::sqrt(3.0) * C270 -
             (std::sqrt(0.75) * C263 + std::sqrt(0.75) * C256);
    gx[8] += std::sqrt(9.) * C280;
    gy[8] += std::sqrt(9.) * C282;
    gz[8] += std::sqrt(9.) * C284;
    gx[9] += std::sqrt(2.25) * C252 - std::sqrt(2.25) * C259;
    gy[9] += std::sqrt(2.25) * C254 - std::sqrt(2.25) * C261;
    gz[9] += std::sqrt(2.25) * C256 - std::sqrt(2.25) * C263;
    gx[10] += std::sqrt(3.0) * C147 -
              (std::sqrt(0.75) * C105 + std::sqrt(0.75) * C63);
    gy[10] += std::sqrt(3.0) * C149 -
              (std::sqrt(0.75) * C107 + std::sqrt(0.75) * C65);
    gz[10] += std::sqrt(3.0) * C151 -
              (std::sqrt(0.75) * C109 + std::sqrt(0.75) * C67);
    gx[11] += std::sqrt(3.0) * C161 -
              (std::sqrt(0.75) * C119 + std::sqrt(0.75) * C77);
    gy[11] += std::sqrt(3.0) * C163 -
              (std::sqrt(0.75) * C121 + std::sqrt(0.75) * C79);
    gz[11] += std::sqrt(3.0) * C165 -
              (std::sqrt(0.75) * C123 + std::sqrt(0.75) * C81);
    gx[12] += 0.25 * C40 + 0.25 * C49 - 0.5 * C56 + 0.25 * C84 + 0.25 * C91 -
              0.5 * C98 - 0.5 * C126 - 0.5 * C133 + C140;
    gy[12] += 0.25 * C44 + 0.25 * C51 - 0.5 * C58 + 0.25 * C86 + 0.25 * C93 -
              0.5 * C100 - 0.5 * C128 - 0.5 * C135 + C142;
    gz[12] += 0.25 * C46 + 0.25 * C53 - 0.5 * C60 + 0.25 * C88 + 0.25 * C95 -
              0.5 * C102 - 0.5 * C130 - 0.5 * C137 + C144;
    gx[13] += std::sqrt(3.0) * C154 -
              (std::sqrt(0.75) * C112 + std::sqrt(0.75) * C70);
    gy[13] += std::sqrt(3.0) * C156 -
              (std::sqrt(0.75) * C114 + std::sqrt(0.75) * C72);
    gz[13] += std::sqrt(3.0) * C158 -
              (std::sqrt(0.75) * C116 + std::sqrt(0.75) * C74);
    gx[14] += std::sqrt(0.1875) * C49 - std::sqrt(0.1875) * C40 -
              std::sqrt(0.1875) * C84 + std::sqrt(0.1875) * C91 +
              std::sqrt(0.75) * C126 - std::sqrt(0.75) * C133;
    gy[14] += std::sqrt(0.1875) * C51 - std::sqrt(0.1875) * C44 -
              std::sqrt(0.1875) * C86 + std::sqrt(0.1875) * C93 +
              std::sqrt(0.75) * C128 - std::sqrt(0.75) * C135;
    gz[14] += std::sqrt(0.1875) * C53 - std::sqrt(0.1875) * C46 -
              std::sqrt(0.1875) * C88 + std::sqrt(0.1875) * C95 +
              std::sqrt(0.75) * C130 - std::sqrt(0.75) * C137;
    gx[15] += std::sqrt(9.) * C231;
    gy[15] += std::sqrt(9.) * C233;
    gz[15] += std::sqrt(9.) * C235;
    gx[16] += std::sqrt(9.) * C245;
    gy[16] += std::sqrt(9.) * C247;
    gz[16] += std::sqrt(9.) * C249;
    gx[17] += std::sqrt(3.0) * C224 -
              (std::sqrt(0.75) * C217 + std::sqrt(0.75) * C210);
    gy[17] += std::sqrt(3.0) * C226 -
              (std::sqrt(0.75) * C219 + std::sqrt(0.75) * C212);
    gz[17] += std::sqrt(3.0) * C228 -
              (std::sqrt(0.75) * C221 + std::sqrt(0.75) * C214);
    gx[18] += std::sqrt(9.) * C238;
    gy[18] += std::sqrt(9.) * C240;
    gz[18] += std::sqrt(9.) * C242;
    gx[19] += std::sqrt(2.25) * C210 - std::sqrt(2.25) * C217;
    gy[19] += std::sqrt(2.25) * C212 - std::sqrt(2.25) * C219;
    gz[19] += std::sqrt(2.25) * C214 - std::sqrt(2.25) * C221;
    gx[20] += std::sqrt(2.25) * C63 - std::sqrt(2.25) * C105;
    gy[20] += std::sqrt(2.25) * C65 - std::sqrt(2.25) * C107;
    gz[20] += std::sqrt(2.25) * C67 - std::sqrt(2.25) * C109;
    gx[21] += std::sqrt(2.25) * C77 - std::sqrt(2.25) * C119;
    gy[21] += std::sqrt(2.25) * C79 - std::sqrt(2.25) * C121;
    gz[21] += std::sqrt(2.25) * C81 - std::sqrt(2.25) * C123;
    gx[22] += std::sqrt(0.75) * C56 -
              (std::sqrt(0.1875) * C49 + std::sqrt(0.1875) * C40) +
              std::sqrt(0.1875) * C84 + std::sqrt(0.1875) * C91 -
              std::sqrt(0.75) * C98;
    gy[22] += std::sqrt(0.75) * C58 -
              (std::sqrt(0.1875) * C51 + std::sqrt(0.1875) * C44) +
              std::sqrt(0.1875) * C86 + std::sqrt(0.1875) * C93 -
              std::sqrt(0.75) * C100;
    gz[22] += std::sqrt(0.75) * C60 -
              (std::sqrt(0.1875) * C53 + std::sqrt(0.1875) * C46) +
              std::sqrt(0.1875) * C88 + std::sqrt(0.1875) * C95 -
              std::sqrt(0.75) * C102;
    gx[23] += std::sqrt(2.25) * C70 - std::sqrt(2.25) * C112;
    gy[23] += std::sqrt(2.25) * C72 - std::sqrt(2.25) * C114;
    gz[23] += std::sqrt(2.25) * C74 - std::sqrt(2.25) * C116;
    gx[24] += std::sqrt(0.5625) * C40 - std::sqrt(0.5625) * C49 -
              std::sqrt(0.5625) * C84 + std::sqrt(0.5625) * C91;
    gy[24] += std::sqrt(0.5625) * C44 - std::sqrt(0.5625) * C51 -
              std::sqrt(0.5625) * C86 + std::sqrt(0.5625) * C93;
    gz[24] += std::sqrt(0.5625) * C46 - std::sqrt(0.5625) * C53 -
              std::sqrt(0.5625) * C88 + std::sqrt(0.5625) * C95;
}
