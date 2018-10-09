/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_4_ints(const double ae,
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
    const double C17398 = de * zCD;
    const double C17397 = be * zAB;
    const double C17394 = de * yCD;
    const double C17393 = be * yAB;
    const double C17392 = de * xCD;
    const double C17391 = be * xAB;
    const double C17390 = 2 * q;
    const double C17442 = p + q;
    const double C17952 = p * q;
    const double C17951 = std::pow(Pi, 2.5);
    const double C17947 = zP - zQ;
    const double C17946 = yP - yQ;
    const double C17945 = 2 * p;
    const double C17943 = xP - xQ;
    const double C17421 = C17397 + C17398;
    const double C17420 = C17393 + C17394;
    const double C17419 = C17391 + C17392;
    const double C17953 = std::sqrt(C17442);
    const double C17965 = C17951 * kab;
    const double C17961 = C17947 * q;
    const double C17960 = C17946 * q;
    const double C17958 = C17943 * q;
    const double C17966 = C17952 * C17953;
    const double C17975 = C17965 * kcd;
    const double C12650 = (2. * C17975 * bs[1]) / C17966;
    const double C13201 = (2. * C17975 * bs[2]) / C17966;
    const double C13566 = (2. * C17975 * bs[3]) / C17966;
    const double C13748 = (2. * C17975 * bs[4]) / C17966;
    const double C13839 = (2. * C17975 * bs[5]) / C17966;
    const double C17448 = (2. * C17975 * bs[0]) / C17966;
    const double C17944 = C12650 * q;
    const double C17950 = C13201 * q;
    const double C12428 = -((C12650 * C17391) / p + (C13201 * C17958) / C17442);
    const double C12579 = -((C12650 * C17393) / p + (C13201 * C17960) / C17442);
    const double C12608 = -((C12650 * C17397) / p + (C13201 * C17961) / C17442);
    const double C17956 = C13566 * q;
    const double C13185 = -((C13201 * C17391) / p + (C13566 * C17958) / C17442);
    const double C14676 = -((C13201 * C17393) / p + (C13566 * C17960) / C17442);
    const double C14731 = -((C13201 * C17397) / p + (C13566 * C17961) / C17442);
    const double C17957 = C13748 * q;
    const double C13614 = -((C13566 * C17391) / p + (C13748 * C17958) / C17442);
    const double C15090 = -((C13566 * C17393) / p + (C13748 * C17960) / C17442);
    const double C16541 = -((C13566 * C17397) / p + (C13748 * C17961) / C17442);
    const double C13763 = -((C13748 * C17391) / p + (C13839 * C17958) / C17442);
    const double C15247 = -((C13748 * C17393) / p + (C13839 * C17960) / C17442);
    const double C16698 = -((C13748 * C17397) / p + (C13839 * C17961) / C17442);
    const double C4925 = -((C17448 * C17391) / p + (C12650 * C17958) / C17442);
    const double C6171 = -((C17448 * C17393) / p + (C12650 * C17960) / C17442);
    const double C6259 = -((C17448 * C17397) / p + (C12650 * C17961) / C17442);
    const double C17959 = C17944 / C17442;
    const double C17964 = C17950 / C17442;
    const double C17969 = C17956 / C17442;
    const double C12593 = -((C12608 * C17393) / p + (C14731 * C17960) / C17442);
    const double C17970 = C17957 / C17442;
    const double C17429 = C4925 / C17390;
    const double C17428 = C6171 / C17390;
    const double C5162 = -((C6171 * C17391) / p + (C12579 * C17958) / C17442);
    const double C17430 = C6259 / C17390;
    const double C5281 = -((C6259 * C17391) / p + (C12608 * C17958) / C17442);
    const double C6215 = -((C6259 * C17393) / p + (C12608 * C17960) / C17442);
    const double C17971 = C17448 - C17959;
    const double C17974 = C12650 - C17964;
    const double C17978 = C13201 - C17969;
    const double C17979 = C13566 - C17970;
    const double C17401 = C5162 / q;
    const double C17404 = C5281 / q;
    const double C17411 = C6215 / q;
    const double C6200 = -((C6215 * C17391) / p + (C12593 * C17958) / C17442);
    const double C17980 = C17971 / C17945;
    const double C17982 = C17974 / C17945;
    const double C17984 = C17978 / C17945;
    const double C17985 = C17979 / C17945;
    const double C17418 = C6200 * p;
    const double C4894 =
        C17980 - ((C4925 * C17391) / p + (C12428 * C17958) / C17442);
    const double C5412 =
        C17980 - ((C6171 * C17393) / p + (C12579 * C17960) / C17442);
    const double C5822 =
        C17980 - ((C6259 * C17397) / p + (C12608 * C17961) / C17442);
    const double C12409 =
        C17982 - ((C12428 * C17391) / p + (C13185 * C17958) / C17442);
    const double C12469 =
        C17982 - ((C12579 * C17393) / p + (C14676 * C17960) / C17442);
    const double C12524 =
        C17982 - ((C12608 * C17397) / p + (C14731 * C17961) / C17442);
    const double C13289 =
        C17984 - ((C13185 * C17391) / p + (C13614 * C17958) / C17442);
    const double C13332 =
        C17984 - ((C14676 * C17393) / p + (C15090 * C17960) / C17442);
    const double C13360 =
        C17984 - ((C14731 * C17397) / p + (C16541 * C17961) / C17442);
    const double C13629 =
        C17985 - ((C13614 * C17391) / p + (C13763 * C17958) / C17442);
    const double C13686 =
        C17985 - ((C16541 * C17397) / p + (C16698 * C17961) / C17442);
    const double C13701 =
        C17985 - ((C15090 * C17393) / p + (C15247 * C17960) / C17442);
    const double C4579 = -(C5162 * C17421 + C17418) / q;
    const double C4745 = -(C5281 * C17420 + C17418) / q;
    const double C4790 = -(C6215 * C17419 + C17418) / q;
    const double C17422 = C4894 / C17390;
    const double C17425 = C5412 / C17390;
    const double C17427 = C5822 / C17390;
    const double C4878 = (C4925 - (C12428 * q) / C17442) / p -
                         ((C4894 * C17391) / p + (C12409 * C17958) / C17442);
    const double C5147 = -((C4894 * C17393) / p + (C12409 * C17960) / C17442);
    const double C5266 = -((C4894 * C17397) / p + (C12409 * C17961) / C17442);
    const double C17948 = C12469 * q;
    const double C5397 = -((C5412 * C17391) / p + (C12469 * C17958) / C17442);
    const double C5617 = (C6171 - (C12579 * q) / C17442) / p -
                         ((C5412 * C17393) / p + (C12469 * C17960) / C17442);
    const double C5692 = -((C5412 * C17397) / p + (C12469 * C17961) / C17442);
    const double C17949 = C12524 * q;
    const double C5807 = -((C5822 * C17391) / p + (C12524 * C17958) / C17442);
    const double C6025 = -((C5822 * C17393) / p + (C12524 * C17960) / C17442);
    const double C6084 = (C6259 - (C12608 * q) / C17442) / p -
                         ((C5822 * C17397) / p + (C12524 * C17961) / C17442);
    const double C12635 = (C12428 - (C13185 * q) / C17442) / p -
                          ((C12409 * C17391) / p + (C13289 * C17958) / C17442);
    const double C14274 = -((C12409 * C17397) / p + (C13289 * C17961) / C17442);
    const double C17954 = C13332 * q;
    const double C12713 = -((C12469 * C17391) / p + (C13332 * C17958) / C17442);
    const double C12909 = (C12579 - (C14676 * q) / C17442) / p -
                          ((C12469 * C17393) / p + (C13332 * C17960) / C17442);
    const double C12951 = -((C12469 * C17397) / p + (C13332 * C17961) / C17442);
    const double C17955 = C13360 * q;
    const double C12755 = -((C12524 * C17391) / p + (C13360 * C17958) / C17442);
    const double C13076 = -((C12524 * C17393) / p + (C13360 * C17960) / C17442);
    const double C13090 = (C12608 - (C14731 * q) / C17442) / p -
                          ((C12524 * C17397) / p + (C13360 * C17961) / C17442);
    const double C13304 = (C13185 - (C13614 * q) / C17442) / p -
                          ((C13289 * C17391) / p + (C13629 * C17958) / C17442);
    const double C13416 = -((C13360 * C17391) / p + (C13686 * C17958) / C17442);
    const double C13446 = (C14731 - (C16541 * q) / C17442) / p -
                          ((C13360 * C17397) / p + (C13686 * C17961) / C17442);
    const double C14948 = -((C13360 * C17393) / p + (C13686 * C17960) / C17442);
    const double C13388 = (C14676 - (C15090 * q) / C17442) / p -
                          ((C13332 * C17393) / p + (C13701 * C17960) / C17442);
    const double C13431 = -((C13332 * C17391) / p + (C13701 * C17958) / C17442);
    const double C3393 = C4925 / q - (C4894 * C17419) / q - (C4878 * p) / q;
    const double C17396 = C5147 * p;
    const double C17400 = C5266 * p;
    const double C17962 = C17948 / C17442;
    const double C17406 = C5397 * p;
    const double C3876 = C6171 / q - (C5412 * C17420) / q - (C5617 * p) / q;
    const double C17409 = C5692 * p;
    const double C17963 = C17949 / C17442;
    const double C17413 = C5807 * p;
    const double C17415 = C6025 * p;
    const double C4287 = C6259 / q - (C5822 * C17421) / q - (C6084 * p) / q;
    const double C4910 = (3 * (C4894 - (C12409 * q) / C17442)) / C17945 -
                         ((C4878 * C17391) / p + (C12635 * C17958) / C17442);
    const double C5178 = -((C4878 * C17393) / p + (C12635 * C17960) / C17442);
    const double C5297 = -((C4878 * C17397) / p + (C12635 * C17961) / C17442);
    const double C6230 = -((C5266 * C17393) / p + (C14274 * C17960) / C17442);
    const double C17967 = C17954 / C17442;
    const double C5632 = -((C5617 * C17391) / p + (C12909 * C17958) / C17442);
    const double C8600 = -((C5617 * C17397) / p + (C12909 * C17961) / C17442);
    const double C5707 = -((C5692 * C17391) / p + (C12951 * C17958) / C17442);
    const double C17968 = C17955 / C17442;
    const double C6040 = -((C6025 * C17391) / p + (C13076 * C17958) / C17442);
    const double C6099 = -((C6084 * C17391) / p + (C13090 * C17958) / C17442);
    const double C8973 = -((C6084 * C17393) / p + (C13090 * C17960) / C17442);
    const double C12664 = (3 * (C12409 - (C13289 * q) / C17442)) / C17945 -
                          ((C12635 * C17391) / p + (C13304 * C17958) / C17442);
    const double C14164 = -((C12635 * C17393) / p + (C13304 * C17960) / C17442);
    const double C14260 = -((C12635 * C17397) / p + (C13304 * C17961) / C17442);
    const double C12893 = -((C13090 * C17391) / p + (C13446 * C17958) / C17442);
    const double C13132 = -((C13090 * C17393) / p + (C13446 * C17960) / C17442);
    const double C12836 = -((C12909 * C17391) / p + (C13388 * C17958) / C17442);
    const double C12995 = -((C12909 * C17397) / p + (C13388 * C17961) / C17442);
    const double C3490 = -(C4894 * C17420 + C17396) / q;
    const double C4518 = C17428 - (C5162 * C17419) / q - C17396 / q;
    const double C3522 = -(C4894 * C17421 + C17400) / q;
    const double C4700 = C17430 - (C5281 * C17419) / q - C17400 / q;
    const double C17972 = C5412 - C17962;
    const double C3780 = -(C5412 * C17419 + C17406) / q;
    const double C4564 = C17429 - (C5162 * C17420) / q - C17406 / q;
    const double C3906 = -(C5412 * C17421 + C17409) / q;
    const double C4834 = C17430 - (C6215 * C17420) / q - C17409 / q;
    const double C17973 = C5822 - C17963;
    const double C4160 = -(C5822 * C17419 + C17413) / q;
    const double C4761 = C17429 - (C5281 * C17421) / q - C17413 / q;
    const double C4257 = -(C5822 * C17420 + C17415) / q;
    const double C4849 = C17428 - (C6215 * C17421) / q - C17415 / q;
    const double C3373 =
        (3 * C4894) / C17390 - (C4878 * C17419) / q - (C4910 * p) / q;
    const double C17395 = C5178 * p;
    const double C17399 = C5297 * p;
    const double C17403 = C6230 * p;
    const double C17976 = C12469 - C17967;
    const double C17407 = C5632 * p;
    const double C17410 = C8600 * p;
    const double C17408 = C5707 * p;
    const double C17977 = C12524 - C17968;
    const double C17414 = C6040 * p;
    const double C17416 = C6099 * p;
    const double C17417 = C8973 * p;
    const double C5427 =
        C17972 / C17945 - ((C5397 * C17391) / p + (C12713 * C17958) / C17442);
    const double C8498 = (3 * C17972) / C17945 -
                         ((C5617 * C17393) / p + (C12909 * C17960) / C17442);
    const double C17981 = C17973 / C17945;
    const double C11825 = (3 * C17973) / C17945 -
                          ((C6084 * C17397) / p + (C13090 * C17961) / C17442);
    const double C3474 = -(C4878 * C17420 + C17395) / q;
    const double C3568 = C17401 - (C5147 * C17419) / q - C17395 / q;
    const double C3506 = -(C4878 * C17421 + C17399) / q;
    const double C3664 = C17404 - (C5266 * C17419) / q - C17399 / q;
    const double C3633 = -(C5147 * C17421 + C17403) / q;
    const double C3714 = -(C5266 * C17420 + C17403) / q;
    const double C4608 = C6215 / C17390 - (C6200 * C17419) / q - C17403 / q;
    const double C12923 = (3 * C17976) / C17945 -
                          ((C12909 * C17393) / p + (C13388 * C17960) / C17442);
    const double C15771 =
        C17976 / C17945 - ((C12713 * C17391) / p + (C13431 * C17958) / C17442);
    const double C3861 = C17401 - (C5397 * C17420) / q - C17407 / q;
    const double C3952 = -(C5617 * C17419 + C17407) / q;
    const double C4015 = -(C5617 * C17421 + C17410) / q;
    const double C4095 = C17411 - (C5692 * C17420) / q - C17410 / q;
    const double C3891 = -(C5397 * C17421 + C17408) / q;
    const double C4045 = -(C5692 * C17419 + C17408) / q;
    const double C4656 = C5281 / C17390 - (C6200 * C17420) / q - C17408 / q;
    const double C17983 = C17977 / C17945;
    const double C13104 = (3 * C17977) / C17945 -
                          ((C13090 * C17397) / p + (C13446 * C17961) / C17442);
    const double C4241 = -(C5807 * C17420 + C17414) / q;
    const double C4332 = -(C6025 * C17419 + C17414) / q;
    const double C4671 = C5162 / C17390 - (C6200 * C17421) / q - C17414 / q;
    const double C4272 = C17404 - (C5807 * C17421) / q - C17416 / q;
    const double C4424 = -(C6084 * C17419 + C17416) / q;
    const double C4395 = C17411 - (C6025 * C17421) / q - C17417 / q;
    const double C4473 = -(C6084 * C17420 + C17417) / q;
    const double C17402 = C5427 * p;
    const double C4000 =
        (3 * C5412) / C17390 - (C5617 * C17420) / q - (C8498 * p) / q;
    const double C5837 =
        C17981 - ((C5807 * C17391) / p + (C12755 * C17958) / C17442);
    const double C8901 =
        C17981 - ((C6025 * C17393) / p + (C13076 * C17960) / C17442);
    const double C4489 =
        (3 * C5822) / C17390 - (C6084 * C17421) / q - (C11825 * p) / q;
    const double C12966 =
        C17983 - ((C13076 * C17393) / p + (C14948 * C17960) / C17442);
    const double C14317 =
        C17983 - ((C12755 * C17391) / p + (C13416 * C17958) / C17442);
    const double C17423 = C17402 / q;
    const double C17405 = C5837 * p;
    const double C17412 = C8901 * p;
    const double C3617 = C17422 - (C5147 * C17420) / q - C17423;
    const double C3761 = C17425 - (C5397 * C17419) / q - C17423;
    const double C17424 = C17405 / q;
    const double C17426 = C17412 / q;
    const double C3731 = C17422 - (C5266 * C17421) / q - C17424;
    const double C4141 = C17427 - (C5807 * C17419) / q - C17424;
    const double C4111 = C17425 - (C5692 * C17421) / q - C17426;
    const double C4380 = C17427 - (C6025 * C17420) / q - C17426;
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
    g[53] = C5162;
    g[54] = C5178;
    g[55] = C5266;
    g[56] = C5281;
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
    g[82] = C12409;
    g[83] = C12428;
    g[84] = C12469;
    g[85] = C12524;
    g[86] = C12579;
    g[87] = C12593;
    g[88] = C12608;
    g[89] = C12635;
    g[90] = C12650;
    g[91] = C12664;
    g[92] = C12713;
    g[93] = C12755;
    g[94] = C12836;
    g[95] = C12893;
    g[96] = C12909;
    g[97] = C12923;
    g[98] = C12951;
    g[99] = C12966;
    g[100] = C12995;
    g[101] = C13076;
    g[102] = C13090;
    g[103] = C13104;
    g[104] = C13132;
    g[105] = C13185;
    g[106] = C13201;
    g[107] = C13289;
    g[108] = C13304;
    g[109] = C13332;
    g[110] = C13360;
    g[111] = C13388;
    g[112] = C13416;
    g[113] = C13431;
    g[114] = C13446;
    g[115] = C13566;
    g[116] = C13614;
    g[117] = C13629;
    g[118] = C13686;
    g[119] = C13701;
    g[120] = C13748;
    g[121] = C13763;
    g[122] = C13839;
    g[123] = C14164;
    g[124] = C14260;
    g[125] = C14274;
    g[126] = C14317;
    g[127] = C14676;
    g[128] = C14731;
    g[129] = C14948;
    g[130] = C15090;
    g[131] = C15247;
    g[132] = C15771;
    g[133] = C16541;
    g[134] = C16698;
}
