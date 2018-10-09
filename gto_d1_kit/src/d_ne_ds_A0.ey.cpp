/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_20_1(double ae,
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
                       double* const gx,
                       double* const gy,
                       double* const gz,
                       std::size_t matrix_size,
                       std::size_t Ai,
                       std::size_t Bi)
{
    const double C659 = 2. * Pi;
    const double C658 = ae + be;
    const double C657 = ae * be;
    const double C656 = zA - zB;
    const double C655 = yA - yB;
    const double C654 = xA - xB;
    const double C653 = bs[0];
    const double C662 = std::pow(C656, 2);
    const double C661 = std::pow(C655, 2);
    const double C660 = std::pow(C654, 2);
    const double C663 = C660 + C661;
    const double C664 = C663 + C662;
    const double C665 = C664 * C657;
    const double C666 = C665 / C658;
    const double C667 = -C666;
    const double C668 = std::exp(C667);
    const double C669 = C668 * C659;
    const double C670 = C653 * C669;
    const double C674 = bs[1];
    const double C675 = C674 * C669;
    const double C695 = be * zB;
    const double C694 = ae * zA;
    const double C693 = be * C656;
    const double C692 = be * yB;
    const double C691 = ae * yA;
    const double C690 = be * C655;
    const double C689 = bs[2];
    const double C688 = bs[1];
    const double C687 = be * xB;
    const double C686 = ae * xA;
    const double C685 = be * C654;
    const double C703 = C694 + C695;
    const double C702 = C670 * C693;
    const double C701 = C691 + C692;
    const double C700 = C670 * C690;
    const double C699 = C689 * C669;
    const double C698 = C688 * C669;
    const double C697 = C686 + C687;
    const double C696 = C670 * C685;
    const double C709 = C703 / C658;
    const double C708 = C702 / C658;
    const double C707 = C701 / C658;
    const double C706 = C700 / C658;
    const double C705 = C697 / C658;
    const double C704 = C696 / C658;
    const double C715 = C709 - zC;
    const double C714 = -C708;
    const double C713 = C707 - yC;
    const double C712 = -C706;
    const double C711 = C705 - xC;
    const double C710 = -C704;
    const double C720 = C715 * C675;
    const double C719 = C714 / C658;
    const double C718 = C713 * C675;
    const double C717 = C712 / C658;
    const double C716 = C710 / C658;
    const double C722 = C720 / C658;
    const double C721 = C718 / C658;
    const double C724 = C719 - C722;
    const double C723 = C717 - C721;
    const double C118 = C716 - (C711 * C698) / C658 + (C654 * C670) / C658;
    const double C119 = C670 / C658;
    const double C120 = C698 / C658;
    const double C121 = (-(C675 * C685) / C658) / C658 - (C711 * C699) / C658 +
                        (C654 * C675) / C658;
    const double C122 = C699 / C658;
    const double C123 = C716 - (C711 * C675) / C658;
    const double C300 = C723 + (C655 * C670) / C658;
    const double C301 = (-(C675 * C690) / C658) / C658 - (C713 * C699) / C658 +
                        (C655 * C675) / C658;
    const double C401 = C724 + (C656 * C670) / C658;
    const double C402 = (-(C675 * C693) / C658) / C658 - (C715 * C699) / C658 +
                        (C656 * C675) / C658;
    const double C141 = be * zB;
    const double C140 = ae * zA;
    const double C139 = be * yB;
    const double C138 = ae * yA;
    const double C137 = bs[3];
    const double C136 = bs[2];
    const double C135 = C120 * ae;
    const double C134 = 4 * Pi;
    const double C133 = zA - zB;
    const double C132 = yA - yB;
    const double C131 = bs[1];
    const double C130 = ae * be;
    const double C129 = xA - xB;
    const double C128 = bs[0];
    const double C127 = C119 * ae;
    const double C126 = be * xB;
    const double C125 = ae * xA;
    const double C124 = ae + be;
    const double C154 = C140 + C141;
    const double C153 = C133 * C130;
    const double C152 = C138 + C139;
    const double C151 = C132 * C130;
    const double C150 = 2 * C124;
    const double C149 = std::pow(C124, 2);
    const double C148 = C135 / C124;
    const double C147 = std::pow(C133, 2);
    const double C146 = std::pow(C132, 2);
    const double C145 = std::pow(C129, 2);
    const double C144 = C129 * C130;
    const double C143 = C127 / C124;
    const double C142 = C125 + C126;
    const double C165 = C128 * C153;
    const double C164 = C154 / C124;
    const double C163 = C131 * C153;
    const double C162 = C128 * C151;
    const double C161 = C152 / C124;
    const double C160 = C131 * C151;
    const double C159 = 2 * C149;
    const double C158 = C131 * C144;
    const double C157 = C145 + C146;
    const double C156 = C128 * C144;
    const double C155 = C142 / C124;
    const double C176 = C165 / C124;
    const double C175 = C164 - zC;
    const double C174 = C163 / C124;
    const double C173 = C162 / C124;
    const double C172 = C161 - yC;
    const double C171 = C160 / C124;
    const double C170 = C158 / C124;
    const double C169 = C157 + C147;
    const double C168 = C155 - xC;
    const double C167 = C156 / C124;
    const double C166 = C155 - xB;
    const double C180 = ae * C175;
    const double C179 = ae * C172;
    const double C178 = C169 * C130;
    const double C177 = ae * C168;
    const double C187 = C131 * C180;
    const double C186 = C136 * C180;
    const double C185 = C131 * C179;
    const double C184 = C136 * C179;
    const double C183 = C136 * C177;
    const double C182 = C178 / C124;
    const double C181 = C131 * C177;
    const double C194 = C176 + C187;
    const double C193 = C174 + C186;
    const double C192 = C173 + C185;
    const double C191 = C171 + C184;
    const double C190 = C170 + C183;
    const double C189 = -C182;
    const double C188 = C167 + C181;
    const double C195 = std::exp(C189);
    const double C196 = C195 * C134;
    const double C202 = C194 * C196;
    const double C201 = C193 * C196;
    const double C200 = C192 * C196;
    const double C199 = C191 * C196;
    const double C198 = C190 * C196;
    const double C197 = C188 * C196;
    const double C208 = C166 * C202;
    const double C207 = C168 * C201;
    const double C206 = C166 * C200;
    const double C205 = C168 * C199;
    const double C204 = C168 * C198;
    const double C203 = C166 * C197;
    const double C214 = C208 / C124;
    const double C213 = C207 / C124;
    const double C212 = C206 / C124;
    const double C211 = C205 / C124;
    const double C210 = C204 / C124;
    const double C209 = C203 / C124;
    const double C217 = C213 - C214;
    const double C216 = C211 - C212;
    const double C215 = C143 - C209;
    const double C218 = C215 - C148;
    const double C219 = C218 + C210;
    const double C306 = C172 * C201;
    const double C305 = C172 * C199;
    const double C304 = C172 * C198;
    const double C303 = C161 - yB;
    const double C312 = C303 * C202;
    const double C311 = C306 / C124;
    const double C310 = C305 / C124;
    const double C309 = C303 * C200;
    const double C308 = C303 * C197;
    const double C307 = C304 / C124;
    const double C315 = C312 / C124;
    const double C314 = C309 / C124;
    const double C313 = C308 / C124;
    const double C318 = C311 - C315;
    const double C317 = C143 - C314;
    const double C316 = C307 - C313;
    const double C319 = C317 - C148;
    const double C320 = C319 + C310;
    const double C407 = C175 * C201;
    const double C406 = C175 * C199;
    const double C405 = C175 * C198;
    const double C404 = C164 - zB;
    const double C413 = C407 / C124;
    const double C412 = C404 * C202;
    const double C411 = C404 * C200;
    const double C410 = C406 / C124;
    const double C409 = C404 * C197;
    const double C408 = C405 / C124;
    const double C416 = C412 / C124;
    const double C415 = C411 / C124;
    const double C414 = C409 / C124;
    const double C419 = C143 - C416;
    const double C418 = C410 - C415;
    const double C417 = C408 - C414;
    const double C420 = C419 - C148;
    const double C421 = C420 + C413;
    const double C759 = C133 * C202;
    const double C758 = C421 - C119;
    const double C757 = C404 * C201;
    const double C756 = C402 * ae;
    const double C755 = C401 * ae;
    const double C754 = C133 * C200;
    const double C753 = C404 * C199;
    const double C752 = C133 * C197;
    const double C751 = C404 * C198;
    const double C750 = C132 * C202;
    const double C749 = C303 * C201;
    const double C748 = C132 * C200;
    const double C747 = C320 - C119;
    const double C746 = C303 * C199;
    const double C745 = C301 * ae;
    const double C744 = C300 * ae;
    const double C743 = C132 * C197;
    const double C742 = C303 * C198;
    const double C741 = C201 / C124;
    const double C740 = C137 * C180;
    const double C739 = C136 * C153;
    const double C738 = C202 / C159;
    const double C737 = C199 / C124;
    const double C736 = C137 * C179;
    const double C735 = C136 * C151;
    const double C734 = C200 / C159;
    const double C733 = C198 / C124;
    const double C732 = C137 * C177;
    const double C731 = C136 * C144;
    const double C730 = C122 * ae;
    const double C729 = C197 / C159;
    const double C782 = C759 / C124;
    const double C781 = C757 / C124;
    const double C780 = C756 / C124;
    const double C779 = C755 / C124;
    const double C778 = C754 / C124;
    const double C777 = C753 / C124;
    const double C776 = C752 / C124;
    const double C775 = C751 / C124;
    const double C774 = C750 / C124;
    const double C773 = C749 / C124;
    const double C772 = C748 / C124;
    const double C771 = C746 / C124;
    const double C770 = C745 / C124;
    const double C769 = C744 / C124;
    const double C768 = C743 / C124;
    const double C767 = C742 / C124;
    const double C766 = -C741;
    const double C765 = C739 / C124;
    const double C764 = -C737;
    const double C763 = C735 / C124;
    const double C762 = -C733;
    const double C761 = C731 / C124;
    const double C760 = C730 / C124;
    const double C796 = C758 + C782;
    const double C795 = C148 - C781;
    const double C794 = C418 + C778;
    const double C793 = C417 + C776;
    const double C792 = C318 + C774;
    const double C791 = C747 + C772;
    const double C790 = C148 - C771;
    const double C789 = C316 + C768;
    const double C788 = C766 / C150;
    const double C787 = C765 + C740;
    const double C786 = C764 / C150;
    const double C785 = C763 + C736;
    const double C784 = C762 / C150;
    const double C783 = C761 + C732;
    const double C801 = C795 - C760;
    const double C800 = C790 - C760;
    const double C799 = C787 * C196;
    const double C798 = C785 * C196;
    const double C797 = C783 * C196;
    const double C807 = C175 * C799;
    const double C806 = C175 * C798;
    const double C805 = C175 * C797;
    const double C804 = C172 * C799;
    const double C803 = C172 * C798;
    const double C802 = C172 * C797;
    const double C813 = C807 / C124;
    const double C812 = C806 / C124;
    const double C811 = C805 / C124;
    const double C810 = C804 / C124;
    const double C809 = C803 / C124;
    const double C808 = C802 / C124;
    const double C819 = C801 + C813;
    const double C818 = C812 - C777;
    const double C817 = C811 - C775;
    const double C816 = C810 - C773;
    const double C815 = C800 + C809;
    const double C814 = C808 - C767;
    const double gx200000 =
        (C118 * ae) / C124 + C166 * C219 - C729 - (C121 * ae) / C124 -
        C168 * (C148 - (C166 * C198) / C124 - C760 + (C168 * C797) / C124) -
        C784 - C118 - C129 * C219 - C123 -
        C129 * (C219 - C119 + (C129 * C197) / C124);
    const double gx020000 =
        C303 * C316 - C729 - C172 * C814 - C784 - C132 * C316 - C132 * C789;
    const double gx002000 =
        C404 * C417 - C729 - C175 * C817 - C784 - C133 * C417 - C133 * C793;
    const double gx110000 = C769 + C166 * C316 - C770 - C168 * C814 -
                            C132 * C219 - C723 - C129 * C789;
    const double gx101000 = C779 + C166 * C417 - C780 - C168 * C817 -
                            C133 * C219 - C724 - C129 * C793;
    const double gx011000 =
        C303 * C417 - C172 * C817 - C133 * C316 - C132 * C793;
    gx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx110000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx011000;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gx200000 - 0.5 * gx020000 + gx002000;
    gx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx101000;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gx200000 - std::sqrt(0.75) * gx020000;
    const double gy200000 =
        C166 * C216 - C734 -
        C168 * ((C168 * C798) / C124 - (C166 * C199) / C124) - C786 -
        C129 * C216 - C129 * (C216 + (C129 * C200) / C124);
    const double gy020000 = C769 + C303 * C320 - C734 - C770 - C172 * C815 -
                            C786 - C300 - C132 * C320 - C723 - C132 * C791;
    const double gy002000 =
        C404 * C418 - C734 - C175 * C818 - C786 - C133 * C418 - C133 * C794;
    const double gy110000 =
        C166 * C320 - C168 * C815 - C118 - C132 * C216 - C129 * C791;
    const double gy101000 =
        C166 * C418 - C168 * C818 - C133 * C216 - C129 * C794;
    const double gy011000 = C779 + C303 * C418 - C780 - C172 * C818 -
                            C133 * C320 - C724 - C132 * C794;
    gy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy110000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy011000;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gy200000 - 0.5 * gy020000 + gy002000;
    gy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy101000;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gy200000 - std::sqrt(0.75) * gy020000;
    const double gz200000 =
        C166 * C217 - C738 -
        C168 * ((C168 * C799) / C124 - (C166 * C201) / C124) - C788 -
        C129 * C217 - C129 * (C217 + (C129 * C202) / C124);
    const double gz020000 =
        C303 * C318 - C738 - C172 * C816 - C788 - C132 * C318 - C132 * C792;
    const double gz002000 = C779 + C404 * C421 - C738 - C780 - C175 * C819 -
                            C788 - C401 - C133 * C421 - C724 - C133 * C796;
    const double gz110000 =
        C166 * C318 - C168 * C816 - C132 * C217 - C129 * C792;
    const double gz101000 =
        C166 * C421 - C168 * C819 - C118 - C133 * C217 - C129 * C796;
    const double gz011000 =
        C303 * C421 - C172 * C819 - C300 - C133 * C318 - C132 * C796;
    gz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz110000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz011000;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gz200000 - 0.5 * gz020000 + gz002000;
    gz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz101000;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gz200000 - std::sqrt(0.75) * gz020000;
}
