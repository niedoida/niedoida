/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_30(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C16089 = ae + be;
    const double C16091 = Pi / C16089;
    const double C16092 = std::sqrt(C16091);
    const double C16097 = std::pow(C16089, 2);
    const double C16096 = be * xAB;
    const double C16101 = be * yAB;
    const double C16104 = be * zAB;
    const double C16111 = std::pow(C16104, 2);
    const double C16110 = std::pow(C16101, 2);
    const double C16109 = 2. * C16097;
    const double C16108 = 2. * C16089;
    const double C16107 = be * xAB;
    const double C16114 = C16092 * C16111;
    const double C16113 = C16092 * C16110;
    const double C16112 = C16092 / C16108;
    const double C16116 = C16114 / C16097;
    const double C16115 = C16113 / C16097;
    const double C16118 = C16116 + C16112;
    const double C16117 = C16115 + C16112;
    const double C16021 = std::sqrt(Pi / (ae + be));
    const double C16022 = -(std::sqrt(Pi / C16089) * C16107) / C16089;
    const double C16023 =
        (C16092 * std::pow(C16107, 2)) / std::pow(C16089, 2) + C16112;
    const double C16026 =
        (-2. * C16092 * C16096) / C16109 -
        (((C16092 * std::pow(C16096, 2)) / C16097 + C16112) * C16096) / C16089;
    const double C16027 = -(C16092 * be * yAB) / C16089;
    const double C16028 = -(C16092 * be * zAB) / C16089;
    const double C16044 =
        (-2. * C16092 * C16101) / C16109 - (C16117 * C16101) / C16089;
    const double C16059 =
        (-2. * C16092 * C16104) / C16109 - (C16118 * C16104) / C16089;
    const double C16032 = be * xAB;
    const double C16031 = ae * C16022;
    const double C16030 = ae + be;
    const double C16029 = be * C16021;
    const double C16035 = C16031 * C16032;
    const double C16034 = 2. * C16030;
    const double C16033 = 2 * C16029;
    const double C16037 = 2 * C16035;
    const double C16036 = -C16033;
    const double C16039 = C16037 / C16030;
    const double C16038 = C16036 / C16034;
    const double C16040 = C16038 - C16039;
    const double C16048 = be * yAB;
    const double C16047 = ae * C16027;
    const double C16046 = be * C16092;
    const double C16050 = C16047 * C16048;
    const double C16049 = 2 * C16046;
    const double C16052 = 2 * C16050;
    const double C16051 = -C16049;
    const double C16054 = C16052 / C16030;
    const double C16053 = C16051 / C16034;
    const double C16055 = C16053 - C16054;
    const double C16063 = be * zAB;
    const double C16062 = ae * C16028;
    const double C16061 = be * C16092;
    const double C16065 = C16062 * C16063;
    const double C16064 = 2 * C16061;
    const double C16067 = 2 * C16065;
    const double C16066 = -C16064;
    const double C16069 = C16067 / C16030;
    const double C16068 = C16066 / C16034;
    const double C16070 = C16068 - C16069;
    const double C16132 = C16070 * C16063;
    const double C16131 = be * C16028;
    const double C16130 = C16055 * C16048;
    const double C16129 = be * C16027;
    const double C16128 = 2 * C16062;
    const double C16127 = 2 * C16047;
    const double C16126 = C16040 * C16032;
    const double C16125 = be * C16022;
    const double C16124 = 2 * C16031;
    const double C16138 = C16132 / C16030;
    const double C16137 = 2 * C16131;
    const double C16136 = C16130 / C16030;
    const double C16135 = 2 * C16129;
    const double C16134 = C16126 / C16030;
    const double C16133 = 2 * C16125;
    const double C16141 = C16128 - C16137;
    const double C16140 = C16127 - C16135;
    const double C16139 = C16124 - C16133;
    const double C16144 = C16141 / C16034;
    const double C16143 = C16140 / C16034;
    const double C16142 = C16139 / C16034;
    const double C16147 = C16144 - C16138;
    const double C16146 = C16143 - C16136;
    const double C16145 = C16142 - C16134;
    const double gx300000 =
        ((2 * C16040 - 2 * be * C16023) / C16034 - (C16145 * C16032) / C16030) *
        std::pow(C16092, 2);
    const double gx030000 = 2 * C16031 * C16044 * C16092;
    const double gx003000 = 2 * C16031 * C16092 * C16059;
    const double gx210000 = C16145 * C16027 * C16092;
    const double gx201000 = C16145 * C16092 * C16028;
    const double gx021000 = 2 * C16031 * C16117 * C16028;
    const double gx120000 = C16040 * C16117 * C16092;
    const double gx102000 = C16040 * C16092 * C16118;
    const double gx012000 = 2 * C16031 * C16027 * C16118;
    const double gx111000 = C16040 * C16027 * C16028;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210000 - std::sqrt(5.0 / 8.0) * gx030000);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gx111000;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gx012000 + std::sqrt(3.0 / 8.0) * gx210000 +
               std::sqrt(3.0 / 8.0) * gx030000);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gx003000 - 1.5 * gx201000 - 1.5 * gx021000);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gx102000 - (std::sqrt(3.0 / 8.0) * gx120000 +
                                           std::sqrt(3.0 / 8.0) * gx300000));
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gx201000 - std::sqrt(7.5) * gx021000);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300000 + std::sqrt(45.0 / 8.0) * gx120000);
    const double gy300000 = C16026 * C16127 * C16092;
    const double gy030000 =
        C16021 *
        ((2 * C16055 - 2 * be * C16117) / C16034 - (C16146 * C16048) / C16030) *
        C16092;
    const double gy003000 = C16021 * C16127 * C16059;
    const double gy210000 = C16023 * C16055 * C16092;
    const double gy201000 = C16023 * C16127 * C16028;
    const double gy021000 = C16021 * C16146 * C16028;
    const double gy120000 = C16022 * C16146 * C16092;
    const double gy102000 = C16022 * C16127 * C16118;
    const double gy012000 = C16021 * C16055 * C16118;
    const double gy111000 = C16022 * C16055 * C16028;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210000 - std::sqrt(5.0 / 8.0) * gy030000);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gy111000;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gy012000 + std::sqrt(3.0 / 8.0) * gy210000 +
               std::sqrt(3.0 / 8.0) * gy030000);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gy003000 - 1.5 * gy201000 - 1.5 * gy021000);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gy102000 - (std::sqrt(3.0 / 8.0) * gy120000 +
                                           std::sqrt(3.0 / 8.0) * gy300000));
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gy201000 - std::sqrt(7.5) * gy021000);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300000 + std::sqrt(45.0 / 8.0) * gy120000);
    const double gz300000 = C16026 * C16092 * C16128;
    const double gz030000 = C16021 * C16044 * C16128;
    const double gz003000 =
        C16021 * C16092 *
        ((2 * C16070 - 2 * be * C16118) / C16034 - (C16147 * C16063) / C16030);
    const double gz210000 = C16023 * C16027 * C16128;
    const double gz201000 = C16023 * C16092 * C16070;
    const double gz021000 = C16021 * C16117 * C16070;
    const double gz120000 = C16022 * C16117 * C16128;
    const double gz102000 = C16022 * C16092 * C16147;
    const double gz012000 = C16021 * C16027 * C16147;
    const double gz111000 = C16022 * C16027 * C16070;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210000 - std::sqrt(5.0 / 8.0) * gz030000);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gz111000;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gz012000 + std::sqrt(3.0 / 8.0) * gz210000 +
               std::sqrt(3.0 / 8.0) * gz030000);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gz003000 - 1.5 * gz201000 - 1.5 * gz021000);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gz102000 - (std::sqrt(3.0 / 8.0) * gz120000 +
                                           std::sqrt(3.0 / 8.0) * gz300000));
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gz201000 - std::sqrt(7.5) * gz021000);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300000 + std::sqrt(45.0 / 8.0) * gz120000);
}

// Automatically generated, do not edit
