/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_02_11(double ae,
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
    const double C799 = ae + be;
    const double C798 = xA - xB;
    const double C803 = ae * be;
    const double C802 = std::pow(C798, 2);
    const double C804 = C802 * C803;
    const double C805 = C804 / C799;
    const double C806 = -C805;
    const double C807 = std::exp(C806);
    const double C815 = yA - yB;
    const double C816 = std::pow(C815, 2);
    const double C817 = C816 * C803;
    const double C818 = C817 / C799;
    const double C819 = -C818;
    const double C820 = std::exp(C819);
    const double C831 = zA - zB;
    const double C832 = std::pow(C831, 2);
    const double C833 = C832 * C803;
    const double C834 = C833 / C799;
    const double C835 = -C834;
    const double C836 = std::exp(C835);
    const double C852 = C831 * ae;
    const double C851 = C815 * ae;
    const double C850 = 2 * C799;
    const double C849 = std::pow(C799, 2);
    const double C848 = C798 * ae;
    const double C847 = ae * be;
    const double C856 = C836 * C852;
    const double C855 = C820 * C851;
    const double C854 = std::pow(C850, -2);
    const double C853 = std::pow(C850, -1);
    const double C60 = std::exp(-(std::pow(xA - xB, 2) * C847) / (ae + be));
    const double C63 =
        (std::exp(-(std::pow(C798, 2) * C847) / C799) * C848) / C799;
    const double C65 = (C807 * std::pow(C848, 2)) / C849 + C807 / C850;
    const double C66 = C853 * C807;
    const double C67 = (2 * C853 * C807 * C848) / C799;
    const double C69 = C854 * C807;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C803) / C799);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C803) / C799);
    const double C353 = (C820 * std::pow(C851, 2)) / C849 + C820 / C850;
    const double C354 = (2 * C853 * C855) / C799;
    const double C355 = C854 * C820;
    const double C359 = C855 / C799;
    const double C361 = C853 * C820;
    const double C501 = (C836 * std::pow(C852, 2)) / C849 + C836 / C850;
    const double C502 = (2 * C853 * C856) / C799;
    const double C503 = C854 * C836;
    const double C507 = C856 / C799;
    const double C509 = C853 * C836;
    const double C92 = be * zB;
    const double C91 = ae * zA;
    const double C90 = zA - zB;
    const double C89 = be * yB;
    const double C88 = ae * yA;
    const double C87 = yA - yB;
    const double C86 = bs[4];
    const double C85 = 0 * ae;
    const double C84 = bs[3];
    const double C83 = std::pow(ae, 2);
    const double C82 = bs[2];
    const double C81 = bs[1];
    const double C80 = be * xB;
    const double C79 = ae * xA;
    const double C78 = 0 * ae;
    const double C77 = 0 * be;
    const double C76 = bs[0];
    const double C75 = ae * be;
    const double C74 = xA - xB;
    const double C73 = ae + be;
    const double C72 = 0 * be;
    const double C104 = C91 + C92;
    const double C103 = C75 * C90;
    const double C102 = C88 + C89;
    const double C101 = C75 * C87;
    const double C100 = C85 / C73;
    const double C99 = C79 + C80;
    const double C98 = C78 / C73;
    const double C97 = C74 * C72;
    const double C96 = 2 * C75;
    const double C95 = C75 * C74;
    const double C94 = 2 * C73;
    const double C93 = std::pow(C73, 2);
    const double C116 = C104 / C73;
    const double C115 = C103 * C70;
    const double C114 = C102 / C73;
    const double C113 = C101 * C71;
    const double C112 = std::pow(C94, 4);
    const double C111 = -C94;
    const double C110 = C81 * C94;
    const double C109 = std::pow(C94, 2);
    const double C108 = C99 / C73;
    const double C107 = C97 / C73;
    const double C106 = 2 * C93;
    const double C105 = C95 * C60;
    const double C130 = C116 - zC;
    const double C129 = 2 * C115;
    const double C128 = C114 - yC;
    const double C127 = 2 * C113;
    const double C126 = std::pow(C111, 3);
    const double C125 = C82 * C109;
    const double C124 = C110 * ae;
    const double C123 = C108 - xC;
    const double C122 = C105 / C93;
    const double C121 = C77 / C106;
    const double C120 = 0 - C107;
    const double C119 = C72 / C106;
    const double C118 = 2 * C105;
    const double C117 = -4 * C105;
    const double C155 = std::pow(C130, 2);
    const double C154 = C90 * C129;
    const double C153 = C130 * C128;
    const double C152 = C130 * C123;
    const double C151 = C128 * C130;
    const double C150 = std::pow(C128, 2);
    const double C149 = C87 * C127;
    const double C148 = C128 * C123;
    const double C147 = C76 * C129;
    const double C146 = ae * C130;
    const double C145 = C123 * C130;
    const double C144 = C76 * C127;
    const double C143 = ae * C128;
    const double C142 = C123 * C128;
    const double C141 = C84 * C126;
    const double C140 = C123 * C125;
    const double C139 = C125 * ae;
    const double C138 = -C124;
    const double C137 = C123 * C110;
    const double C136 = std::pow(C123, 2);
    const double C135 = ae * C123;
    const double C134 = C98 - C122;
    const double C133 = C120 * ae;
    const double C132 = C74 * C118;
    const double C131 = C117 / C73;
    const double C187 = C155 * C84;
    const double C186 = C154 / C73;
    const double C185 = C153 * C83;
    const double C184 = C152 * C83;
    const double C183 = C151 * C83;
    const double C182 = C150 * C84;
    const double C181 = C149 / C73;
    const double C180 = C148 * C83;
    const double C179 = C146 * C84;
    const double C178 = C146 * C82;
    const double C177 = C137 * C129;
    const double C176 = C147 / C73;
    const double C175 = C146 * C81;
    const double C174 = C145 * C83;
    const double C173 = C143 * C84;
    const double C172 = C143 * C82;
    const double C171 = C137 * C127;
    const double C170 = C144 / C73;
    const double C169 = C143 * C81;
    const double C168 = C142 * C83;
    const double C167 = C140 * ae;
    const double C166 = C135 * C84;
    const double C165 = C139 / C73;
    const double C164 = C134 / C94;
    const double C163 = C125 * C136;
    const double C162 = C136 * C84;
    const double C161 = C135 * C82;
    const double C160 = C138 / C73;
    const double C159 = C74 * C134;
    const double C158 = C135 * C81;
    const double C157 = C133 / C73;
    const double C156 = C132 / C73;
    const double C217 = C187 * C126;
    const double C216 = C70 - C186;
    const double C215 = C175 * C129;
    const double C214 = C84 * C185;
    const double C213 = C84 * C184;
    const double C212 = C84 * C183;
    const double C211 = C182 * C126;
    const double C210 = C71 - C181;
    const double C209 = C169 * C127;
    const double C208 = C84 * C180;
    const double C207 = C179 * C109;
    const double C206 = C84 * C174;
    const double C205 = C178 * C94;
    const double C204 = C177 / C73;
    const double C203 = 2 * C175;
    const double C202 = C173 * C109;
    const double C201 = C84 * C168;
    const double C200 = C172 * C94;
    const double C199 = C171 / C73;
    const double C198 = 2 * C169;
    const double C197 = C167 / C73;
    const double C196 = C166 * C109;
    const double C195 = C164 + C100;
    const double C194 = C163 - C110;
    const double C193 = C162 * C126;
    const double C192 = C161 * C94;
    const double C191 = C159 + C66;
    const double C190 = 2 * C158;
    const double C189 = C157 - C121;
    const double C188 = C60 - C156;
    const double C254 = C125 + C217;
    const double C253 = C216 * C96;
    const double C252 = 2 * C215;
    const double C251 = C126 * C214;
    const double C250 = C126 * C213;
    const double C249 = C126 * C212;
    const double C248 = C125 + C211;
    const double C247 = C210 * C96;
    const double C246 = 2 * C209;
    const double C245 = C195 * C194;
    const double C244 = C65 * C190;
    const double C243 = C126 * C208;
    const double C242 = C207 * ae;
    const double C241 = 2 * C207;
    const double C240 = C194 * C129;
    const double C239 = C207 * C136;
    const double C238 = 2 * C205;
    const double C237 = C205 * ae;
    const double C236 = C126 * C206;
    const double C235 = -2 * C205;
    const double C234 = C70 * C203;
    const double C233 = C202 * ae;
    const double C232 = 2 * C202;
    const double C231 = C194 * C127;
    const double C230 = C202 * C136;
    const double C229 = 2 * C200;
    const double C228 = C200 * ae;
    const double C227 = C126 * C201;
    const double C226 = -2 * C200;
    const double C225 = C71 * C198;
    const double C224 = 2 * C196;
    const double C223 = C125 + C193;
    const double C222 = -2 * C192;
    const double C221 = C191 * ae;
    const double C220 = C189 / C94;
    const double C219 = C188 * ae;
    const double C218 = C188 * C96;
    const double C278 = C254 * C83;
    const double C277 = C252 / C73;
    const double C276 = C248 * C83;
    const double C275 = C246 / C73;
    const double C274 = 2 * C242;
    const double C273 = C123 * C241;
    const double C272 = C240 / C73;
    const double C271 = 2 * C239;
    const double C270 = -2 * C237;
    const double C269 = C123 * C235;
    const double C268 = C234 + C176;
    const double C267 = 2 * C233;
    const double C266 = C123 * C232;
    const double C265 = C231 / C73;
    const double C264 = 2 * C230;
    const double C263 = -2 * C228;
    const double C262 = C123 * C226;
    const double C261 = C225 + C170;
    const double C260 = C123 * C224;
    const double C259 = C223 * C83;
    const double C258 = C123 * C222;
    const double C257 = C221 / C73;
    const double C256 = C219 / C73;
    const double C255 = C74 * C218;
    const double C294 = C269 * C129;
    const double C293 = C262 * C127;
    const double C292 = C274 / C73;
    const double C291 = C273 * ae;
    const double C290 = C238 - C271;
    const double C289 = C270 / C73;
    const double C288 = C70 * C269;
    const double C287 = C267 / C73;
    const double C286 = C266 * ae;
    const double C285 = C229 - C264;
    const double C284 = C263 / C73;
    const double C283 = C71 * C262;
    const double C282 = C165 - C260;
    const double C281 = C160 - C258;
    const double C280 = C256 - C119;
    const double C279 = C255 / C73;
    const double C308 = C290 * C129;
    const double C307 = C285 * C127;
    const double C306 = C67 * C281;
    const double C305 = C291 / C73;
    const double C304 = C70 * C290;
    const double C303 = C204 - C288;
    const double C302 = C286 / C73;
    const double C301 = C71 * C285;
    const double C300 = C199 - C283;
    const double C299 = C282 * ae;
    const double C298 = C123 * C282;
    const double C297 = C280 / C94;
    const double C296 = C74 * C280;
    const double C295 = C131 - C279;
    const double C315 = C304 - C272;
    const double C314 = C301 - C265;
    const double C313 = C299 / C73;
    const double C312 = C298 - C222;
    const double C311 = C297 + C257;
    const double C310 = C296 + C63;
    const double C309 = C295 * ae;
    const double C319 = C311 * C137;
    const double C318 = C312 + C197;
    const double C317 = C311 * C281;
    const double C316 = C310 * ae;
    const double C322 = C69 * C318;
    const double C321 = C195 * C318;
    const double C320 = C316 / C73;
    const double C323 = C220 + C320;
    const double C324 = C323 + C134;
    const double C326 = C324 * C76;
    const double C325 = C324 * C190;
    const double C327 = C326 - C244;
    const double C328 = C327 - C319;
    const double C329 = C328 + C306;
    const double C330 = C329 + C245;
    const double C331 = C330 + C322;
    const double C388 = C128 * C241;
    const double C387 = C87 * C247;
    const double C386 = -4 * C113;
    const double C385 = C76 * C118;
    const double C384 = C60 * C190;
    const double C383 = C207 * C150;
    const double C382 = C128 * C235;
    const double C381 = C128 * C125;
    const double C380 = C128 * C232;
    const double C379 = C128 * C226;
    const double C378 = C353 * C198;
    const double C377 = C196 * ae;
    const double C376 = C128 * C224;
    const double C375 = 0 * ae;
    const double C374 = C192 * ae;
    const double C373 = C113 / C93;
    const double C372 = 0 * ae;
    const double C371 = C210 * ae;
    const double C370 = 0 * be;
    const double C369 = 0 * be;
    const double C368 = C125 * C150;
    const double C367 = C196 * C150;
    const double C366 = 2 * C192;
    const double C365 = C128 * C222;
    const double C364 = C128 * C110;
    const double C363 = C158 * C118;
    const double C414 = C382 * C129;
    const double C413 = C388 * ae;
    const double C412 = C387 / C73;
    const double C411 = C386 / C73;
    const double C410 = C60 * C365;
    const double C409 = C364 * C118;
    const double C408 = C385 / C73;
    const double C407 = 2 * C383;
    const double C406 = C70 * C382;
    const double C405 = C364 * C129;
    const double C404 = C381 * ae;
    const double C403 = C165 - C380;
    const double C402 = C160 - C379;
    const double C401 = 2 * C377;
    const double C400 = C376 * ae;
    const double C399 = C375 / C73;
    const double C398 = -2 * C374;
    const double C397 = C372 / C73;
    const double C396 = C369 / C106;
    const double C395 = C371 / C73;
    const double C394 = C370 / C106;
    const double C393 = C87 * C369;
    const double C392 = C368 - C110;
    const double C391 = 2 * C367;
    const double C390 = C365 * C118;
    const double C389 = 2 * C363;
    const double C434 = C413 / C73;
    const double C433 = C403 * ae;
    const double C432 = C411 - C412;
    const double C431 = C392 * C118;
    const double C430 = C409 / C73;
    const double C429 = C384 + C408;
    const double C428 = C392 * C129;
    const double C427 = C238 - C407;
    const double C426 = C405 / C73;
    const double C425 = C404 / C73;
    const double C424 = C128 * C403;
    const double C423 = C354 * C402;
    const double C422 = C401 / C73;
    const double C421 = C400 / C73;
    const double C420 = C398 / C73;
    const double C419 = C397 - C373;
    const double C418 = C395 - C396;
    const double C417 = C393 / C73;
    const double C416 = C366 - C391;
    const double C415 = C389 / C73;
    const double C450 = C427 * C129;
    const double C449 = C433 / C73;
    const double C448 = C432 * ae;
    const double C447 = C431 / C73;
    const double C446 = C60 * C416;
    const double C445 = C430 - C410;
    const double C444 = C428 / C73;
    const double C443 = C70 * C427;
    const double C442 = C426 - C406;
    const double C441 = C424 - C226;
    const double C440 = C419 / C94;
    const double C439 = C87 * C419;
    const double C438 = C418 / C94;
    const double C437 = C87 * C418;
    const double C436 = 0 - C417;
    const double C435 = C416 * C118;
    const double C457 = C446 - C447;
    const double C456 = C443 - C444;
    const double C455 = C441 + C425;
    const double C454 = C440 + C399;
    const double C453 = C439 + C361;
    const double C452 = C437 + C359;
    const double C451 = C436 * ae;
    const double C463 = C454 * C455;
    const double C462 = C355 * C455;
    const double C461 = C454 * C392;
    const double C460 = C453 * ae;
    const double C459 = C452 * ae;
    const double C458 = C451 / C73;
    const double C466 = C460 / C73;
    const double C465 = C459 / C73;
    const double C464 = C458 - C394;
    const double C468 = C438 + C466;
    const double C467 = C464 / C94;
    const double C471 = C468 * C402;
    const double C470 = C468 * C364;
    const double C469 = C467 + C465;
    const double C472 = C469 + C419;
    const double C474 = C472 * C198;
    const double C473 = C472 * C76;
    const double C475 = C473 - C378;
    const double C476 = C475 - C470;
    const double C477 = C476 + C423;
    const double C478 = C477 + C461;
    const double C479 = C478 + C462;
    const double C530 = C90 * C253;
    const double C529 = -4 * C115;
    const double C528 = C130 * C232;
    const double C527 = C130 * C125;
    const double C526 = C130 * C241;
    const double C525 = C130 * C235;
    const double C524 = C501 * C203;
    const double C523 = C130 * C224;
    const double C522 = 0 * ae;
    const double C521 = C115 / C93;
    const double C520 = 0 * ae;
    const double C519 = C216 * ae;
    const double C518 = 0 * be;
    const double C517 = 0 * be;
    const double C516 = C202 * C155;
    const double C515 = C130 * C226;
    const double C514 = C125 * C155;
    const double C513 = C196 * C155;
    const double C512 = C130 * C222;
    const double C511 = C130 * C110;
    const double C552 = C530 / C73;
    const double C551 = C529 / C73;
    const double C550 = C528 * ae;
    const double C549 = C515 * C127;
    const double C548 = C60 * C512;
    const double C547 = C511 * C118;
    const double C546 = C527 * ae;
    const double C545 = C165 - C526;
    const double C544 = C160 - C525;
    const double C543 = C523 * ae;
    const double C542 = C522 / C73;
    const double C541 = C520 / C73;
    const double C540 = C517 / C106;
    const double C539 = C519 / C73;
    const double C538 = C518 / C106;
    const double C537 = C90 * C517;
    const double C536 = 2 * C516;
    const double C535 = C71 * C515;
    const double C534 = C511 * C127;
    const double C533 = C514 - C110;
    const double C532 = 2 * C513;
    const double C531 = C512 * C118;
    const double C568 = C545 * ae;
    const double C567 = C551 - C552;
    const double C566 = C550 / C73;
    const double C565 = C533 * C118;
    const double C564 = C547 / C73;
    const double C563 = C546 / C73;
    const double C562 = C130 * C545;
    const double C561 = C502 * C544;
    const double C560 = C543 / C73;
    const double C559 = C541 - C521;
    const double C558 = C539 - C540;
    const double C557 = C537 / C73;
    const double C556 = C533 * C127;
    const double C555 = C229 - C536;
    const double C554 = C534 / C73;
    const double C553 = C366 - C532;
    const double C584 = C568 / C73;
    const double C583 = C567 * ae;
    const double C582 = C555 * C127;
    const double C581 = C565 / C73;
    const double C580 = C60 * C553;
    const double C579 = C564 - C548;
    const double C578 = C562 - C235;
    const double C577 = C559 / C94;
    const double C576 = C90 * C559;
    const double C575 = C558 / C94;
    const double C574 = C90 * C558;
    const double C573 = 0 - C557;
    const double C572 = C556 / C73;
    const double C571 = C71 * C555;
    const double C570 = C554 - C535;
    const double C569 = C553 * C118;
    const double C591 = C580 - C581;
    const double C590 = C578 + C563;
    const double C589 = C577 + C542;
    const double C588 = C576 + C509;
    const double C587 = C574 + C507;
    const double C586 = C573 * ae;
    const double C585 = C571 - C572;
    const double C597 = C589 * C590;
    const double C596 = C503 * C590;
    const double C595 = C589 * C533;
    const double C594 = C588 * ae;
    const double C593 = C587 * ae;
    const double C592 = C586 / C73;
    const double C600 = C594 / C73;
    const double C599 = C593 / C73;
    const double C598 = C592 - C538;
    const double C602 = C575 + C600;
    const double C601 = C598 / C94;
    const double C605 = C602 * C544;
    const double C604 = C602 * C511;
    const double C603 = C601 + C599;
    const double C606 = C603 + C559;
    const double C608 = C606 * C203;
    const double C607 = C606 * C76;
    const double C609 = C607 - C524;
    const double C610 = C609 - C604;
    const double C611 = C610 + C561;
    const double C612 = C611 + C595;
    const double C613 = C612 + C596;
    const double C656 = C418 * C262;
    const double C655 = C419 * C402;
    const double C654 = C418 * C198;
    const double C653 = C280 * C364;
    const double C652 = C63 * C365;
    const double C651 = C66 * C281;
    const double C650 = C134 * C137;
    const double C649 = C63 * C190;
    const double C648 = C280 * C76;
    const double C647 = C128 * C273;
    const double C646 = C128 * C266;
    const double C645 = C418 * C137;
    const double C644 = C359 * C262;
    const double C643 = C361 * C402;
    const double C642 = C419 * C364;
    const double C641 = C359 * C198;
    const double C640 = C418 * C76;
    const double C639 = C128 * C282;
    const double C638 = C128 * C140;
    const double C637 = C280 * C365;
    const double C636 = C134 * C281;
    const double C635 = C280 * C190;
    const double C668 = C647 * C129;
    const double C667 = C66 * C639;
    const double C666 = C652 + C653;
    const double C665 = C134 * C638;
    const double C664 = C648 - C649;
    const double C663 = C638 * C129;
    const double C662 = C70 * C647;
    const double C661 = C197 - C646;
    const double C660 = C644 + C645;
    const double C659 = C419 * C638;
    const double C658 = C640 - C641;
    const double C657 = C134 * C639;
    const double C676 = C668 / C73;
    const double C675 = C419 * C661;
    const double C674 = C665 - C666;
    const double C673 = C664 - C650;
    const double C672 = C663 / C73;
    const double C671 = C361 * C661;
    const double C670 = C659 - C660;
    const double C669 = C658 - C642;
    const double C681 = C674 + C667;
    const double C680 = C673 + C651;
    const double C679 = C662 + C672;
    const double C678 = C670 + C671;
    const double C677 = C669 + C643;
    const double C718 = C558 * C269;
    const double C717 = C559 * C544;
    const double C716 = C558 * C203;
    const double C715 = C280 * C511;
    const double C714 = C63 * C512;
    const double C713 = C130 * C273;
    const double C712 = C558 * C137;
    const double C711 = C507 * C269;
    const double C710 = C509 * C544;
    const double C709 = C559 * C511;
    const double C708 = C507 * C203;
    const double C707 = C558 * C76;
    const double C706 = C130 * C266;
    const double C705 = C130 * C282;
    const double C704 = C130 * C140;
    const double C703 = C280 * C512;
    const double C729 = C706 * C127;
    const double C728 = C66 * C705;
    const double C727 = C714 + C715;
    const double C726 = C134 * C704;
    const double C725 = C197 - C713;
    const double C724 = C711 + C712;
    const double C723 = C559 * C704;
    const double C722 = C707 - C708;
    const double C721 = C704 * C127;
    const double C720 = C71 * C706;
    const double C719 = C134 * C705;
    const double C736 = C559 * C725;
    const double C735 = C729 / C73;
    const double C734 = C726 - C727;
    const double C733 = C509 * C725;
    const double C732 = C723 - C724;
    const double C731 = C722 - C709;
    const double C730 = C721 / C73;
    const double C740 = C734 + C728;
    const double C739 = C732 + C733;
    const double C738 = C731 + C710;
    const double C737 = C720 + C730;
    const double C771 = C558 * C382;
    const double C770 = C418 * C515;
    const double C769 = C130 * C388;
    const double C768 = C558 * C364;
    const double C767 = C507 * C382;
    const double C766 = C130 * C403;
    const double C765 = C418 * C511;
    const double C764 = C359 * C515;
    const double C763 = C130 * C381;
    const double C762 = C130 * C376;
    const double C781 = C419 * C766;
    const double C780 = C763 * C118;
    const double C779 = C60 * C762;
    const double C778 = C425 - C769;
    const double C777 = C767 + C768;
    const double C776 = C559 * C763;
    const double C775 = C361 * C766;
    const double C774 = C764 + C765;
    const double C773 = C419 * C763;
    const double C772 = C762 * C118;
    const double C787 = C559 * C778;
    const double C786 = C780 / C73;
    const double C785 = C509 * C778;
    const double C784 = C776 - C777;
    const double C783 = C773 - C774;
    const double C782 = C772 / C73;
    const double C790 = C779 + C786;
    const double C789 = C784 + C785;
    const double C788 = C783 + C775;
    const double C961 = C511 * C253;
    const double C960 = C76 * C583;
    const double C959 = C559 * C515;
    const double C958 = C558 * C198;
    const double C957 = C559 * C512;
    const double C956 = C558 * C190;
    const double C955 = C419 * C382;
    const double C954 = C418 * C203;
    const double C953 = C134 * C269;
    const double C952 = C280 * C203;
    const double C951 = C364 * C247;
    const double C950 = C76 * C448;
    const double C949 = C134 * C262;
    const double C948 = C280 * C198;
    const double C947 = C419 * C365;
    const double C946 = C418 * C190;
    const double C945 = C137 * C218;
    const double C944 = C76 * C309;
    const double C943 = C130 * C278;
    const double C942 = 4 * C237;
    const double C941 = C544 * C127;
    const double C940 = C130 * C251;
    const double C939 = C544 * C118;
    const double C938 = C130 * C250;
    const double C937 = C130 * C249;
    const double C936 = C130 * C276;
    const double C935 = C511 * C247;
    const double C934 = C130 * C243;
    const double C933 = C515 * C118;
    const double C932 = C130 * C236;
    const double C931 = C130 * C227;
    const double C930 = C512 * C127;
    const double C929 = C130 * C259;
    const double C928 = C511 * C218;
    const double C927 = C128 * C278;
    const double C926 = C364 * C253;
    const double C925 = C251 / C93;
    const double C924 = C128 * C251;
    const double C923 = C128 * C250;
    const double C922 = C382 * C118;
    const double C921 = C175 * C118;
    const double C920 = C249 / C93;
    const double C919 = C402 * C129;
    const double C918 = C128 * C249;
    const double C917 = C128 * C276;
    const double C916 = 4 * C228;
    const double C915 = C402 * C118;
    const double C914 = C128 * C243;
    const double C913 = C169 * C118;
    const double C912 = C128 * C236;
    const double C911 = C365 * C129;
    const double C910 = C128 * C227;
    const double C909 = C128 * C259;
    const double C908 = C364 * C218;
    const double C907 = C76 * C218;
    const double C906 = C155 * C86;
    const double C905 = C123 * C278;
    const double C904 = C137 * C253;
    const double C903 = C155 * C82;
    const double C902 = C76 * C253;
    const double C901 = C86 * C185;
    const double C900 = C123 * C251;
    const double C899 = C269 * C127;
    const double C898 = C82 * C185;
    const double C897 = C175 * C127;
    const double C896 = C86 * C184;
    const double C895 = C250 / C93;
    const double C894 = C123 * C250;
    const double C893 = C82 * C184;
    const double C892 = C86 * C183;
    const double C891 = C123 * C249;
    const double C890 = C262 * C129;
    const double C889 = C82 * C183;
    const double C888 = C169 * C129;
    const double C887 = C150 * C86;
    const double C886 = C123 * C276;
    const double C885 = C137 * C247;
    const double C884 = C150 * C82;
    const double C883 = C76 * C247;
    const double C882 = C86 * C180;
    const double C881 = C243 / C93;
    const double C880 = C123 * C243;
    const double C879 = C82 * C180;
    const double C878 = C86 * C174;
    const double C877 = C236 / C93;
    const double C876 = C281 * C129;
    const double C875 = C123 * C236;
    const double C874 = C82 * C174;
    const double C873 = C158 * C129;
    const double C872 = C86 * C168;
    const double C871 = C227 / C93;
    const double C870 = C281 * C127;
    const double C869 = C123 * C227;
    const double C868 = C82 * C168;
    const double C867 = C158 * C127;
    const double C866 = C136 * C86;
    const double C865 = 4 * C93;
    const double C864 = C123 * C259;
    const double C863 = 4 * C374;
    const double C862 = C136 * C82;
    const double C861 = C93 * C94;
    const double C1043 = C961 / C106;
    const double C1042 = C960 / C73;
    const double C1041 = C951 / C106;
    const double C1040 = C950 / C73;
    const double C1039 = C945 / C106;
    const double C1038 = C944 / C73;
    const double C1037 = C943 / C93;
    const double C1036 = C942 / C73;
    const double C1035 = C941 / C73;
    const double C1034 = C940 / C93;
    const double C1033 = C939 / C73;
    const double C1032 = C938 / C93;
    const double C1031 = C937 / C93;
    const double C1030 = C71 * C936;
    const double C1029 = C935 + C549;
    const double C1028 = C60 * C934;
    const double C1027 = C933 / C73;
    const double C1026 = C932 / C93;
    const double C1025 = C71 * C931;
    const double C1024 = C930 / C73;
    const double C1023 = C60 * C929;
    const double C1022 = C928 + C531;
    const double C1021 = C70 * C927;
    const double C1020 = C926 + C414;
    const double C1019 = C924 / C93;
    const double C1018 = C60 * C923;
    const double C1017 = C922 / C73;
    const double C1016 = 2 * C921;
    const double C1015 = C919 / C73;
    const double C1014 = C918 / C93;
    const double C1013 = C917 / C93;
    const double C1012 = C916 / C73;
    const double C1011 = C915 / C73;
    const double C1010 = C914 / C93;
    const double C1009 = 2 * C913;
    const double C1008 = C70 * C912;
    const double C1007 = C911 / C73;
    const double C1006 = C910 / C93;
    const double C1005 = C60 * C909;
    const double C1004 = C908 + C390;
    const double C1003 = C907 / C73;
    const double C1002 = C906 * C112;
    const double C1001 = C70 * C905;
    const double C1000 = C904 + C294;
    const double C999 = C903 * C109;
    const double C998 = C902 / C73;
    const double C997 = C112 * C901;
    const double C996 = C71 * C900;
    const double C995 = C899 / C73;
    const double C994 = C109 * C898;
    const double C993 = 2 * C897;
    const double C992 = C112 * C896;
    const double C991 = C894 / C93;
    const double C990 = C109 * C893;
    const double C989 = C112 * C892;
    const double C988 = C70 * C891;
    const double C987 = C890 / C73;
    const double C986 = C109 * C889;
    const double C985 = 2 * C888;
    const double C984 = C887 * C112;
    const double C983 = C71 * C886;
    const double C982 = C885 + C293;
    const double C981 = C884 * C109;
    const double C980 = C883 / C73;
    const double C979 = C112 * C882;
    const double C978 = C880 / C93;
    const double C977 = C109 * C879;
    const double C976 = C112 * C878;
    const double C975 = C876 / C73;
    const double C974 = C875 / C93;
    const double C973 = C109 * C874;
    const double C972 = 2 * C873;
    const double C971 = C112 * C872;
    const double C970 = C870 / C73;
    const double C969 = C869 / C93;
    const double C968 = C109 * C868;
    const double C967 = 2 * C867;
    const double C966 = C866 * C112;
    const double C965 = C73 * C865;
    const double C964 = C864 / C93;
    const double C963 = C863 / C73;
    const double C962 = C862 * C109;
    const double C1115 = C1042 - C716;
    const double C1114 = C507 * C986;
    const double C1113 = C507 * C973;
    const double C1112 = C123 * C997;
    const double C1111 = C359 * C994;
    const double C1110 = C63 * C990;
    const double C1109 = C123 * C989;
    const double C1108 = C1040 - C654;
    const double C1107 = C63 * C977;
    const double C1106 = C359 * C968;
    const double C1105 = C1038 - C635;
    const double C1104 = C1036 + C1037;
    const double C1103 = C1034 - C284;
    const double C1102 = C1032 - C420;
    const double C1101 = C130 * C989;
    const double C1100 = C1031 - C284;
    const double C1099 = C1030 / C93;
    const double C1098 = C1029 + C549;
    const double C1097 = C1028 / C93;
    const double C1096 = C1026 - C420;
    const double C1095 = C1025 / C93;
    const double C1094 = C1023 / C93;
    const double C1093 = C1022 + C531;
    const double C1092 = C1021 / C93;
    const double C1091 = C1020 + C414;
    const double C1090 = C128 * C997;
    const double C1089 = C1019 - C289;
    const double C1088 = C1018 / C93;
    const double C1087 = C60 * C990;
    const double C1086 = C1016 / C73;
    const double C1085 = C1014 - C289;
    const double C1084 = C1012 + C1013;
    const double C1083 = C1010 - C420;
    const double C1082 = C60 * C977;
    const double C1081 = C1009 / C73;
    const double C1080 = C1008 / C93;
    const double C1079 = C128 * C971;
    const double C1078 = C1006 - C420;
    const double C1077 = C1005 / C93;
    const double C1076 = C1004 + C390;
    const double C1075 = C415 - C1003;
    const double C1074 = C141 + C1002;
    const double C1073 = C1001 / C93;
    const double C1072 = C1000 + C294;
    const double C1071 = C999 - C110;
    const double C1070 = C277 - C998;
    const double C1069 = C996 / C93;
    const double C1068 = C71 * C994;
    const double C1067 = C993 / C73;
    const double C1066 = C123 * C992;
    const double C1065 = C991 - C289;
    const double C1064 = C988 / C93;
    const double C1063 = C70 * C986;
    const double C1062 = C985 / C73;
    const double C1061 = C141 + C984;
    const double C1060 = C983 / C93;
    const double C1059 = C982 + C293;
    const double C1058 = C981 - C110;
    const double C1057 = C275 - C980;
    const double C1056 = C123 * C979;
    const double C1055 = C978 - C284;
    const double C1054 = C123 * C976;
    const double C1053 = C974 - C289;
    const double C1052 = C70 * C973;
    const double C1051 = C972 / C73;
    const double C1050 = C123 * C971;
    const double C1049 = C969 - C284;
    const double C1048 = C71 * C968;
    const double C1047 = C967 / C73;
    const double C1046 = C141 + C966;
    const double C1045 = C963 + C964;
    const double C1044 = C962 - C110;
    const double C1173 = C509 * C1104;
    const double C1172 = C1115 - C716;
    const double C1171 = C509 * C1100;
    const double C1170 = C1114 / C93;
    const double C1169 = C509 * C1096;
    const double C1168 = C1113 / C93;
    const double C1167 = C361 * C1089;
    const double C1166 = C1111 / C93;
    const double C1165 = C66 * C1065;
    const double C1164 = C1110 / C93;
    const double C1163 = C361 * C1084;
    const double C1162 = C1108 - C654;
    const double C1161 = C66 * C1055;
    const double C1160 = C1107 / C93;
    const double C1159 = C361 * C1078;
    const double C1158 = C1106 / C93;
    const double C1157 = C66 * C1045;
    const double C1156 = C1105 - C635;
    const double C1155 = C71 * C1103;
    const double C1154 = C60 * C1102;
    const double C1153 = C1101 / C93;
    const double C1152 = C1098 / C73;
    const double C1151 = C1027 + C1097;
    const double C1150 = C1024 + C1095;
    const double C1149 = C1093 / C73;
    const double C1148 = C1091 / C73;
    const double C1147 = C1090 / C93;
    const double C1146 = C1017 + C1088;
    const double C1145 = C1087 / C93;
    const double C1144 = C70 * C1085;
    const double C1143 = C60 * C1083;
    const double C1142 = C1082 / C93;
    const double C1141 = C1007 + C1080;
    const double C1140 = C1079 / C93;
    const double C1139 = C1076 / C73;
    const double C1138 = C1075 + C415;
    const double C1137 = C1074 * C83;
    const double C1136 = C1072 / C73;
    const double C1135 = C1071 * C83;
    const double C1134 = C1070 + C277;
    const double C1133 = C995 + C1069;
    const double C1132 = C1068 / C93;
    const double C1131 = C1066 / C93;
    const double C1130 = C987 + C1064;
    const double C1129 = C1063 / C93;
    const double C1128 = C1061 * C83;
    const double C1127 = C1059 / C73;
    const double C1126 = C1058 * C83;
    const double C1125 = C1057 + C275;
    const double C1124 = C1056 / C93;
    const double C1123 = C1054 / C93;
    const double C1122 = C70 * C1053;
    const double C1121 = C1052 / C93;
    const double C1120 = C1050 / C93;
    const double C1119 = C71 * C1049;
    const double C1118 = C1048 / C93;
    const double C1117 = C1046 * C83;
    const double C1116 = C1044 * C83;
    const double C1213 = C507 * C1135;
    const double C1212 = C1170 - C958;
    const double C1211 = C1168 - C956;
    const double C1210 = C123 * C1137;
    const double C1209 = C1166 - C954;
    const double C1208 = C1164 - C952;
    const double C1207 = C123 * C1128;
    const double C1206 = C359 * C1126;
    const double C1205 = C1160 - C948;
    const double C1204 = C1158 - C946;
    const double C1203 = C128 * C1117;
    const double C1202 = C63 * C1116;
    const double C1201 = C1155 - C1035;
    const double C1200 = C1154 - C1033;
    const double C1199 = C1153 - C287;
    const double C1198 = C1152 + C1099;
    const double C1197 = C1149 + C1094;
    const double C1196 = C1148 + C1092;
    const double C1195 = C1147 - C292;
    const double C1194 = C1086 + C1145;
    const double C1193 = C1144 - C1015;
    const double C1192 = C1143 - C1011;
    const double C1191 = C1081 + C1142;
    const double C1190 = C1140 - C422;
    const double C1189 = C1139 + C1077;
    const double C1188 = C60 * C1116;
    const double C1187 = C1136 + C1073;
    const double C1186 = C70 * C1135;
    const double C1185 = C1067 + C1132;
    const double C1184 = C1131 - C292;
    const double C1183 = C1062 + C1129;
    const double C1182 = C1127 + C1060;
    const double C1181 = C71 * C1126;
    const double C1180 = C1124 - C287;
    const double C1179 = C1123 - C292;
    const double C1178 = C1122 - C975;
    const double C1177 = C1051 + C1121;
    const double C1176 = C1120 - C287;
    const double C1175 = C1119 - C970;
    const double C1174 = C1047 + C1118;
    const double C1225 = C1213 / C93;
    const double C1224 = C1212 - C959;
    const double C1223 = C1211 - C957;
    const double C1222 = C1209 - C955;
    const double C1221 = C1208 - C953;
    const double C1220 = C1206 / C93;
    const double C1219 = C1205 - C949;
    const double C1218 = C1204 - C947;
    const double C1217 = C1202 / C93;
    const double C1216 = C1188 / C93;
    const double C1215 = C1186 / C93;
    const double C1214 = C1181 / C93;
    const double C1237 = C1172 + C1225;
    const double C1236 = C1224 + C1171;
    const double C1235 = C1223 + C1169;
    const double C1234 = C1222 + C1167;
    const double C1233 = C1221 + C1165;
    const double C1232 = C1162 + C1220;
    const double C1231 = C1219 + C1161;
    const double C1230 = C1218 + C1159;
    const double C1229 = C1156 + C1217;
    const double C1228 = C1138 + C1216;
    const double C1227 = C1134 + C1215;
    const double C1226 = C1125 + C1214;
    const double C1240 = C1237 + C1043;
    const double C1239 = C1232 + C1041;
    const double C1238 = C1229 + C1039;
    const double C1243 = C1240 + C717;
    const double C1242 = C1239 + C655;
    const double C1241 = C1238 + C636;
    const double C1246 = C1243 + C717;
    const double C1245 = C1242 + C655;
    const double C1244 = C1241 + C636;
    const double C1249 = C1246 + C1173;
    const double C1248 = C1245 + C1163;
    const double C1247 = C1244 + C1157;
    const double d2nexx000200 =
        (2 * Pi *
         (((ae * -2 * C72) / C861 +
           (((C74 * C309) / C73 + 2 * C280) * ae) / C73 - C218 / C106) *
              C76 -
          C325 - C325 + (C65 * C1116) / C93 -
          (C309 / C106 + ((2 * C134 - C255 / C106) * ae) / C73) * C137 + C317 +
          C317 + C67 * C1045 - (C194 * C218) / C965 + C321 + C321 +
          C69 * (C259 / C93 + C313 + C313 +
                 C123 * ((-4 * C377) / C73 + (C123 * C1117) / C93))) *
         C70 * C71) /
        C73;
    const double d2nexx000020 = (2 * Pi *
                                 (C1228 * C70 * C353 + C1189 * C70 * C354 +
                                  ((C60 * (C259 + C1117 * C150)) / C93 -
                                   (C435 + C435 + C392 * C218) / C73) *
                                      C70 * C355)) /
                                C73;
    const double d2nexx000002 = (2 * Pi *
                                 (C1228 * C501 + C1197 * C502 +
                                  ((C60 * (C259 + C1117 * C155)) / C93 -
                                   (C569 + C569 + C533 * C218) / C73) *
                                      C503) *
                                 C71) /
                                C73;
    const double d2nexx000110 =
        (2 * Pi *
         (C1247 * C70 * C359 +
          ((C63 * C909) / C93 - (C637 + C637 + (C364 * C309) / C73) -
           (C638 * C218) / C106 + C657 + C657 +
           C66 * ((-2 * C400) / C73 + (C123 * C1203) / C93)) *
              C70 * C361)) /
        C73;
    const double d2nexx000101 =
        (2 * Pi *
         (C1247 * C507 +
          ((C63 * C929) / C93 - (C703 + C703 + (C511 * C309) / C73) -
           (C704 * C218) / C106 + C719 + C719 +
           C66 * ((-2 * C543) / C73 + (C123 * C130 * C1117) / C93)) *
              C509) *
         C71) /
        C73;
    const double d2nexx000011 =
        (2 * Pi *
         ((C1228 * C507 + C1197 * C509) * C359 +
          (C1189 * C507 +
           (C782 - (C763 * C218) / C73 + C782 + (C60 * C130 * C1203) / C93) *
               C509) *
              C361)) /
        C73;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx000110;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx000011;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx000200 - 0.5 * d2nexx000020 + d2nexx000002;
    d2nexx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx000101;
    d2nexx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx000200 - std::sqrt(0.75) * d2nexx000020;
    const double d2nexy000200 =
        (2 * Pi *
         (C1174 * C65 - C261 * C324 + C300 * C311 + C1175 * C67 + C314 * C195 +
          (C71 * (C871 - C302 + C123 * C1176) - (C318 * C127) / C73) * C69) *
         C70) /
        C73;
    const double d2nexy000020 =
        (2 * Pi *
         (((C353 * C968) / C93 - C472 * C190 - C468 * C365 + C354 * C1078 +
           C454 * C416 + C355 * (C871 - C421 + C128 * C1190)) *
              C60 -
          (C479 * C118) / C73) *
         C70) /
        C73;
    const double d2nexy000002 =
        (2 * Pi *
         (((C261 * C118) / C73 + C1174 * C60) * C501 +
          (C1150 * C60 - (C570 * C118) / C73) * C502 +
          (((C71 * (C227 + C971 * C155)) / C93 - (C553 * C127) / C73) * C60 -
           (C585 * C118) / C73) *
              C503)) /
        C73;
    const double d2nexy000110 = (2 * Pi *
                                 (C677 * C280 + C1230 * C63 + C678 * C134 +
                                  (C418 * C281 + C359 * C1049 + C419 * C639 +
                                   C361 * (C313 + C128 * C1176)) *
                                      C66) *
                                 C70) /
                                C73;
    const double d2nexy000101 =
        (2 * Pi *
         ((C1174 * C63 - C261 * C280 + C300 * C134 + C1175 * C66) * C507 +
          (C570 * C280 + C1150 * C63 - C737 * C134 +
           (C71 * C130 * C1176 - (C705 * C127) / C73) * C66) *
              C509)) /
        C73;
    const double d2nexy000011 = (2 * Pi *
                                 ((C1230 * C60 - (C677 * C118) / C73) * C507 +
                                  (((C359 * C931) / C93 - C418 * C512 -
                                    C419 * C762 + C361 * C130 * C1190) *
                                       C60 -
                                   (C788 * C118) / C73) *
                                      C509)) /
                                C73;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy000110;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy000011;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy000200 - 0.5 * d2nexy000020 + d2nexy000002;
    d2nexy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy000101;
    d2nexy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy000200 - std::sqrt(0.75) * d2nexy000020;
    const double d2nexz000200 =
        (2 * Pi *
         (C1177 * C65 - C268 * C324 + C303 * C311 + C1178 * C67 + C315 * C195 +
          (C70 * (C877 - C305 + C123 * C1179) - (C318 * C129) / C73) * C69) *
         C71) /
        C73;
    const double d2nexz000020 =
        (2 * Pi *
         (((C268 * C118) / C73 + C1177 * C60) * C353 +
          (C1141 * C60 - (C442 * C118) / C73) * C354 +
          (((C70 * (C236 + C976 * C150)) / C93 - (C416 * C129) / C73) * C60 -
           (C456 * C118) / C73) *
              C355)) /
        C73;
    const double d2nexz000002 =
        (2 * Pi *
         (((C501 * C973) / C93 - C606 * C190 - C602 * C512 + C502 * C1096 +
           C589 * C553 +
           C503 * (C877 - C560 + C130 * ((C130 * C976) / C93 - C422))) *
              C60 -
          (C613 * C118) / C73) *
         C71) /
        C73;
    const double d2nexz000110 =
        (2 * Pi *
         ((C1177 * C63 - C268 * C280 + C303 * C134 + C1178 * C66) * C359 +
          (C442 * C280 + C1141 * C63 - C679 * C134 +
           (C70 * C128 * C1179 - (C639 * C129) / C73) * C66) *
              C361)) /
        C73;
    const double d2nexz000101 = (2 * Pi *
                                 (C738 * C280 + C1235 * C63 + C739 * C134 +
                                  (C558 * C281 + C507 * C1053 + C559 * C705 +
                                   C509 * (C313 + C130 * C1179)) *
                                      C66) *
                                 C71) /
                                C73;
    const double d2nexz000011 =
        (2 * Pi *
         ((C1235 * C60 - (C738 * C118) / C73) * C359 +
          (((C507 * C912) / C93 - C558 * C365 - C559 * C762 +
            C509 * ((C130 * C128 * C976) / C93 - C421)) *
               C60 -
           (C789 * C118) / C73) *
              C361)) /
        C73;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz000110;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz000011;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz000200 - 0.5 * d2nexz000020 + d2nexz000002;
    d2nexz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz000101;
    d2nexz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz000200 - std::sqrt(0.75) * d2nexz000020;
    const double d2neyx000200 =
        (2 * Pi *
         (((C65 * C977) / C93 - C324 * C198 - C311 * C262 + C67 * C1055 +
           C195 * C285 + C69 * (C881 - C302 + C123 * C1180)) *
              C71 -
          (C331 * C127) / C73) *
         C70) /
        C73;
    const double d2neyx000020 =
        (2 * Pi *
         (C1191 * C353 - C429 * C472 + C445 * C468 + C1192 * C354 +
          C457 * C454 +
          (C60 * (C881 - C421 + C128 * ((C128 * C979) / C93 - C422)) -
           (C455 * C118) / C73) *
              C355) *
         C70) /
        C73;
    const double d2neyx000002 =
        (2 * Pi *
         (((C429 * C127) / C73 + C1191 * C71) * C501 +
          (C1151 * C71 - (C579 * C127) / C73) * C502 +
          (((C60 * (C243 + C979 * C155)) / C93 - (C555 * C118) / C73) * C71 -
           (C591 * C127) / C73) *
              C503)) /
        C73;
    const double d2neyx000110 = (2 * Pi *
                                 (C680 * C418 + C1231 * C359 + C681 * C419 +
                                  (C280 * C402 + C63 * C1083 + C134 * C661 +
                                   C66 * (C313 + C128 * C1180)) *
                                      C361) *
                                 C70) /
                                C73;
    const double d2neyx000101 = (2 * Pi *
                                 ((C1231 * C71 - (C680 * C127) / C73) * C507 +
                                  (((C63 * C934) / C93 - C280 * C515 -
                                    C134 * C706 + C66 * C130 * C1180) *
                                       C71 -
                                   (C740 * C127) / C73) *
                                      C509)) /
                                C73;
    const double d2neyx000011 =
        (2 * Pi *
         ((C1191 * C359 - C429 * C418 + C445 * C419 + C1192 * C361) * C507 +
          (C579 * C418 + C1151 * C359 - C790 * C419 +
           (C60 * ((C128 * C130 * C979) / C93 - C560) - (C766 * C118) / C73) *
               C361) *
              C509)) /
        C73;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx000110;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx000011;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx000200 - 0.5 * d2neyx000020 + d2neyx000002;
    d2neyx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx000101;
    d2neyx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx000200 - std::sqrt(0.75) * d2neyx000020;
    const double d2neyy000200 = (2 * Pi *
                                 (C1226 * C65 + C1182 * C67 +
                                  ((C71 * (C276 + C1128 * C136)) / C93 -
                                   (C307 + C307 + C194 * C247) / C73) *
                                      C69) *
                                 C70) /
                                C73;
    const double d2neyy000020 =
        (2 * Pi *
         (((ae * -2 * C369) / C861 +
           (((C87 * C448) / C73 + 2 * C418) * ae) / C73 - C247 / C106) *
              C76 -
          C474 - C474 + (C353 * C1126) / C93 -
          (C448 / C106 + ((2 * C419 - C387 / C106) * ae) / C73) * C364 + C471 +
          C471 + C354 * C1084 - (C392 * C247) / C965 + C463 + C463 +
          C355 * (C276 / C93 + C449 + C449 +
                  C128 * ((-4 * C233) / C73 + (C128 * C1128) / C93))) *
         C60 * C70) /
        C73;
    const double d2neyy000002 = (2 * Pi *
                                 (C1226 * C60 * C501 + C1198 * C60 * C502 +
                                  ((C71 * (C276 + C1128 * C155)) / C93 -
                                   (C582 + C582 + C533 * C247) / C73) *
                                      C60 * C503)) /
                                C73;
    const double d2neyy000110 =
        (2 * Pi *
         (C1248 * C63 +
          ((C359 * C886) / C93 - (C656 + C656 + (C137 * C448) / C73) -
           (C638 * C247) / C106 + C675 + C675 +
           C361 * ((-2 * C286) / C73 + (C128 * C1207) / C93)) *
              C66) *
         C70) /
        C73;
    const double d2neyy000101 =
        (2 * Pi *
         ((C1226 * C63 + C1182 * C66) * C507 +
          (C1198 * C63 +
           (C735 - (C704 * C247) / C73 + C735 + (C71 * C130 * C1207) / C93) *
               C66) *
              C509)) /
        C73;
    const double d2neyy000011 =
        (2 * Pi *
         (C1248 * C60 * C507 +
          ((C359 * C936) / C93 - (C770 + C770 + (C511 * C448) / C73) -
           (C763 * C247) / C106 + C781 + C781 +
           C361 * ((-2 * C550) / C73 + (C128 * C130 * C1128) / C93)) *
              C60 * C509)) /
        C73;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy000110;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy000011;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy000200 - 0.5 * d2neyy000020 + d2neyy000002;
    d2neyy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy000101;
    d2neyy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy000200 - std::sqrt(0.75) * d2neyy000020;
    const double d2neyz000200 =
        (2 * Pi *
         (((C268 * C127) / C73 + C1183 * C71) * C65 +
          (C1130 * C71 - (C303 * C127) / C73) * C67 +
          (((C70 * (C249 + C989 * C136)) / C93 - (C285 * C129) / C73) * C71 -
           (C315 * C127) / C73) *
              C69)) /
        C73;
    const double d2neyz000020 =
        (2 * Pi *
         (C1183 * C353 - C268 * C472 + C442 * C468 + C1193 * C354 +
          C456 * C454 +
          (C70 * (C920 - C434 + C128 * ((C128 * C989) / C93 - C292)) -
           (C455 * C129) / C73) *
              C355) *
         C60) /
        C73;
    const double d2neyz000002 =
        (2 * Pi *
         (((C501 * C986) / C93 - C606 * C198 - C602 * C515 + C502 * C1100 +
           C589 * C555 + C503 * (C920 - C566 + C130 * C1199)) *
              C71 -
          (C613 * C127) / C73) *
         C60) /
        C73;
    const double d2neyz000110 =
        (2 * Pi *
         ((C1183 * C359 - C268 * C418 + C442 * C419 + C1193 * C361) * C63 +
          (C303 * C418 + C1130 * C359 - C679 * C419 +
           (C70 * ((C128 * C1109) / C93 - C305) - (C661 * C129) / C73) * C361) *
              C66)) /
        C73;
    const double d2neyz000101 =
        (2 * Pi *
         ((C1236 * C71 - (C738 * C127) / C73) * C63 +
          (((C507 * C891) / C93 - C558 * C262 - C559 * C706 +
            C509 * ((C130 * C1109) / C93 - C302)) *
               C71 -
           (C739 * C127) / C73) *
              C66)) /
        C73;
    const double d2neyz000011 = (2 * Pi *
                                 (C738 * C418 + C1236 * C359 + C789 * C419 +
                                  (C558 * C402 + C507 * C1085 + C559 * C766 +
                                   C509 * (C584 + C128 * C1199)) *
                                      C361) *
                                 C60) /
                                C73;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz000110;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz000011;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz000200 - 0.5 * d2neyz000020 + d2neyz000002;
    d2neyz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz000101;
    d2neyz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz000200 - std::sqrt(0.75) * d2neyz000020;
    const double d2nezx000200 =
        (2 * Pi *
         (((C65 * C990) / C93 - C324 * C203 - C311 * C269 + C67 * C1065 +
           C195 * C290 + C69 * (C895 - C305 + C123 * C1184)) *
              C70 -
          (C331 * C129) / C73) *
         C71) /
        C73;
    const double d2nezx000020 =
        (2 * Pi *
         (((C429 * C129) / C73 + C1194 * C70) * C353 +
          (C1146 * C70 - (C445 * C129) / C73) * C354 +
          (((C60 * (C250 + C992 * C150)) / C93 - (C427 * C118) / C73) * C70 -
           (C457 * C129) / C73) *
              C355)) /
        C73;
    const double d2nezx000002 =
        (2 * Pi *
         (C1194 * C501 - C429 * C606 + C579 * C602 + C1200 * C502 +
          C591 * C589 +
          (C60 * (C895 - C560 + C130 * ((C130 * C992) / C93 - C422)) -
           (C590 * C118) / C73) *
              C503) *
         C71) /
        C73;
    const double d2nezx000110 = (2 * Pi *
                                 ((C1233 * C70 - (C680 * C129) / C73) * C359 +
                                  (((C63 * C923) / C93 - C280 * C382 -
                                    C134 * C647 + C66 * C128 * C1184) *
                                       C70 -
                                   (C681 * C129) / C73) *
                                      C361)) /
                                C73;
    const double d2nezx000101 = (2 * Pi *
                                 (C680 * C558 + C1233 * C507 + C740 * C559 +
                                  (C280 * C544 + C63 * C1102 + C134 * C725 +
                                   C66 * (C313 + C130 * C1184)) *
                                      C509) *
                                 C71) /
                                C73;
    const double d2nezx000011 =
        (2 * Pi *
         ((C1194 * C507 - C429 * C558 + C579 * C559 + C1200 * C509) * C359 +
          (C445 * C558 + C1146 * C507 - C790 * C559 +
           (C60 * ((C130 * C128 * C992) / C93 - C421) - (C778 * C118) / C73) *
               C509) *
              C361)) /
        C73;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx000110;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx000011;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx000200 - 0.5 * d2nezx000020 + d2nezx000002;
    d2nezx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx000101;
    d2nezx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx000200 - std::sqrt(0.75) * d2nezx000020;
    const double d2nezy000200 =
        (2 * Pi *
         (((C261 * C129) / C73 + C1185 * C70) * C65 +
          (C1133 * C70 - (C300 * C129) / C73) * C67 +
          (((C71 * (C251 + C997 * C136)) / C93 - (C290 * C127) / C73) * C70 -
           (C314 * C129) / C73) *
              C69)) /
        C73;
    const double d2nezy000020 =
        (2 * Pi *
         (((C353 * C994) / C93 - C472 * C203 - C468 * C382 + C354 * C1089 +
           C454 * C427 + C355 * (C925 - C434 + C128 * C1195)) *
              C70 -
          (C479 * C129) / C73) *
         C60) /
        C73;
    const double d2nezy000002 =
        (2 * Pi *
         (C1185 * C501 - C261 * C606 + C570 * C602 + C1201 * C502 +
          C585 * C589 +
          (C71 * (C925 - C566 + C130 * ((C130 * C997) / C93 - C287)) -
           (C590 * C127) / C73) *
              C503) *
         C60) /
        C73;
    const double d2nezy000110 =
        (2 * Pi *
         ((C1234 * C70 - (C677 * C129) / C73) * C63 +
          (((C359 * C900) / C93 - C418 * C269 - C419 * C647 +
            C361 * ((C128 * C1112) / C93 - C305)) *
               C70 -
           (C678 * C129) / C73) *
              C66)) /
        C73;
    const double d2nezy000101 =
        (2 * Pi *
         ((C1185 * C507 - C261 * C558 + C570 * C559 + C1201 * C509) * C63 +
          (C300 * C558 + C1133 * C507 - C737 * C559 +
           (C71 * ((C130 * C1112) / C93 - C302) - (C725 * C127) / C73) * C509) *
              C66)) /
        C73;
    const double d2nezy000011 = (2 * Pi *
                                 (C677 * C558 + C1234 * C507 + C788 * C559 +
                                  (C418 * C544 + C359 * C1103 + C419 * C778 +
                                   C361 * (C449 + C130 * C1195)) *
                                      C509) *
                                 C60) /
                                C73;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy000110;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy000011;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy000200 - 0.5 * d2nezy000020 + d2nezy000002;
    d2nezy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy000101;
    d2nezy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy000200 - std::sqrt(0.75) * d2nezy000020;
    const double d2nezz000200 = (2 * Pi *
                                 (C1227 * C71 * C65 + C1187 * C71 * C67 +
                                  ((C70 * (C278 + C1137 * C136)) / C93 -
                                   (C308 + C308 + C194 * C253) / C73) *
                                      C71 * C69)) /
                                C73;
    const double d2nezz000020 = (2 * Pi *
                                 (C1227 * C353 + C1196 * C354 +
                                  ((C70 * (C278 + C1137 * C150)) / C93 -
                                   (C450 + C450 + C392 * C253) / C73) *
                                      C355) *
                                 C60) /
                                C73;
    const double d2nezz000002 =
        (2 * Pi *
         (((ae * -2 * C517) / C861 +
           (((C90 * C583) / C73 + 2 * C558) * ae) / C73 - C253 / C106) *
              C76 -
          C608 - C608 + (C501 * C1135) / C93 -
          (C583 / C106 + ((2 * C559 - C530 / C106) * ae) / C73) * C511 + C605 +
          C605 + C502 * C1104 - (C533 * C253) / C965 + C597 + C597 +
          C503 * (C278 / C93 + C584 + C584 +
                  C130 * ((-4 * C242) / C73 + (C130 * C1137) / C93))) *
         C71 * C60) /
        C73;
    const double d2nezz000110 =
        (2 * Pi *
         ((C1227 * C359 + C1196 * C361) * C63 +
          (C1187 * C359 +
           (C676 - (C638 * C253) / C73 + C676 + (C70 * C128 * C1210) / C93) *
               C361) *
              C66)) /
        C73;
    const double d2nezz000101 =
        (2 * Pi *
         (C1249 * C71 * C63 +
          ((C507 * C905) / C93 - (C718 + C718 + (C137 * C583) / C73) -
           (C704 * C253) / C106 + C736 + C736 +
           C509 * ((-2 * C291) / C73 + (C130 * C1210) / C93)) *
              C71 * C66)) /
        C73;
    const double d2nezz000011 =
        (2 * Pi *
         (C1249 * C359 +
          ((C507 * C927) / C93 - (C771 + C771 + (C364 * C583) / C73) -
           (C763 * C253) / C106 + C787 + C787 +
           C509 * ((-2 * C413) / C73 + (C130 * C128 * C1137) / C93)) *
              C361) *
         C60) /
        C73;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz000110;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz000011;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz000200 - 0.5 * d2nezz000020 + d2nezz000002;
    d2nezz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz000101;
    d2nezz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz000200 - std::sqrt(0.75) * d2nezz000020;
}
