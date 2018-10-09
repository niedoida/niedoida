/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ds_CC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_20_33(double ae,
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
    const double C280 = ae + be;
    const double C279 = ae * be;
    const double C278 = xA - xB;
    const double C281 = std::pow(C278, 2);
    const double C282 = C281 * C279;
    const double C283 = C282 / C280;
    const double C284 = -C283;
    const double C285 = std::exp(C284);
    const double C289 = yA - yB;
    const double C290 = std::pow(C289, 2);
    const double C291 = C290 * C279;
    const double C292 = C291 / C280;
    const double C293 = -C292;
    const double C294 = std::exp(C293);
    const double C299 = zA - zB;
    const double C300 = std::pow(C299, 2);
    const double C301 = C300 * C279;
    const double C302 = C301 / C280;
    const double C303 = -C302;
    const double C304 = std::exp(C303);
    const double C320 = C299 * be;
    const double C319 = C289 * be;
    const double C318 = 2 * C280;
    const double C317 = std::pow(C280, 2);
    const double C316 = C278 * be;
    const double C315 = ae + be;
    const double C314 = ae * be;
    const double C325 = C304 * C320;
    const double C324 = C294 * C319;
    const double C323 = std::pow(C318, -2);
    const double C322 = C285 * C316;
    const double C321 = std::pow(C318, -1);
    const double C59 = std::exp(-(std::pow(zA - zB, 2) * C314) / C315);
    const double C60 = std::exp(-(std::pow(yA - yB, 2) * C314) / C315);
    const double C61 = (C285 * std::pow(C316, 2)) / C317 + C285 / C318;
    const double C62 = (-2 * C321 * C322) / C280;
    const double C63 = C323 * C285;
    const double C167 = (C294 * std::pow(C319, 2)) / C317 + C294 / C318;
    const double C168 = (-2 * C321 * C324) / C280;
    const double C169 = C323 * C294;
    const double C200 = (C304 * std::pow(C320, 2)) / C317 + C304 / C318;
    const double C201 = (-2 * C321 * C325) / C280;
    const double C202 = C323 * C304;
    const double C228 = -C324 / C280;
    const double C229 = C321 * C294;
    const double C230 = -C322 / C280;
    const double C231 = C321 * C285;
    const double C252 = -C325 / C280;
    const double C253 = C321 * C304;
    const double C74 = be * zB;
    const double C73 = ae * zA;
    const double C72 = be * yB;
    const double C71 = ae * yA;
    const double C70 = bs[4];
    const double C69 = bs[3];
    const double C68 = bs[1];
    const double C67 = bs[2];
    const double C66 = ae + be;
    const double C65 = be * xB;
    const double C64 = ae * xA;
    const double C78 = C73 + C74;
    const double C77 = C71 + C72;
    const double C76 = 2 * C66;
    const double C75 = C64 + C65;
    const double C85 = C78 / C66;
    const double C84 = C77 / C66;
    const double C83 = std::pow(C76, 4);
    const double C82 = -C76;
    const double C81 = C68 * C76;
    const double C80 = std::pow(C76, 2);
    const double C79 = C75 / C66;
    const double C90 = C85 - zC;
    const double C89 = C84 - yC;
    const double C88 = std::pow(C82, 3);
    const double C87 = C67 * C80;
    const double C86 = C79 - xC;
    const double C103 = std::pow(C90, 2);
    const double C102 = C90 * C89;
    const double C101 = C90 * C86;
    const double C100 = C89 * C90;
    const double C99 = std::pow(C89, 2);
    const double C98 = C89 * C86;
    const double C97 = C66 * C90;
    const double C96 = C86 * C90;
    const double C95 = C66 * C89;
    const double C94 = C86 * C89;
    const double C93 = C69 * C88;
    const double C92 = C66 * C86;
    const double C91 = std::pow(C86, 2);
    const double C117 = C103 * C69;
    const double C116 = C102 * C69;
    const double C115 = C101 * C69;
    const double C114 = C100 * C69;
    const double C113 = C99 * C69;
    const double C112 = C98 * C69;
    const double C111 = C97 * C69;
    const double C110 = C96 * C69;
    const double C109 = C97 * C67;
    const double C108 = C95 * C69;
    const double C107 = C94 * C69;
    const double C106 = C95 * C67;
    const double C105 = C92 * C69;
    const double C104 = C91 * C69;
    const double C131 = C117 * C88;
    const double C130 = C116 * C88;
    const double C129 = C115 * C88;
    const double C128 = C114 * C88;
    const double C127 = C113 * C88;
    const double C126 = C112 * C88;
    const double C125 = C111 * C80;
    const double C124 = C110 * C88;
    const double C123 = C109 * C76;
    const double C122 = C108 * C80;
    const double C121 = C107 * C88;
    const double C120 = C106 * C76;
    const double C119 = C105 * C80;
    const double C118 = C104 * C88;
    const double C141 = C87 + C131;
    const double C140 = C87 + C127;
    const double C139 = -2 * C125;
    const double C138 = 2 * C125;
    const double C137 = 2 * C123;
    const double C136 = -2 * C122;
    const double C135 = 2 * C122;
    const double C134 = 2 * C120;
    const double C133 = 2 * C119;
    const double C132 = C87 + C118;
    const double C144 = C86 * C138;
    const double C143 = C86 * C135;
    const double C142 = C86 * C133;
    const double C145 = C87 - C142;
    const double C175 = C89 * C138;
    const double C174 = C89 * C135;
    const double C173 = -2 * C119;
    const double C172 = C89 * C133;
    const double C171 = C92 * C67;
    const double C177 = C87 - C174;
    const double C176 = C171 * C76;
    const double C178 = 2 * C176;
    const double C205 = C90 * C138;
    const double C204 = C90 * C135;
    const double C203 = C90 * C133;
    const double C206 = C87 - C205;
    const double C377 = C90 * C141;
    const double C376 = 4 * C123;
    const double C375 = C90 * C130;
    const double C374 = C90 * C129;
    const double C373 = C90 * C128;
    const double C372 = C90 * C140;
    const double C371 = C90 * C126;
    const double C370 = C90 * C124;
    const double C369 = C90 * C121;
    const double C368 = C90 * C132;
    const double C367 = C89 * C141;
    const double C366 = C89 * C130;
    const double C365 = C89 * C129;
    const double C364 = C89 * C128;
    const double C363 = C89 * C140;
    const double C362 = 4 * C120;
    const double C361 = C89 * C126;
    const double C360 = C89 * C124;
    const double C359 = C89 * C121;
    const double C358 = C89 * C132;
    const double C357 = C103 * C70;
    const double C356 = C86 * C141;
    const double C355 = C103 * C67;
    const double C354 = C102 * C70;
    const double C353 = C86 * C130;
    const double C352 = C102 * C67;
    const double C351 = C101 * C70;
    const double C350 = C86 * C129;
    const double C349 = C101 * C67;
    const double C348 = C100 * C70;
    const double C347 = C86 * C128;
    const double C346 = C100 * C67;
    const double C345 = C99 * C70;
    const double C344 = C86 * C140;
    const double C343 = C99 * C67;
    const double C342 = C98 * C70;
    const double C341 = C86 * C126;
    const double C340 = C98 * C67;
    const double C339 = C96 * C70;
    const double C338 = C86 * C124;
    const double C337 = C96 * C67;
    const double C336 = C94 * C70;
    const double C335 = C86 * C121;
    const double C334 = C94 * C67;
    const double C333 = C91 * C70;
    const double C332 = C86 * C132;
    const double C331 = 4 * C176;
    const double C330 = C91 * C67;
    const double C422 = C253 * C372;
    const double C421 = C253 * C371;
    const double C420 = C253 * C369;
    const double C419 = C253 * C368;
    const double C418 = C376 + C377;
    const double C417 = C134 + C375;
    const double C416 = C178 + C374;
    const double C415 = C134 + C373;
    const double C414 = C178 + C370;
    const double C413 = C59 * C367;
    const double C412 = C137 + C366;
    const double C411 = C59 * C365;
    const double C410 = C137 + C364;
    const double C409 = C362 + C363;
    const double C408 = C178 + C361;
    const double C407 = C59 * C360;
    const double C406 = C178 + C359;
    const double C405 = C59 * C358;
    const double C404 = C357 * C83;
    const double C403 = C59 * C356;
    const double C402 = C355 * C80;
    const double C401 = C354 * C83;
    const double C400 = C59 * C353;
    const double C399 = C352 * C80;
    const double C398 = C351 * C83;
    const double C397 = C137 + C350;
    const double C396 = C349 * C80;
    const double C395 = C348 * C83;
    const double C394 = C59 * C347;
    const double C393 = C346 * C80;
    const double C392 = C345 * C83;
    const double C391 = C59 * C344;
    const double C390 = C343 * C80;
    const double C389 = C342 * C83;
    const double C388 = C134 + C341;
    const double C387 = C340 * C80;
    const double C386 = C339 * C83;
    const double C385 = C137 + C338;
    const double C384 = C337 * C80;
    const double C383 = C336 * C83;
    const double C382 = C134 + C335;
    const double C381 = C334 * C80;
    const double C380 = C333 * C83;
    const double C379 = C331 + C332;
    const double C378 = C330 * C80;
    const double C464 = C253 * C418;
    const double C463 = C253 * C417;
    const double C462 = C252 * C399;
    const double C461 = C253 * C416;
    const double C460 = C252 * C396;
    const double C459 = C253 * C415;
    const double C458 = C252 * C393;
    const double C457 = C252 * C387;
    const double C456 = C253 * C414;
    const double C455 = C252 * C384;
    const double C454 = C252 * C381;
    const double C453 = C86 * C401;
    const double C452 = C86 * C395;
    const double C451 = C90 * C395;
    const double C450 = C89 * C401;
    const double C449 = C59 * C412;
    const double C448 = C59 * C410;
    const double C447 = C59 * C409;
    const double C446 = C59 * C408;
    const double C445 = C89 * C383;
    const double C444 = C59 * C406;
    const double C443 = C93 + C404;
    const double C442 = C402 - C81;
    const double C441 = C59 * C399;
    const double C440 = C86 * C398;
    const double C439 = C59 * C397;
    const double C438 = C59 * C396;
    const double C437 = C59 * C393;
    const double C436 = C93 + C392;
    const double C435 = C390 - C81;
    const double C434 = C86 * C389;
    const double C433 = C59 * C388;
    const double C432 = C59 * C387;
    const double C431 = C86 * C386;
    const double C430 = C59 * C385;
    const double C429 = C59 * C384;
    const double C428 = C86 * C383;
    const double C427 = C59 * C382;
    const double C426 = C59 * C381;
    const double C425 = C93 + C380;
    const double C424 = C59 * C379;
    const double C423 = C378 - C81;
    const double C486 = C252 * C442;
    const double C485 = C462 + C463;
    const double C484 = C460 + C461;
    const double C483 = C458 + C459;
    const double C482 = C252 * C435;
    const double C481 = C457 + C421;
    const double C480 = C455 + C456;
    const double C479 = C454 + C420;
    const double C478 = C252 * C423;
    const double C477 = C86 * C443;
    const double C476 = C86 * C436;
    const double C475 = C89 * C425;
    const double C474 = C136 + C451;
    const double C473 = C139 + C450;
    const double C472 = C173 + C445;
    const double C471 = C59 * C442;
    const double C470 = C139 + C440;
    const double C469 = C59 * C435;
    const double C468 = C136 + C434;
    const double C467 = C139 + C431;
    const double C466 = C136 + C428;
    const double C465 = C59 * C423;
    const double C489 = C486 + C464;
    const double C488 = C482 + C422;
    const double C487 = C478 + C419;
    const double d2nexx200000 =
        (2 * Pi *
         (C465 * C60 * C61 + C424 * C60 * C62 +
          C59 * (C132 + C145 + C145 + C86 * (-4 * C119 + C86 * C425)) * C60 *
              C63)) /
        C66;
    const double d2nexx020000 =
        (2 * Pi *
         (C465 * C167 + C405 * C168 + C59 * (C132 + C425 * C99) * C169) *
         C285) /
        C66;
    const double d2nexx002000 =
        (2 * Pi * (C200 * C423 + C201 * C368 + C202 * (C132 + C425 * C103)) *
         C60 * C285) /
        C66;
    const double d2nexx110000 =
        (2 * Pi *
         ((C465 * C228 + C405 * C229) * C230 +
          (C424 * C228 + C59 * (-2 * C172 + C86 * C475) * C229) * C231)) /
        C66;
    const double d2nexx101000 =
        (2 * Pi *
         (C487 * C60 * C230 +
          (C252 * C379 + C253 * (-2 * C203 + C86 * C90 * C425)) * C60 * C231)) /
        C66;
    const double d2nexx011000 =
        (2 * Pi * (C487 * C228 + (C252 * C358 + C253 * C90 * C475) * C229) *
         C285) /
        C66;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx110000;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx011000;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexx200000 - 0.5 * d2nexx020000 + d2nexx002000;
    d2nexx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx101000;
    d2nexx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexx200000 - std::sqrt(0.75) * d2nexx020000;
    const double d2nexy200000 =
        (2 * Pi *
         (C426 * C60 * C61 + C427 * C60 * C62 +
          C59 * (C121 - C143 + C86 * C466) * C60 * C63)) /
        C66;
    const double d2nexy020000 =
        (2 * Pi *
         (C426 * C167 + C444 * C168 + C59 * (C121 - C172 + C89 * C472) * C169) *
         C285) /
        C66;
    const double d2nexy002000 =
        (2 * Pi * (C200 * C381 + C201 * C369 + C202 * (C121 + C383 * C103)) *
         C60 * C285) /
        C66;
    const double d2nexy110000 =
        (2 * Pi *
         ((C426 * C228 + C444 * C229) * C230 +
          (C427 * C228 + C59 * (C145 + C89 * C466) * C229) * C231)) /
        C66;
    const double d2nexy101000 =
        (2 * Pi *
         (C479 * C60 * C230 + (C252 * C382 + C253 * C90 * C466) * C60 * C231)) /
        C66;
    const double d2nexy011000 =
        (2 * Pi * (C479 * C228 + (C252 * C406 + C253 * C90 * C472) * C229) *
         C285) /
        C66;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy110000;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy011000;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexy200000 - 0.5 * d2nexy020000 + d2nexy002000;
    d2nexy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy101000;
    d2nexy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexy200000 - std::sqrt(0.75) * d2nexy020000;
    const double d2nexz200000 =
        (2 * Pi *
         (C429 * C60 * C61 + C430 * C60 * C62 +
          C59 * (C124 - C144 + C86 * C467) * C60 * C63)) /
        C66;
    const double d2nexz020000 =
        (2 * Pi *
         (C429 * C167 + C407 * C168 + C59 * (C124 + C386 * C99) * C169) *
         C285) /
        C66;
    const double d2nexz002000 =
        (2 * Pi *
         (C200 * C384 + C201 * C414 +
          C202 * (C124 - C203 + C90 * (C173 + C90 * C386))) *
         C60 * C285) /
        C66;
    const double d2nexz110000 =
        (2 * Pi *
         ((C429 * C228 + C407 * C229) * C230 +
          (C430 * C228 + C59 * C89 * C467 * C229) * C231)) /
        C66;
    const double d2nexz101000 =
        (2 * Pi *
         (C480 * C60 * C230 +
          (C252 * C385 + C253 * (C145 + C90 * C467)) * C60 * C231)) /
        C66;
    const double d2nexz011000 =
        (2 * Pi *
         (C480 * C228 +
          (C252 * C360 + C253 * (C90 * C89 * C386 - C172)) * C229) *
         C285) /
        C66;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz110000;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz011000;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexz200000 - 0.5 * d2nexz020000 + d2nexz002000;
    d2nexz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz101000;
    d2nexz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexz200000 - std::sqrt(0.75) * d2nexz020000;
    const double d2neyx200000 =
        (2 * Pi *
         (C432 * C60 * C61 + C433 * C60 * C62 +
          C59 * (C126 - C143 + C86 * C468) * C60 * C63)) /
        C66;
    const double d2neyx020000 =
        (2 * Pi *
         (C432 * C167 + C446 * C168 +
          C59 * (C126 - C172 + C89 * (C173 + C89 * C389)) * C169) *
         C285) /
        C66;
    const double d2neyx002000 =
        (2 * Pi * (C200 * C387 + C201 * C371 + C202 * (C126 + C389 * C103)) *
         C60 * C285) /
        C66;
    const double d2neyx110000 =
        (2 * Pi *
         ((C432 * C228 + C446 * C229) * C230 +
          (C433 * C228 + C59 * (C145 + C89 * C468) * C229) * C231)) /
        C66;
    const double d2neyx101000 =
        (2 * Pi *
         (C481 * C60 * C230 + (C252 * C388 + C253 * C90 * C468) * C60 * C231)) /
        C66;
    const double d2neyx011000 =
        (2 * Pi *
         (C481 * C228 +
          (C252 * C408 + C253 * (C89 * C90 * C389 - C203)) * C229) *
         C285) /
        C66;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx110000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx011000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyx200000 - 0.5 * d2neyx020000 + d2neyx002000;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx101000;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyx200000 - std::sqrt(0.75) * d2neyx020000;
    const double d2neyy200000 = (2 * Pi *
                                 (C469 * C60 * C61 + C391 * C60 * C62 +
                                  C59 * (C140 + C436 * C91) * C60 * C63)) /
                                C66;
    const double d2neyy020000 =
        (2 * Pi *
         (C469 * C167 + C447 * C168 +
          C59 * (C140 + C177 + C177 + C89 * (-4 * C122 + C89 * C436)) * C169) *
         C285) /
        C66;
    const double d2neyy002000 =
        (2 * Pi * (C200 * C435 + C201 * C372 + C202 * (C140 + C436 * C103)) *
         C60 * C285) /
        C66;
    const double d2neyy110000 =
        (2 * Pi *
         ((C469 * C228 + C447 * C229) * C230 +
          (C391 * C228 + C59 * (-2 * C143 + C89 * C476) * C229) * C231)) /
        C66;
    const double d2neyy101000 =
        (2 * Pi *
         (C488 * C60 * C230 + (C252 * C344 + C253 * C90 * C476) * C60 * C231)) /
        C66;
    const double d2neyy011000 =
        (2 * Pi *
         (C488 * C228 +
          (C252 * C409 + C253 * (-2 * C204 + C89 * C90 * C436)) * C229) *
         C285) /
        C66;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy110000;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy011000;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyy200000 - 0.5 * d2neyy020000 + d2neyy002000;
    d2neyy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy101000;
    d2neyy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyy200000 - std::sqrt(0.75) * d2neyy020000;
    const double d2neyz200000 = (2 * Pi *
                                 (C437 * C60 * C61 + C394 * C60 * C62 +
                                  C59 * (C128 + C395 * C91) * C60 * C63)) /
                                C66;
    const double d2neyz020000 =
        (2 * Pi *
         (C437 * C167 + C448 * C168 +
          C59 * (C128 - C175 + C89 * (C139 + C89 * C395)) * C169) *
         C285) /
        C66;
    const double d2neyz002000 =
        (2 * Pi *
         (C200 * C393 + C201 * C415 + C202 * (C128 - C204 + C90 * C474)) * C60 *
         C285) /
        C66;
    const double d2neyz110000 =
        (2 * Pi *
         ((C437 * C228 + C448 * C229) * C230 +
          (C394 * C228 + C59 * (C89 * C452 - C144) * C229) * C231)) /
        C66;
    const double d2neyz101000 =
        (2 * Pi *
         (C483 * C60 * C230 +
          (C252 * C347 + C253 * (C90 * C452 - C143)) * C60 * C231)) /
        C66;
    const double d2neyz011000 =
        (2 * Pi *
         (C483 * C228 + (C252 * C410 + C253 * (C206 + C89 * C474)) * C229) *
         C285) /
        C66;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz110000;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz011000;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyz200000 - 0.5 * d2neyz020000 + d2neyz002000;
    d2neyz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz101000;
    d2neyz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyz200000 - std::sqrt(0.75) * d2neyz020000;
    const double d2nezx200000 =
        (2 * Pi *
         (C438 * C60 * C61 + C439 * C60 * C62 +
          C59 * (C129 - C144 + C86 * C470) * C60 * C63)) /
        C66;
    const double d2nezx020000 =
        (2 * Pi *
         (C438 * C167 + C411 * C168 + C59 * (C129 + C398 * C99) * C169) *
         C285) /
        C66;
    const double d2nezx002000 =
        (2 * Pi *
         (C200 * C396 + C201 * C416 +
          C202 * (C129 - C203 + C90 * (C173 + C90 * C398))) *
         C60 * C285) /
        C66;
    const double d2nezx110000 =
        (2 * Pi *
         ((C438 * C228 + C411 * C229) * C230 +
          (C439 * C228 + C59 * C89 * C470 * C229) * C231)) /
        C66;
    const double d2nezx101000 =
        (2 * Pi *
         (C484 * C60 * C230 +
          (C252 * C397 + C253 * (C145 + C90 * C470)) * C60 * C231)) /
        C66;
    const double d2nezx011000 =
        (2 * Pi *
         (C484 * C228 +
          (C252 * C365 + C253 * (C90 * C89 * C398 - C172)) * C229) *
         C285) /
        C66;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx110000;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx011000;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezx200000 - 0.5 * d2nezx020000 + d2nezx002000;
    d2nezx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx101000;
    d2nezx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezx200000 - std::sqrt(0.75) * d2nezx020000;
    const double d2nezy200000 = (2 * Pi *
                                 (C441 * C60 * C61 + C400 * C60 * C62 +
                                  C59 * (C130 + C401 * C91) * C60 * C63)) /
                                C66;
    const double d2nezy020000 =
        (2 * Pi *
         (C441 * C167 + C449 * C168 + C59 * (C130 - C175 + C89 * C473) * C169) *
         C285) /
        C66;
    const double d2nezy002000 =
        (2 * Pi *
         (C200 * C399 + C201 * C417 +
          C202 * (C130 - C204 + C90 * (C136 + C90 * C401))) *
         C60 * C285) /
        C66;
    const double d2nezy110000 =
        (2 * Pi *
         ((C441 * C228 + C449 * C229) * C230 +
          (C400 * C228 + C59 * (C89 * C453 - C144) * C229) * C231)) /
        C66;
    const double d2nezy101000 =
        (2 * Pi *
         (C485 * C60 * C230 +
          (C252 * C353 + C253 * (C90 * C453 - C143)) * C60 * C231)) /
        C66;
    const double d2nezy011000 =
        (2 * Pi *
         (C485 * C228 + (C252 * C412 + C253 * (C177 + C90 * C473)) * C229) *
         C285) /
        C66;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy110000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy011000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezy200000 - 0.5 * d2nezy020000 + d2nezy002000;
    d2nezy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy101000;
    d2nezy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezy200000 - std::sqrt(0.75) * d2nezy020000;
    const double d2nezz200000 = (2 * Pi *
                                 (C471 * C60 * C61 + C403 * C60 * C62 +
                                  C59 * (C141 + C443 * C91) * C60 * C63)) /
                                C66;
    const double d2nezz020000 =
        (2 * Pi *
         (C471 * C167 + C413 * C168 + C59 * (C141 + C443 * C99) * C169) *
         C285) /
        C66;
    const double d2nezz002000 =
        (2 * Pi *
         (C200 * C442 + C201 * C418 +
          C202 * (C141 + C206 + C206 + C90 * (-4 * C125 + C90 * C443))) *
         C60 * C285) /
        C66;
    const double d2nezz110000 =
        (2 * Pi *
         ((C471 * C228 + C413 * C229) * C230 +
          (C403 * C228 + C59 * C89 * C477 * C229) * C231)) /
        C66;
    const double d2nezz101000 =
        (2 * Pi *
         (C489 * C60 * C230 +
          (C252 * C356 + C253 * (-2 * C144 + C90 * C477)) * C60 * C231)) /
        C66;
    const double d2nezz011000 =
        (2 * Pi *
         (C489 * C228 +
          (C252 * C367 + C253 * (-2 * C175 + C90 * C89 * C443)) * C229) *
         C285) /
        C66;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz110000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz011000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezz200000 - 0.5 * d2nezz020000 + d2nezz002000;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz101000;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezz200000 - std::sqrt(0.75) * d2nezz020000;
}
