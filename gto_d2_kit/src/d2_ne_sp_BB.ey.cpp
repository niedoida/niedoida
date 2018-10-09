/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sp_BB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_01_22(double ae,
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
    const double C357 = yA - yB;
    const double C362 = zA - zB;
    const double C371 = std::pow(C362, 2);
    const double C370 = std::pow(C357, 2);
    const double C369 = 2 * C351;
    const double C368 = std::pow(C350, 2);
    const double C367 = ae * be;
    const double C375 = C371 * C367;
    const double C374 = C370 * C367;
    const double C373 = std::pow(C369, -1);
    const double C372 = C368 * C367;
    const double C378 = C375 / C351;
    const double C377 = C374 / C351;
    const double C376 = C372 / C351;
    const double C381 = -C378;
    const double C380 = -C377;
    const double C379 = -C376;
    const double C384 = std::exp(C381);
    const double C383 = std::exp(C380);
    const double C382 = std::exp(C379);
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C367) / (ae + be));
    const double C61 = (C382 * C350 * ae) / C351;
    const double C63 = C373 * C382;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C367) / C351);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C367) / C351);
    const double C233 = (C383 * C357 * ae) / C351;
    const double C234 = C373 * C383;
    const double C304 = (C384 * C362 * ae) / C351;
    const double C305 = C373 * C384;
    const double C83 = zA - zB;
    const double C82 = be * zB;
    const double C81 = ae * zA;
    const double C80 = yA - yB;
    const double C79 = be * yB;
    const double C78 = ae * yA;
    const double C77 = bs[3];
    const double C76 = 0 * ae;
    const double C75 = std::pow(be, 2);
    const double C74 = bs[2];
    const double C73 = bs[1];
    const double C72 = be * xB;
    const double C71 = ae * xA;
    const double C70 = 0 * be;
    const double C69 = ae + be;
    const double C68 = xA - xB;
    const double C67 = ae * be;
    const double C66 = bs[0];
    const double C93 = C67 * C83;
    const double C92 = C81 + C82;
    const double C91 = C67 * C80;
    const double C90 = C78 + C79;
    const double C89 = C76 / C69;
    const double C88 = 2 * C69;
    const double C87 = C71 + C72;
    const double C86 = std::pow(C69, 2);
    const double C85 = 2 * C67;
    const double C84 = C67 * C68;
    const double C103 = C93 * C64;
    const double C102 = C92 / C69;
    const double C101 = C91 * C65;
    const double C100 = C90 / C69;
    const double C99 = -C88;
    const double C98 = C73 * C88;
    const double C97 = std::pow(C88, 2);
    const double C96 = C87 / C69;
    const double C95 = 2 * C86;
    const double C94 = C84 * C59;
    const double C114 = 2 * C103;
    const double C113 = C102 - zC;
    const double C112 = 2 * C101;
    const double C111 = C100 - yC;
    const double C110 = std::pow(C99, 3);
    const double C109 = C74 * C97;
    const double C108 = C98 * be;
    const double C107 = C94 / C86;
    const double C106 = C96 - xC;
    const double C105 = C70 / C95;
    const double C104 = 2 * C94;
    const double C135 = std::pow(C113, 2);
    const double C134 = C83 * C114;
    const double C133 = C113 * C111;
    const double C132 = C113 * C106;
    const double C131 = C111 * C113;
    const double C130 = std::pow(C111, 2);
    const double C129 = C80 * C112;
    const double C128 = C111 * C106;
    const double C127 = C106 * C113;
    const double C126 = C66 * C114;
    const double C125 = be * C113;
    const double C124 = C89 - C107;
    const double C123 = C106 * C111;
    const double C122 = C66 * C112;
    const double C121 = be * C111;
    const double C120 = -C108;
    const double C119 = C107 - C89;
    const double C118 = C106 * C98;
    const double C117 = std::pow(C106, 2);
    const double C116 = be * C106;
    const double C115 = C68 * C104;
    const double C156 = C134 / C69;
    const double C155 = C133 * C75;
    const double C154 = C132 * C75;
    const double C153 = C131 * C75;
    const double C152 = C129 / C69;
    const double C151 = C128 * C75;
    const double C150 = C119 * C118;
    const double C149 = C118 * C114;
    const double C148 = C125 * C74;
    const double C147 = C127 * C75;
    const double C146 = C126 / C69;
    const double C145 = C125 * C73;
    const double C144 = C118 * C112;
    const double C143 = C121 * C74;
    const double C142 = C123 * C75;
    const double C141 = C122 / C69;
    const double C140 = C121 * C73;
    const double C139 = C116 * C74;
    const double C138 = C120 / C69;
    const double C137 = C116 * C73;
    const double C136 = C115 / C69;
    const double C169 = C64 - C156;
    const double C168 = C145 * C114;
    const double C167 = C65 - C152;
    const double C166 = C140 * C112;
    const double C165 = C149 / C69;
    const double C164 = C148 * C88;
    const double C163 = 2 * C145;
    const double C162 = C144 / C69;
    const double C161 = C143 * C88;
    const double C160 = 2 * C140;
    const double C159 = C139 * C88;
    const double C158 = 2 * C137;
    const double C157 = C59 - C136;
    const double C183 = C169 * C85;
    const double C182 = 2 * C168;
    const double C181 = C167 * C85;
    const double C180 = 2 * C166;
    const double C179 = C61 * C158;
    const double C178 = C164 * be;
    const double C177 = -2 * C164;
    const double C176 = C64 * C163;
    const double C175 = C161 * be;
    const double C174 = -2 * C161;
    const double C173 = C65 * C160;
    const double C172 = -2 * C159;
    const double C171 = C157 * ae;
    const double C170 = C157 * C85;
    const double C191 = -2 * C178;
    const double C190 = C106 * C177;
    const double C189 = C176 - C146;
    const double C188 = -2 * C175;
    const double C187 = C106 * C174;
    const double C186 = C173 - C141;
    const double C185 = C106 * C172;
    const double C184 = C171 / C69;
    const double C200 = C190 * C114;
    const double C199 = C187 * C112;
    const double C198 = C191 / C69;
    const double C197 = C64 * C190;
    const double C196 = C188 / C69;
    const double C195 = C65 * C187;
    const double C194 = C184 - C105;
    const double C193 = C138 - C185;
    const double C192 = C105 - C184;
    const double C208 = C200 / C69;
    const double C207 = C199 / C69;
    const double C206 = C63 * C193;
    const double C205 = C192 * C66;
    const double C204 = C197 + C165;
    const double C203 = C195 + C162;
    const double C202 = C119 * C193;
    const double C201 = C192 * C158;
    const double C209 = C205 - C179;
    const double C210 = C209 - C150;
    const double C211 = C210 + C206;
    const double C249 = C66 * C104;
    const double C248 = C59 * C158;
    const double C247 = C111 * C177;
    const double C246 = C159 * be;
    const double C245 = C111 * C174;
    const double C244 = 0 * ae;
    const double C243 = C101 / C86;
    const double C242 = C233 * C160;
    const double C241 = C167 * ae;
    const double C240 = 0 * be;
    const double C239 = C111 * C172;
    const double C238 = C111 * C98;
    const double C237 = C137 * C104;
    const double C262 = C247 * C114;
    const double C261 = C238 * C104;
    const double C260 = C59 * C239;
    const double C259 = C249 / C69;
    const double C258 = C238 * C114;
    const double C257 = C64 * C247;
    const double C256 = -2 * C246;
    const double C255 = C138 - C245;
    const double C254 = C244 / C69;
    const double C253 = C241 / C69;
    const double C252 = C240 / C95;
    const double C251 = C239 * C104;
    const double C250 = 2 * C237;
    const double C273 = C262 / C69;
    const double C272 = C254 - C243;
    const double C271 = C261 / C69;
    const double C270 = C253 - C252;
    const double C269 = C248 - C259;
    const double C268 = C258 / C69;
    const double C267 = C256 / C69;
    const double C266 = C234 * C255;
    const double C265 = C243 - C254;
    const double C264 = C252 - C253;
    const double C263 = C251 / C69;
    const double C279 = C265 * C255;
    const double C278 = C264 * C160;
    const double C277 = C260 + C271;
    const double C276 = C257 + C268;
    const double C275 = C265 * C238;
    const double C274 = C264 * C66;
    const double C280 = C274 - C242;
    const double C281 = C280 - C275;
    const double C282 = C281 + C266;
    const double C316 = C113 * C177;
    const double C315 = 0 * ae;
    const double C314 = C103 / C86;
    const double C313 = C304 * C163;
    const double C312 = C169 * ae;
    const double C311 = 0 * be;
    const double C310 = C113 * C174;
    const double C309 = C113 * C172;
    const double C308 = C113 * C98;
    const double C326 = C310 * C112;
    const double C325 = C308 * C104;
    const double C324 = C59 * C309;
    const double C323 = C138 - C316;
    const double C322 = C315 / C69;
    const double C321 = C312 / C69;
    const double C320 = C311 / C95;
    const double C319 = C308 * C112;
    const double C318 = C65 * C310;
    const double C317 = C309 * C104;
    const double C335 = C322 - C314;
    const double C334 = C321 - C320;
    const double C333 = C326 / C69;
    const double C332 = C325 / C69;
    const double C331 = C305 * C323;
    const double C330 = C314 - C322;
    const double C329 = C320 - C321;
    const double C328 = C319 / C69;
    const double C327 = C317 / C69;
    const double C341 = C330 * C323;
    const double C340 = C329 * C163;
    const double C339 = C324 + C332;
    const double C338 = C330 * C308;
    const double C337 = C329 * C66;
    const double C336 = C318 + C328;
    const double C342 = C337 - C313;
    const double C343 = C342 - C338;
    const double C344 = C343 + C331;
    const double C421 = C145 * C104;
    const double C420 = C140 * C104;
    const double C419 = C250 / C69;
    const double C418 = C66 * C170;
    const double C417 = -C250;
    const double C416 = C135 * C77;
    const double C415 = C135 * C74;
    const double C414 = C182 / C69;
    const double C413 = C66 * C183;
    const double C412 = -C182;
    const double C411 = C77 * C155;
    const double C410 = C145 * C112;
    const double C409 = C74 * C155;
    const double C408 = C77 * C154;
    const double C407 = C74 * C154;
    const double C406 = C77 * C153;
    const double C405 = C140 * C114;
    const double C404 = C74 * C153;
    const double C403 = C130 * C77;
    const double C402 = C130 * C74;
    const double C401 = C180 / C69;
    const double C400 = C66 * C181;
    const double C399 = -C180;
    const double C398 = C77 * C151;
    const double C397 = C74 * C151;
    const double C396 = C77 * C147;
    const double C395 = C137 * C114;
    const double C394 = C74 * C147;
    const double C393 = C77 * C142;
    const double C392 = C137 * C112;
    const double C391 = C74 * C142;
    const double C390 = C117 * C77;
    const double C389 = C117 * C74;
    const double C451 = 2 * C421;
    const double C450 = 2 * C420;
    const double C449 = C418 / C69;
    const double C448 = C417 / C69;
    const double C447 = C416 * C110;
    const double C446 = C415 * C97;
    const double C445 = C413 / C69;
    const double C444 = C412 / C69;
    const double C443 = C110 * C411;
    const double C442 = 2 * C410;
    const double C441 = C97 * C409;
    const double C440 = C110 * C408;
    const double C439 = C97 * C407;
    const double C438 = C110 * C406;
    const double C437 = 2 * C405;
    const double C436 = C97 * C404;
    const double C435 = C403 * C110;
    const double C434 = C402 * C97;
    const double C433 = C400 / C69;
    const double C432 = C399 / C69;
    const double C431 = C110 * C398;
    const double C430 = C97 * C397;
    const double C429 = C110 * C396;
    const double C428 = 2 * C395;
    const double C427 = C97 * C394;
    const double C426 = C110 * C393;
    const double C425 = 2 * C392;
    const double C424 = C97 * C391;
    const double C423 = C390 * C110;
    const double C422 = C389 * C97;
    const double C472 = C451 / C69;
    const double C471 = C59 * C439;
    const double C470 = C450 / C69;
    const double C469 = C59 * C430;
    const double C468 = C448 - C449;
    const double C467 = C109 + C447;
    const double C466 = C446 - C98;
    const double C465 = C444 - C445;
    const double C464 = C442 / C69;
    const double C463 = C65 * C441;
    const double C462 = C437 / C69;
    const double C461 = C64 * C436;
    const double C460 = C109 + C435;
    const double C459 = C434 - C98;
    const double C458 = C432 - C433;
    const double C457 = C428 / C69;
    const double C456 = C64 * C427;
    const double C455 = C425 / C69;
    const double C454 = C65 * C424;
    const double C453 = C109 + C423;
    const double C452 = C422 - C98;
    const double C487 = C471 / C86;
    const double C486 = C469 / C86;
    const double C485 = C468 - C419;
    const double C484 = C467 * C75;
    const double C483 = C466 * C75;
    const double C482 = C465 - C414;
    const double C481 = C463 / C86;
    const double C480 = C461 / C86;
    const double C479 = C460 * C75;
    const double C478 = C459 * C75;
    const double C477 = C458 - C401;
    const double C476 = C456 / C86;
    const double C475 = C454 / C86;
    const double C474 = C453 * C75;
    const double C473 = C452 * C75;
    const double C496 = C487 - C472;
    const double C495 = C486 - C470;
    const double C494 = C59 * C473;
    const double C493 = C64 * C483;
    const double C492 = C481 - C464;
    const double C491 = C480 - C462;
    const double C490 = C65 * C478;
    const double C489 = C476 - C457;
    const double C488 = C475 - C455;
    const double C499 = C494 / C86;
    const double C498 = C493 / C86;
    const double C497 = C490 / C86;
    const double C502 = C485 + C499;
    const double C501 = C482 + C498;
    const double C500 = C477 + C497;
    const double d2nexx000100 =
        (2 * Pi *
         ((C66 * ((-4 * C94) / C69 - (C68 * C170) / C69) * ae) / C69 - C201 -
          C201 + (C61 * C473) / C86 + (C118 * C170) / C95 + C202 + C202 +
          C63 * ((4 * C246) / C69 + (C106 * C474) / C86)) *
         C64 * C65) /
        C69;
    const double d2nexx000010 =
        (2 * Pi *
         (C502 * C64 * C233 +
          ((C238 * C170) / C69 - C263 - C263 + (C59 * C111 * C474) / C86) *
              C64 * C234)) /
        C69;
    const double d2nexx000001 =
        (2 * Pi *
         (C502 * C304 +
          ((C308 * C170) / C69 - C327 - C327 + (C59 * C113 * C474) / C86) *
              C305) *
         C65) /
        C69;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx000010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx000001;
    const double d2nexy000100 =
        (2 * Pi *
         (C186 * C194 + C488 * C61 + C203 * C124 +
          ((C193 * C112) / C69 + C65 * ((C106 * C426) / C86 - C196)) * C63) *
         C64) /
        C69;
    const double d2nexy000010 =
        (2 * Pi *
         ((C282 * C104) / C69 +
          ((C233 * C424) / C86 - C264 * C158 - C265 * C239 +
           C234 * ((C111 * C426) / C86 - C267)) *
              C59) *
         C64) /
        C69;
    const double d2nexy000001 =
        (2 * Pi *
         ((C488 * C59 - (C186 * C104) / C69) * C304 +
          (((C65 * C113 * C426) / C86 - (C309 * C112) / C69) * C59 -
           (C336 * C104) / C69) *
              C305)) /
        C69;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy000010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy000001;
    const double d2nexz000100 =
        (2 * Pi *
         (C189 * C194 + C489 * C61 + C204 * C124 +
          ((C193 * C114) / C69 + C64 * ((C106 * C429) / C86 - C198)) * C63) *
         C65) /
        C69;
    const double d2nexz000010 =
        (2 * Pi *
         ((C489 * C59 - (C189 * C104) / C69) * C233 +
          (((C64 * C111 * C429) / C86 - (C239 * C114) / C69) * C59 -
           (C276 * C104) / C69) *
              C234)) /
        C69;
    const double d2nexz000001 =
        (2 * Pi *
         ((C344 * C104) / C69 +
          ((C304 * C427) / C86 - C329 * C158 - C330 * C309 +
           C305 * ((C113 * C429) / C86 - C267)) *
              C59) *
         C65) /
        C69;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz000010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz000001;
    const double d2neyx000100 =
        (2 * Pi *
         ((C211 * C112) / C69 +
          ((C61 * C430) / C86 - C192 * C160 - C119 * C187 +
           C63 * ((C106 * C431) / C86 - C196)) *
              C65) *
         C64) /
        C69;
    const double d2neyx000010 =
        (2 * Pi *
         (C269 * C270 + C495 * C233 + C277 * C272 +
          ((C255 * C104) / C69 + C59 * ((C111 * C431) / C86 - C267)) * C234) *
         C64) /
        C69;
    const double d2neyx000001 =
        (2 * Pi *
         ((C495 * C65 - (C269 * C112) / C69) * C304 +
          (((C59 * C113 * C431) / C86 - (C310 * C104) / C69) * C65 -
           (C339 * C112) / C69) *
              C305)) /
        C69;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx000010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx000001;
    const double d2neyy000100 =
        (2 * Pi *
         (C500 * C61 +
          ((C118 * C181) / C69 - C207 - C207 + (C65 * C106 * C479) / C86) *
              C63) *
         C64) /
        C69;
    const double d2neyy000010 =
        (2 * Pi *
         ((C66 * ((-4 * C101) / C69 - (C80 * C181) / C69) * ae) / C69 - C278 -
          C278 + (C233 * C478) / C86 + (C238 * C181) / C95 + C279 + C279 +
          C234 * ((4 * C175) / C69 + (C111 * C479) / C86)) *
         C59 * C64) /
        C69;
    const double d2neyy000001 =
        (2 * Pi *
         (C500 * C59 * C304 +
          ((C308 * C181) / C69 - C333 - C333 + (C65 * C113 * C479) / C86) *
              C59 * C305)) /
        C69;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy000010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy000001;
    const double d2neyz000100 =
        (2 * Pi *
         ((C491 * C65 - (C189 * C112) / C69) * C61 +
          (((C64 * C106 * C438) / C86 - (C187 * C114) / C69) * C65 -
           (C204 * C112) / C69) *
              C63)) /
        C69;
    const double d2neyz000010 =
        (2 * Pi *
         (C189 * C270 + C491 * C233 + C276 * C272 +
          ((C255 * C114) / C69 + C64 * ((C111 * C438) / C86 - C198)) * C234) *
         C59) /
        C69;
    const double d2neyz000001 =
        (2 * Pi *
         ((C344 * C112) / C69 +
          ((C304 * C436) / C86 - C329 * C160 - C330 * C310 +
           C305 * ((C113 * C438) / C86 - C196)) *
              C65) *
         C59) /
        C69;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz000010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz000001;
    const double d2nezx000100 =
        (2 * Pi *
         ((C211 * C114) / C69 +
          ((C61 * C439) / C86 - C192 * C163 - C119 * C190 +
           C63 * ((C106 * C440) / C86 - C198)) *
              C64) *
         C65) /
        C69;
    const double d2nezx000010 =
        (2 * Pi *
         ((C496 * C64 - (C269 * C114) / C69) * C233 +
          (((C59 * C111 * C440) / C86 - (C247 * C104) / C69) * C64 -
           (C277 * C114) / C69) *
              C234)) /
        C69;
    const double d2nezx000001 =
        (2 * Pi *
         (C269 * C334 + C496 * C304 + C339 * C335 +
          ((C323 * C104) / C69 + C59 * ((C113 * C440) / C86 - C267)) * C305) *
         C65) /
        C69;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx000010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx000001;
    const double d2nezy000100 =
        (2 * Pi *
         ((C492 * C64 - (C186 * C114) / C69) * C61 +
          (((C65 * C106 * C443) / C86 - (C190 * C112) / C69) * C64 -
           (C203 * C114) / C69) *
              C63)) /
        C69;
    const double d2nezy000010 =
        (2 * Pi *
         ((C282 * C114) / C69 +
          ((C233 * C441) / C86 - C264 * C163 - C265 * C247 +
           C234 * ((C111 * C443) / C86 - C198)) *
              C64) *
         C59) /
        C69;
    const double d2nezy000001 =
        (2 * Pi *
         (C186 * C334 + C492 * C304 + C336 * C335 +
          ((C323 * C112) / C69 + C65 * ((C113 * C443) / C86 - C196)) * C305) *
         C59) /
        C69;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy000010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy000001;
    const double d2nezz000100 =
        (2 * Pi *
         (C501 * C65 * C61 +
          ((C118 * C183) / C69 - C208 - C208 + (C64 * C106 * C484) / C86) *
              C65 * C63)) /
        C69;
    const double d2nezz000010 =
        (2 * Pi *
         (C501 * C233 +
          ((C238 * C183) / C69 - C273 - C273 + (C64 * C111 * C484) / C86) *
              C234) *
         C59) /
        C69;
    const double d2nezz000001 =
        (2 * Pi *
         ((C66 * ((-4 * C103) / C69 - (C83 * C183) / C69) * ae) / C69 - C340 -
          C340 + (C304 * C483) / C86 + (C308 * C183) / C95 + C341 + C341 +
          C305 * ((4 * C178) / C69 + (C113 * C484) / C86)) *
         C65 * C59) /
        C69;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz000010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz000001;
}
