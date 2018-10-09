/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ps_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_10_11(double ae,
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
    const double C351 = ae + be;
    const double C350 = xA - xB;
    const double C359 = yA - yB;
    const double C364 = zA - zB;
    const double C373 = std::pow(C364, 2);
    const double C372 = std::pow(C359, 2);
    const double C371 = 2 * C351;
    const double C370 = ae * be;
    const double C369 = std::pow(C350, 2);
    const double C377 = C373 * C370;
    const double C376 = C372 * C370;
    const double C375 = std::pow(C371, -1);
    const double C374 = C369 * C370;
    const double C380 = C377 / C351;
    const double C379 = C376 / C351;
    const double C378 = C374 / C351;
    const double C383 = -C380;
    const double C382 = -C379;
    const double C381 = -C378;
    const double C386 = std::exp(C383);
    const double C385 = std::exp(C382);
    const double C384 = std::exp(C381);
    const double C59 = -(C384 * C350 * be) / C351;
    const double C63 = C375 * C384;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C370) / C351);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C370) / C351);
    const double C234 = -(C385 * C359 * be) / C351;
    const double C235 = C375 * C385;
    const double C306 = -(C386 * C364 * be) / C351;
    const double C307 = C375 * C386;
    const double C83 = be * zB;
    const double C82 = ae * zA;
    const double C81 = zA - zB;
    const double C80 = be * yB;
    const double C79 = ae * yA;
    const double C78 = yA - yB;
    const double C77 = bs[3];
    const double C76 = 0 * be;
    const double C75 = bs[0];
    const double C74 = ae * be;
    const double C73 = xA - xB;
    const double C72 = 0 * be;
    const double C71 = std::pow(ae, 2);
    const double C70 = bs[1];
    const double C69 = bs[2];
    const double C68 = ae + be;
    const double C67 = be * xB;
    const double C66 = ae * xA;
    const double C94 = C82 + C83;
    const double C93 = C74 * C81;
    const double C92 = C79 + C80;
    const double C91 = C74 * C78;
    const double C90 = C76 / C68;
    const double C89 = 2 * C74;
    const double C88 = C74 * C73;
    const double C87 = C72 / C68;
    const double C86 = std::pow(C68, 2);
    const double C85 = 2 * C68;
    const double C84 = C66 + C67;
    const double C104 = C94 / C68;
    const double C103 = C93 * C64;
    const double C102 = C92 / C68;
    const double C101 = C91 * C65;
    const double C100 = -C85;
    const double C99 = C88 * C384;
    const double C98 = -C87;
    const double C97 = C70 * C85;
    const double C96 = std::pow(C85, 2);
    const double C95 = C84 / C68;
    const double C114 = C104 - zC;
    const double C113 = 2 * C103;
    const double C112 = C102 - yC;
    const double C111 = 2 * C101;
    const double C110 = std::pow(C100, 3);
    const double C109 = C69 * C96;
    const double C108 = C97 * ae;
    const double C107 = 2 * C99;
    const double C106 = C98 / C85;
    const double C105 = C95 - xC;
    const double C134 = std::pow(C114, 2);
    const double C133 = C81 * C113;
    const double C132 = C114 * C112;
    const double C131 = C114 * C105;
    const double C130 = C112 * C114;
    const double C129 = std::pow(C112, 2);
    const double C128 = C78 * C111;
    const double C127 = C112 * C105;
    const double C126 = C75 * C113;
    const double C125 = ae * C114;
    const double C124 = C105 * C114;
    const double C123 = C75 * C111;
    const double C122 = ae * C112;
    const double C121 = C105 * C112;
    const double C120 = -C108;
    const double C119 = C107 / C68;
    const double C118 = C105 * C97;
    const double C117 = ae * C105;
    const double C116 = C73 * C107;
    const double C115 = std::pow(C105, 2);
    const double C155 = C133 / C68;
    const double C154 = C132 * C71;
    const double C153 = C131 * C71;
    const double C152 = C130 * C71;
    const double C151 = C128 / C68;
    const double C150 = C127 * C71;
    const double C149 = C125 * C69;
    const double C148 = C118 * C113;
    const double C147 = C126 / C68;
    const double C146 = C125 * C70;
    const double C145 = C124 * C71;
    const double C144 = C122 * C69;
    const double C143 = C118 * C111;
    const double C142 = C123 / C68;
    const double C141 = C122 * C70;
    const double C140 = C121 * C71;
    const double C139 = C117 * C69;
    const double C138 = C120 / C68;
    const double C137 = -C119;
    const double C136 = C117 * C70;
    const double C135 = C116 / C68;
    const double C169 = C64 - C155;
    const double C168 = C146 * C113;
    const double C167 = C65 - C151;
    const double C166 = C141 * C111;
    const double C165 = C149 * C85;
    const double C164 = C148 / C68;
    const double C163 = 2 * C146;
    const double C162 = C144 * C85;
    const double C161 = C143 / C68;
    const double C160 = 2 * C141;
    const double C159 = C139 * C85;
    const double C158 = C137 / C85;
    const double C157 = 2 * C136;
    const double C156 = C384 - C135;
    const double C184 = C169 * C89;
    const double C183 = 2 * C168;
    const double C182 = C167 * C89;
    const double C181 = 2 * C166;
    const double C180 = C59 * C157;
    const double C179 = C165 * ae;
    const double C178 = -2 * C165;
    const double C177 = C64 * C163;
    const double C176 = C162 * ae;
    const double C175 = -2 * C162;
    const double C174 = C65 * C160;
    const double C173 = -2 * C159;
    const double C172 = C158 - C90;
    const double C171 = C156 * C89;
    const double C170 = C156 * be;
    const double C195 = C183 / C68;
    const double C194 = C181 / C68;
    const double C193 = C172 * C118;
    const double C192 = -2 * C179;
    const double C191 = C105 * C178;
    const double C190 = C177 + C147;
    const double C189 = -2 * C176;
    const double C188 = C105 * C175;
    const double C187 = C174 + C142;
    const double C186 = C105 * C173;
    const double C185 = C170 / C68;
    const double C203 = C191 * C113;
    const double C202 = C188 * C111;
    const double C201 = C192 / C68;
    const double C200 = C64 * C191;
    const double C199 = C189 / C68;
    const double C198 = C65 * C188;
    const double C197 = C138 - C186;
    const double C196 = C106 - C185;
    const double C209 = C63 * C197;
    const double C208 = C196 * C75;
    const double C207 = C164 - C200;
    const double C206 = C161 - C198;
    const double C205 = C172 * C197;
    const double C204 = C196 * C157;
    const double C210 = C208 - C180;
    const double C211 = C210 - C193;
    const double C212 = C211 + C209;
    const double C250 = C75 * C107;
    const double C249 = C384 * C157;
    const double C248 = C112 * C178;
    const double C247 = C112 * C175;
    const double C246 = C234 * C160;
    const double C245 = C159 * ae;
    const double C244 = 0 * be;
    const double C243 = C111 / C68;
    const double C242 = C167 * be;
    const double C241 = 0 * be;
    const double C240 = C112 * C173;
    const double C239 = C112 * C97;
    const double C238 = C136 * C107;
    const double C264 = C248 * C113;
    const double C263 = C384 * C240;
    const double C262 = C239 * C107;
    const double C261 = C250 / C68;
    const double C260 = C64 * C248;
    const double C259 = C239 * C113;
    const double C258 = C138 - C247;
    const double C257 = -2 * C245;
    const double C256 = C244 / C68;
    const double C255 = -C243;
    const double C254 = C242 / C68;
    const double C253 = C241 / C68;
    const double C252 = C240 * C107;
    const double C251 = 2 * C238;
    const double C272 = C262 / C68;
    const double C271 = C249 + C261;
    const double C270 = C259 / C68;
    const double C269 = C235 * C258;
    const double C268 = C257 / C68;
    const double C267 = C255 / C85;
    const double C266 = -C253;
    const double C265 = C251 / C68;
    const double C276 = C272 - C263;
    const double C275 = C270 - C260;
    const double C274 = C267 - C256;
    const double C273 = C266 / C85;
    const double C279 = C274 * C258;
    const double C278 = C274 * C239;
    const double C277 = C273 - C254;
    const double C281 = C277 * C160;
    const double C280 = C277 * C75;
    const double C282 = C280 - C246;
    const double C283 = C282 - C278;
    const double C284 = C283 + C269;
    const double C318 = C114 * C178;
    const double C317 = C306 * C163;
    const double C316 = 0 * be;
    const double C315 = C113 / C68;
    const double C314 = C169 * be;
    const double C313 = 0 * be;
    const double C312 = C114 * C175;
    const double C311 = C114 * C173;
    const double C310 = C114 * C97;
    const double C329 = C312 * C111;
    const double C328 = C384 * C311;
    const double C327 = C310 * C107;
    const double C326 = C138 - C318;
    const double C325 = C316 / C68;
    const double C324 = -C315;
    const double C323 = C314 / C68;
    const double C322 = C313 / C68;
    const double C321 = C65 * C312;
    const double C320 = C310 * C111;
    const double C319 = C311 * C107;
    const double C334 = C327 / C68;
    const double C333 = C307 * C326;
    const double C332 = C324 / C85;
    const double C331 = -C322;
    const double C330 = C320 / C68;
    const double C338 = C334 - C328;
    const double C337 = C332 - C325;
    const double C336 = C331 / C85;
    const double C335 = C330 - C321;
    const double C341 = C337 * C326;
    const double C340 = C337 * C310;
    const double C339 = C336 - C323;
    const double C343 = C339 * C163;
    const double C342 = C339 * C75;
    const double C344 = C342 - C317;
    const double C345 = C344 - C340;
    const double C346 = C345 + C333;
    const double C418 = C146 * C107;
    const double C417 = C141 * C107;
    const double C416 = C75 * C171;
    const double C415 = C134 * C77;
    const double C414 = C134 * C69;
    const double C413 = C75 * C184;
    const double C412 = C77 * C154;
    const double C411 = C69 * C154;
    const double C410 = C146 * C111;
    const double C409 = C77 * C153;
    const double C408 = C69 * C153;
    const double C407 = C77 * C152;
    const double C406 = C69 * C152;
    const double C405 = C141 * C113;
    const double C404 = C129 * C77;
    const double C403 = C129 * C69;
    const double C402 = C75 * C182;
    const double C401 = C77 * C150;
    const double C400 = C69 * C150;
    const double C399 = C77 * C145;
    const double C398 = C69 * C145;
    const double C397 = C136 * C113;
    const double C396 = C77 * C140;
    const double C395 = C69 * C140;
    const double C394 = C136 * C111;
    const double C393 = C115 * C77;
    const double C392 = 2 * C86;
    const double C391 = C115 * C69;
    const double C445 = 2 * C418;
    const double C444 = 2 * C417;
    const double C443 = C416 / C68;
    const double C442 = C415 * C110;
    const double C441 = C414 * C96;
    const double C440 = C413 / C68;
    const double C439 = C110 * C412;
    const double C438 = C96 * C411;
    const double C437 = 2 * C410;
    const double C436 = C110 * C409;
    const double C435 = C96 * C408;
    const double C434 = C110 * C407;
    const double C433 = C96 * C406;
    const double C432 = 2 * C405;
    const double C431 = C404 * C110;
    const double C430 = C403 * C96;
    const double C429 = C402 / C68;
    const double C428 = C110 * C401;
    const double C427 = C96 * C400;
    const double C426 = C110 * C399;
    const double C425 = C96 * C398;
    const double C424 = 2 * C397;
    const double C423 = C110 * C396;
    const double C422 = C96 * C395;
    const double C421 = 2 * C394;
    const double C420 = C393 * C110;
    const double C419 = C391 * C96;
    const double C466 = C384 * C435;
    const double C465 = C445 / C68;
    const double C464 = C384 * C427;
    const double C463 = C444 / C68;
    const double C462 = C265 - C443;
    const double C461 = C109 + C442;
    const double C460 = C441 - C97;
    const double C459 = C195 - C440;
    const double C458 = C65 * C438;
    const double C457 = C437 / C68;
    const double C456 = C64 * C433;
    const double C455 = C432 / C68;
    const double C454 = C109 + C431;
    const double C453 = C430 - C97;
    const double C452 = C194 - C429;
    const double C451 = C64 * C425;
    const double C450 = C424 / C68;
    const double C449 = C65 * C422;
    const double C448 = C421 / C68;
    const double C447 = C109 + C420;
    const double C446 = C419 - C97;
    const double C481 = C466 / C86;
    const double C480 = C464 / C86;
    const double C479 = C462 + C265;
    const double C478 = C461 * C71;
    const double C477 = C460 * C71;
    const double C476 = C459 + C195;
    const double C475 = C458 / C86;
    const double C474 = C456 / C86;
    const double C473 = C454 * C71;
    const double C472 = C453 * C71;
    const double C471 = C452 + C194;
    const double C470 = C451 / C86;
    const double C469 = C449 / C86;
    const double C468 = C447 * C71;
    const double C467 = C446 * C71;
    const double C490 = C465 + C481;
    const double C489 = C463 + C480;
    const double C488 = C384 * C467;
    const double C487 = C64 * C477;
    const double C486 = C457 + C475;
    const double C485 = C455 + C474;
    const double C484 = C65 * C472;
    const double C483 = C450 + C470;
    const double C482 = C448 + C469;
    const double C493 = C488 / C86;
    const double C492 = C487 / C86;
    const double C491 = C484 / C86;
    const double C496 = C479 + C493;
    const double C495 = C476 + C492;
    const double C494 = C471 + C491;
    const double d2nexx100000 =
        (2 * Pi *
         ((C59 * C467) / C86 -
          (C204 + C204 +
           (C75 * ((-4 * C99) / C68 - (C73 * C171) / C68) * be) / C68) +
          (C118 * C171) / C392 + C205 + C205 +
          C63 * ((4 * C245) / C68 + (C105 * C468) / C86)) *
         C64 * C65) /
        C68;
    const double d2nexx010000 =
        (2 * Pi *
         (C496 * C64 * C234 +
          ((C239 * C171 + C252 + C252) / C68 + (C384 * C112 * C468) / C86) *
              C64 * C235)) /
        C68;
    const double d2nexx001000 =
        (2 * Pi *
         (C496 * C306 +
          ((C310 * C171 + C319 + C319) / C68 + (C384 * C114 * C468) / C86) *
              C307) *
         C65) /
        C68;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx100000;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += d2nexx010000;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += d2nexx001000;
    const double d2nexy100000 =
        (2 * Pi *
         (C482 * C59 - C187 * C196 + C206 * C172 +
          (C65 * ((C105 * C423) / C86 - C199) - (C197 * C111) / C68) * C63) *
         C64) /
        C68;
    const double d2nexy010000 =
        (2 * Pi *
         (((C234 * C422) / C86 - C277 * C157 - C274 * C240 +
           C235 * ((C112 * C423) / C86 - C268)) *
              C384 -
          (C284 * C107) / C68) *
         C64) /
        C68;
    const double d2nexy001000 =
        (2 * Pi *
         (((C187 * C107) / C68 + C482 * C384) * C306 +
          (((C311 * C111) / C68 + (C65 * C114 * C423) / C86) * C384 -
           (C335 * C107) / C68) *
              C307)) /
        C68;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy100000;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += d2nexy010000;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += d2nexy001000;
    const double d2nexz100000 =
        (2 * Pi *
         (C483 * C59 - C190 * C196 + C207 * C172 +
          (C64 * ((C105 * C426) / C86 - C201) - (C197 * C113) / C68) * C63) *
         C65) /
        C68;
    const double d2nexz010000 =
        (2 * Pi *
         (((C190 * C107) / C68 + C483 * C384) * C234 +
          (((C240 * C113) / C68 + (C64 * C112 * C426) / C86) * C384 -
           (C275 * C107) / C68) *
              C235)) /
        C68;
    const double d2nexz001000 =
        (2 * Pi *
         (((C306 * C425) / C86 - C339 * C157 - C337 * C311 +
           C307 * ((C114 * C426) / C86 - C268)) *
              C384 -
          (C346 * C107) / C68) *
         C65) /
        C68;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz100000;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += d2nexz010000;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += d2nexz001000;
    const double d2neyx100000 =
        (2 * Pi *
         (((C59 * C427) / C86 - C196 * C160 - C172 * C188 +
           C63 * ((C105 * C428) / C86 - C199)) *
              C65 -
          (C212 * C111) / C68) *
         C64) /
        C68;
    const double d2neyx010000 =
        (2 * Pi *
         (C489 * C234 - C271 * C277 + C276 * C274 +
          (C384 * ((C112 * C428) / C86 - C268) - (C258 * C107) / C68) * C235) *
         C64) /
        C68;
    const double d2neyx001000 =
        (2 * Pi *
         (((C271 * C111) / C68 + C489 * C65) * C306 +
          (((C312 * C107) / C68 + (C384 * C114 * C428) / C86) * C65 -
           (C338 * C111) / C68) *
              C307)) /
        C68;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx100000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += d2neyx010000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += d2neyx001000;
    const double d2neyy100000 =
        (2 * Pi *
         (C494 * C59 +
          ((C118 * C182 + C202 + C202) / C68 + (C65 * C105 * C473) / C86) *
              C63) *
         C64) /
        C68;
    const double d2neyy010000 =
        (2 * Pi *
         ((C234 * C472) / C86 -
          (C281 + C281 +
           (C75 * ((-4 * C101) / C68 - (C78 * C182) / C68) * be) / C68) +
          (C239 * C182) / C392 + C279 + C279 +
          C235 * ((4 * C176) / C68 + (C112 * C473) / C86)) *
         C384 * C64) /
        C68;
    const double d2neyy001000 =
        (2 * Pi *
         (C494 * C384 * C306 +
          ((C310 * C182 + C329 + C329) / C68 + (C65 * C114 * C473) / C86) *
              C384 * C307)) /
        C68;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy100000;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += d2neyy010000;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += d2neyy001000;
    const double d2neyz100000 =
        (2 * Pi *
         (((C190 * C111) / C68 + C485 * C65) * C59 +
          (((C188 * C113) / C68 + (C64 * C105 * C434) / C86) * C65 -
           (C207 * C111) / C68) *
              C63)) /
        C68;
    const double d2neyz010000 =
        (2 * Pi *
         (C485 * C234 - C190 * C277 + C275 * C274 +
          (C64 * ((C112 * C434) / C86 - C201) - (C258 * C113) / C68) * C235) *
         C384) /
        C68;
    const double d2neyz001000 =
        (2 * Pi *
         (((C306 * C433) / C86 - C339 * C160 - C337 * C312 +
           C307 * ((C114 * C434) / C86 - C199)) *
              C65 -
          (C346 * C111) / C68) *
         C384) /
        C68;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz100000;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += d2neyz010000;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += d2neyz001000;
    const double d2nezx100000 =
        (2 * Pi *
         (((C59 * C435) / C86 - C196 * C163 - C172 * C191 +
           C63 * ((C105 * C436) / C86 - C201)) *
              C64 -
          (C212 * C113) / C68) *
         C65) /
        C68;
    const double d2nezx010000 =
        (2 * Pi *
         (((C271 * C113) / C68 + C490 * C64) * C234 +
          (((C248 * C107) / C68 + (C384 * C112 * C436) / C86) * C64 -
           (C276 * C113) / C68) *
              C235)) /
        C68;
    const double d2nezx001000 =
        (2 * Pi *
         (C490 * C306 - C271 * C339 + C338 * C337 +
          (C384 * ((C114 * C436) / C86 - C268) - (C326 * C107) / C68) * C307) *
         C65) /
        C68;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx100000;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += d2nezx010000;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += d2nezx001000;
    const double d2nezy100000 =
        (2 * Pi *
         (((C187 * C113) / C68 + C486 * C64) * C59 +
          (((C191 * C111) / C68 + (C65 * C105 * C439) / C86) * C64 -
           (C206 * C113) / C68) *
              C63)) /
        C68;
    const double d2nezy010000 =
        (2 * Pi *
         (((C234 * C438) / C86 - C277 * C163 - C274 * C248 +
           C235 * ((C112 * C439) / C86 - C201)) *
              C64 -
          (C284 * C113) / C68) *
         C384) /
        C68;
    const double d2nezy001000 =
        (2 * Pi *
         (C486 * C306 - C187 * C339 + C335 * C337 +
          (C65 * ((C114 * C439) / C86 - C199) - (C326 * C111) / C68) * C307) *
         C384) /
        C68;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy100000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += d2nezy010000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += d2nezy001000;
    const double d2nezz100000 =
        (2 * Pi *
         (C495 * C65 * C59 +
          ((C118 * C184 + C203 + C203) / C68 + (C64 * C105 * C478) / C86) *
              C65 * C63)) /
        C68;
    const double d2nezz010000 =
        (2 * Pi *
         (C495 * C234 +
          ((C239 * C184 + C264 + C264) / C68 + (C64 * C112 * C478) / C86) *
              C235) *
         C384) /
        C68;
    const double d2nezz001000 =
        (2 * Pi *
         ((C306 * C477) / C86 -
          (C343 + C343 +
           (C75 * ((-4 * C103) / C68 - (C81 * C184) / C68) * be) / C68) +
          (C310 * C184) / C392 + C341 + C341 +
          C307 * ((4 * C179) / C68 + (C114 * C478) / C86)) *
         C65 * C384) /
        C68;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz100000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += d2nezz010000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += d2nezz001000;
}
