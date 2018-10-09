/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_pp_BC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_11_23(double ae,
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
    const double C626 = ae + be;
    const double C625 = ae * be;
    const double C624 = xA - xB;
    const double C627 = std::pow(C624, 2);
    const double C628 = C627 * C625;
    const double C629 = C628 / C626;
    const double C630 = -C629;
    const double C631 = std::exp(C630);
    const double C642 = 2 * C626;
    const double C648 = yA - yB;
    const double C653 = zA - zB;
    const double C660 = std::pow(C648, 2);
    const double C661 = C660 * C625;
    const double C662 = C661 / C626;
    const double C663 = -C662;
    const double C664 = std::exp(C663);
    const double C673 = std::pow(C653, 2);
    const double C674 = C673 * C625;
    const double C675 = C674 / C626;
    const double C676 = -C675;
    const double C677 = std::exp(C676);
    const double C694 = C653 * be;
    const double C693 = C648 * be;
    const double C692 = C653 * ae;
    const double C691 = std::pow(C653, 2);
    const double C690 = C648 * ae;
    const double C689 = std::pow(C648, 2);
    const double C688 = std::pow(C642, -1);
    const double C687 = std::pow(C626, 2);
    const double C686 = C624 * be;
    const double C685 = C624 * ae;
    const double C684 = 2 * C626;
    const double C704 = C688 * C677;
    const double C703 = C677 * C692;
    const double C702 = C688 * C664;
    const double C701 = C664 * C690;
    const double C700 = C691 * C625;
    const double C699 = C689 * C625;
    const double C698 = C688 * C631;
    const double C697 = 2 * C687;
    const double C696 = std::pow(C684, -1);
    const double C695 = C631 * C685;
    const double C707 = C700 / C626;
    const double C706 = C699 / C626;
    const double C705 = C696 * C631;
    const double C709 = -C707;
    const double C708 = -C706;
    const double C711 = std::exp(C709);
    const double C710 = std::exp(C708);
    const double C713 = C688 * C711;
    const double C712 = C688 * C710;
    const double C59 = C631 / C684 - (C695 * C686) / C687;
    const double C64 = C695 / C626;
    const double C67 = C695 / C697 - (C705 * C686) / C626;
    const double C69 = C698 / C642;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C625) / C626);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C625) / C626);
    const double C262 = -(C631 * C686) / C626;
    const double C264 = (C710 * C690) / C626;
    const double C344 = (C711 * C692) / C626;
    const double C390 = -(C710 * C693) / C626;
    const double C427 = C664 / C642 - (C701 * C693) / C687;
    const double C428 = C701 / C697 - (C702 * C693) / C626;
    const double C429 = C702 / C642;
    const double C521 = -(C711 * C694) / C626;
    const double C576 = C677 / C642 - (C703 * C694) / C687;
    const double C577 = C703 / C697 - (C704 * C694) / C626;
    const double C578 = C704 / C642;
    const double C90 = zA - zB;
    const double C89 = yA - yB;
    const double C88 = be * zB;
    const double C87 = ae * zA;
    const double C86 = be * yB;
    const double C85 = ae * yA;
    const double C84 = bs[4];
    const double C83 = 0 * be;
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
    const double C107 = C95 * C631;
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
    const double C176 = C97 - C152;
    const double C175 = C151 * C121;
    const double C174 = C150 * C92;
    const double C173 = C149 + C705;
    const double C172 = C631 - C147;
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
    const double C195 = C173 * be;
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
    const double C234 = C215 - C231;
    const double C233 = C230 + C64;
    const double C237 = C235 - C132;
    const double C236 = C233 * be;
    const double C238 = C236 / C74;
    const double C239 = C193 - C238;
    const double C240 = C239 + C129;
    const double C290 = C143 * C75;
    const double C289 = C139 * C75;
    const double C288 = 0 * ae;
    const double C287 = C112 / C94;
    const double C286 = C89 * C124;
    const double C285 = 0 * be;
    const double C284 = 2 * C184;
    const double C283 = C122 * C203;
    const double C282 = C182 * be;
    const double C281 = 2 * C160;
    const double C280 = 2 * C181;
    const double C279 = C122 * C200;
    const double C278 = C179 * be;
    const double C277 = 2 * C156;
    const double C276 = C122 * C227;
    const double C275 = C122 * C196;
    const double C274 = C131 * C75;
    const double C273 = C174 * be;
    const double C272 = C117 / C74;
    const double C271 = 0 * be;
    const double C270 = 2 * C148;
    const double C269 = C78 / C74;
    const double C268 = C172 * be;
    const double C306 = C290 * C92;
    const double C305 = C289 * C92;
    const double C304 = C288 / C74;
    const double C303 = C286 / C74;
    const double C302 = C285 / C106;
    const double C301 = C114 * C284;
    const double C300 = -2 * C282;
    const double C299 = C114 * C280;
    const double C298 = C279 + C104;
    const double C297 = -2 * C278;
    const double C296 = C274 * C92;
    const double C295 = -2 * C273;
    const double C294 = -C272;
    const double C293 = C271 / C74;
    const double C292 = -C269;
    const double C291 = C268 / C74;
    const double C316 = -2 * C306;
    const double C315 = C287 - C304;
    const double C314 = C71 - C303;
    const double C313 = C122 * C301;
    const double C312 = C300 / C74;
    const double C311 = C122 * C299;
    const double C310 = C297 / C74;
    const double C309 = C295 / C74;
    const double C308 = C294 / C92;
    const double C307 = C292 / C92;
    const double C320 = C314 * ae;
    const double C319 = C311 - C132;
    const double C318 = C293 - C308;
    const double C317 = C291 - C307;
    const double C321 = C320 / C74;
    const double C322 = C302 - C321;
    const double C358 = 0 * ae;
    const double C357 = C113 / C94;
    const double C356 = C90 * C125;
    const double C355 = 0 * be;
    const double C354 = -2 * C305;
    const double C353 = C123 * C301;
    const double C352 = C123 * C203;
    const double C351 = C123 * C299;
    const double C350 = C123 * C200;
    const double C349 = C123 * C227;
    const double C348 = C123 * C196;
    const double C363 = C358 / C74;
    const double C362 = C356 / C74;
    const double C361 = C355 / C106;
    const double C360 = C353 - C132;
    const double C359 = C352 + C104;
    const double C365 = C357 - C363;
    const double C364 = C70 - C362;
    const double C366 = C364 * ae;
    const double C367 = C366 / C74;
    const double C368 = C361 - C367;
    const double C397 = C124 / C74;
    const double C396 = 0 * be;
    const double C395 = C285 / C74;
    const double C394 = C314 * be;
    const double C393 = C119 - C96;
    const double C392 = C118 - C214;
    const double C401 = -C397;
    const double C400 = C396 / C74;
    const double C399 = -C395;
    const double C398 = C394 / C74;
    const double C403 = C401 / C92;
    const double C402 = C399 / C92;
    const double C405 = C400 - C403;
    const double C404 = C398 - C402;
    const double C441 = 0 * be;
    const double C440 = C304 - C287;
    const double C439 = C321 - C302;
    const double C438 = 0 * be;
    const double C437 = C89 * C285;
    const double C436 = C184 * C140;
    const double C435 = C122 * C120;
    const double C434 = C122 * C280;
    const double C433 = C177 * C140;
    const double C451 = C440 / C92;
    const double C450 = C441 / C74;
    const double C449 = C439 / C92;
    const double C448 = C89 * C440;
    const double C447 = C89 * C439;
    const double C446 = C438 / C106;
    const double C445 = C437 / C74;
    const double C444 = 2 * C436;
    const double C443 = C434 - C120;
    const double C442 = 2 * C433;
    const double C458 = C450 - C451;
    const double C457 = C448 + C712;
    const double C456 = C447 + C264;
    const double C455 = 0 - C445;
    const double C454 = C203 + C444;
    const double C453 = C122 * C443;
    const double C452 = C196 + C442;
    const double C462 = C457 * be;
    const double C461 = C456 * be;
    const double C460 = C455 * ae;
    const double C459 = C200 + C453;
    const double C466 = C462 / C74;
    const double C465 = C461 / C74;
    const double C464 = C460 / C74;
    const double C463 = C459 - C435;
    const double C468 = C466 - C449;
    const double C467 = C464 - C446;
    const double C469 = C467 / C92;
    const double C470 = C469 - C465;
    const double C471 = C470 + C440;
    const double C496 = C122 * C284;
    const double C495 = C123 * C443;
    const double C494 = -2 * C296;
    const double C493 = C122 * C198;
    const double C498 = C123 * C496;
    const double C497 = C123 * C493;
    const double C499 = C498 - C435;
    const double C526 = C125 / C74;
    const double C525 = 0 * be;
    const double C524 = C355 / C74;
    const double C523 = C364 * be;
    const double C530 = -C526;
    const double C529 = C525 / C74;
    const double C528 = -C524;
    const double C527 = C523 / C74;
    const double C532 = C530 / C92;
    const double C531 = C528 / C92;
    const double C534 = C529 - C532;
    const double C533 = C527 - C531;
    const double C590 = 0 * be;
    const double C589 = C363 - C357;
    const double C588 = C367 - C361;
    const double C587 = 0 * be;
    const double C586 = C90 * C355;
    const double C585 = C123 * C120;
    const double C584 = C123 * C284;
    const double C583 = C181 * C145;
    const double C582 = C177 * C145;
    const double C600 = C589 / C92;
    const double C599 = C590 / C74;
    const double C598 = C588 / C92;
    const double C597 = C90 * C589;
    const double C596 = C90 * C588;
    const double C595 = C587 / C106;
    const double C594 = C586 / C74;
    const double C593 = C584 - C120;
    const double C592 = 2 * C583;
    const double C591 = 2 * C582;
    const double C607 = C599 - C600;
    const double C606 = C597 + C713;
    const double C605 = C596 + C344;
    const double C604 = 0 - C594;
    const double C603 = C123 * C593;
    const double C602 = C200 + C592;
    const double C601 = C196 + C591;
    const double C611 = C606 * be;
    const double C610 = C605 * be;
    const double C609 = C604 * ae;
    const double C608 = C203 + C603;
    const double C615 = C611 / C74;
    const double C614 = C610 / C74;
    const double C613 = C609 / C74;
    const double C612 = C608 - C585;
    const double C617 = C615 - C598;
    const double C616 = C613 - C595;
    const double C618 = C616 / C92;
    const double C619 = C618 - C614;
    const double C620 = C619 + C589;
    const double C866 = C534 * C359;
    const double C865 = C533 * C281;
    const double C864 = C534 * C350;
    const double C863 = C533 * C277;
    const double C862 = C534 * C348;
    const double C861 = C533 * C270;
    const double C860 = C593 * be;
    const double C859 = C123 * C207;
    const double C858 = C123 * C280;
    const double C857 = C499 * C117;
    const double C856 = C359 * C117;
    const double C855 = C495 * C117;
    const double C854 = C350 * C117;
    const double C853 = C497 * C117;
    const double C852 = C348 * C117;
    const double C851 = C122 * C211;
    const double C850 = C496 * be;
    const double C849 = C443 * be;
    const double C848 = C283 * C117;
    const double C847 = C160 * C117;
    const double C846 = C298 * C117;
    const double C845 = C156 * C117;
    const double C844 = C275 * C117;
    const double C843 = C148 * C117;
    const double C842 = C405 * C283;
    const double C841 = C404 * C281;
    const double C840 = C405 * C298;
    const double C839 = C404 * C277;
    const double C838 = C405 * C275;
    const double C837 = C404 * C270;
    const double C836 = C393 * C221;
    const double C835 = C392 * C281;
    const double C834 = C393 * C219;
    const double C833 = C392 * C277;
    const double C832 = C393 * C226;
    const double C831 = C392 * C270;
    const double C830 = C123 * C224;
    const double C829 = 2 * C306;
    const double C828 = C365 * C359;
    const double C827 = C368 * C281;
    const double C826 = C123 * C212;
    const double C825 = C365 * C350;
    const double C824 = C368 * C277;
    const double C823 = C123 * C210;
    const double C822 = C365 * C348;
    const double C821 = C368 * C270;
    const double C820 = C360 * C124;
    const double C819 = C123 * C209;
    const double C818 = C359 * C124;
    const double C817 = C351 * C124;
    const double C816 = C123 * C223;
    const double C815 = C350 * C124;
    const double C814 = C349 * C124;
    const double C813 = C123 * C206;
    const double C812 = C348 * C124;
    const double C811 = C123 * C204;
    const double C810 = C123 * C201;
    const double C809 = C123 * C199;
    const double C808 = C123 * C198;
    const double C807 = C123 * C217;
    const double C806 = C313 * C125;
    const double C805 = C122 * C224;
    const double C804 = C283 * C125;
    const double C803 = C319 * C125;
    const double C802 = C122 * C212;
    const double C801 = C298 * C125;
    const double C800 = C276 * C125;
    const double C799 = C122 * C210;
    const double C798 = C275 * C125;
    const double C797 = C122 * C209;
    const double C796 = C315 * C283;
    const double C795 = C322 * C281;
    const double C794 = C122 * C223;
    const double C793 = 2 * C305;
    const double C792 = C315 * C298;
    const double C791 = C322 * C277;
    const double C790 = C122 * C206;
    const double C789 = C315 * C275;
    const double C788 = C322 * C270;
    const double C787 = C122 * C204;
    const double C786 = C318 * C221;
    const double C785 = C317 * C281;
    const double C784 = C122 * C201;
    const double C783 = C318 * C219;
    const double C782 = C317 * C277;
    const double C781 = C122 * C199;
    const double C780 = C493 * be;
    const double C779 = C122 * C217;
    const double C778 = C318 * C226;
    const double C777 = C317 * C270;
    const double C776 = C224 / C74;
    const double C775 = C145 * C84;
    const double C774 = C114 * C224;
    const double C773 = C221 * C125;
    const double C772 = C145 * C75;
    const double C771 = C160 * C125;
    const double C770 = C212 / C74;
    const double C769 = C84 * C169;
    const double C768 = C114 * C212;
    const double C767 = C219 * C125;
    const double C766 = C75 * C169;
    const double C765 = C156 * C125;
    const double C764 = C84 * C167;
    const double C763 = C210 / C74;
    const double C762 = C114 * C211;
    const double C761 = C114 * C210;
    const double C760 = C226 * C125;
    const double C759 = C75 * C167;
    const double C758 = C148 * C125;
    const double C757 = C209 / C74;
    const double C756 = C84 * C166;
    const double C755 = C114 * C209;
    const double C754 = C221 * C124;
    const double C753 = C75 * C166;
    const double C752 = C160 * C124;
    const double C751 = C223 / C74;
    const double C750 = C140 * C84;
    const double C749 = C114 * C223;
    const double C748 = C219 * C124;
    const double C747 = C140 * C75;
    const double C746 = C156 * C124;
    const double C745 = C84 * C163;
    const double C744 = C206 / C74;
    const double C743 = C114 * C207;
    const double C742 = C114 * C206;
    const double C741 = C226 * C124;
    const double C740 = C75 * C163;
    const double C739 = C148 * C124;
    const double C738 = C84 * C159;
    const double C737 = C184 * be;
    const double C736 = C204 / C74;
    const double C735 = C301 * be;
    const double C734 = C114 * C204;
    const double C733 = C75 * C159;
    const double C732 = C84 * C155;
    const double C731 = C181 * be;
    const double C730 = C201 / C74;
    const double C729 = C299 * be;
    const double C728 = C114 * C201;
    const double C727 = C75 * C155;
    const double C726 = C126 * C84;
    const double C725 = C177 * be;
    const double C724 = C120 * be;
    const double C723 = C114 * C199;
    const double C722 = C217 / C74;
    const double C721 = C227 * be;
    const double C720 = C114 * C217;
    const double C719 = 2 * C296;
    const double C718 = C126 * C75;
    const double C963 = C860 / C74;
    const double C962 = C858 * be;
    const double C961 = C857 / C74;
    const double C960 = C856 / C74;
    const double C959 = C855 / C74;
    const double C958 = C631 * C810;
    const double C957 = C854 / C74;
    const double C956 = C853 / C74;
    const double C955 = C631 * C807;
    const double C954 = C852 / C74;
    const double C953 = C850 / C74;
    const double C952 = C849 / C74;
    const double C951 = C631 * C787;
    const double C950 = C848 / C74;
    const double C949 = 2 * C847;
    const double C948 = C846 / C74;
    const double C947 = 2 * C845;
    const double C946 = C631 * C779;
    const double C945 = C844 / C74;
    const double C944 = 2 * C843;
    const double C943 = C830 / C74;
    const double C942 = C312 - C829;
    const double C941 = C826 / C74;
    const double C940 = C823 / C74;
    const double C939 = C820 / C74;
    const double C938 = C819 / C74;
    const double C937 = C818 / C74;
    const double C936 = C817 / C74;
    const double C935 = C71 * C816;
    const double C934 = C815 / C74;
    const double C933 = C814 / C74;
    const double C932 = C71 * C813;
    const double C931 = C812 / C74;
    const double C930 = C811 / C74;
    const double C929 = C808 * be;
    const double C928 = C806 / C74;
    const double C927 = C70 * C805;
    const double C926 = C804 / C74;
    const double C925 = C803 / C74;
    const double C924 = C802 / C74;
    const double C923 = C801 / C74;
    const double C922 = C800 / C74;
    const double C921 = C70 * C799;
    const double C920 = C798 / C74;
    const double C919 = C797 / C74;
    const double C918 = C794 / C74;
    const double C917 = C310 - C793;
    const double C916 = C790 / C74;
    const double C915 = C784 / C74;
    const double C914 = C780 / C74;
    const double C913 = C775 * C109;
    const double C912 = C70 * C774;
    const double C911 = C773 / C74;
    const double C910 = C772 * C103;
    const double C909 = 2 * C771;
    const double C908 = C109 * C769;
    const double C907 = C70 * C768;
    const double C906 = C767 / C74;
    const double C905 = C103 * C766;
    const double C904 = 2 * C765;
    const double C903 = C109 * C764;
    const double C902 = C761 / C74;
    const double C901 = C760 / C74;
    const double C900 = C103 * C759;
    const double C899 = 2 * C758;
    const double C898 = C109 * C756;
    const double C897 = C71 * C755;
    const double C896 = C754 / C74;
    const double C895 = C103 * C753;
    const double C894 = 2 * C752;
    const double C893 = C750 * C109;
    const double C892 = C71 * C749;
    const double C891 = C748 / C74;
    const double C890 = C747 * C103;
    const double C889 = 2 * C746;
    const double C888 = C109 * C745;
    const double C887 = C742 / C74;
    const double C886 = C741 / C74;
    const double C885 = C103 * C740;
    const double C884 = 2 * C739;
    const double C883 = C109 * C738;
    const double C882 = 2 * C737;
    const double C881 = C735 / C74;
    const double C880 = C734 / C74;
    const double C879 = C103 * C733;
    const double C878 = C109 * C732;
    const double C877 = 2 * C731;
    const double C876 = C729 / C74;
    const double C875 = C728 / C74;
    const double C874 = C103 * C727;
    const double C873 = C726 * C109;
    const double C872 = 2 * C725;
    const double C871 = C724 / C74;
    const double C870 = C721 / C74;
    const double C869 = C720 / C74;
    const double C868 = C309 - C719;
    const double C867 = C718 * C103;
    const double C1045 = C521 * C905;
    const double C1044 = C521 * C900;
    const double C1043 = C953 + C851;
    const double C1042 = C122 * C903;
    const double C1041 = C123 * C898;
    const double C1040 = C962 / C74;
    const double C1039 = C123 * C888;
    const double C1038 = C122 * C883;
    const double C1037 = C958 / C74;
    const double C1036 = C955 / C74;
    const double C1035 = C122 * C908;
    const double C1034 = C951 / C74;
    const double C1033 = C631 * C879;
    const double C1032 = C949 / C74;
    const double C1031 = C122 * C878;
    const double C1030 = C631 * C874;
    const double C1029 = C947 / C74;
    const double C1028 = C946 / C74;
    const double C1027 = C944 / C74;
    const double C1026 = C390 * C895;
    const double C1025 = C390 * C885;
    const double C1024 = C64 * C879;
    const double C1023 = C64 * C874;
    const double C1022 = C881 + C762;
    const double C1021 = C942 - C943;
    const double C1020 = C310 - C941;
    const double C1019 = C344 * C905;
    const double C1018 = C309 - C940;
    const double C1017 = C344 * C900;
    const double C1016 = C354 - C938;
    const double C1015 = C935 / C74;
    const double C1014 = C932 / C74;
    const double C1013 = C494 - C930;
    const double C1012 = C929 / C74;
    const double C1011 = C927 / C74;
    const double C1010 = C114 * C908;
    const double C1009 = C316 - C924;
    const double C1008 = C921 / C74;
    const double C1007 = C114 * C898;
    const double C1006 = C312 - C919;
    const double C1005 = C264 * C895;
    const double C1004 = C876 + C743;
    const double C1003 = C917 - C918;
    const double C1002 = C309 - C916;
    const double C1001 = C264 * C885;
    const double C1000 = C262 * C879;
    const double C999 = C494 - C915;
    const double C998 = C262 * C874;
    const double C997 = C914 + C781;
    const double C996 = C133 + C913;
    const double C995 = C912 / C74;
    const double C994 = C910 - C104;
    const double C993 = C909 / C74;
    const double C992 = C907 / C74;
    const double C991 = C70 * C905;
    const double C990 = C904 / C74;
    const double C989 = C114 * C903;
    const double C988 = C316 - C902;
    const double C987 = C70 * C900;
    const double C986 = C899 / C74;
    const double C985 = C897 / C74;
    const double C984 = C71 * C895;
    const double C983 = C894 / C74;
    const double C982 = C133 + C893;
    const double C981 = C892 / C74;
    const double C980 = C890 - C104;
    const double C979 = C889 / C74;
    const double C978 = C114 * C888;
    const double C977 = C354 - C887;
    const double C976 = C71 * C885;
    const double C975 = C884 / C74;
    const double C974 = C114 * C883;
    const double C973 = C882 / C74;
    const double C972 = C312 - C880;
    const double C971 = C114 * C878;
    const double C970 = C877 / C74;
    const double C969 = C310 - C875;
    const double C968 = C133 + C873;
    const double C967 = C872 / C74;
    const double C966 = C723 - C871;
    const double C965 = C868 - C869;
    const double C964 = C867 - C104;
    const double C1115 = C1045 / C74;
    const double C1114 = C1044 / C74;
    const double C1113 = C123 * C1042;
    const double C1112 = C1041 / C74;
    const double C1111 = C1040 + C859;
    const double C1110 = C122 * C1039;
    const double C1109 = C123 * C1038;
    const double C1108 = C631 * C1013;
    const double C1107 = C957 - C1037;
    const double C1106 = C954 - C1036;
    const double C1105 = C1035 / C74;
    const double C1104 = C950 - C1034;
    const double C1103 = C1033 / C74;
    const double C1102 = C1031 / C74;
    const double C1101 = C631 * C999;
    const double C1100 = C1030 / C74;
    const double C1099 = C945 - C1028;
    const double C1098 = C1026 / C74;
    const double C1097 = C1025 / C74;
    const double C1096 = C705 * C972;
    const double C1095 = C1024 / C74;
    const double C1094 = C705 * C969;
    const double C1093 = C1023 / C74;
    const double C1092 = C705 * C965;
    const double C1091 = C713 * C1021;
    const double C1090 = C123 * C1010;
    const double C1089 = C713 * C1020;
    const double C1088 = C1019 / C74;
    const double C1087 = C713 * C1018;
    const double C1086 = C1017 / C74;
    const double C1085 = C123 * C1007;
    const double C1084 = C71 * C1016;
    const double C1083 = C934 - C1015;
    const double C1082 = C931 - C1014;
    const double C1081 = C1012 + C809;
    const double C1080 = C926 - C1011;
    const double C1079 = C122 * C1010;
    const double C1078 = C70 * C1009;
    const double C1077 = C920 - C1008;
    const double C1076 = C122 * C1007;
    const double C1075 = C712 * C1006;
    const double C1074 = C1005 / C74;
    const double C1073 = C712 * C1003;
    const double C1072 = C712 * C1002;
    const double C1071 = C1001 / C74;
    const double C1070 = C698 * C972;
    const double C1069 = C1000 / C74;
    const double C1068 = C698 * C969;
    const double C1067 = C998 / C74;
    const double C1066 = C698 * C965;
    const double C1065 = C996 * be;
    const double C1064 = C911 - C995;
    const double C1063 = C994 * be;
    const double C1062 = C906 - C992;
    const double C1061 = C991 / C74;
    const double C1060 = C989 / C74;
    const double C1059 = C70 * C988;
    const double C1058 = C987 / C74;
    const double C1057 = C896 - C985;
    const double C1056 = C984 / C74;
    const double C1055 = C982 * be;
    const double C1054 = C891 - C981;
    const double C1053 = C980 * be;
    const double C1052 = C978 / C74;
    const double C1051 = C71 * C977;
    const double C1050 = C976 / C74;
    const double C1049 = C974 / C74;
    const double C1048 = C971 / C74;
    const double C1047 = C968 * be;
    const double C1046 = C964 * be;
    const double C1172 = C521 * C1063;
    const double C1171 = C863 - C1115;
    const double C1170 = C861 - C1114;
    const double C1169 = C122 * C1065;
    const double C1168 = C1113 / C74;
    const double C1167 = C207 - C1112;
    const double C1166 = C123 * C1055;
    const double C1165 = C1110 / C74;
    const double C1164 = C1109 / C74;
    const double C1163 = C960 + C1108;
    const double C1162 = C1107 * C713;
    const double C1161 = C1106 * C713;
    const double C1160 = C211 - C1105;
    const double C1159 = C1032 - C1103;
    const double C1158 = C199 - C1102;
    const double C1157 = C948 + C1101;
    const double C1156 = C1029 - C1100;
    const double C1155 = C631 * C1046;
    const double C1154 = C841 - C1098;
    const double C1153 = C390 * C1053;
    const double C1152 = C837 - C1097;
    const double C1151 = C835 - C1095;
    const double C1150 = C833 - C1093;
    const double C1149 = C64 * C1046;
    const double C1148 = C344 * C1063;
    const double C1147 = C1090 / C74;
    const double C1146 = C824 - C1088;
    const double C1145 = C821 - C1086;
    const double C1144 = C1085 / C74;
    const double C1143 = C937 + C1084;
    const double C1142 = C123 * C1047;
    const double C1141 = C114 * C1065;
    const double C1140 = C1080 * C712;
    const double C1139 = C1079 / C74;
    const double C1138 = C923 + C1078;
    const double C1137 = C1077 * C712;
    const double C1136 = C1076 / C74;
    const double C1135 = C795 - C1074;
    const double C1134 = C114 * C1055;
    const double C1133 = C264 * C1053;
    const double C1132 = C788 - C1071;
    const double C1131 = C785 - C1069;
    const double C1130 = C782 - C1067;
    const double C1129 = C122 * C1047;
    const double C1128 = C262 * C1046;
    const double C1127 = C70 * C1063;
    const double C1126 = C990 - C1061;
    const double C1125 = C211 - C1060;
    const double C1124 = C901 + C1059;
    const double C1123 = C986 - C1058;
    const double C1122 = C983 - C1056;
    const double C1121 = C71 * C1053;
    const double C1120 = C207 - C1052;
    const double C1119 = C886 + C1051;
    const double C1118 = C975 - C1050;
    const double C1117 = C973 - C1049;
    const double C1116 = C970 - C1048;
    const double C1222 = C1172 / C74;
    const double C1221 = C1171 + C864;
    const double C1220 = C1170 + C862;
    const double C1219 = C123 * C1169;
    const double C1218 = C123 * C1160;
    const double C1217 = C914 - C1168;
    const double C1216 = C122 * C1167;
    const double C1215 = C122 * C1166;
    const double C1214 = C1012 - C1165;
    const double C1213 = C781 - C1164;
    const double C1212 = C1163 * C713;
    const double C1211 = C123 * C1158;
    const double C1210 = C123 * C1129;
    const double C1209 = C1155 / C74;
    const double C1208 = C1154 + C842;
    const double C1207 = C1153 / C74;
    const double C1206 = C1152 + C838;
    const double C1205 = C1151 + C836;
    const double C1204 = C1150 + C834;
    const double C1203 = C1149 / C74;
    const double C1202 = C123 * C1141;
    const double C1201 = C1148 / C74;
    const double C1200 = C876 - C1147;
    const double C1199 = C1146 + C825;
    const double C1198 = C123 * C1125;
    const double C1197 = C1145 + C822;
    const double C1196 = C743 - C1144;
    const double C1195 = C123 * C1134;
    const double C1194 = C123 * C1120;
    const double C1193 = C123 * C1117;
    const double C1192 = C123 * C1116;
    const double C1191 = C114 * C1142;
    const double C1190 = C122 * C1141;
    const double C1189 = C762 - C1139;
    const double C1188 = C1138 * C712;
    const double C1187 = C122 * C1125;
    const double C1186 = C881 - C1136;
    const double C1185 = C1135 + C796;
    const double C1184 = C122 * C1134;
    const double C1183 = C1133 / C74;
    const double C1182 = C122 * C1120;
    const double C1181 = C1132 + C789;
    const double C1180 = C122 * C1117;
    const double C1179 = C1131 + C786;
    const double C1178 = C122 * C1116;
    const double C1177 = C1130 + C783;
    const double C1176 = C114 * C1129;
    const double C1175 = C1128 / C74;
    const double C1174 = C1127 / C74;
    const double C1173 = C1121 / C74;
    const double C1268 = C865 - C1222;
    const double C1267 = C1221 + C1089;
    const double C1266 = C1220 + C1087;
    const double C1265 = C1219 / C74;
    const double C1264 = C952 + C1218;
    const double C1263 = C713 * C1217;
    const double C1262 = C963 + C1216;
    const double C1261 = C1215 / C74;
    const double C1260 = C712 * C1214;
    const double C1259 = C631 * C1213;
    const double C1258 = C631 * C1211;
    const double C1257 = C631 * C1210;
    const double C1256 = C1027 - C1209;
    const double C1255 = C1208 + C1075;
    const double C1254 = C839 - C1207;
    const double C1253 = C1206 + C1072;
    const double C1252 = C1205 + C1096;
    const double C1251 = C1204 + C1094;
    const double C1250 = C831 - C1203;
    const double C1249 = C1202 / C74;
    const double C1248 = C827 - C1201;
    const double C1247 = C713 * C1200;
    const double C1246 = C1199 + C1089;
    const double C1245 = C870 + C1198;
    const double C1244 = C1197 + C1087;
    const double C1243 = C71 * C1196;
    const double C1242 = C71 * C1195;
    const double C1241 = C71 * C1194;
    const double C1240 = C966 + C1193;
    const double C1239 = C1191 / C74;
    const double C1238 = C70 * C1190;
    const double C1237 = C70 * C1189;
    const double C1236 = C70 * C1187;
    const double C1235 = C712 * C1186;
    const double C1234 = C1185 + C1075;
    const double C1233 = C1184 / C74;
    const double C1232 = C791 - C1183;
    const double C1231 = C870 + C1182;
    const double C1230 = C1181 + C1072;
    const double C1229 = C1179 + C1070;
    const double C1228 = C966 + C1178;
    const double C1227 = C1177 + C1068;
    const double C1226 = C1176 / C74;
    const double C1225 = C777 - C1175;
    const double C1224 = C993 - C1174;
    const double C1223 = C979 - C1173;
    const double C1293 = C1268 + C866;
    const double C1292 = C1043 - C1265;
    const double C1291 = C713 * C1264;
    const double C1290 = C712 * C1262;
    const double C1289 = C1111 - C1261;
    const double C1288 = C961 + C1259;
    const double C1287 = C959 + C1258;
    const double C1286 = C1257 / C74;
    const double C1285 = C1254 + C840;
    const double C1284 = C1250 + C832;
    const double C1283 = C1022 - C1249;
    const double C1282 = C1248 + C828;
    const double C1281 = C713 * C1245;
    const double C1280 = C939 + C1243;
    const double C1279 = C1242 / C74;
    const double C1278 = C933 + C1241;
    const double C1277 = C1081 - C1239;
    const double C1276 = C1238 / C74;
    const double C1275 = C925 + C1237;
    const double C1274 = C922 + C1236;
    const double C1273 = C1004 - C1233;
    const double C1272 = C1232 + C792;
    const double C1271 = C712 * C1231;
    const double C1270 = C997 - C1226;
    const double C1269 = C1225 + C778;
    const double C1310 = C1293 + C1091;
    const double C1309 = C713 * C1292;
    const double C1308 = C712 * C1289;
    const double C1307 = C1288 * C713;
    const double C1306 = C1287 * C713;
    const double C1305 = C956 - C1286;
    const double C1304 = C1285 + C1073;
    const double C1303 = C1284 + C1092;
    const double C1302 = C713 * C1283;
    const double C1301 = C1282 + C1091;
    const double C1300 = C936 - C1279;
    const double C1299 = C928 - C1276;
    const double C1298 = C1275 * C712;
    const double C1297 = C1274 * C712;
    const double C1296 = C712 * C1273;
    const double C1295 = C1272 + C1073;
    const double C1294 = C1269 + C1066;
    const double C1312 = C1305 * C713;
    const double C1311 = C1299 * C712;
    const double d2nexx100100 =
        (2 * Pi *
         ((-C59 * C1046) / C74 - C240 * C270 + C234 * C226 + C67 * C965 +
          C176 * C237 +
          C69 * (C870 - C722 + C966 +
                 C114 * (C967 + C199 - (C114 * C1047) / C74))) *
         C70 * C71) /
        C74;
    const double d2nexx100010 =
        (2 * Pi *
         (C1294 * C70 * C264 +
          (C317 * C275 - (C262 * C779) / C74 + C318 * C276 + C698 * C1270) *
              C70 * C712)) /
        C74;
    const double d2nexx100001 =
        (2 * Pi *
         (C1294 * C344 +
          (C317 * C348 - (C262 * C807) / C74 + C318 * C349 + C698 * C1277) *
              C713) *
         C71) /
        C74;
    const double d2nexx010100 =
        (2 * Pi *
         (C1303 * C70 * C390 +
          (C392 * C275 - (C64 * C779) / C74 + C393 * C276 + C705 * C1270) *
              C70 * C712)) /
        C74;
    const double d2nexx010010 =
        (2 * Pi *
         (C1256 * C70 * C427 + C1099 * C70 * C428 +
          ((C452 * C117) / C74 + C631 * ((-C1047 * C140) / C74 - C722)) * C70 *
              C429)) /
        C74;
    const double d2nexx010001 =
        (2 * Pi *
         ((C1256 * C344 + C1161) * C390 + (C1099 * C344 + C1312) * C712)) /
        C74;
    const double d2nexx001100 =
        (2 * Pi *
         (C1303 * C521 +
          (C392 * C348 - (C64 * C807) / C74 + C393 * C349 + C705 * C1277) *
              C713) *
         C71) /
        C74;
    const double d2nexx001010 =
        (2 * Pi *
         ((C1256 * C521 + C1161) * C264 + (C1099 * C521 + C1312) * C712)) /
        C74;
    const double d2nexx001001 =
        (2 * Pi *
         (C1256 * C576 + C1106 * C577 +
          ((C601 * C117) / C74 + C631 * ((-C1047 * C145) / C74 - C722)) *
              C578) *
         C71) /
        C74;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx100100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx100010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx100001;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += d2nexx010100;
    d2nexx[(Ai + 1) * matrix_size + Bi + 1] += d2nexx010010;
    d2nexx[(Ai + 1) * matrix_size + Bi + 2] += d2nexx010001;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += d2nexx001100;
    d2nexx[(Ai + 2) * matrix_size + Bi + 1] += d2nexx001010;
    d2nexx[(Ai + 2) * matrix_size + Bi + 2] += d2nexx001001;
    const double d2nexy100100 =
        (2 * Pi *
         ((-C59 * C874) / C74 - C240 * C277 + C234 * C219 + C67 * C969 +
          C176 * C228 + C69 * (C876 - C730 + C114 * C1116)) *
         C70 * C71) /
        C74;
    const double d2nexy100010 =
        (2 * Pi *
         (C1227 * C70 * C264 +
          (C317 * C298 + C262 * C999 + C318 * C319 + C698 * C1228) * C70 *
              C712)) /
        C74;
    const double d2nexy100001 =
        (2 * Pi *
         (C1227 * C344 +
          (C317 * C350 - (C262 * C810) / C74 + C318 * C351 + C698 * C1192) *
              C713) *
         C71) /
        C74;
    const double d2nexy010100 =
        (2 * Pi *
         (C1251 * C70 * C390 +
          (C392 * C298 + C64 * C999 + C393 * C319 + C705 * C1228) * C70 *
              C712)) /
        C74;
    const double d2nexy010010 =
        (2 * Pi *
         (C1156 * C70 * C427 + C1157 * C70 * C428 +
          ((C463 * C117) / C74 + C631 * (C781 - C730 + C122 * C1158)) * C70 *
              C429)) /
        C74;
    const double d2nexy010001 =
        (2 * Pi *
         ((C1156 * C344 + C1162) * C390 + (C1157 * C344 + C1306) * C712)) /
        C74;
    const double d2nexy001100 =
        (2 * Pi *
         (C1251 * C521 +
          (C392 * C350 - (C64 * C810) / C74 + C393 * C351 + C705 * C1192) *
              C713) *
         C71) /
        C74;
    const double d2nexy001010 =
        (2 * Pi *
         ((C1156 * C521 + C1162) * C264 + (C1157 * C521 + C1306) * C712)) /
        C74;
    const double d2nexy001001 =
        (2 * Pi *
         (C1156 * C576 + C1107 * C577 +
          ((C602 * C117) / C74 + C631 * ((-C878 * C145) / C74 - C730)) * C578) *
         C71) /
        C74;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy100100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy100010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy100001;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += d2nexy010100;
    d2nexy[(Ai + 1) * matrix_size + Bi + 1] += d2nexy010010;
    d2nexy[(Ai + 1) * matrix_size + Bi + 2] += d2nexy010001;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += d2nexy001100;
    d2nexy[(Ai + 2) * matrix_size + Bi + 1] += d2nexy001010;
    d2nexy[(Ai + 2) * matrix_size + Bi + 2] += d2nexy001001;
    const double d2nexz100100 =
        (2 * Pi *
         ((-C59 * C879) / C74 - C240 * C281 + C234 * C221 + C67 * C972 +
          C176 * C229 + C69 * (C881 - C736 + C114 * C1117)) *
         C70 * C71) /
        C74;
    const double d2nexz100010 =
        (2 * Pi *
         (C1229 * C70 * C264 +
          (C317 * C283 - (C262 * C787) / C74 + C318 * C313 + C698 * C1180) *
              C70 * C712)) /
        C74;
    const double d2nexz100001 =
        (2 * Pi *
         (C1229 * C344 +
          (C317 * C359 + C262 * C1013 + C318 * C360 + C698 * C1240) * C713) *
         C71) /
        C74;
    const double d2nexz010100 =
        (2 * Pi *
         (C1252 * C70 * C390 +
          (C392 * C283 - (C64 * C787) / C74 + C393 * C313 + C705 * C1180) *
              C70 * C712)) /
        C74;
    const double d2nexz010010 =
        (2 * Pi *
         (C1159 * C70 * C427 + C1104 * C70 * C428 +
          ((C454 * C117) / C74 + C631 * ((-C883 * C140) / C74 - C736)) * C70 *
              C429)) /
        C74;
    const double d2nexz010001 =
        (2 * Pi *
         ((C1159 * C344 + C1212) * C390 + (C1104 * C344 + C1307) * C712)) /
        C74;
    const double d2nexz001100 =
        (2 * Pi *
         (C1252 * C521 +
          (C392 * C359 + C64 * C1013 + C393 * C360 + C705 * C1240) * C713) *
         C71) /
        C74;
    const double d2nexz001010 =
        (2 * Pi *
         ((C1159 * C521 + C1212) * C264 + (C1104 * C521 + C1307) * C712)) /
        C74;
    const double d2nexz001001 =
        (2 * Pi *
         (C1159 * C576 + C1163 * C577 +
          ((C612 * C117) / C74 +
           C631 * (C809 - C736 + C123 * (C199 - (C123 * C883) / C74))) *
              C578) *
         C71) /
        C74;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz100100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz100010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz100001;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += d2nexz010100;
    d2nexz[(Ai + 1) * matrix_size + Bi + 1] += d2nexz010010;
    d2nexz[(Ai + 1) * matrix_size + Bi + 2] += d2nexz010001;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += d2nexz001100;
    d2nexz[(Ai + 2) * matrix_size + Bi + 1] += d2nexz001010;
    d2nexz[(Ai + 2) * matrix_size + Bi + 2] += d2nexz001001;
    const double d2neyx100100 =
        (2 * Pi *
         (C1118 * C59 + C1119 * C67 +
          ((C237 * C124) / C74 + C71 * (C743 - C744 + C114 * C1120)) * C69) *
         C70) /
        C74;
    const double d2neyx100010 =
        (2 * Pi *
         (C1230 * C262 +
          (C322 * C226 + C264 * C977 + C315 * C276 + C1271) * C698) *
         C70) /
        C74;
    const double d2neyx100001 = (2 * Pi *
                                 ((C1118 * C262 + C1119 * C698) * C344 +
                                  (C1082 * C262 + C1278 * C698) * C713)) /
                                C74;
    const double d2neyx010100 =
        (2 * Pi *
         (C1253 * C64 +
          (C404 * C226 + C390 * C977 + C405 * C276 + C1271) * C705) *
         C70) /
        C74;
    const double d2neyx010010 =
        (2 * Pi *
         ((-C427 * C885) / C74 - C471 * C270 + C468 * C275 + C428 * C1002 +
          C458 * C452 +
          C429 * (C914 - C744 + C122 * (C967 - (C122 * C888) / C74))) *
         C631 * C70) /
        C74;
    const double d2neyx010001 =
        (2 * Pi *
         (C1253 * C631 * C344 +
          (C404 * C348 - (C390 * C813) / C74 + C405 * C497 + C1260) * C631 *
              C713)) /
        C74;
    const double d2neyx001100 = (2 * Pi *
                                 ((C1118 * C64 + C1119 * C705) * C521 +
                                  (C1082 * C64 + C1278 * C705) * C713)) /
                                C74;
    const double d2neyx001010 =
        (2 * Pi *
         (C1230 * C631 * C521 +
          (C322 * C348 - (C264 * C813) / C74 + C315 * C497 + C1260) * C631 *
              C713)) /
        C74;
    const double d2neyx001001 =
        (2 * Pi *
         (C1118 * C631 * C576 + C1082 * C631 * C577 +
          ((C601 * C124) / C74 + C71 * ((-C888 * C145) / C74 - C744)) * C631 *
              C578)) /
        C74;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx100100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx100010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx100001;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += d2neyx010100;
    d2neyx[(Ai + 1) * matrix_size + Bi + 1] += d2neyx010010;
    d2neyx[(Ai + 1) * matrix_size + Bi + 2] += d2neyx010001;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += d2neyx001100;
    d2neyx[(Ai + 2) * matrix_size + Bi + 1] += d2neyx001010;
    d2neyx[(Ai + 2) * matrix_size + Bi + 2] += d2neyx001001;
    const double d2neyy100100 =
        (2 * Pi *
         (C1223 * C59 + C1054 * C67 +
          ((C228 * C124) / C74 + C71 * ((-C1055 * C126) / C74 - C751)) * C69) *
         C70) /
        C74;
    const double d2neyy100010 =
        (2 * Pi *
         (C1295 * C262 +
          (C322 * C219 - (C264 * C749) / C74 + C315 * C319 + C1296) * C698) *
         C70) /
        C74;
    const double d2neyy100001 = (2 * Pi *
                                 ((C1223 * C262 + C1054 * C698) * C344 +
                                  (C1083 * C262 + C1300 * C698) * C713)) /
                                C74;
    const double d2neyy010100 =
        (2 * Pi *
         (C1304 * C64 +
          (C404 * C219 - (C390 * C749) / C74 + C405 * C319 + C1296) * C705) *
         C70) /
        C74;
    const double d2neyy010010 =
        (2 * Pi *
         ((-C427 * C1053) / C74 - C471 * C277 + C468 * C298 + C428 * C1003 +
          C458 * C463 +
          C429 * (C952 - C751 + C122 * C207 - C871 +
                  C122 * (C970 + C207 - (C122 * C1055) / C74))) *
         C631 * C70) /
        C74;
    const double d2neyy010001 =
        (2 * Pi *
         (C1304 * C631 * C344 +
          (C404 * C350 - (C390 * C816) / C74 + C405 * C495 + C1308) * C631 *
              C713)) /
        C74;
    const double d2neyy001100 = (2 * Pi *
                                 ((C1223 * C64 + C1054 * C705) * C521 +
                                  (C1083 * C64 + C1300 * C705) * C713)) /
                                C74;
    const double d2neyy001010 =
        (2 * Pi *
         (C1295 * C631 * C521 +
          (C322 * C350 - (C264 * C816) / C74 + C315 * C495 + C1308) * C631 *
              C713)) /
        C74;
    const double d2neyy001001 =
        (2 * Pi *
         (C1223 * C631 * C576 + C1083 * C631 * C577 +
          ((C602 * C124) / C74 + C71 * ((-C1055 * C145) / C74 - C751)) * C631 *
              C578)) /
        C74;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy100100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy100010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy100001;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += d2neyy010100;
    d2neyy[(Ai + 1) * matrix_size + Bi + 1] += d2neyy010010;
    d2neyy[(Ai + 1) * matrix_size + Bi + 2] += d2neyy010001;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += d2neyy001100;
    d2neyy[(Ai + 2) * matrix_size + Bi + 1] += d2neyy001010;
    d2neyy[(Ai + 2) * matrix_size + Bi + 2] += d2neyy001001;
    const double d2neyz100100 =
        (2 * Pi *
         (C1122 * C59 + C1057 * C67 +
          ((C229 * C124) / C74 + C71 * ((-C898 * C126) / C74 - C757)) * C69) *
         C70) /
        C74;
    const double d2neyz100010 =
        (2 * Pi *
         (C1234 * C262 +
          (C322 * C221 - (C264 * C755) / C74 + C315 * C313 + C1235) * C698) *
         C70) /
        C74;
    const double d2neyz100001 = (2 * Pi *
                                 ((C1122 * C262 + C1057 * C698) * C344 +
                                  (C1143 * C262 + C1280 * C698) * C713)) /
                                C74;
    const double d2neyz010100 =
        (2 * Pi *
         (C1255 * C64 +
          (C404 * C221 - (C390 * C755) / C74 + C405 * C313 + C1235) * C705) *
         C70) /
        C74;
    const double d2neyz010010 =
        (2 * Pi *
         ((-C427 * C895) / C74 - C471 * C281 + C468 * C283 + C428 * C1006 +
          C458 * C454 +
          C429 * (C953 - C757 + C122 * (C973 - (C122 * C898) / C74))) *
         C631 * C70) /
        C74;
    const double d2neyz010001 =
        (2 * Pi *
         (C1255 * C631 * C344 +
          (C404 * C359 + C390 * C1016 + C405 * C499 + C1290) * C631 * C713)) /
        C74;
    const double d2neyz001100 = (2 * Pi *
                                 ((C1122 * C64 + C1057 * C705) * C521 +
                                  (C1143 * C64 + C1280 * C705) * C713)) /
                                C74;
    const double d2neyz001010 =
        (2 * Pi *
         (C1234 * C631 * C521 +
          (C322 * C359 + C264 * C1016 + C315 * C499 + C1290) * C631 * C713)) /
        C74;
    const double d2neyz001001 =
        (2 * Pi *
         (C1122 * C631 * C576 + C1143 * C631 * C577 +
          ((C612 * C124) / C74 + C71 * (C859 - C757 + C123 * C1167)) * C631 *
              C578)) /
        C74;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz100100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz100010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz100001;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += d2neyz010100;
    d2neyz[(Ai + 1) * matrix_size + Bi + 1] += d2neyz010010;
    d2neyz[(Ai + 1) * matrix_size + Bi + 2] += d2neyz010001;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += d2neyz001100;
    d2neyz[(Ai + 2) * matrix_size + Bi + 1] += d2neyz001010;
    d2neyz[(Ai + 2) * matrix_size + Bi + 2] += d2neyz001001;
    const double d2nezx100100 =
        (2 * Pi *
         (C1123 * C71 * C59 + C1124 * C71 * C67 +
          ((C237 * C125) / C74 + C70 * (C762 - C763 + C114 * C1125)) * C71 *
              C69)) /
        C74;
    const double d2nezx100010 =
        (2 * Pi *
         ((C1123 * C264 + C1137) * C262 + (C1124 * C264 + C1297) * C698)) /
        C74;
    const double d2nezx100001 =
        (2 * Pi *
         (C1244 * C71 * C262 +
          (C368 * C226 + C344 * C988 + C365 * C349 + C1281) * C71 * C698)) /
        C74;
    const double d2nezx010100 =
        (2 * Pi *
         ((C1123 * C390 + C1137) * C64 + (C1124 * C390 + C1297) * C705)) /
        C74;
    const double d2nezx010010 =
        (2 * Pi *
         (C1123 * C427 + C1077 * C428 +
          ((C452 * C125) / C74 + C70 * ((-C903 * C140) / C74 - C763)) * C429) *
         C631) /
        C74;
    const double d2nezx010001 =
        (2 * Pi *
         (C1244 * C390 +
          (C368 * C275 - (C344 * C799) / C74 + C365 * C497 + C1263) * C712) *
         C631) /
        C74;
    const double d2nezx001100 =
        (2 * Pi *
         (C1266 * C71 * C64 +
          (C533 * C226 + C521 * C988 + C534 * C349 + C1281) * C71 * C705)) /
        C74;
    const double d2nezx001010 =
        (2 * Pi *
         (C1266 * C264 +
          (C533 * C275 - (C521 * C799) / C74 + C534 * C497 + C1263) * C712) *
         C631) /
        C74;
    const double d2nezx001001 =
        (2 * Pi *
         ((-C576 * C900) / C74 - C620 * C270 + C617 * C348 + C577 * C1018 +
          C607 * C601 +
          C578 * (C1012 - C763 + C123 * (C967 - (C123 * C903) / C74))) *
         C71 * C631) /
        C74;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx100100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx100010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx100001;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += d2nezx010100;
    d2nezx[(Ai + 1) * matrix_size + Bi + 1] += d2nezx010010;
    d2nezx[(Ai + 1) * matrix_size + Bi + 2] += d2nezx010001;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += d2nezx001100;
    d2nezx[(Ai + 2) * matrix_size + Bi + 1] += d2nezx001010;
    d2nezx[(Ai + 2) * matrix_size + Bi + 2] += d2nezx001001;
    const double d2nezy100100 =
        (2 * Pi *
         (C1126 * C71 * C59 + C1062 * C71 * C67 +
          ((C228 * C125) / C74 + C70 * ((-C908 * C126) / C74 - C770)) * C71 *
              C69)) /
        C74;
    const double d2nezy100010 =
        (2 * Pi *
         ((C1126 * C264 + C1188) * C262 + (C1062 * C264 + C1298) * C698)) /
        C74;
    const double d2nezy100001 =
        (2 * Pi *
         (C1246 * C71 * C262 +
          (C368 * C219 - (C344 * C768) / C74 + C365 * C351 + C1247) * C71 *
              C698)) /
        C74;
    const double d2nezy010100 =
        (2 * Pi *
         ((C1126 * C390 + C1188) * C64 + (C1062 * C390 + C1298) * C705)) /
        C74;
    const double d2nezy010010 =
        (2 * Pi *
         (C1126 * C427 + C1138 * C428 +
          ((C463 * C125) / C74 + C70 * (C851 - C770 + C122 * C1160)) * C429) *
         C631) /
        C74;
    const double d2nezy010001 =
        (2 * Pi *
         (C1246 * C390 +
          (C368 * C298 + C344 * C1009 + C365 * C495 + C1291) * C712) *
         C631) /
        C74;
    const double d2nezy001100 =
        (2 * Pi *
         (C1267 * C71 * C64 +
          (C533 * C219 - (C521 * C768) / C74 + C534 * C351 + C1247) * C71 *
              C705)) /
        C74;
    const double d2nezy001010 =
        (2 * Pi *
         (C1267 * C264 +
          (C533 * C298 + C521 * C1009 + C534 * C495 + C1291) * C712) *
         C631) /
        C74;
    const double d2nezy001001 =
        (2 * Pi *
         ((-C576 * C905) / C74 - C620 * C277 + C617 * C350 + C577 * C1020 +
          C607 * C602 +
          C578 * (C1040 - C770 + C123 * (C970 - (C123 * C908) / C74))) *
         C71 * C631) /
        C74;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy100100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy100010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy100001;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += d2nezy010100;
    d2nezy[(Ai + 1) * matrix_size + Bi + 1] += d2nezy010010;
    d2nezy[(Ai + 1) * matrix_size + Bi + 2] += d2nezy010001;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += d2nezy001100;
    d2nezy[(Ai + 2) * matrix_size + Bi + 1] += d2nezy001010;
    d2nezy[(Ai + 2) * matrix_size + Bi + 2] += d2nezy001001;
    const double d2nezz100100 =
        (2 * Pi *
         (C1224 * C71 * C59 + C1064 * C71 * C67 +
          ((C229 * C125) / C74 + C70 * ((-C1065 * C126) / C74 - C776)) * C71 *
              C69)) /
        C74;
    const double d2nezz100010 =
        (2 * Pi *
         ((C1224 * C264 + C1140) * C262 + (C1064 * C264 + C1311) * C698)) /
        C74;
    const double d2nezz100001 =
        (2 * Pi *
         (C1301 * C71 * C262 +
          (C368 * C221 - (C344 * C774) / C74 + C365 * C360 + C1302) * C71 *
              C698)) /
        C74;
    const double d2nezz010100 =
        (2 * Pi *
         ((C1224 * C390 + C1140) * C64 + (C1064 * C390 + C1311) * C705)) /
        C74;
    const double d2nezz010010 =
        (2 * Pi *
         (C1224 * C427 + C1080 * C428 +
          ((C454 * C125) / C74 + C70 * ((-C1065 * C140) / C74 - C776)) * C429) *
         C631) /
        C74;
    const double d2nezz010001 =
        (2 * Pi *
         (C1301 * C390 +
          (C368 * C283 - (C344 * C805) / C74 + C365 * C499 + C1309) * C712) *
         C631) /
        C74;
    const double d2nezz001100 =
        (2 * Pi *
         (C1310 * C71 * C64 +
          (C533 * C221 - (C521 * C774) / C74 + C534 * C360 + C1302) * C71 *
              C705)) /
        C74;
    const double d2nezz001010 =
        (2 * Pi *
         (C1310 * C264 +
          (C533 * C283 - (C521 * C805) / C74 + C534 * C499 + C1309) * C712) *
         C631) /
        C74;
    const double d2nezz001001 =
        (2 * Pi *
         ((-C576 * C1063) / C74 - C620 * C281 + C617 * C359 + C577 * C1021 +
          C607 * C612 +
          C578 * (C963 - C776 + C123 * C211 - C871 +
                  C123 * (C973 + C211 - (C123 * C1065) / C74))) *
         C71 * C631) /
        C74;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz100100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz100010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz100001;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += d2nezz010100;
    d2nezz[(Ai + 1) * matrix_size + Bi + 1] += d2nezz010010;
    d2nezz[(Ai + 1) * matrix_size + Bi + 2] += d2nezz010001;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += d2nezz001100;
    d2nezz[(Ai + 2) * matrix_size + Bi + 1] += d2nezz001010;
    d2nezz[(Ai + 2) * matrix_size + Bi + 2] += d2nezz001001;
}
