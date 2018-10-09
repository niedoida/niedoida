/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_dp_CC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_21_33(double ae,
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
    const double C694 = 2 * C690;
    const double C693 = C688 * be;
    const double C692 = C688 * ae;
    const double C691 = std::pow(C688, 2);
    const double C695 = C691 * C689;
    const double C696 = C695 / C690;
    const double C697 = -C696;
    const double C698 = std::exp(C697);
    const double C699 = C698 * C692;
    const double C702 = std::pow(C690, 2);
    const double C701 = std::pow(C694, -1);
    const double C703 = C701 * C698;
    const double C706 = C703 * C693;
    const double C705 = 2 * C702;
    const double C709 = yA - yB;
    const double C715 = zA - zB;
    const double C718 = std::pow(C709, 2);
    const double C719 = C718 * C689;
    const double C720 = C719 / C690;
    const double C721 = -C720;
    const double C722 = std::exp(C721);
    const double C729 = C709 * be;
    const double C728 = C709 * ae;
    const double C730 = C722 * C728;
    const double C732 = C701 * C722;
    const double C734 = C732 * C729;
    const double C738 = std::pow(C715, 2);
    const double C739 = C738 * C689;
    const double C740 = C739 / C690;
    const double C741 = -C740;
    const double C742 = std::exp(C741);
    const double C747 = C715 * be;
    const double C746 = C715 * ae;
    const double C748 = C742 * C746;
    const double C750 = C701 * C742;
    const double C752 = C750 * C747;
    const double C793 = C752 / C690;
    const double C792 = C748 / C705;
    const double C791 = C748 * C747;
    const double C790 = C742 * C747;
    const double C789 = C742 / C694;
    const double C788 = C715 * be;
    const double C787 = C734 / C690;
    const double C786 = C730 / C705;
    const double C785 = C730 * C729;
    const double C784 = C722 * C729;
    const double C783 = C722 / C694;
    const double C782 = C709 * be;
    const double C781 = std::pow(C715, 2);
    const double C780 = std::pow(C694, -2);
    const double C779 = std::pow(C709, 2);
    const double C778 = 4 * C702;
    const double C777 = C706 / C690;
    const double C776 = C699 / C705;
    const double C775 = C699 * C693;
    const double C774 = C698 / C694;
    const double C773 = C698 * C693;
    const double C772 = C699 / C690;
    const double C771 = ae + be;
    const double C770 = ae * be;
    const double C804 = C792 - C793;
    const double C803 = C791 / C702;
    const double C802 = C790 / C690;
    const double C801 = C786 - C787;
    const double C800 = C785 / C702;
    const double C799 = C784 / C690;
    const double C798 = C781 * C689;
    const double C797 = C779 * C689;
    const double C796 = C776 - C777;
    const double C795 = C775 / C702;
    const double C794 = C773 / C690;
    const double C809 = C789 - C803;
    const double C808 = C783 - C800;
    const double C807 = C798 / C690;
    const double C806 = C797 / C690;
    const double C805 = C774 - C795;
    const double C811 = -C807;
    const double C810 = -C806;
    const double C813 = std::exp(C811);
    const double C812 = std::exp(C810);
    const double C59 = std::exp(-(std::pow(zA - zB, 2) * C770) / C771);
    const double C60 = std::exp(-(std::pow(yA - yB, 2) * C770) / C771);
    const double C61 = (C772 - C794) / C694 -
                       ((C774 - C775 / std::pow(C690, 2)) * C693) / C690;
    const double C62 =
        (2 * C703 + C805) / C694 -
        ((C699 / (2 * C702) - (C703 * C693) / C690) * C693) / C690;
    const double C63 = C796 / C694 - C706 / C705;
    const double C64 = C703 / C778;
    const double C229 = (C812 * C709 * ae) / C690;
    const double C230 = C701 * C812;
    const double C231 = (C698 * std::pow(C693, 2)) / C702 + C774;
    const double C232 = (-2 * C701 * C773) / C690;
    const double C233 = C780 * C698;
    const double C260 = (C813 * C715 * ae) / C690;
    const double C261 = C701 * C813;
    const double C285 = (C722 * std::pow(C782, 2)) / C702 + C783;
    const double C286 = (-2 * C701 * C722 * C782) / C690;
    const double C287 = C780 * C722;
    const double C323 = (C730 / C690 - C799) / C694 - (C808 * C729) / C690;
    const double C324 = (2 * C732 + C808) / C694 -
                        ((C786 - (C732 * C729) / C690) * C729) / C690;
    const double C325 = C801 / C694 - C734 / C705;
    const double C326 = C732 / C778;
    const double C402 = (C742 * std::pow(C788, 2)) / C702 + C789;
    const double C403 = (-2 * C701 * C742 * C788) / C690;
    const double C404 = C780 * C742;
    const double C460 = (C748 / C690 - C802) / C694 - (C809 * C747) / C690;
    const double C461 = (2 * C750 + C809) / C694 -
                        ((C792 - (C750 * C747) / C690) * C747) / C690;
    const double C462 = C804 / C694 - C752 / C705;
    const double C463 = C750 / C778;
    const double C509 = -C799;
    const double C513 = C703 / C694;
    const double C536 = C732 / C694;
    const double C537 = -C794;
    const double C579 = -C802;
    const double C623 = C750 / C694;
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
    const double C236 = C93 * C201;
    const double C235 = C93 * C164;
    const double C234 = C96 * C68;
    const double C237 = C234 * C78;
    const double C238 = 2 * C237;
    const double C263 = C94 * C201;
    const double C262 = C94 * C164;
    const double C299 = C88 * C185;
    const double C298 = C88 * C158;
    const double C297 = C93 * C196;
    const double C296 = C88 * C154;
    const double C295 = C93 * C174;
    const double C294 = C93 * C192;
    const double C293 = C88 * C182;
    const double C292 = C93 * C167;
    const double C291 = -2 * C136;
    const double C290 = C93 * C162;
    const double C301 = C111 - C294;
    const double C300 = C89 - C292;
    const double C340 = C93 * C158;
    const double C339 = C93 * C178;
    const double C338 = C148 * C103;
    const double C337 = C93 * C154;
    const double C336 = C93 * C171;
    const double C335 = C93 * C97;
    const double C334 = C93 * C182;
    const double C333 = -4 * C141;
    const double C332 = C93 * C150;
    const double C331 = -2 * C138;
    const double C330 = C93 * C165;
    const double C329 = C138 * C103;
    const double C328 = C93 * C142;
    const double C349 = C175 + C340;
    const double C348 = 2 * C338;
    const double C347 = C175 + C337;
    const double C346 = C97 - C336;
    const double C345 = C336 - C97;
    const double C344 = C333 + C334;
    const double C343 = C291 + C332;
    const double C342 = 2 * C329;
    const double C341 = C291 + C328;
    const double C352 = C174 + C348;
    const double C351 = C93 * C345;
    const double C350 = C162 + C342;
    const double C353 = C167 + C351;
    const double C354 = C335 - C353;
    const double C379 = C94 * C154;
    const double C378 = C94 * C345;
    const double C377 = C94 * C182;
    const double C376 = C94 * C150;
    const double C380 = C168 + C379;
    const double C409 = C94 * C196;
    const double C408 = C94 * C174;
    const double C407 = C94 * C192;
    const double C406 = C94 * C167;
    const double C405 = C94 * C162;
    const double C411 = C111 - C409;
    const double C410 = C89 - C408;
    const double C437 = C94 * C339;
    const double C436 = C93 * C185;
    const double C435 = C93 * C156;
    const double C434 = C94 * C330;
    const double C433 = C93 * C147;
    const double C438 = C335 - C437;
    const double C474 = C94 * C178;
    const double C473 = C94 * C97;
    const double C472 = C94 * C185;
    const double C471 = -4 * C146;
    const double C470 = C94 * C158;
    const double C469 = C94 * C156;
    const double C468 = C94 * C171;
    const double C467 = C143 * C107;
    const double C466 = C94 * C165;
    const double C465 = C138 * C107;
    const double C464 = C94 * C147;
    const double C482 = C97 - C474;
    const double C481 = C474 - C97;
    const double C480 = C471 + C472;
    const double C479 = C168 + C470;
    const double C478 = C291 + C469;
    const double C477 = 2 * C467;
    const double C476 = 2 * C465;
    const double C475 = C291 + C464;
    const double C485 = C94 * C481;
    const double C484 = C167 + C477;
    const double C483 = C162 + C476;
    const double C486 = C174 + C485;
    const double C487 = C473 - C486;
    const double C981 = -2 * C297;
    const double C980 = -2 * C407;
    const double C979 = -2 * C434;
    const double C978 = -2 * C339;
    const double C977 = C436 + C438;
    const double C976 = C349 - C378;
    const double C975 = C435 - C434;
    const double C974 = C154 - C468;
    const double C973 = -2 * C484;
    const double C972 = C433 - C434;
    const double C971 = -2 * C196;
    const double C970 = C299 + C411;
    const double C969 = C94 * C480;
    const double C968 = C184 + C410;
    const double C967 = C298 - C407;
    const double C966 = C94 * C479;
    const double C965 = C157 - C406;
    const double C964 = C198 - C263;
    const double C963 = C94 * C478;
    const double C962 = C155 - C405;
    const double C961 = C296 - C407;
    const double C960 = C94 * C380;
    const double C959 = C153 - C406;
    const double C958 = C182 * C107;
    const double C957 = C150 * C107;
    const double C956 = C194 - C263;
    const double C955 = C94 * C475;
    const double C954 = C145 - C405;
    const double C953 = C142 * C107;
    const double C952 = -2 * C483;
    const double C951 = C164 * C107;
    const double C950 = -2 * C352;
    const double C949 = C94 * C436;
    const double C948 = -2 * C295;
    const double C947 = C94 * C349;
    const double C946 = C94 * C435;
    const double C945 = C380 + C438;
    const double C944 = C93 * C380;
    const double C943 = -2 * C468;
    const double C942 = C377 - C378;
    const double C941 = C93 * C377;
    const double C940 = -2 * C406;
    const double C939 = C376 - C434;
    const double C938 = C93 * C376;
    const double C937 = C94 * C433;
    const double C936 = C94 * C341;
    const double C935 = C94 * C235;
    const double C934 = C158 - C339;
    const double C933 = C142 - C330;
    const double C932 = C185 * C103;
    const double C931 = C298 - C297;
    const double C930 = C93 * C349;
    const double C929 = C157 - C295;
    const double C928 = C156 * C103;
    const double C927 = C296 - C297;
    const double C926 = C93 * C347;
    const double C925 = C153 - C295;
    const double C924 = -2 * C192;
    const double C923 = C293 + C301;
    const double C922 = C93 * C344;
    const double C921 = C181 + C300;
    const double C920 = C197 - C236;
    const double C919 = C93 * C343;
    const double C918 = C149 - C290;
    const double C917 = C147 * C103;
    const double C916 = C190 - C236;
    const double C915 = C93 * C341;
    const double C914 = C140 - C290;
    const double C913 = -2 * C350;
    const double C912 = C164 * C103;
    const double C911 = -2 * C204;
    const double C910 = C94 * C299;
    const double C909 = -2 * C193;
    const double C908 = C94 * C184;
    const double C907 = 4 * C144;
    const double C906 = C94 * C298;
    const double C905 = C94 * C157;
    const double C904 = C94 * C198;
    const double C903 = C94 * C155;
    const double C902 = C94 * C296;
    const double C901 = C94 * C153;
    const double C900 = C94 * C293;
    const double C899 = C94 * C181;
    const double C898 = C94 * C197;
    const double C897 = C94 * C149;
    const double C896 = C94 * C194;
    const double C895 = C94 * C145;
    const double C894 = C94 * C190;
    const double C893 = C94 * C140;
    const double C892 = -2 * C466;
    const double C891 = C262 - C263;
    const double C890 = C88 * C262;
    const double C889 = -2 * C405;
    const double C888 = C94 * C161;
    const double C887 = C93 * C299;
    const double C886 = C93 * C184;
    const double C885 = C93 * C298;
    const double C884 = C93 * C157;
    const double C883 = C93 * C198;
    const double C882 = C93 * C155;
    const double C881 = C93 * C296;
    const double C880 = C93 * C153;
    const double C879 = -2 * C203;
    const double C878 = C93 * C293;
    const double C877 = -2 * C189;
    const double C876 = C93 * C181;
    const double C875 = 4 * C139;
    const double C874 = C93 * C197;
    const double C873 = C93 * C149;
    const double C872 = C93 * C194;
    const double C871 = C93 * C145;
    const double C870 = C93 * C190;
    const double C869 = C93 * C140;
    const double C868 = -2 * C330;
    const double C867 = C235 - C236;
    const double C866 = C88 * C235;
    const double C865 = -2 * C290;
    const double C864 = C93 * C161;
    const double C863 = C107 * C72;
    const double C862 = C185 * C95;
    const double C861 = C88 * C184;
    const double C860 = C107 * C68;
    const double C859 = C106 * C72;
    const double C858 = C158 * C95;
    const double C857 = C88 * C157;
    const double C856 = C106 * C68;
    const double C855 = C105 * C72;
    const double C854 = C156 - C196;
    const double C853 = C88 * C198;
    const double C852 = C155 - C193;
    const double C851 = C88 * C155;
    const double C850 = C105 * C68;
    const double C849 = C104 * C72;
    const double C848 = C154 * C95;
    const double C847 = C88 * C153;
    const double C846 = C104 * C68;
    const double C845 = C103 * C72;
    const double C844 = C182 * C95;
    const double C843 = C88 * C181;
    const double C842 = C103 * C68;
    const double C841 = C102 * C72;
    const double C840 = C150 - C192;
    const double C839 = C88 * C197;
    const double C838 = C149 - C189;
    const double C837 = C88 * C149;
    const double C836 = C102 * C68;
    const double C835 = C100 * C72;
    const double C834 = C147 - C196;
    const double C833 = C88 * C194;
    const double C832 = C145 - C193;
    const double C831 = C88 * C145;
    const double C830 = C100 * C68;
    const double C829 = C98 * C72;
    const double C828 = C142 - C192;
    const double C827 = C88 * C190;
    const double C826 = C140 - C189;
    const double C825 = C88 * C140;
    const double C824 = C98 * C68;
    const double C823 = C95 * C72;
    const double C822 = C88 * C200;
    const double C821 = C161 + C199;
    const double C820 = C88 * C161;
    const double C819 = 4 * C237;
    const double C818 = C95 * C68;
    const double C1122 = C804 * C899;
    const double C1121 = C804 * C897;
    const double C1120 = C804 * C893;
    const double C1119 = C804 * C888;
    const double C1118 = C579 * C887;
    const double C1117 = C579 * C886;
    const double C1116 = C579 * C883;
    const double C1115 = C579 * C882;
    const double C1114 = C579 * C872;
    const double C1113 = C579 * C871;
    const double C1112 = C750 * C936;
    const double C1111 = C750 * C935;
    const double C1110 = C579 * C864;
    const double C1109 = C579 * C861;
    const double C1108 = C579 * C857;
    const double C1107 = C579 * C847;
    const double C1106 = C750 * C900;
    const double C1105 = C579 * C843;
    const double C1104 = C750 * C899;
    const double C1103 = C750 * C898;
    const double C1102 = C750 * C897;
    const double C1101 = C750 * C894;
    const double C1100 = C750 * C893;
    const double C1099 = C750 * C888;
    const double C1098 = C977 + C438;
    const double C1097 = C970 + C411;
    const double C1096 = C968 + C410;
    const double C1095 = C965 + C966;
    const double C1094 = C962 + C963;
    const double C1093 = C959 + C960;
    const double C1092 = C181 + C958;
    const double C1091 = C403 * C899;
    const double C1090 = C149 + C957;
    const double C1089 = C403 * C897;
    const double C1088 = C954 + C955;
    const double C1087 = C140 + C953;
    const double C1086 = C403 * C893;
    const double C1085 = C161 + C951;
    const double C1084 = C403 * C888;
    const double C1083 = C948 + C949;
    const double C1082 = C260 * C886;
    const double C1081 = C300 + C947;
    const double C1080 = C946 - C290;
    const double C1079 = C260 * C882;
    const double C1078 = C410 + C944;
    const double C1077 = C942 - C378;
    const double C1076 = C940 + C941;
    const double C1075 = C938 - C405;
    const double C1074 = C937 - C290;
    const double C1073 = C260 * C871;
    const double C1072 = C261 * C936;
    const double C1071 = C261 * C935;
    const double C1070 = C260 * C864;
    const double C1069 = C184 + C932;
    const double C1068 = C929 + C930;
    const double C1067 = C155 + C928;
    const double C1066 = C925 + C926;
    const double C1065 = C923 + C301;
    const double C1064 = C921 + C300;
    const double C1063 = C918 + C919;
    const double C1062 = C145 + C917;
    const double C1061 = C914 + C915;
    const double C1060 = C161 + C912;
    const double C1059 = C909 + C910;
    const double C1058 = C260 * C861;
    const double C1057 = C907 + C908;
    const double C1056 = C906 - C189;
    const double C1055 = C260 * C857;
    const double C1054 = C166 + C905;
    const double C1053 = C199 + C904;
    const double C1052 = C238 + C903;
    const double C1051 = C902 - C189;
    const double C1050 = C260 * C847;
    const double C1049 = C166 + C901;
    const double C1048 = C261 * C900;
    const double C1047 = C260 * C843;
    const double C1046 = C261 * C899;
    const double C1045 = C261 * C898;
    const double C1044 = C261 * C897;
    const double C1043 = C199 + C896;
    const double C1042 = C238 + C895;
    const double C1041 = C261 * C894;
    const double C1040 = C261 * C893;
    const double C1039 = C891 - C263;
    const double C1038 = C889 + C890;
    const double C1037 = C261 * C888;
    const double C1036 = C59 * C887;
    const double C1035 = C59 * C886;
    const double C1034 = C885 - C193;
    const double C1033 = C173 + C884;
    const double C1032 = C59 * C883;
    const double C1031 = C59 * C882;
    const double C1030 = C881 - C193;
    const double C1029 = C173 + C880;
    const double C1028 = C877 + C878;
    const double C1027 = C875 + C876;
    const double C1026 = C199 + C874;
    const double C1025 = C238 + C873;
    const double C1024 = C59 * C872;
    const double C1023 = C59 * C871;
    const double C1022 = C199 + C870;
    const double C1021 = C238 + C869;
    const double C1020 = C867 - C236;
    const double C1019 = C865 + C866;
    const double C1018 = C59 * C864;
    const double C1017 = C863 * C92;
    const double C1016 = C184 + C862;
    const double C1015 = C59 * C861;
    const double C1014 = C860 * C82;
    const double C1013 = C859 * C92;
    const double C1012 = C157 + C858;
    const double C1011 = C59 * C857;
    const double C1010 = C856 * C82;
    const double C1009 = C855 * C92;
    const double C1008 = C852 + C853;
    const double C1007 = C173 + C851;
    const double C1006 = C850 * C82;
    const double C1005 = C849 * C92;
    const double C1004 = C153 + C848;
    const double C1003 = C59 * C847;
    const double C1002 = C846 * C82;
    const double C1001 = C845 * C92;
    const double C1000 = C181 + C844;
    const double C999 = C59 * C843;
    const double C998 = C842 * C82;
    const double C997 = C841 * C92;
    const double C996 = C838 + C839;
    const double C995 = C166 + C837;
    const double C994 = C836 * C82;
    const double C993 = C835 * C92;
    const double C992 = C832 + C833;
    const double C991 = C173 + C831;
    const double C990 = C830 * C82;
    const double C989 = C829 * C92;
    const double C988 = C826 + C827;
    const double C987 = C166 + C825;
    const double C986 = C824 * C82;
    const double C985 = C823 * C92;
    const double C984 = C821 + C199;
    const double C983 = C819 + C820;
    const double C982 = C818 * C82;
    const double C1302 = C804 * C1057;
    const double C1301 = C623 * C1095;
    const double C1300 = C804 * C1054;
    const double C1299 = C809 * C1010;
    const double C1298 = C623 * C1094;
    const double C1297 = C804 * C1052;
    const double C1296 = C809 * C1006;
    const double C1295 = C623 * C1093;
    const double C1294 = C804 * C1049;
    const double C1293 = C809 * C1002;
    const double C1292 = C623 * C1092;
    const double C1291 = C623 * C1090;
    const double C1290 = C809 * C994;
    const double C1289 = C623 * C1088;
    const double C1288 = C804 * C1042;
    const double C1287 = C809 * C990;
    const double C1286 = C623 * C1087;
    const double C1285 = C809 * C986;
    const double C1284 = C623 * C1085;
    const double C1283 = C750 * C1083;
    const double C1282 = C579 * C1034;
    const double C1281 = C750 * C1081;
    const double C1280 = C579 * C1033;
    const double C1279 = C750 * C1080;
    const double C1278 = C579 * C1030;
    const double C1277 = C750 * C1078;
    const double C1276 = C579 * C1029;
    const double C1275 = C579 * C1028;
    const double C1274 = C750 * C1076;
    const double C1273 = C579 * C1027;
    const double C1272 = C579 * C1026;
    const double C1271 = C750 * C1075;
    const double C1270 = C579 * C1025;
    const double C1269 = C750 * C1074;
    const double C1268 = C579 * C1022;
    const double C1267 = C579 * C1021;
    const double C1266 = C579 * C1019;
    const double C1265 = C1110 + C1111;
    const double C1264 = C750 * C1059;
    const double C1263 = C750 * C1057;
    const double C1262 = C750 * C1056;
    const double C1261 = C750 * C1054;
    const double C1260 = C579 * C1010;
    const double C1259 = C750 * C1053;
    const double C1258 = C579 * C1007;
    const double C1257 = C750 * C1052;
    const double C1256 = C579 * C1006;
    const double C1255 = C750 * C1051;
    const double C1254 = C750 * C1049;
    const double C1253 = C579 * C1002;
    const double C1252 = C1105 + C1106;
    const double C1251 = C579 * C995;
    const double C1250 = C579 * C994;
    const double C1249 = C750 * C1043;
    const double C1248 = C579 * C991;
    const double C1247 = C750 * C1042;
    const double C1246 = C579 * C990;
    const double C1245 = C579 * C987;
    const double C1244 = C579 * C986;
    const double C1243 = C750 * C1038;
    const double C1242 = C579 * C983;
    const double C1241 = C93 * C1009;
    const double C1240 = C997 * C107;
    const double C1239 = C93 * C993;
    const double C1238 = C1096 + C969;
    const double C1237 = C403 * C1057;
    const double C1236 = C404 * C1095;
    const double C1235 = C403 * C1054;
    const double C1234 = C402 * C1010;
    const double C1233 = C404 * C1094;
    const double C1232 = C403 * C1052;
    const double C1231 = C402 * C1006;
    const double C1230 = C404 * C1093;
    const double C1229 = C403 * C1049;
    const double C1228 = C402 * C1002;
    const double C1227 = C404 * C1092;
    const double C1226 = C404 * C1090;
    const double C1225 = C402 * C994;
    const double C1224 = C404 * C1088;
    const double C1223 = C403 * C1042;
    const double C1222 = C402 * C990;
    const double C1221 = C404 * C1087;
    const double C1220 = C402 * C986;
    const double C1219 = C404 * C1085;
    const double C1218 = C261 * C1083;
    const double C1217 = C261 * C1081;
    const double C1216 = C260 * C1033;
    const double C1215 = C261 * C1080;
    const double C1214 = C94 * C1005;
    const double C1213 = C261 * C1078;
    const double C1212 = C260 * C1029;
    const double C1211 = C261 * C1076;
    const double C1210 = C260 * C1027;
    const double C1209 = C94 * C997;
    const double C1208 = C261 * C1075;
    const double C1207 = C260 * C1025;
    const double C1206 = C261 * C1074;
    const double C1205 = C260 * C1021;
    const double C1204 = C1070 + C1071;
    const double C1203 = C93 * C1013;
    const double C1202 = C1009 * C103;
    const double C1201 = C993 * C103;
    const double C1200 = C93 * C989;
    const double C1199 = C59 * C1069;
    const double C1198 = C88 * C1013;
    const double C1197 = C59 * C1068;
    const double C1196 = C59 * C1067;
    const double C1195 = C88 * C1005;
    const double C1194 = C59 * C1066;
    const double C1193 = C1064 + C922;
    const double C1192 = C59 * C1063;
    const double C1191 = C59 * C1062;
    const double C1190 = C59 * C1061;
    const double C1189 = C59 * C1060;
    const double C1188 = C261 * C1059;
    const double C1187 = C261 * C1057;
    const double C1186 = C261 * C1056;
    const double C1185 = C261 * C1054;
    const double C1184 = C260 * C1010;
    const double C1183 = C261 * C1053;
    const double C1182 = C260 * C1007;
    const double C1181 = C261 * C1052;
    const double C1180 = C260 * C1006;
    const double C1179 = C261 * C1051;
    const double C1178 = C261 * C1049;
    const double C1177 = C260 * C1002;
    const double C1176 = C1047 + C1048;
    const double C1175 = C260 * C995;
    const double C1174 = C260 * C994;
    const double C1173 = C261 * C1043;
    const double C1172 = C260 * C991;
    const double C1171 = C261 * C1042;
    const double C1170 = C260 * C990;
    const double C1169 = C260 * C987;
    const double C1168 = C260 * C986;
    const double C1167 = C261 * C1038;
    const double C1166 = C260 * C983;
    const double C1165 = C59 * C1034;
    const double C1164 = C59 * C1033;
    const double C1163 = C59 * C1030;
    const double C1162 = C59 * C1029;
    const double C1161 = C59 * C1028;
    const double C1160 = C59 * C1027;
    const double C1159 = C59 * C1026;
    const double C1158 = C59 * C1025;
    const double C1157 = C59 * C1022;
    const double C1156 = C59 * C1021;
    const double C1155 = C59 * C1019;
    const double C1154 = C91 + C1017;
    const double C1153 = C59 * C1016;
    const double C1152 = C1014 - C83;
    const double C1151 = C1013 * C95;
    const double C1150 = C59 * C1012;
    const double C1149 = C59 * C1010;
    const double C1148 = C88 * C1009;
    const double C1147 = C59 * C1008;
    const double C1146 = C59 * C1007;
    const double C1145 = C59 * C1006;
    const double C1144 = C1005 * C95;
    const double C1143 = C59 * C1004;
    const double C1142 = C59 * C1002;
    const double C1141 = C91 + C1001;
    const double C1140 = C59 * C1000;
    const double C1139 = C998 - C83;
    const double C1138 = C88 * C997;
    const double C1137 = C59 * C996;
    const double C1136 = C59 * C995;
    const double C1135 = C59 * C994;
    const double C1134 = C88 * C993;
    const double C1133 = C59 * C992;
    const double C1132 = C59 * C991;
    const double C1131 = C59 * C990;
    const double C1130 = C88 * C989;
    const double C1129 = C59 * C988;
    const double C1128 = C59 * C987;
    const double C1127 = C59 * C986;
    const double C1126 = C91 + C985;
    const double C1125 = C984 + C822;
    const double C1124 = C59 * C983;
    const double C1123 = C982 - C83;
    const double C1408 = C623 * C1238;
    const double C1407 = C809 * C1152;
    const double C1406 = C1299 + C1300;
    const double C1405 = C1296 + C1297;
    const double C1404 = C1293 + C1294;
    const double C1403 = C809 * C1139;
    const double C1402 = C1290 + C1121;
    const double C1401 = C1287 + C1288;
    const double C1400 = C1285 + C1120;
    const double C1399 = C809 * C1123;
    const double C1398 = C1117 + C1283;
    const double C1397 = C1280 + C1281;
    const double C1396 = C1115 + C1279;
    const double C1395 = C1276 + C1277;
    const double C1394 = C1273 + C1274;
    const double C1393 = C1270 + C1271;
    const double C1392 = C1113 + C1269;
    const double C1391 = C1267 + C1112;
    const double C1390 = C1109 + C1264;
    const double C1389 = C579 * C1152;
    const double C1388 = C1108 + C1262;
    const double C1387 = C1260 + C1261;
    const double C1386 = C1258 + C1259;
    const double C1385 = C1256 + C1257;
    const double C1384 = C1107 + C1255;
    const double C1383 = C1253 + C1254;
    const double C1382 = C579 * C1139;
    const double C1381 = C1251 + C1103;
    const double C1380 = C1250 + C1102;
    const double C1379 = C1248 + C1249;
    const double C1378 = C1246 + C1247;
    const double C1377 = C1245 + C1101;
    const double C1376 = C1244 + C1100;
    const double C1375 = C1242 + C1243;
    const double C1374 = C579 * C1123;
    const double C1373 = C93 * C1154;
    const double C1372 = C94 * C1241;
    const double C1371 = C1141 * C107;
    const double C1370 = C150 + C1240;
    const double C1369 = C94 * C1239;
    const double C1368 = C404 * C1238;
    const double C1367 = C402 * C1152;
    const double C1366 = C94 * C1198;
    const double C1365 = C1234 + C1235;
    const double C1364 = C1231 + C1232;
    const double C1363 = C94 * C1195;
    const double C1362 = C1228 + C1229;
    const double C1361 = C402 * C1139;
    const double C1360 = C1225 + C1089;
    const double C1359 = C1222 + C1223;
    const double C1358 = C1220 + C1086;
    const double C1357 = C1126 * C107;
    const double C1356 = C402 * C1123;
    const double C1355 = C1082 + C1218;
    const double C1354 = C1216 + C1217;
    const double C1353 = C1079 + C1215;
    const double C1352 = C172 + C1214;
    const double C1351 = C1212 + C1213;
    const double C1350 = C94 * C1141;
    const double C1349 = C1210 + C1211;
    const double C1348 = C93 * C1209;
    const double C1347 = C1207 + C1208;
    const double C1346 = C1073 + C1206;
    const double C1345 = C1205 + C1072;
    const double C1344 = C1154 * C103;
    const double C1343 = C179 + C1203;
    const double C1342 = C156 + C1202;
    const double C1341 = C147 + C1201;
    const double C1340 = C331 + C1200;
    const double C1339 = C88 * C1154;
    const double C1338 = C93 * C1198;
    const double C1337 = C93 * C1195;
    const double C1336 = C88 * C1141;
    const double C1335 = C59 * C1193;
    const double C1334 = C1126 * C103;
    const double C1333 = C1058 + C1188;
    const double C1332 = C260 * C1152;
    const double C1331 = C1055 + C1186;
    const double C1330 = C1184 + C1185;
    const double C1329 = C1182 + C1183;
    const double C1328 = C1180 + C1181;
    const double C1327 = C1050 + C1179;
    const double C1326 = C1177 + C1178;
    const double C1325 = C260 * C1139;
    const double C1324 = C1175 + C1045;
    const double C1323 = C1174 + C1044;
    const double C1322 = C1172 + C1173;
    const double C1321 = C1170 + C1171;
    const double C1320 = C1169 + C1041;
    const double C1319 = C1168 + C1040;
    const double C1318 = C94 * C1126;
    const double C1317 = C1166 + C1167;
    const double C1316 = C260 * C1123;
    const double C1315 = C93 * C1126;
    const double C1314 = C1154 * C95;
    const double C1313 = C59 * C1152;
    const double C1312 = C158 + C1151;
    const double C1311 = C179 + C1148;
    const double C1310 = C154 + C1144;
    const double C1309 = C1141 * C95;
    const double C1308 = C59 * C1139;
    const double C1307 = C172 + C1138;
    const double C1306 = C179 + C1134;
    const double C1305 = C172 + C1130;
    const double C1304 = C59 * C1125;
    const double C1303 = C59 * C1123;
    const double C1485 = C1407 + C1302;
    const double C1484 = C1406 + C1301;
    const double C1483 = C1405 + C1298;
    const double C1482 = C1404 + C1295;
    const double C1481 = C1403 + C1122;
    const double C1480 = C1402 + C1291;
    const double C1479 = C1401 + C1289;
    const double C1478 = C1400 + C1286;
    const double C1477 = C1399 + C1119;
    const double C1476 = C1389 + C1263;
    const double C1475 = C1382 + C1104;
    const double C1474 = C1374 + C1099;
    const double C1473 = C93 * C1339;
    const double C1472 = C93 * C1311;
    const double C1471 = C94 * C1336;
    const double C1470 = C94 * C1307;
    const double C1469 = C93 * C1306;
    const double C1468 = C94 * C1315;
    const double C1467 = C94 * C1373;
    const double C1466 = C94 * C1343;
    const double C1465 = C1372 - C330;
    const double C1464 = C94 * C1352;
    const double C1463 = C182 + C1371;
    const double C1462 = C93 * C1370;
    const double C1461 = C1369 - C330;
    const double C1460 = C1340 * C107;
    const double C1459 = C1315 * C107;
    const double C1458 = C94 * C1339;
    const double C1457 = C1367 + C1237;
    const double C1456 = C1366 - C192;
    const double C1455 = C1365 + C1236;
    const double C1454 = C94 * C1311;
    const double C1453 = C1364 + C1233;
    const double C1452 = C1363 - C192;
    const double C1451 = C1362 + C1230;
    const double C1450 = C1336 * C107;
    const double C1449 = C1361 + C1091;
    const double C1448 = C1307 * C107;
    const double C1447 = C1360 + C1226;
    const double C1446 = C94 * C1306;
    const double C1445 = C1359 + C1224;
    const double C1444 = C1305 * C107;
    const double C1443 = C1358 + C1221;
    const double C1442 = C164 + C1357;
    const double C1441 = C1356 + C1084;
    const double C1440 = C94 * C1342;
    const double C1439 = C93 * C1352;
    const double C1438 = C93 * C1350;
    const double C1437 = C1348 - C466;
    const double C1436 = C94 * C1341;
    const double C1435 = C185 + C1344;
    const double C1434 = C93 * C1343;
    const double C1433 = C93 * C1340;
    const double C1432 = C1339 * C103;
    const double C1431 = C1338 - C196;
    const double C1430 = C1311 * C103;
    const double C1429 = C1337 - C196;
    const double C1428 = C93 * C1336;
    const double C1427 = C93 * C1307;
    const double C1426 = C1306 * C103;
    const double C1425 = C93 * C1305;
    const double C1424 = C164 + C1334;
    const double C1423 = C1332 + C1187;
    const double C1422 = C94 * C1312;
    const double C1421 = C94 * C1310;
    const double C1420 = C1325 + C1046;
    const double C1419 = C88 * C1318;
    const double C1418 = C1316 + C1037;
    const double C1417 = C93 * C1312;
    const double C1416 = C93 * C1310;
    const double C1415 = C88 * C1315;
    const double C1414 = C185 + C1314;
    const double C1413 = C88 * C1311;
    const double C1412 = C182 + C1309;
    const double C1411 = C88 * C1307;
    const double C1410 = C88 * C1306;
    const double C1409 = C88 * C1305;
    const double C1549 = C1485 + C1408;
    const double C1548 = C1481 + C1292;
    const double C1547 = C1477 + C1284;
    const double C1546 = C94 * C1473;
    const double C1545 = C94 * C1431;
    const double C1544 = C94 * C1472;
    const double C1543 = C93 * C1452;
    const double C1542 = C93 * C1471;
    const double C1541 = C93 * C1470;
    const double C1540 = C94 * C1469;
    const double C1539 = C88 * C1468;
    const double C1538 = C978 + C1467;
    const double C1537 = C346 + C1466;
    const double C1536 = C94 * C1465;
    const double C1535 = C974 + C1464;
    const double C1534 = C93 * C1463;
    const double C1533 = C1462 - C483;
    const double C1532 = C94 * C1461;
    const double C1531 = C341 + C1460;
    const double C1530 = C235 + C1459;
    const double C1529 = C971 + C1458;
    const double C1528 = C1457 + C1368;
    const double C1527 = C94 * C1456;
    const double C1526 = C202 + C1454;
    const double C1525 = C94 * C1452;
    const double C1524 = C293 + C1450;
    const double C1523 = C1449 + C1227;
    const double C1522 = C197 + C1448;
    const double C1521 = C202 + C1446;
    const double C1520 = C190 + C1444;
    const double C1519 = C88 * C1442;
    const double C1518 = C1441 + C1219;
    const double C1517 = C94 * C1435;
    const double C1516 = C1440 - C350;
    const double C1515 = C482 + C1439;
    const double C1514 = C943 + C1438;
    const double C1513 = C93 * C1437;
    const double C1512 = C1436 - C350;
    const double C1511 = C94 * C1424;
    const double C1510 = C934 + C1434;
    const double C1509 = C933 + C1433;
    const double C1508 = C299 + C1432;
    const double C1507 = C93 * C1431;
    const double C1506 = C198 + C1430;
    const double C1505 = C93 * C1429;
    const double C1504 = C924 + C1428;
    const double C1503 = C202 + C1427;
    const double C1502 = C194 + C1426;
    const double C1501 = C202 + C1425;
    const double C1500 = C88 * C1424;
    const double C1499 = C94 * C1414;
    const double C1498 = C1422 - C203;
    const double C1497 = C1421 - C203;
    const double C1496 = C94 * C1412;
    const double C1495 = C892 + C1419;
    const double C1494 = C93 * C1414;
    const double C1493 = C1417 - C204;
    const double C1492 = C1416 - C204;
    const double C1491 = C93 * C1412;
    const double C1490 = C868 + C1415;
    const double C1489 = C854 + C1413;
    const double C1488 = C840 + C1411;
    const double C1487 = C834 + C1410;
    const double C1486 = C828 + C1409;
    const double C1600 = C981 + C1546;
    const double C1599 = C301 + C1545;
    const double C1598 = C1544 - C236;
    const double C1597 = C411 + C1543;
    const double C1596 = C980 + C1542;
    const double C1595 = C1541 - C263;
    const double C1594 = C1540 - C236;
    const double C1593 = C94 * C1501;
    const double C1592 = C979 + C1539;
    const double C1591 = C94 * C1538;
    const double C1590 = C94 * C1537;
    const double C1589 = C975 + C1536;
    const double C1588 = C93 * C1535;
    const double C1587 = C973 + C1534;
    const double C1586 = C972 + C1532;
    const double C1585 = C94 * C1529;
    const double C1584 = C967 + C1527;
    const double C1583 = C94 * C1526;
    const double C1582 = C961 + C1525;
    const double C1581 = C94 * C1521;
    const double C1580 = C952 + C1519;
    const double C1579 = C950 + C1517;
    const double C1578 = C94 * C1510;
    const double C1577 = C93 * C1515;
    const double C1576 = C93 * C1514;
    const double C1575 = C939 + C1513;
    const double C1574 = C94 * C1509;
    const double C1573 = C59 * C1508;
    const double C1572 = C931 + C1507;
    const double C1571 = C59 * C1506;
    const double C1570 = C927 + C1505;
    const double C1569 = C93 * C1504;
    const double C1568 = C93 * C1503;
    const double C1567 = C59 * C1502;
    const double C1566 = C93 * C1501;
    const double C1565 = C913 + C1500;
    const double C1564 = C911 + C1499;
    const double C1563 = C94 * C1489;
    const double C1562 = C94 * C1488;
    const double C1561 = C94 * C1487;
    const double C1560 = C94 * C1486;
    const double C1559 = C88 * C1495;
    const double C1558 = C59 * C1494;
    const double C1557 = C59 * C1493;
    const double C1556 = C93 * C1489;
    const double C1555 = C59 * C1492;
    const double C1554 = C879 + C1491;
    const double C1553 = C93 * C1488;
    const double C1552 = C93 * C1487;
    const double C1551 = C93 * C1486;
    const double C1550 = C88 * C1490;
    const double C1633 = C750 * C1600;
    const double C1632 = C750 * C1599;
    const double C1631 = C750 * C1598;
    const double C1630 = C750 * C1597;
    const double C1629 = C750 * C1596;
    const double C1628 = C750 * C1595;
    const double C1627 = C750 * C1594;
    const double C1626 = C750 * C1593;
    const double C1625 = C750 * C1592;
    const double C1624 = C1098 + C1591;
    const double C1623 = C976 + C1590;
    const double C1622 = C487 + C1588;
    const double C1621 = C1097 + C1585;
    const double C1620 = C964 + C1583;
    const double C1619 = C956 + C1581;
    const double C1618 = C354 + C1578;
    const double C1617 = C945 + C1577;
    const double C1616 = C1077 + C1576;
    const double C1615 = C59 * C1572;
    const double C1614 = C59 * C1570;
    const double C1613 = C1065 + C1569;
    const double C1612 = C920 + C1568;
    const double C1611 = C916 + C1566;
    const double C1610 = C59 * C1565;
    const double C1609 = C207 + C1563;
    const double C1608 = C207 + C1561;
    const double C1607 = C1039 + C1559;
    const double C1606 = C59 * C1556;
    const double C1605 = C59 * C1554;
    const double C1604 = C207 + C1553;
    const double C1603 = C59 * C1552;
    const double C1602 = C207 + C1551;
    const double C1601 = C1020 + C1550;
    const double C1648 = C1118 + C1633;
    const double C1647 = C1282 + C1632;
    const double C1646 = C1116 + C1631;
    const double C1645 = C1278 + C1630;
    const double C1644 = C1275 + C1629;
    const double C1643 = C1272 + C1628;
    const double C1642 = C1114 + C1627;
    const double C1641 = C1268 + C1626;
    const double C1640 = C1266 + C1625;
    const double C1639 = C59 * C1613;
    const double C1638 = C59 * C1612;
    const double C1637 = C59 * C1611;
    const double C1636 = C59 * C1604;
    const double C1635 = C59 * C1602;
    const double C1634 = C59 * C1601;
    const double d2nexx200100 =
        (2 * Pi *
         (C1303 * C60 * C61 + C1124 * C60 * C62 + C1304 * C60 * C63 +
          C59 *
              (2 * C200 + C207 + C207 +
               C88 * (C164 + C202 + C202 + C88 * (-4 * C138 + C88 * C1126))) *
              C60 * C64)) /
        C67;
    const double d2nexx200010 = (2 * Pi *
                                 ((C1303 * C229 + C1018 * C230) * C231 +
                                  (C1124 * C229 + C1155 * C230) * C232 +
                                  (C1304 * C229 + C1634 * C230) * C233)) /
                                C67;
    const double d2nexx200001 = (2 * Pi *
                                 (C1418 * C60 * C231 + C1317 * C60 * C232 +
                                  (C260 * C1125 + C261 * C1607) * C60 * C233)) /
                                C67;
    const double d2nexx020100 =
        (2 * Pi *
         ((C1303 * C285 + C1018 * C286 + C1189 * C287) * C772 +
          (C1124 * C285 + C1155 * C286 + C1610 * C287) * C703)) /
        C67;
    const double d2nexx020010 = (2 * Pi *
                                 (C1303 * C323 + C1018 * C324 + C1189 * C325 +
                                  C59 * (2 * C235 + C93 * C1424) * C326) *
                                 C698) /
                                C67;
    const double d2nexx020001 =
        (2 * Pi *
         (C1418 * C285 + C1204 * C286 + (C260 * C1060 + C261 * C1511) * C287) *
         C698) /
        C67;
    const double d2nexx002100 =
        (2 * Pi *
         (C1518 * C60 * C772 +
          (C402 * C983 + C403 * C1038 + C404 * C1580) * C60 * C703)) /
        C67;
    const double d2nexx002010 =
        (2 * Pi *
         (C1518 * C229 + (C402 * C864 + C403 * C935 + C404 * C1530) * C230) *
         C698) /
        C67;
    const double d2nexx002001 = (2 * Pi *
                                 (C460 * C1123 + C461 * C888 + C462 * C1085 +
                                  C463 * (2 * C262 + C94 * C1442)) *
                                 C60 * C698) /
                                C67;
    const double d2nexx110100 = (2 * Pi *
                                 ((C1303 * C509 + C1018 * C732) * C805 +
                                  (C1124 * C509 + C1155 * C732) * C796 +
                                  (C1304 * C509 + C1634 * C732) * C513)) /
                                C67;
    const double d2nexx110010 =
        (2 * Pi *
         ((C1303 * C808 + C1018 * C801 + C1189 * C536) * C537 +
          (C1124 * C808 + C1155 * C801 + C1610 * C536) * C703)) /
        C67;
    const double d2nexx110001 =
        (2 * Pi *
         ((C1418 * C509 + C1204 * C732) * C537 +
          (C1317 * C509 + (C260 * C1019 + C261 * C1592) * C732) * C703)) /
        C67;
    const double d2nexx101100 = (2 * Pi *
                                 (C1474 * C60 * C805 + C1375 * C60 * C796 +
                                  (C579 * C1125 + C750 * C1607) * C60 * C513)) /
                                C67;
    const double d2nexx101010 = (2 * Pi *
                                 ((C1474 * C229 + C1265 * C230) * C537 +
                                  (C1375 * C229 + C1640 * C230) * C703)) /
                                C67;
    const double d2nexx101001 =
        (2 * Pi *
         (C1547 * C60 * C537 +
          (C809 * C983 + C804 * C1038 + C623 * C1580) * C60 * C703)) /
        C67;
    const double d2nexx011100 = (2 * Pi *
                                 ((C1474 * C509 + C1265 * C732) * C772 +
                                  (C1375 * C509 + C1640 * C732) * C703)) /
                                C67;
    const double d2nexx011010 =
        (2 * Pi *
         (C1474 * C808 + C1265 * C801 + (C579 * C1060 + C750 * C1511) * C536) *
         C698) /
        C67;
    const double d2nexx011001 =
        (2 * Pi *
         (C1547 * C509 + (C809 * C864 + C804 * C935 + C623 * C1530) * C732) *
         C698) /
        C67;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx110100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx110010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexx110001;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx011100;
    d2nexx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx011010;
    d2nexx[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexx011001;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexx200100 - 0.5 * d2nexx020100 + d2nexx002100;
    d2nexx[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nexx200010 - 0.5 * d2nexx020010 + d2nexx002010;
    d2nexx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx200001 - 0.5 * d2nexx020001 + d2nexx002001;
    d2nexx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx101100;
    d2nexx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx101010;
    d2nexx[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexx101001;
    d2nexx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexx200100 - std::sqrt(0.75) * d2nexx020100;
    d2nexx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nexx200010 - std::sqrt(0.75) * d2nexx020010;
    d2nexx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexx200001 - std::sqrt(0.75) * d2nexx020001;
    const double d2nexy200100 =
        (2 * Pi *
         (C1127 * C60 * C61 + C1128 * C60 * C62 + C1129 * C60 * C63 +
          C59 * (2 * C190 - C203 + C88 * C1486) * C60 * C64)) /
        C67;
    const double d2nexy200010 = (2 * Pi *
                                 ((C1127 * C229 + C1156 * C230) * C231 +
                                  (C1128 * C229 + C1157 * C230) * C232 +
                                  (C1129 * C229 + C1635 * C230) * C233)) /
                                C67;
    const double d2nexy200001 = (2 * Pi *
                                 (C1319 * C60 * C231 + C1320 * C60 * C232 +
                                  (C260 * C988 + C261 * C1560) * C60 * C233)) /
                                C67;
    const double d2nexy020100 =
        (2 * Pi *
         ((C1127 * C285 + C1156 * C286 + C1190 * C287) * C772 +
          (C1128 * C285 + C1157 * C286 + C1637 * C287) * C703)) /
        C67;
    const double d2nexy020010 =
        (2 * Pi *
         (C1127 * C323 + C1156 * C324 + C1190 * C325 +
          C59 * (2 * C341 - C350 + C93 * C1509) * C326) *
         C698) /
        C67;
    const double d2nexy020001 =
        (2 * Pi *
         (C1319 * C285 + C1345 * C286 + (C260 * C1061 + C261 * C1574) * C287) *
         C698) /
        C67;
    const double d2nexy002100 =
        (2 * Pi *
         (C1443 * C60 * C772 +
          (C402 * C987 + C403 * C894 + C404 * C1520) * C60 * C703)) /
        C67;
    const double d2nexy002010 =
        (2 * Pi *
         (C1443 * C229 + (C402 * C1021 + C403 * C936 + C404 * C1531) * C230) *
         C698) /
        C67;
    const double d2nexy002001 =
        (2 * Pi *
         (C460 * C986 + C461 * C893 + C462 * C1087 +
          C463 * (2 * C94 * C142 + C94 * (C142 + C989 * C107))) *
         C60 * C698) /
        C67;
    const double d2nexy110100 = (2 * Pi *
                                 ((C1127 * C509 + C1156 * C732) * C805 +
                                  (C1128 * C509 + C1157 * C732) * C796 +
                                  (C1129 * C509 + C1635 * C732) * C513)) /
                                C67;
    const double d2nexy110010 =
        (2 * Pi *
         ((C1127 * C808 + C1156 * C801 + C1190 * C536) * C537 +
          (C1128 * C808 + C1157 * C801 + C1637 * C536) * C703)) /
        C67;
    const double d2nexy110001 =
        (2 * Pi *
         ((C1319 * C509 + C1345 * C732) * C537 +
          (C1320 * C509 + (C260 * C1022 + C261 * C1593) * C732) * C703)) /
        C67;
    const double d2nexy101100 = (2 * Pi *
                                 (C1376 * C60 * C805 + C1377 * C60 * C796 +
                                  (C579 * C988 + C750 * C1560) * C60 * C513)) /
                                C67;
    const double d2nexy101010 = (2 * Pi *
                                 ((C1376 * C229 + C1391 * C230) * C537 +
                                  (C1377 * C229 + C1641 * C230) * C703)) /
                                C67;
    const double d2nexy101001 =
        (2 * Pi *
         (C1478 * C60 * C537 +
          (C809 * C987 + C804 * C894 + C623 * C1520) * C60 * C703)) /
        C67;
    const double d2nexy011100 = (2 * Pi *
                                 ((C1376 * C509 + C1391 * C732) * C772 +
                                  (C1377 * C509 + C1641 * C732) * C703)) /
                                C67;
    const double d2nexy011010 =
        (2 * Pi *
         (C1376 * C808 + C1391 * C801 + (C579 * C1061 + C750 * C1574) * C536) *
         C698) /
        C67;
    const double d2nexy011001 =
        (2 * Pi *
         (C1478 * C509 + (C809 * C1021 + C804 * C936 + C623 * C1531) * C732) *
         C698) /
        C67;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy110100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy110010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexy110001;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy011100;
    d2nexy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy011010;
    d2nexy[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexy011001;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexy200100 - 0.5 * d2nexy020100 + d2nexy002100;
    d2nexy[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nexy200010 - 0.5 * d2nexy020010 + d2nexy002010;
    d2nexy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy200001 - 0.5 * d2nexy020001 + d2nexy002001;
    d2nexy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy101100;
    d2nexy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy101010;
    d2nexy[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexy101001;
    d2nexy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexy200100 - std::sqrt(0.75) * d2nexy020100;
    d2nexy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nexy200010 - std::sqrt(0.75) * d2nexy020010;
    d2nexy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexy200001 - std::sqrt(0.75) * d2nexy020001;
    const double d2nexz200100 =
        (2 * Pi *
         (C1131 * C60 * C61 + C1132 * C60 * C62 + C1133 * C60 * C63 +
          C59 * (2 * C194 - C204 + C88 * C1487) * C60 * C64)) /
        C67;
    const double d2nexz200010 = (2 * Pi *
                                 ((C1131 * C229 + C1023 * C230) * C231 +
                                  (C1132 * C229 + C1024 * C230) * C232 +
                                  (C1133 * C229 + C1603 * C230) * C233)) /
                                C67;
    const double d2nexz200001 = (2 * Pi *
                                 (C1321 * C60 * C231 + C1322 * C60 * C232 +
                                  (C260 * C992 + C261 * C1608) * C60 * C233)) /
                                C67;
    const double d2nexz020100 =
        (2 * Pi *
         ((C1131 * C285 + C1023 * C286 + C1191 * C287) * C772 +
          (C1132 * C285 + C1024 * C286 + C1567 * C287) * C703)) /
        C67;
    const double d2nexz020010 = (2 * Pi *
                                 (C1131 * C323 + C1023 * C324 + C1191 * C325 +
                                  C59 * (2 * C433 + C93 * C1341) * C326) *
                                 C698) /
                                C67;
    const double d2nexz020001 =
        (2 * Pi *
         (C1321 * C285 + C1346 * C286 + (C260 * C1062 + C261 * C1512) * C287) *
         C698) /
        C67;
    const double d2nexz002100 =
        (2 * Pi *
         (C1445 * C60 * C772 +
          (C402 * C991 + C403 * C1043 + C404 * C1619) * C60 * C703)) /
        C67;
    const double d2nexz002010 =
        (2 * Pi *
         (C1445 * C229 + (C402 * C871 + C403 * C1074 + C404 * C1586) * C230) *
         C698) /
        C67;
    const double d2nexz002001 =
        (2 * Pi *
         (C460 * C990 + C461 * C1042 + C462 * C1088 +
          C463 * (2 * C475 - C483 +
                  C94 * (C147 - C466 + C94 * (C331 + C94 * C993)))) *
         C60 * C698) /
        C67;
    const double d2nexz110100 = (2 * Pi *
                                 ((C1131 * C509 + C1023 * C732) * C805 +
                                  (C1132 * C509 + C1024 * C732) * C796 +
                                  (C1133 * C509 + C1603 * C732) * C513)) /
                                C67;
    const double d2nexz110010 =
        (2 * Pi *
         ((C1131 * C808 + C1023 * C801 + C1191 * C536) * C537 +
          (C1132 * C808 + C1024 * C801 + C1567 * C536) * C703)) /
        C67;
    const double d2nexz110001 =
        (2 * Pi *
         ((C1321 * C509 + C1346 * C732) * C537 +
          (C1322 * C509 + (C260 * C872 + C261 * C1594) * C732) * C703)) /
        C67;
    const double d2nexz101100 = (2 * Pi *
                                 (C1378 * C60 * C805 + C1379 * C60 * C796 +
                                  (C579 * C992 + C750 * C1608) * C60 * C513)) /
                                C67;
    const double d2nexz101010 = (2 * Pi *
                                 ((C1378 * C229 + C1392 * C230) * C537 +
                                  (C1379 * C229 + C1642 * C230) * C703)) /
                                C67;
    const double d2nexz101001 =
        (2 * Pi *
         (C1479 * C60 * C537 +
          (C809 * C991 + C804 * C1043 + C623 * C1619) * C60 * C703)) /
        C67;
    const double d2nexz011100 = (2 * Pi *
                                 ((C1378 * C509 + C1392 * C732) * C772 +
                                  (C1379 * C509 + C1642 * C732) * C703)) /
                                C67;
    const double d2nexz011010 =
        (2 * Pi *
         (C1378 * C808 + C1392 * C801 + (C579 * C1062 + C750 * C1512) * C536) *
         C698) /
        C67;
    const double d2nexz011001 =
        (2 * Pi *
         (C1479 * C509 + (C809 * C871 + C804 * C1074 + C623 * C1586) * C732) *
         C698) /
        C67;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz110100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz110010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexz110001;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz011100;
    d2nexz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz011010;
    d2nexz[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexz011001;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexz200100 - 0.5 * d2nexz020100 + d2nexz002100;
    d2nexz[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nexz200010 - 0.5 * d2nexz020010 + d2nexz002010;
    d2nexz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz200001 - 0.5 * d2nexz020001 + d2nexz002001;
    d2nexz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz101100;
    d2nexz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz101010;
    d2nexz[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexz101001;
    d2nexz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexz200100 - std::sqrt(0.75) * d2nexz020100;
    d2nexz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nexz200010 - std::sqrt(0.75) * d2nexz020010;
    d2nexz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexz200001 - std::sqrt(0.75) * d2nexz020001;
    const double d2neyx200100 =
        (2 * Pi *
         (C1135 * C60 * C61 + C1136 * C60 * C62 + C1137 * C60 * C63 +
          C59 * (2 * C197 - C203 + C88 * C1488) * C60 * C64)) /
        C67;
    const double d2neyx200010 = (2 * Pi *
                                 ((C1135 * C229 + C1158 * C230) * C231 +
                                  (C1136 * C229 + C1159 * C230) * C232 +
                                  (C1137 * C229 + C1636 * C230) * C233)) /
                                C67;
    const double d2neyx200001 = (2 * Pi *
                                 (C1323 * C60 * C231 + C1324 * C60 * C232 +
                                  (C260 * C996 + C261 * C1562) * C60 * C233)) /
                                C67;
    const double d2neyx020100 =
        (2 * Pi *
         ((C1135 * C285 + C1158 * C286 + C1192 * C287) * C772 +
          (C1136 * C285 + C1159 * C286 + C1638 * C287) * C703)) /
        C67;
    const double d2neyx020010 =
        (2 * Pi *
         (C1135 * C323 + C1158 * C324 + C1192 * C325 +
          C59 *
              (2 * C343 - C350 +
               C93 * (C150 - C330 + C93 * (C331 + C93 * C997))) *
              C326) *
         C698) /
        C67;
    const double d2neyx020001 =
        (2 * Pi *
         (C1323 * C285 + C1347 * C286 + (C260 * C1063 + C261 * C1575) * C287) *
         C698) /
        C67;
    const double d2neyx002100 =
        (2 * Pi *
         (C1447 * C60 * C772 +
          (C402 * C995 + C403 * C898 + C404 * C1522) * C60 * C703)) /
        C67;
    const double d2neyx002010 =
        (2 * Pi *
         (C1447 * C229 + (C402 * C1025 + C403 * C1075 + C404 * C1533) * C230) *
         C698) /
        C67;
    const double d2neyx002001 = (2 * Pi *
                                 (C460 * C994 + C461 * C897 + C462 * C1090 +
                                  C463 * (2 * C376 + C94 * C1370)) *
                                 C60 * C698) /
                                C67;
    const double d2neyx110100 = (2 * Pi *
                                 ((C1135 * C509 + C1158 * C732) * C805 +
                                  (C1136 * C509 + C1159 * C732) * C796 +
                                  (C1137 * C509 + C1636 * C732) * C513)) /
                                C67;
    const double d2neyx110010 =
        (2 * Pi *
         ((C1135 * C808 + C1158 * C801 + C1192 * C536) * C537 +
          (C1136 * C808 + C1159 * C801 + C1638 * C536) * C703)) /
        C67;
    const double d2neyx110001 =
        (2 * Pi *
         ((C1323 * C509 + C1347 * C732) * C537 +
          (C1324 * C509 + (C260 * C1026 + C261 * C1595) * C732) * C703)) /
        C67;
    const double d2neyx101100 = (2 * Pi *
                                 (C1380 * C60 * C805 + C1381 * C60 * C796 +
                                  (C579 * C996 + C750 * C1562) * C60 * C513)) /
                                C67;
    const double d2neyx101010 = (2 * Pi *
                                 ((C1380 * C229 + C1393 * C230) * C537 +
                                  (C1381 * C229 + C1643 * C230) * C703)) /
                                C67;
    const double d2neyx101001 =
        (2 * Pi *
         (C1480 * C60 * C537 +
          (C809 * C995 + C804 * C898 + C623 * C1522) * C60 * C703)) /
        C67;
    const double d2neyx011100 = (2 * Pi *
                                 ((C1380 * C509 + C1393 * C732) * C772 +
                                  (C1381 * C509 + C1643 * C732) * C703)) /
                                C67;
    const double d2neyx011010 =
        (2 * Pi *
         (C1380 * C808 + C1393 * C801 + (C579 * C1063 + C750 * C1575) * C536) *
         C698) /
        C67;
    const double d2neyx011001 =
        (2 * Pi *
         (C1480 * C509 + (C809 * C1025 + C804 * C1075 + C623 * C1533) * C732) *
         C698) /
        C67;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx110100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx110010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyx110001;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx011100;
    d2neyx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx011010;
    d2neyx[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyx011001;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyx200100 - 0.5 * d2neyx020100 + d2neyx002100;
    d2neyx[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2neyx200010 - 0.5 * d2neyx020010 + d2neyx002010;
    d2neyx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx200001 - 0.5 * d2neyx020001 + d2neyx002001;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx101100;
    d2neyx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx101010;
    d2neyx[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyx101001;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyx200100 - std::sqrt(0.75) * d2neyx020100;
    d2neyx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2neyx200010 - std::sqrt(0.75) * d2neyx020010;
    d2neyx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyx200001 - std::sqrt(0.75) * d2neyx020001;
    const double d2neyy200100 =
        (2 * Pi *
         (C1308 * C60 * C61 + C999 * C60 * C62 + C1140 * C60 * C63 +
          C59 * (2 * C293 + C88 * C1412) * C60 * C64)) /
        C67;
    const double d2neyy200010 = (2 * Pi *
                                 ((C1308 * C229 + C1160 * C230) * C231 +
                                  (C999 * C229 + C1161 * C230) * C232 +
                                  (C1140 * C229 + C1605 * C230) * C233)) /
                                C67;
    const double d2neyy200001 = (2 * Pi *
                                 (C1420 * C60 * C231 + C1176 * C60 * C232 +
                                  (C260 * C1000 + C261 * C1496) * C60 * C233)) /
                                C67;
    const double d2neyy020100 =
        (2 * Pi *
         ((C1308 * C285 + C1160 * C286 + C1335 * C287) * C772 +
          (C999 * C285 + C1161 * C286 + C1639 * C287) * C703)) /
        C67;
    const double d2neyy020010 =
        (2 * Pi *
         (C1308 * C323 + C1160 * C324 + C1335 * C325 +
          C59 *
              (2 * C344 + C354 + C354 +
               C93 * (C182 + C346 + C346 + C93 * (-4 * C143 + C93 * C1141))) *
              C326) *
         C698) /
        C67;
    const double d2neyy020001 =
        (2 * Pi *
         (C1420 * C285 + C1349 * C286 + (C260 * C1193 + C261 * C1616) * C287) *
         C698) /
        C67;
    const double d2neyy002100 =
        (2 * Pi *
         (C1523 * C60 * C772 +
          (C402 * C843 + C403 * C900 + C404 * C1524) * C60 * C703)) /
        C67;
    const double d2neyy002010 =
        (2 * Pi *
         (C1523 * C229 + (C402 * C1027 + C403 * C1076 + C404 * C1587) * C230) *
         C698) /
        C67;
    const double d2neyy002001 = (2 * Pi *
                                 (C460 * C1139 + C461 * C899 + C462 * C1092 +
                                  C463 * (2 * C377 + C94 * C1463)) *
                                 C60 * C698) /
                                C67;
    const double d2neyy110100 = (2 * Pi *
                                 ((C1308 * C509 + C1160 * C732) * C805 +
                                  (C999 * C509 + C1161 * C732) * C796 +
                                  (C1140 * C509 + C1605 * C732) * C513)) /
                                C67;
    const double d2neyy110010 =
        (2 * Pi *
         ((C1308 * C808 + C1160 * C801 + C1335 * C536) * C537 +
          (C999 * C808 + C1161 * C801 + C1639 * C536) * C703)) /
        C67;
    const double d2neyy110001 =
        (2 * Pi *
         ((C1420 * C509 + C1349 * C732) * C537 +
          (C1176 * C509 + (C260 * C1028 + C261 * C1596) * C732) * C703)) /
        C67;
    const double d2neyy101100 = (2 * Pi *
                                 (C1475 * C60 * C805 + C1252 * C60 * C796 +
                                  (C579 * C1000 + C750 * C1496) * C60 * C513)) /
                                C67;
    const double d2neyy101010 = (2 * Pi *
                                 ((C1475 * C229 + C1394 * C230) * C537 +
                                  (C1252 * C229 + C1644 * C230) * C703)) /
                                C67;
    const double d2neyy101001 =
        (2 * Pi *
         (C1548 * C60 * C537 +
          (C809 * C843 + C804 * C900 + C623 * C1524) * C60 * C703)) /
        C67;
    const double d2neyy011100 = (2 * Pi *
                                 ((C1475 * C509 + C1394 * C732) * C772 +
                                  (C1252 * C509 + C1644 * C732) * C703)) /
                                C67;
    const double d2neyy011010 =
        (2 * Pi *
         (C1475 * C808 + C1394 * C801 + (C579 * C1193 + C750 * C1616) * C536) *
         C698) /
        C67;
    const double d2neyy011001 =
        (2 * Pi *
         (C1548 * C509 + (C809 * C1027 + C804 * C1076 + C623 * C1587) * C732) *
         C698) /
        C67;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy110100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy110010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyy110001;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy011100;
    d2neyy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy011010;
    d2neyy[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyy011001;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyy200100 - 0.5 * d2neyy020100 + d2neyy002100;
    d2neyy[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2neyy200010 - 0.5 * d2neyy020010 + d2neyy002010;
    d2neyy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy200001 - 0.5 * d2neyy020001 + d2neyy002001;
    d2neyy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy101100;
    d2neyy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy101010;
    d2neyy[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyy101001;
    d2neyy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyy200100 - std::sqrt(0.75) * d2neyy020100;
    d2neyy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2neyy200010 - std::sqrt(0.75) * d2neyy020010;
    d2neyy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyy200001 - std::sqrt(0.75) * d2neyy020001;
    const double d2neyz200100 =
        (2 * Pi *
         (C1142 * C60 * C61 + C1003 * C60 * C62 + C1143 * C60 * C63 +
          C59 * (2 * C296 + C88 * C1310) * C60 * C64)) /
        C67;
    const double d2neyz200010 = (2 * Pi *
                                 ((C1142 * C229 + C1162 * C230) * C231 +
                                  (C1003 * C229 + C1163 * C230) * C232 +
                                  (C1143 * C229 + C1555 * C230) * C233)) /
                                C67;
    const double d2neyz200001 = (2 * Pi *
                                 (C1326 * C60 * C231 + C1327 * C60 * C232 +
                                  (C260 * C1004 + C261 * C1497) * C60 * C233)) /
                                C67;
    const double d2neyz020100 =
        (2 * Pi *
         ((C1142 * C285 + C1162 * C286 + C1194 * C287) * C772 +
          (C1003 * C285 + C1163 * C286 + C1614 * C287) * C703)) /
        C67;
    const double d2neyz020010 =
        (2 * Pi *
         (C1142 * C323 + C1162 * C324 + C1194 * C325 +
          C59 *
              (2 * C347 - C352 +
               C93 * (C154 - C339 + C93 * (C179 + C93 * C1005))) *
              C326) *
         C698) /
        C67;
    const double d2neyz020001 =
        (2 * Pi *
         (C1326 * C285 + C1351 * C286 + (C260 * C1066 + C261 * C1617) * C287) *
         C698) /
        C67;
    const double d2neyz002100 =
        (2 * Pi *
         (C1451 * C60 * C772 +
          (C402 * C847 + C403 * C1051 + C404 * C1582) * C60 * C703)) /
        C67;
    const double d2neyz002010 =
        (2 * Pi *
         (C1451 * C229 + (C402 * C1029 + C403 * C1078 + C404 * C1622) * C230) *
         C698) /
        C67;
    const double d2neyz002001 = (2 * Pi *
                                 (C460 * C1002 + C461 * C1049 + C462 * C1093 +
                                  C463 * (2 * C380 - C484 + C94 * C1535)) *
                                 C60 * C698) /
                                C67;
    const double d2neyz110100 = (2 * Pi *
                                 ((C1142 * C509 + C1162 * C732) * C805 +
                                  (C1003 * C509 + C1163 * C732) * C796 +
                                  (C1143 * C509 + C1555 * C732) * C513)) /
                                C67;
    const double d2neyz110010 =
        (2 * Pi *
         ((C1142 * C808 + C1162 * C801 + C1194 * C536) * C537 +
          (C1003 * C808 + C1163 * C801 + C1614 * C536) * C703)) /
        C67;
    const double d2neyz110001 =
        (2 * Pi *
         ((C1326 * C509 + C1351 * C732) * C537 +
          (C1327 * C509 + (C260 * C1030 + C261 * C1597) * C732) * C703)) /
        C67;
    const double d2neyz101100 = (2 * Pi *
                                 (C1383 * C60 * C805 + C1384 * C60 * C796 +
                                  (C579 * C1004 + C750 * C1497) * C60 * C513)) /
                                C67;
    const double d2neyz101010 = (2 * Pi *
                                 ((C1383 * C229 + C1395 * C230) * C537 +
                                  (C1384 * C229 + C1645 * C230) * C703)) /
                                C67;
    const double d2neyz101001 =
        (2 * Pi *
         (C1482 * C60 * C537 +
          (C809 * C847 + C804 * C1051 + C623 * C1582) * C60 * C703)) /
        C67;
    const double d2neyz011100 = (2 * Pi *
                                 ((C1383 * C509 + C1395 * C732) * C772 +
                                  (C1384 * C509 + C1645 * C732) * C703)) /
                                C67;
    const double d2neyz011010 =
        (2 * Pi *
         (C1383 * C808 + C1395 * C801 + (C579 * C1066 + C750 * C1617) * C536) *
         C698) /
        C67;
    const double d2neyz011001 =
        (2 * Pi *
         (C1482 * C509 + (C809 * C1029 + C804 * C1078 + C623 * C1622) * C732) *
         C698) /
        C67;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz110100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz110010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyz110001;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz011100;
    d2neyz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz011010;
    d2neyz[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyz011001;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyz200100 - 0.5 * d2neyz020100 + d2neyz002100;
    d2neyz[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2neyz200010 - 0.5 * d2neyz020010 + d2neyz002010;
    d2neyz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz200001 - 0.5 * d2neyz020001 + d2neyz002001;
    d2neyz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz101100;
    d2neyz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz101010;
    d2neyz[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyz101001;
    d2neyz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyz200100 - std::sqrt(0.75) * d2neyz020100;
    d2neyz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2neyz200010 - std::sqrt(0.75) * d2neyz020010;
    d2neyz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyz200001 - std::sqrt(0.75) * d2neyz020001;
    const double d2nezx200100 =
        (2 * Pi *
         (C1145 * C60 * C61 + C1146 * C60 * C62 + C1147 * C60 * C63 +
          C59 * (2 * C198 - C204 + C88 * C1489) * C60 * C64)) /
        C67;
    const double d2nezx200010 = (2 * Pi *
                                 ((C1145 * C229 + C1031 * C230) * C231 +
                                  (C1146 * C229 + C1032 * C230) * C232 +
                                  (C1147 * C229 + C1606 * C230) * C233)) /
                                C67;
    const double d2nezx200001 = (2 * Pi *
                                 (C1328 * C60 * C231 + C1329 * C60 * C232 +
                                  (C260 * C1008 + C261 * C1609) * C60 * C233)) /
                                C67;
    const double d2nezx020100 =
        (2 * Pi *
         ((C1145 * C285 + C1031 * C286 + C1196 * C287) * C772 +
          (C1146 * C285 + C1032 * C286 + C1571 * C287) * C703)) /
        C67;
    const double d2nezx020010 = (2 * Pi *
                                 (C1145 * C323 + C1031 * C324 + C1196 * C325 +
                                  C59 * (2 * C435 + C93 * C1342) * C326) *
                                 C698) /
                                C67;
    const double d2nezx020001 =
        (2 * Pi *
         (C1328 * C285 + C1353 * C286 + (C260 * C1067 + C261 * C1516) * C287) *
         C698) /
        C67;
    const double d2nezx002100 =
        (2 * Pi *
         (C1453 * C60 * C772 +
          (C402 * C1007 + C403 * C1053 + C404 * C1620) * C60 * C703)) /
        C67;
    const double d2nezx002010 =
        (2 * Pi *
         (C1453 * C229 + (C402 * C882 + C403 * C1080 + C404 * C1589) * C230) *
         C698) /
        C67;
    const double d2nezx002001 =
        (2 * Pi *
         (C460 * C1006 + C461 * C1052 + C462 * C1094 +
          C463 * (2 * C478 - C483 +
                  C94 * (C156 - C466 + C94 * (C331 + C94 * C1009)))) *
         C60 * C698) /
        C67;
    const double d2nezx110100 = (2 * Pi *
                                 ((C1145 * C509 + C1031 * C732) * C805 +
                                  (C1146 * C509 + C1032 * C732) * C796 +
                                  (C1147 * C509 + C1606 * C732) * C513)) /
                                C67;
    const double d2nezx110010 =
        (2 * Pi *
         ((C1145 * C808 + C1031 * C801 + C1196 * C536) * C537 +
          (C1146 * C808 + C1032 * C801 + C1571 * C536) * C703)) /
        C67;
    const double d2nezx110001 =
        (2 * Pi *
         ((C1328 * C509 + C1353 * C732) * C537 +
          (C1329 * C509 + (C260 * C883 + C261 * C1598) * C732) * C703)) /
        C67;
    const double d2nezx101100 = (2 * Pi *
                                 (C1385 * C60 * C805 + C1386 * C60 * C796 +
                                  (C579 * C1008 + C750 * C1609) * C60 * C513)) /
                                C67;
    const double d2nezx101010 = (2 * Pi *
                                 ((C1385 * C229 + C1396 * C230) * C537 +
                                  (C1386 * C229 + C1646 * C230) * C703)) /
                                C67;
    const double d2nezx101001 =
        (2 * Pi *
         (C1483 * C60 * C537 +
          (C809 * C1007 + C804 * C1053 + C623 * C1620) * C60 * C703)) /
        C67;
    const double d2nezx011100 = (2 * Pi *
                                 ((C1385 * C509 + C1396 * C732) * C772 +
                                  (C1386 * C509 + C1646 * C732) * C703)) /
                                C67;
    const double d2nezx011010 =
        (2 * Pi *
         (C1385 * C808 + C1396 * C801 + (C579 * C1067 + C750 * C1516) * C536) *
         C698) /
        C67;
    const double d2nezx011001 =
        (2 * Pi *
         (C1483 * C509 + (C809 * C882 + C804 * C1080 + C623 * C1589) * C732) *
         C698) /
        C67;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx110100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx110010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezx110001;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx011100;
    d2nezx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx011010;
    d2nezx[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezx011001;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezx200100 - 0.5 * d2nezx020100 + d2nezx002100;
    d2nezx[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nezx200010 - 0.5 * d2nezx020010 + d2nezx002010;
    d2nezx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx200001 - 0.5 * d2nezx020001 + d2nezx002001;
    d2nezx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx101100;
    d2nezx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx101010;
    d2nezx[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezx101001;
    d2nezx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezx200100 - std::sqrt(0.75) * d2nezx020100;
    d2nezx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nezx200010 - std::sqrt(0.75) * d2nezx020010;
    d2nezx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezx200001 - std::sqrt(0.75) * d2nezx020001;
    const double d2nezy200100 =
        (2 * Pi *
         (C1149 * C60 * C61 + C1011 * C60 * C62 + C1150 * C60 * C63 +
          C59 * (2 * C298 + C88 * C1312) * C60 * C64)) /
        C67;
    const double d2nezy200010 = (2 * Pi *
                                 ((C1149 * C229 + C1164 * C230) * C231 +
                                  (C1011 * C229 + C1165 * C230) * C232 +
                                  (C1150 * C229 + C1557 * C230) * C233)) /
                                C67;
    const double d2nezy200001 = (2 * Pi *
                                 (C1330 * C60 * C231 + C1331 * C60 * C232 +
                                  (C260 * C1012 + C261 * C1498) * C60 * C233)) /
                                C67;
    const double d2nezy020100 =
        (2 * Pi *
         ((C1149 * C285 + C1164 * C286 + C1197 * C287) * C772 +
          (C1011 * C285 + C1165 * C286 + C1615 * C287) * C703)) /
        C67;
    const double d2nezy020010 =
        (2 * Pi *
         (C1149 * C323 + C1164 * C324 + C1197 * C325 +
          C59 * (2 * C349 - C352 + C93 * C1510) * C326) *
         C698) /
        C67;
    const double d2nezy020001 =
        (2 * Pi *
         (C1330 * C285 + C1354 * C286 + (C260 * C1068 + C261 * C1618) * C287) *
         C698) /
        C67;
    const double d2nezy002100 =
        (2 * Pi *
         (C1455 * C60 * C772 +
          (C402 * C857 + C403 * C1056 + C404 * C1584) * C60 * C703)) /
        C67;
    const double d2nezy002010 =
        (2 * Pi *
         (C1455 * C229 + (C402 * C1033 + C403 * C1081 + C404 * C1623) * C230) *
         C698) /
        C67;
    const double d2nezy002001 =
        (2 * Pi *
         (C460 * C1010 + C461 * C1054 + C462 * C1095 +
          C463 * (2 * C479 - C484 +
                  C94 * (C158 - C468 + C94 * (C172 + C94 * C1013)))) *
         C60 * C698) /
        C67;
    const double d2nezy110100 = (2 * Pi *
                                 ((C1149 * C509 + C1164 * C732) * C805 +
                                  (C1011 * C509 + C1165 * C732) * C796 +
                                  (C1150 * C509 + C1557 * C732) * C513)) /
                                C67;
    const double d2nezy110010 =
        (2 * Pi *
         ((C1149 * C808 + C1164 * C801 + C1197 * C536) * C537 +
          (C1011 * C808 + C1165 * C801 + C1615 * C536) * C703)) /
        C67;
    const double d2nezy110001 =
        (2 * Pi *
         ((C1330 * C509 + C1354 * C732) * C537 +
          (C1331 * C509 + (C260 * C1034 + C261 * C1599) * C732) * C703)) /
        C67;
    const double d2nezy101100 = (2 * Pi *
                                 (C1387 * C60 * C805 + C1388 * C60 * C796 +
                                  (C579 * C1012 + C750 * C1498) * C60 * C513)) /
                                C67;
    const double d2nezy101010 = (2 * Pi *
                                 ((C1387 * C229 + C1397 * C230) * C537 +
                                  (C1388 * C229 + C1647 * C230) * C703)) /
                                C67;
    const double d2nezy101001 =
        (2 * Pi *
         (C1484 * C60 * C537 +
          (C809 * C857 + C804 * C1056 + C623 * C1584) * C60 * C703)) /
        C67;
    const double d2nezy011100 = (2 * Pi *
                                 ((C1387 * C509 + C1397 * C732) * C772 +
                                  (C1388 * C509 + C1647 * C732) * C703)) /
                                C67;
    const double d2nezy011010 =
        (2 * Pi *
         (C1387 * C808 + C1397 * C801 + (C579 * C1068 + C750 * C1618) * C536) *
         C698) /
        C67;
    const double d2nezy011001 =
        (2 * Pi *
         (C1484 * C509 + (C809 * C1033 + C804 * C1081 + C623 * C1623) * C732) *
         C698) /
        C67;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy110100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy110010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezy110001;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy011100;
    d2nezy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy011010;
    d2nezy[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezy011001;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezy200100 - 0.5 * d2nezy020100 + d2nezy002100;
    d2nezy[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nezy200010 - 0.5 * d2nezy020010 + d2nezy002010;
    d2nezy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy200001 - 0.5 * d2nezy020001 + d2nezy002001;
    d2nezy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy101100;
    d2nezy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy101010;
    d2nezy[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezy101001;
    d2nezy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezy200100 - std::sqrt(0.75) * d2nezy020100;
    d2nezy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nezy200010 - std::sqrt(0.75) * d2nezy020010;
    d2nezy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezy200001 - std::sqrt(0.75) * d2nezy020001;
    const double d2nezz200100 =
        (2 * Pi *
         (C1313 * C60 * C61 + C1015 * C60 * C62 + C1153 * C60 * C63 +
          C59 * (2 * C299 + C88 * C1414) * C60 * C64)) /
        C67;
    const double d2nezz200010 = (2 * Pi *
                                 ((C1313 * C229 + C1035 * C230) * C231 +
                                  (C1015 * C229 + C1036 * C230) * C232 +
                                  (C1153 * C229 + C1558 * C230) * C233)) /
                                C67;
    const double d2nezz200001 = (2 * Pi *
                                 (C1423 * C60 * C231 + C1333 * C60 * C232 +
                                  (C260 * C1016 + C261 * C1564) * C60 * C233)) /
                                C67;
    const double d2nezz020100 =
        (2 * Pi *
         ((C1313 * C285 + C1035 * C286 + C1199 * C287) * C772 +
          (C1015 * C285 + C1036 * C286 + C1573 * C287) * C703)) /
        C67;
    const double d2nezz020010 = (2 * Pi *
                                 (C1313 * C323 + C1035 * C324 + C1199 * C325 +
                                  C59 * (2 * C436 + C93 * C1435) * C326) *
                                 C698) /
                                C67;
    const double d2nezz020001 =
        (2 * Pi *
         (C1423 * C285 + C1355 * C286 + (C260 * C1069 + C261 * C1579) * C287) *
         C698) /
        C67;
    const double d2nezz002100 =
        (2 * Pi *
         (C1528 * C60 * C772 +
          (C402 * C861 + C403 * C1059 + C404 * C1621) * C60 * C703)) /
        C67;
    const double d2nezz002010 =
        (2 * Pi *
         (C1528 * C229 + (C402 * C886 + C403 * C1083 + C404 * C1624) * C230) *
         C698) /
        C67;
    const double d2nezz002001 =
        (2 * Pi *
         (C460 * C1152 + C461 * C1057 + C462 * C1238 +
          C463 *
              (2 * C480 + C487 + C487 +
               C94 * (C185 + C482 + C482 + C94 * (-4 * C148 + C94 * C1154)))) *
         C60 * C698) /
        C67;
    const double d2nezz110100 = (2 * Pi *
                                 ((C1313 * C509 + C1035 * C732) * C805 +
                                  (C1015 * C509 + C1036 * C732) * C796 +
                                  (C1153 * C509 + C1558 * C732) * C513)) /
                                C67;
    const double d2nezz110010 =
        (2 * Pi *
         ((C1313 * C808 + C1035 * C801 + C1199 * C536) * C537 +
          (C1015 * C808 + C1036 * C801 + C1573 * C536) * C703)) /
        C67;
    const double d2nezz110001 =
        (2 * Pi *
         ((C1423 * C509 + C1355 * C732) * C537 +
          (C1333 * C509 + (C260 * C887 + C261 * C1600) * C732) * C703)) /
        C67;
    const double d2nezz101100 = (2 * Pi *
                                 (C1476 * C60 * C805 + C1390 * C60 * C796 +
                                  (C579 * C1016 + C750 * C1564) * C60 * C513)) /
                                C67;
    const double d2nezz101010 = (2 * Pi *
                                 ((C1476 * C229 + C1398 * C230) * C537 +
                                  (C1390 * C229 + C1648 * C230) * C703)) /
                                C67;
    const double d2nezz101001 =
        (2 * Pi *
         (C1549 * C60 * C537 +
          (C809 * C861 + C804 * C1059 + C623 * C1621) * C60 * C703)) /
        C67;
    const double d2nezz011100 = (2 * Pi *
                                 ((C1476 * C509 + C1398 * C732) * C772 +
                                  (C1390 * C509 + C1648 * C732) * C703)) /
                                C67;
    const double d2nezz011010 =
        (2 * Pi *
         (C1476 * C808 + C1398 * C801 + (C579 * C1069 + C750 * C1579) * C536) *
         C698) /
        C67;
    const double d2nezz011001 =
        (2 * Pi *
         (C1549 * C509 + (C809 * C886 + C804 * C1083 + C623 * C1624) * C732) *
         C698) /
        C67;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz110100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz110010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezz110001;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz011100;
    d2nezz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz011010;
    d2nezz[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezz011001;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezz200100 - 0.5 * d2nezz020100 + d2nezz002100;
    d2nezz[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nezz200010 - 0.5 * d2nezz020010 + d2nezz002010;
    d2nezz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz200001 - 0.5 * d2nezz020001 + d2nezz002001;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz101100;
    d2nezz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz101010;
    d2nezz[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezz101001;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezz200100 - std::sqrt(0.75) * d2nezz020100;
    d2nezz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nezz200010 - std::sqrt(0.75) * d2nezz020010;
    d2nezz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezz200001 - std::sqrt(0.75) * d2nezz020001;
}
