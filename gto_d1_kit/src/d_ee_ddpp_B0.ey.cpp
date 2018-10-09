/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2121_2_ints(const double ae,
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
    const double C48378 = 2 * q;
    const double C50009 = de * zCD;
    const double C50008 = be * zAB;
    const double C50006 = de * yCD;
    const double C50005 = be * yAB;
    const double C50003 = de * xCD;
    const double C50002 = be * xAB;
    const double C50170 = p + q;
    const double C51023 = p * q;
    const double C51022 = std::pow(Pi, 2.5);
    const double C51018 = zP - zQ;
    const double C51017 = yP - yQ;
    const double C51016 = 2 * p;
    const double C51014 = xP - xQ;
    const double C50134 = C50008 + C50009;
    const double C50133 = C50005 + C50006;
    const double C50132 = C50002 + C50003;
    const double C51024 = std::sqrt(C50170);
    const double C51044 = C51022 * kab;
    const double C51040 = C51018 * q;
    const double C51039 = C51017 * q;
    const double C51037 = C51014 * q;
    const double C51045 = C51023 * C51024;
    const double C51062 = C51044 * kcd;
    const double C24061 = (2. * C51062 * bs[0]) / C51045;
    const double C40242 = (2. * C51062 * bs[1]) / C51045;
    const double C41252 = (2. * C51062 * bs[2]) / C51045;
    const double C41883 = (2. * C51062 * bs[3]) / C51045;
    const double C42224 = (2. * C51062 * bs[4]) / C51045;
    const double C42381 = (2. * C51062 * bs[5]) / C51045;
    const double C42478 = (2. * C51062 * bs[6]) / C51045;
    const double C50107 = C24061 / C48378;
    const double C51015 = C40242 * q;
    const double C21703 = -((C24061 * C50002) / p + (C40242 * C51037) / C50170);
    const double C23887 = -((C24061 * C50005) / p + (C40242 * C51039) / C50170);
    const double C24002 = -((C24061 * C50008) / p + (C40242 * C51040) / C50170);
    const double C51027 = C41252 * q;
    const double C40004 = -((C40242 * C50002) / p + (C41252 * C51037) / C50170);
    const double C40166 = -((C40242 * C50005) / p + (C41252 * C51039) / C50170);
    const double C40197 = -((C40242 * C50008) / p + (C41252 * C51040) / C50170);
    const double C51033 = C41883 * q;
    const double C41235 = -((C41252 * C50002) / p + (C41883 * C51037) / C50170);
    const double C43786 = -((C41252 * C50005) / p + (C41883 * C51039) / C50170);
    const double C43845 = -((C41252 * C50008) / p + (C41883 * C51040) / C50170);
    const double C51035 = C42224 * q;
    const double C41934 = -((C41883 * C50002) / p + (C42224 * C51037) / C50170);
    const double C44466 = -((C41883 * C50005) / p + (C42224 * C51039) / C50170);
    const double C46968 = -((C41883 * C50008) / p + (C42224 * C51040) / C50170);
    const double C51036 = C42381 * q;
    const double C42240 = -((C42224 * C50002) / p + (C42381 * C51037) / C50170);
    const double C44779 = -((C42224 * C50005) / p + (C42381 * C51039) / C50170);
    const double C47280 = -((C42224 * C50008) / p + (C42381 * C51040) / C50170);
    const double C42425 = -((C42381 * C50002) / p + (C42478 * C51037) / C50170);
    const double C44936 = -((C42381 * C50005) / p + (C42478 * C51039) / C50170);
    const double C47435 = -((C42381 * C50008) / p + (C42478 * C51040) / C50170);
    const double C51038 = C51015 / C50170;
    const double C50103 = C21703 / C48378;
    const double C49888 = -(C24061 * C50132 + C21703 * p) / q;
    const double C50102 = C23887 / C48378;
    const double C49928 = -(C24061 * C50133 + C23887 * p) / q;
    const double C50106 = C24002 / C48378;
    const double C49960 = -(C24061 * C50134 + C24002 * p) / q;
    const double C51048 = C51027 / C50170;
    const double C22119 = -((C23887 * C50002) / p + (C40166 * C51037) / C50170);
    const double C22345 = -((C24002 * C50002) / p + (C40197 * C51037) / C50170);
    const double C23944 = -((C24002 * C50005) / p + (C40197 * C51039) / C50170);
    const double C51054 = C51033 / C50170;
    const double C40181 = -((C40197 * C50005) / p + (C43845 * C51039) / C50170);
    const double C51056 = C51035 / C50170;
    const double C51057 = C51036 / C50170;
    const double C51058 = C24061 - C51038;
    const double C50131 = C49960 / C48378;
    const double C51065 = C40242 - C51048;
    const double C50115 = C22119 * p;
    const double C50071 = C22119 / q;
    const double C50039 = C22119 / C48378;
    const double C50122 = C22345 * p;
    const double C50077 = C22345 / q;
    const double C50055 = C22345 / C48378;
    const double C50127 = C23944 * p;
    const double C50090 = C23944 / q;
    const double C50062 = C23944 / C48378;
    const double C51071 = C41252 - C51054;
    const double C23929 = -((C23944 * C50002) / p + (C40181 * C51037) / C50170);
    const double C51073 = C41883 - C51056;
    const double C51074 = C42224 - C51057;
    const double C51075 = C51058 / C51016;
    const double C51080 = C51065 / C51016;
    const double C22583 = -(C23887 * C50132 + C50115) / q;
    const double C28805 = -(C21703 * C50133 + C50115) / q;
    const double C23330 = -(C24002 * C50132 + C50122) / q;
    const double C29072 = -(C21703 * C50134 + C50122) / q;
    const double C30461 = -(C24002 * C50133 + C50127) / q;
    const double C30944 = -(C23887 * C50134 + C50127) / q;
    const double C51084 = C51071 / C51016;
    const double C50111 = C23929 / q;
    const double C50105 = C23929 / C48378;
    const double C50104 = C23929 * p;
    const double C51085 = C51073 / C51016;
    const double C51086 = C51074 / C51016;
    const double C21673 =
        C51075 - ((C21703 * C50002) / p + (C40004 * C51037) / C50170);
    const double C22536 =
        C51075 - ((C23887 * C50005) / p + (C40166 * C51039) / C50170);
    const double C23266 =
        C51075 - ((C24002 * C50008) / p + (C40197 * C51040) / C50170);
    const double C39984 =
        C51080 - ((C40004 * C50002) / p + (C41235 * C51037) / C50170);
    const double C40048 =
        C51080 - ((C40166 * C50005) / p + (C43786 * C51039) / C50170);
    const double C40107 =
        C51080 - ((C40197 * C50008) / p + (C43845 * C51040) / C50170);
    const double C50052 = C29072 / C48378;
    const double C50060 = C30461 / C48378;
    const double C50051 = C30944 / C48378;
    const double C41346 =
        C51084 - ((C41235 * C50002) / p + (C41934 * C51037) / C50170);
    const double C41392 =
        C51084 - ((C43786 * C50005) / p + (C44466 * C51039) / C50170);
    const double C41422 =
        C51084 - ((C43845 * C50008) / p + (C46968 * C51040) / C50170);
    const double C20900 = -(C22119 * C50134 + C50104) / q;
    const double C21337 = -(C22345 * C50133 + C50104) / q;
    const double C21411 = -(C23944 * C50132 + C50104) / q;
    const double C41950 =
        C51085 - ((C41934 * C50002) / p + (C42240 * C51037) / C50170);
    const double C42011 =
        C51085 - ((C46968 * C50008) / p + (C47280 * C51040) / C50170);
    const double C42027 =
        C51085 - ((C44466 * C50005) / p + (C44779 * C51039) / C50170);
    const double C42314 =
        C51086 - ((C42240 * C50002) / p + (C42425 * C51037) / C50170);
    const double C44825 =
        C51086 - ((C44779 * C50005) / p + (C44936 * C51039) / C50170);
    const double C44856 =
        C51086 - ((C47280 * C50008) / p + (C47435 * C51040) / C50170);
    const double C50004 = C21673 / C48378;
    const double C21656 = C50107 - (C21703 * C50132) / q - (C21673 * p) / q;
    const double C50019 = C22536 / C48378;
    const double C29733 = C50107 - (C23887 * C50133) / q - (C22536 * p) / q;
    const double C50029 = C23266 / C48378;
    const double C31058 = C50107 - (C24002 * C50134) / q - (C23266 * p) / q;
    const double C21625 = (C21703 - (C40004 * q) / C50170) / p -
                          ((C21673 * C50002) / p + (C39984 * C51037) / C50170);
    const double C22104 = -((C21673 * C50005) / p + (C39984 * C51039) / C50170);
    const double C22330 = -((C21673 * C50008) / p + (C39984 * C51040) / C50170);
    const double C51019 = C40048 * q;
    const double C22521 = -((C22536 * C50002) / p + (C40048 * C51037) / C50170);
    const double C22891 = (C23887 - (C40166 * q) / C50170) / p -
                          ((C22536 * C50005) / p + (C40048 * C51039) / C50170);
    const double C23075 = -((C22536 * C50008) / p + (C40048 * C51040) / C50170);
    const double C51020 = C40107 * q;
    const double C23251 = -((C23266 * C50002) / p + (C40107 * C51037) / C50170);
    const double C23618 = -((C23266 * C50005) / p + (C40107 * C51039) / C50170);
    const double C23738 = (C24002 - (C40197 * q) / C50170) / p -
                          ((C23266 * C50008) / p + (C40107 * C51040) / C50170);
    const double C40226 = (C40004 - (C41235 * q) / C50170) / p -
                          ((C39984 * C50002) / p + (C41346 * C51037) / C50170);
    const double C42944 = -((C39984 * C50008) / p + (C41346 * C51040) / C50170);
    const double C51028 = C41392 * q;
    const double C40323 = -((C40048 * C50002) / p + (C41392 * C51037) / C50170);
    const double C40519 = (C40166 - (C43786 * q) / C50170) / p -
                          ((C40048 * C50005) / p + (C41392 * C51039) / C50170);
    const double C40534 = -((C40048 * C50008) / p + (C41392 * C51040) / C50170);
    const double C51029 = C41422 * q;
    const double C40354 = -((C40107 * C50002) / p + (C41422 * C51037) / C50170);
    const double C40698 = -((C40107 * C50005) / p + (C41422 * C51039) / C50170);
    const double C40713 = (C40197 - (C43845 * q) / C50170) / p -
                          ((C40107 * C50008) / p + (C41422 * C51040) / C50170);
    const double C50049 = C20900 / q;
    const double C48082 = -(C29072 * C50133 + C20900 * p) / q;
    const double C41362 = (C41235 - (C41934 * q) / C50170) / p -
                          ((C41346 * C50002) / p + (C41950 * C51037) / C50170);
    const double C51034 = C42011 * q;
    const double C41482 = -((C41422 * C50002) / p + (C42011 * C51037) / C50170);
    const double C41514 = (C43845 - (C46968 * q) / C50170) / p -
                          ((C41422 * C50008) / p + (C42011 * C51040) / C50170);
    const double C44078 = -((C41422 * C50005) / p + (C42011 * C51039) / C50170);
    const double C41452 = (C43786 - (C44466 * q) / C50170) / p -
                          ((C41392 * C50005) / p + (C42027 * C51039) / C50170);
    const double C41498 = -((C41392 * C50002) / p + (C42027 * C51037) / C50170);
    const double C42070 = (C41934 - (C42240 * q) / C50170) / p -
                          ((C41950 * C50002) / p + (C42314 * C51037) / C50170);
    const double C42086 = (C44466 - (C44779 * q) / C50170) / p -
                          ((C42027 * C50005) / p + (C44825 * C51039) / C50170);
    const double C42130 = (C46968 - (C47280 * q) / C50170) / p -
                          ((C42011 * C50008) / p + (C44856 * C51040) / C50170);
    const double C44656 = -((C42011 * C50005) / p + (C44856 * C51039) / C50170);
    const double C50061 = C31058 / C48378;
    const double C50065 = C21625 / C48378;
    const double C17824 = C21703 / q - (C21673 * C50132) / q - (C21625 * p) / q;
    const double C50070 = C22104 / C48378;
    const double C50067 = C22104 * p;
    const double C50076 = C22330 / C48378;
    const double C50069 = C22330 * p;
    const double C51041 = C51019 / C50170;
    const double C50080 = C22521 * p;
    const double C50079 = C22521 / C48378;
    const double C50085 = C22891 / C48378;
    const double C19137 = C23887 / q - (C22536 * C50133) / q - (C22891 * p) / q;
    const double C50088 = C23075 / C48378;
    const double C50084 = C23075 * p;
    const double C51042 = C51020 / C50170;
    const double C50093 = C23251 * p;
    const double C50092 = C23251 / C48378;
    const double C50098 = C23618 / C48378;
    const double C50095 = C23618 * p;
    const double C50101 = C23738 / C48378;
    const double C20171 = C24002 / q - (C23266 * C50134) / q - (C23738 * p) / q;
    const double C51021 = C40226 * q;
    const double C21688 = (3 * (C21673 - (C39984 * q) / C50170)) / C51016 -
                          ((C21625 * C50002) / p + (C40226 * C51037) / C50170);
    const double C22135 = -((C21625 * C50005) / p + (C40226 * C51039) / C50170);
    const double C22361 = -((C21625 * C50008) / p + (C40226 * C51040) / C50170);
    const double C23959 = -((C22330 * C50005) / p + (C42944 * C51039) / C50170);
    const double C51049 = C51028 / C50170;
    const double C51025 = C40519 * q;
    const double C22906 = -((C22891 * C50002) / p + (C40519 * C51037) / C50170);
    const double C24509 = -((C22891 * C50008) / p + (C40519 * C51040) / C50170);
    const double C23090 = -((C23075 * C50002) / p + (C40534 * C51037) / C50170);
    const double C51050 = C51029 / C50170;
    const double C23633 = -((C23618 * C50002) / p + (C40698 * C51037) / C50170);
    const double C51026 = C40713 * q;
    const double C23753 = -((C23738 * C50002) / p + (C40713 * C51037) / C50170);
    const double C24774 = -((C23738 * C50005) / p + (C40713 * C51039) / C50170);
    const double C51030 = C41362 * q;
    const double C40257 = (3 * (C39984 - (C41346 * q) / C50170)) / C51016 -
                          ((C40226 * C50002) / p + (C41362 * C51037) / C50170);
    const double C42840 = -((C40226 * C50005) / p + (C41362 * C51039) / C50170);
    const double C42929 = -((C40226 * C50008) / p + (C41362 * C51040) / C50170);
    const double C51055 = C51034 / C50170;
    const double C51032 = C41514 * q;
    const double C40502 = -((C40713 * C50002) / p + (C41514 * C51037) / C50170);
    const double C40758 = -((C40713 * C50005) / p + (C41514 * C51039) / C50170);
    const double C51031 = C41452 * q;
    const double C40441 = -((C40519 * C50002) / p + (C41452 * C51037) / C50170);
    const double C40611 = -((C40519 * C50008) / p + (C41452 * C51040) / C50170);
    const double C41643 = (3 * (C41346 - (C41950 * q) / C50170)) / C51016 -
                          ((C41362 * C50002) / p + (C42070 * C51037) / C50170);
    const double C44194 = -((C41362 * C50005) / p + (C42070 * C51039) / C50170);
    const double C46710 = -((C41362 * C50008) / p + (C42070 * C51040) / C50170);
    const double C41673 = -((C41452 * C50002) / p + (C42086 * C51037) / C50170);
    const double C41749 = (3 * (C41392 - (C42027 * q) / C50170)) / C51016 -
                          ((C41452 * C50005) / p + (C42086 * C51039) / C50170);
    const double C46814 = -((C41452 * C50008) / p + (C42086 * C51040) / C50170);
    const double C41733 = -((C41514 * C50002) / p + (C42130 * C51037) / C50170);
    const double C44342 = -((C41514 * C50005) / p + (C42130 * C51039) / C50170);
    const double C47975 =
        C49888 / C48378 - (C21656 * C50132) / q + C50103 - (C17824 * p) / q;
    const double C18157 = -(C21673 * C50133 + C50067) / q;
    const double C20712 = C50102 - (C22119 * C50132) / q - C50067 / q;
    const double C18220 = -(C21673 * C50134 + C50069) / q;
    const double C21180 = C50106 - (C22345 * C50132) / q - C50069 / q;
    const double C51059 = C22536 - C51041;
    const double C18806 = -(C22536 * C50132 + C50080) / q;
    const double C20870 = C50103 - (C22119 * C50133) / q - C50080 / q;
    const double C48156 =
        C49928 / C48378 - (C29733 * C50133) / q + C50102 - (C19137 * p) / q;
    const double C19197 = -(C22536 * C50134 + C50084) / q;
    const double C21567 = C50106 - (C23944 * C50133) / q - C50084 / q;
    const double C51060 = C23266 - C51042;
    const double C19779 = -(C23266 * C50132 + C50093) / q;
    const double C21368 = C50103 - (C22345 * C50134) / q - C50093 / q;
    const double C20111 = -(C23266 * C50133 + C50095) / q;
    const double C21596 = C50102 - (C23944 * C50134) / q - C50095 / q;
    const double C48328 =
        C50131 - (C31058 * C50134) / q + C50106 - (C20171 * p) / q;
    const double C51043 = C51021 / C50170;
    const double C17806 =
        (3 * C21673) / C48378 - (C21625 * C50132) / q - (C21688 * p) / q;
    const double C50066 = C22135 * p;
    const double C50068 = C22361 * p;
    const double C50075 = C23959 * p;
    const double C51066 = C40048 - C51049;
    const double C51046 = C51025 / C50170;
    const double C50082 = C22906 * p;
    const double C50087 = C24509 * p;
    const double C50083 = C23090 * p;
    const double C51067 = C40107 - C51050;
    const double C50094 = C23633 * p;
    const double C51047 = C51026 / C50170;
    const double C50097 = C23753 * p;
    const double C50100 = C24774 * p;
    const double C51051 = C51030 / C50170;
    const double C24076 = -((C21688 * C50005) / p + (C40257 * C51039) / C50170);
    const double C24092 = -((C21688 * C50008) / p + (C40257 * C51040) / C50170);
    const double C24228 = -((C22361 * C50005) / p + (C42929 * C51039) / C50170);
    const double C51072 = C41422 - C51055;
    const double C51053 = C51032 / C50170;
    const double C24789 = -((C24774 * C50002) / p + (C40758 * C51037) / C50170);
    const double C51052 = C51031 / C50170;
    const double C24524 = -((C24509 * C50002) / p + (C40611 * C51037) / C50170);
    const double C43381 = -((C40257 * C50005) / p + (C41643 * C51039) / C50170);
    const double C43473 = -((C40257 * C50008) / p + (C41643 * C51040) / C50170);
    const double C50040 = C47975 / C48378;
    const double C50038 = C20712 / q;
    const double C48123 = C50102 - (C22583 * C50132) / q - (C20712 * p) / q;
    const double C50074 = C18220 / C48378;
    const double C50054 = C21180 / q;
    const double C48262 = C50106 - (C23330 * C50132) / q - (C21180 * p) / q;
    const double C22551 =
        C51059 / C51016 - ((C22521 * C50002) / p + (C40323 * C51037) / C50170);
    const double C24479 = (3 * C51059) / C51016 -
                          ((C22891 * C50005) / p + (C40519 * C51039) / C50170);
    const double C50044 = C20870 / q;
    const double C48008 = C50103 - (C28805 * C50133) / q - (C20870 * p) / q;
    const double C50042 = C48156 / C48378;
    const double C48474 = C50131 - (C30944 * C50133) / q - (C19197 * p) / q;
    const double C50063 = C21567 / q;
    const double C48295 = C50106 - (C30461 * C50133) / q - (C21567 * p) / q;
    const double C51076 = C51060 / C51016;
    const double C24833 = (3 * C51060) / C51016 -
                          ((C23738 * C50008) / p + (C40713 * C51040) / C50170);
    const double C50059 = C21368 / q;
    const double C48041 = C50103 - (C29072 * C50134) / q - (C21368 * p) / q;
    const double C50130 = C21596 * p;
    const double C50064 = C21596 / q;
    const double C50058 = C48328 / C48378;
    const double C51061 = C21625 - C51043;
    const double C4882 =
        C21656 / q - (C17824 * C50132) / q + C50004 - (C17806 * p) / q;
    const double C18141 = -(C21625 * C50133 + C50066) / q;
    const double C18282 = C50071 - (C22104 * C50132) / q - C50066 / q;
    const double C18204 = -(C21625 * C50134 + C50068) / q;
    const double C18529 = C50077 - (C22330 * C50132) / q - C50068 / q;
    const double C18482 = -(C22104 * C50134 + C50075) / q;
    const double C18695 = -(C22330 * C50133 + C50075) / q;
    const double C20945 = C50062 - (C23929 * C50132) / q - C50075 / q;
    const double C40550 = (3 * C51066) / C51016 -
                          ((C40519 * C50005) / p + (C41452 * C51039) / C50170);
    const double C45497 =
        C51066 / C51016 - ((C40323 * C50002) / p + (C41498 * C51037) / C50170);
    const double C51063 = C22891 - C51046;
    const double C19122 = C50071 - (C22521 * C50133) / q - C50082 / q;
    const double C19259 = -(C22891 * C50132 + C50082) / q;
    const double C19457 = -(C22891 * C50134 + C50087) / q;
    const double C19669 = C50090 - (C23075 * C50133) / q - C50087 / q;
    const double C19182 = -(C22521 * C50134 + C50083) / q;
    const double C19503 = -(C23075 * C50132 + C50083) / q;
    const double C21106 = C50055 - (C23929 * C50133) / q - C50083 / q;
    const double C51081 = C51067 / C51016;
    const double C40728 = (3 * C51067) / C51016 -
                          ((C40713 * C50008) / p + (C41514 * C51040) / C50170);
    const double C20095 = -(C23251 * C50133 + C50094) / q;
    const double C20232 = -(C23618 * C50132 + C50094) / q;
    const double C21137 = C50039 - (C23929 * C50134) / q - C50094 / q;
    const double C51064 = C23738 - C51047;
    const double C20156 = C50077 - (C23251 * C50134) / q - C50097 / q;
    const double C20472 = -(C23738 * C50132 + C50097) / q;
    const double C20427 = C50090 - (C23618 * C50134) / q - C50100 / q;
    const double C20637 = -(C23738 * C50133 + C50100) / q;
    const double C51068 = C40226 - C51051;
    const double C50108 = C24076 * p;
    const double C50109 = C24092 * p;
    const double C50112 = C24228 * p;
    const double C41765 =
        C51072 / C51016 - ((C44078 * C50005) / p + (C44656 * C51039) / C50170);
    const double C41781 = (3 * C51072) / C51016 -
                          ((C41514 * C50008) / p + (C42130 * C51040) / C50170);
    const double C51070 = C40713 - C51053;
    const double C50123 = C24789 * p;
    const double C51069 = C40519 - C51052;
    const double C50118 = C24524 * p;
    const double C50037 = C48123 / C48378;
    const double C50053 = C48262 / C48378;
    const double C50073 = C22551 * p;
    const double C19426 =
        (3 * C22536) / C48378 - (C22891 * C50133) / q - (C24479 * p) / q;
    const double C50043 = C48008 / C48378;
    const double C50056 = C48295 / C48378;
    const double C23281 =
        C51076 - ((C23251 * C50002) / p + (C40354 * C51037) / C50170);
    const double C24613 =
        C51076 - ((C23618 * C50005) / p + (C40698 * C51039) / C50170);
    const double C20669 =
        (3 * C23266) / C48378 - (C23738 * C50134) / q - (C24833 * p) / q;
    const double C50048 = C48041 / C48378;
    const double C48189 = C50102 - (C30944 * C50134) / q - C50130 / q;
    const double C48603 = -(C31058 * C50133 + C50130) / q;
    const double C51077 = C51061 / C51016;
    const double C24045 =
        (2 * C51061) / p - ((C21688 * C50002) / p + (C40257 * C51037) / C50170);
    const double C5003 = C28805 / q - (C18157 * C50132) / q - (C18141 * p) / q;
    const double C6273 =
        C22583 / C48378 - (C20712 * C50132) / q + C50039 - (C18282 * p) / q;
    const double C5025 = C29072 / q - (C18220 * C50132) / q - (C18204 * p) / q;
    const double C6705 =
        C23330 / C48378 - (C21180 * C50132) / q + C50055 - (C18529 * p) / q;
    const double C50017 = C18482 * p;
    const double C6815 = C50060 - (C21337 * C50132) / q - (C18695 * p) / q;
    const double C7121 = C50062 - (C21411 * C50132) / q - (C20945 * p) / q;
    const double C24494 = -((C24479 * C50002) / p + (C40550 * C51037) / C50170);
    const double C31570 = -((C24479 * C50008) / p + (C40550 * C51040) / C50170);
    const double C40965 = -((C40550 * C50002) / p + (C41749 * C51037) / C50170);
    const double C41057 = -((C40550 * C50008) / p + (C41749 * C51040) / C50170);
    const double C24376 = -((C22551 * C50008) / p + (C45497 * C51040) / C50170);
    const double C51078 = C51063 / C51016;
    const double C31554 =
        (2 * C51063) / p - ((C24479 * C50005) / p + (C40550 * C51039) / C50170);
    const double C50026 = C19122 * p;
    const double C5500 = C30944 / q - (C19197 * C50133) / q - (C19457 * p) / q;
    const double C7161 =
        C50060 - (C21567 * C50133) / q + C50062 - (C19669 * p) / q;
    const double C50027 = C19182 * p;
    const double C50057 = C21106 * p;
    const double C40580 =
        C51081 - ((C40698 * C50005) / p + (C44078 * C51039) / C50170);
    const double C42990 =
        C51081 - ((C40354 * C50002) / p + (C41482 * C51037) / C50170);
    const double C24848 = -((C24833 * C50002) / p + (C40728 * C51037) / C50170);
    const double C31888 = -((C24833 * C50005) / p + (C40728 * C51039) / C50170);
    const double C5931 = -(C20111 * C50132 + C20095 * p) / q;
    const double C50047 = C21137 * p;
    const double C51079 = C51064 / C51016;
    const double C38884 =
        (2 * C51064) / p - ((C24833 * C50008) / p + (C40728 * C51040) / C50170);
    const double C50035 = C20156 * p;
    const double C50036 = C20427 * p;
    const double C51087 = C51068 / C51016;
    const double C40815 =
        (2 * C51068) / p - ((C40257 * C50002) / p + (C41643 * C51037) / C50170);
    const double C21719 =
        (3 * C22104) / C48378 - (C22135 * C50132) / q - C50108 / q;
    const double C28789 = -(C21688 * C50133 + C50108) / q;
    const double C21736 =
        (3 * C22330) / C48378 - (C22361 * C50132) / q - C50109 / q;
    const double C29056 = -(C21688 * C50134 + C50109) / q;
    const double C22166 = C50111 - (C23959 * C50132) / q - C50112 / q;
    const double C28894 = -(C22361 * C50133 + C50112) / q;
    const double C29325 = -(C22135 * C50134 + C50112) / q;
    const double C41025 = -((C40728 * C50002) / p + (C41781 * C51037) / C50170);
    const double C41176 = -((C40728 * C50005) / p + (C41781 * C51039) / C50170);
    const double C51083 = C51070 / C51016;
    const double C41191 =
        (2 * C51070) / p - ((C40728 * C50008) / p + (C41781 * C51040) / C50170);
    const double C23648 = -(C24774 * C50132 + C50123) / q;
    const double C30445 = -(C23753 * C50133 + C50123) / q;
    const double C30754 = C50111 - (C23633 * C50134) / q - C50123 / q;
    const double C51082 = C51069 / C51016;
    const double C41041 =
        (2 * C51069) / p - ((C40550 * C50005) / p + (C41749 * C51039) / C50170);
    const double C22938 = -(C24509 * C50132 + C50118) / q;
    const double C29749 = C50111 - (C23090 * C50133) / q - C50118 / q;
    const double C30079 = -(C22906 * C50134 + C50118) / q;
    const double C50144 = C50073 / q;
    const double C5390 =
        C29733 / q - (C19137 * C50133) / q + C50019 - (C19426 * p) / q;
    const double C50078 = C23281 * p;
    const double C50091 = C24613 * p;
    const double C5898 =
        C31058 / q - (C20171 * C50134) / q + C50029 - (C20669 * p) / q;
    const double C50046 = C48189 / C48378;
    const double C24213 =
        C51077 - ((C22135 * C50005) / p + (C42840 * C51039) / C50170);
    const double C24317 =
        C51077 - ((C22361 * C50008) / p + (C42929 * C51040) / C50170);
    const double C21641 =
        (2 * C21625) / q - (C21688 * C50132) / q - (C24045 * p) / q;
    const double C5036 = -(C18220 * C50133 + C50017) / q;
    const double C6403 = C50051 - (C20900 * C50132) / q - C50017 / q;
    const double C50117 = C24494 * p;
    const double C50125 = C31570 * p;
    const double C50116 = C24376 * p;
    const double C24361 =
        C51078 - ((C22906 * C50002) / p + (C40441 * C51037) / C50170);
    const double C31658 =
        C51078 - ((C24509 * C50008) / p + (C40611 * C51040) / C50170);
    const double C30002 =
        (2 * C22891) / q - (C24479 * C50133) / q - (C31554 * p) / q;
    const double C5467 = -(C19137 * C50132 + C50026) / q;
    const double C6313 =
        C28805 / C48378 - (C20870 * C50133) / q + C50039 - C50026 / q;
    const double C5489 = -(C19197 * C50132 + C50027) / q;
    const double C6413 = C50052 - (C20900 * C50133) / q - C50027 / q;
    const double C6745 = C50055 - (C21337 * C50133) / q - C50057 / q;
    const double C7231 = -(C21567 * C50132 + C50057) / q;
    const double C24628 = -((C24613 * C50002) / p + (C40580 * C51037) / C50170);
    const double C40995 = -((C40580 * C50002) / p + (C41765 * C51037) / C50170);
    const double C24672 = -((C23281 * C50005) / p + (C42990 * C51039) / C50170);
    const double C50124 = C24848 * p;
    const double C50129 = C31888 * p;
    const double C6353 = C50039 - (C20900 * C50134) / q - C50047 / q;
    const double C6845 = -(C21368 * C50133 + C50047) / q;
    const double C7251 = -(C21596 * C50132 + C50047) / q;
    const double C24687 =
        C51079 - ((C23753 * C50002) / p + (C40502 * C51037) / C50170);
    const double C31816 =
        C51079 - ((C24774 * C50005) / p + (C40758 * C51039) / C50170);
    const double C37862 =
        (2 * C23738) / q - (C24833 * C50134) / q - (C38884 * p) / q;
    const double C5953 = -(C20171 * C50132 + C50035) / q;
    const double C6785 = C50052 - (C21368 * C50134) / q + C50055 - C50035 / q;
    const double C5964 = -(C20171 * C50133 + C50036) / q;
    const double C7201 = C50051 - (C21596 * C50134) / q + C50062 - C50036 / q;
    const double C43442 =
        C51087 - ((C42929 * C50008) / p + (C46710 * C51040) / C50170);
    const double C45903 =
        C51087 - ((C42840 * C50005) / p + (C44194 * C51039) / C50170);
    const double C18266 =
        C50038 - (C18282 * C50132) / q + C50070 - (C21719 * p) / q;
    const double C18513 =
        C50054 - (C18529 * C50132) / q + C50076 - (C21736 * p) / q;
    const double C20929 =
        C21411 / C48378 - (C20945 * C50132) / q + C50105 - (C22166 * p) / q;
    const double C18173 = -(C18204 * C50133 + C29325 * p) / q;
    const double C40935 =
        C51083 - ((C40502 * C50002) / p + (C41733 * C51037) / C50170);
    const double C41089 =
        C51083 - ((C40758 * C50005) / p + (C44342 * C51039) / C50170);
    const double C50096 = C30754 * p;
    const double C40874 =
        C51082 - ((C40441 * C50002) / p + (C41673 * C51037) / C50170);
    const double C41073 =
        C51082 - ((C40611 * C50008) / p + (C46814 * C51040) / C50170);
    const double C20991 =
        C21337 / C48378 - (C21106 * C50133) / q + C50105 - (C29749 * p) / q;
    const double C19152 = C50049 - (C19182 * C50133) / q - (C30079 * p) / q;
    const double C18450 = C50004 - (C22104 * C50133) / q - C50144;
    const double C18789 = C50019 - (C22521 * C50132) / q - C50144;
    const double C50145 = C50078 / q;
    const double C50149 = C50091 / q;
    const double C50110 = C24213 * p;
    const double C50113 = C24317 * p;
    const double C17773 = (3 * C17824) / C48378 - (C17806 * C50132) / q +
                          C50065 - (C21641 * p) / q;
    const double C22921 = -(C24479 * C50132 + C50117) / q;
    const double C29718 =
        (3 * C22521) / C48378 - (C22906 * C50133) / q - C50117 / q;
    const double C30018 =
        (3 * C23075) / C48378 - (C24509 * C50133) / q - C50125 / q;
    const double C37044 = -(C24479 * C50134 + C50125) / q;
    const double C50153 = C50116 / q;
    const double C29867 = -(C22551 * C50134 + C50116) / q;
    const double C50114 = C24361 * p;
    const double C50126 = C31658 * p;
    const double C19306 = (3 * C19137) / C48378 - (C19426 * C50133) / q +
                          C50085 - (C30002 * p) / q;
    const double C50119 = C24628 * p;
    const double C50120 = C24672 * p;
    const double C23768 = -(C24833 * C50132 + C50124) / q;
    const double C30902 =
        (3 * C23251) / C48378 - (C23753 * C50134) / q - C50124 / q;
    const double C30841 = -(C24833 * C50133 + C50129) / q;
    const double C37729 =
        (3 * C23618) / C48378 - (C24774 * C50134) / q - C50129 / q;
    const double C50121 = C24687 * p;
    const double C50128 = C31816 * p;
    const double C20578 = (3 * C20171) / C48378 - (C20669 * C50134) / q +
                          C50101 - (C37862 * p) / q;
    const double C50007 = C18266 * p;
    const double C50010 = C18513 * p;
    const double C50041 = C20929 * p;
    const double C5014 = C48082 / q - (C5036 * C50132) / q - (C18173 * p) / q;
    const double C20126 = -(C20156 * C50133 + C50096) / q;
    const double C21049 =
        C20900 / C48378 - (C21137 * C50134) / q + C50105 - C50096 / q;
    const double C50045 = C20991 * p;
    const double C5478 = -(C5500 * C50132 + C19152 * p) / q;
    const double C50011 = C18450 * p;
    const double C5346 = C50019 - (C18806 * C50132) / q - (C18789 * p) / q;
    const double C18728 = C50004 - (C22330 * C50134) / q - C50145;
    const double C19762 = C50029 - (C23251 * C50132) / q - C50145;
    const double C19701 = C50019 - (C23075 * C50134) / q - C50149;
    const double C20396 = C50029 - (C23618 * C50133) / q - C50149;
    const double C50150 = C50110 / q;
    const double C50151 = C50113 / q;
    const double C4871 =
        C47975 / q - (C4882 * C50132) / q + C17824 / q - (C17773 * p) / q;
    const double C18881 =
        C50044 - (C19122 * C50133) / q + C50079 - (C29718 * p) / q;
    const double C19549 =
        C50063 - (C19669 * C50133) / q + C50088 - (C30018 * p) / q;
    const double C19441 =
        (3 * C19197) / C48378 - (C19457 * C50133) / q - (C37044 * p) / q;
    const double C22598 = C50088 - (C23090 * C50132) / q - C50153;
    const double C29250 = C50076 - (C23959 * C50133) / q - C50153;
    const double C18466 = C50074 - (C18482 * C50133) / q - (C29867 * p) / q;
    const double C50152 = C50114 / q;
    const double C50156 = C50126 / q;
    const double C5401 =
        C48156 / q - (C5390 * C50133) / q + C19137 / q - (C19306 * p) / q;
    const double C50157 = C50119 / q;
    const double C23105 = -(C24613 * C50132 + C50119) / q;
    const double C50154 = C50120 / q;
    const double C29456 = -(C23281 * C50133 + C50120) / q;
    const double C19974 =
        C50059 - (C20156 * C50134) / q + C50092 - (C30902 * p) / q;
    const double C50099 = C37729 * p;
    const double C50155 = C50121 / q;
    const double C50158 = C50128 / q;
    const double C5920 =
        C48328 / q - (C5898 * C50134) / q + C20171 / q - (C20578 * p) / q;
    const double C4893 = -(C4882 * C50133 + C50007) / q;
    const double C6263 = C50037 - (C6273 * C50132) / q + C50038 - C50007 / q;
    const double C4904 = -(C4882 * C50134 + C50010) / q;
    const double C6695 = C50053 - (C6705 * C50132) / q + C50054 - C50010 / q;
    const double C6293 = -(C6273 * C50134 + C50041) / q;
    const double C6715 = -(C6705 * C50133 + C50041) / q;
    const double C7111 = C21411 / q - (C7121 * C50132) / q - C50041 / q;
    const double C5942 = -(C5964 * C50132 + C20126 * p) / q;
    const double C50050 = C21049 * p;
    const double C6333 = -(C6313 * C50134 + C50045) / q;
    const double C6755 = C21337 / q - (C6745 * C50133) / q - C50045 / q;
    const double C7151 = -(C7161 * C50132 + C50045) / q;
    const double C50135 = C50011 / q;
    const double C50014 = C18728 * p;
    const double C5810 = C50029 - (C19779 * C50132) / q - (C19762 * p) / q;
    const double C50024 = C19701 * p;
    const double C5854 = C50029 - (C20111 * C50133) / q - (C20396 * p) / q;
    const double C22150 = C22521 / q - (C22551 * C50132) / q - C50150;
    const double C28878 = C50065 - (C22135 * C50133) / q - C50150;
    const double C22376 = C23251 / q - (C23281 * C50132) / q - C50151;
    const double C29530 = C50065 - (C22361 * C50134) / q - C50151;
    const double C50021 = C18881 * p;
    const double C50022 = C19549 * p;
    const double C19487 = C50088 - (C19503 * C50132) / q - (C22598 * p) / q;
    const double C18576 = C50076 - (C18695 * C50133) / q - (C29250 * p) / q;
    const double C6393 =
        C48474 / C48378 - (C6413 * C50132) / q - (C18466 * p) / q;
    const double C22566 = C50085 - (C22906 * C50132) / q - C50152;
    const double C29234 = C22104 / q - (C22551 * C50133) / q - C50152;
    const double C30196 = C23618 / q - (C24613 * C50133) / q - C50156;
    const double C37060 = C50085 - (C24509 * C50134) / q - C50156;
    const double C30256 = C50079 - (C23090 * C50134) / q - C50157;
    const double C30429 = C50092 - (C23633 * C50133) / q - C50157;
    const double C23296 = C50098 - (C23633 * C50132) / q - C50154;
    const double C31015 = C50070 - (C23959 * C50134) / q - C50154;
    const double C50033 = C19974 * p;
    const double C20337 = C50064 - (C20427 * C50134) / q + C50098 - C50099 / q;
    const double C20653 = -(C20669 * C50133 + C50099) / q;
    const double C23313 = C50101 - (C23753 * C50132) / q - C50155;
    const double C30605 = C22330 / q - (C23281 * C50134) / q - C50155;
    const double C30708 = C50101 - (C24774 * C50133) / q - C50158;
    const double C37222 = C23075 / q - (C24613 * C50134) / q - C50158;
    const double C6373 = C50049 - (C6353 * C50134) / q - C50050 / q;
    const double C6795 = -(C6785 * C50133 + C50050) / q;
    const double C7191 = -(C7201 * C50132 + C50050) / q;
    const double C4926 = C50004 - (C18157 * C50133) / q - C50135;
    const double C6383 = C29733 / C48378 - (C20870 * C50132) / q - C50135;
    const double C50137 = C50014 / q;
    const double C50140 = C50024 / q;
    const double C18758 =
        C18806 / C48378 - (C18789 * C50132) / q + C50079 - (C22150 * p) / q;
    const double C17899 = C50065 - (C18141 * C50133) / q - (C28878 * p) / q;
    const double C19731 =
        C19779 / C48378 - (C19762 * C50132) / q + C50092 - (C22376 * p) / q;
    const double C18020 = C50065 - (C18204 * C50134) / q - (C29530 * p) / q;
    const double C5379 = -(C5390 * C50132 + C50021) / q;
    const double C6323 = C50043 - (C6313 * C50133) / q + C50044 - C50021 / q;
    const double C5412 = -(C5390 * C50134 + C50022) / q;
    const double C7171 = C50056 - (C7161 * C50133) / q + C50063 - C50022 / q;
    const double C50020 = C19487 * p;
    const double C50013 = C18576 * p;
    const double C19243 = C50085 - (C19259 * C50132) / q - (C22566 * p) / q;
    const double C18330 =
        C18157 / C48378 - (C18450 * C50133) / q + C50070 - (C29234 * p) / q;
    const double C20278 =
        C20111 / C48378 - (C20396 * C50133) / q + C50098 - (C30196 * p) / q;
    const double C50086 = C37060 * p;
    const double C50081 = C30256 * p;
    const double C19854 = C50092 - (C20095 * C50133) / q - (C30429 * p) / q;
    const double C20216 = C50098 - (C20232 * C50132) / q - (C23296 * p) / q;
    const double C50072 = C31015 * p;
    const double C5887 = -(C5898 * C50132 + C50033) / q;
    const double C6805 = C50048 - (C6785 * C50134) / q + C50059 - C50033 / q;
    const double C50034 = C20337 * p;
    const double C20456 = C50101 - (C20472 * C50132) / q - (C23313 * p) / q;
    const double C18636 =
        C50074 - (C18728 * C50134) / q + C50076 - (C30605 * p) / q;
    const double C20518 = C50101 - (C20637 * C50133) / q - (C30708 * p) / q;
    const double C50089 = C37222 * p;
    const double C4970 = C50004 - (C18220 * C50134) / q - C50137;
    const double C6835 = C50061 - (C21368 * C50132) / q - C50137;
    const double C5434 = C50019 - (C19197 * C50134) / q - C50140;
    const double C7261 = C50061 - (C21596 * C50133) / q - C50140;
    const double C50018 = C18758 * p;
    const double C4915 = C48008 / q - (C4926 * C50132) / q - (C17899 * p) / q;
    const double C50028 = C19731 * p;
    const double C5368 = -(C5346 * C50134 + C50020) / q;
    const double C7131 = C50053 - (C7121 * C50133) / q - C50020 / q;
    const double C4948 = -(C4926 * C50134 + C50013) / q;
    const double C6735 = C50056 - (C6745 * C50132) / q - C50013 / q;
    const double C5357 = C48123 / q - (C5346 * C50133) / q - (C19243 * p) / q;
    const double C50012 = C18330 * p;
    const double C50032 = C20278 * p;
    const double C50147 = C50086 / q;
    const double C50146 = C50081 / q;
    const double C50031 = C19854 * p;
    const double C50030 = C20216 * p;
    const double C18390 = C50070 - (C18482 * C50134) / q - C50072 / q;
    const double C18712 = -(C18728 * C50133 + C50072) / q;
    const double C5909 = -(C5898 * C50133 + C50034) / q;
    const double C7221 = C50046 - (C7201 * C50134) / q + C50064 - C50034 / q;
    const double C5832 = C48262 / q - (C5810 * C50134) / q - (C20456 * p) / q;
    const double C50016 = C18636 * p;
    const double C5876 = C48295 / q - (C5854 * C50134) / q - (C20518 * p) / q;
    const double C50148 = C50089 / q;
    const double C4959 = C48041 / q - (C4970 * C50132) / q - (C18020 * p) / q;
    const double C50139 = C50018 / q;
    const double C50142 = C50028 / q;
    const double C50136 = C50012 / q;
    const double C50143 = C50032 / q;
    const double C19366 = C50085 - (C19457 * C50134) / q - C50147;
    const double C19685 = C50064 - (C19701 * C50133) / q - C50147;
    const double C19002 = C50079 - (C19182 * C50134) / q - C50146;
    const double C21121 = C21368 / C48378 - (C21137 * C50133) / q - C50146;
    const double C5843 = -(C5854 * C50132 + C50031) / q;
    const double C6765 = C50043 - (C6745 * C50134) / q - C50031 / q;
    const double C5821 = -(C5810 * C50133 + C50030) / q;
    const double C7141 = C50037 - (C7121 * C50134) / q - C50030 / q;
    const double C50015 = C18390 * p;
    const double C6825 =
        C48603 / C48378 - (C6845 * C50132) / q - (C18712 * p) / q;
    const double C50138 = C50016 / q;
    const double C19610 =
        C19197 / C48378 - (C19701 * C50134) / q + C50088 - C50148;
    const double C20411 = C20171 / C48378 - (C20427 * C50133) / q - C50148;
    const double C5335 = C18806 / q - (C5346 * C50132) / q - C50139;
    const double C6283 = C50040 - (C6273 * C50133) / q - C50139;
    const double C5799 = C19779 / q - (C5810 * C50132) / q - C50142;
    const double C6725 = C50040 - (C6705 * C50134) / q - C50142;
    const double C4937 = C18157 / q - (C4926 * C50133) / q - C50136;
    const double C6303 = C50042 - (C6313 * C50132) / q - C50136;
    const double C5865 = C20111 / q - (C5854 * C50133) / q - C50143;
    const double C7181 = C50042 - (C7161 * C50134) / q - C50143;
    const double C5445 = C48189 / q - (C5434 * C50133) / q - (C19366 * p) / q;
    const double C50023 = C19002 * p;
    const double C7241 = -(C7261 * C50132 + C21121 * p) / q;
    const double C4981 = -(C4970 * C50133 + C50015) / q;
    const double C6343 = C50046 - (C6353 * C50132) / q - C50015 / q;
    const double C4992 = C18220 / q - (C4970 * C50134) / q - C50138;
    const double C6775 = C50058 - (C6785 * C50132) / q - C50138;
    const double C50025 = C19610 * p;
    const double C5423 = -(C5434 * C50132 + C50023) / q;
    const double C6363 = C50048 - (C6353 * C50133) / q - C50023 / q;
    const double C50141 = C50025 / q;
    const double C5456 = C19197 / q - (C5434 * C50134) / q - C50141;
    const double C7211 = C50058 - (C7201 * C50133) / q - C50141;
    g[0] = C4871;
    g[1] = C4882;
    g[2] = C4893;
    g[3] = C4904;
    g[4] = C4915;
    g[5] = C4926;
    g[6] = C4937;
    g[7] = C4948;
    g[8] = C4959;
    g[9] = C4970;
    g[10] = C4981;
    g[11] = C4992;
    g[12] = C5003;
    g[13] = C5014;
    g[14] = C5025;
    g[15] = C5036;
    g[16] = C5335;
    g[17] = C5346;
    g[18] = C5357;
    g[19] = C5368;
    g[20] = C5379;
    g[21] = C5390;
    g[22] = C5401;
    g[23] = C5412;
    g[24] = C5423;
    g[25] = C5434;
    g[26] = C5445;
    g[27] = C5456;
    g[28] = C5467;
    g[29] = C5478;
    g[30] = C5489;
    g[31] = C5500;
    g[32] = C5799;
    g[33] = C5810;
    g[34] = C5821;
    g[35] = C5832;
    g[36] = C5843;
    g[37] = C5854;
    g[38] = C5865;
    g[39] = C5876;
    g[40] = C5887;
    g[41] = C5898;
    g[42] = C5909;
    g[43] = C5920;
    g[44] = C5931;
    g[45] = C5942;
    g[46] = C5953;
    g[47] = C5964;
    g[48] = C6263;
    g[49] = C6273;
    g[50] = C6283;
    g[51] = C6293;
    g[52] = C6303;
    g[53] = C6313;
    g[54] = C6323;
    g[55] = C6333;
    g[56] = C6343;
    g[57] = C6353;
    g[58] = C6363;
    g[59] = C6373;
    g[60] = C6383;
    g[61] = C6393;
    g[62] = C6403;
    g[63] = C6413;
    g[64] = C6695;
    g[65] = C6705;
    g[66] = C6715;
    g[67] = C6725;
    g[68] = C6735;
    g[69] = C6745;
    g[70] = C6755;
    g[71] = C6765;
    g[72] = C6775;
    g[73] = C6785;
    g[74] = C6795;
    g[75] = C6805;
    g[76] = C6815;
    g[77] = C6825;
    g[78] = C6835;
    g[79] = C6845;
    g[80] = C7111;
    g[81] = C7121;
    g[82] = C7131;
    g[83] = C7141;
    g[84] = C7151;
    g[85] = C7161;
    g[86] = C7171;
    g[87] = C7181;
    g[88] = C7191;
    g[89] = C7201;
    g[90] = C7211;
    g[91] = C7221;
    g[92] = C7231;
    g[93] = C7241;
    g[94] = C7251;
    g[95] = C7261;
    g[96] = C17773;
    g[97] = C17806;
    g[98] = C17824;
    g[99] = C17899;
    g[100] = C18020;
    g[101] = C18141;
    g[102] = C18157;
    g[103] = C18173;
    g[104] = C18204;
    g[105] = C18220;
    g[106] = C18266;
    g[107] = C18282;
    g[108] = C18330;
    g[109] = C18390;
    g[110] = C18450;
    g[111] = C18466;
    g[112] = C18482;
    g[113] = C18513;
    g[114] = C18529;
    g[115] = C18576;
    g[116] = C18636;
    g[117] = C18695;
    g[118] = C18712;
    g[119] = C18728;
    g[120] = C18758;
    g[121] = C18789;
    g[122] = C18806;
    g[123] = C18881;
    g[124] = C19002;
    g[125] = C19122;
    g[126] = C19137;
    g[127] = C19152;
    g[128] = C19182;
    g[129] = C19197;
    g[130] = C19243;
    g[131] = C19259;
    g[132] = C19306;
    g[133] = C19366;
    g[134] = C19426;
    g[135] = C19441;
    g[136] = C19457;
    g[137] = C19487;
    g[138] = C19503;
    g[139] = C19549;
    g[140] = C19610;
    g[141] = C19669;
    g[142] = C19685;
    g[143] = C19701;
    g[144] = C19731;
    g[145] = C19762;
    g[146] = C19779;
    g[147] = C19854;
    g[148] = C19974;
    g[149] = C20095;
    g[150] = C20111;
    g[151] = C20126;
    g[152] = C20156;
    g[153] = C20171;
    g[154] = C20216;
    g[155] = C20232;
    g[156] = C20278;
    g[157] = C20337;
    g[158] = C20396;
    g[159] = C20411;
    g[160] = C20427;
    g[161] = C20456;
    g[162] = C20472;
    g[163] = C20518;
    g[164] = C20578;
    g[165] = C20637;
    g[166] = C20653;
    g[167] = C20669;
    g[168] = C20712;
    g[169] = C20870;
    g[170] = C20900;
    g[171] = C20929;
    g[172] = C20945;
    g[173] = C20991;
    g[174] = C21049;
    g[175] = C21106;
    g[176] = C21121;
    g[177] = C21137;
    g[178] = C21180;
    g[179] = C21337;
    g[180] = C21368;
    g[181] = C21411;
    g[182] = C21567;
    g[183] = C21596;
    g[184] = C21625;
    g[185] = C21641;
    g[186] = C21656;
    g[187] = C21673;
    g[188] = C21688;
    g[189] = C21703;
    g[190] = C21719;
    g[191] = C21736;
    g[192] = C22104;
    g[193] = C22119;
    g[194] = C22135;
    g[195] = C22150;
    g[196] = C22166;
    g[197] = C22330;
    g[198] = C22345;
    g[199] = C22361;
    g[200] = C22376;
    g[201] = C22521;
    g[202] = C22536;
    g[203] = C22551;
    g[204] = C22566;
    g[205] = C22583;
    g[206] = C22598;
    g[207] = C22891;
    g[208] = C22906;
    g[209] = C22921;
    g[210] = C22938;
    g[211] = C23075;
    g[212] = C23090;
    g[213] = C23105;
    g[214] = C23251;
    g[215] = C23266;
    g[216] = C23281;
    g[217] = C23296;
    g[218] = C23313;
    g[219] = C23330;
    g[220] = C23618;
    g[221] = C23633;
    g[222] = C23648;
    g[223] = C23738;
    g[224] = C23753;
    g[225] = C23768;
    g[226] = C23887;
    g[227] = C23929;
    g[228] = C23944;
    g[229] = C23959;
    g[230] = C24002;
    g[231] = C24045;
    g[232] = C24061;
    g[233] = C24076;
    g[234] = C24092;
    g[235] = C24213;
    g[236] = C24228;
    g[237] = C24317;
    g[238] = C24361;
    g[239] = C24376;
    g[240] = C24479;
    g[241] = C24494;
    g[242] = C24509;
    g[243] = C24524;
    g[244] = C24613;
    g[245] = C24628;
    g[246] = C24672;
    g[247] = C24687;
    g[248] = C24774;
    g[249] = C24789;
    g[250] = C24833;
    g[251] = C24848;
    g[252] = C28789;
    g[253] = C28805;
    g[254] = C28878;
    g[255] = C28894;
    g[256] = C29056;
    g[257] = C29072;
    g[258] = C29234;
    g[259] = C29250;
    g[260] = C29325;
    g[261] = C29456;
    g[262] = C29530;
    g[263] = C29718;
    g[264] = C29733;
    g[265] = C29749;
    g[266] = C29867;
    g[267] = C30002;
    g[268] = C30018;
    g[269] = C30079;
    g[270] = C30196;
    g[271] = C30256;
    g[272] = C30429;
    g[273] = C30445;
    g[274] = C30461;
    g[275] = C30605;
    g[276] = C30708;
    g[277] = C30754;
    g[278] = C30841;
    g[279] = C30902;
    g[280] = C30944;
    g[281] = C31015;
    g[282] = C31058;
    g[283] = C31554;
    g[284] = C31570;
    g[285] = C31658;
    g[286] = C31816;
    g[287] = C31888;
    g[288] = C37044;
    g[289] = C37060;
    g[290] = C37222;
    g[291] = C37729;
    g[292] = C37862;
    g[293] = C38884;
    g[294] = C39984;
    g[295] = C40004;
    g[296] = C40048;
    g[297] = C40107;
    g[298] = C40166;
    g[299] = C40181;
    g[300] = C40197;
    g[301] = C40226;
    g[302] = C40242;
    g[303] = C40257;
    g[304] = C40323;
    g[305] = C40354;
    g[306] = C40441;
    g[307] = C40502;
    g[308] = C40519;
    g[309] = C40534;
    g[310] = C40550;
    g[311] = C40580;
    g[312] = C40611;
    g[313] = C40698;
    g[314] = C40713;
    g[315] = C40728;
    g[316] = C40758;
    g[317] = C40815;
    g[318] = C40874;
    g[319] = C40935;
    g[320] = C40965;
    g[321] = C40995;
    g[322] = C41025;
    g[323] = C41041;
    g[324] = C41057;
    g[325] = C41073;
    g[326] = C41089;
    g[327] = C41176;
    g[328] = C41191;
    g[329] = C41235;
    g[330] = C41252;
    g[331] = C41346;
    g[332] = C41362;
    g[333] = C41392;
    g[334] = C41422;
    g[335] = C41452;
    g[336] = C41482;
    g[337] = C41498;
    g[338] = C41514;
    g[339] = C41643;
    g[340] = C41673;
    g[341] = C41733;
    g[342] = C41749;
    g[343] = C41765;
    g[344] = C41781;
    g[345] = C41883;
    g[346] = C41934;
    g[347] = C41950;
    g[348] = C42011;
    g[349] = C42027;
    g[350] = C42070;
    g[351] = C42086;
    g[352] = C42130;
    g[353] = C42224;
    g[354] = C42240;
    g[355] = C42314;
    g[356] = C42381;
    g[357] = C42425;
    g[358] = C42478;
    g[359] = C42840;
    g[360] = C42929;
    g[361] = C42944;
    g[362] = C42990;
    g[363] = C43381;
    g[364] = C43442;
    g[365] = C43473;
    g[366] = C43786;
    g[367] = C43845;
    g[368] = C44078;
    g[369] = C44194;
    g[370] = C44342;
    g[371] = C44466;
    g[372] = C44656;
    g[373] = C44779;
    g[374] = C44825;
    g[375] = C44856;
    g[376] = C44936;
    g[377] = C45497;
    g[378] = C45903;
    g[379] = C46710;
    g[380] = C46814;
    g[381] = C46968;
    g[382] = C47280;
    g[383] = C47435;
}
