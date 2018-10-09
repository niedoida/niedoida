/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_01(double ae,
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
    const double C244 = ae + be;
    const double C254 = Pi / C244;
    const double C255 = std::sqrt(C254);
    const double C115 = -(C255 * be * xAB) / C244;
    const double C119 = -(C255 * be * yAB) / C244;
    const double C120 = (C255 * ae * xAB) / C244;
    const double C121 = -(C255 * be * zAB) / C244;
    const double C186 = (C255 * ae * yAB) / C244;
    const double C215 = (C255 * ae * zAB) / C244;
    const double C132 = ae * C121;
    const double C131 = ae * C119;
    const double C130 = be * zAB;
    const double C129 = be * xAB;
    const double C128 = be * C255;
    const double C127 = be * yAB;
    const double C126 = std::pow(ae, 2);
    const double C125 = ae * C255;
    const double C124 = ae + be;
    const double C123 = ae * xAB;
    const double C122 = ae * C115;
    const double C144 = 2 * C132;
    const double C143 = 2 * C131;
    const double C142 = std::pow(C124, 2);
    const double C141 = C129 / C124;
    const double C140 = C130 / C124;
    const double C139 = C122 * C129;
    const double C138 = 2 * C128;
    const double C137 = Pi / C124;
    const double C136 = C127 / C124;
    const double C135 = 2. * C124;
    const double C134 = 2. * C125;
    const double C133 = C122 * C123;
    const double C153 = std::pow(C141, 2);
    const double C152 = std::pow(C140, 2);
    const double C151 = 2 * C139;
    const double C150 = -C138;
    const double C149 = std::sqrt(C137);
    const double C148 = 1 / C135;
    const double C147 = std::pow(C136, 2);
    const double C146 = C134 / C135;
    const double C145 = 2 * C133;
    const double C160 = C149 * C123;
    const double C159 = C153 + C148;
    const double C158 = C152 + C148;
    const double C157 = C151 / C124;
    const double C156 = C150 / C135;
    const double C155 = C147 + C148;
    const double C154 = C145 / C124;
    const double C166 = be * C160;
    const double C165 = C126 * C159;
    const double C164 = C126 * C158;
    const double C163 = C156 - C157;
    const double C162 = C126 * C155;
    const double C161 = C154 + C146;
    const double C171 = 2 * C166;
    const double C170 = 2 * C165;
    const double C169 = 2 * C164;
    const double C168 = ae * C163;
    const double C167 = 2 * C162;
    const double C175 = ae * C171;
    const double C174 = ae - C170;
    const double C173 = ae - C169;
    const double C172 = ae - C167;
    const double C179 = C175 / C142;
    const double C178 = C174 * C149;
    const double C177 = C173 * C149;
    const double C176 = C172 * C149;
    const double C180 = C178 * C123;
    const double C181 = C180 / C124;
    const double C182 = C181 + C179;
    const double C190 = C131 * C127;
    const double C189 = be * C255;
    const double C188 = ae * C255;
    const double C187 = ae * yAB;
    const double C196 = 2 * C190;
    const double C195 = 2 * C189;
    const double C194 = 2. * C188;
    const double C193 = C131 * C187;
    const double C192 = C149 * C187;
    const double C191 = C176 * C187;
    const double C202 = C196 / C124;
    const double C201 = -C195;
    const double C200 = C194 / C135;
    const double C199 = 2 * C193;
    const double C198 = be * C192;
    const double C197 = C191 / C124;
    const double C205 = C201 / C135;
    const double C204 = C199 / C124;
    const double C203 = 2 * C198;
    const double C208 = C205 - C202;
    const double C207 = C204 + C200;
    const double C206 = ae * C203;
    const double C210 = ae * C208;
    const double C209 = C206 / C142;
    const double C211 = C197 + C209;
    const double C219 = C132 * C130;
    const double C218 = be * C255;
    const double C217 = ae * C255;
    const double C216 = ae * zAB;
    const double C225 = 2 * C219;
    const double C224 = 2 * C218;
    const double C223 = 2. * C217;
    const double C222 = C132 * C216;
    const double C221 = C149 * C216;
    const double C220 = C177 * C216;
    const double C231 = C225 / C124;
    const double C230 = -C224;
    const double C229 = C223 / C135;
    const double C228 = 2 * C222;
    const double C227 = be * C221;
    const double C226 = C220 / C124;
    const double C234 = C230 / C135;
    const double C233 = C228 / C124;
    const double C232 = 2 * C227;
    const double C237 = C234 - C231;
    const double C236 = C233 + C229;
    const double C235 = ae * C232;
    const double C239 = ae * C237;
    const double C238 = C235 / C142;
    const double C240 = C226 + C238;
    const double C265 = C210 * C127;
    const double C264 = C156 - C231;
    const double C263 = be * C144;
    const double C262 = be * C143;
    const double C261 = C168 * C129;
    const double C260 = 2 * C122;
    const double C271 = 2 * C265;
    const double C270 = ae * C264;
    const double C269 = 4 * C263;
    const double C268 = 4 * C262;
    const double C267 = 2 * C261;
    const double C266 = be * C260;
    const double C277 = C271 / C124;
    const double C276 = C270 * C130;
    const double C275 = -C269;
    const double C274 = -C268;
    const double C273 = C267 / C124;
    const double C272 = 4 * C266;
    const double C281 = 2 * C276;
    const double C280 = C275 / C135;
    const double C279 = C274 / C135;
    const double C278 = -C272;
    const double C284 = C279 - C277;
    const double C283 = C281 / C124;
    const double C282 = C278 / C135;
    const double C287 = ae * C284;
    const double C286 = C280 - C283;
    const double C285 = C282 - C273;
    const double C289 = ae * C286;
    const double C288 = ae * C285;
    const double C291 = -2 * C288;
    const double C290 = -2 * C289;
    const double gx000100 =
        C161 * C176 * C255 -
        (((2 * C288 * C123) / C124 + (6. * ae * 2 * C168) / C135) *
         std::pow(C255, 2)) /
            2.0 +
        C161 * C255 * C177;
    const double gx000010 = (C255 * C186 * C291) / 2.0 +
                            2 * C122 * C211 * C255 + 2 * C122 * C186 * C177;
    const double gx000001 = (C215 * C255 * C291) / 2.0 +
                            2 * C122 * C176 * C215 + 2 * C122 * C255 * C240;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx000100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * gx000010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc * gx000001;
    const double gy000100 = C182 * C143 * C255 +
                            (C255 * C120 * -2 * ae *
                             (C279 - (2 * ae * (C156 - C202) * C127) / C124)) /
                                2.0 +
                            C120 * C143 * C177;
    const double gy000010 =
        C178 * C207 * C255 -
        (((2 * C287 * C187) / C124 + (6. * ae * 2 * C210) / C135) *
         std::pow(C255, 2)) /
            2.0 +
        C255 * C207 * C177;
    const double gy000001 = C178 * C143 * C215 +
                            (C215 * C255 * -2 * C287) / 2.0 +
                            C255 * C143 * C240;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy000100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * gy000010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc * gy000001;
    const double gz000100 =
        C182 * C255 * C144 + C120 * C176 * C144 + (C120 * C255 * C290) / 2.0;
    const double gz000010 =
        C178 * C186 * C144 + C255 * C211 * C144 + (C255 * C186 * C290) / 2.0;
    const double gz000001 =
        C178 * C255 * C236 + C255 * C176 * C236 -
        (std::pow(C255, 2) *
         ((2 * ae * (C280 - (2 * C239 * C130) / C124) * C216) / C124 +
          (6. * ae * 2 * C239) / C135)) /
            2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz000100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * gz000010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc * gz000001;
}

// Automatically generated, do not edit
