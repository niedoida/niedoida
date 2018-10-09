/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ps_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_10_12(double ae,
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
    const double C364 = ae + be;
    const double C363 = xA - xB;
    const double C370 = yA - yB;
    const double C375 = zA - zB;
    const double C384 = std::pow(C375, 2);
    const double C383 = std::pow(C370, 2);
    const double C382 = 2 * C364;
    const double C381 = std::pow(C363, 2);
    const double C380 = ae * be;
    const double C388 = C384 * C380;
    const double C387 = C383 * C380;
    const double C386 = std::pow(C382, -1);
    const double C385 = C381 * C380;
    const double C391 = C388 / C364;
    const double C390 = C387 / C364;
    const double C389 = C385 / C364;
    const double C394 = -C391;
    const double C393 = -C390;
    const double C392 = -C389;
    const double C397 = std::exp(C394);
    const double C396 = std::exp(C393);
    const double C395 = std::exp(C392);
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C380) / (ae + be));
    const double C61 = -(C395 * C363 * be) / C364;
    const double C63 = C386 * C395;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C380) / C364);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C380) / C364);
    const double C247 = -(C396 * C370 * be) / C364;
    const double C248 = C386 * C396;
    const double C315 = -(C397 * C375 * be) / C364;
    const double C316 = C386 * C397;
    const double C82 = be * zB;
    const double C81 = ae * zA;
    const double C80 = zA - zB;
    const double C79 = be * yB;
    const double C78 = ae * yA;
    const double C77 = yA - yB;
    const double C76 = bs[3];
    const double C75 = 0 * be;
    const double C74 = bs[2];
    const double C73 = bs[1];
    const double C72 = be * xB;
    const double C71 = ae * xA;
    const double C70 = 0 * be;
    const double C69 = ae + be;
    const double C68 = xA - xB;
    const double C67 = ae * be;
    const double C66 = bs[0];
    const double C93 = C81 + C82;
    const double C92 = C67 * C80;
    const double C91 = C78 + C79;
    const double C90 = C67 * C77;
    const double C89 = C75 / C69;
    const double C88 = std::pow(C69, 2);
    const double C87 = C71 + C72;
    const double C86 = 2 * C69;
    const double C85 = C70 / C69;
    const double C84 = 2 * C67;
    const double C83 = C67 * C68;
    const double C103 = C93 / C69;
    const double C102 = C92 * C64;
    const double C101 = C91 / C69;
    const double C100 = C90 * C65;
    const double C99 = -C86;
    const double C98 = C73 * C86;
    const double C97 = std::pow(C86, 2);
    const double C96 = C87 / C69;
    const double C95 = -C85;
    const double C94 = C83 * C59;
    const double C114 = C103 - zC;
    const double C113 = 2 * C102;
    const double C112 = C101 - yC;
    const double C111 = 2 * C100;
    const double C110 = std::pow(C99, 3);
    const double C109 = C74 * C97;
    const double C108 = C98 * ae;
    const double C107 = C98 * be;
    const double C106 = C96 - xC;
    const double C105 = C95 / C86;
    const double C104 = 2 * C94;
    const double C138 = std::pow(C114, 2);
    const double C137 = C80 * C113;
    const double C136 = C114 * C112;
    const double C135 = ae * C114;
    const double C134 = C114 * C106;
    const double C133 = C112 * C114;
    const double C132 = std::pow(C112, 2);
    const double C131 = C77 * C111;
    const double C130 = ae * C112;
    const double C129 = C112 * C106;
    const double C128 = C106 * C114;
    const double C127 = be * C114;
    const double C126 = C66 * C113;
    const double C125 = C106 * C112;
    const double C124 = be * C112;
    const double C123 = C66 * C111;
    const double C122 = -C108;
    const double C121 = -C107;
    const double C120 = C104 / C69;
    const double C119 = C106 * C98;
    const double C118 = std::pow(C106, 2);
    const double C117 = ae * C106;
    const double C116 = be * C106;
    const double C115 = C68 * C104;
    const double C166 = C137 / C69;
    const double C165 = C136 * ae;
    const double C164 = C135 * C74;
    const double C163 = C135 * C73;
    const double C162 = C134 * ae;
    const double C161 = C133 * ae;
    const double C160 = C131 / C69;
    const double C159 = C130 * C74;
    const double C158 = C130 * C73;
    const double C157 = C129 * ae;
    const double C156 = C119 * C113;
    const double C155 = C127 * C74;
    const double C154 = C128 * ae;
    const double C153 = C127 * C73;
    const double C152 = C126 / C69;
    const double C151 = C119 * C111;
    const double C150 = C124 * C74;
    const double C149 = C125 * ae;
    const double C148 = C124 * C73;
    const double C147 = C123 / C69;
    const double C146 = C117 * C74;
    const double C145 = C122 / C69;
    const double C144 = C116 * C74;
    const double C143 = C121 / C69;
    const double C142 = -C120;
    const double C141 = C117 * C73;
    const double C140 = C116 * C73;
    const double C139 = C115 / C69;
    const double C187 = C64 - C166;
    const double C186 = C165 * be;
    const double C185 = C164 * C86;
    const double C184 = C162 * be;
    const double C183 = C161 * be;
    const double C182 = C65 - C160;
    const double C181 = C159 * C86;
    const double C180 = C157 * be;
    const double C179 = C156 / C69;
    const double C178 = C155 * C86;
    const double C177 = C154 * be;
    const double C176 = 2 * C153;
    const double C175 = C151 / C69;
    const double C174 = C150 * C86;
    const double C173 = C149 * be;
    const double C172 = 2 * C148;
    const double C171 = C146 * C86;
    const double C170 = C144 * C86;
    const double C169 = C142 / C86;
    const double C168 = 2 * C140;
    const double C167 = C59 - C139;
    const double C202 = C187 * C84;
    const double C201 = -2 * C185;
    const double C200 = C182 * C84;
    const double C199 = C61 * C168;
    const double C198 = -2 * C181;
    const double C197 = -2 * C178;
    const double C196 = C64 * C176;
    const double C195 = -2 * C174;
    const double C194 = C65 * C172;
    const double C193 = -2 * C171;
    const double C192 = C89 - C169;
    const double C191 = -2 * C170;
    const double C190 = C169 - C89;
    const double C189 = C167 * be;
    const double C188 = C167 * C84;
    const double C212 = C106 * C201;
    const double C211 = C192 * C119;
    const double C210 = C106 * C198;
    const double C209 = C106 * C197;
    const double C208 = C152 - C196;
    const double C207 = C106 * C195;
    const double C206 = C147 - C194;
    const double C205 = C106 * C193;
    const double C204 = C106 * C191;
    const double C203 = C189 / C69;
    const double C218 = C64 * C209;
    const double C217 = C65 * C207;
    const double C216 = C145 - C205;
    const double C215 = C143 - C204;
    const double C214 = C203 - C105;
    const double C213 = C105 - C203;
    const double C222 = C63 * C215;
    const double C221 = C214 * C66;
    const double C220 = C218 + C179;
    const double C219 = C217 + C175;
    const double C223 = C221 - C199;
    const double C224 = C223 - C211;
    const double C225 = C224 + C222;
    const double C264 = C112 * C201;
    const double C263 = C112 * C198;
    const double C262 = C59 * C168;
    const double C261 = C66 * C104;
    const double C260 = C112 * C197;
    const double C259 = C112 * C195;
    const double C258 = C247 * C172;
    const double C257 = C111 / C69;
    const double C256 = 0 * be;
    const double C255 = 0 * be;
    const double C254 = C182 * be;
    const double C253 = C112 * C193;
    const double C252 = C112 * C98;
    const double C251 = C112 * C191;
    const double C275 = C145 - C263;
    const double C274 = C252 * C104;
    const double C273 = C59 * C251;
    const double C272 = C261 / C69;
    const double C271 = C252 * C113;
    const double C270 = C64 * C260;
    const double C269 = C143 - C259;
    const double C268 = -C257;
    const double C267 = C256 / C69;
    const double C266 = C255 / C69;
    const double C265 = C254 / C69;
    const double C281 = C274 / C69;
    const double C280 = C272 - C262;
    const double C279 = C271 / C69;
    const double C278 = C248 * C269;
    const double C277 = C268 / C86;
    const double C276 = -C266;
    const double C286 = C277 - C267;
    const double C285 = C273 + C281;
    const double C284 = C270 + C279;
    const double C283 = C267 - C277;
    const double C282 = C276 / C86;
    const double C289 = C282 - C265;
    const double C288 = C283 * C252;
    const double C287 = C265 - C282;
    const double C290 = C287 * C66;
    const double C291 = C290 - C258;
    const double C292 = C291 - C288;
    const double C293 = C292 + C278;
    const double C330 = C114 * C201;
    const double C329 = C114 * C198;
    const double C328 = C114 * C197;
    const double C327 = C315 * C176;
    const double C326 = C113 / C69;
    const double C325 = 0 * be;
    const double C324 = 0 * be;
    const double C323 = C187 * be;
    const double C322 = C114 * C195;
    const double C321 = C114 * C193;
    const double C320 = C114 * C98;
    const double C319 = C114 * C191;
    const double C340 = C145 - C330;
    const double C339 = C320 * C104;
    const double C338 = C59 * C319;
    const double C337 = C143 - C328;
    const double C336 = -C326;
    const double C335 = C325 / C69;
    const double C334 = C324 / C69;
    const double C333 = C323 / C69;
    const double C332 = C320 * C111;
    const double C331 = C65 * C322;
    const double C345 = C339 / C69;
    const double C344 = C316 * C337;
    const double C343 = C336 / C86;
    const double C342 = -C334;
    const double C341 = C332 / C69;
    const double C350 = C343 - C335;
    const double C349 = C338 + C345;
    const double C348 = C335 - C343;
    const double C347 = C342 / C86;
    const double C346 = C331 + C341;
    const double C353 = C347 - C333;
    const double C352 = C348 * C320;
    const double C351 = C333 - C347;
    const double C354 = C351 * C66;
    const double C355 = C354 - C327;
    const double C356 = C355 - C352;
    const double C357 = C356 + C344;
    const double C444 = C163 * C104;
    const double C443 = C158 * C104;
    const double C442 = C141 * C104;
    const double C441 = C140 * C104;
    const double C440 = C66 * C188;
    const double C439 = C138 * C76;
    const double C438 = C138 * C74;
    const double C437 = C163 * C113;
    const double C436 = C153 * C113;
    const double C435 = C66 * C202;
    const double C434 = C76 * C186;
    const double C433 = C163 * C111;
    const double C432 = C74 * C186;
    const double C431 = C185 * be;
    const double C430 = C76 * C184;
    const double C429 = 2 * C163;
    const double C428 = C74 * C184;
    const double C427 = C76 * C183;
    const double C426 = C158 * C113;
    const double C425 = C74 * C183;
    const double C424 = C132 * C76;
    const double C423 = C132 * C74;
    const double C422 = C158 * C111;
    const double C421 = C148 * C111;
    const double C420 = C66 * C200;
    const double C419 = C181 * be;
    const double C418 = C76 * C180;
    const double C417 = 2 * C158;
    const double C416 = C74 * C180;
    const double C415 = C178 * ae;
    const double C414 = C76 * C177;
    const double C413 = C141 * C113;
    const double C412 = C74 * C177;
    const double C411 = C174 * ae;
    const double C410 = C76 * C173;
    const double C409 = C141 * C111;
    const double C408 = C74 * C173;
    const double C407 = C118 * C76;
    const double C406 = C170 * ae;
    const double C405 = C171 * be;
    const double C404 = 2 * C88;
    const double C403 = C118 * C74;
    const double C402 = 2 * C141;
    const double C480 = 2 * C444;
    const double C479 = 2 * C443;
    const double C478 = 2 * C442;
    const double C477 = 2 * C441;
    const double C476 = C439 * C110;
    const double C475 = C438 * C97;
    const double C474 = 2 * C437;
    const double C473 = 2 * C436;
    const double C472 = C110 * C434;
    const double C471 = 2 * C433;
    const double C470 = C97 * C432;
    const double C469 = -2 * C431;
    const double C468 = C110 * C430;
    const double C467 = C97 * C428;
    const double C466 = C110 * C427;
    const double C465 = 2 * C426;
    const double C464 = C97 * C425;
    const double C463 = C424 * C110;
    const double C462 = C423 * C97;
    const double C461 = 2 * C422;
    const double C460 = 2 * C421;
    const double C459 = -2 * C419;
    const double C458 = C110 * C418;
    const double C457 = C97 * C416;
    const double C456 = -2 * C415;
    const double C455 = C110 * C414;
    const double C454 = 2 * C413;
    const double C453 = C97 * C412;
    const double C452 = -2 * C411;
    const double C451 = C110 * C410;
    const double C450 = 2 * C409;
    const double C449 = C97 * C408;
    const double C448 = C407 * C110;
    const double C447 = -2 * C406;
    const double C446 = -2 * C405;
    const double C445 = C403 * C97;
    const double C510 = C480 / C69;
    const double C509 = C59 * C467;
    const double C508 = C479 / C69;
    const double C507 = C59 * C457;
    const double C506 = C446 / C69;
    const double C505 = C478 / C69;
    const double C504 = C440 + C477;
    const double C503 = C109 + C476;
    const double C502 = C475 - C98;
    const double C501 = C474 / C69;
    const double C500 = C435 + C473;
    const double C499 = C471 / C69;
    const double C498 = C65 * C470;
    const double C497 = C469 / C69;
    const double C496 = C465 / C69;
    const double C495 = C64 * C464;
    const double C494 = C109 + C463;
    const double C493 = C462 - C98;
    const double C492 = C461 / C69;
    const double C491 = C420 + C460;
    const double C490 = C459 / C69;
    const double C489 = C456 / C69;
    const double C488 = C454 / C69;
    const double C487 = C64 * C453;
    const double C486 = C452 / C69;
    const double C485 = C450 / C69;
    const double C484 = C65 * C449;
    const double C483 = C109 + C448;
    const double C482 = C447 / C69;
    const double C481 = C445 - C98;
    const double C525 = C509 / C88;
    const double C524 = C507 / C88;
    const double C523 = C504 / C69;
    const double C522 = C503 * C67;
    const double C521 = C502 * C67;
    const double C520 = C500 / C69;
    const double C519 = C498 / C88;
    const double C518 = C495 / C88;
    const double C517 = C494 * C67;
    const double C516 = C493 * C67;
    const double C515 = C491 / C69;
    const double C514 = C487 / C88;
    const double C513 = C484 / C88;
    const double C512 = C483 * C67;
    const double C511 = C481 * C67;
    const double C537 = C525 - C510;
    const double C536 = C524 - C508;
    const double C535 = C59 * C511;
    const double C534 = C523 - C505;
    const double C533 = C64 * C521;
    const double C532 = C520 - C501;
    const double C531 = C519 - C499;
    const double C530 = C518 - C496;
    const double C529 = C65 * C516;
    const double C528 = C515 - C492;
    const double C527 = C514 - C488;
    const double C526 = C513 - C485;
    const double C540 = C535 / C88;
    const double C539 = C533 / C88;
    const double C538 = C529 / C88;
    const double C543 = C534 + C540;
    const double C542 = C532 + C539;
    const double C541 = C528 + C538;
    const double d2nexx100000 =
        (2 * Pi *
         ((C66 * ((-4 * C94) / C69 - (C68 * C188) / C69) * be) / C69 -
          C213 * C168 - C214 * C402 + (C61 * C511) / C88 -
          (C119 * C188) / C404 + C190 * C215 + C192 * C216 +
          C63 * ((-C446) / C69 - C482 + (C106 * C512) / C88)) *
         C64 * C65) /
        C69;
    const double d2nexx010000 =
        (2 * Pi *
         (C543 * C64 * C247 +
          ((C251 * C104) / C69 - (C252 * C188) / C69 - (C253 * C104) / C69 +
           (C59 * C112 * C512) / C88) *
              C64 * C248)) /
        C69;
    const double d2nexx001000 =
        (2 * Pi *
         (C543 * C315 + ((C319 * C104) / C69 - (C320 * C188) / C69 -
                         (C321 * C104) / C69 + (C59 * C114 * C512) / C88) *
                            C316) *
         C65) /
        C69;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx100000;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += d2nexx010000;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += d2nexx001000;
    const double d2nexy100000 =
        (2 * Pi *
         (C206 * C213 + C526 * C61 - C219 * C190 +
          ((C216 * C111) / C69 + C65 * ((C106 * C451) / C88 - C486)) * C63) *
         C64) /
        C69;
    const double d2nexy010000 =
        (2 * Pi *
         (((C247 * C449) / C88 - C287 * C402 - C283 * C253 +
           C248 * ((C112 * C451) / C88 - C506)) *
              C59 -
          (C293 * C104) / C69) *
         C64) /
        C69;
    const double d2nexy001000 =
        (2 * Pi *
         ((C526 * C59 - (C206 * C104) / C69) * C315 +
          ((C346 * C104) / C69 +
           ((C65 * C114 * C451) / C88 - (C321 * C111) / C69) * C59) *
              C316)) /
        C69;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy100000;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += d2nexy010000;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += d2nexy001000;
    const double d2nexz100000 =
        (2 * Pi *
         (C208 * C213 + C527 * C61 - C220 * C190 +
          ((C216 * C113) / C69 + C64 * ((C106 * C455) / C88 - C489)) * C63) *
         C65) /
        C69;
    const double d2nexz010000 =
        (2 * Pi *
         ((C527 * C59 - (C208 * C104) / C69) * C247 +
          ((C284 * C104) / C69 +
           ((C64 * C112 * C455) / C88 - (C253 * C113) / C69) * C59) *
              C248)) /
        C69;
    const double d2nexz001000 =
        (2 * Pi *
         (((C315 * C453) / C88 - C351 * C402 - C348 * C321 +
           C316 * ((C114 * C455) / C88 - C506)) *
              C59 -
          (C357 * C104) / C69) *
         C65) /
        C69;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz100000;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += d2nexz010000;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += d2nexz001000;
    const double d2neyx100000 =
        (2 * Pi *
         (((C61 * C457) / C88 - C214 * C417 - C192 * C210 +
           C63 * ((C106 * C458) / C88 - C490)) *
              C65 -
          (C225 * C111) / C69) *
         C64) /
        C69;
    const double d2neyx010000 =
        (2 * Pi *
         (C280 * C289 + C536 * C247 - C285 * C286 +
          ((C275 * C104) / C69 + C59 * ((C112 * C458) / C88 - C482)) * C248) *
         C64) /
        C69;
    const double d2neyx001000 =
        (2 * Pi *
         ((C536 * C65 - (C280 * C111) / C69) * C315 +
          ((C349 * C111) / C69 +
           ((C59 * C114 * C458) / C88 - (C329 * C104) / C69) * C65) *
              C316)) /
        C69;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx100000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += d2neyx010000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += d2neyx001000;
    const double d2neyy100000 =
        (2 * Pi *
         (C541 * C61 + ((C207 * C111) / C69 - (C119 * C200) / C69 -
                        (C210 * C111) / C69 + (C65 * C106 * C517) / C88) *
                           C63) *
         C64) /
        C69;
    const double d2neyy010000 =
        (2 * Pi *
         ((C66 * ((-4 * C100) / C69 - (C77 * C200) / C69) * be) / C69 -
          C289 * C172 - C287 * C417 + (C247 * C516) / C88 -
          (C252 * C200) / C404 + C286 * C269 + C283 * C275 +
          C248 * ((-C459) / C69 - C486 + (C112 * C517) / C88)) *
         C59 * C64) /
        C69;
    const double d2neyy001000 =
        (2 * Pi *
         (C541 * C59 * C315 +
          ((C322 * C111) / C69 - (C320 * C200) / C69 - (C329 * C111) / C69 +
           (C65 * C114 * C517) / C88) *
              C59 * C316)) /
        C69;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy100000;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += d2neyy010000;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += d2neyy001000;
    const double d2neyz100000 =
        (2 * Pi *
         ((C530 * C65 - (C208 * C111) / C69) * C61 +
          ((C220 * C111) / C69 +
           ((C64 * C106 * C466) / C88 - (C210 * C113) / C69) * C65) *
              C63)) /
        C69;
    const double d2neyz010000 =
        (2 * Pi *
         (C208 * C289 + C530 * C247 - C284 * C286 +
          ((C275 * C113) / C69 + C64 * ((C112 * C466) / C88 - C489)) * C248) *
         C59) /
        C69;
    const double d2neyz001000 =
        (2 * Pi *
         (((C315 * C464) / C88 - C351 * C417 - C348 * C329 +
           C316 * ((C114 * C466) / C88 - C490)) *
              C65 -
          (C357 * C111) / C69) *
         C59) /
        C69;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz100000;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += d2neyz010000;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += d2neyz001000;
    const double d2nezx100000 =
        (2 * Pi *
         (((C61 * C467) / C88 - C214 * C429 - C192 * C212 +
           C63 * ((C106 * C468) / C88 - C497)) *
              C64 -
          (C225 * C113) / C69) *
         C65) /
        C69;
    const double d2nezx010000 =
        (2 * Pi *
         ((C537 * C64 - (C280 * C113) / C69) * C247 +
          ((C285 * C113) / C69 +
           ((C59 * C112 * C468) / C88 - (C264 * C104) / C69) * C64) *
              C248)) /
        C69;
    const double d2nezx001000 =
        (2 * Pi *
         (C280 * C353 + C537 * C315 - C349 * C350 +
          ((C340 * C104) / C69 + C59 * ((C114 * C468) / C88 - C482)) * C316) *
         C65) /
        C69;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx100000;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += d2nezx010000;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += d2nezx001000;
    const double d2nezy100000 =
        (2 * Pi *
         ((C531 * C64 - (C206 * C113) / C69) * C61 +
          ((C219 * C113) / C69 +
           ((C65 * C106 * C472) / C88 - (C212 * C111) / C69) * C64) *
              C63)) /
        C69;
    const double d2nezy010000 =
        (2 * Pi *
         (((C247 * C470) / C88 - C287 * C429 - C283 * C264 +
           C248 * ((C112 * C472) / C88 - C497)) *
              C64 -
          (C293 * C113) / C69) *
         C59) /
        C69;
    const double d2nezy001000 =
        (2 * Pi *
         (C206 * C353 + C531 * C315 - C346 * C350 +
          ((C340 * C111) / C69 + C65 * ((C114 * C472) / C88 - C486)) * C316) *
         C59) /
        C69;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy100000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += d2nezy010000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += d2nezy001000;
    const double d2nezz100000 =
        (2 * Pi *
         (C542 * C65 * C61 + ((C209 * C113) / C69 - (C119 * C202) / C69 -
                              (C212 * C113) / C69 + (C64 * C106 * C522) / C88) *
                                 C65 * C63)) /
        C69;
    const double d2nezz010000 =
        (2 * Pi *
         (C542 * C247 + ((C260 * C113) / C69 - (C252 * C202) / C69 -
                         (C264 * C113) / C69 + (C64 * C112 * C522) / C88) *
                            C248) *
         C59) /
        C69;
    const double d2nezz001000 =
        (2 * Pi *
         ((C66 * ((-4 * C102) / C69 - (C80 * C202) / C69) * be) / C69 -
          C353 * C176 - C351 * C429 + (C315 * C521) / C88 -
          (C320 * C202) / C404 + C350 * C337 + C348 * C340 +
          C316 * ((-C469) / C69 - C489 + (C114 * C522) / C88)) *
         C65 * C59) /
        C69;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz100000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += d2nezz010000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += d2nezz001000;
}
