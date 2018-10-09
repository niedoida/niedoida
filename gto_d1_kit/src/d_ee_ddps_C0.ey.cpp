/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_3_ints(const double ae,
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
    const double C17356 = de * zCD;
    const double C17355 = be * zAB;
    const double C17352 = de * yCD;
    const double C17351 = be * yAB;
    const double C17350 = de * xCD;
    const double C17349 = be * xAB;
    const double C17348 = 2 * q;
    const double C17401 = p + q;
    const double C17910 = p * q;
    const double C17909 = std::pow(Pi, 2.5);
    const double C17905 = zP - zQ;
    const double C17904 = yP - yQ;
    const double C17903 = xP - xQ;
    const double C17902 = 2 * p;
    const double C17379 = C17355 + C17356;
    const double C17378 = C17351 + C17352;
    const double C17377 = C17349 + C17350;
    const double C17911 = std::sqrt(C17401);
    const double C17923 = C17909 * kab;
    const double C17919 = C17905 * q;
    const double C17918 = C17904 * q;
    const double C17917 = C17903 * q;
    const double C17924 = C17910 * C17911;
    const double C17933 = C17923 * kcd;
    const double C12593 = (2. * C17933 * bs[1]) / C17924;
    const double C13159 = (2. * C17933 * bs[2]) / C17924;
    const double C13524 = (2. * C17933 * bs[3]) / C17924;
    const double C13706 = (2. * C17933 * bs[4]) / C17924;
    const double C13797 = (2. * C17933 * bs[5]) / C17924;
    const double C17399 = (2. * C17933 * bs[0]) / C17924;
    const double C17901 = C12593 * q;
    const double C17908 = C13159 * q;
    const double C12386 = -((C12593 * C17349) / p + (C13159 * C17917) / C17401);
    const double C12537 = -((C12593 * C17351) / p + (C13159 * C17918) / C17401);
    const double C12566 = -((C12593 * C17355) / p + (C13159 * C17919) / C17401);
    const double C17914 = C13524 * q;
    const double C13143 = -((C13159 * C17349) / p + (C13524 * C17917) / C17401);
    const double C14634 = -((C13159 * C17351) / p + (C13524 * C17918) / C17401);
    const double C14689 = -((C13159 * C17355) / p + (C13524 * C17919) / C17401);
    const double C17915 = C13706 * q;
    const double C13572 = -((C13524 * C17349) / p + (C13706 * C17917) / C17401);
    const double C15048 = -((C13524 * C17351) / p + (C13706 * C17918) / C17401);
    const double C16499 = -((C13524 * C17355) / p + (C13706 * C17919) / C17401);
    const double C13721 = -((C13706 * C17349) / p + (C13797 * C17917) / C17401);
    const double C15205 = -((C13706 * C17351) / p + (C13797 * C17918) / C17401);
    const double C16656 = -((C13706 * C17355) / p + (C13797 * C17919) / C17401);
    const double C4925 = -((C17399 * C17349) / p + (C12593 * C17917) / C17401);
    const double C6171 = -((C17399 * C17351) / p + (C12593 * C17918) / C17401);
    const double C6259 = -((C17399 * C17355) / p + (C12593 * C17919) / C17401);
    const double C17916 = C17901 / C17401;
    const double C17922 = C17908 / C17401;
    const double C17927 = C17914 / C17401;
    const double C12551 = -((C12566 * C17351) / p + (C14689 * C17918) / C17401);
    const double C17928 = C17915 / C17401;
    const double C17387 = C4925 / C17348;
    const double C17386 = C6171 / C17348;
    const double C5147 = -((C6171 * C17349) / p + (C12537 * C17917) / C17401);
    const double C17388 = C6259 / C17348;
    const double C5266 = -((C6259 * C17349) / p + (C12566 * C17917) / C17401);
    const double C6200 = -((C6259 * C17351) / p + (C12566 * C17918) / C17401);
    const double C17929 = C17399 - C17916;
    const double C17932 = C12593 - C17922;
    const double C17936 = C13159 - C17927;
    const double C17937 = C13524 - C17928;
    const double C17359 = C5147 / q;
    const double C17362 = C5266 / q;
    const double C17369 = C6200 / q;
    const double C6215 = -((C6200 * C17349) / p + (C12551 * C17917) / C17401);
    const double C17938 = C17929 / C17902;
    const double C17940 = C17932 / C17902;
    const double C17942 = C17936 / C17902;
    const double C17943 = C17937 / C17902;
    const double C17376 = C6215 * p;
    const double C4878 =
        C17938 - ((C4925 * C17349) / p + (C12386 * C17917) / C17401);
    const double C5397 =
        C17938 - ((C6171 * C17351) / p + (C12537 * C17918) / C17401);
    const double C5807 =
        C17938 - ((C6259 * C17355) / p + (C12566 * C17919) / C17401);
    const double C12367 =
        C17940 - ((C12386 * C17349) / p + (C13143 * C17917) / C17401);
    const double C12427 =
        C17940 - ((C12537 * C17351) / p + (C14634 * C17918) / C17401);
    const double C12482 =
        C17940 - ((C12566 * C17355) / p + (C14689 * C17919) / C17401);
    const double C13247 =
        C17942 - ((C13143 * C17349) / p + (C13572 * C17917) / C17401);
    const double C13290 =
        C17942 - ((C14634 * C17351) / p + (C15048 * C17918) / C17401);
    const double C13318 =
        C17942 - ((C14689 * C17355) / p + (C16499 * C17919) / C17401);
    const double C13587 =
        C17943 - ((C13572 * C17349) / p + (C13721 * C17917) / C17401);
    const double C13644 =
        C17943 - ((C16499 * C17355) / p + (C16656 * C17919) / C17401);
    const double C13659 =
        C17943 - ((C15048 * C17351) / p + (C15205 * C17918) / C17401);
    const double C4579 = -(C5147 * C17379 + C17376) / q;
    const double C4745 = -(C5266 * C17378 + C17376) / q;
    const double C4790 = -(C6200 * C17377 + C17376) / q;
    const double C17380 = C4878 / C17348;
    const double C17383 = C5397 / C17348;
    const double C17385 = C5807 / C17348;
    const double C4894 = (C4925 - (C12386 * q) / C17401) / p -
                         ((C4878 * C17349) / p + (C12367 * C17917) / C17401);
    const double C5163 = -((C4878 * C17351) / p + (C12367 * C17918) / C17401);
    const double C5282 = -((C4878 * C17355) / p + (C12367 * C17919) / C17401);
    const double C17906 = C12427 * q;
    const double C5412 = -((C5397 * C17349) / p + (C12427 * C17917) / C17401);
    const double C5617 = (C6171 - (C12537 * q) / C17401) / p -
                         ((C5397 * C17351) / p + (C12427 * C17918) / C17401);
    const double C5692 = -((C5397 * C17355) / p + (C12427 * C17919) / C17401);
    const double C17907 = C12482 * q;
    const double C5822 = -((C5807 * C17349) / p + (C12482 * C17917) / C17401);
    const double C6025 = -((C5807 * C17351) / p + (C12482 * C17918) / C17401);
    const double C6084 = (C6259 - (C12566 * q) / C17401) / p -
                         ((C5807 * C17355) / p + (C12482 * C17919) / C17401);
    const double C12607 = (C12386 - (C13143 * q) / C17401) / p -
                          ((C12367 * C17349) / p + (C13247 * C17917) / C17401);
    const double C14232 = -((C12367 * C17355) / p + (C13247 * C17919) / C17401);
    const double C17912 = C13290 * q;
    const double C12671 = -((C12427 * C17349) / p + (C13290 * C17917) / C17401);
    const double C12867 = (C12537 - (C14634 * q) / C17401) / p -
                          ((C12427 * C17351) / p + (C13290 * C17918) / C17401);
    const double C12909 = -((C12427 * C17355) / p + (C13290 * C17919) / C17401);
    const double C17913 = C13318 * q;
    const double C12713 = -((C12482 * C17349) / p + (C13318 * C17917) / C17401);
    const double C13034 = -((C12482 * C17351) / p + (C13318 * C17918) / C17401);
    const double C13048 = (C12566 - (C14689 * q) / C17401) / p -
                          ((C12482 * C17355) / p + (C13318 * C17919) / C17401);
    const double C13262 = (C13143 - (C13572 * q) / C17401) / p -
                          ((C13247 * C17349) / p + (C13587 * C17917) / C17401);
    const double C13374 = -((C13318 * C17349) / p + (C13644 * C17917) / C17401);
    const double C13404 = (C14689 - (C16499 * q) / C17401) / p -
                          ((C13318 * C17355) / p + (C13644 * C17919) / C17401);
    const double C14906 = -((C13318 * C17351) / p + (C13644 * C17918) / C17401);
    const double C13346 = (C14634 - (C15048 * q) / C17401) / p -
                          ((C13290 * C17351) / p + (C13659 * C17918) / C17401);
    const double C13389 = -((C13290 * C17349) / p + (C13659 * C17917) / C17401);
    const double C3393 = C4925 / q - (C4878 * C17377) / q - (C4894 * p) / q;
    const double C17354 = C5163 * p;
    const double C17358 = C5282 * p;
    const double C17920 = C17906 / C17401;
    const double C17364 = C5412 * p;
    const double C3876 = C6171 / q - (C5397 * C17378) / q - (C5617 * p) / q;
    const double C17367 = C5692 * p;
    const double C17921 = C17907 / C17401;
    const double C17371 = C5822 * p;
    const double C17373 = C6025 * p;
    const double C4287 = C6259 / q - (C5807 * C17379) / q - (C6084 * p) / q;
    const double C4910 = (3 * (C4878 - (C12367 * q) / C17401)) / C17902 -
                         ((C4894 * C17349) / p + (C12607 * C17917) / C17401);
    const double C5178 = -((C4894 * C17351) / p + (C12607 * C17918) / C17401);
    const double C5297 = -((C4894 * C17355) / p + (C12607 * C17919) / C17401);
    const double C6230 = -((C5282 * C17351) / p + (C14232 * C17918) / C17401);
    const double C17925 = C17912 / C17401;
    const double C5632 = -((C5617 * C17349) / p + (C12867 * C17917) / C17401);
    const double C8600 = -((C5617 * C17355) / p + (C12867 * C17919) / C17401);
    const double C5707 = -((C5692 * C17349) / p + (C12909 * C17917) / C17401);
    const double C17926 = C17913 / C17401;
    const double C6040 = -((C6025 * C17349) / p + (C13034 * C17917) / C17401);
    const double C6099 = -((C6084 * C17349) / p + (C13048 * C17917) / C17401);
    const double C8973 = -((C6084 * C17351) / p + (C13048 * C17918) / C17401);
    const double C12622 = (3 * (C12367 - (C13247 * q) / C17401)) / C17902 -
                          ((C12607 * C17349) / p + (C13262 * C17917) / C17401);
    const double C14122 = -((C12607 * C17351) / p + (C13262 * C17918) / C17401);
    const double C14218 = -((C12607 * C17355) / p + (C13262 * C17919) / C17401);
    const double C12851 = -((C13048 * C17349) / p + (C13404 * C17917) / C17401);
    const double C13090 = -((C13048 * C17351) / p + (C13404 * C17918) / C17401);
    const double C12794 = -((C12867 * C17349) / p + (C13346 * C17917) / C17401);
    const double C12953 = -((C12867 * C17355) / p + (C13346 * C17919) / C17401);
    const double C3490 = -(C4878 * C17378 + C17354) / q;
    const double C4518 = C17386 - (C5147 * C17377) / q - C17354 / q;
    const double C3522 = -(C4878 * C17379 + C17358) / q;
    const double C4700 = C17388 - (C5266 * C17377) / q - C17358 / q;
    const double C17930 = C5397 - C17920;
    const double C3780 = -(C5397 * C17377 + C17364) / q;
    const double C4564 = C17387 - (C5147 * C17378) / q - C17364 / q;
    const double C3906 = -(C5397 * C17379 + C17367) / q;
    const double C4834 = C17388 - (C6200 * C17378) / q - C17367 / q;
    const double C17931 = C5807 - C17921;
    const double C4160 = -(C5807 * C17377 + C17371) / q;
    const double C4761 = C17387 - (C5266 * C17379) / q - C17371 / q;
    const double C4257 = -(C5807 * C17378 + C17373) / q;
    const double C4849 = C17386 - (C6200 * C17379) / q - C17373 / q;
    const double C3373 =
        (3 * C4878) / C17348 - (C4894 * C17377) / q - (C4910 * p) / q;
    const double C17353 = C5178 * p;
    const double C17357 = C5297 * p;
    const double C17361 = C6230 * p;
    const double C17934 = C12427 - C17925;
    const double C17365 = C5632 * p;
    const double C17368 = C8600 * p;
    const double C17366 = C5707 * p;
    const double C17935 = C12482 - C17926;
    const double C17372 = C6040 * p;
    const double C17374 = C6099 * p;
    const double C17375 = C8973 * p;
    const double C5427 =
        C17930 / C17902 - ((C5412 * C17349) / p + (C12671 * C17917) / C17401);
    const double C8498 = (3 * C17930) / C17902 -
                         ((C5617 * C17351) / p + (C12867 * C17918) / C17401);
    const double C17939 = C17931 / C17902;
    const double C11825 = (3 * C17931) / C17902 -
                          ((C6084 * C17355) / p + (C13048 * C17919) / C17401);
    const double C3474 = -(C4894 * C17378 + C17353) / q;
    const double C3568 = C17359 - (C5163 * C17377) / q - C17353 / q;
    const double C3506 = -(C4894 * C17379 + C17357) / q;
    const double C3664 = C17362 - (C5282 * C17377) / q - C17357 / q;
    const double C3633 = -(C5163 * C17379 + C17361) / q;
    const double C3714 = -(C5282 * C17378 + C17361) / q;
    const double C4608 = C6200 / C17348 - (C6215 * C17377) / q - C17361 / q;
    const double C12881 = (3 * C17934) / C17902 -
                          ((C12867 * C17351) / p + (C13346 * C17918) / C17401);
    const double C15729 =
        C17934 / C17902 - ((C12671 * C17349) / p + (C13389 * C17917) / C17401);
    const double C3861 = C17359 - (C5412 * C17378) / q - C17365 / q;
    const double C3952 = -(C5617 * C17377 + C17365) / q;
    const double C4015 = -(C5617 * C17379 + C17368) / q;
    const double C4095 = C17369 - (C5692 * C17378) / q - C17368 / q;
    const double C3891 = -(C5412 * C17379 + C17366) / q;
    const double C4045 = -(C5692 * C17377 + C17366) / q;
    const double C4656 = C5266 / C17348 - (C6215 * C17378) / q - C17366 / q;
    const double C17941 = C17935 / C17902;
    const double C13062 = (3 * C17935) / C17902 -
                          ((C13048 * C17355) / p + (C13404 * C17919) / C17401);
    const double C4241 = -(C5822 * C17378 + C17372) / q;
    const double C4332 = -(C6025 * C17377 + C17372) / q;
    const double C4671 = C5147 / C17348 - (C6215 * C17379) / q - C17372 / q;
    const double C4272 = C17362 - (C5822 * C17379) / q - C17374 / q;
    const double C4424 = -(C6084 * C17377 + C17374) / q;
    const double C4395 = C17369 - (C6025 * C17379) / q - C17375 / q;
    const double C4473 = -(C6084 * C17378 + C17375) / q;
    const double C17360 = C5427 * p;
    const double C4000 =
        (3 * C5397) / C17348 - (C5617 * C17378) / q - (C8498 * p) / q;
    const double C5837 =
        C17939 - ((C5822 * C17349) / p + (C12713 * C17917) / C17401);
    const double C8901 =
        C17939 - ((C6025 * C17351) / p + (C13034 * C17918) / C17401);
    const double C4489 =
        (3 * C5807) / C17348 - (C6084 * C17379) / q - (C11825 * p) / q;
    const double C12924 =
        C17941 - ((C13034 * C17351) / p + (C14906 * C17918) / C17401);
    const double C14275 =
        C17941 - ((C12713 * C17349) / p + (C13374 * C17917) / C17401);
    const double C17381 = C17360 / q;
    const double C17363 = C5837 * p;
    const double C17370 = C8901 * p;
    const double C3617 = C17380 - (C5163 * C17378) / q - C17381;
    const double C3761 = C17383 - (C5412 * C17377) / q - C17381;
    const double C17382 = C17363 / q;
    const double C17384 = C17370 / q;
    const double C3731 = C17380 - (C5282 * C17379) / q - C17382;
    const double C4141 = C17385 - (C5822 * C17377) / q - C17382;
    const double C4111 = C17383 - (C5692 * C17379) / q - C17384;
    const double C4380 = C17385 - (C6025 * C17378) / q - C17384;
    g[0] = C3373;
    g[1] = C3393;
    g[2] = C3474;
    g[3] = C3490;
    g[4] = C3506;
    g[5] = C3522;
    g[6] = C3568;
    g[7] = C3617;
    g[8] = C3633;
    g[9] = C3664;
    g[10] = C3714;
    g[11] = C3731;
    g[12] = C3761;
    g[13] = C3780;
    g[14] = C3861;
    g[15] = C3876;
    g[16] = C3891;
    g[17] = C3906;
    g[18] = C3952;
    g[19] = C4000;
    g[20] = C4015;
    g[21] = C4045;
    g[22] = C4095;
    g[23] = C4111;
    g[24] = C4141;
    g[25] = C4160;
    g[26] = C4241;
    g[27] = C4257;
    g[28] = C4272;
    g[29] = C4287;
    g[30] = C4332;
    g[31] = C4380;
    g[32] = C4395;
    g[33] = C4424;
    g[34] = C4473;
    g[35] = C4489;
    g[36] = C4518;
    g[37] = C4564;
    g[38] = C4579;
    g[39] = C4608;
    g[40] = C4656;
    g[41] = C4671;
    g[42] = C4700;
    g[43] = C4745;
    g[44] = C4761;
    g[45] = C4790;
    g[46] = C4834;
    g[47] = C4849;
    g[48] = C4878;
    g[49] = C4894;
    g[50] = C4910;
    g[51] = C4925;
    g[52] = C5147;
    g[53] = C5163;
    g[54] = C5178;
    g[55] = C5266;
    g[56] = C5282;
    g[57] = C5297;
    g[58] = C5397;
    g[59] = C5412;
    g[60] = C5427;
    g[61] = C5617;
    g[62] = C5632;
    g[63] = C5692;
    g[64] = C5707;
    g[65] = C5807;
    g[66] = C5822;
    g[67] = C5837;
    g[68] = C6025;
    g[69] = C6040;
    g[70] = C6084;
    g[71] = C6099;
    g[72] = C6171;
    g[73] = C6200;
    g[74] = C6215;
    g[75] = C6230;
    g[76] = C6259;
    g[77] = C8498;
    g[78] = C8600;
    g[79] = C8901;
    g[80] = C8973;
    g[81] = C11825;
    g[82] = C12367;
    g[83] = C12386;
    g[84] = C12427;
    g[85] = C12482;
    g[86] = C12537;
    g[87] = C12551;
    g[88] = C12566;
    g[89] = C12593;
    g[90] = C12607;
    g[91] = C12622;
    g[92] = C12671;
    g[93] = C12713;
    g[94] = C12794;
    g[95] = C12851;
    g[96] = C12867;
    g[97] = C12881;
    g[98] = C12909;
    g[99] = C12924;
    g[100] = C12953;
    g[101] = C13034;
    g[102] = C13048;
    g[103] = C13062;
    g[104] = C13090;
    g[105] = C13143;
    g[106] = C13159;
    g[107] = C13247;
    g[108] = C13262;
    g[109] = C13290;
    g[110] = C13318;
    g[111] = C13346;
    g[112] = C13374;
    g[113] = C13389;
    g[114] = C13404;
    g[115] = C13524;
    g[116] = C13572;
    g[117] = C13587;
    g[118] = C13644;
    g[119] = C13659;
    g[120] = C13706;
    g[121] = C13721;
    g[122] = C13797;
    g[123] = C14122;
    g[124] = C14218;
    g[125] = C14232;
    g[126] = C14275;
    g[127] = C14634;
    g[128] = C14689;
    g[129] = C14906;
    g[130] = C15048;
    g[131] = C15205;
    g[132] = C15729;
    g[133] = C16499;
    g[134] = C16656;
}
