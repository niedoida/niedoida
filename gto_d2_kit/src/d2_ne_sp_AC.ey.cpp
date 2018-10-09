/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sp_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_01_13(double ae,
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
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C256) / (ae + be));
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
    const double C69 = 0 * be;
    const double C68 = ae + be;
    const double C67 = ae * be;
    const double C66 = xA - xB;
    const double C90 = C67 * C81;
    const double C89 = C67 * C80;
    const double C88 = C78 + C79;
    const double C87 = C76 + C77;
    const double C86 = C74 / C68;
    const double C85 = 2 * C68;
    const double C84 = C70 + C71;
    const double C83 = std::pow(C68, 2);
    const double C82 = C67 * C66;
    const double C100 = C90 * C64;
    const double C99 = C89 * C65;
    const double C98 = C88 / C68;
    const double C97 = C87 / C68;
    const double C96 = -C85;
    const double C95 = C72 * C85;
    const double C94 = std::pow(C85, 2);
    const double C93 = C84 / C68;
    const double C92 = 2 * C83;
    const double C91 = C82 * C59;
    const double C110 = 2 * C100;
    const double C109 = 2 * C99;
    const double C108 = C98 - zC;
    const double C107 = C97 - yC;
    const double C106 = std::pow(C96, 3);
    const double C105 = C73 * C94;
    const double C104 = C91 / C83;
    const double C103 = C93 - xC;
    const double C102 = C69 / C92;
    const double C101 = 2 * C91;
    const double C124 = std::pow(C108, 2);
    const double C123 = C108 * C107;
    const double C122 = C108 * C103;
    const double C121 = C107 * C108;
    const double C120 = std::pow(C107, 2);
    const double C119 = C107 * C103;
    const double C118 = C103 * C108;
    const double C117 = C68 * C108;
    const double C116 = C103 * C107;
    const double C115 = C68 * C107;
    const double C114 = C86 - C104;
    const double C113 = std::pow(C103, 2);
    const double C112 = C68 * C103;
    const double C111 = C66 * C101;
    const double C137 = C123 * ae;
    const double C136 = C122 * ae;
    const double C135 = C121 * ae;
    const double C134 = C119 * ae;
    const double C133 = C117 * C73;
    const double C132 = C118 * ae;
    const double C131 = C117 * C72;
    const double C130 = C115 * C73;
    const double C129 = C116 * ae;
    const double C128 = C115 * C72;
    const double C127 = C112 * C73;
    const double C126 = C112 * C72;
    const double C125 = C111 / C68;
    const double C141 = C133 * C85;
    const double C140 = C130 * C85;
    const double C139 = C127 * C85;
    const double C138 = C59 - C125;
    const double C145 = -2 * C141;
    const double C144 = -2 * C140;
    const double C143 = -2 * C139;
    const double C142 = C138 * ae;
    const double C149 = C103 * C145;
    const double C148 = C103 * C144;
    const double C147 = C103 * C143;
    const double C146 = C142 / C68;
    const double C151 = C147 + C95;
    const double C150 = C146 - C102;
    const double C183 = C99 / C83;
    const double C182 = 0 * ae;
    const double C181 = 0 * be;
    const double C180 = C80 * C109;
    const double C179 = C107 * C145;
    const double C178 = C107 * C144;
    const double C177 = C107 * C143;
    const double C187 = C182 / C68;
    const double C186 = C181 / C92;
    const double C185 = C180 / C68;
    const double C184 = C178 + C95;
    const double C189 = C187 - C183;
    const double C188 = C65 - C185;
    const double C190 = C188 * ae;
    const double C191 = C190 / C68;
    const double C192 = C191 - C186;
    const double C224 = C100 / C83;
    const double C223 = 0 * ae;
    const double C222 = 0 * be;
    const double C221 = C81 * C110;
    const double C220 = C108 * C145;
    const double C219 = C108 * C144;
    const double C218 = C108 * C143;
    const double C228 = C223 / C68;
    const double C227 = C222 / C92;
    const double C226 = C221 / C68;
    const double C225 = C220 + C95;
    const double C230 = C228 - C224;
    const double C229 = C64 - C226;
    const double C231 = C229 * ae;
    const double C232 = C231 / C68;
    const double C233 = C232 - C227;
    const double C313 = C131 * C101;
    const double C312 = C128 * C101;
    const double C311 = C126 * C101;
    const double C310 = C124 * C75;
    const double C309 = C131 * C110;
    const double C308 = C124 * C73;
    const double C307 = C75 * C137;
    const double C306 = C128 * C110;
    const double C305 = C73 * C137;
    const double C304 = C75 * C136;
    const double C303 = ae * C108;
    const double C302 = C126 * C110;
    const double C301 = C73 * C136;
    const double C300 = C75 * C135;
    const double C299 = C131 * C109;
    const double C298 = C73 * C135;
    const double C297 = C120 * C75;
    const double C296 = C128 * C109;
    const double C295 = C120 * C73;
    const double C294 = C75 * C134;
    const double C293 = ae * C107;
    const double C292 = C126 * C109;
    const double C291 = C73 * C134;
    const double C290 = C75 * C132;
    const double C289 = C141 * ae;
    const double C288 = C73 * C132;
    const double C287 = 2 * C131;
    const double C286 = C75 * C129;
    const double C285 = C140 * ae;
    const double C284 = C73 * C129;
    const double C283 = 2 * C128;
    const double C282 = C113 * C75;
    const double C281 = ae * C103;
    const double C280 = C139 * ae;
    const double C279 = C113 * C73;
    const double C278 = 2 * C126;
    const double C346 = 2 * C313;
    const double C345 = 2 * C312;
    const double C344 = 2 * C311;
    const double C343 = C310 * C106;
    const double C342 = 2 * C309;
    const double C341 = C308 * C94;
    const double C340 = C106 * C307;
    const double C339 = 2 * C306;
    const double C338 = C94 * C305;
    const double C337 = C106 * C304;
    const double C336 = C303 * C73;
    const double C335 = 2 * C302;
    const double C334 = C94 * C301;
    const double C333 = C106 * C300;
    const double C332 = 2 * C299;
    const double C331 = C94 * C298;
    const double C330 = C297 * C106;
    const double C329 = 2 * C296;
    const double C328 = C295 * C94;
    const double C327 = C106 * C294;
    const double C326 = C293 * C73;
    const double C325 = 2 * C292;
    const double C324 = C94 * C291;
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
    const double C373 = C346 / C68;
    const double C372 = C59 * C321;
    const double C371 = C345 / C68;
    const double C370 = C59 * C318;
    const double C369 = C344 / C68;
    const double C368 = C105 + C343;
    const double C367 = C342 / C68;
    const double C366 = C341 - C95;
    const double C365 = C339 / C68;
    const double C364 = C64 * C338;
    const double C363 = C336 * C85;
    const double C362 = C335 / C68;
    const double C361 = C64 * C334;
    const double C360 = C332 / C68;
    const double C359 = C65 * C331;
    const double C358 = C105 + C330;
    const double C357 = C329 / C68;
    const double C356 = C328 - C95;
    const double C355 = C326 * C85;
    const double C354 = C325 / C68;
    const double C353 = C65 * C324;
    const double C352 = C322 / C68;
    const double C351 = C319 / C68;
    const double C350 = C105 + C317;
    const double C349 = C316 * C85;
    const double C348 = C315 / C68;
    const double C347 = C314 - C95;
    const double C388 = -C372;
    const double C387 = -2 * C349;
    const double C386 = -C370;
    const double C385 = C368 * ae;
    const double C384 = C366 * ae;
    const double C383 = -C364;
    const double C382 = -2 * C363;
    const double C381 = -C361;
    const double C380 = -C359;
    const double C379 = C358 * ae;
    const double C378 = C356 * ae;
    const double C377 = -2 * C355;
    const double C376 = -C353;
    const double C375 = C350 * ae;
    const double C374 = C347 * ae;
    const double C397 = C388 / C68;
    const double C396 = C386 / C68;
    const double C395 = C59 * C374;
    const double C394 = C64 * C384;
    const double C393 = C383 / C68;
    const double C392 = C381 / C68;
    const double C391 = C380 / C68;
    const double C390 = C65 * C378;
    const double C389 = C376 / C68;
    const double C406 = C397 - C373;
    const double C405 = C396 - C371;
    const double C404 = -C395;
    const double C403 = -C394;
    const double C402 = C393 - C365;
    const double C401 = C392 - C362;
    const double C400 = C391 - C360;
    const double C399 = -C390;
    const double C398 = C389 - C354;
    const double C409 = C404 / C68;
    const double C408 = C403 / C68;
    const double C407 = C399 / C68;
    const double C412 = C409 - C369;
    const double C411 = C408 - C367;
    const double C410 = C407 - C357;
    const double d2nexx000100 =
        (2 * Pi *
         (C150 * C278 - (C61 * C374) / C68 + C114 * C151 +
          C63 * (C348 - 2 * C349 - (C103 * C375) / C68)) *
         C64 * C65) /
        C68;
    const double d2nexx000010 =
        (2 * Pi *
         (C412 * C64 * C173 +
          ((-C59 * C107 * C375) / C68 - (C177 * C101) / C68) * C64 * C174)) /
        C68;
    const double d2nexx000001 =
        (2 * Pi *
         (C412 * C214 +
          ((-C59 * C108 * C375) / C68 - (C218 * C101) / C68) * C215) *
         C65) /
        C68;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx000010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx000001;
    const double d2nexy000100 =
        (2 * Pi *
         (C150 * C283 - (C61 * C318) / C68 + C114 * C148 +
          C63 * (C351 - (C103 * C320) / C68)) *
         C64 * C65) /
        C68;
    const double d2nexy000010 =
        (2 * Pi *
         (C405 * C64 * C173 +
          (C59 * (C387 - (C107 * C320) / C68) - (C184 * C101) / C68) * C64 *
              C174)) /
        C68;
    const double d2nexy000001 =
        (2 * Pi *
         (C405 * C214 +
          ((-C59 * C108 * C320) / C68 - (C219 * C101) / C68) * C215) *
         C65) /
        C68;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy000010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy000001;
    const double d2nexz000100 =
        (2 * Pi *
         (C150 * C287 - (C61 * C321) / C68 + C114 * C149 +
          C63 * (C352 - (C103 * C323) / C68)) *
         C64 * C65) /
        C68;
    const double d2nexz000010 =
        (2 * Pi *
         (C406 * C64 * C173 +
          ((-C59 * C107 * C323) / C68 - (C179 * C101) / C68) * C64 * C174)) /
        C68;
    const double d2nexz000001 =
        (2 * Pi *
         (C406 * C214 +
          (C59 * (C387 - (C108 * C323) / C68) - (C225 * C101) / C68) * C215) *
         C65) /
        C68;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz000010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz000001;
    const double d2neyx000100 =
        (2 * Pi *
         (C398 * C61 +
          (C65 * (C377 - (C103 * C327) / C68) - (C151 * C109) / C68) * C63) *
         C64) /
        C68;
    const double d2neyx000010 =
        (2 * Pi *
         (C192 * C278 - (C173 * C324) / C68 + C189 * C177 +
          C174 * (C348 - (C107 * C327) / C68)) *
         C59 * C64) /
        C68;
    const double d2neyx000001 =
        (2 * Pi *
         (C398 * C59 * C214 +
          ((-C65 * C108 * C327) / C68 - (C218 * C109) / C68) * C59 * C215)) /
        C68;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx000010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx000001;
    const double d2neyy000100 =
        (2 * Pi *
         (C410 * C61 +
          ((-C65 * C103 * C379) / C68 - (C148 * C109) / C68) * C63) *
         C64) /
        C68;
    const double d2neyy000010 =
        (2 * Pi *
         (C192 * C283 - (C173 * C378) / C68 + C189 * C184 +
          C174 * (C351 - 2 * C355 - (C107 * C379) / C68)) *
         C59 * C64) /
        C68;
    const double d2neyy000001 =
        (2 * Pi *
         (C410 * C59 * C214 +
          ((-C65 * C108 * C379) / C68 - (C219 * C109) / C68) * C59 * C215)) /
        C68;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy000010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy000001;
    const double d2neyz000100 =
        (2 * Pi *
         (C400 * C61 +
          ((-C65 * C103 * C333) / C68 - (C149 * C109) / C68) * C63) *
         C64) /
        C68;
    const double d2neyz000010 =
        (2 * Pi *
         (C192 * C287 - (C173 * C331) / C68 + C189 * C179 +
          C174 * (C352 - (C107 * C333) / C68)) *
         C59 * C64) /
        C68;
    const double d2neyz000001 =
        (2 * Pi *
         (C400 * C59 * C214 +
          (C65 * (C377 - (C108 * C333) / C68) - (C225 * C109) / C68) * C59 *
              C215)) /
        C68;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz000010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz000001;
    const double d2nezx000100 =
        (2 * Pi *
         (C401 * C65 * C61 +
          (C64 * (C382 - (C103 * C337) / C68) - (C151 * C110) / C68) * C65 *
              C63)) /
        C68;
    const double d2nezx000010 =
        (2 * Pi *
         (C401 * C173 +
          ((-C64 * C107 * C337) / C68 - (C177 * C110) / C68) * C174) *
         C59) /
        C68;
    const double d2nezx000001 =
        (2 * Pi *
         (C233 * C278 - (C214 * C334) / C68 + C230 * C218 +
          C215 * (C348 - (C108 * C337) / C68)) *
         C65 * C59) /
        C68;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx000010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx000001;
    const double d2nezy000100 =
        (2 * Pi *
         (C402 * C65 * C61 +
          ((-C64 * C103 * C340) / C68 - (C148 * C110) / C68) * C65 * C63)) /
        C68;
    const double d2nezy000010 =
        (2 * Pi *
         (C402 * C173 +
          (C64 * (C382 - (C107 * C340) / C68) - (C184 * C110) / C68) * C174) *
         C59) /
        C68;
    const double d2nezy000001 =
        (2 * Pi *
         (C233 * C283 - (C214 * C338) / C68 + C230 * C219 +
          C215 * (C351 - (C108 * C340) / C68)) *
         C65 * C59) /
        C68;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy000010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy000001;
    const double d2nezz000100 =
        (2 * Pi *
         (C411 * C65 * C61 +
          ((-C64 * C103 * C385) / C68 - (C149 * C110) / C68) * C65 * C63)) /
        C68;
    const double d2nezz000010 =
        (2 * Pi *
         (C411 * C173 +
          ((-C64 * C107 * C385) / C68 - (C179 * C110) / C68) * C174) *
         C59) /
        C68;
    const double d2nezz000001 =
        (2 * Pi *
         (C233 * C287 - (C214 * C384) / C68 + C230 * C225 +
          C215 * (C352 - 2 * C363 - (C108 * C385) / C68)) *
         C65 * C59) /
        C68;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz000010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz000001;
}
