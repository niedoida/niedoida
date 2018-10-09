/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ps_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_10_13(double ae,
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
    const double C250 = ae + be;
    const double C249 = xA - xB;
    const double C256 = yA - yB;
    const double C261 = zA - zB;
    const double C270 = std::pow(C261, 2);
    const double C269 = std::pow(C256, 2);
    const double C268 = 2 * C250;
    const double C267 = std::pow(C249, 2);
    const double C266 = ae * be;
    const double C274 = C270 * C266;
    const double C273 = C269 * C266;
    const double C272 = std::pow(C268, -1);
    const double C271 = C267 * C266;
    const double C277 = C274 / C250;
    const double C276 = C273 / C250;
    const double C275 = C271 / C250;
    const double C280 = -C277;
    const double C279 = -C276;
    const double C278 = -C275;
    const double C283 = std::exp(C280);
    const double C282 = std::exp(C279);
    const double C281 = std::exp(C278);
    const double C60 = std::exp(-(std::pow(xA - xB, 2) * C266) / (ae + be));
    const double C61 = -(C281 * C249 * be) / C250;
    const double C63 = C272 * C281;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C266) / C250);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C266) / C250);
    const double C175 = -(C282 * C256 * be) / C250;
    const double C176 = C272 * C282;
    const double C220 = -(C283 * C261 * be) / C250;
    const double C221 = C272 * C283;
    const double C81 = zA - zB;
    const double C80 = yA - yB;
    const double C79 = be * zB;
    const double C78 = ae * zA;
    const double C77 = be * yB;
    const double C76 = ae * yA;
    const double C75 = bs[3];
    const double C74 = 0 * be;
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
    const double C85 = C70 + C71;
    const double C84 = C69 * C68;
    const double C83 = 2 * C67;
    const double C82 = C66 / C67;
    const double C100 = C90 * C64;
    const double C99 = C89 * C65;
    const double C98 = C88 / C67;
    const double C97 = C87 / C67;
    const double C96 = -C83;
    const double C95 = C72 * C83;
    const double C94 = std::pow(C83, 2);
    const double C93 = C85 / C67;
    const double C92 = C84 * C60;
    const double C91 = -C82;
    const double C109 = 2 * C100;
    const double C108 = 2 * C99;
    const double C107 = C98 - zC;
    const double C106 = C97 - yC;
    const double C105 = std::pow(C96, 3);
    const double C104 = C73 * C94;
    const double C103 = C93 - xC;
    const double C102 = 2 * C92;
    const double C101 = C91 / C83;
    const double C123 = std::pow(C107, 2);
    const double C122 = C107 * C106;
    const double C121 = C107 * C103;
    const double C120 = C106 * C107;
    const double C119 = std::pow(C106, 2);
    const double C118 = C106 * C103;
    const double C117 = C103 * C107;
    const double C116 = C67 * C107;
    const double C115 = C103 * C106;
    const double C114 = C67 * C106;
    const double C113 = C102 / C67;
    const double C112 = std::pow(C103, 2);
    const double C111 = C67 * C103;
    const double C110 = C68 * C102;
    const double C137 = C122 * ae;
    const double C136 = C121 * ae;
    const double C135 = C120 * ae;
    const double C134 = C118 * ae;
    const double C133 = C116 * C73;
    const double C132 = C117 * ae;
    const double C131 = C116 * C72;
    const double C130 = C114 * C73;
    const double C129 = C115 * ae;
    const double C128 = C114 * C72;
    const double C127 = C111 * C73;
    const double C126 = -C113;
    const double C125 = C111 * C72;
    const double C124 = C110 / C67;
    const double C142 = C133 * C83;
    const double C141 = C130 * C83;
    const double C140 = C127 * C83;
    const double C139 = C126 / C83;
    const double C138 = C60 - C124;
    const double C147 = -2 * C142;
    const double C146 = -2 * C141;
    const double C145 = -2 * C140;
    const double C144 = C139 - C86;
    const double C143 = C138 * be;
    const double C151 = C103 * C147;
    const double C150 = C103 * C146;
    const double C149 = C103 * C145;
    const double C148 = C143 / C67;
    const double C153 = C149 + C95;
    const double C152 = C101 - C148;
    const double C185 = 0 * be;
    const double C184 = C108 / C67;
    const double C183 = C80 * C108;
    const double C182 = 0 * be;
    const double C181 = C106 * C147;
    const double C180 = C106 * C146;
    const double C179 = C106 * C145;
    const double C190 = C185 / C67;
    const double C189 = -C184;
    const double C188 = C183 / C67;
    const double C187 = C182 / C67;
    const double C186 = C180 + C95;
    const double C193 = C189 / C83;
    const double C192 = C65 - C188;
    const double C191 = -C187;
    const double C196 = C193 - C190;
    const double C195 = C192 * be;
    const double C194 = C191 / C83;
    const double C197 = C195 / C67;
    const double C198 = C194 - C197;
    const double C230 = 0 * be;
    const double C229 = C109 / C67;
    const double C228 = C81 * C109;
    const double C227 = 0 * be;
    const double C226 = C107 * C147;
    const double C225 = C107 * C146;
    const double C224 = C107 * C145;
    const double C235 = C230 / C67;
    const double C234 = -C229;
    const double C233 = C228 / C67;
    const double C232 = C227 / C67;
    const double C231 = C226 + C95;
    const double C238 = C234 / C83;
    const double C237 = C64 - C233;
    const double C236 = -C232;
    const double C241 = C238 - C235;
    const double C240 = C237 * be;
    const double C239 = C236 / C83;
    const double C242 = C240 / C67;
    const double C243 = C239 - C242;
    const double C323 = C131 * C102;
    const double C322 = C128 * C102;
    const double C321 = C125 * C102;
    const double C320 = C123 * C75;
    const double C319 = C131 * C109;
    const double C318 = C123 * C73;
    const double C317 = C75 * C137;
    const double C316 = C128 * C109;
    const double C315 = C73 * C137;
    const double C314 = C75 * C136;
    const double C313 = ae * C107;
    const double C312 = C125 * C109;
    const double C311 = C73 * C136;
    const double C310 = C75 * C135;
    const double C309 = C131 * C108;
    const double C308 = C73 * C135;
    const double C307 = C119 * C75;
    const double C306 = C128 * C108;
    const double C305 = C119 * C73;
    const double C304 = C75 * C134;
    const double C303 = ae * C106;
    const double C302 = C125 * C108;
    const double C301 = C73 * C134;
    const double C300 = C75 * C132;
    const double C299 = C142 * ae;
    const double C298 = C73 * C132;
    const double C297 = 2 * C131;
    const double C296 = C75 * C129;
    const double C295 = C141 * ae;
    const double C294 = C73 * C129;
    const double C293 = 2 * C128;
    const double C292 = C112 * C75;
    const double C291 = ae * C103;
    const double C290 = C140 * ae;
    const double C289 = C112 * C73;
    const double C288 = 2 * C125;
    const double C356 = 2 * C323;
    const double C355 = 2 * C322;
    const double C354 = 2 * C321;
    const double C353 = C320 * C105;
    const double C352 = 2 * C319;
    const double C351 = C318 * C94;
    const double C350 = C105 * C317;
    const double C349 = 2 * C316;
    const double C348 = C94 * C315;
    const double C347 = C105 * C314;
    const double C346 = C313 * C73;
    const double C345 = 2 * C312;
    const double C344 = C94 * C311;
    const double C343 = C105 * C310;
    const double C342 = 2 * C309;
    const double C341 = C94 * C308;
    const double C340 = C307 * C105;
    const double C339 = 2 * C306;
    const double C338 = C305 * C94;
    const double C337 = C105 * C304;
    const double C336 = C303 * C73;
    const double C335 = 2 * C302;
    const double C334 = C94 * C301;
    const double C333 = C105 * C300;
    const double C332 = -2 * C299;
    const double C331 = C94 * C298;
    const double C330 = C105 * C296;
    const double C329 = -2 * C295;
    const double C328 = C94 * C294;
    const double C327 = C292 * C105;
    const double C326 = C291 * C73;
    const double C325 = -2 * C290;
    const double C324 = C289 * C94;
    const double C383 = C356 / C67;
    const double C382 = C60 * C331;
    const double C381 = C355 / C67;
    const double C380 = C60 * C328;
    const double C379 = C354 / C67;
    const double C378 = C104 + C353;
    const double C377 = C352 / C67;
    const double C376 = C351 - C95;
    const double C375 = C349 / C67;
    const double C374 = C64 * C348;
    const double C373 = C346 * C83;
    const double C372 = C345 / C67;
    const double C371 = C64 * C344;
    const double C370 = C342 / C67;
    const double C369 = C65 * C341;
    const double C368 = C104 + C340;
    const double C367 = C339 / C67;
    const double C366 = C338 - C95;
    const double C365 = C336 * C83;
    const double C364 = C335 / C67;
    const double C363 = C65 * C334;
    const double C362 = C332 / C67;
    const double C361 = C329 / C67;
    const double C360 = C104 + C327;
    const double C359 = C326 * C83;
    const double C358 = C325 / C67;
    const double C357 = C324 - C95;
    const double C398 = -C382;
    const double C397 = -2 * C359;
    const double C396 = -C380;
    const double C395 = C378 * ae;
    const double C394 = C376 * ae;
    const double C393 = -C374;
    const double C392 = -2 * C373;
    const double C391 = -C371;
    const double C390 = -C369;
    const double C389 = C368 * ae;
    const double C388 = C366 * ae;
    const double C387 = -2 * C365;
    const double C386 = -C363;
    const double C385 = C360 * ae;
    const double C384 = C357 * ae;
    const double C407 = C398 / C67;
    const double C406 = C396 / C67;
    const double C405 = C60 * C384;
    const double C404 = C64 * C394;
    const double C403 = C393 / C67;
    const double C402 = C391 / C67;
    const double C401 = C390 / C67;
    const double C400 = C65 * C388;
    const double C399 = C386 / C67;
    const double C416 = C407 - C383;
    const double C415 = C406 - C381;
    const double C414 = -C405;
    const double C413 = -C404;
    const double C412 = C403 - C375;
    const double C411 = C402 - C372;
    const double C410 = C401 - C370;
    const double C409 = -C400;
    const double C408 = C399 - C364;
    const double C419 = C414 / C67;
    const double C418 = C413 / C67;
    const double C417 = C409 / C67;
    const double C422 = C419 - C379;
    const double C421 = C418 - C377;
    const double C420 = C417 - C367;
    const double d2nexx100000 =
        (2 * Pi *
         (C152 * C288 - (C61 * C384) / C67 + C144 * C153 +
          C63 * (C358 - 2 * C359 - (C103 * C385) / C67)) *
         C64 * C65) /
        C67;
    const double d2nexx010000 =
        (2 * Pi *
         (C422 * C64 * C175 +
          ((-C60 * C106 * C385) / C67 - (C179 * C102) / C67) * C64 * C176)) /
        C67;
    const double d2nexx001000 =
        (2 * Pi *
         (C422 * C220 +
          ((-C60 * C107 * C385) / C67 - (C224 * C102) / C67) * C221) *
         C65) /
        C67;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx100000;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += d2nexx010000;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += d2nexx001000;
    const double d2nexy100000 =
        (2 * Pi *
         (C152 * C293 - (C61 * C328) / C67 + C144 * C150 +
          C63 * (C361 - (C103 * C330) / C67)) *
         C64 * C65) /
        C67;
    const double d2nexy010000 =
        (2 * Pi *
         (C415 * C64 * C175 +
          (C60 * (C397 - (C106 * C330) / C67) - (C186 * C102) / C67) * C64 *
              C176)) /
        C67;
    const double d2nexy001000 =
        (2 * Pi *
         (C415 * C220 +
          ((-C60 * C107 * C330) / C67 - (C225 * C102) / C67) * C221) *
         C65) /
        C67;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy100000;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += d2nexy010000;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += d2nexy001000;
    const double d2nexz100000 =
        (2 * Pi *
         (C152 * C297 - (C61 * C331) / C67 + C144 * C151 +
          C63 * (C362 - (C103 * C333) / C67)) *
         C64 * C65) /
        C67;
    const double d2nexz010000 =
        (2 * Pi *
         (C416 * C64 * C175 +
          ((-C60 * C106 * C333) / C67 - (C181 * C102) / C67) * C64 * C176)) /
        C67;
    const double d2nexz001000 =
        (2 * Pi *
         (C416 * C220 +
          (C60 * (C397 - (C107 * C333) / C67) - (C231 * C102) / C67) * C221) *
         C65) /
        C67;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz100000;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += d2nexz010000;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += d2nexz001000;
    const double d2neyx100000 =
        (2 * Pi *
         (C408 * C61 +
          (C65 * (C387 - (C103 * C337) / C67) - (C153 * C108) / C67) * C63) *
         C64) /
        C67;
    const double d2neyx010000 =
        (2 * Pi *
         (C198 * C288 - (C175 * C334) / C67 + C196 * C179 +
          C176 * (C358 - (C106 * C337) / C67)) *
         C60 * C64) /
        C67;
    const double d2neyx001000 =
        (2 * Pi *
         (C408 * C60 * C220 +
          ((-C65 * C107 * C337) / C67 - (C224 * C108) / C67) * C60 * C221)) /
        C67;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx100000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += d2neyx010000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += d2neyx001000;
    const double d2neyy100000 =
        (2 * Pi *
         (C420 * C61 +
          ((-C65 * C103 * C389) / C67 - (C150 * C108) / C67) * C63) *
         C64) /
        C67;
    const double d2neyy010000 =
        (2 * Pi *
         (C198 * C293 - (C175 * C388) / C67 + C196 * C186 +
          C176 * (C361 - 2 * C365 - (C106 * C389) / C67)) *
         C60 * C64) /
        C67;
    const double d2neyy001000 =
        (2 * Pi *
         (C420 * C60 * C220 +
          ((-C65 * C107 * C389) / C67 - (C225 * C108) / C67) * C60 * C221)) /
        C67;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy100000;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += d2neyy010000;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += d2neyy001000;
    const double d2neyz100000 =
        (2 * Pi *
         (C410 * C61 +
          ((-C65 * C103 * C343) / C67 - (C151 * C108) / C67) * C63) *
         C64) /
        C67;
    const double d2neyz010000 =
        (2 * Pi *
         (C198 * C297 - (C175 * C341) / C67 + C196 * C181 +
          C176 * (C362 - (C106 * C343) / C67)) *
         C60 * C64) /
        C67;
    const double d2neyz001000 =
        (2 * Pi *
         (C410 * C60 * C220 +
          (C65 * (C387 - (C107 * C343) / C67) - (C231 * C108) / C67) * C60 *
              C221)) /
        C67;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz100000;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += d2neyz010000;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += d2neyz001000;
    const double d2nezx100000 =
        (2 * Pi *
         (C411 * C65 * C61 +
          (C64 * (C392 - (C103 * C347) / C67) - (C153 * C109) / C67) * C65 *
              C63)) /
        C67;
    const double d2nezx010000 =
        (2 * Pi *
         (C411 * C175 +
          ((-C64 * C106 * C347) / C67 - (C179 * C109) / C67) * C176) *
         C60) /
        C67;
    const double d2nezx001000 =
        (2 * Pi *
         (C243 * C288 - (C220 * C344) / C67 + C241 * C224 +
          C221 * (C358 - (C107 * C347) / C67)) *
         C65 * C60) /
        C67;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx100000;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += d2nezx010000;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += d2nezx001000;
    const double d2nezy100000 =
        (2 * Pi *
         (C412 * C65 * C61 +
          ((-C64 * C103 * C350) / C67 - (C150 * C109) / C67) * C65 * C63)) /
        C67;
    const double d2nezy010000 =
        (2 * Pi *
         (C412 * C175 +
          (C64 * (C392 - (C106 * C350) / C67) - (C186 * C109) / C67) * C176) *
         C60) /
        C67;
    const double d2nezy001000 =
        (2 * Pi *
         (C243 * C293 - (C220 * C348) / C67 + C241 * C225 +
          C221 * (C361 - (C107 * C350) / C67)) *
         C65 * C60) /
        C67;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy100000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += d2nezy010000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += d2nezy001000;
    const double d2nezz100000 =
        (2 * Pi *
         (C421 * C65 * C61 +
          ((-C64 * C103 * C395) / C67 - (C151 * C109) / C67) * C65 * C63)) /
        C67;
    const double d2nezz010000 =
        (2 * Pi *
         (C421 * C175 +
          ((-C64 * C106 * C395) / C67 - (C181 * C109) / C67) * C176) *
         C60) /
        C67;
    const double d2nezz001000 =
        (2 * Pi *
         (C243 * C297 - (C220 * C394) / C67 + C241 * C231 +
          C221 * (C362 - 2 * C373 - (C107 * C395) / C67)) *
         C65 * C60) /
        C67;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz100000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += d2nezz010000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += d2nezz001000;
}
