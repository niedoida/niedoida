/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_2_ints(const double ae,
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
    const double C33986 = 2 * q;
    const double C33980 = de * zCD;
    const double C33979 = be * zAB;
    const double C33977 = de * yCD;
    const double C33976 = be * yAB;
    const double C33975 = de * xCD;
    const double C33974 = be * xAB;
    const double C34005 = p + q;
    const double C34275 = p * q;
    const double C34274 = std::pow(Pi, 2.5);
    const double C34273 = zP - zQ;
    const double C34272 = yP - yQ;
    const double C34271 = xP - xQ;
    const double C34270 = 2 * p;
    const double C33990 = C33979 + C33980;
    const double C33989 = C33976 + C33977;
    const double C33988 = C33974 + C33975;
    const double C34276 = std::sqrt(C34005);
    const double C34283 = C34274 * kab;
    const double C34282 = C34273 * q;
    const double C34281 = C34272 * q;
    const double C34280 = C34271 * q;
    const double C34284 = C34275 * C34276;
    const double C34288 = C34283 * kcd;
    const double C31016 = (2. * C34288 * bs[0]) / C34284;
    const double C31017 = (2. * C34288 * bs[1]) / C34284;
    const double C31514 = (2. * C34288 * bs[2]) / C34284;
    const double C31750 = (2. * C34288 * bs[3]) / C34284;
    const double C31847 = (2. * C34288 * bs[4]) / C34284;
    const double C34269 = C31017 * q;
    const double C27697 = -((C31016 * C33974) / p + (C31017 * C34280) / C34005);
    const double C28051 = -((C31016 * C33976) / p + (C31017 * C34281) / C34005);
    const double C28095 = -((C31016 * C33979) / p + (C31017 * C34282) / C34005);
    const double C34277 = C31514 * q;
    const double C30996 = -((C31017 * C33974) / p + (C31514 * C34280) / C34005);
    const double C31222 = -((C31017 * C33976) / p + (C31514 * C34281) / C34005);
    const double C31253 = -((C31017 * C33979) / p + (C31514 * C34282) / C34005);
    const double C34278 = C31750 * q;
    const double C31537 = -((C31514 * C33974) / p + (C31750 * C34280) / C34005);
    const double C32449 = -((C31514 * C33976) / p + (C31750 * C34281) / C34005);
    const double C32494 = -((C31514 * C33979) / p + (C31750 * C34282) / C34005);
    const double C31794 = -((C31750 * C33974) / p + (C31847 * C34280) / C34005);
    const double C32689 = -((C31750 * C33976) / p + (C31847 * C34281) / C34005);
    const double C33580 = -((C31750 * C33979) / p + (C31847 * C34282) / C34005);
    const double C34279 = C34269 / C34005;
    const double C33992 = C27697 / C33986;
    const double C33991 = C28051 / C33986;
    const double C33993 = C28095 / C33986;
    const double C34285 = C34277 / C34005;
    const double C27312 = -((C28051 * C33974) / p + (C31222 * C34280) / C34005);
    const double C27447 = -((C28095 * C33974) / p + (C31253 * C34280) / C34005);
    const double C27582 = -((C28095 * C33976) / p + (C31253 * C34281) / C34005);
    const double C34286 = C34278 / C34005;
    const double C31237 = -((C31253 * C33976) / p + (C32494 * C34281) / C34005);
    const double C34287 = C31016 - C34279;
    const double C34289 = C31017 - C34285;
    const double C34290 = C31514 - C34286;
    const double C28167 = -((C27582 * C33974) / p + (C31237 * C34280) / C34005);
    const double C34291 = C34287 / C34270;
    const double C34292 = C34289 / C34270;
    const double C34293 = C34290 / C34270;
    const double C33987 = C28167 * p;
    const double C26882 =
        C34291 - ((C27697 * C33974) / p + (C30996 * C34280) / C34005);
    const double C27025 =
        C34291 - ((C28051 * C33976) / p + (C31222 * C34281) / C34005);
    const double C27168 =
        C34291 - ((C28095 * C33979) / p + (C31253 * C34282) / C34005);
    const double C31032 =
        C34292 - ((C30996 * C33974) / p + (C31537 * C34280) / C34005);
    const double C31091 =
        C34292 - ((C31222 * C33976) / p + (C32449 * C34281) / C34005);
    const double C31164 =
        C34292 - ((C31253 * C33979) / p + (C32494 * C34282) / C34005);
    const double C31625 =
        C34293 - ((C31537 * C33974) / p + (C31794 * C34280) / C34005);
    const double C31641 =
        C34293 - ((C32449 * C33976) / p + (C32689 * C34281) / C34005);
    const double C31671 =
        C34293 - ((C32494 * C33979) / p + (C33580 * C34282) / C34005);
    const double C27342 = -(C27312 * C33990 + C33987) / q;
    const double C27462 = -(C27447 * C33989 + C33987) / q;
    const double C27565 = -(C27582 * C33988 + C33987) / q;
    const double C27713 = (C27697 - (C30996 * q) / C34005) / p -
                          ((C26882 * C33974) / p + (C31032 * C34280) / C34005);
    const double C28066 = -((C26882 * C33976) / p + (C31032 * C34281) / C34005);
    const double C28110 = -((C26882 * C33979) / p + (C31032 * C34282) / C34005);
    const double C27832 = -((C27025 * C33974) / p + (C31091 * C34280) / C34005);
    const double C29194 = (C28051 - (C31222 * q) / C34005) / p -
                          ((C27025 * C33976) / p + (C31091 * C34281) / C34005);
    const double C29482 = -((C27025 * C33979) / p + (C31091 * C34282) / C34005);
    const double C27949 = -((C27168 * C33974) / p + (C31164 * C34280) / C34005);
    const double C29298 = -((C27168 * C33976) / p + (C31164 * C34281) / C34005);
    const double C30640 = (C28095 - (C31253 * q) / C34005) / p -
                          ((C27168 * C33979) / p + (C31164 * C34282) / C34005);
    const double C31289 = (C30996 - (C31537 * q) / C34005) / p -
                          ((C31032 * C33974) / p + (C31625 * C34280) / C34005);
    const double C32237 = -((C31032 * C33979) / p + (C31625 * C34282) / C34005);
    const double C31333 = -((C31091 * C33974) / p + (C31641 * C34280) / C34005);
    const double C31380 = (C31222 - (C32449 * q) / C34005) / p -
                          ((C31091 * C33976) / p + (C31641 * C34281) / C34005);
    const double C31396 = -((C31091 * C33979) / p + (C31641 * C34282) / C34005);
    const double C31364 = -((C31164 * C33974) / p + (C31671 * C34280) / C34005);
    const double C31455 = -((C31164 * C33976) / p + (C31671 * C34281) / C34005);
    const double C31470 = (C31253 - (C32494 * q) / C34005) / p -
                          ((C31164 * C33979) / p + (C31671 * C34282) / C34005);
    const double C26864 = C27697 / q - (C26882 * C33988) / q - (C27713 * p) / q;
    const double C33978 = C28066 * p;
    const double C33981 = C28110 * p;
    const double C33982 = C27832 * p;
    const double C27041 = C28051 / q - (C27025 * C33989) / q - (C29194 * p) / q;
    const double C33983 = C29482 * p;
    const double C33984 = C27949 * p;
    const double C33985 = C29298 * p;
    const double C27200 = C28095 / q - (C27168 * C33990) / q - (C30640 * p) / q;
    const double C26899 = -(C26882 * C33989 + C33978) / q;
    const double C27293 = C33991 - (C27312 * C33988) / q - C33978 / q;
    const double C26916 = -(C26882 * C33990 + C33981) / q;
    const double C27429 = C33993 - (C27447 * C33988) / q - C33981 / q;
    const double C27008 = -(C27025 * C33988 + C33982) / q;
    const double C27327 = C33992 - (C27312 * C33989) / q - C33982 / q;
    const double C27057 = -(C27025 * C33990 + C33983) / q;
    const double C27597 = C33993 - (C27582 * C33989) / q - C33983 / q;
    const double C27151 = -(C27168 * C33988 + C33984) / q;
    const double C27479 = C33992 - (C27447 * C33990) / q - C33984 / q;
    const double C27184 = -(C27168 * C33989 + C33985) / q;
    const double C27612 = C33991 - (C27582 * C33990) / q - C33985 / q;
    g[0] = C26864;
    g[1] = C26882;
    g[2] = C26899;
    g[3] = C26916;
    g[4] = C27008;
    g[5] = C27025;
    g[6] = C27041;
    g[7] = C27057;
    g[8] = C27151;
    g[9] = C27168;
    g[10] = C27184;
    g[11] = C27200;
    g[12] = C27293;
    g[13] = C27312;
    g[14] = C27327;
    g[15] = C27342;
    g[16] = C27429;
    g[17] = C27447;
    g[18] = C27462;
    g[19] = C27479;
    g[20] = C27565;
    g[21] = C27582;
    g[22] = C27597;
    g[23] = C27612;
    g[24] = C27697;
    g[25] = C27713;
    g[26] = C27832;
    g[27] = C27949;
    g[28] = C28051;
    g[29] = C28066;
    g[30] = C28095;
    g[31] = C28110;
    g[32] = C28167;
    g[33] = C29194;
    g[34] = C29298;
    g[35] = C29482;
    g[36] = C30640;
    g[37] = C30996;
    g[38] = C31016;
    g[39] = C31017;
    g[40] = C31032;
    g[41] = C31091;
    g[42] = C31164;
    g[43] = C31222;
    g[44] = C31237;
    g[45] = C31253;
    g[46] = C31289;
    g[47] = C31333;
    g[48] = C31364;
    g[49] = C31380;
    g[50] = C31396;
    g[51] = C31455;
    g[52] = C31470;
    g[53] = C31514;
    g[54] = C31537;
    g[55] = C31625;
    g[56] = C31641;
    g[57] = C31671;
    g[58] = C31750;
    g[59] = C31794;
    g[60] = C31847;
    g[61] = C32237;
    g[62] = C32449;
    g[63] = C32494;
    g[64] = C32689;
    g[65] = C33580;
}
