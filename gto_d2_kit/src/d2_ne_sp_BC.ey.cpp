/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sp_BC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_01_23(double ae,
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
    const double C240 = ae + be;
    const double C239 = xA - xB;
    const double C246 = yA - yB;
    const double C251 = zA - zB;
    const double C260 = std::pow(C251, 2);
    const double C259 = std::pow(C246, 2);
    const double C258 = 2 * C240;
    const double C257 = std::pow(C239, 2);
    const double C256 = ae * be;
    const double C264 = C260 * C256;
    const double C263 = C259 * C256;
    const double C262 = std::pow(C258, -1);
    const double C261 = C257 * C256;
    const double C267 = C264 / C240;
    const double C266 = C263 / C240;
    const double C265 = C261 / C240;
    const double C270 = -C267;
    const double C269 = -C266;
    const double C268 = -C265;
    const double C273 = std::exp(C270);
    const double C272 = std::exp(C269);
    const double C271 = std::exp(C268);
    const double C60 = std::exp(-(std::pow(xA - xB, 2) * C256) / (ae + be));
    const double C61 = (C271 * C239 * ae) / C240;
    const double C63 = C262 * C271;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C256) / C240);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C256) / C240);
    const double C173 = (C272 * C246 * ae) / C240;
    const double C174 = C262 * C272;
    const double C214 = (C273 * C251 * ae) / C240;
    const double C215 = C262 * C273;
    const double C81 = zA - zB;
    const double C80 = yA - yB;
    const double C79 = be * zB;
    const double C78 = ae * zA;
    const double C77 = be * yB;
    const double C76 = ae * yA;
    const double C75 = bs[3];
    const double C74 = 0 * ae;
    const double C73 = bs[2];
    const double C72 = bs[1];
    const double C71 = be * xB;
    const double C70 = ae * xA;
    const double C69 = ae * be;
    const double C68 = xA - xB;
    const double C67 = ae + be;
    const double C66 = 0 * be;
    const double C90 = C69 * C81;
    const double C89 = C69 * C80;
    const double C88 = C78 + C79;
    const double C87 = C76 + C77;
    const double C86 = C74 / C67;
    const double C85 = 2 * C67;
    const double C84 = C70 + C71;
    const double C83 = C69 * C68;
    const double C82 = std::pow(C67, 2);
    const double C100 = C90 * C64;
    const double C99 = C89 * C65;
    const double C98 = C88 / C67;
    const double C97 = C87 / C67;
    const double C96 = -C85;
    const double C95 = C72 * C85;
    const double C94 = std::pow(C85, 2);
    const double C93 = C84 / C67;
    const double C92 = C83 * C60;
    const double C91 = 2 * C82;
    const double C110 = 2 * C100;
    const double C109 = 2 * C99;
    const double C108 = C98 - zC;
    const double C107 = C97 - yC;
    const double C106 = std::pow(C96, 3);
    const double C105 = C73 * C94;
    const double C104 = C92 / C82;
    const double C103 = C93 - xC;
    const double C102 = 2 * C92;
    const double C101 = C66 / C91;
    const double C124 = std::pow(C108, 2);
    const double C123 = C108 * C107;
    const double C122 = C108 * C103;
    const double C121 = C107 * C108;
    const double C120 = std::pow(C107, 2);
    const double C119 = C107 * C103;
    const double C118 = C103 * C108;
    const double C117 = C67 * C108;
    const double C116 = C103 * C107;
    const double C115 = C67 * C107;
    const double C114 = C104 - C86;
    const double C113 = std::pow(C103, 2);
    const double C112 = C67 * C103;
    const double C111 = C68 * C102;
    const double C137 = C123 * be;
    const double C136 = C122 * be;
    const double C135 = C121 * be;
    const double C134 = C119 * be;
    const double C133 = C117 * C73;
    const double C132 = C118 * be;
    const double C131 = C117 * C72;
    const double C130 = C115 * C73;
    const double C129 = C116 * be;
    const double C128 = C115 * C72;
    const double C127 = C112 * C73;
    const double C126 = C112 * C72;
    const double C125 = C111 / C67;
    const double C141 = C133 * C85;
    const double C140 = C130 * C85;
    const double C139 = C127 * C85;
    const double C138 = C60 - C125;
    const double C145 = -2 * C141;
    const double C144 = -2 * C140;
    const double C143 = -2 * C139;
    const double C142 = C138 * ae;
    const double C149 = C103 * C145;
    const double C148 = C103 * C144;
    const double C147 = C103 * C143;
    const double C146 = C142 / C67;
    const double C151 = C147 + C95;
    const double C150 = C101 - C146;
    const double C183 = 0 * ae;
    const double C182 = C99 / C82;
    const double C181 = C80 * C109;
    const double C180 = 0 * be;
    const double C179 = C107 * C145;
    const double C178 = C107 * C144;
    const double C177 = C107 * C143;
    const double C187 = C183 / C67;
    const double C186 = C181 / C67;
    const double C185 = C180 / C91;
    const double C184 = C178 + C95;
    const double C189 = C182 - C187;
    const double C188 = C65 - C186;
    const double C190 = C188 * ae;
    const double C191 = C190 / C67;
    const double C192 = C185 - C191;
    const double C224 = 0 * ae;
    const double C223 = C100 / C82;
    const double C222 = C81 * C110;
    const double C221 = 0 * be;
    const double C220 = C108 * C145;
    const double C219 = C108 * C144;
    const double C218 = C108 * C143;
    const double C228 = C224 / C67;
    const double C227 = C222 / C67;
    const double C226 = C221 / C91;
    const double C225 = C220 + C95;
    const double C230 = C223 - C228;
    const double C229 = C64 - C227;
    const double C231 = C229 * ae;
    const double C232 = C231 / C67;
    const double C233 = C226 - C232;
    const double C313 = C131 * C102;
    const double C312 = C128 * C102;
    const double C311 = C126 * C102;
    const double C310 = C124 * C75;
    const double C309 = C124 * C73;
    const double C308 = C131 * C110;
    const double C307 = C75 * C137;
    const double C306 = C73 * C137;
    const double C305 = C128 * C110;
    const double C304 = C75 * C136;
    const double C303 = be * C108;
    const double C302 = C73 * C136;
    const double C301 = C126 * C110;
    const double C300 = C75 * C135;
    const double C299 = C73 * C135;
    const double C298 = C131 * C109;
    const double C297 = C120 * C75;
    const double C296 = C120 * C73;
    const double C295 = C128 * C109;
    const double C294 = C75 * C134;
    const double C293 = be * C107;
    const double C292 = C73 * C134;
    const double C291 = C126 * C109;
    const double C290 = C75 * C132;
    const double C289 = C141 * be;
    const double C288 = C73 * C132;
    const double C287 = 2 * C131;
    const double C286 = C75 * C129;
    const double C285 = C140 * be;
    const double C284 = C73 * C129;
    const double C283 = 2 * C128;
    const double C282 = C113 * C75;
    const double C281 = be * C103;
    const double C280 = C139 * be;
    const double C279 = C113 * C73;
    const double C278 = 2 * C126;
    const double C346 = 2 * C313;
    const double C345 = 2 * C312;
    const double C344 = 2 * C311;
    const double C343 = C310 * C106;
    const double C342 = C309 * C94;
    const double C341 = 2 * C308;
    const double C340 = C106 * C307;
    const double C339 = C94 * C306;
    const double C338 = 2 * C305;
    const double C337 = C106 * C304;
    const double C336 = C303 * C73;
    const double C335 = C94 * C302;
    const double C334 = 2 * C301;
    const double C333 = C106 * C300;
    const double C332 = C94 * C299;
    const double C331 = 2 * C298;
    const double C330 = C297 * C106;
    const double C329 = C296 * C94;
    const double C328 = 2 * C295;
    const double C327 = C106 * C294;
    const double C326 = C293 * C73;
    const double C325 = C94 * C292;
    const double C324 = 2 * C291;
    const double C323 = C106 * C290;
    const double C322 = -2 * C289;
    const double C321 = C94 * C288;
    const double C320 = C106 * C286;
    const double C319 = -2 * C285;
    const double C318 = C94 * C284;
    const double C317 = C282 * C106;
    const double C316 = C281 * C73;
    const double C315 = -2 * C280;
    const double C314 = C279 * C94;
    const double C373 = C60 * C321;
    const double C372 = C346 / C67;
    const double C371 = C60 * C318;
    const double C370 = C345 / C67;
    const double C369 = C344 / C67;
    const double C368 = C105 + C343;
    const double C367 = C342 - C95;
    const double C366 = C341 / C67;
    const double C365 = C64 * C339;
    const double C364 = C338 / C67;
    const double C363 = C336 * C85;
    const double C362 = C64 * C335;
    const double C361 = C334 / C67;
    const double C360 = C65 * C332;
    const double C359 = C331 / C67;
    const double C358 = C105 + C330;
    const double C357 = C329 - C95;
    const double C356 = C328 / C67;
    const double C355 = C326 * C85;
    const double C354 = C65 * C325;
    const double C353 = C324 / C67;
    const double C352 = C322 / C67;
    const double C351 = C319 / C67;
    const double C350 = C105 + C317;
    const double C349 = C316 * C85;
    const double C348 = C315 / C67;
    const double C347 = C314 - C95;
    const double C388 = C373 / C67;
    const double C387 = -2 * C349;
    const double C386 = C371 / C67;
    const double C385 = C368 * be;
    const double C384 = C367 * be;
    const double C383 = C365 / C67;
    const double C382 = -2 * C363;
    const double C381 = C362 / C67;
    const double C380 = C360 / C67;
    const double C379 = C358 * be;
    const double C378 = C357 * be;
    const double C377 = -2 * C355;
    const double C376 = C354 / C67;
    const double C375 = C350 * be;
    const double C374 = C347 * be;
    const double C397 = C372 - C388;
    const double C396 = C370 - C386;
    const double C395 = C60 * C374;
    const double C394 = C64 * C384;
    const double C393 = C364 - C383;
    const double C392 = C361 - C381;
    const double C391 = C359 - C380;
    const double C390 = C65 * C378;
    const double C389 = C353 - C376;
    const double C400 = C395 / C67;
    const double C399 = C394 / C67;
    const double C398 = C390 / C67;
    const double C403 = C369 - C400;
    const double C402 = C366 - C399;
    const double C401 = C356 - C398;
    const double d2nexx000100 =
        (2 * Pi *
         (C150 * C278 - (C61 * C374) / C67 + C114 * C151 +
          C63 * (C348 - 2 * C349 - (C103 * C375) / C67)) *
         C64 * C65) /
        C67;
    const double d2nexx000010 =
        (2 * Pi *
         (C403 * C64 * C173 +
          ((C177 * C102) / C67 - (C60 * C107 * C375) / C67) * C64 * C174)) /
        C67;
    const double d2nexx000001 =
        (2 * Pi *
         (C403 * C214 +
          ((C218 * C102) / C67 - (C60 * C108 * C375) / C67) * C215) *
         C65) /
        C67;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx000010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx000001;
    const double d2nexy000100 =
        (2 * Pi *
         (C150 * C283 - (C61 * C318) / C67 + C114 * C148 +
          C63 * (C351 - (C103 * C320) / C67)) *
         C64 * C65) /
        C67;
    const double d2nexy000010 =
        (2 * Pi *
         (C396 * C64 * C173 +
          ((C184 * C102) / C67 + C60 * (C387 - (C107 * C320) / C67)) * C64 *
              C174)) /
        C67;
    const double d2nexy000001 =
        (2 * Pi *
         (C396 * C214 +
          ((C219 * C102) / C67 - (C60 * C108 * C320) / C67) * C215) *
         C65) /
        C67;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy000010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy000001;
    const double d2nexz000100 =
        (2 * Pi *
         (C150 * C287 - (C61 * C321) / C67 + C114 * C149 +
          C63 * (C352 - (C103 * C323) / C67)) *
         C64 * C65) /
        C67;
    const double d2nexz000010 =
        (2 * Pi *
         (C397 * C64 * C173 +
          ((C179 * C102) / C67 - (C60 * C107 * C323) / C67) * C64 * C174)) /
        C67;
    const double d2nexz000001 =
        (2 * Pi *
         (C397 * C214 +
          ((C225 * C102) / C67 + C60 * (C387 - (C108 * C323) / C67)) * C215) *
         C65) /
        C67;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz000010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz000001;
    const double d2neyx000100 =
        (2 * Pi *
         (C389 * C61 +
          ((C151 * C109) / C67 + C65 * (C377 - (C103 * C327) / C67)) * C63) *
         C64) /
        C67;
    const double d2neyx000010 =
        (2 * Pi *
         (C192 * C278 - (C173 * C325) / C67 + C189 * C177 +
          C174 * (C348 - (C107 * C327) / C67)) *
         C60 * C64) /
        C67;
    const double d2neyx000001 =
        (2 * Pi *
         (C389 * C60 * C214 +
          ((C218 * C109) / C67 - (C65 * C108 * C327) / C67) * C60 * C215)) /
        C67;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx000010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx000001;
    const double d2neyy000100 =
        (2 * Pi *
         (C401 * C61 +
          ((C148 * C109) / C67 - (C65 * C103 * C379) / C67) * C63) *
         C64) /
        C67;
    const double d2neyy000010 =
        (2 * Pi *
         (C192 * C283 - (C173 * C378) / C67 + C189 * C184 +
          C174 * (C351 - 2 * C355 - (C107 * C379) / C67)) *
         C60 * C64) /
        C67;
    const double d2neyy000001 =
        (2 * Pi *
         (C401 * C60 * C214 +
          ((C219 * C109) / C67 - (C65 * C108 * C379) / C67) * C60 * C215)) /
        C67;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy000010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy000001;
    const double d2neyz000100 =
        (2 * Pi *
         (C391 * C61 +
          ((C149 * C109) / C67 - (C65 * C103 * C333) / C67) * C63) *
         C64) /
        C67;
    const double d2neyz000010 =
        (2 * Pi *
         (C192 * C287 - (C173 * C332) / C67 + C189 * C179 +
          C174 * (C352 - (C107 * C333) / C67)) *
         C60 * C64) /
        C67;
    const double d2neyz000001 =
        (2 * Pi *
         (C391 * C60 * C214 +
          ((C225 * C109) / C67 + C65 * (C377 - (C108 * C333) / C67)) * C60 *
              C215)) /
        C67;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz000010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz000001;
    const double d2nezx000100 =
        (2 * Pi *
         (C392 * C65 * C61 +
          ((C151 * C110) / C67 + C64 * (C382 - (C103 * C337) / C67)) * C65 *
              C63)) /
        C67;
    const double d2nezx000010 =
        (2 * Pi *
         (C392 * C173 +
          ((C177 * C110) / C67 - (C64 * C107 * C337) / C67) * C174) *
         C60) /
        C67;
    const double d2nezx000001 =
        (2 * Pi *
         (C233 * C278 - (C214 * C335) / C67 + C230 * C218 +
          C215 * (C348 - (C108 * C337) / C67)) *
         C65 * C60) /
        C67;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx000010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx000001;
    const double d2nezy000100 =
        (2 * Pi *
         (C393 * C65 * C61 +
          ((C148 * C110) / C67 - (C64 * C103 * C340) / C67) * C65 * C63)) /
        C67;
    const double d2nezy000010 =
        (2 * Pi *
         (C393 * C173 +
          ((C184 * C110) / C67 + C64 * (C382 - (C107 * C340) / C67)) * C174) *
         C60) /
        C67;
    const double d2nezy000001 =
        (2 * Pi *
         (C233 * C283 - (C214 * C339) / C67 + C230 * C219 +
          C215 * (C351 - (C108 * C340) / C67)) *
         C65 * C60) /
        C67;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy000010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy000001;
    const double d2nezz000100 =
        (2 * Pi *
         (C402 * C65 * C61 +
          ((C149 * C110) / C67 - (C64 * C103 * C385) / C67) * C65 * C63)) /
        C67;
    const double d2nezz000010 =
        (2 * Pi *
         (C402 * C173 +
          ((C179 * C110) / C67 - (C64 * C107 * C385) / C67) * C174) *
         C60) /
        C67;
    const double d2nezz000001 =
        (2 * Pi *
         (C233 * C287 - (C214 * C384) / C67 + C230 * C225 +
          C215 * (C352 - 2 * C363 - (C108 * C385) / C67)) *
         C65 * C60) /
        C67;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz000010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz000001;
}
