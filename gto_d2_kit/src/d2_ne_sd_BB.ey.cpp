/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sd_BB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_02_22(double ae,
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
    const double C811 = ae + be;
    const double C810 = xA - xB;
    const double C815 = ae * be;
    const double C814 = std::pow(C810, 2);
    const double C816 = C814 * C815;
    const double C817 = C816 / C811;
    const double C818 = -C817;
    const double C819 = std::exp(C818);
    const double C827 = yA - yB;
    const double C828 = std::pow(C827, 2);
    const double C829 = C828 * C815;
    const double C830 = C829 / C811;
    const double C831 = -C830;
    const double C832 = std::exp(C831);
    const double C843 = zA - zB;
    const double C844 = std::pow(C843, 2);
    const double C845 = C844 * C815;
    const double C846 = C845 / C811;
    const double C847 = -C846;
    const double C848 = std::exp(C847);
    const double C864 = C843 * ae;
    const double C863 = C827 * ae;
    const double C862 = 2 * C811;
    const double C861 = std::pow(C811, 2);
    const double C860 = C810 * ae;
    const double C859 = ae * be;
    const double C868 = C848 * C864;
    const double C867 = C832 * C863;
    const double C866 = std::pow(C862, -2);
    const double C865 = std::pow(C862, -1);
    const double C60 = std::exp(-(std::pow(xA - xB, 2) * C859) / (ae + be));
    const double C63 =
        (std::exp(-(std::pow(C810, 2) * C859) / C811) * C860) / C811;
    const double C65 = (C819 * std::pow(C860, 2)) / C861 + C819 / C862;
    const double C66 = C865 * C819;
    const double C67 = (2 * C865 * C819 * C860) / C811;
    const double C69 = C866 * C819;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C815) / C811);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C815) / C811);
    const double C355 = (C832 * std::pow(C863, 2)) / C861 + C832 / C862;
    const double C356 = (2 * C865 * C867) / C811;
    const double C357 = C866 * C832;
    const double C360 = C865 * C832;
    const double C363 = C867 / C811;
    const double C506 = (C848 * std::pow(C864, 2)) / C861 + C848 / C862;
    const double C507 = (2 * C865 * C868) / C811;
    const double C508 = C866 * C848;
    const double C511 = C865 * C848;
    const double C514 = C868 / C811;
    const double C92 = zA - zB;
    const double C91 = be * zB;
    const double C90 = ae * zA;
    const double C89 = yA - yB;
    const double C88 = be * yB;
    const double C87 = ae * yA;
    const double C86 = bs[4];
    const double C85 = 0 * ae;
    const double C84 = bs[3];
    const double C83 = std::pow(be, 2);
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
    const double C104 = C75 * C92;
    const double C103 = C90 + C91;
    const double C102 = C75 * C89;
    const double C101 = C87 + C88;
    const double C100 = C85 / C73;
    const double C99 = C79 + C80;
    const double C98 = C78 / C73;
    const double C97 = C74 * C72;
    const double C96 = 2 * C75;
    const double C95 = C75 * C74;
    const double C94 = 2 * C73;
    const double C93 = std::pow(C73, 2);
    const double C116 = C104 * C70;
    const double C115 = C103 / C73;
    const double C114 = C102 * C71;
    const double C113 = C101 / C73;
    const double C112 = std::pow(C94, 4);
    const double C111 = -C94;
    const double C110 = C81 * C94;
    const double C109 = std::pow(C94, 2);
    const double C108 = C99 / C73;
    const double C107 = C97 / C73;
    const double C106 = 2 * C93;
    const double C105 = C95 * C60;
    const double C130 = 2 * C116;
    const double C129 = C115 - zC;
    const double C128 = 2 * C114;
    const double C127 = C113 - yC;
    const double C126 = std::pow(C111, 3);
    const double C125 = C82 * C109;
    const double C124 = C110 * be;
    const double C123 = C108 - xC;
    const double C122 = C105 / C93;
    const double C121 = C77 / C106;
    const double C120 = 0 - C107;
    const double C119 = C72 / C106;
    const double C118 = 2 * C105;
    const double C117 = -4 * C105;
    const double C155 = std::pow(C129, 2);
    const double C154 = C92 * C130;
    const double C153 = C129 * C127;
    const double C152 = C129 * C123;
    const double C151 = C127 * C129;
    const double C150 = std::pow(C127, 2);
    const double C149 = C89 * C128;
    const double C148 = C127 * C123;
    const double C147 = C123 * C129;
    const double C146 = C76 * C130;
    const double C145 = be * C129;
    const double C144 = C123 * C127;
    const double C143 = C76 * C128;
    const double C142 = be * C127;
    const double C141 = C84 * C126;
    const double C140 = C123 * C125;
    const double C139 = C125 * be;
    const double C138 = -C124;
    const double C137 = C123 * C110;
    const double C136 = std::pow(C123, 2);
    const double C135 = be * C123;
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
    const double C179 = C145 * C84;
    const double C178 = C137 * C130;
    const double C177 = C145 * C82;
    const double C176 = C147 * C83;
    const double C175 = C146 / C73;
    const double C174 = C145 * C81;
    const double C173 = C142 * C84;
    const double C172 = C137 * C128;
    const double C171 = C142 * C82;
    const double C170 = C144 * C83;
    const double C169 = C143 / C73;
    const double C168 = C142 * C81;
    const double C167 = C140 * be;
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
    const double C215 = C174 * C130;
    const double C214 = C84 * C185;
    const double C213 = C84 * C184;
    const double C212 = C84 * C183;
    const double C211 = C182 * C126;
    const double C210 = C71 - C181;
    const double C209 = C168 * C128;
    const double C208 = C84 * C180;
    const double C207 = C179 * C109;
    const double C206 = C84 * C176;
    const double C205 = C178 / C73;
    const double C204 = C177 * C94;
    const double C203 = 2 * C174;
    const double C202 = C173 * C109;
    const double C201 = C84 * C170;
    const double C200 = C172 / C73;
    const double C199 = C171 * C94;
    const double C198 = 2 * C168;
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
    const double C245 = C126 * C208;
    const double C244 = C195 * C194;
    const double C243 = C65 * C190;
    const double C242 = C207 * be;
    const double C241 = 2 * C207;
    const double C240 = C207 * C136;
    const double C239 = 2 * C204;
    const double C238 = C194 * C130;
    const double C237 = C204 * be;
    const double C236 = C126 * C206;
    const double C235 = -2 * C204;
    const double C234 = C70 * C203;
    const double C233 = C202 * be;
    const double C232 = 2 * C202;
    const double C231 = C202 * C136;
    const double C230 = 2 * C199;
    const double C229 = C194 * C128;
    const double C228 = C199 * be;
    const double C227 = C126 * C201;
    const double C226 = -2 * C199;
    const double C225 = C71 * C198;
    const double C224 = 2 * C196;
    const double C223 = C125 + C193;
    const double C222 = -2 * C192;
    const double C221 = C191 * ae;
    const double C220 = C189 / C94;
    const double C219 = C188 * ae;
    const double C218 = C188 * C96;
    const double C276 = C254 * C83;
    const double C275 = C248 * C83;
    const double C274 = 2 * C242;
    const double C273 = C123 * C241;
    const double C272 = 2 * C240;
    const double C271 = C238 / C73;
    const double C270 = -2 * C237;
    const double C269 = C123 * C235;
    const double C268 = C234 - C175;
    const double C267 = 2 * C233;
    const double C266 = C123 * C232;
    const double C265 = 2 * C231;
    const double C264 = C229 / C73;
    const double C263 = -2 * C228;
    const double C262 = C123 * C226;
    const double C261 = C225 - C169;
    const double C260 = C123 * C224;
    const double C259 = C223 * C83;
    const double C258 = C123 * C222;
    const double C257 = C221 / C73;
    const double C256 = C219 / C73;
    const double C255 = C74 * C218;
    const double C292 = C269 * C130;
    const double C291 = C262 * C128;
    const double C290 = C274 / C73;
    const double C289 = C273 * be;
    const double C288 = C239 - C272;
    const double C287 = C270 / C73;
    const double C286 = C70 * C269;
    const double C285 = C267 / C73;
    const double C284 = C266 * be;
    const double C283 = C230 - C265;
    const double C282 = C263 / C73;
    const double C281 = C71 * C262;
    const double C280 = C165 - C260;
    const double C279 = C160 - C258;
    const double C278 = C256 - C119;
    const double C277 = C255 / C73;
    const double C308 = C288 * C130;
    const double C307 = C292 / C73;
    const double C306 = C283 * C128;
    const double C305 = C291 / C73;
    const double C304 = C67 * C279;
    const double C303 = C289 / C73;
    const double C302 = C70 * C288;
    const double C301 = C286 + C205;
    const double C300 = C284 / C73;
    const double C299 = C71 * C283;
    const double C298 = C281 + C200;
    const double C297 = C280 * be;
    const double C296 = C123 * C280;
    const double C295 = C278 / C94;
    const double C294 = C74 * C278;
    const double C293 = C131 - C277;
    const double C317 = C308 / C73;
    const double C316 = C306 / C73;
    const double C315 = C271 + C302;
    const double C314 = C264 + C299;
    const double C313 = C297 / C73;
    const double C312 = C296 - C222;
    const double C311 = C295 + C257;
    const double C310 = C294 + C63;
    const double C309 = C293 * ae;
    const double C321 = C311 * C137;
    const double C320 = C312 + C197;
    const double C319 = C311 * C279;
    const double C318 = C310 * ae;
    const double C324 = C69 * C320;
    const double C323 = C195 * C320;
    const double C322 = C318 / C73;
    const double C325 = C220 + C322;
    const double C326 = C325 + C134;
    const double C328 = C326 * C76;
    const double C327 = C326 * C190;
    const double C329 = C243 + C328;
    const double C330 = C321 - C329;
    const double C331 = C330 + C304;
    const double C332 = C331 - C244;
    const double C333 = C332 + C324;
    const double C390 = C127 * C241;
    const double C389 = C89 * C247;
    const double C388 = -4 * C114;
    const double C387 = C76 * C118;
    const double C386 = C60 * C190;
    const double C385 = C207 * C150;
    const double C384 = C127 * C235;
    const double C383 = C196 * be;
    const double C382 = C127 * C224;
    const double C381 = C192 * be;
    const double C380 = C127 * C125;
    const double C379 = C127 * C232;
    const double C378 = 0 * ae;
    const double C377 = C127 * C226;
    const double C376 = 0 * be;
    const double C375 = C355 * C198;
    const double C374 = C114 / C93;
    const double C373 = 0 * ae;
    const double C372 = 0 * be;
    const double C371 = C210 * ae;
    const double C370 = C125 * C150;
    const double C369 = C196 * C150;
    const double C368 = 2 * C192;
    const double C367 = C127 * C222;
    const double C366 = C127 * C110;
    const double C365 = C158 * C118;
    const double C416 = C384 * C130;
    const double C415 = C390 * be;
    const double C414 = C389 / C73;
    const double C413 = C388 / C73;
    const double C412 = C366 * C118;
    const double C411 = C60 * C367;
    const double C410 = C387 / C73;
    const double C409 = 2 * C385;
    const double C408 = C366 * C130;
    const double C407 = C70 * C384;
    const double C406 = 2 * C383;
    const double C405 = C382 * be;
    const double C404 = -2 * C381;
    const double C403 = C380 * be;
    const double C402 = C165 - C379;
    const double C401 = C378 / C73;
    const double C400 = C160 - C377;
    const double C399 = C376 / C106;
    const double C398 = C89 * C372;
    const double C397 = C373 / C73;
    const double C396 = C372 / C106;
    const double C395 = C371 / C73;
    const double C394 = C370 - C110;
    const double C393 = 2 * C369;
    const double C392 = C367 * C118;
    const double C391 = 2 * C365;
    const double C437 = C416 / C73;
    const double C436 = C415 / C73;
    const double C435 = C402 * be;
    const double C434 = C413 - C414;
    const double C433 = C394 * C118;
    const double C432 = C412 / C73;
    const double C431 = C386 - C410;
    const double C430 = C239 - C409;
    const double C429 = C394 * C130;
    const double C428 = C408 / C73;
    const double C427 = C406 / C73;
    const double C426 = C405 / C73;
    const double C425 = C404 / C73;
    const double C424 = C403 / C73;
    const double C423 = C127 * C402;
    const double C422 = C356 * C400;
    const double C421 = C398 / C73;
    const double C420 = C397 - C374;
    const double C419 = C395 - C396;
    const double C418 = C368 - C393;
    const double C417 = C392 / C73;
    const double C453 = C430 * C130;
    const double C452 = C435 / C73;
    const double C451 = C434 * ae;
    const double C450 = C60 * C418;
    const double C449 = C433 / C73;
    const double C448 = C411 + C432;
    const double C447 = C70 * C430;
    const double C446 = C429 / C73;
    const double C445 = C407 + C428;
    const double C444 = C423 - C226;
    const double C443 = C420 / C94;
    const double C442 = C89 * C419;
    const double C441 = 0 - C421;
    const double C440 = C89 * C420;
    const double C439 = C419 / C94;
    const double C438 = C418 * C118;
    const double C462 = C453 / C73;
    const double C461 = C449 + C450;
    const double C460 = C446 + C447;
    const double C459 = C444 + C424;
    const double C458 = C443 + C401;
    const double C457 = C442 + C363;
    const double C456 = C441 * ae;
    const double C455 = C440 + C360;
    const double C454 = C438 / C73;
    const double C468 = C458 * C459;
    const double C467 = C357 * C459;
    const double C466 = C458 * C394;
    const double C465 = C457 * ae;
    const double C464 = C456 / C73;
    const double C463 = C455 * ae;
    const double C471 = C465 / C73;
    const double C470 = C464 - C399;
    const double C469 = C463 / C73;
    const double C473 = C470 / C94;
    const double C472 = C439 + C469;
    const double C476 = C472 * C400;
    const double C475 = C473 + C471;
    const double C474 = C472 * C366;
    const double C477 = C475 + C420;
    const double C479 = C477 * C198;
    const double C478 = C477 * C76;
    const double C480 = C375 + C478;
    const double C481 = C474 - C480;
    const double C482 = C481 + C422;
    const double C483 = C482 - C466;
    const double C484 = C483 + C467;
    const double C535 = C92 * C253;
    const double C534 = -4 * C116;
    const double C533 = C129 * C232;
    const double C532 = C129 * C224;
    const double C531 = C129 * C125;
    const double C530 = C129 * C241;
    const double C529 = 0 * ae;
    const double C528 = C129 * C235;
    const double C527 = 0 * be;
    const double C526 = C506 * C203;
    const double C525 = C116 / C93;
    const double C524 = 0 * ae;
    const double C523 = 0 * be;
    const double C522 = C216 * ae;
    const double C521 = C202 * C155;
    const double C520 = C129 * C226;
    const double C519 = C125 * C155;
    const double C518 = C196 * C155;
    const double C517 = C129 * C222;
    const double C516 = C129 * C110;
    const double C557 = C535 / C73;
    const double C556 = C534 / C73;
    const double C555 = C533 * be;
    const double C554 = C520 * C128;
    const double C553 = C516 * C118;
    const double C552 = C60 * C517;
    const double C551 = C532 * be;
    const double C550 = C531 * be;
    const double C549 = C165 - C530;
    const double C548 = C529 / C73;
    const double C547 = C160 - C528;
    const double C546 = C527 / C106;
    const double C545 = C92 * C523;
    const double C544 = C524 / C73;
    const double C543 = C523 / C106;
    const double C542 = C522 / C73;
    const double C541 = 2 * C521;
    const double C540 = C516 * C128;
    const double C539 = C71 * C520;
    const double C538 = C519 - C110;
    const double C537 = 2 * C518;
    const double C536 = C517 * C118;
    const double C575 = C549 * be;
    const double C574 = C556 - C557;
    const double C573 = C555 / C73;
    const double C572 = C554 / C73;
    const double C571 = C538 * C118;
    const double C570 = C553 / C73;
    const double C569 = C551 / C73;
    const double C568 = C550 / C73;
    const double C567 = C129 * C549;
    const double C566 = C507 * C547;
    const double C565 = C545 / C73;
    const double C564 = C544 - C525;
    const double C563 = C542 - C543;
    const double C562 = C230 - C541;
    const double C561 = C538 * C128;
    const double C560 = C540 / C73;
    const double C559 = C368 - C537;
    const double C558 = C536 / C73;
    const double C591 = C575 / C73;
    const double C590 = C574 * ae;
    const double C589 = C562 * C128;
    const double C588 = C60 * C559;
    const double C587 = C571 / C73;
    const double C586 = C552 + C570;
    const double C585 = C567 - C235;
    const double C584 = C564 / C94;
    const double C583 = C92 * C563;
    const double C582 = 0 - C565;
    const double C581 = C92 * C564;
    const double C580 = C563 / C94;
    const double C579 = C71 * C562;
    const double C578 = C561 / C73;
    const double C577 = C539 + C560;
    const double C576 = C559 * C118;
    const double C600 = C589 / C73;
    const double C599 = C587 + C588;
    const double C598 = C585 + C568;
    const double C597 = C584 + C548;
    const double C596 = C583 + C514;
    const double C595 = C582 * ae;
    const double C594 = C581 + C511;
    const double C593 = C578 + C579;
    const double C592 = C576 / C73;
    const double C606 = C597 * C598;
    const double C605 = C508 * C598;
    const double C604 = C597 * C538;
    const double C603 = C596 * ae;
    const double C602 = C595 / C73;
    const double C601 = C594 * ae;
    const double C609 = C603 / C73;
    const double C608 = C602 - C546;
    const double C607 = C601 / C73;
    const double C611 = C608 / C94;
    const double C610 = C580 + C607;
    const double C614 = C610 * C547;
    const double C613 = C611 + C609;
    const double C612 = C610 * C516;
    const double C615 = C613 + C564;
    const double C617 = C615 * C203;
    const double C616 = C615 * C76;
    const double C618 = C526 + C616;
    const double C619 = C612 - C618;
    const double C620 = C619 + C566;
    const double C621 = C620 - C604;
    const double C622 = C621 + C605;
    const double C657 = C63 * C367;
    const double C656 = C66 * C279;
    const double C655 = C63 * C190;
    const double C654 = C127 * C273;
    const double C653 = C127 * C266;
    const double C652 = C363 * C262;
    const double C651 = C360 * C400;
    const double C650 = C363 * C198;
    const double C649 = C374 - C397;
    const double C648 = C396 - C395;
    const double C647 = C127 * C280;
    const double C646 = C127 * C140;
    const double C645 = C122 - C98;
    const double C644 = C119 - C256;
    const double C677 = C654 * C130;
    const double C676 = C648 * C262;
    const double C675 = C649 * C400;
    const double C674 = C648 * C198;
    const double C673 = C66 * C647;
    const double C672 = C644 * C366;
    const double C671 = C645 * C646;
    const double C670 = C645 * C137;
    const double C669 = C644 * C76;
    const double C668 = C646 * C130;
    const double C667 = C70 * C654;
    const double C666 = C197 - C653;
    const double C665 = C648 * C137;
    const double C664 = C649 * C646;
    const double C663 = C649 * C366;
    const double C662 = C648 * C76;
    const double C661 = C645 * C647;
    const double C660 = C644 * C367;
    const double C659 = C645 * C279;
    const double C658 = C644 * C190;
    const double C684 = C649 * C666;
    const double C683 = C657 + C672;
    const double C682 = C669 - C655;
    const double C681 = C668 / C73;
    const double C680 = C360 * C666;
    const double C679 = C652 + C665;
    const double C678 = C662 - C650;
    const double C689 = C671 - C683;
    const double C688 = C682 - C670;
    const double C687 = C667 - C681;
    const double C686 = C664 - C679;
    const double C685 = C678 - C663;
    const double C693 = C689 + C673;
    const double C692 = C688 + C656;
    const double C691 = C686 + C680;
    const double C690 = C685 + C651;
    const double C726 = C644 * C516;
    const double C725 = C63 * C517;
    const double C724 = C129 * C273;
    const double C723 = C514 * C269;
    const double C722 = C511 * C547;
    const double C721 = C514 * C203;
    const double C720 = C525 - C544;
    const double C719 = C543 - C542;
    const double C718 = C129 * C266;
    const double C717 = C129 * C280;
    const double C716 = C129 * C140;
    const double C715 = C644 * C517;
    const double C741 = C719 * C269;
    const double C740 = C720 * C547;
    const double C739 = C719 * C203;
    const double C738 = C718 * C128;
    const double C737 = C66 * C717;
    const double C736 = C725 + C726;
    const double C735 = C645 * C716;
    const double C734 = C197 - C724;
    const double C733 = C719 * C137;
    const double C732 = C720 * C716;
    const double C731 = C720 * C516;
    const double C730 = C719 * C76;
    const double C729 = C716 * C128;
    const double C728 = C71 * C718;
    const double C727 = C645 * C717;
    const double C747 = C720 * C734;
    const double C746 = C735 - C736;
    const double C745 = C511 * C734;
    const double C744 = C723 + C733;
    const double C743 = C730 - C721;
    const double C742 = C729 / C73;
    const double C751 = C746 + C737;
    const double C750 = C732 - C744;
    const double C749 = C743 - C731;
    const double C748 = C728 - C742;
    const double C753 = C750 + C745;
    const double C752 = C749 + C722;
    const double C784 = C719 * C384;
    const double C783 = C648 * C520;
    const double C782 = C129 * C390;
    const double C781 = C719 * C366;
    const double C780 = C514 * C384;
    const double C779 = C129 * C402;
    const double C778 = C648 * C516;
    const double C777 = C363 * C520;
    const double C776 = C129 * C380;
    const double C775 = C129 * C382;
    const double C794 = C649 * C779;
    const double C793 = C776 * C118;
    const double C792 = C60 * C775;
    const double C791 = C424 - C782;
    const double C790 = C780 + C781;
    const double C789 = C720 * C776;
    const double C788 = C360 * C779;
    const double C787 = C777 + C778;
    const double C786 = C649 * C776;
    const double C785 = C775 * C118;
    const double C799 = C720 * C791;
    const double C798 = C793 / C73;
    const double C797 = C511 * C791;
    const double C796 = C789 - C790;
    const double C795 = C786 - C787;
    const double C802 = C792 - C798;
    const double C801 = C796 + C797;
    const double C800 = C795 + C788;
    const double C979 = C516 * C253;
    const double C978 = C76 * C590;
    const double C977 = C720 * C520;
    const double C976 = C719 * C198;
    const double C975 = C720 * C517;
    const double C974 = C719 * C190;
    const double C973 = C649 * C384;
    const double C972 = C648 * C203;
    const double C971 = C645 * C269;
    const double C970 = C644 * C203;
    const double C969 = C366 * C247;
    const double C968 = C76 * C451;
    const double C967 = C645 * C262;
    const double C966 = C644 * C198;
    const double C965 = C649 * C367;
    const double C964 = C648 * C190;
    const double C963 = C137 * C218;
    const double C962 = C76 * C309;
    const double C961 = C129 * C276;
    const double C960 = 4 * C237;
    const double C959 = C129 * C251;
    const double C958 = C547 * C128;
    const double C957 = C129 * C250;
    const double C956 = C547 * C118;
    const double C955 = C129 * C249;
    const double C954 = C129 * C275;
    const double C953 = C516 * C247;
    const double C952 = C520 * C118;
    const double C951 = C129 * C245;
    const double C950 = C129 * C236;
    const double C949 = C517 * C128;
    const double C948 = C129 * C227;
    const double C947 = C129 * C259;
    const double C946 = C516 * C218;
    const double C945 = C127 * C276;
    const double C944 = C366 * C253;
    const double C943 = C251 / C93;
    const double C942 = C127 * C251;
    const double C941 = C384 * C118;
    const double C940 = C127 * C250;
    const double C939 = C174 * C118;
    const double C938 = C249 / C93;
    const double C937 = C127 * C249;
    const double C936 = C400 * C130;
    const double C935 = C127 * C275;
    const double C934 = 4 * C228;
    const double C933 = C127 * C245;
    const double C932 = C400 * C118;
    const double C931 = C168 * C118;
    const double C930 = C367 * C130;
    const double C929 = C127 * C236;
    const double C928 = C127 * C227;
    const double C927 = C127 * C259;
    const double C926 = C366 * C218;
    const double C925 = C391 / C73;
    const double C924 = C76 * C218;
    const double C923 = -C391;
    const double C922 = C155 * C86;
    const double C921 = C123 * C276;
    const double C920 = C137 * C253;
    const double C919 = C155 * C82;
    const double C918 = C252 / C73;
    const double C917 = C76 * C253;
    const double C916 = -C252;
    const double C915 = C86 * C185;
    const double C914 = C269 * C128;
    const double C913 = C123 * C251;
    const double C912 = C174 * C128;
    const double C911 = C82 * C185;
    const double C910 = C86 * C184;
    const double C909 = C250 / C93;
    const double C908 = C123 * C250;
    const double C907 = C82 * C184;
    const double C906 = C86 * C183;
    const double C905 = C262 * C130;
    const double C904 = C123 * C249;
    const double C903 = C168 * C130;
    const double C902 = C82 * C183;
    const double C901 = C150 * C86;
    const double C900 = C123 * C275;
    const double C899 = C137 * C247;
    const double C898 = C150 * C82;
    const double C897 = C246 / C73;
    const double C896 = C76 * C247;
    const double C895 = -C246;
    const double C894 = C86 * C180;
    const double C893 = C245 / C93;
    const double C892 = C123 * C245;
    const double C891 = C82 * C180;
    const double C890 = C86 * C176;
    const double C889 = C236 / C93;
    const double C888 = C123 * C236;
    const double C887 = C279 * C130;
    const double C886 = C158 * C130;
    const double C885 = C82 * C176;
    const double C884 = C86 * C170;
    const double C883 = C227 / C93;
    const double C882 = C123 * C227;
    const double C881 = C279 * C128;
    const double C880 = C158 * C128;
    const double C879 = C82 * C170;
    const double C878 = C136 * C86;
    const double C877 = 4 * C93;
    const double C876 = C123 * C259;
    const double C875 = 4 * C381;
    const double C874 = C136 * C82;
    const double C873 = C93 * C94;
    const double C1064 = C979 / C106;
    const double C1063 = C978 / C73;
    const double C1062 = C969 / C106;
    const double C1061 = C968 / C73;
    const double C1060 = C963 / C106;
    const double C1059 = C962 / C73;
    const double C1058 = C961 / C93;
    const double C1057 = C960 / C73;
    const double C1056 = C959 / C93;
    const double C1055 = C958 / C73;
    const double C1054 = C957 / C93;
    const double C1053 = C956 / C73;
    const double C1052 = C955 / C93;
    const double C1051 = C71 * C954;
    const double C1050 = C953 / C73;
    const double C1049 = C952 / C73;
    const double C1048 = C60 * C951;
    const double C1047 = C950 / C93;
    const double C1046 = C949 / C73;
    const double C1045 = C71 * C948;
    const double C1044 = C60 * C947;
    const double C1043 = C946 / C73;
    const double C1042 = C70 * C945;
    const double C1041 = C944 / C73;
    const double C1040 = C942 / C93;
    const double C1039 = C941 / C73;
    const double C1038 = C60 * C940;
    const double C1037 = 2 * C939;
    const double C1036 = C937 / C93;
    const double C1035 = C936 / C73;
    const double C1034 = C935 / C93;
    const double C1033 = C934 / C73;
    const double C1032 = C933 / C93;
    const double C1031 = C932 / C73;
    const double C1030 = 2 * C931;
    const double C1029 = C930 / C73;
    const double C1028 = C70 * C929;
    const double C1027 = C928 / C93;
    const double C1026 = C60 * C927;
    const double C1025 = C926 / C73;
    const double C1024 = C924 / C73;
    const double C1023 = C923 / C73;
    const double C1022 = C922 * C112;
    const double C1021 = C70 * C921;
    const double C1020 = C920 / C73;
    const double C1019 = C919 * C109;
    const double C1018 = C917 / C73;
    const double C1017 = C916 / C73;
    const double C1016 = C112 * C915;
    const double C1015 = C914 / C73;
    const double C1014 = C71 * C913;
    const double C1013 = 2 * C912;
    const double C1012 = C109 * C911;
    const double C1011 = C112 * C910;
    const double C1010 = C908 / C93;
    const double C1009 = C109 * C907;
    const double C1008 = C112 * C906;
    const double C1007 = C905 / C73;
    const double C1006 = C70 * C904;
    const double C1005 = 2 * C903;
    const double C1004 = C109 * C902;
    const double C1003 = C901 * C112;
    const double C1002 = C71 * C900;
    const double C1001 = C899 / C73;
    const double C1000 = C898 * C109;
    const double C999 = C896 / C73;
    const double C998 = C895 / C73;
    const double C997 = C112 * C894;
    const double C996 = C892 / C93;
    const double C995 = C109 * C891;
    const double C994 = C112 * C890;
    const double C993 = C888 / C93;
    const double C992 = C887 / C73;
    const double C991 = 2 * C886;
    const double C990 = C109 * C885;
    const double C989 = C112 * C884;
    const double C988 = C882 / C93;
    const double C987 = C881 / C73;
    const double C986 = 2 * C880;
    const double C985 = C109 * C879;
    const double C984 = C878 * C112;
    const double C983 = C73 * C877;
    const double C982 = C876 / C93;
    const double C981 = C875 / C73;
    const double C980 = C874 * C109;
    const double C1136 = C1063 - C739;
    const double C1135 = C514 * C1004;
    const double C1134 = C514 * C990;
    const double C1133 = C123 * C1016;
    const double C1132 = C363 * C1012;
    const double C1131 = C63 * C1009;
    const double C1130 = C123 * C1008;
    const double C1129 = C1061 - C674;
    const double C1128 = C63 * C995;
    const double C1127 = C363 * C985;
    const double C1126 = C1059 - C658;
    const double C1125 = C1057 + C1058;
    const double C1124 = C1056 - C282;
    const double C1123 = C1054 - C425;
    const double C1122 = C129 * C1008;
    const double C1121 = C1052 - C282;
    const double C1120 = C1051 / C93;
    const double C1119 = C1050 - C572;
    const double C1118 = C1048 / C93;
    const double C1117 = C1047 - C425;
    const double C1116 = C1045 / C93;
    const double C1115 = C1044 / C93;
    const double C1114 = C1043 - C558;
    const double C1113 = C1042 / C93;
    const double C1112 = C1041 - C437;
    const double C1111 = C127 * C1016;
    const double C1110 = C1040 - C287;
    const double C1109 = C1038 / C93;
    const double C1108 = C1037 / C73;
    const double C1107 = C60 * C1009;
    const double C1106 = C1036 - C287;
    const double C1105 = C1033 + C1034;
    const double C1104 = C1032 - C425;
    const double C1103 = C1030 / C73;
    const double C1102 = C60 * C995;
    const double C1101 = C1028 / C93;
    const double C1100 = C127 * C989;
    const double C1099 = C1027 - C425;
    const double C1098 = C1026 / C93;
    const double C1097 = C1025 - C417;
    const double C1096 = C1023 - C1024;
    const double C1095 = C141 + C1022;
    const double C1094 = C1021 / C93;
    const double C1093 = C1020 - C307;
    const double C1092 = C1019 - C110;
    const double C1091 = C1017 - C1018;
    const double C1090 = C1014 / C93;
    const double C1089 = C1013 / C73;
    const double C1088 = C71 * C1012;
    const double C1087 = C123 * C1011;
    const double C1086 = C1010 - C287;
    const double C1085 = C1006 / C93;
    const double C1084 = C1005 / C73;
    const double C1083 = C70 * C1004;
    const double C1082 = C141 + C1003;
    const double C1081 = C1002 / C93;
    const double C1080 = C1001 - C305;
    const double C1079 = C1000 - C110;
    const double C1078 = C998 - C999;
    const double C1077 = C123 * C997;
    const double C1076 = C996 - C282;
    const double C1075 = C123 * C994;
    const double C1074 = C993 - C287;
    const double C1073 = C991 / C73;
    const double C1072 = C70 * C990;
    const double C1071 = C123 * C989;
    const double C1070 = C988 - C282;
    const double C1069 = C986 / C73;
    const double C1068 = C71 * C985;
    const double C1067 = C141 + C984;
    const double C1066 = C981 + C982;
    const double C1065 = C980 - C110;
    const double C1194 = C511 * C1125;
    const double C1193 = C1136 - C739;
    const double C1192 = C511 * C1121;
    const double C1191 = C1135 / C93;
    const double C1190 = C511 * C1117;
    const double C1189 = C1134 / C93;
    const double C1188 = C360 * C1110;
    const double C1187 = C1132 / C93;
    const double C1186 = C66 * C1086;
    const double C1185 = C1131 / C93;
    const double C1184 = C360 * C1105;
    const double C1183 = C1129 - C674;
    const double C1182 = C66 * C1076;
    const double C1181 = C1128 / C93;
    const double C1180 = C360 * C1099;
    const double C1179 = C1127 / C93;
    const double C1178 = C66 * C1066;
    const double C1177 = C1126 - C658;
    const double C1176 = C71 * C1124;
    const double C1175 = C60 * C1123;
    const double C1174 = C1122 / C93;
    const double C1173 = C1119 - C572;
    const double C1172 = C1118 - C1049;
    const double C1171 = C1116 - C1046;
    const double C1170 = C1114 - C558;
    const double C1169 = C1112 - C437;
    const double C1168 = C1111 / C93;
    const double C1167 = C1109 - C1039;
    const double C1166 = C1107 / C93;
    const double C1165 = C70 * C1106;
    const double C1164 = C60 * C1104;
    const double C1163 = C1102 / C93;
    const double C1162 = C1101 - C1029;
    const double C1161 = C1100 / C93;
    const double C1160 = C1097 - C417;
    const double C1159 = C1096 - C925;
    const double C1158 = C1095 * C83;
    const double C1157 = C1093 - C307;
    const double C1156 = C1092 * C83;
    const double C1155 = C1091 - C918;
    const double C1154 = C1090 - C1015;
    const double C1153 = C1088 / C93;
    const double C1152 = C1087 / C93;
    const double C1151 = C1085 - C1007;
    const double C1150 = C1083 / C93;
    const double C1149 = C1082 * C83;
    const double C1148 = C1080 - C305;
    const double C1147 = C1079 * C83;
    const double C1146 = C1078 - C897;
    const double C1145 = C1077 / C93;
    const double C1144 = C1075 / C93;
    const double C1143 = C70 * C1074;
    const double C1142 = C1072 / C93;
    const double C1141 = C1071 / C93;
    const double C1140 = C71 * C1070;
    const double C1139 = C1068 / C93;
    const double C1138 = C1067 * C83;
    const double C1137 = C1065 * C83;
    const double C1234 = C514 * C1156;
    const double C1233 = C1191 - C976;
    const double C1232 = C1189 - C974;
    const double C1231 = C123 * C1158;
    const double C1230 = C1187 - C972;
    const double C1229 = C1185 - C970;
    const double C1228 = C123 * C1149;
    const double C1227 = C363 * C1147;
    const double C1226 = C1181 - C966;
    const double C1225 = C1179 - C964;
    const double C1224 = C127 * C1138;
    const double C1223 = C63 * C1137;
    const double C1222 = C1055 + C1176;
    const double C1221 = C1053 + C1175;
    const double C1220 = C1174 - C285;
    const double C1219 = C1173 + C1120;
    const double C1218 = C1170 + C1115;
    const double C1217 = C1169 + C1113;
    const double C1216 = C1168 - C290;
    const double C1215 = C1166 - C1108;
    const double C1214 = C1035 + C1165;
    const double C1213 = C1031 + C1164;
    const double C1212 = C1163 - C1103;
    const double C1211 = C1161 - C427;
    const double C1210 = C1160 + C1098;
    const double C1209 = C60 * C1137;
    const double C1208 = C1157 + C1094;
    const double C1207 = C70 * C1156;
    const double C1206 = C1153 - C1089;
    const double C1205 = C1152 - C290;
    const double C1204 = C1150 - C1084;
    const double C1203 = C1148 + C1081;
    const double C1202 = C71 * C1147;
    const double C1201 = C1145 - C285;
    const double C1200 = C1144 - C290;
    const double C1199 = C992 + C1143;
    const double C1198 = C1142 - C1073;
    const double C1197 = C1141 - C285;
    const double C1196 = C987 + C1140;
    const double C1195 = C1139 - C1069;
    const double C1246 = C1234 / C93;
    const double C1245 = C1233 - C977;
    const double C1244 = C1232 - C975;
    const double C1243 = C1230 - C973;
    const double C1242 = C1229 - C971;
    const double C1241 = C1227 / C93;
    const double C1240 = C1226 - C967;
    const double C1239 = C1225 - C965;
    const double C1238 = C1223 / C93;
    const double C1237 = C1209 / C93;
    const double C1236 = C1207 / C93;
    const double C1235 = C1202 / C93;
    const double C1258 = C1193 + C1246;
    const double C1257 = C1245 + C1192;
    const double C1256 = C1244 + C1190;
    const double C1255 = C1243 + C1188;
    const double C1254 = C1242 + C1186;
    const double C1253 = C1183 + C1241;
    const double C1252 = C1240 + C1182;
    const double C1251 = C1239 + C1180;
    const double C1250 = C1177 + C1238;
    const double C1249 = C1159 + C1237;
    const double C1248 = C1155 + C1236;
    const double C1247 = C1146 + C1235;
    const double C1261 = C1258 + C1064;
    const double C1260 = C1253 + C1062;
    const double C1259 = C1250 + C1060;
    const double C1264 = C1261 + C740;
    const double C1263 = C1260 + C675;
    const double C1262 = C1259 + C659;
    const double C1267 = C1264 + C740;
    const double C1266 = C1263 + C675;
    const double C1265 = C1262 + C659;
    const double C1270 = C1267 + C1194;
    const double C1269 = C1266 + C1184;
    const double C1268 = C1265 + C1178;
    const double d2nexx000200 =
        (2 * Pi *
         (((ae * -2 * C72) / C873 +
           (((C74 * C309) / C73 + 2 * C278) * ae) / C73 - C218 / C106) *
              C76 +
          C327 + C327 + (C65 * C1137) / C93 -
          (C309 / C106 + ((2 * C134 - C255 / C106) * ae) / C73) * C137 - C319 -
          C319 + C67 * C1066 - (C194 * C218) / C983 - C323 - C323 +
          C69 * (C259 / C93 + C313 + C313 +
                 C123 * ((-4 * C383) / C73 + (C123 * C1138) / C93))) *
         C70 * C71) /
        C73;
    const double d2nexx000020 = (2 * Pi *
                                 (C1249 * C70 * C355 + C1210 * C70 * C356 +
                                  (C454 - (C394 * C218) / C73 + C454 +
                                   (C60 * (C259 + C1138 * C150)) / C93) *
                                      C70 * C357)) /
                                C73;
    const double d2nexx000002 = (2 * Pi *
                                 (C1249 * C506 + C1218 * C507 +
                                  (C592 - (C538 * C218) / C73 + C592 +
                                   (C60 * (C259 + C1138 * C155)) / C93) *
                                      C508) *
                                 C71) /
                                C73;
    const double d2nexx000110 =
        (2 * Pi *
         (C1268 * C70 * C363 +
          ((C63 * C927) / C93 - (C660 + C660 + (C366 * C309) / C73) -
           (C646 * C218) / C106 + C661 + C661 +
           C66 * ((-2 * C405) / C73 + (C123 * C1224) / C93)) *
              C70 * C360)) /
        C73;
    const double d2nexx000101 =
        (2 * Pi *
         (C1268 * C514 +
          ((C63 * C947) / C93 - (C715 + C715 + (C516 * C309) / C73) -
           (C716 * C218) / C106 + C727 + C727 +
           C66 * ((-2 * C551) / C73 + (C123 * C129 * C1138) / C93)) *
              C511) *
         C71) /
        C73;
    const double d2nexx000011 =
        (2 * Pi *
         ((C1249 * C514 + C1218 * C511) * C363 +
          (C1210 * C514 + ((-C785) / C73 - (C776 * C218) / C73 - C785 / C73 +
                           (C60 * C129 * C1224) / C93) *
                              C511) *
              C360)) /
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
         (C261 * C326 + C1195 * C65 + C298 * C311 + C1196 * C67 - C314 * C195 +
          ((C320 * C128) / C73 + C71 * (C883 - C300 + C123 * C1197)) * C69) *
         C70) /
        C73;
    const double d2nexy000020 =
        (2 * Pi *
         ((C484 * C118) / C73 +
          (C477 * C190 + (C355 * C985) / C93 + C472 * C367 + C356 * C1099 -
           C458 * C418 + C357 * (C883 - C426 + C127 * C1211)) *
              C60) *
         C70) /
        C73;
    const double d2nexy000002 =
        (2 * Pi *
         ((C1195 * C60 - (C261 * C118) / C73) * C506 +
          (C1171 * C60 - (C577 * C118) / C73) * C507 +
          ((C593 * C118) / C73 +
           ((C559 * C128) / C73 + (C71 * (C227 + C989 * C155)) / C93) * C60) *
              C508)) /
        C73;
    const double d2nexy000110 = (2 * Pi *
                                 (C1251 * C63 - C690 * C278 - C691 * C134 +
                                  (C648 * C279 + C363 * C1070 + C649 * C647 +
                                   C360 * (C313 + C127 * C1197)) *
                                      C66) *
                                 C70) /
                                C73;
    const double d2nexy000101 =
        (2 * Pi *
         ((C261 * C278 + C1195 * C63 + C298 * C134 + C1196 * C66) * C514 +
          (C577 * C278 + C1171 * C63 + C748 * C134 +
           ((C717 * C128) / C73 + C71 * C129 * C1197) * C66) *
              C511)) /
        C73;
    const double d2nexy000011 =
        (2 * Pi *
         (((C690 * C118) / C73 + C1251 * C60) * C514 +
          ((C800 * C118) / C73 + ((C363 * C948) / C93 - C648 * C517 -
                                  C649 * C775 + C360 * C129 * C1211) *
                                     C60) *
              C511)) /
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
         (C268 * C326 + C1198 * C65 + C301 * C311 + C1199 * C67 - C315 * C195 +
          ((C320 * C130) / C73 + C70 * (C889 - C303 + C123 * C1200)) * C69) *
         C71) /
        C73;
    const double d2nexz000020 =
        (2 * Pi *
         ((C1198 * C60 - (C268 * C118) / C73) * C355 +
          (C1162 * C60 - (C445 * C118) / C73) * C356 +
          ((C460 * C118) / C73 +
           ((C418 * C130) / C73 + (C70 * (C236 + C994 * C150)) / C93) * C60) *
              C357)) /
        C73;
    const double d2nexz000002 =
        (2 * Pi *
         ((C622 * C118) / C73 +
          (C615 * C190 + (C506 * C990) / C93 + C610 * C517 + C507 * C1117 -
           C597 * C559 +
           C508 * (C889 - C569 + C129 * ((C129 * C994) / C93 - C427))) *
              C60) *
         C71) /
        C73;
    const double d2nexz000110 =
        (2 * Pi *
         ((C268 * C278 + C1198 * C63 + C301 * C134 + C1199 * C66) * C363 +
          (C445 * C278 + C1162 * C63 + C687 * C134 +
           ((C647 * C130) / C73 + C70 * C127 * C1200) * C66) *
              C360)) /
        C73;
    const double d2nexz000101 = (2 * Pi *
                                 (C1256 * C63 - C752 * C278 - C753 * C134 +
                                  (C719 * C279 + C514 * C1074 + C720 * C717 +
                                   C511 * (C313 + C129 * C1200)) *
                                      C66) *
                                 C71) /
                                C73;
    const double d2nexz000011 =
        (2 * Pi *
         (((C752 * C118) / C73 + C1256 * C60) * C363 +
          ((C801 * C118) / C73 +
           ((C514 * C929) / C93 - C719 * C367 - C720 * C775 +
            C511 * ((C129 * C127 * C994) / C93 - C426)) *
               C60) *
              C360)) /
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
         ((C333 * C128) / C73 +
          (C326 * C198 + (C65 * C995) / C93 + C311 * C262 + C67 * C1076 -
           C195 * C283 + C69 * (C893 - C300 + C123 * C1201)) *
              C71) *
         C70) /
        C73;
    const double d2neyx000020 =
        (2 * Pi *
         (C431 * C477 + C1212 * C355 + C448 * C472 + C1213 * C356 -
          C461 * C458 +
          ((C459 * C118) / C73 +
           C60 * (C893 - C426 + C127 * ((C127 * C997) / C93 - C427))) *
              C357) *
         C70) /
        C73;
    const double d2neyx000002 =
        (2 * Pi *
         ((C1212 * C71 - (C431 * C128) / C73) * C506 +
          (C1172 * C71 - (C586 * C128) / C73) * C507 +
          ((C599 * C128) / C73 +
           ((C562 * C118) / C73 + (C60 * (C245 + C997 * C155)) / C93) * C71) *
              C508)) /
        C73;
    const double d2neyx000110 = (2 * Pi *
                                 (C1252 * C363 - C692 * C419 - C693 * C420 +
                                  (C644 * C400 + C63 * C1104 + C645 * C666 +
                                   C66 * (C313 + C127 * C1201)) *
                                      C360) *
                                 C70) /
                                C73;
    const double d2neyx000101 =
        (2 * Pi *
         (((C692 * C128) / C73 + C1252 * C71) * C514 +
          ((C751 * C128) / C73 + ((C63 * C951) / C93 - C644 * C520 -
                                  C645 * C718 + C66 * C129 * C1201) *
                                     C71) *
              C511)) /
        C73;
    const double d2neyx000011 =
        (2 * Pi *
         ((C431 * C419 + C1212 * C363 + C448 * C420 + C1213 * C360) * C514 +
          (C586 * C419 + C1172 * C363 + C802 * C420 +
           ((C779 * C118) / C73 + C60 * ((C127 * C129 * C997) / C93 - C569)) *
               C360) *
              C511)) /
        C73;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx000110;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx000011;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx000200 - 0.5 * d2neyx000020 + d2neyx000002;
    d2neyx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx000101;
    d2neyx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx000200 - std::sqrt(0.75) * d2neyx000020;
    const double d2neyy000200 = (2 * Pi *
                                 (C1247 * C65 + C1203 * C67 +
                                  (C316 - (C194 * C247) / C73 + C316 +
                                   (C71 * (C275 + C1149 * C136)) / C93) *
                                      C69) *
                                 C70) /
                                C73;
    const double d2neyy000020 =
        (2 * Pi *
         (((ae * -2 * C372) / C873 +
           (((C89 * C451) / C73 + 2 * C419) * ae) / C73 - C247 / C106) *
              C76 +
          C479 + C479 + (C355 * C1147) / C93 -
          (C451 / C106 + ((2 * C420 - C389 / C106) * ae) / C73) * C366 - C476 -
          C476 + C356 * C1105 - (C394 * C247) / C983 - C468 - C468 +
          C357 * (C275 / C93 + C452 + C452 +
                  C127 * ((-4 * C233) / C73 + (C127 * C1149) / C93))) *
         C60 * C70) /
        C73;
    const double d2neyy000002 = (2 * Pi *
                                 (C1247 * C60 * C506 + C1219 * C60 * C507 +
                                  (C600 - (C538 * C247) / C73 + C600 +
                                   (C71 * (C275 + C1149 * C155)) / C93) *
                                      C60 * C508)) /
                                C73;
    const double d2neyy000110 =
        (2 * Pi *
         (C1269 * C63 +
          ((C363 * C900) / C93 - (C676 + C676 + (C137 * C451) / C73) -
           (C646 * C247) / C106 + C684 + C684 +
           C360 * ((-2 * C284) / C73 + (C127 * C1228) / C93)) *
              C66) *
         C70) /
        C73;
    const double d2neyy000101 =
        (2 * Pi *
         ((C1247 * C63 + C1203 * C66) * C514 +
          (C1219 * C63 + ((-C738) / C73 - (C716 * C247) / C73 - C738 / C73 +
                          (C71 * C129 * C1228) / C93) *
                             C66) *
              C511)) /
        C73;
    const double d2neyy000011 =
        (2 * Pi *
         (C1269 * C60 * C514 +
          ((C363 * C954) / C93 - (C783 + C783 + (C516 * C451) / C73) -
           (C776 * C247) / C106 + C794 + C794 +
           C360 * ((-2 * C555) / C73 + (C127 * C129 * C1149) / C93)) *
              C60 * C511)) /
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
         ((C1204 * C71 - (C268 * C128) / C73) * C65 +
          (C1151 * C71 - (C301 * C128) / C73) * C67 +
          ((C315 * C128) / C73 +
           ((C283 * C130) / C73 + (C70 * (C249 + C1008 * C136)) / C93) * C71) *
              C69)) /
        C73;
    const double d2neyz000020 =
        (2 * Pi *
         (C268 * C477 + C1204 * C355 + C445 * C472 + C1214 * C356 -
          C460 * C458 +
          ((C459 * C130) / C73 +
           C70 * (C938 - C436 + C127 * ((C127 * C1008) / C93 - C290))) *
              C357) *
         C60) /
        C73;
    const double d2neyz000002 =
        (2 * Pi *
         ((C622 * C128) / C73 +
          (C615 * C198 + (C506 * C1004) / C93 + C610 * C520 + C507 * C1121 -
           C597 * C562 + C508 * (C938 - C573 + C129 * C1220)) *
              C71) *
         C60) /
        C73;
    const double d2neyz000110 =
        (2 * Pi *
         ((C268 * C419 + C1204 * C363 + C445 * C420 + C1214 * C360) * C63 +
          (C301 * C419 + C1151 * C363 + C687 * C420 +
           ((C666 * C130) / C73 + C70 * ((C127 * C1130) / C93 - C303)) * C360) *
              C66)) /
        C73;
    const double d2neyz000101 =
        (2 * Pi *
         (((C752 * C128) / C73 + C1257 * C71) * C63 +
          ((C753 * C128) / C73 +
           ((C514 * C904) / C93 - C719 * C262 - C720 * C718 +
            C511 * ((C129 * C1130) / C93 - C300)) *
               C71) *
              C66)) /
        C73;
    const double d2neyz000011 = (2 * Pi *
                                 (C1257 * C363 - C752 * C419 - C801 * C420 +
                                  (C719 * C400 + C514 * C1106 + C720 * C779 +
                                   C511 * (C591 + C127 * C1220)) *
                                      C360) *
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
         ((C333 * C130) / C73 +
          (C326 * C203 + (C65 * C1009) / C93 + C311 * C269 + C67 * C1086 -
           C195 * C288 + C69 * (C909 - C303 + C123 * C1205)) *
              C70) *
         C71) /
        C73;
    const double d2nezx000020 =
        (2 * Pi *
         ((C1215 * C70 - (C431 * C130) / C73) * C355 +
          (C1167 * C70 - (C448 * C130) / C73) * C356 +
          ((C461 * C130) / C73 +
           ((C430 * C118) / C73 + (C60 * (C250 + C1011 * C150)) / C93) * C70) *
              C357)) /
        C73;
    const double d2nezx000002 =
        (2 * Pi *
         (C431 * C615 + C1215 * C506 + C586 * C610 + C1221 * C507 -
          C599 * C597 +
          ((C598 * C118) / C73 +
           C60 * (C909 - C569 + C129 * ((C129 * C1011) / C93 - C427))) *
              C508) *
         C71) /
        C73;
    const double d2nezx000110 =
        (2 * Pi *
         (((C692 * C130) / C73 + C1254 * C70) * C363 +
          ((C693 * C130) / C73 + ((C63 * C940) / C93 - C644 * C384 -
                                  C645 * C654 + C66 * C127 * C1205) *
                                     C70) *
              C360)) /
        C73;
    const double d2nezx000101 = (2 * Pi *
                                 (C1254 * C514 - C692 * C563 - C751 * C564 +
                                  (C644 * C547 + C63 * C1123 + C645 * C734 +
                                   C66 * (C313 + C129 * C1205)) *
                                      C511) *
                                 C71) /
                                C73;
    const double d2nezx000011 =
        (2 * Pi *
         ((C431 * C563 + C1215 * C514 + C586 * C564 + C1221 * C511) * C363 +
          (C448 * C563 + C1167 * C514 + C802 * C564 +
           ((C791 * C118) / C73 + C60 * ((C129 * C127 * C1011) / C93 - C426)) *
               C511) *
              C360)) /
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
         ((C1206 * C70 - (C261 * C130) / C73) * C65 +
          (C1154 * C70 - (C298 * C130) / C73) * C67 +
          ((C314 * C130) / C73 +
           ((C288 * C128) / C73 + (C71 * (C251 + C1016 * C136)) / C93) * C70) *
              C69)) /
        C73;
    const double d2nezy000020 =
        (2 * Pi *
         ((C484 * C130) / C73 +
          (C477 * C203 + (C355 * C1012) / C93 + C472 * C384 + C356 * C1110 -
           C458 * C430 + C357 * (C943 - C436 + C127 * C1216)) *
              C70) *
         C60) /
        C73;
    const double d2nezy000002 =
        (2 * Pi *
         (C261 * C615 + C1206 * C506 + C577 * C610 + C1222 * C507 -
          C593 * C597 +
          ((C598 * C128) / C73 +
           C71 * (C943 - C573 + C129 * ((C129 * C1016) / C93 - C285))) *
              C508) *
         C60) /
        C73;
    const double d2nezy000110 =
        (2 * Pi *
         (((C690 * C130) / C73 + C1255 * C70) * C63 +
          ((C691 * C130) / C73 +
           ((C363 * C913) / C93 - C648 * C269 - C649 * C654 +
            C360 * ((C127 * C1133) / C93 - C303)) *
               C70) *
              C66)) /
        C73;
    const double d2nezy000101 =
        (2 * Pi *
         ((C261 * C563 + C1206 * C514 + C577 * C564 + C1222 * C511) * C63 +
          (C298 * C563 + C1154 * C514 + C748 * C564 +
           ((C734 * C128) / C73 + C71 * ((C129 * C1133) / C93 - C300)) * C511) *
              C66)) /
        C73;
    const double d2nezy000011 = (2 * Pi *
                                 (C1255 * C514 - C690 * C563 - C800 * C564 +
                                  (C648 * C547 + C363 * C1124 + C649 * C791 +
                                   C360 * (C452 + C129 * C1216)) *
                                      C511) *
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
                                 (C1248 * C71 * C65 + C1208 * C71 * C67 +
                                  (C317 - (C194 * C253) / C73 + C317 +
                                   (C70 * (C276 + C1158 * C136)) / C93) *
                                      C71 * C69)) /
                                C73;
    const double d2nezz000020 = (2 * Pi *
                                 (C1248 * C355 + C1217 * C356 +
                                  (C462 - (C394 * C253) / C73 + C462 +
                                   (C70 * (C276 + C1158 * C150)) / C93) *
                                      C357) *
                                 C60) /
                                C73;
    const double d2nezz000002 =
        (2 * Pi *
         (((ae * -2 * C523) / C873 +
           (((C92 * C590) / C73 + 2 * C563) * ae) / C73 - C253 / C106) *
              C76 +
          C617 + C617 + (C506 * C1156) / C93 -
          (C590 / C106 + ((2 * C564 - C535 / C106) * ae) / C73) * C516 - C614 -
          C614 + C507 * C1125 - (C538 * C253) / C983 - C606 - C606 +
          C508 * (C276 / C93 + C591 + C591 +
                  C129 * ((-4 * C242) / C73 + (C129 * C1158) / C93))) *
         C71 * C60) /
        C73;
    const double d2nezz000110 =
        (2 * Pi *
         ((C1248 * C363 + C1217 * C360) * C63 +
          (C1208 * C363 + ((-C677) / C73 - (C646 * C253) / C73 - C677 / C73 +
                           (C70 * C127 * C1231) / C93) *
                              C360) *
              C66)) /
        C73;
    const double d2nezz000101 =
        (2 * Pi *
         (C1270 * C71 * C63 +
          ((C514 * C921) / C93 - (C741 + C741 + (C137 * C590) / C73) -
           (C716 * C253) / C106 + C747 + C747 +
           C511 * ((-2 * C289) / C73 + (C129 * C1231) / C93)) *
              C71 * C66)) /
        C73;
    const double d2nezz000011 =
        (2 * Pi *
         (C1270 * C363 +
          ((C514 * C945) / C93 - (C784 + C784 + (C366 * C590) / C73) -
           (C776 * C253) / C106 + C799 + C799 +
           C511 * ((-2 * C415) / C73 + (C129 * C127 * C1158) / C93)) *
              C360) *
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
