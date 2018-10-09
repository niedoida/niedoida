/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_ds_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_20_13(double ae,
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
    const double C535 = ae + be;
    const double C534 = xA - xB;
    const double C539 = ae * be;
    const double C538 = std::pow(C534, 2);
    const double C540 = C538 * C539;
    const double C541 = C540 / C535;
    const double C542 = -C541;
    const double C543 = std::exp(C542);
    const double C551 = yA - yB;
    const double C552 = std::pow(C551, 2);
    const double C553 = C552 * C539;
    const double C554 = C553 / C535;
    const double C555 = -C554;
    const double C556 = std::exp(C555);
    const double C567 = zA - zB;
    const double C568 = std::pow(C567, 2);
    const double C569 = C568 * C539;
    const double C570 = C569 / C535;
    const double C571 = -C570;
    const double C572 = std::exp(C571);
    const double C588 = C567 * be;
    const double C587 = C551 * be;
    const double C586 = 2 * C535;
    const double C585 = std::pow(C535, 2);
    const double C584 = C534 * be;
    const double C583 = ae * be;
    const double C592 = C572 * C588;
    const double C591 = C556 * C587;
    const double C590 = std::pow(C586, -2);
    const double C589 = std::pow(C586, -1);
    const double C62 = std::exp(-(std::pow(xA - xB, 2) * C583) / (ae + be));
    const double C63 =
        -(std::exp(-(std::pow(C534, 2) * C583) / C535) * C584) / C535;
    const double C65 = (C543 * std::pow(C584, 2)) / C585 + C543 / C586;
    const double C66 = C589 * C543;
    const double C67 = (-2 * C589 * C543 * C584) / C535;
    const double C69 = C590 * C543;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C539) / C535);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C539) / C535);
    const double C266 = (C556 * std::pow(C587, 2)) / C585 + C556 / C586;
    const double C267 = (-2 * C589 * C591) / C535;
    const double C268 = C590 * C556;
    const double C272 = -C591 / C535;
    const double C274 = C589 * C556;
    const double C357 = (C572 * std::pow(C588, 2)) / C585 + C572 / C586;
    const double C358 = (-2 * C589 * C592) / C535;
    const double C359 = C590 * C572;
    const double C363 = -C592 / C535;
    const double C365 = C589 * C572;
    const double C90 = zA - zB;
    const double C89 = yA - yB;
    const double C88 = be * zB;
    const double C87 = ae * zA;
    const double C86 = be * yB;
    const double C85 = ae * yA;
    const double C84 = bs[4];
    const double C83 = 0 * be;
    const double C82 = bs[3];
    const double C81 = bs[2];
    const double C80 = bs[1];
    const double C79 = be * xB;
    const double C78 = ae * xA;
    const double C77 = 0 * be;
    const double C76 = ae * be;
    const double C75 = 0 * be;
    const double C74 = xA - xB;
    const double C73 = ae + be;
    const double C72 = 0 * be;
    const double C102 = C76 * C90;
    const double C101 = C76 * C89;
    const double C100 = C87 + C88;
    const double C99 = C85 + C86;
    const double C98 = C83 / C73;
    const double C97 = C78 + C79;
    const double C96 = C77 / C73;
    const double C95 = C76 * C74;
    const double C94 = C75 / C73;
    const double C93 = C74 * C75;
    const double C92 = 2 * C73;
    const double C91 = C72 / C73;
    const double C115 = C102 * C70;
    const double C114 = C101 * C71;
    const double C113 = C100 / C73;
    const double C112 = C99 / C73;
    const double C111 = std::pow(C92, 4);
    const double C110 = -C92;
    const double C109 = C80 * C92;
    const double C108 = std::pow(C92, 2);
    const double C107 = C97 / C73;
    const double C106 = C95 * C62;
    const double C105 = -C94;
    const double C104 = C93 / C73;
    const double C103 = -C91;
    const double C126 = 2 * C115;
    const double C125 = 2 * C114;
    const double C124 = C113 - zC;
    const double C123 = C112 - yC;
    const double C122 = std::pow(C110, 3);
    const double C121 = C81 * C108;
    const double C120 = C107 - xC;
    const double C119 = 2 * C106;
    const double C118 = C105 / C92;
    const double C117 = 0 - C104;
    const double C116 = C103 / C92;
    const double C146 = std::pow(C124, 2);
    const double C145 = C124 * C123;
    const double C144 = ae * C124;
    const double C143 = C124 * C120;
    const double C142 = C123 * C124;
    const double C141 = std::pow(C123, 2);
    const double C140 = ae * C123;
    const double C139 = C123 * C120;
    const double C138 = C120 * C124;
    const double C137 = C73 * C124;
    const double C136 = C120 * C123;
    const double C135 = C73 * C123;
    const double C134 = C82 * C122;
    const double C133 = C120 * C121;
    const double C132 = ae * C120;
    const double C131 = std::pow(C120, 2);
    const double C130 = C73 * C120;
    const double C129 = C119 / C73;
    const double C128 = C74 * C119;
    const double C127 = C117 * be;
    const double C170 = C146 * C82;
    const double C169 = C145 * ae;
    const double C168 = C144 * C82;
    const double C167 = C143 * ae;
    const double C166 = C142 * ae;
    const double C165 = C141 * C82;
    const double C164 = C140 * C82;
    const double C163 = C139 * ae;
    const double C162 = C137 * C82;
    const double C161 = C137 * C81;
    const double C160 = C138 * ae;
    const double C159 = C137 * C80;
    const double C158 = C135 * C82;
    const double C157 = C135 * C81;
    const double C156 = C136 * ae;
    const double C155 = C135 * C80;
    const double C154 = C132 * C82;
    const double C153 = C130 * C82;
    const double C152 = C131 * C82;
    const double C151 = C130 * C81;
    const double C150 = C130 * C80;
    const double C149 = -C129;
    const double C148 = C128 / C73;
    const double C147 = C127 / C73;
    const double C191 = C170 * C122;
    const double C190 = C82 * C169;
    const double C189 = C168 * C108;
    const double C188 = C82 * C167;
    const double C187 = C82 * C166;
    const double C186 = C165 * C122;
    const double C185 = C164 * C108;
    const double C184 = C82 * C163;
    const double C183 = C162 * C108;
    const double C182 = C82 * C160;
    const double C181 = C161 * C92;
    const double C180 = C158 * C108;
    const double C179 = C82 * C156;
    const double C178 = C157 * C92;
    const double C177 = C154 * C108;
    const double C176 = C153 * C108;
    const double C175 = C152 * C122;
    const double C174 = C151 * C92;
    const double C173 = C149 / C92;
    const double C172 = C62 - C148;
    const double C171 = C116 - C147;
    const double C212 = C121 + C191;
    const double C211 = C122 * C190;
    const double C210 = 2 * C189;
    const double C209 = C122 * C188;
    const double C208 = C122 * C187;
    const double C207 = C121 + C186;
    const double C206 = 2 * C185;
    const double C205 = C122 * C184;
    const double C204 = C183 * C131;
    const double C203 = C122 * C182;
    const double C202 = -2 * C181;
    const double C201 = C180 * C131;
    const double C200 = C122 * C179;
    const double C199 = -2 * C178;
    const double C198 = 2 * C177;
    const double C197 = 2 * C176;
    const double C196 = C121 + C175;
    const double C195 = -2 * C174;
    const double C194 = C173 - C96;
    const double C193 = C172 * be;
    const double C192 = C171 / C92;
    const double C224 = C212 * ae;
    const double C223 = C207 * ae;
    const double C222 = 2 * C204;
    const double C221 = C120 * C202;
    const double C220 = 2 * C201;
    const double C219 = C120 * C199;
    const double C218 = C120 * C197;
    const double C217 = C194 / C92;
    const double C216 = C196 * ae;
    const double C215 = C120 * C195;
    const double C214 = C74 * C194;
    const double C213 = C193 / C73;
    const double C231 = C202 + C222;
    const double C230 = C199 + C220;
    const double C229 = C218 - C121;
    const double C228 = C217 - C98;
    const double C227 = C215 + C109;
    const double C226 = C214 + C66;
    const double C225 = C118 - C213;
    const double C235 = C120 * C229;
    const double C234 = C226 * be;
    const double C233 = C225 / C92;
    const double C232 = C74 * C225;
    const double C238 = C195 + C235;
    const double C237 = C234 / C73;
    const double C236 = C232 + C63;
    const double C241 = C238 - C133;
    const double C240 = C233 - C237;
    const double C239 = C236 * be;
    const double C242 = C239 / C73;
    const double C243 = C192 - C242;
    const double C244 = C243 + C194;
    const double C288 = 0 * be;
    const double C287 = 0 * be;
    const double C286 = C125 / C73;
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
    const double C299 = C288 / C73;
    const double C298 = C287 / C73;
    const double C297 = -C286;
    const double C296 = C285 / C73;
    const double C295 = C284 / C73;
    const double C294 = C89 * C284;
    const double C293 = C283 / C73;
    const double C292 = 2 * C282;
    const double C291 = C123 * C279;
    const double C290 = C278 + C109;
    const double C289 = 2 * C277;
    const double C307 = C297 / C92;
    const double C306 = C71 - C296;
    const double C305 = -C295;
    const double C304 = C294 / C73;
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
    const double C316 = C312 / C73;
    const double C315 = C310 * be;
    const double C314 = C199 + C308;
    const double C323 = C318 - C299;
    const double C322 = C317 + C274;
    const double C321 = C311 - C316;
    const double C320 = C315 / C73;
    const double C319 = C314 - C280;
    const double C327 = C322 * be;
    const double C326 = C321 / C92;
    const double C325 = C89 * C321;
    const double C324 = C309 - C320;
    const double C330 = C327 / C73;
    const double C329 = C325 + C272;
    const double C328 = C324 / C92;
    const double C332 = C326 - C330;
    const double C331 = C329 * be;
    const double C333 = C331 / C73;
    const double C334 = C328 - C333;
    const double C335 = C334 + C313;
    const double C379 = 0 * be;
    const double C378 = 0 * be;
    const double C377 = C126 / C73;
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
    const double C390 = C379 / C73;
    const double C389 = C378 / C73;
    const double C388 = -C377;
    const double C387 = C376 / C73;
    const double C386 = C375 / C73;
    const double C385 = C90 * C375;
    const double C384 = C374 / C73;
    const double C383 = C124 * C372;
    const double C382 = C371 + C109;
    const double C381 = 2 * C370;
    const double C380 = 2 * C368;
    const double C398 = C388 / C92;
    const double C397 = C70 - C387;
    const double C396 = -C386;
    const double C395 = C385 / C73;
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
    const double C407 = C403 / C73;
    const double C406 = C401 * be;
    const double C405 = C202 + C399;
    const double C414 = C409 - C390;
    const double C413 = C408 + C365;
    const double C412 = C402 - C407;
    const double C411 = C406 / C73;
    const double C410 = C405 - C373;
    const double C418 = C413 * be;
    const double C417 = C412 / C92;
    const double C416 = C90 * C412;
    const double C415 = C400 - C411;
    const double C421 = C418 / C73;
    const double C420 = C416 + C363;
    const double C419 = C415 / C92;
    const double C423 = C417 - C421;
    const double C422 = C420 * be;
    const double C424 = C422 / C73;
    const double C425 = C419 - C424;
    const double C426 = C425 + C404;
    const double C459 = C144 * C81;
    const double C458 = C140 * C81;
    const double C457 = C120 * C372;
    const double C456 = C181 * ae;
    const double C455 = 2 * C159;
    const double C454 = C120 * C279;
    const double C453 = C178 * ae;
    const double C452 = 2 * C155;
    const double C451 = C123 * C229;
    const double C450 = C132 * C81;
    const double C449 = C174 * ae;
    const double C448 = 2 * C150;
    const double C467 = C459 * C92;
    const double C466 = C458 * C92;
    const double C465 = C123 * C457;
    const double C464 = -2 * C456;
    const double C463 = C123 * C454;
    const double C462 = -2 * C453;
    const double C461 = C450 * C92;
    const double C460 = -2 * C449;
    const double C472 = -2 * C467;
    const double C471 = C464 / C73;
    const double C470 = C463 - C133;
    const double C469 = C462 / C73;
    const double C468 = C460 / C73;
    const double C497 = -2 * C466;
    const double C496 = C124 * C457;
    const double C495 = C124 * C454;
    const double C494 = C124 * C229;
    const double C498 = C496 - C133;
    const double C523 = C123 * C372;
    const double C522 = C124 * C301;
    const double C521 = -2 * C461;
    const double C520 = C123 * C197;
    const double C525 = C124 * C523;
    const double C524 = C124 * C520;
    const double C526 = C525 - C280;
    const double C718 = C404 * C382;
    const double C717 = C412 * C455;
    const double C716 = C404 * C369;
    const double C715 = C412 * C452;
    const double C714 = C404 * C367;
    const double C713 = C412 * C448;
    const double C712 = C313 * C281;
    const double C711 = C321 * C455;
    const double C710 = C313 * C290;
    const double C709 = C321 * C452;
    const double C708 = C313 * C276;
    const double C707 = C321 * C448;
    const double C706 = C194 * C221;
    const double C705 = C225 * C455;
    const double C704 = C194 * C219;
    const double C703 = C225 * C452;
    const double C702 = C194 * C227;
    const double C701 = C225 * C448;
    const double C700 = C393 * ae;
    const double C699 = C124 * C224;
    const double C698 = 2 * C467;
    const double C697 = C124 * C279;
    const double C696 = C124 * C211;
    const double C695 = C124 * C197;
    const double C694 = C124 * C209;
    const double C693 = C124 * C206;
    const double C692 = C382 * C125;
    const double C691 = C124 * C208;
    const double C690 = C369 * C125;
    const double C689 = C124 * C223;
    const double C688 = C367 * C125;
    const double C687 = C124 * C205;
    const double C686 = C124 * C198;
    const double C685 = C382 * C119;
    const double C684 = C124 * C203;
    const double C683 = C369 * C119;
    const double C682 = C124 * C200;
    const double C681 = C367 * C119;
    const double C680 = C124 * C216;
    const double C679 = C281 * C126;
    const double C678 = C123 * C224;
    const double C677 = C123 * C210;
    const double C676 = C290 * C126;
    const double C675 = C123 * C211;
    const double C674 = C276 * C126;
    const double C673 = C123 * C209;
    const double C672 = C523 * ae;
    const double C671 = C123 * C208;
    const double C670 = C301 * ae;
    const double C669 = C123 * C223;
    const double C668 = 2 * C466;
    const double C667 = C520 * ae;
    const double C666 = C123 * C205;
    const double C665 = C281 * C119;
    const double C664 = C123 * C203;
    const double C663 = C159 * C119;
    const double C662 = C123 * C198;
    const double C661 = C290 * C119;
    const double C660 = C123 * C200;
    const double C659 = C155 * C119;
    const double C658 = C276 * C119;
    const double C657 = C123 * C216;
    const double C656 = C150 * C119;
    const double C655 = C224 / C73;
    const double C654 = C146 * C84;
    const double C653 = C221 * C126;
    const double C652 = C120 * C224;
    const double C651 = C159 * C126;
    const double C650 = C146 * C81;
    const double C649 = C211 / C73;
    const double C648 = C84 * C169;
    const double C647 = C219 * C126;
    const double C646 = C120 * C211;
    const double C645 = C155 * C126;
    const double C644 = C81 * C169;
    const double C643 = C84 * C167;
    const double C642 = C209 / C73;
    const double C641 = C120 * C210;
    const double C640 = C227 * C126;
    const double C639 = C120 * C209;
    const double C638 = C150 * C126;
    const double C637 = C81 * C167;
    const double C636 = C208 / C73;
    const double C635 = C84 * C166;
    const double C634 = C221 * C125;
    const double C633 = C120 * C208;
    const double C632 = C159 * C125;
    const double C631 = C81 * C166;
    const double C630 = C223 / C73;
    const double C629 = C141 * C84;
    const double C628 = C219 * C125;
    const double C627 = C120 * C223;
    const double C626 = C155 * C125;
    const double C625 = C141 * C81;
    const double C624 = C84 * C163;
    const double C623 = C205 / C73;
    const double C622 = C120 * C206;
    const double C621 = C227 * C125;
    const double C620 = C120 * C205;
    const double C619 = C150 * C125;
    const double C618 = C81 * C163;
    const double C617 = C84 * C160;
    const double C616 = C183 * ae;
    const double C615 = C203 / C73;
    const double C614 = C457 * ae;
    const double C613 = C120 * C203;
    const double C612 = C81 * C160;
    const double C611 = C84 * C156;
    const double C610 = C180 * ae;
    const double C609 = C200 / C73;
    const double C608 = C454 * ae;
    const double C607 = C120 * C200;
    const double C606 = C81 * C156;
    const double C605 = C131 * C84;
    const double C604 = C176 * ae;
    const double C603 = C121 * ae;
    const double C602 = C120 * C198;
    const double C601 = C216 / C73;
    const double C600 = C229 * ae;
    const double C599 = C120 * C216;
    const double C598 = 2 * C461;
    const double C597 = C131 * C81;
    const double C806 = C700 / C73;
    const double C805 = C699 / C73;
    const double C804 = C471 - C698;
    const double C803 = C697 * ae;
    const double C802 = C696 / C73;
    const double C801 = C695 * ae;
    const double C800 = C694 / C73;
    const double C799 = C692 / C73;
    const double C798 = C691 / C73;
    const double C797 = C690 / C73;
    const double C796 = C71 * C689;
    const double C795 = C688 / C73;
    const double C794 = C71 * C687;
    const double C793 = C685 / C73;
    const double C792 = C684 / C73;
    const double C791 = C683 / C73;
    const double C790 = C62 * C682;
    const double C789 = C681 / C73;
    const double C788 = C62 * C680;
    const double C787 = C679 / C73;
    const double C786 = C70 * C678;
    const double C785 = C676 / C73;
    const double C784 = C675 / C73;
    const double C783 = C674 / C73;
    const double C782 = C70 * C673;
    const double C781 = C672 / C73;
    const double C780 = C671 / C73;
    const double C779 = C670 / C73;
    const double C778 = C669 / C73;
    const double C777 = C469 - C668;
    const double C776 = C667 / C73;
    const double C775 = C666 / C73;
    const double C774 = C665 / C73;
    const double C773 = C62 * C664;
    const double C772 = 2 * C663;
    const double C771 = C661 / C73;
    const double C770 = C660 / C73;
    const double C769 = 2 * C659;
    const double C768 = C658 / C73;
    const double C767 = C62 * C657;
    const double C766 = 2 * C656;
    const double C765 = C654 * C111;
    const double C764 = C653 / C73;
    const double C763 = C70 * C652;
    const double C762 = 2 * C651;
    const double C761 = C650 * C108;
    const double C760 = C111 * C648;
    const double C759 = C647 / C73;
    const double C758 = C70 * C646;
    const double C757 = 2 * C645;
    const double C756 = C108 * C644;
    const double C755 = C111 * C643;
    const double C754 = C640 / C73;
    const double C753 = C639 / C73;
    const double C752 = 2 * C638;
    const double C751 = C108 * C637;
    const double C750 = C111 * C635;
    const double C749 = C634 / C73;
    const double C748 = C71 * C633;
    const double C747 = 2 * C632;
    const double C746 = C108 * C631;
    const double C745 = C629 * C111;
    const double C744 = C628 / C73;
    const double C743 = C71 * C627;
    const double C742 = 2 * C626;
    const double C741 = C625 * C108;
    const double C740 = C111 * C624;
    const double C739 = C621 / C73;
    const double C738 = C620 / C73;
    const double C737 = 2 * C619;
    const double C736 = C108 * C618;
    const double C735 = C111 * C617;
    const double C734 = 2 * C616;
    const double C733 = C614 / C73;
    const double C732 = C613 / C73;
    const double C731 = C108 * C612;
    const double C730 = C111 * C611;
    const double C729 = 2 * C610;
    const double C728 = C608 / C73;
    const double C727 = C607 / C73;
    const double C726 = C108 * C606;
    const double C725 = C605 * C111;
    const double C724 = 2 * C604;
    const double C723 = C603 / C73;
    const double C722 = C600 / C73;
    const double C721 = C599 / C73;
    const double C720 = C468 - C598;
    const double C719 = C597 * C108;
    const double C875 = C363 * C756;
    const double C874 = C363 * C751;
    const double C873 = C120 * C760;
    const double C872 = C120 * C750;
    const double C871 = C272 * C746;
    const double C870 = C272 * C736;
    const double C869 = C63 * C731;
    const double C868 = C63 * C726;
    const double C867 = C804 - C805;
    const double C866 = C803 / C73;
    const double C865 = C469 - C802;
    const double C864 = C801 / C73;
    const double C863 = C468 - C800;
    const double C862 = C124 * C750;
    const double C861 = C497 - C798;
    const double C860 = -C796;
    const double C859 = -C794;
    const double C858 = C521 - C792;
    const double C857 = -C790;
    const double C856 = -C788;
    const double C855 = -C786;
    const double C854 = C123 * C760;
    const double C853 = C472 - C784;
    const double C852 = -C782;
    const double C851 = C471 - C780;
    const double C850 = C777 - C778;
    const double C849 = C468 - C775;
    const double C848 = -C773;
    const double C847 = C772 / C73;
    const double C846 = C62 * C731;
    const double C845 = C123 * C730;
    const double C844 = C521 - C770;
    const double C843 = C769 / C73;
    const double C842 = C62 * C726;
    const double C841 = -C767;
    const double C840 = C766 / C73;
    const double C839 = C134 + C765;
    const double C838 = -C763;
    const double C837 = C762 / C73;
    const double C836 = C761 - C109;
    const double C835 = -C758;
    const double C834 = C757 / C73;
    const double C833 = C70 * C756;
    const double C832 = C120 * C755;
    const double C831 = C472 - C753;
    const double C830 = C752 / C73;
    const double C829 = C70 * C751;
    const double C828 = -C748;
    const double C827 = C747 / C73;
    const double C826 = C71 * C746;
    const double C825 = C134 + C745;
    const double C824 = -C743;
    const double C823 = C742 / C73;
    const double C822 = C741 - C109;
    const double C821 = C120 * C740;
    const double C820 = C497 - C738;
    const double C819 = C737 / C73;
    const double C818 = C71 * C736;
    const double C817 = C120 * C735;
    const double C816 = C734 / C73;
    const double C815 = C471 - C732;
    const double C814 = C120 * C730;
    const double C813 = C729 / C73;
    const double C812 = C469 - C727;
    const double C811 = C134 + C725;
    const double C810 = C724 / C73;
    const double C809 = C602 - C723;
    const double C808 = C720 - C721;
    const double C807 = C719 - C109;
    const double C927 = C365 * C867;
    const double C926 = C365 * C865;
    const double C925 = C875 / C73;
    const double C924 = C365 * C863;
    const double C923 = C874 / C73;
    const double C922 = C274 * C851;
    const double C921 = C871 / C73;
    const double C920 = C274 * C850;
    const double C919 = C274 * C849;
    const double C918 = C870 / C73;
    const double C917 = C66 * C815;
    const double C916 = C869 / C73;
    const double C915 = C66 * C812;
    const double C914 = C868 / C73;
    const double C913 = C66 * C808;
    const double C912 = C862 / C73;
    const double C911 = C71 * C861;
    const double C910 = C860 / C73;
    const double C909 = C859 / C73;
    const double C908 = C62 * C858;
    const double C907 = C857 / C73;
    const double C906 = C856 / C73;
    const double C905 = C855 / C73;
    const double C904 = C854 / C73;
    const double C903 = C70 * C853;
    const double C902 = C852 / C73;
    const double C901 = C848 / C73;
    const double C900 = -C846;
    const double C899 = C845 / C73;
    const double C898 = C62 * C844;
    const double C897 = -C842;
    const double C896 = C841 / C73;
    const double C895 = C839 * ae;
    const double C894 = C838 / C73;
    const double C893 = C836 * ae;
    const double C892 = C835 / C73;
    const double C891 = -C833;
    const double C890 = C832 / C73;
    const double C889 = C70 * C831;
    const double C888 = -C829;
    const double C887 = C828 / C73;
    const double C886 = -C826;
    const double C885 = C825 * ae;
    const double C884 = C824 / C73;
    const double C883 = C822 * ae;
    const double C882 = C821 / C73;
    const double C881 = C71 * C820;
    const double C880 = -C818;
    const double C879 = C817 / C73;
    const double C878 = C814 / C73;
    const double C877 = C811 * ae;
    const double C876 = C807 * ae;
    const double C973 = C363 * C893;
    const double C972 = C715 - C925;
    const double C971 = C713 - C923;
    const double C970 = C120 * C895;
    const double C969 = C711 - C921;
    const double C968 = C120 * C885;
    const double C967 = C272 * C883;
    const double C966 = C707 - C918;
    const double C965 = C705 - C916;
    const double C964 = C703 - C914;
    const double C963 = C123 * C877;
    const double C962 = C63 * C876;
    const double C961 = C206 - C912;
    const double C960 = C911 - C799;
    const double C959 = C910 - C797;
    const double C958 = C909 - C795;
    const double C957 = C908 - C793;
    const double C956 = C907 - C791;
    const double C955 = C906 - C789;
    const double C954 = C905 - C787;
    const double C953 = C210 - C904;
    const double C952 = C903 - C785;
    const double C951 = C902 - C783;
    const double C950 = C901 - C774;
    const double C949 = C900 / C73;
    const double C948 = C198 - C899;
    const double C947 = C898 - C771;
    const double C946 = C897 / C73;
    const double C945 = C896 - C768;
    const double C944 = C62 * C876;
    const double C943 = C894 - C764;
    const double C942 = C70 * C893;
    const double C941 = C892 - C759;
    const double C940 = C891 / C73;
    const double C939 = C210 - C890;
    const double C938 = C889 - C754;
    const double C937 = C888 / C73;
    const double C936 = C887 - C749;
    const double C935 = C886 / C73;
    const double C934 = C884 - C744;
    const double C933 = C71 * C883;
    const double C932 = C206 - C882;
    const double C931 = C881 - C739;
    const double C930 = C880 / C73;
    const double C929 = C816 - C879;
    const double C928 = C813 - C878;
    const double C991 = C973 / C73;
    const double C990 = C972 + C716;
    const double C989 = C971 + C714;
    const double C988 = C969 + C712;
    const double C987 = C967 / C73;
    const double C986 = C966 + C708;
    const double C985 = C965 + C706;
    const double C984 = C964 + C704;
    const double C983 = C962 / C73;
    const double C982 = C949 - C847;
    const double C981 = C946 - C843;
    const double C980 = -C944;
    const double C979 = -C942;
    const double C978 = C940 - C834;
    const double C977 = C937 - C830;
    const double C976 = C935 - C827;
    const double C975 = -C933;
    const double C974 = C930 - C819;
    const double C1003 = C717 - C991;
    const double C1002 = C990 + C926;
    const double C1001 = C989 + C924;
    const double C1000 = C988 + C922;
    const double C999 = C709 - C987;
    const double C998 = C986 + C919;
    const double C997 = C985 + C917;
    const double C996 = C984 + C915;
    const double C995 = C701 - C983;
    const double C994 = C980 / C73;
    const double C993 = C979 / C73;
    const double C992 = C975 / C73;
    const double C1009 = C1003 + C718;
    const double C1008 = C999 + C710;
    const double C1007 = C995 + C702;
    const double C1006 = C994 - C840;
    const double C1005 = C993 - C837;
    const double C1004 = C992 - C823;
    const double C1012 = C1009 + C927;
    const double C1011 = C1008 + C920;
    const double C1010 = C1007 + C913;
    const double d2nexx200000 =
        (2 * Pi *
         (C244 * C448 - (C65 * C876) / C73 + C240 * C227 + C67 * C808 +
          C228 * C241 +
          C69 * (C722 - C601 + C809 +
                 C120 * (C810 + C198 - (C120 * C877) / C73))) *
         C70 * C71) /
        C73;
    const double d2nexx020000 =
        (2 * Pi *
         (C1006 * C70 * C266 + C945 * C70 * C267 +
          (C62 * ((-C877 * C141) / C73 - C601) - (C300 * C119) / C73) * C70 *
              C268)) /
        C73;
    const double d2nexx002000 =
        (2 * Pi *
         (C1006 * C357 + C955 * C358 +
          (C62 * ((-C877 * C146) / C73 - C601) - (C391 * C119) / C73) * C359) *
         C71) /
        C73;
    const double d2nexx110000 =
        (2 * Pi *
         (C1010 * C70 * C272 + (C225 * C276 - (C63 * C657) / C73 + C194 * C451 +
                                C66 * (C776 + C662 - (C120 * C963) / C73)) *
                                   C70 * C274)) /
        C73;
    const double d2nexx101000 =
        (2 * Pi *
         (C1010 * C363 + (C225 * C367 - (C63 * C680) / C73 + C194 * C494 +
                          C66 * (C864 + C686 - (C120 * C124 * C877) / C73)) *
                             C365) *
         C71) /
        C73;
    const double d2nexx011000 =
        (2 * Pi *
         ((C1006 * C363 + C955 * C365) * C272 +
          (C945 * C363 +
           ((-C62 * C124 * C963) / C73 - (C524 * C119) / C73) * C365) *
              C274)) /
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
         (C244 * C452 - (C65 * C726) / C73 + C240 * C219 + C67 * C812 +
          C228 * C230 + C69 * (C728 - C609 + C120 * C928)) *
         C70 * C71) /
        C73;
    const double d2nexy020000 =
        (2 * Pi *
         (C981 * C70 * C266 + C947 * C70 * C267 +
          (C62 * (C662 - C609 + C123 * C948) - (C319 * C119) / C73) * C70 *
              C268)) /
        C73;
    const double d2nexy002000 =
        (2 * Pi *
         (C981 * C357 + C956 * C358 +
          (C62 * ((-C730 * C146) / C73 - C609) - (C392 * C119) / C73) * C359) *
         C71) /
        C73;
    const double d2nexy110000 =
        (2 * Pi *
         (C996 * C70 * C272 + (C225 * C290 + C63 * C844 + C194 * C470 +
                               C66 * (C809 + C123 * C928)) *
                                  C70 * C274)) /
        C73;
    const double d2nexy101000 =
        (2 * Pi *
         (C996 * C363 +
          (C225 * C369 - (C63 * C682) / C73 + C194 * C495 + C66 * C124 * C928) *
              C365) *
         C71) /
        C73;
    const double d2nexy011000 =
        (2 * Pi *
         ((C981 * C363 + C956 * C365) * C272 +
          (C947 * C363 + (C62 * C124 * C948 - (C522 * C119) / C73) * C365) *
              C274)) /
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
         (C244 * C455 - (C65 * C731) / C73 + C240 * C221 + C67 * C815 +
          C228 * C231 + C69 * (C733 - C615 + C120 * C929)) *
         C70 * C71) /
        C73;
    const double d2nexz020000 =
        (2 * Pi *
         (C982 * C70 * C266 + C950 * C70 * C267 +
          (C62 * ((-C735 * C141) / C73 - C615) - (C302 * C119) / C73) * C70 *
              C268)) /
        C73;
    const double d2nexz002000 =
        (2 * Pi *
         (C982 * C357 + C957 * C358 +
          (C62 * (C686 - C615 + C124 * (C198 - (C124 * C735) / C73)) -
           (C410 * C119) / C73) *
              C359) *
         C71) /
        C73;
    const double d2nexz110000 =
        (2 * Pi *
         (C997 * C70 * C272 +
          (C225 * C281 - (C63 * C664) / C73 + C194 * C465 + C66 * C123 * C929) *
              C70 * C274)) /
        C73;
    const double d2nexz101000 =
        (2 * Pi *
         (C997 * C363 + (C225 * C382 + C63 * C858 + C194 * C498 +
                         C66 * (C809 + C124 * C929)) *
                            C365) *
         C71) /
        C73;
    const double d2nexz011000 =
        (2 * Pi *
         ((C982 * C363 + C957 * C365) * C272 +
          (C950 * C363 +
           (C62 * (C662 - (C124 * C123 * C735) / C73) - (C526 * C119) / C73) *
               C365) *
              C274)) /
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
         (C974 * C65 + C931 * C67 +
          (C71 * (C622 - C623 + C120 * C932) - (C241 * C125) / C73) * C69) *
         C70) /
        C73;
    const double d2neyx020000 =
        (2 * Pi *
         (C335 * C448 - (C266 * C736) / C73 + C332 * C276 + C267 * C849 +
          C323 * C300 +
          C268 * (C776 - C623 + C123 * (C810 - (C123 * C740) / C73))) *
         C62 * C70) /
        C73;
    const double d2neyx002000 =
        (2 * Pi *
         (C974 * C62 * C357 + C958 * C62 * C358 +
          (C71 * ((-C740 * C146) / C73 - C623) - (C391 * C125) / C73) * C62 *
              C359)) /
        C73;
    const double d2neyx110000 =
        (2 * Pi *
         (C998 * C63 + (C321 * C227 + C272 * C820 + C313 * C451 +
                        C274 * (C722 + C123 * C932)) *
                           C66) *
         C70) /
        C73;
    const double d2neyx101000 =
        (2 * Pi *
         ((C974 * C63 + C931 * C66) * C363 +
          (C958 * C63 + (C71 * C124 * C932 - (C494 * C125) / C73) * C66) *
              C365)) /
        C73;
    const double d2neyx011000 =
        (2 * Pi *
         (C998 * C62 * C363 + (C321 * C367 - (C272 * C687) / C73 + C313 * C524 +
                               C274 * (C864 - (C123 * C124 * C740) / C73)) *
                                  C62 * C365)) /
        C73;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx110000;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx011000;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyx200000 - 0.5 * d2neyx020000 + d2neyx002000;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx101000;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyx200000 - std::sqrt(0.75) * d2neyx020000;
    const double d2neyy200000 =
        (2 * Pi *
         (C1004 * C65 + C934 * C67 +
          (C71 * ((-C885 * C131) / C73 - C630) - (C230 * C125) / C73) * C69) *
         C70) /
        C73;
    const double d2neyy020000 =
        (2 * Pi *
         (C335 * C452 - (C266 * C883) / C73 + C332 * C290 + C267 * C850 +
          C323 * C319 +
          C268 * (C779 - C630 + C123 * C206 - C723 +
                  C123 * (C813 + C206 - (C123 * C885) / C73))) *
         C62 * C70) /
        C73;
    const double d2neyy002000 =
        (2 * Pi *
         (C1004 * C62 * C357 + C959 * C62 * C358 +
          (C71 * ((-C885 * C146) / C73 - C630) - (C392 * C125) / C73) * C62 *
              C359)) /
        C73;
    const double d2neyy110000 =
        (2 * Pi *
         (C1011 * C63 + (C321 * C219 - (C272 * C627) / C73 + C313 * C470 +
                         C274 * (C728 + C622 - (C123 * C968) / C73)) *
                            C66) *
         C70) /
        C73;
    const double d2neyy101000 =
        (2 * Pi *
         ((C1004 * C63 + C934 * C66) * C363 +
          (C959 * C63 +
           ((-C71 * C124 * C968) / C73 - (C495 * C125) / C73) * C66) *
              C365)) /
        C73;
    const double d2neyy011000 =
        (2 * Pi *
         (C1011 * C62 * C363 +
          (C321 * C369 - (C272 * C689) / C73 + C313 * C522 +
           C274 * (C866 + C693 - (C123 * C124 * C885) / C73)) *
              C62 * C365)) /
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
         (C976 * C65 + C936 * C67 +
          (C71 * ((-C750 * C131) / C73 - C636) - (C231 * C125) / C73) * C69) *
         C70) /
        C73;
    const double d2neyz020000 =
        (2 * Pi *
         (C335 * C455 - (C266 * C746) / C73 + C332 * C281 + C267 * C851 +
          C323 * C302 +
          C268 * (C781 - C636 + C123 * (C816 - (C123 * C750) / C73))) *
         C62 * C70) /
        C73;
    const double d2neyz002000 =
        (2 * Pi *
         (C976 * C62 * C357 + C960 * C62 * C358 +
          (C71 * (C693 - C636 + C124 * C961) - (C410 * C125) / C73) * C62 *
              C359)) /
        C73;
    const double d2neyz110000 =
        (2 * Pi *
         (C1000 * C63 + (C321 * C221 - (C272 * C633) / C73 + C313 * C465 +
                         C274 * (C733 - (C123 * C872) / C73)) *
                            C66) *
         C70) /
        C73;
    const double d2neyz101000 =
        (2 * Pi *
         ((C976 * C63 + C936 * C66) * C363 +
          (C960 * C63 +
           (C71 * (C622 - (C124 * C872) / C73) - (C498 * C125) / C73) * C66) *
              C365)) /
        C73;
    const double d2neyz011000 =
        (2 * Pi *
         (C1000 * C62 * C363 + (C321 * C382 + C272 * C861 + C313 * C526 +
                                C274 * (C806 + C123 * C961)) *
                                   C62 * C365)) /
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
         (C977 * C71 * C65 + C938 * C71 * C67 +
          (C70 * (C641 - C642 + C120 * C939) - (C241 * C126) / C73) * C71 *
              C69)) /
        C73;
    const double d2nezx020000 =
        (2 * Pi *
         (C977 * C266 + C951 * C267 +
          (C70 * ((-C755 * C141) / C73 - C642) - (C300 * C126) / C73) * C268) *
         C62) /
        C73;
    const double d2nezx002000 =
        (2 * Pi *
         (C426 * C448 - (C357 * C751) / C73 + C423 * C367 + C358 * C863 +
          C414 * C391 +
          C359 * (C864 - C642 + C124 * (C810 - (C124 * C755) / C73))) *
         C71 * C62) /
        C73;
    const double d2nezx110000 =
        (2 * Pi *
         ((C977 * C272 + C951 * C274) * C63 +
          (C938 * C272 + (C70 * C123 * C939 - (C451 * C126) / C73) * C274) *
              C66)) /
        C73;
    const double d2nezx101000 =
        (2 * Pi *
         (C1001 * C71 * C63 + (C412 * C227 + C363 * C831 + C404 * C494 +
                               C365 * (C722 + C124 * C939)) *
                                  C71 * C66)) /
        C73;
    const double d2nezx011000 =
        (2 * Pi *
         (C1001 * C272 + (C412 * C276 - (C363 * C673) / C73 + C404 * C524 +
                          C365 * (C776 - (C124 * C123 * C755) / C73)) *
                             C274) *
         C62) /
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
         (C978 * C71 * C65 + C941 * C71 * C67 +
          (C70 * ((-C760 * C131) / C73 - C649) - (C230 * C126) / C73) * C71 *
              C69)) /
        C73;
    const double d2nezy020000 =
        (2 * Pi *
         (C978 * C266 + C952 * C267 +
          (C70 * (C677 - C649 + C123 * C953) - (C319 * C126) / C73) * C268) *
         C62) /
        C73;
    const double d2nezy002000 =
        (2 * Pi *
         (C426 * C452 - (C357 * C756) / C73 + C423 * C369 + C358 * C865 +
          C414 * C392 +
          C359 * (C866 - C649 + C124 * (C813 - (C124 * C760) / C73))) *
         C71 * C62) /
        C73;
    const double d2nezy110000 =
        (2 * Pi *
         ((C978 * C272 + C952 * C274) * C63 +
          (C941 * C272 +
           (C70 * (C641 - (C123 * C873) / C73) - (C470 * C126) / C73) * C274) *
              C66)) /
        C73;
    const double d2nezy101000 =
        (2 * Pi *
         (C1002 * C71 * C63 + (C412 * C219 - (C363 * C646) / C73 + C404 * C495 +
                               C365 * (C728 - (C124 * C873) / C73)) *
                                  C71 * C66)) /
        C73;
    const double d2nezy011000 =
        (2 * Pi *
         (C1002 * C272 + (C412 * C290 + C363 * C853 + C404 * C522 +
                          C365 * (C779 + C124 * C953)) *
                             C274) *
         C62) /
        C73;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy110000;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy011000;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezy200000 - 0.5 * d2nezy020000 + d2nezy002000;
    d2nezy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy101000;
    d2nezy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezy200000 - std::sqrt(0.75) * d2nezy020000;
    const double d2nezz200000 =
        (2 * Pi *
         (C1005 * C71 * C65 + C943 * C71 * C67 +
          (C70 * ((-C895 * C131) / C73 - C655) - (C231 * C126) / C73) * C71 *
              C69)) /
        C73;
    const double d2nezz020000 =
        (2 * Pi *
         (C1005 * C266 + C954 * C267 +
          (C70 * ((-C895 * C141) / C73 - C655) - (C302 * C126) / C73) * C268) *
         C62) /
        C73;
    const double d2nezz002000 =
        (2 * Pi *
         (C426 * C455 - (C357 * C893) / C73 + C423 * C382 + C358 * C867 +
          C414 * C410 +
          C359 * (C806 - C655 + C124 * C210 - C723 +
                  C124 * (C816 + C210 - (C124 * C895) / C73))) *
         C71 * C62) /
        C73;
    const double d2nezz110000 =
        (2 * Pi *
         ((C1005 * C272 + C954 * C274) * C63 +
          (C943 * C272 +
           ((-C70 * C123 * C970) / C73 - (C465 * C126) / C73) * C274) *
              C66)) /
        C73;
    const double d2nezz101000 =
        (2 * Pi *
         (C1012 * C71 * C63 + (C412 * C221 - (C363 * C652) / C73 + C404 * C498 +
                               C365 * (C733 + C641 - (C124 * C970) / C73)) *
                                  C71 * C66)) /
        C73;
    const double d2nezz011000 =
        (2 * Pi *
         (C1012 * C272 + (C412 * C281 - (C363 * C678) / C73 + C404 * C526 +
                          C365 * (C781 + C677 - (C124 * C123 * C895) / C73)) *
                             C274) *
         C62) /
        C73;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz110000;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz011000;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezz200000 - 0.5 * d2nezz020000 + d2nezz002000;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz101000;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezz200000 - std::sqrt(0.75) * d2nezz020000;
}
