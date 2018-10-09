/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sp_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_01_12(double ae,
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
    const double C59 = (C384 * C350 * ae) / C351;
    const double C63 = C375 * C384;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C370) / C351);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C370) / C351);
    const double C244 = (C385 * C359 * ae) / C351;
    const double C245 = C375 * C385;
    const double C308 = (C386 * C364 * ae) / C351;
    const double C309 = C375 * C386;
    const double C82 = be * zB;
    const double C81 = ae * zA;
    const double C80 = zA - zB;
    const double C79 = be * yB;
    const double C78 = ae * yA;
    const double C77 = yA - yB;
    const double C76 = bs[3];
    const double C75 = 0 * ae;
    const double C74 = bs[0];
    const double C73 = xA - xB;
    const double C72 = 0 * be;
    const double C71 = ae * be;
    const double C70 = bs[1];
    const double C69 = bs[2];
    const double C68 = ae + be;
    const double C67 = be * xB;
    const double C66 = ae * xA;
    const double C92 = C81 + C82;
    const double C91 = C71 * C80;
    const double C90 = C78 + C79;
    const double C89 = C71 * C77;
    const double C88 = C75 / C68;
    const double C87 = 2 * C71;
    const double C86 = C71 * C73;
    const double C85 = std::pow(C68, 2);
    const double C84 = 2 * C68;
    const double C83 = C66 + C67;
    const double C102 = C92 / C68;
    const double C101 = C91 * C64;
    const double C100 = C90 / C68;
    const double C99 = C89 * C65;
    const double C98 = -C84;
    const double C97 = C86 * C384;
    const double C96 = 2 * C85;
    const double C95 = C70 * C84;
    const double C94 = std::pow(C84, 2);
    const double C93 = C83 / C68;
    const double C114 = C102 - zC;
    const double C113 = 2 * C101;
    const double C112 = C100 - yC;
    const double C111 = 2 * C99;
    const double C110 = std::pow(C98, 3);
    const double C109 = C69 * C94;
    const double C108 = C95 * ae;
    const double C107 = C95 * be;
    const double C106 = C97 / C85;
    const double C105 = 2 * C97;
    const double C104 = C72 / C96;
    const double C103 = C93 - xC;
    const double C139 = std::pow(C114, 2);
    const double C138 = C80 * C113;
    const double C137 = C114 * C112;
    const double C136 = ae * C114;
    const double C135 = C114 * C103;
    const double C134 = C112 * C114;
    const double C133 = std::pow(C112, 2);
    const double C132 = C77 * C111;
    const double C131 = ae * C112;
    const double C130 = C112 * C103;
    const double C129 = C103 * C114;
    const double C128 = be * C114;
    const double C127 = C74 * C113;
    const double C126 = C103 * C112;
    const double C125 = be * C112;
    const double C124 = C74 * C111;
    const double C123 = -C108;
    const double C122 = C106 - C88;
    const double C121 = -C107;
    const double C120 = C88 - C106;
    const double C119 = C103 * C95;
    const double C118 = be * C103;
    const double C117 = ae * C103;
    const double C116 = C73 * C105;
    const double C115 = std::pow(C103, 2);
    const double C167 = C138 / C68;
    const double C166 = C137 * ae;
    const double C165 = C136 * C69;
    const double C164 = C136 * C70;
    const double C163 = C135 * ae;
    const double C162 = C134 * ae;
    const double C161 = C132 / C68;
    const double C160 = C122 * C119;
    const double C159 = C131 * C69;
    const double C158 = C131 * C70;
    const double C157 = C130 * ae;
    const double C156 = C119 * C113;
    const double C155 = C128 * C69;
    const double C154 = C129 * ae;
    const double C153 = C128 * C70;
    const double C152 = C127 / C68;
    const double C151 = C119 * C111;
    const double C150 = C125 * C69;
    const double C149 = C126 * ae;
    const double C148 = C125 * C70;
    const double C147 = C124 / C68;
    const double C146 = C117 * C69;
    const double C145 = C123 / C68;
    const double C144 = C118 * C69;
    const double C143 = C121 / C68;
    const double C142 = C118 * C70;
    const double C141 = C117 * C70;
    const double C140 = C116 / C68;
    const double C187 = C64 - C167;
    const double C186 = C166 * be;
    const double C185 = C165 * C84;
    const double C184 = C163 * be;
    const double C183 = C162 * be;
    const double C182 = C65 - C161;
    const double C181 = C159 * C84;
    const double C180 = C157 * be;
    const double C179 = C156 / C68;
    const double C178 = C155 * C84;
    const double C177 = C154 * be;
    const double C176 = 2 * C153;
    const double C175 = C151 / C68;
    const double C174 = C150 * C84;
    const double C173 = C149 * be;
    const double C172 = 2 * C148;
    const double C171 = C146 * C84;
    const double C170 = C144 * C84;
    const double C169 = 2 * C142;
    const double C168 = C384 - C140;
    const double C200 = C187 * C87;
    const double C199 = -2 * C185;
    const double C198 = C182 * C87;
    const double C197 = C59 * C169;
    const double C196 = -2 * C181;
    const double C195 = -2 * C178;
    const double C194 = C64 * C176;
    const double C193 = -2 * C174;
    const double C192 = C65 * C172;
    const double C191 = -2 * C171;
    const double C190 = -2 * C170;
    const double C189 = C168 * C87;
    const double C188 = C168 * ae;
    const double C209 = C103 * C199;
    const double C208 = C103 * C196;
    const double C207 = C103 * C195;
    const double C206 = C152 - C194;
    const double C205 = C103 * C193;
    const double C204 = C147 - C192;
    const double C203 = C103 * C191;
    const double C202 = C103 * C190;
    const double C201 = C188 / C68;
    const double C215 = C64 * C207;
    const double C214 = C65 * C205;
    const double C213 = C145 - C203;
    const double C212 = C143 - C202;
    const double C211 = C201 - C104;
    const double C210 = C104 - C201;
    const double C219 = C63 * C212;
    const double C218 = C210 * C74;
    const double C217 = C215 + C179;
    const double C216 = C214 + C175;
    const double C220 = C218 - C197;
    const double C221 = C220 - C160;
    const double C222 = C221 + C219;
    const double C261 = C112 * C199;
    const double C260 = C112 * C196;
    const double C259 = C384 * C169;
    const double C258 = C74 * C105;
    const double C257 = C112 * C195;
    const double C256 = C112 * C193;
    const double C255 = C244 * C172;
    const double C254 = 0 * ae;
    const double C253 = C99 / C85;
    const double C252 = C182 * ae;
    const double C251 = 0 * be;
    const double C250 = C112 * C191;
    const double C249 = C112 * C95;
    const double C248 = C112 * C190;
    const double C271 = C145 - C260;
    const double C270 = C249 * C105;
    const double C269 = C384 * C248;
    const double C268 = C258 / C68;
    const double C267 = C249 * C113;
    const double C266 = C64 * C257;
    const double C265 = C143 - C256;
    const double C264 = C254 / C68;
    const double C263 = C252 / C68;
    const double C262 = C251 / C96;
    const double C279 = C264 - C253;
    const double C278 = C270 / C68;
    const double C277 = C263 - C262;
    const double C276 = C268 - C259;
    const double C275 = C267 / C68;
    const double C274 = C245 * C265;
    const double C273 = C253 - C264;
    const double C272 = C262 - C263;
    const double C283 = C269 + C278;
    const double C282 = C266 + C275;
    const double C281 = C273 * C249;
    const double C280 = C272 * C74;
    const double C284 = C280 - C255;
    const double C285 = C284 - C281;
    const double C286 = C285 + C274;
    const double C323 = C114 * C199;
    const double C322 = C114 * C196;
    const double C321 = C114 * C195;
    const double C320 = C308 * C176;
    const double C319 = 0 * ae;
    const double C318 = C101 / C85;
    const double C317 = C187 * ae;
    const double C316 = 0 * be;
    const double C315 = C114 * C193;
    const double C314 = C114 * C191;
    const double C313 = C114 * C95;
    const double C312 = C114 * C190;
    const double C332 = C145 - C323;
    const double C331 = C313 * C105;
    const double C330 = C384 * C312;
    const double C329 = C143 - C321;
    const double C328 = C319 / C68;
    const double C327 = C317 / C68;
    const double C326 = C316 / C96;
    const double C325 = C313 * C111;
    const double C324 = C65 * C315;
    const double C339 = C328 - C318;
    const double C338 = C327 - C326;
    const double C337 = C331 / C68;
    const double C336 = C309 * C329;
    const double C335 = C318 - C328;
    const double C334 = C326 - C327;
    const double C333 = C325 / C68;
    const double C343 = C330 + C337;
    const double C342 = C335 * C313;
    const double C341 = C334 * C74;
    const double C340 = C324 + C333;
    const double C344 = C341 - C320;
    const double C345 = C344 - C342;
    const double C346 = C345 + C336;
    const double C432 = C164 * C105;
    const double C431 = C158 * C105;
    const double C430 = C141 * C105;
    const double C429 = C142 * C105;
    const double C428 = C74 * C189;
    const double C427 = C139 * C76;
    const double C426 = C139 * C69;
    const double C425 = C164 * C113;
    const double C424 = C153 * C113;
    const double C423 = C74 * C200;
    const double C422 = C76 * C186;
    const double C421 = C164 * C111;
    const double C420 = C69 * C186;
    const double C419 = C185 * be;
    const double C418 = C76 * C184;
    const double C417 = 2 * C164;
    const double C416 = C69 * C184;
    const double C415 = C76 * C183;
    const double C414 = C158 * C113;
    const double C413 = C69 * C183;
    const double C412 = C133 * C76;
    const double C411 = C133 * C69;
    const double C410 = C158 * C111;
    const double C409 = C148 * C111;
    const double C408 = C74 * C198;
    const double C407 = C181 * be;
    const double C406 = C76 * C180;
    const double C405 = 2 * C158;
    const double C404 = C69 * C180;
    const double C403 = C178 * ae;
    const double C402 = C76 * C177;
    const double C401 = C141 * C113;
    const double C400 = C69 * C177;
    const double C399 = C174 * ae;
    const double C398 = C76 * C173;
    const double C397 = C141 * C111;
    const double C396 = C69 * C173;
    const double C395 = C115 * C76;
    const double C394 = C170 * ae;
    const double C393 = C171 * be;
    const double C392 = 2 * C141;
    const double C391 = C115 * C69;
    const double C468 = 2 * C432;
    const double C467 = 2 * C431;
    const double C466 = 2 * C430;
    const double C465 = 2 * C429;
    const double C464 = C427 * C110;
    const double C463 = C426 * C94;
    const double C462 = 2 * C425;
    const double C461 = 2 * C424;
    const double C460 = C110 * C422;
    const double C459 = 2 * C421;
    const double C458 = C94 * C420;
    const double C457 = -2 * C419;
    const double C456 = C110 * C418;
    const double C455 = C94 * C416;
    const double C454 = C110 * C415;
    const double C453 = 2 * C414;
    const double C452 = C94 * C413;
    const double C451 = C412 * C110;
    const double C450 = C411 * C94;
    const double C449 = 2 * C410;
    const double C448 = 2 * C409;
    const double C447 = -2 * C407;
    const double C446 = C110 * C406;
    const double C445 = C94 * C404;
    const double C444 = -2 * C403;
    const double C443 = C110 * C402;
    const double C442 = 2 * C401;
    const double C441 = C94 * C400;
    const double C440 = -2 * C399;
    const double C439 = C110 * C398;
    const double C438 = 2 * C397;
    const double C437 = C94 * C396;
    const double C436 = C395 * C110;
    const double C435 = -2 * C394;
    const double C434 = -2 * C393;
    const double C433 = C391 * C94;
    const double C498 = C468 / C68;
    const double C497 = C384 * C455;
    const double C496 = C467 / C68;
    const double C495 = C384 * C445;
    const double C494 = C434 / C68;
    const double C493 = C466 / C68;
    const double C492 = C428 + C465;
    const double C491 = C109 + C464;
    const double C490 = C463 - C95;
    const double C489 = C462 / C68;
    const double C488 = C423 + C461;
    const double C487 = C459 / C68;
    const double C486 = C65 * C458;
    const double C485 = C457 / C68;
    const double C484 = C453 / C68;
    const double C483 = C64 * C452;
    const double C482 = C109 + C451;
    const double C481 = C450 - C95;
    const double C480 = C449 / C68;
    const double C479 = C408 + C448;
    const double C478 = C447 / C68;
    const double C477 = C444 / C68;
    const double C476 = C442 / C68;
    const double C475 = C64 * C441;
    const double C474 = C440 / C68;
    const double C473 = C438 / C68;
    const double C472 = C65 * C437;
    const double C471 = C109 + C436;
    const double C470 = C435 / C68;
    const double C469 = C433 - C95;
    const double C513 = C497 / C85;
    const double C512 = C495 / C85;
    const double C511 = C492 / C68;
    const double C510 = C491 * C71;
    const double C509 = C490 * C71;
    const double C508 = C488 / C68;
    const double C507 = C486 / C85;
    const double C506 = C483 / C85;
    const double C505 = C482 * C71;
    const double C504 = C481 * C71;
    const double C503 = C479 / C68;
    const double C502 = C475 / C85;
    const double C501 = C472 / C85;
    const double C500 = C471 * C71;
    const double C499 = C469 * C71;
    const double C525 = C513 - C498;
    const double C524 = C512 - C496;
    const double C523 = C384 * C499;
    const double C522 = C511 - C493;
    const double C521 = C64 * C509;
    const double C520 = C508 - C489;
    const double C519 = C507 - C487;
    const double C518 = C506 - C484;
    const double C517 = C65 * C504;
    const double C516 = C503 - C480;
    const double C515 = C502 - C476;
    const double C514 = C501 - C473;
    const double C528 = C523 / C85;
    const double C527 = C521 / C85;
    const double C526 = C517 / C85;
    const double C531 = C522 + C528;
    const double C530 = C520 + C527;
    const double C529 = C516 + C526;
    const double d2nexx000100 =
        (2 * Pi *
         ((C59 * C499) / C85 -
          (C210 * C392 + C211 * C169 +
           (C74 * ((-4 * C97) / C68 - (C73 * C189) / C68) * ae) / C68) -
          (C119 * C189) / C96 + C120 * C212 + C122 * C213 +
          C63 * ((-C434) / C68 - C470 + (C103 * C500) / C85)) *
         C64 * C65) /
        C68;
    const double d2nexx000010 =
        (2 * Pi *
         (C531 * C64 * C244 +
          ((C248 * C105) / C68 - (C249 * C189) / C68 - (C250 * C105) / C68 +
           (C384 * C112 * C500) / C85) *
              C64 * C245)) /
        C68;
    const double d2nexx000001 =
        (2 * Pi *
         (C531 * C308 + ((C312 * C105) / C68 - (C313 * C189) / C68 -
                         (C314 * C105) / C68 + (C384 * C114 * C500) / C85) *
                            C309) *
         C65) /
        C68;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx000010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx000001;
    const double d2nexy000100 =
        (2 * Pi *
         (C204 * C211 + C514 * C59 - C216 * C120 +
          ((C213 * C111) / C68 + C65 * ((C103 * C439) / C85 - C474)) * C63) *
         C64) /
        C68;
    const double d2nexy000010 =
        (2 * Pi *
         (((C244 * C437) / C85 - C272 * C392 - C273 * C250 +
           C245 * ((C112 * C439) / C85 - C494)) *
              C384 -
          (C286 * C105) / C68) *
         C64) /
        C68;
    const double d2nexy000001 =
        (2 * Pi *
         ((C514 * C384 - (C204 * C105) / C68) * C308 +
          ((C340 * C105) / C68 +
           ((C65 * C114 * C439) / C85 - (C314 * C111) / C68) * C384) *
              C309)) /
        C68;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy000010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy000001;
    const double d2nexz000100 =
        (2 * Pi *
         (C206 * C211 + C515 * C59 - C217 * C120 +
          ((C213 * C113) / C68 + C64 * ((C103 * C443) / C85 - C477)) * C63) *
         C65) /
        C68;
    const double d2nexz000010 =
        (2 * Pi *
         ((C515 * C384 - (C206 * C105) / C68) * C244 +
          ((C282 * C105) / C68 +
           ((C64 * C112 * C443) / C85 - (C250 * C113) / C68) * C384) *
              C245)) /
        C68;
    const double d2nexz000001 =
        (2 * Pi *
         (((C308 * C441) / C85 - C334 * C392 - C335 * C314 +
           C309 * ((C114 * C443) / C85 - C494)) *
              C384 -
          (C346 * C105) / C68) *
         C65) /
        C68;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz000010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz000001;
    const double d2neyx000100 =
        (2 * Pi *
         (((C59 * C445) / C85 - C210 * C405 - C122 * C208 +
           C63 * ((C103 * C446) / C85 - C478)) *
              C65 -
          (C222 * C111) / C68) *
         C64) /
        C68;
    const double d2neyx000010 =
        (2 * Pi *
         (C276 * C277 + C524 * C244 - C283 * C279 +
          ((C271 * C105) / C68 + C384 * ((C112 * C446) / C85 - C470)) * C245) *
         C64) /
        C68;
    const double d2neyx000001 =
        (2 * Pi *
         ((C524 * C65 - (C276 * C111) / C68) * C308 +
          ((C343 * C111) / C68 +
           ((C384 * C114 * C446) / C85 - (C322 * C105) / C68) * C65) *
              C309)) /
        C68;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx000010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx000001;
    const double d2neyy000100 =
        (2 * Pi *
         (C529 * C59 + ((C205 * C111) / C68 - (C119 * C198) / C68 -
                        (C208 * C111) / C68 + (C65 * C103 * C505) / C85) *
                           C63) *
         C64) /
        C68;
    const double d2neyy000010 =
        (2 * Pi *
         ((C244 * C504) / C85 -
          (C272 * C405 + C277 * C172 +
           (C74 * ((-4 * C99) / C68 - (C77 * C198) / C68) * ae) / C68) -
          (C249 * C198) / C96 + C279 * C265 + C273 * C271 +
          C245 * ((-C447) / C68 - C474 + (C112 * C505) / C85)) *
         C384 * C64) /
        C68;
    const double d2neyy000001 =
        (2 * Pi *
         (C529 * C384 * C308 +
          ((C315 * C111) / C68 - (C313 * C198) / C68 - (C322 * C111) / C68 +
           (C65 * C114 * C505) / C85) *
              C384 * C309)) /
        C68;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy000010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy000001;
    const double d2neyz000100 =
        (2 * Pi *
         ((C518 * C65 - (C206 * C111) / C68) * C59 +
          ((C217 * C111) / C68 +
           ((C64 * C103 * C454) / C85 - (C208 * C113) / C68) * C65) *
              C63)) /
        C68;
    const double d2neyz000010 =
        (2 * Pi *
         (C206 * C277 + C518 * C244 - C282 * C279 +
          ((C271 * C113) / C68 + C64 * ((C112 * C454) / C85 - C477)) * C245) *
         C384) /
        C68;
    const double d2neyz000001 =
        (2 * Pi *
         (((C308 * C452) / C85 - C334 * C405 - C335 * C322 +
           C309 * ((C114 * C454) / C85 - C478)) *
              C65 -
          (C346 * C111) / C68) *
         C384) /
        C68;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz000010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz000001;
    const double d2nezx000100 =
        (2 * Pi *
         (((C59 * C455) / C85 - C210 * C417 - C122 * C209 +
           C63 * ((C103 * C456) / C85 - C485)) *
              C64 -
          (C222 * C113) / C68) *
         C65) /
        C68;
    const double d2nezx000010 =
        (2 * Pi *
         ((C525 * C64 - (C276 * C113) / C68) * C244 +
          ((C283 * C113) / C68 +
           ((C384 * C112 * C456) / C85 - (C261 * C105) / C68) * C64) *
              C245)) /
        C68;
    const double d2nezx000001 =
        (2 * Pi *
         (C276 * C338 + C525 * C308 - C343 * C339 +
          ((C332 * C105) / C68 + C384 * ((C114 * C456) / C85 - C470)) * C309) *
         C65) /
        C68;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx000010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx000001;
    const double d2nezy000100 =
        (2 * Pi *
         ((C519 * C64 - (C204 * C113) / C68) * C59 +
          ((C216 * C113) / C68 +
           ((C65 * C103 * C460) / C85 - (C209 * C111) / C68) * C64) *
              C63)) /
        C68;
    const double d2nezy000010 =
        (2 * Pi *
         (((C244 * C458) / C85 - C272 * C417 - C273 * C261 +
           C245 * ((C112 * C460) / C85 - C485)) *
              C64 -
          (C286 * C113) / C68) *
         C384) /
        C68;
    const double d2nezy000001 =
        (2 * Pi *
         (C204 * C338 + C519 * C308 - C340 * C339 +
          ((C332 * C111) / C68 + C65 * ((C114 * C460) / C85 - C474)) * C309) *
         C384) /
        C68;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy000010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy000001;
    const double d2nezz000100 =
        (2 * Pi *
         (C530 * C65 * C59 + ((C207 * C113) / C68 - (C119 * C200) / C68 -
                              (C209 * C113) / C68 + (C64 * C103 * C510) / C85) *
                                 C65 * C63)) /
        C68;
    const double d2nezz000010 =
        (2 * Pi *
         (C530 * C244 + ((C257 * C113) / C68 - (C249 * C200) / C68 -
                         (C261 * C113) / C68 + (C64 * C112 * C510) / C85) *
                            C245) *
         C384) /
        C68;
    const double d2nezz000001 =
        (2 * Pi *
         ((C308 * C509) / C85 -
          (C334 * C417 + C338 * C176 +
           (C74 * ((-4 * C101) / C68 - (C80 * C200) / C68) * ae) / C68) -
          (C313 * C200) / C96 + C339 * C329 + C335 * C332 +
          C309 * ((-C457) / C68 - C477 + (C114 * C510) / C85)) *
         C65 * C384) /
        C68;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz000010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz000001;
}
