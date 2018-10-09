/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ds_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_20_12(double ae,
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
    const double C862 = ae + be;
    const double C861 = xA - xB;
    const double C866 = ae * be;
    const double C865 = std::pow(C861, 2);
    const double C867 = C865 * C866;
    const double C868 = C867 / C862;
    const double C869 = -C868;
    const double C870 = std::exp(C869);
    const double C878 = yA - yB;
    const double C879 = std::pow(C878, 2);
    const double C880 = C879 * C866;
    const double C881 = C880 / C862;
    const double C882 = -C881;
    const double C883 = std::exp(C882);
    const double C894 = zA - zB;
    const double C895 = std::pow(C894, 2);
    const double C896 = C895 * C866;
    const double C897 = C896 / C862;
    const double C898 = -C897;
    const double C899 = std::exp(C898);
    const double C915 = C894 * be;
    const double C914 = C878 * be;
    const double C913 = 2 * C862;
    const double C912 = std::pow(C862, 2);
    const double C911 = C861 * be;
    const double C910 = ae * be;
    const double C919 = C899 * C915;
    const double C918 = C883 * C914;
    const double C917 = std::pow(C913, -2);
    const double C916 = std::pow(C913, -1);
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C910) / (ae + be));
    const double C63 =
        -(std::exp(-(std::pow(C861, 2) * C910) / C862) * C911) / C862;
    const double C65 = (C870 * std::pow(C911, 2)) / C912 + C870 / C913;
    const double C66 = C916 * C870;
    const double C67 = (-2 * C916 * C870 * C911) / C862;
    const double C69 = C917 * C870;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C866) / C862);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C866) / C862);
    const double C377 = (C883 * std::pow(C914, 2)) / C912 + C883 / C913;
    const double C378 = (-2 * C916 * C918) / C862;
    const double C379 = C917 * C883;
    const double C383 = -C918 / C862;
    const double C385 = C916 * C883;
    const double C529 = (C899 * std::pow(C915, 2)) / C912 + C899 / C913;
    const double C530 = (-2 * C916 * C919) / C862;
    const double C531 = C917 * C899;
    const double C535 = -C919 / C862;
    const double C537 = C916 * C899;
    const double C91 = be * zB;
    const double C90 = ae * zA;
    const double C89 = zA - zB;
    const double C88 = be * yB;
    const double C87 = ae * yA;
    const double C86 = yA - yB;
    const double C85 = bs[4];
    const double C84 = 0 * be;
    const double C83 = bs[3];
    const double C82 = bs[2];
    const double C81 = bs[1];
    const double C80 = be * xB;
    const double C79 = ae * xA;
    const double C78 = 0 * be;
    const double C77 = 0 * be;
    const double C76 = bs[0];
    const double C75 = 0 * be;
    const double C74 = ae + be;
    const double C73 = ae * be;
    const double C72 = xA - xB;
    const double C105 = C90 + C91;
    const double C104 = C73 * C89;
    const double C103 = C87 + C88;
    const double C102 = C73 * C86;
    const double C101 = C84 / C74;
    const double C100 = C79 + C80;
    const double C99 = C78 / C74;
    const double C98 = C72 * C75;
    const double C97 = C77 / C74;
    const double C96 = C75 / C74;
    const double C95 = 2 * C74;
    const double C94 = std::pow(C74, 2);
    const double C93 = 2 * C73;
    const double C92 = C73 * C72;
    const double C119 = C105 / C74;
    const double C118 = C104 * C70;
    const double C117 = C103 / C74;
    const double C116 = C102 * C71;
    const double C115 = std::pow(C95, 4);
    const double C114 = -C95;
    const double C113 = C81 * C95;
    const double C112 = std::pow(C95, 2);
    const double C111 = C100 / C74;
    const double C110 = C98 / C74;
    const double C109 = -C97;
    const double C108 = -C96;
    const double C107 = 2 * C94;
    const double C106 = C92 * C59;
    const double C133 = C119 - zC;
    const double C132 = 2 * C118;
    const double C131 = C117 - yC;
    const double C130 = 2 * C116;
    const double C129 = std::pow(C114, 3);
    const double C128 = C82 * C112;
    const double C127 = C113 * ae;
    const double C126 = C113 * be;
    const double C125 = C111 - xC;
    const double C124 = 0 - C110;
    const double C123 = C109 / C95;
    const double C122 = -4 * C106;
    const double C121 = C108 / C95;
    const double C120 = 2 * C106;
    const double C163 = std::pow(C133, 2);
    const double C162 = C89 * C132;
    const double C161 = C133 * C131;
    const double C160 = C133 * C125;
    const double C159 = ae * C133;
    const double C158 = C131 * C133;
    const double C157 = std::pow(C131, 2);
    const double C156 = C86 * C130;
    const double C155 = C131 * C125;
    const double C154 = ae * C131;
    const double C153 = C125 * C133;
    const double C152 = be * C133;
    const double C151 = C76 * C132;
    const double C150 = C125 * C131;
    const double C149 = be * C131;
    const double C148 = C76 * C130;
    const double C147 = C83 * C129;
    const double C146 = C128 * ae;
    const double C145 = C125 * C128;
    const double C144 = C128 * be;
    const double C143 = -C127;
    const double C142 = -C126;
    const double C141 = C125 * C113;
    const double C140 = std::pow(C125, 2);
    const double C139 = ae * C125;
    const double C138 = be * C125;
    const double C137 = C120 / C74;
    const double C136 = C124 * be;
    const double C135 = C122 / C74;
    const double C134 = C72 * C120;
    const double C206 = C163 * C83;
    const double C205 = C162 / C74;
    const double C204 = C161 * ae;
    const double C203 = C159 * C83;
    const double C202 = C159 * C82;
    const double C201 = C160 * ae;
    const double C200 = C159 * C81;
    const double C199 = C158 * ae;
    const double C198 = C157 * C83;
    const double C197 = C156 / C74;
    const double C196 = C154 * C83;
    const double C195 = C154 * C82;
    const double C194 = C155 * ae;
    const double C193 = C154 * C81;
    const double C192 = C152 * C83;
    const double C191 = C141 * C132;
    const double C190 = C152 * C82;
    const double C189 = C153 * ae;
    const double C188 = C152 * C81;
    const double C187 = C151 / C74;
    const double C186 = C149 * C83;
    const double C185 = C141 * C130;
    const double C184 = C149 * C82;
    const double C183 = C150 * ae;
    const double C182 = C149 * C81;
    const double C181 = C148 / C74;
    const double C180 = C145 * ae;
    const double C179 = C139 * C83;
    const double C178 = C146 / C74;
    const double C177 = C145 * be;
    const double C176 = C138 * C83;
    const double C175 = C144 / C74;
    const double C174 = C128 * C140;
    const double C173 = C140 * C83;
    const double C172 = C139 * C82;
    const double C171 = C143 / C74;
    const double C170 = C138 * C82;
    const double C169 = C142 / C74;
    const double C168 = C139 * C81;
    const double C167 = C138 * C81;
    const double C166 = -C137;
    const double C165 = C136 / C74;
    const double C164 = C134 / C74;
    const double C240 = C206 * C129;
    const double C239 = C70 - C205;
    const double C238 = C204 * be;
    const double C237 = C203 * C112;
    const double C236 = C202 * C95;
    const double C235 = C201 * be;
    const double C234 = C199 * be;
    const double C233 = C198 * C129;
    const double C232 = C71 - C197;
    const double C231 = C196 * C112;
    const double C230 = C195 * C95;
    const double C229 = C194 * be;
    const double C228 = C192 * C112;
    const double C227 = C191 / C74;
    const double C226 = C190 * C95;
    const double C225 = C189 * be;
    const double C224 = 2 * C188;
    const double C223 = C186 * C112;
    const double C222 = C185 / C74;
    const double C221 = C184 * C95;
    const double C220 = C183 * be;
    const double C219 = 2 * C182;
    const double C218 = C180 / C74;
    const double C217 = C179 * C112;
    const double C216 = C177 / C74;
    const double C215 = C176 * C112;
    const double C214 = C174 - C113;
    const double C213 = C173 * C129;
    const double C212 = C172 * C95;
    const double C211 = C170 * C95;
    const double C210 = 2 * C167;
    const double C209 = C166 / C95;
    const double C208 = C123 - C165;
    const double C207 = C59 - C164;
    const double C276 = C128 + C240;
    const double C275 = C239 * C93;
    const double C274 = C83 * C238;
    const double C273 = C237 * C140;
    const double C272 = 2 * C236;
    const double C271 = C83 * C235;
    const double C270 = -2 * C236;
    const double C269 = C83 * C234;
    const double C268 = C128 + C233;
    const double C267 = C232 * C93;
    const double C266 = C65 * C210;
    const double C265 = C231 * C140;
    const double C264 = 2 * C230;
    const double C263 = C83 * C229;
    const double C262 = -2 * C230;
    const double C261 = C228 * C140;
    const double C260 = 2 * C226;
    const double C259 = C214 * C132;
    const double C258 = C83 * C225;
    const double C257 = -2 * C226;
    const double C256 = C70 * C224;
    const double C255 = C223 * C140;
    const double C254 = 2 * C221;
    const double C253 = C214 * C130;
    const double C252 = C83 * C220;
    const double C251 = -2 * C221;
    const double C250 = C71 * C219;
    const double C249 = 2 * C217;
    const double C248 = 2 * C215;
    const double C247 = C128 + C213;
    const double C246 = -2 * C212;
    const double C245 = -2 * C211;
    const double C244 = C209 - C99;
    const double C243 = C208 / C95;
    const double C242 = C207 * be;
    const double C241 = C207 * C93;
    const double C305 = C276 * C73;
    const double C304 = C129 * C274;
    const double C303 = 2 * C273;
    const double C302 = C129 * C271;
    const double C301 = C125 * C270;
    const double C300 = C129 * C269;
    const double C299 = C268 * C73;
    const double C298 = 2 * C265;
    const double C297 = C129 * C263;
    const double C296 = C125 * C262;
    const double C295 = 2 * C261;
    const double C294 = C259 / C74;
    const double C293 = C129 * C258;
    const double C292 = C125 * C257;
    const double C291 = C187 - C256;
    const double C290 = 2 * C255;
    const double C289 = C253 / C74;
    const double C288 = C129 * C252;
    const double C287 = C125 * C251;
    const double C286 = C181 - C250;
    const double C285 = C125 * C249;
    const double C284 = C125 * C248;
    const double C283 = C244 / C95;
    const double C282 = C247 * C73;
    const double C281 = C125 * C246;
    const double C280 = C125 * C245;
    const double C279 = C72 * C244;
    const double C278 = C72 * C241;
    const double C277 = C242 / C74;
    const double C320 = C272 - C303;
    const double C319 = C264 - C298;
    const double C318 = C260 - C295;
    const double C317 = C70 * C292;
    const double C316 = C254 - C290;
    const double C315 = C71 * C287;
    const double C314 = C178 - C285;
    const double C313 = C101 - C283;
    const double C312 = C175 - C284;
    const double C311 = C283 - C101;
    const double C310 = C171 - C281;
    const double C309 = C169 - C280;
    const double C308 = C279 + C66;
    const double C307 = C278 / C74;
    const double C306 = C121 - C277;
    const double C332 = C313 * C214;
    const double C331 = C67 * C309;
    const double C330 = C70 * C318;
    const double C329 = C317 + C227;
    const double C328 = C71 * C316;
    const double C327 = C315 + C222;
    const double C326 = C125 * C314;
    const double C325 = C125 * C312;
    const double C324 = C308 * be;
    const double C323 = C306 / C95;
    const double C322 = C72 * C306;
    const double C321 = C135 - C307;
    const double C339 = C294 + C330;
    const double C338 = C289 + C328;
    const double C337 = C326 - C246;
    const double C336 = C325 - C245;
    const double C335 = C324 / C74;
    const double C334 = C322 + C63;
    const double C333 = C321 * be;
    const double C344 = C337 + C218;
    const double C343 = C336 + C216;
    const double C342 = C335 - C323;
    const double C341 = C323 - C335;
    const double C340 = C334 * be;
    const double C347 = C69 * C343;
    const double C346 = C342 * C141;
    const double C345 = C340 / C74;
    const double C348 = C243 - C345;
    const double C349 = C348 + C244;
    const double C350 = C349 * C76;
    const double C351 = C266 + C350;
    const double C352 = C346 + C351;
    const double C353 = C331 - C352;
    const double C354 = C353 + C332;
    const double C355 = C354 + C347;
    const double C414 = C237 * C157;
    const double C413 = C131 * C270;
    const double C412 = C86 * C267;
    const double C411 = -4 * C116;
    const double C410 = 2 * C231;
    const double C409 = C131 * C262;
    const double C408 = C59 * C210;
    const double C407 = C76 * C120;
    const double C406 = C228 * C157;
    const double C405 = C131 * C257;
    const double C404 = C131 * C128;
    const double C403 = 2 * C223;
    const double C402 = C377 * C219;
    const double C401 = C131 * C251;
    const double C400 = 0 * be;
    const double C399 = 0 * be;
    const double C398 = C130 / C74;
    const double C397 = C232 * be;
    const double C396 = 0 * be;
    const double C395 = 0 * be;
    const double C394 = C217 * C157;
    const double C393 = 2 * C212;
    const double C392 = C215 * C157;
    const double C391 = 2 * C211;
    const double C390 = C128 * C157;
    const double C389 = C131 * C246;
    const double C388 = C131 * C113;
    const double C387 = C131 * C245;
    const double C439 = 2 * C414;
    const double C438 = C412 / C74;
    const double C437 = C411 / C74;
    const double C436 = C404 * ae;
    const double C435 = C131 * C410;
    const double C434 = C171 - C409;
    const double C433 = C388 * C120;
    const double C432 = C59 * C387;
    const double C431 = C407 / C74;
    const double C430 = 2 * C406;
    const double C429 = C388 * C132;
    const double C428 = C70 * C405;
    const double C427 = C404 * be;
    const double C426 = C131 * C403;
    const double C425 = C169 - C401;
    const double C424 = C400 / C74;
    const double C423 = C399 / C74;
    const double C422 = -C398;
    const double C421 = C397 / C74;
    const double C420 = C396 / C74;
    const double C419 = C86 * C396;
    const double C418 = C395 / C74;
    const double C417 = 2 * C394;
    const double C416 = 2 * C392;
    const double C415 = C390 - C113;
    const double C458 = C272 - C439;
    const double C457 = C437 - C438;
    const double C456 = C436 / C74;
    const double C455 = C178 - C435;
    const double C454 = C415 * C120;
    const double C453 = C433 / C74;
    const double C452 = C431 - C408;
    const double C451 = C260 - C430;
    const double C450 = C415 * C132;
    const double C449 = C429 / C74;
    const double C448 = C427 / C74;
    const double C447 = C175 - C426;
    const double C446 = C378 * C425;
    const double C445 = C422 / C95;
    const double C444 = -C420;
    const double C443 = C419 / C74;
    const double C442 = -C418;
    const double C441 = C393 - C417;
    const double C440 = C391 - C416;
    const double C471 = C457 * be;
    const double C470 = C131 * C455;
    const double C469 = C59 * C440;
    const double C468 = C454 / C74;
    const double C467 = C432 + C453;
    const double C466 = C70 * C451;
    const double C465 = C450 / C74;
    const double C464 = C428 + C449;
    const double C463 = C131 * C447;
    const double C462 = C445 - C423;
    const double C461 = C444 / C95;
    const double C460 = 0 - C443;
    const double C459 = C442 / C95;
    const double C479 = C470 - C262;
    const double C478 = C468 + C469;
    const double C477 = C465 + C466;
    const double C476 = C463 - C251;
    const double C475 = C462 / C95;
    const double C474 = C86 * C462;
    const double C473 = C461 - C421;
    const double C472 = C460 * be;
    const double C487 = C479 + C456;
    const double C486 = C475 - C424;
    const double C485 = C476 + C448;
    const double C484 = C424 - C475;
    const double C483 = C473 / C95;
    const double C482 = C474 + C385;
    const double C481 = C86 * C473;
    const double C480 = C472 / C74;
    const double C492 = C379 * C485;
    const double C491 = C484 * C415;
    const double C490 = C482 * be;
    const double C489 = C481 + C383;
    const double C488 = C459 - C480;
    const double C495 = C490 / C74;
    const double C494 = C489 * be;
    const double C493 = C488 / C95;
    const double C498 = C483 - C495;
    const double C497 = C495 - C483;
    const double C496 = C494 / C74;
    const double C500 = C497 * C388;
    const double C499 = C493 - C496;
    const double C501 = C499 + C462;
    const double C502 = C501 * C76;
    const double C503 = C402 + C502;
    const double C504 = C500 + C503;
    const double C505 = C446 - C504;
    const double C506 = C505 + C491;
    const double C507 = C506 + C492;
    const double C562 = C89 * C275;
    const double C561 = -4 * C118;
    const double C560 = 2 * C237;
    const double C559 = C133 * C270;
    const double C558 = C231 * C163;
    const double C557 = C133 * C262;
    const double C556 = C133 * C128;
    const double C555 = 2 * C228;
    const double C554 = C529 * C224;
    const double C553 = C133 * C257;
    const double C552 = 0 * be;
    const double C551 = 0 * be;
    const double C550 = C132 / C74;
    const double C549 = C239 * be;
    const double C548 = 0 * be;
    const double C547 = 0 * be;
    const double C546 = C223 * C163;
    const double C545 = C133 * C251;
    const double C544 = C217 * C163;
    const double C543 = C215 * C163;
    const double C542 = C128 * C163;
    const double C541 = C133 * C246;
    const double C540 = C133 * C113;
    const double C539 = C133 * C245;
    const double C586 = C562 / C74;
    const double C585 = C561 / C74;
    const double C584 = C556 * ae;
    const double C583 = C133 * C560;
    const double C582 = C171 - C559;
    const double C581 = 2 * C558;
    const double C580 = C540 * C120;
    const double C579 = C59 * C539;
    const double C578 = C556 * be;
    const double C577 = C133 * C555;
    const double C576 = C169 - C553;
    const double C575 = C552 / C74;
    const double C574 = C551 / C74;
    const double C573 = -C550;
    const double C572 = C549 / C74;
    const double C571 = C548 / C74;
    const double C570 = C89 * C548;
    const double C569 = C547 / C74;
    const double C568 = 2 * C546;
    const double C567 = C540 * C130;
    const double C566 = C71 * C545;
    const double C565 = 2 * C544;
    const double C564 = 2 * C543;
    const double C563 = C542 - C113;
    const double C604 = C585 - C586;
    const double C603 = C584 / C74;
    const double C602 = C178 - C583;
    const double C601 = C563 * C120;
    const double C600 = C264 - C581;
    const double C599 = C580 / C74;
    const double C598 = C578 / C74;
    const double C597 = C175 - C577;
    const double C596 = C530 * C576;
    const double C595 = C573 / C95;
    const double C594 = -C571;
    const double C593 = C570 / C74;
    const double C592 = -C569;
    const double C591 = C254 - C568;
    const double C590 = C563 * C130;
    const double C589 = C567 / C74;
    const double C588 = C393 - C565;
    const double C587 = C391 - C564;
    const double C617 = C604 * be;
    const double C616 = C133 * C602;
    const double C615 = C59 * C587;
    const double C614 = C601 / C74;
    const double C613 = C579 + C599;
    const double C612 = C133 * C597;
    const double C611 = C595 - C574;
    const double C610 = C594 / C95;
    const double C609 = 0 - C593;
    const double C608 = C592 / C95;
    const double C607 = C71 * C591;
    const double C606 = C590 / C74;
    const double C605 = C566 + C589;
    const double C625 = C616 - C270;
    const double C624 = C614 + C615;
    const double C623 = C612 - C257;
    const double C622 = C611 / C95;
    const double C621 = C89 * C611;
    const double C620 = C610 - C572;
    const double C619 = C609 * be;
    const double C618 = C606 + C607;
    const double C633 = C625 + C603;
    const double C632 = C622 - C575;
    const double C631 = C623 + C598;
    const double C630 = C575 - C622;
    const double C629 = C620 / C95;
    const double C628 = C621 + C537;
    const double C627 = C89 * C620;
    const double C626 = C619 / C74;
    const double C638 = C531 * C631;
    const double C637 = C630 * C563;
    const double C636 = C628 * be;
    const double C635 = C627 + C535;
    const double C634 = C608 - C626;
    const double C641 = C636 / C74;
    const double C640 = C635 * be;
    const double C639 = C634 / C95;
    const double C644 = C629 - C641;
    const double C643 = C641 - C629;
    const double C642 = C640 / C74;
    const double C646 = C643 * C540;
    const double C645 = C639 - C642;
    const double C647 = C645 + C611;
    const double C648 = C647 * C76;
    const double C649 = C554 + C648;
    const double C650 = C646 + C649;
    const double C651 = C596 - C650;
    const double C652 = C651 + C637;
    const double C653 = C652 + C638;
    const double C700 = C125 * C560;
    const double C699 = C236 * be;
    const double C698 = 2 * C200;
    const double C697 = C125 * C410;
    const double C696 = C63 * C387;
    const double C695 = C230 * be;
    const double C694 = 2 * C193;
    const double C693 = C66 * C309;
    const double C692 = C63 * C210;
    const double C691 = C125 * C555;
    const double C690 = C226 * ae;
    const double C689 = C221 * ae;
    const double C688 = C125 * C403;
    const double C687 = C383 * C287;
    const double C686 = C385 * C425;
    const double C685 = C423 - C445;
    const double C684 = C383 * C219;
    const double C683 = C421 - C461;
    const double C682 = C131 * C314;
    const double C681 = C131 * C312;
    const double C680 = C131 * C145;
    const double C679 = C211 * ae;
    const double C678 = C212 * be;
    const double C677 = C99 - C209;
    const double C676 = 2 * C168;
    const double C675 = C277 - C121;
    const double C720 = C131 * C700;
    const double C719 = -2 * C699;
    const double C718 = C131 * C697;
    const double C717 = C66 * C681;
    const double C716 = C675 * C388;
    const double C715 = C677 * C680;
    const double C714 = -2 * C695;
    const double C713 = C677 * C141;
    const double C712 = C675 * C76;
    const double C711 = C131 * C691;
    const double C710 = C680 * C132;
    const double C709 = -2 * C690;
    const double C708 = -2 * C689;
    const double C707 = C131 * C688;
    const double C706 = C683 * C141;
    const double C705 = C685 * C680;
    const double C704 = C685 * C388;
    const double C703 = C683 * C76;
    const double C702 = -2 * C679;
    const double C701 = -2 * C678;
    const double C732 = C719 / C74;
    const double C731 = C218 - C718;
    const double C730 = C696 + C716;
    const double C729 = C712 - C692;
    const double C728 = C70 * C711;
    const double C727 = C710 / C74;
    const double C726 = C709 / C74;
    const double C725 = C708 / C74;
    const double C724 = C216 - C707;
    const double C723 = C687 + C706;
    const double C722 = C703 - C684;
    const double C721 = C702 / C74;
    const double C738 = C715 - C730;
    const double C737 = C729 - C713;
    const double C736 = C727 - C728;
    const double C735 = C385 * C724;
    const double C734 = C705 - C723;
    const double C733 = C722 - C704;
    const double C742 = C738 + C717;
    const double C741 = C737 + C693;
    const double C740 = C734 + C735;
    const double C739 = C733 + C686;
    const double C778 = C133 * C700;
    const double C777 = C675 * C540;
    const double C776 = C63 * C539;
    const double C775 = C133 * C697;
    const double C774 = C714 / C74;
    const double C773 = C133 * C691;
    const double C772 = C535 * C292;
    const double C771 = C537 * C576;
    const double C770 = C574 - C595;
    const double C769 = C535 * C224;
    const double C768 = C572 - C610;
    const double C767 = C133 * C688;
    const double C766 = C133 * C314;
    const double C765 = C133 * C312;
    const double C764 = C133 * C145;
    const double C789 = C218 - C778;
    const double C788 = C66 * C765;
    const double C787 = C776 + C777;
    const double C786 = C677 * C764;
    const double C785 = C216 - C773;
    const double C784 = C768 * C141;
    const double C783 = C770 * C764;
    const double C782 = C770 * C540;
    const double C781 = C768 * C76;
    const double C780 = C71 * C767;
    const double C779 = C764 * C130;
    const double C794 = C786 - C787;
    const double C793 = C537 * C785;
    const double C792 = C772 + C784;
    const double C791 = C781 - C769;
    const double C790 = C779 / C74;
    const double C798 = C794 + C788;
    const double C797 = C783 - C792;
    const double C796 = C791 - C782;
    const double C795 = C790 - C780;
    const double C800 = C797 + C793;
    const double C799 = C796 + C771;
    const double C833 = C131 * C560;
    const double C832 = C133 * C455;
    const double C831 = C131 * C555;
    const double C830 = C768 * C388;
    const double C829 = C535 * C405;
    const double C828 = C133 * C447;
    const double C827 = C683 * C540;
    const double C826 = C383 * C545;
    const double C825 = C701 / C74;
    const double C824 = C131 * C249;
    const double C823 = C131 * C248;
    const double C822 = C133 * C404;
    const double C843 = C133 * C833;
    const double C842 = C822 * C120;
    const double C841 = C133 * C831;
    const double C840 = C829 + C830;
    const double C839 = C770 * C822;
    const double C838 = C385 * C828;
    const double C837 = C826 + C827;
    const double C836 = C685 * C822;
    const double C835 = C133 * C824;
    const double C834 = C133 * C823;
    const double C849 = C456 - C843;
    const double C848 = C59 * C834;
    const double C847 = C842 / C74;
    const double C846 = C448 - C841;
    const double C845 = C839 - C840;
    const double C844 = C836 - C837;
    const double C852 = C847 - C848;
    const double C851 = C537 * C846;
    const double C850 = C844 + C838;
    const double C853 = C845 + C851;
    const double C1075 = C770 * C582;
    const double C1074 = C611 * C576;
    const double C1073 = C540 * C275;
    const double C1072 = C768 * C698;
    const double C1071 = C620 * C224;
    const double C1070 = C76 * C617;
    const double C1069 = C770 * C557;
    const double C1068 = C768 * C694;
    const double C1067 = C770 * C541;
    const double C1066 = C768 * C676;
    const double C1065 = C685 * C413;
    const double C1064 = C683 * C698;
    const double C1063 = C677 * C301;
    const double C1062 = C675 * C698;
    const double C1061 = C685 * C434;
    const double C1060 = C462 * C425;
    const double C1059 = C388 * C267;
    const double C1058 = C683 * C694;
    const double C1057 = C473 * C219;
    const double C1056 = C76 * C471;
    const double C1055 = C677 * C296;
    const double C1054 = C675 * C694;
    const double C1053 = C685 * C389;
    const double C1052 = C683 * C676;
    const double C1051 = C677 * C310;
    const double C1050 = C244 * C309;
    const double C1049 = C141 * C241;
    const double C1048 = C675 * C676;
    const double C1047 = C306 * C210;
    const double C1046 = C76 * C333;
    const double C1045 = C597 * ae;
    const double C1044 = C133 * C305;
    const double C1043 = -C719;
    const double C1042 = C133 * C403;
    const double C1041 = C133 * C304;
    const double C1040 = C582 * C130;
    const double C1039 = C133 * C248;
    const double C1038 = C133 * C302;
    const double C1037 = C582 * C120;
    const double C1036 = C133 * C410;
    const double C1035 = C133 * C300;
    const double C1034 = C133 * C299;
    const double C1033 = C557 * C130;
    const double C1032 = C540 * C267;
    const double C1031 = C545 * C130;
    const double C1030 = C557 * C120;
    const double C1029 = C133 * C297;
    const double C1028 = C133 * C249;
    const double C1027 = C133 * C293;
    const double C1026 = C541 * C130;
    const double C1025 = C133 * C288;
    const double C1024 = C133 * C282;
    const double C1023 = C541 * C120;
    const double C1022 = C540 * C241;
    const double C1021 = C539 * C120;
    const double C1020 = C131 * C305;
    const double C1019 = C413 * C132;
    const double C1018 = C388 * C275;
    const double C1017 = C405 * C132;
    const double C1016 = C833 * be;
    const double C1015 = C304 / C94;
    const double C1014 = C131 * C304;
    const double C1013 = C413 * C120;
    const double C1012 = C131 * C302;
    const double C1011 = C200 * C120;
    const double C1010 = C831 * ae;
    const double C1009 = C300 / C94;
    const double C1008 = C131 * C300;
    const double C1007 = C434 * C132;
    const double C1006 = C447 * ae;
    const double C1005 = C131 * C299;
    const double C1004 = -C714;
    const double C1003 = C823 * ae;
    const double C1002 = C131 * C297;
    const double C1001 = C434 * C120;
    const double C1000 = C193 * C120;
    const double C999 = C389 * C132;
    const double C998 = C131 * C293;
    const double C997 = C824 * be;
    const double C996 = C131 * C288;
    const double C995 = C131 * C282;
    const double C994 = C389 * C120;
    const double C993 = C388 * C241;
    const double C992 = C387 * C120;
    const double C991 = C168 * C120;
    const double C990 = C167 * C120;
    const double C989 = C76 * C241;
    const double C988 = C163 * C85;
    const double C987 = C125 * C305;
    const double C986 = C301 * C132;
    const double C985 = C141 * C275;
    const double C984 = C292 * C132;
    const double C983 = C163 * C82;
    const double C982 = C200 * C132;
    const double C981 = C188 * C132;
    const double C980 = C76 * C275;
    const double C979 = C85 * C238;
    const double C978 = C301 * C130;
    const double C977 = C125 * C304;
    const double C976 = C200 * C130;
    const double C975 = C82 * C238;
    const double C974 = C237 * be;
    const double C973 = C85 * C235;
    const double C972 = C700 * be;
    const double C971 = C302 / C94;
    const double C970 = C125 * C302;
    const double C969 = C82 * C235;
    const double C968 = C85 * C234;
    const double C967 = C296 * C132;
    const double C966 = C125 * C300;
    const double C965 = C193 * C132;
    const double C964 = C82 * C234;
    const double C963 = C157 * C85;
    const double C962 = C125 * C299;
    const double C961 = C296 * C130;
    const double C960 = C141 * C267;
    const double C959 = C287 * C130;
    const double C958 = C157 * C82;
    const double C957 = C193 * C130;
    const double C956 = C182 * C130;
    const double C955 = C76 * C267;
    const double C954 = C231 * be;
    const double C953 = C85 * C229;
    const double C952 = C697 * be;
    const double C951 = C297 / C94;
    const double C950 = C125 * C297;
    const double C949 = C82 * C229;
    const double C948 = C228 * ae;
    const double C947 = C85 * C225;
    const double C946 = C691 * ae;
    const double C945 = C293 / C94;
    const double C944 = C125 * C293;
    const double C943 = C310 * C132;
    const double C942 = C168 * C132;
    const double C941 = C82 * C225;
    const double C940 = C223 * ae;
    const double C939 = C85 * C220;
    const double C938 = C688 * ae;
    const double C937 = C288 / C94;
    const double C936 = C125 * C288;
    const double C935 = C310 * C130;
    const double C934 = C168 * C130;
    const double C933 = C82 * C220;
    const double C932 = C140 * C85;
    const double C931 = C215 * ae;
    const double C930 = C217 * be;
    const double C929 = C314 * be;
    const double C928 = C312 * ae;
    const double C927 = 4 * C94;
    const double C926 = C125 * C282;
    const double C925 = -C701;
    const double C924 = C140 * C82;
    const double C1193 = C1073 / C107;
    const double C1192 = C1070 / C74;
    const double C1191 = C1059 / C107;
    const double C1190 = C1056 / C74;
    const double C1189 = C1049 / C107;
    const double C1188 = C1046 / C74;
    const double C1187 = C1045 / C74;
    const double C1186 = C1044 / C94;
    const double C1185 = C1043 / C74;
    const double C1184 = C1042 * ae;
    const double C1183 = C1041 / C94;
    const double C1182 = C1040 / C74;
    const double C1181 = C1039 * ae;
    const double C1180 = C1038 / C94;
    const double C1179 = C1037 / C74;
    const double C1178 = C1036 * be;
    const double C1177 = C1035 / C94;
    const double C1176 = C71 * C1034;
    const double C1175 = C1033 / C74;
    const double C1174 = C1032 / C74;
    const double C1173 = C1031 / C74;
    const double C1172 = C1030 / C74;
    const double C1171 = C59 * C1029;
    const double C1170 = C1028 * be;
    const double C1169 = C1027 / C94;
    const double C1168 = C1026 / C74;
    const double C1167 = C71 * C1025;
    const double C1166 = C59 * C1024;
    const double C1165 = C1023 / C74;
    const double C1164 = C1022 / C74;
    const double C1163 = C1021 / C74;
    const double C1162 = C70 * C1020;
    const double C1161 = C1019 / C74;
    const double C1160 = C1018 / C74;
    const double C1159 = C1017 / C74;
    const double C1158 = C1014 / C94;
    const double C1157 = C1013 / C74;
    const double C1156 = C59 * C1012;
    const double C1155 = 2 * C1011;
    const double C1154 = C1010 / C74;
    const double C1153 = C1008 / C94;
    const double C1152 = C1007 / C74;
    const double C1151 = C1006 / C74;
    const double C1150 = C1005 / C94;
    const double C1149 = C1004 / C74;
    const double C1148 = C1003 / C74;
    const double C1147 = C1002 / C94;
    const double C1146 = C1001 / C74;
    const double C1145 = 2 * C1000;
    const double C1144 = C999 / C74;
    const double C1143 = C70 * C998;
    const double C1142 = C997 / C74;
    const double C1141 = C996 / C94;
    const double C1140 = C59 * C995;
    const double C1139 = C994 / C74;
    const double C1138 = C993 / C74;
    const double C1137 = C992 / C74;
    const double C1136 = 2 * C991;
    const double C1135 = 2 * C990;
    const double C1134 = C988 * C115;
    const double C1133 = C70 * C987;
    const double C1132 = C986 / C74;
    const double C1131 = C985 / C74;
    const double C1130 = C984 / C74;
    const double C1129 = C983 * C112;
    const double C1128 = 2 * C982;
    const double C1127 = 2 * C981;
    const double C1126 = C115 * C979;
    const double C1125 = C978 / C74;
    const double C1124 = C71 * C977;
    const double C1123 = 2 * C976;
    const double C1122 = C112 * C975;
    const double C1121 = 2 * C974;
    const double C1120 = C115 * C973;
    const double C1119 = C972 / C74;
    const double C1118 = C970 / C94;
    const double C1117 = C112 * C969;
    const double C1116 = C115 * C968;
    const double C1115 = C967 / C74;
    const double C1114 = C70 * C966;
    const double C1113 = 2 * C965;
    const double C1112 = C112 * C964;
    const double C1111 = C963 * C115;
    const double C1110 = C71 * C962;
    const double C1109 = C961 / C74;
    const double C1108 = C960 / C74;
    const double C1107 = C959 / C74;
    const double C1106 = C958 * C112;
    const double C1105 = 2 * C957;
    const double C1104 = 2 * C956;
    const double C1103 = 2 * C954;
    const double C1102 = C115 * C953;
    const double C1101 = C952 / C74;
    const double C1100 = C950 / C94;
    const double C1099 = C112 * C949;
    const double C1098 = 2 * C948;
    const double C1097 = C115 * C947;
    const double C1096 = C946 / C74;
    const double C1095 = C944 / C94;
    const double C1094 = C943 / C74;
    const double C1093 = 2 * C942;
    const double C1092 = C112 * C941;
    const double C1091 = 2 * C940;
    const double C1090 = C115 * C939;
    const double C1089 = C938 / C74;
    const double C1088 = C936 / C94;
    const double C1087 = C935 / C74;
    const double C1086 = 2 * C934;
    const double C1085 = C112 * C933;
    const double C1084 = C932 * C115;
    const double C1083 = 2 * C931;
    const double C1082 = 2 * C930;
    const double C1081 = C929 / C74;
    const double C1080 = C928 / C74;
    const double C1079 = C74 * C927;
    const double C1078 = C926 / C94;
    const double C1077 = C925 / C74;
    const double C1076 = C924 * C112;
    const double C1276 = C1192 - C1071;
    const double C1275 = C535 * C1112;
    const double C1274 = C535 * C1092;
    const double C1273 = C125 * C1126;
    const double C1272 = C383 * C1122;
    const double C1271 = C63 * C1117;
    const double C1270 = C125 * C1116;
    const double C1269 = C1190 - C1057;
    const double C1268 = C63 * C1099;
    const double C1267 = C383 * C1085;
    const double C1266 = C1188 - C1047;
    const double C1265 = C1185 - C726;
    const double C1264 = C1184 / C74;
    const double C1263 = C1183 - C725;
    const double C1262 = C1181 / C74;
    const double C1261 = C1180 - C721;
    const double C1260 = C133 * C1116;
    const double C1259 = C1177 - C774;
    const double C1258 = C1176 / C94;
    const double C1257 = C1173 - C1174;
    const double C1256 = C1171 / C94;
    const double C1255 = C1169 - C825;
    const double C1254 = C1167 / C94;
    const double C1253 = C1166 / C94;
    const double C1252 = C1163 - C1164;
    const double C1251 = C1162 / C94;
    const double C1250 = C1159 - C1160;
    const double C1249 = C131 * C1126;
    const double C1248 = C1158 - C732;
    const double C1247 = C1156 / C94;
    const double C1246 = C1155 / C74;
    const double C1245 = C59 * C1117;
    const double C1244 = C1153 - C726;
    const double C1243 = C1149 - C725;
    const double C1242 = C1147 - C721;
    const double C1241 = C1145 / C74;
    const double C1240 = C59 * C1099;
    const double C1239 = C1143 / C94;
    const double C1238 = C1082 / C74;
    const double C1237 = C131 * C1090;
    const double C1236 = C1141 - C825;
    const double C1235 = C1140 / C94;
    const double C1234 = C1137 - C1138;
    const double C1233 = C1136 / C74;
    const double C1232 = C989 + C1135;
    const double C1231 = C147 + C1134;
    const double C1230 = C1133 / C94;
    const double C1229 = C1130 - C1131;
    const double C1228 = C1129 - C113;
    const double C1227 = C1128 / C74;
    const double C1226 = C980 + C1127;
    const double C1225 = C1124 / C94;
    const double C1224 = C1123 / C74;
    const double C1223 = C71 * C1122;
    const double C1222 = C1121 / C74;
    const double C1221 = C125 * C1120;
    const double C1220 = C1118 - C732;
    const double C1219 = C1114 / C94;
    const double C1218 = C1113 / C74;
    const double C1217 = C70 * C1112;
    const double C1216 = C147 + C1111;
    const double C1215 = C1110 / C94;
    const double C1214 = C1107 - C1108;
    const double C1213 = C1106 - C113;
    const double C1212 = C1105 / C74;
    const double C1211 = C955 + C1104;
    const double C1210 = C1103 / C74;
    const double C1209 = C125 * C1102;
    const double C1208 = C1100 - C774;
    const double C1207 = C1098 / C74;
    const double C1206 = C125 * C1097;
    const double C1205 = C1095 - C726;
    const double C1204 = C1093 / C74;
    const double C1203 = C70 * C1092;
    const double C1202 = C1091 / C74;
    const double C1201 = C125 * C1090;
    const double C1200 = C1088 - C725;
    const double C1199 = C1086 / C74;
    const double C1198 = C71 * C1085;
    const double C1197 = C147 + C1084;
    const double C1196 = C1083 / C74;
    const double C1195 = C1077 - C721;
    const double C1194 = C1076 - C113;
    const double C1334 = C1276 - C1072;
    const double C1333 = C537 * C1259;
    const double C1332 = C1275 / C94;
    const double C1331 = C537 * C1255;
    const double C1330 = C1274 / C94;
    const double C1329 = C385 * C1248;
    const double C1328 = C1272 / C94;
    const double C1327 = C66 * C1220;
    const double C1326 = C1271 / C94;
    const double C1325 = C1269 - C1058;
    const double C1324 = C66 * C1208;
    const double C1323 = C1268 / C94;
    const double C1322 = C385 * C1236;
    const double C1321 = C1267 / C94;
    const double C1320 = C1266 - C1048;
    const double C1319 = C1265 + C1186;
    const double C1318 = C71 * C1263;
    const double C1317 = C59 * C1261;
    const double C1316 = C1260 / C94;
    const double C1315 = C1257 - C1175;
    const double C1314 = C1256 - C1172;
    const double C1313 = C1254 - C1168;
    const double C1312 = C1252 - C1165;
    const double C1311 = C1250 - C1161;
    const double C1310 = C1249 / C94;
    const double C1309 = C1247 - C1157;
    const double C1308 = C1245 / C94;
    const double C1307 = C70 * C1244;
    const double C1306 = C1243 + C1150;
    const double C1305 = C59 * C1242;
    const double C1304 = C1240 / C94;
    const double C1303 = C1239 - C1144;
    const double C1302 = C1237 / C94;
    const double C1301 = C1234 - C1139;
    const double C1300 = C1232 / C74;
    const double C1299 = C1231 * C73;
    const double C1298 = C1229 - C1132;
    const double C1297 = C1228 * C73;
    const double C1296 = C1226 / C74;
    const double C1295 = C1225 - C1125;
    const double C1294 = C1223 / C94;
    const double C1293 = C1221 / C94;
    const double C1292 = C1219 - C1115;
    const double C1291 = C1217 / C94;
    const double C1290 = C1216 * C73;
    const double C1289 = C1214 - C1109;
    const double C1288 = C1213 * C73;
    const double C1287 = C1211 / C74;
    const double C1286 = C1209 / C94;
    const double C1285 = C1206 / C94;
    const double C1284 = C70 * C1205;
    const double C1283 = C1203 / C94;
    const double C1282 = C1201 / C94;
    const double C1281 = C71 * C1200;
    const double C1280 = C1198 / C94;
    const double C1279 = C1197 * C73;
    const double C1278 = C1195 + C1078;
    const double C1277 = C1194 * C73;
    const double C1380 = C537 * C1319;
    const double C1379 = C535 * C1297;
    const double C1378 = C1332 - C1068;
    const double C1377 = C1330 - C1066;
    const double C1376 = C125 * C1299;
    const double C1375 = C1328 - C1064;
    const double C1374 = C1326 - C1062;
    const double C1373 = C125 * C1290;
    const double C1372 = C385 * C1306;
    const double C1371 = C383 * C1288;
    const double C1370 = C1323 - C1054;
    const double C1369 = C1321 - C1052;
    const double C1368 = C131 * C1279;
    const double C1367 = C66 * C1278;
    const double C1366 = C63 * C1277;
    const double C1365 = C1182 + C1318;
    const double C1364 = C1179 + C1317;
    const double C1363 = C1316 - C1210;
    const double C1362 = C1315 + C1258;
    const double C1361 = C1312 + C1253;
    const double C1360 = C1311 + C1251;
    const double C1359 = C1310 - C1222;
    const double C1358 = C1308 - C1246;
    const double C1357 = C1152 + C1307;
    const double C1356 = C1146 + C1305;
    const double C1355 = C1304 - C1241;
    const double C1354 = C1302 - C1238;
    const double C1353 = C1301 + C1235;
    const double C1352 = C59 * C1277;
    const double C1351 = C1300 - C1233;
    const double C1350 = C1298 + C1230;
    const double C1349 = C70 * C1297;
    const double C1348 = C1296 - C1227;
    const double C1347 = C1294 - C1224;
    const double C1346 = C1293 - C1222;
    const double C1345 = C1291 - C1218;
    const double C1344 = C1289 + C1215;
    const double C1343 = C71 * C1288;
    const double C1342 = C1287 - C1212;
    const double C1341 = C1286 - C1210;
    const double C1340 = C1285 - C1207;
    const double C1339 = C1094 + C1284;
    const double C1338 = C1283 - C1204;
    const double C1337 = C1282 - C1202;
    const double C1336 = C1087 + C1281;
    const double C1335 = C1280 - C1199;
    const double C1392 = C1379 / C94;
    const double C1391 = C1378 - C1069;
    const double C1390 = C1377 - C1067;
    const double C1389 = C1375 - C1065;
    const double C1388 = C1374 - C1063;
    const double C1387 = C1371 / C94;
    const double C1386 = C1370 - C1055;
    const double C1385 = C1369 - C1053;
    const double C1384 = C1366 / C94;
    const double C1383 = C1352 / C94;
    const double C1382 = C1349 / C94;
    const double C1381 = C1343 / C94;
    const double C1404 = C1334 + C1392;
    const double C1403 = C1391 + C1333;
    const double C1402 = C1390 + C1331;
    const double C1401 = C1389 + C1329;
    const double C1400 = C1388 + C1327;
    const double C1399 = C1325 + C1387;
    const double C1398 = C1386 + C1324;
    const double C1397 = C1385 + C1322;
    const double C1396 = C1320 + C1384;
    const double C1395 = C1351 + C1383;
    const double C1394 = C1348 + C1382;
    const double C1393 = C1342 + C1381;
    const double C1407 = C1404 - C1193;
    const double C1406 = C1399 - C1191;
    const double C1405 = C1396 - C1189;
    const double C1410 = C1407 + C1074;
    const double C1409 = C1406 + C1060;
    const double C1408 = C1405 + C1050;
    const double C1413 = C1410 + C1075;
    const double C1412 = C1409 + C1061;
    const double C1411 = C1408 + C1051;
    const double C1416 = C1413 + C1380;
    const double C1415 = C1412 + C1372;
    const double C1414 = C1411 + C1367;
    const double d2nexx200000 =
        (2 * Pi *
         ((C241 / C107 - ((-(be * -2 * C75) / C94) / C95 -
                          ((2 * C306 - (C72 * C333) / C74) * be) / C74)) *
              C76 -
          C349 * C210 + C349 * C676 + (C65 * C1277) / C94 -
          (((2 * C244 - C278 / C107) * be) / C74 - (-C333 / C74) / C95) * C141 +
          C341 * C309 + C342 * C310 + C67 * C1278 + (C214 * C241) / C1079 +
          C311 * C343 + C313 * C344 +
          C69 * (C282 / C94 + C1080 + C1081 +
                 C125 * ((-C1082) / C74 - C1196 + (C125 * C1279) / C94))) *
         C70 * C71) /
        C74;
    const double d2nexx020000 =
        (2 * Pi *
         (C1395 * C70 * C377 + C1353 * C70 * C378 +
          ((C415 * C241) / C74 - (C440 * C120) / C74 + (C441 * C120) / C74 +
           (C59 * (C282 + C1279 * C157)) / C94) *
              C70 * C379)) /
        C74;
    const double d2nexx002000 =
        (2 * Pi *
         (C1395 * C529 + C1361 * C530 +
          ((C563 * C241) / C74 - (C587 * C120) / C74 + (C588 * C120) / C74 +
           (C59 * (C282 + C1279 * C163)) / C94) *
              C531) *
         C71) /
        C74;
    const double d2nexx110000 =
        (2 * Pi *
         (C1414 * C70 * C383 +
          ((C63 * C995) / C94 -
           (C675 * C389 + C306 * C387 + (C388 * C333) / C74) +
           (C680 * C241) / C107 + C244 * C681 + C677 * C682 +
           C66 * ((-C997) / C74 - C1148 + (C125 * C1368) / C94)) *
              C70 * C385)) /
        C74;
    const double d2nexx101000 =
        (2 * Pi *
         (C1414 * C535 +
          ((C63 * C1024) / C94 -
           (C675 * C541 + C306 * C539 + (C540 * C333) / C74) +
           (C764 * C241) / C107 + C244 * C765 + C677 * C766 +
           C66 * ((-C1170) / C74 - C1262 + (C125 * C133 * C1279) / C94)) *
              C537) *
         C71) /
        C74;
    const double d2nexx011000 =
        (2 * Pi *
         ((C1395 * C535 + C1361 * C537) * C383 +
          (C1353 * C535 + ((C822 * C241 + C834 * C120) / C74 -
                           (C835 * C120) / C74 + (C59 * C133 * C1368) / C94) *
                              C537) *
              C385)) /
        C74;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx110000;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx011000;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexx200000 - 0.5 * d2nexx020000 + d2nexx002000;
    d2nexx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx101000;
    d2nexx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexx200000 - std::sqrt(0.75) * d2nexx020000;
    const double d2nexy200000 =
        (2 * Pi *
         (C286 * C349 + C1335 * C65 - C327 * C341 + C1336 * C67 + C338 * C311 +
          ((C344 * C130) / C74 + C71 * (C937 - C1089 + C125 * C1337)) * C69) *
         C70) /
        C74;
    const double d2nexy020000 =
        (2 * Pi *
         ((C501 * C676 + (C377 * C1085) / C94 - C497 * C389 + C378 * C1236 +
           C484 * C441 + C379 * (C937 - C1142 + C131 * C1354)) *
              C59 -
          (C507 * C120) / C74) *
         C70) /
        C74;
    const double d2nexy002000 =
        (2 * Pi *
         ((C1335 * C59 - (C286 * C120) / C74) * C529 +
          ((C605 * C120) / C74 + C1313 * C59) * C530 +
          (((C588 * C130) / C74 + (C71 * (C288 + C1090 * C163)) / C94) * C59 -
           (C618 * C120) / C74) *
              C531)) /
        C74;
    const double d2nexy110000 = (2 * Pi *
                                 (C739 * C306 + C1397 * C63 + C740 * C244 +
                                  (C683 * C310 + C383 * C1200 + C685 * C682 +
                                   C385 * (C1081 + C131 * C1337)) *
                                      C66) *
                                 C70) /
                                C74;
    const double d2nexy101000 =
        (2 * Pi *
         ((C286 * C306 + C1335 * C63 - C327 * C244 + C1336 * C66) * C535 +
          (C1313 * C63 - C605 * C306 + C795 * C244 +
           ((C766 * C130) / C74 + C71 * C133 * C1337) * C66) *
              C537)) /
        C74;
    const double d2nexy011000 = (2 * Pi *
                                 ((C1397 * C59 - (C739 * C120) / C74) * C535 +
                                  (((C383 * C1025) / C94 - C683 * C541 -
                                    C685 * C835 + C385 * C133 * C1354) *
                                       C59 -
                                   (C850 * C120) / C74) *
                                      C537)) /
                                C74;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy110000;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy011000;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexy200000 - 0.5 * d2nexy020000 + d2nexy002000;
    d2nexy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy101000;
    d2nexy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexy200000 - std::sqrt(0.75) * d2nexy020000;
    const double d2nexz200000 =
        (2 * Pi *
         (C291 * C349 + C1338 * C65 - C329 * C341 + C1339 * C67 + C339 * C311 +
          ((C344 * C132) / C74 + C70 * (C945 - C1096 + C125 * C1340)) * C69) *
         C71) /
        C74;
    const double d2nexz020000 =
        (2 * Pi *
         ((C1338 * C59 - (C291 * C120) / C74) * C377 +
          ((C464 * C120) / C74 + C1303 * C59) * C378 +
          (((C441 * C132) / C74 + (C70 * (C293 + C1097 * C157)) / C94) * C59 -
           (C477 * C120) / C74) *
              C379)) /
        C74;
    const double d2nexz002000 =
        (2 * Pi *
         ((C647 * C676 + (C529 * C1092) / C94 - C643 * C541 + C530 * C1255 +
           C630 * C588 +
           C531 *
               (C945 - C1170 / C74 + C133 * ((C133 * C1097) / C94 - C1238))) *
              C59 -
          (C653 * C120) / C74) *
         C71) /
        C74;
    const double d2nexz110000 =
        (2 * Pi *
         ((C291 * C306 + C1338 * C63 - C329 * C244 + C1339 * C66) * C383 +
          (C1303 * C63 - C464 * C306 + C736 * C244 +
           ((C682 * C132) / C74 + C70 * C131 * C1340) * C66) *
              C385)) /
        C74;
    const double d2nexz101000 = (2 * Pi *
                                 (C799 * C306 + C1402 * C63 + C800 * C244 +
                                  (C768 * C310 + C535 * C1205 + C770 * C766 +
                                   C537 * (C1081 + C133 * C1340)) *
                                      C66) *
                                 C71) /
                                C74;
    const double d2nexz011000 =
        (2 * Pi *
         ((C1402 * C59 - (C799 * C120) / C74) * C383 +
          (((C535 * C998) / C94 - C768 * C389 - C770 * C835 +
            C537 * ((C133 * C131 * C1097) / C94 - C1142)) *
               C59 -
           (C853 * C120) / C74) *
              C385)) /
        C74;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz110000;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz011000;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexz200000 - 0.5 * d2nexz020000 + d2nexz002000;
    d2nexz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz101000;
    d2nexz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexz200000 - std::sqrt(0.75) * d2nexz020000;
    const double d2neyx200000 =
        (2 * Pi *
         ((C349 * C694 + (C65 * C1099) / C94 - C342 * C296 + C67 * C1208 +
           C313 * C319 + C69 * (C951 - C1101 + C125 * C1341)) *
              C71 -
          (C355 * C130) / C74) *
         C70) /
        C74;
    const double d2neyx020000 =
        (2 * Pi *
         (C452 * C501 + C1355 * C377 - C467 * C498 + C1356 * C378 +
          C478 * C486 +
          ((C487 * C120) / C74 +
           C59 * (C951 - C1148 + C131 * ((C131 * C1102) / C94 - C1196))) *
              C379) *
         C70) /
        C74;
    const double d2neyx002000 =
        (2 * Pi *
         ((C1355 * C71 - (C452 * C130) / C74) * C529 +
          ((C613 * C130) / C74 + C1314 * C71) * C530 +
          (((C600 * C120) / C74 + (C59 * (C297 + C1102 * C163)) / C94) * C71 -
           (C624 * C130) / C74) *
              C531)) /
        C74;
    const double d2neyx110000 = (2 * Pi *
                                 (C741 * C473 + C1398 * C383 + C742 * C462 +
                                  (C675 * C434 + C63 * C1242 + C677 * C731 +
                                   C66 * (C1080 + C131 * C1341)) *
                                      C385) *
                                 C70) /
                                C74;
    const double d2neyx101000 = (2 * Pi *
                                 ((C1398 * C71 - (C741 * C130) / C74) * C535 +
                                  (((C63 * C1029) / C94 - C675 * C557 -
                                    C677 * C775 + C66 * C133 * C1341) *
                                       C71 -
                                   (C798 * C130) / C74) *
                                      C537)) /
                                C74;
    const double d2neyx011000 =
        (2 * Pi *
         ((C452 * C473 + C1355 * C383 - C467 * C462 + C1356 * C385) * C535 +
          (C1314 * C383 - C613 * C473 + C852 * C462 +
           ((C832 * C120) / C74 + C59 * ((C131 * C133 * C1102) / C94 - C1262)) *
               C385) *
              C537)) /
        C74;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx110000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx011000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyx200000 - 0.5 * d2neyx020000 + d2neyx002000;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx101000;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyx200000 - std::sqrt(0.75) * d2neyx020000;
    const double d2neyy200000 =
        (2 * Pi *
         (C1393 * C65 + C1344 * C67 +
          ((C214 * C267) / C74 - (C316 * C130) / C74 + (C319 * C130) / C74 +
           (C71 * (C299 + C1290 * C140)) / C94) *
              C69) *
         C70) /
        C74;
    const double d2neyy020000 =
        (2 * Pi *
         ((C267 / C107 - ((-(be * -2 * C396) / C94) / C95 -
                          ((2 * C473 - (C86 * C471) / C74) * be) / C74)) *
              C76 -
          C501 * C219 + C501 * C694 + (C377 * C1288) / C94 -
          (((2 * C462 - C412 / C107) * be) / C74 - (-C471 / C74) / C95) * C388 +
          C498 * C425 + C497 * C434 + C378 * C1306 + (C415 * C267) / C1079 +
          C486 * C485 + C484 * C487 +
          C379 * (C299 / C94 + C1151 + (C455 * be) / C74 +
                  C131 * ((-C1103) / C74 - C1202 + (C131 * C1290) / C94))) *
         C59 * C70) /
        C74;
    const double d2neyy002000 =
        (2 * Pi *
         (C1393 * C59 * C529 + C1362 * C59 * C530 +
          ((C563 * C267) / C74 - (C591 * C130) / C74 + (C600 * C130) / C74 +
           (C71 * (C299 + C1290 * C163)) / C94) *
              C59 * C531)) /
        C74;
    const double d2neyy110000 =
        (2 * Pi *
         (C1415 * C63 +
          ((C383 * C962) / C94 -
           (C683 * C296 + C473 * C287 + (C141 * C471) / C74) +
           (C680 * C267) / C107 + C462 * C724 + C685 * C731 +
           C385 * ((-C952) / C74 - C1089 + (C131 * C1373) / C94)) *
              C66) *
         C70) /
        C74;
    const double d2neyy101000 =
        (2 * Pi *
         ((C1393 * C63 + C1344 * C66) * C535 +
          (C1362 * C63 + ((C764 * C267 + C767 * C130) / C74 -
                          (C775 * C130) / C74 + (C71 * C133 * C1373) / C94) *
                             C66) *
              C537)) /
        C74;
    const double d2neyy011000 =
        (2 * Pi *
         (C1415 * C59 * C535 +
          ((C383 * C1034) / C94 -
           (C683 * C557 + C473 * C545 + (C540 * C471) / C74) +
           (C822 * C267) / C107 + C462 * C828 + C685 * C832 +
           C385 * ((-C1178) / C74 - C1264 + (C131 * C133 * C1290) / C94)) *
              C59 * C537)) /
        C74;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy110000;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy011000;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyy200000 - 0.5 * d2neyy020000 + d2neyy002000;
    d2neyy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy101000;
    d2neyy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyy200000 - std::sqrt(0.75) * d2neyy020000;
    const double d2neyz200000 =
        (2 * Pi *
         ((C1345 * C71 - (C291 * C130) / C74) * C65 +
          ((C329 * C130) / C74 + C1292 * C71) * C67 +
          (((C319 * C132) / C74 + (C70 * (C300 + C1116 * C140)) / C94) * C71 -
           (C339 * C130) / C74) *
              C69)) /
        C74;
    const double d2neyz020000 =
        (2 * Pi *
         (C291 * C501 + C1345 * C377 - C464 * C498 + C1357 * C378 +
          C477 * C486 +
          ((C487 * C132) / C74 +
           C70 * (C1009 - C1154 + C131 * ((C131 * C1116) / C94 - C1207))) *
              C379) *
         C59) /
        C74;
    const double d2neyz002000 =
        (2 * Pi *
         ((C647 * C694 + (C529 * C1112) / C94 - C643 * C557 + C530 * C1259 +
           C630 * C600 + C531 * (C1009 - C1178 / C74 + C133 * C1363)) *
              C71 -
          (C653 * C130) / C74) *
         C59) /
        C74;
    const double d2neyz110000 =
        (2 * Pi *
         ((C291 * C473 + C1345 * C383 - C464 * C462 + C1357 * C385) * C63 +
          (C1292 * C383 - C329 * C473 + C736 * C462 +
           ((C731 * C132) / C74 + C70 * ((C131 * C1270) / C94 - C1096)) *
               C385) *
              C66)) /
        C74;
    const double d2neyz101000 =
        (2 * Pi *
         ((C1403 * C71 - (C799 * C130) / C74) * C63 +
          (((C535 * C966) / C94 - C768 * C296 - C770 * C775 +
            C537 * ((C133 * C1270) / C94 - C1101)) *
               C71 -
           (C800 * C130) / C74) *
              C66)) /
        C74;
    const double d2neyz011000 = (2 * Pi *
                                 (C799 * C473 + C1403 * C383 + C853 * C462 +
                                  (C768 * C434 + C535 * C1244 + C770 * C832 +
                                   C537 * (C1187 + C131 * C1363)) *
                                      C385) *
                                 C59) /
                                C74;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz110000;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz011000;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyz200000 - 0.5 * d2neyz020000 + d2neyz002000;
    d2neyz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz101000;
    d2neyz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyz200000 - std::sqrt(0.75) * d2neyz020000;
    const double d2nezx200000 =
        (2 * Pi *
         ((C349 * C698 + (C65 * C1117) / C94 - C342 * C301 + C67 * C1220 +
           C313 * C320 + C69 * (C971 - C1119 + C125 * C1346)) *
              C70 -
          (C355 * C132) / C74) *
         C71) /
        C74;
    const double d2nezx020000 =
        (2 * Pi *
         ((C1358 * C70 - (C452 * C132) / C74) * C377 +
          ((C467 * C132) / C74 + C1309 * C70) * C378 +
          (((C458 * C120) / C74 + (C59 * (C302 + C1120 * C157)) / C94) * C70 -
           (C478 * C132) / C74) *
              C379)) /
        C74;
    const double d2nezx002000 =
        (2 * Pi *
         (C452 * C647 + C1358 * C529 - C613 * C644 + C1364 * C530 +
          C624 * C632 +
          ((C633 * C120) / C74 +
           C59 * (C971 - C1262 + C133 * ((C133 * C1120) / C94 - C1196))) *
              C531) *
         C71) /
        C74;
    const double d2nezx110000 = (2 * Pi *
                                 ((C1400 * C70 - (C741 * C132) / C74) * C383 +
                                  (((C63 * C1012) / C94 - C675 * C413 -
                                    C677 * C720 + C66 * C131 * C1346) *
                                       C70 -
                                   (C742 * C132) / C74) *
                                      C385)) /
                                C74;
    const double d2nezx101000 = (2 * Pi *
                                 (C741 * C620 + C1400 * C535 + C798 * C611 +
                                  (C675 * C582 + C63 * C1261 + C677 * C789 +
                                   C66 * (C1080 + C133 * C1346)) *
                                      C537) *
                                 C71) /
                                C74;
    const double d2nezx011000 =
        (2 * Pi *
         ((C452 * C620 + C1358 * C535 - C613 * C611 + C1364 * C537) * C383 +
          (C1309 * C535 - C467 * C620 + C852 * C611 +
           ((C849 * C120) / C74 + C59 * ((C133 * C131 * C1120) / C94 - C1148)) *
               C537) *
              C385)) /
        C74;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx110000;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx011000;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezx200000 - 0.5 * d2nezx020000 + d2nezx002000;
    d2nezx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx101000;
    d2nezx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezx200000 - std::sqrt(0.75) * d2nezx020000;
    const double d2nezy200000 =
        (2 * Pi *
         ((C1347 * C70 - (C286 * C132) / C74) * C65 +
          ((C327 * C132) / C74 + C1295 * C70) * C67 +
          (((C320 * C130) / C74 + (C71 * (C304 + C1126 * C140)) / C94) * C70 -
           (C338 * C132) / C74) *
              C69)) /
        C74;
    const double d2nezy020000 =
        (2 * Pi *
         ((C501 * C698 + (C377 * C1122) / C94 - C497 * C413 + C378 * C1248 +
           C484 * C458 + C379 * (C1015 - C1016 / C74 + C131 * C1359)) *
              C70 -
          (C507 * C132) / C74) *
         C59) /
        C74;
    const double d2nezy002000 =
        (2 * Pi *
         (C286 * C647 + C1347 * C529 - C605 * C644 + C1365 * C530 +
          C618 * C632 +
          ((C633 * C130) / C74 +
           C71 * (C1015 - C1264 + C133 * ((C133 * C1126) / C94 - C1202))) *
              C531) *
         C59) /
        C74;
    const double d2nezy110000 =
        (2 * Pi *
         ((C1401 * C70 - (C739 * C132) / C74) * C63 +
          (((C383 * C977) / C94 - C683 * C301 - C685 * C720 +
            C385 * ((C131 * C1273) / C94 - C1119)) *
               C70 -
           (C740 * C132) / C74) *
              C66)) /
        C74;
    const double d2nezy101000 =
        (2 * Pi *
         ((C286 * C620 + C1347 * C535 - C605 * C611 + C1365 * C537) * C63 +
          (C1295 * C535 - C327 * C620 + C795 * C611 +
           ((C789 * C130) / C74 + C71 * ((C133 * C1273) / C94 - C1089)) *
               C537) *
              C66)) /
        C74;
    const double d2nezy011000 = (2 * Pi *
                                 (C739 * C620 + C1401 * C535 + C850 * C611 +
                                  (C683 * C582 + C383 * C1263 + C685 * C849 +
                                   C385 * (C1151 + C133 * C1359)) *
                                      C537) *
                                 C59) /
                                C74;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy110000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy011000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezy200000 - 0.5 * d2nezy020000 + d2nezy002000;
    d2nezy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy101000;
    d2nezy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezy200000 - std::sqrt(0.75) * d2nezy020000;
    const double d2nezz200000 =
        (2 * Pi *
         (C1394 * C71 * C65 + C1350 * C71 * C67 +
          ((C214 * C275) / C74 - (C318 * C132) / C74 + (C320 * C132) / C74 +
           (C70 * (C305 + C1299 * C140)) / C94) *
              C71 * C69)) /
        C74;
    const double d2nezz020000 =
        (2 * Pi *
         (C1394 * C377 + C1360 * C378 +
          ((C415 * C275) / C74 - (C451 * C132) / C74 + (C458 * C132) / C74 +
           (C70 * (C305 + C1299 * C157)) / C94) *
              C379) *
         C59) /
        C74;
    const double d2nezz002000 =
        (2 * Pi *
         ((C275 / C107 - ((-(be * -2 * C548) / C94) / C95 -
                          ((2 * C620 - (C89 * C617) / C74) * be) / C74)) *
              C76 -
          C647 * C224 + C647 * C698 + (C529 * C1297) / C94 -
          (((2 * C611 - C562 / C107) * be) / C74 - (-C617 / C74) / C95) * C540 +
          C644 * C576 + C643 * C582 + C530 * C1319 + (C563 * C275) / C1079 +
          C632 * C631 + C630 * C633 +
          C531 * (C305 / C94 + C1187 + (C602 * be) / C74 +
                  C133 * ((-C1121) / C74 - C1207 + (C133 * C1299) / C94))) *
         C71 * C59) /
        C74;
    const double d2nezz110000 =
        (2 * Pi *
         ((C1394 * C383 + C1360 * C385) * C63 +
          (C1350 * C383 + ((C680 * C275 + C711 * C132) / C74 -
                           (C720 * C132) / C74 + (C70 * C131 * C1376) / C94) *
                              C385) *
              C66)) /
        C74;
    const double d2nezz101000 =
        (2 * Pi *
         (C1416 * C71 * C63 +
          ((C535 * C987) / C94 -
           (C768 * C301 + C620 * C292 + (C141 * C617) / C74) +
           (C764 * C275) / C107 + C611 * C785 + C770 * C789 +
           C537 * ((-C972) / C74 - C1096 + (C133 * C1376) / C94)) *
              C71 * C66)) /
        C74;
    const double d2nezz011000 =
        (2 * Pi *
         (C1416 * C383 +
          ((C535 * C1020) / C94 -
           (C768 * C413 + C620 * C405 + (C388 * C617) / C74) +
           (C822 * C275) / C107 + C611 * C846 + C770 * C849 +
           C537 * ((-C1016) / C74 - C1154 + (C133 * C131 * C1299) / C94)) *
              C385) *
         C59) /
        C74;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz110000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz011000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezz200000 - 0.5 * d2nezz020000 + d2nezz002000;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz101000;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezz200000 - std::sqrt(0.75) * d2nezz020000;
}
