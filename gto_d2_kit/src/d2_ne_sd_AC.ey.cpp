/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sd_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_02_13(double ae,
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
    const double C519 = ae + be;
    const double C518 = xA - xB;
    const double C523 = ae * be;
    const double C522 = std::pow(C518, 2);
    const double C524 = C522 * C523;
    const double C525 = C524 / C519;
    const double C526 = -C525;
    const double C527 = std::exp(C526);
    const double C535 = yA - yB;
    const double C536 = std::pow(C535, 2);
    const double C537 = C536 * C523;
    const double C538 = C537 / C519;
    const double C539 = -C538;
    const double C540 = std::exp(C539);
    const double C551 = zA - zB;
    const double C552 = std::pow(C551, 2);
    const double C553 = C552 * C523;
    const double C554 = C553 / C519;
    const double C555 = -C554;
    const double C556 = std::exp(C555);
    const double C572 = C551 * ae;
    const double C571 = C535 * ae;
    const double C570 = 2 * C519;
    const double C569 = std::pow(C519, 2);
    const double C568 = C518 * ae;
    const double C567 = ae * be;
    const double C576 = C556 * C572;
    const double C575 = C540 * C571;
    const double C574 = std::pow(C570, -2);
    const double C573 = std::pow(C570, -1);
    const double C62 = std::exp(-(std::pow(xA - xB, 2) * C567) / (ae + be));
    const double C63 =
        (std::exp(-(std::pow(C518, 2) * C567) / C519) * C568) / C519;
    const double C65 = (C527 * std::pow(C568, 2)) / C569 + C527 / C570;
    const double C66 = C573 * C527;
    const double C67 = (2 * C573 * C527 * C568) / C519;
    const double C69 = C574 * C527;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C523) / C519);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C523) / C519);
    const double C262 = (C540 * std::pow(C571, 2)) / C569 + C540 / C570;
    const double C263 = (2 * C573 * C575) / C519;
    const double C264 = C574 * C540;
    const double C268 = C575 / C519;
    const double C270 = C573 * C540;
    const double C347 = (C556 * std::pow(C572, 2)) / C569 + C556 / C570;
    const double C348 = (2 * C573 * C576) / C519;
    const double C349 = C574 * C556;
    const double C353 = C576 / C519;
    const double C355 = C573 * C556;
    const double C90 = zA - zB;
    const double C89 = yA - yB;
    const double C88 = be * zB;
    const double C87 = ae * zA;
    const double C86 = be * yB;
    const double C85 = ae * yA;
    const double C84 = bs[4];
    const double C83 = 0 * ae;
    const double C82 = bs[3];
    const double C81 = bs[2];
    const double C80 = bs[1];
    const double C79 = be * xB;
    const double C78 = ae * xA;
    const double C77 = 0 * ae;
    const double C76 = ae * be;
    const double C75 = 0 * be;
    const double C74 = ae + be;
    const double C73 = 0 * be;
    const double C72 = xA - xB;
    const double C101 = C76 * C90;
    const double C100 = C76 * C89;
    const double C99 = C87 + C88;
    const double C98 = C85 + C86;
    const double C97 = C83 / C74;
    const double C96 = C78 + C79;
    const double C95 = C77 / C74;
    const double C94 = C76 * C72;
    const double C93 = 2 * C74;
    const double C92 = std::pow(C74, 2);
    const double C91 = C72 * C73;
    const double C113 = C101 * C70;
    const double C112 = C100 * C71;
    const double C111 = C99 / C74;
    const double C110 = C98 / C74;
    const double C109 = std::pow(C93, 4);
    const double C108 = -C93;
    const double C107 = C80 * C93;
    const double C106 = std::pow(C93, 2);
    const double C105 = C96 / C74;
    const double C104 = C94 * C62;
    const double C103 = 2 * C92;
    const double C102 = C91 / C74;
    const double C125 = 2 * C113;
    const double C124 = 2 * C112;
    const double C123 = C111 - zC;
    const double C122 = C110 - yC;
    const double C121 = std::pow(C108, 3);
    const double C120 = C81 * C106;
    const double C119 = C105 - xC;
    const double C118 = C104 / C92;
    const double C117 = C73 / C103;
    const double C116 = 2 * C104;
    const double C115 = C75 / C103;
    const double C114 = 0 - C102;
    const double C145 = std::pow(C123, 2);
    const double C144 = C123 * C122;
    const double C143 = ae * C123;
    const double C142 = C123 * C119;
    const double C141 = C122 * C123;
    const double C140 = std::pow(C122, 2);
    const double C139 = ae * C122;
    const double C138 = C122 * C119;
    const double C137 = C119 * C123;
    const double C136 = C74 * C123;
    const double C135 = C119 * C122;
    const double C134 = C74 * C122;
    const double C133 = C82 * C121;
    const double C132 = C119 * C120;
    const double C131 = ae * C119;
    const double C130 = std::pow(C119, 2);
    const double C129 = C74 * C119;
    const double C128 = C95 - C118;
    const double C127 = C72 * C116;
    const double C126 = C114 * ae;
    const double C170 = C145 * C82;
    const double C169 = C144 * ae;
    const double C168 = C143 * C82;
    const double C167 = C142 * ae;
    const double C166 = C141 * ae;
    const double C165 = C140 * C82;
    const double C164 = C139 * C82;
    const double C163 = C138 * ae;
    const double C162 = C136 * C82;
    const double C161 = C136 * C81;
    const double C160 = C137 * ae;
    const double C159 = C136 * C80;
    const double C158 = C134 * C82;
    const double C157 = C134 * C81;
    const double C156 = C135 * ae;
    const double C155 = C134 * C80;
    const double C154 = C131 * C82;
    const double C153 = C129 * C82;
    const double C152 = C128 / C93;
    const double C151 = C130 * C82;
    const double C150 = C129 * C81;
    const double C149 = C72 * C128;
    const double C148 = C129 * C80;
    const double C147 = C127 / C74;
    const double C146 = C126 / C74;
    const double C192 = C170 * C121;
    const double C191 = C82 * C169;
    const double C190 = C168 * C106;
    const double C189 = C82 * C167;
    const double C188 = C82 * C166;
    const double C187 = C165 * C121;
    const double C186 = C164 * C106;
    const double C185 = C82 * C163;
    const double C184 = C162 * C106;
    const double C183 = C82 * C160;
    const double C182 = C161 * C93;
    const double C181 = C158 * C106;
    const double C180 = C82 * C156;
    const double C179 = C157 * C93;
    const double C178 = C154 * C106;
    const double C177 = C153 * C106;
    const double C176 = C152 + C97;
    const double C175 = C151 * C121;
    const double C174 = C150 * C93;
    const double C173 = C149 + C66;
    const double C172 = C62 - C147;
    const double C171 = C146 - C115;
    const double C213 = C120 + C192;
    const double C212 = C121 * C191;
    const double C211 = 2 * C190;
    const double C210 = C121 * C189;
    const double C209 = C121 * C188;
    const double C208 = C120 + C187;
    const double C207 = 2 * C186;
    const double C206 = C121 * C185;
    const double C205 = C184 * C130;
    const double C204 = C121 * C183;
    const double C203 = -2 * C182;
    const double C202 = C181 * C130;
    const double C201 = C121 * C180;
    const double C200 = -2 * C179;
    const double C199 = 2 * C178;
    const double C198 = 2 * C177;
    const double C197 = C120 + C175;
    const double C196 = -2 * C174;
    const double C195 = C173 * ae;
    const double C194 = C172 * ae;
    const double C193 = C171 / C93;
    const double C224 = C213 * ae;
    const double C223 = C208 * ae;
    const double C222 = 2 * C205;
    const double C221 = C119 * C203;
    const double C220 = 2 * C202;
    const double C219 = C119 * C200;
    const double C218 = C119 * C198;
    const double C217 = C197 * ae;
    const double C216 = C119 * C196;
    const double C215 = C195 / C74;
    const double C214 = C194 / C74;
    const double C229 = C203 + C222;
    const double C228 = C200 + C220;
    const double C227 = C218 - C120;
    const double C226 = C216 + C107;
    const double C225 = C214 - C117;
    const double C232 = C119 * C227;
    const double C231 = C225 / C93;
    const double C230 = C72 * C225;
    const double C235 = C196 + C232;
    const double C234 = C231 + C215;
    const double C233 = C230 + C63;
    const double C237 = C235 - C132;
    const double C236 = C233 * ae;
    const double C238 = C236 / C74;
    const double C239 = C193 + C238;
    const double C240 = C239 + C128;
    const double C284 = 0 * ae;
    const double C283 = C112 / C92;
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
    const double C292 = C279 / C103;
    const double C291 = C281 / C74;
    const double C290 = C280 / C103;
    const double C289 = C89 * C279;
    const double C288 = 2 * C278;
    const double C287 = C122 * C275;
    const double C286 = C274 + C107;
    const double C285 = 2 * C273;
    const double C300 = C293 - C283;
    const double C299 = C71 - C291;
    const double C298 = C289 / C74;
    const double C297 = C203 + C288;
    const double C296 = C287 - C120;
    const double C295 = C196 + C285;
    const double C305 = C300 / C93;
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
    const double C317 = C313 / C93;
    const double C316 = C89 * C313;
    const double C315 = C312 - C290;
    const double C321 = C317 + C318;
    const double C320 = C316 + C268;
    const double C319 = C315 / C93;
    const double C322 = C320 * ae;
    const double C323 = C322 / C74;
    const double C324 = C319 + C323;
    const double C325 = C324 + C300;
    const double C369 = 0 * ae;
    const double C368 = C113 / C92;
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
    const double C377 = C364 / C103;
    const double C376 = C366 / C74;
    const double C375 = C365 / C103;
    const double C374 = C90 * C364;
    const double C373 = C123 * C362;
    const double C372 = C361 + C107;
    const double C371 = 2 * C360;
    const double C370 = 2 * C358;
    const double C385 = C378 - C368;
    const double C384 = C70 - C376;
    const double C383 = C374 / C74;
    const double C382 = C373 - C120;
    const double C381 = C200 + C371;
    const double C380 = C196 + C370;
    const double C390 = C385 / C93;
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
    const double C402 = C398 / C93;
    const double C401 = C90 * C398;
    const double C400 = C397 - C375;
    const double C406 = C402 + C403;
    const double C405 = C401 + C353;
    const double C404 = C400 / C93;
    const double C407 = C405 * ae;
    const double C408 = C407 / C74;
    const double C409 = C404 + C408;
    const double C410 = C409 + C385;
    const double C443 = C143 * C81;
    const double C442 = C139 * C81;
    const double C441 = C119 * C362;
    const double C440 = C182 * ae;
    const double C439 = 2 * C159;
    const double C438 = C119 * C275;
    const double C437 = C179 * ae;
    const double C436 = 2 * C155;
    const double C435 = C122 * C227;
    const double C434 = C131 * C81;
    const double C433 = C174 * ae;
    const double C432 = 2 * C148;
    const double C451 = C443 * C93;
    const double C450 = C442 * C93;
    const double C449 = C122 * C441;
    const double C448 = -2 * C440;
    const double C447 = C122 * C438;
    const double C446 = -2 * C437;
    const double C445 = C434 * C93;
    const double C444 = -2 * C433;
    const double C456 = -2 * C451;
    const double C455 = C448 / C74;
    const double C454 = C447 - C132;
    const double C453 = C446 / C74;
    const double C452 = C444 / C74;
    const double C481 = -2 * C450;
    const double C480 = C123 * C441;
    const double C479 = C123 * C438;
    const double C478 = C123 * C227;
    const double C482 = C480 - C132;
    const double C507 = C122 * C362;
    const double C506 = C123 * C296;
    const double C505 = -2 * C445;
    const double C504 = C122 * C198;
    const double C509 = C123 * C507;
    const double C508 = C123 * C504;
    const double C510 = C509 - C276;
    const double C702 = C385 * C372;
    const double C701 = C398 * C439;
    const double C700 = C385 * C359;
    const double C699 = C398 * C436;
    const double C698 = C385 * C357;
    const double C697 = C398 * C432;
    const double C696 = C300 * C277;
    const double C695 = C313 * C439;
    const double C694 = C300 * C286;
    const double C693 = C313 * C436;
    const double C692 = C300 * C272;
    const double C691 = C313 * C432;
    const double C690 = C128 * C221;
    const double C689 = C225 * C439;
    const double C688 = C128 * C219;
    const double C687 = C225 * C436;
    const double C686 = C128 * C226;
    const double C685 = C225 * C432;
    const double C684 = C382 * ae;
    const double C683 = C123 * C224;
    const double C682 = 2 * C451;
    const double C681 = C123 * C275;
    const double C680 = C123 * C212;
    const double C679 = C123 * C198;
    const double C678 = C123 * C210;
    const double C677 = C123 * C207;
    const double C676 = C372 * C124;
    const double C675 = C123 * C209;
    const double C674 = C359 * C124;
    const double C673 = C123 * C223;
    const double C672 = C357 * C124;
    const double C671 = C123 * C206;
    const double C670 = C123 * C199;
    const double C669 = C372 * C116;
    const double C668 = C123 * C204;
    const double C667 = C359 * C116;
    const double C666 = C123 * C201;
    const double C665 = C357 * C116;
    const double C664 = C123 * C217;
    const double C663 = C277 * C125;
    const double C662 = C122 * C224;
    const double C661 = C122 * C211;
    const double C660 = C286 * C125;
    const double C659 = C122 * C212;
    const double C658 = C272 * C125;
    const double C657 = C122 * C210;
    const double C656 = C507 * ae;
    const double C655 = C122 * C209;
    const double C654 = C296 * ae;
    const double C653 = C122 * C223;
    const double C652 = 2 * C450;
    const double C651 = C504 * ae;
    const double C650 = C122 * C206;
    const double C649 = C277 * C116;
    const double C648 = C122 * C204;
    const double C647 = C159 * C116;
    const double C646 = C122 * C199;
    const double C645 = C286 * C116;
    const double C644 = C122 * C201;
    const double C643 = C155 * C116;
    const double C642 = C272 * C116;
    const double C641 = C122 * C217;
    const double C640 = C148 * C116;
    const double C639 = C224 / C74;
    const double C638 = C145 * C84;
    const double C637 = C221 * C125;
    const double C636 = C119 * C224;
    const double C635 = C159 * C125;
    const double C634 = C145 * C81;
    const double C633 = C212 / C74;
    const double C632 = C84 * C169;
    const double C631 = C219 * C125;
    const double C630 = C119 * C212;
    const double C629 = C155 * C125;
    const double C628 = C81 * C169;
    const double C627 = C84 * C167;
    const double C626 = C210 / C74;
    const double C625 = C119 * C211;
    const double C624 = C226 * C125;
    const double C623 = C119 * C210;
    const double C622 = C148 * C125;
    const double C621 = C81 * C167;
    const double C620 = C209 / C74;
    const double C619 = C84 * C166;
    const double C618 = C221 * C124;
    const double C617 = C119 * C209;
    const double C616 = C159 * C124;
    const double C615 = C81 * C166;
    const double C614 = C223 / C74;
    const double C613 = C140 * C84;
    const double C612 = C219 * C124;
    const double C611 = C119 * C223;
    const double C610 = C155 * C124;
    const double C609 = C140 * C81;
    const double C608 = C84 * C163;
    const double C607 = C206 / C74;
    const double C606 = C119 * C207;
    const double C605 = C226 * C124;
    const double C604 = C119 * C206;
    const double C603 = C148 * C124;
    const double C602 = C81 * C163;
    const double C601 = C84 * C160;
    const double C600 = C184 * ae;
    const double C599 = C204 / C74;
    const double C598 = C441 * ae;
    const double C597 = C119 * C204;
    const double C596 = C81 * C160;
    const double C595 = C84 * C156;
    const double C594 = C181 * ae;
    const double C593 = C201 / C74;
    const double C592 = C438 * ae;
    const double C591 = C119 * C201;
    const double C590 = C81 * C156;
    const double C589 = C130 * C84;
    const double C588 = C177 * ae;
    const double C587 = C120 * ae;
    const double C586 = C119 * C199;
    const double C585 = C217 / C74;
    const double C584 = C227 * ae;
    const double C583 = C119 * C217;
    const double C582 = 2 * C445;
    const double C581 = C130 * C81;
    const double C790 = C684 / C74;
    const double C789 = C683 / C74;
    const double C788 = C455 - C682;
    const double C787 = C681 * ae;
    const double C786 = C680 / C74;
    const double C785 = C679 * ae;
    const double C784 = C678 / C74;
    const double C783 = C676 / C74;
    const double C782 = C675 / C74;
    const double C781 = C674 / C74;
    const double C780 = C71 * C673;
    const double C779 = C672 / C74;
    const double C778 = C71 * C671;
    const double C777 = C669 / C74;
    const double C776 = C668 / C74;
    const double C775 = C667 / C74;
    const double C774 = C62 * C666;
    const double C773 = C665 / C74;
    const double C772 = C62 * C664;
    const double C771 = C663 / C74;
    const double C770 = C70 * C662;
    const double C769 = C660 / C74;
    const double C768 = C659 / C74;
    const double C767 = C658 / C74;
    const double C766 = C70 * C657;
    const double C765 = C656 / C74;
    const double C764 = C655 / C74;
    const double C763 = C654 / C74;
    const double C762 = C653 / C74;
    const double C761 = C453 - C652;
    const double C760 = C651 / C74;
    const double C759 = C650 / C74;
    const double C758 = C649 / C74;
    const double C757 = C62 * C648;
    const double C756 = 2 * C647;
    const double C755 = C645 / C74;
    const double C754 = C644 / C74;
    const double C753 = 2 * C643;
    const double C752 = C642 / C74;
    const double C751 = C62 * C641;
    const double C750 = 2 * C640;
    const double C749 = C638 * C109;
    const double C748 = C637 / C74;
    const double C747 = C70 * C636;
    const double C746 = 2 * C635;
    const double C745 = C634 * C106;
    const double C744 = C109 * C632;
    const double C743 = C631 / C74;
    const double C742 = C70 * C630;
    const double C741 = 2 * C629;
    const double C740 = C106 * C628;
    const double C739 = C109 * C627;
    const double C738 = C624 / C74;
    const double C737 = C623 / C74;
    const double C736 = 2 * C622;
    const double C735 = C106 * C621;
    const double C734 = C109 * C619;
    const double C733 = C618 / C74;
    const double C732 = C71 * C617;
    const double C731 = 2 * C616;
    const double C730 = C106 * C615;
    const double C729 = C613 * C109;
    const double C728 = C612 / C74;
    const double C727 = C71 * C611;
    const double C726 = 2 * C610;
    const double C725 = C609 * C106;
    const double C724 = C109 * C608;
    const double C723 = C605 / C74;
    const double C722 = C604 / C74;
    const double C721 = 2 * C603;
    const double C720 = C106 * C602;
    const double C719 = C109 * C601;
    const double C718 = 2 * C600;
    const double C717 = C598 / C74;
    const double C716 = C597 / C74;
    const double C715 = C106 * C596;
    const double C714 = C109 * C595;
    const double C713 = 2 * C594;
    const double C712 = C592 / C74;
    const double C711 = C591 / C74;
    const double C710 = C106 * C590;
    const double C709 = C589 * C109;
    const double C708 = 2 * C588;
    const double C707 = C587 / C74;
    const double C706 = C584 / C74;
    const double C705 = C583 / C74;
    const double C704 = C452 - C582;
    const double C703 = C581 * C106;
    const double C859 = C353 * C740;
    const double C858 = C353 * C735;
    const double C857 = C119 * C744;
    const double C856 = C119 * C734;
    const double C855 = C268 * C730;
    const double C854 = C268 * C720;
    const double C853 = C63 * C715;
    const double C852 = C63 * C710;
    const double C851 = C788 - C789;
    const double C850 = C787 / C74;
    const double C849 = C453 - C786;
    const double C848 = C785 / C74;
    const double C847 = C452 - C784;
    const double C846 = C123 * C734;
    const double C845 = C481 - C782;
    const double C844 = -C780;
    const double C843 = -C778;
    const double C842 = C505 - C776;
    const double C841 = -C774;
    const double C840 = -C772;
    const double C839 = -C770;
    const double C838 = C122 * C744;
    const double C837 = C456 - C768;
    const double C836 = -C766;
    const double C835 = C455 - C764;
    const double C834 = C761 - C762;
    const double C833 = C452 - C759;
    const double C832 = -C757;
    const double C831 = C756 / C74;
    const double C830 = C62 * C715;
    const double C829 = C122 * C714;
    const double C828 = C505 - C754;
    const double C827 = C753 / C74;
    const double C826 = C62 * C710;
    const double C825 = -C751;
    const double C824 = C750 / C74;
    const double C823 = C133 + C749;
    const double C822 = -C747;
    const double C821 = C746 / C74;
    const double C820 = C745 - C107;
    const double C819 = -C742;
    const double C818 = C741 / C74;
    const double C817 = C70 * C740;
    const double C816 = C119 * C739;
    const double C815 = C456 - C737;
    const double C814 = C736 / C74;
    const double C813 = C70 * C735;
    const double C812 = -C732;
    const double C811 = C731 / C74;
    const double C810 = C71 * C730;
    const double C809 = C133 + C729;
    const double C808 = -C727;
    const double C807 = C726 / C74;
    const double C806 = C725 - C107;
    const double C805 = C119 * C724;
    const double C804 = C481 - C722;
    const double C803 = C721 / C74;
    const double C802 = C71 * C720;
    const double C801 = C119 * C719;
    const double C800 = C718 / C74;
    const double C799 = C455 - C716;
    const double C798 = C119 * C714;
    const double C797 = C713 / C74;
    const double C796 = C453 - C711;
    const double C795 = C133 + C709;
    const double C794 = C708 / C74;
    const double C793 = C586 - C707;
    const double C792 = C704 - C705;
    const double C791 = C703 - C107;
    const double C911 = C355 * C851;
    const double C910 = C355 * C849;
    const double C909 = C859 / C74;
    const double C908 = C355 * C847;
    const double C907 = C858 / C74;
    const double C906 = C270 * C835;
    const double C905 = C855 / C74;
    const double C904 = C270 * C834;
    const double C903 = C270 * C833;
    const double C902 = C854 / C74;
    const double C901 = C66 * C799;
    const double C900 = C853 / C74;
    const double C899 = C66 * C796;
    const double C898 = C852 / C74;
    const double C897 = C66 * C792;
    const double C896 = C846 / C74;
    const double C895 = C71 * C845;
    const double C894 = C844 / C74;
    const double C893 = C843 / C74;
    const double C892 = C62 * C842;
    const double C891 = C841 / C74;
    const double C890 = C840 / C74;
    const double C889 = C839 / C74;
    const double C888 = C838 / C74;
    const double C887 = C70 * C837;
    const double C886 = C836 / C74;
    const double C885 = C832 / C74;
    const double C884 = -C830;
    const double C883 = C829 / C74;
    const double C882 = C62 * C828;
    const double C881 = -C826;
    const double C880 = C825 / C74;
    const double C879 = C823 * ae;
    const double C878 = C822 / C74;
    const double C877 = C820 * ae;
    const double C876 = C819 / C74;
    const double C875 = -C817;
    const double C874 = C816 / C74;
    const double C873 = C70 * C815;
    const double C872 = -C813;
    const double C871 = C812 / C74;
    const double C870 = -C810;
    const double C869 = C809 * ae;
    const double C868 = C808 / C74;
    const double C867 = C806 * ae;
    const double C866 = C805 / C74;
    const double C865 = C71 * C804;
    const double C864 = -C802;
    const double C863 = C801 / C74;
    const double C862 = C798 / C74;
    const double C861 = C795 * ae;
    const double C860 = C791 * ae;
    const double C957 = C353 * C877;
    const double C956 = C699 - C909;
    const double C955 = C697 - C907;
    const double C954 = C119 * C879;
    const double C953 = C695 - C905;
    const double C952 = C119 * C869;
    const double C951 = C268 * C867;
    const double C950 = C691 - C902;
    const double C949 = C689 - C900;
    const double C948 = C687 - C898;
    const double C947 = C122 * C861;
    const double C946 = C63 * C860;
    const double C945 = C207 - C896;
    const double C944 = C895 - C783;
    const double C943 = C894 - C781;
    const double C942 = C893 - C779;
    const double C941 = C892 - C777;
    const double C940 = C891 - C775;
    const double C939 = C890 - C773;
    const double C938 = C889 - C771;
    const double C937 = C211 - C888;
    const double C936 = C887 - C769;
    const double C935 = C886 - C767;
    const double C934 = C885 - C758;
    const double C933 = C884 / C74;
    const double C932 = C199 - C883;
    const double C931 = C882 - C755;
    const double C930 = C881 / C74;
    const double C929 = C880 - C752;
    const double C928 = C62 * C860;
    const double C927 = C878 - C748;
    const double C926 = C70 * C877;
    const double C925 = C876 - C743;
    const double C924 = C875 / C74;
    const double C923 = C211 - C874;
    const double C922 = C873 - C738;
    const double C921 = C872 / C74;
    const double C920 = C871 - C733;
    const double C919 = C870 / C74;
    const double C918 = C868 - C728;
    const double C917 = C71 * C867;
    const double C916 = C207 - C866;
    const double C915 = C865 - C723;
    const double C914 = C864 / C74;
    const double C913 = C800 - C863;
    const double C912 = C797 - C862;
    const double C975 = C957 / C74;
    const double C974 = C956 + C700;
    const double C973 = C955 + C698;
    const double C972 = C953 + C696;
    const double C971 = C951 / C74;
    const double C970 = C950 + C692;
    const double C969 = C949 + C690;
    const double C968 = C948 + C688;
    const double C967 = C946 / C74;
    const double C966 = C933 - C831;
    const double C965 = C930 - C827;
    const double C964 = -C928;
    const double C963 = -C926;
    const double C962 = C924 - C818;
    const double C961 = C921 - C814;
    const double C960 = C919 - C811;
    const double C959 = -C917;
    const double C958 = C914 - C803;
    const double C987 = C701 - C975;
    const double C986 = C974 + C910;
    const double C985 = C973 + C908;
    const double C984 = C972 + C906;
    const double C983 = C693 - C971;
    const double C982 = C970 + C903;
    const double C981 = C969 + C901;
    const double C980 = C968 + C899;
    const double C979 = C685 - C967;
    const double C978 = C964 / C74;
    const double C977 = C963 / C74;
    const double C976 = C959 / C74;
    const double C993 = C987 + C702;
    const double C992 = C983 + C694;
    const double C991 = C979 + C686;
    const double C990 = C978 - C824;
    const double C989 = C977 - C821;
    const double C988 = C976 - C807;
    const double C996 = C993 + C911;
    const double C995 = C992 + C904;
    const double C994 = C991 + C897;
    const double d2nexx000200 =
        (2 * Pi *
         (C240 * C432 - (C65 * C860) / C74 + C234 * C226 + C67 * C792 +
          C176 * C237 +
          C69 * (C706 - C585 + C793 +
                 C119 * (C794 + C199 - (C119 * C861) / C74))) *
         C70 * C71) /
        C74;
    const double d2nexx000020 =
        (2 * Pi *
         (C990 * C70 * C262 + C929 * C70 * C263 +
          (C62 * ((-C861 * C140) / C74 - C585) - (C295 * C116) / C74) * C70 *
              C264)) /
        C74;
    const double d2nexx000002 =
        (2 * Pi *
         (C990 * C347 + C939 * C348 +
          (C62 * ((-C861 * C145) / C74 - C585) - (C380 * C116) / C74) * C349) *
         C71) /
        C74;
    const double d2nexx000110 =
        (2 * Pi *
         (C994 * C70 * C268 + (C225 * C272 - (C63 * C641) / C74 + C128 * C435 +
                               C66 * (C760 + C646 - (C119 * C947) / C74)) *
                                  C70 * C270)) /
        C74;
    const double d2nexx000101 =
        (2 * Pi *
         (C994 * C353 + (C225 * C357 - (C63 * C664) / C74 + C128 * C478 +
                         C66 * (C848 + C670 - (C119 * C123 * C861) / C74)) *
                            C355) *
         C71) /
        C74;
    const double d2nexx000011 =
        (2 * Pi *
         ((C990 * C353 + C939 * C355) * C268 +
          (C929 * C353 +
           ((-C62 * C123 * C947) / C74 - (C508 * C116) / C74) * C355) *
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
         (C240 * C436 - (C65 * C710) / C74 + C234 * C219 + C67 * C796 +
          C176 * C228 + C69 * (C712 - C593 + C119 * C912)) *
         C70 * C71) /
        C74;
    const double d2nexy000020 =
        (2 * Pi *
         (C965 * C70 * C262 + C931 * C70 * C263 +
          (C62 * (C646 - C593 + C122 * C932) - (C311 * C116) / C74) * C70 *
              C264)) /
        C74;
    const double d2nexy000002 =
        (2 * Pi *
         (C965 * C347 + C940 * C348 +
          (C62 * ((-C714 * C145) / C74 - C593) - (C381 * C116) / C74) * C349) *
         C71) /
        C74;
    const double d2nexy000110 =
        (2 * Pi *
         (C980 * C70 * C268 + (C225 * C286 + C63 * C828 + C128 * C454 +
                               C66 * (C793 + C122 * C912)) *
                                  C70 * C270)) /
        C74;
    const double d2nexy000101 =
        (2 * Pi *
         (C980 * C353 +
          (C225 * C359 - (C63 * C666) / C74 + C128 * C479 + C66 * C123 * C912) *
              C355) *
         C71) /
        C74;
    const double d2nexy000011 =
        (2 * Pi *
         ((C965 * C353 + C940 * C355) * C268 +
          (C931 * C353 + (C62 * C123 * C932 - (C506 * C116) / C74) * C355) *
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
         (C240 * C439 - (C65 * C715) / C74 + C234 * C221 + C67 * C799 +
          C176 * C229 + C69 * (C717 - C599 + C119 * C913)) *
         C70 * C71) /
        C74;
    const double d2nexz000020 =
        (2 * Pi *
         (C966 * C70 * C262 + C934 * C70 * C263 +
          (C62 * ((-C719 * C140) / C74 - C599) - (C297 * C116) / C74) * C70 *
              C264)) /
        C74;
    const double d2nexz000002 =
        (2 * Pi *
         (C966 * C347 + C941 * C348 +
          (C62 * (C670 - C599 + C123 * (C199 - (C123 * C719) / C74)) -
           (C396 * C116) / C74) *
              C349) *
         C71) /
        C74;
    const double d2nexz000110 =
        (2 * Pi *
         (C981 * C70 * C268 +
          (C225 * C277 - (C63 * C648) / C74 + C128 * C449 + C66 * C122 * C913) *
              C70 * C270)) /
        C74;
    const double d2nexz000101 =
        (2 * Pi *
         (C981 * C353 + (C225 * C372 + C63 * C842 + C128 * C482 +
                         C66 * (C793 + C123 * C913)) *
                            C355) *
         C71) /
        C74;
    const double d2nexz000011 =
        (2 * Pi *
         ((C966 * C353 + C941 * C355) * C268 +
          (C934 * C353 +
           (C62 * (C646 - (C123 * C122 * C719) / C74) - (C510 * C116) / C74) *
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
         (C958 * C65 + C915 * C67 +
          (C71 * (C606 - C607 + C119 * C916) - (C237 * C124) / C74) * C69) *
         C70) /
        C74;
    const double d2neyx000020 =
        (2 * Pi *
         (C325 * C432 - (C262 * C720) / C74 + C321 * C272 + C263 * C833 +
          C310 * C295 +
          C264 * (C760 - C607 + C122 * (C794 - (C122 * C724) / C74))) *
         C62 * C70) /
        C74;
    const double d2neyx000002 =
        (2 * Pi *
         (C958 * C62 * C347 + C942 * C62 * C348 +
          (C71 * ((-C724 * C145) / C74 - C607) - (C380 * C124) / C74) * C62 *
              C349)) /
        C74;
    const double d2neyx000110 =
        (2 * Pi *
         (C982 * C63 + (C313 * C226 + C268 * C804 + C300 * C435 +
                        C270 * (C706 + C122 * C916)) *
                           C66) *
         C70) /
        C74;
    const double d2neyx000101 =
        (2 * Pi *
         ((C958 * C63 + C915 * C66) * C353 +
          (C942 * C63 + (C71 * C123 * C916 - (C478 * C124) / C74) * C66) *
              C355)) /
        C74;
    const double d2neyx000011 =
        (2 * Pi *
         (C982 * C62 * C353 + (C313 * C357 - (C268 * C671) / C74 + C300 * C508 +
                               C270 * (C848 - (C122 * C123 * C724) / C74)) *
                                  C62 * C355)) /
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
         (C988 * C65 + C918 * C67 +
          (C71 * ((-C869 * C130) / C74 - C614) - (C228 * C124) / C74) * C69) *
         C70) /
        C74;
    const double d2neyy000020 =
        (2 * Pi *
         (C325 * C436 - (C262 * C867) / C74 + C321 * C286 + C263 * C834 +
          C310 * C311 +
          C264 * (C763 - C614 + C122 * C207 - C707 +
                  C122 * (C797 + C207 - (C122 * C869) / C74))) *
         C62 * C70) /
        C74;
    const double d2neyy000002 =
        (2 * Pi *
         (C988 * C62 * C347 + C943 * C62 * C348 +
          (C71 * ((-C869 * C145) / C74 - C614) - (C381 * C124) / C74) * C62 *
              C349)) /
        C74;
    const double d2neyy000110 =
        (2 * Pi *
         (C995 * C63 + (C313 * C219 - (C268 * C611) / C74 + C300 * C454 +
                        C270 * (C712 + C606 - (C122 * C952) / C74)) *
                           C66) *
         C70) /
        C74;
    const double d2neyy000101 =
        (2 * Pi *
         ((C988 * C63 + C918 * C66) * C353 +
          (C943 * C63 +
           ((-C71 * C123 * C952) / C74 - (C479 * C124) / C74) * C66) *
              C355)) /
        C74;
    const double d2neyy000011 =
        (2 * Pi *
         (C995 * C62 * C353 +
          (C313 * C359 - (C268 * C673) / C74 + C300 * C506 +
           C270 * (C850 + C677 - (C122 * C123 * C869) / C74)) *
              C62 * C355)) /
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
         (C960 * C65 + C920 * C67 +
          (C71 * ((-C734 * C130) / C74 - C620) - (C229 * C124) / C74) * C69) *
         C70) /
        C74;
    const double d2neyz000020 =
        (2 * Pi *
         (C325 * C439 - (C262 * C730) / C74 + C321 * C277 + C263 * C835 +
          C310 * C297 +
          C264 * (C765 - C620 + C122 * (C800 - (C122 * C734) / C74))) *
         C62 * C70) /
        C74;
    const double d2neyz000002 =
        (2 * Pi *
         (C960 * C62 * C347 + C944 * C62 * C348 +
          (C71 * (C677 - C620 + C123 * C945) - (C396 * C124) / C74) * C62 *
              C349)) /
        C74;
    const double d2neyz000110 =
        (2 * Pi *
         (C984 * C63 + (C313 * C221 - (C268 * C617) / C74 + C300 * C449 +
                        C270 * (C717 - (C122 * C856) / C74)) *
                           C66) *
         C70) /
        C74;
    const double d2neyz000101 =
        (2 * Pi *
         ((C960 * C63 + C920 * C66) * C353 +
          (C944 * C63 +
           (C71 * (C606 - (C123 * C856) / C74) - (C482 * C124) / C74) * C66) *
              C355)) /
        C74;
    const double d2neyz000011 =
        (2 * Pi *
         (C984 * C62 * C353 + (C313 * C372 + C268 * C845 + C300 * C510 +
                               C270 * (C790 + C122 * C945)) *
                                  C62 * C355)) /
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
         (C961 * C71 * C65 + C922 * C71 * C67 +
          (C70 * (C625 - C626 + C119 * C923) - (C237 * C125) / C74) * C71 *
              C69)) /
        C74;
    const double d2nezx000020 =
        (2 * Pi *
         (C961 * C262 + C935 * C263 +
          (C70 * ((-C739 * C140) / C74 - C626) - (C295 * C125) / C74) * C264) *
         C62) /
        C74;
    const double d2nezx000002 =
        (2 * Pi *
         (C410 * C432 - (C347 * C735) / C74 + C406 * C357 + C348 * C847 +
          C395 * C380 +
          C349 * (C848 - C626 + C123 * (C794 - (C123 * C739) / C74))) *
         C71 * C62) /
        C74;
    const double d2nezx000110 =
        (2 * Pi *
         ((C961 * C268 + C935 * C270) * C63 +
          (C922 * C268 + (C70 * C122 * C923 - (C435 * C125) / C74) * C270) *
              C66)) /
        C74;
    const double d2nezx000101 =
        (2 * Pi *
         (C985 * C71 * C63 + (C398 * C226 + C353 * C815 + C385 * C478 +
                              C355 * (C706 + C123 * C923)) *
                                 C71 * C66)) /
        C74;
    const double d2nezx000011 =
        (2 * Pi *
         (C985 * C268 + (C398 * C272 - (C353 * C657) / C74 + C385 * C508 +
                         C355 * (C760 - (C123 * C122 * C739) / C74)) *
                            C270) *
         C62) /
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
         (C962 * C71 * C65 + C925 * C71 * C67 +
          (C70 * ((-C744 * C130) / C74 - C633) - (C228 * C125) / C74) * C71 *
              C69)) /
        C74;
    const double d2nezy000020 =
        (2 * Pi *
         (C962 * C262 + C936 * C263 +
          (C70 * (C661 - C633 + C122 * C937) - (C311 * C125) / C74) * C264) *
         C62) /
        C74;
    const double d2nezy000002 =
        (2 * Pi *
         (C410 * C436 - (C347 * C740) / C74 + C406 * C359 + C348 * C849 +
          C395 * C381 +
          C349 * (C850 - C633 + C123 * (C797 - (C123 * C744) / C74))) *
         C71 * C62) /
        C74;
    const double d2nezy000110 =
        (2 * Pi *
         ((C962 * C268 + C936 * C270) * C63 +
          (C925 * C268 +
           (C70 * (C625 - (C122 * C857) / C74) - (C454 * C125) / C74) * C270) *
              C66)) /
        C74;
    const double d2nezy000101 =
        (2 * Pi *
         (C986 * C71 * C63 + (C398 * C219 - (C353 * C630) / C74 + C385 * C479 +
                              C355 * (C712 - (C123 * C857) / C74)) *
                                 C71 * C66)) /
        C74;
    const double d2nezy000011 =
        (2 * Pi *
         (C986 * C268 + (C398 * C286 + C353 * C837 + C385 * C506 +
                         C355 * (C763 + C123 * C937)) *
                            C270) *
         C62) /
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
         (C989 * C71 * C65 + C927 * C71 * C67 +
          (C70 * ((-C879 * C130) / C74 - C639) - (C229 * C125) / C74) * C71 *
              C69)) /
        C74;
    const double d2nezz000020 =
        (2 * Pi *
         (C989 * C262 + C938 * C263 +
          (C70 * ((-C879 * C140) / C74 - C639) - (C297 * C125) / C74) * C264) *
         C62) /
        C74;
    const double d2nezz000002 =
        (2 * Pi *
         (C410 * C439 - (C347 * C877) / C74 + C406 * C372 + C348 * C851 +
          C395 * C396 +
          C349 * (C790 - C639 + C123 * C211 - C707 +
                  C123 * (C800 + C211 - (C123 * C879) / C74))) *
         C71 * C62) /
        C74;
    const double d2nezz000110 =
        (2 * Pi *
         ((C989 * C268 + C938 * C270) * C63 +
          (C927 * C268 +
           ((-C70 * C122 * C954) / C74 - (C449 * C125) / C74) * C270) *
              C66)) /
        C74;
    const double d2nezz000101 =
        (2 * Pi *
         (C996 * C71 * C63 + (C398 * C221 - (C353 * C636) / C74 + C385 * C482 +
                              C355 * (C717 + C625 - (C123 * C954) / C74)) *
                                 C71 * C66)) /
        C74;
    const double d2nezz000011 =
        (2 * Pi *
         (C996 * C268 + (C398 * C277 - (C353 * C662) / C74 + C385 * C510 +
                         C355 * (C765 + C661 - (C123 * C122 * C879) / C74)) *
                            C270) *
         C62) /
        C74;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz000110;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz000011;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz000200 - 0.5 * d2nezz000020 + d2nezz000002;
    d2nezz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz000101;
    d2nezz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz000200 - std::sqrt(0.75) * d2nezz000020;
}
