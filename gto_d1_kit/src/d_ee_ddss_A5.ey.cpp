/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_1_ints(const double ae,
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
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C26270 = 2 * q;
    const double C26264 = de * zCD;
    const double C26263 = be * zAB;
    const double C26261 = de * yCD;
    const double C26260 = be * yAB;
    const double C26259 = de * xCD;
    const double C26258 = be * xAB;
    const double C26295 = p + q;
    const double C26559 = p * q;
    const double C26558 = std::pow(Pi, 2.5);
    const double C26557 = zP - zQ;
    const double C26556 = yP - yQ;
    const double C26555 = 2 * p;
    const double C26553 = xP - xQ;
    const double C26274 = C26263 + C26264;
    const double C26273 = C26260 + C26261;
    const double C26272 = C26258 + C26259;
    const double C26560 = std::sqrt(C26295);
    const double C26567 = C26558 * kab;
    const double C26566 = C26557 * q;
    const double C26565 = C26556 * q;
    const double C26563 = C26553 * q;
    const double C26568 = C26559 * C26560;
    const double C26572 = C26567 * kcd;
    const double C23392 = (2. * C26572 * bs[0]) / C26568;
    const double C23393 = (2. * C26572 * bs[1]) / C26568;
    const double C23809 = (2. * C26572 * bs[2]) / C26568;
    const double C24045 = (2. * C26572 * bs[3]) / C26568;
    const double C24142 = (2. * C26572 * bs[4]) / C26568;
    const double C26554 = C23393 * q;
    const double C19706 = -((C23392 * C26258) / p + (C23393 * C26563) / C26295);
    const double C20201 = -((C23392 * C26260) / p + (C23393 * C26565) / C26295);
    const double C20289 = -((C23392 * C26263) / p + (C23393 * C26566) / C26295);
    const double C26561 = C23809 * q;
    const double C23291 = -((C23393 * C26258) / p + (C23809 * C26563) / C26295);
    const double C23341 = -((C23393 * C26260) / p + (C23809 * C26565) / C26295);
    const double C23356 = -((C23393 * C26263) / p + (C23809 * C26566) / C26295);
    const double C26562 = C24045 * q;
    const double C23860 = -((C23809 * C26258) / p + (C24045 * C26563) / C26295);
    const double C24773 = -((C23809 * C26260) / p + (C24045 * C26565) / C26295);
    const double C24904 = -((C23809 * C26263) / p + (C24045 * C26566) / C26295);
    const double C24061 = -((C24045 * C26258) / p + (C24142 * C26563) / C26295);
    const double C24970 = -((C24045 * C26260) / p + (C24142 * C26565) / C26295);
    const double C25875 = -((C24045 * C26263) / p + (C24142 * C26566) / C26295);
    const double C26564 = C26554 / C26295;
    const double C26276 = C19706 / C26270;
    const double C26275 = C20201 / C26270;
    const double C26277 = C20289 / C26270;
    const double C26569 = C26561 / C26295;
    const double C20216 = -((C20201 * C26258) / p + (C23341 * C26563) / C26295);
    const double C20304 = -((C20289 * C26258) / p + (C23356 * C26563) / C26295);
    const double C20404 = -((C20289 * C26260) / p + (C23356 * C26565) / C26295);
    const double C26570 = C26562 / C26295;
    const double C23793 = -((C23356 * C26260) / p + (C24904 * C26565) / C26295);
    const double C26571 = C23392 - C26564;
    const double C26573 = C23393 - C26569;
    const double C26574 = C23809 - C26570;
    const double C20419 = -((C20404 * C26258) / p + (C23793 * C26563) / C26295);
    const double C26575 = C26571 / C26555;
    const double C26576 = C26573 / C26555;
    const double C26577 = C26574 / C26555;
    const double C26271 = C20419 * p;
    const double C19723 =
        C26575 - ((C19706 * C26258) / p + (C23291 * C26563) / C26295);
    const double C19888 =
        C26575 - ((C20201 * C26260) / p + (C23341 * C26565) / C26295);
    const double C20052 =
        C26575 - ((C20289 * C26263) / p + (C23356 * C26566) / C26295);
    const double C23408 =
        C26576 - ((C23291 * C26258) / p + (C23860 * C26563) / C26295);
    const double C23545 =
        C26576 - ((C23341 * C26260) / p + (C24773 * C26565) / C26295);
    const double C23677 =
        C26576 - ((C23356 * C26263) / p + (C24904 * C26566) / C26295);
    const double C23876 =
        C26577 - ((C23860 * C26258) / p + (C24061 * C26563) / C26295);
    const double C23892 =
        C26577 - ((C24773 * C26260) / p + (C24970 * C26565) / C26295);
    const double C23923 =
        C26577 - ((C24904 * C26263) / p + (C25875 * C26566) / C26295);
    const double C19489 = -(C20216 * C26274 + C26271) / q;
    const double C19568 = -(C20304 * C26273 + C26271) / q;
    const double C19614 = -(C20404 * C26272 + C26271) / q;
    const double C19739 = (C19706 - (C23291 * q) / C26295) / p -
                          ((C19723 * C26258) / p + (C23408 * C26563) / C26295);
    const double C20231 = -((C19723 * C26260) / p + (C23408 * C26565) / C26295);
    const double C20319 = -((C19723 * C26263) / p + (C23408 * C26566) / C26295);
    const double C19904 = -((C19888 * C26258) / p + (C23545 * C26563) / C26295);
    const double C21274 = (C20201 - (C23341 * q) / C26295) / p -
                          ((C19888 * C26260) / p + (C23545 * C26565) / C26295);
    const double C21766 = -((C19888 * C26263) / p + (C23545 * C26566) / C26295);
    const double C20068 = -((C20052 * C26258) / p + (C23677 * C26563) / C26295);
    const double C21423 = -((C20052 * C26260) / p + (C23677 * C26565) / C26295);
    const double C22784 = (C20289 - (C23356 * q) / C26295) / p -
                          ((C20052 * C26263) / p + (C23677 * C26566) / C26295);
    const double C23424 = (C23291 - (C23860 * q) / C26295) / p -
                          ((C23408 * C26258) / p + (C23876 * C26563) / C26295);
    const double C24420 = -((C23408 * C26263) / p + (C23876 * C26566) / C26295);
    const double C23454 = -((C23545 * C26258) / p + (C23892 * C26563) / C26295);
    const double C23632 = (C23341 - (C24773 * q) / C26295) / p -
                          ((C23545 * C26260) / p + (C23892 * C26565) / C26295);
    const double C23647 = -((C23545 * C26263) / p + (C23892 * C26566) / C26295);
    const double C23485 = -((C23677 * C26258) / p + (C23923 * C26563) / C26295);
    const double C23749 = -((C23677 * C26260) / p + (C23923 * C26565) / C26295);
    const double C23764 = (C23356 - (C24904 * q) / C26295) / p -
                          ((C23677 * C26263) / p + (C23923 * C26566) / C26295);
    const double C19126 = C19706 / q - (C19723 * C26272) / q - (C19739 * p) / q;
    const double C26262 = C20231 * p;
    const double C26265 = C20319 * p;
    const double C26266 = C19904 * p;
    const double C19277 = C20201 / q - (C19888 * C26273) / q - (C21274 * p) / q;
    const double C26267 = C21766 * p;
    const double C26268 = C20068 * p;
    const double C26269 = C21423 * p;
    const double C19392 = C20289 / q - (C20052 * C26274) / q - (C22784 * p) / q;
    const double C19177 = -(C19723 * C26273 + C26262) / q;
    const double C19423 = C26275 - (C20216 * C26272) / q - C26262 / q;
    const double C19194 = -(C19723 * C26274 + C26265) / q;
    const double C19518 = C26277 - (C20304 * C26272) / q - C26265 / q;
    const double C19226 = -(C19888 * C26272 + C26266) / q;
    const double C19474 = C26276 - (C20216 * C26273) / q - C26266 / q;
    const double C19293 = -(C19888 * C26274 + C26267) / q;
    const double C19663 = C26277 - (C20404 * C26273) / q - C26267 / q;
    const double C19325 = -(C20052 * C26272 + C26268) / q;
    const double C19585 = C26276 - (C20304 * C26274) / q - C26268 / q;
    const double C19376 = -(C20052 * C26273 + C26269) / q;
    const double C19678 = C26275 - (C20404 * C26274) / q - C26269 / q;
    g[0] = C19126;
    g[1] = C19177;
    g[2] = C19194;
    g[3] = C19226;
    g[4] = C19277;
    g[5] = C19293;
    g[6] = C19325;
    g[7] = C19376;
    g[8] = C19392;
    g[9] = C19423;
    g[10] = C19474;
    g[11] = C19489;
    g[12] = C19518;
    g[13] = C19568;
    g[14] = C19585;
    g[15] = C19614;
    g[16] = C19663;
    g[17] = C19678;
    g[18] = C19706;
    g[19] = C19723;
    g[20] = C19739;
    g[21] = C19888;
    g[22] = C19904;
    g[23] = C20052;
    g[24] = C20068;
    g[25] = C20201;
    g[26] = C20216;
    g[27] = C20231;
    g[28] = C20289;
    g[29] = C20304;
    g[30] = C20319;
    g[31] = C20404;
    g[32] = C20419;
    g[33] = C21274;
    g[34] = C21423;
    g[35] = C21766;
    g[36] = C22784;
    g[37] = C23291;
    g[38] = C23341;
    g[39] = C23356;
    g[40] = C23392;
    g[41] = C23393;
    g[42] = C23408;
    g[43] = C23424;
    g[44] = C23454;
    g[45] = C23485;
    g[46] = C23545;
    g[47] = C23632;
    g[48] = C23647;
    g[49] = C23677;
    g[50] = C23749;
    g[51] = C23764;
    g[52] = C23793;
    g[53] = C23809;
    g[54] = C23860;
    g[55] = C23876;
    g[56] = C23892;
    g[57] = C23923;
    g[58] = C24045;
    g[59] = C24061;
    g[60] = C24142;
    g[61] = C24420;
    g[62] = C24773;
    g[63] = C24904;
    g[64] = C24970;
    g[65] = C25875;
}
