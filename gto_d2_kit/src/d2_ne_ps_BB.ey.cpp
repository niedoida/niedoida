/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ps_BB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_10_22(double ae,
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
    const double C360 = ae + be;
    const double C359 = xA - xB;
    const double C368 = yA - yB;
    const double C373 = zA - zB;
    const double C382 = std::pow(C373, 2);
    const double C381 = std::pow(C368, 2);
    const double C380 = 2 * C360;
    const double C379 = ae * be;
    const double C378 = std::pow(C359, 2);
    const double C386 = C382 * C379;
    const double C385 = C381 * C379;
    const double C384 = std::pow(C380, -1);
    const double C383 = C378 * C379;
    const double C389 = C386 / C360;
    const double C388 = C385 / C360;
    const double C387 = C383 / C360;
    const double C392 = -C389;
    const double C391 = -C388;
    const double C390 = -C387;
    const double C395 = std::exp(C392);
    const double C394 = std::exp(C391);
    const double C393 = std::exp(C390);
    const double C59 = -(C393 * C359 * be) / C360;
    const double C63 = C384 * C393;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C379) / C360);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C379) / C360);
    const double C236 = -(C394 * C368 * be) / C360;
    const double C237 = C384 * C394;
    const double C311 = -(C395 * C373 * be) / C360;
    const double C312 = C384 * C395;
    const double C83 = zA - zB;
    const double C82 = be * zB;
    const double C81 = ae * zA;
    const double C80 = yA - yB;
    const double C79 = be * yB;
    const double C78 = ae * yA;
    const double C77 = bs[3];
    const double C76 = 0 * be;
    const double C75 = bs[0];
    const double C74 = 0 * be;
    const double C73 = ae * be;
    const double C72 = xA - xB;
    const double C71 = std::pow(be, 2);
    const double C70 = bs[1];
    const double C69 = bs[2];
    const double C68 = ae + be;
    const double C67 = be * xB;
    const double C66 = ae * xA;
    const double C94 = C73 * C83;
    const double C93 = C81 + C82;
    const double C92 = C73 * C80;
    const double C91 = C78 + C79;
    const double C90 = C76 / C68;
    const double C89 = 2 * C73;
    const double C88 = C74 / C68;
    const double C87 = C73 * C72;
    const double C86 = std::pow(C68, 2);
    const double C85 = 2 * C68;
    const double C84 = C66 + C67;
    const double C104 = C94 * C64;
    const double C103 = C93 / C68;
    const double C102 = C92 * C65;
    const double C101 = C91 / C68;
    const double C100 = -C85;
    const double C99 = -C88;
    const double C98 = C87 * C393;
    const double C97 = C70 * C85;
    const double C96 = std::pow(C85, 2);
    const double C95 = C84 / C68;
    const double C114 = 2 * C104;
    const double C113 = C103 - zC;
    const double C112 = 2 * C102;
    const double C111 = C101 - yC;
    const double C110 = std::pow(C100, 3);
    const double C109 = C69 * C96;
    const double C108 = C97 * be;
    const double C107 = C99 / C85;
    const double C106 = 2 * C98;
    const double C105 = C95 - xC;
    const double C134 = std::pow(C113, 2);
    const double C133 = C83 * C114;
    const double C132 = C113 * C111;
    const double C131 = C113 * C105;
    const double C130 = C111 * C113;
    const double C129 = std::pow(C111, 2);
    const double C128 = C80 * C112;
    const double C127 = C111 * C105;
    const double C126 = C105 * C113;
    const double C125 = C75 * C114;
    const double C124 = be * C113;
    const double C123 = C105 * C111;
    const double C122 = C75 * C112;
    const double C121 = be * C111;
    const double C120 = -C108;
    const double C119 = C106 / C68;
    const double C118 = C105 * C97;
    const double C117 = be * C105;
    const double C116 = C72 * C106;
    const double C115 = std::pow(C105, 2);
    const double C155 = C133 / C68;
    const double C154 = C132 * C71;
    const double C153 = C131 * C71;
    const double C152 = C130 * C71;
    const double C151 = C128 / C68;
    const double C150 = C127 * C71;
    const double C149 = C118 * C114;
    const double C148 = C124 * C69;
    const double C147 = C126 * C71;
    const double C146 = C125 / C68;
    const double C145 = C124 * C70;
    const double C144 = C118 * C112;
    const double C143 = C121 * C69;
    const double C142 = C123 * C71;
    const double C141 = C122 / C68;
    const double C140 = C121 * C70;
    const double C139 = C117 * C69;
    const double C138 = C120 / C68;
    const double C137 = -C119;
    const double C136 = C117 * C70;
    const double C135 = C116 / C68;
    const double C169 = C64 - C155;
    const double C168 = C145 * C114;
    const double C167 = C65 - C151;
    const double C166 = C140 * C112;
    const double C165 = C149 / C68;
    const double C164 = C148 * C85;
    const double C163 = 2 * C145;
    const double C162 = C144 / C68;
    const double C161 = C143 * C85;
    const double C160 = 2 * C140;
    const double C159 = C139 * C85;
    const double C158 = C137 / C85;
    const double C157 = 2 * C136;
    const double C156 = C393 - C135;
    const double C185 = C169 * C89;
    const double C184 = 2 * C168;
    const double C183 = C167 * C89;
    const double C182 = 2 * C166;
    const double C181 = C59 * C157;
    const double C180 = C164 * be;
    const double C179 = -2 * C164;
    const double C178 = C64 * C163;
    const double C177 = C161 * be;
    const double C176 = C158 - C90;
    const double C175 = -2 * C161;
    const double C174 = C65 * C160;
    const double C173 = -2 * C159;
    const double C172 = C90 - C158;
    const double C171 = C156 * C89;
    const double C170 = C156 * be;
    const double C194 = C172 * C118;
    const double C193 = -2 * C180;
    const double C192 = C105 * C179;
    const double C191 = C178 - C146;
    const double C190 = -2 * C177;
    const double C189 = C105 * C175;
    const double C188 = C174 - C141;
    const double C187 = C105 * C173;
    const double C186 = C170 / C68;
    const double C203 = C192 * C114;
    const double C202 = C189 * C112;
    const double C201 = C193 / C68;
    const double C200 = C64 * C192;
    const double C199 = C190 / C68;
    const double C198 = C65 * C189;
    const double C197 = C107 - C186;
    const double C196 = C138 - C187;
    const double C195 = C186 - C107;
    const double C211 = C203 / C68;
    const double C210 = C202 / C68;
    const double C209 = C63 * C196;
    const double C208 = C195 * C75;
    const double C207 = C200 + C165;
    const double C206 = C198 + C162;
    const double C205 = C172 * C196;
    const double C204 = C195 * C157;
    const double C212 = C208 - C181;
    const double C213 = C212 - C194;
    const double C214 = C213 + C209;
    const double C252 = C75 * C106;
    const double C251 = C393 * C157;
    const double C250 = C111 * C179;
    const double C249 = C159 * be;
    const double C248 = C111 * C175;
    const double C247 = C112 / C68;
    const double C246 = 0 * be;
    const double C245 = C236 * C160;
    const double C244 = 0 * be;
    const double C243 = C167 * be;
    const double C242 = C111 * C173;
    const double C241 = C111 * C97;
    const double C240 = C136 * C106;
    const double C266 = C250 * C114;
    const double C265 = C241 * C106;
    const double C264 = C393 * C242;
    const double C263 = C252 / C68;
    const double C262 = C241 * C114;
    const double C261 = C64 * C250;
    const double C260 = -2 * C249;
    const double C259 = C138 - C248;
    const double C258 = -C247;
    const double C257 = C246 / C68;
    const double C256 = C244 / C68;
    const double C255 = C243 / C68;
    const double C254 = C242 * C106;
    const double C253 = 2 * C240;
    const double C275 = C266 / C68;
    const double C274 = C265 / C68;
    const double C273 = C251 - C263;
    const double C272 = C262 / C68;
    const double C271 = C260 / C68;
    const double C270 = C237 * C259;
    const double C269 = C258 / C85;
    const double C268 = -C256;
    const double C267 = C254 / C68;
    const double C280 = C269 - C257;
    const double C279 = C264 + C274;
    const double C278 = C261 + C272;
    const double C277 = C257 - C269;
    const double C276 = C268 / C85;
    const double C284 = C277 * C259;
    const double C283 = C276 - C255;
    const double C282 = C277 * C241;
    const double C281 = C255 - C276;
    const double C286 = C281 * C160;
    const double C285 = C281 * C75;
    const double C287 = C285 - C245;
    const double C288 = C287 - C282;
    const double C289 = C288 + C270;
    const double C323 = C113 * C179;
    const double C322 = C114 / C68;
    const double C321 = 0 * be;
    const double C320 = C311 * C163;
    const double C319 = 0 * be;
    const double C318 = C169 * be;
    const double C317 = C113 * C175;
    const double C316 = C113 * C173;
    const double C315 = C113 * C97;
    const double C334 = C317 * C112;
    const double C333 = C315 * C106;
    const double C332 = C393 * C316;
    const double C331 = C138 - C323;
    const double C330 = -C322;
    const double C329 = C321 / C68;
    const double C328 = C319 / C68;
    const double C327 = C318 / C68;
    const double C326 = C315 * C112;
    const double C325 = C65 * C317;
    const double C324 = C316 * C106;
    const double C341 = C334 / C68;
    const double C340 = C333 / C68;
    const double C339 = C312 * C331;
    const double C338 = C330 / C85;
    const double C337 = -C328;
    const double C336 = C326 / C68;
    const double C335 = C324 / C68;
    const double C346 = C338 - C329;
    const double C345 = C332 + C340;
    const double C344 = C329 - C338;
    const double C343 = C337 / C85;
    const double C342 = C325 + C336;
    const double C350 = C344 * C331;
    const double C349 = C343 - C327;
    const double C348 = C344 * C315;
    const double C347 = C327 - C343;
    const double C352 = C347 * C163;
    const double C351 = C347 * C75;
    const double C353 = C351 - C320;
    const double C354 = C353 - C348;
    const double C355 = C354 + C339;
    const double C433 = C145 * C106;
    const double C432 = C140 * C106;
    const double C431 = C253 / C68;
    const double C430 = C75 * C171;
    const double C429 = -C253;
    const double C428 = C134 * C77;
    const double C427 = C134 * C69;
    const double C426 = C184 / C68;
    const double C425 = C75 * C185;
    const double C424 = -C184;
    const double C423 = C77 * C154;
    const double C422 = C145 * C112;
    const double C421 = C69 * C154;
    const double C420 = C77 * C153;
    const double C419 = C69 * C153;
    const double C418 = C77 * C152;
    const double C417 = C140 * C114;
    const double C416 = C69 * C152;
    const double C415 = C129 * C77;
    const double C414 = C129 * C69;
    const double C413 = C182 / C68;
    const double C412 = C75 * C183;
    const double C411 = -C182;
    const double C410 = C77 * C150;
    const double C409 = C69 * C150;
    const double C408 = C77 * C147;
    const double C407 = C136 * C114;
    const double C406 = C69 * C147;
    const double C405 = C77 * C142;
    const double C404 = C136 * C112;
    const double C403 = C69 * C142;
    const double C402 = C115 * C77;
    const double C401 = 2 * C86;
    const double C400 = C115 * C69;
    const double C463 = 2 * C433;
    const double C462 = 2 * C432;
    const double C461 = C430 / C68;
    const double C460 = C429 / C68;
    const double C459 = C428 * C110;
    const double C458 = C427 * C96;
    const double C457 = C425 / C68;
    const double C456 = C424 / C68;
    const double C455 = C110 * C423;
    const double C454 = 2 * C422;
    const double C453 = C96 * C421;
    const double C452 = C110 * C420;
    const double C451 = C96 * C419;
    const double C450 = C110 * C418;
    const double C449 = 2 * C417;
    const double C448 = C96 * C416;
    const double C447 = C415 * C110;
    const double C446 = C414 * C96;
    const double C445 = C412 / C68;
    const double C444 = C411 / C68;
    const double C443 = C110 * C410;
    const double C442 = C96 * C409;
    const double C441 = C110 * C408;
    const double C440 = 2 * C407;
    const double C439 = C96 * C406;
    const double C438 = C110 * C405;
    const double C437 = 2 * C404;
    const double C436 = C96 * C403;
    const double C435 = C402 * C110;
    const double C434 = C400 * C96;
    const double C484 = C463 / C68;
    const double C483 = C393 * C451;
    const double C482 = C462 / C68;
    const double C481 = C393 * C442;
    const double C480 = C460 - C461;
    const double C479 = C109 + C459;
    const double C478 = C458 - C97;
    const double C477 = C456 - C457;
    const double C476 = C454 / C68;
    const double C475 = C65 * C453;
    const double C474 = C449 / C68;
    const double C473 = C64 * C448;
    const double C472 = C109 + C447;
    const double C471 = C446 - C97;
    const double C470 = C444 - C445;
    const double C469 = C440 / C68;
    const double C468 = C64 * C439;
    const double C467 = C437 / C68;
    const double C466 = C65 * C436;
    const double C465 = C109 + C435;
    const double C464 = C434 - C97;
    const double C499 = C483 / C86;
    const double C498 = C481 / C86;
    const double C497 = C480 - C431;
    const double C496 = C479 * C71;
    const double C495 = C478 * C71;
    const double C494 = C477 - C426;
    const double C493 = C475 / C86;
    const double C492 = C473 / C86;
    const double C491 = C472 * C71;
    const double C490 = C471 * C71;
    const double C489 = C470 - C413;
    const double C488 = C468 / C86;
    const double C487 = C466 / C86;
    const double C486 = C465 * C71;
    const double C485 = C464 * C71;
    const double C508 = C499 - C484;
    const double C507 = C498 - C482;
    const double C506 = C393 * C485;
    const double C505 = C64 * C495;
    const double C504 = C493 - C476;
    const double C503 = C492 - C474;
    const double C502 = C65 * C490;
    const double C501 = C488 - C469;
    const double C500 = C487 - C467;
    const double C511 = C506 / C86;
    const double C510 = C505 / C86;
    const double C509 = C502 / C86;
    const double C514 = C497 + C511;
    const double C513 = C494 + C510;
    const double C512 = C489 + C509;
    const double d2nexx100000 =
        (2 * Pi *
         ((C59 * C485) / C86 -
          (C204 + C204 +
           (C75 * ((-4 * C98) / C68 - (C72 * C171) / C68) * be) / C68) +
          (C118 * C171) / C401 + C205 + C205 +
          C63 * ((4 * C249) / C68 + (C105 * C486) / C86)) *
         C64 * C65) /
        C68;
    const double d2nexx010000 =
        (2 * Pi *
         (C514 * C64 * C236 +
          ((C241 * C171) / C68 - C267 - C267 + (C393 * C111 * C486) / C86) *
              C64 * C237)) /
        C68;
    const double d2nexx001000 =
        (2 * Pi *
         (C514 * C311 +
          ((C315 * C171) / C68 - C335 - C335 + (C393 * C113 * C486) / C86) *
              C312) *
         C65) /
        C68;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx100000;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += d2nexx010000;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += d2nexx001000;
    const double d2nexy100000 =
        (2 * Pi *
         (C188 * C197 + C500 * C59 + C206 * C176 +
          ((C196 * C112) / C68 + C65 * ((C105 * C438) / C86 - C199)) * C63) *
         C64) /
        C68;
    const double d2nexy010000 =
        (2 * Pi *
         ((C289 * C106) / C68 +
          ((C236 * C436) / C86 - C281 * C157 - C277 * C242 +
           C237 * ((C111 * C438) / C86 - C271)) *
              C393) *
         C64) /
        C68;
    const double d2nexy001000 =
        (2 * Pi *
         ((C500 * C393 - (C188 * C106) / C68) * C311 +
          (((C65 * C113 * C438) / C86 - (C316 * C112) / C68) * C393 -
           (C342 * C106) / C68) *
              C312)) /
        C68;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy100000;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += d2nexy010000;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += d2nexy001000;
    const double d2nexz100000 =
        (2 * Pi *
         (C191 * C197 + C501 * C59 + C207 * C176 +
          ((C196 * C114) / C68 + C64 * ((C105 * C441) / C86 - C201)) * C63) *
         C65) /
        C68;
    const double d2nexz010000 =
        (2 * Pi *
         ((C501 * C393 - (C191 * C106) / C68) * C236 +
          (((C64 * C111 * C441) / C86 - (C242 * C114) / C68) * C393 -
           (C278 * C106) / C68) *
              C237)) /
        C68;
    const double d2nexz001000 =
        (2 * Pi *
         ((C355 * C106) / C68 +
          ((C311 * C439) / C86 - C347 * C157 - C344 * C316 +
           C312 * ((C113 * C441) / C86 - C271)) *
              C393) *
         C65) /
        C68;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz100000;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += d2nexz010000;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += d2nexz001000;
    const double d2neyx100000 =
        (2 * Pi *
         ((C214 * C112) / C68 +
          ((C59 * C442) / C86 - C195 * C160 - C172 * C189 +
           C63 * ((C105 * C443) / C86 - C199)) *
              C65) *
         C64) /
        C68;
    const double d2neyx010000 =
        (2 * Pi *
         (C273 * C283 + C507 * C236 + C279 * C280 +
          ((C259 * C106) / C68 + C393 * ((C111 * C443) / C86 - C271)) * C237) *
         C64) /
        C68;
    const double d2neyx001000 =
        (2 * Pi *
         ((C507 * C65 - (C273 * C112) / C68) * C311 +
          (((C393 * C113 * C443) / C86 - (C317 * C106) / C68) * C65 -
           (C345 * C112) / C68) *
              C312)) /
        C68;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx100000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += d2neyx010000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += d2neyx001000;
    const double d2neyy100000 =
        (2 * Pi *
         (C512 * C59 +
          ((C118 * C183) / C68 - C210 - C210 + (C65 * C105 * C491) / C86) *
              C63) *
         C64) /
        C68;
    const double d2neyy010000 =
        (2 * Pi *
         ((C236 * C490) / C86 -
          (C286 + C286 +
           (C75 * ((-4 * C102) / C68 - (C80 * C183) / C68) * be) / C68) +
          (C241 * C183) / C401 + C284 + C284 +
          C237 * ((4 * C177) / C68 + (C111 * C491) / C86)) *
         C393 * C64) /
        C68;
    const double d2neyy001000 =
        (2 * Pi *
         (C512 * C393 * C311 +
          ((C315 * C183) / C68 - C341 - C341 + (C65 * C113 * C491) / C86) *
              C393 * C312)) /
        C68;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy100000;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += d2neyy010000;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += d2neyy001000;
    const double d2neyz100000 =
        (2 * Pi *
         ((C503 * C65 - (C191 * C112) / C68) * C59 +
          (((C64 * C105 * C450) / C86 - (C189 * C114) / C68) * C65 -
           (C207 * C112) / C68) *
              C63)) /
        C68;
    const double d2neyz010000 =
        (2 * Pi *
         (C191 * C283 + C503 * C236 + C278 * C280 +
          ((C259 * C114) / C68 + C64 * ((C111 * C450) / C86 - C201)) * C237) *
         C393) /
        C68;
    const double d2neyz001000 =
        (2 * Pi *
         ((C355 * C112) / C68 +
          ((C311 * C448) / C86 - C347 * C160 - C344 * C317 +
           C312 * ((C113 * C450) / C86 - C199)) *
              C65) *
         C393) /
        C68;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz100000;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += d2neyz010000;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += d2neyz001000;
    const double d2nezx100000 =
        (2 * Pi *
         ((C214 * C114) / C68 +
          ((C59 * C451) / C86 - C195 * C163 - C172 * C192 +
           C63 * ((C105 * C452) / C86 - C201)) *
              C64) *
         C65) /
        C68;
    const double d2nezx010000 =
        (2 * Pi *
         ((C508 * C64 - (C273 * C114) / C68) * C236 +
          (((C393 * C111 * C452) / C86 - (C250 * C106) / C68) * C64 -
           (C279 * C114) / C68) *
              C237)) /
        C68;
    const double d2nezx001000 =
        (2 * Pi *
         (C273 * C349 + C508 * C311 + C345 * C346 +
          ((C331 * C106) / C68 + C393 * ((C113 * C452) / C86 - C271)) * C312) *
         C65) /
        C68;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx100000;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += d2nezx010000;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += d2nezx001000;
    const double d2nezy100000 =
        (2 * Pi *
         ((C504 * C64 - (C188 * C114) / C68) * C59 +
          (((C65 * C105 * C455) / C86 - (C192 * C112) / C68) * C64 -
           (C206 * C114) / C68) *
              C63)) /
        C68;
    const double d2nezy010000 =
        (2 * Pi *
         ((C289 * C114) / C68 +
          ((C236 * C453) / C86 - C281 * C163 - C277 * C250 +
           C237 * ((C111 * C455) / C86 - C201)) *
              C64) *
         C393) /
        C68;
    const double d2nezy001000 =
        (2 * Pi *
         (C188 * C349 + C504 * C311 + C342 * C346 +
          ((C331 * C112) / C68 + C65 * ((C113 * C455) / C86 - C199)) * C312) *
         C393) /
        C68;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy100000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += d2nezy010000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += d2nezy001000;
    const double d2nezz100000 =
        (2 * Pi *
         (C513 * C65 * C59 +
          ((C118 * C185) / C68 - C211 - C211 + (C64 * C105 * C496) / C86) *
              C65 * C63)) /
        C68;
    const double d2nezz010000 =
        (2 * Pi *
         (C513 * C236 +
          ((C241 * C185) / C68 - C275 - C275 + (C64 * C111 * C496) / C86) *
              C237) *
         C393) /
        C68;
    const double d2nezz001000 =
        (2 * Pi *
         ((C311 * C495) / C86 -
          (C352 + C352 +
           (C75 * ((-4 * C104) / C68 - (C83 * C185) / C68) * be) / C68) +
          (C315 * C185) / C401 + C350 + C350 +
          C312 * ((4 * C180) / C68 + (C113 * C496) / C86)) *
         C65 * C393) /
        C68;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz100000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += d2nezz010000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += d2nezz001000;
}
