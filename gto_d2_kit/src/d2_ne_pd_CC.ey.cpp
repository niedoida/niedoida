/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_pd_CC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_12_33(double ae,
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
    const double C690 = ae + be;
    const double C689 = ae * be;
    const double C688 = xA - xB;
    const double C694 = C688 * be;
    const double C693 = C688 * ae;
    const double C692 = 2 * C690;
    const double C691 = std::pow(C688, 2);
    const double C695 = C691 * C689;
    const double C696 = C695 / C690;
    const double C697 = -C696;
    const double C698 = std::exp(C697);
    const double C699 = C698 * C693;
    const double C702 = std::pow(C692, -1);
    const double C701 = std::pow(C690, 2);
    const double C703 = C702 * C698;
    const double C705 = 2 * C701;
    const double C708 = yA - yB;
    const double C709 = std::pow(C708, 2);
    const double C710 = C709 * C689;
    const double C711 = C710 / C690;
    const double C712 = -C711;
    const double C713 = std::exp(C712);
    const double C719 = zA - zB;
    const double C720 = std::pow(C719, 2);
    const double C721 = C720 * C689;
    const double C722 = C721 / C690;
    const double C723 = -C722;
    const double C724 = std::exp(C723);
    const double C741 = C708 * be;
    const double C740 = C708 * ae;
    const double C742 = C713 * C740;
    const double C744 = C702 * C713;
    const double C757 = C719 * be;
    const double C756 = C719 * ae;
    const double C758 = C724 * C756;
    const double C760 = C702 * C724;
    const double C788 = C760 * C757;
    const double C787 = C758 / C705;
    const double C786 = C758 * C757;
    const double C785 = C744 * C741;
    const double C784 = C742 / C705;
    const double C783 = C742 * C741;
    const double C782 = C702 * C724;
    const double C781 = C702 * C713;
    const double C780 = C724 / C692;
    const double C779 = C719 * ae;
    const double C778 = std::pow(C692, -2);
    const double C777 = C713 / C692;
    const double C776 = C708 * ae;
    const double C775 = 4 * C701;
    const double C774 = C699 / C705;
    const double C773 = C703 * C694;
    const double C772 = C698 * C694;
    const double C771 = C699 / C690;
    const double C770 = C699 * C694;
    const double C769 = C698 / C692;
    const double C768 = ae + be;
    const double C767 = ae * be;
    const double C797 = C788 / C690;
    const double C796 = C786 / C701;
    const double C795 = C785 / C690;
    const double C794 = C783 / C701;
    const double C793 = C724 * C779;
    const double C792 = C713 * C776;
    const double C791 = C770 / C701;
    const double C790 = C773 / C690;
    const double C789 = C772 / C690;
    const double C803 = C787 - C797;
    const double C802 = C780 - C796;
    const double C801 = C784 - C795;
    const double C800 = C777 - C794;
    const double C799 = C774 - C790;
    const double C798 = C769 - C791;
    const double C59 = std::exp(-(std::pow(zA - zB, 2) * C767) / C768);
    const double C60 = std::exp(-(std::pow(yA - yB, 2) * C767) / C768);
    const double C61 = ((C769 - C770 / std::pow(C690, 2)) * C693) / C690 +
                       (C771 - C789) / C692;
    const double C62 =
        ((C699 / (2 * C701) - C790) * C693) / C690 + (2 * C703 + C798) / C692;
    const double C63 = (C693 * C703) / C705 + C799 / C692;
    const double C64 = C703 / C775;
    const double C229 = (C713 * std::pow(C776, 2)) / C701 + C777;
    const double C230 = (2 * C702 * C792) / C690;
    const double C231 = C778 * C713;
    const double C232 = -C789;
    const double C271 = (C724 * std::pow(C779, 2)) / C701 + C780;
    const double C272 = (2 * C702 * C793) / C690;
    const double C273 = C778 * C724;
    const double C303 = C792 / C690;
    const double C307 = C703 / C692;
    const double C330 = C793 / C690;
    const double C374 = -(C713 * C708 * be) / C690;
    const double C376 = (C698 * std::pow(C693, 2)) / C701 + C769;
    const double C377 = (2 * C702 * C699) / C690;
    const double C378 = C778 * C698;
    const double C399 =
        (C800 * C740) / C690 + (C742 / C690 - (C713 * C741) / C690) / C692;
    const double C400 = (C801 * C740) / C690 + (2 * C744 + C800) / C692;
    const double C401 = (C740 * C744) / C705 + C801 / C692;
    const double C402 = C744 / C775;
    const double C483 = C744 / C692;
    const double C550 = -(C724 * C719 * be) / C690;
    const double C592 =
        (C802 * C756) / C690 + (C758 / C690 - (C724 * C757) / C690) / C692;
    const double C593 = (C803 * C756) / C690 + (2 * C760 + C802) / C692;
    const double C594 = (C756 * C760) / C705 + C803 / C692;
    const double C595 = C760 / C775;
    const double C663 = C760 / C692;
    const double C76 = be * zB;
    const double C75 = ae * zA;
    const double C74 = be * yB;
    const double C73 = ae * yA;
    const double C72 = bs[5];
    const double C71 = bs[4];
    const double C70 = bs[3];
    const double C69 = bs[1];
    const double C68 = bs[2];
    const double C67 = ae + be;
    const double C66 = be * xB;
    const double C65 = ae * xA;
    const double C80 = C75 + C76;
    const double C79 = C73 + C74;
    const double C78 = 2 * C67;
    const double C77 = C65 + C66;
    const double C87 = C80 / C67;
    const double C86 = C79 / C67;
    const double C85 = std::pow(C78, 4);
    const double C84 = -C78;
    const double C83 = C69 * C78;
    const double C82 = std::pow(C78, 2);
    const double C81 = C77 / C67;
    const double C94 = C87 - zC;
    const double C93 = C86 - yC;
    const double C92 = std::pow(C84, 5);
    const double C91 = C71 * C85;
    const double C90 = std::pow(C84, 3);
    const double C89 = C68 * C82;
    const double C88 = C81 - xC;
    const double C107 = std::pow(C94, 2);
    const double C106 = C94 * C93;
    const double C105 = C94 * C88;
    const double C104 = C93 * C94;
    const double C103 = std::pow(C93, 2);
    const double C102 = C93 * C88;
    const double C101 = C67 * C94;
    const double C100 = C88 * C94;
    const double C99 = C67 * C93;
    const double C98 = C88 * C93;
    const double C97 = C70 * C90;
    const double C96 = C67 * C88;
    const double C95 = std::pow(C88, 2);
    const double C134 = C107 * C71;
    const double C133 = C107 * C70;
    const double C132 = C106 * C71;
    const double C131 = C106 * C70;
    const double C130 = C105 * C71;
    const double C129 = C105 * C70;
    const double C128 = C104 * C71;
    const double C127 = C104 * C70;
    const double C126 = C103 * C71;
    const double C125 = C103 * C70;
    const double C124 = C102 * C71;
    const double C123 = C102 * C70;
    const double C122 = C101 * C71;
    const double C121 = C100 * C71;
    const double C120 = C101 * C70;
    const double C119 = C100 * C70;
    const double C118 = C101 * C68;
    const double C117 = C99 * C71;
    const double C116 = C98 * C71;
    const double C115 = C99 * C70;
    const double C114 = C98 * C70;
    const double C113 = C99 * C68;
    const double C112 = C96 * C71;
    const double C111 = C88 * C97;
    const double C110 = C95 * C71;
    const double C109 = C96 * C70;
    const double C108 = C95 * C70;
    const double C160 = C134 * C85;
    const double C159 = C133 * C90;
    const double C158 = C132 * C85;
    const double C157 = C131 * C90;
    const double C156 = C130 * C85;
    const double C155 = C129 * C90;
    const double C154 = C128 * C85;
    const double C153 = C127 * C90;
    const double C152 = C126 * C85;
    const double C151 = C125 * C90;
    const double C150 = C124 * C85;
    const double C149 = C123 * C90;
    const double C148 = C122 * C90;
    const double C147 = C121 * C85;
    const double C146 = C120 * C82;
    const double C145 = C119 * C90;
    const double C144 = C118 * C78;
    const double C143 = C117 * C90;
    const double C142 = C116 * C85;
    const double C141 = C115 * C82;
    const double C140 = C114 * C90;
    const double C139 = C113 * C78;
    const double C138 = C112 * C90;
    const double C137 = C110 * C85;
    const double C136 = C109 * C82;
    const double C135 = C108 * C90;
    const double C185 = C97 + C160;
    const double C184 = C89 + C159;
    const double C183 = C88 * C156;
    const double C182 = C97 + C152;
    const double C181 = C89 + C151;
    const double C180 = C88 * C150;
    const double C179 = -2 * C148;
    const double C178 = 2 * C148;
    const double C177 = C148 * C95;
    const double C176 = C88 * C147;
    const double C175 = -2 * C146;
    const double C174 = 2 * C146;
    const double C173 = 2 * C144;
    const double C172 = -2 * C143;
    const double C171 = 2 * C143;
    const double C170 = C143 * C95;
    const double C169 = C88 * C142;
    const double C168 = -2 * C141;
    const double C167 = 2 * C141;
    const double C166 = 2 * C139;
    const double C165 = 2 * C138;
    const double C164 = C97 + C137;
    const double C163 = -4 * C136;
    const double C162 = 2 * C136;
    const double C161 = C89 + C135;
    const double C198 = C175 + C183;
    const double C197 = C168 + C180;
    const double C196 = C88 * C178;
    const double C195 = 2 * C177;
    const double C194 = C175 + C176;
    const double C193 = C88 * C174;
    const double C192 = C88 * C171;
    const double C191 = 2 * C170;
    const double C190 = C168 + C169;
    const double C189 = C88 * C167;
    const double C188 = C88 * C165;
    const double C187 = C88 * C164;
    const double C186 = C88 * C162;
    const double C204 = C174 + C195;
    const double C203 = C167 + C191;
    const double C202 = C97 - C188;
    const double C201 = C188 - C97;
    const double C200 = C163 + C187;
    const double C199 = C89 - C186;
    const double C205 = C88 * C201;
    const double C206 = C162 + C205;
    const double C207 = C111 - C206;
    const double C245 = C88 * C185;
    const double C244 = C88 * C158;
    const double C243 = C93 * C196;
    const double C242 = C88 * C154;
    const double C241 = C93 * C174;
    const double C240 = C93 * C192;
    const double C239 = C88 * C182;
    const double C238 = C93 * C167;
    const double C237 = C93 * C201;
    const double C236 = -2 * C136;
    const double C235 = C93 * C162;
    const double C234 = C96 * C68;
    const double C248 = C111 - C240;
    const double C247 = C89 - C238;
    const double C246 = C234 * C78;
    const double C249 = 2 * C246;
    const double C279 = C94 * C196;
    const double C278 = C94 * C174;
    const double C277 = C94 * C192;
    const double C276 = C94 * C167;
    const double C275 = C94 * C201;
    const double C274 = C94 * C162;
    const double C281 = C111 - C279;
    const double C280 = C89 - C278;
    const double C308 = C93 * C164;
    const double C332 = C94 * C164;
    const double C416 = C93 * C158;
    const double C415 = C93 * C178;
    const double C414 = C148 * C103;
    const double C413 = C93 * C154;
    const double C412 = C93 * C171;
    const double C411 = C93 * C97;
    const double C410 = C93 * C182;
    const double C409 = -4 * C141;
    const double C408 = C93 * C150;
    const double C407 = -2 * C138;
    const double C406 = C93 * C165;
    const double C405 = C138 * C103;
    const double C404 = C93 * C142;
    const double C425 = C175 + C416;
    const double C424 = 2 * C414;
    const double C423 = C175 + C413;
    const double C422 = C97 - C412;
    const double C421 = C412 - C97;
    const double C420 = C409 + C410;
    const double C419 = C236 + C408;
    const double C418 = 2 * C405;
    const double C417 = C236 + C404;
    const double C428 = C174 + C424;
    const double C427 = C93 * C421;
    const double C426 = C162 + C418;
    const double C429 = C167 + C427;
    const double C430 = C411 - C429;
    const double C457 = C94 * C415;
    const double C456 = C93 * C185;
    const double C455 = C93 * C156;
    const double C454 = C94 * C154;
    const double C453 = C94 * C406;
    const double C452 = C93 * C147;
    const double C459 = C411 - C457;
    const double C458 = C168 + C454;
    const double C528 = C94 * C421;
    const double C527 = C94 * C182;
    const double C526 = C94 * C150;
    const double C606 = C94 * C178;
    const double C605 = C94 * C97;
    const double C604 = C94 * C185;
    const double C603 = -4 * C146;
    const double C602 = C94 * C158;
    const double C601 = C94 * C156;
    const double C600 = C94 * C171;
    const double C599 = C143 * C107;
    const double C598 = C94 * C165;
    const double C597 = C138 * C107;
    const double C596 = C94 * C147;
    const double C614 = C97 - C606;
    const double C613 = C606 - C97;
    const double C612 = C603 + C604;
    const double C611 = C168 + C602;
    const double C610 = C236 + C601;
    const double C609 = 2 * C599;
    const double C608 = 2 * C597;
    const double C607 = C236 + C596;
    const double C617 = C94 * C613;
    const double C616 = C167 + C609;
    const double C615 = C162 + C608;
    const double C618 = C174 + C617;
    const double C619 = C605 - C618;
    const double C971 = -2 * C428;
    const double C970 = C458 + C459;
    const double C969 = -2 * C600;
    const double C968 = C527 - C528;
    const double C967 = C526 - C453;
    const double C966 = -2 * C415;
    const double C965 = C456 + C459;
    const double C964 = C425 - C528;
    const double C963 = C455 - C453;
    const double C962 = C154 - C600;
    const double C961 = -2 * C616;
    const double C960 = C452 - C453;
    const double C959 = C158 - C415;
    const double C958 = C142 - C406;
    const double C957 = -2 * C243;
    const double C956 = C94 * C456;
    const double C955 = -2 * C241;
    const double C954 = C94 * C425;
    const double C953 = C94 * C455;
    const double C952 = C93 * C458;
    const double C951 = -2 * C277;
    const double C950 = C93 * C527;
    const double C949 = -2 * C276;
    const double C948 = C93 * C526;
    const double C947 = C94 * C452;
    const double C946 = C94 * C417;
    const double C945 = -2 * C453;
    const double C944 = C94 * C308;
    const double C943 = -2 * C204;
    const double C942 = -2 * C598;
    const double C941 = C332 - C275;
    const double C940 = -2 * C203;
    const double C939 = -2 * C406;
    const double C938 = C308 - C237;
    const double C937 = -2 * C196;
    const double C936 = C245 + C281;
    const double C935 = C94 * C245;
    const double C934 = -2 * C193;
    const double C933 = C94 * C612;
    const double C932 = C184 + C280;
    const double C931 = C94 * C184;
    const double C930 = 4 * C144;
    const double C929 = C244 - C277;
    const double C928 = C94 * C244;
    const double C927 = C94 * C611;
    const double C926 = C157 - C276;
    const double C925 = C94 * C157;
    const double C924 = C198 - C275;
    const double C923 = C94 * C198;
    const double C922 = C94 * C610;
    const double C921 = C155 - C274;
    const double C920 = C94 * C155;
    const double C919 = C242 - C277;
    const double C918 = C94 * C242;
    const double C917 = C94 * C458;
    const double C916 = C153 - C276;
    const double C915 = C94 * C153;
    const double C914 = C94 * C239;
    const double C913 = C182 * C107;
    const double C912 = C94 * C181;
    const double C911 = C94 * C197;
    const double C910 = C150 * C107;
    const double C909 = C94 * C149;
    const double C908 = C194 - C275;
    const double C907 = C94 * C194;
    const double C906 = C94 * C607;
    const double C905 = C145 - C274;
    const double C904 = C94 * C145;
    const double C903 = C94 * C190;
    const double C902 = C142 * C107;
    const double C901 = C94 * C140;
    const double C900 = -2 * C615;
    const double C899 = C88 * C332;
    const double C898 = -2 * C274;
    const double C897 = C164 * C107;
    const double C896 = C94 * C161;
    const double C895 = C93 * C245;
    const double C894 = C185 * C103;
    const double C893 = C93 * C184;
    const double C892 = C244 - C243;
    const double C891 = C93 * C244;
    const double C890 = C93 * C425;
    const double C889 = C157 - C241;
    const double C888 = C93 * C157;
    const double C887 = C93 * C198;
    const double C886 = C156 * C103;
    const double C885 = C93 * C155;
    const double C884 = C242 - C243;
    const double C883 = C93 * C242;
    const double C882 = C93 * C423;
    const double C881 = C153 - C241;
    const double C880 = C93 * C153;
    const double C879 = -2 * C192;
    const double C878 = C239 + C248;
    const double C877 = C93 * C239;
    const double C876 = -2 * C189;
    const double C875 = C93 * C420;
    const double C874 = C181 + C247;
    const double C873 = C93 * C181;
    const double C872 = 4 * C139;
    const double C871 = C197 - C237;
    const double C870 = C93 * C197;
    const double C869 = C93 * C419;
    const double C868 = C149 - C235;
    const double C867 = C93 * C149;
    const double C866 = C93 * C194;
    const double C865 = C147 * C103;
    const double C864 = C93 * C145;
    const double C863 = C190 - C237;
    const double C862 = C93 * C190;
    const double C861 = C93 * C417;
    const double C860 = C140 - C235;
    const double C859 = C93 * C140;
    const double C858 = -2 * C426;
    const double C857 = C88 * C308;
    const double C856 = -2 * C235;
    const double C855 = C164 * C103;
    const double C854 = C93 * C161;
    const double C853 = C107 * C72;
    const double C852 = C185 * C95;
    const double C851 = C88 * C184;
    const double C850 = C107 * C68;
    const double C849 = C106 * C72;
    const double C848 = C158 * C95;
    const double C847 = C88 * C157;
    const double C846 = C106 * C68;
    const double C845 = C105 * C72;
    const double C844 = C156 - C196;
    const double C843 = C88 * C198;
    const double C842 = C155 - C193;
    const double C841 = C88 * C155;
    const double C840 = C105 * C68;
    const double C839 = C104 * C72;
    const double C838 = C154 * C95;
    const double C837 = C88 * C153;
    const double C836 = C104 * C68;
    const double C835 = C103 * C72;
    const double C834 = C182 * C95;
    const double C833 = C88 * C181;
    const double C832 = C103 * C68;
    const double C831 = C102 * C72;
    const double C830 = C150 - C192;
    const double C829 = C88 * C197;
    const double C828 = C149 - C189;
    const double C827 = C88 * C149;
    const double C826 = C102 * C68;
    const double C825 = C100 * C72;
    const double C824 = C147 - C196;
    const double C823 = C88 * C194;
    const double C822 = C145 - C193;
    const double C821 = C88 * C145;
    const double C820 = C100 * C68;
    const double C819 = C98 * C72;
    const double C818 = C142 - C192;
    const double C817 = C88 * C190;
    const double C816 = C140 - C189;
    const double C815 = C88 * C140;
    const double C814 = C98 * C68;
    const double C813 = C95 * C72;
    const double C812 = C88 * C200;
    const double C811 = C161 + C199;
    const double C810 = C88 * C161;
    const double C809 = 4 * C246;
    const double C808 = C95 * C68;
    const double C1103 = C803 * C912;
    const double C1102 = C803 * C909;
    const double C1101 = C803 * C901;
    const double C1100 = C803 * C896;
    const double C1099 = C550 * C893;
    const double C1098 = C550 * C885;
    const double C1097 = C550 * C864;
    const double C1096 = C550 * C854;
    const double C1095 = C550 * C851;
    const double C1094 = C550 * C847;
    const double C1093 = C550 * C837;
    const double C1092 = C550 * C833;
    const double C1091 = C968 - C528;
    const double C1090 = C965 + C459;
    const double C1089 = C330 * C895;
    const double C1088 = C955 + C956;
    const double C1087 = C330 * C893;
    const double C1086 = C247 + C954;
    const double C1085 = C330 * C887;
    const double C1084 = C953 - C235;
    const double C1083 = C330 * C885;
    const double C1082 = C280 + C952;
    const double C1081 = C949 + C950;
    const double C1080 = C948 - C274;
    const double C1079 = C330 * C866;
    const double C1078 = C947 - C235;
    const double C1077 = C330 * C864;
    const double C1076 = C782 * C946;
    const double C1075 = C782 * C944;
    const double C1074 = C330 * C854;
    const double C1073 = C330 * C851;
    const double C1072 = C330 * C847;
    const double C1071 = C330 * C837;
    const double C1070 = C782 * C914;
    const double C1069 = C330 * C833;
    const double C1068 = C782 * C912;
    const double C1067 = C782 * C911;
    const double C1066 = C782 * C909;
    const double C1065 = C782 * C903;
    const double C1064 = C782 * C901;
    const double C1063 = C941 - C275;
    const double C1062 = C782 * C896;
    const double C1061 = C938 - C237;
    const double C1060 = C936 + C281;
    const double C1059 = C934 + C935;
    const double C1058 = C932 + C280;
    const double C1057 = C930 + C931;
    const double C1056 = C928 - C189;
    const double C1055 = C926 + C927;
    const double C1054 = C166 + C925;
    const double C1053 = C199 + C923;
    const double C1052 = C921 + C922;
    const double C1051 = C249 + C920;
    const double C1050 = C918 - C189;
    const double C1049 = C916 + C917;
    const double C1048 = C166 + C915;
    const double C1047 = C181 + C913;
    const double C1046 = C272 * C912;
    const double C1045 = C149 + C910;
    const double C1044 = C272 * C909;
    const double C1043 = C199 + C907;
    const double C1042 = C905 + C906;
    const double C1041 = C249 + C904;
    const double C1040 = C140 + C902;
    const double C1039 = C272 * C901;
    const double C1038 = C898 + C899;
    const double C1037 = C161 + C897;
    const double C1036 = C272 * C896;
    const double C1035 = C59 * C895;
    const double C1034 = C184 + C894;
    const double C1033 = C59 * C893;
    const double C1032 = C891 - C193;
    const double C1031 = C889 + C890;
    const double C1030 = C173 + C888;
    const double C1029 = C59 * C887;
    const double C1028 = C155 + C886;
    const double C1027 = C59 * C885;
    const double C1026 = C883 - C193;
    const double C1025 = C881 + C882;
    const double C1024 = C173 + C880;
    const double C1023 = C878 + C248;
    const double C1022 = C876 + C877;
    const double C1021 = C874 + C247;
    const double C1020 = C872 + C873;
    const double C1019 = C199 + C870;
    const double C1018 = C868 + C869;
    const double C1017 = C249 + C867;
    const double C1016 = C59 * C866;
    const double C1015 = C145 + C865;
    const double C1014 = C59 * C864;
    const double C1013 = C199 + C862;
    const double C1012 = C860 + C861;
    const double C1011 = C249 + C859;
    const double C1010 = C856 + C857;
    const double C1009 = C161 + C855;
    const double C1008 = C59 * C854;
    const double C1007 = C853 * C92;
    const double C1006 = C184 + C852;
    const double C1005 = C59 * C851;
    const double C1004 = C850 * C82;
    const double C1003 = C849 * C92;
    const double C1002 = C157 + C848;
    const double C1001 = C59 * C847;
    const double C1000 = C846 * C82;
    const double C999 = C845 * C92;
    const double C998 = C842 + C843;
    const double C997 = C173 + C841;
    const double C996 = C840 * C82;
    const double C995 = C839 * C92;
    const double C994 = C153 + C838;
    const double C993 = C59 * C837;
    const double C992 = C836 * C82;
    const double C991 = C835 * C92;
    const double C990 = C181 + C834;
    const double C989 = C59 * C833;
    const double C988 = C832 * C82;
    const double C987 = C831 * C92;
    const double C986 = C828 + C829;
    const double C985 = C166 + C827;
    const double C984 = C826 * C82;
    const double C983 = C825 * C92;
    const double C982 = C822 + C823;
    const double C981 = C173 + C821;
    const double C980 = C820 * C82;
    const double C979 = C819 * C92;
    const double C978 = C816 + C817;
    const double C977 = C166 + C815;
    const double C976 = C814 * C82;
    const double C975 = C813 * C92;
    const double C974 = C811 + C199;
    const double C973 = C809 + C810;
    const double C972 = C808 * C82;
    const double C1272 = C803 * C1057;
    const double C1271 = C663 * C1055;
    const double C1270 = C803 * C1054;
    const double C1269 = C802 * C1000;
    const double C1268 = C663 * C1052;
    const double C1267 = C803 * C1051;
    const double C1266 = C802 * C996;
    const double C1265 = C663 * C1049;
    const double C1264 = C803 * C1048;
    const double C1263 = C802 * C992;
    const double C1262 = C663 * C1047;
    const double C1261 = C663 * C1045;
    const double C1260 = C802 * C984;
    const double C1259 = C663 * C1042;
    const double C1258 = C803 * C1041;
    const double C1257 = C802 * C980;
    const double C1256 = C663 * C1040;
    const double C1255 = C802 * C976;
    const double C1254 = C663 * C1037;
    const double C1253 = C550 * C1030;
    const double C1252 = C550 * C1024;
    const double C1251 = C550 * C1020;
    const double C1250 = C550 * C1017;
    const double C1249 = C550 * C1011;
    const double C1248 = C1096 + C1075;
    const double C1247 = C550 * C1000;
    const double C1246 = C550 * C997;
    const double C1245 = C550 * C996;
    const double C1244 = C550 * C992;
    const double C1243 = C1092 + C1070;
    const double C1242 = C550 * C985;
    const double C1241 = C550 * C984;
    const double C1240 = C550 * C981;
    const double C1239 = C550 * C980;
    const double C1238 = C550 * C977;
    const double C1237 = C550 * C976;
    const double C1236 = C550 * C973;
    const double C1235 = C94 * C987;
    const double C1234 = C93 * C999;
    const double C1233 = C94 * C995;
    const double C1232 = C987 * C107;
    const double C1231 = C93 * C983;
    const double C1230 = C93 * C1003;
    const double C1229 = C999 * C103;
    const double C1228 = C983 * C103;
    const double C1227 = C93 * C979;
    const double C1226 = C782 * C1088;
    const double C1225 = C330 * C1032;
    const double C1224 = C782 * C1086;
    const double C1223 = C330 * C1030;
    const double C1222 = C782 * C1084;
    const double C1221 = C330 * C1026;
    const double C1220 = C782 * C1082;
    const double C1219 = C330 * C1024;
    const double C1218 = C330 * C1022;
    const double C1217 = C782 * C1081;
    const double C1216 = C330 * C1020;
    const double C1215 = C330 * C1019;
    const double C1214 = C782 * C1080;
    const double C1213 = C330 * C1017;
    const double C1212 = C782 * C1078;
    const double C1211 = C330 * C1013;
    const double C1210 = C330 * C1011;
    const double C1209 = C330 * C1010;
    const double C1208 = C1074 + C1075;
    const double C1207 = C782 * C1059;
    const double C1206 = C782 * C1057;
    const double C1205 = C782 * C1056;
    const double C1204 = C782 * C1054;
    const double C1203 = C330 * C1000;
    const double C1202 = C782 * C1053;
    const double C1201 = C330 * C997;
    const double C1200 = C782 * C1051;
    const double C1199 = C330 * C996;
    const double C1198 = C782 * C1050;
    const double C1197 = C782 * C1048;
    const double C1196 = C330 * C992;
    const double C1195 = C1069 + C1070;
    const double C1194 = C330 * C985;
    const double C1193 = C330 * C984;
    const double C1192 = C782 * C1043;
    const double C1191 = C330 * C981;
    const double C1190 = C782 * C1041;
    const double C1189 = C330 * C980;
    const double C1188 = C330 * C977;
    const double C1187 = C330 * C976;
    const double C1186 = C782 * C1038;
    const double C1185 = C330 * C973;
    const double C1184 = C1035 * C781;
    const double C1183 = C1033 * C781;
    const double C1182 = C1029 * C781;
    const double C1181 = C1027 * C781;
    const double C1180 = C1016 * C781;
    const double C1179 = C1014 * C781;
    const double C1178 = C1008 * C781;
    const double C1177 = C1058 + C933;
    const double C1176 = C272 * C1057;
    const double C1175 = C273 * C1055;
    const double C1174 = C272 * C1054;
    const double C1173 = C271 * C1000;
    const double C1172 = C273 * C1052;
    const double C1171 = C272 * C1051;
    const double C1170 = C271 * C996;
    const double C1169 = C273 * C1049;
    const double C1168 = C272 * C1048;
    const double C1167 = C271 * C992;
    const double C1166 = C273 * C1047;
    const double C1165 = C273 * C1045;
    const double C1164 = C271 * C984;
    const double C1163 = C273 * C1042;
    const double C1162 = C272 * C1041;
    const double C1161 = C271 * C980;
    const double C1160 = C273 * C1040;
    const double C1159 = C271 * C976;
    const double C1158 = C273 * C1037;
    const double C1157 = C59 * C1034;
    const double C1156 = C88 * C1003;
    const double C1155 = C59 * C1032;
    const double C1154 = C59 * C1031;
    const double C1153 = C59 * C1030;
    const double C1152 = C59 * C1028;
    const double C1151 = C88 * C995;
    const double C1150 = C59 * C1026;
    const double C1149 = C59 * C1025;
    const double C1148 = C59 * C1024;
    const double C1147 = C59 * C1022;
    const double C1146 = C1021 + C875;
    const double C1145 = C59 * C1020;
    const double C1144 = C59 * C1019;
    const double C1143 = C59 * C1018;
    const double C1142 = C59 * C1017;
    const double C1141 = C59 * C1015;
    const double C1140 = C59 * C1013;
    const double C1139 = C59 * C1012;
    const double C1138 = C59 * C1011;
    const double C1137 = C59 * C1010;
    const double C1136 = C59 * C1009;
    const double C1135 = C91 + C1007;
    const double C1134 = C59 * C1006;
    const double C1133 = C1004 - C83;
    const double C1132 = C1003 * C95;
    const double C1131 = C59 * C1002;
    const double C1130 = C59 * C1000;
    const double C1129 = C88 * C999;
    const double C1128 = C59 * C998;
    const double C1127 = C59 * C997;
    const double C1126 = C59 * C996;
    const double C1125 = C995 * C95;
    const double C1124 = C59 * C994;
    const double C1123 = C59 * C992;
    const double C1122 = C91 + C991;
    const double C1121 = C59 * C990;
    const double C1120 = C988 - C83;
    const double C1119 = C88 * C987;
    const double C1118 = C59 * C986;
    const double C1117 = C59 * C985;
    const double C1116 = C59 * C984;
    const double C1115 = C88 * C983;
    const double C1114 = C59 * C982;
    const double C1113 = C59 * C981;
    const double C1112 = C59 * C980;
    const double C1111 = C88 * C979;
    const double C1110 = C59 * C978;
    const double C1109 = C59 * C977;
    const double C1108 = C59 * C976;
    const double C1107 = C91 + C975;
    const double C1106 = C974 + C812;
    const double C1105 = C59 * C973;
    const double C1104 = C972 - C83;
    const double C1390 = C663 * C1177;
    const double C1389 = C802 * C1133;
    const double C1388 = C1269 + C1270;
    const double C1387 = C1266 + C1267;
    const double C1386 = C1263 + C1264;
    const double C1385 = C802 * C1120;
    const double C1384 = C1260 + C1102;
    const double C1383 = C1257 + C1258;
    const double C1382 = C1255 + C1101;
    const double C1381 = C802 * C1104;
    const double C1380 = C1099 + C1226;
    const double C1379 = C1253 + C1224;
    const double C1378 = C1098 + C1222;
    const double C1377 = C1252 + C1220;
    const double C1376 = C1251 + C1217;
    const double C1375 = C1250 + C1214;
    const double C1374 = C1097 + C1212;
    const double C1373 = C1249 + C1076;
    const double C1372 = C1095 + C1207;
    const double C1371 = C550 * C1133;
    const double C1370 = C1094 + C1205;
    const double C1369 = C1247 + C1204;
    const double C1368 = C1246 + C1202;
    const double C1367 = C1245 + C1200;
    const double C1366 = C1093 + C1198;
    const double C1365 = C1244 + C1197;
    const double C1364 = C550 * C1120;
    const double C1363 = C1242 + C1067;
    const double C1362 = C1241 + C1066;
    const double C1361 = C1240 + C1192;
    const double C1360 = C1239 + C1190;
    const double C1359 = C1238 + C1065;
    const double C1358 = C1237 + C1064;
    const double C1357 = C1236 + C1186;
    const double C1356 = C550 * C1104;
    const double C1355 = C94 * C1122;
    const double C1354 = C93 * C1235;
    const double C1353 = C93 * C1135;
    const double C1352 = C94 * C1234;
    const double C1351 = C172 + C1233;
    const double C1350 = C1122 * C107;
    const double C1349 = C150 + C1232;
    const double C1348 = C94 * C1231;
    const double C1347 = C1135 * C103;
    const double C1346 = C179 + C1230;
    const double C1345 = C156 + C1229;
    const double C1344 = C147 + C1228;
    const double C1343 = C407 + C1227;
    const double C1342 = C1087 + C1226;
    const double C1341 = C1223 + C1224;
    const double C1340 = C1083 + C1222;
    const double C1339 = C1219 + C1220;
    const double C1338 = C1216 + C1217;
    const double C1337 = C1213 + C1214;
    const double C1336 = C1077 + C1212;
    const double C1335 = C1210 + C1076;
    const double C1334 = C1208 * C781;
    const double C1333 = C1073 + C1207;
    const double C1332 = C330 * C1133;
    const double C1331 = C1072 + C1205;
    const double C1330 = C1203 + C1204;
    const double C1329 = C1201 + C1202;
    const double C1328 = C1199 + C1200;
    const double C1327 = C1071 + C1198;
    const double C1326 = C1196 + C1197;
    const double C1325 = C330 * C1120;
    const double C1324 = C1194 + C1067;
    const double C1323 = C1193 + C1066;
    const double C1322 = C1191 + C1192;
    const double C1321 = C1189 + C1190;
    const double C1320 = C1188 + C1065;
    const double C1319 = C1187 + C1064;
    const double C1318 = C94 * C1107;
    const double C1317 = C1185 + C1186;
    const double C1316 = C330 * C1104;
    const double C1315 = C1155 * C781;
    const double C1314 = C1153 * C781;
    const double C1313 = C1150 * C781;
    const double C1312 = C1148 * C781;
    const double C1311 = C1147 * C781;
    const double C1310 = C1145 * C781;
    const double C1309 = C1144 * C781;
    const double C1308 = C1142 * C781;
    const double C1307 = C1140 * C781;
    const double C1306 = C1138 * C781;
    const double C1305 = C93 * C1107;
    const double C1304 = C1137 * C781;
    const double C1303 = C273 * C1177;
    const double C1302 = C271 * C1133;
    const double C1301 = C94 * C1156;
    const double C1300 = C1173 + C1174;
    const double C1299 = C1170 + C1171;
    const double C1298 = C94 * C1151;
    const double C1297 = C1167 + C1168;
    const double C1296 = C271 * C1120;
    const double C1295 = C1164 + C1044;
    const double C1294 = C1161 + C1162;
    const double C1293 = C1159 + C1039;
    const double C1292 = C1107 * C107;
    const double C1291 = C271 * C1104;
    const double C1290 = C88 * C1135;
    const double C1289 = C93 * C1156;
    const double C1288 = C93 * C1151;
    const double C1287 = C88 * C1122;
    const double C1286 = C59 * C1146;
    const double C1285 = C1107 * C103;
    const double C1284 = C1135 * C95;
    const double C1283 = C59 * C1133;
    const double C1282 = C158 + C1132;
    const double C1281 = C179 + C1129;
    const double C1280 = C154 + C1125;
    const double C1279 = C1122 * C95;
    const double C1278 = C59 * C1120;
    const double C1277 = C172 + C1119;
    const double C1276 = C179 + C1115;
    const double C1275 = C172 + C1111;
    const double C1274 = C59 * C1106;
    const double C1273 = C59 * C1104;
    const double C1475 = C1389 + C1272;
    const double C1474 = C1388 + C1271;
    const double C1473 = C1387 + C1268;
    const double C1472 = C1386 + C1265;
    const double C1471 = C1385 + C1103;
    const double C1470 = C1384 + C1261;
    const double C1469 = C1383 + C1259;
    const double C1468 = C1382 + C1256;
    const double C1467 = C1381 + C1100;
    const double C1466 = C1371 + C1206;
    const double C1465 = C1364 + C1068;
    const double C1464 = C1356 + C1062;
    const double C1463 = C94 * C1345;
    const double C1462 = C93 * C1351;
    const double C1461 = C93 * C1355;
    const double C1460 = C1354 - C598;
    const double C1459 = C94 * C1344;
    const double C1458 = C94 * C1353;
    const double C1457 = C94 * C1346;
    const double C1456 = C1352 - C406;
    const double C1455 = C94 * C1351;
    const double C1454 = C182 + C1350;
    const double C1453 = C93 * C1349;
    const double C1452 = C1348 - C406;
    const double C1451 = C1343 * C107;
    const double C1450 = C1305 * C107;
    const double C1449 = C185 + C1347;
    const double C1448 = C93 * C1346;
    const double C1447 = C93 * C1343;
    const double C1446 = C93 * C1290;
    const double C1445 = C1342 * C781;
    const double C1444 = C1341 * C781;
    const double C1443 = C93 * C1281;
    const double C1442 = C1340 * C781;
    const double C1441 = C1339 * C781;
    const double C1440 = C94 * C1287;
    const double C1439 = C1338 * C781;
    const double C1438 = C94 * C1277;
    const double C1437 = C1337 * C781;
    const double C1436 = C93 * C1276;
    const double C1435 = C1336 * C781;
    const double C1434 = C1335 * C781;
    const double C1433 = C94 * C1305;
    const double C1432 = C1332 + C1206;
    const double C1431 = C94 * C1282;
    const double C1430 = C94 * C1280;
    const double C1429 = C1325 + C1068;
    const double C1428 = C88 * C1318;
    const double C1427 = C1316 + C1062;
    const double C1426 = C93 * C1282;
    const double C1425 = C93 * C1280;
    const double C1424 = C88 * C1305;
    const double C1423 = C94 * C1290;
    const double C1422 = C1302 + C1176;
    const double C1421 = C1301 - C192;
    const double C1420 = C1300 + C1175;
    const double C1419 = C94 * C1281;
    const double C1418 = C1299 + C1172;
    const double C1417 = C1298 - C192;
    const double C1416 = C1297 + C1169;
    const double C1415 = C1287 * C107;
    const double C1414 = C1296 + C1046;
    const double C1413 = C1277 * C107;
    const double C1412 = C1295 + C1165;
    const double C1411 = C94 * C1276;
    const double C1410 = C1294 + C1163;
    const double C1409 = C1275 * C107;
    const double C1408 = C1293 + C1160;
    const double C1407 = C164 + C1292;
    const double C1406 = C1291 + C1036;
    const double C1405 = C1290 * C103;
    const double C1404 = C1289 - C196;
    const double C1403 = C1281 * C103;
    const double C1402 = C1288 - C196;
    const double C1401 = C93 * C1287;
    const double C1400 = C93 * C1277;
    const double C1399 = C1276 * C103;
    const double C1398 = C93 * C1275;
    const double C1397 = C164 + C1285;
    const double C1396 = C185 + C1284;
    const double C1395 = C88 * C1281;
    const double C1394 = C182 + C1279;
    const double C1393 = C88 * C1277;
    const double C1392 = C88 * C1276;
    const double C1391 = C88 * C1275;
    const double C1539 = C1475 + C1390;
    const double C1538 = C1471 + C1262;
    const double C1537 = C1467 + C1254;
    const double C1536 = C94 * C1449;
    const double C1535 = C1463 - C426;
    const double C1534 = C614 + C1462;
    const double C1533 = C969 + C1461;
    const double C1532 = C93 * C1460;
    const double C1531 = C1459 - C426;
    const double C1530 = C94 * C1397;
    const double C1529 = C966 + C1458;
    const double C1528 = C422 + C1457;
    const double C1527 = C94 * C1456;
    const double C1526 = C962 + C1455;
    const double C1525 = C93 * C1454;
    const double C1524 = C1453 - C615;
    const double C1523 = C94 * C1452;
    const double C1522 = C417 + C1451;
    const double C1521 = C308 + C1450;
    const double C1520 = C959 + C1448;
    const double C1519 = C958 + C1447;
    const double C1518 = C94 * C1446;
    const double C1517 = C94 * C1404;
    const double C1516 = C94 * C1443;
    const double C1515 = C93 * C1417;
    const double C1514 = C93 * C1440;
    const double C1513 = C93 * C1438;
    const double C1512 = C94 * C1436;
    const double C1511 = C88 * C1433;
    const double C1510 = C94 * C1396;
    const double C1509 = C1431 - C203;
    const double C1508 = C1430 - C203;
    const double C1507 = C94 * C1394;
    const double C1506 = C942 + C1428;
    const double C1505 = C93 * C1396;
    const double C1504 = C1426 - C204;
    const double C1503 = C1425 - C204;
    const double C1502 = C93 * C1394;
    const double C1501 = C939 + C1424;
    const double C1500 = C937 + C1423;
    const double C1499 = C1422 + C1303;
    const double C1498 = C94 * C1421;
    const double C1497 = C202 + C1419;
    const double C1496 = C94 * C1417;
    const double C1495 = C239 + C1415;
    const double C1494 = C1414 + C1166;
    const double C1493 = C197 + C1413;
    const double C1492 = C202 + C1411;
    const double C1491 = C190 + C1409;
    const double C1490 = C88 * C1407;
    const double C1489 = C1406 + C1158;
    const double C1488 = C245 + C1405;
    const double C1487 = C93 * C1404;
    const double C1486 = C198 + C1403;
    const double C1485 = C93 * C1402;
    const double C1484 = C879 + C1401;
    const double C1483 = C202 + C1400;
    const double C1482 = C194 + C1399;
    const double C1481 = C202 + C1398;
    const double C1480 = C88 * C1397;
    const double C1479 = C844 + C1395;
    const double C1478 = C830 + C1393;
    const double C1477 = C824 + C1392;
    const double C1476 = C818 + C1391;
    const double C1596 = C971 + C1536;
    const double C1595 = C94 * C1520;
    const double C1594 = C782 * C1535;
    const double C1593 = C93 * C1534;
    const double C1592 = C93 * C1533;
    const double C1591 = C967 + C1532;
    const double C1590 = C782 * C1531;
    const double C1589 = C94 * C1519;
    const double C1588 = C782 * C1530;
    const double C1587 = C94 * C1529;
    const double C1586 = C94 * C1528;
    const double C1585 = C963 + C1527;
    const double C1584 = C93 * C1526;
    const double C1583 = C961 + C1525;
    const double C1582 = C960 + C1523;
    const double C1581 = C957 + C1518;
    const double C1580 = C248 + C1517;
    const double C1579 = C1516 - C237;
    const double C1578 = C281 + C1515;
    const double C1577 = C951 + C1514;
    const double C1576 = C1513 - C275;
    const double C1575 = C1512 - C237;
    const double C1574 = C94 * C1481;
    const double C1573 = C945 + C1511;
    const double C1572 = C943 + C1510;
    const double C1571 = C782 * C1509;
    const double C1570 = C94 * C1479;
    const double C1569 = C782 * C1508;
    const double C1568 = C782 * C1507;
    const double C1567 = C94 * C1478;
    const double C1566 = C94 * C1477;
    const double C1565 = C94 * C1476;
    const double C1564 = C88 * C1506;
    const double C1563 = C59 * C1505;
    const double C1562 = C59 * C1504;
    const double C1561 = C93 * C1479;
    const double C1560 = C59 * C1503;
    const double C1559 = C940 + C1502;
    const double C1558 = C93 * C1478;
    const double C1557 = C93 * C1477;
    const double C1556 = C93 * C1476;
    const double C1555 = C88 * C1501;
    const double C1554 = C94 * C1500;
    const double C1553 = C929 + C1498;
    const double C1552 = C94 * C1497;
    const double C1551 = C919 + C1496;
    const double C1550 = C94 * C1492;
    const double C1549 = C900 + C1490;
    const double C1548 = C59 * C1488;
    const double C1547 = C892 + C1487;
    const double C1546 = C59 * C1486;
    const double C1545 = C884 + C1485;
    const double C1544 = C93 * C1484;
    const double C1543 = C93 * C1483;
    const double C1542 = C59 * C1482;
    const double C1541 = C93 * C1481;
    const double C1540 = C858 + C1480;
    const double C1638 = C782 * C1596;
    const double C1637 = C430 + C1595;
    const double C1636 = C970 + C1593;
    const double C1635 = C1091 + C1592;
    const double C1634 = C782 * C1591;
    const double C1633 = C782 * C1589;
    const double C1632 = C1090 + C1587;
    const double C1631 = C964 + C1586;
    const double C1630 = C619 + C1584;
    const double C1629 = C782 * C1581;
    const double C1628 = C782 * C1580;
    const double C1627 = C782 * C1579;
    const double C1626 = C782 * C1578;
    const double C1625 = C782 * C1577;
    const double C1624 = C782 * C1576;
    const double C1623 = C782 * C1575;
    const double C1622 = C782 * C1574;
    const double C1621 = C782 * C1573;
    const double C1620 = C782 * C1572;
    const double C1619 = C207 + C1570;
    const double C1618 = C782 * C1567;
    const double C1617 = C207 + C1566;
    const double C1616 = C782 * C1565;
    const double C1615 = C1063 + C1564;
    const double C1614 = C1563 * C781;
    const double C1613 = C1562 * C781;
    const double C1612 = C59 * C1561;
    const double C1611 = C1560 * C781;
    const double C1610 = C59 * C1559;
    const double C1609 = C207 + C1558;
    const double C1608 = C59 * C1557;
    const double C1607 = C207 + C1556;
    const double C1606 = C1061 + C1555;
    const double C1605 = C1060 + C1554;
    const double C1604 = C924 + C1552;
    const double C1603 = C908 + C1550;
    const double C1602 = C59 * C1547;
    const double C1601 = C59 * C1545;
    const double C1600 = C1023 + C1544;
    const double C1599 = C871 + C1543;
    const double C1598 = C863 + C1541;
    const double C1597 = C59 * C1540;
    const double C1662 = C782 * C1637;
    const double C1661 = C782 * C1636;
    const double C1660 = C782 * C1635;
    const double C1659 = C1089 + C1629;
    const double C1658 = C1225 + C1628;
    const double C1657 = C1085 + C1627;
    const double C1656 = C1221 + C1626;
    const double C1655 = C1218 + C1625;
    const double C1654 = C1215 + C1624;
    const double C1653 = C1079 + C1623;
    const double C1652 = C1211 + C1622;
    const double C1651 = C1209 + C1621;
    const double C1650 = C782 * C1619;
    const double C1649 = C782 * C1617;
    const double C1648 = C782 * C1615;
    const double C1647 = C1612 * C781;
    const double C1646 = C1610 * C781;
    const double C1645 = C59 * C1609;
    const double C1644 = C1608 * C781;
    const double C1643 = C59 * C1607;
    const double C1642 = C59 * C1606;
    const double C1641 = C59 * C1600;
    const double C1640 = C59 * C1599;
    const double C1639 = C59 * C1598;
    const double C1674 = C1659 * C781;
    const double C1673 = C1658 * C781;
    const double C1672 = C1657 * C781;
    const double C1671 = C1656 * C781;
    const double C1670 = C1655 * C781;
    const double C1669 = C1654 * C781;
    const double C1668 = C1653 * C781;
    const double C1667 = C1652 * C781;
    const double C1666 = C1651 * C781;
    const double C1665 = C1645 * C781;
    const double C1664 = C1643 * C781;
    const double C1663 = C1642 * C781;
    const double d2nexx100200 =
        (2 * Pi *
         (C1273 * C60 * C61 + C1105 * C60 * C62 + C1274 * C60 * C63 +
          C59 *
              (2 * C200 + C207 + C207 +
               C88 * (C164 + C202 + C202 + C88 * (-4 * C138 + C88 * C1107))) *
              C60 * C64)) /
        C67;
    const double d2nexx100020 =
        (2 * Pi *
         ((C1273 * C229 + C1008 * C230 + C1136 * C231) * C232 +
          (C1105 * C229 + C1137 * C230 + C1597 * C231) * C703)) /
        C67;
    const double d2nexx100002 =
        (2 * Pi *
         (C1489 * C60 * C232 +
          (C271 * C973 + C272 * C1038 + C273 * C1549) * C60 * C703)) /
        C67;
    const double d2nexx100110 =
        (2 * Pi *
         ((C1273 * C303 + C1178) * C798 + (C1105 * C303 + C1304) * C799 +
          (C1274 * C303 + C1663) * C307)) /
        C67;
    const double d2nexx100101 = (2 * Pi *
                                 (C1427 * C60 * C798 + C1317 * C60 * C799 +
                                  (C330 * C1106 + C1648) * C60 * C307)) /
                                C67;
    const double d2nexx100011 =
        (2 * Pi *
         ((C1427 * C303 + C1334) * C232 + (C1317 * C303 + C1666) * C703)) /
        C67;
    const double d2nexx010200 =
        (2 * Pi *
         ((C1273 * C374 + C1178) * C376 + (C1105 * C374 + C1304) * C377 +
          (C1274 * C374 + C1663) * C378)) /
        C67;
    const double d2nexx010020 = (2 * Pi *
                                 (C1273 * C399 + C1008 * C400 + C1136 * C401 +
                                  C59 * (2 * C308 + C93 * C1397) * C402) *
                                 C698) /
                                C67;
    const double d2nexx010002 =
        (2 * Pi *
         (C1489 * C374 + (C271 * C854 + C272 * C944 + C273 * C1521) * C781) *
         C698) /
        C67;
    const double d2nexx010110 =
        (2 * Pi *
         ((C1273 * C800 + C1008 * C801 + C1136 * C483) * C771 +
          (C1105 * C800 + C1137 * C801 + C1597 * C483) * C703)) /
        C67;
    const double d2nexx010101 =
        (2 * Pi *
         ((C1427 * C374 + C1334) * C771 + (C1317 * C374 + C1666) * C703)) /
        C67;
    const double d2nexx010011 =
        (2 * Pi *
         (C1427 * C800 + C1208 * C801 + (C330 * C1009 + C1588) * C483) * C698) /
        C67;
    const double d2nexx001200 = (2 * Pi *
                                 (C1464 * C60 * C376 + C1357 * C60 * C377 +
                                  (C550 * C1106 + C1648) * C60 * C378)) /
                                C67;
    const double d2nexx001020 =
        (2 * Pi *
         (C1464 * C229 + C1248 * C230 + (C550 * C1009 + C1588) * C231) * C698) /
        C67;
    const double d2nexx001002 = (2 * Pi *
                                 (C592 * C1104 + C593 * C896 + C594 * C1037 +
                                  C595 * (2 * C332 + C94 * C1407)) *
                                 C60 * C698) /
                                C67;
    const double d2nexx001110 =
        (2 * Pi *
         ((C1464 * C303 + C1248 * C781) * C771 +
          (C1357 * C303 + (C550 * C1010 + C1621) * C781) * C703)) /
        C67;
    const double d2nexx001101 =
        (2 * Pi *
         (C1537 * C60 * C771 +
          (C802 * C973 + C803 * C1038 + C663 * C1549) * C60 * C703)) /
        C67;
    const double d2nexx001011 =
        (2 * Pi *
         (C1537 * C303 + (C802 * C854 + C803 * C944 + C663 * C1521) * C781) *
         C698) /
        C67;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx100110;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx100011;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx100200 - 0.5 * d2nexx100020 + d2nexx100002;
    d2nexx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx100101;
    d2nexx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx100200 - std::sqrt(0.75) * d2nexx100020;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx010110;
    d2nexx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx010011;
    d2nexx[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx010200 - 0.5 * d2nexx010020 + d2nexx010002;
    d2nexx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx010101;
    d2nexx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx010200 - std::sqrt(0.75) * d2nexx010020;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx001110;
    d2nexx[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx001011;
    d2nexx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx001200 - 0.5 * d2nexx001020 + d2nexx001002;
    d2nexx[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx001101;
    d2nexx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx001200 - std::sqrt(0.75) * d2nexx001020;
    const double d2nexy100200 =
        (2 * Pi *
         (C1108 * C60 * C61 + C1109 * C60 * C62 + C1110 * C60 * C63 +
          C59 * (2 * C190 - C203 + C88 * C1476) * C60 * C64)) /
        C67;
    const double d2nexy100020 =
        (2 * Pi *
         ((C1108 * C229 + C1138 * C230 + C1139 * C231) * C232 +
          (C1109 * C229 + C1140 * C230 + C1639 * C231) * C703)) /
        C67;
    const double d2nexy100002 =
        (2 * Pi *
         (C1408 * C60 * C232 +
          (C271 * C977 + C272 * C903 + C273 * C1491) * C60 * C703)) /
        C67;
    const double d2nexy100110 =
        (2 * Pi *
         ((C1108 * C303 + C1306) * C798 + (C1109 * C303 + C1307) * C799 +
          (C1110 * C303 + C1664) * C307)) /
        C67;
    const double d2nexy100101 = (2 * Pi *
                                 (C1319 * C60 * C798 + C1320 * C60 * C799 +
                                  (C330 * C978 + C1616) * C60 * C307)) /
                                C67;
    const double d2nexy100011 =
        (2 * Pi *
         ((C1319 * C303 + C1434) * C232 + (C1320 * C303 + C1667) * C703)) /
        C67;
    const double d2nexy010200 =
        (2 * Pi *
         ((C1108 * C374 + C1306) * C376 + (C1109 * C374 + C1307) * C377 +
          (C1110 * C374 + C1664) * C378)) /
        C67;
    const double d2nexy010020 =
        (2 * Pi *
         (C1108 * C399 + C1138 * C400 + C1139 * C401 +
          C59 * (2 * C417 - C426 + C93 * C1519) * C402) *
         C698) /
        C67;
    const double d2nexy010002 =
        (2 * Pi *
         (C1408 * C374 + (C271 * C1011 + C272 * C946 + C273 * C1522) * C781) *
         C698) /
        C67;
    const double d2nexy010110 =
        (2 * Pi *
         ((C1108 * C800 + C1138 * C801 + C1139 * C483) * C771 +
          (C1109 * C800 + C1140 * C801 + C1639 * C483) * C703)) /
        C67;
    const double d2nexy010101 =
        (2 * Pi *
         ((C1319 * C374 + C1434) * C771 + (C1320 * C374 + C1667) * C703)) /
        C67;
    const double d2nexy010011 =
        (2 * Pi *
         (C1319 * C800 + C1335 * C801 + (C330 * C1012 + C1633) * C483) * C698) /
        C67;
    const double d2nexy001200 = (2 * Pi *
                                 (C1358 * C60 * C376 + C1359 * C60 * C377 +
                                  (C550 * C978 + C1616) * C60 * C378)) /
                                C67;
    const double d2nexy001020 =
        (2 * Pi *
         (C1358 * C229 + C1373 * C230 + (C550 * C1012 + C1633) * C231) * C698) /
        C67;
    const double d2nexy001002 =
        (2 * Pi *
         (C592 * C976 + C593 * C901 + C594 * C1040 +
          C595 * (2 * C94 * C142 + C94 * (C142 + C979 * C107))) *
         C60 * C698) /
        C67;
    const double d2nexy001110 =
        (2 * Pi *
         ((C1358 * C303 + C1373 * C781) * C771 +
          (C1359 * C303 + (C550 * C1013 + C1622) * C781) * C703)) /
        C67;
    const double d2nexy001101 =
        (2 * Pi *
         (C1468 * C60 * C771 +
          (C802 * C977 + C803 * C903 + C663 * C1491) * C60 * C703)) /
        C67;
    const double d2nexy001011 =
        (2 * Pi *
         (C1468 * C303 + (C802 * C1011 + C803 * C946 + C663 * C1522) * C781) *
         C698) /
        C67;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy100110;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy100011;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy100200 - 0.5 * d2nexy100020 + d2nexy100002;
    d2nexy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy100101;
    d2nexy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy100200 - std::sqrt(0.75) * d2nexy100020;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy010110;
    d2nexy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy010011;
    d2nexy[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy010200 - 0.5 * d2nexy010020 + d2nexy010002;
    d2nexy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy010101;
    d2nexy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy010200 - std::sqrt(0.75) * d2nexy010020;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy001110;
    d2nexy[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy001011;
    d2nexy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy001200 - 0.5 * d2nexy001020 + d2nexy001002;
    d2nexy[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy001101;
    d2nexy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy001200 - std::sqrt(0.75) * d2nexy001020;
    const double d2nexz100200 =
        (2 * Pi *
         (C1112 * C60 * C61 + C1113 * C60 * C62 + C1114 * C60 * C63 +
          C59 * (2 * C194 - C204 + C88 * C1477) * C60 * C64)) /
        C67;
    const double d2nexz100020 =
        (2 * Pi *
         ((C1112 * C229 + C1014 * C230 + C1141 * C231) * C232 +
          (C1113 * C229 + C1016 * C230 + C1542 * C231) * C703)) /
        C67;
    const double d2nexz100002 =
        (2 * Pi *
         (C1410 * C60 * C232 +
          (C271 * C981 + C272 * C1043 + C273 * C1603) * C60 * C703)) /
        C67;
    const double d2nexz100110 =
        (2 * Pi *
         ((C1112 * C303 + C1179) * C798 + (C1113 * C303 + C1180) * C799 +
          (C1114 * C303 + C1644) * C307)) /
        C67;
    const double d2nexz100101 = (2 * Pi *
                                 (C1321 * C60 * C798 + C1322 * C60 * C799 +
                                  (C330 * C982 + C1649) * C60 * C307)) /
                                C67;
    const double d2nexz100011 =
        (2 * Pi *
         ((C1321 * C303 + C1435) * C232 + (C1322 * C303 + C1668) * C703)) /
        C67;
    const double d2nexz010200 =
        (2 * Pi *
         ((C1112 * C374 + C1179) * C376 + (C1113 * C374 + C1180) * C377 +
          (C1114 * C374 + C1644) * C378)) /
        C67;
    const double d2nexz010020 = (2 * Pi *
                                 (C1112 * C399 + C1014 * C400 + C1141 * C401 +
                                  C59 * (2 * C452 + C93 * C1344) * C402) *
                                 C698) /
                                C67;
    const double d2nexz010002 =
        (2 * Pi *
         (C1410 * C374 + (C271 * C864 + C272 * C1078 + C273 * C1582) * C781) *
         C698) /
        C67;
    const double d2nexz010110 =
        (2 * Pi *
         ((C1112 * C800 + C1014 * C801 + C1141 * C483) * C771 +
          (C1113 * C800 + C1016 * C801 + C1542 * C483) * C703)) /
        C67;
    const double d2nexz010101 =
        (2 * Pi *
         ((C1321 * C374 + C1435) * C771 + (C1322 * C374 + C1668) * C703)) /
        C67;
    const double d2nexz010011 =
        (2 * Pi *
         (C1321 * C800 + C1336 * C801 + (C330 * C1015 + C1590) * C483) * C698) /
        C67;
    const double d2nexz001200 = (2 * Pi *
                                 (C1360 * C60 * C376 + C1361 * C60 * C377 +
                                  (C550 * C982 + C1649) * C60 * C378)) /
                                C67;
    const double d2nexz001020 =
        (2 * Pi *
         (C1360 * C229 + C1374 * C230 + (C550 * C1015 + C1590) * C231) * C698) /
        C67;
    const double d2nexz001002 =
        (2 * Pi *
         (C592 * C980 + C593 * C1041 + C594 * C1042 +
          C595 * (2 * C607 - C615 +
                  C94 * (C147 - C598 + C94 * (C407 + C94 * C983)))) *
         C60 * C698) /
        C67;
    const double d2nexz001110 =
        (2 * Pi *
         ((C1360 * C303 + C1374 * C781) * C771 +
          (C1361 * C303 + (C550 * C866 + C1623) * C781) * C703)) /
        C67;
    const double d2nexz001101 =
        (2 * Pi *
         (C1469 * C60 * C771 +
          (C802 * C981 + C803 * C1043 + C663 * C1603) * C60 * C703)) /
        C67;
    const double d2nexz001011 =
        (2 * Pi *
         (C1469 * C303 + (C802 * C864 + C803 * C1078 + C663 * C1582) * C781) *
         C698) /
        C67;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz100110;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz100011;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz100200 - 0.5 * d2nexz100020 + d2nexz100002;
    d2nexz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz100101;
    d2nexz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz100200 - std::sqrt(0.75) * d2nexz100020;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz010110;
    d2nexz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz010011;
    d2nexz[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz010200 - 0.5 * d2nexz010020 + d2nexz010002;
    d2nexz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz010101;
    d2nexz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz010200 - std::sqrt(0.75) * d2nexz010020;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz001110;
    d2nexz[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz001011;
    d2nexz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz001200 - 0.5 * d2nexz001020 + d2nexz001002;
    d2nexz[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz001101;
    d2nexz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz001200 - std::sqrt(0.75) * d2nexz001020;
    const double d2neyx100200 =
        (2 * Pi *
         (C1116 * C60 * C61 + C1117 * C60 * C62 + C1118 * C60 * C63 +
          C59 * (2 * C197 - C203 + C88 * C1478) * C60 * C64)) /
        C67;
    const double d2neyx100020 =
        (2 * Pi *
         ((C1116 * C229 + C1142 * C230 + C1143 * C231) * C232 +
          (C1117 * C229 + C1144 * C230 + C1640 * C231) * C703)) /
        C67;
    const double d2neyx100002 =
        (2 * Pi *
         (C1412 * C60 * C232 +
          (C271 * C985 + C272 * C911 + C273 * C1493) * C60 * C703)) /
        C67;
    const double d2neyx100110 =
        (2 * Pi *
         ((C1116 * C303 + C1308) * C798 + (C1117 * C303 + C1309) * C799 +
          (C1118 * C303 + C1665) * C307)) /
        C67;
    const double d2neyx100101 = (2 * Pi *
                                 (C1323 * C60 * C798 + C1324 * C60 * C799 +
                                  (C330 * C986 + C1618) * C60 * C307)) /
                                C67;
    const double d2neyx100011 =
        (2 * Pi *
         ((C1323 * C303 + C1437) * C232 + (C1324 * C303 + C1669) * C703)) /
        C67;
    const double d2neyx010200 =
        (2 * Pi *
         ((C1116 * C374 + C1308) * C376 + (C1117 * C374 + C1309) * C377 +
          (C1118 * C374 + C1665) * C378)) /
        C67;
    const double d2neyx010020 =
        (2 * Pi *
         (C1116 * C399 + C1142 * C400 + C1143 * C401 +
          C59 *
              (2 * C419 - C426 +
               C93 * (C150 - C406 + C93 * (C407 + C93 * C987))) *
              C402) *
         C698) /
        C67;
    const double d2neyx010002 =
        (2 * Pi *
         (C1412 * C374 + (C271 * C1017 + C272 * C1080 + C273 * C1524) * C781) *
         C698) /
        C67;
    const double d2neyx010110 =
        (2 * Pi *
         ((C1116 * C800 + C1142 * C801 + C1143 * C483) * C771 +
          (C1117 * C800 + C1144 * C801 + C1640 * C483) * C703)) /
        C67;
    const double d2neyx010101 =
        (2 * Pi *
         ((C1323 * C374 + C1437) * C771 + (C1324 * C374 + C1669) * C703)) /
        C67;
    const double d2neyx010011 =
        (2 * Pi *
         (C1323 * C800 + C1337 * C801 + (C330 * C1018 + C1634) * C483) * C698) /
        C67;
    const double d2neyx001200 = (2 * Pi *
                                 (C1362 * C60 * C376 + C1363 * C60 * C377 +
                                  (C550 * C986 + C1618) * C60 * C378)) /
                                C67;
    const double d2neyx001020 =
        (2 * Pi *
         (C1362 * C229 + C1375 * C230 + (C550 * C1018 + C1634) * C231) * C698) /
        C67;
    const double d2neyx001002 = (2 * Pi *
                                 (C592 * C984 + C593 * C909 + C594 * C1045 +
                                  C595 * (2 * C526 + C94 * C1349)) *
                                 C60 * C698) /
                                C67;
    const double d2neyx001110 =
        (2 * Pi *
         ((C1362 * C303 + C1375 * C781) * C771 +
          (C1363 * C303 + (C550 * C1019 + C1624) * C781) * C703)) /
        C67;
    const double d2neyx001101 =
        (2 * Pi *
         (C1470 * C60 * C771 +
          (C802 * C985 + C803 * C911 + C663 * C1493) * C60 * C703)) /
        C67;
    const double d2neyx001011 =
        (2 * Pi *
         (C1470 * C303 + (C802 * C1017 + C803 * C1080 + C663 * C1524) * C781) *
         C698) /
        C67;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx100110;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx100011;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx100200 - 0.5 * d2neyx100020 + d2neyx100002;
    d2neyx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx100101;
    d2neyx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx100200 - std::sqrt(0.75) * d2neyx100020;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx010110;
    d2neyx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx010011;
    d2neyx[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx010200 - 0.5 * d2neyx010020 + d2neyx010002;
    d2neyx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx010101;
    d2neyx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx010200 - std::sqrt(0.75) * d2neyx010020;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx001110;
    d2neyx[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx001011;
    d2neyx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx001200 - 0.5 * d2neyx001020 + d2neyx001002;
    d2neyx[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx001101;
    d2neyx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx001200 - std::sqrt(0.75) * d2neyx001020;
    const double d2neyy100200 =
        (2 * Pi *
         (C1278 * C60 * C61 + C989 * C60 * C62 + C1121 * C60 * C63 +
          C59 * (2 * C239 + C88 * C1394) * C60 * C64)) /
        C67;
    const double d2neyy100020 =
        (2 * Pi *
         ((C1278 * C229 + C1145 * C230 + C1286 * C231) * C232 +
          (C989 * C229 + C1147 * C230 + C1641 * C231) * C703)) /
        C67;
    const double d2neyy100002 =
        (2 * Pi *
         (C1494 * C60 * C232 +
          (C271 * C833 + C272 * C914 + C273 * C1495) * C60 * C703)) /
        C67;
    const double d2neyy100110 =
        (2 * Pi *
         ((C1278 * C303 + C1310) * C798 + (C989 * C303 + C1311) * C799 +
          (C1121 * C303 + C1646) * C307)) /
        C67;
    const double d2neyy100101 = (2 * Pi *
                                 (C1429 * C60 * C798 + C1195 * C60 * C799 +
                                  (C330 * C990 + C1568) * C60 * C307)) /
                                C67;
    const double d2neyy100011 =
        (2 * Pi *
         ((C1429 * C303 + C1439) * C232 + (C1195 * C303 + C1670) * C703)) /
        C67;
    const double d2neyy010200 =
        (2 * Pi *
         ((C1278 * C374 + C1310) * C376 + (C989 * C374 + C1311) * C377 +
          (C1121 * C374 + C1646) * C378)) /
        C67;
    const double d2neyy010020 =
        (2 * Pi *
         (C1278 * C399 + C1145 * C400 + C1286 * C401 +
          C59 *
              (2 * C420 + C430 + C430 +
               C93 * (C182 + C422 + C422 + C93 * (-4 * C143 + C93 * C1122))) *
              C402) *
         C698) /
        C67;
    const double d2neyy010002 =
        (2 * Pi *
         (C1494 * C374 + (C271 * C1020 + C272 * C1081 + C273 * C1583) * C781) *
         C698) /
        C67;
    const double d2neyy010110 =
        (2 * Pi *
         ((C1278 * C800 + C1145 * C801 + C1286 * C483) * C771 +
          (C989 * C800 + C1147 * C801 + C1641 * C483) * C703)) /
        C67;
    const double d2neyy010101 =
        (2 * Pi *
         ((C1429 * C374 + C1439) * C771 + (C1195 * C374 + C1670) * C703)) /
        C67;
    const double d2neyy010011 =
        (2 * Pi *
         (C1429 * C800 + C1338 * C801 + (C330 * C1146 + C1660) * C483) * C698) /
        C67;
    const double d2neyy001200 = (2 * Pi *
                                 (C1465 * C60 * C376 + C1243 * C60 * C377 +
                                  (C550 * C990 + C1568) * C60 * C378)) /
                                C67;
    const double d2neyy001020 =
        (2 * Pi *
         (C1465 * C229 + C1376 * C230 + (C550 * C1146 + C1660) * C231) * C698) /
        C67;
    const double d2neyy001002 = (2 * Pi *
                                 (C592 * C1120 + C593 * C912 + C594 * C1047 +
                                  C595 * (2 * C527 + C94 * C1454)) *
                                 C60 * C698) /
                                C67;
    const double d2neyy001110 =
        (2 * Pi *
         ((C1465 * C303 + C1376 * C781) * C771 +
          (C1243 * C303 + (C550 * C1022 + C1625) * C781) * C703)) /
        C67;
    const double d2neyy001101 =
        (2 * Pi *
         (C1538 * C60 * C771 +
          (C802 * C833 + C803 * C914 + C663 * C1495) * C60 * C703)) /
        C67;
    const double d2neyy001011 =
        (2 * Pi *
         (C1538 * C303 + (C802 * C1020 + C803 * C1081 + C663 * C1583) * C781) *
         C698) /
        C67;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy100110;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy100011;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy100200 - 0.5 * d2neyy100020 + d2neyy100002;
    d2neyy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy100101;
    d2neyy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy100200 - std::sqrt(0.75) * d2neyy100020;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy010110;
    d2neyy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy010011;
    d2neyy[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy010200 - 0.5 * d2neyy010020 + d2neyy010002;
    d2neyy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy010101;
    d2neyy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy010200 - std::sqrt(0.75) * d2neyy010020;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy001110;
    d2neyy[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy001011;
    d2neyy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy001200 - 0.5 * d2neyy001020 + d2neyy001002;
    d2neyy[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy001101;
    d2neyy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy001200 - std::sqrt(0.75) * d2neyy001020;
    const double d2neyz100200 =
        (2 * Pi *
         (C1123 * C60 * C61 + C993 * C60 * C62 + C1124 * C60 * C63 +
          C59 * (2 * C242 + C88 * C1280) * C60 * C64)) /
        C67;
    const double d2neyz100020 =
        (2 * Pi *
         ((C1123 * C229 + C1148 * C230 + C1149 * C231) * C232 +
          (C993 * C229 + C1150 * C230 + C1601 * C231) * C703)) /
        C67;
    const double d2neyz100002 =
        (2 * Pi *
         (C1416 * C60 * C232 +
          (C271 * C837 + C272 * C1050 + C273 * C1551) * C60 * C703)) /
        C67;
    const double d2neyz100110 =
        (2 * Pi *
         ((C1123 * C303 + C1312) * C798 + (C993 * C303 + C1313) * C799 +
          (C1124 * C303 + C1611) * C307)) /
        C67;
    const double d2neyz100101 = (2 * Pi *
                                 (C1326 * C60 * C798 + C1327 * C60 * C799 +
                                  (C330 * C994 + C1569) * C60 * C307)) /
                                C67;
    const double d2neyz100011 =
        (2 * Pi *
         ((C1326 * C303 + C1441) * C232 + (C1327 * C303 + C1671) * C703)) /
        C67;
    const double d2neyz010200 =
        (2 * Pi *
         ((C1123 * C374 + C1312) * C376 + (C993 * C374 + C1313) * C377 +
          (C1124 * C374 + C1611) * C378)) /
        C67;
    const double d2neyz010020 =
        (2 * Pi *
         (C1123 * C399 + C1148 * C400 + C1149 * C401 +
          C59 *
              (2 * C423 - C428 +
               C93 * (C154 - C415 + C93 * (C179 + C93 * C995))) *
              C402) *
         C698) /
        C67;
    const double d2neyz010002 =
        (2 * Pi *
         (C1416 * C374 + (C271 * C1024 + C272 * C1082 + C273 * C1630) * C781) *
         C698) /
        C67;
    const double d2neyz010110 =
        (2 * Pi *
         ((C1123 * C800 + C1148 * C801 + C1149 * C483) * C771 +
          (C993 * C800 + C1150 * C801 + C1601 * C483) * C703)) /
        C67;
    const double d2neyz010101 =
        (2 * Pi *
         ((C1326 * C374 + C1441) * C771 + (C1327 * C374 + C1671) * C703)) /
        C67;
    const double d2neyz010011 =
        (2 * Pi *
         (C1326 * C800 + C1339 * C801 + (C330 * C1025 + C1661) * C483) * C698) /
        C67;
    const double d2neyz001200 = (2 * Pi *
                                 (C1365 * C60 * C376 + C1366 * C60 * C377 +
                                  (C550 * C994 + C1569) * C60 * C378)) /
                                C67;
    const double d2neyz001020 =
        (2 * Pi *
         (C1365 * C229 + C1377 * C230 + (C550 * C1025 + C1661) * C231) * C698) /
        C67;
    const double d2neyz001002 = (2 * Pi *
                                 (C592 * C992 + C593 * C1048 + C594 * C1049 +
                                  C595 * (2 * C458 - C616 + C94 * C1526)) *
                                 C60 * C698) /
                                C67;
    const double d2neyz001110 =
        (2 * Pi *
         ((C1365 * C303 + C1377 * C781) * C771 +
          (C1366 * C303 + (C550 * C1026 + C1626) * C781) * C703)) /
        C67;
    const double d2neyz001101 =
        (2 * Pi *
         (C1472 * C60 * C771 +
          (C802 * C837 + C803 * C1050 + C663 * C1551) * C60 * C703)) /
        C67;
    const double d2neyz001011 =
        (2 * Pi *
         (C1472 * C303 + (C802 * C1024 + C803 * C1082 + C663 * C1630) * C781) *
         C698) /
        C67;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz100110;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz100011;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz100200 - 0.5 * d2neyz100020 + d2neyz100002;
    d2neyz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz100101;
    d2neyz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz100200 - std::sqrt(0.75) * d2neyz100020;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz010110;
    d2neyz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz010011;
    d2neyz[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz010200 - 0.5 * d2neyz010020 + d2neyz010002;
    d2neyz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz010101;
    d2neyz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz010200 - std::sqrt(0.75) * d2neyz010020;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz001110;
    d2neyz[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz001011;
    d2neyz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz001200 - 0.5 * d2neyz001020 + d2neyz001002;
    d2neyz[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz001101;
    d2neyz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz001200 - std::sqrt(0.75) * d2neyz001020;
    const double d2nezx100200 =
        (2 * Pi *
         (C1126 * C60 * C61 + C1127 * C60 * C62 + C1128 * C60 * C63 +
          C59 * (2 * C198 - C204 + C88 * C1479) * C60 * C64)) /
        C67;
    const double d2nezx100020 =
        (2 * Pi *
         ((C1126 * C229 + C1027 * C230 + C1152 * C231) * C232 +
          (C1127 * C229 + C1029 * C230 + C1546 * C231) * C703)) /
        C67;
    const double d2nezx100002 =
        (2 * Pi *
         (C1418 * C60 * C232 +
          (C271 * C997 + C272 * C1053 + C273 * C1604) * C60 * C703)) /
        C67;
    const double d2nezx100110 =
        (2 * Pi *
         ((C1126 * C303 + C1181) * C798 + (C1127 * C303 + C1182) * C799 +
          (C1128 * C303 + C1647) * C307)) /
        C67;
    const double d2nezx100101 = (2 * Pi *
                                 (C1328 * C60 * C798 + C1329 * C60 * C799 +
                                  (C330 * C998 + C1650) * C60 * C307)) /
                                C67;
    const double d2nezx100011 =
        (2 * Pi *
         ((C1328 * C303 + C1442) * C232 + (C1329 * C303 + C1672) * C703)) /
        C67;
    const double d2nezx010200 =
        (2 * Pi *
         ((C1126 * C374 + C1181) * C376 + (C1127 * C374 + C1182) * C377 +
          (C1128 * C374 + C1647) * C378)) /
        C67;
    const double d2nezx010020 = (2 * Pi *
                                 (C1126 * C399 + C1027 * C400 + C1152 * C401 +
                                  C59 * (2 * C455 + C93 * C1345) * C402) *
                                 C698) /
                                C67;
    const double d2nezx010002 =
        (2 * Pi *
         (C1418 * C374 + (C271 * C885 + C272 * C1084 + C273 * C1585) * C781) *
         C698) /
        C67;
    const double d2nezx010110 =
        (2 * Pi *
         ((C1126 * C800 + C1027 * C801 + C1152 * C483) * C771 +
          (C1127 * C800 + C1029 * C801 + C1546 * C483) * C703)) /
        C67;
    const double d2nezx010101 =
        (2 * Pi *
         ((C1328 * C374 + C1442) * C771 + (C1329 * C374 + C1672) * C703)) /
        C67;
    const double d2nezx010011 =
        (2 * Pi *
         (C1328 * C800 + C1340 * C801 + (C330 * C1028 + C1594) * C483) * C698) /
        C67;
    const double d2nezx001200 = (2 * Pi *
                                 (C1367 * C60 * C376 + C1368 * C60 * C377 +
                                  (C550 * C998 + C1650) * C60 * C378)) /
                                C67;
    const double d2nezx001020 =
        (2 * Pi *
         (C1367 * C229 + C1378 * C230 + (C550 * C1028 + C1594) * C231) * C698) /
        C67;
    const double d2nezx001002 =
        (2 * Pi *
         (C592 * C996 + C593 * C1051 + C594 * C1052 +
          C595 * (2 * C610 - C615 +
                  C94 * (C156 - C598 + C94 * (C407 + C94 * C999)))) *
         C60 * C698) /
        C67;
    const double d2nezx001110 =
        (2 * Pi *
         ((C1367 * C303 + C1378 * C781) * C771 +
          (C1368 * C303 + (C550 * C887 + C1627) * C781) * C703)) /
        C67;
    const double d2nezx001101 =
        (2 * Pi *
         (C1473 * C60 * C771 +
          (C802 * C997 + C803 * C1053 + C663 * C1604) * C60 * C703)) /
        C67;
    const double d2nezx001011 =
        (2 * Pi *
         (C1473 * C303 + (C802 * C885 + C803 * C1084 + C663 * C1585) * C781) *
         C698) /
        C67;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx100110;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx100011;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx100200 - 0.5 * d2nezx100020 + d2nezx100002;
    d2nezx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx100101;
    d2nezx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx100200 - std::sqrt(0.75) * d2nezx100020;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx010110;
    d2nezx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx010011;
    d2nezx[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx010200 - 0.5 * d2nezx010020 + d2nezx010002;
    d2nezx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx010101;
    d2nezx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx010200 - std::sqrt(0.75) * d2nezx010020;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx001110;
    d2nezx[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx001011;
    d2nezx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx001200 - 0.5 * d2nezx001020 + d2nezx001002;
    d2nezx[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx001101;
    d2nezx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx001200 - std::sqrt(0.75) * d2nezx001020;
    const double d2nezy100200 =
        (2 * Pi *
         (C1130 * C60 * C61 + C1001 * C60 * C62 + C1131 * C60 * C63 +
          C59 * (2 * C244 + C88 * C1282) * C60 * C64)) /
        C67;
    const double d2nezy100020 =
        (2 * Pi *
         ((C1130 * C229 + C1153 * C230 + C1154 * C231) * C232 +
          (C1001 * C229 + C1155 * C230 + C1602 * C231) * C703)) /
        C67;
    const double d2nezy100002 =
        (2 * Pi *
         (C1420 * C60 * C232 +
          (C271 * C847 + C272 * C1056 + C273 * C1553) * C60 * C703)) /
        C67;
    const double d2nezy100110 =
        (2 * Pi *
         ((C1130 * C303 + C1314) * C798 + (C1001 * C303 + C1315) * C799 +
          (C1131 * C303 + C1613) * C307)) /
        C67;
    const double d2nezy100101 = (2 * Pi *
                                 (C1330 * C60 * C798 + C1331 * C60 * C799 +
                                  (C330 * C1002 + C1571) * C60 * C307)) /
                                C67;
    const double d2nezy100011 =
        (2 * Pi *
         ((C1330 * C303 + C1444) * C232 + (C1331 * C303 + C1673) * C703)) /
        C67;
    const double d2nezy010200 =
        (2 * Pi *
         ((C1130 * C374 + C1314) * C376 + (C1001 * C374 + C1315) * C377 +
          (C1131 * C374 + C1613) * C378)) /
        C67;
    const double d2nezy010020 =
        (2 * Pi *
         (C1130 * C399 + C1153 * C400 + C1154 * C401 +
          C59 * (2 * C425 - C428 + C93 * C1520) * C402) *
         C698) /
        C67;
    const double d2nezy010002 =
        (2 * Pi *
         (C1420 * C374 + (C271 * C1030 + C272 * C1086 + C273 * C1631) * C781) *
         C698) /
        C67;
    const double d2nezy010110 =
        (2 * Pi *
         ((C1130 * C800 + C1153 * C801 + C1154 * C483) * C771 +
          (C1001 * C800 + C1155 * C801 + C1602 * C483) * C703)) /
        C67;
    const double d2nezy010101 =
        (2 * Pi *
         ((C1330 * C374 + C1444) * C771 + (C1331 * C374 + C1673) * C703)) /
        C67;
    const double d2nezy010011 =
        (2 * Pi *
         (C1330 * C800 + C1341 * C801 + (C330 * C1031 + C1662) * C483) * C698) /
        C67;
    const double d2nezy001200 = (2 * Pi *
                                 (C1369 * C60 * C376 + C1370 * C60 * C377 +
                                  (C550 * C1002 + C1571) * C60 * C378)) /
                                C67;
    const double d2nezy001020 =
        (2 * Pi *
         (C1369 * C229 + C1379 * C230 + (C550 * C1031 + C1662) * C231) * C698) /
        C67;
    const double d2nezy001002 =
        (2 * Pi *
         (C592 * C1000 + C593 * C1054 + C594 * C1055 +
          C595 * (2 * C611 - C616 +
                  C94 * (C158 - C600 + C94 * (C172 + C94 * C1003)))) *
         C60 * C698) /
        C67;
    const double d2nezy001110 =
        (2 * Pi *
         ((C1369 * C303 + C1379 * C781) * C771 +
          (C1370 * C303 + (C550 * C1032 + C1628) * C781) * C703)) /
        C67;
    const double d2nezy001101 =
        (2 * Pi *
         (C1474 * C60 * C771 +
          (C802 * C847 + C803 * C1056 + C663 * C1553) * C60 * C703)) /
        C67;
    const double d2nezy001011 =
        (2 * Pi *
         (C1474 * C303 + (C802 * C1030 + C803 * C1086 + C663 * C1631) * C781) *
         C698) /
        C67;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy100110;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy100011;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy100200 - 0.5 * d2nezy100020 + d2nezy100002;
    d2nezy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy100101;
    d2nezy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy100200 - std::sqrt(0.75) * d2nezy100020;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy010110;
    d2nezy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy010011;
    d2nezy[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy010200 - 0.5 * d2nezy010020 + d2nezy010002;
    d2nezy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy010101;
    d2nezy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy010200 - std::sqrt(0.75) * d2nezy010020;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy001110;
    d2nezy[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy001011;
    d2nezy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy001200 - 0.5 * d2nezy001020 + d2nezy001002;
    d2nezy[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy001101;
    d2nezy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy001200 - std::sqrt(0.75) * d2nezy001020;
    const double d2nezz100200 =
        (2 * Pi *
         (C1283 * C60 * C61 + C1005 * C60 * C62 + C1134 * C60 * C63 +
          C59 * (2 * C245 + C88 * C1396) * C60 * C64)) /
        C67;
    const double d2nezz100020 =
        (2 * Pi *
         ((C1283 * C229 + C1033 * C230 + C1157 * C231) * C232 +
          (C1005 * C229 + C1035 * C230 + C1548 * C231) * C703)) /
        C67;
    const double d2nezz100002 =
        (2 * Pi *
         (C1499 * C60 * C232 +
          (C271 * C851 + C272 * C1059 + C273 * C1605) * C60 * C703)) /
        C67;
    const double d2nezz100110 =
        (2 * Pi *
         ((C1283 * C303 + C1183) * C798 + (C1005 * C303 + C1184) * C799 +
          (C1134 * C303 + C1614) * C307)) /
        C67;
    const double d2nezz100101 = (2 * Pi *
                                 (C1432 * C60 * C798 + C1333 * C60 * C799 +
                                  (C330 * C1006 + C1620) * C60 * C307)) /
                                C67;
    const double d2nezz100011 =
        (2 * Pi *
         ((C1432 * C303 + C1445) * C232 + (C1333 * C303 + C1674) * C703)) /
        C67;
    const double d2nezz010200 =
        (2 * Pi *
         ((C1283 * C374 + C1183) * C376 + (C1005 * C374 + C1184) * C377 +
          (C1134 * C374 + C1614) * C378)) /
        C67;
    const double d2nezz010020 = (2 * Pi *
                                 (C1283 * C399 + C1033 * C400 + C1157 * C401 +
                                  C59 * (2 * C456 + C93 * C1449) * C402) *
                                 C698) /
                                C67;
    const double d2nezz010002 =
        (2 * Pi *
         (C1499 * C374 + (C271 * C893 + C272 * C1088 + C273 * C1632) * C781) *
         C698) /
        C67;
    const double d2nezz010110 =
        (2 * Pi *
         ((C1283 * C800 + C1033 * C801 + C1157 * C483) * C771 +
          (C1005 * C800 + C1035 * C801 + C1548 * C483) * C703)) /
        C67;
    const double d2nezz010101 =
        (2 * Pi *
         ((C1432 * C374 + C1445) * C771 + (C1333 * C374 + C1674) * C703)) /
        C67;
    const double d2nezz010011 =
        (2 * Pi *
         (C1432 * C800 + C1342 * C801 + (C330 * C1034 + C1638) * C483) * C698) /
        C67;
    const double d2nezz001200 = (2 * Pi *
                                 (C1466 * C60 * C376 + C1372 * C60 * C377 +
                                  (C550 * C1006 + C1620) * C60 * C378)) /
                                C67;
    const double d2nezz001020 =
        (2 * Pi *
         (C1466 * C229 + C1380 * C230 + (C550 * C1034 + C1638) * C231) * C698) /
        C67;
    const double d2nezz001002 =
        (2 * Pi *
         (C592 * C1133 + C593 * C1057 + C594 * C1177 +
          C595 *
              (2 * C612 + C619 + C619 +
               C94 * (C185 + C614 + C614 + C94 * (-4 * C148 + C94 * C1135)))) *
         C60 * C698) /
        C67;
    const double d2nezz001110 =
        (2 * Pi *
         ((C1466 * C303 + C1380 * C781) * C771 +
          (C1372 * C303 + (C550 * C895 + C1629) * C781) * C703)) /
        C67;
    const double d2nezz001101 =
        (2 * Pi *
         (C1539 * C60 * C771 +
          (C802 * C851 + C803 * C1059 + C663 * C1605) * C60 * C703)) /
        C67;
    const double d2nezz001011 =
        (2 * Pi *
         (C1539 * C303 + (C802 * C893 + C803 * C1088 + C663 * C1632) * C781) *
         C698) /
        C67;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz100110;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz100011;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz100200 - 0.5 * d2nezz100020 + d2nezz100002;
    d2nezz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz100101;
    d2nezz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz100200 - std::sqrt(0.75) * d2nezz100020;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz010110;
    d2nezz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz010011;
    d2nezz[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz010200 - 0.5 * d2nezz010020 + d2nezz010002;
    d2nezz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz010101;
    d2nezz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz010200 - std::sqrt(0.75) * d2nezz010020;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz001110;
    d2nezz[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz001011;
    d2nezz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz001200 - 0.5 * d2nezz001020 + d2nezz001002;
    d2nezz[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz001101;
    d2nezz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz001200 - std::sqrt(0.75) * d2nezz001020;
}
