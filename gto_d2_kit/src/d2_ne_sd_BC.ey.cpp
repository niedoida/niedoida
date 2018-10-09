/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sd_BC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_02_23(double ae,
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
    const double C522 = ae + be;
    const double C521 = ae * be;
    const double C520 = xA - xB;
    const double C523 = std::pow(C520, 2);
    const double C524 = C523 * C521;
    const double C525 = C524 / C522;
    const double C526 = -C525;
    const double C527 = std::exp(C526);
    const double C541 = yA - yB;
    const double C542 = std::pow(C541, 2);
    const double C543 = C542 * C521;
    const double C544 = C543 / C522;
    const double C545 = -C544;
    const double C546 = std::exp(C545);
    const double C557 = zA - zB;
    const double C558 = std::pow(C557, 2);
    const double C559 = C558 * C521;
    const double C560 = C559 / C522;
    const double C561 = -C560;
    const double C562 = std::exp(C561);
    const double C577 = C557 * ae;
    const double C576 = C541 * ae;
    const double C575 = 2 * C522;
    const double C574 = std::pow(C522, 2);
    const double C573 = C520 * ae;
    const double C582 = C562 * C577;
    const double C581 = C546 * C576;
    const double C580 = std::pow(C575, -2);
    const double C579 = std::pow(C575, -1);
    const double C578 = C527 * C573;
    const double C59 = (C527 * std::pow(C573, 2)) / C574 + C527 / C575;
    const double C64 = C578 / C522;
    const double C66 = C579 * C527;
    const double C67 = (2 * C579 * C578) / C522;
    const double C69 = C580 * C527;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C521) / C522);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C521) / C522);
    const double C262 = (C546 * std::pow(C576, 2)) / C574 + C546 / C575;
    const double C263 = (2 * C579 * C581) / C522;
    const double C264 = C580 * C546;
    const double C268 = C581 / C522;
    const double C270 = C579 * C546;
    const double C347 = (C562 * std::pow(C577, 2)) / C574 + C562 / C575;
    const double C348 = (2 * C579 * C582) / C522;
    const double C349 = C580 * C562;
    const double C353 = C582 / C522;
    const double C355 = C579 * C562;
    const double C90 = zA - zB;
    const double C89 = yA - yB;
    const double C88 = be * zB;
    const double C87 = ae * zA;
    const double C86 = be * yB;
    const double C85 = ae * yA;
    const double C84 = bs[4];
    const double C83 = 0 * ae;
    const double C82 = bs[3];
    const double C81 = 0 * ae;
    const double C80 = ae * be;
    const double C79 = 0 * be;
    const double C78 = 0 * be;
    const double C77 = xA - xB;
    const double C76 = bs[1];
    const double C75 = bs[2];
    const double C74 = ae + be;
    const double C73 = be * xB;
    const double C72 = ae * xA;
    const double C101 = C80 * C90;
    const double C100 = C80 * C89;
    const double C99 = C87 + C88;
    const double C98 = C85 + C86;
    const double C97 = C83 / C74;
    const double C96 = C81 / C74;
    const double C95 = C80 * C77;
    const double C94 = std::pow(C74, 2);
    const double C93 = C77 * C78;
    const double C92 = 2 * C74;
    const double C91 = C72 + C73;
    const double C113 = C101 * C70;
    const double C112 = C100 * C71;
    const double C111 = C99 / C74;
    const double C110 = C98 / C74;
    const double C109 = std::pow(C92, 4);
    const double C108 = -C92;
    const double C107 = C95 * C527;
    const double C106 = 2 * C94;
    const double C105 = C93 / C74;
    const double C104 = C76 * C92;
    const double C103 = std::pow(C92, 2);
    const double C102 = C91 / C74;
    const double C125 = 2 * C113;
    const double C124 = 2 * C112;
    const double C123 = C111 - zC;
    const double C122 = C110 - yC;
    const double C121 = std::pow(C108, 3);
    const double C120 = C75 * C103;
    const double C119 = C107 / C94;
    const double C118 = C78 / C106;
    const double C117 = 2 * C107;
    const double C116 = C79 / C106;
    const double C115 = 0 - C105;
    const double C114 = C102 - xC;
    const double C145 = std::pow(C123, 2);
    const double C144 = C123 * C122;
    const double C143 = be * C123;
    const double C142 = C123 * C114;
    const double C141 = C122 * C123;
    const double C140 = std::pow(C122, 2);
    const double C139 = be * C122;
    const double C138 = C122 * C114;
    const double C137 = C74 * C123;
    const double C136 = C114 * C123;
    const double C135 = C74 * C122;
    const double C134 = C114 * C122;
    const double C133 = C82 * C121;
    const double C132 = C114 * C120;
    const double C131 = be * C114;
    const double C130 = C74 * C114;
    const double C129 = C96 - C119;
    const double C128 = C77 * C117;
    const double C127 = C115 * ae;
    const double C126 = std::pow(C114, 2);
    const double C170 = C145 * C82;
    const double C169 = C144 * be;
    const double C168 = C143 * C82;
    const double C167 = C142 * be;
    const double C166 = C141 * be;
    const double C165 = C140 * C82;
    const double C164 = C139 * C82;
    const double C163 = C138 * be;
    const double C162 = C137 * C82;
    const double C161 = C137 * C75;
    const double C160 = C137 * C76;
    const double C159 = C136 * be;
    const double C158 = C135 * C82;
    const double C157 = C135 * C75;
    const double C156 = C135 * C76;
    const double C155 = C134 * be;
    const double C154 = C131 * C82;
    const double C153 = C130 * C82;
    const double C152 = C129 / C92;
    const double C151 = C126 * C82;
    const double C150 = C130 * C75;
    const double C149 = C77 * C129;
    const double C148 = C130 * C76;
    const double C147 = C128 / C74;
    const double C146 = C127 / C74;
    const double C192 = C170 * C121;
    const double C191 = C82 * C169;
    const double C190 = C168 * C103;
    const double C189 = C82 * C167;
    const double C188 = C82 * C166;
    const double C187 = C165 * C121;
    const double C186 = C164 * C103;
    const double C185 = C82 * C163;
    const double C184 = C162 * C103;
    const double C183 = C82 * C159;
    const double C182 = C161 * C92;
    const double C181 = C158 * C103;
    const double C180 = C82 * C155;
    const double C179 = C157 * C92;
    const double C178 = C154 * C103;
    const double C177 = C153 * C103;
    const double C176 = C152 + C97;
    const double C175 = C151 * C121;
    const double C174 = C150 * C92;
    const double C173 = C149 + C66;
    const double C172 = C527 - C147;
    const double C171 = C146 - C116;
    const double C213 = C120 + C192;
    const double C212 = C121 * C191;
    const double C211 = 2 * C190;
    const double C210 = C121 * C189;
    const double C209 = C121 * C188;
    const double C208 = C120 + C187;
    const double C207 = 2 * C186;
    const double C206 = C121 * C185;
    const double C205 = C184 * C126;
    const double C204 = C121 * C183;
    const double C203 = -2 * C182;
    const double C202 = C181 * C126;
    const double C201 = C121 * C180;
    const double C200 = -2 * C179;
    const double C199 = 2 * C178;
    const double C198 = 2 * C177;
    const double C197 = C120 + C175;
    const double C196 = -2 * C174;
    const double C195 = C173 * ae;
    const double C194 = C172 * ae;
    const double C193 = C171 / C92;
    const double C224 = C213 * be;
    const double C223 = C208 * be;
    const double C222 = 2 * C205;
    const double C221 = C114 * C203;
    const double C220 = 2 * C202;
    const double C219 = C114 * C200;
    const double C218 = C114 * C198;
    const double C217 = C197 * be;
    const double C216 = C114 * C196;
    const double C215 = C195 / C74;
    const double C214 = C194 / C74;
    const double C229 = C203 + C222;
    const double C228 = C200 + C220;
    const double C227 = C218 - C120;
    const double C226 = C216 + C104;
    const double C225 = C214 - C118;
    const double C232 = C114 * C227;
    const double C231 = C225 / C92;
    const double C230 = C77 * C225;
    const double C235 = C196 + C232;
    const double C234 = C231 + C215;
    const double C233 = C230 + C64;
    const double C237 = C235 - C132;
    const double C236 = C233 * ae;
    const double C238 = C236 / C74;
    const double C239 = C193 + C238;
    const double C240 = C239 + C129;
    const double C284 = 0 * ae;
    const double C283 = C112 / C94;
    const double C282 = 0 * ae;
    const double C281 = C89 * C124;
    const double C280 = 0 * be;
    const double C279 = 0 * be;
    const double C278 = C184 * C140;
    const double C277 = C122 * C203;
    const double C276 = C122 * C120;
    const double C275 = 2 * C181;
    const double C274 = C122 * C200;
    const double C273 = C177 * C140;
    const double C272 = C122 * C196;
    const double C294 = C284 / C74;
    const double C293 = C282 / C74;
    const double C292 = C279 / C106;
    const double C291 = C281 / C74;
    const double C290 = C280 / C106;
    const double C289 = C89 * C279;
    const double C288 = 2 * C278;
    const double C287 = C122 * C275;
    const double C286 = C274 + C104;
    const double C285 = 2 * C273;
    const double C300 = C293 - C283;
    const double C299 = C71 - C291;
    const double C298 = C289 / C74;
    const double C297 = C203 + C288;
    const double C296 = C287 - C120;
    const double C295 = C196 + C285;
    const double C305 = C300 / C92;
    const double C304 = C89 * C300;
    const double C303 = C299 * ae;
    const double C302 = 0 - C298;
    const double C301 = C122 * C296;
    const double C310 = C305 + C294;
    const double C309 = C304 + C270;
    const double C308 = C303 / C74;
    const double C307 = C302 * ae;
    const double C306 = C200 + C301;
    const double C314 = C309 * ae;
    const double C313 = C308 - C292;
    const double C312 = C307 / C74;
    const double C311 = C306 - C276;
    const double C318 = C314 / C74;
    const double C317 = C313 / C92;
    const double C316 = C89 * C313;
    const double C315 = C312 - C290;
    const double C321 = C317 + C318;
    const double C320 = C316 + C268;
    const double C319 = C315 / C92;
    const double C322 = C320 * ae;
    const double C323 = C322 / C74;
    const double C324 = C319 + C323;
    const double C325 = C324 + C300;
    const double C369 = 0 * ae;
    const double C368 = C113 / C94;
    const double C367 = 0 * ae;
    const double C366 = C90 * C125;
    const double C365 = 0 * be;
    const double C364 = 0 * be;
    const double C363 = C123 * C120;
    const double C362 = 2 * C184;
    const double C361 = C123 * C203;
    const double C360 = C181 * C145;
    const double C359 = C123 * C200;
    const double C358 = C177 * C145;
    const double C357 = C123 * C196;
    const double C379 = C369 / C74;
    const double C378 = C367 / C74;
    const double C377 = C364 / C106;
    const double C376 = C366 / C74;
    const double C375 = C365 / C106;
    const double C374 = C90 * C364;
    const double C373 = C123 * C362;
    const double C372 = C361 + C104;
    const double C371 = 2 * C360;
    const double C370 = 2 * C358;
    const double C385 = C378 - C368;
    const double C384 = C70 - C376;
    const double C383 = C374 / C74;
    const double C382 = C373 - C120;
    const double C381 = C200 + C371;
    const double C380 = C196 + C370;
    const double C390 = C385 / C92;
    const double C389 = C90 * C385;
    const double C388 = C384 * ae;
    const double C387 = 0 - C383;
    const double C386 = C123 * C382;
    const double C395 = C390 + C379;
    const double C394 = C389 + C355;
    const double C393 = C388 / C74;
    const double C392 = C387 * ae;
    const double C391 = C203 + C386;
    const double C399 = C394 * ae;
    const double C398 = C393 - C377;
    const double C397 = C392 / C74;
    const double C396 = C391 - C363;
    const double C403 = C399 / C74;
    const double C402 = C398 / C92;
    const double C401 = C90 * C398;
    const double C400 = C397 - C375;
    const double C406 = C402 + C403;
    const double C405 = C401 + C353;
    const double C404 = C400 / C92;
    const double C407 = C405 * ae;
    const double C408 = C407 / C74;
    const double C409 = C404 + C408;
    const double C410 = C409 + C385;
    const double C447 = C143 * C75;
    const double C446 = C139 * C75;
    const double C445 = C283 - C293;
    const double C444 = C292 - C308;
    const double C443 = C114 * C362;
    const double C442 = C182 * be;
    const double C441 = 2 * C160;
    const double C440 = C114 * C275;
    const double C439 = C179 * be;
    const double C438 = 2 * C156;
    const double C437 = C122 * C227;
    const double C436 = C131 * C75;
    const double C435 = C174 * be;
    const double C434 = C119 - C96;
    const double C433 = 2 * C148;
    const double C432 = C118 - C214;
    const double C455 = C447 * C92;
    const double C454 = C446 * C92;
    const double C453 = C122 * C443;
    const double C452 = -2 * C442;
    const double C451 = C122 * C440;
    const double C450 = -2 * C439;
    const double C449 = C436 * C92;
    const double C448 = -2 * C435;
    const double C460 = -2 * C455;
    const double C459 = C452 / C74;
    const double C458 = C451 - C132;
    const double C457 = C450 / C74;
    const double C456 = C448 / C74;
    const double C487 = C368 - C378;
    const double C486 = C377 - C393;
    const double C485 = -2 * C454;
    const double C484 = C123 * C443;
    const double C483 = C123 * C440;
    const double C482 = C123 * C227;
    const double C488 = C484 - C132;
    const double C513 = C122 * C362;
    const double C512 = C123 * C296;
    const double C511 = -2 * C449;
    const double C510 = C122 * C198;
    const double C515 = C123 * C513;
    const double C514 = C123 * C510;
    const double C516 = C515 - C276;
    const double C708 = C487 * C372;
    const double C707 = C486 * C441;
    const double C706 = C487 * C359;
    const double C705 = C486 * C438;
    const double C704 = C487 * C357;
    const double C703 = C486 * C433;
    const double C702 = C445 * C277;
    const double C701 = C444 * C441;
    const double C700 = C445 * C286;
    const double C699 = C444 * C438;
    const double C698 = C445 * C272;
    const double C697 = C444 * C433;
    const double C696 = C434 * C221;
    const double C695 = C432 * C441;
    const double C694 = C434 * C219;
    const double C693 = C432 * C438;
    const double C692 = C434 * C226;
    const double C691 = C432 * C433;
    const double C690 = C382 * be;
    const double C689 = C123 * C224;
    const double C688 = 2 * C455;
    const double C687 = C123 * C275;
    const double C686 = C123 * C212;
    const double C685 = C123 * C198;
    const double C684 = C123 * C210;
    const double C683 = C123 * C207;
    const double C682 = C123 * C209;
    const double C681 = C372 * C124;
    const double C680 = C123 * C223;
    const double C679 = C359 * C124;
    const double C678 = C123 * C206;
    const double C677 = C357 * C124;
    const double C676 = C123 * C199;
    const double C675 = C123 * C204;
    const double C674 = C372 * C117;
    const double C673 = C123 * C201;
    const double C672 = C359 * C117;
    const double C671 = C123 * C217;
    const double C670 = C357 * C117;
    const double C669 = C122 * C224;
    const double C668 = C277 * C125;
    const double C667 = C122 * C211;
    const double C666 = C122 * C212;
    const double C665 = C286 * C125;
    const double C664 = C122 * C210;
    const double C663 = C272 * C125;
    const double C662 = C513 * be;
    const double C661 = C122 * C209;
    const double C660 = C296 * be;
    const double C659 = C122 * C223;
    const double C658 = 2 * C454;
    const double C657 = C510 * be;
    const double C656 = C122 * C206;
    const double C655 = C122 * C204;
    const double C654 = C277 * C117;
    const double C653 = C160 * C117;
    const double C652 = C122 * C199;
    const double C651 = C122 * C201;
    const double C650 = C286 * C117;
    const double C649 = C156 * C117;
    const double C648 = C122 * C217;
    const double C647 = C272 * C117;
    const double C646 = C148 * C117;
    const double C645 = C224 / C74;
    const double C644 = C145 * C84;
    const double C643 = C114 * C224;
    const double C642 = C221 * C125;
    const double C641 = C145 * C75;
    const double C640 = C160 * C125;
    const double C639 = C212 / C74;
    const double C638 = C84 * C169;
    const double C637 = C114 * C212;
    const double C636 = C219 * C125;
    const double C635 = C75 * C169;
    const double C634 = C156 * C125;
    const double C633 = C84 * C167;
    const double C632 = C210 / C74;
    const double C631 = C114 * C211;
    const double C630 = C114 * C210;
    const double C629 = C226 * C125;
    const double C628 = C75 * C167;
    const double C627 = C148 * C125;
    const double C626 = C209 / C74;
    const double C625 = C84 * C166;
    const double C624 = C114 * C209;
    const double C623 = C221 * C124;
    const double C622 = C75 * C166;
    const double C621 = C160 * C124;
    const double C620 = C223 / C74;
    const double C619 = C140 * C84;
    const double C618 = C114 * C223;
    const double C617 = C219 * C124;
    const double C616 = C140 * C75;
    const double C615 = C156 * C124;
    const double C614 = C84 * C163;
    const double C613 = C206 / C74;
    const double C612 = C114 * C207;
    const double C611 = C114 * C206;
    const double C610 = C226 * C124;
    const double C609 = C75 * C163;
    const double C608 = C148 * C124;
    const double C607 = C84 * C159;
    const double C606 = C184 * be;
    const double C605 = C204 / C74;
    const double C604 = C443 * be;
    const double C603 = C114 * C204;
    const double C602 = C75 * C159;
    const double C601 = C84 * C155;
    const double C600 = C181 * be;
    const double C599 = C201 / C74;
    const double C598 = C440 * be;
    const double C597 = C114 * C201;
    const double C596 = C75 * C155;
    const double C595 = C126 * C84;
    const double C594 = C177 * be;
    const double C593 = C120 * be;
    const double C592 = C114 * C199;
    const double C591 = C217 / C74;
    const double C590 = C227 * be;
    const double C589 = C114 * C217;
    const double C588 = 2 * C449;
    const double C587 = C126 * C75;
    const double C796 = C690 / C74;
    const double C795 = C689 / C74;
    const double C794 = C459 - C688;
    const double C793 = C687 * be;
    const double C792 = C686 / C74;
    const double C791 = C685 * be;
    const double C790 = C684 / C74;
    const double C789 = C682 / C74;
    const double C788 = C681 / C74;
    const double C787 = C71 * C680;
    const double C786 = C679 / C74;
    const double C785 = C71 * C678;
    const double C784 = C677 / C74;
    const double C783 = C675 / C74;
    const double C782 = C674 / C74;
    const double C781 = C527 * C673;
    const double C780 = C672 / C74;
    const double C779 = C527 * C671;
    const double C778 = C670 / C74;
    const double C777 = C70 * C669;
    const double C776 = C668 / C74;
    const double C775 = C666 / C74;
    const double C774 = C665 / C74;
    const double C773 = C70 * C664;
    const double C772 = C663 / C74;
    const double C771 = C662 / C74;
    const double C770 = C661 / C74;
    const double C769 = C660 / C74;
    const double C768 = C659 / C74;
    const double C767 = C457 - C658;
    const double C766 = C657 / C74;
    const double C765 = C656 / C74;
    const double C764 = C527 * C655;
    const double C763 = C654 / C74;
    const double C762 = 2 * C653;
    const double C761 = C651 / C74;
    const double C760 = C650 / C74;
    const double C759 = 2 * C649;
    const double C758 = C527 * C648;
    const double C757 = C647 / C74;
    const double C756 = 2 * C646;
    const double C755 = C644 * C109;
    const double C754 = C70 * C643;
    const double C753 = C642 / C74;
    const double C752 = C641 * C103;
    const double C751 = 2 * C640;
    const double C750 = C109 * C638;
    const double C749 = C70 * C637;
    const double C748 = C636 / C74;
    const double C747 = C103 * C635;
    const double C746 = 2 * C634;
    const double C745 = C109 * C633;
    const double C744 = C630 / C74;
    const double C743 = C629 / C74;
    const double C742 = C103 * C628;
    const double C741 = 2 * C627;
    const double C740 = C109 * C625;
    const double C739 = C71 * C624;
    const double C738 = C623 / C74;
    const double C737 = C103 * C622;
    const double C736 = 2 * C621;
    const double C735 = C619 * C109;
    const double C734 = C71 * C618;
    const double C733 = C617 / C74;
    const double C732 = C616 * C103;
    const double C731 = 2 * C615;
    const double C730 = C109 * C614;
    const double C729 = C611 / C74;
    const double C728 = C610 / C74;
    const double C727 = C103 * C609;
    const double C726 = 2 * C608;
    const double C725 = C109 * C607;
    const double C724 = 2 * C606;
    const double C723 = C604 / C74;
    const double C722 = C603 / C74;
    const double C721 = C103 * C602;
    const double C720 = C109 * C601;
    const double C719 = 2 * C600;
    const double C718 = C598 / C74;
    const double C717 = C597 / C74;
    const double C716 = C103 * C596;
    const double C715 = C595 * C109;
    const double C714 = 2 * C594;
    const double C713 = C593 / C74;
    const double C712 = C590 / C74;
    const double C711 = C589 / C74;
    const double C710 = C456 - C588;
    const double C709 = C587 * C103;
    const double C865 = C353 * C747;
    const double C864 = C353 * C742;
    const double C863 = C114 * C750;
    const double C862 = C114 * C740;
    const double C861 = C268 * C737;
    const double C860 = C268 * C727;
    const double C859 = C64 * C721;
    const double C858 = C64 * C716;
    const double C857 = C794 - C795;
    const double C856 = C793 / C74;
    const double C855 = C457 - C792;
    const double C854 = C791 / C74;
    const double C853 = C456 - C790;
    const double C852 = C123 * C740;
    const double C851 = C485 - C789;
    const double C850 = C787 / C74;
    const double C849 = C785 / C74;
    const double C848 = C511 - C783;
    const double C847 = C781 / C74;
    const double C846 = C779 / C74;
    const double C845 = C777 / C74;
    const double C844 = C122 * C750;
    const double C843 = C460 - C775;
    const double C842 = C773 / C74;
    const double C841 = C459 - C770;
    const double C840 = C767 - C768;
    const double C839 = C456 - C765;
    const double C838 = C764 / C74;
    const double C837 = C527 * C721;
    const double C836 = C762 / C74;
    const double C835 = C122 * C720;
    const double C834 = C511 - C761;
    const double C833 = C527 * C716;
    const double C832 = C759 / C74;
    const double C831 = C758 / C74;
    const double C830 = C756 / C74;
    const double C829 = C133 + C755;
    const double C828 = C754 / C74;
    const double C827 = C752 - C104;
    const double C826 = C751 / C74;
    const double C825 = C749 / C74;
    const double C824 = C70 * C747;
    const double C823 = C746 / C74;
    const double C822 = C114 * C745;
    const double C821 = C460 - C744;
    const double C820 = C70 * C742;
    const double C819 = C741 / C74;
    const double C818 = C739 / C74;
    const double C817 = C71 * C737;
    const double C816 = C736 / C74;
    const double C815 = C133 + C735;
    const double C814 = C734 / C74;
    const double C813 = C732 - C104;
    const double C812 = C731 / C74;
    const double C811 = C114 * C730;
    const double C810 = C485 - C729;
    const double C809 = C71 * C727;
    const double C808 = C726 / C74;
    const double C807 = C114 * C725;
    const double C806 = C724 / C74;
    const double C805 = C459 - C722;
    const double C804 = C114 * C720;
    const double C803 = C719 / C74;
    const double C802 = C457 - C717;
    const double C801 = C133 + C715;
    const double C800 = C714 / C74;
    const double C799 = C592 - C713;
    const double C798 = C710 - C711;
    const double C797 = C709 - C104;
    const double C917 = C355 * C857;
    const double C916 = C355 * C855;
    const double C915 = C865 / C74;
    const double C914 = C355 * C853;
    const double C913 = C864 / C74;
    const double C912 = C270 * C841;
    const double C911 = C861 / C74;
    const double C910 = C270 * C840;
    const double C909 = C270 * C839;
    const double C908 = C860 / C74;
    const double C907 = C66 * C805;
    const double C906 = C859 / C74;
    const double C905 = C66 * C802;
    const double C904 = C858 / C74;
    const double C903 = C66 * C798;
    const double C902 = C852 / C74;
    const double C901 = C71 * C851;
    const double C900 = C786 - C850;
    const double C899 = C784 - C849;
    const double C898 = C527 * C848;
    const double C897 = C780 - C847;
    const double C896 = C778 - C846;
    const double C895 = C776 - C845;
    const double C894 = C844 / C74;
    const double C893 = C70 * C843;
    const double C892 = C772 - C842;
    const double C891 = C763 - C838;
    const double C890 = C837 / C74;
    const double C889 = C835 / C74;
    const double C888 = C527 * C834;
    const double C887 = C833 / C74;
    const double C886 = C757 - C831;
    const double C885 = C829 * be;
    const double C884 = C753 - C828;
    const double C883 = C827 * be;
    const double C882 = C748 - C825;
    const double C881 = C824 / C74;
    const double C880 = C822 / C74;
    const double C879 = C70 * C821;
    const double C878 = C820 / C74;
    const double C877 = C738 - C818;
    const double C876 = C817 / C74;
    const double C875 = C815 * be;
    const double C874 = C733 - C814;
    const double C873 = C813 * be;
    const double C872 = C811 / C74;
    const double C871 = C71 * C810;
    const double C870 = C809 / C74;
    const double C869 = C807 / C74;
    const double C868 = C804 / C74;
    const double C867 = C801 * be;
    const double C866 = C797 * be;
    const double C951 = C353 * C883;
    const double C950 = C705 - C915;
    const double C949 = C703 - C913;
    const double C948 = C114 * C885;
    const double C947 = C701 - C911;
    const double C946 = C114 * C875;
    const double C945 = C268 * C873;
    const double C944 = C697 - C908;
    const double C943 = C695 - C906;
    const double C942 = C693 - C904;
    const double C941 = C122 * C867;
    const double C940 = C64 * C866;
    const double C939 = C207 - C902;
    const double C938 = C788 + C901;
    const double C937 = C782 + C898;
    const double C936 = C211 - C894;
    const double C935 = C774 + C893;
    const double C934 = C836 - C890;
    const double C933 = C199 - C889;
    const double C932 = C760 + C888;
    const double C931 = C832 - C887;
    const double C930 = C527 * C866;
    const double C929 = C70 * C883;
    const double C928 = C823 - C881;
    const double C927 = C211 - C880;
    const double C926 = C743 + C879;
    const double C925 = C819 - C878;
    const double C924 = C816 - C876;
    const double C923 = C71 * C873;
    const double C922 = C207 - C872;
    const double C921 = C728 + C871;
    const double C920 = C808 - C870;
    const double C919 = C806 - C869;
    const double C918 = C803 - C868;
    const double C963 = C951 / C74;
    const double C962 = C950 + C706;
    const double C961 = C949 + C704;
    const double C960 = C947 + C702;
    const double C959 = C945 / C74;
    const double C958 = C944 + C698;
    const double C957 = C943 + C696;
    const double C956 = C942 + C694;
    const double C955 = C940 / C74;
    const double C954 = C930 / C74;
    const double C953 = C929 / C74;
    const double C952 = C923 / C74;
    const double C975 = C707 - C963;
    const double C974 = C962 + C916;
    const double C973 = C961 + C914;
    const double C972 = C960 + C912;
    const double C971 = C699 - C959;
    const double C970 = C958 + C909;
    const double C969 = C957 + C907;
    const double C968 = C956 + C905;
    const double C967 = C691 - C955;
    const double C966 = C830 - C954;
    const double C965 = C826 - C953;
    const double C964 = C812 - C952;
    const double C978 = C975 + C708;
    const double C977 = C971 + C700;
    const double C976 = C967 + C692;
    const double C981 = C978 + C917;
    const double C980 = C977 + C910;
    const double C979 = C976 + C903;
    const double d2nexx000200 =
        (2 * Pi *
         ((-C59 * C866) / C74 - C240 * C433 - C234 * C226 + C67 * C798 -
          C176 * C237 +
          C69 * (C712 - C591 + C799 +
                 C114 * (C800 + C199 - (C114 * C867) / C74))) *
         C70 * C71) /
        C74;
    const double d2nexx000020 =
        (2 * Pi *
         (C966 * C70 * C262 + C886 * C70 * C263 +
          ((C295 * C117) / C74 + C527 * ((-C867 * C140) / C74 - C591)) * C70 *
              C264)) /
        C74;
    const double d2nexx000002 =
        (2 * Pi *
         (C966 * C347 + C896 * C348 +
          ((C380 * C117) / C74 + C527 * ((-C867 * C145) / C74 - C591)) * C349) *
         C71) /
        C74;
    const double d2nexx000110 =
        (2 * Pi *
         (C979 * C70 * C268 + (C432 * C272 - (C64 * C648) / C74 + C434 * C437 +
                               C66 * (C766 + C652 - (C114 * C941) / C74)) *
                                  C70 * C270)) /
        C74;
    const double d2nexx000101 =
        (2 * Pi *
         (C979 * C353 + (C432 * C357 - (C64 * C671) / C74 + C434 * C482 +
                         C66 * (C854 + C676 - (C114 * C123 * C867) / C74)) *
                            C355) *
         C71) /
        C74;
    const double d2nexx000011 =
        (2 * Pi *
         ((C966 * C353 + C896 * C355) * C268 +
          (C886 * C353 +
           ((C514 * C117) / C74 - (C527 * C123 * C941) / C74) * C355) *
              C270)) /
        C74;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx000110;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx000011;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx000200 - 0.5 * d2nexx000020 + d2nexx000002;
    d2nexx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx000101;
    d2nexx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx000200 - std::sqrt(0.75) * d2nexx000020;
    const double d2nexy000200 =
        (2 * Pi *
         ((-C59 * C716) / C74 - C240 * C438 - C234 * C219 + C67 * C802 -
          C176 * C228 + C69 * (C718 - C599 + C114 * C918)) *
         C70 * C71) /
        C74;
    const double d2nexy000020 =
        (2 * Pi *
         (C931 * C70 * C262 + C932 * C70 * C263 +
          ((C311 * C117) / C74 + C527 * (C652 - C599 + C122 * C933)) * C70 *
              C264)) /
        C74;
    const double d2nexy000002 =
        (2 * Pi *
         (C931 * C347 + C897 * C348 +
          ((C381 * C117) / C74 + C527 * ((-C720 * C145) / C74 - C599)) * C349) *
         C71) /
        C74;
    const double d2nexy000110 =
        (2 * Pi *
         (C968 * C70 * C268 + (C432 * C286 + C64 * C834 + C434 * C458 +
                               C66 * (C799 + C122 * C918)) *
                                  C70 * C270)) /
        C74;
    const double d2nexy000101 =
        (2 * Pi *
         (C968 * C353 +
          (C432 * C359 - (C64 * C673) / C74 + C434 * C483 + C66 * C123 * C918) *
              C355) *
         C71) /
        C74;
    const double d2nexy000011 =
        (2 * Pi *
         ((C931 * C353 + C897 * C355) * C268 +
          (C932 * C353 + ((C512 * C117) / C74 + C527 * C123 * C933) * C355) *
              C270)) /
        C74;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy000110;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy000011;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy000200 - 0.5 * d2nexy000020 + d2nexy000002;
    d2nexy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy000101;
    d2nexy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy000200 - std::sqrt(0.75) * d2nexy000020;
    const double d2nexz000200 =
        (2 * Pi *
         ((-C59 * C721) / C74 - C240 * C441 - C234 * C221 + C67 * C805 -
          C176 * C229 + C69 * (C723 - C605 + C114 * C919)) *
         C70 * C71) /
        C74;
    const double d2nexz000020 =
        (2 * Pi *
         (C934 * C70 * C262 + C891 * C70 * C263 +
          ((C297 * C117) / C74 + C527 * ((-C725 * C140) / C74 - C605)) * C70 *
              C264)) /
        C74;
    const double d2nexz000002 =
        (2 * Pi *
         (C934 * C347 + C937 * C348 +
          ((C396 * C117) / C74 +
           C527 * (C676 - C605 + C123 * (C199 - (C123 * C725) / C74))) *
              C349) *
         C71) /
        C74;
    const double d2nexz000110 =
        (2 * Pi *
         (C969 * C70 * C268 +
          (C432 * C277 - (C64 * C655) / C74 + C434 * C453 + C66 * C122 * C919) *
              C70 * C270)) /
        C74;
    const double d2nexz000101 =
        (2 * Pi *
         (C969 * C353 + (C432 * C372 + C64 * C848 + C434 * C488 +
                         C66 * (C799 + C123 * C919)) *
                            C355) *
         C71) /
        C74;
    const double d2nexz000011 =
        (2 * Pi *
         ((C934 * C353 + C937 * C355) * C268 +
          (C891 * C353 +
           ((C516 * C117) / C74 + C527 * (C652 - (C123 * C122 * C725) / C74)) *
               C355) *
              C270)) /
        C74;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz000110;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz000011;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz000200 - 0.5 * d2nexz000020 + d2nexz000002;
    d2nexz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz000101;
    d2nexz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz000200 - std::sqrt(0.75) * d2nexz000020;
    const double d2neyx000200 =
        (2 * Pi *
         (C920 * C59 + C921 * C67 +
          ((C237 * C124) / C74 + C71 * (C612 - C613 + C114 * C922)) * C69) *
         C70) /
        C74;
    const double d2neyx000020 =
        (2 * Pi *
         ((-C262 * C727) / C74 - C325 * C433 - C321 * C272 + C263 * C839 -
          C310 * C295 +
          C264 * (C766 - C613 + C122 * (C800 - (C122 * C730) / C74))) *
         C527 * C70) /
        C74;
    const double d2neyx000002 =
        (2 * Pi *
         (C920 * C527 * C347 + C899 * C527 * C348 +
          ((C380 * C124) / C74 + C71 * ((-C730 * C145) / C74 - C613)) * C527 *
              C349)) /
        C74;
    const double d2neyx000110 =
        (2 * Pi *
         (C970 * C64 + (C444 * C226 + C268 * C810 + C445 * C437 +
                        C270 * (C712 + C122 * C922)) *
                           C66) *
         C70) /
        C74;
    const double d2neyx000101 =
        (2 * Pi *
         ((C920 * C64 + C921 * C66) * C353 +
          (C899 * C64 + ((C482 * C124) / C74 + C71 * C123 * C922) * C66) *
              C355)) /
        C74;
    const double d2neyx000011 =
        (2 * Pi *
         (C970 * C527 * C353 +
          (C444 * C357 - (C268 * C678) / C74 + C445 * C514 +
           C270 * (C854 - (C122 * C123 * C730) / C74)) *
              C527 * C355)) /
        C74;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx000110;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx000011;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx000200 - 0.5 * d2neyx000020 + d2neyx000002;
    d2neyx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx000101;
    d2neyx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx000200 - std::sqrt(0.75) * d2neyx000020;
    const double d2neyy000200 =
        (2 * Pi *
         (C964 * C59 + C874 * C67 +
          ((C228 * C124) / C74 + C71 * ((-C875 * C126) / C74 - C620)) * C69) *
         C70) /
        C74;
    const double d2neyy000020 =
        (2 * Pi *
         ((-C262 * C873) / C74 - C325 * C438 - C321 * C286 + C263 * C840 -
          C310 * C311 +
          C264 * (C769 - C620 + C122 * C207 - C713 +
                  C122 * (C803 + C207 - (C122 * C875) / C74))) *
         C527 * C70) /
        C74;
    const double d2neyy000002 =
        (2 * Pi *
         (C964 * C527 * C347 + C900 * C527 * C348 +
          ((C381 * C124) / C74 + C71 * ((-C875 * C145) / C74 - C620)) * C527 *
              C349)) /
        C74;
    const double d2neyy000110 =
        (2 * Pi *
         (C980 * C64 + (C444 * C219 - (C268 * C618) / C74 + C445 * C458 +
                        C270 * (C718 + C612 - (C122 * C946) / C74)) *
                           C66) *
         C70) /
        C74;
    const double d2neyy000101 =
        (2 * Pi *
         ((C964 * C64 + C874 * C66) * C353 +
          (C900 * C64 +
           ((C483 * C124) / C74 - (C71 * C123 * C946) / C74) * C66) *
              C355)) /
        C74;
    const double d2neyy000011 =
        (2 * Pi *
         (C980 * C527 * C353 +
          (C444 * C359 - (C268 * C680) / C74 + C445 * C512 +
           C270 * (C856 + C683 - (C122 * C123 * C875) / C74)) *
              C527 * C355)) /
        C74;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy000110;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy000011;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy000200 - 0.5 * d2neyy000020 + d2neyy000002;
    d2neyy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy000101;
    d2neyy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy000200 - std::sqrt(0.75) * d2neyy000020;
    const double d2neyz000200 =
        (2 * Pi *
         (C924 * C59 + C877 * C67 +
          ((C229 * C124) / C74 + C71 * ((-C740 * C126) / C74 - C626)) * C69) *
         C70) /
        C74;
    const double d2neyz000020 =
        (2 * Pi *
         ((-C262 * C737) / C74 - C325 * C441 - C321 * C277 + C263 * C841 -
          C310 * C297 +
          C264 * (C771 - C626 + C122 * (C806 - (C122 * C740) / C74))) *
         C527 * C70) /
        C74;
    const double d2neyz000002 =
        (2 * Pi *
         (C924 * C527 * C347 + C938 * C527 * C348 +
          ((C396 * C124) / C74 + C71 * (C683 - C626 + C123 * C939)) * C527 *
              C349)) /
        C74;
    const double d2neyz000110 =
        (2 * Pi *
         (C972 * C64 + (C444 * C221 - (C268 * C624) / C74 + C445 * C453 +
                        C270 * (C723 - (C122 * C862) / C74)) *
                           C66) *
         C70) /
        C74;
    const double d2neyz000101 =
        (2 * Pi *
         ((C924 * C64 + C877 * C66) * C353 +
          (C938 * C64 +
           ((C488 * C124) / C74 + C71 * (C612 - (C123 * C862) / C74)) * C66) *
              C355)) /
        C74;
    const double d2neyz000011 =
        (2 * Pi *
         (C972 * C527 * C353 + (C444 * C372 + C268 * C851 + C445 * C516 +
                                C270 * (C796 + C122 * C939)) *
                                   C527 * C355)) /
        C74;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz000110;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz000011;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz000200 - 0.5 * d2neyz000020 + d2neyz000002;
    d2neyz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz000101;
    d2neyz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz000200 - std::sqrt(0.75) * d2neyz000020;
    const double d2nezx000200 =
        (2 * Pi *
         (C925 * C71 * C59 + C926 * C71 * C67 +
          ((C237 * C125) / C74 + C70 * (C631 - C632 + C114 * C927)) * C71 *
              C69)) /
        C74;
    const double d2nezx000020 =
        (2 * Pi *
         (C925 * C262 + C892 * C263 +
          ((C295 * C125) / C74 + C70 * ((-C745 * C140) / C74 - C632)) * C264) *
         C527) /
        C74;
    const double d2nezx000002 =
        (2 * Pi *
         ((-C347 * C742) / C74 - C410 * C433 - C406 * C357 + C348 * C853 -
          C395 * C380 +
          C349 * (C854 - C632 + C123 * (C800 - (C123 * C745) / C74))) *
         C71 * C527) /
        C74;
    const double d2nezx000110 =
        (2 * Pi *
         ((C925 * C268 + C892 * C270) * C64 +
          (C926 * C268 + ((C437 * C125) / C74 + C70 * C122 * C927) * C270) *
              C66)) /
        C74;
    const double d2nezx000101 =
        (2 * Pi *
         (C973 * C71 * C64 + (C486 * C226 + C353 * C821 + C487 * C482 +
                              C355 * (C712 + C123 * C927)) *
                                 C71 * C66)) /
        C74;
    const double d2nezx000011 =
        (2 * Pi *
         (C973 * C268 + (C486 * C272 - (C353 * C664) / C74 + C487 * C514 +
                         C355 * (C766 - (C123 * C122 * C745) / C74)) *
                            C270) *
         C527) /
        C74;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx000110;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx000011;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx000200 - 0.5 * d2nezx000020 + d2nezx000002;
    d2nezx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx000101;
    d2nezx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx000200 - std::sqrt(0.75) * d2nezx000020;
    const double d2nezy000200 =
        (2 * Pi *
         (C928 * C71 * C59 + C882 * C71 * C67 +
          ((C228 * C125) / C74 + C70 * ((-C750 * C126) / C74 - C639)) * C71 *
              C69)) /
        C74;
    const double d2nezy000020 =
        (2 * Pi *
         (C928 * C262 + C935 * C263 +
          ((C311 * C125) / C74 + C70 * (C667 - C639 + C122 * C936)) * C264) *
         C527) /
        C74;
    const double d2nezy000002 =
        (2 * Pi *
         ((-C347 * C747) / C74 - C410 * C438 - C406 * C359 + C348 * C855 -
          C395 * C381 +
          C349 * (C856 - C639 + C123 * (C803 - (C123 * C750) / C74))) *
         C71 * C527) /
        C74;
    const double d2nezy000110 =
        (2 * Pi *
         ((C928 * C268 + C935 * C270) * C64 +
          (C882 * C268 +
           ((C458 * C125) / C74 + C70 * (C631 - (C122 * C863) / C74)) * C270) *
              C66)) /
        C74;
    const double d2nezy000101 =
        (2 * Pi *
         (C974 * C71 * C64 + (C486 * C219 - (C353 * C637) / C74 + C487 * C483 +
                              C355 * (C718 - (C123 * C863) / C74)) *
                                 C71 * C66)) /
        C74;
    const double d2nezy000011 =
        (2 * Pi *
         (C974 * C268 + (C486 * C286 + C353 * C843 + C487 * C512 +
                         C355 * (C769 + C123 * C936)) *
                            C270) *
         C527) /
        C74;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy000110;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy000011;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy000200 - 0.5 * d2nezy000020 + d2nezy000002;
    d2nezy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy000101;
    d2nezy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy000200 - std::sqrt(0.75) * d2nezy000020;
    const double d2nezz000200 =
        (2 * Pi *
         (C965 * C71 * C59 + C884 * C71 * C67 +
          ((C229 * C125) / C74 + C70 * ((-C885 * C126) / C74 - C645)) * C71 *
              C69)) /
        C74;
    const double d2nezz000020 =
        (2 * Pi *
         (C965 * C262 + C895 * C263 +
          ((C297 * C125) / C74 + C70 * ((-C885 * C140) / C74 - C645)) * C264) *
         C527) /
        C74;
    const double d2nezz000002 =
        (2 * Pi *
         ((-C347 * C883) / C74 - C410 * C441 - C406 * C372 + C348 * C857 -
          C395 * C396 +
          C349 * (C796 - C645 + C123 * C211 - C713 +
                  C123 * (C806 + C211 - (C123 * C885) / C74))) *
         C71 * C527) /
        C74;
    const double d2nezz000110 =
        (2 * Pi *
         ((C965 * C268 + C895 * C270) * C64 +
          (C884 * C268 +
           ((C453 * C125) / C74 - (C70 * C122 * C948) / C74) * C270) *
              C66)) /
        C74;
    const double d2nezz000101 =
        (2 * Pi *
         (C981 * C71 * C64 + (C486 * C221 - (C353 * C643) / C74 + C487 * C488 +
                              C355 * (C723 + C631 - (C123 * C948) / C74)) *
                                 C71 * C66)) /
        C74;
    const double d2nezz000011 =
        (2 * Pi *
         (C981 * C268 + (C486 * C277 - (C353 * C669) / C74 + C487 * C516 +
                         C355 * (C771 + C667 - (C123 * C122 * C885) / C74)) *
                            C270) *
         C527) /
        C74;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz000110;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz000011;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz000200 - 0.5 * d2nezz000020 + d2nezz000002;
    d2nezz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz000101;
    d2nezz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz000200 - std::sqrt(0.75) * d2nezz000020;
}
