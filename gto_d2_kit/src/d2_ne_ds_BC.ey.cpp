/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ds_BC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_20_23(double ae,
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
    const double C538 = ae + be;
    const double C537 = ae * be;
    const double C536 = xA - xB;
    const double C539 = std::pow(C536, 2);
    const double C540 = C539 * C537;
    const double C541 = C540 / C538;
    const double C542 = -C541;
    const double C543 = std::exp(C542);
    const double C557 = yA - yB;
    const double C558 = std::pow(C557, 2);
    const double C559 = C558 * C537;
    const double C560 = C559 / C538;
    const double C561 = -C560;
    const double C562 = std::exp(C561);
    const double C573 = zA - zB;
    const double C574 = std::pow(C573, 2);
    const double C575 = C574 * C537;
    const double C576 = C575 / C538;
    const double C577 = -C576;
    const double C578 = std::exp(C577);
    const double C593 = C573 * be;
    const double C592 = C557 * be;
    const double C591 = 2 * C538;
    const double C590 = std::pow(C538, 2);
    const double C589 = C536 * be;
    const double C598 = C578 * C593;
    const double C597 = C562 * C592;
    const double C596 = std::pow(C591, -2);
    const double C595 = std::pow(C591, -1);
    const double C594 = C543 * C589;
    const double C59 = (C543 * std::pow(C589, 2)) / C590 + C543 / C591;
    const double C64 = -C594 / C538;
    const double C66 = C595 * C543;
    const double C67 = (-2 * C595 * C594) / C538;
    const double C69 = C596 * C543;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C537) / C538);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C537) / C538);
    const double C266 = (C562 * std::pow(C592, 2)) / C590 + C562 / C591;
    const double C267 = (-2 * C595 * C597) / C538;
    const double C268 = C596 * C562;
    const double C272 = -C597 / C538;
    const double C274 = C595 * C562;
    const double C357 = (C578 * std::pow(C593, 2)) / C590 + C578 / C591;
    const double C358 = (-2 * C595 * C598) / C538;
    const double C359 = C596 * C578;
    const double C363 = -C598 / C538;
    const double C365 = C595 * C578;
    const double C90 = zA - zB;
    const double C89 = yA - yB;
    const double C88 = be * zB;
    const double C87 = ae * zA;
    const double C86 = be * yB;
    const double C85 = ae * yA;
    const double C84 = bs[4];
    const double C83 = 0 * be;
    const double C82 = bs[3];
    const double C81 = 0 * be;
    const double C80 = ae * be;
    const double C79 = 0 * be;
    const double C78 = xA - xB;
    const double C77 = 0 * be;
    const double C76 = bs[1];
    const double C75 = bs[2];
    const double C74 = ae + be;
    const double C73 = be * xB;
    const double C72 = ae * xA;
    const double C102 = C80 * C90;
    const double C101 = C80 * C89;
    const double C100 = C87 + C88;
    const double C99 = C85 + C86;
    const double C98 = C83 / C74;
    const double C97 = C81 / C74;
    const double C96 = C80 * C78;
    const double C95 = C79 / C74;
    const double C94 = C78 * C79;
    const double C93 = C77 / C74;
    const double C92 = 2 * C74;
    const double C91 = C72 + C73;
    const double C115 = C102 * C70;
    const double C114 = C101 * C71;
    const double C113 = C100 / C74;
    const double C112 = C99 / C74;
    const double C111 = std::pow(C92, 4);
    const double C110 = -C92;
    const double C109 = C96 * C543;
    const double C108 = -C95;
    const double C107 = C94 / C74;
    const double C106 = -C93;
    const double C105 = C76 * C92;
    const double C104 = std::pow(C92, 2);
    const double C103 = C91 / C74;
    const double C126 = 2 * C115;
    const double C125 = 2 * C114;
    const double C124 = C113 - zC;
    const double C123 = C112 - yC;
    const double C122 = std::pow(C110, 3);
    const double C121 = C75 * C104;
    const double C120 = 2 * C109;
    const double C119 = C108 / C92;
    const double C118 = 0 - C107;
    const double C117 = C106 / C92;
    const double C116 = C103 - xC;
    const double C146 = std::pow(C124, 2);
    const double C145 = C124 * C123;
    const double C144 = be * C124;
    const double C143 = C124 * C116;
    const double C142 = C123 * C124;
    const double C141 = std::pow(C123, 2);
    const double C140 = be * C123;
    const double C139 = C123 * C116;
    const double C138 = C74 * C124;
    const double C137 = C116 * C124;
    const double C136 = C74 * C123;
    const double C135 = C116 * C123;
    const double C134 = C82 * C122;
    const double C133 = C116 * C121;
    const double C132 = be * C116;
    const double C131 = C74 * C116;
    const double C130 = C120 / C74;
    const double C129 = C78 * C120;
    const double C128 = C118 * be;
    const double C127 = std::pow(C116, 2);
    const double C170 = C146 * C82;
    const double C169 = C145 * be;
    const double C168 = C144 * C82;
    const double C167 = C143 * be;
    const double C166 = C142 * be;
    const double C165 = C141 * C82;
    const double C164 = C140 * C82;
    const double C163 = C139 * be;
    const double C162 = C138 * C82;
    const double C161 = C138 * C75;
    const double C160 = C138 * C76;
    const double C159 = C137 * be;
    const double C158 = C136 * C82;
    const double C157 = C136 * C75;
    const double C156 = C136 * C76;
    const double C155 = C135 * be;
    const double C154 = C132 * C82;
    const double C153 = C131 * C82;
    const double C152 = C127 * C82;
    const double C151 = C131 * C75;
    const double C150 = C131 * C76;
    const double C149 = -C130;
    const double C148 = C129 / C74;
    const double C147 = C128 / C74;
    const double C191 = C170 * C122;
    const double C190 = C82 * C169;
    const double C189 = C168 * C104;
    const double C188 = C82 * C167;
    const double C187 = C82 * C166;
    const double C186 = C165 * C122;
    const double C185 = C164 * C104;
    const double C184 = C82 * C163;
    const double C183 = C162 * C104;
    const double C182 = C82 * C159;
    const double C181 = C161 * C92;
    const double C180 = C158 * C104;
    const double C179 = C82 * C155;
    const double C178 = C157 * C92;
    const double C177 = C154 * C104;
    const double C176 = C153 * C104;
    const double C175 = C152 * C122;
    const double C174 = C151 * C92;
    const double C173 = C149 / C92;
    const double C172 = C543 - C148;
    const double C171 = C117 - C147;
    const double C212 = C121 + C191;
    const double C211 = C122 * C190;
    const double C210 = 2 * C189;
    const double C209 = C122 * C188;
    const double C208 = C122 * C187;
    const double C207 = C121 + C186;
    const double C206 = 2 * C185;
    const double C205 = C122 * C184;
    const double C204 = C183 * C127;
    const double C203 = C122 * C182;
    const double C202 = -2 * C181;
    const double C201 = C180 * C127;
    const double C200 = C122 * C179;
    const double C199 = -2 * C178;
    const double C198 = 2 * C177;
    const double C197 = 2 * C176;
    const double C196 = C121 + C175;
    const double C195 = -2 * C174;
    const double C194 = C173 - C97;
    const double C193 = C172 * be;
    const double C192 = C171 / C92;
    const double C224 = C212 * be;
    const double C223 = C207 * be;
    const double C222 = 2 * C204;
    const double C221 = C116 * C202;
    const double C220 = 2 * C201;
    const double C219 = C116 * C199;
    const double C218 = C116 * C197;
    const double C217 = C194 / C92;
    const double C216 = C196 * be;
    const double C215 = C116 * C195;
    const double C214 = C78 * C194;
    const double C213 = C193 / C74;
    const double C231 = C202 + C222;
    const double C230 = C199 + C220;
    const double C229 = C218 - C121;
    const double C228 = C98 - C217;
    const double C227 = C215 + C105;
    const double C226 = C214 + C66;
    const double C225 = C119 - C213;
    const double C235 = C116 * C229;
    const double C234 = C225 / C92;
    const double C233 = C226 * be;
    const double C232 = C78 * C225;
    const double C238 = C195 + C235;
    const double C237 = C233 / C74;
    const double C236 = C232 + C64;
    const double C241 = C238 - C133;
    const double C240 = C237 - C234;
    const double C239 = C236 * be;
    const double C242 = C239 / C74;
    const double C243 = C192 - C242;
    const double C244 = C243 + C194;
    const double C288 = 0 * be;
    const double C287 = 0 * be;
    const double C286 = C125 / C74;
    const double C285 = C89 * C125;
    const double C284 = 0 * be;
    const double C283 = 0 * be;
    const double C282 = C183 * C141;
    const double C281 = C123 * C202;
    const double C280 = C123 * C121;
    const double C279 = 2 * C180;
    const double C278 = C123 * C199;
    const double C277 = C176 * C141;
    const double C276 = C123 * C195;
    const double C299 = C288 / C74;
    const double C298 = C287 / C74;
    const double C297 = -C286;
    const double C296 = C285 / C74;
    const double C295 = C284 / C74;
    const double C294 = C89 * C284;
    const double C293 = C283 / C74;
    const double C292 = 2 * C282;
    const double C291 = C123 * C279;
    const double C290 = C278 + C105;
    const double C289 = 2 * C277;
    const double C307 = C297 / C92;
    const double C306 = C71 - C296;
    const double C305 = -C295;
    const double C304 = C294 / C74;
    const double C303 = -C293;
    const double C302 = C202 + C292;
    const double C301 = C291 - C121;
    const double C300 = C195 + C289;
    const double C313 = C307 - C298;
    const double C312 = C306 * be;
    const double C311 = C305 / C92;
    const double C310 = 0 - C304;
    const double C309 = C303 / C92;
    const double C308 = C123 * C301;
    const double C318 = C313 / C92;
    const double C317 = C89 * C313;
    const double C316 = C312 / C74;
    const double C315 = C310 * be;
    const double C314 = C199 + C308;
    const double C323 = C299 - C318;
    const double C322 = C317 + C274;
    const double C321 = C311 - C316;
    const double C320 = C315 / C74;
    const double C319 = C314 - C280;
    const double C327 = C321 / C92;
    const double C326 = C322 * be;
    const double C325 = C89 * C321;
    const double C324 = C309 - C320;
    const double C330 = C326 / C74;
    const double C329 = C325 + C272;
    const double C328 = C324 / C92;
    const double C332 = C330 - C327;
    const double C331 = C329 * be;
    const double C333 = C331 / C74;
    const double C334 = C328 - C333;
    const double C335 = C334 + C313;
    const double C379 = 0 * be;
    const double C378 = 0 * be;
    const double C377 = C126 / C74;
    const double C376 = C90 * C126;
    const double C375 = 0 * be;
    const double C374 = 0 * be;
    const double C373 = C124 * C121;
    const double C372 = 2 * C183;
    const double C371 = C124 * C202;
    const double C370 = C180 * C146;
    const double C369 = C124 * C199;
    const double C368 = C176 * C146;
    const double C367 = C124 * C195;
    const double C390 = C379 / C74;
    const double C389 = C378 / C74;
    const double C388 = -C377;
    const double C387 = C376 / C74;
    const double C386 = C375 / C74;
    const double C385 = C90 * C375;
    const double C384 = C374 / C74;
    const double C383 = C124 * C372;
    const double C382 = C371 + C105;
    const double C381 = 2 * C370;
    const double C380 = 2 * C368;
    const double C398 = C388 / C92;
    const double C397 = C70 - C387;
    const double C396 = -C386;
    const double C395 = C385 / C74;
    const double C394 = -C384;
    const double C393 = C383 - C121;
    const double C392 = C199 + C381;
    const double C391 = C195 + C380;
    const double C404 = C398 - C389;
    const double C403 = C397 * be;
    const double C402 = C396 / C92;
    const double C401 = 0 - C395;
    const double C400 = C394 / C92;
    const double C399 = C124 * C393;
    const double C409 = C404 / C92;
    const double C408 = C90 * C404;
    const double C407 = C403 / C74;
    const double C406 = C401 * be;
    const double C405 = C202 + C399;
    const double C414 = C390 - C409;
    const double C413 = C408 + C365;
    const double C412 = C402 - C407;
    const double C411 = C406 / C74;
    const double C410 = C405 - C373;
    const double C418 = C412 / C92;
    const double C417 = C413 * be;
    const double C416 = C90 * C412;
    const double C415 = C400 - C411;
    const double C421 = C417 / C74;
    const double C420 = C416 + C363;
    const double C419 = C415 / C92;
    const double C423 = C421 - C418;
    const double C422 = C420 * be;
    const double C424 = C422 / C74;
    const double C425 = C419 - C424;
    const double C426 = C425 + C404;
    const double C463 = C144 * C75;
    const double C462 = C140 * C75;
    const double C461 = C298 - C307;
    const double C460 = C316 - C311;
    const double C459 = C116 * C372;
    const double C458 = C181 * be;
    const double C457 = 2 * C160;
    const double C456 = C116 * C279;
    const double C455 = C178 * be;
    const double C454 = 2 * C156;
    const double C453 = C123 * C229;
    const double C452 = C132 * C75;
    const double C451 = C174 * be;
    const double C450 = C97 - C173;
    const double C449 = 2 * C150;
    const double C448 = C213 - C119;
    const double C471 = C463 * C92;
    const double C470 = C462 * C92;
    const double C469 = C123 * C459;
    const double C468 = -2 * C458;
    const double C467 = C123 * C456;
    const double C466 = -2 * C455;
    const double C465 = C452 * C92;
    const double C464 = -2 * C451;
    const double C476 = -2 * C471;
    const double C475 = C468 / C74;
    const double C474 = C467 - C133;
    const double C473 = C466 / C74;
    const double C472 = C464 / C74;
    const double C503 = C389 - C398;
    const double C502 = C407 - C402;
    const double C501 = -2 * C470;
    const double C500 = C124 * C459;
    const double C499 = C124 * C456;
    const double C498 = C124 * C229;
    const double C504 = C500 - C133;
    const double C529 = C123 * C372;
    const double C528 = C124 * C301;
    const double C527 = -2 * C465;
    const double C526 = C123 * C197;
    const double C531 = C124 * C529;
    const double C530 = C124 * C526;
    const double C532 = C531 - C280;
    const double C724 = C503 * C382;
    const double C723 = C502 * C457;
    const double C722 = C503 * C369;
    const double C721 = C502 * C454;
    const double C720 = C503 * C367;
    const double C719 = C502 * C449;
    const double C718 = C461 * C281;
    const double C717 = C460 * C457;
    const double C716 = C461 * C290;
    const double C715 = C460 * C454;
    const double C714 = C461 * C276;
    const double C713 = C460 * C449;
    const double C712 = C450 * C221;
    const double C711 = C448 * C457;
    const double C710 = C450 * C219;
    const double C709 = C448 * C454;
    const double C708 = C450 * C227;
    const double C707 = C448 * C449;
    const double C706 = C393 * be;
    const double C705 = C124 * C224;
    const double C704 = 2 * C471;
    const double C703 = C124 * C279;
    const double C702 = C124 * C211;
    const double C701 = C124 * C197;
    const double C700 = C124 * C209;
    const double C699 = C124 * C206;
    const double C698 = C124 * C208;
    const double C697 = C382 * C125;
    const double C696 = C124 * C223;
    const double C695 = C369 * C125;
    const double C694 = C124 * C205;
    const double C693 = C367 * C125;
    const double C692 = C124 * C198;
    const double C691 = C124 * C203;
    const double C690 = C382 * C120;
    const double C689 = C124 * C200;
    const double C688 = C369 * C120;
    const double C687 = C124 * C216;
    const double C686 = C367 * C120;
    const double C685 = C123 * C224;
    const double C684 = C281 * C126;
    const double C683 = C123 * C210;
    const double C682 = C123 * C211;
    const double C681 = C290 * C126;
    const double C680 = C123 * C209;
    const double C679 = C276 * C126;
    const double C678 = C529 * be;
    const double C677 = C123 * C208;
    const double C676 = C301 * be;
    const double C675 = C123 * C223;
    const double C674 = 2 * C470;
    const double C673 = C526 * be;
    const double C672 = C123 * C205;
    const double C671 = C123 * C203;
    const double C670 = C281 * C120;
    const double C669 = C160 * C120;
    const double C668 = C123 * C198;
    const double C667 = C123 * C200;
    const double C666 = C290 * C120;
    const double C665 = C156 * C120;
    const double C664 = C123 * C216;
    const double C663 = C276 * C120;
    const double C662 = C150 * C120;
    const double C661 = C224 / C74;
    const double C660 = C146 * C84;
    const double C659 = C116 * C224;
    const double C658 = C221 * C126;
    const double C657 = C146 * C75;
    const double C656 = C160 * C126;
    const double C655 = C211 / C74;
    const double C654 = C84 * C169;
    const double C653 = C116 * C211;
    const double C652 = C219 * C126;
    const double C651 = C75 * C169;
    const double C650 = C156 * C126;
    const double C649 = C84 * C167;
    const double C648 = C209 / C74;
    const double C647 = C116 * C210;
    const double C646 = C116 * C209;
    const double C645 = C227 * C126;
    const double C644 = C75 * C167;
    const double C643 = C150 * C126;
    const double C642 = C208 / C74;
    const double C641 = C84 * C166;
    const double C640 = C116 * C208;
    const double C639 = C221 * C125;
    const double C638 = C75 * C166;
    const double C637 = C160 * C125;
    const double C636 = C223 / C74;
    const double C635 = C141 * C84;
    const double C634 = C116 * C223;
    const double C633 = C219 * C125;
    const double C632 = C141 * C75;
    const double C631 = C156 * C125;
    const double C630 = C84 * C163;
    const double C629 = C205 / C74;
    const double C628 = C116 * C206;
    const double C627 = C116 * C205;
    const double C626 = C227 * C125;
    const double C625 = C75 * C163;
    const double C624 = C150 * C125;
    const double C623 = C84 * C159;
    const double C622 = C183 * be;
    const double C621 = C203 / C74;
    const double C620 = C459 * be;
    const double C619 = C116 * C203;
    const double C618 = C75 * C159;
    const double C617 = C84 * C155;
    const double C616 = C180 * be;
    const double C615 = C200 / C74;
    const double C614 = C456 * be;
    const double C613 = C116 * C200;
    const double C612 = C75 * C155;
    const double C611 = C127 * C84;
    const double C610 = C176 * be;
    const double C609 = C121 * be;
    const double C608 = C116 * C198;
    const double C607 = C216 / C74;
    const double C606 = C229 * be;
    const double C605 = C116 * C216;
    const double C604 = 2 * C465;
    const double C603 = C127 * C75;
    const double C812 = C706 / C74;
    const double C811 = C705 / C74;
    const double C810 = C475 - C704;
    const double C809 = C703 * be;
    const double C808 = C702 / C74;
    const double C807 = C701 * be;
    const double C806 = C700 / C74;
    const double C805 = C698 / C74;
    const double C804 = C697 / C74;
    const double C803 = C71 * C696;
    const double C802 = C695 / C74;
    const double C801 = C71 * C694;
    const double C800 = C693 / C74;
    const double C799 = C691 / C74;
    const double C798 = C690 / C74;
    const double C797 = C543 * C689;
    const double C796 = C688 / C74;
    const double C795 = C543 * C687;
    const double C794 = C686 / C74;
    const double C793 = C70 * C685;
    const double C792 = C684 / C74;
    const double C791 = C682 / C74;
    const double C790 = C681 / C74;
    const double C789 = C70 * C680;
    const double C788 = C679 / C74;
    const double C787 = C678 / C74;
    const double C786 = C677 / C74;
    const double C785 = C676 / C74;
    const double C784 = C675 / C74;
    const double C783 = C473 - C674;
    const double C782 = C673 / C74;
    const double C781 = C672 / C74;
    const double C780 = C543 * C671;
    const double C779 = C670 / C74;
    const double C778 = 2 * C669;
    const double C777 = C667 / C74;
    const double C776 = C666 / C74;
    const double C775 = 2 * C665;
    const double C774 = C543 * C664;
    const double C773 = C663 / C74;
    const double C772 = 2 * C662;
    const double C771 = C660 * C111;
    const double C770 = C70 * C659;
    const double C769 = C658 / C74;
    const double C768 = C657 * C104;
    const double C767 = 2 * C656;
    const double C766 = C111 * C654;
    const double C765 = C70 * C653;
    const double C764 = C652 / C74;
    const double C763 = C104 * C651;
    const double C762 = 2 * C650;
    const double C761 = C111 * C649;
    const double C760 = C646 / C74;
    const double C759 = C645 / C74;
    const double C758 = C104 * C644;
    const double C757 = 2 * C643;
    const double C756 = C111 * C641;
    const double C755 = C71 * C640;
    const double C754 = C639 / C74;
    const double C753 = C104 * C638;
    const double C752 = 2 * C637;
    const double C751 = C635 * C111;
    const double C750 = C71 * C634;
    const double C749 = C633 / C74;
    const double C748 = C632 * C104;
    const double C747 = 2 * C631;
    const double C746 = C111 * C630;
    const double C745 = C627 / C74;
    const double C744 = C626 / C74;
    const double C743 = C104 * C625;
    const double C742 = 2 * C624;
    const double C741 = C111 * C623;
    const double C740 = 2 * C622;
    const double C739 = C620 / C74;
    const double C738 = C619 / C74;
    const double C737 = C104 * C618;
    const double C736 = C111 * C617;
    const double C735 = 2 * C616;
    const double C734 = C614 / C74;
    const double C733 = C613 / C74;
    const double C732 = C104 * C612;
    const double C731 = C611 * C111;
    const double C730 = 2 * C610;
    const double C729 = C609 / C74;
    const double C728 = C606 / C74;
    const double C727 = C605 / C74;
    const double C726 = C472 - C604;
    const double C725 = C603 * C104;
    const double C881 = C363 * C763;
    const double C880 = C363 * C758;
    const double C879 = C116 * C766;
    const double C878 = C116 * C756;
    const double C877 = C272 * C753;
    const double C876 = C272 * C743;
    const double C875 = C64 * C737;
    const double C874 = C64 * C732;
    const double C873 = C810 - C811;
    const double C872 = C809 / C74;
    const double C871 = C473 - C808;
    const double C870 = C807 / C74;
    const double C869 = C472 - C806;
    const double C868 = C124 * C756;
    const double C867 = C501 - C805;
    const double C866 = C803 / C74;
    const double C865 = C801 / C74;
    const double C864 = C527 - C799;
    const double C863 = C797 / C74;
    const double C862 = C795 / C74;
    const double C861 = C793 / C74;
    const double C860 = C123 * C766;
    const double C859 = C476 - C791;
    const double C858 = C789 / C74;
    const double C857 = C475 - C786;
    const double C856 = C783 - C784;
    const double C855 = C472 - C781;
    const double C854 = C780 / C74;
    const double C853 = C543 * C737;
    const double C852 = C778 / C74;
    const double C851 = C123 * C736;
    const double C850 = C527 - C777;
    const double C849 = C543 * C732;
    const double C848 = C775 / C74;
    const double C847 = C774 / C74;
    const double C846 = C772 / C74;
    const double C845 = C134 + C771;
    const double C844 = C770 / C74;
    const double C843 = C768 - C105;
    const double C842 = C767 / C74;
    const double C841 = C765 / C74;
    const double C840 = C70 * C763;
    const double C839 = C762 / C74;
    const double C838 = C116 * C761;
    const double C837 = C476 - C760;
    const double C836 = C70 * C758;
    const double C835 = C757 / C74;
    const double C834 = C755 / C74;
    const double C833 = C71 * C753;
    const double C832 = C752 / C74;
    const double C831 = C134 + C751;
    const double C830 = C750 / C74;
    const double C829 = C748 - C105;
    const double C828 = C747 / C74;
    const double C827 = C116 * C746;
    const double C826 = C501 - C745;
    const double C825 = C71 * C743;
    const double C824 = C742 / C74;
    const double C823 = C116 * C741;
    const double C822 = C740 / C74;
    const double C821 = C475 - C738;
    const double C820 = C116 * C736;
    const double C819 = C735 / C74;
    const double C818 = C473 - C733;
    const double C817 = C134 + C731;
    const double C816 = C730 / C74;
    const double C815 = C608 - C729;
    const double C814 = C726 - C727;
    const double C813 = C725 - C105;
    const double C933 = C365 * C873;
    const double C932 = C365 * C871;
    const double C931 = C881 / C74;
    const double C930 = C365 * C869;
    const double C929 = C880 / C74;
    const double C928 = C274 * C857;
    const double C927 = C877 / C74;
    const double C926 = C274 * C856;
    const double C925 = C274 * C855;
    const double C924 = C876 / C74;
    const double C923 = C66 * C821;
    const double C922 = C875 / C74;
    const double C921 = C66 * C818;
    const double C920 = C874 / C74;
    const double C919 = C66 * C814;
    const double C918 = C868 / C74;
    const double C917 = C71 * C867;
    const double C916 = C802 - C866;
    const double C915 = C800 - C865;
    const double C914 = C543 * C864;
    const double C913 = C796 - C863;
    const double C912 = C794 - C862;
    const double C911 = C792 - C861;
    const double C910 = C860 / C74;
    const double C909 = C70 * C859;
    const double C908 = C788 - C858;
    const double C907 = C779 - C854;
    const double C906 = C853 / C74;
    const double C905 = C851 / C74;
    const double C904 = C543 * C850;
    const double C903 = C849 / C74;
    const double C902 = C773 - C847;
    const double C901 = C845 * be;
    const double C900 = C769 - C844;
    const double C899 = C843 * be;
    const double C898 = C764 - C841;
    const double C897 = C840 / C74;
    const double C896 = C838 / C74;
    const double C895 = C70 * C837;
    const double C894 = C836 / C74;
    const double C893 = C754 - C834;
    const double C892 = C833 / C74;
    const double C891 = C831 * be;
    const double C890 = C749 - C830;
    const double C889 = C829 * be;
    const double C888 = C827 / C74;
    const double C887 = C71 * C826;
    const double C886 = C825 / C74;
    const double C885 = C823 / C74;
    const double C884 = C820 / C74;
    const double C883 = C817 * be;
    const double C882 = C813 * be;
    const double C967 = C363 * C899;
    const double C966 = C721 - C931;
    const double C965 = C719 - C929;
    const double C964 = C116 * C901;
    const double C963 = C717 - C927;
    const double C962 = C116 * C891;
    const double C961 = C272 * C889;
    const double C960 = C713 - C924;
    const double C959 = C711 - C922;
    const double C958 = C709 - C920;
    const double C957 = C123 * C883;
    const double C956 = C64 * C882;
    const double C955 = C206 - C918;
    const double C954 = C804 + C917;
    const double C953 = C798 + C914;
    const double C952 = C210 - C910;
    const double C951 = C790 + C909;
    const double C950 = C852 - C906;
    const double C949 = C198 - C905;
    const double C948 = C776 + C904;
    const double C947 = C848 - C903;
    const double C946 = C543 * C882;
    const double C945 = C70 * C899;
    const double C944 = C839 - C897;
    const double C943 = C210 - C896;
    const double C942 = C759 + C895;
    const double C941 = C835 - C894;
    const double C940 = C832 - C892;
    const double C939 = C71 * C889;
    const double C938 = C206 - C888;
    const double C937 = C744 + C887;
    const double C936 = C824 - C886;
    const double C935 = C822 - C885;
    const double C934 = C819 - C884;
    const double C979 = C967 / C74;
    const double C978 = C966 + C722;
    const double C977 = C965 + C720;
    const double C976 = C963 + C718;
    const double C975 = C961 / C74;
    const double C974 = C960 + C714;
    const double C973 = C959 + C712;
    const double C972 = C958 + C710;
    const double C971 = C956 / C74;
    const double C970 = C946 / C74;
    const double C969 = C945 / C74;
    const double C968 = C939 / C74;
    const double C991 = C723 - C979;
    const double C990 = C978 + C932;
    const double C989 = C977 + C930;
    const double C988 = C976 + C928;
    const double C987 = C715 - C975;
    const double C986 = C974 + C925;
    const double C985 = C973 + C923;
    const double C984 = C972 + C921;
    const double C983 = C707 - C971;
    const double C982 = C846 - C970;
    const double C981 = C842 - C969;
    const double C980 = C828 - C968;
    const double C994 = C991 + C724;
    const double C993 = C987 + C716;
    const double C992 = C983 + C708;
    const double C997 = C994 + C933;
    const double C996 = C993 + C926;
    const double C995 = C992 + C919;
    const double d2nexx200000 =
        (2 * Pi *
         ((-C59 * C882) / C74 - C244 * C449 + C240 * C227 + C67 * C814 +
          C228 * C241 +
          C69 * (C728 - C607 + C815 +
                 C116 * (C816 + C198 - (C116 * C883) / C74))) *
         C70 * C71) /
        C74;
    const double d2nexx020000 =
        (2 * Pi *
         (C982 * C70 * C266 + C902 * C70 * C267 +
          ((C300 * C120) / C74 + C543 * ((-C883 * C141) / C74 - C607)) * C70 *
              C268)) /
        C74;
    const double d2nexx002000 =
        (2 * Pi *
         (C982 * C357 + C912 * C358 +
          ((C391 * C120) / C74 + C543 * ((-C883 * C146) / C74 - C607)) * C359) *
         C71) /
        C74;
    const double d2nexx110000 =
        (2 * Pi *
         (C995 * C70 * C272 + (C448 * C276 - (C64 * C664) / C74 + C450 * C453 +
                               C66 * (C782 + C668 - (C116 * C957) / C74)) *
                                  C70 * C274)) /
        C74;
    const double d2nexx101000 =
        (2 * Pi *
         (C995 * C363 + (C448 * C367 - (C64 * C687) / C74 + C450 * C498 +
                         C66 * (C870 + C692 - (C116 * C124 * C883) / C74)) *
                            C365) *
         C71) /
        C74;
    const double d2nexx011000 =
        (2 * Pi *
         ((C982 * C363 + C912 * C365) * C272 +
          (C902 * C363 +
           ((C530 * C120) / C74 - (C543 * C124 * C957) / C74) * C365) *
              C274)) /
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
         ((-C59 * C732) / C74 - C244 * C454 + C240 * C219 + C67 * C818 +
          C228 * C230 + C69 * (C734 - C615 + C116 * C934)) *
         C70 * C71) /
        C74;
    const double d2nexy020000 =
        (2 * Pi *
         (C947 * C70 * C266 + C948 * C70 * C267 +
          ((C319 * C120) / C74 + C543 * (C668 - C615 + C123 * C949)) * C70 *
              C268)) /
        C74;
    const double d2nexy002000 =
        (2 * Pi *
         (C947 * C357 + C913 * C358 +
          ((C392 * C120) / C74 + C543 * ((-C736 * C146) / C74 - C615)) * C359) *
         C71) /
        C74;
    const double d2nexy110000 =
        (2 * Pi *
         (C984 * C70 * C272 + (C448 * C290 + C64 * C850 + C450 * C474 +
                               C66 * (C815 + C123 * C934)) *
                                  C70 * C274)) /
        C74;
    const double d2nexy101000 =
        (2 * Pi *
         (C984 * C363 +
          (C448 * C369 - (C64 * C689) / C74 + C450 * C499 + C66 * C124 * C934) *
              C365) *
         C71) /
        C74;
    const double d2nexy011000 =
        (2 * Pi *
         ((C947 * C363 + C913 * C365) * C272 +
          (C948 * C363 + ((C528 * C120) / C74 + C543 * C124 * C949) * C365) *
              C274)) /
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
         ((-C59 * C737) / C74 - C244 * C457 + C240 * C221 + C67 * C821 +
          C228 * C231 + C69 * (C739 - C621 + C116 * C935)) *
         C70 * C71) /
        C74;
    const double d2nexz020000 =
        (2 * Pi *
         (C950 * C70 * C266 + C907 * C70 * C267 +
          ((C302 * C120) / C74 + C543 * ((-C741 * C141) / C74 - C621)) * C70 *
              C268)) /
        C74;
    const double d2nexz002000 =
        (2 * Pi *
         (C950 * C357 + C953 * C358 +
          ((C410 * C120) / C74 +
           C543 * (C692 - C621 + C124 * (C198 - (C124 * C741) / C74))) *
              C359) *
         C71) /
        C74;
    const double d2nexz110000 =
        (2 * Pi *
         (C985 * C70 * C272 +
          (C448 * C281 - (C64 * C671) / C74 + C450 * C469 + C66 * C123 * C935) *
              C70 * C274)) /
        C74;
    const double d2nexz101000 =
        (2 * Pi *
         (C985 * C363 + (C448 * C382 + C64 * C864 + C450 * C504 +
                         C66 * (C815 + C124 * C935)) *
                            C365) *
         C71) /
        C74;
    const double d2nexz011000 =
        (2 * Pi *
         ((C950 * C363 + C953 * C365) * C272 +
          (C907 * C363 +
           ((C532 * C120) / C74 + C543 * (C668 - (C124 * C123 * C741) / C74)) *
               C365) *
              C274)) /
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
         (C936 * C59 + C937 * C67 +
          ((C241 * C125) / C74 + C71 * (C628 - C629 + C116 * C938)) * C69) *
         C70) /
        C74;
    const double d2neyx020000 =
        (2 * Pi *
         ((-C266 * C743) / C74 - C335 * C449 + C332 * C276 + C267 * C855 +
          C323 * C300 +
          C268 * (C782 - C629 + C123 * (C816 - (C123 * C746) / C74))) *
         C543 * C70) /
        C74;
    const double d2neyx002000 =
        (2 * Pi *
         (C936 * C543 * C357 + C915 * C543 * C358 +
          ((C391 * C125) / C74 + C71 * ((-C746 * C146) / C74 - C629)) * C543 *
              C359)) /
        C74;
    const double d2neyx110000 =
        (2 * Pi *
         (C986 * C64 + (C460 * C227 + C272 * C826 + C461 * C453 +
                        C274 * (C728 + C123 * C938)) *
                           C66) *
         C70) /
        C74;
    const double d2neyx101000 =
        (2 * Pi *
         ((C936 * C64 + C937 * C66) * C363 +
          (C915 * C64 + ((C498 * C125) / C74 + C71 * C124 * C938) * C66) *
              C365)) /
        C74;
    const double d2neyx011000 =
        (2 * Pi *
         (C986 * C543 * C363 +
          (C460 * C367 - (C272 * C694) / C74 + C461 * C530 +
           C274 * (C870 - (C123 * C124 * C746) / C74)) *
              C543 * C365)) /
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
         (C980 * C59 + C890 * C67 +
          ((C230 * C125) / C74 + C71 * ((-C891 * C127) / C74 - C636)) * C69) *
         C70) /
        C74;
    const double d2neyy020000 =
        (2 * Pi *
         ((-C266 * C889) / C74 - C335 * C454 + C332 * C290 + C267 * C856 +
          C323 * C319 +
          C268 * (C785 - C636 + C123 * C206 - C729 +
                  C123 * (C819 + C206 - (C123 * C891) / C74))) *
         C543 * C70) /
        C74;
    const double d2neyy002000 =
        (2 * Pi *
         (C980 * C543 * C357 + C916 * C543 * C358 +
          ((C392 * C125) / C74 + C71 * ((-C891 * C146) / C74 - C636)) * C543 *
              C359)) /
        C74;
    const double d2neyy110000 =
        (2 * Pi *
         (C996 * C64 + (C460 * C219 - (C272 * C634) / C74 + C461 * C474 +
                        C274 * (C734 + C628 - (C123 * C962) / C74)) *
                           C66) *
         C70) /
        C74;
    const double d2neyy101000 =
        (2 * Pi *
         ((C980 * C64 + C890 * C66) * C363 +
          (C916 * C64 +
           ((C499 * C125) / C74 - (C71 * C124 * C962) / C74) * C66) *
              C365)) /
        C74;
    const double d2neyy011000 =
        (2 * Pi *
         (C996 * C543 * C363 +
          (C460 * C369 - (C272 * C696) / C74 + C461 * C528 +
           C274 * (C872 + C699 - (C123 * C124 * C891) / C74)) *
              C543 * C365)) /
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
         (C940 * C59 + C893 * C67 +
          ((C231 * C125) / C74 + C71 * ((-C756 * C127) / C74 - C642)) * C69) *
         C70) /
        C74;
    const double d2neyz020000 =
        (2 * Pi *
         ((-C266 * C753) / C74 - C335 * C457 + C332 * C281 + C267 * C857 +
          C323 * C302 +
          C268 * (C787 - C642 + C123 * (C822 - (C123 * C756) / C74))) *
         C543 * C70) /
        C74;
    const double d2neyz002000 =
        (2 * Pi *
         (C940 * C543 * C357 + C954 * C543 * C358 +
          ((C410 * C125) / C74 + C71 * (C699 - C642 + C124 * C955)) * C543 *
              C359)) /
        C74;
    const double d2neyz110000 =
        (2 * Pi *
         (C988 * C64 + (C460 * C221 - (C272 * C640) / C74 + C461 * C469 +
                        C274 * (C739 - (C123 * C878) / C74)) *
                           C66) *
         C70) /
        C74;
    const double d2neyz101000 =
        (2 * Pi *
         ((C940 * C64 + C893 * C66) * C363 +
          (C954 * C64 +
           ((C504 * C125) / C74 + C71 * (C628 - (C124 * C878) / C74)) * C66) *
              C365)) /
        C74;
    const double d2neyz011000 =
        (2 * Pi *
         (C988 * C543 * C363 + (C460 * C382 + C272 * C867 + C461 * C532 +
                                C274 * (C812 + C123 * C955)) *
                                   C543 * C365)) /
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
         (C941 * C71 * C59 + C942 * C71 * C67 +
          ((C241 * C126) / C74 + C70 * (C647 - C648 + C116 * C943)) * C71 *
              C69)) /
        C74;
    const double d2nezx020000 =
        (2 * Pi *
         (C941 * C266 + C908 * C267 +
          ((C300 * C126) / C74 + C70 * ((-C761 * C141) / C74 - C648)) * C268) *
         C543) /
        C74;
    const double d2nezx002000 =
        (2 * Pi *
         ((-C357 * C758) / C74 - C426 * C449 + C423 * C367 + C358 * C869 +
          C414 * C391 +
          C359 * (C870 - C648 + C124 * (C816 - (C124 * C761) / C74))) *
         C71 * C543) /
        C74;
    const double d2nezx110000 =
        (2 * Pi *
         ((C941 * C272 + C908 * C274) * C64 +
          (C942 * C272 + ((C453 * C126) / C74 + C70 * C123 * C943) * C274) *
              C66)) /
        C74;
    const double d2nezx101000 =
        (2 * Pi *
         (C989 * C71 * C64 + (C502 * C227 + C363 * C837 + C503 * C498 +
                              C365 * (C728 + C124 * C943)) *
                                 C71 * C66)) /
        C74;
    const double d2nezx011000 =
        (2 * Pi *
         (C989 * C272 + (C502 * C276 - (C363 * C680) / C74 + C503 * C530 +
                         C365 * (C782 - (C124 * C123 * C761) / C74)) *
                            C274) *
         C543) /
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
         (C944 * C71 * C59 + C898 * C71 * C67 +
          ((C230 * C126) / C74 + C70 * ((-C766 * C127) / C74 - C655)) * C71 *
              C69)) /
        C74;
    const double d2nezy020000 =
        (2 * Pi *
         (C944 * C266 + C951 * C267 +
          ((C319 * C126) / C74 + C70 * (C683 - C655 + C123 * C952)) * C268) *
         C543) /
        C74;
    const double d2nezy002000 =
        (2 * Pi *
         ((-C357 * C763) / C74 - C426 * C454 + C423 * C369 + C358 * C871 +
          C414 * C392 +
          C359 * (C872 - C655 + C124 * (C819 - (C124 * C766) / C74))) *
         C71 * C543) /
        C74;
    const double d2nezy110000 =
        (2 * Pi *
         ((C944 * C272 + C951 * C274) * C64 +
          (C898 * C272 +
           ((C474 * C126) / C74 + C70 * (C647 - (C123 * C879) / C74)) * C274) *
              C66)) /
        C74;
    const double d2nezy101000 =
        (2 * Pi *
         (C990 * C71 * C64 + (C502 * C219 - (C363 * C653) / C74 + C503 * C499 +
                              C365 * (C734 - (C124 * C879) / C74)) *
                                 C71 * C66)) /
        C74;
    const double d2nezy011000 =
        (2 * Pi *
         (C990 * C272 + (C502 * C290 + C363 * C859 + C503 * C528 +
                         C365 * (C785 + C124 * C952)) *
                            C274) *
         C543) /
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
         (C981 * C71 * C59 + C900 * C71 * C67 +
          ((C231 * C126) / C74 + C70 * ((-C901 * C127) / C74 - C661)) * C71 *
              C69)) /
        C74;
    const double d2nezz020000 =
        (2 * Pi *
         (C981 * C266 + C911 * C267 +
          ((C302 * C126) / C74 + C70 * ((-C901 * C141) / C74 - C661)) * C268) *
         C543) /
        C74;
    const double d2nezz002000 =
        (2 * Pi *
         ((-C357 * C899) / C74 - C426 * C457 + C423 * C382 + C358 * C873 +
          C414 * C410 +
          C359 * (C812 - C661 + C124 * C210 - C729 +
                  C124 * (C822 + C210 - (C124 * C901) / C74))) *
         C71 * C543) /
        C74;
    const double d2nezz110000 =
        (2 * Pi *
         ((C981 * C272 + C911 * C274) * C64 +
          (C900 * C272 +
           ((C469 * C126) / C74 - (C70 * C123 * C964) / C74) * C274) *
              C66)) /
        C74;
    const double d2nezz101000 =
        (2 * Pi *
         (C997 * C71 * C64 + (C502 * C221 - (C363 * C659) / C74 + C503 * C504 +
                              C365 * (C739 + C647 - (C124 * C964) / C74)) *
                                 C71 * C66)) /
        C74;
    const double d2nezz011000 =
        (2 * Pi *
         (C997 * C272 + (C502 * C281 - (C363 * C685) / C74 + C503 * C532 +
                         C365 * (C787 + C683 - (C124 * C123 * C901) / C74)) *
                            C274) *
         C543) /
        C74;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz110000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz011000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezz200000 - 0.5 * d2nezz020000 + d2nezz002000;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz101000;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezz200000 - std::sqrt(0.75) * d2nezz020000;
}
