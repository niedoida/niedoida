/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ds_BB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_20_22(double ae,
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
    const double C835 = ae + be;
    const double C834 = xA - xB;
    const double C839 = ae * be;
    const double C838 = std::pow(C834, 2);
    const double C840 = C838 * C839;
    const double C841 = C840 / C835;
    const double C842 = -C841;
    const double C843 = std::exp(C842);
    const double C851 = yA - yB;
    const double C852 = std::pow(C851, 2);
    const double C853 = C852 * C839;
    const double C854 = C853 / C835;
    const double C855 = -C854;
    const double C856 = std::exp(C855);
    const double C867 = zA - zB;
    const double C868 = std::pow(C867, 2);
    const double C869 = C868 * C839;
    const double C870 = C869 / C835;
    const double C871 = -C870;
    const double C872 = std::exp(C871);
    const double C888 = C867 * be;
    const double C887 = C851 * be;
    const double C886 = 2 * C835;
    const double C885 = std::pow(C835, 2);
    const double C884 = C834 * be;
    const double C883 = ae * be;
    const double C892 = C872 * C888;
    const double C891 = C856 * C887;
    const double C890 = std::pow(C886, -2);
    const double C889 = std::pow(C886, -1);
    const double C60 = std::exp(-(std::pow(xA - xB, 2) * C883) / (ae + be));
    const double C63 =
        -(std::exp(-(std::pow(C834, 2) * C883) / C835) * C884) / C835;
    const double C65 = (C843 * std::pow(C884, 2)) / C885 + C843 / C886;
    const double C66 = C889 * C843;
    const double C67 = (-2 * C889 * C843 * C884) / C835;
    const double C69 = C890 * C843;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C839) / C835);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C839) / C835);
    const double C363 = (C856 * std::pow(C887, 2)) / C885 + C856 / C886;
    const double C364 = (-2 * C889 * C891) / C835;
    const double C365 = C890 * C856;
    const double C367 = C889 * C856;
    const double C371 = -C891 / C835;
    const double C522 = (C872 * std::pow(C888, 2)) / C885 + C872 / C886;
    const double C523 = (-2 * C889 * C892) / C835;
    const double C524 = C890 * C872;
    const double C526 = C889 * C872;
    const double C530 = -C892 / C835;
    const double C92 = zA - zB;
    const double C91 = be * zB;
    const double C90 = ae * zA;
    const double C89 = yA - yB;
    const double C88 = be * yB;
    const double C87 = ae * yA;
    const double C86 = bs[4];
    const double C85 = 0 * be;
    const double C84 = bs[3];
    const double C83 = std::pow(be, 2);
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
    const double C106 = C75 * C92;
    const double C105 = C90 + C91;
    const double C104 = C75 * C89;
    const double C103 = C87 + C88;
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
    const double C120 = C106 * C70;
    const double C119 = C105 / C73;
    const double C118 = C104 * C71;
    const double C117 = C103 / C73;
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
    const double C133 = 2 * C120;
    const double C132 = C119 - zC;
    const double C131 = 2 * C118;
    const double C130 = C117 - yC;
    const double C129 = std::pow(C115, 3);
    const double C128 = C82 * C113;
    const double C127 = C114 * be;
    const double C126 = C112 - xC;
    const double C125 = 0 - C111;
    const double C124 = C110 / C94;
    const double C123 = -4 * C108;
    const double C122 = 2 * C108;
    const double C121 = C107 / C94;
    const double C158 = std::pow(C132, 2);
    const double C157 = C92 * C133;
    const double C156 = C132 * C130;
    const double C155 = C132 * C126;
    const double C154 = C130 * C132;
    const double C153 = std::pow(C130, 2);
    const double C152 = C89 * C131;
    const double C151 = C130 * C126;
    const double C150 = C126 * C132;
    const double C149 = C76 * C133;
    const double C148 = be * C132;
    const double C147 = C126 * C130;
    const double C146 = C76 * C131;
    const double C145 = be * C130;
    const double C144 = C84 * C129;
    const double C143 = C126 * C128;
    const double C142 = C128 * be;
    const double C141 = -C127;
    const double C140 = C126 * C114;
    const double C139 = std::pow(C126, 2);
    const double C138 = be * C126;
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
    const double C181 = C148 * C84;
    const double C180 = C140 * C133;
    const double C179 = C148 * C82;
    const double C178 = C150 * C83;
    const double C177 = C149 / C73;
    const double C176 = C148 * C81;
    const double C175 = C145 * C84;
    const double C174 = C140 * C131;
    const double C173 = C145 * C82;
    const double C172 = C147 * C83;
    const double C171 = C146 / C73;
    const double C170 = C145 * C81;
    const double C169 = C143 * be;
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
    const double C216 = C176 * C133;
    const double C215 = C84 * C187;
    const double C214 = C84 * C186;
    const double C213 = C84 * C185;
    const double C212 = C184 * C129;
    const double C211 = C71 - C183;
    const double C210 = C170 * C131;
    const double C209 = C84 * C182;
    const double C208 = C181 * C113;
    const double C207 = C84 * C178;
    const double C206 = C180 / C73;
    const double C205 = C179 * C94;
    const double C204 = 2 * C176;
    const double C203 = C175 * C113;
    const double C202 = C84 * C172;
    const double C201 = C174 / C73;
    const double C200 = C173 * C94;
    const double C199 = 2 * C170;
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
    const double C245 = C129 * C209;
    const double C244 = C65 * C193;
    const double C243 = C208 * be;
    const double C242 = 2 * C208;
    const double C241 = C208 * C139;
    const double C240 = 2 * C205;
    const double C239 = C196 * C133;
    const double C238 = C205 * be;
    const double C237 = C129 * C207;
    const double C236 = -2 * C205;
    const double C235 = C70 * C204;
    const double C234 = C203 * be;
    const double C233 = 2 * C203;
    const double C232 = C203 * C139;
    const double C231 = 2 * C200;
    const double C230 = C196 * C131;
    const double C229 = C200 * be;
    const double C228 = C129 * C202;
    const double C227 = -2 * C200;
    const double C226 = C71 * C199;
    const double C225 = 2 * C197;
    const double C224 = C128 + C195;
    const double C223 = -2 * C194;
    const double C222 = C192 - C100;
    const double C221 = C191 / C94;
    const double C220 = C190 * C97;
    const double C219 = C190 * be;
    const double C277 = C254 * C83;
    const double C276 = C248 * C83;
    const double C275 = 2 * C243;
    const double C274 = C126 * C242;
    const double C273 = 2 * C241;
    const double C272 = C239 / C73;
    const double C271 = -2 * C238;
    const double C270 = C126 * C236;
    const double C269 = C235 - C177;
    const double C268 = 2 * C234;
    const double C267 = C126 * C233;
    const double C266 = 2 * C232;
    const double C265 = C230 / C73;
    const double C264 = -2 * C229;
    const double C263 = C126 * C227;
    const double C262 = C226 - C171;
    const double C261 = C126 * C225;
    const double C260 = C222 / C94;
    const double C259 = C224 * C83;
    const double C258 = C126 * C223;
    const double C257 = C74 * C222;
    const double C256 = C74 * C220;
    const double C255 = C219 / C73;
    const double C296 = C270 * C133;
    const double C295 = C263 * C131;
    const double C294 = C275 / C73;
    const double C293 = C274 * be;
    const double C292 = C240 - C273;
    const double C291 = C271 / C73;
    const double C290 = C70 * C270;
    const double C289 = C268 / C73;
    const double C288 = C267 * be;
    const double C287 = C260 - C102;
    const double C286 = C231 - C266;
    const double C285 = C264 / C73;
    const double C284 = C71 * C263;
    const double C283 = C167 - C261;
    const double C282 = C102 - C260;
    const double C281 = C163 - C258;
    const double C280 = C257 + C66;
    const double C279 = C256 / C73;
    const double C278 = C121 - C255;
    const double C314 = C292 * C133;
    const double C313 = C296 / C73;
    const double C312 = C286 * C131;
    const double C311 = C295 / C73;
    const double C310 = C282 * C196;
    const double C309 = C67 * C281;
    const double C308 = C293 / C73;
    const double C307 = C70 * C292;
    const double C306 = C290 + C206;
    const double C305 = C288 / C73;
    const double C304 = C71 * C286;
    const double C303 = C284 + C201;
    const double C302 = C283 * be;
    const double C301 = C126 * C283;
    const double C300 = C278 / C94;
    const double C299 = C280 * be;
    const double C298 = C74 * C278;
    const double C297 = C135 - C279;
    const double C323 = C314 / C73;
    const double C322 = C312 / C73;
    const double C321 = C272 + C307;
    const double C320 = C265 + C304;
    const double C319 = C302 / C73;
    const double C318 = C301 - C223;
    const double C317 = C299 / C73;
    const double C316 = C298 + C63;
    const double C315 = C297 * be;
    const double C327 = C300 - C317;
    const double C326 = C318 + C198;
    const double C325 = C317 - C300;
    const double C324 = C316 * be;
    const double C332 = C69 * C326;
    const double C331 = C325 * C140;
    const double C330 = C282 * C326;
    const double C329 = C325 * C281;
    const double C328 = C324 / C73;
    const double C333 = C221 - C328;
    const double C334 = C333 + C222;
    const double C336 = C334 * C76;
    const double C335 = C334 * C193;
    const double C337 = C244 + C336;
    const double C338 = C331 + C337;
    const double C339 = C309 - C338;
    const double C340 = C339 + C310;
    const double C341 = C340 + C332;
    const double C398 = C130 * C242;
    const double C397 = C89 * C247;
    const double C396 = -4 * C118;
    const double C395 = C76 * C122;
    const double C394 = C60 * C193;
    const double C393 = C208 * C153;
    const double C392 = C130 * C236;
    const double C391 = C197 * be;
    const double C390 = C130 * C225;
    const double C389 = C194 * be;
    const double C388 = C130 * C128;
    const double C387 = C130 * C233;
    const double C386 = 0 * be;
    const double C385 = 0 * be;
    const double C384 = C363 * C199;
    const double C383 = C211 * be;
    const double C382 = 0 * be;
    const double C381 = 0 * be;
    const double C380 = C131 / C73;
    const double C379 = C130 * C227;
    const double C378 = C128 * C153;
    const double C377 = C197 * C153;
    const double C376 = 2 * C194;
    const double C375 = C130 * C223;
    const double C374 = C130 * C114;
    const double C373 = C162 * C122;
    const double C425 = C392 * C133;
    const double C424 = C398 * be;
    const double C423 = C397 / C73;
    const double C422 = C396 / C73;
    const double C421 = C374 * C122;
    const double C420 = C60 * C375;
    const double C419 = C395 / C73;
    const double C418 = 2 * C393;
    const double C417 = C374 * C133;
    const double C416 = C70 * C392;
    const double C415 = 2 * C391;
    const double C414 = C390 * be;
    const double C413 = -2 * C389;
    const double C412 = C388 * be;
    const double C411 = C167 - C387;
    const double C410 = C386 / C73;
    const double C409 = C89 * C382;
    const double C408 = C385 / C73;
    const double C407 = C383 / C73;
    const double C406 = C382 / C73;
    const double C405 = C381 / C73;
    const double C404 = -C380;
    const double C403 = C163 - C379;
    const double C402 = C378 - C114;
    const double C401 = 2 * C377;
    const double C400 = C375 * C122;
    const double C399 = 2 * C373;
    const double C447 = C425 / C73;
    const double C446 = C424 / C73;
    const double C445 = C411 * be;
    const double C444 = C422 - C423;
    const double C443 = C402 * C122;
    const double C442 = C421 / C73;
    const double C441 = C394 - C419;
    const double C440 = C240 - C418;
    const double C439 = C402 * C133;
    const double C438 = C417 / C73;
    const double C437 = C415 / C73;
    const double C436 = C414 / C73;
    const double C435 = C413 / C73;
    const double C434 = C412 / C73;
    const double C433 = C130 * C411;
    const double C432 = C409 / C73;
    const double C431 = -C408;
    const double C430 = -C406;
    const double C429 = C404 / C94;
    const double C428 = C364 * C403;
    const double C427 = C376 - C401;
    const double C426 = C400 / C73;
    const double C462 = C440 * C133;
    const double C461 = C445 / C73;
    const double C460 = C444 * be;
    const double C459 = C60 * C427;
    const double C458 = C443 / C73;
    const double C457 = C420 + C442;
    const double C456 = C70 * C440;
    const double C455 = C439 / C73;
    const double C454 = C416 + C438;
    const double C453 = C433 - C227;
    const double C452 = 0 - C432;
    const double C451 = C431 / C94;
    const double C450 = C430 / C94;
    const double C449 = C429 - C405;
    const double C448 = C427 * C122;
    const double C471 = C462 / C73;
    const double C470 = C458 + C459;
    const double C469 = C455 + C456;
    const double C468 = C453 + C434;
    const double C467 = C449 / C94;
    const double C466 = C452 * be;
    const double C465 = C450 - C407;
    const double C464 = C89 * C449;
    const double C463 = C448 / C73;
    const double C478 = C467 - C410;
    const double C477 = C365 * C468;
    const double C476 = C410 - C467;
    const double C475 = C89 * C465;
    const double C474 = C466 / C73;
    const double C473 = C465 / C94;
    const double C472 = C464 + C367;
    const double C483 = C476 * C468;
    const double C482 = C476 * C402;
    const double C481 = C475 + C371;
    const double C480 = C451 - C474;
    const double C479 = C472 * be;
    const double C486 = C481 * be;
    const double C485 = C480 / C94;
    const double C484 = C479 / C73;
    const double C489 = C473 - C484;
    const double C488 = C486 / C73;
    const double C487 = C484 - C473;
    const double C492 = C487 * C403;
    const double C491 = C485 - C488;
    const double C490 = C487 * C374;
    const double C493 = C491 + C449;
    const double C495 = C493 * C199;
    const double C494 = C493 * C76;
    const double C496 = C384 + C494;
    const double C497 = C490 + C496;
    const double C498 = C428 - C497;
    const double C499 = C498 + C482;
    const double C500 = C499 + C477;
    const double C551 = C92 * C253;
    const double C550 = -4 * C120;
    const double C549 = C132 * C233;
    const double C548 = C132 * C225;
    const double C547 = C132 * C128;
    const double C546 = C132 * C242;
    const double C545 = 0 * be;
    const double C544 = 0 * be;
    const double C543 = C522 * C204;
    const double C542 = C217 * be;
    const double C541 = 0 * be;
    const double C540 = 0 * be;
    const double C539 = C133 / C73;
    const double C538 = C132 * C236;
    const double C537 = C203 * C158;
    const double C536 = C132 * C227;
    const double C535 = C128 * C158;
    const double C534 = C197 * C158;
    const double C533 = C132 * C223;
    const double C532 = C132 * C114;
    const double C574 = C551 / C73;
    const double C573 = C550 / C73;
    const double C572 = C549 * be;
    const double C571 = C536 * C131;
    const double C570 = C532 * C122;
    const double C569 = C60 * C533;
    const double C568 = C548 * be;
    const double C567 = C547 * be;
    const double C566 = C167 - C546;
    const double C565 = C545 / C73;
    const double C564 = C92 * C541;
    const double C563 = C544 / C73;
    const double C562 = C542 / C73;
    const double C561 = C541 / C73;
    const double C560 = C540 / C73;
    const double C559 = -C539;
    const double C558 = C163 - C538;
    const double C557 = 2 * C537;
    const double C556 = C532 * C131;
    const double C555 = C71 * C536;
    const double C554 = C535 - C114;
    const double C553 = 2 * C534;
    const double C552 = C533 * C122;
    const double C593 = C566 * be;
    const double C592 = C573 - C574;
    const double C591 = C572 / C73;
    const double C590 = C571 / C73;
    const double C589 = C554 * C122;
    const double C588 = C570 / C73;
    const double C587 = C568 / C73;
    const double C586 = C567 / C73;
    const double C585 = C132 * C566;
    const double C584 = C564 / C73;
    const double C583 = -C563;
    const double C582 = -C561;
    const double C581 = C559 / C94;
    const double C580 = C523 * C558;
    const double C579 = C231 - C557;
    const double C578 = C554 * C131;
    const double C577 = C556 / C73;
    const double C576 = C376 - C553;
    const double C575 = C552 / C73;
    const double C608 = C593 / C73;
    const double C607 = C592 * be;
    const double C606 = C579 * C131;
    const double C605 = C60 * C576;
    const double C604 = C589 / C73;
    const double C603 = C569 + C588;
    const double C602 = C585 - C236;
    const double C601 = 0 - C584;
    const double C600 = C583 / C94;
    const double C599 = C582 / C94;
    const double C598 = C581 - C560;
    const double C597 = C71 * C579;
    const double C596 = C578 / C73;
    const double C595 = C555 + C577;
    const double C594 = C576 * C122;
    const double C617 = C606 / C73;
    const double C616 = C604 + C605;
    const double C615 = C602 + C586;
    const double C614 = C598 / C94;
    const double C613 = C601 * be;
    const double C612 = C599 - C562;
    const double C611 = C92 * C598;
    const double C610 = C596 + C597;
    const double C609 = C594 / C73;
    const double C624 = C614 - C565;
    const double C623 = C524 * C615;
    const double C622 = C565 - C614;
    const double C621 = C92 * C612;
    const double C620 = C613 / C73;
    const double C619 = C612 / C94;
    const double C618 = C611 + C526;
    const double C629 = C622 * C615;
    const double C628 = C622 * C554;
    const double C627 = C621 + C530;
    const double C626 = C600 - C620;
    const double C625 = C618 * be;
    const double C632 = C627 * be;
    const double C631 = C626 / C94;
    const double C630 = C625 / C73;
    const double C635 = C619 - C630;
    const double C634 = C632 / C73;
    const double C633 = C630 - C619;
    const double C638 = C633 * C558;
    const double C637 = C631 - C634;
    const double C636 = C633 * C532;
    const double C639 = C637 + C598;
    const double C641 = C639 * C204;
    const double C640 = C639 * C76;
    const double C642 = C543 + C640;
    const double C643 = C636 + C642;
    const double C644 = C580 - C643;
    const double C645 = C644 + C628;
    const double C646 = C645 + C623;
    const double C681 = C63 * C375;
    const double C680 = C66 * C281;
    const double C679 = C63 * C193;
    const double C678 = C130 * C274;
    const double C677 = C130 * C267;
    const double C676 = C371 * C263;
    const double C675 = C367 * C403;
    const double C674 = C371 * C199;
    const double C673 = C405 - C429;
    const double C672 = C407 - C450;
    const double C671 = C130 * C283;
    const double C670 = C130 * C143;
    const double C669 = C100 - C192;
    const double C668 = C255 - C121;
    const double C701 = C678 * C133;
    const double C700 = C672 * C263;
    const double C699 = C673 * C403;
    const double C698 = C672 * C199;
    const double C697 = C66 * C671;
    const double C696 = C668 * C374;
    const double C695 = C669 * C670;
    const double C694 = C669 * C140;
    const double C693 = C668 * C76;
    const double C692 = C670 * C133;
    const double C691 = C70 * C678;
    const double C690 = C198 - C677;
    const double C689 = C672 * C140;
    const double C688 = C673 * C670;
    const double C687 = C673 * C374;
    const double C686 = C672 * C76;
    const double C685 = C669 * C671;
    const double C684 = C668 * C375;
    const double C683 = C669 * C281;
    const double C682 = C668 * C193;
    const double C708 = C673 * C690;
    const double C707 = C681 + C696;
    const double C706 = C693 - C679;
    const double C705 = C692 / C73;
    const double C704 = C367 * C690;
    const double C703 = C676 + C689;
    const double C702 = C686 - C674;
    const double C713 = C695 - C707;
    const double C712 = C706 - C694;
    const double C711 = C691 - C705;
    const double C710 = C688 - C703;
    const double C709 = C702 - C687;
    const double C717 = C713 + C697;
    const double C716 = C712 + C680;
    const double C715 = C710 + C704;
    const double C714 = C709 + C675;
    const double C750 = C668 * C532;
    const double C749 = C63 * C533;
    const double C748 = C132 * C274;
    const double C747 = C530 * C270;
    const double C746 = C526 * C558;
    const double C745 = C530 * C204;
    const double C744 = C560 - C581;
    const double C743 = C562 - C599;
    const double C742 = C132 * C267;
    const double C741 = C132 * C283;
    const double C740 = C132 * C143;
    const double C739 = C668 * C533;
    const double C765 = C743 * C270;
    const double C764 = C744 * C558;
    const double C763 = C743 * C204;
    const double C762 = C742 * C131;
    const double C761 = C66 * C741;
    const double C760 = C749 + C750;
    const double C759 = C669 * C740;
    const double C758 = C198 - C748;
    const double C757 = C743 * C140;
    const double C756 = C744 * C740;
    const double C755 = C744 * C532;
    const double C754 = C743 * C76;
    const double C753 = C740 * C131;
    const double C752 = C71 * C742;
    const double C751 = C669 * C741;
    const double C771 = C744 * C758;
    const double C770 = C759 - C760;
    const double C769 = C526 * C758;
    const double C768 = C747 + C757;
    const double C767 = C754 - C745;
    const double C766 = C753 / C73;
    const double C775 = C770 + C761;
    const double C774 = C756 - C768;
    const double C773 = C767 - C755;
    const double C772 = C752 - C766;
    const double C777 = C774 + C769;
    const double C776 = C773 + C746;
    const double C808 = C743 * C392;
    const double C807 = C672 * C536;
    const double C806 = C132 * C398;
    const double C805 = C743 * C374;
    const double C804 = C530 * C392;
    const double C803 = C132 * C411;
    const double C802 = C672 * C532;
    const double C801 = C371 * C536;
    const double C800 = C132 * C388;
    const double C799 = C132 * C390;
    const double C818 = C673 * C803;
    const double C817 = C800 * C122;
    const double C816 = C60 * C799;
    const double C815 = C434 - C806;
    const double C814 = C804 + C805;
    const double C813 = C744 * C800;
    const double C812 = C367 * C803;
    const double C811 = C801 + C802;
    const double C810 = C673 * C800;
    const double C809 = C799 * C122;
    const double C823 = C744 * C815;
    const double C822 = C817 / C73;
    const double C821 = C526 * C815;
    const double C820 = C813 - C814;
    const double C819 = C810 - C811;
    const double C826 = C816 - C822;
    const double C825 = C820 + C821;
    const double C824 = C819 + C812;
    const double C1002 = C532 * C253;
    const double C1001 = C76 * C607;
    const double C1000 = C744 * C536;
    const double C999 = C743 * C199;
    const double C998 = C744 * C533;
    const double C997 = C743 * C193;
    const double C996 = C673 * C392;
    const double C995 = C672 * C204;
    const double C994 = C669 * C270;
    const double C993 = C668 * C204;
    const double C992 = C374 * C247;
    const double C991 = C76 * C460;
    const double C990 = C669 * C263;
    const double C989 = C668 * C199;
    const double C988 = C673 * C375;
    const double C987 = C672 * C193;
    const double C986 = C140 * C220;
    const double C985 = C76 * C315;
    const double C984 = C132 * C277;
    const double C983 = 4 * C238;
    const double C982 = C132 * C251;
    const double C981 = C558 * C131;
    const double C980 = C132 * C250;
    const double C979 = C558 * C122;
    const double C978 = C132 * C249;
    const double C977 = C132 * C276;
    const double C976 = C532 * C247;
    const double C975 = C536 * C122;
    const double C974 = C132 * C245;
    const double C973 = C132 * C237;
    const double C972 = C533 * C131;
    const double C971 = C132 * C228;
    const double C970 = C132 * C259;
    const double C969 = C532 * C220;
    const double C968 = C130 * C277;
    const double C967 = C374 * C253;
    const double C966 = C251 / C93;
    const double C965 = C130 * C251;
    const double C964 = C392 * C122;
    const double C963 = C130 * C250;
    const double C962 = C176 * C122;
    const double C961 = C249 / C93;
    const double C960 = C130 * C249;
    const double C959 = C403 * C133;
    const double C958 = C130 * C276;
    const double C957 = 4 * C229;
    const double C956 = C130 * C245;
    const double C955 = C403 * C122;
    const double C954 = C170 * C122;
    const double C953 = C375 * C133;
    const double C952 = C130 * C237;
    const double C951 = C130 * C228;
    const double C950 = C130 * C259;
    const double C949 = C374 * C220;
    const double C948 = C399 / C73;
    const double C947 = C76 * C220;
    const double C946 = -C399;
    const double C945 = C158 * C86;
    const double C944 = C126 * C277;
    const double C943 = C140 * C253;
    const double C942 = C158 * C82;
    const double C941 = C252 / C73;
    const double C940 = C76 * C253;
    const double C939 = -C252;
    const double C938 = C86 * C187;
    const double C937 = C270 * C131;
    const double C936 = C126 * C251;
    const double C935 = C176 * C131;
    const double C934 = C82 * C187;
    const double C933 = C86 * C186;
    const double C932 = C250 / C93;
    const double C931 = C126 * C250;
    const double C930 = C82 * C186;
    const double C929 = C86 * C185;
    const double C928 = C263 * C133;
    const double C927 = C126 * C249;
    const double C926 = C170 * C133;
    const double C925 = C82 * C185;
    const double C924 = C153 * C86;
    const double C923 = C126 * C276;
    const double C922 = C140 * C247;
    const double C921 = C153 * C82;
    const double C920 = C246 / C73;
    const double C919 = C76 * C247;
    const double C918 = -C246;
    const double C917 = C86 * C182;
    const double C916 = C245 / C93;
    const double C915 = C126 * C245;
    const double C914 = C82 * C182;
    const double C913 = C86 * C178;
    const double C912 = C237 / C93;
    const double C911 = C126 * C237;
    const double C910 = C281 * C133;
    const double C909 = C162 * C133;
    const double C908 = C82 * C178;
    const double C907 = C86 * C172;
    const double C906 = C228 / C93;
    const double C905 = C126 * C228;
    const double C904 = C281 * C131;
    const double C903 = C162 * C131;
    const double C902 = C82 * C172;
    const double C901 = C139 * C86;
    const double C900 = 4 * C93;
    const double C899 = C126 * C259;
    const double C898 = 4 * C389;
    const double C897 = C139 * C82;
    const double C1087 = C1002 / C109;
    const double C1086 = C1001 / C73;
    const double C1085 = C992 / C109;
    const double C1084 = C991 / C73;
    const double C1083 = C986 / C109;
    const double C1082 = C985 / C73;
    const double C1081 = C984 / C93;
    const double C1080 = C983 / C73;
    const double C1079 = C982 / C93;
    const double C1078 = C981 / C73;
    const double C1077 = C980 / C93;
    const double C1076 = C979 / C73;
    const double C1075 = C978 / C93;
    const double C1074 = C71 * C977;
    const double C1073 = C976 / C73;
    const double C1072 = C975 / C73;
    const double C1071 = C60 * C974;
    const double C1070 = C973 / C93;
    const double C1069 = C972 / C73;
    const double C1068 = C71 * C971;
    const double C1067 = C60 * C970;
    const double C1066 = C969 / C73;
    const double C1065 = C70 * C968;
    const double C1064 = C967 / C73;
    const double C1063 = C965 / C93;
    const double C1062 = C964 / C73;
    const double C1061 = C60 * C963;
    const double C1060 = 2 * C962;
    const double C1059 = C960 / C93;
    const double C1058 = C959 / C73;
    const double C1057 = C958 / C93;
    const double C1056 = C957 / C73;
    const double C1055 = C956 / C93;
    const double C1054 = C955 / C73;
    const double C1053 = 2 * C954;
    const double C1052 = C953 / C73;
    const double C1051 = C70 * C952;
    const double C1050 = C951 / C93;
    const double C1049 = C60 * C950;
    const double C1048 = C949 / C73;
    const double C1047 = C947 / C73;
    const double C1046 = C946 / C73;
    const double C1045 = C945 * C116;
    const double C1044 = C70 * C944;
    const double C1043 = C943 / C73;
    const double C1042 = C942 * C113;
    const double C1041 = C940 / C73;
    const double C1040 = C939 / C73;
    const double C1039 = C116 * C938;
    const double C1038 = C937 / C73;
    const double C1037 = C71 * C936;
    const double C1036 = 2 * C935;
    const double C1035 = C113 * C934;
    const double C1034 = C116 * C933;
    const double C1033 = C931 / C93;
    const double C1032 = C113 * C930;
    const double C1031 = C116 * C929;
    const double C1030 = C928 / C73;
    const double C1029 = C70 * C927;
    const double C1028 = 2 * C926;
    const double C1027 = C113 * C925;
    const double C1026 = C924 * C116;
    const double C1025 = C71 * C923;
    const double C1024 = C922 / C73;
    const double C1023 = C921 * C113;
    const double C1022 = C919 / C73;
    const double C1021 = C918 / C73;
    const double C1020 = C116 * C917;
    const double C1019 = C915 / C93;
    const double C1018 = C113 * C914;
    const double C1017 = C116 * C913;
    const double C1016 = C911 / C93;
    const double C1015 = C910 / C73;
    const double C1014 = 2 * C909;
    const double C1013 = C113 * C908;
    const double C1012 = C116 * C907;
    const double C1011 = C905 / C93;
    const double C1010 = C904 / C73;
    const double C1009 = 2 * C903;
    const double C1008 = C113 * C902;
    const double C1007 = C901 * C116;
    const double C1006 = C73 * C900;
    const double C1005 = C899 / C93;
    const double C1004 = C898 / C73;
    const double C1003 = C897 * C113;
    const double C1159 = C763 + C1086;
    const double C1158 = C530 * C1027;
    const double C1157 = C530 * C1013;
    const double C1156 = C126 * C1039;
    const double C1155 = C371 * C1035;
    const double C1154 = C63 * C1032;
    const double C1153 = C126 * C1031;
    const double C1152 = C698 + C1084;
    const double C1151 = C63 * C1018;
    const double C1150 = C371 * C1008;
    const double C1149 = C682 + C1082;
    const double C1148 = C1080 + C1081;
    const double C1147 = C1079 - C285;
    const double C1146 = C1077 - C435;
    const double C1145 = C132 * C1031;
    const double C1144 = C1075 - C285;
    const double C1143 = C1074 / C93;
    const double C1142 = C1073 - C590;
    const double C1141 = C1071 / C93;
    const double C1140 = C1070 - C435;
    const double C1139 = C1068 / C93;
    const double C1138 = C1067 / C93;
    const double C1137 = C1066 - C575;
    const double C1136 = C1065 / C93;
    const double C1135 = C1064 - C447;
    const double C1134 = C130 * C1039;
    const double C1133 = C1063 - C291;
    const double C1132 = C1061 / C93;
    const double C1131 = C1060 / C73;
    const double C1130 = C60 * C1032;
    const double C1129 = C1059 - C291;
    const double C1128 = C1056 + C1057;
    const double C1127 = C1055 - C435;
    const double C1126 = C1053 / C73;
    const double C1125 = C60 * C1018;
    const double C1124 = C1051 / C93;
    const double C1123 = C130 * C1012;
    const double C1122 = C1050 - C435;
    const double C1121 = C1049 / C93;
    const double C1120 = C1048 - C426;
    const double C1119 = C1046 - C1047;
    const double C1118 = C144 + C1045;
    const double C1117 = C1044 / C93;
    const double C1116 = C1043 - C313;
    const double C1115 = C1042 - C114;
    const double C1114 = C1040 - C1041;
    const double C1113 = C1037 / C93;
    const double C1112 = C1036 / C73;
    const double C1111 = C71 * C1035;
    const double C1110 = C126 * C1034;
    const double C1109 = C1033 - C291;
    const double C1108 = C1029 / C93;
    const double C1107 = C1028 / C73;
    const double C1106 = C70 * C1027;
    const double C1105 = C144 + C1026;
    const double C1104 = C1025 / C93;
    const double C1103 = C1024 - C311;
    const double C1102 = C1023 - C114;
    const double C1101 = C1021 - C1022;
    const double C1100 = C126 * C1020;
    const double C1099 = C1019 - C285;
    const double C1098 = C126 * C1017;
    const double C1097 = C1016 - C291;
    const double C1096 = C1014 / C73;
    const double C1095 = C70 * C1013;
    const double C1094 = C126 * C1012;
    const double C1093 = C1011 - C285;
    const double C1092 = C1009 / C73;
    const double C1091 = C71 * C1008;
    const double C1090 = C144 + C1007;
    const double C1089 = C1004 + C1005;
    const double C1088 = C1003 - C114;
    const double C1217 = C526 * C1148;
    const double C1216 = C763 + C1159;
    const double C1215 = C526 * C1144;
    const double C1214 = C1158 / C93;
    const double C1213 = C526 * C1140;
    const double C1212 = C1157 / C93;
    const double C1211 = C367 * C1133;
    const double C1210 = C1155 / C93;
    const double C1209 = C66 * C1109;
    const double C1208 = C1154 / C93;
    const double C1207 = C367 * C1128;
    const double C1206 = C698 + C1152;
    const double C1205 = C66 * C1099;
    const double C1204 = C1151 / C93;
    const double C1203 = C367 * C1122;
    const double C1202 = C1150 / C93;
    const double C1201 = C66 * C1089;
    const double C1200 = C682 + C1149;
    const double C1199 = C71 * C1147;
    const double C1198 = C60 * C1146;
    const double C1197 = C1145 / C93;
    const double C1196 = C1142 - C590;
    const double C1195 = C1141 - C1072;
    const double C1194 = C1139 - C1069;
    const double C1193 = C1137 - C575;
    const double C1192 = C1135 - C447;
    const double C1191 = C1134 / C93;
    const double C1190 = C1132 - C1062;
    const double C1189 = C1130 / C93;
    const double C1188 = C70 * C1129;
    const double C1187 = C60 * C1127;
    const double C1186 = C1125 / C93;
    const double C1185 = C1124 - C1052;
    const double C1184 = C1123 / C93;
    const double C1183 = C1120 - C426;
    const double C1182 = C1119 - C948;
    const double C1181 = C1118 * C83;
    const double C1180 = C1116 - C313;
    const double C1179 = C1115 * C83;
    const double C1178 = C1114 - C941;
    const double C1177 = C1113 - C1038;
    const double C1176 = C1111 / C93;
    const double C1175 = C1110 / C93;
    const double C1174 = C1108 - C1030;
    const double C1173 = C1106 / C93;
    const double C1172 = C1105 * C83;
    const double C1171 = C1103 - C311;
    const double C1170 = C1102 * C83;
    const double C1169 = C1101 - C920;
    const double C1168 = C1100 / C93;
    const double C1167 = C1098 / C93;
    const double C1166 = C70 * C1097;
    const double C1165 = C1095 / C93;
    const double C1164 = C1094 / C93;
    const double C1163 = C71 * C1093;
    const double C1162 = C1091 / C93;
    const double C1161 = C1090 * C83;
    const double C1160 = C1088 * C83;
    const double C1257 = C530 * C1179;
    const double C1256 = C1214 - C999;
    const double C1255 = C1212 - C997;
    const double C1254 = C126 * C1181;
    const double C1253 = C1210 - C995;
    const double C1252 = C1208 - C993;
    const double C1251 = C126 * C1172;
    const double C1250 = C371 * C1170;
    const double C1249 = C1204 - C989;
    const double C1248 = C1202 - C987;
    const double C1247 = C130 * C1161;
    const double C1246 = C63 * C1160;
    const double C1245 = C1078 + C1199;
    const double C1244 = C1076 + C1198;
    const double C1243 = C1197 - C289;
    const double C1242 = C1196 + C1143;
    const double C1241 = C1193 + C1138;
    const double C1240 = C1192 + C1136;
    const double C1239 = C1191 - C294;
    const double C1238 = C1189 - C1131;
    const double C1237 = C1058 + C1188;
    const double C1236 = C1054 + C1187;
    const double C1235 = C1186 - C1126;
    const double C1234 = C1184 - C437;
    const double C1233 = C1183 + C1121;
    const double C1232 = C60 * C1160;
    const double C1231 = C1180 + C1117;
    const double C1230 = C70 * C1179;
    const double C1229 = C1176 - C1112;
    const double C1228 = C1175 - C294;
    const double C1227 = C1173 - C1107;
    const double C1226 = C1171 + C1104;
    const double C1225 = C71 * C1170;
    const double C1224 = C1168 - C289;
    const double C1223 = C1167 - C294;
    const double C1222 = C1015 + C1166;
    const double C1221 = C1165 - C1096;
    const double C1220 = C1164 - C289;
    const double C1219 = C1010 + C1163;
    const double C1218 = C1162 - C1092;
    const double C1269 = C1257 / C93;
    const double C1268 = C1256 - C1000;
    const double C1267 = C1255 - C998;
    const double C1266 = C1253 - C996;
    const double C1265 = C1252 - C994;
    const double C1264 = C1250 / C93;
    const double C1263 = C1249 - C990;
    const double C1262 = C1248 - C988;
    const double C1261 = C1246 / C93;
    const double C1260 = C1232 / C93;
    const double C1259 = C1230 / C93;
    const double C1258 = C1225 / C93;
    const double C1281 = C1269 - C1216;
    const double C1280 = C1268 + C1215;
    const double C1279 = C1267 + C1213;
    const double C1278 = C1266 + C1211;
    const double C1277 = C1265 + C1209;
    const double C1276 = C1264 - C1206;
    const double C1275 = C1263 + C1205;
    const double C1274 = C1262 + C1203;
    const double C1273 = C1261 - C1200;
    const double C1272 = C1182 + C1260;
    const double C1271 = C1178 + C1259;
    const double C1270 = C1169 + C1258;
    const double C1284 = C1281 + C1087;
    const double C1283 = C1276 + C1085;
    const double C1282 = C1273 + C1083;
    const double C1287 = C1284 + C764;
    const double C1286 = C1283 + C699;
    const double C1285 = C1282 + C683;
    const double C1290 = C1287 + C764;
    const double C1289 = C1286 + C699;
    const double C1288 = C1285 + C683;
    const double C1293 = C1290 + C1217;
    const double C1292 = C1289 + C1207;
    const double C1291 = C1288 + C1201;
    const double d2nexx200000 =
        (2 * Pi *
         (((-(be * -2 * C72) / C93) / C94 -
           ((2 * C278 - (C74 * C315) / C73) * be) / C73 - C220 / C109) *
              C76 +
          C335 + C335 + (C65 * C1160) / C93 -
          ((-C315 / C73) / C94 - ((2 * C222 - C256 / C109) * be) / C73) * C140 +
          C329 + C329 + C67 * C1089 - (C196 * C220) / C1006 + C330 + C330 +
          C69 * (C259 / C93 + C319 + C319 +
                 C126 * ((-4 * C391) / C73 + (C126 * C1161) / C93))) *
         C70 * C71) /
        C73;
    const double d2nexx020000 = (2 * Pi *
                                 (C1272 * C70 * C363 + C1233 * C70 * C364 +
                                  (C463 - (C402 * C220) / C73 + C463 +
                                   (C60 * (C259 + C1161 * C153)) / C93) *
                                      C70 * C365)) /
                                C73;
    const double d2nexx002000 = (2 * Pi *
                                 (C1272 * C522 + C1241 * C523 +
                                  (C609 - (C554 * C220) / C73 + C609 +
                                   (C60 * (C259 + C1161 * C158)) / C93) *
                                      C524) *
                                 C71) /
                                C73;
    const double d2nexx110000 =
        (2 * Pi *
         (C1291 * C70 * C371 +
          ((C374 * C315) / C73 - C684 - C684 + (C63 * C950) / C93 -
           (C670 * C220) / C109 + C685 + C685 +
           C66 * ((-2 * C414) / C73 + (C126 * C1247) / C93)) *
              C70 * C367)) /
        C73;
    const double d2nexx101000 =
        (2 * Pi *
         (C1291 * C530 +
          ((C532 * C315) / C73 - C739 - C739 + (C63 * C970) / C93 -
           (C740 * C220) / C109 + C751 + C751 +
           C66 * ((-2 * C568) / C73 + (C126 * C132 * C1161) / C93)) *
              C526) *
         C71) /
        C73;
    const double d2nexx011000 =
        (2 * Pi *
         ((C1272 * C530 + C1241 * C526) * C371 +
          (C1233 * C530 + ((-C809) / C73 - (C800 * C220) / C73 - C809 / C73 +
                           (C60 * C132 * C1247) / C93) *
                              C526) *
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
         (C262 * C334 + C1218 * C65 + C303 * C327 + C1219 * C67 - C320 * C287 +
          ((C326 * C131) / C73 + C71 * (C906 - C305 + C126 * C1220)) * C69) *
         C70) /
        C73;
    const double d2nexy020000 =
        (2 * Pi *
         ((C500 * C122) / C73 +
          (C493 * C193 + (C363 * C1008) / C93 - C487 * C375 + C364 * C1122 +
           C476 * C427 + C365 * (C906 - C436 + C130 * C1234)) *
              C60) *
         C70) /
        C73;
    const double d2nexy002000 =
        (2 * Pi *
         ((C1218 * C60 - (C262 * C122) / C73) * C522 +
          (C1194 * C60 - (C595 * C122) / C73) * C523 +
          ((C610 * C122) / C73 +
           ((C576 * C131) / C73 + (C71 * (C228 + C1012 * C158)) / C93) * C60) *
              C524)) /
        C73;
    const double d2nexy110000 = (2 * Pi *
                                 (C1274 * C63 - C714 * C278 - C715 * C222 +
                                  (C672 * C281 + C371 * C1093 + C673 * C671 +
                                   C367 * (C319 + C130 * C1220)) *
                                      C66) *
                                 C70) /
                                C73;
    const double d2nexy101000 =
        (2 * Pi *
         ((C262 * C278 + C1218 * C63 + C303 * C222 + C1219 * C66) * C530 +
          (C595 * C278 + C1194 * C63 + C772 * C222 +
           ((C741 * C131) / C73 + C71 * C132 * C1220) * C66) *
              C526)) /
        C73;
    const double d2nexy011000 =
        (2 * Pi *
         (((C714 * C122) / C73 + C1274 * C60) * C530 +
          ((C824 * C122) / C73 + ((C371 * C971) / C93 - C672 * C533 -
                                  C673 * C799 + C367 * C132 * C1234) *
                                     C60) *
              C526)) /
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
         (C269 * C334 + C1221 * C65 + C306 * C327 + C1222 * C67 - C321 * C287 +
          ((C326 * C133) / C73 + C70 * (C912 - C308 + C126 * C1223)) * C69) *
         C71) /
        C73;
    const double d2nexz020000 =
        (2 * Pi *
         ((C1221 * C60 - (C269 * C122) / C73) * C363 +
          (C1185 * C60 - (C454 * C122) / C73) * C364 +
          ((C469 * C122) / C73 +
           ((C427 * C133) / C73 + (C70 * (C237 + C1017 * C153)) / C93) * C60) *
              C365)) /
        C73;
    const double d2nexz002000 =
        (2 * Pi *
         ((C646 * C122) / C73 +
          (C639 * C193 + (C522 * C1013) / C93 - C633 * C533 + C523 * C1140 +
           C622 * C576 +
           C524 * (C912 - C587 + C132 * ((C132 * C1017) / C93 - C437))) *
              C60) *
         C71) /
        C73;
    const double d2nexz110000 =
        (2 * Pi *
         ((C269 * C278 + C1221 * C63 + C306 * C222 + C1222 * C66) * C371 +
          (C454 * C278 + C1185 * C63 + C711 * C222 +
           ((C671 * C133) / C73 + C70 * C130 * C1223) * C66) *
              C367)) /
        C73;
    const double d2nexz101000 = (2 * Pi *
                                 (C1279 * C63 - C776 * C278 - C777 * C222 +
                                  (C743 * C281 + C530 * C1097 + C744 * C741 +
                                   C526 * (C319 + C132 * C1223)) *
                                      C66) *
                                 C71) /
                                C73;
    const double d2nexz011000 =
        (2 * Pi *
         (((C776 * C122) / C73 + C1279 * C60) * C371 +
          ((C825 * C122) / C73 +
           ((C530 * C952) / C93 - C743 * C375 - C744 * C799 +
            C526 * ((C132 * C130 * C1017) / C93 - C436)) *
               C60) *
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
         ((C341 * C131) / C73 +
          (C334 * C199 + (C65 * C1018) / C93 - C325 * C263 + C67 * C1099 +
           C282 * C286 + C69 * (C916 - C305 + C126 * C1224)) *
              C71) *
         C70) /
        C73;
    const double d2neyx020000 =
        (2 * Pi *
         (C441 * C493 + C1235 * C363 + C457 * C489 + C1236 * C364 -
          C470 * C478 +
          ((C468 * C122) / C73 +
           C60 * (C916 - C436 + C130 * ((C130 * C1020) / C93 - C437))) *
              C365) *
         C70) /
        C73;
    const double d2neyx002000 =
        (2 * Pi *
         ((C1235 * C71 - (C441 * C131) / C73) * C522 +
          (C1195 * C71 - (C603 * C131) / C73) * C523 +
          ((C616 * C131) / C73 +
           ((C579 * C122) / C73 + (C60 * (C245 + C1020 * C158)) / C93) * C71) *
              C524)) /
        C73;
    const double d2neyx110000 = (2 * Pi *
                                 (C1275 * C371 - C716 * C465 - C717 * C449 +
                                  (C668 * C403 + C63 * C1127 + C669 * C690 +
                                   C66 * (C319 + C130 * C1224)) *
                                      C367) *
                                 C70) /
                                C73;
    const double d2neyx101000 =
        (2 * Pi *
         (((C716 * C131) / C73 + C1275 * C71) * C530 +
          ((C775 * C131) / C73 + ((C63 * C974) / C93 - C668 * C536 -
                                  C669 * C742 + C66 * C132 * C1224) *
                                     C71) *
              C526)) /
        C73;
    const double d2neyx011000 =
        (2 * Pi *
         ((C441 * C465 + C1235 * C371 + C457 * C449 + C1236 * C367) * C530 +
          (C603 * C465 + C1195 * C371 + C826 * C449 +
           ((C803 * C122) / C73 + C60 * ((C130 * C132 * C1020) / C93 - C587)) *
               C367) *
              C526)) /
        C73;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx110000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx011000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyx200000 - 0.5 * d2neyx020000 + d2neyx002000;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx101000;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyx200000 - std::sqrt(0.75) * d2neyx020000;
    const double d2neyy200000 = (2 * Pi *
                                 (C1270 * C65 + C1226 * C67 +
                                  (C322 - (C196 * C247) / C73 + C322 +
                                   (C71 * (C276 + C1172 * C139)) / C93) *
                                      C69) *
                                 C70) /
                                C73;
    const double d2neyy020000 =
        (2 * Pi *
         (((-(be * -2 * C382) / C93) / C94 -
           ((2 * C465 - (C89 * C460) / C73) * be) / C73 - C247 / C109) *
              C76 +
          C495 + C495 + (C363 * C1170) / C93 -
          ((-C460 / C73) / C94 - ((2 * C449 - C397 / C109) * be) / C73) * C374 +
          C492 + C492 + C364 * C1128 - (C402 * C247) / C1006 + C483 + C483 +
          C365 * (C276 / C93 + C461 + C461 +
                  C130 * ((-4 * C234) / C73 + (C130 * C1172) / C93))) *
         C60 * C70) /
        C73;
    const double d2neyy002000 = (2 * Pi *
                                 (C1270 * C60 * C522 + C1242 * C60 * C523 +
                                  (C617 - (C554 * C247) / C73 + C617 +
                                   (C71 * (C276 + C1172 * C158)) / C93) *
                                      C60 * C524)) /
                                C73;
    const double d2neyy110000 =
        (2 * Pi *
         (C1292 * C63 +
          ((C140 * C460) / C73 - C700 - C700 + (C371 * C923) / C93 -
           (C670 * C247) / C109 + C708 + C708 +
           C367 * ((-2 * C288) / C73 + (C130 * C1251) / C93)) *
              C66) *
         C70) /
        C73;
    const double d2neyy101000 =
        (2 * Pi *
         ((C1270 * C63 + C1226 * C66) * C530 +
          (C1242 * C63 + ((-C762) / C73 - (C740 * C247) / C73 - C762 / C73 +
                          (C71 * C132 * C1251) / C93) *
                             C66) *
              C526)) /
        C73;
    const double d2neyy011000 =
        (2 * Pi *
         (C1292 * C60 * C530 +
          ((C532 * C460) / C73 - C807 - C807 + (C371 * C977) / C93 -
           (C800 * C247) / C109 + C818 + C818 +
           C367 * ((-2 * C572) / C73 + (C130 * C132 * C1172) / C93)) *
              C60 * C526)) /
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
         ((C1227 * C71 - (C269 * C131) / C73) * C65 +
          (C1174 * C71 - (C306 * C131) / C73) * C67 +
          ((C321 * C131) / C73 +
           ((C286 * C133) / C73 + (C70 * (C249 + C1031 * C139)) / C93) * C71) *
              C69)) /
        C73;
    const double d2neyz020000 =
        (2 * Pi *
         (C269 * C493 + C1227 * C363 + C454 * C489 + C1237 * C364 -
          C469 * C478 +
          ((C468 * C133) / C73 +
           C70 * (C961 - C446 + C130 * ((C130 * C1031) / C93 - C294))) *
              C365) *
         C60) /
        C73;
    const double d2neyz002000 =
        (2 * Pi *
         ((C646 * C131) / C73 +
          (C639 * C199 + (C522 * C1027) / C93 - C633 * C536 + C523 * C1144 +
           C622 * C579 + C524 * (C961 - C591 + C132 * C1243)) *
              C71) *
         C60) /
        C73;
    const double d2neyz110000 =
        (2 * Pi *
         ((C269 * C465 + C1227 * C371 + C454 * C449 + C1237 * C367) * C63 +
          (C306 * C465 + C1174 * C371 + C711 * C449 +
           ((C690 * C133) / C73 + C70 * ((C130 * C1153) / C93 - C308)) * C367) *
              C66)) /
        C73;
    const double d2neyz101000 =
        (2 * Pi *
         (((C776 * C131) / C73 + C1280 * C71) * C63 +
          ((C777 * C131) / C73 +
           ((C530 * C927) / C93 - C743 * C263 - C744 * C742 +
            C526 * ((C132 * C1153) / C93 - C305)) *
               C71) *
              C66)) /
        C73;
    const double d2neyz011000 = (2 * Pi *
                                 (C1280 * C371 - C776 * C465 - C825 * C449 +
                                  (C743 * C403 + C530 * C1129 + C744 * C803 +
                                   C526 * (C608 + C130 * C1243)) *
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
         ((C341 * C133) / C73 +
          (C334 * C204 + (C65 * C1032) / C93 - C325 * C270 + C67 * C1109 +
           C282 * C292 + C69 * (C932 - C308 + C126 * C1228)) *
              C70) *
         C71) /
        C73;
    const double d2nezx020000 =
        (2 * Pi *
         ((C1238 * C70 - (C441 * C133) / C73) * C363 +
          (C1190 * C70 - (C457 * C133) / C73) * C364 +
          ((C470 * C133) / C73 +
           ((C440 * C122) / C73 + (C60 * (C250 + C1034 * C153)) / C93) * C70) *
              C365)) /
        C73;
    const double d2nezx002000 =
        (2 * Pi *
         (C441 * C639 + C1238 * C522 + C603 * C635 + C1244 * C523 -
          C616 * C624 +
          ((C615 * C122) / C73 +
           C60 * (C932 - C587 + C132 * ((C132 * C1034) / C93 - C437))) *
              C524) *
         C71) /
        C73;
    const double d2nezx110000 =
        (2 * Pi *
         (((C716 * C133) / C73 + C1277 * C70) * C371 +
          ((C717 * C133) / C73 + ((C63 * C963) / C93 - C668 * C392 -
                                  C669 * C678 + C66 * C130 * C1228) *
                                     C70) *
              C367)) /
        C73;
    const double d2nezx101000 = (2 * Pi *
                                 (C1277 * C530 - C716 * C612 - C775 * C598 +
                                  (C668 * C558 + C63 * C1146 + C669 * C758 +
                                   C66 * (C319 + C132 * C1228)) *
                                      C526) *
                                 C71) /
                                C73;
    const double d2nezx011000 =
        (2 * Pi *
         ((C441 * C612 + C1238 * C530 + C603 * C598 + C1244 * C526) * C371 +
          (C457 * C612 + C1190 * C530 + C826 * C598 +
           ((C815 * C122) / C73 + C60 * ((C132 * C130 * C1034) / C93 - C436)) *
               C526) *
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
         ((C1229 * C70 - (C262 * C133) / C73) * C65 +
          (C1177 * C70 - (C303 * C133) / C73) * C67 +
          ((C320 * C133) / C73 +
           ((C292 * C131) / C73 + (C71 * (C251 + C1039 * C139)) / C93) * C70) *
              C69)) /
        C73;
    const double d2nezy020000 =
        (2 * Pi *
         ((C500 * C133) / C73 +
          (C493 * C204 + (C363 * C1035) / C93 - C487 * C392 + C364 * C1133 +
           C476 * C440 + C365 * (C966 - C446 + C130 * C1239)) *
              C70) *
         C60) /
        C73;
    const double d2nezy002000 =
        (2 * Pi *
         (C262 * C639 + C1229 * C522 + C595 * C635 + C1245 * C523 -
          C610 * C624 +
          ((C615 * C131) / C73 +
           C71 * (C966 - C591 + C132 * ((C132 * C1039) / C93 - C289))) *
              C524) *
         C60) /
        C73;
    const double d2nezy110000 =
        (2 * Pi *
         (((C714 * C133) / C73 + C1278 * C70) * C63 +
          ((C715 * C133) / C73 +
           ((C371 * C936) / C93 - C672 * C270 - C673 * C678 +
            C367 * ((C130 * C1156) / C93 - C308)) *
               C70) *
              C66)) /
        C73;
    const double d2nezy101000 =
        (2 * Pi *
         ((C262 * C612 + C1229 * C530 + C595 * C598 + C1245 * C526) * C63 +
          (C303 * C612 + C1177 * C530 + C772 * C598 +
           ((C758 * C131) / C73 + C71 * ((C132 * C1156) / C93 - C305)) * C526) *
              C66)) /
        C73;
    const double d2nezy011000 = (2 * Pi *
                                 (C1278 * C530 - C714 * C612 - C824 * C598 +
                                  (C672 * C558 + C371 * C1147 + C673 * C815 +
                                   C367 * (C461 + C132 * C1239)) *
                                      C526) *
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
                                 (C1271 * C71 * C65 + C1231 * C71 * C67 +
                                  (C323 - (C196 * C253) / C73 + C323 +
                                   (C70 * (C277 + C1181 * C139)) / C93) *
                                      C71 * C69)) /
                                C73;
    const double d2nezz020000 = (2 * Pi *
                                 (C1271 * C363 + C1240 * C364 +
                                  (C471 - (C402 * C253) / C73 + C471 +
                                   (C70 * (C277 + C1181 * C153)) / C93) *
                                      C365) *
                                 C60) /
                                C73;
    const double d2nezz002000 =
        (2 * Pi *
         (((-(be * -2 * C541) / C93) / C94 -
           ((2 * C612 - (C92 * C607) / C73) * be) / C73 - C253 / C109) *
              C76 +
          C641 + C641 + (C522 * C1179) / C93 -
          ((-C607 / C73) / C94 - ((2 * C598 - C551 / C109) * be) / C73) * C532 +
          C638 + C638 + C523 * C1148 - (C554 * C253) / C1006 + C629 + C629 +
          C524 * (C277 / C93 + C608 + C608 +
                  C132 * ((-4 * C243) / C73 + (C132 * C1181) / C93))) *
         C71 * C60) /
        C73;
    const double d2nezz110000 =
        (2 * Pi *
         ((C1271 * C371 + C1240 * C367) * C63 +
          (C1231 * C371 + ((-C701) / C73 - (C670 * C253) / C73 - C701 / C73 +
                           (C70 * C130 * C1254) / C93) *
                              C367) *
              C66)) /
        C73;
    const double d2nezz101000 =
        (2 * Pi *
         (C1293 * C71 * C63 +
          ((C140 * C607) / C73 - C765 - C765 + (C530 * C944) / C93 -
           (C740 * C253) / C109 + C771 + C771 +
           C526 * ((-2 * C293) / C73 + (C132 * C1254) / C93)) *
              C71 * C66)) /
        C73;
    const double d2nezz011000 =
        (2 * Pi *
         (C1293 * C371 +
          ((C374 * C607) / C73 - C808 - C808 + (C530 * C968) / C93 -
           (C800 * C253) / C109 + C823 + C823 +
           C526 * ((-2 * C424) / C73 + (C132 * C130 * C1181) / C93)) *
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
