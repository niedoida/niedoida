/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_pp_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_11_13(double ae,
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
    const double C623 = ae + be;
    const double C622 = xA - xB;
    const double C627 = ae * be;
    const double C626 = std::pow(C622, 2);
    const double C628 = C626 * C627;
    const double C629 = C628 / C623;
    const double C630 = -C629;
    const double C631 = std::exp(C630);
    const double C636 = 2 * C623;
    const double C642 = yA - yB;
    const double C647 = zA - zB;
    const double C654 = std::pow(C642, 2);
    const double C655 = C654 * C627;
    const double C656 = C655 / C623;
    const double C657 = -C656;
    const double C658 = std::exp(C657);
    const double C667 = std::pow(C647, 2);
    const double C668 = C667 * C627;
    const double C669 = C668 / C623;
    const double C670 = -C669;
    const double C671 = std::exp(C670);
    const double C689 = C647 * be;
    const double C688 = C642 * be;
    const double C687 = C647 * ae;
    const double C686 = std::pow(C647, 2);
    const double C685 = C642 * ae;
    const double C684 = std::pow(C642, 2);
    const double C683 = std::pow(C636, -1);
    const double C682 = std::pow(C623, 2);
    const double C681 = C622 * be;
    const double C680 = 2 * C623;
    const double C679 = C622 * ae;
    const double C678 = ae * be;
    const double C699 = C683 * C671;
    const double C698 = C671 * C687;
    const double C697 = C683 * C658;
    const double C696 = C658 * C685;
    const double C695 = C686 * C627;
    const double C694 = C684 * C627;
    const double C693 = C683 * C631;
    const double C692 = 2 * C682;
    const double C691 = std::pow(C680, -1);
    const double C690 = C631 * C679;
    const double C702 = C695 / C623;
    const double C701 = C694 / C623;
    const double C700 = C691 * C631;
    const double C704 = -C702;
    const double C703 = -C701;
    const double C706 = std::exp(C704);
    const double C705 = std::exp(C703);
    const double C708 = C683 * C706;
    const double C707 = C683 * C705;
    const double C62 = std::exp(-(std::pow(xA - xB, 2) * C678) / (ae + be));
    const double C63 =
        (std::exp(-(std::pow(C622, 2) * C678) / C623) * C679) / C623;
    const double C65 = C631 / C680 - (C690 * C681) / C682;
    const double C67 = C690 / C692 - (C700 * C681) / C623;
    const double C69 = C693 / C636;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C627) / C623);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C627) / C623);
    const double C262 = -(C631 * C681) / C623;
    const double C264 = (C705 * C685) / C623;
    const double C344 = (C706 * C687) / C623;
    const double C390 = -(C705 * C688) / C623;
    const double C425 = C658 / C636 - (C696 * C688) / C682;
    const double C426 = C696 / C692 - (C697 * C688) / C623;
    const double C427 = C697 / C636;
    const double C517 = -(C706 * C689) / C623;
    const double C572 = C671 / C636 - (C698 * C689) / C682;
    const double C573 = C698 / C692 - (C699 * C689) / C623;
    const double C574 = C699 / C636;
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
    const double C176 = C152 - C97;
    const double C175 = C151 * C121;
    const double C174 = C150 * C93;
    const double C173 = C149 + C700;
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
    const double C195 = C173 * be;
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
    const double C234 = C231 - C215;
    const double C233 = C230 + C63;
    const double C237 = C235 - C132;
    const double C236 = C233 * be;
    const double C238 = C236 / C74;
    const double C239 = C193 - C238;
    const double C240 = C239 + C128;
    const double C290 = C143 * C81;
    const double C289 = C139 * C81;
    const double C288 = C112 / C92;
    const double C287 = 0 * ae;
    const double C286 = 0 * be;
    const double C285 = C89 * C124;
    const double C284 = 2 * C184;
    const double C283 = C122 * C203;
    const double C282 = C182 * ae;
    const double C281 = 2 * C159;
    const double C280 = 2 * C181;
    const double C279 = C122 * C200;
    const double C278 = C179 * ae;
    const double C277 = 2 * C155;
    const double C276 = C122 * C227;
    const double C275 = C122 * C196;
    const double C274 = C131 * C81;
    const double C273 = C174 * ae;
    const double C272 = 0 * be;
    const double C271 = C116 / C74;
    const double C270 = 2 * C148;
    const double C269 = C172 * be;
    const double C268 = C73 / C74;
    const double C306 = C290 * C93;
    const double C305 = C289 * C93;
    const double C304 = C287 / C74;
    const double C303 = C286 / C103;
    const double C302 = C285 / C74;
    const double C301 = C119 * C284;
    const double C300 = -2 * C282;
    const double C299 = C119 * C280;
    const double C298 = C279 + C107;
    const double C297 = -2 * C278;
    const double C296 = C274 * C93;
    const double C295 = -2 * C273;
    const double C294 = C272 / C74;
    const double C293 = -C271;
    const double C292 = C269 / C74;
    const double C291 = -C268;
    const double C316 = -2 * C306;
    const double C315 = C304 - C288;
    const double C314 = C71 - C302;
    const double C313 = C122 * C301;
    const double C312 = C300 / C74;
    const double C311 = C122 * C299;
    const double C310 = C297 / C74;
    const double C309 = C295 / C74;
    const double C308 = C293 / C93;
    const double C307 = C291 / C93;
    const double C320 = C314 * ae;
    const double C319 = C311 - C132;
    const double C318 = C308 - C294;
    const double C317 = C307 - C292;
    const double C321 = C320 / C74;
    const double C322 = C321 - C303;
    const double C358 = C113 / C92;
    const double C357 = 0 * ae;
    const double C356 = 0 * be;
    const double C355 = C90 * C125;
    const double C354 = -2 * C305;
    const double C353 = C123 * C301;
    const double C352 = C123 * C203;
    const double C351 = C123 * C299;
    const double C350 = C123 * C200;
    const double C349 = C123 * C227;
    const double C348 = C123 * C196;
    const double C363 = C357 / C74;
    const double C362 = C356 / C103;
    const double C361 = C355 / C74;
    const double C360 = C353 - C132;
    const double C359 = C352 + C107;
    const double C365 = C363 - C358;
    const double C364 = C70 - C361;
    const double C366 = C364 * ae;
    const double C367 = C366 / C74;
    const double C368 = C367 - C362;
    const double C395 = 0 * be;
    const double C394 = C124 / C74;
    const double C393 = C314 * be;
    const double C392 = C286 / C74;
    const double C399 = C395 / C74;
    const double C398 = -C394;
    const double C397 = C393 / C74;
    const double C396 = -C392;
    const double C401 = C398 / C93;
    const double C400 = C396 / C93;
    const double C403 = C401 - C399;
    const double C402 = C400 - C397;
    const double C441 = 0 * be;
    const double C440 = C315 / C93;
    const double C439 = C89 * C315;
    const double C438 = C322 / C93;
    const double C437 = C89 * C322;
    const double C436 = 0 * be;
    const double C435 = C89 * C286;
    const double C434 = C184 * C140;
    const double C433 = C122 * C120;
    const double C432 = C122 * C280;
    const double C431 = C177 * C140;
    const double C449 = C441 / C74;
    const double C448 = C439 + C707;
    const double C447 = C437 + C264;
    const double C446 = C436 / C103;
    const double C445 = C435 / C74;
    const double C444 = 2 * C434;
    const double C443 = C432 - C120;
    const double C442 = 2 * C431;
    const double C456 = C440 - C449;
    const double C455 = C448 * be;
    const double C454 = C447 * be;
    const double C453 = 0 - C445;
    const double C452 = C203 + C444;
    const double C451 = C122 * C443;
    const double C450 = C196 + C442;
    const double C460 = C455 / C74;
    const double C459 = C454 / C74;
    const double C458 = C453 * ae;
    const double C457 = C200 + C451;
    const double C463 = C438 - C460;
    const double C462 = C458 / C74;
    const double C461 = C457 - C433;
    const double C464 = C462 - C446;
    const double C465 = C464 / C93;
    const double C466 = C465 - C459;
    const double C467 = C466 + C315;
    const double C492 = C122 * C284;
    const double C491 = C123 * C443;
    const double C490 = -2 * C296;
    const double C489 = C122 * C198;
    const double C494 = C123 * C492;
    const double C493 = C123 * C489;
    const double C495 = C494 - C433;
    const double C522 = 0 * be;
    const double C521 = C125 / C74;
    const double C520 = C364 * be;
    const double C519 = C356 / C74;
    const double C526 = C522 / C74;
    const double C525 = -C521;
    const double C524 = C520 / C74;
    const double C523 = -C519;
    const double C528 = C525 / C93;
    const double C527 = C523 / C93;
    const double C530 = C528 - C526;
    const double C529 = C527 - C524;
    const double C588 = 0 * be;
    const double C587 = C365 / C93;
    const double C586 = C90 * C365;
    const double C585 = C368 / C93;
    const double C584 = C90 * C368;
    const double C583 = 0 * be;
    const double C582 = C90 * C356;
    const double C581 = C123 * C120;
    const double C580 = C123 * C284;
    const double C579 = C181 * C145;
    const double C578 = C177 * C145;
    const double C596 = C588 / C74;
    const double C595 = C586 + C708;
    const double C594 = C584 + C344;
    const double C593 = C583 / C103;
    const double C592 = C582 / C74;
    const double C591 = C580 - C120;
    const double C590 = 2 * C579;
    const double C589 = 2 * C578;
    const double C603 = C587 - C596;
    const double C602 = C595 * be;
    const double C601 = C594 * be;
    const double C600 = 0 - C592;
    const double C599 = C123 * C591;
    const double C598 = C200 + C590;
    const double C597 = C196 + C589;
    const double C607 = C602 / C74;
    const double C606 = C601 / C74;
    const double C605 = C600 * ae;
    const double C604 = C203 + C599;
    const double C610 = C585 - C607;
    const double C609 = C605 / C74;
    const double C608 = C604 - C581;
    const double C611 = C609 - C593;
    const double C612 = C611 / C93;
    const double C613 = C612 - C606;
    const double C614 = C613 + C365;
    const double C861 = C530 * C359;
    const double C860 = C529 * C281;
    const double C859 = C530 * C350;
    const double C858 = C529 * C277;
    const double C857 = C530 * C348;
    const double C856 = C529 * C270;
    const double C855 = C591 * ae;
    const double C854 = C123 * C207;
    const double C853 = C123 * C280;
    const double C852 = C495 * C116;
    const double C851 = C359 * C116;
    const double C850 = C491 * C116;
    const double C849 = C350 * C116;
    const double C848 = C493 * C116;
    const double C847 = C348 * C116;
    const double C846 = C122 * C211;
    const double C845 = C492 * ae;
    const double C844 = C443 * ae;
    const double C843 = C283 * C116;
    const double C842 = C159 * C116;
    const double C841 = C298 * C116;
    const double C840 = C155 * C116;
    const double C839 = C275 * C116;
    const double C838 = C148 * C116;
    const double C837 = C403 * C283;
    const double C836 = C402 * C281;
    const double C835 = C403 * C298;
    const double C834 = C402 * C277;
    const double C833 = C403 * C275;
    const double C832 = C402 * C270;
    const double C831 = C128 * C221;
    const double C830 = C225 * C281;
    const double C829 = C128 * C219;
    const double C828 = C225 * C277;
    const double C827 = C128 * C226;
    const double C826 = C225 * C270;
    const double C825 = C123 * C224;
    const double C824 = 2 * C306;
    const double C823 = C365 * C359;
    const double C822 = C368 * C281;
    const double C821 = C123 * C212;
    const double C820 = C365 * C350;
    const double C819 = C368 * C277;
    const double C818 = C123 * C210;
    const double C817 = C365 * C348;
    const double C816 = C368 * C270;
    const double C815 = C360 * C124;
    const double C814 = C359 * C124;
    const double C813 = C123 * C209;
    const double C812 = C351 * C124;
    const double C811 = C350 * C124;
    const double C810 = C123 * C223;
    const double C809 = C349 * C124;
    const double C808 = C348 * C124;
    const double C807 = C123 * C206;
    const double C806 = C123 * C204;
    const double C805 = C123 * C201;
    const double C804 = C123 * C199;
    const double C803 = C123 * C198;
    const double C802 = C123 * C217;
    const double C801 = C313 * C125;
    const double C800 = C283 * C125;
    const double C799 = C122 * C224;
    const double C798 = C319 * C125;
    const double C797 = C298 * C125;
    const double C796 = C122 * C212;
    const double C795 = C276 * C125;
    const double C794 = C275 * C125;
    const double C793 = C122 * C210;
    const double C792 = C122 * C209;
    const double C791 = C315 * C283;
    const double C790 = C322 * C281;
    const double C789 = C122 * C223;
    const double C788 = 2 * C305;
    const double C787 = C315 * C298;
    const double C786 = C322 * C277;
    const double C785 = C122 * C206;
    const double C784 = C315 * C275;
    const double C783 = C322 * C270;
    const double C782 = C122 * C204;
    const double C781 = C318 * C221;
    const double C780 = C317 * C281;
    const double C779 = C122 * C201;
    const double C778 = C318 * C219;
    const double C777 = C317 * C277;
    const double C776 = C122 * C199;
    const double C775 = C489 * ae;
    const double C774 = C122 * C217;
    const double C773 = C318 * C226;
    const double C772 = C317 * C270;
    const double C771 = C224 / C74;
    const double C770 = C145 * C84;
    const double C769 = C221 * C125;
    const double C768 = C119 * C224;
    const double C767 = C159 * C125;
    const double C766 = C145 * C81;
    const double C765 = C212 / C74;
    const double C764 = C84 * C169;
    const double C763 = C219 * C125;
    const double C762 = C119 * C212;
    const double C761 = C155 * C125;
    const double C760 = C81 * C169;
    const double C759 = C84 * C167;
    const double C758 = C210 / C74;
    const double C757 = C119 * C211;
    const double C756 = C226 * C125;
    const double C755 = C119 * C210;
    const double C754 = C148 * C125;
    const double C753 = C81 * C167;
    const double C752 = C209 / C74;
    const double C751 = C84 * C166;
    const double C750 = C221 * C124;
    const double C749 = C119 * C209;
    const double C748 = C159 * C124;
    const double C747 = C81 * C166;
    const double C746 = C223 / C74;
    const double C745 = C140 * C84;
    const double C744 = C219 * C124;
    const double C743 = C119 * C223;
    const double C742 = C155 * C124;
    const double C741 = C140 * C81;
    const double C740 = C84 * C163;
    const double C739 = C206 / C74;
    const double C738 = C119 * C207;
    const double C737 = C226 * C124;
    const double C736 = C119 * C206;
    const double C735 = C148 * C124;
    const double C734 = C81 * C163;
    const double C733 = C84 * C160;
    const double C732 = C184 * ae;
    const double C731 = C204 / C74;
    const double C730 = C301 * ae;
    const double C729 = C119 * C204;
    const double C728 = C81 * C160;
    const double C727 = C84 * C156;
    const double C726 = C181 * ae;
    const double C725 = C201 / C74;
    const double C724 = C299 * ae;
    const double C723 = C119 * C201;
    const double C722 = C81 * C156;
    const double C721 = C130 * C84;
    const double C720 = C177 * ae;
    const double C719 = C120 * ae;
    const double C718 = C119 * C199;
    const double C717 = C217 / C74;
    const double C716 = C227 * ae;
    const double C715 = C119 * C217;
    const double C714 = 2 * C296;
    const double C713 = C130 * C81;
    const double C958 = C855 / C74;
    const double C957 = C853 * ae;
    const double C956 = C852 / C74;
    const double C955 = C851 / C74;
    const double C954 = C850 / C74;
    const double C953 = C849 / C74;
    const double C952 = C62 * C805;
    const double C951 = C848 / C74;
    const double C950 = C847 / C74;
    const double C949 = C62 * C802;
    const double C948 = C845 / C74;
    const double C947 = C844 / C74;
    const double C946 = C843 / C74;
    const double C945 = C62 * C782;
    const double C944 = 2 * C842;
    const double C943 = C841 / C74;
    const double C942 = 2 * C840;
    const double C941 = C839 / C74;
    const double C940 = C62 * C774;
    const double C939 = 2 * C838;
    const double C938 = C825 / C74;
    const double C937 = C312 - C824;
    const double C936 = C821 / C74;
    const double C935 = C818 / C74;
    const double C934 = C815 / C74;
    const double C933 = C814 / C74;
    const double C932 = C813 / C74;
    const double C931 = C812 / C74;
    const double C930 = C811 / C74;
    const double C929 = C71 * C810;
    const double C928 = C809 / C74;
    const double C927 = C808 / C74;
    const double C926 = C71 * C807;
    const double C925 = C806 / C74;
    const double C924 = C803 * ae;
    const double C923 = C801 / C74;
    const double C922 = C800 / C74;
    const double C921 = C70 * C799;
    const double C920 = C798 / C74;
    const double C919 = C797 / C74;
    const double C918 = C796 / C74;
    const double C917 = C795 / C74;
    const double C916 = C794 / C74;
    const double C915 = C70 * C793;
    const double C914 = C792 / C74;
    const double C913 = C789 / C74;
    const double C912 = C310 - C788;
    const double C911 = C785 / C74;
    const double C910 = C779 / C74;
    const double C909 = C775 / C74;
    const double C908 = C770 * C109;
    const double C907 = C769 / C74;
    const double C906 = C70 * C768;
    const double C905 = 2 * C767;
    const double C904 = C766 * C106;
    const double C903 = C109 * C764;
    const double C902 = C763 / C74;
    const double C901 = C70 * C762;
    const double C900 = 2 * C761;
    const double C899 = C106 * C760;
    const double C898 = C109 * C759;
    const double C897 = C756 / C74;
    const double C896 = C755 / C74;
    const double C895 = 2 * C754;
    const double C894 = C106 * C753;
    const double C893 = C109 * C751;
    const double C892 = C750 / C74;
    const double C891 = C71 * C749;
    const double C890 = 2 * C748;
    const double C889 = C106 * C747;
    const double C888 = C745 * C109;
    const double C887 = C744 / C74;
    const double C886 = C71 * C743;
    const double C885 = 2 * C742;
    const double C884 = C741 * C106;
    const double C883 = C109 * C740;
    const double C882 = C737 / C74;
    const double C881 = C736 / C74;
    const double C880 = 2 * C735;
    const double C879 = C106 * C734;
    const double C878 = C109 * C733;
    const double C877 = 2 * C732;
    const double C876 = C730 / C74;
    const double C875 = C729 / C74;
    const double C874 = C106 * C728;
    const double C873 = C109 * C727;
    const double C872 = 2 * C726;
    const double C871 = C724 / C74;
    const double C870 = C723 / C74;
    const double C869 = C106 * C722;
    const double C868 = C721 * C109;
    const double C867 = 2 * C720;
    const double C866 = C719 / C74;
    const double C865 = C716 / C74;
    const double C864 = C715 / C74;
    const double C863 = C309 - C714;
    const double C862 = C713 * C106;
    const double C1040 = C517 * C899;
    const double C1039 = C517 * C894;
    const double C1038 = C948 + C846;
    const double C1037 = C122 * C898;
    const double C1036 = C123 * C893;
    const double C1035 = C957 / C74;
    const double C1034 = C123 * C883;
    const double C1033 = C122 * C878;
    const double C1032 = -C952;
    const double C1031 = -C949;
    const double C1030 = C122 * C903;
    const double C1029 = -C945;
    const double C1028 = C944 / C74;
    const double C1027 = C62 * C874;
    const double C1026 = C122 * C873;
    const double C1025 = C942 / C74;
    const double C1024 = C62 * C869;
    const double C1023 = -C940;
    const double C1022 = C939 / C74;
    const double C1021 = C390 * C889;
    const double C1020 = C390 * C879;
    const double C1019 = C63 * C874;
    const double C1018 = C63 * C869;
    const double C1017 = C876 + C757;
    const double C1016 = C937 - C938;
    const double C1015 = C310 - C936;
    const double C1014 = C344 * C899;
    const double C1013 = C309 - C935;
    const double C1012 = C344 * C894;
    const double C1011 = C354 - C932;
    const double C1010 = -C929;
    const double C1009 = -C926;
    const double C1008 = C490 - C925;
    const double C1007 = C924 / C74;
    const double C1006 = -C921;
    const double C1005 = C119 * C903;
    const double C1004 = C316 - C918;
    const double C1003 = -C915;
    const double C1002 = C119 * C893;
    const double C1001 = C312 - C914;
    const double C1000 = C264 * C889;
    const double C999 = C871 + C738;
    const double C998 = C912 - C913;
    const double C997 = C309 - C911;
    const double C996 = C264 * C879;
    const double C995 = C262 * C874;
    const double C994 = C490 - C910;
    const double C993 = C262 * C869;
    const double C992 = C909 + C776;
    const double C991 = C133 + C908;
    const double C990 = -C906;
    const double C989 = C905 / C74;
    const double C988 = C904 - C107;
    const double C987 = -C901;
    const double C986 = C900 / C74;
    const double C985 = C70 * C899;
    const double C984 = C119 * C898;
    const double C983 = C316 - C896;
    const double C982 = C895 / C74;
    const double C981 = C70 * C894;
    const double C980 = -C891;
    const double C979 = C890 / C74;
    const double C978 = C71 * C889;
    const double C977 = C133 + C888;
    const double C976 = -C886;
    const double C975 = C885 / C74;
    const double C974 = C884 - C107;
    const double C973 = C119 * C883;
    const double C972 = C354 - C881;
    const double C971 = C880 / C74;
    const double C970 = C71 * C879;
    const double C969 = C119 * C878;
    const double C968 = C877 / C74;
    const double C967 = C312 - C875;
    const double C966 = C119 * C873;
    const double C965 = C872 / C74;
    const double C964 = C310 - C870;
    const double C963 = C133 + C868;
    const double C962 = C867 / C74;
    const double C961 = C718 - C866;
    const double C960 = C863 - C864;
    const double C959 = C862 - C107;
    const double C1110 = C1040 / C74;
    const double C1109 = C1039 / C74;
    const double C1108 = C123 * C1037;
    const double C1107 = C1036 / C74;
    const double C1106 = C1035 + C854;
    const double C1105 = C122 * C1034;
    const double C1104 = C123 * C1033;
    const double C1103 = C62 * C1008;
    const double C1102 = C1032 / C74;
    const double C1101 = C1031 / C74;
    const double C1100 = C1030 / C74;
    const double C1099 = C1029 / C74;
    const double C1098 = -C1027;
    const double C1097 = C1026 / C74;
    const double C1096 = C62 * C994;
    const double C1095 = -C1024;
    const double C1094 = C1023 / C74;
    const double C1093 = C1021 / C74;
    const double C1092 = C1020 / C74;
    const double C1091 = C700 * C967;
    const double C1090 = C1019 / C74;
    const double C1089 = C700 * C964;
    const double C1088 = C1018 / C74;
    const double C1087 = C700 * C960;
    const double C1086 = C708 * C1016;
    const double C1085 = C123 * C1005;
    const double C1084 = C708 * C1015;
    const double C1083 = C1014 / C74;
    const double C1082 = C708 * C1013;
    const double C1081 = C1012 / C74;
    const double C1080 = C123 * C1002;
    const double C1079 = C71 * C1011;
    const double C1078 = C1010 / C74;
    const double C1077 = C1009 / C74;
    const double C1076 = C1007 + C804;
    const double C1075 = C1006 / C74;
    const double C1074 = C122 * C1005;
    const double C1073 = C70 * C1004;
    const double C1072 = C1003 / C74;
    const double C1071 = C122 * C1002;
    const double C1070 = C707 * C1001;
    const double C1069 = C1000 / C74;
    const double C1068 = C707 * C998;
    const double C1067 = C707 * C997;
    const double C1066 = C996 / C74;
    const double C1065 = C693 * C967;
    const double C1064 = C995 / C74;
    const double C1063 = C693 * C964;
    const double C1062 = C993 / C74;
    const double C1061 = C693 * C960;
    const double C1060 = C991 * ae;
    const double C1059 = C990 / C74;
    const double C1058 = C988 * ae;
    const double C1057 = C987 / C74;
    const double C1056 = -C985;
    const double C1055 = C984 / C74;
    const double C1054 = C70 * C983;
    const double C1053 = -C981;
    const double C1052 = C980 / C74;
    const double C1051 = -C978;
    const double C1050 = C977 * ae;
    const double C1049 = C976 / C74;
    const double C1048 = C974 * ae;
    const double C1047 = C973 / C74;
    const double C1046 = C71 * C972;
    const double C1045 = -C970;
    const double C1044 = C969 / C74;
    const double C1043 = C966 / C74;
    const double C1042 = C963 * ae;
    const double C1041 = C959 * ae;
    const double C1175 = C517 * C1058;
    const double C1174 = C858 - C1110;
    const double C1173 = C856 - C1109;
    const double C1172 = C122 * C1060;
    const double C1171 = C1108 / C74;
    const double C1170 = C207 - C1107;
    const double C1169 = C123 * C1050;
    const double C1168 = C1105 / C74;
    const double C1167 = C1104 / C74;
    const double C1166 = C1103 - C955;
    const double C1165 = C1102 - C953;
    const double C1164 = C1101 - C950;
    const double C1163 = C211 - C1100;
    const double C1162 = C1099 - C946;
    const double C1161 = C1098 / C74;
    const double C1160 = C199 - C1097;
    const double C1159 = C1096 - C943;
    const double C1158 = C1095 / C74;
    const double C1157 = C1094 - C941;
    const double C1156 = C62 * C1041;
    const double C1155 = C836 - C1093;
    const double C1154 = C390 * C1048;
    const double C1153 = C832 - C1092;
    const double C1152 = C830 - C1090;
    const double C1151 = C828 - C1088;
    const double C1150 = C63 * C1041;
    const double C1149 = C344 * C1058;
    const double C1148 = C1085 / C74;
    const double C1147 = C819 - C1083;
    const double C1146 = C816 - C1081;
    const double C1145 = C1080 / C74;
    const double C1144 = C1079 - C933;
    const double C1143 = C1078 - C930;
    const double C1142 = C1077 - C927;
    const double C1141 = C123 * C1042;
    const double C1140 = C119 * C1060;
    const double C1139 = C1075 - C922;
    const double C1138 = C1074 / C74;
    const double C1137 = C1073 - C919;
    const double C1136 = C1072 - C916;
    const double C1135 = C1071 / C74;
    const double C1134 = C790 - C1069;
    const double C1133 = C119 * C1050;
    const double C1132 = C264 * C1048;
    const double C1131 = C783 - C1066;
    const double C1130 = C780 - C1064;
    const double C1129 = C777 - C1062;
    const double C1128 = C122 * C1042;
    const double C1127 = C262 * C1041;
    const double C1126 = C1059 - C907;
    const double C1125 = C70 * C1058;
    const double C1124 = C1057 - C902;
    const double C1123 = C1056 / C74;
    const double C1122 = C211 - C1055;
    const double C1121 = C1054 - C897;
    const double C1120 = C1053 / C74;
    const double C1119 = C1052 - C892;
    const double C1118 = C1051 / C74;
    const double C1117 = C1049 - C887;
    const double C1116 = C71 * C1048;
    const double C1115 = C207 - C1047;
    const double C1114 = C1046 - C882;
    const double C1113 = C1045 / C74;
    const double C1112 = C968 - C1044;
    const double C1111 = C965 - C1043;
    const double C1235 = C1175 / C74;
    const double C1234 = C1174 + C859;
    const double C1233 = C1173 + C857;
    const double C1232 = C123 * C1172;
    const double C1231 = C123 * C1163;
    const double C1230 = C909 - C1171;
    const double C1229 = C122 * C1170;
    const double C1228 = C122 * C1169;
    const double C1227 = C1007 - C1168;
    const double C1226 = C776 - C1167;
    const double C1225 = C1166 * C708;
    const double C1224 = C123 * C1160;
    const double C1223 = C1165 * C708;
    const double C1222 = C123 * C1128;
    const double C1221 = C1164 * C708;
    const double C1220 = C1161 - C1028;
    const double C1219 = C1158 - C1025;
    const double C1218 = -C1156;
    const double C1217 = C1155 + C837;
    const double C1216 = C1154 / C74;
    const double C1215 = C1153 + C833;
    const double C1214 = C1152 + C831;
    const double C1213 = C1151 + C829;
    const double C1212 = C1150 / C74;
    const double C1211 = C123 * C1140;
    const double C1210 = C1149 / C74;
    const double C1209 = C871 - C1148;
    const double C1208 = C1147 + C820;
    const double C1207 = C123 * C1122;
    const double C1206 = C1146 + C817;
    const double C1205 = C738 - C1145;
    const double C1204 = C123 * C1133;
    const double C1203 = C123 * C1115;
    const double C1202 = C123 * C1112;
    const double C1201 = C123 * C1111;
    const double C1200 = C119 * C1141;
    const double C1199 = C122 * C1140;
    const double C1198 = C1139 * C707;
    const double C1197 = C757 - C1138;
    const double C1196 = C1137 * C707;
    const double C1195 = C122 * C1122;
    const double C1194 = C1136 * C707;
    const double C1193 = C876 - C1135;
    const double C1192 = C1134 + C791;
    const double C1191 = C122 * C1133;
    const double C1190 = C1132 / C74;
    const double C1189 = C122 * C1115;
    const double C1188 = C1131 + C784;
    const double C1187 = C122 * C1112;
    const double C1186 = C1130 + C781;
    const double C1185 = C122 * C1111;
    const double C1184 = C1129 + C778;
    const double C1183 = C119 * C1128;
    const double C1182 = C1127 / C74;
    const double C1181 = -C1125;
    const double C1180 = C1123 - C986;
    const double C1179 = C1120 - C982;
    const double C1178 = C1118 - C979;
    const double C1177 = -C1116;
    const double C1176 = C1113 - C971;
    const double C1281 = C860 - C1235;
    const double C1280 = C1234 + C1084;
    const double C1279 = C1233 + C1082;
    const double C1278 = C1232 / C74;
    const double C1277 = C947 + C1231;
    const double C1276 = C708 * C1230;
    const double C1275 = C958 + C1229;
    const double C1274 = C1228 / C74;
    const double C1273 = C707 * C1227;
    const double C1272 = C62 * C1226;
    const double C1271 = C62 * C1224;
    const double C1270 = C62 * C1222;
    const double C1269 = C1218 / C74;
    const double C1268 = C1217 + C1070;
    const double C1267 = C834 - C1216;
    const double C1266 = C1215 + C1067;
    const double C1265 = C1214 + C1091;
    const double C1264 = C1213 + C1089;
    const double C1263 = C826 - C1212;
    const double C1262 = C1211 / C74;
    const double C1261 = C822 - C1210;
    const double C1260 = C708 * C1209;
    const double C1259 = C1208 + C1084;
    const double C1258 = C865 + C1207;
    const double C1257 = C1206 + C1082;
    const double C1256 = C71 * C1205;
    const double C1255 = C71 * C1204;
    const double C1254 = C71 * C1203;
    const double C1253 = C961 + C1202;
    const double C1252 = C1200 / C74;
    const double C1251 = C70 * C1199;
    const double C1250 = C70 * C1197;
    const double C1249 = C70 * C1195;
    const double C1248 = C707 * C1193;
    const double C1247 = C1192 + C1070;
    const double C1246 = C1191 / C74;
    const double C1245 = C786 - C1190;
    const double C1244 = C865 + C1189;
    const double C1243 = C1188 + C1067;
    const double C1242 = C1186 + C1065;
    const double C1241 = C961 + C1185;
    const double C1240 = C1184 + C1063;
    const double C1239 = C1183 / C74;
    const double C1238 = C772 - C1182;
    const double C1237 = C1181 / C74;
    const double C1236 = C1177 / C74;
    const double C1309 = C1281 + C861;
    const double C1308 = C1038 - C1278;
    const double C1307 = C708 * C1277;
    const double C1306 = C707 * C1275;
    const double C1305 = C1106 - C1274;
    const double C1304 = C1272 - C956;
    const double C1303 = C1271 - C954;
    const double C1302 = -C1270;
    const double C1301 = C1269 - C1022;
    const double C1300 = C1267 + C835;
    const double C1299 = C1263 + C827;
    const double C1298 = C1017 - C1262;
    const double C1297 = C1261 + C823;
    const double C1296 = C708 * C1258;
    const double C1295 = C1256 - C934;
    const double C1294 = -C1255;
    const double C1293 = C1254 - C928;
    const double C1292 = C1076 - C1252;
    const double C1291 = -C1251;
    const double C1290 = C1250 - C920;
    const double C1289 = C1249 - C917;
    const double C1288 = C999 - C1246;
    const double C1287 = C1245 + C787;
    const double C1286 = C707 * C1244;
    const double C1285 = C992 - C1239;
    const double C1284 = C1238 + C773;
    const double C1283 = C1237 - C989;
    const double C1282 = C1236 - C975;
    const double C1326 = C1309 + C1086;
    const double C1325 = C708 * C1308;
    const double C1324 = C707 * C1305;
    const double C1323 = C1304 * C708;
    const double C1322 = C1303 * C708;
    const double C1321 = C1302 / C74;
    const double C1320 = C1300 + C1068;
    const double C1319 = C1299 + C1087;
    const double C1318 = C708 * C1298;
    const double C1317 = C1297 + C1086;
    const double C1316 = C1294 / C74;
    const double C1315 = C1291 / C74;
    const double C1314 = C1290 * C707;
    const double C1313 = C1289 * C707;
    const double C1312 = C707 * C1288;
    const double C1311 = C1287 + C1068;
    const double C1310 = C1284 + C1061;
    const double C1329 = C1321 - C951;
    const double C1328 = C1316 - C931;
    const double C1327 = C1315 - C923;
    const double C1331 = C1329 * C708;
    const double C1330 = C1327 * C707;
    const double d2nexx100100 =
        (2 * Pi *
         (C240 * C270 - (C65 * C1041) / C74 + C234 * C226 + C67 * C960 +
          C176 * C237 +
          C69 * (C865 - C717 + C961 +
                 C119 * (C962 + C199 - (C119 * C1042) / C74))) *
         C70 * C71) /
        C74;
    const double d2nexx100010 =
        (2 * Pi *
         (C1310 * C70 * C264 +
          (C317 * C275 - (C262 * C774) / C74 + C318 * C276 + C693 * C1285) *
              C70 * C707)) /
        C74;
    const double d2nexx100001 =
        (2 * Pi *
         (C1310 * C344 +
          (C317 * C348 - (C262 * C802) / C74 + C318 * C349 + C693 * C1292) *
              C708) *
         C71) /
        C74;
    const double d2nexx010100 =
        (2 * Pi *
         (C1319 * C70 * C390 +
          (C225 * C275 - (C63 * C774) / C74 + C128 * C276 + C700 * C1285) *
              C70 * C707)) /
        C74;
    const double d2nexx010010 =
        (2 * Pi *
         (C1301 * C70 * C425 + C1157 * C70 * C426 +
          (C62 * ((-C1042 * C140) / C74 - C717) - (C450 * C116) / C74) * C70 *
              C427)) /
        C74;
    const double d2nexx010001 =
        (2 * Pi *
         ((C1301 * C344 + C1221) * C390 + (C1157 * C344 + C1331) * C707)) /
        C74;
    const double d2nexx001100 =
        (2 * Pi *
         (C1319 * C517 +
          (C225 * C348 - (C63 * C802) / C74 + C128 * C349 + C700 * C1292) *
              C708) *
         C71) /
        C74;
    const double d2nexx001010 =
        (2 * Pi *
         ((C1301 * C517 + C1221) * C264 + (C1157 * C517 + C1331) * C707)) /
        C74;
    const double d2nexx001001 =
        (2 * Pi *
         (C1301 * C572 + C1164 * C573 +
          (C62 * ((-C1042 * C145) / C74 - C717) - (C597 * C116) / C74) * C574) *
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
         (C240 * C277 - (C65 * C869) / C74 + C234 * C219 + C67 * C964 +
          C176 * C228 + C69 * (C871 - C725 + C119 * C1111)) *
         C70 * C71) /
        C74;
    const double d2nexy100010 =
        (2 * Pi *
         (C1240 * C70 * C264 +
          (C317 * C298 + C262 * C994 + C318 * C319 + C693 * C1241) * C70 *
              C707)) /
        C74;
    const double d2nexy100001 =
        (2 * Pi *
         (C1240 * C344 +
          (C317 * C350 - (C262 * C805) / C74 + C318 * C351 + C693 * C1201) *
              C708) *
         C71) /
        C74;
    const double d2nexy010100 =
        (2 * Pi *
         (C1264 * C70 * C390 +
          (C225 * C298 + C63 * C994 + C128 * C319 + C700 * C1241) * C70 *
              C707)) /
        C74;
    const double d2nexy010010 =
        (2 * Pi *
         (C1219 * C70 * C425 + C1159 * C70 * C426 +
          (C62 * (C776 - C725 + C122 * C1160) - (C461 * C116) / C74) * C70 *
              C427)) /
        C74;
    const double d2nexy010001 =
        (2 * Pi *
         ((C1219 * C344 + C1223) * C390 + (C1159 * C344 + C1322) * C707)) /
        C74;
    const double d2nexy001100 =
        (2 * Pi *
         (C1264 * C517 +
          (C225 * C350 - (C63 * C805) / C74 + C128 * C351 + C700 * C1201) *
              C708) *
         C71) /
        C74;
    const double d2nexy001010 =
        (2 * Pi *
         ((C1219 * C517 + C1223) * C264 + (C1159 * C517 + C1322) * C707)) /
        C74;
    const double d2nexy001001 =
        (2 * Pi *
         (C1219 * C572 + C1165 * C573 +
          (C62 * ((-C873 * C145) / C74 - C725) - (C598 * C116) / C74) * C574) *
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
         (C240 * C281 - (C65 * C874) / C74 + C234 * C221 + C67 * C967 +
          C176 * C229 + C69 * (C876 - C731 + C119 * C1112)) *
         C70 * C71) /
        C74;
    const double d2nexz100010 =
        (2 * Pi *
         (C1242 * C70 * C264 +
          (C317 * C283 - (C262 * C782) / C74 + C318 * C313 + C693 * C1187) *
              C70 * C707)) /
        C74;
    const double d2nexz100001 =
        (2 * Pi *
         (C1242 * C344 +
          (C317 * C359 + C262 * C1008 + C318 * C360 + C693 * C1253) * C708) *
         C71) /
        C74;
    const double d2nexz010100 =
        (2 * Pi *
         (C1265 * C70 * C390 +
          (C225 * C283 - (C63 * C782) / C74 + C128 * C313 + C700 * C1187) *
              C70 * C707)) /
        C74;
    const double d2nexz010010 =
        (2 * Pi *
         (C1220 * C70 * C425 + C1162 * C70 * C426 +
          (C62 * ((-C878 * C140) / C74 - C731) - (C452 * C116) / C74) * C70 *
              C427)) /
        C74;
    const double d2nexz010001 =
        (2 * Pi *
         ((C1220 * C344 + C1225) * C390 + (C1162 * C344 + C1323) * C707)) /
        C74;
    const double d2nexz001100 =
        (2 * Pi *
         (C1265 * C517 +
          (C225 * C359 + C63 * C1008 + C128 * C360 + C700 * C1253) * C708) *
         C71) /
        C74;
    const double d2nexz001010 =
        (2 * Pi *
         ((C1220 * C517 + C1225) * C264 + (C1162 * C517 + C1323) * C707)) /
        C74;
    const double d2nexz001001 =
        (2 * Pi *
         (C1220 * C572 + C1166 * C573 +
          (C62 * (C804 - C731 + C123 * (C199 - (C123 * C878) / C74)) -
           (C608 * C116) / C74) *
              C574) *
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
         (C1176 * C65 + C1114 * C67 +
          (C71 * (C738 - C739 + C119 * C1115) - (C237 * C124) / C74) * C69) *
         C70) /
        C74;
    const double d2neyx100010 =
        (2 * Pi *
         (C1243 * C262 +
          (C322 * C226 + C264 * C972 + C315 * C276 + C1286) * C693) *
         C70) /
        C74;
    const double d2neyx100001 = (2 * Pi *
                                 ((C1176 * C262 + C1114 * C693) * C344 +
                                  (C1142 * C262 + C1293 * C693) * C708)) /
                                C74;
    const double d2neyx010100 =
        (2 * Pi *
         (C1266 * C63 +
          (C402 * C226 + C390 * C972 + C403 * C276 + C1286) * C700) *
         C70) /
        C74;
    const double d2neyx010010 =
        (2 * Pi *
         (C467 * C270 - (C425 * C879) / C74 + C463 * C275 + C426 * C997 +
          C456 * C450 +
          C427 * (C909 - C739 + C122 * (C962 - (C122 * C883) / C74))) *
         C62 * C70) /
        C74;
    const double d2neyx010001 =
        (2 * Pi *
         (C1266 * C62 * C344 +
          (C402 * C348 - (C390 * C807) / C74 + C403 * C493 + C1273) * C62 *
              C708)) /
        C74;
    const double d2neyx001100 = (2 * Pi *
                                 ((C1176 * C63 + C1114 * C700) * C517 +
                                  (C1142 * C63 + C1293 * C700) * C708)) /
                                C74;
    const double d2neyx001010 =
        (2 * Pi *
         (C1243 * C62 * C517 +
          (C322 * C348 - (C264 * C807) / C74 + C315 * C493 + C1273) * C62 *
              C708)) /
        C74;
    const double d2neyx001001 =
        (2 * Pi *
         (C1176 * C62 * C572 + C1142 * C62 * C573 +
          (C71 * ((-C883 * C145) / C74 - C739) - (C597 * C124) / C74) * C62 *
              C574)) /
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
         (C1282 * C65 + C1117 * C67 +
          (C71 * ((-C1050 * C130) / C74 - C746) - (C228 * C124) / C74) * C69) *
         C70) /
        C74;
    const double d2neyy100010 =
        (2 * Pi *
         (C1311 * C262 +
          (C322 * C219 - (C264 * C743) / C74 + C315 * C319 + C1312) * C693) *
         C70) /
        C74;
    const double d2neyy100001 = (2 * Pi *
                                 ((C1282 * C262 + C1117 * C693) * C344 +
                                  (C1143 * C262 + C1328 * C693) * C708)) /
                                C74;
    const double d2neyy010100 =
        (2 * Pi *
         (C1320 * C63 +
          (C402 * C219 - (C390 * C743) / C74 + C403 * C319 + C1312) * C700) *
         C70) /
        C74;
    const double d2neyy010010 =
        (2 * Pi *
         (C467 * C277 - (C425 * C1048) / C74 + C463 * C298 + C426 * C998 +
          C456 * C461 +
          C427 * (C947 - C746 + C122 * C207 - C866 +
                  C122 * (C965 + C207 - (C122 * C1050) / C74))) *
         C62 * C70) /
        C74;
    const double d2neyy010001 =
        (2 * Pi *
         (C1320 * C62 * C344 +
          (C402 * C350 - (C390 * C810) / C74 + C403 * C491 + C1324) * C62 *
              C708)) /
        C74;
    const double d2neyy001100 = (2 * Pi *
                                 ((C1282 * C63 + C1117 * C700) * C517 +
                                  (C1143 * C63 + C1328 * C700) * C708)) /
                                C74;
    const double d2neyy001010 =
        (2 * Pi *
         (C1311 * C62 * C517 +
          (C322 * C350 - (C264 * C810) / C74 + C315 * C491 + C1324) * C62 *
              C708)) /
        C74;
    const double d2neyy001001 =
        (2 * Pi *
         (C1282 * C62 * C572 + C1143 * C62 * C573 +
          (C71 * ((-C1050 * C145) / C74 - C746) - (C598 * C124) / C74) * C62 *
              C574)) /
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
         (C1178 * C65 + C1119 * C67 +
          (C71 * ((-C893 * C130) / C74 - C752) - (C229 * C124) / C74) * C69) *
         C70) /
        C74;
    const double d2neyz100010 =
        (2 * Pi *
         (C1247 * C262 +
          (C322 * C221 - (C264 * C749) / C74 + C315 * C313 + C1248) * C693) *
         C70) /
        C74;
    const double d2neyz100001 = (2 * Pi *
                                 ((C1178 * C262 + C1119 * C693) * C344 +
                                  (C1144 * C262 + C1295 * C693) * C708)) /
                                C74;
    const double d2neyz010100 =
        (2 * Pi *
         (C1268 * C63 +
          (C402 * C221 - (C390 * C749) / C74 + C403 * C313 + C1248) * C700) *
         C70) /
        C74;
    const double d2neyz010010 =
        (2 * Pi *
         (C467 * C281 - (C425 * C889) / C74 + C463 * C283 + C426 * C1001 +
          C456 * C452 +
          C427 * (C948 - C752 + C122 * (C968 - (C122 * C893) / C74))) *
         C62 * C70) /
        C74;
    const double d2neyz010001 =
        (2 * Pi *
         (C1268 * C62 * C344 +
          (C402 * C359 + C390 * C1011 + C403 * C495 + C1306) * C62 * C708)) /
        C74;
    const double d2neyz001100 = (2 * Pi *
                                 ((C1178 * C63 + C1119 * C700) * C517 +
                                  (C1144 * C63 + C1295 * C700) * C708)) /
                                C74;
    const double d2neyz001010 =
        (2 * Pi *
         (C1247 * C62 * C517 +
          (C322 * C359 + C264 * C1011 + C315 * C495 + C1306) * C62 * C708)) /
        C74;
    const double d2neyz001001 =
        (2 * Pi *
         (C1178 * C62 * C572 + C1144 * C62 * C573 +
          (C71 * (C854 - C752 + C123 * C1170) - (C608 * C124) / C74) * C62 *
              C574)) /
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
         (C1179 * C71 * C65 + C1121 * C71 * C67 +
          (C70 * (C757 - C758 + C119 * C1122) - (C237 * C125) / C74) * C71 *
              C69)) /
        C74;
    const double d2nezx100010 =
        (2 * Pi *
         ((C1179 * C264 + C1194) * C262 + (C1121 * C264 + C1313) * C693)) /
        C74;
    const double d2nezx100001 =
        (2 * Pi *
         (C1257 * C71 * C262 +
          (C368 * C226 + C344 * C983 + C365 * C349 + C1296) * C71 * C693)) /
        C74;
    const double d2nezx010100 =
        (2 * Pi *
         ((C1179 * C390 + C1194) * C63 + (C1121 * C390 + C1313) * C700)) /
        C74;
    const double d2nezx010010 =
        (2 * Pi *
         (C1179 * C425 + C1136 * C426 +
          (C70 * ((-C898 * C140) / C74 - C758) - (C450 * C125) / C74) * C427) *
         C62) /
        C74;
    const double d2nezx010001 =
        (2 * Pi *
         (C1257 * C390 +
          (C368 * C275 - (C344 * C793) / C74 + C365 * C493 + C1276) * C707) *
         C62) /
        C74;
    const double d2nezx001100 =
        (2 * Pi *
         (C1279 * C71 * C63 +
          (C529 * C226 + C517 * C983 + C530 * C349 + C1296) * C71 * C700)) /
        C74;
    const double d2nezx001010 =
        (2 * Pi *
         (C1279 * C264 +
          (C529 * C275 - (C517 * C793) / C74 + C530 * C493 + C1276) * C707) *
         C62) /
        C74;
    const double d2nezx001001 =
        (2 * Pi *
         (C614 * C270 - (C572 * C894) / C74 + C610 * C348 + C573 * C1013 +
          C603 * C597 +
          C574 * (C1007 - C758 + C123 * (C962 - (C123 * C898) / C74))) *
         C71 * C62) /
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
         (C1180 * C71 * C65 + C1124 * C71 * C67 +
          (C70 * ((-C903 * C130) / C74 - C765) - (C228 * C125) / C74) * C71 *
              C69)) /
        C74;
    const double d2nezy100010 =
        (2 * Pi *
         ((C1180 * C264 + C1196) * C262 + (C1124 * C264 + C1314) * C693)) /
        C74;
    const double d2nezy100001 =
        (2 * Pi *
         (C1259 * C71 * C262 +
          (C368 * C219 - (C344 * C762) / C74 + C365 * C351 + C1260) * C71 *
              C693)) /
        C74;
    const double d2nezy010100 =
        (2 * Pi *
         ((C1180 * C390 + C1196) * C63 + (C1124 * C390 + C1314) * C700)) /
        C74;
    const double d2nezy010010 =
        (2 * Pi *
         (C1180 * C425 + C1137 * C426 +
          (C70 * (C846 - C765 + C122 * C1163) - (C461 * C125) / C74) * C427) *
         C62) /
        C74;
    const double d2nezy010001 =
        (2 * Pi *
         (C1259 * C390 +
          (C368 * C298 + C344 * C1004 + C365 * C491 + C1307) * C707) *
         C62) /
        C74;
    const double d2nezy001100 =
        (2 * Pi *
         (C1280 * C71 * C63 +
          (C529 * C219 - (C517 * C762) / C74 + C530 * C351 + C1260) * C71 *
              C700)) /
        C74;
    const double d2nezy001010 =
        (2 * Pi *
         (C1280 * C264 +
          (C529 * C298 + C517 * C1004 + C530 * C491 + C1307) * C707) *
         C62) /
        C74;
    const double d2nezy001001 =
        (2 * Pi *
         (C614 * C277 - (C572 * C899) / C74 + C610 * C350 + C573 * C1015 +
          C603 * C598 +
          C574 * (C1035 - C765 + C123 * (C965 - (C123 * C903) / C74))) *
         C71 * C62) /
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
         (C1283 * C71 * C65 + C1126 * C71 * C67 +
          (C70 * ((-C1060 * C130) / C74 - C771) - (C229 * C125) / C74) * C71 *
              C69)) /
        C74;
    const double d2nezz100010 =
        (2 * Pi *
         ((C1283 * C264 + C1198) * C262 + (C1126 * C264 + C1330) * C693)) /
        C74;
    const double d2nezz100001 =
        (2 * Pi *
         (C1317 * C71 * C262 +
          (C368 * C221 - (C344 * C768) / C74 + C365 * C360 + C1318) * C71 *
              C693)) /
        C74;
    const double d2nezz010100 =
        (2 * Pi *
         ((C1283 * C390 + C1198) * C63 + (C1126 * C390 + C1330) * C700)) /
        C74;
    const double d2nezz010010 =
        (2 * Pi *
         (C1283 * C425 + C1139 * C426 +
          (C70 * ((-C1060 * C140) / C74 - C771) - (C452 * C125) / C74) * C427) *
         C62) /
        C74;
    const double d2nezz010001 =
        (2 * Pi *
         (C1317 * C390 +
          (C368 * C283 - (C344 * C799) / C74 + C365 * C495 + C1325) * C707) *
         C62) /
        C74;
    const double d2nezz001100 =
        (2 * Pi *
         (C1326 * C71 * C63 +
          (C529 * C221 - (C517 * C768) / C74 + C530 * C360 + C1318) * C71 *
              C700)) /
        C74;
    const double d2nezz001010 =
        (2 * Pi *
         (C1326 * C264 +
          (C529 * C283 - (C517 * C799) / C74 + C530 * C495 + C1325) * C707) *
         C62) /
        C74;
    const double d2nezz001001 =
        (2 * Pi *
         (C614 * C281 - (C572 * C1058) / C74 + C610 * C359 + C573 * C1016 +
          C603 * C608 +
          C574 * (C958 - C771 + C123 * C211 - C866 +
                  C123 * (C968 + C211 - (C123 * C1060) / C74))) *
         C71 * C62) /
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
