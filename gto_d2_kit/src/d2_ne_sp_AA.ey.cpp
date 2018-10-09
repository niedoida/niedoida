/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sp_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_01_11(double ae,
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
    const double C342 = ae + be;
    const double C341 = xA - xB;
    const double C348 = yA - yB;
    const double C353 = zA - zB;
    const double C362 = std::pow(C353, 2);
    const double C361 = std::pow(C348, 2);
    const double C360 = 2 * C342;
    const double C359 = std::pow(C341, 2);
    const double C358 = ae * be;
    const double C366 = C362 * C358;
    const double C365 = C361 * C358;
    const double C364 = std::pow(C360, -1);
    const double C363 = C359 * C358;
    const double C369 = C366 / C342;
    const double C368 = C365 / C342;
    const double C367 = C363 / C342;
    const double C372 = -C369;
    const double C371 = -C368;
    const double C370 = -C367;
    const double C375 = std::exp(C372);
    const double C374 = std::exp(C371);
    const double C373 = std::exp(C370);
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C358) / (ae + be));
    const double C61 = (C373 * C341 * ae) / C342;
    const double C63 = C364 * C373;
    const double C64 = std::exp(-(std::pow(zA - zB, 2) * C358) / C342);
    const double C65 = std::exp(-(std::pow(yA - yB, 2) * C358) / C342);
    const double C231 = (C374 * C348 * ae) / C342;
    const double C232 = C364 * C374;
    const double C299 = (C375 * C353 * ae) / C342;
    const double C300 = C364 * C375;
    const double C83 = be * zB;
    const double C82 = ae * zA;
    const double C81 = zA - zB;
    const double C80 = be * yB;
    const double C79 = ae * yA;
    const double C78 = yA - yB;
    const double C77 = bs[3];
    const double C76 = 0 * ae;
    const double C75 = std::pow(ae, 2);
    const double C74 = bs[2];
    const double C73 = bs[1];
    const double C72 = be * xB;
    const double C71 = ae * xA;
    const double C70 = 0 * be;
    const double C69 = ae + be;
    const double C68 = xA - xB;
    const double C67 = ae * be;
    const double C66 = bs[0];
    const double C93 = C82 + C83;
    const double C92 = C67 * C81;
    const double C91 = C79 + C80;
    const double C90 = C67 * C78;
    const double C89 = C76 / C69;
    const double C88 = 2 * C69;
    const double C87 = C71 + C72;
    const double C86 = std::pow(C69, 2);
    const double C85 = 2 * C67;
    const double C84 = C67 * C68;
    const double C103 = C93 / C69;
    const double C102 = C92 * C64;
    const double C101 = C91 / C69;
    const double C100 = C90 * C65;
    const double C99 = -C88;
    const double C98 = C73 * C88;
    const double C97 = std::pow(C88, 2);
    const double C96 = C87 / C69;
    const double C95 = 2 * C86;
    const double C94 = C84 * C59;
    const double C114 = C103 - zC;
    const double C113 = 2 * C102;
    const double C112 = C101 - yC;
    const double C111 = 2 * C100;
    const double C110 = std::pow(C99, 3);
    const double C109 = C74 * C97;
    const double C108 = C98 * ae;
    const double C107 = C94 / C86;
    const double C106 = C96 - xC;
    const double C105 = C70 / C95;
    const double C104 = 2 * C94;
    const double C134 = std::pow(C114, 2);
    const double C133 = C81 * C113;
    const double C132 = C114 * C112;
    const double C131 = C114 * C106;
    const double C130 = C112 * C114;
    const double C129 = std::pow(C112, 2);
    const double C128 = C78 * C111;
    const double C127 = C112 * C106;
    const double C126 = C66 * C113;
    const double C125 = ae * C114;
    const double C124 = C106 * C114;
    const double C123 = C66 * C111;
    const double C122 = ae * C112;
    const double C121 = C106 * C112;
    const double C120 = -C108;
    const double C119 = C89 - C107;
    const double C118 = C106 * C98;
    const double C117 = std::pow(C106, 2);
    const double C116 = ae * C106;
    const double C115 = C68 * C104;
    const double C155 = C133 / C69;
    const double C154 = C132 * C75;
    const double C153 = C131 * C75;
    const double C152 = C130 * C75;
    const double C151 = C128 / C69;
    const double C150 = C119 * C118;
    const double C149 = C127 * C75;
    const double C148 = C125 * C74;
    const double C147 = C118 * C113;
    const double C146 = C126 / C69;
    const double C145 = C125 * C73;
    const double C144 = C124 * C75;
    const double C143 = C122 * C74;
    const double C142 = C118 * C111;
    const double C141 = C123 / C69;
    const double C140 = C122 * C73;
    const double C139 = C121 * C75;
    const double C138 = C116 * C74;
    const double C137 = C120 / C69;
    const double C136 = C116 * C73;
    const double C135 = C115 / C69;
    const double C168 = C64 - C155;
    const double C167 = C145 * C113;
    const double C166 = C65 - C151;
    const double C165 = C140 * C111;
    const double C164 = C148 * C88;
    const double C163 = C147 / C69;
    const double C162 = 2 * C145;
    const double C161 = C143 * C88;
    const double C160 = C142 / C69;
    const double C159 = 2 * C140;
    const double C158 = C138 * C88;
    const double C157 = 2 * C136;
    const double C156 = C59 - C135;
    const double C182 = C168 * C85;
    const double C181 = 2 * C167;
    const double C180 = C166 * C85;
    const double C179 = 2 * C165;
    const double C178 = C61 * C157;
    const double C177 = C164 * ae;
    const double C176 = -2 * C164;
    const double C175 = C64 * C162;
    const double C174 = C161 * ae;
    const double C173 = -2 * C161;
    const double C172 = C65 * C159;
    const double C171 = -2 * C158;
    const double C170 = C156 * ae;
    const double C169 = C156 * C85;
    const double C192 = C181 / C69;
    const double C191 = C179 / C69;
    const double C190 = -2 * C177;
    const double C189 = C106 * C176;
    const double C188 = C175 + C146;
    const double C187 = -2 * C174;
    const double C186 = C106 * C173;
    const double C185 = C172 + C141;
    const double C184 = C106 * C171;
    const double C183 = C170 / C69;
    const double C200 = C189 * C113;
    const double C199 = C186 * C111;
    const double C198 = C190 / C69;
    const double C197 = C64 * C189;
    const double C196 = C187 / C69;
    const double C195 = C65 * C186;
    const double C194 = C137 - C184;
    const double C193 = C183 - C105;
    const double C206 = C63 * C194;
    const double C205 = C193 * C66;
    const double C204 = C163 - C197;
    const double C203 = C160 - C195;
    const double C202 = C119 * C194;
    const double C201 = C193 * C157;
    const double C207 = C205 - C178;
    const double C208 = C207 - C150;
    const double C209 = C208 + C206;
    const double C247 = C66 * C104;
    const double C246 = C59 * C157;
    const double C245 = C112 * C176;
    const double C244 = C112 * C173;
    const double C243 = C231 * C159;
    const double C242 = C158 * ae;
    const double C241 = C100 / C86;
    const double C240 = 0 * ae;
    const double C239 = 0 * be;
    const double C238 = C166 * ae;
    const double C237 = C112 * C171;
    const double C236 = C112 * C98;
    const double C235 = C136 * C104;
    const double C260 = C245 * C113;
    const double C259 = C59 * C237;
    const double C258 = C236 * C104;
    const double C257 = C247 / C69;
    const double C256 = C64 * C245;
    const double C255 = C236 * C113;
    const double C254 = C137 - C244;
    const double C253 = -2 * C242;
    const double C252 = C240 / C69;
    const double C251 = C239 / C95;
    const double C250 = C238 / C69;
    const double C249 = C237 * C104;
    const double C248 = 2 * C235;
    const double C268 = C258 / C69;
    const double C267 = C246 + C257;
    const double C266 = C255 / C69;
    const double C265 = C232 * C254;
    const double C264 = C253 / C69;
    const double C263 = C252 - C241;
    const double C262 = C250 - C251;
    const double C261 = C248 / C69;
    const double C274 = C263 * C254;
    const double C273 = C262 * C159;
    const double C272 = C268 - C259;
    const double C271 = C266 - C256;
    const double C270 = C263 * C236;
    const double C269 = C262 * C66;
    const double C275 = C269 - C243;
    const double C276 = C275 - C270;
    const double C277 = C276 + C265;
    const double C311 = C114 * C176;
    const double C310 = C299 * C162;
    const double C309 = C102 / C86;
    const double C308 = 0 * ae;
    const double C307 = 0 * be;
    const double C306 = C168 * ae;
    const double C305 = C114 * C173;
    const double C304 = C114 * C171;
    const double C303 = C114 * C98;
    const double C321 = C305 * C111;
    const double C320 = C59 * C304;
    const double C319 = C303 * C104;
    const double C318 = C137 - C311;
    const double C317 = C308 / C69;
    const double C316 = C307 / C95;
    const double C315 = C306 / C69;
    const double C314 = C65 * C305;
    const double C313 = C303 * C111;
    const double C312 = C304 * C104;
    const double C326 = C319 / C69;
    const double C325 = C300 * C318;
    const double C324 = C317 - C309;
    const double C323 = C315 - C316;
    const double C322 = C313 / C69;
    const double C332 = C324 * C318;
    const double C331 = C323 * C162;
    const double C330 = C326 - C320;
    const double C329 = C324 * C303;
    const double C328 = C323 * C66;
    const double C327 = C322 - C314;
    const double C333 = C328 - C310;
    const double C334 = C333 - C329;
    const double C335 = C334 + C325;
    const double C406 = C145 * C104;
    const double C405 = C140 * C104;
    const double C404 = C66 * C169;
    const double C403 = C134 * C77;
    const double C402 = C134 * C74;
    const double C401 = C66 * C182;
    const double C400 = C77 * C154;
    const double C399 = C74 * C154;
    const double C398 = C145 * C111;
    const double C397 = C77 * C153;
    const double C396 = C74 * C153;
    const double C395 = C77 * C152;
    const double C394 = C74 * C152;
    const double C393 = C140 * C113;
    const double C392 = C129 * C77;
    const double C391 = C129 * C74;
    const double C390 = C66 * C180;
    const double C389 = C77 * C149;
    const double C388 = C74 * C149;
    const double C387 = C77 * C144;
    const double C386 = C74 * C144;
    const double C385 = C136 * C113;
    const double C384 = C77 * C139;
    const double C383 = C74 * C139;
    const double C382 = C136 * C111;
    const double C381 = C117 * C77;
    const double C380 = C117 * C74;
    const double C433 = 2 * C406;
    const double C432 = 2 * C405;
    const double C431 = C404 / C69;
    const double C430 = C403 * C110;
    const double C429 = C402 * C97;
    const double C428 = C401 / C69;
    const double C427 = C110 * C400;
    const double C426 = C97 * C399;
    const double C425 = 2 * C398;
    const double C424 = C110 * C397;
    const double C423 = C97 * C396;
    const double C422 = C110 * C395;
    const double C421 = C97 * C394;
    const double C420 = 2 * C393;
    const double C419 = C392 * C110;
    const double C418 = C391 * C97;
    const double C417 = C390 / C69;
    const double C416 = C110 * C389;
    const double C415 = C97 * C388;
    const double C414 = C110 * C387;
    const double C413 = C97 * C386;
    const double C412 = 2 * C385;
    const double C411 = C110 * C384;
    const double C410 = C97 * C383;
    const double C409 = 2 * C382;
    const double C408 = C381 * C110;
    const double C407 = C380 * C97;
    const double C454 = C59 * C423;
    const double C453 = C433 / C69;
    const double C452 = C59 * C415;
    const double C451 = C432 / C69;
    const double C450 = C261 - C431;
    const double C449 = C109 + C430;
    const double C448 = C429 - C98;
    const double C447 = C192 - C428;
    const double C446 = C65 * C426;
    const double C445 = C425 / C69;
    const double C444 = C64 * C421;
    const double C443 = C420 / C69;
    const double C442 = C109 + C419;
    const double C441 = C418 - C98;
    const double C440 = C191 - C417;
    const double C439 = C64 * C413;
    const double C438 = C412 / C69;
    const double C437 = C65 * C410;
    const double C436 = C409 / C69;
    const double C435 = C109 + C408;
    const double C434 = C407 - C98;
    const double C469 = C454 / C86;
    const double C468 = C452 / C86;
    const double C467 = C450 + C261;
    const double C466 = C449 * C75;
    const double C465 = C448 * C75;
    const double C464 = C447 + C192;
    const double C463 = C446 / C86;
    const double C462 = C444 / C86;
    const double C461 = C442 * C75;
    const double C460 = C441 * C75;
    const double C459 = C440 + C191;
    const double C458 = C439 / C86;
    const double C457 = C437 / C86;
    const double C456 = C435 * C75;
    const double C455 = C434 * C75;
    const double C478 = C453 + C469;
    const double C477 = C451 + C468;
    const double C476 = C59 * C455;
    const double C475 = C64 * C465;
    const double C474 = C445 + C463;
    const double C473 = C443 + C462;
    const double C472 = C65 * C460;
    const double C471 = C438 + C458;
    const double C470 = C436 + C457;
    const double C481 = C476 / C86;
    const double C480 = C475 / C86;
    const double C479 = C472 / C86;
    const double C484 = C467 + C481;
    const double C483 = C464 + C480;
    const double C482 = C459 + C479;
    const double d2nexx000100 =
        (2 * Pi *
         ((C66 * ((-4 * C94) / C69 - (C68 * C169) / C69) * ae) / C69 - C201 -
          C201 + (C61 * C455) / C86 + (C118 * C169) / C95 + C202 + C202 +
          C63 * ((4 * C242) / C69 + (C106 * C456) / C86)) *
         C64 * C65) /
        C69;
    const double d2nexx000010 =
        (2 * Pi *
         (C484 * C64 * C231 +
          ((C236 * C169 + C249 + C249) / C69 + (C59 * C112 * C456) / C86) *
              C64 * C232)) /
        C69;
    const double d2nexx000001 =
        (2 * Pi *
         (C484 * C299 +
          ((C303 * C169 + C312 + C312) / C69 + (C59 * C114 * C456) / C86) *
              C300) *
         C65) /
        C69;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx000100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx000010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx000001;
    const double d2nexy000100 =
        (2 * Pi *
         (C470 * C61 - C185 * C193 + C203 * C119 +
          (C65 * ((C106 * C411) / C86 - C196) - (C194 * C111) / C69) * C63) *
         C64) /
        C69;
    const double d2nexy000010 =
        (2 * Pi *
         (((C231 * C410) / C86 - C262 * C157 - C263 * C237 +
           C232 * ((C112 * C411) / C86 - C264)) *
              C59 -
          (C277 * C104) / C69) *
         C64) /
        C69;
    const double d2nexy000001 =
        (2 * Pi *
         (((C185 * C104) / C69 + C470 * C59) * C299 +
          (((C304 * C111) / C69 + (C65 * C114 * C411) / C86) * C59 -
           (C327 * C104) / C69) *
              C300)) /
        C69;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy000100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy000010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy000001;
    const double d2nexz000100 =
        (2 * Pi *
         (C471 * C61 - C188 * C193 + C204 * C119 +
          (C64 * ((C106 * C414) / C86 - C198) - (C194 * C113) / C69) * C63) *
         C65) /
        C69;
    const double d2nexz000010 =
        (2 * Pi *
         (((C188 * C104) / C69 + C471 * C59) * C231 +
          (((C237 * C113) / C69 + (C64 * C112 * C414) / C86) * C59 -
           (C271 * C104) / C69) *
              C232)) /
        C69;
    const double d2nexz000001 =
        (2 * Pi *
         (((C299 * C413) / C86 - C323 * C157 - C324 * C304 +
           C300 * ((C114 * C414) / C86 - C264)) *
              C59 -
          (C335 * C104) / C69) *
         C65) /
        C69;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz000100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz000010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz000001;
    const double d2neyx000100 =
        (2 * Pi *
         (((C61 * C415) / C86 - C193 * C159 - C119 * C186 +
           C63 * ((C106 * C416) / C86 - C196)) *
              C65 -
          (C209 * C111) / C69) *
         C64) /
        C69;
    const double d2neyx000010 =
        (2 * Pi *
         (C477 * C231 - C267 * C262 + C272 * C263 +
          (C59 * ((C112 * C416) / C86 - C264) - (C254 * C104) / C69) * C232) *
         C64) /
        C69;
    const double d2neyx000001 =
        (2 * Pi *
         (((C267 * C111) / C69 + C477 * C65) * C299 +
          (((C305 * C104) / C69 + (C59 * C114 * C416) / C86) * C65 -
           (C330 * C111) / C69) *
              C300)) /
        C69;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx000100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx000010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx000001;
    const double d2neyy000100 =
        (2 * Pi *
         (C482 * C61 +
          ((C118 * C180 + C199 + C199) / C69 + (C65 * C106 * C461) / C86) *
              C63) *
         C64) /
        C69;
    const double d2neyy000010 =
        (2 * Pi *
         ((C66 * ((-4 * C100) / C69 - (C78 * C180) / C69) * ae) / C69 - C273 -
          C273 + (C231 * C460) / C86 + (C236 * C180) / C95 + C274 + C274 +
          C232 * ((4 * C174) / C69 + (C112 * C461) / C86)) *
         C59 * C64) /
        C69;
    const double d2neyy000001 =
        (2 * Pi *
         (C482 * C59 * C299 +
          ((C303 * C180 + C321 + C321) / C69 + (C65 * C114 * C461) / C86) *
              C59 * C300)) /
        C69;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy000100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy000010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy000001;
    const double d2neyz000100 =
        (2 * Pi *
         (((C188 * C111) / C69 + C473 * C65) * C61 +
          (((C186 * C113) / C69 + (C64 * C106 * C422) / C86) * C65 -
           (C204 * C111) / C69) *
              C63)) /
        C69;
    const double d2neyz000010 =
        (2 * Pi *
         (C473 * C231 - C188 * C262 + C271 * C263 +
          (C64 * ((C112 * C422) / C86 - C198) - (C254 * C113) / C69) * C232) *
         C59) /
        C69;
    const double d2neyz000001 =
        (2 * Pi *
         (((C299 * C421) / C86 - C323 * C159 - C324 * C305 +
           C300 * ((C114 * C422) / C86 - C196)) *
              C65 -
          (C335 * C111) / C69) *
         C59) /
        C69;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz000100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz000010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz000001;
    const double d2nezx000100 =
        (2 * Pi *
         (((C61 * C423) / C86 - C193 * C162 - C119 * C189 +
           C63 * ((C106 * C424) / C86 - C198)) *
              C64 -
          (C209 * C113) / C69) *
         C65) /
        C69;
    const double d2nezx000010 =
        (2 * Pi *
         (((C267 * C113) / C69 + C478 * C64) * C231 +
          (((C245 * C104) / C69 + (C59 * C112 * C424) / C86) * C64 -
           (C272 * C113) / C69) *
              C232)) /
        C69;
    const double d2nezx000001 =
        (2 * Pi *
         (C478 * C299 - C267 * C323 + C330 * C324 +
          (C59 * ((C114 * C424) / C86 - C264) - (C318 * C104) / C69) * C300) *
         C65) /
        C69;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx000100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx000010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx000001;
    const double d2nezy000100 =
        (2 * Pi *
         (((C185 * C113) / C69 + C474 * C64) * C61 +
          (((C189 * C111) / C69 + (C65 * C106 * C427) / C86) * C64 -
           (C203 * C113) / C69) *
              C63)) /
        C69;
    const double d2nezy000010 =
        (2 * Pi *
         (((C231 * C426) / C86 - C262 * C162 - C263 * C245 +
           C232 * ((C112 * C427) / C86 - C198)) *
              C64 -
          (C277 * C113) / C69) *
         C59) /
        C69;
    const double d2nezy000001 =
        (2 * Pi *
         (C474 * C299 - C185 * C323 + C327 * C324 +
          (C65 * ((C114 * C427) / C86 - C196) - (C318 * C111) / C69) * C300) *
         C59) /
        C69;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy000100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy000010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy000001;
    const double d2nezz000100 =
        (2 * Pi *
         (C483 * C65 * C61 +
          ((C118 * C182 + C200 + C200) / C69 + (C64 * C106 * C466) / C86) *
              C65 * C63)) /
        C69;
    const double d2nezz000010 =
        (2 * Pi *
         (C483 * C231 +
          ((C236 * C182 + C260 + C260) / C69 + (C64 * C112 * C466) / C86) *
              C232) *
         C59) /
        C69;
    const double d2nezz000001 =
        (2 * Pi *
         ((C66 * ((-4 * C102) / C69 - (C81 * C182) / C69) * ae) / C69 - C331 -
          C331 + (C299 * C465) / C86 + (C303 * C182) / C95 + C332 + C332 +
          C300 * ((4 * C177) / C69 + (C114 * C466) / C86)) *
         C65 * C59) /
        C69;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz000100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz000010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz000001;
}
