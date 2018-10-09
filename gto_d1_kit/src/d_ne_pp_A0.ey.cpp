/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_11_1(double ae,
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
    const double C692 = be * zB;
    const double C691 = ae * zA;
    const double C690 = be * C656;
    const double C689 = be * yB;
    const double C688 = ae * yA;
    const double C687 = be * C655;
    const double C686 = bs[2];
    const double C685 = bs[1];
    const double C684 = be * xB;
    const double C683 = ae * xA;
    const double C682 = be * C654;
    const double C697 = C691 + C692;
    const double C696 = C688 + C689;
    const double C695 = C686 * C669;
    const double C694 = C685 * C669;
    const double C693 = C683 + C684;
    const double C700 = C697 / C658;
    const double C699 = C696 / C658;
    const double C698 = C693 / C658;
    const double C703 = C700 - zC;
    const double C702 = C699 - yC;
    const double C701 = C698 - xC;
    const double C93 = (-(C670 * C682) / C658) / C658 - (C701 * C694) / C658 +
                       (C654 * C670) / C658;
    const double C94 = C670 / C658;
    const double C95 = C694 / C658;
    const double C96 = (-(C675 * C682) / C658) / C658 - (C701 * C695) / C658 +
                       (C654 * C675) / C658;
    const double C97 = C695 / C658;
    const double C246 = (-(C670 * C687) / C658) / C658 - (C702 * C675) / C658 +
                        (C655 * C670) / C658;
    const double C247 = (-(C675 * C687) / C658) / C658 - (C702 * C695) / C658 +
                        (C655 * C675) / C658;
    const double C318 = (-(C670 * C690) / C658) / C658 - (C703 * C675) / C658 +
                        (C656 * C670) / C658;
    const double C319 = (-(C675 * C690) / C658) / C658 - (C703 * C695) / C658 +
                        (C656 * C675) / C658;
    const double C115 = be * zB;
    const double C114 = ae * zA;
    const double C113 = be * yB;
    const double C112 = ae * yA;
    const double C111 = bs[3];
    const double C110 = bs[2];
    const double C109 = C95 * ae;
    const double C108 = 4 * Pi;
    const double C107 = zA - zB;
    const double C106 = yA - yB;
    const double C105 = bs[1];
    const double C104 = ae * be;
    const double C103 = xA - xB;
    const double C102 = bs[0];
    const double C101 = C94 * ae;
    const double C100 = be * xB;
    const double C99 = ae * xA;
    const double C98 = ae + be;
    const double C128 = C114 + C115;
    const double C127 = C107 * C104;
    const double C126 = C112 + C113;
    const double C125 = C106 * C104;
    const double C124 = 2 * C98;
    const double C123 = std::pow(C98, 2);
    const double C122 = C109 / C98;
    const double C121 = std::pow(C107, 2);
    const double C120 = std::pow(C106, 2);
    const double C119 = std::pow(C103, 2);
    const double C118 = C103 * C104;
    const double C117 = C101 / C98;
    const double C116 = C99 + C100;
    const double C139 = C102 * C127;
    const double C138 = C128 / C98;
    const double C137 = C105 * C127;
    const double C136 = C102 * C125;
    const double C135 = C126 / C98;
    const double C134 = C105 * C125;
    const double C133 = 2 * C123;
    const double C132 = C105 * C118;
    const double C131 = C119 + C120;
    const double C130 = C102 * C118;
    const double C129 = C116 / C98;
    const double C150 = C139 / C98;
    const double C149 = C138 - zC;
    const double C148 = C137 / C98;
    const double C147 = C136 / C98;
    const double C146 = C135 - yC;
    const double C145 = C134 / C98;
    const double C144 = C132 / C98;
    const double C143 = C131 + C121;
    const double C142 = C129 - xC;
    const double C141 = C130 / C98;
    const double C140 = C129 - xB;
    const double C154 = ae * C149;
    const double C153 = ae * C146;
    const double C152 = C143 * C104;
    const double C151 = ae * C142;
    const double C161 = C105 * C154;
    const double C160 = C110 * C154;
    const double C159 = C105 * C153;
    const double C158 = C110 * C153;
    const double C157 = C110 * C151;
    const double C156 = C152 / C98;
    const double C155 = C105 * C151;
    const double C168 = C150 + C161;
    const double C167 = C148 + C160;
    const double C166 = C147 + C159;
    const double C165 = C145 + C158;
    const double C164 = C144 + C157;
    const double C163 = -C156;
    const double C162 = C141 + C155;
    const double C169 = std::exp(C163);
    const double C170 = C169 * C108;
    const double C176 = C168 * C170;
    const double C175 = C167 * C170;
    const double C174 = C166 * C170;
    const double C173 = C165 * C170;
    const double C172 = C164 * C170;
    const double C171 = C162 * C170;
    const double C182 = C140 * C176;
    const double C181 = C142 * C175;
    const double C180 = C140 * C174;
    const double C179 = C142 * C173;
    const double C178 = C142 * C172;
    const double C177 = C140 * C171;
    const double C188 = C182 / C98;
    const double C187 = C181 / C98;
    const double C186 = C180 / C98;
    const double C185 = C179 / C98;
    const double C184 = C178 / C98;
    const double C183 = C177 / C98;
    const double C191 = C187 - C188;
    const double C190 = C185 - C186;
    const double C189 = C117 - C183;
    const double C192 = C189 - C122;
    const double C193 = C192 + C184;
    const double C251 = C146 * C175;
    const double C250 = C146 * C173;
    const double C249 = C135 - yB;
    const double C248 = C146 * C172;
    const double C257 = C249 * C176;
    const double C256 = C251 / C98;
    const double C255 = C250 / C98;
    const double C254 = C249 * C174;
    const double C253 = C249 * C171;
    const double C252 = C248 / C98;
    const double C260 = C257 / C98;
    const double C259 = C254 / C98;
    const double C258 = C253 / C98;
    const double C263 = C256 - C260;
    const double C262 = C117 - C259;
    const double C261 = C252 - C258;
    const double C264 = C262 - C122;
    const double C265 = C264 + C255;
    const double C323 = C149 * C175;
    const double C322 = C149 * C173;
    const double C321 = C138 - zB;
    const double C320 = C149 * C172;
    const double C329 = C323 / C98;
    const double C328 = C321 * C176;
    const double C327 = C321 * C174;
    const double C326 = C322 / C98;
    const double C325 = C321 * C171;
    const double C324 = C320 / C98;
    const double C332 = C328 / C98;
    const double C331 = C327 / C98;
    const double C330 = C325 / C98;
    const double C335 = C117 - C332;
    const double C334 = C326 - C331;
    const double C333 = C324 - C330;
    const double C336 = C335 - C122;
    const double C337 = C336 + C329;
    const double C739 = C249 * C337;
    const double C738 = C249 * C334;
    const double C737 = C249 * C333;
    const double C736 = C321 * C175;
    const double C735 = C140 * C337;
    const double C734 = C321 * C173;
    const double C733 = C140 * C334;
    const double C732 = C321 * C172;
    const double C731 = C319 * ae;
    const double C730 = C140 * C333;
    const double C729 = C318 * ae;
    const double C728 = C249 * C175;
    const double C727 = C140 * C263;
    const double C726 = C249 * C173;
    const double C725 = C140 * C265;
    const double C724 = C249 * C172;
    const double C723 = C247 * ae;
    const double C722 = C140 * C261;
    const double C721 = C246 * ae;
    const double C720 = C175 / C98;
    const double C719 = C111 * C154;
    const double C718 = C110 * C127;
    const double C717 = C176 / C133;
    const double C716 = C173 / C98;
    const double C715 = C111 * C153;
    const double C714 = C110 * C125;
    const double C713 = C174 / C133;
    const double C712 = C172 / C98;
    const double C711 = C111 * C151;
    const double C710 = C110 * C118;
    const double C709 = C97 * ae;
    const double C708 = C171 / C133;
    const double C756 = C736 / C98;
    const double C755 = C734 / C98;
    const double C754 = C732 / C98;
    const double C753 = C731 / C98;
    const double C752 = C729 / C98;
    const double C751 = C728 / C98;
    const double C750 = C726 / C98;
    const double C749 = C724 / C98;
    const double C748 = C723 / C98;
    const double C747 = C721 / C98;
    const double C746 = -C720;
    const double C745 = C718 / C98;
    const double C744 = -C716;
    const double C743 = C714 / C98;
    const double C742 = -C712;
    const double C741 = C710 / C98;
    const double C740 = C709 / C98;
    const double C767 = C752 + C738;
    const double C766 = C122 - C756;
    const double C765 = C752 + C730;
    const double C764 = C122 - C750;
    const double C763 = C747 + C722;
    const double C762 = C746 / C124;
    const double C761 = C745 + C719;
    const double C760 = C744 / C124;
    const double C759 = C743 + C715;
    const double C758 = C742 / C124;
    const double C757 = C741 + C711;
    const double C775 = C767 - C753;
    const double C774 = C766 - C740;
    const double C773 = C765 - C753;
    const double C772 = C764 - C740;
    const double C771 = C763 - C748;
    const double C770 = C761 * C170;
    const double C769 = C759 * C170;
    const double C768 = C757 * C170;
    const double C781 = C149 * C770;
    const double C780 = C149 * C769;
    const double C779 = C149 * C768;
    const double C778 = C146 * C770;
    const double C777 = C146 * C769;
    const double C776 = C146 * C768;
    const double C787 = C781 / C98;
    const double C786 = C780 / C98;
    const double C785 = C779 / C98;
    const double C784 = C778 / C98;
    const double C783 = C777 / C98;
    const double C782 = C776 / C98;
    const double C793 = C774 + C787;
    const double C792 = C786 - C755;
    const double C791 = C785 - C754;
    const double C790 = C784 - C751;
    const double C789 = C772 + C783;
    const double C788 = C782 - C749;
    const double C802 = C146 * C793;
    const double C801 = C146 * C792;
    const double C800 = C146 * C791;
    const double C799 = C142 * C793;
    const double C798 = C142 * C792;
    const double C797 = C142 * C791;
    const double C796 = C142 * C790;
    const double C795 = C142 * C789;
    const double C794 = C142 * C788;
    const double C811 = C739 - C802;
    const double C810 = C775 - C801;
    const double C809 = C737 - C800;
    const double C808 = C735 - C799;
    const double C807 = C733 - C798;
    const double C806 = C773 - C797;
    const double C805 = C727 - C796;
    const double C804 = C725 - C795;
    const double C803 = C771 - C794;
    const double gx100100 =
        (C93 * ae) / C98 + C140 * C193 - C708 - (C96 * ae) / C98 -
        C142 * (C122 - (C140 * C172) / C98 - C740 + (C142 * C768) / C98) -
        C758 - C93 - C103 * C193;
    const double gx100010 = C803 - C246 - C103 * C261;
    const double gx100001 = C806 - C318 - C103 * C333;
    const double gx010100 = C803 - C106 * C193;
    const double gx010010 =
        C249 * C261 - C708 - C146 * C788 - C758 - C106 * C261;
    const double gx010001 = C809 - C106 * C333;
    const double gx001100 = C806 - C107 * C193;
    const double gx001010 = C809 - C107 * C261;
    const double gx001001 =
        C321 * C333 - C708 - C149 * C791 - C758 - C107 * C333;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx100100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += gx100010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += gx100001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += gx010100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += gx010010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += gx010001;
    gx[(Ai + 2) * matrix_size + Bi + 0] += gx001100;
    gx[(Ai + 2) * matrix_size + Bi + 1] += gx001010;
    gx[(Ai + 2) * matrix_size + Bi + 2] += gx001001;
    const double gy100100 = C140 * C190 - C713 -
                            C142 * ((C142 * C769) / C98 - (C140 * C173) / C98) -
                            C760 - C103 * C190;
    const double gy100010 = C804 - C103 * C265;
    const double gy100001 = C807 - C103 * C334;
    const double gy010100 = C804 - C93 - C106 * C190;
    const double gy010010 = C747 + C249 * C265 - C713 - C748 - C146 * C789 -
                            C760 - C246 - C106 * C265;
    const double gy010001 = C810 - C318 - C106 * C334;
    const double gy001100 = C807 - C107 * C190;
    const double gy001010 = C810 - C107 * C265;
    const double gy001001 =
        C321 * C334 - C713 - C149 * C792 - C760 - C107 * C334;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy100100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += gy100010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += gy100001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += gy010100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += gy010010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += gy010001;
    gy[(Ai + 2) * matrix_size + Bi + 0] += gy001100;
    gy[(Ai + 2) * matrix_size + Bi + 1] += gy001010;
    gy[(Ai + 2) * matrix_size + Bi + 2] += gy001001;
    const double gz100100 = C140 * C191 - C717 -
                            C142 * ((C142 * C770) / C98 - (C140 * C175) / C98) -
                            C762 - C103 * C191;
    const double gz100010 = C805 - C103 * C263;
    const double gz100001 = C808 - C103 * C337;
    const double gz010100 = C805 - C106 * C191;
    const double gz010010 =
        C249 * C263 - C717 - C146 * C790 - C762 - C106 * C263;
    const double gz010001 = C811 - C106 * C337;
    const double gz001100 = C808 - C93 - C107 * C191;
    const double gz001010 = C811 - C246 - C107 * C263;
    const double gz001001 = C752 + C321 * C337 - C717 - C753 - C149 * C793 -
                            C762 - C318 - C107 * C337;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz100100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += gz100010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += gz100001;
    gz[(Ai + 1) * matrix_size + Bi + 0] += gz010100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += gz010010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += gz010001;
    gz[(Ai + 2) * matrix_size + Bi + 0] += gz001100;
    gz[(Ai + 2) * matrix_size + Bi + 1] += gz001010;
    gz[(Ai + 2) * matrix_size + Bi + 2] += gz001001;
}
