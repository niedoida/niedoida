/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sp_CC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_01_33(double ae,
                                 double be,
                                 double xA,
                                 double yA,
                                 double zA,
                                 double xB,
                                 double yB,
                                 double zB,
                                 double xC,
                                 double yC,
                                 double zC,
                                 const double* bs,
                                 double* const d2nexx,
                                 double* const d2nexy,
                                 double* const d2nexz,
                                 double* const d2neyx,
                                 double* const d2neyy,
                                 double* const d2neyz,
                                 double* const d2nezx,
                                 double* const d2nezy,
                                 double* const d2nezz,
                                 std::size_t matrix_size,
                                 std::size_t Ai,
                                 std::size_t Bi)
{
    const double C161 = ae + be;
    const double C160 = xA - xB;
    const double C164 = yA - yB;
    const double C168 = zA - zB;
    const double C176 = std::pow(C168, 2);
    const double C175 = std::pow(C164, 2);
    const double C174 = 2 * C161;
    const double C173 = std::pow(C160, 2);
    const double C172 = ae + be;
    const double C171 = ae * be;
    const double C180 = C176 * C171;
    const double C179 = C175 * C171;
    const double C178 = std::pow(C174, -1);
    const double C177 = C173 * C171;
    const double C183 = C180 / C161;
    const double C182 = C179 / C161;
    const double C181 = C177 / C161;
    const double C186 = -C183;
    const double C185 = -C182;
    const double C184 = -C181;
    const double C189 = std::exp(C186);
    const double C188 = std::exp(C185);
    const double C187 = std::exp(C184);
    const double C59 = std::exp(-(std::pow(zA - zB, 2) * C171) / C172);
    const double C60 = std::exp(-(std::pow(yA - yB, 2) * C171) / C172);
    const double C61 = (C187 * C160 * ae) / C161;
    const double C62 = C178 * C187;
    const double C126 = (C188 * C164 * ae) / C161;
    const double C127 = C178 * C188;
    const double C154 = (C189 * C168 * ae) / C161;
    const double C155 = C178 * C189;
    const double C72 = be * zB;
    const double C71 = ae * zA;
    const double C70 = be * yB;
    const double C69 = ae * yA;
    const double C68 = bs[3];
    const double C67 = bs[1];
    const double C66 = bs[2];
    const double C65 = ae + be;
    const double C64 = be * xB;
    const double C63 = ae * xA;
    const double C76 = C71 + C72;
    const double C75 = C69 + C70;
    const double C74 = 2 * C65;
    const double C73 = C63 + C64;
    const double C82 = C76 / C65;
    const double C81 = C75 / C65;
    const double C80 = -C74;
    const double C79 = C67 * C74;
    const double C78 = std::pow(C74, 2);
    const double C77 = C73 / C65;
    const double C87 = C82 - zC;
    const double C86 = C81 - yC;
    const double C85 = std::pow(C80, 3);
    const double C84 = C66 * C78;
    const double C83 = C77 - xC;
    const double C98 = std::pow(C87, 2);
    const double C97 = C87 * C86;
    const double C96 = C87 * C83;
    const double C95 = C86 * C87;
    const double C94 = std::pow(C86, 2);
    const double C93 = C86 * C83;
    const double C92 = C65 * C87;
    const double C91 = C83 * C87;
    const double C90 = C65 * C86;
    const double C89 = C83 * C86;
    const double C88 = std::pow(C83, 2);
    const double C100 = C92 * C66;
    const double C99 = C90 * C66;
    const double C102 = C100 * C74;
    const double C101 = C99 * C74;
    const double C104 = 2 * C102;
    const double C103 = 2 * C101;
    const double C129 = C65 * C83;
    const double C130 = C129 * C66;
    const double C131 = C130 * C74;
    const double C132 = 2 * C131;
    const double C211 = C98 * C68;
    const double C210 = C98 * C66;
    const double C209 = C97 * C68;
    const double C208 = C97 * C66;
    const double C207 = C96 * C68;
    const double C206 = C96 * C66;
    const double C205 = C95 * C68;
    const double C204 = C95 * C66;
    const double C203 = C94 * C68;
    const double C202 = C94 * C66;
    const double C201 = C93 * C68;
    const double C200 = C93 * C66;
    const double C199 = C91 * C68;
    const double C198 = C91 * C66;
    const double C197 = C89 * C68;
    const double C196 = C89 * C66;
    const double C195 = C88 * C68;
    const double C194 = C88 * C66;
    const double C229 = C211 * C85;
    const double C228 = C210 * C78;
    const double C227 = C209 * C85;
    const double C226 = C208 * C78;
    const double C225 = C207 * C85;
    const double C224 = C206 * C78;
    const double C223 = C205 * C85;
    const double C222 = C204 * C78;
    const double C221 = C203 * C85;
    const double C220 = C202 * C78;
    const double C219 = C201 * C85;
    const double C218 = C200 * C78;
    const double C217 = C199 * C85;
    const double C216 = C198 * C78;
    const double C215 = C197 * C85;
    const double C214 = C196 * C78;
    const double C213 = C195 * C85;
    const double C212 = C194 * C78;
    const double C241 = C84 + C229;
    const double C240 = C228 - C79;
    const double C239 = C59 * C226;
    const double C238 = C59 * C224;
    const double C237 = C59 * C222;
    const double C236 = C84 + C221;
    const double C235 = C220 - C79;
    const double C234 = C59 * C218;
    const double C233 = C59 * C216;
    const double C232 = C59 * C214;
    const double C231 = C84 + C213;
    const double C230 = C212 - C79;
    const double C244 = C59 * C240;
    const double C243 = C59 * C235;
    const double C242 = C59 * C230;
    const double d2nexx000100 =
        (2 * Pi *
         (C242 * C60 * C61 + C59 * (4 * C131 + C83 * C231) * C60 * C62)) /
        C65;
    const double d2nexx000010 =
        (2 * Pi * (C242 * C126 + C59 * C86 * C231 * C127) * C187) / C65;
    const double d2nexx000001 =
        (2 * Pi * (C154 * C230 + C155 * C87 * C231) * C60 * C187) / C65;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx000010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx000001;
    const double d2nexy000100 =
        (2 * Pi * (C232 * C60 * C61 + C59 * (C103 + C83 * C215) * C60 * C62)) /
        C65;
    const double d2nexy000010 =
        (2 * Pi * (C232 * C126 + C59 * (C132 + C86 * C215) * C127) * C187) /
        C65;
    const double d2nexy000001 =
        (2 * Pi * (C154 * C214 + C155 * C87 * C215) * C60 * C187) / C65;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy000010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy000001;
    const double d2nexz000100 =
        (2 * Pi * (C233 * C60 * C61 + C59 * (C104 + C83 * C217) * C60 * C62)) /
        C65;
    const double d2nexz000010 =
        (2 * Pi * (C233 * C126 + C59 * C86 * C217 * C127) * C187) / C65;
    const double d2nexz000001 =
        (2 * Pi * (C154 * C216 + C155 * (C132 + C87 * C217)) * C60 * C187) /
        C65;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz000010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz000001;
    const double d2neyx000100 =
        (2 * Pi * (C234 * C60 * C61 + C59 * (C103 + C83 * C219) * C60 * C62)) /
        C65;
    const double d2neyx000010 =
        (2 * Pi * (C234 * C126 + C59 * (C132 + C86 * C219) * C127) * C187) /
        C65;
    const double d2neyx000001 =
        (2 * Pi * (C154 * C218 + C155 * C87 * C219) * C60 * C187) / C65;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx000010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx000001;
    const double d2neyy000100 =
        (2 * Pi * (C243 * C60 * C61 + C59 * C83 * C236 * C60 * C62)) / C65;
    const double d2neyy000010 =
        (2 * Pi * (C243 * C126 + C59 * (4 * C101 + C86 * C236) * C127) * C187) /
        C65;
    const double d2neyy000001 =
        (2 * Pi * (C154 * C235 + C155 * C87 * C236) * C60 * C187) / C65;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy000010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy000001;
    const double d2neyz000100 =
        (2 * Pi * (C237 * C60 * C61 + C59 * C83 * C223 * C60 * C62)) / C65;
    const double d2neyz000010 =
        (2 * Pi * (C237 * C126 + C59 * (C104 + C86 * C223) * C127) * C187) /
        C65;
    const double d2neyz000001 =
        (2 * Pi * (C154 * C222 + C155 * (C103 + C87 * C223)) * C60 * C187) /
        C65;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz000010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz000001;
    const double d2nezx000100 =
        (2 * Pi * (C238 * C60 * C61 + C59 * (C104 + C83 * C225) * C60 * C62)) /
        C65;
    const double d2nezx000010 =
        (2 * Pi * (C238 * C126 + C59 * C86 * C225 * C127) * C187) / C65;
    const double d2nezx000001 =
        (2 * Pi * (C154 * C224 + C155 * (C132 + C87 * C225)) * C60 * C187) /
        C65;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx000010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx000001;
    const double d2nezy000100 =
        (2 * Pi * (C239 * C60 * C61 + C59 * C83 * C227 * C60 * C62)) / C65;
    const double d2nezy000010 =
        (2 * Pi * (C239 * C126 + C59 * (C104 + C86 * C227) * C127) * C187) /
        C65;
    const double d2nezy000001 =
        (2 * Pi * (C154 * C226 + C155 * (C103 + C87 * C227)) * C60 * C187) /
        C65;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy000010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy000001;
    const double d2nezz000100 =
        (2 * Pi * (C244 * C60 * C61 + C59 * C83 * C241 * C60 * C62)) / C65;
    const double d2nezz000010 =
        (2 * Pi * (C244 * C126 + C59 * C86 * C241 * C127) * C187) / C65;
    const double d2nezz000001 =
        (2 * Pi * (C154 * C240 + C155 * (4 * C102 + C87 * C241)) * C60 * C187) /
        C65;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz000010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz000001;
}
