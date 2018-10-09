/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_02(double ae,
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
    const double C188 = ae + be;
    const double C194 = Pi / C188;
    const double C195 = std::sqrt(C194);
    const double C208 = ae * zAB;
    const double C207 = ae * yAB;
    const double C206 = 2. * C188;
    const double C205 = std::pow(C188, 2);
    const double C204 = ae * xAB;
    const double C203 = Pi / C188;
    const double C210 = C195 / C206;
    const double C209 = std::sqrt(C203);
    const double C153 = -(C209 * be * xAB) / C188;
    const double C155 = (C209 * C204) / C188;
    const double C158 = (C195 * std::pow(C204, 2)) / C205 + C210;
    const double C159 = -(C195 * be * yAB) / C188;
    const double C160 = -(C195 * be * zAB) / C188;
    const double C168 = (C195 * std::pow(C207, 2)) / C205 + C210;
    const double C169 = (C195 * C207) / C188;
    const double C175 = (C195 * std::pow(C208, 2)) / C205 + C210;
    const double C176 = (C195 * C208) / C188;
    const double C163 = ae + be;
    const double C162 = ae * xAB;
    const double C161 = ae * C153;
    const double C164 = 2. * C163;
    const double C171 = ae * yAB;
    const double C170 = ae * C159;
    const double C178 = ae * zAB;
    const double C177 = ae * C160;
    const double C220 = C177 * C178;
    const double C219 = C170 * C171;
    const double C218 = 2 * C177;
    const double C217 = 2 * C170;
    const double C216 = ae * C209;
    const double C215 = C161 * C162;
    const double C224 = 2 * C220;
    const double C223 = 2 * C219;
    const double C222 = 2. * C216;
    const double C221 = 2 * C215;
    const double C228 = C224 / C163;
    const double C227 = C223 / C163;
    const double C226 = C222 / C164;
    const double C225 = C221 / C163;
    const double C231 = C228 + C226;
    const double C230 = C227 + C226;
    const double C229 = C225 + C226;
    const double gx000200 =
        ((C229 * C162) / C163 + (2 * C161 + 2 * ae * C155) / C164) *
        std::pow(C209, 2);
    const double gx000020 = 2 * C161 * C168 * C209;
    const double gx000002 = 2 * C161 * C209 * C175;
    const double gx000110 = C229 * C169 * C209;
    const double gx000101 = C229 * C209 * C176;
    const double gx000011 = 2 * C161 * C169 * C176;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx000110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx000011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx000200 - 0.5 * gx000020 + gx000002);
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx000101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx000200 - std::sqrt(0.75) * gx000020);
    const double gy000200 = C158 * C217 * C209;
    const double gy000020 =
        ((C230 * C171) / C163 + (C217 + 2 * ae * C169) / C164) *
        std::pow(C209, 2);
    const double gy000002 = C209 * C217 * C175;
    const double gy000110 = C155 * C230 * C209;
    const double gy000101 = C155 * C217 * C176;
    const double gy000011 = C209 * C230 * C176;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy000110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy000011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy000200 - 0.5 * gy000020 + gy000002);
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy000101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy000200 - std::sqrt(0.75) * gy000020);
    const double gz000200 = C158 * C209 * C218;
    const double gz000020 = C209 * C168 * C218;
    const double gz000002 = std::pow(C209, 2) * ((C231 * C178) / C163 +
                                                 (C218 + 2 * ae * C176) / C164);
    const double gz000110 = C155 * C169 * C218;
    const double gz000101 = C155 * C209 * C231;
    const double gz000011 = C209 * C169 * C231;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz000110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz000011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz000200 - 0.5 * gz000020 + gz000002);
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz000101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz000200 - std::sqrt(0.75) * gz000020);
}

// Automatically generated, do not edit
