/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ds_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_20_11(double ae,
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
    const double C817 = ae + be;
    const double C816 = xA - xB;
    const double C821 = ae * be;
    const double C820 = std::pow(C816, 2);
    const double C822 = C820 * C821;
    const double C823 = C822 / C817;
    const double C824 = -C823;
    const double C825 = std::exp(C824);
    const double C833 = yA - yB;
    const double C834 = std::pow(C833, 2);
    const double C835 = C834 * C821;
    const double C836 = C835 / C817;
    const double C837 = -C836;
    const double C838 = std::exp(C837);
    const double C849 = zA - zB;
    const double C850 = std::pow(C849, 2);
    const double C851 = C850 * C821;
    const double C852 = C851 / C817;
    const double C853 = -C852;
    const double C854 = std::exp(C853);
    const double C870 = C849 * be;
    const double C869 = C833 * be;
    const double C868 = 2 * C817;
    const double C867 = std::pow(C817, 2);
    const double C866 = C816 * be;
    const double C865 = ae * be;
    const double C874 = C854 * C870;
    const double C873 = C838 * C869;
    const double C872 = std::pow(C868, -2);
    const double C871 = std::pow(C868, -1);
    const double C60 = std::exp(-(std::pow(xA - xB, 2) * C865) / (ae + be));
    const double C63 =
        -(std::exp(-(std::pow(C816, 2) * C865) / C817) * C866) / C817;
    const double C65 = (C825 * std::pow(C866, 2)) / C867 + C825 / C868;
    const double C66 = C871 * C825;
    const double C67 = (-2 * C871 * C825 * C866) / C817;
    const double C69 = C872 * C825;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C821) / C817);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C821) / C817);
    const double C359 = (C838 * std::pow(C869, 2)) / C867 + C838 / C868;
    const double C360 = (-2 * C871 * C873) / C817;
    const double C361 = C872 * C838;
    const double C365 = -C873 / C817;
    const double C367 = C871 * C838;
    const double C513 = (C854 * std::pow(C870, 2)) / C867 + C854 / C868;
    const double C514 = (-2 * C871 * C874) / C817;
    const double C515 = C872 * C854;
    const double C519 = -C874 / C817;
    const double C521 = C871 * C854;
    const double C92 = be * zB;
    const double C91 = ae * zA;
    const double C90 = zA - zB;
    const double C89 = be * yB;
    const double C88 = ae * yA;
    const double C87 = yA - yB;
    const double C86 = bs[4];
    const double C85 = 0 * be;
    const double C84 = bs[3];
    const double C83 = std::pow(ae, 2);
    const double C82 = bs[2];
    const double C81 = bs[1];
    const double C80 = be * xB;
    const double C79 = ae * xA;
    const double C78 = 0 * be;
    const double C77 = 0 * be;
    const double C76 = bs[0];
    const double C75 = ae * be;
    const double C74 = xA - xB;
    const double C73 = ae + be;
    const double C72 = 0 * be;
    const double C106 = C91 + C92;
    const double C105 = C75 * C90;
    const double C104 = C88 + C89;
    const double C103 = C75 * C87;
    const double C102 = C85 / C73;
    const double C101 = C79 + C80;
    const double C100 = C78 / C73;
    const double C99 = C74 * C72;
    const double C98 = C77 / C73;
    const double C97 = 2 * C75;
    const double C96 = C75 * C74;
    const double C95 = C72 / C73;
    const double C94 = 2 * C73;
    const double C93 = std::pow(C73, 2);
    const double C120 = C106 / C73;
    const double C119 = C105 * C70;
    const double C118 = C104 / C73;
    const double C117 = C103 * C71;
    const double C116 = std::pow(C94, 4);
    const double C115 = -C94;
    const double C114 = C81 * C94;
    const double C113 = std::pow(C94, 2);
    const double C112 = C101 / C73;
    const double C111 = C99 / C73;
    const double C110 = -C98;
    const double C109 = 2 * C93;
    const double C108 = C96 * C60;
    const double C107 = -C95;
    const double C133 = C120 - zC;
    const double C132 = 2 * C119;
    const double C131 = C118 - yC;
    const double C130 = 2 * C117;
    const double C129 = std::pow(C115, 3);
    const double C128 = C82 * C113;
    const double C127 = C114 * ae;
    const double C126 = C112 - xC;
    const double C125 = 0 - C111;
    const double C124 = C110 / C94;
    const double C123 = -4 * C108;
    const double C122 = 2 * C108;
    const double C121 = C107 / C94;
    const double C158 = std::pow(C133, 2);
    const double C157 = C90 * C132;
    const double C156 = C133 * C131;
    const double C155 = C133 * C126;
    const double C154 = C131 * C133;
    const double C153 = std::pow(C131, 2);
    const double C152 = C87 * C130;
    const double C151 = C131 * C126;
    const double C150 = C76 * C132;
    const double C149 = ae * C133;
    const double C148 = C126 * C133;
    const double C147 = C76 * C130;
    const double C146 = ae * C131;
    const double C145 = C126 * C131;
    const double C144 = C84 * C129;
    const double C143 = C126 * C128;
    const double C142 = C128 * ae;
    const double C141 = -C127;
    const double C140 = C126 * C114;
    const double C139 = std::pow(C126, 2);
    const double C138 = ae * C126;
    const double C137 = C122 / C73;
    const double C136 = C125 * be;
    const double C135 = C123 / C73;
    const double C134 = C74 * C122;
    const double C189 = C158 * C84;
    const double C188 = C157 / C73;
    const double C187 = C156 * C83;
    const double C186 = C155 * C83;
    const double C185 = C154 * C83;
    const double C184 = C153 * C84;
    const double C183 = C152 / C73;
    const double C182 = C151 * C83;
    const double C181 = C149 * C84;
    const double C180 = C149 * C82;
    const double C179 = C140 * C132;
    const double C178 = C150 / C73;
    const double C177 = C149 * C81;
    const double C176 = C148 * C83;
    const double C175 = C146 * C84;
    const double C174 = C146 * C82;
    const double C173 = C140 * C130;
    const double C172 = C147 / C73;
    const double C171 = C146 * C81;
    const double C170 = C145 * C83;
    const double C169 = C143 * ae;
    const double C168 = C138 * C84;
    const double C167 = C142 / C73;
    const double C166 = C128 * C139;
    const double C165 = C139 * C84;
    const double C164 = C138 * C82;
    const double C163 = C141 / C73;
    const double C162 = C138 * C81;
    const double C161 = -C137;
    const double C160 = C136 / C73;
    const double C159 = C134 / C73;
    const double C218 = C189 * C129;
    const double C217 = C70 - C188;
    const double C216 = C177 * C132;
    const double C215 = C84 * C187;
    const double C214 = C84 * C186;
    const double C213 = C84 * C185;
    const double C212 = C184 * C129;
    const double C211 = C71 - C183;
    const double C210 = C171 * C130;
    const double C209 = C84 * C182;
    const double C208 = C181 * C113;
    const double C207 = C84 * C176;
    const double C206 = C180 * C94;
    const double C205 = C179 / C73;
    const double C204 = 2 * C177;
    const double C203 = C175 * C113;
    const double C202 = C84 * C170;
    const double C201 = C174 * C94;
    const double C200 = C173 / C73;
    const double C199 = 2 * C171;
    const double C198 = C169 / C73;
    const double C197 = C168 * C113;
    const double C196 = C166 - C114;
    const double C195 = C165 * C129;
    const double C194 = C164 * C94;
    const double C193 = 2 * C162;
    const double C192 = C161 / C94;
    const double C191 = C124 - C160;
    const double C190 = C60 - C159;
    const double C254 = C128 + C218;
    const double C253 = C217 * C97;
    const double C252 = 2 * C216;
    const double C251 = C129 * C215;
    const double C250 = C129 * C214;
    const double C249 = C129 * C213;
    const double C248 = C128 + C212;
    const double C247 = C211 * C97;
    const double C246 = 2 * C210;
    const double C245 = C65 * C193;
    const double C244 = C129 * C209;
    const double C243 = C208 * ae;
    const double C242 = 2 * C208;
    const double C241 = C196 * C132;
    const double C240 = C208 * C139;
    const double C239 = 2 * C206;
    const double C238 = C206 * ae;
    const double C237 = C129 * C207;
    const double C236 = -2 * C206;
    const double C235 = C70 * C204;
    const double C234 = C203 * ae;
    const double C233 = 2 * C203;
    const double C232 = C196 * C130;
    const double C231 = C203 * C139;
    const double C230 = 2 * C201;
    const double C229 = C201 * ae;
    const double C228 = C129 * C202;
    const double C227 = -2 * C201;
    const double C226 = C71 * C199;
    const double C225 = 2 * C197;
    const double C224 = C128 + C195;
    const double C223 = -2 * C194;
    const double C222 = C192 - C100;
    const double C221 = C191 / C94;
    const double C220 = C190 * C97;
    const double C219 = C190 * be;
    const double C279 = C254 * C83;
    const double C278 = C252 / C73;
    const double C277 = C248 * C83;
    const double C276 = C246 / C73;
    const double C275 = 2 * C243;
    const double C274 = C126 * C242;
    const double C273 = C241 / C73;
    const double C272 = 2 * C240;
    const double C271 = -2 * C238;
    const double C270 = C126 * C236;
    const double C269 = C235 + C178;
    const double C268 = 2 * C234;
    const double C267 = C126 * C233;
    const double C266 = C232 / C73;
    const double C265 = 2 * C231;
    const double C264 = -2 * C229;
    const double C263 = C126 * C227;
    const double C262 = C226 + C172;
    const double C261 = C126 * C225;
    const double C260 = C222 / C94;
    const double C259 = C224 * C83;
    const double C258 = C126 * C223;
    const double C257 = C74 * C222;
    const double C256 = C74 * C220;
    const double C255 = C219 / C73;
    const double C297 = C270 * C132;
    const double C296 = C263 * C130;
    const double C295 = C275 / C73;
    const double C294 = C274 * ae;
    const double C293 = C239 - C272;
    const double C292 = C271 / C73;
    const double C291 = C70 * C270;
    const double C290 = C268 / C73;
    const double C289 = C267 * ae;
    const double C288 = C230 - C265;
    const double C287 = C264 / C73;
    const double C286 = C71 * C263;
    const double C285 = C167 - C261;
    const double C284 = C260 - C102;
    const double C283 = C163 - C258;
    const double C282 = C257 + C66;
    const double C281 = C256 / C73;
    const double C280 = C121 - C255;
    const double C313 = C293 * C132;
    const double C312 = C288 * C130;
    const double C311 = C284 * C196;
    const double C310 = C67 * C283;
    const double C309 = C294 / C73;
    const double C308 = C70 * C293;
    const double C307 = C205 - C291;
    const double C306 = C289 / C73;
    const double C305 = C71 * C288;
    const double C304 = C200 - C286;
    const double C303 = C285 * ae;
    const double C302 = C126 * C285;
    const double C301 = C282 * be;
    const double C300 = C280 / C94;
    const double C299 = C74 * C280;
    const double C298 = C135 - C281;
    const double C320 = C308 - C273;
    const double C319 = C305 - C266;
    const double C318 = C303 / C73;
    const double C317 = C302 - C223;
    const double C316 = C301 / C73;
    const double C315 = C299 + C63;
    const double C314 = C298 * be;
    const double C323 = C317 + C198;
    const double C322 = C300 - C316;
    const double C321 = C315 * be;
    const double C328 = C69 * C323;
    const double C327 = C322 * C140;
    const double C326 = C284 * C323;
    const double C325 = C322 * C283;
    const double C324 = C321 / C73;
    const double C329 = C221 - C324;
    const double C330 = C329 + C222;
    const double C332 = C330 * C76;
    const double C331 = C330 * C193;
    const double C333 = C332 - C245;
    const double C334 = C333 - C327;
    const double C335 = C334 + C310;
    const double C336 = C335 + C311;
    const double C337 = C336 + C328;
    const double C394 = C131 * C242;
    const double C393 = C87 * C247;
    const double C392 = -4 * C117;
    const double C391 = C76 * C122;
    const double C390 = C60 * C193;
    const double C389 = C208 * C153;
    const double C388 = C131 * C236;
    const double C387 = C131 * C128;
    const double C386 = C131 * C233;
    const double C385 = C131 * C227;
    const double C384 = C359 * C199;
    const double C383 = C197 * ae;
    const double C382 = C131 * C225;
    const double C381 = 0 * be;
    const double C380 = C194 * ae;
    const double C379 = 0 * be;
    const double C378 = C130 / C73;
    const double C377 = C211 * be;
    const double C376 = 0 * be;
    const double C375 = 0 * be;
    const double C374 = C128 * C153;
    const double C373 = C197 * C153;
    const double C372 = 2 * C194;
    const double C371 = C131 * C223;
    const double C370 = C131 * C114;
    const double C369 = C162 * C122;
    const double C421 = C388 * C132;
    const double C420 = C394 * ae;
    const double C419 = C393 / C73;
    const double C418 = C392 / C73;
    const double C417 = C60 * C371;
    const double C416 = C370 * C122;
    const double C415 = C391 / C73;
    const double C414 = 2 * C389;
    const double C413 = C70 * C388;
    const double C412 = C370 * C132;
    const double C411 = C387 * ae;
    const double C410 = C167 - C386;
    const double C409 = C163 - C385;
    const double C408 = 2 * C383;
    const double C407 = C382 * ae;
    const double C406 = C381 / C73;
    const double C405 = -2 * C380;
    const double C404 = C379 / C73;
    const double C403 = -C378;
    const double C402 = C377 / C73;
    const double C401 = C376 / C73;
    const double C400 = C87 * C376;
    const double C399 = C375 / C73;
    const double C398 = C374 - C114;
    const double C397 = 2 * C373;
    const double C396 = C371 * C122;
    const double C395 = 2 * C369;
    const double C442 = C420 / C73;
    const double C441 = C410 * ae;
    const double C440 = C418 - C419;
    const double C439 = C398 * C122;
    const double C438 = C416 / C73;
    const double C437 = C390 + C415;
    const double C436 = C398 * C132;
    const double C435 = C239 - C414;
    const double C434 = C412 / C73;
    const double C433 = C411 / C73;
    const double C432 = C131 * C410;
    const double C431 = C360 * C409;
    const double C430 = C408 / C73;
    const double C429 = C407 / C73;
    const double C428 = C405 / C73;
    const double C427 = C403 / C94;
    const double C426 = -C401;
    const double C425 = C400 / C73;
    const double C424 = -C399;
    const double C423 = C372 - C397;
    const double C422 = C395 / C73;
    const double C457 = C435 * C132;
    const double C456 = C441 / C73;
    const double C455 = C440 * be;
    const double C454 = C439 / C73;
    const double C453 = C60 * C423;
    const double C452 = C438 - C417;
    const double C451 = C436 / C73;
    const double C450 = C70 * C435;
    const double C449 = C434 - C413;
    const double C448 = C432 - C227;
    const double C447 = C427 - C404;
    const double C446 = C426 / C94;
    const double C445 = 0 - C425;
    const double C444 = C424 / C94;
    const double C443 = C423 * C122;
    const double C464 = C453 - C454;
    const double C463 = C450 - C451;
    const double C462 = C448 + C433;
    const double C461 = C447 / C94;
    const double C460 = C87 * C447;
    const double C459 = C446 - C402;
    const double C458 = C445 * be;
    const double C470 = C361 * C462;
    const double C469 = C461 - C406;
    const double C468 = C460 + C367;
    const double C467 = C459 / C94;
    const double C466 = C87 * C459;
    const double C465 = C458 / C73;
    const double C475 = C469 * C462;
    const double C474 = C469 * C398;
    const double C473 = C468 * be;
    const double C472 = C466 + C365;
    const double C471 = C444 - C465;
    const double C478 = C473 / C73;
    const double C477 = C472 * be;
    const double C476 = C471 / C94;
    const double C480 = C467 - C478;
    const double C479 = C477 / C73;
    const double C483 = C480 * C409;
    const double C482 = C480 * C370;
    const double C481 = C476 - C479;
    const double C484 = C481 + C447;
    const double C486 = C484 * C199;
    const double C485 = C484 * C76;
    const double C487 = C485 - C384;
    const double C488 = C487 - C482;
    const double C489 = C488 + C431;
    const double C490 = C489 + C474;
    const double C491 = C490 + C470;
    const double C542 = C90 * C253;
    const double C541 = -4 * C119;
    const double C540 = C133 * C233;
    const double C539 = C133 * C128;
    const double C538 = C133 * C242;
    const double C537 = C133 * C236;
    const double C536 = C513 * C204;
    const double C535 = C133 * C225;
    const double C534 = 0 * be;
    const double C533 = 0 * be;
    const double C532 = C132 / C73;
    const double C531 = C217 * be;
    const double C530 = 0 * be;
    const double C529 = 0 * be;
    const double C528 = C203 * C158;
    const double C527 = C133 * C227;
    const double C526 = C128 * C158;
    const double C525 = C197 * C158;
    const double C524 = C133 * C223;
    const double C523 = C133 * C114;
    const double C565 = C542 / C73;
    const double C564 = C541 / C73;
    const double C563 = C540 * ae;
    const double C562 = C527 * C130;
    const double C561 = C60 * C524;
    const double C560 = C523 * C122;
    const double C559 = C539 * ae;
    const double C558 = C167 - C538;
    const double C557 = C163 - C537;
    const double C556 = C535 * ae;
    const double C555 = C534 / C73;
    const double C554 = C533 / C73;
    const double C553 = -C532;
    const double C552 = C531 / C73;
    const double C551 = C530 / C73;
    const double C550 = C90 * C530;
    const double C549 = C529 / C73;
    const double C548 = 2 * C528;
    const double C547 = C71 * C527;
    const double C546 = C523 * C130;
    const double C545 = C526 - C114;
    const double C544 = 2 * C525;
    const double C543 = C524 * C122;
    const double C582 = C558 * ae;
    const double C581 = C564 - C565;
    const double C580 = C563 / C73;
    const double C579 = C545 * C122;
    const double C578 = C560 / C73;
    const double C577 = C559 / C73;
    const double C576 = C133 * C558;
    const double C575 = C514 * C557;
    const double C574 = C556 / C73;
    const double C573 = C553 / C94;
    const double C572 = -C551;
    const double C571 = C550 / C73;
    const double C570 = -C549;
    const double C569 = C545 * C130;
    const double C568 = C230 - C548;
    const double C567 = C546 / C73;
    const double C566 = C372 - C544;
    const double C597 = C582 / C73;
    const double C596 = C581 * be;
    const double C595 = C568 * C130;
    const double C594 = C579 / C73;
    const double C593 = C60 * C566;
    const double C592 = C578 - C561;
    const double C591 = C576 - C236;
    const double C590 = C573 - C554;
    const double C589 = C572 / C94;
    const double C588 = 0 - C571;
    const double C587 = C570 / C94;
    const double C586 = C569 / C73;
    const double C585 = C71 * C568;
    const double C584 = C567 - C547;
    const double C583 = C566 * C122;
    const double C604 = C593 - C594;
    const double C603 = C591 + C577;
    const double C602 = C590 / C94;
    const double C601 = C90 * C590;
    const double C600 = C589 - C552;
    const double C599 = C588 * be;
    const double C598 = C585 - C586;
    const double C610 = C515 * C603;
    const double C609 = C602 - C555;
    const double C608 = C601 + C521;
    const double C607 = C600 / C94;
    const double C606 = C90 * C600;
    const double C605 = C599 / C73;
    const double C615 = C609 * C603;
    const double C614 = C609 * C545;
    const double C613 = C608 * be;
    const double C612 = C606 + C519;
    const double C611 = C587 - C605;
    const double C618 = C613 / C73;
    const double C617 = C612 * be;
    const double C616 = C611 / C94;
    const double C620 = C607 - C618;
    const double C619 = C617 / C73;
    const double C623 = C620 * C557;
    const double C622 = C620 * C523;
    const double C621 = C616 - C619;
    const double C624 = C621 + C590;
    const double C626 = C624 * C204;
    const double C625 = C624 * C76;
    const double C627 = C625 - C536;
    const double C628 = C627 - C622;
    const double C629 = C628 + C575;
    const double C630 = C629 + C614;
    const double C631 = C630 + C610;
    const double C674 = C459 * C263;
    const double C673 = C447 * C409;
    const double C672 = C459 * C199;
    const double C671 = C280 * C370;
    const double C670 = C63 * C371;
    const double C669 = C66 * C283;
    const double C668 = C222 * C140;
    const double C667 = C63 * C193;
    const double C666 = C280 * C76;
    const double C665 = C131 * C274;
    const double C664 = C131 * C267;
    const double C663 = C459 * C140;
    const double C662 = C365 * C263;
    const double C661 = C367 * C409;
    const double C660 = C447 * C370;
    const double C659 = C365 * C199;
    const double C658 = C459 * C76;
    const double C657 = C131 * C285;
    const double C656 = C131 * C143;
    const double C655 = C280 * C371;
    const double C654 = C222 * C283;
    const double C653 = C280 * C193;
    const double C686 = C665 * C132;
    const double C685 = C66 * C657;
    const double C684 = C670 + C671;
    const double C683 = C222 * C656;
    const double C682 = C666 - C667;
    const double C681 = C656 * C132;
    const double C680 = C70 * C665;
    const double C679 = C198 - C664;
    const double C678 = C662 + C663;
    const double C677 = C447 * C656;
    const double C676 = C658 - C659;
    const double C675 = C222 * C657;
    const double C694 = C686 / C73;
    const double C693 = C447 * C679;
    const double C692 = C683 - C684;
    const double C691 = C682 - C668;
    const double C690 = C681 / C73;
    const double C689 = C367 * C679;
    const double C688 = C677 - C678;
    const double C687 = C676 - C660;
    const double C699 = C692 + C685;
    const double C698 = C691 + C669;
    const double C697 = C680 + C690;
    const double C696 = C688 + C689;
    const double C695 = C687 + C661;
    const double C736 = C600 * C270;
    const double C735 = C590 * C557;
    const double C734 = C600 * C204;
    const double C733 = C280 * C523;
    const double C732 = C63 * C524;
    const double C731 = C133 * C274;
    const double C730 = C600 * C140;
    const double C729 = C519 * C270;
    const double C728 = C521 * C557;
    const double C727 = C590 * C523;
    const double C726 = C519 * C204;
    const double C725 = C600 * C76;
    const double C724 = C133 * C267;
    const double C723 = C133 * C285;
    const double C722 = C133 * C143;
    const double C721 = C280 * C524;
    const double C747 = C724 * C130;
    const double C746 = C66 * C723;
    const double C745 = C732 + C733;
    const double C744 = C222 * C722;
    const double C743 = C198 - C731;
    const double C742 = C729 + C730;
    const double C741 = C590 * C722;
    const double C740 = C725 - C726;
    const double C739 = C722 * C130;
    const double C738 = C71 * C724;
    const double C737 = C222 * C723;
    const double C754 = C590 * C743;
    const double C753 = C747 / C73;
    const double C752 = C744 - C745;
    const double C751 = C521 * C743;
    const double C750 = C741 - C742;
    const double C749 = C740 - C727;
    const double C748 = C739 / C73;
    const double C758 = C752 + C746;
    const double C757 = C750 + C751;
    const double C756 = C749 + C728;
    const double C755 = C738 + C748;
    const double C789 = C600 * C388;
    const double C788 = C459 * C527;
    const double C787 = C133 * C394;
    const double C786 = C600 * C370;
    const double C785 = C519 * C388;
    const double C784 = C133 * C410;
    const double C783 = C459 * C523;
    const double C782 = C365 * C527;
    const double C781 = C133 * C387;
    const double C780 = C133 * C382;
    const double C799 = C447 * C784;
    const double C798 = C781 * C122;
    const double C797 = C60 * C780;
    const double C796 = C433 - C787;
    const double C795 = C785 + C786;
    const double C794 = C590 * C781;
    const double C793 = C367 * C784;
    const double C792 = C782 + C783;
    const double C791 = C447 * C781;
    const double C790 = C780 * C122;
    const double C805 = C590 * C796;
    const double C804 = C798 / C73;
    const double C803 = C521 * C796;
    const double C802 = C794 - C795;
    const double C801 = C791 - C792;
    const double C800 = C790 / C73;
    const double C808 = C797 + C804;
    const double C807 = C802 + C803;
    const double C806 = C801 + C793;
    const double C978 = C523 * C253;
    const double C977 = C76 * C596;
    const double C976 = C590 * C527;
    const double C975 = C600 * C199;
    const double C974 = C590 * C524;
    const double C973 = C600 * C193;
    const double C972 = C447 * C388;
    const double C971 = C459 * C204;
    const double C970 = C222 * C270;
    const double C969 = C280 * C204;
    const double C968 = C370 * C247;
    const double C967 = C76 * C455;
    const double C966 = C222 * C263;
    const double C965 = C280 * C199;
    const double C964 = C447 * C371;
    const double C963 = C459 * C193;
    const double C962 = C140 * C220;
    const double C961 = C76 * C314;
    const double C960 = C133 * C279;
    const double C959 = 4 * C238;
    const double C958 = C557 * C130;
    const double C957 = C133 * C251;
    const double C956 = C557 * C122;
    const double C955 = C133 * C250;
    const double C954 = C133 * C249;
    const double C953 = C133 * C277;
    const double C952 = C523 * C247;
    const double C951 = C133 * C244;
    const double C950 = C527 * C122;
    const double C949 = C133 * C237;
    const double C948 = C133 * C228;
    const double C947 = C524 * C130;
    const double C946 = C133 * C259;
    const double C945 = C523 * C220;
    const double C944 = C131 * C279;
    const double C943 = C370 * C253;
    const double C942 = C251 / C93;
    const double C941 = C131 * C251;
    const double C940 = C131 * C250;
    const double C939 = C388 * C122;
    const double C938 = C177 * C122;
    const double C937 = C249 / C93;
    const double C936 = C409 * C132;
    const double C935 = C131 * C249;
    const double C934 = C131 * C277;
    const double C933 = 4 * C229;
    const double C932 = C409 * C122;
    const double C931 = C131 * C244;
    const double C930 = C171 * C122;
    const double C929 = C131 * C237;
    const double C928 = C371 * C132;
    const double C927 = C131 * C228;
    const double C926 = C131 * C259;
    const double C925 = C370 * C220;
    const double C924 = C76 * C220;
    const double C923 = C158 * C86;
    const double C922 = C126 * C279;
    const double C921 = C140 * C253;
    const double C920 = C158 * C82;
    const double C919 = C76 * C253;
    const double C918 = C86 * C187;
    const double C917 = C126 * C251;
    const double C916 = C270 * C130;
    const double C915 = C82 * C187;
    const double C914 = C177 * C130;
    const double C913 = C86 * C186;
    const double C912 = C250 / C93;
    const double C911 = C126 * C250;
    const double C910 = C82 * C186;
    const double C909 = C86 * C185;
    const double C908 = C126 * C249;
    const double C907 = C263 * C132;
    const double C906 = C82 * C185;
    const double C905 = C171 * C132;
    const double C904 = C153 * C86;
    const double C903 = C126 * C277;
    const double C902 = C140 * C247;
    const double C901 = C153 * C82;
    const double C900 = C76 * C247;
    const double C899 = C86 * C182;
    const double C898 = C244 / C93;
    const double C897 = C126 * C244;
    const double C896 = C82 * C182;
    const double C895 = C86 * C176;
    const double C894 = C237 / C93;
    const double C893 = C283 * C132;
    const double C892 = C126 * C237;
    const double C891 = C82 * C176;
    const double C890 = C162 * C132;
    const double C889 = C86 * C170;
    const double C888 = C228 / C93;
    const double C887 = C283 * C130;
    const double C886 = C126 * C228;
    const double C885 = C82 * C170;
    const double C884 = C162 * C130;
    const double C883 = C139 * C86;
    const double C882 = 4 * C93;
    const double C881 = C126 * C259;
    const double C880 = 4 * C380;
    const double C879 = C139 * C82;
    const double C1060 = C978 / C109;
    const double C1059 = C977 / C73;
    const double C1058 = C968 / C109;
    const double C1057 = C967 / C73;
    const double C1056 = C962 / C109;
    const double C1055 = C961 / C73;
    const double C1054 = C960 / C93;
    const double C1053 = C959 / C73;
    const double C1052 = C958 / C73;
    const double C1051 = C957 / C93;
    const double C1050 = C956 / C73;
    const double C1049 = C955 / C93;
    const double C1048 = C954 / C93;
    const double C1047 = C71 * C953;
    const double C1046 = C952 + C562;
    const double C1045 = C60 * C951;
    const double C1044 = C950 / C73;
    const double C1043 = C949 / C93;
    const double C1042 = C71 * C948;
    const double C1041 = C947 / C73;
    const double C1040 = C60 * C946;
    const double C1039 = C945 + C543;
    const double C1038 = C70 * C944;
    const double C1037 = C943 + C421;
    const double C1036 = C941 / C93;
    const double C1035 = C60 * C940;
    const double C1034 = C939 / C73;
    const double C1033 = 2 * C938;
    const double C1032 = C936 / C73;
    const double C1031 = C935 / C93;
    const double C1030 = C934 / C93;
    const double C1029 = C933 / C73;
    const double C1028 = C932 / C73;
    const double C1027 = C931 / C93;
    const double C1026 = 2 * C930;
    const double C1025 = C70 * C929;
    const double C1024 = C928 / C73;
    const double C1023 = C927 / C93;
    const double C1022 = C60 * C926;
    const double C1021 = C925 + C396;
    const double C1020 = C924 / C73;
    const double C1019 = C923 * C116;
    const double C1018 = C70 * C922;
    const double C1017 = C921 + C297;
    const double C1016 = C920 * C113;
    const double C1015 = C919 / C73;
    const double C1014 = C116 * C918;
    const double C1013 = C71 * C917;
    const double C1012 = C916 / C73;
    const double C1011 = C113 * C915;
    const double C1010 = 2 * C914;
    const double C1009 = C116 * C913;
    const double C1008 = C911 / C93;
    const double C1007 = C113 * C910;
    const double C1006 = C116 * C909;
    const double C1005 = C70 * C908;
    const double C1004 = C907 / C73;
    const double C1003 = C113 * C906;
    const double C1002 = 2 * C905;
    const double C1001 = C904 * C116;
    const double C1000 = C71 * C903;
    const double C999 = C902 + C296;
    const double C998 = C901 * C113;
    const double C997 = C900 / C73;
    const double C996 = C116 * C899;
    const double C995 = C897 / C93;
    const double C994 = C113 * C896;
    const double C993 = C116 * C895;
    const double C992 = C893 / C73;
    const double C991 = C892 / C93;
    const double C990 = C113 * C891;
    const double C989 = 2 * C890;
    const double C988 = C116 * C889;
    const double C987 = C887 / C73;
    const double C986 = C886 / C93;
    const double C985 = C113 * C885;
    const double C984 = 2 * C884;
    const double C983 = C883 * C116;
    const double C982 = C73 * C882;
    const double C981 = C881 / C93;
    const double C980 = C880 / C73;
    const double C979 = C879 * C113;
    const double C1132 = C734 + C1059;
    const double C1131 = C519 * C1003;
    const double C1130 = C519 * C990;
    const double C1129 = C126 * C1014;
    const double C1128 = C365 * C1011;
    const double C1127 = C63 * C1007;
    const double C1126 = C126 * C1006;
    const double C1125 = C672 + C1057;
    const double C1124 = C63 * C994;
    const double C1123 = C365 * C985;
    const double C1122 = C653 + C1055;
    const double C1121 = C1053 + C1054;
    const double C1120 = C1051 - C287;
    const double C1119 = C1049 - C428;
    const double C1118 = C133 * C1006;
    const double C1117 = C1048 - C287;
    const double C1116 = C1047 / C93;
    const double C1115 = C1046 + C562;
    const double C1114 = C1045 / C93;
    const double C1113 = C1043 - C428;
    const double C1112 = C1042 / C93;
    const double C1111 = C1040 / C93;
    const double C1110 = C1039 + C543;
    const double C1109 = C1038 / C93;
    const double C1108 = C1037 + C421;
    const double C1107 = C131 * C1014;
    const double C1106 = C1036 - C292;
    const double C1105 = C1035 / C93;
    const double C1104 = C60 * C1007;
    const double C1103 = C1033 / C73;
    const double C1102 = C1031 - C292;
    const double C1101 = C1029 + C1030;
    const double C1100 = C1027 - C428;
    const double C1099 = C60 * C994;
    const double C1098 = C1026 / C73;
    const double C1097 = C1025 / C93;
    const double C1096 = C131 * C988;
    const double C1095 = C1023 - C428;
    const double C1094 = C1022 / C93;
    const double C1093 = C1021 + C396;
    const double C1092 = C422 - C1020;
    const double C1091 = C144 + C1019;
    const double C1090 = C1018 / C93;
    const double C1089 = C1017 + C297;
    const double C1088 = C1016 - C114;
    const double C1087 = C278 - C1015;
    const double C1086 = C1013 / C93;
    const double C1085 = C71 * C1011;
    const double C1084 = C1010 / C73;
    const double C1083 = C126 * C1009;
    const double C1082 = C1008 - C292;
    const double C1081 = C1005 / C93;
    const double C1080 = C70 * C1003;
    const double C1079 = C1002 / C73;
    const double C1078 = C144 + C1001;
    const double C1077 = C1000 / C93;
    const double C1076 = C999 + C296;
    const double C1075 = C998 - C114;
    const double C1074 = C276 - C997;
    const double C1073 = C126 * C996;
    const double C1072 = C995 - C287;
    const double C1071 = C126 * C993;
    const double C1070 = C991 - C292;
    const double C1069 = C70 * C990;
    const double C1068 = C989 / C73;
    const double C1067 = C126 * C988;
    const double C1066 = C986 - C287;
    const double C1065 = C71 * C985;
    const double C1064 = C984 / C73;
    const double C1063 = C144 + C983;
    const double C1062 = C980 + C981;
    const double C1061 = C979 - C114;
    const double C1190 = C521 * C1121;
    const double C1189 = C734 + C1132;
    const double C1188 = C521 * C1117;
    const double C1187 = C1131 / C93;
    const double C1186 = C521 * C1113;
    const double C1185 = C1130 / C93;
    const double C1184 = C367 * C1106;
    const double C1183 = C1128 / C93;
    const double C1182 = C66 * C1082;
    const double C1181 = C1127 / C93;
    const double C1180 = C367 * C1101;
    const double C1179 = C672 + C1125;
    const double C1178 = C66 * C1072;
    const double C1177 = C1124 / C93;
    const double C1176 = C367 * C1095;
    const double C1175 = C1123 / C93;
    const double C1174 = C66 * C1062;
    const double C1173 = C653 + C1122;
    const double C1172 = C71 * C1120;
    const double C1171 = C60 * C1119;
    const double C1170 = C1118 / C93;
    const double C1169 = C1115 / C73;
    const double C1168 = C1044 + C1114;
    const double C1167 = C1041 + C1112;
    const double C1166 = C1110 / C73;
    const double C1165 = C1108 / C73;
    const double C1164 = C1107 / C93;
    const double C1163 = C1034 + C1105;
    const double C1162 = C1104 / C93;
    const double C1161 = C70 * C1102;
    const double C1160 = C60 * C1100;
    const double C1159 = C1099 / C93;
    const double C1158 = C1024 + C1097;
    const double C1157 = C1096 / C93;
    const double C1156 = C1093 / C73;
    const double C1155 = C1092 + C422;
    const double C1154 = C1091 * C83;
    const double C1153 = C1089 / C73;
    const double C1152 = C1088 * C83;
    const double C1151 = C1087 + C278;
    const double C1150 = C1012 + C1086;
    const double C1149 = C1085 / C93;
    const double C1148 = C1083 / C93;
    const double C1147 = C1004 + C1081;
    const double C1146 = C1080 / C93;
    const double C1145 = C1078 * C83;
    const double C1144 = C1076 / C73;
    const double C1143 = C1075 * C83;
    const double C1142 = C1074 + C276;
    const double C1141 = C1073 / C93;
    const double C1140 = C1071 / C93;
    const double C1139 = C70 * C1070;
    const double C1138 = C1069 / C93;
    const double C1137 = C1067 / C93;
    const double C1136 = C71 * C1066;
    const double C1135 = C1065 / C93;
    const double C1134 = C1063 * C83;
    const double C1133 = C1061 * C83;
    const double C1230 = C519 * C1152;
    const double C1229 = C1187 - C975;
    const double C1228 = C1185 - C973;
    const double C1227 = C126 * C1154;
    const double C1226 = C1183 - C971;
    const double C1225 = C1181 - C969;
    const double C1224 = C126 * C1145;
    const double C1223 = C365 * C1143;
    const double C1222 = C1177 - C965;
    const double C1221 = C1175 - C963;
    const double C1220 = C131 * C1134;
    const double C1219 = C63 * C1133;
    const double C1218 = C1172 - C1052;
    const double C1217 = C1171 - C1050;
    const double C1216 = C1170 - C290;
    const double C1215 = C1169 + C1116;
    const double C1214 = C1166 + C1111;
    const double C1213 = C1165 + C1109;
    const double C1212 = C1164 - C295;
    const double C1211 = C1103 + C1162;
    const double C1210 = C1161 - C1032;
    const double C1209 = C1160 - C1028;
    const double C1208 = C1098 + C1159;
    const double C1207 = C1157 - C430;
    const double C1206 = C1156 + C1094;
    const double C1205 = C60 * C1133;
    const double C1204 = C1153 + C1090;
    const double C1203 = C70 * C1152;
    const double C1202 = C1084 + C1149;
    const double C1201 = C1148 - C295;
    const double C1200 = C1079 + C1146;
    const double C1199 = C1144 + C1077;
    const double C1198 = C71 * C1143;
    const double C1197 = C1141 - C290;
    const double C1196 = C1140 - C295;
    const double C1195 = C1139 - C992;
    const double C1194 = C1068 + C1138;
    const double C1193 = C1137 - C290;
    const double C1192 = C1136 - C987;
    const double C1191 = C1064 + C1135;
    const double C1242 = C1230 / C93;
    const double C1241 = C1229 - C976;
    const double C1240 = C1228 - C974;
    const double C1239 = C1226 - C972;
    const double C1238 = C1225 - C970;
    const double C1237 = C1223 / C93;
    const double C1236 = C1222 - C966;
    const double C1235 = C1221 - C964;
    const double C1234 = C1219 / C93;
    const double C1233 = C1205 / C93;
    const double C1232 = C1203 / C93;
    const double C1231 = C1198 / C93;
    const double C1254 = C1242 - C1189;
    const double C1253 = C1241 + C1188;
    const double C1252 = C1240 + C1186;
    const double C1251 = C1239 + C1184;
    const double C1250 = C1238 + C1182;
    const double C1249 = C1237 - C1179;
    const double C1248 = C1236 + C1178;
    const double C1247 = C1235 + C1176;
    const double C1246 = C1234 - C1173;
    const double C1245 = C1155 + C1233;
    const double C1244 = C1151 + C1232;
    const double C1243 = C1142 + C1231;
    const double C1257 = C1254 + C1060;
    const double C1256 = C1249 + C1058;
    const double C1255 = C1246 + C1056;
    const double C1260 = C1257 + C735;
    const double C1259 = C1256 + C673;
    const double C1258 = C1255 + C654;
    const double C1263 = C1260 + C735;
    const double C1262 = C1259 + C673;
    const double C1261 = C1258 + C654;
    const double C1266 = C1263 + C1190;
    const double C1265 = C1262 + C1180;
    const double C1264 = C1261 + C1174;
    const double d2nexx200000 =
        (2 * Pi *
         (((-(be * -2 * C72) / C93) / C94 -
           ((2 * C280 - (C74 * C314) / C73) * be) / C73 - C220 / C109) *
              C76 -
          C331 - C331 + (C65 * C1133) / C93 -
          ((-C314 / C73) / C94 - ((2 * C222 - C256 / C109) * be) / C73) * C140 +
          C325 + C325 + C67 * C1062 - (C196 * C220) / C982 + C326 + C326 +
          C69 * (C259 / C93 + C318 + C318 +
                 C126 * ((-4 * C383) / C73 + (C126 * C1134) / C93))) *
         C70 * C71) /
        C73;
    const double d2nexx020000 = (2 * Pi *
                                 (C1245 * C70 * C359 + C1206 * C70 * C360 +
                                  ((C60 * (C259 + C1134 * C153)) / C93 -
                                   (C443 + C443 + C398 * C220) / C73) *
                                      C70 * C361)) /
                                C73;
    const double d2nexx002000 = (2 * Pi *
                                 (C1245 * C513 + C1214 * C514 +
                                  ((C60 * (C259 + C1134 * C158)) / C93 -
                                   (C583 + C583 + C545 * C220) / C73) *
                                      C515) *
                                 C71) /
                                C73;
    const double d2nexx110000 =
        (2 * Pi *
         (C1264 * C70 * C365 +
          ((C370 * C314) / C73 - C655 - C655 + (C63 * C926) / C93 -
           (C656 * C220) / C109 + C675 + C675 +
           C66 * ((-2 * C407) / C73 + (C126 * C1220) / C93)) *
              C70 * C367)) /
        C73;
    const double d2nexx101000 =
        (2 * Pi *
         (C1264 * C519 +
          ((C523 * C314) / C73 - C721 - C721 + (C63 * C946) / C93 -
           (C722 * C220) / C109 + C737 + C737 +
           C66 * ((-2 * C556) / C73 + (C126 * C133 * C1134) / C93)) *
              C521) *
         C71) /
        C73;
    const double d2nexx011000 =
        (2 * Pi *
         ((C1245 * C519 + C1214 * C521) * C365 +
          (C1206 * C519 +
           (C800 - (C781 * C220) / C73 + C800 + (C60 * C133 * C1220) / C93) *
               C521) *
              C367)) /
        C73;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx110000;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx011000;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexx200000 - 0.5 * d2nexx020000 + d2nexx002000;
    d2nexx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx101000;
    d2nexx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexx200000 - std::sqrt(0.75) * d2nexx020000;
    const double d2nexy200000 =
        (2 * Pi *
         (C1191 * C65 - C262 * C330 + C304 * C322 + C1192 * C67 + C319 * C284 +
          (C71 * (C888 - C306 + C126 * C1193) - (C323 * C130) / C73) * C69) *
         C70) /
        C73;
    const double d2nexy020000 =
        (2 * Pi *
         (((C359 * C985) / C93 - C484 * C193 - C480 * C371 + C360 * C1095 +
           C469 * C423 + C361 * (C888 - C429 + C131 * C1207)) *
              C60 -
          (C491 * C122) / C73) *
         C70) /
        C73;
    const double d2nexy002000 =
        (2 * Pi *
         (((C262 * C122) / C73 + C1191 * C60) * C513 +
          (C1167 * C60 - (C584 * C122) / C73) * C514 +
          (((C71 * (C228 + C988 * C158)) / C93 - (C566 * C130) / C73) * C60 -
           (C598 * C122) / C73) *
              C515)) /
        C73;
    const double d2nexy110000 = (2 * Pi *
                                 (C695 * C280 + C1247 * C63 + C696 * C222 +
                                  (C459 * C283 + C365 * C1066 + C447 * C657 +
                                   C367 * (C318 + C131 * C1193)) *
                                      C66) *
                                 C70) /
                                C73;
    const double d2nexy101000 =
        (2 * Pi *
         ((C1191 * C63 - C262 * C280 + C304 * C222 + C1192 * C66) * C519 +
          (C584 * C280 + C1167 * C63 - C755 * C222 +
           (C71 * C133 * C1193 - (C723 * C130) / C73) * C66) *
              C521)) /
        C73;
    const double d2nexy011000 = (2 * Pi *
                                 ((C1247 * C60 - (C695 * C122) / C73) * C519 +
                                  (((C365 * C948) / C93 - C459 * C524 -
                                    C447 * C780 + C367 * C133 * C1207) *
                                       C60 -
                                   (C806 * C122) / C73) *
                                      C521)) /
                                C73;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy110000;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy011000;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexy200000 - 0.5 * d2nexy020000 + d2nexy002000;
    d2nexy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy101000;
    d2nexy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexy200000 - std::sqrt(0.75) * d2nexy020000;
    const double d2nexz200000 =
        (2 * Pi *
         (C1194 * C65 - C269 * C330 + C307 * C322 + C1195 * C67 + C320 * C284 +
          (C70 * (C894 - C309 + C126 * C1196) - (C323 * C132) / C73) * C69) *
         C71) /
        C73;
    const double d2nexz020000 =
        (2 * Pi *
         (((C269 * C122) / C73 + C1194 * C60) * C359 +
          (C1158 * C60 - (C449 * C122) / C73) * C360 +
          (((C70 * (C237 + C993 * C153)) / C93 - (C423 * C132) / C73) * C60 -
           (C463 * C122) / C73) *
              C361)) /
        C73;
    const double d2nexz002000 =
        (2 * Pi *
         (((C513 * C990) / C93 - C624 * C193 - C620 * C524 + C514 * C1113 +
           C609 * C566 +
           C515 * (C894 - C574 + C133 * ((C133 * C993) / C93 - C430))) *
              C60 -
          (C631 * C122) / C73) *
         C71) /
        C73;
    const double d2nexz110000 =
        (2 * Pi *
         ((C1194 * C63 - C269 * C280 + C307 * C222 + C1195 * C66) * C365 +
          (C449 * C280 + C1158 * C63 - C697 * C222 +
           (C70 * C131 * C1196 - (C657 * C132) / C73) * C66) *
              C367)) /
        C73;
    const double d2nexz101000 = (2 * Pi *
                                 (C756 * C280 + C1252 * C63 + C757 * C222 +
                                  (C600 * C283 + C519 * C1070 + C590 * C723 +
                                   C521 * (C318 + C133 * C1196)) *
                                      C66) *
                                 C71) /
                                C73;
    const double d2nexz011000 =
        (2 * Pi *
         ((C1252 * C60 - (C756 * C122) / C73) * C365 +
          (((C519 * C929) / C93 - C600 * C371 - C590 * C780 +
            C521 * ((C133 * C131 * C993) / C93 - C429)) *
               C60 -
           (C807 * C122) / C73) *
              C367)) /
        C73;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz110000;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz011000;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexz200000 - 0.5 * d2nexz020000 + d2nexz002000;
    d2nexz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz101000;
    d2nexz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexz200000 - std::sqrt(0.75) * d2nexz020000;
    const double d2neyx200000 =
        (2 * Pi *
         (((C65 * C994) / C93 - C330 * C199 - C322 * C263 + C67 * C1072 +
           C284 * C288 + C69 * (C898 - C306 + C126 * C1197)) *
              C71 -
          (C337 * C130) / C73) *
         C70) /
        C73;
    const double d2neyx020000 =
        (2 * Pi *
         (C1208 * C359 - C437 * C484 + C452 * C480 + C1209 * C360 +
          C464 * C469 +
          (C60 * (C898 - C429 + C131 * ((C131 * C996) / C93 - C430)) -
           (C462 * C122) / C73) *
              C361) *
         C70) /
        C73;
    const double d2neyx002000 =
        (2 * Pi *
         (((C437 * C130) / C73 + C1208 * C71) * C513 +
          (C1168 * C71 - (C592 * C130) / C73) * C514 +
          (((C60 * (C244 + C996 * C158)) / C93 - (C568 * C122) / C73) * C71 -
           (C604 * C130) / C73) *
              C515)) /
        C73;
    const double d2neyx110000 = (2 * Pi *
                                 (C698 * C459 + C1248 * C365 + C699 * C447 +
                                  (C280 * C409 + C63 * C1100 + C222 * C679 +
                                   C66 * (C318 + C131 * C1197)) *
                                      C367) *
                                 C70) /
                                C73;
    const double d2neyx101000 = (2 * Pi *
                                 ((C1248 * C71 - (C698 * C130) / C73) * C519 +
                                  (((C63 * C951) / C93 - C280 * C527 -
                                    C222 * C724 + C66 * C133 * C1197) *
                                       C71 -
                                   (C758 * C130) / C73) *
                                      C521)) /
                                C73;
    const double d2neyx011000 =
        (2 * Pi *
         ((C1208 * C365 - C437 * C459 + C452 * C447 + C1209 * C367) * C519 +
          (C592 * C459 + C1168 * C365 - C808 * C447 +
           (C60 * ((C131 * C133 * C996) / C93 - C574) - (C784 * C122) / C73) *
               C367) *
              C521)) /
        C73;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx110000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx011000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyx200000 - 0.5 * d2neyx020000 + d2neyx002000;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx101000;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyx200000 - std::sqrt(0.75) * d2neyx020000;
    const double d2neyy200000 = (2 * Pi *
                                 (C1243 * C65 + C1199 * C67 +
                                  ((C71 * (C277 + C1145 * C139)) / C93 -
                                   (C312 + C312 + C196 * C247) / C73) *
                                      C69) *
                                 C70) /
                                C73;
    const double d2neyy020000 =
        (2 * Pi *
         (((-(be * -2 * C376) / C93) / C94 -
           ((2 * C459 - (C87 * C455) / C73) * be) / C73 - C247 / C109) *
              C76 -
          C486 - C486 + (C359 * C1143) / C93 -
          ((-C455 / C73) / C94 - ((2 * C447 - C393 / C109) * be) / C73) * C370 +
          C483 + C483 + C360 * C1101 - (C398 * C247) / C982 + C475 + C475 +
          C361 * (C277 / C93 + C456 + C456 +
                  C131 * ((-4 * C234) / C73 + (C131 * C1145) / C93))) *
         C60 * C70) /
        C73;
    const double d2neyy002000 = (2 * Pi *
                                 (C1243 * C60 * C513 + C1215 * C60 * C514 +
                                  ((C71 * (C277 + C1145 * C158)) / C93 -
                                   (C595 + C595 + C545 * C247) / C73) *
                                      C60 * C515)) /
                                C73;
    const double d2neyy110000 =
        (2 * Pi *
         (C1265 * C63 +
          ((C140 * C455) / C73 - C674 - C674 + (C365 * C903) / C93 -
           (C656 * C247) / C109 + C693 + C693 +
           C367 * ((-2 * C289) / C73 + (C131 * C1224) / C93)) *
              C66) *
         C70) /
        C73;
    const double d2neyy101000 =
        (2 * Pi *
         ((C1243 * C63 + C1199 * C66) * C519 +
          (C1215 * C63 +
           (C753 - (C722 * C247) / C73 + C753 + (C71 * C133 * C1224) / C93) *
               C66) *
              C521)) /
        C73;
    const double d2neyy011000 =
        (2 * Pi *
         (C1265 * C60 * C519 +
          ((C523 * C455) / C73 - C788 - C788 + (C365 * C953) / C93 -
           (C781 * C247) / C109 + C799 + C799 +
           C367 * ((-2 * C563) / C73 + (C131 * C133 * C1145) / C93)) *
              C60 * C521)) /
        C73;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy110000;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy011000;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyy200000 - 0.5 * d2neyy020000 + d2neyy002000;
    d2neyy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy101000;
    d2neyy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyy200000 - std::sqrt(0.75) * d2neyy020000;
    const double d2neyz200000 =
        (2 * Pi *
         (((C269 * C130) / C73 + C1200 * C71) * C65 +
          (C1147 * C71 - (C307 * C130) / C73) * C67 +
          (((C70 * (C249 + C1006 * C139)) / C93 - (C288 * C132) / C73) * C71 -
           (C320 * C130) / C73) *
              C69)) /
        C73;
    const double d2neyz020000 =
        (2 * Pi *
         (C1200 * C359 - C269 * C484 + C449 * C480 + C1210 * C360 +
          C463 * C469 +
          (C70 * (C937 - C442 + C131 * ((C131 * C1006) / C93 - C295)) -
           (C462 * C132) / C73) *
              C361) *
         C60) /
        C73;
    const double d2neyz002000 =
        (2 * Pi *
         (((C513 * C1003) / C93 - C624 * C199 - C620 * C527 + C514 * C1117 +
           C609 * C568 + C515 * (C937 - C580 + C133 * C1216)) *
              C71 -
          (C631 * C130) / C73) *
         C60) /
        C73;
    const double d2neyz110000 =
        (2 * Pi *
         ((C1200 * C365 - C269 * C459 + C449 * C447 + C1210 * C367) * C63 +
          (C307 * C459 + C1147 * C365 - C697 * C447 +
           (C70 * ((C131 * C1126) / C93 - C309) - (C679 * C132) / C73) * C367) *
              C66)) /
        C73;
    const double d2neyz101000 =
        (2 * Pi *
         ((C1253 * C71 - (C756 * C130) / C73) * C63 +
          (((C519 * C908) / C93 - C600 * C263 - C590 * C724 +
            C521 * ((C133 * C1126) / C93 - C306)) *
               C71 -
           (C757 * C130) / C73) *
              C66)) /
        C73;
    const double d2neyz011000 = (2 * Pi *
                                 (C756 * C459 + C1253 * C365 + C807 * C447 +
                                  (C600 * C409 + C519 * C1102 + C590 * C784 +
                                   C521 * (C597 + C131 * C1216)) *
                                      C367) *
                                 C60) /
                                C73;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz110000;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz011000;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyz200000 - 0.5 * d2neyz020000 + d2neyz002000;
    d2neyz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz101000;
    d2neyz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyz200000 - std::sqrt(0.75) * d2neyz020000;
    const double d2nezx200000 =
        (2 * Pi *
         (((C65 * C1007) / C93 - C330 * C204 - C322 * C270 + C67 * C1082 +
           C284 * C293 + C69 * (C912 - C309 + C126 * C1201)) *
              C70 -
          (C337 * C132) / C73) *
         C71) /
        C73;
    const double d2nezx020000 =
        (2 * Pi *
         (((C437 * C132) / C73 + C1211 * C70) * C359 +
          (C1163 * C70 - (C452 * C132) / C73) * C360 +
          (((C60 * (C250 + C1009 * C153)) / C93 - (C435 * C122) / C73) * C70 -
           (C464 * C132) / C73) *
              C361)) /
        C73;
    const double d2nezx002000 =
        (2 * Pi *
         (C1211 * C513 - C437 * C624 + C592 * C620 + C1217 * C514 +
          C604 * C609 +
          (C60 * (C912 - C574 + C133 * ((C133 * C1009) / C93 - C430)) -
           (C603 * C122) / C73) *
              C515) *
         C71) /
        C73;
    const double d2nezx110000 = (2 * Pi *
                                 ((C1250 * C70 - (C698 * C132) / C73) * C365 +
                                  (((C63 * C940) / C93 - C280 * C388 -
                                    C222 * C665 + C66 * C131 * C1201) *
                                       C70 -
                                   (C699 * C132) / C73) *
                                      C367)) /
                                C73;
    const double d2nezx101000 = (2 * Pi *
                                 (C698 * C600 + C1250 * C519 + C758 * C590 +
                                  (C280 * C557 + C63 * C1119 + C222 * C743 +
                                   C66 * (C318 + C133 * C1201)) *
                                      C521) *
                                 C71) /
                                C73;
    const double d2nezx011000 =
        (2 * Pi *
         ((C1211 * C519 - C437 * C600 + C592 * C590 + C1217 * C521) * C365 +
          (C452 * C600 + C1163 * C519 - C808 * C590 +
           (C60 * ((C133 * C131 * C1009) / C93 - C429) - (C796 * C122) / C73) *
               C521) *
              C367)) /
        C73;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx110000;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx011000;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezx200000 - 0.5 * d2nezx020000 + d2nezx002000;
    d2nezx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx101000;
    d2nezx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezx200000 - std::sqrt(0.75) * d2nezx020000;
    const double d2nezy200000 =
        (2 * Pi *
         (((C262 * C132) / C73 + C1202 * C70) * C65 +
          (C1150 * C70 - (C304 * C132) / C73) * C67 +
          (((C71 * (C251 + C1014 * C139)) / C93 - (C293 * C130) / C73) * C70 -
           (C319 * C132) / C73) *
              C69)) /
        C73;
    const double d2nezy020000 =
        (2 * Pi *
         (((C359 * C1011) / C93 - C484 * C204 - C480 * C388 + C360 * C1106 +
           C469 * C435 + C361 * (C942 - C442 + C131 * C1212)) *
              C70 -
          (C491 * C132) / C73) *
         C60) /
        C73;
    const double d2nezy002000 =
        (2 * Pi *
         (C1202 * C513 - C262 * C624 + C584 * C620 + C1218 * C514 +
          C598 * C609 +
          (C71 * (C942 - C580 + C133 * ((C133 * C1014) / C93 - C290)) -
           (C603 * C130) / C73) *
              C515) *
         C60) /
        C73;
    const double d2nezy110000 =
        (2 * Pi *
         ((C1251 * C70 - (C695 * C132) / C73) * C63 +
          (((C365 * C917) / C93 - C459 * C270 - C447 * C665 +
            C367 * ((C131 * C1129) / C93 - C309)) *
               C70 -
           (C696 * C132) / C73) *
              C66)) /
        C73;
    const double d2nezy101000 =
        (2 * Pi *
         ((C1202 * C519 - C262 * C600 + C584 * C590 + C1218 * C521) * C63 +
          (C304 * C600 + C1150 * C519 - C755 * C590 +
           (C71 * ((C133 * C1129) / C93 - C306) - (C743 * C130) / C73) * C521) *
              C66)) /
        C73;
    const double d2nezy011000 = (2 * Pi *
                                 (C695 * C600 + C1251 * C519 + C806 * C590 +
                                  (C459 * C557 + C365 * C1120 + C447 * C796 +
                                   C367 * (C456 + C133 * C1212)) *
                                      C521) *
                                 C60) /
                                C73;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy110000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy011000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezy200000 - 0.5 * d2nezy020000 + d2nezy002000;
    d2nezy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy101000;
    d2nezy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezy200000 - std::sqrt(0.75) * d2nezy020000;
    const double d2nezz200000 = (2 * Pi *
                                 (C1244 * C71 * C65 + C1204 * C71 * C67 +
                                  ((C70 * (C279 + C1154 * C139)) / C93 -
                                   (C313 + C313 + C196 * C253) / C73) *
                                      C71 * C69)) /
                                C73;
    const double d2nezz020000 = (2 * Pi *
                                 (C1244 * C359 + C1213 * C360 +
                                  ((C70 * (C279 + C1154 * C153)) / C93 -
                                   (C457 + C457 + C398 * C253) / C73) *
                                      C361) *
                                 C60) /
                                C73;
    const double d2nezz002000 =
        (2 * Pi *
         (((-(be * -2 * C530) / C93) / C94 -
           ((2 * C600 - (C90 * C596) / C73) * be) / C73 - C253 / C109) *
              C76 -
          C626 - C626 + (C513 * C1152) / C93 -
          ((-C596 / C73) / C94 - ((2 * C590 - C542 / C109) * be) / C73) * C523 +
          C623 + C623 + C514 * C1121 - (C545 * C253) / C982 + C615 + C615 +
          C515 * (C279 / C93 + C597 + C597 +
                  C133 * ((-4 * C243) / C73 + (C133 * C1154) / C93))) *
         C71 * C60) /
        C73;
    const double d2nezz110000 =
        (2 * Pi *
         ((C1244 * C365 + C1213 * C367) * C63 +
          (C1204 * C365 +
           (C694 - (C656 * C253) / C73 + C694 + (C70 * C131 * C1227) / C93) *
               C367) *
              C66)) /
        C73;
    const double d2nezz101000 =
        (2 * Pi *
         (C1266 * C71 * C63 +
          ((C140 * C596) / C73 - C736 - C736 + (C519 * C922) / C93 -
           (C722 * C253) / C109 + C754 + C754 +
           C521 * ((-2 * C294) / C73 + (C133 * C1227) / C93)) *
              C71 * C66)) /
        C73;
    const double d2nezz011000 =
        (2 * Pi *
         (C1266 * C365 +
          ((C370 * C596) / C73 - C789 - C789 + (C519 * C944) / C93 -
           (C781 * C253) / C109 + C805 + C805 +
           C521 * ((-2 * C420) / C73 + (C133 * C131 * C1154) / C93)) *
              C367) *
         C60) /
        C73;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz110000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz011000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezz200000 - 0.5 * d2nezz020000 + d2nezz002000;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz101000;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezz200000 - std::sqrt(0.75) * d2nezz020000;
}
