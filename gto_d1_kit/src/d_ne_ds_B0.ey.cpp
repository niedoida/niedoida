/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_20_2(double ae,
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
    const double C660 = 2. * Pi;
    const double C659 = ae + be;
    const double C658 = ae * be;
    const double C657 = zA - zB;
    const double C656 = yA - yB;
    const double C655 = xA - xB;
    const double C654 = bs[0];
    const double C663 = std::pow(C657, 2);
    const double C662 = std::pow(C656, 2);
    const double C661 = std::pow(C655, 2);
    const double C664 = C661 + C662;
    const double C665 = C664 + C663;
    const double C666 = C665 * C658;
    const double C667 = C666 / C659;
    const double C668 = -C667;
    const double C669 = std::exp(C668);
    const double C670 = C669 * C660;
    const double C671 = C654 * C670;
    const double C675 = bs[1];
    const double C676 = C675 * C670;
    const double C696 = be * zB;
    const double C695 = ae * zA;
    const double C694 = be * C657;
    const double C693 = be * yB;
    const double C692 = ae * yA;
    const double C691 = be * C656;
    const double C690 = bs[2];
    const double C689 = bs[1];
    const double C688 = be * xB;
    const double C687 = ae * xA;
    const double C686 = be * C655;
    const double C704 = C695 + C696;
    const double C703 = C671 * C694;
    const double C702 = C692 + C693;
    const double C701 = C671 * C691;
    const double C700 = C690 * C670;
    const double C699 = C689 * C670;
    const double C698 = C687 + C688;
    const double C697 = C671 * C686;
    const double C710 = C704 / C659;
    const double C709 = C703 / C659;
    const double C708 = C702 / C659;
    const double C707 = C701 / C659;
    const double C706 = C698 / C659;
    const double C705 = C697 / C659;
    const double C716 = C710 - zC;
    const double C715 = -C709;
    const double C714 = C708 - yC;
    const double C713 = -C707;
    const double C712 = C706 - xC;
    const double C711 = -C705;
    const double C721 = C716 * C676;
    const double C720 = C715 / C659;
    const double C719 = C714 * C676;
    const double C718 = C713 / C659;
    const double C717 = C711 / C659;
    const double C723 = C721 / C659;
    const double C722 = C719 / C659;
    const double C725 = C720 - C723;
    const double C724 = C718 - C722;
    const double C118 = C717 - (C712 * C699) / C659 + (C655 * C671) / C659;
    const double C119 = C671 / C659;
    const double C120 = C699 / C659;
    const double C121 = (-(C676 * C686) / C659) / C659 - (C712 * C700) / C659 +
                        (C655 * C676) / C659;
    const double C122 = C700 / C659;
    const double C123 = C717 - (C712 * C676) / C659;
    const double C301 = C724 + (C656 * C671) / C659;
    const double C302 = (-(C676 * C691) / C659) / C659 - (C714 * C700) / C659 +
                        (C656 * C676) / C659;
    const double C402 = C725 + (C657 * C671) / C659;
    const double C403 = (-(C676 * C694) / C659) / C659 - (C716 * C700) / C659 +
                        (C657 * C676) / C659;
    const double C140 = be * zB;
    const double C139 = ae * zA;
    const double C138 = be * yB;
    const double C137 = ae * yA;
    const double C136 = bs[3];
    const double C135 = bs[2];
    const double C134 = C120 * be;
    const double C133 = 4 * Pi;
    const double C132 = zA - zB;
    const double C131 = yA - yB;
    const double C130 = ae * be;
    const double C129 = xA - xB;
    const double C128 = bs[0];
    const double C127 = bs[1];
    const double C126 = be * xB;
    const double C125 = ae * xA;
    const double C124 = ae + be;
    const double C153 = C132 * C130;
    const double C152 = C139 + C140;
    const double C151 = C131 * C130;
    const double C150 = C137 + C138;
    const double C149 = 2 * C124;
    const double C148 = std::pow(C124, 2);
    const double C147 = C134 / C124;
    const double C146 = std::pow(C132, 2);
    const double C145 = std::pow(C131, 2);
    const double C144 = std::pow(C129, 2);
    const double C143 = C129 * C130;
    const double C142 = C125 + C126;
    const double C141 = be / C124;
    const double C165 = C128 * C153;
    const double C164 = C127 * C153;
    const double C163 = C152 / C124;
    const double C162 = C128 * C151;
    const double C161 = C127 * C151;
    const double C160 = C150 / C124;
    const double C159 = 2 * C148;
    const double C158 = C127 * C143;
    const double C157 = C144 + C145;
    const double C156 = C128 * C143;
    const double C155 = C142 / C124;
    const double C154 = C141 - 1;
    const double C177 = C165 / C124;
    const double C176 = C164 / C124;
    const double C175 = C163 - zC;
    const double C174 = C162 / C124;
    const double C173 = C161 / C124;
    const double C172 = C160 - yC;
    const double C171 = C158 / C124;
    const double C170 = C157 + C146;
    const double C169 = C156 / C124;
    const double C168 = C155 - xC;
    const double C167 = C154 * C119;
    const double C166 = C155 - xB;
    const double C181 = be * C175;
    const double C180 = be * C172;
    const double C179 = C170 * C130;
    const double C178 = be * C168;
    const double C188 = C127 * C181;
    const double C187 = C135 * C181;
    const double C186 = C127 * C180;
    const double C185 = C135 * C180;
    const double C184 = C135 * C178;
    const double C183 = C179 / C124;
    const double C182 = C127 * C178;
    const double C195 = C188 - C177;
    const double C194 = C187 - C176;
    const double C193 = C186 - C174;
    const double C192 = C185 - C173;
    const double C191 = C184 - C171;
    const double C190 = -C183;
    const double C189 = C182 - C169;
    const double C196 = std::exp(C190);
    const double C197 = C196 * C133;
    const double C203 = C195 * C197;
    const double C202 = C194 * C197;
    const double C201 = C193 * C197;
    const double C200 = C192 * C197;
    const double C199 = C191 * C197;
    const double C198 = C189 * C197;
    const double C209 = C166 * C203;
    const double C208 = C168 * C202;
    const double C207 = C166 * C201;
    const double C206 = C168 * C200;
    const double C205 = C168 * C199;
    const double C204 = C166 * C198;
    const double C215 = C209 / C124;
    const double C214 = C208 / C124;
    const double C213 = C207 / C124;
    const double C212 = C206 / C124;
    const double C211 = C205 / C124;
    const double C210 = C204 / C124;
    const double C218 = C214 - C215;
    const double C217 = C212 - C213;
    const double C216 = C167 - C210;
    const double C219 = C216 - C147;
    const double C220 = C219 + C211;
    const double C307 = C172 * C202;
    const double C306 = C172 * C200;
    const double C305 = C172 * C199;
    const double C304 = C160 - yB;
    const double C313 = C304 * C203;
    const double C312 = C307 / C124;
    const double C311 = C306 / C124;
    const double C310 = C304 * C201;
    const double C309 = C304 * C198;
    const double C308 = C305 / C124;
    const double C316 = C313 / C124;
    const double C315 = C310 / C124;
    const double C314 = C309 / C124;
    const double C319 = C312 - C316;
    const double C318 = C167 - C315;
    const double C317 = C308 - C314;
    const double C320 = C318 - C147;
    const double C321 = C320 + C311;
    const double C408 = C175 * C202;
    const double C407 = C175 * C200;
    const double C406 = C175 * C199;
    const double C405 = C163 - zB;
    const double C414 = C408 / C124;
    const double C413 = C405 * C203;
    const double C412 = C405 * C201;
    const double C411 = C407 / C124;
    const double C410 = C405 * C198;
    const double C409 = C406 / C124;
    const double C417 = C413 / C124;
    const double C416 = C412 / C124;
    const double C415 = C410 / C124;
    const double C420 = C167 - C417;
    const double C419 = C411 - C416;
    const double C418 = C409 - C415;
    const double C421 = C420 - C147;
    const double C422 = C421 + C414;
    const double C761 = C132 * C203;
    const double C760 = C422 + C119;
    const double C759 = C405 * C202;
    const double C758 = C403 * be;
    const double C757 = C154 * C402;
    const double C756 = C132 * C201;
    const double C755 = C405 * C200;
    const double C754 = C132 * C198;
    const double C753 = C405 * C199;
    const double C752 = C131 * C203;
    const double C751 = C304 * C202;
    const double C750 = C131 * C201;
    const double C749 = C321 + C119;
    const double C748 = C304 * C200;
    const double C747 = C302 * be;
    const double C746 = C154 * C301;
    const double C745 = C131 * C198;
    const double C744 = C304 * C199;
    const double C743 = C202 / C124;
    const double C742 = C135 * C153;
    const double C741 = C136 * C181;
    const double C740 = C203 / C159;
    const double C739 = C200 / C124;
    const double C738 = C135 * C151;
    const double C737 = C136 * C180;
    const double C736 = C201 / C159;
    const double C735 = C199 / C124;
    const double C734 = C135 * C143;
    const double C733 = C136 * C178;
    const double C732 = C122 * be;
    const double C731 = C154 * C120;
    const double C730 = C198 / C159;
    const double C782 = C761 / C124;
    const double C781 = C759 / C124;
    const double C780 = C758 / C124;
    const double C779 = C756 / C124;
    const double C778 = C755 / C124;
    const double C777 = C754 / C124;
    const double C776 = C753 / C124;
    const double C775 = C752 / C124;
    const double C774 = C751 / C124;
    const double C773 = C750 / C124;
    const double C772 = C748 / C124;
    const double C771 = C747 / C124;
    const double C770 = C745 / C124;
    const double C769 = C744 / C124;
    const double C768 = -C743;
    const double C767 = C742 / C124;
    const double C766 = -C739;
    const double C765 = C738 / C124;
    const double C764 = -C735;
    const double C763 = C734 / C124;
    const double C762 = C732 / C124;
    const double C796 = C760 + C782;
    const double C795 = C731 - C781;
    const double C794 = C419 + C779;
    const double C793 = C418 + C777;
    const double C792 = C319 + C775;
    const double C791 = C749 + C773;
    const double C790 = C731 - C772;
    const double C789 = C317 + C770;
    const double C788 = C768 / C149;
    const double C787 = C741 - C767;
    const double C786 = C766 / C149;
    const double C785 = C737 - C765;
    const double C784 = C764 / C149;
    const double C783 = C733 - C763;
    const double C801 = C795 - C762;
    const double C800 = C790 - C762;
    const double C799 = C787 * C197;
    const double C798 = C785 * C197;
    const double C797 = C783 * C197;
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
    const double C818 = C812 - C778;
    const double C817 = C811 - C776;
    const double C816 = C810 - C774;
    const double C815 = C800 + C809;
    const double C814 = C808 - C769;
    const double gx200000 =
        C154 * C118 + C166 * C220 - C730 - (C121 * be) / C124 -
        C168 * (C731 - (C166 * C199) / C124 - C762 + (C168 * C797) / C124) -
        C784 + C118 - C129 * C220 + C123 -
        C129 * (C220 + C119 + (C129 * C198) / C124);
    const double gx020000 =
        C304 * C317 - C730 - C172 * C814 - C784 - C131 * C317 - C131 * C789;
    const double gx002000 =
        C405 * C418 - C730 - C175 * C817 - C784 - C132 * C418 - C132 * C793;
    const double gx110000 = C746 + C166 * C317 - C771 - C168 * C814 -
                            C131 * C220 + C724 - C129 * C789;
    const double gx101000 = C757 + C166 * C418 - C780 - C168 * C817 -
                            C132 * C220 + C725 - C129 * C793;
    const double gx011000 =
        C304 * C418 - C172 * C817 - C132 * C317 - C131 * C793;
    gx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx110000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx011000;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gx200000 - 0.5 * gx020000 + gx002000;
    gx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx101000;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gx200000 - std::sqrt(0.75) * gx020000;
    const double gy200000 =
        C166 * C217 - C736 -
        C168 * ((C168 * C798) / C124 - (C166 * C200) / C124) - C786 -
        C129 * C217 - C129 * (C217 + (C129 * C201) / C124);
    const double gy020000 = C746 + C304 * C321 - C736 - C771 - C172 * C815 -
                            C786 + C301 - C131 * C321 + C724 - C131 * C791;
    const double gy002000 =
        C405 * C419 - C736 - C175 * C818 - C786 - C132 * C419 - C132 * C794;
    const double gy110000 =
        C166 * C321 - C168 * C815 + C118 - C131 * C217 - C129 * C791;
    const double gy101000 =
        C166 * C419 - C168 * C818 - C132 * C217 - C129 * C794;
    const double gy011000 = C757 + C304 * C419 - C780 - C172 * C818 -
                            C132 * C321 + C725 - C131 * C794;
    gy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy110000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy011000;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gy200000 - 0.5 * gy020000 + gy002000;
    gy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy101000;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gy200000 - std::sqrt(0.75) * gy020000;
    const double gz200000 =
        C166 * C218 - C740 -
        C168 * ((C168 * C799) / C124 - (C166 * C202) / C124) - C788 -
        C129 * C218 - C129 * (C218 + (C129 * C203) / C124);
    const double gz020000 =
        C304 * C319 - C740 - C172 * C816 - C788 - C131 * C319 - C131 * C792;
    const double gz002000 = C757 + C405 * C422 - C740 - C780 - C175 * C819 -
                            C788 + C402 - C132 * C422 + C725 - C132 * C796;
    const double gz110000 =
        C166 * C319 - C168 * C816 - C131 * C218 - C129 * C792;
    const double gz101000 =
        C166 * C422 - C168 * C819 + C118 - C132 * C218 - C129 * C796;
    const double gz011000 =
        C304 * C422 - C172 * C819 + C301 - C132 * C319 - C131 * C796;
    gz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz110000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz011000;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gz200000 - 0.5 * gz020000 + gz002000;
    gz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz101000;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gz200000 - std::sqrt(0.75) * gz020000;
}
