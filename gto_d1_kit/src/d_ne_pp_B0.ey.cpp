/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_11_2(double ae,
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
    const double C693 = be * zB;
    const double C692 = ae * zA;
    const double C691 = be * C657;
    const double C690 = be * yB;
    const double C689 = ae * yA;
    const double C688 = be * C656;
    const double C687 = bs[2];
    const double C686 = bs[1];
    const double C685 = be * xB;
    const double C684 = ae * xA;
    const double C683 = be * C655;
    const double C698 = C692 + C693;
    const double C697 = C689 + C690;
    const double C696 = C687 * C670;
    const double C695 = C686 * C670;
    const double C694 = C684 + C685;
    const double C701 = C698 / C659;
    const double C700 = C697 / C659;
    const double C699 = C694 / C659;
    const double C704 = C701 - zC;
    const double C703 = C700 - yC;
    const double C702 = C699 - xC;
    const double C93 = (-(C671 * C683) / C659) / C659 - (C702 * C695) / C659 +
                       (C655 * C671) / C659;
    const double C94 = C671 / C659;
    const double C95 = C695 / C659;
    const double C96 = (-(C676 * C683) / C659) / C659 - (C702 * C696) / C659 +
                       (C655 * C676) / C659;
    const double C97 = C696 / C659;
    const double C247 = (-(C671 * C688) / C659) / C659 - (C703 * C676) / C659 +
                        (C656 * C671) / C659;
    const double C248 = (-(C676 * C688) / C659) / C659 - (C703 * C696) / C659 +
                        (C656 * C676) / C659;
    const double C319 = (-(C671 * C691) / C659) / C659 - (C704 * C676) / C659 +
                        (C657 * C671) / C659;
    const double C320 = (-(C676 * C691) / C659) / C659 - (C704 * C696) / C659 +
                        (C657 * C676) / C659;
    const double C114 = be * zB;
    const double C113 = ae * zA;
    const double C112 = be * yB;
    const double C111 = ae * yA;
    const double C110 = bs[3];
    const double C109 = bs[2];
    const double C108 = C95 * be;
    const double C107 = 4 * Pi;
    const double C106 = zA - zB;
    const double C105 = yA - yB;
    const double C104 = ae * be;
    const double C103 = xA - xB;
    const double C102 = bs[0];
    const double C101 = bs[1];
    const double C100 = be * xB;
    const double C99 = ae * xA;
    const double C98 = ae + be;
    const double C127 = C106 * C104;
    const double C126 = C113 + C114;
    const double C125 = C105 * C104;
    const double C124 = C111 + C112;
    const double C123 = 2 * C98;
    const double C122 = std::pow(C98, 2);
    const double C121 = C108 / C98;
    const double C120 = std::pow(C106, 2);
    const double C119 = std::pow(C105, 2);
    const double C118 = std::pow(C103, 2);
    const double C117 = C103 * C104;
    const double C116 = C99 + C100;
    const double C115 = be / C98;
    const double C139 = C102 * C127;
    const double C138 = C101 * C127;
    const double C137 = C126 / C98;
    const double C136 = C102 * C125;
    const double C135 = C101 * C125;
    const double C134 = C124 / C98;
    const double C133 = 2 * C122;
    const double C132 = C101 * C117;
    const double C131 = C118 + C119;
    const double C130 = C102 * C117;
    const double C129 = C116 / C98;
    const double C128 = C115 - 1;
    const double C151 = C139 / C98;
    const double C150 = C138 / C98;
    const double C149 = C137 - zC;
    const double C148 = C136 / C98;
    const double C147 = C135 / C98;
    const double C146 = C134 - yC;
    const double C145 = C132 / C98;
    const double C144 = C131 + C120;
    const double C143 = C130 / C98;
    const double C142 = C129 - xC;
    const double C141 = C128 * C94;
    const double C140 = C129 - xB;
    const double C155 = be * C149;
    const double C154 = be * C146;
    const double C153 = C144 * C104;
    const double C152 = be * C142;
    const double C162 = C101 * C155;
    const double C161 = C109 * C155;
    const double C160 = C101 * C154;
    const double C159 = C109 * C154;
    const double C158 = C109 * C152;
    const double C157 = C153 / C98;
    const double C156 = C101 * C152;
    const double C169 = C162 - C151;
    const double C168 = C161 - C150;
    const double C167 = C160 - C148;
    const double C166 = C159 - C147;
    const double C165 = C158 - C145;
    const double C164 = -C157;
    const double C163 = C156 - C143;
    const double C170 = std::exp(C164);
    const double C171 = C170 * C107;
    const double C177 = C169 * C171;
    const double C176 = C168 * C171;
    const double C175 = C167 * C171;
    const double C174 = C166 * C171;
    const double C173 = C165 * C171;
    const double C172 = C163 * C171;
    const double C183 = C140 * C177;
    const double C182 = C142 * C176;
    const double C181 = C140 * C175;
    const double C180 = C142 * C174;
    const double C179 = C142 * C173;
    const double C178 = C140 * C172;
    const double C189 = C183 / C98;
    const double C188 = C182 / C98;
    const double C187 = C181 / C98;
    const double C186 = C180 / C98;
    const double C185 = C179 / C98;
    const double C184 = C178 / C98;
    const double C192 = C188 - C189;
    const double C191 = C186 - C187;
    const double C190 = C141 - C184;
    const double C193 = C190 - C121;
    const double C194 = C193 + C185;
    const double C252 = C146 * C176;
    const double C251 = C146 * C174;
    const double C250 = C134 - yB;
    const double C249 = C146 * C173;
    const double C258 = C250 * C177;
    const double C257 = C252 / C98;
    const double C256 = C251 / C98;
    const double C255 = C250 * C175;
    const double C254 = C250 * C172;
    const double C253 = C249 / C98;
    const double C261 = C258 / C98;
    const double C260 = C255 / C98;
    const double C259 = C254 / C98;
    const double C264 = C257 - C261;
    const double C263 = C141 - C260;
    const double C262 = C253 - C259;
    const double C265 = C263 - C121;
    const double C266 = C265 + C256;
    const double C324 = C149 * C176;
    const double C323 = C149 * C174;
    const double C322 = C137 - zB;
    const double C321 = C149 * C173;
    const double C330 = C324 / C98;
    const double C329 = C322 * C177;
    const double C328 = C322 * C175;
    const double C327 = C323 / C98;
    const double C326 = C322 * C172;
    const double C325 = C321 / C98;
    const double C333 = C329 / C98;
    const double C332 = C328 / C98;
    const double C331 = C326 / C98;
    const double C336 = C141 - C333;
    const double C335 = C327 - C332;
    const double C334 = C325 - C331;
    const double C337 = C336 - C121;
    const double C338 = C337 + C330;
    const double C741 = C250 * C338;
    const double C740 = C250 * C335;
    const double C739 = C250 * C334;
    const double C738 = C322 * C176;
    const double C737 = C140 * C338;
    const double C736 = C322 * C174;
    const double C735 = C140 * C335;
    const double C734 = C322 * C173;
    const double C733 = C320 * be;
    const double C732 = C140 * C334;
    const double C731 = C128 * C319;
    const double C730 = C250 * C176;
    const double C729 = C140 * C264;
    const double C728 = C250 * C174;
    const double C727 = C140 * C266;
    const double C726 = C250 * C173;
    const double C725 = C248 * be;
    const double C724 = C140 * C262;
    const double C723 = C128 * C247;
    const double C722 = C176 / C98;
    const double C721 = C109 * C127;
    const double C720 = C110 * C155;
    const double C719 = C177 / C133;
    const double C718 = C174 / C98;
    const double C717 = C109 * C125;
    const double C716 = C110 * C154;
    const double C715 = C175 / C133;
    const double C714 = C173 / C98;
    const double C713 = C109 * C117;
    const double C712 = C110 * C152;
    const double C711 = C97 * be;
    const double C710 = C128 * C95;
    const double C709 = C172 / C133;
    const double C759 = C731 + C740;
    const double C758 = C738 / C98;
    const double C757 = C736 / C98;
    const double C756 = C734 / C98;
    const double C755 = C733 / C98;
    const double C754 = C731 + C732;
    const double C753 = C730 / C98;
    const double C752 = C728 / C98;
    const double C751 = C726 / C98;
    const double C750 = C725 / C98;
    const double C749 = C723 + C724;
    const double C748 = -C722;
    const double C747 = C721 / C98;
    const double C746 = -C718;
    const double C745 = C717 / C98;
    const double C744 = -C714;
    const double C743 = C713 / C98;
    const double C742 = C711 / C98;
    const double C770 = C759 - C755;
    const double C769 = C710 - C758;
    const double C768 = C754 - C755;
    const double C767 = C710 - C752;
    const double C766 = C749 - C750;
    const double C765 = C748 / C123;
    const double C764 = C720 - C747;
    const double C763 = C746 / C123;
    const double C762 = C716 - C745;
    const double C761 = C744 / C123;
    const double C760 = C712 - C743;
    const double C775 = C769 - C742;
    const double C774 = C767 - C742;
    const double C773 = C764 * C171;
    const double C772 = C762 * C171;
    const double C771 = C760 * C171;
    const double C781 = C149 * C773;
    const double C780 = C149 * C772;
    const double C779 = C149 * C771;
    const double C778 = C146 * C773;
    const double C777 = C146 * C772;
    const double C776 = C146 * C771;
    const double C787 = C781 / C98;
    const double C786 = C780 / C98;
    const double C785 = C779 / C98;
    const double C784 = C778 / C98;
    const double C783 = C777 / C98;
    const double C782 = C776 / C98;
    const double C793 = C775 + C787;
    const double C792 = C786 - C757;
    const double C791 = C785 - C756;
    const double C790 = C784 - C753;
    const double C789 = C774 + C783;
    const double C788 = C782 - C751;
    const double C802 = C146 * C793;
    const double C801 = C146 * C792;
    const double C800 = C146 * C791;
    const double C799 = C142 * C793;
    const double C798 = C142 * C792;
    const double C797 = C142 * C791;
    const double C796 = C142 * C790;
    const double C795 = C142 * C789;
    const double C794 = C142 * C788;
    const double C811 = C741 - C802;
    const double C810 = C770 - C801;
    const double C809 = C739 - C800;
    const double C808 = C737 - C799;
    const double C807 = C735 - C798;
    const double C806 = C768 - C797;
    const double C805 = C729 - C796;
    const double C804 = C727 - C795;
    const double C803 = C766 - C794;
    const double gx100100 =
        C128 * C93 + C140 * C194 - C709 - (C96 * be) / C98 -
        C142 * (C710 - (C140 * C173) / C98 - C742 + (C142 * C771) / C98) -
        C761 + C93 - C103 * C194;
    const double gx100010 = C803 + C247 - C103 * C262;
    const double gx100001 = C806 + C319 - C103 * C334;
    const double gx010100 = C803 - C105 * C194;
    const double gx010010 =
        C250 * C262 - C709 - C146 * C788 - C761 - C105 * C262;
    const double gx010001 = C809 - C105 * C334;
    const double gx001100 = C806 - C106 * C194;
    const double gx001010 = C809 - C106 * C262;
    const double gx001001 =
        C322 * C334 - C709 - C149 * C791 - C761 - C106 * C334;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx100100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += gx100010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += gx100001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += gx010100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += gx010010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += gx010001;
    gx[(Ai + 2) * matrix_size + Bi + 0] += gx001100;
    gx[(Ai + 2) * matrix_size + Bi + 1] += gx001010;
    gx[(Ai + 2) * matrix_size + Bi + 2] += gx001001;
    const double gy100100 = C140 * C191 - C715 -
                            C142 * ((C142 * C772) / C98 - (C140 * C174) / C98) -
                            C763 - C103 * C191;
    const double gy100010 = C804 - C103 * C266;
    const double gy100001 = C807 - C103 * C335;
    const double gy010100 = C804 + C93 - C105 * C191;
    const double gy010010 = C723 + C250 * C266 - C715 - C750 - C146 * C789 -
                            C763 + C247 - C105 * C266;
    const double gy010001 = C810 + C319 - C105 * C335;
    const double gy001100 = C807 - C106 * C191;
    const double gy001010 = C810 - C106 * C266;
    const double gy001001 =
        C322 * C335 - C715 - C149 * C792 - C763 - C106 * C335;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy100100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += gy100010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += gy100001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += gy010100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += gy010010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += gy010001;
    gy[(Ai + 2) * matrix_size + Bi + 0] += gy001100;
    gy[(Ai + 2) * matrix_size + Bi + 1] += gy001010;
    gy[(Ai + 2) * matrix_size + Bi + 2] += gy001001;
    const double gz100100 = C140 * C192 - C719 -
                            C142 * ((C142 * C773) / C98 - (C140 * C176) / C98) -
                            C765 - C103 * C192;
    const double gz100010 = C805 - C103 * C264;
    const double gz100001 = C808 - C103 * C338;
    const double gz010100 = C805 - C105 * C192;
    const double gz010010 =
        C250 * C264 - C719 - C146 * C790 - C765 - C105 * C264;
    const double gz010001 = C811 - C105 * C338;
    const double gz001100 = C808 + C93 - C106 * C192;
    const double gz001010 = C811 + C247 - C106 * C264;
    const double gz001001 = C731 + C322 * C338 - C719 - C755 - C149 * C793 -
                            C765 + C319 - C106 * C338;
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
