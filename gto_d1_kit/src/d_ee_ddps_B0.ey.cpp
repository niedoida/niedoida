/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_2_ints(const double ae,
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
    const double C17893 = 2 * q;
    const double C18493 = de * zCD;
    const double C18492 = be * zAB;
    const double C18490 = de * yCD;
    const double C18489 = be * yAB;
    const double C18487 = de * xCD;
    const double C18486 = be * xAB;
    const double C18561 = p + q;
    const double C19070 = p * q;
    const double C19069 = std::pow(Pi, 2.5);
    const double C19065 = zP - zQ;
    const double C19064 = yP - yQ;
    const double C19063 = 2 * p;
    const double C19061 = xP - xQ;
    const double C18544 = C18492 + C18493;
    const double C18542 = C18489 + C18490;
    const double C18541 = C18486 + C18487;
    const double C19071 = std::sqrt(C18561);
    const double C19083 = C19069 * kab;
    const double C19079 = C19065 * q;
    const double C19078 = C19064 * q;
    const double C19076 = C19061 * q;
    const double C19084 = C19070 * C19071;
    const double C19093 = C19083 * kcd;
    const double C13028 = (2. * C19093 * bs[0]) / C19084;
    const double C13029 = (2. * C19093 * bs[1]) / C19084;
    const double C13619 = (2. * C19093 * bs[2]) / C19084;
    const double C14010 = (2. * C19093 * bs[3]) / C19084;
    const double C14204 = (2. * C19093 * bs[4]) / C19084;
    const double C14301 = (2. * C19093 * bs[5]) / C19084;
    const double C18537 = C13028 / C17893;
    const double C19062 = C13029 * q;
    const double C5285 = -((C13028 * C18486) / p + (C13029 * C19076) / C18561);
    const double C6531 = -((C13028 * C18489) / p + (C13029 * C19078) / C18561);
    const double C6619 = -((C13028 * C18492) / p + (C13029 * C19079) / C18561);
    const double C19068 = C13619 * q;
    const double C12790 = -((C13029 * C18486) / p + (C13619 * C19076) / C18561);
    const double C12952 = -((C13029 * C18489) / p + (C13619 * C19078) / C18561);
    const double C12983 = -((C13029 * C18492) / p + (C13619 * C19079) / C18561);
    const double C19074 = C14010 * q;
    const double C13602 = -((C13619 * C18486) / p + (C14010 * C19076) / C18561);
    const double C15198 = -((C13619 * C18489) / p + (C14010 * C19078) / C18561);
    const double C15257 = -((C13619 * C18492) / p + (C14010 * C19079) / C18561);
    const double C19075 = C14204 * q;
    const double C14061 = -((C14010 * C18486) / p + (C14204 * C19076) / C18561);
    const double C15642 = -((C14010 * C18489) / p + (C14204 * C19078) / C18561);
    const double C17197 = -((C14010 * C18492) / p + (C14204 * C19079) / C18561);
    const double C14220 = -((C14204 * C18486) / p + (C14301 * C19076) / C18561);
    const double C15810 = -((C14204 * C18489) / p + (C14301 * C19078) / C18561);
    const double C17365 = -((C14204 * C18492) / p + (C14301 * C19079) / C18561);
    const double C19077 = C19062 / C18561;
    const double C18534 = C5285 / C17893;
    const double C18533 = C6531 / C17893;
    const double C18536 = C6619 / C17893;
    const double C19082 = C19068 / C18561;
    const double C5522 = -((C6531 * C18486) / p + (C12952 * C19076) / C18561);
    const double C5641 = -((C6619 * C18486) / p + (C12983 * C19076) / C18561);
    const double C6575 = -((C6619 * C18489) / p + (C12983 * C19078) / C18561);
    const double C19087 = C19074 / C18561;
    const double C12967 = -((C12983 * C18489) / p + (C15257 * C19078) / C18561);
    const double C19088 = C19075 / C18561;
    const double C19089 = C13028 - C19077;
    const double C19092 = C13029 - C19082;
    const double C18538 = C5522 * p;
    const double C18516 = C5522 / q;
    const double C18503 = C5522 / C17893;
    const double C18539 = C5641 * p;
    const double C18519 = C5641 / q;
    const double C18507 = C5641 / C17893;
    const double C18540 = C6575 * p;
    const double C18526 = C6575 / q;
    const double C18511 = C6575 / C17893;
    const double C19096 = C13619 - C19087;
    const double C6560 = -((C6575 * C18486) / p + (C12967 * C19076) / C18561);
    const double C19097 = C14010 - C19088;
    const double C19098 = C19089 / C19063;
    const double C19100 = C19092 / C19063;
    const double C17766 = -(C5285 * C18542 + C18538) / q;
    const double C17891 = -(C6531 * C18541 + C18538) / q;
    const double C17775 = -(C5285 * C18544 + C18539) / q;
    const double C17941 = -(C6619 * C18541 + C18539) / q;
    const double C17833 = -(C6531 * C18544 + C18540) / q;
    const double C17966 = -(C6619 * C18542 + C18540) / q;
    const double C19102 = C19096 / C19063;
    const double C18535 = C6560 * p;
    const double C19103 = C19097 / C19063;
    const double C5254 =
        C19098 - ((C5285 * C18486) / p + (C12790 * C19076) / C18561);
    const double C5772 =
        C19098 - ((C6531 * C18489) / p + (C12952 * C19078) / C18561);
    const double C6182 =
        C19098 - ((C6619 * C18492) / p + (C12983 * C19079) / C18561);
    const double C12770 =
        C19100 - ((C12790 * C18486) / p + (C13602 * C19076) / C18561);
    const double C12834 =
        C19100 - ((C12952 * C18489) / p + (C15198 * C19078) / C18561);
    const double C12893 =
        C19100 - ((C12983 * C18492) / p + (C15257 * C19079) / C18561);
    const double C18506 = C17775 / C17893;
    const double C18505 = C17833 / C17893;
    const double C18509 = C17966 / C17893;
    const double C13713 =
        C19102 - ((C13602 * C18486) / p + (C14061 * C19076) / C18561);
    const double C13759 =
        C19102 - ((C15198 * C18489) / p + (C15642 * C19078) / C18561);
    const double C13789 =
        C19102 - ((C15257 * C18492) / p + (C17197 * C19079) / C18561);
    const double C4939 = -(C5522 * C18544 + C18535) / q;
    const double C5105 = -(C5641 * C18542 + C18535) / q;
    const double C5150 = -(C6575 * C18541 + C18535) / q;
    const double C14077 =
        C19103 - ((C14061 * C18486) / p + (C14220 * C19076) / C18561);
    const double C14138 =
        C19103 - ((C17197 * C18492) / p + (C17365 * C19079) / C18561);
    const double C14154 =
        C19103 - ((C15642 * C18489) / p + (C15810 * C19078) / C18561);
    const double C18488 = C5254 / C17893;
    const double C17741 = C18537 - (C5285 * C18541) / q - (C5254 * p) / q;
    const double C18496 = C5772 / C17893;
    const double C17800 = C18537 - (C6531 * C18542) / q - (C5772 * p) / q;
    const double C18500 = C6182 / C17893;
    const double C17858 = C18537 - (C6619 * C18544) / q - (C6182 * p) / q;
    const double C5238 = (C5285 - (C12790 * q) / C18561) / p -
                         ((C5254 * C18486) / p + (C12770 * C19076) / C18561);
    const double C5507 = -((C5254 * C18489) / p + (C12770 * C19078) / C18561);
    const double C5626 = -((C5254 * C18492) / p + (C12770 * C19079) / C18561);
    const double C19066 = C12834 * q;
    const double C5757 = -((C5772 * C18486) / p + (C12834 * C19076) / C18561);
    const double C5977 = (C6531 - (C12952 * q) / C18561) / p -
                         ((C5772 * C18489) / p + (C12834 * C19078) / C18561);
    const double C6052 = -((C5772 * C18492) / p + (C12834 * C19079) / C18561);
    const double C19067 = C12893 * q;
    const double C6167 = -((C6182 * C18486) / p + (C12893 * C19076) / C18561);
    const double C6385 = -((C6182 * C18489) / p + (C12893 * C19078) / C18561);
    const double C6444 = (C6619 - (C12983 * q) / C18561) / p -
                         ((C6182 * C18492) / p + (C12893 * C19079) / C18561);
    const double C13012 = (C12790 - (C13602 * q) / C18561) / p -
                          ((C12770 * C18486) / p + (C13713 * C19076) / C18561);
    const double C14767 = -((C12770 * C18492) / p + (C13713 * C19079) / C18561);
    const double C19072 = C13759 * q;
    const double C13096 = -((C12834 * C18486) / p + (C13759 * C19076) / C18561);
    const double C13306 = (C12952 - (C15198 * q) / C18561) / p -
                          ((C12834 * C18489) / p + (C13759 * C19078) / C18561);
    const double C13351 = -((C12834 * C18492) / p + (C13759 * C19079) / C18561);
    const double C19073 = C13789 * q;
    const double C13141 = -((C12893 * C18486) / p + (C13789 * C19076) / C18561);
    const double C13485 = -((C12893 * C18489) / p + (C13789 * C19078) / C18561);
    const double C13500 = (C12983 - (C15257 * q) / C18561) / p -
                          ((C12893 * C18492) / p + (C13789 * C19079) / C18561);
    const double C13729 = (C13602 - (C14061 * q) / C18561) / p -
                          ((C13713 * C18486) / p + (C14077 * C19076) / C18561);
    const double C13849 = -((C13789 * C18486) / p + (C14138 * C19076) / C18561);
    const double C13881 = (C15257 - (C17197 * q) / C18561) / p -
                          ((C13789 * C18492) / p + (C14138 * C19079) / C18561);
    const double C15490 = -((C13789 * C18489) / p + (C14138 * C19078) / C18561);
    const double C13819 = (C15198 - (C15642 * q) / C18561) / p -
                          ((C13759 * C18489) / p + (C14154 * C19078) / C18561);
    const double C13865 = -((C13759 * C18486) / p + (C14154 * C19076) / C18561);
    const double C18510 = C17858 / C17893;
    const double C3753 = C5285 / q - (C5254 * C18541) / q - (C5238 * p) / q;
    const double C18513 = C5507 * p;
    const double C18515 = C5626 * p;
    const double C19080 = C19066 / C18561;
    const double C18521 = C5757 * p;
    const double C4236 = C6531 / q - (C5772 * C18542) / q - (C5977 * p) / q;
    const double C18524 = C6052 * p;
    const double C19081 = C19067 / C18561;
    const double C18528 = C6167 * p;
    const double C18530 = C6385 * p;
    const double C4647 = C6619 / q - (C6182 * C18544) / q - (C6444 * p) / q;
    const double C5270 = (3 * (C5254 - (C12770 * q) / C18561)) / C19063 -
                         ((C5238 * C18486) / p + (C13012 * C19076) / C18561);
    const double C5538 = -((C5238 * C18489) / p + (C13012 * C19078) / C18561);
    const double C5657 = -((C5238 * C18492) / p + (C13012 * C19079) / C18561);
    const double C6590 = -((C5626 * C18489) / p + (C14767 * C19078) / C18561);
    const double C19085 = C19072 / C18561;
    const double C5992 = -((C5977 * C18486) / p + (C13306 * C19076) / C18561);
    const double C8960 = -((C5977 * C18492) / p + (C13306 * C19079) / C18561);
    const double C6067 = -((C6052 * C18486) / p + (C13351 * C19076) / C18561);
    const double C19086 = C19073 / C18561;
    const double C6400 = -((C6385 * C18486) / p + (C13485 * C19076) / C18561);
    const double C6459 = -((C6444 * C18486) / p + (C13500 * C19076) / C18561);
    const double C9333 = -((C6444 * C18489) / p + (C13500 * C19078) / C18561);
    const double C13044 = (3 * (C12770 - (C13713 * q) / C18561)) / C19063 -
                          ((C13012 * C18486) / p + (C13729 * C19076) / C18561);
    const double C14649 = -((C13012 * C18489) / p + (C13729 * C19078) / C18561);
    const double C14752 = -((C13012 * C18492) / p + (C13729 * C19079) / C18561);
    const double C13289 = -((C13500 * C18486) / p + (C13881 * C19076) / C18561);
    const double C13545 = -((C13500 * C18489) / p + (C13881 * C19078) / C18561);
    const double C13228 = -((C13306 * C18486) / p + (C13819 * C19076) / C18561);
    const double C13398 = -((C13306 * C18492) / p + (C13819 * C19079) / C18561);
    const double C3850 = -(C5254 * C18542 + C18513) / q;
    const double C4878 = C18533 - (C5522 * C18541) / q - C18513 / q;
    const double C3882 = -(C5254 * C18544 + C18515) / q;
    const double C5060 = C18536 - (C5641 * C18541) / q - C18515 / q;
    const double C19090 = C5772 - C19080;
    const double C4140 = -(C5772 * C18541 + C18521) / q;
    const double C4924 = C18534 - (C5522 * C18542) / q - C18521 / q;
    const double C4266 = -(C5772 * C18544 + C18524) / q;
    const double C5194 = C18536 - (C6575 * C18542) / q - C18524 / q;
    const double C19091 = C6182 - C19081;
    const double C4520 = -(C6182 * C18541 + C18528) / q;
    const double C5121 = C18534 - (C5641 * C18544) / q - C18528 / q;
    const double C4617 = -(C6182 * C18542 + C18530) / q;
    const double C5209 = C18533 - (C6575 * C18544) / q - C18530 / q;
    const double C3733 =
        (3 * C5254) / C17893 - (C5238 * C18541) / q - (C5270 * p) / q;
    const double C18512 = C5538 * p;
    const double C18514 = C5657 * p;
    const double C18518 = C6590 * p;
    const double C19094 = C12834 - C19085;
    const double C18522 = C5992 * p;
    const double C18525 = C8960 * p;
    const double C18523 = C6067 * p;
    const double C19095 = C12893 - C19086;
    const double C18529 = C6400 * p;
    const double C18531 = C6459 * p;
    const double C18532 = C9333 * p;
    const double C5787 =
        C19090 / C19063 - ((C5757 * C18486) / p + (C13096 * C19076) / C18561);
    const double C8858 = (3 * C19090) / C19063 -
                         ((C5977 * C18489) / p + (C13306 * C19078) / C18561);
    const double C19099 = C19091 / C19063;
    const double C12185 = (3 * C19091) / C19063 -
                          ((C6444 * C18492) / p + (C13500 * C19079) / C18561);
    const double C803 =
        C17741 / q - (C3753 * C18541) / q + C18488 - (C3733 * p) / q;
    const double C3834 = -(C5238 * C18542 + C18512) / q;
    const double C3928 = C18516 - (C5507 * C18541) / q - C18512 / q;
    const double C3866 = -(C5238 * C18544 + C18514) / q;
    const double C4024 = C18519 - (C5626 * C18541) / q - C18514 / q;
    const double C3993 = -(C5507 * C18544 + C18518) / q;
    const double C4074 = -(C5626 * C18542 + C18518) / q;
    const double C4968 = C18511 - (C6560 * C18541) / q - C18518 / q;
    const double C13321 = (3 * C19094) / C19063 -
                          ((C13306 * C18489) / p + (C13819 * C19078) / C18561);
    const double C16371 =
        C19094 / C19063 - ((C13096 * C18486) / p + (C13865 * C19076) / C18561);
    const double C4221 = C18516 - (C5757 * C18542) / q - C18522 / q;
    const double C4312 = -(C5977 * C18541 + C18522) / q;
    const double C4375 = -(C5977 * C18544 + C18525) / q;
    const double C4455 = C18526 - (C6052 * C18542) / q - C18525 / q;
    const double C4251 = -(C5757 * C18544 + C18523) / q;
    const double C4405 = -(C6052 * C18541 + C18523) / q;
    const double C5016 = C18507 - (C6560 * C18542) / q - C18523 / q;
    const double C19101 = C19095 / C19063;
    const double C13515 = (3 * C19095) / C19063 -
                          ((C13500 * C18492) / p + (C13881 * C19079) / C18561);
    const double C4601 = -(C6167 * C18542 + C18529) / q;
    const double C4692 = -(C6385 * C18541 + C18529) / q;
    const double C5031 = C18503 - (C6560 * C18544) / q - C18529 / q;
    const double C4632 = C18519 - (C6167 * C18544) / q - C18531 / q;
    const double C4784 = -(C6444 * C18541 + C18531) / q;
    const double C4755 = C18526 - (C6385 * C18544) / q - C18532 / q;
    const double C4833 = -(C6444 * C18542 + C18532) / q;
    const double C18517 = C5787 * p;
    const double C4360 =
        (3 * C5772) / C17893 - (C5977 * C18542) / q - (C8858 * p) / q;
    const double C6197 =
        C19099 - ((C6167 * C18486) / p + (C13141 * C19076) / C18561);
    const double C9261 =
        C19099 - ((C6385 * C18489) / p + (C13485 * C19078) / C18561);
    const double C4849 =
        (3 * C6182) / C17893 - (C6444 * C18544) / q - (C12185 * p) / q;
    const double C836 = C17766 / q - (C3850 * C18541) / q - (C3834 * p) / q;
    const double C1325 =
        C17891 / C17893 - (C4878 * C18541) / q + C18503 - (C3928 * p) / q;
    const double C847 = C17775 / q - (C3882 * C18541) / q - (C3866 * p) / q;
    const double C1487 =
        C17941 / C17893 - (C5060 * C18541) / q + C18507 - (C4024 * p) / q;
    const double C18495 = C3993 * p;
    const double C1517 = C18509 - (C5105 * C18541) / q - (C4074 * p) / q;
    const double C1643 = C18511 - (C5150 * C18541) / q - (C4968 * p) / q;
    const double C18498 = C4221 * p;
    const double C1032 = C17833 / q - (C4266 * C18542) / q - (C4375 * p) / q;
    const double C1653 =
        C18509 - (C5194 * C18542) / q + C18511 - (C4455 * p) / q;
    const double C18499 = C4251 * p;
    const double C18508 = C5016 * p;
    const double C13367 =
        C19101 - ((C13485 * C18489) / p + (C15490 * C19078) / C18561);
    const double C14813 =
        C19101 - ((C13141 * C18486) / p + (C13849 * C19076) / C18561);
    const double C1184 = -(C4617 * C18541 + C4601 * p) / q;
    const double C18504 = C5031 * p;
    const double C18501 = C4632 * p;
    const double C18502 = C4755 * p;
    const double C18547 = C18517 / q;
    const double C988 =
        C17800 / q - (C4236 * C18542) / q + C18496 - (C4360 * p) / q;
    const double C18520 = C6197 * p;
    const double C18527 = C9261 * p;
    const double C1173 =
        C17858 / q - (C4647 * C18544) / q + C18500 - (C4849 * p) / q;
    const double C858 = -(C3882 * C18542 + C18495) / q;
    const double C1365 = C18505 - (C4939 * C18541) / q - C18495 / q;
    const double C1010 = -(C4236 * C18541 + C18498) / q;
    const double C1335 =
        C17766 / C17893 - (C4924 * C18542) / q + C18503 - C18498 / q;
    const double C1021 = -(C4266 * C18541 + C18499) / q;
    const double C1375 = C18506 - (C4939 * C18542) / q - C18499 / q;
    const double C1497 = C18507 - (C5105 * C18542) / q - C18508 / q;
    const double C1673 = -(C5194 * C18541 + C18508) / q;
    const double C1345 = C18503 - (C4939 * C18544) / q - C18504 / q;
    const double C1537 = -(C5121 * C18542 + C18504) / q;
    const double C1683 = -(C5209 * C18541 + C18504) / q;
    const double C1195 = -(C4647 * C18541 + C18501) / q;
    const double C1507 = C18506 - (C5121 * C18544) / q + C18507 - C18501 / q;
    const double C1206 = -(C4647 * C18542 + C18502) / q;
    const double C1663 = C18505 - (C5209 * C18544) / q + C18511 - C18502 / q;
    const double C3977 = C18488 - (C5507 * C18542) / q - C18547;
    const double C4121 = C18496 - (C5757 * C18541) / q - C18547;
    const double C18548 = C18520 / q;
    const double C18549 = C18527 / q;
    const double C18491 = C3977 * p;
    const double C977 = C18496 - (C4140 * C18541) / q - (C4121 * p) / q;
    const double C4091 = C18488 - (C5626 * C18544) / q - C18548;
    const double C4501 = C18500 - (C6167 * C18541) / q - C18548;
    const double C4471 = C18496 - (C6052 * C18544) / q - C18549;
    const double C4740 = C18500 - (C6385 * C18542) / q - C18549;
    const double C18543 = C18491 / q;
    const double C18494 = C4091 * p;
    const double C1151 = C18500 - (C4520 * C18541) / q - (C4501 * p) / q;
    const double C18497 = C4471 * p;
    const double C1162 = C18500 - (C4617 * C18542) / q - (C4740 * p) / q;
    const double C814 = C18488 - (C3850 * C18542) / q - C18543;
    const double C1355 = C17800 / C17893 - (C4924 * C18541) / q - C18543;
    const double C18545 = C18494 / q;
    const double C18546 = C18497 / q;
    const double C825 = C18488 - (C3882 * C18544) / q - C18545;
    const double C1527 = C18510 - (C5121 * C18541) / q - C18545;
    const double C999 = C18496 - (C4266 * C18544) / q - C18546;
    const double C1693 = C18510 - (C5209 * C18542) / q - C18546;
    g[0] = C803;
    g[1] = C814;
    g[2] = C825;
    g[3] = C836;
    g[4] = C847;
    g[5] = C858;
    g[6] = C977;
    g[7] = C988;
    g[8] = C999;
    g[9] = C1010;
    g[10] = C1021;
    g[11] = C1032;
    g[12] = C1151;
    g[13] = C1162;
    g[14] = C1173;
    g[15] = C1184;
    g[16] = C1195;
    g[17] = C1206;
    g[18] = C1325;
    g[19] = C1335;
    g[20] = C1345;
    g[21] = C1355;
    g[22] = C1365;
    g[23] = C1375;
    g[24] = C1487;
    g[25] = C1497;
    g[26] = C1507;
    g[27] = C1517;
    g[28] = C1527;
    g[29] = C1537;
    g[30] = C1643;
    g[31] = C1653;
    g[32] = C1663;
    g[33] = C1673;
    g[34] = C1683;
    g[35] = C1693;
    g[36] = C3733;
    g[37] = C3753;
    g[38] = C3834;
    g[39] = C3850;
    g[40] = C3866;
    g[41] = C3882;
    g[42] = C3928;
    g[43] = C3977;
    g[44] = C3993;
    g[45] = C4024;
    g[46] = C4074;
    g[47] = C4091;
    g[48] = C4121;
    g[49] = C4140;
    g[50] = C4221;
    g[51] = C4236;
    g[52] = C4251;
    g[53] = C4266;
    g[54] = C4312;
    g[55] = C4360;
    g[56] = C4375;
    g[57] = C4405;
    g[58] = C4455;
    g[59] = C4471;
    g[60] = C4501;
    g[61] = C4520;
    g[62] = C4601;
    g[63] = C4617;
    g[64] = C4632;
    g[65] = C4647;
    g[66] = C4692;
    g[67] = C4740;
    g[68] = C4755;
    g[69] = C4784;
    g[70] = C4833;
    g[71] = C4849;
    g[72] = C4878;
    g[73] = C4924;
    g[74] = C4939;
    g[75] = C4968;
    g[76] = C5016;
    g[77] = C5031;
    g[78] = C5060;
    g[79] = C5105;
    g[80] = C5121;
    g[81] = C5150;
    g[82] = C5194;
    g[83] = C5209;
    g[84] = C5238;
    g[85] = C5254;
    g[86] = C5270;
    g[87] = C5285;
    g[88] = C5507;
    g[89] = C5522;
    g[90] = C5538;
    g[91] = C5626;
    g[92] = C5641;
    g[93] = C5657;
    g[94] = C5757;
    g[95] = C5772;
    g[96] = C5787;
    g[97] = C5977;
    g[98] = C5992;
    g[99] = C6052;
    g[100] = C6067;
    g[101] = C6167;
    g[102] = C6182;
    g[103] = C6197;
    g[104] = C6385;
    g[105] = C6400;
    g[106] = C6444;
    g[107] = C6459;
    g[108] = C6531;
    g[109] = C6560;
    g[110] = C6575;
    g[111] = C6590;
    g[112] = C6619;
    g[113] = C8858;
    g[114] = C8960;
    g[115] = C9261;
    g[116] = C9333;
    g[117] = C12185;
    g[118] = C12770;
    g[119] = C12790;
    g[120] = C12834;
    g[121] = C12893;
    g[122] = C12952;
    g[123] = C12967;
    g[124] = C12983;
    g[125] = C13012;
    g[126] = C13028;
    g[127] = C13029;
    g[128] = C13044;
    g[129] = C13096;
    g[130] = C13141;
    g[131] = C13228;
    g[132] = C13289;
    g[133] = C13306;
    g[134] = C13321;
    g[135] = C13351;
    g[136] = C13367;
    g[137] = C13398;
    g[138] = C13485;
    g[139] = C13500;
    g[140] = C13515;
    g[141] = C13545;
    g[142] = C13602;
    g[143] = C13619;
    g[144] = C13713;
    g[145] = C13729;
    g[146] = C13759;
    g[147] = C13789;
    g[148] = C13819;
    g[149] = C13849;
    g[150] = C13865;
    g[151] = C13881;
    g[152] = C14010;
    g[153] = C14061;
    g[154] = C14077;
    g[155] = C14138;
    g[156] = C14154;
    g[157] = C14204;
    g[158] = C14220;
    g[159] = C14301;
    g[160] = C14649;
    g[161] = C14752;
    g[162] = C14767;
    g[163] = C14813;
    g[164] = C15198;
    g[165] = C15257;
    g[166] = C15490;
    g[167] = C15642;
    g[168] = C15810;
    g[169] = C16371;
    g[170] = C17197;
    g[171] = C17365;
}
